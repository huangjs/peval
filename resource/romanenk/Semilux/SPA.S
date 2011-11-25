;; File: spa.s

;; Analysis of specialization points and
;; insertion of new procedure calls.

(define (sp-analysis! cps-style? pgm)
  
  (define (pgm/def*! pgm v) (list-set! pgm 3 v))
  
  (define (mk-def name formals body)
    ;; 0     1    2        3
    ;; acsp  btp  unfold?  ret-bt
    `(,name ,(make-vector 4) ,formals ,body))
  
  (define (ide/name e)
    (with (( ('ide _ name)  e )) name))
  
  (define (if/test! e v) (list-set! e 2 v))
  (define (if/then! e v) (list-set! e 3 v))
  (define (if/else! e v) (list-set! e 4 v))
  
  (define (let/actual! e v) (list-set! e 3 v))
  (define (let/body! e v) (list-set! e 4 v))
  
  (define (begin/actual! e v) (list-set! e 2 v))
  (define (begin/body! e v) (list-set! e 3 v))
  
  (define (o-call/args! e v) (set-cdr! (list-tail e 2) v))
  
  (define (mk-p-call name args)
    `(p ,(make-vector 2) ,name . ,args))
  
  (define (p-call/args! e v) (set-cdr! (list-tail e 2) v))
  
  (define (lam/body! e v) (list-set! e 3 v))
  
  (define (app/proc! e v) (list-set! e 2 v))
  (define (app/args! e v) (set-cdr! (list-tail e 2) v))
  
  (define (mk-error args)
    `(error ,(make-vector 2) . ,args))
  (define (error/args! e v) (set-cdr! (list-tail e 1) v))
  
  (define (def/body! def v) (list-set! def 3 v))
  
  
  (define **def-list** #f)
  
  (define (sp-def! goal-name def)
    (with* (( (name def-x _ body)  def ))
           (init-new-proc-name! name)
           (select
             (body)
             
             (_
               & (eq? name goal-name) =>
               (def/body! def (sp-exp! body)))
             
             (('if _ e1 e2 e3)
              & (bt-resid? (exp/bt e1)) =>
              (def//unfold?! def-x #f)
              (sp-if! body))
             
             (('lambda x _ lam-body)
              & (and (not (lam//unfold? x))
                     (not (trivial? lam-body))) =>
              (def//unfold?! def-x #f)
              (sp-lam! body))
             
             (_ =>
                (def/body! def (sp-exp! body))))))
  
  (define (sp-exp! e)
    (select
      (e)
      
      (('quote _ _) => e)
      
      (('ide _ _) => e)
      
      (('if _ e1 _ _) =>
       (if (bt-resid? (exp/bt e1))
           (let ((new-call  (make-new-proc-call e)))
             (sp-if! e)
             new-call)
           (sp-if! e)))
      
      (('let _ _ actual body) =>
       (let/actual! e (sp-exp! actual))
       (let/body! e (sp-exp! body))
       e)
      
      (('begin _ actual body) =>
       (begin/actual! e (sp-exp! actual))
       (begin/body! e (sp-exp! body))
       e)
      
      (('o _ _ . args) =>
       (o-call/args! e (sp-exp*! args))
       e)
      
      (('error _ . args) =>
       (error/args! e (sp-exp*! args))
       e)
      
      (('p _ _ . args) =>
       (p-call/args! e (sp-exp*! args))
       e)
      
      (('lambda x _ body) =>
       (if (and (not (lam//unfold? x))
                (not (trivial? body)))
           (let ((new-call  (make-new-proc-call e)))
             (sp-lam! e)
             new-call)
           (sp-lam! e)))
      
      (('a _ proc . args) =>
       (app/proc! e (sp-exp! proc))
       (app/args! e (sp-exp*! args))
       e)
      
      (_ =>
         (error "sp-exp!: unknown syntactic form:" e))))
  
  (define (sp-exp*! e*)
    (map sp-exp! e*))
  
  (define (sp-if! e)
    (with (( ('if _ e1 e2 e3)  e ))
          (if/test! e (sp-exp! e1))
          (if/then! e (sp-exp! e2))
          (if/else! e (sp-exp! e3))
          e))
  
  (define (sp-lam! e)
    (with (( ('lambda _ _ body)  e ))
          (lam/body! e (sp-exp! body))
          e))
  
  (define (trivial? e)
    (select
      (e)
      
      (('quote _ _) => #t)
      
      (('ide _ _) => #t)
      
      (('let _ _ actual body) =>
       (and (trivial? actual) (trivial? body)))
      
      (('begin _ actual body) =>
       (and (trivial? actual) (trivial? body)))
      
      (_ => #f)
      
      ))
  
  (define (make-new-proc-call e)
    (let* ((name     (new-proc-name!))
           (args     (find-free-vars-exp e '()))
           (formals  (map ide/name args))
           (acsp     (map exp/acs args))
           (btp      (map exp/bt args))
           (acs      (exp/acs e))
           (bt       (exp/bt e))
           (ret-bt   (if cps-style? (bt-with-resid bt btp) bt))
           (def      (mk-def name formals e))
           (def-x    (exp/att def)))
      (def//acsp! def-x acsp)
      (def//btp! def-x btp)
      (def//unfold?! def-x #f)
      (def//ret-bt! def-x ret-bt)
      (append! **def-list** (list def))  ;; !!!
      (let ((new-call (mk-p-call name args)))
        (exp/acs! new-call acs)
        (exp/bt! new-call ret-bt)
        new-call)))
  
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
        
        (('lambda x formals body) =>
         (scan* (lam//free-vars x) b* f*))
        
        (('a _ proc . args) =>
         (let ((f*  (scan* args b* f*)))
           (scan proc b* f*)))
        
        (_ =>
           (error "scan: unknown syntactic form:" e))))
    
    (define (scan* e* b* f*)
      (foldr (lambda (e f*) (scan e b* f*)) f* e*))
    
    ;; ------------------------- ;;
    ;; (find-free-vars-exp e b*) ;;
    ;; ------------------------- ;;
    
    (scan e b* '()))
  
  (define new-proc-prefix #f)
  (define new-proc-count #f)
  
  (define (init-new-proc-name! prefix)
    (set! new-proc-prefix
          (string-append (symbol->string prefix) "/$"))
    (set! new-proc-count 0))
  
  (define (new-proc-name!)
    (set! new-proc-count (+ 1 new-proc-count))
    (string->symbol
      (string-append
        new-proc-prefix
        (number->string new-proc-count '(int)))))
  
  ;; ------------------ ;;
  ;; (sp-analysis! pgm) ;;
  ;; ------------------ ;;
  
  (display "Specialization point analysis...")(newline)
  (with* (( (_ _ _ def* _)  pgm )
          ( (goal-name _ _ _)  (car def*) ))
         (set! **def-list**  (append def* '()))
         (let loop ((def-queue  def*))
           (if (null? def-queue)
               (begin (pgm/def*! pgm **def-list**)
                      (set! **def-list** #f))
               (let ((def (car def-queue)))
                 (sp-def! goal-name def)
                 (loop (cdr def-queue)))))))
