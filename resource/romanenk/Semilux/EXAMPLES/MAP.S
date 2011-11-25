;; File: MAP.S

;; Try D-specializing it with respect to NULL.DAT.

(loadt "scheme.adt")

(define (run u)
  (my-map (lambda (x) (+ 1 x)) u))

(define (my-map f lst)
  (if (null? lst)
      '()
      (cons (f (car lst)) (my-map f (cdr lst)))))