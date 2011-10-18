;;;;;;;;;;;;;;;;;;;;;;;;;;::::::::::::::::::::::
;;; paren to infix
;;; RJF copyright 1999, 2000



(defun p2i(x &optional (*stream* t))
  (declare (special *stream*))
  (parenfix x)
  (format *stream* "~%"))


(defun prinsc (x)(declare(special *stream*))
       (format *stream* "~a" x))

(defun parenfix(x  &optional (upper-prec 0))
  ;;parenthesis-inserting prefix walk and print of a tree
  ;; This started out as almost entirely data driven,
  ;; but exceptions cropped up.

  (cond ((or (and (numberp x) (< x 0));; like -3  ->  (-3)
	     (ratiop x));; like 1/2   -> (1/2)
	 (prinsc "(")
	 (prinsc x)
	 (prinsc ")"))
	((not (consp x))
	 (prinsc x));; symbol or pos. number
	((and (null (cddr x))(eq (car x) '-))
	 (prinsc "(-")
	 (prinsc (cadr x))
	 (prinsc ")"))
	((specop(op x));; like let
	 (funcall (specop (op x)) x))
	((not (infixop (op x)));; case of f(x) or f(x,y,z)
	 (parenfix (op x))
	 (prinsc "(")
	 (intersperse "," (cdr x) 0)
	 (prinsc ")"))
	;; treat +*/^ 
	((> (getprec (op x)) upper-prec)
	 (intersperse (op x)(cdr x) (getprec (op x))))
	(t 
	 (prinsc "(")
	 (intersperse (op x)(cdr x) (getprec (op x)))
	 (prinsc ")")))
  (values ))

(defun specop(r)(get r 'specop))

(defun op(x) (setf x (car x)) ;;hack to fix names
       (cond ((eq x 'expt) '^)
	 ;;; ((eq x 'setf) '\:=)
	     ((eq x 'setf) '=) ;;; c code
	     ((eq x '=) '==)
	     (t x)))

(setf (get  '!  'specop) ;;factorial is postfix
     #'(lambda(r)
	 (prinsc"(")
	 (parenfix (cadr r))
	 (prinsc "!)")))

(setf (get  'incf  'specop) ;; increment ++ is postfix
     #'(lambda(r)
	 (prinsc"(")
	 (parenfix (cadr r))
	 (prinsc "++)")))

(defun lethandler(r) 
  ;; this C-ifies a lisp (let ...)
  ;; assumes all variables are type DOUBLE
  (prinsc "{
 ")
  (mapc 
   #'(lambda(s) 
       (prinsc "double ")
       (if (atom s)(format t "~a" s)
	 (parenfix (list '= (car s)(cadr s)) -1))
       (prinsc ";
      "))
   (cadr r))
  ;; the body comes next
  (mapc #'(lambda(s)(parenfix s 0)(prinsc ";
      "))
	(cddr r))
  (prinsc "}"))

(setf (get  'let  'specop) #'lethandler)
(setf (get  'let*  'specop) #'lethandler) ;ok for demo


     
(defun intersperse (op l prec)		   
  ;; op=+, l = (a,b,c) prints  a+b+c. parens inserted if appropriate.
  ;; bug:  if op = and, it prints aandbandc, no spaces.
  ;; a principled way of fixing this would be to  translate AND to " AND " or to "&"
  (cond((null l) nil)
       ((null (cdr l))(parenfix (car l) prec))
       (t (parenfix (car l) prec)
	  (mapc #'(lambda(r)(parenfix op)
			 (parenfix r prec))
		(cdr l)))))

(defun infixop(x)
  (member  x
	    '( setf \:= + * ^ -  / > < >= <= = == and or expt setf)))

(defun getprec(x)(or (get  x   'prec)     100))


;; C compatible
(defparameter preclist
    '((setf =) ;low binding power
      (or)
      (and)(not)
      (< > <= >= == )
      (+ -)
      (* /)
      (^ EXPT)
      ))

#+ignore
(defparameter preclist ;; not C conventions.
    '((setf \:=) ;low binding power
      (or)
      (and)(not)
      (< > <= >= = )
      (+ -)
      (* /)
      (^ EXPT)
))

(eval-when (load) ;;set up the precedences 
  (let ((count 0))
    (dolist (i preclist)
      (mapc #'(lambda (r) (setf (get r 'prec) count)) i)
      (incf count))))

;; end of p2i prefix to infix.





