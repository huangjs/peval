; File "spec.ss" -- The specializer written in Scheme0 
; Partial evaluator for first order functional language
; Revised 1994-08-22 to better conform to IEEE Scheme + eval

; The specializer itself, written in Scheme0.  Inputs: annotated Scheme0 
; program and values of the static parameters.  Output: a Scheme0 program.

(define specializer (desugar '(

(define (specialize program vs0)
  (call complete (list (:: (name (hd program)) vs0)) '() program)
)

(define (complete pending marked program)
  (if (op null? pending)
      '()
      (call generate (hd pending) program pending marked program)
))

(define (generate fvs defs pending marked program)
  (if (op null? defs)
      (op error 'generate '"Undefined function: ~s" (hd fvs))
      (slet (def (hd defs))
        (if (op equal? (name def) (hd fvs))
          (slet (evs  (call reduce (body def) (svar def) (tl fvs) 
                            (dvar def) (dvar def) program))
                (slet (newmarked (:: fvs marked))
                      (call gen1 def evs fvs pending newmarked program)))
          (call generate fvs (tl defs) pending marked program)))
))

(define (gen1 def evs fvs pending newmarked program)
  (slet (newpending (op diff (op successors evs pending) newmarked))
  (slet (newdef     (list 'define (:: fvs (dvar def)) evs))
        (:: newdef (call complete newpending newmarked program))
)))

(define (reduce e xs vs xd vd p)
  (if (op null? e)     e
  (if (op boolean? e)  e
  (if (op number? e)   e
  (if (op atom? e)     (call lookupvar e xs vs xd vd)
  (if (op equal? (tag e) 'quote) (e1 e)
  (if (op equal? (tag e) 'ifs)
      (if (call reduce (e1 e) xs vs xd vd p)
          (call reduce (e2 e) xs vs xd vd p)
          (call reduce (e3 e) xs vs xd vd p))
  (if (op equal? (tag e) 'ifd)
      (list 'if (call reduce (e1 e) xs vs xd vd p)
                (call reduce (e2 e) xs vs xd vd p)
                (call reduce (e3 e) xs vs xd vd p))
  (if (op equal? (tag e) 'calls)
      (call docalls (op lookupfun (funname e) p) p
            (call reduce* (sfunargs e) xs vs xd vd p)
            (call reduce* (dfunargs e) xs vs xd vd p))
  (if (op equal? (tag e) 'calld)
      (:: 'call 
          (:: (:: (funname e) (call reduce* (sfunargs e) xs vs xd vd p))
              (call reduce* (dfunargs e) xs vs xd vd p)))
 (if (op equal? (tag e) 'ops)
     (op evalbase (funname e) (call reduce* (callargs e) xs vs xd vd p))
 (if (op equal? (tag e) 'opd)
     (:: 'op  (:: (funname e) (call reduce* (callargs e) xs vs xd vd p)))
 (if (op equal? (tag e) 'lift)
     (list 'quote (call reduce (e1 e) xs vs xd vd p))
     (op error 'reduce '"Illegal annotated Scheme0 expression: ~s" e)
)))))))))))))

(define (reduce* es xs vs xd vd p)
  (if (op null? es)
      '()
      (:: (call reduce (hd es) xs vs xd vd p)
          (call reduce* (tl es) xs vs xd vd p))
))

(define (docalls def p args argd)
   (if (op nodup (tl (hd (name def))) argd)
       (call reduce (body def) (svar def) args (dvar def) argd p)
       (:: 'call (:: (:: (name def) args) argd))
))

(define (lookupvar x xs vs xd vd)
  (if (op null? xs)
      (call lookupvar x xd vd 'slam 'slam)
      (if (op equal? x (hd xs))
          (hd vs)
          (call lookupvar x (tl xs) (tl vs) xd vd))
))
)))

; Auxiliary base functions for the specializer

(define (successors e s)
  (if (null? e)    s
  (if (boolean? e) s
  (if (number? e)  s
  (if (atom? e)    s
  (if (equal? (tag e) 'quote) s
  (if (equal? (tag e) 'if) 
      (successors (e1 e) (successors (e2 e) (successors (e3 e) s)))
  (if (equal? (tag e) 'call)
      (successors* (callargs e) (cons (funname e) s))
  (if (equal? (tag e) 'op)
      (successors* (callargs e) s)
      (error 'successors '"Illegal Scheme0 expression: ~s" e)
)))))))))

(define (successors* es s) (foldl (lambda (s e) (successors e s)) s es))

(define (diff set1 set2)
  (if (null? set1)
      '()
      (if (member (car set1) set2)
          (diff (cdr set1) set2)
          (cons (car set1) (diff (cdr set1) set2)))
))

(define (nodup occs exps)
   (if (null? occs)
       #t
       (and (or (atom? (car exps)) (< (car occs) 2))
            (nodup (cdr occs) (cdr exps)))
))

(define (lookupfun f program)
  (if (null? program)
      (error 'lookupfun '"Undefined function: ~s" f)
      (if (equal? f (name (car program)))
          (car program)
          (lookupfun f (cdr program)))
))

(define (evalbase f args) (apply (s0eval f) args))
