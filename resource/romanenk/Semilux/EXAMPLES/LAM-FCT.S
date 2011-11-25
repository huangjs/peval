;; File: lam-fct.s

(write
(run '
  (letrec f (lambda
              x
              (if (binop = x '0) '1 (binop * x (f (binop - x '1)))))
            (f input))
  4)
)(newline)