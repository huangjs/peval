;; File: puf.s

;; Post-unfolding.

(define (post-unfold-residual-program! o-file pgm)
  
  (define o-port #f)
  
  (define (write-item x)
    (write x o-port)(newline o-port)(newline o-port))
  
  (define **bta-time-operations** #f)
  (define **p-call-counts** #f)
  (define **puf-seenb4** #f)
  (define **puf-pending** #f)
  (define **var-name-count** #f)
  
  ;; Counting the calls to the program's procedures.
  
  (define (proc/count name)
    (let ((descr  (assq name **p-call-counts**)))
      (when (not (pair? descr)) (error "Unknown function:" name))
      (cdr descr)))
  
  (define (proc/count! name count)
    (let ((descr  (assq name **p-call-counts**)))
      (when (not (pair? descr)) (error "Unknown function:" name))
      (set-cdr! descr count)))
  
  (define (count-add1 count)
    (case count
      ((zero)  'one)
      ((one)   'many)
      ((many)  'many)))
  
  (define (proc/count-add1! name)
    (proc/count! name (count-add1 (proc/count name))))
  
  (define (init-p-call-counts! def*)
    
    (define (count-exp! e)
      (select
        (e)
        
        (_ & (not (pair? e)) => 'OK)
        
        (('quote _) => 'OK)
        
        (('if e1 e2 e3) =>
         (count-exp! e1) (count-exp! e2) (count-exp! e3))
        
        (('let ((_ actual)) body) =>
         (count-exp! actual) (count-exp! body))
        
        (('begin actual body) =>
         (count-exp! actual) (count-exp! body))
        
        (('o _ . args) =>
         (count-exp*! args))
        
        (('error . args) =>
         (count-exp*! args))
        
        (('p name . args) =>
         (count-exp*! args) (proc/count-add1! name))
        
        (('lambda _ body) =>
         (count-exp! body))
        
        (('a proc . args) =>
         (count-exp! proc) (count-exp*! args))
        
        ((_ . args) =>
         (count-exp*! args))
        
        ))
    
    (define (count-exp*! e*)
      (map count-exp! e*))
    
    ;; -------------------------- ;;
    ;; (init-p-call-counts! def*) ;;
    ;; -------------------------- ;;
    
    (set! **p-call-counts**
          (map (lambda (def)
                 (with (( ('define (name . _) _)  def ))
                       (cons name 'zero)))
               def*))
    (with (( ('define (name . _) _)  (car def*) ))
          (proc/count! name 'many))
    (for-each (lambda (def)
                (with (( ('define _ body)  def ))
                      (count-exp! body)))
              def*)
    'OK)
  
  (define (generate-var-name! formal)
    (set! **var-name-count** (+ 1 **var-name-count**))
    (compose-name formal "_" **var-name-count**))
  
  (define (compose-name name infix n)
    (string->symbol
      (string-append (symbol->string name) infix
                     (number->string n '(int)))))
  
  (define (puf-main-loop! pgm)
    (if (null? **puf-pending**)
        'OK
        (let ((def  (car **puf-pending**)))
          (set! **puf-pending**  (cdr **puf-pending**))
          (puf-add-definition! (puf-def def pgm))
          (puf-main-loop! pgm))))
  
  (define (puf-add-definition! def)
    (display "New def: ")
    (with (( ('define (name . _) _)  def ))
          (write name))
    (newline)
    (write-item def))
  
  (define (puf-residualize-def! def)
    (with (( ('define (name . formals) body)  def )
           )
          (when (not (memq name **puf-seenb4**))
                (set! **puf-seenb4** (cons name **puf-seenb4**))
                (set! **puf-pending** (cons def **puf-pending**)))))
  
  (define (puf-def def pgm)
    (with (( ('define (name . formals) body)  def )
           )
          `(define (,name . ,formals) ,(puf-exp body '() pgm))))
  
  (define (puf-exp e r pgm)
    ;; e == expression
    ;; r == local environment
    ;; pgm == program
    (select
      (e)
      
      (name & (not (pair? e)) =>
            (puf-lookup-ide name r))
      
      (('quote _) => e)
      
      (('if e1 e2 e3) =>
       (match
         ((puf-exp e1 r pgm))
         
         (('quote value) =>
          (if value
              (puf-exp e2 r pgm)
              (puf-exp e3 r pgm)))
         
         (('lambda _ _) =>
          (puf-exp e2 r pgm))
         
         (test-v =>
                 `(if ,test-v
                      ,(puf-exp e2 r pgm)
                      ,(puf-exp e3 r pgm)))))
      
      (('let ((formal actual)) body) =>
       (let ((actual-v   (puf-exp actual r pgm)))
         (if (puf-unfoldable-let? formal actual-v body)
             (puf-exp body (puf-upd-env formal actual-v r) pgm)
             `(let
                ((,formal ,actual-v))
                ,(puf-exp body (puf-upd-env formal formal r) pgm)))))
      
      (('begin actual body) =>
       (let ((actual-v    (puf-exp actual r pgm))
             (body-v      (puf-exp body r pgm)))
         (select
           (actual-v)
           (name & (not (pair? name)) =>
                 body-v)
           (('quote _) =>
            body-v)
           (('lambda _ _) =>
            body-v)
           (_ =>
              `(begin ,actual-v ,body-v)))))
      
      (('o name . args) =>
       `(o ,name . ,(puf-exp* args r pgm)))
      
      (('error . args) =>
       `(error . ,(puf-exp* args r pgm)))
      
      (('p name . args) =>
       (with* ((args-v   (puf-exp* args r pgm))
               (def      (puf-lookup-def name pgm))
               ( ('define (name . formals) body)  def )
               (count    (proc/count name))
               )
              (if (or (eq? count 'one)
                      (puf-small-exp? body))
                  (puf-make-env-and-continue
                    formals args-v body
                    (lambda (r1) (puf-exp body r1 pgm)))
                  (begin
                    (puf-residualize-def! def)
                    `(p ,name . ,args-v)))))
      
      (('lambda formals body) =>
       `(lambda
          ,formals
          ,(puf-exp body (foldr puf-upd-env-ide r formals) pgm)))
      
      (('a proc . args) =>
       (let ((proc-v (puf-exp proc r pgm))
             (args-v (puf-exp* args r pgm)))
         (match
           (proc-v)
           
           (('lambda formals body) =>
            (puf-make-env-and-continue
              formals args-v body
              (lambda (r1) (puf-exp body r1 pgm))))
           
           (_ =>
              `(a ,proc-v . ,args-v)))))
      
      ((name . args) =>
       `(,name . ,(puf-exp* args r pgm)))
      
      ))
  
  (define (puf-exp* e* r pgm)
    (map (lambda (e) (puf-exp e r pgm)) e*))
  
  (define (puf-make-env-and-continue name* e* body c)
    (puf-extend-env-and-continue name* e* body '() c))
  
  (define (puf-extend-env-and-continue name* e* body r c)
    (if (null? name*)
        (c r)
        (let ((name  (car name*))
              (value (car e*))
              (name* (cdr name*))
              (e*    (cdr e*)))
          (cond
            ((puf-unfoldable-let? name value body)
             (puf-extend-env-and-continue
               name* e* body (puf-upd-env name value r) c))
            (else
              (let ((new-name  (generate-var-name! name)))
                `(let ((,new-name ,value))
                   ,(puf-extend-env-and-continue
                      name* e* body (puf-upd-env name new-name r) c))))))))
  
  ;; Variable environment handling.
  
  (define (puf-lookup-ide name env)
    (let ((descr  (assq name env)))
      (if (not (pair? descr))
          name
          (cdr descr))))
  
  (define (puf-upd-env name value env)
    (cons (cons name value) env))
  
  (define (puf-upd-env-ide name env)
    (puf-upd-env name name env))
  
  ;; Looks up procedure definitions in the residual program.
  
  (define (puf-lookup-def name pgm)
    (with (( (_ _ . def*)  pgm ))
          (find-if (lambda (def)
                     (with (( ('define (name# . _) _)  def ))
                           (eq? name name#)))
                   def*)))
  
  ;; The following procedures are used for recognizing
  ;; side-effecting expressions, which mustn't be moved.
  
  
  (define (x-oper? name)
    (let ((descr  (assq name **bta-time-operations**)))
      (when (not (pair? descr))
            (error "Unexpected operator:" name))
      (eq? (cdr descr) 'opaque)))
  
  (define (x-exp? e)
    (select
      (e)
      
      (name & (not (pair? name)) => #f)
      
      (('quote _) => #f)
      
      (('if e1 e2 e3) =>
       (or (x-exp? e1) (x-exp? e2) (x-exp? e3)))
      
      (('let ((_ actual)) body) =>
       (or (x-exp? actual) (x-exp? body)))
      
      (('begin actual body) =>
       (or (x-exp? actual) (x-exp? body)))
      
      (('o name . args) =>
       (or (x-oper? name) (x-exp*? args)))
      
      (('error . arg) => #t)
      
      (('p _ . _) => #t)
      
      (('lambda _ _) => #f)
      
      (('a _ . _) =>  #t)
      
      ((name . args) =>
       (or (x-oper? name) (x-exp*? args)))
      
      ))
  
  (define (x-exp*? e*)
    (or-map x-exp? e*))
  
  ;; The following procedures are used for counting
  ;; occurrences of let-variables.
  
  (define (oc-count i e)
    
    (define (count e)
      (select
        (e)
        
        (name & (not (pair? name)) =>
              (if (eq? name i) 'one-hash 'zero-hash))
        
        (('quote _) => 'zero-hash)
        
        (('if e1 e2 e3) =>
         (select
           ( (count e1) (count e2) (count e3) )
           ('zero-hash 'zero-hash 'zero-hash  =>  'zero-hash)
           ('one-hash  'zero-hash 'zero-hash  =>  'one-hash)
           (_          _          _           =>  'any-hash)))
        
        (('let ((formal actual)) body) =>
         (plus-hash (count actual)
                    (if (eq? formal i) 'zero-hash (count body))))
        
        (('begin actual body) =>
         (plus-hash (count actual) (count body)))
        
        (('o _ . args) => (count* args))
        
        (('error . args) => (count* args))
        
        (('p _ . args) => (count* args))
        
        (('lambda formals body) =>
         (cond ((memq i formals)
                'zero-hash)
               ((appears-free-in? i body)
                'any-hash)
               (else
                 'zero-hash)))
        
        (('a proc . args) =>
         (plus-hash (count proc) (count* args)))
        
        ((_ . args) => (count* args))
        
        ))
    
    (define (count* e*)
      (foldl-map plus-hash 'zero-hash count e*))
    
    ;; (oc-count i e) ;;
    
    (count e))
  
  (define (appears-free-in? i e)
    
    (define (in-exp? e)
      (select
        (e)
        
        (name & (not (pair? name)) => (eq? name i))
        
        (('quote _) => #f)
        
        (('if e1 e2 e3) =>
         (or (in-exp? e1) (in-exp? e2) (in-exp? e3)))
        
        (('let ((formal actual)) body) =>
         (or (in-exp? actual)
             (and (not (eq? formal i))
                  (in-exp? body))))
        
        (('begin actual body) =>
         (or (in-exp? actual) (in-exp? body)))
        
        (('o _ . args) => (in-exp*? args))
        
        (('error . args) => (in-exp*? args))
        
        (('p _ . args) => (in-exp*? args))
        
        (('lambda formals body) =>
         (and (not (memq i formals))
              (in-exp? body)))
        
        (('a proc . args) =>
         (or (in-exp? proc)
             (in-exp*? args)))
        
        ((_ . args) => (in-exp*? args))
        
        ))
    
    (define (in-exp*? e*)
      (or-map in-exp? e*))
    
    ;; (appears-free-in? i e) ;;
    
    (in-exp? e))
  
  (define (plus-hash x y)
    (cond
      ((eq? x 'zero-hash) y)
      ((eq? y 'zero-hash) x)
      (else   'any-hash)))
  
  (define (lub-hash x y)
    (if (eq? x y) x 'any-hash))
  
  ;; Recognizes expressions that can be harmlessly duplicated.
  
  (define (puf-small-exp? e)
    (select
      (e)
      
      (name & (not (pair? name)) => #t)
      
      (('quote value) =>
       (and (not (pair? value))
            (not (vector? value))))
      
      (_ => #f)
      
      ))
  
  ;; This procedure determines whether the let is
  ;; unfolduble. (A sufficient condition.)
  
  (define (puf-unfoldable-let? formal actual body)
    (or (puf-small-exp? actual)
        (and (not (x-exp? actual))
             (eq? (oc-count formal body) 'one-hash))))
  
  ;; ----------------------------------- ;;
  ;; (post-unfold-residual-program! pgm) ;;
  ;; ----------------------------------- ;;
  
  (display "Post-unfolding...")(newline)
  (set! o-port (open-output-file o-file))
  (set-line-length! 78 o-port)
  (with (( (ldf* adt* . def*)  pgm )
         )
        (write-item ldf*)(write-item adt*)
        (set! **bta-time-operations**
              (map (lambda (od) `(,(od/name od) . ,(od/bto od)))
                   (append-map fully-lazy-assoc-od-file adt*)))
        (init-p-call-counts! def*)
        (set! **puf-seenb4** '())
        (set! **puf-pending** '())
        (set! **var-name-count** 0)
        (puf-residualize-def! (car def*))
        (puf-main-loop! pgm)
        (close-output-port o-port)
        'OK))
