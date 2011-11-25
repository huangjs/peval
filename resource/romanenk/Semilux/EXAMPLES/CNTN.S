;; File: CNTN.S

;; Try SD-specializing it with respect to CNTN-1.DAT.

(loadt "scheme.adt")

(define (rename node n)
  (rename-c node n (lambda (r n) r)))

(define (rename-c node n c)
  (if (pair? node)
    (rename-c (car node) n
      (lambda (r1 n)
        (rename-c (cdr node) n
          (lambda (r2 n)
            (c (cons r1 r2) n)))))
    (c n (+ n 1))))
