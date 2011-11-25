;; File: dcr.s

;; Front end.

(define (make-decorated-program core-pgm)

  (define (mk-pgm ldf* adt* od* def*)
    `(,ldf* ,adt* ,od* ,def* ,#f))

  (define (pgm/lam*! pgm v) (list-set! pgm 4 v))

  (define (mk-def name formals body)
    ;; 0     1    2        3
    ;; acsp  btp  unfold?  ret-bt
    `(,name ,(make-vector 4) ,formals ,body))

  (define (mk-cst value)
    `(quote ,(make-vector 2) ,value))

  (define (mk-ide name)
    `(ide ,(make-vector 2) ,name))

  (define (ide/name e)
    (with (( ('ide _ name) e )) name))

  (define (mk-if e1 e2 e3)
    `(if ,(make-vector 2) ,e1 ,e2 ,e3))

  (define (mk-let formal actual body)
    ;; 0   1  2
    ;; acs bt unfold?
    `(let ,(make-vector 3)  ,formal ,actual ,body))

  (define (mk-begin actual body)
    `(begin ,(make-vector 2) ,actual ,body))

  (define (mk-o-call name args)
    `(o ,(make-vector 2) ,name . ,args))

  (define (mk-p-call name args)
    `(p ,(make-vector 2) ,name . ,args))

  (define (mk-lam formals body)
    ;; 0    1   2     3    4        5       6      7
    ;; acs  bt  acsp  btp  unfold?  ret-bt  index  free-vars
    `(lambda ,(make-vector 8) ,formals ,body))

  (define (lam/index! e v) (lam//index! (exp/att e) v))

  (define (mk-app proc args)
    `(a ,(make-vector 2) ,proc . ,args))

  (define (mk-error args)
    `(error ,(make-vector 2) . ,args))

  ;; Converts a Core Scheme program to
  ;; an abstract syntax tree.

  (define (bld-pgm core-pgm)
    (with* (( (ldf* adt* . def*) core-pgm )
            ( od*  (append-map fully-lazy-assoc-od-file adt*) )
            )
           (mk-pgm ldf* adt* od* (map bld-def def*))))

  (define (bld-def def)
    (with (( ('define (name . formals) body)  def ))
      (mk-def name formals (bld-exp body))))

  (define (bld-exp exp)
    (select
      (exp)

      (name & (symbol? exp) => (mk-ide name))

      (('quote value) => (mk-cst value))

      (('if e1 e2 e3) =>
       (mk-if (bld-exp e1) (bld-exp e2) (bld-exp e3)))

      (('let ((formal actual)) body) =>
       (mk-let formal (bld-exp actual) (bld-exp body)))

      (('begin actual body) =>
       (mk-begin (bld-exp actual) (bld-exp body)))

      (('o name . args) =>
       (mk-o-call name (bld-exp* args)))

      (('error . args) =>
       (mk-error (bld-exp* args)))

      (('p name . args) =>
       (mk-p-call name (bld-exp* args)))

      (('lambda formals body) =>
       (mk-lam formals (bld-exp body)))

      (('a proc . args) =>
       (mk-app (bld-exp proc) (bld-exp* args)))

      ((name . args) =>
       (mk-o-call name (bld-exp* args)))

      ))

  (define (bld-exp* exp*)
    (map bld-exp exp*))

;; Collecting free variables in abstractions.

(define (lam-fv-exp! e)
  (select
    (e)

    (('quote _ _) => '())

    (('ide _ _) => '())

    (('if _ e1 e2 e3) =>
     (lam-fv-exp! e1) (lam-fv-exp! e2) (lam-fv-exp! e3))

    (('let _ _ actual body) =>
     (lam-fv-exp! actual) (lam-fv-exp! body))

    (('begin _ actual body) =>
     (lam-fv-exp! actual) (lam-fv-exp! body))

    (('o _ _ . args) =>
     (lam-fv-exp*! args))

    (('error _ . args) =>
     (lam-fv-exp*! args))

    (('p _ _ . args) =>
     (lam-fv-exp*! args))

    (('lambda x formals body) =>
     (lam-fv-exp! body)
     (lam//free-vars!
       x
       (map (lambda (ide) (mk-ide (ide/name ide)))
            (find-free-vars-exp body formals))))

    (('a _ proc . args) =>
     (lam-fv-exp! proc) (lam-fv-exp*! args))

    (_ =>
      (error "lam-fv-exp!: unknown syntactic form:" e))))

(define (lam-fv-exp*! e*)
  (for-each lam-fv-exp! e*))

;; Scanning an expression for finding free variable expressions:

(define (find-free-vars-exp e b*)
  ;; b*  == bound variables
  
  (define (scan e b* f*)
    (select
      (e)

      (('quote _ _) => f*)

      (('ide _ name) =>
       (if (or (memq name b*)
               (memq-map name ide/name f*))
           f*
           (cons e f*)))

      (('if _ e1 e2 e3) =>
       (let* ((f*  (scan e3 b* f*))
              (f*  (scan e2 b* f*)))
         (scan e1 b* f*)))

      (('let _ formal actual body) =>
       (let ((f*  (scan body (cons formal b*) f*)))
         (scan actual b* f*)))

      (('begin _ actual body) =>
       (let ((f*  (scan body b* f*)))
         (scan actual b* f*)))

      (('o _ _ . args) =>
       (scan* args b* f*))

      (('error _ . args) =>
       (scan* args b* f*))

      (('p _ _ . args) =>
       (scan* args b* f*))

      (('lambda x _ _) =>
       (scan* (lam//free-vars x) b* f*))

      (('a _ proc . args) =>
       (let ((f*  (scan* args b* f*)))
         (scan proc b* f*)))

      (_ =>
        (error "scan: unknown syntactic form:" e))))
  
  (define (scan* e* b* f*)
    (foldr (lambda (e f*) (scan e b* f*)) f* e*))
  
  ;; Body
  
  (scan e b* '()))


;; Collecting occurrences of lambda abstractions.
;; Implemented with a global variable, to avoid appending.

(define (collect-lam-pgm! pgm)
  
  (define **lambdas** '())
  
  (define (add-lam! lam)
    (set! **lambdas** (cons lam **lambdas**)))
  
  (define (collect-lam-exp! e)
    (select
      (e)

      (('quote _ _) => '())

      (('ide _ _) => '())

      (('if _ e1 e2 e3) =>
       (collect-lam-exp! e1) (collect-lam-exp! e2) (collect-lam-exp! e3))

      (('let _ _ actual body) =>
       (collect-lam-exp! actual) (collect-lam-exp! body))

      (('begin _ actual body) =>
       (collect-lam-exp! actual) (collect-lam-exp! body))

      (('o _ _ . args) =>
       (collect-lam-exp*! args))

      (('error _ . args) =>
       (collect-lam-exp*! args))

      (('p _ _ . args) =>
       (collect-lam-exp*! args))

      (('lambda _ _ body) =>
       (collect-lam-exp! body) (add-lam! e))

      (('a _ proc . args) =>
       (collect-lam-exp! proc) (collect-lam-exp*! args))

      (_ =>
        (error "collect-lam-exp!: unknown syntactic form:" e))))
  
  (define (collect-lam-exp*! e*)
    (for-each collect-lam-exp! e*))
  
  (define (lam-indices! lam*)
    (do ((rest   lam* (cdr rest))
         (index  0    (+ 1 index)))
        ((null? rest) )
        (lam/index! (car rest) index)))
  
  ;; Body.
  
  (set! **lambdas** '())
  (with (( (_ _ _ def* _)  pgm ))
        (for-each
          (lambda (def)
            (with (( (_ x formals body)  def ))
                  (collect-lam-exp! body)))
          def*)
        (set! **lambdas** (reverse **lambdas**))
        (lam-indices! **lambdas**)
        (pgm/lam*! pgm **lambdas**)))


  ;; ------------------------ ;;
  ;; (decorate-pgm! core-pgm) ;;
  ;; ------------------------ ;;

  (display "Decorating program...")(newline)
  (with* ((pgm   (bld-pgm core-pgm))
          ( (_ _ _ def* _)  pgm ))
    (for-each
      (lambda (def)
        (with* (( (_ _ _ body)  def ))
               (lam-fv-exp! body)))
      def*)
    (collect-lam-pgm! pgm)
    pgm))
