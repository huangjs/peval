;; File: MAPG.S

;; Try DD-specializing it with respect to NULL.DAT.

(loadt "scheme.adt")

(define (run inc u)
  (my-map (lambda (x) (+ inc x)) u))

(define (my-map f lst)
  (if (null? lst)
      '()
      (cons (f (car lst)) (my-map f (cdr lst)))))