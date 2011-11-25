;; File: NLP-INT.S

;; Try SD-specializing it with respect to
;; either NLP-P1.DAT or NLP-P2.DAT.

(loadt "scheme.adt")

;; Pat * Dat --> Ans

(define (match-pat p d)
  (dispatch p d '() '() (lambda (x y) (list x y))))

;; Pat * Dat * List(Num) * List(Val) * Cont --> Ans

(define (dispatch p d ln lv k)
  (select
    (p)

    (('cst v) =>
     (and (equal? v d) (k ln lv)))
    (('var n) =>
     (assoc-c n ln lv
       (lambda (v) (and (equal? v d) (k ln lv)))
       (lambda () (k (cons n ln) (cons d lv)))))
    (('seq . p*) =>
     (match-seq p* d ln lv k))

    ))

;; List(Pat) * Dat * List(Num) * List(Val) * Cont --> Ans

(define (match-seq p* d ln lv k)
  (if (null? p*)
      (and (null? d) (k ln lv))
      (and (pair? d)
           (dispatch (car p*) (car d) ln lv
                     (lambda (ln lv)
                       (match-seq (cdr p*) (cdr d) ln lv k))))))

(define (assoc-c n ln lv sc fc)
  (cond ((null? ln)
         (fc))
        ((equal? n (car ln))
         (sc (car lv)))
        (else
          (assoc-c n (cdr ln) (cdr lv) sc fc))))
