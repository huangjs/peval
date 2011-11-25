;; File: pedef.s

;; The core of the partial evaluator.
;; This version represents environments as
;; first-class objects: a list of variable names
;; + a list of the variables' values.

(loadt "scheme.adt")
(loadt "pedef.adt")

(define (pe-def pgm conf)
  (if (null? conf)
      (pe-start! pgm)
      (pe-configuration pgm conf)))

(define (pe-start! pgm)
  (with* (( ((_ style) (_ . ldf*) (_ . adt*) (_ . def*) (_ . lam*))  pgm )
          ( def  (car def*) )
          ( ('define (name . _) _ btp _ _)  def ))
         (when (not (eq? style 'direct))
               (error "pedef: wrong style of annotation:" style))
         (list ldf* adt* name btp)))

(define (pe-configuration pgm conf)
  (with* (( (_ _ _ (_ . def*) _)  pgm )
          )
         (find-def-and-continue
           (car conf) def*
           (lambda (def)
             (with* (( ('define (_ . formals) acsp btp _ body)  def )
                     ( (r-formal* rv)
                       (split formals (cdr conf) acsp btp pgm) ))
                    `(define
                       (,(retrieve-proc-name! conf) . ,r-formal*)
                        ,(pe-exp body formals rv pgm)))))))

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

(define (split formal* pvalue* acsp btp pgm)
  (if (null? formal*)
      (list '() '())
      (with* (( (rf*1 rv1)
                (split
                  (cdr formal*) (cdr pvalue*)
                  (cdr acsp) (cdr btp) pgm) )
              ( (p rf*2 n)
                (split-pvalue
                  (car formal*) (car pvalue*)
                  (car acsp) (car btp) pgm rf*1 0) ))
                `(,rf*2 ,(cons p rv1)))))

(define (split-pvalue formal pvalue acs btv pgm rf* n)
  (cond
    ((eq? btv 'S)
     `(,pvalue ,rf* ,n))
    ((eq? btv 'C)
     (let ((i  (closure/index pvalue)))
       (find-unf-lam-in-acs-and-continue
         i acs pgm
         (lambda (lam)
           (with* (( ('lambda _ _ _ _ acsp btp _)  lam )
                   ( (p*1 rf*1 n)
                     (split-pvalue*
                       formal (closure/values pvalue) acsp btp
                       0 (length btp) pgm '() rf* n) ))
                   `(,(mk-closure i p*1) ,rf*1 ,n))))))
    ((bt-resid? btv)
     (let ((rf (generate-param-name formal n)))
       `(,rf ,(cons rf rf*) ,(+ 1 n))))
    (else
      (error "split-pvalue: unexpected binding time value:" btv))))

(define (split-pvalue* formal pvalue* acsp btp offset arity pgm p* rf* n)
  (if (= offset arity)
      `(,p* ,rf* ,n)
      (with* (( (p*1 rf*1 n)
                (split-pvalue*
                  formal pvalue* (cdr acsp) (cdr btp)
                  (+ 1 offset) arity pgm p* rf* n) )
              ( (p rf*2 n)
                (split-pvalue
                  formal (list-ref pvalue* offset) (car acsp) (car btp) pgm
                  rf*1 n) ))
              `(,(cons p p*1) ,rf*2 ,n))))

(define (pe-exp e rn rv pgm)
  ;; e == expression
  ;; rn == local environment (names)
  ;; rv == local environment (values)
  ;; pgm == program
  (select
    (e)
    
    (name
      & (not (pair? e)) =>
      (list-ref rv (list-index name rn)))

    (('error# . args) =>
     `(error . ,(pe-exp* args rn rv pgm)))

    (('error . args) =>
     (error "Error during partial evaluation:"
            `(error . ,(pe-exp* args rn rv pgm))))
    
    (('lift e1) =>
     `(quote ,(pe-exp e1 rn rv pgm)))

    (('quote value) =>
     value)
    
    (('if# e1 e2 e3) =>
     `(if ,(pe-exp e1 rn rv pgm)
          ,(pe-exp e2 rn rv pgm)
          ,(pe-exp e3 rn rv pgm)))
    
    (('if e1 e2 e3) =>
     (if (pe-exp e1 rn rv pgm)
         (pe-exp e2 rn rv pgm)
         (pe-exp e3 rn rv pgm)))
    
    (('let# ((formal actual)) body) =>
     (let ((r-formal  (generate-var-name! formal)))
       `(let  ((,r-formal ,(pe-exp actual rn rv pgm)))
          ,(pe-exp body (cons formal rn) (cons r-formal rv) pgm))))
    
    (('let ((formal actual)) body) =>
     (pe-exp body (cons formal rn) (cons (pe-exp actual rn rv pgm) rv) pgm))

    (('begin# actual body) =>
     `(begin
        ,(pe-exp actual rn rv pgm)
        ,(pe-exp body rn rv pgm)))
    
    (('begin actual body) =>
     (begin
       (pe-exp actual rn rv pgm)
       (pe-exp body rn rv pgm)))

    (('o# name . args) =>
     (if (keyword$? name)
         `(o ,name . ,(pe-exp* args rn rv pgm))
         `(,name . ,(pe-exp* args rn rv pgm))))

    (('o name . args) =>
     (pe-o name args rn rv pgm))
    
    (('p# name . args) =>
     (with* (( ('define (_ . formals) acsp btp _ body)
               (pe-lookup-def name pgm) )
             ( (pargs r-actual*)
               (extract args rn rv acsp btp pgm) ))
            `(p ,(generate-proc-name! (cons name pargs)) . ,r-actual*)))

    (('p name . args) =>
     (with (( ('define (_ . formals) _ _ _ body)  (pe-lookup-def name pgm) )
            )
           (pe-exp body formals (pe-exp* args rn rv pgm) pgm)))

    (('lambda# index) =>
     (with
       (( ('lambda formals btp _ free-names _ _ body)
          (pe-lookup-lam index pgm) )
        )
       (let ((r-formals  (make-new-formals formals)))
         `(lambda
            ,r-formals
            ,(pe-exp body
                     (append formals free-names)
                     (append r-formals (pe-name* free-names rn rv))
                     pgm)))))

    (('lambda index) =>
     (with
       (( ('lambda formals _ _ free-names _ _ _)  (pe-lookup-lam index pgm) )
            )
           (mk-closure
             index
             (pe-name* free-names rn rv))))
    
    (('a# _ proc . args) =>
     `(a ,(pe-exp proc rn rv pgm) . ,(pe-exp* args rn rv pgm)))
    
    (('a acs proc . args) =>
     (let ((proc-v (pe-exp proc rn rv pgm)))
       (find-unf-lam-in-acs-and-continue
         (closure/index proc-v) acs pgm
         (lambda (lam)
           (with (( ('lambda formals _ _ free-names _ _ body)  lam )
                  )
                 (pe-exp
                   body
                   (append formals free-names)
                   (append-pe-exp* args rn rv pgm (closure/values proc-v))
                   pgm))))))

    ((name . args) =>
     (pe-o name args rn rv pgm))

    ))

(define (append-pe-exp* e* rn rv pgm value*)
  (if (null? e*)
      value*
      (cons (pe-exp (car e*) rn rv pgm)
            (append-pe-exp* (cdr e*) rn rv pgm value*))))

(define (pe-exp* e* rn rv pgm)
  (append-pe-exp* e* rn rv pgm '()))

(define (pe-o name args rn rv pgm)
  (case (length args)
    ((0)
     (x-call name))
    ((1)
     (case name
       ((car)   (car   (pe-exp (car args) rn rv pgm)))
       ((cdr)   (cdr   (pe-exp (car args) rn rv pgm)))
       ((null?) (null? (pe-exp (car args) rn rv pgm)))
       ((pair?) (pair? (pe-exp (car args) rn rv pgm)))
       ((not)   (not   (pe-exp (car args) rn rv pgm)))
       (else    (x-call name (pe-exp (car args) rn rv pgm)))))
    ((2)
     (case name
       ((cons)
        (cons (pe-exp (car args) rn rv pgm) (pe-exp (cadr args) rn rv pgm)))
       ((equal?)
        (equal? (pe-exp (car args) rn rv pgm) (pe-exp (cadr args) rn rv pgm)))
       ((eq?)
        (eq? (pe-exp (car args) rn rv pgm) (pe-exp (cadr args) rn rv pgm)))
       ((eqv?)
        (eqv? (pe-exp (car args) rn rv pgm) (pe-exp (cadr args) rn rv pgm)))
       ((list-ref)
        (list-ref (pe-exp (car args) rn rv pgm)
                  (pe-exp (cadr args) rn rv pgm)))
       (else
         (x-call name (pe-exp (car args) rn rv pgm)
                      (pe-exp (cadr args) rn rv pgm)))))
    ((3)
     (x-call name (pe-exp (car args) rn rv pgm)
                  (pe-exp (cadr args) rn rv pgm)
                  (pe-exp (caddr args) rn rv pgm)))
    ((4)
     (x-call name (pe-exp (car args) rn rv pgm)
                  (pe-exp (cadr args) rn rv pgm)
                  (pe-exp (caddr args) rn rv pgm)
                  (pe-exp (cadddr args) rn rv pgm)))
    (else
      (x-apply name (pe-exp* args rn rv pgm)))))

(define (make-new-formals formal*)
  (if (null? formal*)
      '()
      (cons (generate-var-name! (car formal*))
            (make-new-formals (cdr formal*)))))

;; Extract the arguments of a residual call.

(define (extract e* rn rv acsp btp pgm)
  (if (null? e*)
      (list '() '())
      (with* (( (p* ra*)
                (extract (cdr e*) rn rv (cdr acsp) (cdr btp) pgm) )
              ( (p ra*1)
                (extract-value
                  (pe-exp (car e*) rn rv pgm)
                  (car acsp) (car btp) pgm ra*) ))
             `(,(cons p p*) ,ra*1))))

(define (extract-value value acs btv pgm ra*)
  (cond
    ((eq? btv 'S)
     `(,value ,ra*))
    ((eq? btv 'C)
     (let ((i  (closure/index value)))
       (find-unf-lam-in-acs-and-continue
         i acs pgm
         (lambda (lam)
           (with* (( ('lambda _ _ _ _ acsp btp _)  lam )
                   ( (p* ra*1)
                     (extract-value*
                       (closure/values value) acsp btp
                       0 (length btp) pgm ra*) ))
                  `(,(mk-closure i p*) ,ra*1))))))
    ((bt-resid? btv)
     `(_ ,(cons value ra*)))
    (else
      (error "extract-value: unexpected binding time value:" btv))))

(define (extract-value* v* acsp btp offset arity pgm ra*)
  (if (= offset arity)
      `(() ,ra*)
      (with* (( (p* ra*1)
                (extract-value*
                  v* (cdr acsp) (cdr btp) (+ 1 offset) arity pgm ra*) )
              ( (p ra*2)
                (extract-value
                  (list-ref v* offset) (car acsp) (car btp) pgm ra*1) ))
             `(,(cons p p*) ,ra*2))))


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

(define (pe-name* name* rn rv)
  (if (null? name*)
      '()
      (cons (list-ref rv (list-index (car name*) rn))
            (pe-name* (cdr name*) rn rv))))
