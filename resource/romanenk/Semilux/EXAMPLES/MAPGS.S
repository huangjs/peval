;; File: MAPGS.S

;; Try D-specializing it with respect to NULL.DAT.

(loadt "scheme.adt")

(define (run u)
   (run-map 999 u))

(define (run-map inc u)
  (my-map (lambda (x) (+ inc x)) u))

(define (my-map f lst)
  (if (null? lst)
      '()
      (cons (f (car lst)) (my-map f (cdr lst)))))