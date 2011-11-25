;; File: MP-INT.S

;; Try SD-specializing it with respect to MP-MLT.DAT.

(load "mp-aux.fsl")
(loadt "scheme.adt")
(loadt "mp-int.adt")

(define (run p value*)        ;; Program * Value* -> Undef
  (let* ((v2*  (p->v2* p))
         (env  (init-environment (p->v1* p) v2*)))
    (begin
      (init-store! value* (length v2*))
      (eval-block (p->b p) env)
      (free-store!))))

(define (eval-block b env)    ;; Block * Env -> Undef
  (if (empty-block? b)
      "Finished block"
      (eval-commands (block->head b) (block->tail b) env)))

(define (eval-commands c b env)  ;; Command * Block * Env -> Undef
  (if (empty-block? b)
      (eval-command c env)
      (begin (eval-command c env)
             (eval-commands (block->head b) (block->tail b) env))))

(define (eval-command c env)
  (cond
    ((is-assignment? c)
     (update-store! (lookup-env (c-assignment->v c) env)
                    (eval-expression (c-assignment->e c) env)))
    ((is-conditional? c)
     (if (is-true? (eval-expression (c-conditional->e c) env))
         (eval-block (c-conditional->b1 c) env)
         (eval-block (c-conditional->b2 c) env)))
    ((is-while? c)
     (if (is-true? (eval-expression (c-while->e c) env))
         (begin (eval-block (c-while->b c) env)
                (eval-command c env))
         "Finished loop"))
    ((is-write? c)
     (begin
       (write (eval-expression (c-write->e c) env))
       (newline)
       "Finished write"))
    (else
      "Error - unknown command")))

(define (eval-expression e env)    ;; Exp * Env -> Value
  (cond
    ((is-constant? e)
     (e-constant->value e))
    ((is-variable? e)
     (lookup-store (lookup-env (e-variable->name e) env)))
    ((is-prim? e)
     (let ((op (e->operator e)))
       (cond
         ((is-cons? op)
          (cons (eval-expression (e->e1 e) env)
                (eval-expression (e->e2 e) env)))
         ((is-equal? op)
          (equal? (eval-expression (e->e1 e) env)
                  (eval-expression (e->e2 e) env)))
         ((is-car? op)
          (car (eval-expression (e->e e) env)))
         ((is-cdr? op)
          (cdr (eval-expression (e->e e) env)))
         ((is-atom?? op)
          (not (pair? (eval-expression (e->e e) env))))
         (else
           "Unknown operator"))))
       (else
         "Unknown expression form")))
