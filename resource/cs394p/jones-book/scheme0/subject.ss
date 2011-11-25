; File "subject.ss" -- Various Scheme0 subject programs
; Partial evaluator for first order functional language
; Peter Sestoft 1992-05-01

(define power1 '
((defin (pow n x) 
   (if (op equal? n 0)
       1
       (op * x (call pow (op - n 1) x)))))
)

(define power2 '
((define (pow n x)
    (if (op equal? n 0)
        1
        (if (op even? n)
            (call pow (op quotient n 2) (op * x x))
            (op * x (call pow (op - n 1) x))))))
)

(define swap '
   ((define (swap x y)
       (call swap y x))))

; A Norma2 interpreter (Bird 1976)

(define norma2 (desugar '(
(define (execute pgm x) (call run pgm pgm x '()))

(define (run pgm suf x y)
   (if (op null? suf) y
   (if (op equal? (hd suf) 'x:=x+1)
       (call run pgm (tl suf) (:: 1 x) y)
   (if (op equal? (hd suf) 'y:=y+1)
       (call run pgm (tl suf) x (:: 1 y))
   (if (op equal? (hd suf) 'x:=x-1)
       (call run pgm (tl suf) (tl x) y)
   (if (op equal? (hd suf) 'y:=y-1)
       (call run pgm (tl suf) x (tl y))
   (if (op equal? (hd (hd suf)) 'goto)
       (call run pgm (call hop pgm (tl (hd suf))) x y)
   (if (op equal? (hd (hd suf)) 'ifx=0)
       (if (op null? x)
           (call run pgm (call hop pgm (tl (hd suf))) x y)
           (call run pgm (tl suf) x y))
   (if (op equal? (hd (hd suf)) 'ify=0)
       (if (op null? y)
           (call run pgm (call hop pgm (tl (hd suf))) x y)
           (call run pgm (tl suf) x y))
       (call run pgm pgm y x)
)))))))))

(define (hop pgm dest)
   (if (op null? dest)
       pgm
       (call hop (tl pgm) (tl dest))
))
)))

; A Norma2 source program
(define twice '
   ((ifx=0 . (1 1 1 1 1))
    y:=y+1
    y:=y+1
    x:=x-1
    (goto . '())
))
