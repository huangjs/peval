; File "analyse.ss" -- Binding time analysis of Scheme0 programs
; Partial evaluator for first order functional language
; Revised 1994-08-22 to better conform to IEEE Scheme + eval

; General (monovariant or polyvariant) binding time analysis 

(define (finddivision program sdpattern update)
  (define (bv e vn vt division)
    (if (null? e)    division
    (if (number? e)  division
    (if (boolean? e) division
    (if (atom? e)    division
    (if (equal? (tag e) 'quote) division
    (if (equal? (tag e) 'if)
        (bv (e1 e) vn vt (bv (e2 e) vn vt (bv (e3 e) vn vt division)))
    (if (equal? (tag e) 'call)
        (let ((argsdpat (map (lambda (e) (be e vn vt)) (callargs e))))
          (foldl (lambda (d e) (bv e vn vt d)) 
                 (update (funname e) argsdpat division bv)
                 (callargs e)))
    (if (equal? (tag e) 'op)
      (foldl (lambda (d e) (bv e vn vt d)) division (callargs e))
      (error 'bv '"Illegal Scheme0 expression: ~s" e)
      )))))))))
  (let ((def (car program)))
    (let ((division0 (list (cons (name def) (list sdpattern)))))
      (bv (body def) (var def) sdpattern division0)
)))
                    
; Monovariant binding time analysis

(define (monodiv program sdpattern)
  (define (monoupdate f sdpat div0 bv)
     (define (monoupd div0)
        (if (null? div0)
            (list (cons f (list sdpat)))
            (let ((d1 (car div0)))
               (if (equal? f (car d1))
                   (let ((oldsdpattern (car (cdr d1))))
                      (cons (cons f (list (lub* sdpat oldsdpattern)))
                            (cdr div0)))
                   (cons d1 (monoupd (cdr div0)))))))
    (let ((div1 (monoupd div0)))
      (if (equal? div0 div1)
          div0 
          (let ((def (lookupfun f program)))
            (bv (body def) (var def) (car (getsdpatterns f div1)) div1)
            ))))
  (finddivision program sdpattern monoupdate)
)

; Polyvariant binding time analysis

(define (polydiv program sdpattern)
  (define (polyupdate f sdpat div0 bv)
     (define (polyupd div0)
        (if (null? div0)
            (list (cons f (list sdpat)))
            (let ((d1 (car div0)))
               (if (equal? f (car d1))
                   (let ((oldsdpatterns (cdr d1)))
                      (if (member sdpat oldsdpatterns)
                          div0
                          (cons (cons f (append oldsdpatterns (list sdpat)))
                                (cdr div0))))
                   (cons d1 (polyupd (cdr div0)))))))
    (let ((div1 (polyupd div0)))
      (if (equal? div0 div1)
          div0
          (let ((def (lookupfun f program)))
            (bv (body def) (var def) sdpat div1)
            ))))
  (sortdivision (finddivision program sdpattern polyupdate))
)

; Returns S if e is static, D if e is dynamic.
; vn = variable names, vt = variable binding times

(define (be e vn vt)
   (if (null? e)    'S
   (if (boolean? e) 'S
   (if (number? e)  'S
   (if (atom? e) (lookupbt e vn vt)
   (if (equal? (tag e) 'quote) 'S
   (if (equal? (tag e) 'if)
       (lub (be (e1 e) vn vt) 
            (lub (be (e2 e) vn vt) (be (e3 e) vn vt)))
   (if (equal? (tag e) 'call)
       (foldl lub 'S (map (lambda (e) (be e vn vt)) (callargs e)))
   (if (equal? (tag e) 'op)
       (foldl lub 'S (map (lambda (e) (be e vn vt)) (callargs e)))
       (error 'be '"Illegal Scheme0 expression: ~s" e)
)))))))))

(define (lub t1 t2) (if (equal? t1 'D) 'D t2))

(define (lub* t1s t2s)
  (if (null? t1s)
      '()
      (cons (lub (car t1s) (car t2s))
            (lub* (cdr t1s) (cdr t2s)))
))

(define (sdpattern-leq sdpat1 sdpat2) (equal? sdpat2 (lub* sdpat1 sdpat2)))

(define (sortdivision division)
   (map (lambda (fun-sdpats)
           (cons (car fun-sdpats) (s0sort sdpattern-leq (cdr fun-sdpats))))
        division
))

(define (getsdpatterns f division) 
  (let ((binding (assoc f division)))
    (if (null? binding) '() (cdr binding))
))

(define (lookupbt x xs vs)
  (if (null? xs)
      (error 'lookupbt '"Unknown variable: ~s" x)
      (if (equal? x (car xs))
          (car vs)
          (lookupbt x (cdr xs) (cdr vs)))
))
