;;;-*- Mode: Common-Lisp; Package: ga; Base: 10 -*-
(provide "simpsimp")
(in-package :ga)
(declaim (optimize (speed 3)(safety 0)))

;; A small conservative simplifier that makes only minor
;; local changes at minor local costs. See h:/lisp/simpsimp.cl for
;; the many comments and extra stuff left out of this file. To extend see
;; example of sinsimplifier later on

(defparameter *relational-ops* '(> < >= <=))

(defun simp(x)
  ;; simplifies only operands of known operations
  ;; We include famous ones like + * expt.
  (let ((h nil) (fun nil))
    (cond ((numberp x) x)
	  ((symbolp x) x)
	  ((not (symbolp (setf h (car x))))
	   (error "illegal form to simp ~s" x))
	  ((get h 'dontsimpargs)  ;
	   (funcall (get h 'simp) (cdr x)))
	  (t (funcall (get h 'simp #'(lambda(r)(cons h r)))
		      (mapcar #'simp (setf x (cdr x))))))))

(defun trycom(num symlist op opfun id more)
  ;; try combining stuff for + or *.  see usage below. 
  ;; extensive comments in full file.
  (cond ((null more)

	  (setf symlist (reorg symlist op))

	 (if (null symlist) num
	   (cond ((= id num)		;just 1  (comments assume op = *)
		  (cond ((null (cdr symlist))
			 (car symlist))	; just x
			(t (cons op symlist)))) ;(* x y)
		 ((and (= num 0)(eql op '*)) 0) ; check for  0 * x
		 (t (cons op (cons num symlist)))))) ; (* 3 x y)
	((and (consp (car more))(eq (caar more) op))
	 (trycom num symlist op opfun id (append(cdar more) (cdr more))))
	(t (let ((h (car more)))
	     (cond ((numberp h)
		    (trycom (funcall opfun h num) symlist
			    op opfun id (cdr more)))
		   (t
		    (trycom num (consinto h symlist op)
			    op opfun  id  (cdr more))))))))

(defun combadd(x)(trycom  0 nil '+ #'+ 0 x))
(defun combmul(x)(trycom  1 nil '* #'* 1 x))

(defun *-simp (xpr)
  (let ((x (combine-fractions xpr)))
    (if (fraction? x)
	(let ((n (simp (parser_numerator x)))
	      (d (simp (parser_denominator x))))
	  (/-simp (list n d)))
      (combmul xpr))))

(defun combsubtract(x) (cond ((null (cdr x)) ; onearg like (- 3)
			      (combmul (cons -1 x)))
					;; like (- a b c) --> (+ a (* -1 b c))
			     (t (combadd `(,(car x)
					   ,(simp `(* -1 (+ ,@(cdr x)))))))))

(defun fancierexptsimp(z) 
  (cond ((eql (cadr z) 1) (car z))	;x^1 is x
	((eql (cadr z) 0) 1)		; x^0 is 1. Even 0^0.
	((and (rationalp (car  z))
	      (not (zerop (car z)))
	      (integerp (cadr z)))
	 (expt (car z)(cadr z)))	;a^b if a and b are  numbers 
	((eql (car z) 1) 1)		;1^r is 1. 
	((eql (car z) 0)	
	  (if (and (numberp (cadr z))
		  (> (cadr z) 0))
	     0
	    (cons 'expt z)))  ; 1/0 gets here. we leave it alone
	;; uses of (a^b)^c = a^(b*c) are sometimes bogus.
	((and (listp (car z))(eql (caar z) 'expt)
	      (integerp (cadr z)) ;only if C is an integer
	      )
	 (simp `(expt ,(cadar z) (* ,(caddar z) ,(cadr z)))))
	 (t  (cons 'expt z)))) ; else symbolic a^b

(defun expsimp(x)
  ;; x = list of arg of exp
  ;; exp(log x) is x, by definition of log and exp.
  ;; log(exp x) is multivalued.
  (let ((h (simp (car x))))
    (cond ((eql h 0) 1)
	  ((and (listp h)(eq (car h) 'log))
	   (cadr h))
	  (t (list 'exp  h)))))

(defun equalsimp(x)
  (let ((h (simp (car x)))
	(g (simp (cadr x))))
    ;; assumes that we don't have (equal undefined undefined), which is not t
    (cond ((equal g h) 'true) ; 2 is not equal to 2.0
	  ((and (numberp h)(numberp g))
	   (if (ignore-errors(= g h)) 'true nil)) ;;3/15/99 equal - =
	  (t   (list 'equal h g)))))

(defun realsimp(r) (+ (car r)(cadr r)))

(setf (get '+ 'mathconstant) #'+)
(setf (get '* 'mathconstant) #'*)			; etc

(defun andsimp(x)
  (let ((args (mapcar #'simp x)))
    (setf args (delete 'true args)) ; destructive.
    (cond((member nil args) nil)	; (and nil ...) = nil
	 ((null args) 'true)		; (and)  .. is true
	 ;; (and x a x) is (and a x)
	 ((member (car args)(cdr args):test #'equal) (andsimp (cdr args)))
	 ((null (cdr args)) (car args))	;(and z) is z
	 (t (cons 'and args)))))

(defun abssimp(x)
  (let ((arg (simp (car x) )))
    (if (numberp arg) (abs arg)(list 'abs arg))))

(defun factorialsimp(x)  ;; change 0! and 1! to 0 and 1. Leave other forms
  (let ((arg (simp (car x) )))
    (cond ((equal arg 0) 1)
	  ((equal arg 1) 1)
	  (t (list 'factorial arg)))))

(defun consinto (h s op)
  ;; ordinarily, just (cons h s).. push new item onto head of list
  ;; but if (car h) = op, then merge it as (append (cdr h) s)
  (if (and (listp h)(eql (car h) op)) (append (cdr h) s)
    (cons h s)))

(setf (get '+ 'simp) #'combadd)
(setf (get '- 'simp) #'combsubtract)
(setf (get '* 'simp) #'*-simp)
(setf (get 'expt 'simp) #'fancierexptsimp)
(setf (get 'exp 'simp) #'expsimp)
(setf (get 'equal 'simp) #'equalsimp)
(setf (get 'and 'simp) #'andsimp)
(setf (get 'abs 'simp)#'abssimp)
(setf (get 'factorial 'simp)#'factorialsimp)

;; many functions can be dealt with in a rudimentary way by
;; just simplifying their single arguments. For example,

(setf (get 'sin 'simp) #'(lambda(x)`(sin ,(simp (car x))) ))

;; a better version might actually take note of the fact
;; that  (sin 0) is 0, (sin pi/2) is 1, (sin (* I x)) = (sinh x)
;; etc ad infinitum.

(defun reorg (symlist op)
  (cond ((null symlist) nil)
	(t
	 (setf symlist (sort symlist #'< :key #'sxhash)) ;11/96
	 ;; IF we have runs, e.g. symlist = (x x y y y z)
	 ;; then if op=+, we must return ( (* 2 x) (* 3 y) z)
	 ;; or   if op=*, we must return ((expt x 2)(expt y 3) z)
	 (combine-runs (cdr symlist)
		       (if (eql op '+)'* 'expt)
		       (car symlist) 1)
	 )))

(defun combine-runs (l combiner v n)
  (cond ((null l)
	 (cond 
	       ((= n 1)(list v))
	       (t(case combiner
			 (* (list (simp (list '* n v))))
			 (expt (list(simp (list 'expt v n))))
			 (t (error "illegal simp combiner ~s" combiner))))))
	;; if we installed hash coding, eql would be faster than equal, below
	((equal (car l) v)
	 (combine-runs (cdr l) combiner v (1+ n)))
	;; not equal
	(t (if (= n 1)
	       (cons v (combine-runs (cdr l) combiner (car l) 1))
	     (cons 
	       (case combiner
			 (* (simp (list '* n v)))
			 (expt (simp (list 'expt v n)))
			 (t (error "illegal simp combiner ~s" combiner)))
	       (combine-runs (cdr l) combiner (car l) 1))))))
		     

(defun notsimp(x)
 (if (or (null (car x))
	 (eq (car x) 'false)) 'true
   (cons 'not x)))

(defun ifsimp(x);;  simp of (if a b c). x is list of unsimplified (a b c).
 (let ((pred (simp (car x))))
  (cond ((eql pred 'true)(simp(cadr x)))
	((eql pred 'false)(simp (caddr x)))
	(t (cons 'if (cons pred (cdr x)))))))


(defun sqrtsimp(z)
  ;; somewhat controversially, we change sqrt(4) to 2, and ignore
  ;; the possibility that it is -2 as well.
  (let ((s 0) (v (car z)))
    (cond ((and (integerp v)
		(> v -1)
		(= (* (setf s (round (sqrt (coerce (car z) 'double-float))))
		      s)
		   v))
	   s)
	  (t (list 'expt v 1/2)))))


(defun simp-numb-or-nop (rel op lis)
  ;;rel is a relation, unary or n-ary, e;g; >
  ;;op is the corresponding function, e;g; #'>
  ;;if all items in lis are numbers, apply op to lis
  ;; and if non-nil, change to 'true
  ;;otherwise cons rel lis
  (cond ((null (cdr lis))
	 (cond ((numberp (car lis))	;for unary rel
		(apply op lis))		;unary + - 
	       
	       ((eq rel '-) (simp `(* -1 ,(car lis))))
	   (t `(,rel ,@lis))))
	((every #'numberp lis)		;for n-ary rel
	 (cond ((every #'realp lis)
		(t-or-true (apply op lis))
		;;(if (apply op lis) 'true nil) ;; wrong if op is < ret. t
		)
	       ((member rel *relational-ops*) 
		`(incomparable-complex-numbers ,rel ,@lis))
	       (t (t-or-true (apply op lis))
		  ;;(if (apply op lis) 'true nil)
		  )))
	((and (member rel '(= >= <=))
	      (null (cddr lis))
	      (equal (car lis)(cadr lis)) )
	 'true)				;added 7/12/99 RJF to say that (>= a a)  is true.
	(t `(,rel ,@lis))))


(defun /-simp (xpr)
  ;; xpr MUST have 2 items.  This is different from the original
  ;; implementation.
  ;; If the denominator is equal to 1, remove it
  (cond ((eq (cadr xpr) 1)
	 (car xpr))
	((numberp (cadr xpr))
	 (simp (list '* (/ 1 (cadr xpr)) (car xpr))))  ;;(/ x 2) --> (* 1/2 x)
    (t (simp-numb-or-nop '/ #'/ xpr))))

;; added by Rick Warfield
;; Combines fractions that are multiplied together.  For examble,
;; (* (/ a x) (/ b y)) becomes (/ (* a b) (* x y)).  This facilitates
;; cancelling terms.  RWarfield

(defun combine-fractions (xpr)
  (if (null (cdr xpr)) 
      (car xpr)
      (let ((factor (car xpr))
	    (rest (combine-fractions (cdr xpr))))
	(cond ((and (fraction? factor) (fraction? rest))
	       (list '/
		     (list '* (parser_numerator factor) (parser_numerator rest))
		     (list '* (parser_denominator factor) (parser_denominator rest))))
	      ((and (fraction? factor) (not (fraction? rest)))
	       (list '/
		     (list '* (parser_numerator factor) rest)
		     (parser_denominator factor)))
	      ((and (not (fraction? factor)) (fraction? rest))
	       (list '/
		     (list '* factor (parser_numerator rest))
		     (parser_denominator rest)))
	      (t ;; Neither is a fraction
	       (list '* factor rest)))))
	)


(defun >-simp (lis) 
  (simp-numb-or-nop '> #'> lis))

(defun <-simp (lis)
  (simp-numb-or-nop '< #'< lis))

(defun =-simp (lis)
  (simp-numb-or-nop '= #'= lis))

(defun /=-simp (lis)
  (simp-numb-or-nop '/= #'/= lis))

(defun >=-simp (lis)
  (simp-numb-or-nop '>= #'>= lis))

(defun <=-simp (lis)
  (simp-numb-or-nop '<= #'<= lis))

(defun and-simp (lis &aux item)
  (cond ((null (cdr lis))(simp (car lis)))
	((setf item (simp (car lis)))
	 (and-simp-0 (cdr lis) (list item)))
	(t nil)))   

(defun and-simp-0 (lis ans) ;;ans is a list of previous clauses, simped
  (let ((simped-item nil))
    (cond ((null lis)
	   (if (null (cdr ans)) ;ans contains but one item
	       (car ans)
	     `(and ,@(nreverse ans))))
	  ((eq (setq simped-item (simp (car lis))) 'true)
	   (and-simp-0   (cdr lis) ans))
	  (simped-item ;; simped item is not 'true, but not nil
	   (and-simp-0
	    (cdr lis)
	    (cons simped-item ans)))
	  ;; the first clause of the and which is false --> false
	  (t nil))))

(setf (get 'if 'simp) #'ifsimp)
(setf (get 'if 'dontsimpargs) 'true)
(setf (get '> 'simp ) #'>-simp)
(setf (get '< 'simp ) #'<-simp)
(setf (get '/= 'simp) #'/=-simp)
(setf (get '= 'simp ) #'=-simp)
(setf (get '>= 'simp) #'>=-simp)
(setf (get '<= 'simp) #'<=-simp)
(setf (get '/ 'simp ) #'/-simp)
(setf (get 'sqrt 'simp) #'sqrtsimp)
(setf (get 'not 'simp) #'notsimp)

;; here is an example of a trivial simplifier for sin(u)
(defun sinsimplifier (arglist) 
  (cond ((numberp (car arglist))
	 (sin (car arglist)))		; takes care of (sin 0), among others
	((and (listp arglist)
	      (eq (caar arglist) 'asin))
	 (cadar arglist)) ;; (sin (asin u)) = u
	(t (cons 'sin arglist))))
;; a more ambitious simplifier could handle special angles, multiples of pi,
;; [if requested]  sin(2u)->2sin(u)cos(u) etc etc.

(setf (get 'sin 'simp) #'sinsimplifier) ;; put the program in place
;;; note: if you redefine sinsimplier, be sure to redo the (setf (get 'sin..))

(defun fraction? (x)
  (and (listp x) (eq (car x) '/)))
(defun parser_numerator (x)  (cadr x))
(defun parser_denominator (x)  (caddr x))
(defun t-or-true(x)(if (eql x 't)'true x))

(defun add1simplifier (arglist)(simp `(+ 1 ,@arglist)))
(setf (get '1+ 'simp) #'add1simplifier)

