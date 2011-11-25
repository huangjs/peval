; dataflow.lsp        Gordon S. Novak Jr.           ; 07 Feb 05; 02 May 05

; (defmacro while (test &rest forms) `(loop (unless ,test (return)) ,@forms) )

; parts of an assignment statement:
(defun op  (x) (car x))      ;  operator
(defun lhs (x) (cadr x))     ;  left-hand-side
(defun rhs (x) (caddr x))    ;  right-hand-side

(defvar *nodes*)
; each node has the format:
; (node-number successors code computed killed avail-exit)
(defmacro node-number (node) `(first ,node))
(defmacro successors  (node) `(second ,node))    ; node numbers
(defmacro code        (node) `(third  ,node))    ; (progn ...)
(defmacro computed    (node) `(fourth ,node))
(defmacro killed      (node) `(fifth  ,node))
(defmacro avail-exit  (node) `(sixth  ,node))

; Look up a node from its node number
(defun node (i) (assoc i *nodes*))  ; node number -> node

(defvar *exprs*)    ; a list of subexpressions: (expression var vars subexp)
;   var  = compiler variable associated with this expression
;   vars = list of variables involved in the expression
;   subexp = subexpressions computed by computing this expression

; Compute predecessors from successors. Returns a list of node numbers.
(defun predecessors (node)
  (let (result)
    (dolist (x *nodes* result)
      (if (member (car node) (successors x))
	  (push (car x) result))) ))

; Initialize expression table: call this once
(defun initexprs ()
  (setq *exprs* nil)
  (dolist (x *nodes*)
    (dolist (statement (cdr (code x)))
      (if (and (consp statement)
	       (eq (car statement) 'setq))
	  (exptovar (caddr statement)) ) ) ) )

; Get expressions computed in computing exp
(defun expcomputed (exp)
  (and (consp exp)
       (expsinvar (exptovar exp))))

; convert an expression to a variable or constant
; if the expression is a variable, that variable
; if a constant, the constant
; if an operator, make a subexpression and return its var
(defun exptovar (exp)
  (if (atom exp)
      exp
      (expvar (cons (car exp) (mapcar #'exptovar (cdr exp))))))

; find var associated with an expression, or make one
(defun expvar (exp)
  (let (res)
    (if (setq res (assoc exp *exprs* :test #'equal))
	(cadr res)
        (progn
	  (push (list exp (intern (symbol-name (gensym)))
		          (varsinexp exp)
			  (expsinexp exp))
		*exprs*)
	  (cadr (car *exprs*))) ) ))

; get the vars in an expression
(defun varsinexp (exp) (varsinexpl (cdr exp) nil))
(defun varsinexpl (lst vars)
  (if lst
      (union (varsinvar (car lst))
	     (varsinexpl (cdr lst) vars))
      vars))

; get the vars used in a variable -- either user or compiler var
(defun varsinvar (var)
  (let (res)
    (if (symbolp var)
	(if (setq res (member var *exprs* :key #'cadr))
	    (caddr (car res))
	    (list var)))))

; get the expression vars contained in an expression
(defun expsinexp (exp) (expsinexpl (cdr exp) nil))
(defun expsinexpl (lst vars)
  (if lst
      (union (expsinvar (car lst))
	     (expsinexpl (cdr lst) vars))
      vars))

; look up a compiler var that represents an expression
(defun lookupvar (var)
  (let (res)
    (if (and (symbolp var)
	     (setq res (member var *exprs* :key #'cadr)))
	(car res) ) ))

; get the expression vars computed in computing an expression var
(defun expsinvar (var)
  (let (res)
    (if (setq res (lookupvar var))
	(union (list var) (cadddr res)) ) ))

; convert to an expression, filling in expansion of compiler vars
(defun vartoexp (var)
  (let (res)
    (if (and (symbolp var) (setq res (lookupvar var)))
	(vartoexp (car res))
        (if (consp var)
	    (mapcar #'vartoexp var)
	    var))))

; expressions killed by redefinition of var
; result is list of expression vars
(defun killedby (var)
  (let (vars)
    (dolist (expr *exprs*)
      (if (member var (caddr expr))
	  (push (cadr expr) vars) ) )
    vars))

; test code
(setq *nodes*
  '((0 (1) (progn (setq z (sin theta))
		  (setq w (cos theta))
		  (setq sum 0)
		  (setq i 0) )
       () () ())
    (1 (2 3) (progn (setq x (* (aref a i) (sin theta))) )
       () () ())
    (2 (4) (progn (setq sum (+ sum x)) )
       () () ())
    (3 (4) (progn (setq sum (+ sum (* (aref a i) (cos theta)))) )
       () () ())
    (4 (5 1) (progn (setq i (+ i 1)) )
       () () ())
    (5 ()   (progn (setq y (+ sum (* (sin theta) (cos theta)))) )
       () () ())
    ))

