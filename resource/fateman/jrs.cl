;;-*- mode: common-lisp; -*-

(eval-when (compile load eval)
  (declaim (optimize (speed 3)(safety 0) )))

(defun two-sum(a b)			;jrs's short paper theorem2
  (declare (double-float a b)) 
  (let*((x (+ a b))
	(bv (- x a))
	(ar (- a (- x bv)))
	(y (+ ar (- b bv))))
    (declare (double-float a b x y av ar bv br))     
    (values x y)))

(defun fast-two-sum(a b)  ;;assumes |a| > |b|, both double-floats.
  (declare (double-float a b) (optimize (speed 3)(safety 0)))
  (let ((x (+ a b)))
    (declare (double-float x))
    (values x (-  b  (- x a)))))



(defun numerge (e f)
  ;;non-destructive merge. (similar CL merge is destructive)
  (cond ((null e) f)((null f) e)
	((> (the double-float (car e)) 
	    (the double-float (car f)))
	 (cons (car e)(numerge (cdr e) f)))
	(t
	 (cons (car f)(numerge e (cdr f))))))
	
(defun linear-expansion-sum (e f)	;from jrs' description
  (let ((g (numerge e f))
	(bqi 0.0d0);;big Q[i], i=2 initially
	(lqi 0.0d0);;little q[i]
	(r  0.0d0)
	(htemp 0.0d0)
	(h nil))
    (declare (double-float bqi lqi r htemp) (optimize (speed 3)(safety 0)))
    (multiple-value-setq 
	(bqi lqi)
      (fast-two-sum (cadr g)(car g)))	;bq2,lq2 =twosum of g2, g1
    (setf g (cddr g))
    (do ((i g (cdr i)))
	((null i)			;if at end
	 (unless (= lqi 0.0d0) (push lqi h));tack last two pieces on
	 (unless (= bqi 0.0d0) (push bqi h))
	 h);; return the preferred ordering
      ;; this is the inside of the loop	  
      (multiple-value-setq   (r htemp)
	(fast-two-sum (car i)lqi))
      (multiple-value-setq   (bqi lqi)
	(two-sum bqi r))
      (unless (= htemp 0.0d0) (push htemp h)))))

    
(defun split(a)
  (let* ((c (* a #.(+ 1 (expt 2 26)))) ;compile time constant
	(abig (- c a))
	(ahi (- c abig)))
    (values (- c abig) (- a ahi))))

(defun two-product (a b)
  (multiple-value-bind (ahi alo)
      (split a)
    (multiple-value-bind (bh blo)
	(split b)
      (let* ((x (* a b))
	     (err1 (- x (* ahi bhi)))
	     (err2 (- err1 (* alo bhi)))
	     (err3 (- err2 (* ahi blo))))
	(values x (- (* alo blo) err3))))))
	
(defun scale-expansion(e b)
  (multiple-value-bind
      (q2 h1) (two-product (car e) b)
    (do ((i (cdr e)(cdr i)))
	((null i) (push bq h) h)))	;return value
  ;;; this is wrong.  Need to re-think this from
  ;;; arrays to lists
	(multiple-value-setq (bti ti)
	  (two-product (car i) b))
	(multiple-value-setq (qti hi)
	  (two-sum qti t))
	(multiple-value-setq (qti hi)
	(fast-twosum bti qi)))
    
;; testing

(defun les(x y)(linear-expansion-sum x y))

(defun double(x) (setf x(mapcar #'double-float x))
       (les x x))

(defparameter t1 (list (expt 2 60) (expt 2 30) (expt  2 10) (expt 2 -40)))

;;(double t1) => (2.3058430113611794d+18 1.8189894035458565d-12)
;; correct answer via mathematica is 
2.305843011361179648000000000001818989403545856475830078125000d18

:::SYMBOLIC

(defun l-s(e f)
  (newsym "W" -1)
  (newsymvarsclear) 
  (let* ((sumlen(+ (length e)(length f)))
	 (res (linear-expansion-sum-s sumlen)))
	 
    `(lambda (e f);;
       (setf g (merge e f))
      ,(lda-let  `(let*,(append (list (list 'acount sumlen))
		     (genelts sumlen)
	    
	       (newsymvars))
	    		      
		      
		       ,@(append
		 (apply #'slist1 res)
	      '((values acount bstack))))
	      )
	      
	      )))


(defun genelts(s)
  (let ((i -1))
  (mapcar #'(lambda(r)(incf i)`(,r (elt g ,i)))
			      (pp (vpm 0 "G")  s))))
  
(defun les-s (n)(linear-expansion-sum-s n))

(defun linear-expansion-sum-s (sumlen)
;;symbolic.  sumlen = sum of lengths of e and f
  (let ((g ;;(numerge e f)
	 (pp (vpm 0 "G")  sumlen)
	 )
	
	(bqi nil)
	(lqi nil)
	(r  nil)
	(htemp nil)
	(h nil))
    
    (multiple-value-setq 
	(bqi lqi)
      (fast-two-sum-s (cadr g)(car g)))	;bq2,lq2 =twosum of g2, g1
    (setf g (cddr g))
    (do ((i g (cdr i)))
	((null i)			;if at end
	 (push bqi h)
	 (push lqi h)			;we can't tell if they're zero..

	 (reverse h)
	 );; return the preferred ordering.
      ;;this is the inside of the  loop
      (multiple-value-setq   (r htemp)
	(fast-two-sum-s (car i)lqi))
      (multiple-value-setq   (bqi lqi)
	(two-sum-s bqi r))
      (push htemp h))))


(defun fast-two-sum-s(a b)  ;;assumes |a| > |b|, both double-floats.
  (let ((x (+s a b)))
    (values x (newname(-s  b  (-s x a))))))

(defun -s( &rest k)`(- ,@ k))

(defun two-sum-s(a b)			;jrs's short paper theorem2
  (let*((x (r+s a b))
	(bv (r-s x a))
	(ar (r-s a (-s x bv)))
	(y (r+s ar (-s b bv))))
    (values x y)))

#+ignore
(defun rename (h)
  (cond ((atom h)h)
  (t (let ((n (makename)))
       (push `(,n ,h) vars) n))))

(defun r+s (g h)(newname(+s g h)))
(defun r*s (g h)(newname(*s g h)))
(defun r-s (g h)(newname(-s g h)))

(setf (get '- 'simp) #'(lambda(r)(cons '- r))) ;; don't simplify -..

(defun slist(&rest s)
  ;; generate code to produce a pair acount bstack
  ;; where acount = number of non-zero elements in s
  ;; bstack is the list of them
  (let ((ccode  (apply #'slist1 (reverse s))))
    `(let ((acount 0)
	   (bstack nil))
       ,@ccode
       (values acount bstack))))

(defun slist1(&rest s)
  (cond((null s) '())
       (t
	(cons
	 `(when (= ,(car s) 0.0)(push ,(car s) bstack) (incf acount))
	 (apply #'slist1 (cdr s))))))


;;;
;;;multi-term stuff

(defun +m (&rest z)
  (if (not(= (length z 2)))(error "fix +m to do other than 2 args ~s" z))
  `(,(intern(format nil "MT+~a&~a" (mtlength (car z))
		(mtlength(cadr z)))),@(mapcar #'mtbody z	)))
(defun mtlength(z)
  (cond((and (listp z)(eq (car z) 'mt)) (caddr z))
       (t 1)))
(defun mtbody(z)
  (cond((and (listp z)(eq (car z) 'mt)) (cadr z))
       (t z)))

(defun +m (&rest z)
  (if (not(= (length z 2)))(error "fix +m to do other than 2 args ~s" z))
  (let ((l0 (mtlength (elt z 0)))
	(l1 (mtlength (elt z 1))))
    `(MT (,(intern(format nil "MT+~a&~a" l0 l1)),@(mapcar #'mtbody z))
	 ,(+ l0 l1))))

(defun *m (&rest z)
  (if (not(= (length z 2)))(error "fix *m to do other than 2 args ~s" z))
  (let ((l0 (mtlength (elt z 0)))
	(l1 (mtlength (elt z 1))))
    `(MT (,(intern(format nil "MT*~a&~a" l0 l1)),@(mapcar #'mtbody z))
	 ,(+ l0 l1))))


(setf (get 'mt 'simp) #'(lambda(r)(simp (car r)))) ;; (mt a 4) => a


#|
;; adding a 4 and 2 element  list


(LAMBDA (E F)
  (SETF G (MERGE E F))
  (LET* ((ACOUNT 5)
         (G0 (ELT G -24))
         (G1 (ELT G -25))
         (G2 (ELT G -26))
         (G3 (ELT G -27))
         (G4 (ELT G -28))
         (W0 (- G0 (- (+ G0 G1) G1)))
         (W1 (- W0 (- (+ W0 G2) G2)))
         (W2 (+ G0 W0 G1 G2))
         (W3 (- W2 (+ G0 G1)))
         (W4 (- (+ G0 G1) (- W2 W3)))
         (W5 (+ W0 G2 W4 (* -1 W3)))
         (W6 (- W5 (- (+ G3 W5) G3)))
         (W7 (+ W2 G3 W5))
         (W8 (- W7 W2))
         (W9 (- W2 (- W7 W8)))
         (W10 (+ G3 W5 W9 (* -1 W8)))
         (W11 (- W10 (- (+ W10 G4) G4)))
         (W12 (+ W10 G4 W7))
         (W13 (- W12 W7))
         (W14 (- W7 (- W12 W13)))
         (W15 (+ W10 W14 G4 (* -1 W13))))
    (WHEN (= W15 0.0) (PUSH W15 BSTACK) (INCF ACOUNT))
    (WHEN (= W12 0.0) (PUSH W12 BSTACK) (INCF ACOUNT))
    (WHEN (= W11 0.0) (PUSH W11 BSTACK) (INCF ACOUNT))
    (WHEN (= W6 0.0) (PUSH W6 BSTACK) (INCF ACOUNT))
    (WHEN (= W1 0.0) (PUSH W1 BSTACK) (INCF ACOUNT))
    (VALUES ACOUNT BSTACK)))

|#






