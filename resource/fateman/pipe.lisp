;;; see contin.tex for documentation
(load "p2i")				;re-use prefix to infix code
(load "lda")				;live-dead analysis
;; the  basic definition
;; e.g. from Norvig PAIP
(defmacro make-pipe (head-pipe tail-pipe) 
  `(cons ,head-pipe #'(lambda() ,tail-pipe)))

(defun tail-pipe (pipe) ;; we add in at the tail, if requested, 0 0 0 ...
  (if (functionp (rest pipe))(setf (rest pipe)(funcall (rest pipe)))
    (or (rest pipe) (list 0))))

;; this would be the simple version.
#+ignore (defun head-pipe(pipe)(car pipe))

(defun pipe-elt (pipe i)
  (cond ((null pipe) 0)
	((= i 0) (head-pipe pipe))
	(t (pipe-elt (tail-pipe pipe) (- i 1)))))

(defun piece-pipe (pipe  &optional (i 5) (j nil))
  " make a list out of a piece of a pipe from i to j"
  ;; if the extra args are missing show 5 elements 
  (if (null j);; piece-pipe show elements from 0 to i-1
      (loop for k from 0 to (- i 1) collect (pipe-elt pipe k))
    ;; otherwise start at i and go to j
    (loop for k from i to j collect (pipe-elt pipe k))))

(defun pp(pipe  &optional (i 5) (j nil))(piece-pipe pipe i j))

(defun map-pipe (fn &rest pipes)  
  "map fn over one or more pipes to produce pipe"
  (unless (null (car pipes)) ; the length of arg 1 governs
    (make-pipe (apply fn (mapcar #'head-pipe pipes))
	       (apply #'map-pipe fn (mapcar #'tail-pipe pipes)))))


;; example 1
(defun integers-pipe (&optional (start 0) end) 
  "pipe of integers starting from start"
  (if (or (null end) (<= start end))
      (make-pipe start (integers-pipe (+ start 1) end))nil))

(defun filter-pipe(pipe pred)
  (cond((empty-pipe pipe) pipe)
       ((funcall pred (head-pipe pipe))
	(make-pipe (head-pipe pipe)
		   (filter-pipe (tail-pipe pipe) pred)))
       (t(filter-pipe (tail-pipe pipe) pred))))
	

;;   RJF added 5/2000

(defun empty-pipe(x) (or (null x) (equal x '(0))))

(defvar the-empty-pipe nil)
      
;;;;
;; examples adapted from SICP 
;;power series  exercise 3.60

;; note that exp(x)= 1+x+x^2/2 + x^3/6 +...
;;           sin(x)=   x       - x^3/6         +x^5/5! + ...
;;           cos(x)= 1  -x^2/2         +x^4/4! + ...

;;also deriv(sin(x),x) = cos(x)
;;     deriv(cos(x),x) =-sin(x)

;;also deriv of a stream a0, a1, a2, a3, ...
;;                  is   a1, 2*a2, 3*a3 ...
;;
;;  s is a  power series (a b c ...)
;;  representing a + b*x + *x^2 + ....
;;  obvious directions for generalization:
;;  Sparse. Multivariate (several variants of this: recursive, expanded).
;;  Expansion at arb. point.
;;  Negative exponents.  Fractional exponents.
;;  Expansion at infinity. Singular points. 

(defun ps-deriv (s)(tail-pipe (map-pipe #'* s (integers-pipe 0))))
(defun ps-integ (s) 
  (map-pipe #'/ s (integers-pipe 1))) ;; leaves off the constant though
(defparameter ps-exp (make-pipe 1 (ps-integ ps-exp)))  ;1+x +...+x^n/n!
(defun scale-pipe (s f)(map-pipe #'(lambda(x)(* x f)) s))
(defparameter ps-cos (make-pipe 1 (scale-pipe (ps-integ ps-sin) -1 )))
(defparameter ps-sin (make-pipe 0 (ps-integ ps-cos)))

(defun ps-add (x y)
    (cond ((empty-pipe x) y)
	((empty-pipe y) x)
	(t(make-pipe (+ (head-pipe x)(head-pipe y))
		   (pss-add (tail-pipe x)(tail-pipe y))))))

(defun ps-mult (s1 s2)
	;;multiply 2 power series, same variable at same pt.
  (make-pipe (* (head-pipe s1)(head-pipe s2))
	     (ps-add
	      (scale-pipe (tail-pipe s1)(head-pipe s2))
	      (ps-mult s1 (tail-pipe s2)))))

(defun ps-sq(s1)(ps-mult s1 s1))
;(defparameter zz (ps-add (ps-sq ps-cos)(ps-sq ps-sin)))

;;(piece-pipe ps-exp 10)
;;(1 1 1/2 1/6 1/24 1/120 1/720 1/5040 1/40320 1/362880)

;; (piece-pipe zz 10) should be (1 0 0 0 0 0 0 0 0 0) since sin^2+cos^2=1



;;;;;;;;;;;; the symbolic version
(load "simpsimp") ;; needs symbolic simplifier
(defparameter inf #.double-float-positive-infinity)
(defparameter minf #.double-float-negative-infinity)

(defun pss-deriv (s)(tail-pipe (map-pipe #'*s s (integers-pipe 0))))
(defun pss-integ (s) (map-pipe #'/s s (integers-pipe 1))) ;; leaves off the constant though
(defun scale-pipe-s (s f)(map-pipe #'(lambda(x)(*s x f)) s))
(defun pss-add (x y)
  (cond ((empty-pipe x) y)
	((empty-pipe y) x)
	(t(make-pipe (+s (head-pipe x)(head-pipe y))
		   (pss-add (tail-pipe x)(tail-pipe y))))))

(defun pss-mult (s1 s2)
  ;;multiply 2 power series, same variable at same pt.
  (if (or (empty-pipe s1)(empty-pipe s2)) the-empty-pipe
  (make-pipe (*s (head-pipe s1)(head-pipe s2))
	     (pss-add
	      (scale-pipe-s (tail-pipe s1)(head-pipe s2))
	      (pss-mult s1 (tail-pipe s2))))))

(defun pss-sq(s1)(pss-mult s1 s1))

(defun +s( &rest k)(simp `(+ ,@ k))) ;; interface to simpsimp
(defun *s( &rest k)(simp `(* ,@ k)))
(defun /s( &rest k)(simp `(/ ,@ k)))


#|
Composition...
Let U(z)= u0+u1*z+u2*z^2+ ... and 
V(z)= 0 +v1*z_v2*z^2+ ...   ;; important that initial coeff is 0
 if it is not 0, then it is impossible to find w0 without knowing
 all the terms of U.

Compute W(z)=U(V(x))=w0+w1*z+....,  the first N coefficients

See Knuth vol 2 2nd ed section 4.7 problem 11. There are 2 methods or more
suggested, with Kung & Traub being faster;

this is the slower one for
Composition of Power Series. Knuth suggests this method:
w0 := u0
set
(tk,wk) := (vk,0) for 1 <= k <=N
next,
for n:=1, 2, ...N
do wj:= wj+un*tj  for n<=j <=N
and then
tj:=  t[j-1]*v1 + ... tn*v[j-i] for j = N, N-1, ... n+1

(here t(z) represents V(z)^n)

...eh, this is simpler to program, but is it as efficient?

note that
u(v(x)) = u0 + u1*V+ u2*V^2 +u3*V^3 + ...)  ;; V= 0+v0*x+v1*x^2+...

u(v(x)) = u0 + V'*(u1+ u2*V+u3*V^2 + ...))

= u0 + V'*(U'(V(x)))    where U' is the powerseries for
U, shifted with the u0 term dropped off, and V' is used
instead of V, where V' is the V series with the (0) initial term dropped off.
So N-composition is one add, one multiply and one (N-1)-composition.
Note that computing V^n, making some other methods competitive..

|#
(defun ps-compose(u v) 
  ;; many terms.  There are n^2 and (n log n)^(3/2) algorithms.
  ;; see knuth vol 2 section 4.7 prob 11 and its answers for
  ;; these better versions.
  
  (if (equalp (head-pipe v) 0)
      (ps-comp1 u  v)
    (error "can't compose pipes u v with v=~s" v)))

(defun ps-comp1(u v)
  (make-pipe  (head-pipe u)
	      (pss-mult (ps-comp1 (tail-pipe u) v)(tail-pipe v))))

;; Horner's rule

(defun horner-pipe (p s n) ;; eval p at s to n terms does not return a pipe
  (cond ((or (= n 0)(empty-pipe p))0)
	(t (+ (head-pipe p)(* s (horner-pipe (tail-pipe p) s (1- n)))))))

(defun horner-pipe-s (p s n)
  ;; symbolic eval p at s to n terms does not return a pipe
;; (horner-pipe-s '(a b c) 'x 3) -> (+ A (* X (+ B (* C X))))

  (cond ((or (= n 0)(empty-pipe p))0)
	(t (+s (head-pipe p)(*s s (horner-pipe-s (tail-pipe p) s (1- n)))))))

(defun poly-eval-list-s (p s)		;no pipes at all
  (cond ((null p) 0)
	(t 
	 (let* ((h (car p))
		(coef (car h))
		(expon (cadr h)))
	   (+s (*s coef `(expt x ,expon)) 
	       (poly-eval-list-s  (cdr p) s ))))))


;; an evaluation pipe...
;; p0 = a0
;; p1 = a0+x*a1
;; p3=  a0+x*(a1+x*a2)
;; this is useless..
;;how 'bout
;; p0 = an
;; p1 = x*an+a[n-1]
;; p2 = x*(x*an+a[n-1])+a[n-2] = x*p1+a[n-2]
;; pn = x*p2+a[0]  ;; the value.
;; this suggests we should use pipes with high-order terms first..
;;;;;;;;;;;;;;;;;;;;;;;**************************;;;;;;;;;;;;;;;;;;;;
;;
#|computing powers of power series
see Knuth section 4.7 eq (9) 
W(z)= V(z)^alpha = (1 +v[1]*z+v[2]*z^2+...)^alpha  
note: apparent constraint on v[0]=1 can be pre-processed away; 
alpha can be -1, rational, real, as well as usual pos int.

The answer is
W(z)=  1+w[1]*z++w[2]*z^2+ ...
where
w[0]=1
w[n]= sum for k=1 to n of (k*(alpha+1)/n-1)*v[k]*w[n-k]
= (1/n)*((alpha+1-n)v[1]*w[n-1]+ 
         (2*alpha+2-n)*v[2]*w[n-2]]+ ...
        + n*alpha*v[n])

The derivation is really neat, and it is an on-line algorithm.
Can we make it into a pipe?  Sure.
|#
(defun ps-power(v a)
  (if (equalp (head-pipe v) 0)(error "haven't implemented ps-power of ~s" v)
    (let ((w (make-pipe 1 (ps-power1 1))) ;start up the pipe with w0=1
	  (ap1 (+ a 1)) ) ;;alpha + 1
      (defun ps-power1(n)
	(make-pipe
	 (do ((k 1 (+ 1 k))
	      (s 0 (+s s 
		       (newname
			(*s 
			(- (* ap1 k)  n) ;; could mult by 1/n
			    (pipe-elt v k)
			    (pipe-elt w (- n k))))
			)))
	     ((> k n) (*s (/ 1 n) s))
	 )
	 (ps-power1 (+ 1 n))))
      w)))

;; also a power of a power series, but the answer format is different,
;; with 1/n distributed into terms
(defun ps-powerx(v a)
  (if (equalp (head-pipe v) 0)(error "haven't implemented ps-power of ~s" v)
    (let ((w (make-pipe 1 
			(ps-power1 1)))
	  (ap1 (+ a 1)) )
      (defun ps-power1(n)
	(make-pipe
	 (do ((k 1 (+ 1 k))
	      (s 0 (+s s 
		       (*s 
			(/(- (* ap1 k)  n) n)
			    (pipe-elt v k)
			    (pipe-elt w (- n k)))
			)))
	     ((> k n)  s) )
	 (ps-power1 (+ 1 n))))
      w)))



(defparameter fibs  ;; usual fibonacci stream
    (make-pipe 1 (make-pipe 1 
			    (map-pipe #'+ fibs (tail-pipe fibs)))))

(defparameter fibs-s ;; starting with f0, f0, f0+f1, ... simplifying
    (make-pipe 'f0 (make-pipe 'f1 
			      (map-pipe #'+s fibs-s (tail-pipe fibs-s)))))

(defparameter fibs-s2 ;; same as above, no simplifying
    (make-pipe 'f0 (make-pipe 'f1 
			      (map-pipe #'(lambda(r s)`(+ ,r ,s)) fibs-s2 (tail-pipe fibs-s2)))))

(defun integers-from(x)(make-pipe x (integers-from (+ 1 x))))
(defun integers-from-s(x)(make-pipe x (integers-from-s (+s 1 x))))

(defparameter facts 
      (make-pipe 1 (map-pipe #'(lambda(r s)(* r s))
			     (integers-from 2)
			     facts)))

(defun h (x) ;; x, x*(x+1), x*(x+1)*(x+2), ...
  (let ((ans nil))
    (setf ans  (make-pipe x (map-pipe #'(lambda(r s)(* r s))
				      (integers-from (+ x 1))
				      ans)))
    ans))

(defun hs (x) ;; x, x*(x+1), x*(x+1)*(x+2), ...
  (let ((ans nil))
    (setf ans  (make-pipe x (map-pipe #'(lambda(r s)(*s r s))
				      (integers-from-s (+s x 1))
				      ans)))
    ans))

(defvar *in-ap* nil) ; flag: normally not in analyze-pipe. affects head-pipe

;; we use newsym to keep names/numbers small. Better to use gensym for real.
(let ((newsymcount 0)(newsymname "W")(vars nil)
      (pluscount 0)(timescount 0)(dividecount 0))
  
  (defun newsym (&optional name (c 0))	;e.g. (newsym "W" 0) restarts with W0
    (if name (setf newsymname name))
    (if c (setf newsymcount c))
    (let ((newname (makename)) )
	  (push newname vars)
	
	  newname))
  
  (defun newname (h)
    (let ((n nil))
    (cond ((atom h)h)
	  ((setf n(find h vars :key #'cadr :test #'equal))
	   (car n)); value is already computed!
	  
	  (t (let ((n (makename)))
	       (incf pluscount (treecount '+ h ))
	       (incf pluscount (treecount '- h ))
	       (incf timescount(treecount '* h ))
	         (incf dividecount(treecount '/ h ))
	       
	       (push `(,n ,h) vars)
	       n)))))
  (defun treecount(x h)
    (cond ((null h) 0)
	  ((atom h) 0)
	  ((eq x (car h))
	   (+ (length (cddr h))	; how many ops of + or *
	      (treecountl x h)))
	  (t (treecountl x (cdr h)))))
  (defun treecountl(x hl)
    (cond ((null hl) 0)
	  (t (+ (treecount x (car hl))
		(treecountl x (cdr hl))))))
  
  (defun makename()
    (prog1 (intern (format nil "~a~a" newsymname newsymcount))
	(incf newsymcount)))
  ;; use (gensym) above for real

  (defun newsymvarsclear () (setf vars nil
				  pluscount 0
				  timescount 0
				  dividecount 0)) ;;erase history of names
  (defun newsymvars () (reverse vars))  ;;a list of names recently generated
  (defun newsymplus () pluscount)
  (defun newsymtimes () timescount)
  (defun newsymdivides () dividecount)
   
   (defun head-pipe(pipe)
     (declare (special *in-ap*))
     (if *in-ap*
     (cond ((atom (car pipe))(car pipe))
			       (t (let ((n (makename)))
				    (push `(,n ,(car pipe)) vars)
				    (rplaca pipe n)
				    n
				    )))
     ;; otherwise
     (car pipe)))
 )


#+ignore  ;; the gensym version "for real"

(let ((newsymcount 0)(newsymname "W")
      (vars nil))
  
  (defun newsym (&optional name   c)	;e.g. (newsym "W" 0) restarts with W0
    (if name (setf newsymname name))
    (let ((newname (gensym newsymname)))
      (push newname vars)
      newname))
  (defun newsymvarsclear () (setf vars nil));;erase history of names
  (defun newsymvars () (reverse vars));;a list of names recently generated
  )

(defvar overrun-to-pipe t);;; what happens if you ask for too many terms?

;; generate some test pipes.

(defun vpm (n &optional (v "V"))
  ;; (v 0) will make a pipe v0 v1 ...
  (make-pipe (intern(format nil "~a~a" v n) )
	     (vpm (+ n 1) v)))
(defparameter v-pipe (vpm 0))
(defparameter u-pipe (vpm 0 "U"))
(defparameter v1-pipe (make-pipe 1 (vpm 1)))
(defparameter v0-pipe (make-pipe 0 (vpm 1)))


(defun merge-pipe (p1 p2 compare) ;;; a sorted pipe
  (cond ((empty-pipe p1) p2)
        ((empty-pipe p2) p1)
        (t (let ((h1 (head-pipe p1)) (h2 (head-pipe p2)))
             (if (funcall compare h1 h2)
                 (make-pipe h1 (merge-pipe (tail-pipe p1) p2 compare))
                 (make-pipe h2 (merge-pipe (tail-pipe p2) p1 compare)))))))
       

;; (merge-pipe '(1  3 5) '(2 4 6) #'<) ==> 1 2 3 4 ...

(defun filter(f l) ;; items x  for which (f x) is true go away
  (cond((null l)l)
       ((funcall f (car l))(filter f(cdr l)))
       (t(cons (car l)(filter f (cdr l))) )))


(defun merge-pipe-min (&rest pipes)
  ;; all pipes assumed sorted, smallest first
  (setf pipes (filter #'empty-pipe pipes))
  (cond 
   ((null pipes) nil)
   (t
    (let* ((ans nil)
	   (first (simp `(min ,@(mapcar #'head-pipe pipes)))))
      (setf ans
	    (make-pipe
	     first
	     (apply #'merge-pipe-min
		    (append (mapcar #'tail-pipe pipes);n tails of all the pipes
			    (mapcar	;up to n additional pipes
			     #'(lambda(z)
				 (make-pipe
				  (simp`(if(equal ,(head-pipe ans);first
						  ,z )
					    ,inf
					  ,z)) nil))
			     (mapcar #'head-pipe pipes)
			     )))))
      ans))))


	    
;;; this requires the auto-memoization head-pipe

(defun analyze-pipe( p n)		; up to n terms
  (let ((*in-ap* t))
    (declare (special *in-ap*))		;change head-pipe to memoize
    (newsym "W" -1)
    (newsymvarsclear)

    (let ((body (piece-pipe p n)))
      `(let*,(newsymvars)
	    (append  (list ,@body) ,(cdr (nth-pipe p (1- n))))))))

(defun nth-pipe (p n) ;; run the pipe out to nth tail
  (cond ((empty-pipe p) the-empty-pipe)
	((= n 0) p)
	(t (nth-pipe (tail-pipe p) (1- n)))))


(defun merge-pipe-max (&rest pipes)
  ;; all pipes assumed sorted, max first
  (setf pipes (filter #'empty-pipe pipes))
  (cond 
   ((null pipes) nil)
   (t
    (let* ((ans nil)
	   (first
	    (simp `(max ,@(mapcar #'head-pipe
				  pipes))))) ;; looks like (max ...) or not
      (setf ans
	    (make-pipe
	     first
	     (apply #'merge-pipe-min
		    (append (mapcar #'tail-pipe pipes);n tails of all the pipes
			    (mapcar	;up to n additional pipes
			     #'(lambda(z)
				 (make-pipe
				  (simp`(if (not (equal 
						  ,(head-pipe ans);first
						  ,z ))
					    ,z ,minf)) nil))
			     (if (and (listp first)(eq (car first) 'max))
				 (cdr first)
			       (mapcar #'head-pipe pipes))
			     )))));; first is (max ...)
      ans))))
  
    

;;;runge-kutta 4th order ode solver for y'(x)=f(x,y)
;;; e.g. (rk45  #'(lambda(x y) (- y)) 0 -1 0.1) 
;;; gives (exp -x).. actually (exp 0), (exp -0.1), (exp -0.2) ...

(defun rk45(f x y step)
  (make-pipe
   (funcall f x y)
   (let* ((h  (/ step 2))
	  (k1 (* step (funcall f x y)))
	  (k2 (* step (funcall f (+ x h)(+ y (/ k1 2)))))
	  (k3 (* step (funcall f (+ x h)(+ y (/ k2 2)))))
	  (k4 (* step (funcall f (+ x step)(+ y k3)))))
     (rk45 f (+ x step)
	   (+ y (* 1/6(+  k1 k4 (* 2 (+ k2 k3)))))
	   step))))

;;; the symbolic version
`
(defun rk45-s(f x y step)
  (make-pipe
   (newname `(funcall ,f ,x ,y))
   (rk45-s 
    f  
    (newname (+s x step))
    (let* ((h (newname (*s 0.5 step)))
	   (k1 (newname (*s step (newname `(funcall ,f ,x ,y)))))
	   (m0 (newname(+s x h)))
	   (k2 (newname (*s step `(funcall ,f ,m0 ,(+s y (*s 0.5 k1))))))
	   (k3 (newname (*s step `(funcall ,f ,m0 ,(+s y (*s 0.5 k2))))))
	   (k4 (newname (*s step `(funcall ,f ,(+s x step) ,(+s y k3))))))
      (newname(+s y (/s (+s k1 k4 (*s 2 (+s k2 k3))) 6))))
    step)))


;(p2i (lda-let (analyze-pipe (rk45-s 'f 'x0 'y0 's) 3)))
;(analyze-pipe (rk45-s  #'(lambda(x y) (- y)) 0 -1 0.1) 3)









