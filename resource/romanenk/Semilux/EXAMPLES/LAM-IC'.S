;; File: LAM-IC'.S

;; Try SD-specializing it with respect to LAM-FCT.DAT.

(load "lam-aux'.fsl")
(loadt "scheme.adt")
(loadt "lam-int'.adt")

(define (run e w)
  (_e e (lambda (v) w) (lambda (w) w)))

(define (_e e r c)
  (cond
    ((is-cst? e)
     (c (cst-c e)))
    ((is-var? e)
     (c (r (var-v e))))
    ((is-binop? e)
     (_e (binop-e1 e) r
         (lambda (w1)
           (_e (binop-e2 e) r
               (lambda (w2)
                 (c (ext (binop-b e) w1 w2)))))))
    ((is-if? e)
     (_e (if-e1 e) r
         (lambda (w1)
           (if w1 (_e (if-e2 e) r c) (_e (if-e3 e) r c)))))
    ((is-lambda? e)
     (c (lambda (w1 c1)
          (_e (lambda-e e) (upd (lambda-v e) w1 r) (lambda (w) (c1 w))))))
    ((is-letrec? e)
     (_e (letrec-e2 e)
         (fix (lambda (r1)
                (upd (letrec-v e) (_e (letrec-e1 e) r1 (lambda (w) w)) r)))
       c))
    ((is-apply? e)
     (_e (apply-e1 e) r
         (lambda (w1)
           (_e (apply-e2 e) r (lambda (w2) (w1 w2 (lambda (w) (c w))))))))
    (else
      (error "unknown form:" e))))

(define (fix f) (lambda (x) ((f (fix f)) x)))
