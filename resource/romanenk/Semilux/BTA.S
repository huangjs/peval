;; File: bta.s

(define (bt-analysis! cps-style? pgm btp)
  
  (define (ide/name e)
    (with (( ('ide _ name)  e )) name))
  
  (define (btp-bottom-value formals)
    (map (lambda (i) 'B) formals))
  
  ;; Initializing bt tags.
  
  (define (init-bt-pgm! pgm)
    (with (( (_ _ _ def* _)  pgm ))
          (for-each
            (lambda (def)
              (with (( (name x formals body)  def ))
                    (def//btp! x (btp-bottom-value formals))
                    (def//unfold?! x #t)
                    (def//ret-bt! x 'B)
                    (init-bt-exp! body)))
            def*)))
  
  (define (init-bt-exp! e)
    (exp/bt! e 'B)
    (select
      (e)
      
      (('quote x _) => '())
      
      (('ide x _) => '())
      
      (('if x e1 e2 e3) =>
       (init-bt-exp! e1) (init-bt-exp! e2) (init-bt-exp! e3))
      
      (('let x _ actual body) =>
       (let//unfold?! x #t) (init-bt-exp! actual) (init-bt-exp! body))
      
      (('begin x actual body) =>
       (init-bt-exp! actual) (init-bt-exp! body))
      
      (('o x name . args) =>
       (init-bt-exp*! args))
      
      (('error x . args) =>
       (init-bt-exp*! args))
      
      (('p x name . args) =>
       (init-bt-exp*! args))
      
      (('lambda x formals body) =>
       (lam//unfold?! x #t)
       (init-bt-exp*! (lam//free-vars x))
       (init-bt-exp! body)
       (lam//btp! x (btp-bottom-value formals))
       (lam//ret-bt! x 'B))
      
      (('a x proc . args) =>
       (init-bt-exp! proc)
       (init-bt-exp*! args))
      
      (_ =>
         (error "init-bt-exp!: unknown syntactic form:" e))))
  
  (define (init-bt-exp*! e*)
    (for-each init-bt-exp! e*))
  
  ;; Binding time analysis.
  
  (define **modified?** #f)
  
  (define (lookup-od name pgm)
    (with (( (_ _ od* _ _)  pgm ))
          (assq name od*)))
  
  (define (lookup-def name pgm)
    (with (( (_ _ _ def* _)  pgm ))
          (assq name def*)))
  
  (define (lookup-lam i pgm)
    (with (( (_ _ _ _ lam*)  pgm ))
          (list-ref lam* i)))
  
  (define (bt-explore-def! def pgm)
    (with (( (_ x formals body)  def ))
          (upd-def-ret-bt!
            def pgm
            (bt-eval!
              body
              (mk-bt-env formals (map bt-remove-extern (def//btp x)))
              pgm))))
  
  (define (bt-eval! e r pgm)
    ;; e == expression
    ;; r == environment of bt-values (a flat list)
    ;; pgm == program
    ;; returns: a bt-value for the expression
    (select
      (e)
      
      (('quote _ _) =>
       (upd-exp-bt! e pgm 'S))
      
      (('ide x name) =>
       (upd-exp-bt! e pgm (bt-lub (exp//bt x) (lookup-ide name r))))
      
      (('if x e1 e2 e3) =>
       (let ((btv-test  (bt-eval! e1 r pgm))
             (btv-thel  (bt-lub (bt-eval! e2 r pgm)
                                (bt-eval! e3 r pgm))))
         (upd-exp-bt!
           e pgm (bt-lub (bt-select-resid btv-test) btv-thel))))
      
      (('let x formal actual body) =>
       (let* ((btv-actual  (bt-eval! actual r pgm))
              (btv-formal  (bt-remove-extern btv-actual))
              (body-r      (upd-bt-env formal btv-formal r))
              (btv-body    (bt-eval! body body-r pgm)))
         (when (eq? btv-actual 'X)
               (let//unfold?! x #f))
         (upd-exp-bt!
           e pgm
           (if cps-style?
               btv-body
               (bt-lub (bt-select-resid btv-actual) btv-body)))))
      
      (('begin x actual body) =>
       (let* ((btv-actual  (bt-eval! actual r pgm))
              (btv-body    (bt-eval! body r pgm)))
         (upd-exp-bt!
           e pgm
           (if cps-style?
               btv-body
               (bt-lub (bt-select-resid btv-actual) btv-body)))))
      
      (('o x name . args) =>
       (upd-exp-bt!
         e pgm
         (apply (bto-func (od/bto (lookup-od name pgm)))
                (bt-eval*! args r pgm))))
      
      (('error x . args) =>
       (upd-exp-bt!
         e pgm
         (foldl bt-lub 'S (bt-eval*! args r pgm))))
      
      (('p x name . args) =>
       (with* (( btp  (bt-eval*! args r pgm) )
               ( def  (lookup-def name pgm) )
               ( (_ def-x _ _)  def ))
              (upd-def-btp! def btp pgm)
              (upd-exp-bt! e pgm (def//ret-bt def-x))))
      
      (('lambda x formals body) =>
       (when (not (lam//unfold? x))
             (upd-lam-btp-dynamic! e pgm)
             (upd-lam-ret-bt! e pgm 'D))
       (let* ((free-vars      (lam//free-vars x))
              (free-names     (map ide/name free-vars))
              (btp-formals    (map bt-remove-extern (lam//btp x)))
              (btp-free-vars  (bt-eval*! free-vars r pgm))
              (lam-r  (append (mk-bt-env formals btp-formals)
                              (mk-bt-env free-names btp-free-vars))))
         (upd-lam-ret-bt! e pgm (bt-eval! body lam-r pgm)))
       (upd-exp-bt!
         e pgm (if (lam//unfold? x) 'C 'D)))
      
      (('a x proc . args) =>
       (let* ((btv   (bt-eval! proc r pgm))
              (btp   (bt-eval*! args r pgm)))
         (when (bt-resid? btv)
               (for-each (lambda (arg) (raise-lambdas! (exp/acs arg) pgm))
                         args))
         (let ((lam-ret-btv
                 (foldl-map bt-lub 'B
                            (lambda (i)
                              (let* ((lam  (lookup-lam i pgm))
                                     (lam-x (exp/att lam)))
                                (upd-lam-btp! lam btp pgm)
                                (upd-lam-ret-bt! lam pgm (exp//bt x))
                                (lam//ret-bt lam-x)))
                            (exp/acs proc))))
           (upd-exp-bt!
             e pgm
             (if cps-style?
                 lam-ret-btv
                 (bt-lub
                   (bt-with-resid (bt-select-resid btv) btp)
                   lam-ret-btv))))))
      
      (_ =>
         (error "Unknown syntactic form:" e))))
  
  (define (bt-eval*! e* r pgm)
    (map (lambda (arg) (bt-eval! arg r pgm)) e*))
  
  (define (upd-def-btp! def btp pgm)
    (let* ((x        (exp/att def))
           (old-btp  (def//btp x))
           (new-btp  (map-2 bt-lub old-btp btp)))
      (when (not (equal? new-btp old-btp))
            (def//btp! x new-btp)
            (set! **modified?** #t)
            (when (not cps-style?)
                  (upd-def-ret-bt!
                    def pgm (bt-with-resid (def//ret-bt x) new-btp)))
            )))
  
  (define (upd-lam-btp! lam btp pgm)
    (let* ((x        (exp/att lam))
           (old-btp  (lam//btp x)))
      (when (= (length old-btp) (length btp))
            (let ((new-btp  (map-2 bt-lub old-btp btp)))
              (when (not (equal? new-btp old-btp))
                    (lam//btp! x new-btp)
                    (set! **modified?** #t)
                    (when (not cps-style?)
                          (upd-lam-ret-bt!
                            lam pgm (bt-with-resid (lam//ret-bt x) new-btp)))
                    )))))
  
  (define (upd-lam-btp-dynamic! lam pgm)
    (let* ((x        (exp/att lam))
           (old-btp  (lam//btp x))
           (new-btp  (map (lambda (btv) (bt-lub 'D btv)) old-btp)))
      (when (not (equal? new-btp old-btp))
            (lam//btp! x new-btp)
            (set! **modified?** #t)
            (when (not cps-style?)
                  (upd-lam-ret-bt!
                    lam pgm (bt-with-resid (lam//ret-bt x) new-btp)))
            )))
  
  (define (upd-node-bt! x pgm node//bt node//bt! btv acs)
    (let* ((old-btv  (node//bt x))
           (new-btv  (bt-lub old-btv btv)))
      (when (not (eq? old-btv new-btv))
            (node//bt! x new-btv)
            (set! **modified?** #t)
            (when (and (bt-resid? new-btv)
                       (not (bt-resid? old-btv)))
                  (raise-lambdas! acs pgm)))
      new-btv))
  
  (define (upd-def-ret-bt! def pgm btv)
    (with (( (_ x _ body)  def ))
          (upd-node-bt!
            x pgm def//ret-bt def//ret-bt! btv (exp/acs body))))
  
  (define (upd-lam-ret-bt! lam pgm btv)
    (with (( ('lambda x _ body) lam ))
          (upd-node-bt!
            x pgm lam//ret-bt lam//ret-bt! btv (exp/acs body))))
  
  (define (upd-exp-bt! e pgm btv)
    (upd-node-bt!
      (exp/att e) pgm exp//bt exp//bt! btv (exp/acs e)))
  
  (define (raise-lambdas! acs pgm)
    (for-each
      (lambda (i)
        (let* ((lam  (lookup-lam i pgm))
               (x    (exp/att lam)))
          (when (lam//unfold? x)
                (set! **modified?** #t)
                (lam//unfold?! x #f))))
      acs))
  
  (define (bto-func bto)
    (case bto
      ((transparent) bt-lub-s)
      ((dynamic)     bt-lub-d)
      ((opaque)      bt-lub-x)))
  
  (define (bt-lub-s . btv*)
    (foldl bt-lub 'S btv*))
  
  (define (bt-lub-d . btv*)
    (foldl bt-lub 'D btv*))
  
  (define (bt-lub-x . btv*)
    (foldl bt-lub 'X btv*))
  
  (define (lookup-ide name r)
    (cdr (assq name r)))
  
  (define (mk-bt-env names values)
    (map-2 cons names values))
  
  (define (upd-bt-env name value r)
    `((,name . ,value) . ,r))
  
  ;; ---------------------- ;;
  ;; (bt-analysis! pgm btp) ;;
  ;; ---------------------- ;;
  
  ;; btp == binding time pattern of g's arguments
  ;; pgm == program
  
  (init-bt-pgm! pgm)
  (with* (( (_ _ _ def* _)  pgm )
          ( goal-def  (car def*) )
          ( x  (exp/att goal-def) ))
         (display "Binding time analysis: ")
         (def//unfold?! x #f)
         (upd-def-btp! goal-def btp pgm)
         (upd-def-ret-bt! goal-def pgm 'D)
         (let loop ()
           (display "*")
           (set! **modified?** #f)
           (for-each (lambda (def) (bt-explore-def! def pgm)) def*)
           (if **modified?**
               (loop)
               (begin (newline) 'OK)))))
