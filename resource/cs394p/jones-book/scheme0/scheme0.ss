; File "scheme0.ss" -- Global definitions and syntactic shorthands
; Partial evaluator for first order functional language
; Revised 1994-08-22 to better conform to IEEE Scheme + eval

; Syntactic sugar for Scheme0.  Format: list of triples (abbrev var term),
; meaning: expand (abbrev e) into  term  with  e  substituted for  var .

(define sugars '(
; Select from e == (tag e1 e2 e3 ...) 
    (tag e (hd e))
    (e1 e  (hd (tl e)))
    (e2 e  (hd (tl (tl e))))
    (e3 e  (hd (tl (tl (tl e)))))
; Select from e == (call funname sfunargs dfunargs)
    (funname  e (hd (tl e)))
    (sfunargs e (hd (tl (tl e))))
    (dfunargs e (hd (tl (tl (tl e)))))
; Select from e == (call/op funname . callargs)
    (callargs e (tl (tl e)))
; Select from def == (define (name svar dvar) body)
    (name def (hd (hd (tl def))))
    (svar def (hd (tl (hd (tl def)))))
    (dvar def (hd (tl (tl (hd (tl def))))))
    (body def (hd (tl (tl def))))
; Select from def == (define (name . var) body)
    (var def (tl (hd (tl def))))
; Introducing Scheme0 base operation shorthands
    (hd e (op car e))
    (tl e (op cdr e))
))

; Desugar: From sugared Scheme0 to plain Scheme0, using the "sugars" table

(define (desugar program)
   (map desugardef program)
)
   (define (desug e sub)
      (if (or (null? e) (boolean? e) (number? e)) e
      (if (atom? e) (let ((var-term (assoc e sub))) 
                       (if var-term (cdr var-term) e))
      (if (equal? (car e) 'quote) e
      (if (equal? (car e) 'if) 
          (cons 'if (desug* (cdr e) sub))
      (if (member (car e) '(call op))
          (cons (car e) (cons (funname e) (desug* (callargs e) sub)))
      (if (equal? (car e) '::) 
          (list 'op 'cons (desug (e1 e) sub) (desug (e2 e) sub))
      (if (equal? (car e) 'list)                ; (list e1 e2 ... en) 
          (foldr (lambda (e lst) (list 'op 'cons (desug e sub) lst)) 
                 ''() (cdr e))
      (if (equal? (car e) 'slet)                ; (slet (var exp) body)
          (desug (caddr e) 
                 (cons (cons (caadr e) (desug (cadadr e) sub)) sub))
      ; else it must be an abbreviation
          (let ((expansion (assoc (car e) sugars)))
             (if expansion
                 (let ((var (cadr expansion))
                       (term (caddr expansion)))
                    (desug (desug term (cons (cons var (cadr e)) sub)) sub))
                 (error 'desugar "Unknown operator or macro: ~s" (car e))
                 )))))))))))
   (define (desug* es sub) (map (lambda (e) (desug e sub)) es))
   (define (desugardef def)
      (list 'define (cons (name def) (var def)) (desug (body def) '())))

; Define Scheme functions corresponding to abbreviations
(define (sugartoscheme abbrevtriple)
   (let ((abbrev (car   abbrevtriple))
         (var    (cadr  abbrevtriple))
         (term   (caddr abbrevtriple)))
      (list 'define (list abbrev var) 
            (if (and (pair? term) (equal? (car term) 'op)) (cdr term) term)
)))

; Convert plain Scheme0 programs to Scheme, possibly renaming functions

(define (scheme program)
  (define (rename fn)
     (define (variant f)
        (let ((original (car (car f))) (btvariant (cdr f)))
           (foldl string-append ""
                  (map symbol->string (cons original (cons '* btvariant))))))
     (define (gi f vs defs)
        (if (null? defs)
            (error 'rename "Unknown function: ~s" (cons f vs))
            (let ((fvs (name (car defs))))
               (if (equal? f (car fvs))
                   (if (equal? vs (cdr fvs))
                       1
                       (+ 1 (gi f vs (cdr defs))))
                   (gi f vs (cdr defs))))))
     (if (atom? fn)
         fn
         (let ((f (car fn)) (vs (cdr fn)))
            (string->symbol 
             (string-append (variant f) "-" 
                            (number->string (gi f vs program)))))))
  (define (schdef def)
    (list 'define 
          (cons (rename (name def)) (var def)) 
          (schexp (body def))))
  (define (schexp e)
    (if (null? e)    e
    (if (boolean? e) e
    (if (number? e)  e
    (if (atom? e)    e
    (if (equal? (tag e) 'quote) e
    (if (equal? (tag e) 'if)
        (list 'if (schexp (e1 e)) (schexp (e2 e)) (schexp (e3 e)))
    (if (equal? (tag e) 'call)
        (cons (rename (funname e)) (map schexp (callargs e)))
    (if (equal? (tag e) 'op)
        (cons (funname e) (map schexp (callargs e)))
        (error 'scheme "Illegal Scheme0 expression: ~s" e))))))))))
  (map schdef program)
)

(define (reorder parameters sdpattern)
  (if (null? parameters)
      (cons '() '())
      (let ((pspd (reorder (cdr parameters) (cdr sdpattern))))
        (if (equal? (car sdpattern) 'S)
            (cons (cons (car parameters) (car pspd)) (cdr pspd))
            (cons (car pspd) (cons (car parameters) (cdr pspd)))))
))

; General auxiliary functions

(define (foldl f a bs) (if (null? bs) a (foldl f (f a (car bs)) (cdr bs))))
(define (foldr f a bs) (if (null? bs) a (f (car bs) (foldr f a (cdr bs)))))
(define (all bs) (if (null? bs) #t (and (car bs) (all (cdr bs)))))
(define (atom? x) (not (pair? x)))

(define (s0sort leq? xs)
   (define (insert x xs)
      (if (null? xs)
          (list x)
          (if (leq? x (car xs))
              (cons x xs)
              (cons (car xs) (insert x (cdr xs))))))
   (foldr insert ''() xs)
)

; *** Eval is not standard Scheme.  Redefine to suit your Scheme version ***

; For Chez Scheme, xscheme, TI PC Scheme, and elk:
 (define (s0eval schemeexpression) (eval schemeexpression))
; For Yale T Scheme:
; (define (s0eval schemeexpression) (eval schemeexpression scheme-env))

; Main variables and functions for experiments

(define onlineunfolding #t)

(define **Scheme0-path** "") ; Path to Scheme0 directory

(define (create)
   (map s0eval (map sugartoscheme sugars))
   (load (string-append **Scheme0-path** "spec.ss"))       
   (make 'spec specializer)
   (load (string-append **Scheme0-path** "annotate.ss"))   
   (load (string-append **Scheme0-path** "analyse.ss"))    
   (load (string-append **Scheme0-path** "subject.ss"))    
)

(define (polytate program sdpat) (annotate program (polydiv program sdpat)))
(define (monotate program sdpat) (annotate program (monodiv program sdpat)))
(define (polype program sdpat vs0) (spec (polytate program sdpat) vs0))
(define (monope program sdpat vs0) (spec (monotate program sdpat) vs0))

(define (make nam residual)
   (let ((schemeprogram (scheme residual)))
   (let ((f (name (car schemeprogram))))
      (s0eval (cons 'define 
                    (cons (cons nam 'args) 
                          (append schemeprogram (list (list 'apply f 'args)))
))))))
