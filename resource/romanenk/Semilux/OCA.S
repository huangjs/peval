;; File: oca.s

;; Occurrence counting analysis.

(define (oc-analysis! cps-style? pgm)
  
  (define (mk-ide name)
    `(ide ,(make-vector 2) ,name))
  
  (define (ide/name e)
    (with (( ('ide _ name)  e )) name))
  
  (define (mk-let formal actual body)
    ;; 0   1  2
    ;; acs bt unfold?
    `(let ,(make-vector 3)  ,formal ,actual ,body))
  
  (define (def/body! def v) (list-set! def 3 v))
  (define (lam/body! e v) (list-set! e 3 v))
  
  (define (oc-def! def)
    (with* (( (_ x formals body)  def )
            ( acsp     (def//acsp x) )
            ( btp      (def//btp x) ))
           (oc-exp! body)
           (when (def//unfold? x)
                 (set! body (oc-insert-lets formals acsp btp body))
                 (def/body! def body))))
  
  (define (oc-insert-lets formals acsp btp body)
    (if (null? formals)
        body
        (let* ((formal  (car formals))
               (formals (cdr formals))
               (acs     (car acsp))
               (acsp    (cdr acsp))
               (btv     (car btp))
               (btp     (cdr btp)))
          (if (oc-unsafe? formal btv body)
              (oc-mk-let formal acs btv
                         (oc-insert-lets formals acsp btp body))
              (oc-insert-lets formals acsp btp body)))))
  
  (define (oc-unsafe? var btv exp)
    (or (eq? btv 'X)
        (and (eq? btv 'D)
             (not (eq? (oc-count var exp)
                       'one-hash)))))
  
  (define (oc-mk-let formal acs btv body)
    (let* ((actual   (mk-ide formal))
           (new-let  (mk-let formal actual body))
           (bt-body  (exp/bt body)))
      (exp/acs! actual acs)
      (exp/bt! actual btv)
      (exp/acs! new-let (exp/acs body))
      (exp/bt! new-let (if cps-style? bt-body (bt-lub btv bt-body)))
      (let//unfold?! (exp/att new-let) #f)
      new-let))
  
  (define (oc-exp! e)
    (select
      (e)
      
      (('quote _ _) => '())
      
      (('ide _ _) => '())
      
      (('if _ e1 e2 e3) =>
       (oc-exp! e1) (oc-exp! e2) (oc-exp! e3))
      
      (('let x formal actual body) =>
       (let ((btv     (exp/bt actual)))
         (when (and (let//unfold? x)
                    (oc-unsafe? formal btv body))
               (let//unfold?! x #f))
         (oc-exp! actual)
         (oc-exp! body)))
      
      (('begin _ actual body) =>
       (oc-exp! actual) (oc-exp! body))
      
      (('o _ _ . args) =>
       (oc-exp*! args))
      
      (('error _ . args) =>
       (oc-exp*! args))
      
      (('p _ _ . args) =>
       (oc-exp*! args))
      
      (('lambda x formals body) =>
       (let ((acsp     (lam//acsp x))
             (btp      (lam//btp x)))
         (oc-exp! body)
         (when (lam//unfold? x)
               (lam/body! e (oc-insert-lets formals acsp btp body)))))
      
      (('a _ proc . args) =>
       (oc-exp! proc) (oc-exp*! args))
      
      (_ =>
         (error "oc-exp!: unknown syntactic form:" e))))
  
  (define (oc-exp*! e*)
    (for-each oc-exp! e*))
  
  (define (plus-hash x y)
    (cond
      ((eq? x 'zero-hash) y)
      ((eq? y 'zero-hash) x)
      (else   'any-hash)))
  
  (define (lub-hash x y)
    (if (eq? x y) x 'any-hash))
  
  (define (oc-count i e)
    
    (define (count e)
      (select
        (e)
        
        (_ & (exp/static? e) =>
           'zero-hash)
        
        (('ide _ name) =>
         (if (eq? name i) 'one-hash 'zero-hash))
        
        (('if _ e1 e2 e3) =>
         (plus-hash (count e1)
                    (lub-hash (count e2) (count e3))))
        
        (('let _ formal actual body) =>
         (plus-hash (count actual)
                    (if (eq? formal i)
                        'zero-hash
                        (count body))))
        
        (('begin _ actual body) =>
         (plus-hash (count actual)
                    (count body)))
        
        (('o _ _ . args) =>
         (count* args))
        
        (('error _ . args) =>
         (count* args))
        
        (('p _ _ . args) =>
         (count* args))
        
        (('lambda x formals body) =>
         (if (memq-map i ide/name (lam//free-vars x))
             'any-hash
             'zero-hash))
        
        (('a _ proc . args) =>
         (plus-hash (count proc)
                    (count* args)))
        
        (_ =>
           (error "oc-count: unknown syntactic form:" e))))
    
    (define (count* e*)
      (foldl-map plus-hash 'zero-hash count e*))
    
    (count e))
  
  ;; ------------------ ;;
  ;; (oc-analysis! pgm) ;;
  ;; ------------------ ;;
  
  (display "Occurrence counting analysis...")(newline)
  (with (( (_ _ _ def* _)  pgm ))
        (for-each oc-def! def*)))
