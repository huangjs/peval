;; File: CZIP.S

;; Try specializing it for 

(loadt "scheme.adt")

(define (start x y)
  ((c-zipper x) y))

(define (c-zipper x)
  (lambda (y)
    (cond
      ((null? x) y)
      ((null? y) x)
      (else
        `(,(car x) ,(car y) . ,((c-zipper (cdr x)) (cdr y)))
        ))))
