;; File: LAM-INT'.S

;; Try SD-specializing it with respect to LAM-FCT.DAT.

(load "lam-aux'.fsl")
(loadt "scheme.adt")
(loadt "lam-int'.adt")

(define (run e w) (_e e (lambda (v) w)))

(define (_e e r)
  (cond
    ((is-cst? e)
     (cst-c e))
    ((is-var? e)
     (r (var-v e)))
    ((is-binop? e)
     (ext (binop-b e) (_e (binop-e1 e) r) (_e (binop-e2 e) r)))
    ((is-if? e)
     (if (_e (if-e1 e) r)
         (_e (if-e2 e) r)
         (_e (if-e3 e) r)))
    ((is-lambda? e)
     (lambda (w)
       (_e (lambda-e e) (upd (lambda-v e) w r))))
    ((is-letrec? e)
     (_e (letrec-e2 e)
         (fix (lambda (r1)
                (upd (letrec-v e) (_e (letrec-e1 e) r1) r)))))
    ((is-apply? e)
     ((_e (apply-e1 e) r) (_e (apply-e2 e) r)))
    (else
      (error "unknown form:" e))))

(define (fix f) (lambda (x) ((f (fix f)) x)))
