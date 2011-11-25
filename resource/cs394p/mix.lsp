; /projects/cs394p/mix.lsp        Gordon S. Novak Jr.         ; 02 Mar 01

; Simple partial evaluator

; Copyright (c) 2001 Gordon S. Novak Jr. and The University of Texas at Austin.

; 05 Feb 99; 11 Feb 99; 12 Feb 99; 02 Mar 99; 11 Mar 99; 05 Aug 99; 16 Feb 00
; 18 Feb 00; 23 Feb 00; 25 Feb 00; 16 Feb 01; 23 Feb 01; 26 Feb 01; 28 Feb 01

; (load "patmatch.lsp")    ; if pattern matcher is used
; (load "patm.lsp")
; (load "mix.lsp")         ; this file
; (mix 'x '((x . 4)))                          ; some examples to try
; (mix '(if (> x 2) 'more 'less) '((x . 4)))
; (mix '(let ((x y) (z (1+ y))) (* x z)) '((y . 3)))
; (fnmix 'power '(x 3))
; (specialize 'power '(x 3) 'cube)   ; cube = specialize power(x,n) for n = 3
; (fndef 'cube)
; (cube 4)
; (fnmix 'power '(x 22))
; (fnmix 'power '(2 10))
; (fnmix 'append1 '('(a b c) m))
; (fnmix 'length1 '('(a b c)))
; Specialize a printing function for a constant formatting string:
; (specialize 'printfn '('(F D C) lst) 'myprint)
; (fndef *)    ; * is bound to the last value
; (myprint (list 3.14 77 #\!))
; Demonstration that specializing an interpreter = compilation:
; (topinterp '(+ (* 3 4) 5))
; (specialize 'topinterp '('(+ (* a b) c)) 'expr1 '(a b c))
; (fndef *)
; (expr1 3 4 5)
; substitue argument new for ?x in the pattern (* ?x (+ ?x 3))
; (specialize 'mysubst '(new '?x '(* ?x (+ ?x 3))) 'subst1 '(new))
; (specialize 'myequal '('(four score and 7) y) 'equal1 '(y))
; (specialize 'match '('(+ ?x 0) inp) 'match1 '(inp))
; (specialize 'interpb '('(+ x (+ 1 3))) 'expr2 '(x))
; (specialize 'interpc '('(plus a (times b (plus a 1))) env) 'interp2 '(env))
; (specialize 'mix '('(if t (+ x 3) (- x 1)) env) 'test2 '(x env))
; ??? following work but not interesting...
; (specialize 'mix '('(if exp x y) '((y . 4))) 'test1 '())
; (specialize 'mix (list (kwoteb (fncode 'interpc)) nil) 'comp1 '(exp))
; (specialize 'mix (list (kwoteb (fncode 'topinterp)) nil) 'comp1 '(exp))
; ???  following have stack overflow problems...
; (specialize 'mix '((topinterp exp) nil) 'comp1 '(exp))  ; stack overflow
; (mix (caddr (fndef 'mix)) '((code . (interpc exp)) (env . nil))) ; ovflo
; (specialize 'mix '('(mix exp nil) nil) 'test1 'exp) ; ovflo
; (mix '(mix code env) '((env . nil))) ; ovflo
; (mix '(mix code env) '((code . (topinterp exp)) (env . nil))) ; ovflo
; (fnmix 'mix (list (fncode 'topinterp) 'env)) ; ovflo
; 10 Feb 98; 11 Feb 98; 15 Feb 98; 16 Feb 98; 05 Feb 99; 11 Feb 99; 12 Feb 99
; 18 Feb 00; 18 Feb 01
; Partially evaluate code with respect to an environment env
; env is an alist, ((var . value) ...)
(defun mix (code env)
  (if (constantp code)                  ; a constant
      code                              ;    evaluates to itself
      (if (symbolp code)                ; a variable
	  (if (null (assoc code env))   ;    that is bound to a static value
	      code
	      (cdr (assoc code env)))   ;    evaluates to that value
	  (if (consp code)              ; a function call
	      (if (eq (car code) 'if)   ; if statement is evaluated specially
		  (let ((test (mix (cadr code) env)))  ; mix the test expr
		    (if (constantp test)
			(if (eq test nil)              ; if false
			    (mix (cadddr code) env)    ;    do the else branch
			    (mix (caddr code) env))    ;    do the then branch
		        (cons 'if                  ; otherwise keep the if
			      (cons test
				    (cons (mix (caddr code) env)
					  (if (null (cdddr code))
					      '()
					      (cons (mix (cadddr code) env)
						    '())))))))
		  (if (eq (car code) 'let)     ; let is a special form
		      (mixlet (cadr code) (cddr code) env env '()) ; handle let
		      (if (eq (car code) 'and)    ; and is a special form
			  (mixand code env)
			(let ((args (mixargs (cdr code) env))) ; mix args first
			  (if (and (someconst args)     ; if some args constant
				   (fndef (car code))   ; and fn def is known
				   (expandable (car code)))
			      (fnmix (car code) args)   ; recursively expand fn
			      (optfn (cons (car code) args)))))))
                                    ; else optimize result using patterns
	      code) ) ))   ; normally should not get here

; mix fn with args, some of which are constant
(defun mixb (fn args)
  (cons (specializeb fn args) (actargs args)) )

; Mix a function with args, some of which are constant
; args is an argument list for the function, in the same order as in
; the function definition; use a variable for args that are not constant,
; e.g. for power(x,n) with n = 3, use (fnmix 'power '(x 3)) ,
; i.e. x = x (variable) and n = 3 (constant).
(defun fnmix (fn args)
  (mix (fncode fn) (fnmixargs (cadr (fndef fn)) args)) )

; code for a defined function
(defun fncode (fn) (caddr (fndef fn)))

; Recursively bind formal args to actual args
(defun fnmixargs (formals actuals)
  (if (null formals)
      '()
      (cons (cons (car formals) (car actuals))
	    (fnmixargs (cdr formals) (cdr actuals))) ) )

#|  18 Feb 01: question: how do we represent that a value is constant?
; (a) quote it, or (b) it's constant if it is present in env.
; Recursively bind formal args to actual args
(defun fnmixargs (formals actuals)
  (if (null formals)
      '()
      (if (and (symbolp (car actuals))
               (not (null (car actuals))))
	  (fnmixargs (cdr formals) (cdr actuals))
	  (cons (cons (car formals) (car actuals))
		(fnmixargs (cdr formals) (cdr actuals))) ) ) )
|#

; mix a let special form:  (let ((var val) ...) code)
(defun mixlet (letvars code origenv env remvars)
  (if (null letvars)
      (mixletc (mixletn code env) remvars)
      (if (consp (car letvars))
	  (mixletb (cdr letvars) code origenv env remvars
		   (caar letvars) (mix (cadar letvars) origenv))
	  (mixlet (cdr letvars) code origenv
		  (cons (cons (car letvars) (car letvars)) env)
		  (cons (car letvars) remvars)) ) ) )

; if a let var becomes constant, add it to environment
(defun mixletb (letvars code origenv env remvars var val)
  (if (constantp val)
      (mixlet letvars code origenv (cons (cons var val) env) remvars)
      (mixlet letvars code origenv (cons (cons var var) env)
	      (cons (list var val) remvars)) ) )

; mix an implicit progn of code items
(defun mixletc (codelist remvars)
  (if (and (null remvars)
	   (null (cdr codelist)))
      (car codelist)
      (cons 'let (cons (reverse remvars) codelist))) )

; mix an implicit progn of code items
(defun mixletn (codelist env)
  (if (null codelist)
      nil
      (cons (mix (car codelist) env)
	    (mixletn (cdr codelist) env))))

; handle the (and ... ) special form
(defun mixand (code env) (mixandb (cdr code) env nil))

; forms is any dynamic args of the and found so far (in reverse order)
(defun mixandb (codelist env forms)
  (if (null codelist)
      (if (null forms)
	  t
	  (optand (reverse forms)))
      (mixandc (cdr codelist) env forms (mix (car codelist) env))))

; form is the mixed version of the top form in the and
(defun mixandc (codelist env forms form)
  (if (eq form nil)
      nil
      (if (eq form t)
	  (mixandb codelist env forms)
	  (if (constantp form)
	      (if (null codelist)
		  (mixandb codelist env (cons form forms))
		  (mixandb codelist env forms))
	      (mixandb codelist env (cons form forms))))))

; Get function definition -- implementation-dependent on GCL.
(defun fndef (fn)
  (if (and (symbolp fn)
           (fboundp fn)
	   (consp (symbol-function fn))
	   (eq (car (symbol-function fn)) 'lambda-block))
      (cons 'lambda (cddr (symbol-function fn))) ) )

; formal args of a function -- ***** gcl dependent
(defun formals (fn) (cadr (fndef fn)))

; Optimize special function patterns and fold constants
; e.g. (+ x 0) = x, (+ 0 x) = x, (* 0 x) = 0, (* 1 x) = x
(defun optfn (code)
  (if (and (consp code)                ; if code is a function call
	   (not (fndef (car code)))           ; and it is a system fn
	   (not (sideeffects (car code)))     ; and no side effects
	   (allconst (car code) (cdr code)))  ; and args are all constant
      (kwoteb (eval code))              ; evaluate it now
      (optfnb code)))          ; else optimize using patterns

; needed because X.lsp defines NULL to be a constant 0
(defun kwoteb (x)
  (if (null x)
      nil
      (if (eq x t)
	  x
	  (if (symbolp x)
	      (list 'quote x)
	      (if (consp x)
		  (list 'quote x)
		  (if (constantp x)
		      x
		      (list 'quote x)))))))

; Test if a function is known to have side-effects
(defun sideeffects (fn)
  (member fn
    '(setq setf rplaca rplacd print prin1 princ error format random)))

; Test if we do not want to expand a function
(defun expandable (fn) (if (eq fn 'trans) nil t))

; optimize code at specialization time
(defun optfnb (code)        ; (trans code 'pareval) to use patterns
  (if (not (consp code))
      code
      (if (constantp code)
	  code
	  (if (eq (car code) 'let)
	      (optfnlet code)
	      (optfnc (car code) (optfnargs (cdr code)))))))

(defun optfnargs (args)
  (if (null args)
      '()
      (cons (optfnb (car args)) (optfnargs (cdr args))) ) )

(defun optfnc (fn args)
  (if (and (allconst fn args)
	   (null (fndef fn))       ; a system fn   ;  look at why ???
	   (not (sideeffects fn)))
      (if (eq fn 'and)
	  (if (cdr args)
	      (and (car args)
		   (optfnc fn (cdr args)))
	      (car args))
	  (kwoteb (eval (cons fn args))))
    (if (eq fn '+)
	(if (and (numberp (car args))
		 (zerop (car args)))
	    (cadr args)
	    (if (and (numberp (cadr args))
		     (zerop (cadr args)))
	        (car args)
	        (cons fn args)))
        (if (eq fn '*)
	    (if (numberp (car args))
		(if (zerop (car args))
		    0
		    (if (eql (car args) 1)
			(cadr args)
		         (cons fn args)))
	        (if (numberp (cadr args))
		    (if (zerop (cadr args))
			0
		        (if (eql (cadr args) 1)
			    (car args)
			    (cons fn args)))
		    (cons fn args)))
	    (if (eq fn 'progn)
		(optfnprogn args)
	        (if (eq fn 'and)
		    (optand args)
		    (cons fn args)))) ) ) )

; optimize (and . args)
(defun optand (args)
  (if (null args)
      t
      (if (cdr args)
	  (if (constantp (car args))
	      (optand (cdr args))
	      (cons 'and args))
	  (car args))))

; Remove embedded progn's.  args is a list of forms in a progn.
(defun optfnprogn (args)
  (let ((contents (deprogn args nil)))
    (if (consp contents)
        (if (cdr contents)
	    (cons 'progn (reverse contents))
	    contents)
        nil) ))

; remove progn's, returning a reversed list of forms
(defun deprogn (forms answer)
  (if (null forms)
      answer
      (if (and (consp (car forms))
	       (eq (caar forms) 'progn))
	  (deprogn (cdr forms) (deprogn (cdar forms) answer))
	  (deprogn (cdr forms) (cons (car forms) answer)))) )

(defun optfnlet (code) code)

#|   commented out...
(redefpatterns 'pareval
  '( ((+ ?x 0)                     ?x)
     ((+ 0 ?x)                     ?x)
     ((* 0 ?x)                     0)
     ((* ?x 0)                     0)
     ((* 1 ?x)                     ?x)
     ((* ?x 1)                     ?x)
     ((null (cons ?x ?y))          nil)
     ((cdr (cons ?x ?y))           ?y)
     ((+ ?n (+ ?m ?x))             (+ (+ ?n ?m) ?x))
     ((progn ?x (progn . ?s))      (progn ?x . ?s))
     ((progn ?x (progn . ?s) . ?y) (progn . ?z) t
                                     ((?z (cons ?x (append ?s ?y)))))
     ((progn ?x ?z (progn . ?s) . ?y) (progn . ?w) t
                                     ((?w (cons ?z (cons ?x (append ?s ?y))))))
     ((progn (progn . ?s) . ?y)    (progn . ?z) t ((?z (append ?s ?y))))
     ((and ?x t)                   ?x)      ; not strictly correct
     ((and ?x nil)                 nil)
     ((append (list ?x) (list ?y)) (list ?x ?y))
     ((append (list ?x) (list ?y) (list ?z)) (list ?x ?y ?z))
   ))
|#

; specialize a function with respect to arguments that are constant
; e.g. (specialize 'power '(x 3) 'cube)    ; x is variable, n = 3.
(defun specialize (fn args &optional name newargs)
  (let (newcode subs)
    (if (setq newcode (fnmix fn args))
	(progn
	  (or newargs
	      (setq newargs (mapcan #'(lambda (formal actual)
					(if (not (constantp actual))
					    (list actual)))
				    (cadr (fndef fn))
				    args)))
	  (or name (setq name (gentemp (symbol-name fn))))
	  (eval (list 'defun name newargs
		      (sublis (mapcar #'(lambda (x) (cons (list 'quote x) x))
				      newargs)
			      newcode :test #'equal)))
	  name)) ))

; specialize a function with respect to an argument list
; returns name of specialized function
(defun specializeb (fn args)
  (if (specialization fn args)
      (specialization fn args)
      (let ((name (gentemp (symbol-name fn))))
	(setf (get fn 'specializations)
	      (cons (list (argpat (formals fn) args) name)
		    (get fn 'specializations)))
	(setf (symbol-function name)
	      (list 'lambda-block
		    fn
		    (dynargs (formals fn) args)
		    (fnmix fn (newargs (cadr (fndef fn)) args))))
	name)))

; get an existing specialization if there is one
(defun specialization (fn args)
  (let ((existing (assoc (argpat (formals fn) args) (get fn 'specializations)
			 :test #'equal)))
    (if existing
	(cadr existing)) ))

; These functions are written recursively to avoid using map's
(defun mixargs (l env)
  (if (null l)
      '()
      (cons (mix (car l) env)
	    (mixargs (cdr l) env))))

(defun someconst (l)
  (if (null l)
      nil
      (if (constantp (car l))
	  t
	  (someconst (cdr l)))))

; test if a list of args l is all constant for function fn
(defun allconst (fn l)
  (if (null l)
      t
      (if (member fn '(+ - * / expt sqrt))
	  (and (numberp (car l))
	       (allconst fn (cdr l)))
	  (and (constantp (car l))
	       (allconst fn (cdr l))))))

; make an argument pattern, using formals for any dynamic args
(defun argpat (formals args)
  (if (null args)
      '()
      (cons (if (constantp (car args))
		(car args)
	        (car formals))
	    (argpat (cdr formals) (cdr args))) ) )

; filter a formal arg list using an argument list, retaining dynamic args
(defun dynargs (formals args)
  (if (null formals)
      '()
      (if (constantp (car args))
	  (dynargs (cdr formals) (cdr args))
	  (cons (car formals) (dynargs (cdr formals) (cdr args)) ) ) ) )

; make bindings for static args in an arg list
(defun newargs (formals args)
  (if (null formals)
      '()
      (cons (if (constantp (car args))
		(car args)
	        (car formals))
	    (newargs (cdr formals) (cdr args)) ) ) )

; filter an arg list, retaining dynamic args
(defun actargs (args)
  (if (null args)
      '()
      (if (constantp (car args))
	  (actargs (cdr args))
	  (cons (car args) (actargs (cdr args))) ) ) )

;-----------------------------------------------------------------------------
; some example functions for testing:

; raise number x to non-negative integer power n
(defun power (x n)
  (if (= n 0)
      1
      (if (evenp n)
          (square (power x (/ n 2)))
	  (* x (power x (- n 1)))) ) )

(defun square (x) (* x x))

; append two lists
(defun append1 (l m)
  (if (null l)
      m
      (cons (car l) (append1 (cdr l) m))))

; length of a list
(defun length1 (l)
  (if (null l)
      0
      (+ 1 (length1 (cdr l))) ))

; A simplified version of a printing function such as format or printf
; format = list of formatting codes: F = float, D = decimal, C = character
(defun printfn (format items)
  (if (not (null format))
      (progn
	(if (eq (car format) 'f)
	    (format t "~F " (car items))
	    (if (eq (car format) 'd)
		(format t "~D " (car items))
	        (if (eq (car format) 'c)
		    (format t "~C " (car items))
		    (format t "~S " (car items)))))
	(printfn (cdr format) (cdr items)) )))

(defun myequal (x y)
  (if (consp x)
      (and (consp y)
	   (myequal (car x) (car y))
	   (myequal (cdr x) (cdr y)))
      (eql x y)))

(defun mysubst (x y z)
  (if (consp z)
      (cons (mysubst x y (car z))
	    (mysubst x y (cdr z)))
      (if (eql y z) x z)))

; An interpreter for tree-structured arithmetic expressions in Lisp
; We may assume that the operations are op codes for a stack machine
; Example: (topinterp '(* 3 (+ 4 5)))

(defvar *stack* '())            ; simulate the machine stack

(defun topinterp (exp)          ; interpret, get result
  (progn (interp exp)
	 (pop *stack*)))

(defun interp (exp)             ; interpreter for arithmetic expressions
  (if (consp exp)
      (if (eq (car exp) '+)
	  (progn (interp (cadr exp))          ; compute lhs
		 (interp (caddr exp))         ; compute rhs
		 (plus))                      ; add
	  (if (eq (car exp) '-)
	      (if (null (cddr exp))           ; test unary minus
		  (progn (interp (cadr exp))
			 (minus))
		  (progn (interp (cadr exp))
			 (interp (caddr exp))
			 (diff)))
	      (if (eq (car exp) '*)
		  (progn (interp (cadr exp))
			 (interp (caddr exp))
			 (times))
		  (if (eq (car exp) '/)
		      (progn (interp (cadr exp))
			     (interp (caddr exp))
			     (divide))
		      (error "undef op ~A~%" (car exp))))))
      (pushopnd exp)))

(defun pushopnd (arg) (push arg *stack*))   ; fns to simulate stack machine
(defun plus ()
  (let ((rhs (pop *stack*)))
    (pushopnd (+ (pop *stack*) rhs))))
(defun diff ()
  (let ((rhs (pop *stack*)))
    (pushopnd (- (pop *stack*) rhs))))
(defun minus () (pushopnd (- (pop *stack*))))
(defun times ()
  (let ((rhs (pop *stack*)))
    (pushopnd (* (pop *stack*) rhs))))
(defun divide ()
  (let ((rhs (pop *stack*)))
    (pushopnd (/ (pop *stack*) rhs))))

; a small interpreter for expressions
; (interpb '(+ 2 3))
(defun interpb (exp)
  (if (consp exp)
      (if (eq (car exp) '+)
	  (let ((lhs (interpb (cadr exp)))
		(rhs (interpb (caddr exp))))
	    (+ lhs rhs))
	  'foo)
      exp))

; a small interpreter for expressions
; (interpc '(plus a (times b 3)) '((a . 7) (b . 5)))
; (interpc '(plus 2 3) nil)
(defun interpc (exp env)
  (if (consp exp)
      (if (eq (car exp) 'plus)
	  (+ (interpc (cadr exp) env) (interpc (caddr exp) env))
	  (if (eq (car exp) 'times)
	      (* (interpc (cadr exp) env) (interpc (caddr exp) env))
	      'error))
      (if (numberp exp)
	  exp
	  (let ((pair (assoc exp env)))
	    (if pair (cdr pair) 'unbound)))))
