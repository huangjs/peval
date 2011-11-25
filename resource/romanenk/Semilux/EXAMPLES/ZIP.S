;; File: ZIP.S

;; Try SD-specializing it with respect to Z123.DAT.

(loadt "scheme.adt")

(define (start x y)
  (zipper x y))

(define (zipper x y)
  (cond
    ((null? x) y)
    ((null? y) x)
    (else
      `(,(car x) ,(car y) . ,(zipper (cdr x) (cdr y)))
      )))
