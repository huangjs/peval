;; File: CPS.S

;; Try SD-specializing it with respect to Z123.DAT.
;; Compare the results produced by the direct-style
;; partial evaluator with those produced by the
;; continuation-passing style partial evaluator.

(loadt "scheme.adt")

(define (run x y)
  ((begin (write y) (lambda (u v) u)) x (+ 1 y)))