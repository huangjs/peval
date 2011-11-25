; The MP-program power

(program (pars x y) (vars out next kn)
  ((:= kn y)

   (while kn
     ((:= next (cons x next))
      (:= kn (cdr kn))))

   (:= out (cons next out))

   (while next
     ((if (cdr (car next))
        ((:= next (cons (cdr (car next)) (cdr next)))

         (while kn
           ((:= next (cons x next))
            (:= kn (cdr kn))))
         (:= out (cons next out)))
      ;else
        ((:= next (cdr next))
         (:= kn (cons '1 kn))))))))
