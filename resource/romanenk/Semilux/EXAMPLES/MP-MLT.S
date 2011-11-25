;; File: mp-mlt.s

(run '
  (program (pars x y) (vars out next kn)
    ((write x)
     (write y)
     (:= kn y)
     (while kn
       ((:= next (cons x next))
        (:= kn (cdr kn))))
     (write next)))
    '((a b c) (1 2 3))
  )