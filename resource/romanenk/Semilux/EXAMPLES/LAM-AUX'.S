;; File: LAM-AUX'.S

(extend-syntax (upd)
  ((upd v w r)
   (lambda (v$) (if (equal? v$ v) w (r v$)))))

(define (is-cst? e)
  (and (pair? e) (eq? (car e) 'quote)))
(define (cst-c e)
  (cadr e))

(define (is-var? e)
  (symbol? e))
(define (var-v e) e)

(define (is-binop? e)
  (and (pair? e) (eq? (car e) 'binop)))
(define (binop-b e) (cadr e))
(define (binop-e1 e) (caddr e))
(define (binop-e2 e) (cadddr e))

(define (is-if? e)
  (and (pair? e) (eq? (car e) 'if)))
(define (if-e1 e) (cadr e))
(define (if-e2 e) (caddr e))
(define (if-e3 e) (cadddr e))

(define (is-lambda? e)
  (and (pair? e) (eq? (car e) 'lambda)))
(define (lambda-v e) (cadr e))
(define (lambda-e e) (caddr e))

(define (is-letrec? e)
  (and (pair? e) (eq? (car e) 'letrec)))
(define (letrec-v e) (cadr e))
(define (letrec-e1 e) (caddr e))
(define (letrec-e2 e) (cadddr e))

(define (is-apply? e)
  (and (pair? e) (not (memq (car e) '(quote binop if lambda letrec)))))
(define (apply-e1 e) (car e))
(define (apply-e2 e) (cadr e))

(define (ext op a1 a2)
  ((eval op) a1 a2))
