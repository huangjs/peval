;; File: ann.s

;; Annotator of preprocessed programs.

(define (make-annotated-program! cps-style? o-file pgm)

  (define o-port #f)

  (define (write-item x)
    (write x o-port)(newline o-port)(newline o-port))

  (define (display-item x)
    (display x o-port)(newline o-port)(newline o-port))

  (define (ide/name e)
    (with (( ('ide _ name)  e )) name))

  (define **ann-exp-keywords** '
    (
    LIFT QUOTE
    IF IF#  LET LET#  BEGIN BEGIN#
    O O#  P P#  LAMBDA LAMBDA#  A A#
    ERROR ERROR#
    ))

  (define (keyword#? name)
    (memq name **ann-exp-keywords**))
  
  (define **pgm-to-annotate** #f)
  
  (define (ann-lookup-def name)
    (with (( (_ _ _ def* _)  **pgm-to-annotate** ))
          (assq name def*)))
  
  (define (ann-lookup-lam i)
    (with (( (_ _ _ _ lam*)  **pgm-to-annotate** ))
          (list-ref lam* i)))
  
  (define (ann-def def)
    (with* (( (name x formals body)  def )
            (acsp     (def//acsp x))
            (btp      (def//btp x))
            (unfold?  (def//unfold? x))
            (ret-bt   (def//ret-bt x))
            (ann-body (ann-arg body ret-bt))
            )
           `(define (,name . ,formals) ,acsp ,btp ,unfold? ,ann-body)))
  
  (define (ann-lam e)
    (with* (( ('lambda x formals body)  e )
            (index    (lam//index x))
            (btp      (lam//btp x))
            (ret-bt   (lam//ret-bt x))
            (free-vars   (lam//free-vars x))
            (free-names  (map ide/name free-vars))
            (free-acsp   (map exp/acs free-vars))
            (free-btp    (map exp/bt free-vars))
            (ann-body    (ann-arg body ret-bt)))
      `(lambda
         ,formals ,btp ,index ,free-names ,free-acsp ,free-btp ,ann-body)))
  
  (define (ann-arg e btv)
    (case btv
      ((B)
       (ann-no-result))
      ((S C)
       (ann-eval-exp e))
      ((D X)
       (ann-pe-exp e))))
  
  (define (ann-args e* btp)
    (map-2 ann-arg e* btp))
  
  (define (ann-no-result)
    '(error (quote "This subexpression can produce no result")))
  
  (define (ann-no-result#)
    '(error# (lift (quote "This subexpression can produce no result"))))
  
  (define (ann-pe-exp e)
    (select
      (e)

      (('error _ . args) =>
       `(error# . ,(ann-pe-exp* args)))

      (_ & (exp/bottom? e) =>
       (ann-no-result#))

      (_ & (exp/static? e) =>
       `(lift ,(ann-eval-exp e)))

      (_ & (exp/closure? e) =>
       (error "Unexpected binding time:" 'C e))

      (('ide _ name) => name)

      (('if _ e1 e2 e3) =>
       (cond
         ((exp/bottom? e1)
          (ann-no-result#))
         ((exp/static? e1)
          `(if ,(ann-eval-exp e1)
               ,(ann-pe-exp e2)
               ,(ann-pe-exp e3)))
         ((exp/closure? e1)
          `(begin ,(ann-eval-exp e1)
                  ,(ann-pe-exp e2)))
         ((exp/resid? e1)
          `(if# ,(ann-pe-exp e1)
                ,(ann-pe-exp e2)
                ,(ann-pe-exp e3)))
         (else
           (error "Unexpected test expression:" e))))

      (('let x formal actual body) =>
       (let* ((bt-actual   (exp/bt actual))
              (ann-actual  (ann-arg actual bt-actual))
              (ann-body    (ann-pe-exp body)))
         (if (let//unfold? x)
             `(let ((,formal ,ann-actual)) ,ann-body)
             `(let# ((,formal ,ann-actual)) ,ann-body))))

      (('begin _ actual body) =>
       (let* ((bt-actual   (exp/bt actual))
              (ann-actual  (ann-arg actual bt-actual))
              (ann-body    (ann-pe-exp body)))
         (if (bt-resid? bt-actual)
             `(begin# ,ann-actual ,ann-body)
             `(begin ,ann-actual ,ann-body))))

      (('o _ name . args) =>
       (case name
         ((generalize)
          (ann-pe-exp (car args)))
         (else
           `(o# ,name . ,(ann-pe-exp* args)))))

      (('p _ name . args) =>
       (let* ((def   (ann-lookup-def name))
              (def-x (exp/att def))
              (btp   (def//btp def-x))
              (ann-args  (ann-args args btp)))
         (if (def//unfold? def-x)
             `(p ,name . ,ann-args)
             `(p# ,name . ,ann-args))))

      (('lambda x formals body) =>
       `(lambda# ,(lam//index x)))

      (('a x proc . args) =>
       (let ((proc-acs  (exp/acs proc)))
         (cond
           ((or (exp/bottom? proc)
                (exp/static? proc)
                (and (exp/closure? proc) (null? proc-acs)))
            (ann-no-result#))
           ((exp/closure? proc)
            ;; All lambdas in proc-acs have the same btp!
            ;; So let's take the first one.
            (let* ((lam   (ann-lookup-lam (car proc-acs)))
                   (lam-x (exp/att lam))
                   (btp   (lam//btp lam-x)))
              `(a ,proc-acs ,(ann-eval-exp proc) . ,(ann-args args btp))))
           ((exp/resid? proc)
            `(a# ,proc-acs ,(ann-pe-exp proc) . ,(ann-pe-exp* args)))
           (else
             (error "ann-pe-exp: unexpected expression to apply" proc)))))

      (_ =>
        (error "pe-exp: unknown syntactic form:" e))))
  
  (define (ann-pe-exp* e*)
    (map ann-pe-exp e*))
  
  (define (ann-eval-exp e)
    (select
      (e)

      (('error _ . args) =>
       `(error . ,(ann-eval-exp* args)))

      (_ & (exp/bottom? e) =>
       (ann-no-result))

      (_ & (exp/resid? e) =>
       (error "ann-eval-exp: unexpected binding time tag:" e))

      (('quote _ value) =>
       `(quote ,value))

      (('ide _ name) => name)

      (('if _ e1 e2 e3) =>
       (cond
         ((exp/bottom? e1)
          (ann-no-result))
         ((exp/static? e1)
          `(if ,(ann-eval-exp e1)
               ,(ann-eval-exp e2)
               ,(ann-eval-exp e3)))
         ((exp/closure? e1)
          `(begin ,(ann-eval-exp e1)
                  ,(ann-eval-exp e2)))
         (else
           (error "ann-eval-exp: unexpected test-expression:" e))))

      (('let x formal actual body) =>
       (let* ((bt-actual   (exp/bt actual))
              (ann-actual  (ann-arg actual bt-actual))
              (ann-body    (ann-eval-exp body)))
         (if (let//unfold? x)
             `(let ((,formal ,ann-actual)) ,ann-body)
             `(let# ((,formal ,ann-actual)) ,ann-body))))

      (('begin _ actual body) =>
       (let* ((bt-actual   (exp/bt actual))
              (ann-actual  (ann-arg actual bt-actual))
              (ann-body    (ann-eval-exp body)))
         (if (bt-resid? bt-actual)
             `(begin# ,ann-actual ,ann-body)
             `(begin ,ann-actual ,ann-body))))

      (('o _ name . args) =>
       (let ((ann-args (ann-eval-exp* args)))
         (if (keyword#? name)
             `(o ,name . ,ann-args)
             `(,name . ,ann-args))))

      (('p _ name . args) =>
       (let* ((def   (ann-lookup-def name))
              (def-x (exp/att def))
              (btp   (def//btp def-x))
              (ann-args  (ann-args args btp)))
         `(p ,name . ,ann-args)))

      (('lambda x _ _) =>
       `(lambda ,(lam//index x)))

      (('a _ proc . args) =>
       (let ((proc-acs  (exp/acs proc)))
         (cond
           ((or (exp/bottom? proc)
                (exp/static? proc)
                (and (exp/closure? proc) (null? proc-acs)))
            (ann-no-result))
           ((exp/closure? proc)
            ;; All lambdas in proc-acs have the same btp!
            ;; So let's take the first one.
            (let* ((lam   (ann-lookup-lam (car proc-acs)))
                   (lam-x (exp/att lam))
                   (btp   (lam//btp lam-x)))
              `(a ,proc-acs ,(ann-eval-exp proc) . ,(ann-args args btp))))
           (else
             (error "ann-eval-exp: unexpected expression to apply:" proc)))))

      (_ =>
        (error "ann-eval-exp: unknown syntactic form:" e))))
  
  (define (ann-eval-exp* e*)
    (map ann-eval-exp e*))
  
  ;; ------------------------------------ ;;
  ;; (make-annotated-program! o-file pgm) ;;
  ;; ------------------------------------ ;;
  
  (display "Annotating program...")(newline)
  (set! o-port (open-output-file o-file))
  (set-line-length! 78 o-port)
  (set! **pgm-to-annotate** pgm)
  (with (( (ldf* adt* _ def* lam*)  pgm ))
    (write-item
      `(*STYLE* ,(if cps-style? 'continuation-passing 'direct)))
    (write-item `(*LOAD-FILES* . ,ldf*))
    (write-item `(*ADT-FILES* . ,adt*))
    (display-item "(*DEFINITIONS*")
    (for-each (lambda (def) (write-item (ann-def def))) def*)
    (display-item ")")
    (display-item "(*LAMBDAS*")
    (for-each (lambda (lam) (write-item (ann-lam lam))) lam*)
    (display-item ")")
    (close-output-port o-port)
    'OK))
