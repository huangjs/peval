; File "annotate.ss" -- Annotation (mono- or polyvariant) of Scheme0 programs
; Partial evaluator for first order functional language
; Revised 1994-08-22 to better conform to IEEE Scheme + eval

; Takes a Scheme0 program and a (possibly polyvariant) division; returns 
; an annotated Scheme0 program or reports non-congruence of the division.

(define (annotate program division)
   (foldl append '() 
          (map (lambda (def) (anndef def program division)) program)
))

(define (anndef def program division)
   (define (anndefversion sdpattern)
      (let ((xsxd (reorder (var def) sdpattern)))
         (list 'define 
               (list (cons (cons (name def) 
                                 (dynoccs (name def) sdpattern program))
                                 sdpattern)
                     (car xsxd) 
                     (cdr xsxd))
               ((if (null? (cdr xsxd)) exp lift)
                (annexp (body def) (var def) sdpattern onlineunfolding)))))
   (define (annexp e vn vt unf)
     (if (null? e)    (cons e 'S)
     (if (boolean? e) (cons e 'S)
     (if (number? e)  (cons e 'S)
     (if (atom? e)    (cons e (lookupbt e vn vt))
     (if (equal? (tag e) 'quote) (cons e 'S)
     (if (equal? (tag e) 'if)
         (let ((ae1 (annexp (e1 e) vn vt unf)))
         (let ((ae2 (annexp (e2 e) vn vt (and unf (static ae1))))
               (ae3 (annexp (e3 e) vn vt (and unf (static ae1)))))
            (if (static ae1)
                (if (and (static ae2) (static ae3))
                    (cons (list 'ifs (exp ae1) (exp ae2) (exp ae3)) 'S)
                    (cons (list 'ifs (exp ae1) (lift ae2) (lift ae3)) 'D))
                (cons (list 'ifd (exp ae1) (lift ae2) (lift ae3)) 'D))))
     (if (equal? (tag e) 'call)
         (let ((aes (map (lambda (e) (annexp e vn vt unf)) (callargs e)))
               (f (funname e)))          
         (let ((argsdpat (map cdr aes)))
         (let ((sdpattern (getleast argsdpat (getsdpatterns f division) f)))
         (let ((esed (reorder aes sdpattern))
               (dynvaroccs (dynoccs f sdpattern program)))
         (let ((es (car esed)) (ed (cdr esed)))
         (let ((staticcall (or (null? ed)
                               (and unf (nodup dynvaroccs (map exp ed))))))
           (cons (list (if staticcall 'calls 'calld)
                     (cons (cons f dynvaroccs) sdpattern)
                     (map exp es)
                     (map lift ed))
               (if (null? ed) 'S 'D))))))))
     (if (equal? (tag e) 'op)
         (let ((aes (map (lambda (e) (annexp e vn vt unf)) (callargs e))))
            (if (all (map static aes))
                (cons (cons 'ops (cons (funname e) (map exp aes))) 'S)
                (cons (cons 'opd (cons (funname e) (map lift aes))) 'D)))
         (error 'annotate "Illegal Scheme0 expression: ~s" e)
         )))))))))
   (map anndefversion (getsdpatterns (name def) division))
)

(define (dynoccs f sdpattern program)
   (let ((def (lookupfun f program)))
   (let ((vn (var def)))
   (let ((occs (count (body def) vn sdpattern (map (lambda (v) 0) vn))))
      (cdr (reorder occs sdpattern))
))))

; Count occurrences of all variables vn in e, giving a list of 0, 1, or 2, 
; (meaning 0, 1, or >= 2) occurrences of the corresponding variable in vn.

(define (count e vn vt occurrences)
   (if (null? e)    occurrences
   (if (boolean? e) occurrences
   (if (number? e)  occurrences
   (if (atom? e) (incvar e vn occurrences)
   (if (equal? (tag e) 'quote) occurrences
   (if (equal? (tag e) 'if)
       (if (equal? (be (e1 e) vn vt) 'S)
           (count (e1 e) vn vt (maxoccs (count (e2 e) vn vt occurrences)
                                        (count (e3 e) vn vt occurrences)))
           (count (e1 e) vn vt (count (e2 e) vn vt 
                                      (count (e3 e) vn vt occurrences))))
   (if (or (equal? (tag e) 'call) (equal? (tag e) 'op))
       (foldl (lambda (occs e)(count e vn vt occs)) occurrences (callargs e))
       (error 'count "Illegal Scheme0 expression: ~s" e)
))))))))

(define (incvar x vn occurrences)
   (if (null? vn)
       (error 'incvar "Unknown variable: ~s" x)
       (if (equal? x (car vn))
           (cons (if (equal? (car occurrences) 0) 1 2)
                 (cdr occurrences))
           (cons (car occurrences) (incvar x (cdr vn) (cdr occurrences))))
))                  

(define (maxoccs occs1 occs2)
   (if (null? occs1)
       '()
       (cons (max (car occs1) (car occs2))
	     (maxoccs (cdr occs1) (cdr occs2)))
))
           
(define (static ae) (equal? (cdr ae) 'S))

(define (exp ae) (car ae))

(define (lift ae) (if (static ae) (list 'lift (car ae)) (car ae)))

; Find least sdpattern in sdpatterns which is compatible with sdpat

(define (getleast sdpat sdpatterns f)
   (if (null? sdpatterns)
       (error 'annotate "Incongruent division ~s at function ~s" sdpat f)
       (if (sdpattern-leq sdpat (car sdpatterns))
           (car sdpatterns)
           (getleast sdpat (cdr sdpatterns) f))
))
