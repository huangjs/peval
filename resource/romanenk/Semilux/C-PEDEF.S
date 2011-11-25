;; File: c-pedef.s

(loadt "scheme.adt")
(loadt "pedef.adt")

;; The core of the partial evaluator.

(define (pe-def pgm conf)
  (if (null? conf)
      (pe-start! pgm)
      (pe-configuration pgm conf)))

(define (pe-start! pgm)
  (with* (( ((_ style) (_ . ldf*) (_ . adt*) (_ . def*) (_ . lam*))  pgm )
          ( def  (car def*) )
          ( ('define (name . _) _ btp _ _)  def ))
         (when (not (eq? style 'continuation-passing))
               (error "c-pedef: wrong style of annotation:" style))
         (list ldf* adt* name btp)))

(define (pe-configuration pgm conf)
  (with* (( (_ _ _ (_ . def*) _)  pgm )
          )
         (find-def-and-continue
           (car conf) def*
           (lambda (def)
             (with (( ('define (_ . formals) acsp btp _ body)  def )
                    )
                   (split
                     formals (cdr conf) acsp btp pgm
                     (lambda (r-formal* r)
                       `(define
                          (,(retrieve-proc-name! conf) . ,r-formal*)
                          ,(pe-exp body r pgm
                                   (generalize (lambda (v) v)))))))))))

(define (find-def-and-continue name def* c)
  (if (null? def*)
      (error "Unexpected function name:" name)
      (with* (( ('define (name# . _) _ _ unfold#? _)  (car def*) )
              )
             (cond
               (unfold#?
                 (find-def-and-continue name (cdr def*) c))
               ((eq? name name#)
                (c (car def*)))
               (else
                 (find-def-and-continue name (cdr def*) c))))))

;; Splitting the parameters of a procedure.

(define (split formal* pvalue* acsp btp pgm c)
  (if (null? formal*)
      (c '() (init-env))
      (split
        (cdr formal*) (cdr pvalue*) (cdr acsp) (cdr btp) pgm
        (lambda (rf* rn)
          (split-pvalue
            (car formal*) (car pvalue*) (car acsp) (car btp) pgm rf* 0
            (generalize
              (lambda (p rf*1 n)
                (c rf*1 (upd-env (car formal*) p rn)))))))))

(define (split-pvalue formal pvalue acs btv pgm rf* n c)
  (cond
    ((eq? btv 'S)
     (c pvalue rf* n))
    ((eq? btv 'C)
     (let ((i  (closure/index pvalue)))
       (find-unf-lam-in-acs-and-continue
         i acs pgm
         (lambda (lam)
           (with (( ('lambda _ _ _ _ acsp btp _)  lam )
                  )
                 (split-pvalue*
                   formal (closure/values pvalue) acsp btp
                   0 (length btp) pgm rf* n
                   (lambda (p* rf*1 n)
                     (c (mk-closure i p*) rf*1 n))))))))
    ((bt-resid? btv)
     (let ((rf (generate-param-name formal n)))
       (c rf (cons rf rf*) (+ 1 n))))
    (else
      (error "split-pvalue: unexpected binding time value:" btv))))

(define (split-pvalue* formal pvalue* acsp btp offset arity pgm rf* n c)
  (if (= offset arity)
      (c '() rf* n)
      (split-pvalue*
        formal pvalue* (cdr acsp) (cdr btp) (+ 1 offset) arity pgm rf* n
        (lambda (p* rf*1 n)
          (split-pvalue
            formal (list-ref pvalue* offset) (car acsp) (car btp) pgm
            rf*1 n
            (lambda (p rf*2 n)
              (c (cons p p*) rf*2 n)))))))


(define (pe-exp e r pgm k)
  ;; e == expression
  ;; r == local environment
  ;; pgm == program
  ;; k == continuation
  (select
    (e)
    
    (name
      & (not (pair? e)) =>
      (k (r name)))

    (('error# . args) =>
     (pe-exp* args r pgm
       (lambda (v*) (k `(error . ,v*)))))

    (('error . args) =>
     (pe-exp* args r pgm
       (lambda (v*)
         (k (error "Error during partial evaluation:" `(error . ,v*))))))
    
    (('lift e1) =>
     (pe-exp e1 r pgm
       (lambda (v1) (k `(quote ,v1)))))

    (('quote value) =>
     (k value))
    
    (('if# e1 e2 e3) =>
     (pe-exp e1 r pgm
       (lambda (v1)
         (k `(if ,v1
                 ,(pe-exp e2 r pgm (lambda (v) v))
                 ,(pe-exp e3 r pgm (lambda (v) v)))))))
    
    (('if e1 e2 e3) =>
     (pe-exp e1 r pgm
       (lambda (v1)
         (if v1
           (pe-exp e2 r pgm k)
           (pe-exp e3 r pgm k)))))
    
    (('let# ((formal actual)) body) =>
     (pe-exp actual r pgm
       (lambda (v-actual)
         (let ((r-formal  (generate-var-name! formal)))
           `(let  ((,r-formal ,v-actual))
              ,(pe-exp body (upd-env formal r-formal r) pgm k))))))
    
    (('let ((formal actual)) body) =>
     (pe-exp actual r pgm
       (lambda (v-actual)
         (pe-exp body (upd-env formal v-actual r) pgm k))))

    (('begin# actual body) =>
     (pe-exp actual r pgm
       (lambda (v-actual)
         `(begin ,v-actual
            ,(pe-exp body r pgm k)))))
    
    (('begin actual body) =>
     (pe-exp actual r pgm
       (lambda (v-actual)
         (pe-exp body r pgm k))))

    (('o# name . args) =>
     (pe-exp* args r pgm
       (lambda (v*)
         (if (keyword$? name)
           (k `(o ,name . ,v*))
           (k `(,name . ,v*))))))

    (('o name . args) =>
     (pe-o name args r pgm k))
    
    (('p# name . args) =>
     (with
       (( ('define (_ . formals) acsp btp _ body) (pe-lookup-def name pgm) )
            )
           (extract
             args r acsp btp pgm
             (lambda (pargs r-actual*)
               (k `(p ,(generate-proc-name! (cons name pargs))
                      . ,r-actual*))))))
    
    (('p name . args) =>
     (with (( ('define (_ . formals) _ _ _ body)  (pe-lookup-def name pgm) )
            )
           (make-env-and-continue
             formals args
             (lambda (arg1 k1) (pe-exp arg1 r pgm k1))
             (lambda (r1) (pe-exp body r1 pgm k)))))

    (('lambda# index) =>
     (with
       (( ('lambda formals btp _ name* _ _ body)  (pe-lookup-lam index pgm) )
        )
       (make-env-and-continue
         name* name*
         (lambda (name k1) (k1 (r name)))
         (lambda (r1)
           (make-lam-formals-and-continue
             formals r1
             (lambda (r-formals r2)
               (k `(lambda ,r-formals
                           ,(pe-exp body r2 pgm (lambda (v) v))))))))))

    (('lambda index) =>
     (with
       (( ('lambda formals _ _ free-names _ _ _)  (pe-lookup-lam index pgm) )
            )
           (k (mk-closure
              index
              (my-map (lambda (name) (r name)) free-names)))))
    
    (('a# _ proc . args) =>
     (pe-exp proc r pgm
       (lambda (v)
         (pe-exp* args r pgm
           (lambda (v*)
             (k `(a ,v . ,v*)))))))
    
    (('a acs proc . args) =>
     (pe-exp proc r pgm
       (lambda (proc-v)
         (find-unf-lam-in-acs-and-continue
           (closure/index proc-v) acs pgm
           (lambda (lam)
             (with (( ('lambda formals _ _ free-names _ _ body)  lam )
                    )
                   (list-to-env-and-continue
                     free-names (closure/values proc-v)
                     (lambda (r1)
                       (extend-env-and-continue
                         formals args
                         (lambda (arg1 k1) (pe-exp arg1 r pgm k1))
                         r1
                         (lambda (r2) (pe-exp body r2 pgm k)))))))))))

    ((name . args) =>
     (pe-o name args r pgm k))

    ))

(define (pe-exp* e* r pgm k)
  (if (null? e*)
      (k '())
      (pe-exp* (cdr e*) r pgm
        (lambda (v*)
          (pe-exp (car e*) r pgm
            (lambda (v)
              (k (cons v v*))))))))

(define (pe-o name args r pgm k)
  (case (length args)
    ((0)
     (k (x-call name)))
    ((1)
     (pe-exp (car args) r pgm
       (lambda (v1)
         (case name
           ((car)   (k (car        v1)))
           ((cdr)   (k (cdr        v1)))
           ((null?) (k (null?      v1)))
           ((pair?) (k (pair?      v1)))
           ((not)   (k (not        v1)))
           (else    (k (x-call name v1)))))))
    ((2)
     (pe-exp (car args) r pgm
       (lambda (v1)
         (pe-exp (cadr args) r pgm
           (lambda (v2)
             (case name
               ((cons)      (k (cons       v1 v2)))
               ((equal?)    (k (equal?     v1 v2)))
               ((eq?)       (k (eq?        v1 v2)))
               ((eqv?)      (k (eqv?       v1 v2)))
               ((list-ref)  (k (list-ref   v1 v2)))
               (else        (k (x-call name v1 v2)))))))))
    ((3)
     (pe-exp (car args) r pgm
       (lambda (v1)
         (pe-exp (cadr args) r pgm
           (lambda (v2)
             (pe-exp (caddr args) r pgm
               (lambda (v3)
                 (k (x-call name v1 v2 v3)))))))))
    ((4)
     (pe-exp (car args) r pgm
       (lambda (v1)
         (pe-exp (cadr args) r pgm
           (lambda (v2)
             (pe-exp (caddr args) r pgm
               (lambda (v3)
                 (pe-exp (cadddr args) r pgm
                   (lambda (v4)
                     (k (x-call name v1 v2 v3 v4)))))))))))
    (else
      (pe-exp* args r pgm
        (lambda (v*)
          (k (x-apply name v*)))))))

(define (make-lam-formals-and-continue formal* r c)
  (if (null? formal*)
      (c '() r)
      (make-lam-formals-and-continue
        (cdr formal*) r
        (lambda (r-formal* r1)
          (let* ((formal   (car formal*))
                 (r-formal (generate-var-name! formal)))
            (c (cons r-formal r-formal*)
               (upd-env formal r-formal r1)))))))

;; Extract the arguments of a residual call.

(define (extract e* r acsp btp pgm c)
  (if (null? e*)
      (c '() '())
      (extract
        (cdr e*) r (cdr acsp) (cdr btp) pgm
        (lambda (p* ra*)
          (pe-exp (car e*) r pgm
            (lambda (value)
              (extract-value
                value
                (car acsp) (car btp) pgm ra*
                (generalize
                  (lambda (p ra*1) (c (cons p p*) ra*1))))))))))

(define (extract-value value acs btv pgm ra* c)
  (cond
    ((eq? btv 'S)
     (c value ra*))
    ((eq? btv 'C)
     (let ((i  (closure/index value)))
       (find-unf-lam-in-acs-and-continue
         i acs pgm
         (lambda (lam)
           (with (( ('lambda _ _ _ _ acsp btp _)  lam )
                  )
                 (extract-value*
                   (closure/values value) acsp btp
                   0 (length btp) pgm ra*
                   (lambda (p*1 ra*1)
                     (c (mk-closure i p*1) ra*1))))))))
    ((bt-resid? btv)
     (c '_ (cons value ra*)))
    (else
      (error "extract-value: unexpected binding time value:" btv))))

(define (extract-value* v* acsp btp offset arity pgm ra* c)
  (if (= offset arity)
      (c '() ra*)
      (extract-value*
        v* (cdr acsp) (cdr btp) (+ 1 offset) arity pgm ra*
        (lambda (p* ra*1)
          (extract-value
            (list-ref v* offset) (car acsp) (car btp) pgm ra*1
            (lambda (p ra*2)
              (c (cons p p*) ra*2)))))))


;; Finding an unfoldable lambda in an abstract closure set.

(define (find-unf-lam-in-acs-and-continue i acs pgm c)
  (let ((len-acs  (length acs)))
    (when (= len-acs 0)
          (error "Searching in empty abstract closure set:" i))
    ;; (member i acs) always holds!
    (find-unf-lam-loop i acs 0 len-acs pgm c)))

(define (find-unf-lam-loop i acs offset len-acs pgm c)
  (let* ((closure-index  (list-ref acs offset))
         (new-offset     (+ 1 offset)))
    (cond
      ((= new-offset len-acs)
       (c (pe-lookup-lam closure-index pgm)))
      ((= i closure-index)
       (c (pe-lookup-lam closure-index pgm)))
      (else
        (find-unf-lam-loop
          i acs new-offset len-acs pgm c)))))

(define (make-env-and-continue name* e* f c)
  (extend-env-and-continue name* e* f (init-env) c))

(define (extend-env-and-continue name* e* f r c)
  (if (null? name*)
      (c r)
      (extend-env-and-continue
        (cdr name*) (cdr e*) f r
        (lambda (r1)
          (f (car e*)
             (lambda (v) (c (upd-env (car name*) v r1))))))))

(define (list-to-env-and-continue name* value* c)
  (list-to-env-loop name* value* 0 (length name*) (init-env) c))

(define (list-to-env-loop name* value* offset arity r c)
  (if (= offset arity)
      (c r)
      (list-to-env-loop
        name* value* (+ 1 offset) arity
        (upd-env (list-ref name* offset) (list-ref value* offset) r)
        c)))

(define (my-map f lst)
  (if (null? lst)
      '()
      (cons (f (car lst)) (my-map f (cdr lst)))))
