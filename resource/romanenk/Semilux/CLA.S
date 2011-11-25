;; File: cla.s

(define (cl-analysis! pgm)
  
  (define (ide/name e)
    (with (( ('ide _ name)  e )) name))
  
  (define (acs-bottom-value) '())
  
  (define (acsp-bottom-value formals)
    (map (lambda (i) (acs-bottom-value)) formals))
  
  ;; Initializing acs tags.
  
  (define (init-acs-pgm! pgm)
    (with (( (_ _ _ def* _)  pgm ))
          (for-each
            (lambda (def)
              (with (( (name x formals body)  def ))
                    (def//acsp! x (acsp-bottom-value formals))
                    (init-acs-exp! body)))
            def*)))
  
  (define (init-acs-exp! e)
    (exp/acs! e (acs-bottom-value))
    (select
      (e)
      
      (('quote _ _) => '())
      
      (('ide _ _) => '())
      
      (('if _ e1 e2 e3) =>
       (init-acs-exp! e1) (init-acs-exp! e2) (init-acs-exp! e3))
      
      (('let _ _ actual body) =>
       (init-acs-exp! actual) (init-acs-exp! body))
      
      (('begin _ actual body) =>
       (init-acs-exp! actual) (init-acs-exp! body))
      
      (('o _ _ . args) =>
       (init-acs-exp*! args))
      
      (('error _ . args) =>
       (init-acs-exp*! args))
      
      (('p _ _ . args) =>
       (init-acs-exp*! args))
      
      (('lambda x formals body) =>
       (init-acs-exp*! (lam//free-vars x))
       (init-acs-exp! body)
       (lam//acsp! x (acsp-bottom-value formals)))
      
      (('a _ proc . args) =>
       (init-acs-exp! proc)
       (init-acs-exp*! args))
      
      (_ =>
         (error "init-acs-exp!: unknown syntactic form:" e))))
  
  (define (init-acs-exp*! e*)
    (for-each init-acs-exp! e*))
  
  ;;
  ;; Closure analysis.
  ;;
  
  (define **cl-arity-check** #t)
  
  (define **modified?** #f)
  
  (define (lookup-def name pgm)
    (with (( (_ _ _ def* _)  pgm ))
          (assq name def*)))
  
  (define (lookup-lam i pgm)
    (with (( (_ _ _ _ lam*)  pgm ))
          (list-ref lam* i)))
  
  (define (cl-explore-def! def pgm)
    (with (( (_ x formals body)  def ))
          (cl-eval! body (mk-cl-env formals (def//acsp x)) pgm)))
  
  (define (cl-eval! e r pgm)
    ;; e == expression
    ;; r == environment of abstract values (a flat list)
    ;; pgm == program
    ;; returns: an abstract closure set
    (select
      (e)
      
      (('quote _ _) =>
       (update-acs-tag! e (acs-bottom-value)))
      
      (('ide x name) =>
       (update-acs-tag! e (cl-union (exp//acs x) (lookup-ide name r))))
      
      (('if _ e1 e2 e3) =>
       (cl-eval! e1 r pgm)
       (update-acs-tag!
         e
         (cl-union
           (cl-eval! e2 r pgm)
           (cl-eval! e3 r pgm))))
      
      (('let _ formal actual body) =>
       (update-acs-tag!
         e
         (cl-eval! body
                   (upd-cl-env formal (cl-eval! actual r pgm) r)
                   pgm)))
      
      (('begin _ actual body) =>
       (cl-eval! actual r pgm)
       (update-acs-tag!
         e
         (cl-eval! body r pgm)))
      
      (('o _ _ . args) =>
       (update-acs-tag!
         e
         (cl-union-map (lambda (arg) (cl-eval! arg r pgm)) args)))
      
      (('error _ . args) =>
       (for-each (lambda (arg) (cl-eval! arg r pgm)) args)
       (update-acs-tag! e (acs-bottom-value)))
      
      (('p _ name . args) =>
       (with* (( acsp  (cl-eval*! args r pgm) )
               ( def   (lookup-def name pgm))
               ( (_ _ _ body)  def ))
              (cl-update-def-acsp! def acsp)
              (update-acs-tag! e (exp/acs body))))
      
      (('lambda x formals body) =>
       (let* ((free-ids   (lam//free-vars x))
              (free-names (map ide/name free-ids)))
         (cl-eval!
           body
           (append (mk-cl-env formals (lam//acsp x))
                   (mk-cl-env free-names (cl-eval*! free-ids r pgm)))
           pgm))
       (update-acs-tag! e (list (lam//index x))))
      
      (('a x proc . args) =>
       (let* ((arity (length args))
              (acsp  (cl-eval*! args r pgm))
              (acs   (cl-eval! proc r pgm)))
         (update-acs-tag!
           e
           (cl-union-map
             (lambda (i)
               (with* (( lam  (lookup-lam i pgm) )
                       ( ('lambda _ formals body)  lam ))
                      (cond
                        ((equal? (length formals) arity)
                         (cl-update-lam-acsp! lam acsp)
                         (exp/acs body))
                        (**cl-arity-check**
                          (error "cl-eval!: arity mismatch:" lam e*))
                        (else
                          (acs-bottom-value)))))
             acs))))
      
      (_ =>
         (error "cl-eval!: unknown syntactic form:" e))))
  
  (define (cl-eval*! e* r pgm)
    (map (lambda (e) (cl-eval! e r pgm)) e*))
  
  (define (update-acs-tag! e acs)
    (let* ((old-acs  (exp/acs e))
           (new-acs  (cl-union old-acs acs)))
      (when (not (equal? old-acs new-acs))
            (exp/acs! e new-acs)
            (set! **modified?** #t))
      new-acs))
  
  (define (cl-update-def-acsp! def acsp)
    (let* ((x         (exp/att def))
           (old-acsp  (def//acsp x))
           (new-acsp  (map-2 cl-union old-acsp acsp)))
      (when (not (equal? old-acsp new-acsp))
            (def//acsp! x new-acsp)
            (set! **modified?** #t))))
  
  (define (cl-update-lam-acsp! lam acsp)
    (let* ((x         (exp/att lam))
           (old-acsp  (lam//acsp x)))
      (when (equal? (length old-acsp) (length acsp))
            (let ((new-acsp  (map-2 cl-union old-acsp acsp)))
              (when (not (equal? old-acsp new-acsp))
                    (lam//acsp! x new-acsp)
                    (set! **modified?** #t))))))
  
  (define (cl-union-map f lst)
    (foldr-map cl-union (acs-bottom-value) f lst))
  
  (define (cl-union acs1 acs2)
    (cond
      ((null? acs1) acs2)
      ((null? acs2) acs1)
      (else
        (let ((i1 (car acs1)) (tail1 (cdr acs1))
              (i2 (car acs2)) (tail2 (cdr acs2)))
          (cond
            ((= i1 i2) (cons i1 (cl-union tail1 tail2)))
            ((< i1 i2) (cons i1 (cl-union tail1 acs2)))
            ((> i1 i2) (cons i2 (cl-union acs1 tail2))))))))
  
  (define (lookup-ide name r)
    (cdr (assq name r)))
  
  (define (mk-cl-env names values)
    (map-2 cons names values))
  
  (define (upd-cl-env name value r)
    `((,name . ,value) . ,r))
  
  ;; ------------------ ;;
  ;; (cl-analysis! pgm) ;;
  ;; ------------------ ;;
  
  (init-acs-pgm! pgm)
  (with (( (_ _ _ def* lam*)  pgm ))
        (display "Closure analysis: ")
        (let loop ()
          (display "*")
          (set! **modified?** #f)
          (for-each (lambda (def) (cl-explore-def! def pgm)) def*)
          (if **modified?**
              (loop)
              (begin (newline) 'OK)))))
