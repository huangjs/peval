;; File: LAM-INT.S

;; Try SD-specializing it with respect to LAM-FCT.DAT.

(load "lam-aux.fsl")
(loadt "scheme.adt")
(loadt "lam-int.adt")

(define (run e w) (_e e (lambda (v) w)))

(define (_e e r)
  (select
    (e)

    (_ & (symbol? e) => (r e))

    (('quote value) =>
     value)

    (('binop op e1 e2) =>
     (ext op (_e e1 r) (_e e2 r)))

    (('if e1 e2 e3) =>
     (if (_e e1 r) (_e e2 r) (_e e3 r)))

    (('lambda v body) =>
     (lambda (w) (_e body (upd v w r))))

    (('letrec v actual body) =>
     (_e body (fix (lambda (r1) (upd v (_e actual r1) r)))))

    ((e1 e2) =>
     ((_e e1 r) (_e e2 r)))

    (_ =>
      (error "unknown form:" e))))

(define (fix f) (lambda (x) ((f (fix f)) x)))
