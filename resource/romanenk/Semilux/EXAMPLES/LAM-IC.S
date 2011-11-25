;; File: LAM-IC.S

;; Try SD-specializing it with respect to LAM-FCT.DAT.

(load "lam-aux.fsl")
(loadt "scheme.adt")
(loadt "lam-int.adt")

(define (run e w)
  (_e e (lambda (v) w) (lambda (w) w)))

(define (_e e r c)
  (select
    (e)

    (_ & (symbol? e) => (c (r e)))
    
    (('quote value) =>
     (c value))

    (('binop op e1 e2) =>
     (_e e1 r
         (lambda (w1)
           (_e e2 r
               (lambda (w2)
                 (c (ext op w1 w2)))))))

    (('if e1 e2 e3) =>
     (_e e1 r
         (lambda (w1)
           (if w1 (_e e2 r c) (_e e3 r c)))))

    (('lambda v body) =>
     (c (lambda (w1 c1)
          (_e body (upd v w1 r) (lambda (w) (c1 w))))))

    (('letrec v actual body) =>
     (_e body
         (fix (lambda (r1)
                (upd v (_e actual r1 (lambda (w) w)) r)))
       c))

    ((e1 e2) =>
     (_e e1 r
         (lambda (w1)
           (_e e2 r (lambda (w2) (w1 w2 (lambda (w) (c w))))))))

    (_ =>
      (error "unknown form:" e))))

(define (fix f) (lambda (x) ((f (fix f)) x)))
