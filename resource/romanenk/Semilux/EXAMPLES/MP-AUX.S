;; File: mp-aux.s

(define (p->v1* p) (cdr (cadr p)))
(define (p->v2* p) (cdr (caddr p)))
(define (p->b p) (cadddr p))

(define (empty-block? b) (null? b))
(define (block->head b) (car b))
(define (block->tail b) (cdr b))

(define (is-assignment? c) (eq? (car c) ':=))
(define (c-assignment->v c) (cadr c))
(define (c-assignment->e c) (caddr c))

(define (is-conditional? c) (eq? (car c) 'if))
(define (c-conditional->e c) (cadr c))
(define (c-conditional->b1 c) (caddr c))
(define (c-conditional->b2 c) (cadddr c))

(define (is-while? c) (eq? (car c) 'while))
(define (c-while->e c) (cadr c))
(define (c-while->b c) (caddr c))

(define (is-write? c) (eq? (car c) 'write))
(define (c-write->e c) (cadr c))

(define (is-constant? e) (and (pair? e) (eq? (car e) 'quote)))
(define (e-constant->value e) (cadr e))

(define (is-variable? e) (symbol? e))
(define (e-variable->name e) e)

(define (is-prim? e)
  (and (pair? e) (not (eq? (car e) 'quote))))
(define (e->operator e) (car e))
(define (e->e e) (cadr e))
(define (e->e1 e) (cadr e))
(define (e->e2 e) (caddr e))

(define (is-cons? op) (eq? op 'cons))
(define (is-equal? op) (eq? op 'equal?))
(define (is-car? op) (eq? op 'car))
(define (is-cdr? op) (eq? op 'cdr))
(define (is-atom?? op) (eq? op 'atom?))

(define (is-true? value)
  (and (not (eq? value #!FALSE)) (not (null? value))))

(define (init-environment v1* v2*)
  (append v1* v2*))

(define (lookup-env v env)
  (let loop ((n 0) (rest env))
    (cond 
      ((null? rest)
       (error "Variable not found in environment" v env))
      ((eq? v (car rest))
       n)
      (else
        (loop (+ 1 n) (cdr rest))))))

(define mp-store #!FALSE)

(define (init-store! input-v1* length-v2*)
  (set! mp-store
    (append
      input-v1*
      (let loop ((n length-v2*))
        (if (= n 0)
            '()
            (cons '() (loop (- n 1))))))))

(define (update-store! location value)
  (set-car! (list-tail mp-store location) value))

(define (lookup-store location)
  (list-ref mp-store location))

(define (free-store!)
  (set! mp-store #!FALSE))
