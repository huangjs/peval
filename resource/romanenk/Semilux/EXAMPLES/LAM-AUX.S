;; File: LAM-AUX.S

(extend-syntax (upd)
  ((upd v w r)
   (lambda (v$) (if (equal? v$ v) w (r v$)))))

(define (ext op a1 a2)
  ((eval op) a1 a2))
