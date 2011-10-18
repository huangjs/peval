;;; -*- Mode: LISP; Package: (PARTIAL :USE CL :SHADOW (CLASS METHOD DEFCONSTANT DEFPARAMETER DEFVAR DEFUN DEFCLASS DEFMETHOD) :COLON-MODE :EXTERNAL); Base: 10; Syntax: Ansi-common-lisp -*-

;;; LaHaShem HaAretz U'Mloah

#||#(in-package :cl-user)

(eval-when (compile load eval)
 (defpackage :partial (:shadow :class :method :defconstant :defparameter
			       :defvar :defun :defclass :defmethod)
  (:import-from :screamer :defun-compile-time :defvar-compile-time
		:check-lambda-list :quotify
		:peal-off-documentation-string-and-declarations
		:check-function-name :walk :lambda-list
		:function-lambda :function-symbol :function-setf :macro-call
		:lambda-call :symbol-call :setf-call :full :boolean)
  (:shadowing-import-from :screamer :variable)
  (:use :cl :iterate #+lucid :lcl #+lucid c-to-ffi)
  (:export :define-partial-package :declare-function-type
	   :declare-variable-type :define-c-uncodifier :c-uncodify-unary-float
	   :code :expressions :partial :full :unwedge-partial *trace?*
	   *uncodify* *glet?*)))

(in-package :partial)

;;; TTMTTD:
;;;  1. THROW CATCH UNWIND-PROTECT
;;;  2. EVAL-WHEN PROGV
;;;  3. MACROLET
;;;  4. SYS:VARIABLE-LOCATION COMPILER:INVISIBLE-REFERENCES
;;;  5. Should fix up error messages
;;;  6. :AFTER INITIALIZE-INSTANCE :WRITER
;;;  7. &AUX
;;;  8. generalize WALK
;;;  9. (PARTIAL ... (PARTIAL ...) ...)
;;; 10. need to walk declarations and types
;;; 11. should not produce (SLOT-VALUE X 'F) when transparent but should
;;;     instead produce (F X)
;;; 12. something which is false in model should partial evaluate to NIL
;;;     something which is true in model when it is of type BOOLEAN should
;;;     evaluate to T
;;; 13. unsound to a-extract an expression for which multiple values are
;;;     needed
;;; 14. dead code: error calls
;;; 15. universally shielded
;;; 16. x+0->x, 0+x->x, x-0->x, etc.
;;; 17. unsound to a-extract from the consequent or alternate of a top level
;;;     conditional if ti can return multiple values
;;; 18. unsound to a-extract an error call
;;; 19. faster expand-if for MULTIPLE-VALUE-CALL
;;; 20. don't a-extract if only occurance is in a b-extraction

;;; note: FULL values and transparent functions must not cause or rely on side
;;;       effects. FULL values must not be out of scope.
;;; note: Can a class inherit from a non-class?

;;; needs work: PARTIAL EVALUATING CODE WITH SIDE EFFECTS DOESN'T WORK

;;; The foreign function interface

(eval-when (compile load eval) (load-foreign-files "~qobi/screamer/partial.o"))

(def-foreign-callable (c-error (:language :c)
			       (:name "_error")
			       (:return-type nil))
    ((message :simple-string))
 (error message))

(def-foreign-struct double-or-symbol
    (d :type :double-float)
 (s :type :signed-32bit))

(def-foreign-struct int-or-symbol
    (i :type :signed-32bit)
 (s :type :signed-32bit))

(cl:defparameter double-or-symbol-result
  (let ((ptr (or (foreign-variable-pointer "_double_or_symbol_result")
                 (error "\"_double_or_symbol_result\" unknown"))))
   (setf (foreign-pointer-type ptr) '(:pointer double-or-symbol))
   ptr))

(cl:defparameter int-or-symbol-result
  (let ((ptr (or (foreign-variable-pointer "_int_or_symbol_result")
                 (error "\"_int_or_symbol_result\" unknown"))))
   (setf (foreign-pointer-type ptr) '(:pointer int-or-symbol))
   ptr))

(defmacro define-partial-package (defined-package-name &rest options)
 ;; note: This EVAL-WHEN shouldn't be necessary but it is due to a bug in
 ;;       Lucid.
 `(eval-when (compile load eval)
   (defpackage ,defined-package-name ,@options
    (:shadowing-import-from :partial :defconstant :defparameter :defvar :defun
     :defclass :defmethod)
    (:shadowing-import-from :screamer :y-or-n-p)
    (:use :cl #+lucid :lcl :screamer :partial))))

(define-partial-package :partial-user)

(clos:defclass environment ()
 ;; note: The MACROS slot really holds a native environment.
 ((macros :initform nil :initarg :macros :reader macros)
  (lexical-bindings
   :initform nil :initarg :lexical-bindings :reader lexical-bindings)
  (special-bindings
   :initform nil :initarg :special-bindings :accessor special-bindings)
  (function-bindings
   :initform nil :initarg :function-bindings :accessor function-bindings)
  (declarations :initform nil :initarg :declarations :accessor declarations)
  (block-tags :initform nil :initarg :block-tags :reader block-tags)
  (tagbody-tags :initform nil :initarg :tagbody-tags :accessor tagbody-tags)))

(clos:defclass tag ()
 ((name :initarg :name :reader name)
  (continuation :initarg :continuation :reader continuation)))

(clos:defclass transparent () ((value :initarg :value :reader value)))

(clos:defclass emulate ()
 ((value :initarg :value :reader value)
  (name :initarg :name :reader name)))

(clos:defclass closure ()
 ((arguments :initarg :arguments :accessor arguments)
  (declarations :initarg :declarations :reader declarations)
  (body :initarg :body :reader body)
  (environment :initarg :environment :accessor environment)))

(clos:defclass code ()
 ((cse? :initform t :initarg :cse? :reader cse?)
  (pass2-cache :initform nil :accessor pass2-cache)
  (tag :accessor tag)
  (type :initarg :type :reader type)
  (subcodes :initform nil :accessor subcodes)
  (common-count :accessor common-count)
  (bound? :accessor bound?)
  (temp :accessor temp)))

(clos:defclass full (code)
 ((expression :initarg :expression :reader expression)))

(clos:defclass conditional (code)
 ((antecedent :initarg :antecedent :reader antecedent)
  (consequent :initarg :consequent :reader consequent)
  (alternate :initarg :alternate :reader alternate)))

(clos:defclass call (code)
 ((name :initarg :name :reader name)
  (arguments :initarg :arguments :reader arguments)
  (emulate :initarg :emulate :initform nil :reader emulate)
  (single-valued? :initarg :single-valued? :reader single-valued?)))

(clos:defclass class ()
 ((superclasses :initarg :superclasses :reader superclasses)
  (slot-names :initarg :slot-names :reader slot-names)
  (initargs :initarg :initargs :reader initargs)
  (initforms :initarg :initforms :reader initforms)
  (types :initarg :types :reader types)))

(clos:defclass method ()
 ((types :initarg :types :reader types)
  (arguments :accessor arguments)
  (declarations :accessor declarations)
  (body :accessor body)))

(clos:defclass instance ()
 ((class-name :initarg :class-name :reader class-name)
  (slots :initarg :slots :reader slots)))

(clos:defclass unbound () ())

(deftype true () '(member t))

(cl:defparameter *unbound* (make-instance 'unbound))

(cl:defvar *trace?* nil "T to enable tracing")

(cl:defvar *uncodify* :c ":LISP or :C")

(cl:defvar *glet?* t
  "NIL to unsoundly use LABELS instead of GLET* for debugging")

(defvar-compile-time *environment* (make-instance 'environment)
  "The partial environment")

(cl:defvar *codes* nil "The codes")

(cl:defvar *fulls* nil "The fulls")

(cl:defvar *conditionals* nil "The conditionals")

(cl:defvar *calls* nil "The calls")

(cl:defvar *classes* nil "The classes")

(cl:defvar *methods* nil "The methods")

(defvar-compile-time *function-types* nil "The result types")

(defvar-compile-time *variable-types* nil "The variable types")

(defvar-compile-time *c-uncodifiers* nil "The C uncodifiers")

(cl:defun safe-subcodes (thing)
 (typecase thing
   (code (subcodes thing))
   (cons (union (safe-subcodes (car thing))
		(safe-subcodes (cdr thing))
		:test #'eq))
   (instance (remove-duplicates
	      (reduce #'append (map 'list #'safe-subcodes (slots thing)))
	      :test #'eq))
   (otherwise nil)))

(clos:defmethod initialize-instance :after
 ((code full) &key &allow-other-keys)
 (setf (subcodes code) nil))

(clos:defmethod initialize-instance :after
 ((code conditional) &key &allow-other-keys)
 (setf (subcodes code)
       (adjoin (antecedent code)
	       (adjoin (consequent code)
		       (adjoin (alternate code)
			       (union (safe-subcodes (antecedent code))
				      (union (safe-subcodes (consequent code))
					     (safe-subcodes (alternate code))
					     :test #'eq)
				      :test #'eq)
			       :test #'eq)
		       :test #'eq)
	       :test #'eq)))

(clos:defmethod initialize-instance :after
 ((code call) &key &allow-other-keys)
 (setf (subcodes code)
       (remove-duplicates
	(append
	 (arguments code)
	 (reduce #'append (mapcar #'safe-subcodes (arguments code))))
	:test #'eq)))

(cl:defun unwedge-partial ()
 (setf *environment* (make-instance 'environment))
 (setf *codes* nil)
 (setf *fulls* nil)
 (setf *conditionals* nil)
 (setf *calls* nil)
 (setf *classes* nil)
 (setf *methods* nil)
 (setf *function-types* nil)
 (setf *variable-types* nil)
 (setf *c-uncodifiers* nil))

;;; The type system

(cl:defun check-type-specifier (type)
 (cond
   ;; needs work: to check that it is a valid symbol
   ((symbolp type))
   ;; needs work: to handle other list specifiers
   ((consp type)
    (if (null (list-length type))
	(error "Improper type specifier: ~S" type))
    (case (first type)
      (and (iterate (for a-type in type) (check-type-specifier a-type)))
      (or (iterate (for a-type in type) (check-type-specifier a-type)))
      (not (if (/= (length type) 2)
	       (error "NOT type specifier must take a single argument: ~S"
		      type))
	   (check-type-specifier (second type)))
      (member)
      (eql (if (/= (length type) 2)
	       (error "EQL type specifier must take a single argument: ~S"
		      type)))
      (satisfies
       (if (/= (length type) 2)
	   (error "SATISFIES type specifier must take a single argument: ~S"
		  type)))))
   (t (error "Invalid type specifier: ~S" type))))

(cl:defun my-subtypep (type1 type2)
 (multiple-value-bind (yes? sure?) (subtypep type1 type2)
  (unless sure? (error "Unsure about SUBTYPEP on ~S and ~S" type1 type2))
  yes?))

(cl:defun class-name? (type) (member type *classes* :test #'eq :key #'first))

(cl:defun subclass? (class-name1 class-name2)
 (or (eq class-name1 class-name2)
     (some #'(lambda (superclass) (subclass? superclass class-name2))
	   (superclasses (get-class class-name1)))))

(cl:defun subtype? (type1 type2)
 (or (eq type1 nil)
     (eq type2 t)
     (cond ((consp type1)
	    (ecase (first type1)
	      (or (every #'(lambda (type) (subtype? type type2))
			 (rest type1)))
	      (values (and (consp type2)
			   (eq (first type2) 'values)
			   (= (length type1) (length type2))
			   (every #'subtype? (rest type1) (rest type2))))))
	   ((consp type2)
	    (ecase (first type2)
	      (or (some #'(lambda (type) (subtype? type1 type))
			(rest type2)))
	      (values nil)))
	   ;; note: This assumes that classes are never subtypes of non-classes
	   ;;       and non-classes are never subtypes of classes.
	   ((class-name? type1)
	    (and (class-name? type2) (subclass? type1 type2)))
	   (t (and (not (class-name? type2)) (my-subtypep type1 type2))))))

(cl:defun disjoint-types? (type1 type2)
 ;; needs work: This is very weak. If it returns T the types are trully
 ;;             disjoint but if it returns NIL the types may still be disjoint.
 ;;             It is just used to help eliminate some calls to EQ and EQL.
 (or (and (subtype? type1 'number) (subtype? type2 'symbol))
     (and (subtype? type1 'symbol) (subtype? type2 'number))
     ;; note: This assumes that classes are never subtypes of non-classes and
     ;;       non-classes are never subtypes of classes.
     ;; needs work: The following are unsound if say, TYPE2 is a symbol
     ;;             denoting a DEFTYPE which is not disjoint with TYPE1.
     (and (class-name? type1) (symbolp type2) (not (class-name? type2)))
     (and (class-name? type2) (symbolp type1) (not (class-name? type1)))
     (and (class-name? type1)
	  (class-name? type2)
	  (not (subclass? type1 type2))
	  (not (subclass? type2 type1)))))

(cl:defun convert-type-to-dnf (type &optional invert?)
 (if (symbolp type)
     (if invert? `(not ,type) type)
     (case (first type)
       (and (if invert?
		(reduce #'or-type
			(mapcar #'(lambda (type)
				   (convert-type-to-dnf type (not invert?)))
				(rest type))
			:initial-value nil)
		(reduce #'and-type
			(mapcar #'(lambda (type)
				   (convert-type-to-dnf type invert?))
				(rest type))
			:initial-value t)))
       (or (if invert?
	       (reduce #'and-type
		       (mapcar #'(lambda (type)
				  (convert-type-to-dnf type (not invert?)))
			       (rest type))
		       :initial-value t)
	       (reduce #'or-type
		       (mapcar #'(lambda (type)
				  (convert-type-to-dnf type invert?))
			       (rest type))
		       :initial-value nil)))
       (not (convert-type-to-dnf (second type) (not invert?)))
       (otherwise (if invert? `(not ,type) type)))))

(cl:defun and-type (type1 type2)
 (reduce
  #'or-type
  (iterate
   outer
   (for a-type1 in (if (and (consp type1) (eq (first type1) 'or))
		       (rest type1)
		       (list type1)))
   (iterate
    (for a-type2 in (if (and (consp type2) (eq (first type2) 'or))
			(rest type2)
			(list type2)))
    (in outer
	(collect
	 (let* ((types1 (if (and (consp a-type1) (eq (first a-type1) 'and))
			    (rest a-type1)
			    (list a-type1)))
		(types2 (if (and (consp a-type2) (eq (first a-type2) 'and))
			    (rest a-type2)
			    (list a-type2)))
		(conjuncts
		 (append
		  (remove-if #'(lambda (type1)
				(some #'(lambda (type2)
					 (and (subtype? type2 type1)
					      (not (subtype? type1 type2))))
				      types2))
			     types1)
		  (remove-if #'(lambda (type2)
				(some #'(lambda (type1) (subtype? type1 type2))
				      types1))
			     types2))))
	  (cond ((some #'(lambda (conjunct1)
			  (some #'(lambda (conjunct2)
				   (disjoint-types? conjunct1 conjunct2))
				conjuncts))
		       conjuncts)
		 nil)
		((null conjuncts) t)
		((null (rest conjuncts)) (first conjuncts))
		(t `(and ,@conjuncts))))))))
  :initial-value nil))

(cl:defun or-type (type1 type2)
 ;; note: a kludge since SUBTYPE? is incomplete
 (cond ((null type1) type2)
       ((null type2) type1)
       ((eq type1 t) t)
       ((eq type2 t) t)
       (t (let* ((types1 (if (and (consp type1) (eq (first type1) 'or))
			     (rest type1)
			     (list type1)))
		 (types2 (if (and (consp type2) (eq (first type2) 'or))
			     (rest type2)
			     (list type2)))
		 (disjuncts
		  (append
		   (remove-if #'(lambda (type1)
				 (some #'(lambda (type2)
					  (and (subtype? type1 type2)
					       (not (subtype? type2 type1))))
				       types2))
			      types1)
		   (remove-if #'(lambda (type2)
				 (some #'(lambda (type1)
					  (subtype? type2 type1))
				       types1))
			      types2))))
	   (cond ((null disjuncts) nil)
		 ((null (rest disjuncts)) (first disjuncts))
		 (t `(or ,@disjuncts)))))))

(cl:defun special? (variable declarations)
 (member-if #'(lambda (declaration)
	       (and (consp declaration)
		    (eq (first declaration) 'special)
		    (member variable (rest declaration) :test #'eq)))
	    declarations))

(cl:defun constant? (variable declarations)
 (member-if #'(lambda (declaration)
	       (and (consp declaration)
		    (eq (first declaration) 'constant)
		    (member variable (rest declaration) :test #'eq)))
	    declarations))

(cl:defun code? (code)
 ;; needs work: To write as a method.
 (typecase code
   (unbound (error "This shouldn't happen"))
   (cons (or (code? (car code)) (code? (cdr code))))
   (symbol nil)
   (transparent nil)
   (emulate nil)
   (closure (error "Can't (yet) UNCODIFY a closure"))
   (instance t)
   (code t)
   (otherwise nil)))

(cl:defun mark-subcodes (code)
 (unless (= (common-count code) 2)
  (incf (common-count code))
  (when (and (= (common-count code) 1) (not (bound? code)))
   (etypecase code
     (full)
     (conditional (mark-subcodes (antecedent code))
		  (mark-subcodes (consequent code))
		  (mark-subcodes (alternate code)))
     (call (iterate (for argument in (arguments code))
		    (mark-subcodes argument)))))))

(cl:defun mark-unshielded-subcodes (code)
 (unless (= (common-count code) 2)
  (incf (common-count code))
  (when (and (= (common-count code) 1) (not (bound? code)))
   (etypecase code
     (full)
     (conditional (mark-unshielded-subcodes (antecedent code)))
     (call (iterate (for argument in (arguments code))
		    (mark-unshielded-subcodes argument)))))))

(cl:defun mark-shielded-subcodes (code)
 (unless (or (= (common-count code) 2) (bound? code))
  (etypecase code
    (full)
    (conditional (mark-shielded-subcodes (antecedent code))
		 (mark-subcodes (consequent code))
		 (mark-subcodes (alternate code)))
    (call (iterate (for argument in (arguments code))
		   (mark-shielded-subcodes argument))))))

(cl:defun common-subcodes (code bindings)
 (setf (common-count code) 0)
 (setf (bound? code) nil)
 (iterate (for a-code in (subcodes code))
	  (setf (common-count a-code) 0)
	  (setf (bound? a-code) nil))
 (iterate (for binding in bindings) (setf (bound? binding) t))
 (mark-subcodes code)
 (remove-if-not
  #'cse? (remove 2 (subcodes code) :test #'/= :key #'common-count)))

(cl:defun common-unshielded-subcodes (code bindings)
 (setf (common-count code) 0)
 (setf (bound? code) nil)
 (iterate (for a-code in (subcodes code))
	  (setf (common-count a-code) 0)
	  (setf (bound? a-code) nil))
 (iterate (for binding in bindings) (setf (bound? binding) t))
 (mark-unshielded-subcodes code)
 (remove-if-not
  #'cse? (remove 2 (subcodes code) :test #'/= :key #'common-count)))

(cl:defun shielded-subcodes (code bindings)
 (setf (common-count code) 0)
 (setf (bound? code) nil)
 (iterate (for a-code in (subcodes code))
	  (setf (common-count a-code) 0)
	  (setf (bound? a-code) nil))
 (iterate (for binding in bindings) (setf (bound? binding) t))
 (mark-shielded-subcodes code)
 (remove 0 (subcodes code) :test #'= :key #'common-count))

(cl:defun unshielded-subcodes (code bindings)
 (setf (common-count code) 0)
 (setf (bound? code) nil)
 (iterate (for a-code in (subcodes code))
	  (setf (common-count a-code) 0)
	  (setf (bound? a-code) nil))
 (iterate (for binding in bindings) (setf (bound? binding) t))
 (mark-unshielded-subcodes code)
 (remove 0 (subcodes code) :test #'= :key #'common-count))

(cl:defun common-a-subcodes (code bindings)
 ;; needs work: To handle this last case:
 ;; (and (eq (occurs-twice? cse code) t)
 ;;      (occurs-universally-shielded? cse code))
 (intersection
  (union (common-unshielded-subcodes code bindings)
	 (intersection (shielded-subcodes code bindings)
		       (unshielded-subcodes code bindings)
		       :test #'eq))
  (common-subcodes code bindings)
  :test #'eq))

(cl:defun topological-sort (codes)
 (iterate (for code in codes)
	  (setf (temp code) (intersection codes (subcodes code) :test #'eq)))
 (iterate (with sorted-codes = nil)
	  (while (not (null codes)))
	  (for code = (find nil codes :test #'eq :key #'temp))
	  (push code sorted-codes)
	  (setf codes (delete code codes :test #'eq :count 1))
	  (iterate (for a-code in codes)
		   (setf (temp a-code)
			 (delete code (temp a-code) :test #'eq :count 1)))
	  (finally (return (reverse sorted-codes)))))

(cl:defun glet*-internal (bindings body)
 (if (null bindings)
     `(progn ,@body)
     (let ((binding (first bindings))
	   (tail (glet*-internal (rest bindings) body)))
      (if (= (length binding) 2)
	  `(let (,binding) ,tail)
	  `(flet (,binding) ,tail)))))

(defmacro glet* (bindings &body body) (glet*-internal bindings body))

(cl:defun uncodify-internal (code a-bindings b-bindings)
 (etypecase code
   (full (if (or (eq (type code) t) (not (cse? code)))
	     (expression code)
	     `(the ,(type code) ,(expression code))))
   (conditional
    `(if
      ,(uncodify (antecedent code) a-bindings b-bindings)
      ,(uncodify (consequent code) a-bindings b-bindings)
      ,(uncodify (alternate code) a-bindings b-bindings)))
   (call `(,(name code)
	   ,@(mapcar #'(lambda (argument)
			(uncodify argument a-bindings b-bindings))
	      (arguments code))))))

(cl:defun uncodify (code &optional a-bindings b-bindings)
 (cond
   ((member code a-bindings :test #'eq) (tag code))
   ((member code b-bindings :test #'eq) `(,(tag code)))
   (t (let* ((new-a-bindings
	      (set-difference
	       (common-a-subcodes code (append a-bindings b-bindings))
	       a-bindings
	       :test #'eq))
	     (new-b-bindings
	      (set-difference
	       (common-subcodes	code (append a-bindings b-bindings))
	       (append a-bindings new-a-bindings b-bindings)
	       :test #'eq)))
       (if (and (null new-a-bindings) (null new-b-bindings))
	   (uncodify-internal code a-bindings b-bindings)
	   (let ((a-bindings a-bindings)
		 (b-bindings b-bindings))
	    `(,(if *glet?* 'glet* 'labels)
	      ,(mapcar #'(lambda (new-binding)
			  (if (member new-binding new-a-bindings
				      :test #'eq)
			      (prog1 `(,(tag new-binding)
				       ,(uncodify
					 new-binding
					 a-bindings
					 b-bindings))
			       (push new-binding a-bindings))
			      (prog1 `(,(tag new-binding)
				       nil
				       ,(uncodify
					 new-binding
					 a-bindings
					 b-bindings))
			       (push new-binding b-bindings))))
		(topological-sort
		 (append new-a-bindings new-b-bindings)))
	      ,(uncodify-internal code a-bindings b-bindings))))))))

(cl:defun c-uncodify-unary-float (expressions code lisp-function c-template)
 (unless (= (length expressions) 1)
  (error "~S needs exactly one argument" lisp-function))
 (unless (is-type? (first (arguments code)) 'float)
  (error "Can't (yet) C-UNCODIFY a non-FLOAT ~S" lisp-function))
 (format nil c-template (first expressions)))

(cl:defun c-uncodify-float-comparison
    (expressions code lisp-function c-template)
 (unless (every #'(lambda (argument) (is-type? argument 'float))
		(arguments code))
  (error "Can't (yet) C-UNCODIFY a non-FLOAT ~S" lisp-function))
 (cond ((null expressions)
	(error "~S needs one or more arguments" lisp-function))
       ((null (rest expressions)) "T")
       ((null (rest (rest expressions)))
	(format nil c-template (first expressions) (second expressions)))
       (t (iterate
	   (with string =
		 (format nil (format nil "(~A" c-template)
			 (first expressions) (second expressions)))
	   (for (expression . other-expressions) on (rest expressions))
	   ;; note: multiple evaluation
	   (if other-expressions
	       (setf string
		     (format nil (format nil "~~A&&~A" c-template)
			     string expression (first other-expressions))))
	   (finally (return (format nil "~A)" string)))))))

(cl:defun c-coerce (expression source-type destination-type)
 ;; needs work: to make extensible
 (cond ((and (subtype? source-type destination-type)
	     (subtype? destination-type source-type))
	expression)
       ((and (subtype? source-type nil) (subtype? destination-type 'float))
	expression)
       ((and (subtype? source-type nil) (subtype? destination-type 'fixnum))
	expression)
       ((and (subtype? source-type nil) (subtype? destination-type 'float))
	expression)
       ((and (subtype? source-type 'symbol)
	     (subtype? destination-type '(or symbol fixnum)))
	(if (subtype? destination-type 'symbol)
	    expression
	    (format nil "coerce_symbol_to_int_or_symbol(~A)" expression)))
       ((and (subtype? source-type 'fixnum)
	     (subtype? destination-type '(or symbol fixnum)))
	(format nil "coerce_int_to_int_or_symbol(~A)" expression))
       ((and (subtype? source-type 'symbol)
	     (subtype? destination-type '(or symbol float)))
	(if (subtype? destination-type 'symbol)
	    expression
	    (format nil "coerce_symbol_to_double_or_symbol(~A)" expression)))
       ((and (subtype? source-type 'float)
	     (subtype? destination-type '(or symbol float)))
	(format nil "coerce_double_to_double_or_symbol(~A)" expression))
       (t (error "Can't (yet) coerce ~S to ~S" source-type destination-type))))

(defmacro define-c-uncodifier (name arguments &body body)
 (unless (and (symbolp name) (not (null name)))
  (error "NAME must be a non-NULL SYMBOL: ~S" name))
 (unless (null arguments) (error "ARGUMENTS must be NULL: ~S" arguments))
 `(eval-when (compile load eval)
   (let ((c-uncodifier (find ',name *c-uncodifiers* :test #'eq :key #'first)))
    (if c-uncodifier
	(setf (second c-uncodifier)
	      #'(lambda (code expressions)
		 code			;ignore
		 expressions		;ignore
		 ,@body))
	(push (list ',name
		    #'(lambda (code expressions)
		       code		;ignore
		       expressions	;ignore
		       ,@body))
	      *c-uncodifiers*)))))

(cl:defun c-uncodify-internal (name code a-bindings b-bindings)
 (etypecase code
   (full
    (cond ((eq (expression code) t) (values nil nil nil "T"))
	  ((eq (expression code) nil) (values nil nil nil "NIL"))
	  ((stringp (expression code))
	   (values nil nil nil (format nil "\"~A\"" (expression code))))
	  ((fixnump (expression code))
	   (values nil nil nil (format nil "(~D)" (expression code))))
	  ;; note: this assumes that the printer uses "e" to signify exponents
	  ((floatp (expression code))
	   (values nil nil nil (format nil "(~D)" (expression code))))
	  (t (values nil nil nil (format nil "~A_v~D" name (tag code))))))
   (conditional
    (multiple-value-bind (antecedent-variables
			  antecedent-functions
			  antecedent-memos
			  antecedent)
	(c-uncodify1 name (antecedent code) a-bindings b-bindings)
     (multiple-value-bind (consequent-variables
			   consequent-functions
			   consequent-memos
			   consequent)
	 (c-uncodify1 name (consequent code) a-bindings b-bindings)
      (multiple-value-bind (alternate-variables
			    alternate-functions
			    alternate-memos
			    alternate)
	  (c-uncodify1 name (alternate code) a-bindings b-bindings)
       (values
	(append antecedent-variables consequent-variables alternate-variables)
	(append antecedent-functions consequent-functions alternate-functions)
	(append antecedent-memos consequent-memos alternate-memos)
	(format
	 nil "(~A?~A:~A)"
	 antecedent
	 (c-coerce consequent (code-type (consequent code)) (code-type code))
	 (c-coerce
	  alternate (code-type (alternate code)) (code-type code))))))))
   (call
    (iterate
     (for argument in (arguments code))
     (multiple-value-bind (new-variables new-functions new-memos expression)
	 (c-uncodify1 name argument a-bindings b-bindings)
      (appending new-variables into variables)
      (appending new-functions into functions)
      (appending new-memos into memos)
      (collect expression into expressions))
     (finally
      (return
       (values
	variables
	functions
	memos
	(let ((c-uncodifier
	       (find (name code) *c-uncodifiers* :test #'eq :key #'first)))
	 (unless c-uncodifier (error "Can't (yet) C-UNCODIFY ~S" (name code)))
	 (funcall (second c-uncodifier) code expressions)))))))))

(cl:defun c-uncodify-type (type)
 ;; needs work: to make extensible
 (cond ((subtype? type 'float) "double")
       ((subtype? type 'fixnum) "int")
       ((subtype? type 'symbol) "int")
       ((subtype? type 'string) "char*")
       ((subtype? type '(or float symbol)) "double_or_symbol")
       ((subtype? type '(or fixnum symbol)) "int_or_symbol")
       (t (error "Can't (yet) C-UNCODIFY the type ~S" type))))

(cl:defun complicated-return-type? (type)
 ;; needs work: to make extensible
 (cond ((subtype? type 'float) nil)
       ((subtype? type 'fixnum) nil)
       ((subtype? type 'symbol) nil)
       ((subtype? type 'string) nil)
       ((subtype? type '(or float symbol)) t)
       ((subtype? type '(or fixnum symbol)) t)
       (t (error "Can't (yet) C-UNCODIFY the type ~S" type))))

(cl:defun c-uncodify1 (name code &optional a-bindings b-bindings)
 (cond
   ((member code a-bindings :test #'eq)
    (values nil nil nil (format nil "~A_v~D" name (tag code))))
   ((member code b-bindings :test #'eq)
    (values nil nil nil (format nil "~A_f~D()" name (tag code))))
   (t (let* ((new-a-bindings
	      (set-difference
	       (common-a-subcodes code (append a-bindings b-bindings))
	       a-bindings
	       :test #'eq))
	     (new-b-bindings
	      (set-difference
	       (common-subcodes	code (append a-bindings b-bindings))
	       (append a-bindings new-a-bindings b-bindings)
	       :test #'eq)))
       (if (and (null new-a-bindings) (null new-b-bindings))
	   (c-uncodify-internal name code a-bindings b-bindings)
	   (iterate
	    (with a-bindings = a-bindings)
	    (with b-bindings = b-bindings)
	    (with expression = nil)
	    (for new-binding in
		 (topological-sort (append new-a-bindings new-b-bindings)))
	    (cond ((member new-binding new-a-bindings :test #'eq)
		   (collect (format nil "~A ~A_v~D;"
				    (c-uncodify-type (code-type new-binding))
				    name
				    (tag new-binding))
			    into variables)
		   (multiple-value-bind
			 (new-variables new-functions new-memos new-expression)
		       (c-uncodify1 name new-binding a-bindings b-bindings)
		    (appending new-variables into variables)
		    (appending new-functions into functions)
		    (appending new-memos into memos)
		    (setf expression
			  (if expression
			      (format nil "~A,(~A_v~D=~A)"
				      expression
				      name
				      (tag new-binding)
				      new-expression)
			      (format nil "(~A_v~D=~A)"
				      name
				      (tag new-binding)
				      new-expression))))
		   (push new-binding a-bindings))
		  (t (multiple-value-bind (new-variables
					   new-functions
					   new-memos
					   new-expression)
			 (c-uncodify1 name new-binding a-bindings b-bindings)
		      (appending new-variables into variables)
		      (appending new-functions into functions)
		      (appending new-memos into memos)
		      (collect
		       (format nil "int ~A_p~D;" name (tag new-binding))
		       into variables)
		      (collect
		       (format nil "~A ~A_m~D;"
			       (c-uncodify-type (code-type new-binding))
			       name
			       (tag new-binding))
		       into variables)
		      (collect
		       (format nil "~A_p~D" name (tag new-binding)) into memos)
		      ;; needs work: I don't think that this will work when the
		      ;;             return type of the function is compound.
		      (collect
		       (format nil
			       "static ~A ~A_f~D(){if (~A_p~D) return ~A_m~D; else {~A_p~D=T;return ~A_m~D=~A;}}"
			       (c-uncodify-type (code-type new-binding))
			       name
			       (tag new-binding)
			       name
			       (tag new-binding)
			       name
			       (tag new-binding)
			       name
			       (tag new-binding)
			       name
			       (tag new-binding)
			       new-expression)
		       into functions))
		     (push new-binding b-bindings)))
	    (finally
	     (return
	      (multiple-value-bind
		    (new-variables new-functions new-memos new-expression)
		  (c-uncodify-internal name code a-bindings b-bindings)
	       (values (append variables new-variables)
		       (append functions new-functions)
		       (append memos new-memos)
		       (if expression
			   (format nil "(~A,~A)" expression new-expression)
			   new-expression)))))))))))

(cl:defun c-argument-subcodes (code)
 (sort (remove-if-not
	#'(lambda (code)
	   (and (typep code 'full)
		(let ((expression (expression code)))
		 (and (not (eq expression t))
		      (not (eq expression nil))
		      (not (and (symbolp expression)
				(eq (symbol-package expression)
				    (symbol-package :x))))
		      (not (and (consp expression)
				(= (length expression) 2)
				(eq (first expression) 'quote)
				(symbolp (second expression))))
		      (not (stringp expression))
		      (not (fixnump expression))
		      (not (floatp expression))))))
	(subcodes code))
       #'>
       :key #'tag))

(cl:defun c-uncodify-generate
    (name code codes variables functions memos expression)
 (with-open-file (c (merge-pathnames name "~/uncodify/foo.c")
		    :direction :output)
  (format c "#include <math.h>~%")
  (format c "typedef struct {double d; int s;} double_or_symbol;~%")
  (format c "typedef struct {int i; int s;} int_or_symbol;~%")
  (format c "#define NONSYMBOL -1~%")
  (format c "#define NIL 0~%")
  (format c "#define T 1~%")
  (format c "extern double_or_symbol coerce_double_to_double_or_symbol();~%")
  (format c "extern double_or_symbol coerce_symbol_to_double_or_symbol();~%")
  (format c "extern int_or_symbol coerce_int_to_int_or_symbol();~%")
  (format c "extern int_or_symbol coerce_symbol_to_int_or_symbol();~%")
  (format c "extern double normalize_rotation();~%")
  (format c "extern double_or_symbol double_or_symbol_result;~%")
  (format c "extern int_or_symbol int_or_symbol_result;~%")
  (iterate (for code in codes)
	   (format c "~A ~A_v~D;~%"
		   (c-uncodify-type (code-type code)) name (tag code)))
  (iterate (for variable in variables) (format c "~A~%" variable))
  (iterate (for function in functions) (format c "~A~%" function))
  (format c "~A ~A(~A)~%"
	  (if (complicated-return-type? (code-type code))
	      "void"
	      (c-uncodify-type (code-type code)))
	  name
	  (cond ((null codes) "")
		((null (rest codes))
		 (format nil "~A_a~D" name (tag (first codes))))
		(t (iterate
		    (with arguments = (format nil "~A_a~D"
					      name (tag (first codes))))
		    (for code in (rest codes))
		    (setf arguments (format nil "~A,~A_a~D"
					    arguments name (tag code)))
		    (finally (return arguments))))))
  (iterate (for code in codes)
	   (format c "~A ~A_a~D;~%"
		   (c-uncodify-type (code-type code)) name (tag code)))
  (format c "{ ")
  (iterate (for code in codes)
	   (format c "~A_v~D=~A_a~D;~%  " name (tag code) name (tag code)))
  (iterate (for memo in memos) (format c "~A=NIL;~%  " memo))
  (if (complicated-return-type? (code-type code))
      (format c "~A_result=~A; return;}~%"
	      (c-uncodify-type (code-type code))
	      expression)
      (format c "return ~A;}~%" expression))))

(cl:defun c-uncodify (name code codes)
 (multiple-value-bind (variables functions memos expression)
     (c-uncodify1 name code codes)
  (c-uncodify-generate name code codes variables functions memos expression)
  (multiple-value-bind (standard-i/o error-output exit-status process-id)
      (run-program
       "gcc"
       :arguments
       (list "-O2"
	     "-o" (namestring (merge-pathnames name "~/uncodify/foo.o"))
	     "-c" (namestring (merge-pathnames name "~/uncodify/foo.c"))))
   (declare (ignore standard-i/o error-output exit-status process-id))
   (unless (zerop exit-status) (error "C compiler error")))
  (load-foreign-files
   (list (namestring (merge-pathnames name "~/uncodify/foo.o"))))
  (load
   (translate-c-file (namestring (merge-pathnames name "~/uncodify/foo.c"))
		     :defines-too nil :compile t :thing (list name) :loud nil)
   :verbose nil)))

(cl:defun transparencies (code)
 ;; needs work: To handle transparents and emulates.
 (remove-duplicates
  (mapcar #'name
	  (remove-if-not #'(lambda (code) (typep code 'call)) (subcodes code)))
  :test #'eq))

(cl:defun typep-assignment? (assignment code)
 (and (eq (first assignment) 'true)
      (typep (second assignment) 'call)
      (eq (name (second assignment)) 'typep)
      (= (length (arguments (second assignment))) 2)
      (or (eq (first (arguments (second assignment))) code)
	  (and (typep code 'call)
	       (eq (name code) 'values)
	       (= (length (arguments code)) 1)
	       (eq (first (arguments (second assignment)))
		   (first (arguments code)))))
      (not (typep (second (arguments (second assignment))) 'code))))

(cl:defun code-type (thing)
 ;; needs work: To write as a method.
 (typecase thing
   (code (type thing))
   (instance (class-name thing))
   (closure t)
   (emulate t)
   (transparent t)
   ((member t) 'true)
   (otherwise (type-of thing))))

(cl:defun possibly-multiple-value? (thing)
 ;; needs work: To write as a method and percolate.
 ;; needs work: To differentiate FULLs after PASS2.
 (typecase thing
   (full t)
   (conditional (or (possibly-multiple-value? (consequent thing))
		    (possibly-multiple-value? (alternate thing))))
   (call (not (single-valued? thing)))
   (otherwise nil)))

(cl:defun single-value (thing)
 ;; needs work: To write as a method.
 (if (possibly-multiple-value? thing)
     (etypecase thing
       (full (make-call 'values (list thing) (code-type thing)))
       (conditional (make-conditional
		     (antecedent thing)
		     (single-value (consequent thing))
		     (single-value (alternate thing))))
       (call (if (eq (name thing) 'values)
		 (if (null (arguments thing))
		     nil
		     (single-value (first (arguments thing))))
		 (let ((type (code-type thing)))
		  ;; needs work: What if had compounds (i.e. AND/OR) of
		  ;;             VALUES types?
		  (if (and (consp type) (eq (first type) 'values))
		      (if (= (length type) 1)
			  nil
			  (make-call 'values (list thing) (second type)))
		      (make-call 'values (list thing) type))))))
     thing))

(cl:defun needs-peal-values? (thing)
 ;; needs work: To write as a method and percolate.
 (typecase thing
   (full nil)
   (conditional (or (needs-peal-values? (consequent thing))
		    (needs-peal-values? (alternate thing))))
   (call (eq (name thing) 'values))
   (otherwise nil)))

(cl:defun peal-values (thing)
 ;; needs work: To write as a method.
 (if (needs-peal-values? thing)
     (etypecase thing
       (conditional (make-conditional
		     (antecedent thing)
		     (peal-values (consequent thing))
		     (peal-values (alternate thing))))
       (call (unless (eq (name thing) 'values) (error "This shouldn't happen"))
	     (peal-values (first (arguments thing)))))
     thing))

(cl:defun boolean-value (form thing model)
 ;; needs work: To write as a method.
 (typecase thing
   (full (cond ((subtype? (type-in-model thing model) 'null) nil)
	       ((not (subtype? 'null (type-in-model thing model))) t)
	       ((subtype? (type-in-model thing model) 'boolean) thing)
	       (t (error "Can't (yet) coerce ~S to a Boolean value" form))))
   (conditional (make-conditional
		 (antecedent thing)
		 (boolean-value form (consequent thing) model)
		 (boolean-value form (alternate thing) model)))
   (call (cond ((subtype? (type-in-model thing model) 'null) nil)
	       ((not (subtype? 'null (type-in-model thing model))) t)
	       ((subtype? (type-in-model thing model) 'boolean) thing)
	       (t (error "Can't (yet) coerce ~S to a Boolean value" form))))
   (null thing)
   (otherwise t)))

(cl:defun restrict-type (form thing type model)
 ;; needs work: To write as a method.
 (typecase thing
   (full (cond ((subtype? (type-in-model thing model) type) thing)
	       ((disjoint-types? type (type-in-model thing model))
		(make-call
		 'error (list (format nil "Argument ~S not of type ~S"
				      form type))))
	       (t (error "Can't (yet) restrict ~S to a value of type ~S"
			 form type))))
   (conditional (make-conditional
		 (antecedent thing)
		 (restrict-type form (consequent thing) type model)
		 (restrict-type form (alternate thing) type model)))
   (call (cond ((subtype? (type-in-model thing model) type) thing)
	       ((disjoint-types? type (type-in-model thing model))
		(make-call
		 'error (list (format nil "Argument ~S not of type ~S"
				      form type))))
	       (t (error "Can't (yet) restrict ~S to a value of type ~S"
			 form type))))
   (otherwise
    (cond ((subtype? (type-in-model thing model) type) thing)
	  ((disjoint-types? type (type-in-model thing model))
	   (make-call 'error
		      (list (format nil "Argument ~S not of type ~S"
				    form type))))
	  (t (error "Can't (yet) restrict ~S to a value of type ~S"
		    form type))))))

(cl:defun type-in-model (code model)
 (cond ((null model) (code-type code))
       ((typep-assignment? (first model) code)
	(and-type (second (arguments (second (first model))))
		  (type-in-model code (rest model))))
       (t (type-in-model code (rest model)))))

(cl:defun type? (object type model)
 (cond ((typep type 'code) 'unknown)
       ((typep object 'code)
	(cond ((subtype? (type-in-model object model) type) t)
	      ((disjoint-types? (type-in-model object model) type) nil)
	      (t 'unknown)))
       (t (if (typep object 'instance)
	      (subtype? (class-name object) type)
	      (typep object type)))))

(cl:defun is-type? (object type)
 (let ((result (type? object type nil)))
  (and result (not (eq result 'unknown)))))

(cl:defun true-in-model? (antecedent model)
 (or (not (subtype? 'null (type-in-model antecedent model)))
     (some #'(lambda (assignment)
	      (and (eq (first assignment) 'true)
		   (eq antecedent (second assignment))))
	   model)))

(cl:defun false-in-model? (antecedent model)
 (or (subtype? (type-in-model antecedent model) 'null)
     (some #'(lambda (assignment)
	      (and (eq (first assignment) 'false)
		   (eq antecedent (second assignment))))
	   model)))

(cl:defun make-full (expression type &key (cse? t))
 (let ((found (find-if #'(lambda (code)
			  (and (equal (expression code) expression)
			       (eq (cse? code) cse?)))
		       *fulls*)))
  (or found
      (let ((code (make-instance
		   'full :expression expression :type type :cse? cse?)))
       (push code *fulls*)
       (push code *codes*)
       code))))

(cl:defun make-conditional (antecedent consequent alternate)
 (if (or (needs-peal-values? antecedent)
	 (not (subtype? (code-type antecedent) 'boolean))
	 (null (code-type antecedent))
	 (true-in-model? antecedent nil)
	 (false-in-model? antecedent nil)
	 (and (typep antecedent 'conditional)
	      (not (subtype? 'null (code-type (consequent antecedent))))
	      (subtype? (code-type (alternate antecedent)) 'null))
	 (and (typep antecedent 'conditional)
	      (subtype? (code-type (consequent antecedent)) 'null)
	      (not (subtype? 'null (code-type (alternate antecedent))))))
     (error "This shouldn't happen"))
 (cond ((and (eq consequent t) (eq alternate nil)) antecedent)
       ((eq consequent alternate) consequent)
       (t (let ((found (find-if #'(lambda (code)
				   (and (eq (antecedent code) antecedent)
					(eq (consequent code) consequent)
					(eq (alternate code) alternate)))
				*conditionals*)))
	   (or found
	       (let ((code (make-instance
			    'conditional
			    :antecedent antecedent
			    :consequent consequent
			    :alternate alternate
			    :type (or-type (code-type consequent)
					   (code-type alternate)))))
		(push code *conditionals*)
		(push code *codes*)
		code))))))

(cl:defun form-conditional (antecedent consequent alternate model)
 (cond
   ((null (type-in-model antecedent model)) antecedent)
   ((true-in-model? antecedent model) (funcall consequent model))
   ((false-in-model? antecedent model) (funcall alternate model))
   ((and (typep antecedent 'conditional)
	 (not (subtype? 'null (type-in-model (consequent antecedent) model)))
	 (subtype? (type-in-model (alternate antecedent) model) 'null))
    (form-conditional (antecedent antecedent) consequent alternate model))
   ((and (typep antecedent 'conditional)
	 (subtype? (type-in-model (consequent antecedent) model) 'null)
	 (not (subtype? 'null (type-in-model (alternate antecedent) model))))
    (form-conditional (antecedent antecedent) alternate consequent model))
   (t (let ((antecedent (peal-values antecedent)))
       (make-conditional
	antecedent
	(funcall consequent (cons `(true ,antecedent) model))
	(funcall alternate (cons `(false ,antecedent) model)))))))

(cl:defun make-call (name arguments &optional type emulate)
 (let* ((arguments (mapcar #'peal-values arguments))
	(found (find-if #'(lambda (code)
			   (and (eq (name code) name)
				(equal (arguments code) arguments)))
			*calls*)))
  (or found
      (let ((code
	     (make-instance
	      'call
	      :name name
	      :arguments arguments
	      :type type
	      :emulate emulate
	      :single-valued? (or (eq type nil)
				  ;; note: This assumes that a declared
				  ;;       function type never has a return
				  ;;       type (VALUES ...)
				  (member name *function-types*
					  :test #'eq :key #'first)
				  (and (eq name 'values)
				       (= (length arguments) 1))))))
       (push code *calls*)
       (push code *codes*)
       code))))

(cl:defun pass2 (code)
 (if (typep code 'code)
     (or (pass2-cache code)
	 (let ((cache-code
		(etypecase code
		  (full code)
		  (conditional (make-conditional
				(pass2 (antecedent code))
				(pass2 (consequent code))
				(pass2 (alternate code))))
		  (call (make-call (name code)
				   (mapcar #'pass2 (arguments code))
				   (type code)
				   (emulate code))))))
	  (setf (pass2-cache code) cache-code)
	  (setf (pass2-cache cache-code) cache-code)
	  cache-code))
     (typecase code
       (unbound (error "This shouldn't happen"))
       (cons (if (code? code)
		 (make-call
		  'cons (list (pass2 (car code)) (pass2 (cdr code))) 'cons)
		 (make-full (quotify code) 'cons :cse? nil)))
       (symbol (make-full (quotify code)
			  (cond ((eq code t) 'true)
				((eq code nil) 'null)
				(t 'symbol))
			  :cse? nil))
       (transparent (make-full (quotify `#',(value code)) 'function :cse? nil))
       (emulate (make-full (quotify `#',(name code)) 'function :cse? nil))
       (closure (error "Can't (yet) UNCODIFY a closure"))
       (instance
	(iterate
	 (with  class-name = (class-name code))
	 (with class = (get-class class-name))
	 (with keys = '())
	 (with fillers = '())
	 (for slot-name in (all-slot-names class))
	 (let ((initarg (find slot-name (all-initargs class)
			      :test #'eq :key #'second))
	       (slot-value
		(aref (slots code) (slot-index class-name slot-name))))
	  (unless (eq slot-value *unbound*)
	   (unless initarg
	    (error "Can't (yet) UNCODIFY this instance of class ~S"
		   class-name))
	   (push (first initarg) keys)
	   (push slot-value fillers)))
	 (finally
	  (return
	   (make-call
	    'make-instance
	    (list*
	     (make-full (quotify class-name) 'symbol :cse? nil)
	     (reverse
	      (reduce
	       #'append
	       (mapcar #'list
		       (mapcar #'pass2 fillers)
		       (mapcar #'(lambda (key)
				  (make-full (quotify key) 'symbol :cse? nil))
			       keys)))))
	    class-name)))))
       (otherwise (make-full (quotify code) (type-of code) :cse? nil)))))

(cl:defun partial-evaluate-block
    (continuation name body types model environment level)
 (funcall
  continuation
  (partial-evaluate-progn
   #'identity
   body
   types
   model
   (make-instance
    'environment
    :macros (macros environment)
    :lexical-bindings (lexical-bindings environment)
    :special-bindings (special-bindings environment)
    :function-bindings (function-bindings environment)
    :declarations (declarations environment)
    :block-tags (cons (make-instance 'tag :name name :continuation #'identity)
		      (mapcar #'(lambda (tag)
				 (make-instance
				  'tag :name (name tag) :continuation 'block))
			      (block-tags environment)))
    :tagbody-tags (mapcar #'(lambda (tag)
			     (make-instance
			      'tag :name (name tag) :continuation 'block))
			  (tagbody-tags environment)))
   level)))

(cl:defun partial-evaluate-flet
    (continuation bindings body types model environment level)
 (partial-evaluate-progn
  continuation
  body
  types
  model
  (make-instance
   'environment
   :macros (macros environment)
   :lexical-bindings (lexical-bindings environment)
   :special-bindings (special-bindings environment)
   :function-bindings (append
		       (mapcar
			#'(lambda (binding)
			   (check-lambda-list (second binding))
			   (multiple-value-bind (body
						 declarations
						 documentation-string)
			       (peal-off-documentation-string-and-declarations
				(rest (rest binding)) t)
			    (declare (ignore documentation-string))
			    (list
			     (first binding)
			     (make-instance 'closure
					    :arguments (second binding)
					    :declarations declarations
					    :body body
					    :environment environment))))
			bindings)
		       (function-bindings environment))
   :declarations (declarations environment)
   :block-tags (block-tags environment)
   :tagbody-tags (tagbody-tags environment))
  level))

(cl:defun partial-evaluate-go (name environment)
 (let ((tag (find name (tagbody-tags environment) :key #'name)))
  (unless tag (error "No tag named ~S to GO to" name))
  (unless (functionp (continuation tag)) (throw (continuation tag) (values)))
  (funcall (continuation tag))))

(cl:defun protect-environment (environment)
 (make-instance
  'environment
  :macros (macros environment)
  :lexical-bindings (lexical-bindings environment)
  :special-bindings (special-bindings environment)
  :function-bindings (function-bindings environment)
  :declarations (declarations environment)
  :block-tags (mapcar
	       #'(lambda (tag)
		  (make-instance 'tag :name (name tag) :continuation 'if))
	       (block-tags environment))
  :tagbody-tags (mapcar
		 #'(lambda (tag)
		    (make-instance 'tag :name (name tag) :continuation 'if))
		 (tagbody-tags environment))))

(cl:defun partial-evaluate-if
    (continuation antecedent consequent alternate types model environment
		  level)
 (partial-evaluate
  #'(lambda (value)
     (let ((value (boolean-value antecedent (single-value value) model)))
      (typecase value
	(code
	 (block exit
	  (catch 'if
	   (return-from exit
	    (let ((environment (protect-environment environment)))
	     (funcall
	      continuation
	      (form-conditional
	       value
	       #'(lambda (model)
		  (partial-evaluate
		   #'identity consequent types model environment level))
	       #'(lambda (model)
		  (partial-evaluate
		   #'identity alternate types model environment level))
	       model)))))
	  (form-conditional
	   value
	   #'(lambda (model)
	      (partial-evaluate
	       continuation consequent types model environment level))
	   #'(lambda (model)
	      (partial-evaluate
	       continuation alternate types model environment level))
	   model)))
	(otherwise
	 (if value
	     (partial-evaluate
	      continuation consequent types model environment level)
	     (partial-evaluate
	      continuation alternate types model environment level))))))
  antecedent
  '()
  model
  environment
  level))

(cl:defun partial-evaluate-labels
    (continuation bindings body types model environment level)
 (partial-evaluate-progn
  continuation
  body
  types
  model
  (iterate
   (with new-environment =
	 (make-instance
	  'environment
	  :macros (macros environment)
	  :lexical-bindings (lexical-bindings environment)
	  :special-bindings (special-bindings environment)
	  :function-bindings
	  (append
	   (mapcar
	    #'(lambda (binding)
	       (check-lambda-list (second binding))
	       (multiple-value-bind (body declarations documentation-string)
		   (peal-off-documentation-string-and-declarations
		    (rest (rest binding)) t)
		(declare (ignore documentation-string))
		(list (first binding)
		      (make-instance 'closure
				     :arguments (second binding)
				     :declarations declarations
				     :body body))))
	    bindings)
	   (function-bindings environment))
	  :declarations (declarations environment)
	  :block-tags (block-tags environment)
	  :tagbody-tags (tagbody-tags environment)))
   (with function-bindings = (function-bindings new-environment))
   (for binding in bindings)
   (declare (ignore binding))
   (for function-binding = (pop function-bindings))
   (setf (environment (second function-binding)) new-environment)
   (finally (return new-environment)))
  level))

(cl:defun partial-evaluate-let
    (continuation bindings body declarations types model environment level
		  &optional lexical-bindings special-bindings)
 (if (null bindings)
     (partial-evaluate-progn
      continuation
      body
      types
      model
      (make-instance
       'environment
       :macros (macros environment)
       :lexical-bindings (append lexical-bindings
				 (lexical-bindings environment))
       :special-bindings (append special-bindings
				 (special-bindings environment))
       :function-bindings (function-bindings environment)
       :declarations declarations
       :block-tags (block-tags environment)
       :tagbody-tags (tagbody-tags environment))
      level)
     (let ((variable (if (symbolp (first bindings))
			 (first bindings)
			 (first (first bindings)))))
      (if (constant? variable declarations)
	  (error "Attempt to bind the constant ~S" variable))
      (partial-evaluate
       (if (special? variable declarations)
	   #'(lambda (value)
	      (partial-evaluate-let
	       continuation
	       (rest bindings)
	       body
	       declarations
	       types
	       model
	       environment
	       level
	       lexical-bindings
	       (cons (list variable (single-value value)) special-bindings)))
	   #'(lambda (value)
	      (partial-evaluate-let
	       continuation
	       (rest bindings)
	       body
	       declarations
	       types
	       model
	       environment
	       level
	       (cons (list variable (single-value value)) lexical-bindings)
	       special-bindings)))
       (if (and (consp (first bindings)) (= (length (first bindings)) 2))
	   (second (first bindings))
	   nil)
       '()
       model
       environment
       level))))

(cl:defun partial-evaluate-let*
    (continuation bindings body declarations types model environment level)
 (if (null bindings)
     (partial-evaluate-progn
      continuation
      body
      types
      model
      (make-instance
       'environment
       :macros (macros environment)
       :lexical-bindings (lexical-bindings environment)
       :special-bindings (special-bindings environment)
       :function-bindings (function-bindings environment)
       ;; needs work: This is technically wrong since the declarations
       ;;             applying to the current variable should be appended when
       ;;             they are bound.
       :declarations declarations
       :block-tags (block-tags environment)
       :tagbody-tags (tagbody-tags environment))
      level)
     (let ((variable (if (symbolp (first bindings))
			 (first bindings)
			 (first (first bindings)))))
      (if (constant? variable declarations)
	  (error "Attempt to bind the constant ~S" variable))
      (partial-evaluate
       (if (special? variable declarations)
	   #'(lambda (value)
	      (partial-evaluate-let*
	       continuation
	       (rest bindings)
	       body
	       declarations
	       types
	       model
	       (make-instance
		'environment
		:macros (macros environment)
		:lexical-bindings (lexical-bindings environment)
		:special-bindings (cons (list variable (single-value value))
					(special-bindings environment))
		:function-bindings (function-bindings environment)
		:declarations (declarations environment)
		:block-tags (block-tags environment)
		:tagbody-tags (tagbody-tags environment))
	       level))
	   #'(lambda (value)
	      (partial-evaluate-let*
	       continuation
	       (rest bindings)
	       body
	       declarations
	       types
	       model
	       (make-instance
		'environment
		:macros (macros environment)
		:lexical-bindings (cons (list variable (single-value value))
					(lexical-bindings environment))
		:special-bindings (special-bindings environment)
		:function-bindings (function-bindings environment)
		:declarations (declarations environment)
		:block-tags (block-tags environment)
		:tagbody-tags (tagbody-tags environment))
	       level)))
       (if (and (consp (first bindings)) (= (length (first bindings)) 2))
	   (second (first bindings))
	   nil)
       '()
       model
       environment
       level))))

(cl:defun partial-evaluate-multiple-value-call1
    (continuation function value forms types model environment level
		  arguments parameters)
 (cond
   ((and (typep value 'call) (eq (name value) 'values))
    (partial-evaluate-multiple-value-call
     continuation function (rest forms) types model environment level
     (cons (first forms) arguments) (append parameters (arguments value))))
   ((possibly-multiple-value? value)
    (unless (typep value 'conditional)
     (error "Can't (yet) partially evaluate a MULTIPLE-VALUE-CALL~%~
             when some subform requires code that may return~%~
             multiple values"))
    (block exit
     (catch 'if
      (return-from exit
       (let ((environment (protect-environment environment)))
	(funcall
	 continuation
	 (form-conditional
	  (antecedent value)
	  #'(lambda (model)
	     (partial-evaluate-multiple-value-call1
	      #'identity function (consequent value) forms types model
	      environment level arguments parameters))
	  #'(lambda (model)
	     (partial-evaluate-multiple-value-call1
	      #'identity function (alternate value) forms types model
	      environment level arguments parameters))
	  model)))))
     (form-conditional
      (antecedent value)
      #'(lambda (model)
	 (partial-evaluate-multiple-value-call1
	  continuation function (consequent value) forms types model
	  environment level arguments parameters))
      #'(lambda (model)
	 (partial-evaluate-multiple-value-call1
	  continuation function (alternate value) forms types model
	  environment level arguments parameters))
      model)))
   (t (partial-evaluate-multiple-value-call
       continuation function (rest forms) types model environment level
       (cons (first forms) arguments) (append parameters (list value))))))

(cl:defun partial-evaluate-multiple-value-call
    (continuation function forms types model environment level
		  &optional arguments parameters)
 (if (null forms)
     (partial-evaluate-call1
      continuation
      (typecase function
	(transparent (value function))
	(emulate (name function))
	(closure "unnamed function")
	(otherwise
	 (error "Can't (yet) partially evaluate a MULTIPLE-VALUE-CALL when~%~
                 the first argument requires code")))
      function arguments parameters types model environment level)
     (partial-evaluate
      #'(lambda (value)
	 (partial-evaluate-multiple-value-call1
	  continuation function value forms types model environment level
	  arguments parameters))
      (first forms)
      '()
      model
      environment
      level)))

(cl:defun partial-evaluate-multiple-value-prog1
    (continuation form forms types model environment level)
 (partial-evaluate
  #'(lambda (value)
     (partial-evaluate-progn
      #'(lambda (other-value)
	 (declare (ignore other-value))
	 (funcall continuation value))
      forms
      '()
      model
      environment
      level))
  form
  types
  model
  environment
  level))

(cl:defun partial-evaluate-progn
    (continuation body types model environment level)
 (cond
   ((null body) (funcall continuation nil))
   ((null (rest body))
    (partial-evaluate continuation (first body) types model environment level))
   (t (partial-evaluate
       #'(lambda (value)
	  (declare (ignore value))
	  (partial-evaluate-progn
	   continuation (rest body) types model environment level))
       (first body)
       '()
       model
       environment
       level))))

(cl:defun partial-evaluate-return-from
    (name form types model environment level)
 (partial-evaluate
  #'(lambda (value)
     (let ((tag (find name (block-tags environment) :test #'eq :key #'name)))
      (unless tag (error "No block named ~S to RETURN-FROM" name))
      (unless (functionp (continuation tag))
       (throw (continuation tag) (values)))
      (funcall (continuation tag) value)))
  form
  types
  model
  environment
  level))

(cl:defun partial-evaluate-setq
    (continuation pairs types model environment level)
 (if (null pairs)
     (funcall continuation nil)
     (let ((variable (first pairs)))
      (if (constant? variable (declarations environment))
	  (error "Attempt to SETQ the constant ~S" variable))
      (partial-evaluate
       (if (special? variable (declarations environment))
	   #'(lambda (value)
	      (let ((value (single-value value)))
	       (if (null (rest (rest pairs)))
		   ;; needs work: To check TYPES.
		   (funcall continuation value)
		   (partial-evaluate-setq
		    continuation
		    (rest (rest pairs))
		    types
		    model
		    (make-instance
		     'environment
		     :macros (macros environment)
		     :lexical-bindings (lexical-bindings environment)
		     ;; needs work: To check TYPES.
		     :special-bindings (cons (list variable value)
					     (special-bindings environment))
		     :function-bindings (function-bindings environment)
		     :declarations (declarations environment)
		     :block-tags (block-tags environment)
		     :tagbody-tags (tagbody-tags environment))
		    level))))
	   #'(lambda (value)
	      (let ((value (single-value value))
		    (binding (find variable (lexical-bindings environment)
				   :test #'eq :key #'first)))
	       (unless binding (error "Unbound variable: ~S" variable))
	       (if (null (rest (rest pairs)))
		   ;; needs work: To check TYPES.
		   (funcall continuation value)
		   (partial-evaluate-setq
		    continuation
		    (rest (rest pairs))
		    types
		    model
		    (make-instance
		     'environment
		     :macros (macros environment)
		     ;; needs work: To check TYPES.
		     :lexical-bindings (cons (list variable value)
					     (lexical-bindings environment))
		     :special-bindings (special-bindings environment)
		     :function-bindings (function-bindings environment)
		     :declarations (declarations environment)
		     :block-tags (block-tags environment)
		     :tagbody-tags (tagbody-tags environment))
		    level)))))
       (second pairs)
       (if (null (rest (rest pairs))) types '())
       model
       environment
       level))))

(cl:defun partial-evaluate-segment (name body model environment level)
 (if (null body)
     (funcall
      (continuation (find name (tagbody-tags environment) :key #'name)))
     (partial-evaluate
      #'(lambda (value)
	 (declare (ignore value))
	 (partial-evaluate-segment name (rest body) model environment level))
      (first body)
      '()
      model
      environment
      level)))

(cl:defun partial-evaluate-last-segment
    (continuation body types model environment level)
 (if (null body)
     (partial-evaluate continuation nil types model environment level)
     (partial-evaluate
      #'(lambda (value)
	 (declare (ignore value))
	 (partial-evaluate-last-segment
	  continuation (rest body) types model environment level))
      (first body)
      '()
      model
      environment
      level)))

(cl:defun partial-evaluate-tagbody
    (continuation body types model environment level)
 (let ((segments (list (list 'header))))
  (iterate (for form in body)
	   (if (consp form)
	       (push form (rest (first segments)))
	       (push (list form) segments)))
  (let* ((segments (reverse segments))
	 (environment
	  (make-instance 'environment
			 :macros (macros environment)
			 :lexical-bindings (lexical-bindings environment)
			 :special-bindings (special-bindings environment)
			 :function-bindings (function-bindings environment)
			 :declarations (declarations environment)
			 :block-tags (block-tags environment)
			 :tagbody-tags (tagbody-tags environment)))
	 (tags
	  (maplist #'(lambda (segments)
		      (let ((segment (first segments)))
		       (make-instance
			'tag
			:name (first segment)
			:continuation (if (null (rest segments))
					  #'(lambda ()
					     (partial-evaluate-last-segment
					      continuation
					      (rest segment)
					      types
					      model
					      environment
					      level))
					  #'(lambda ()
					     (partial-evaluate-segment
					      (first (second segments))
					      (rest segment)
					      model
					      environment
					      level))))))
		   (rest segments))))
   (setf (tagbody-tags environment) (append tags (tagbody-tags environment)))
   (if (null (rest segments))
       (partial-evaluate-last-segment
	continuation (rest (first segments)) types model environment level)
       (partial-evaluate-segment
	(first (second segments)) (rest (first segments)) model
	environment level)))))

(clos:defmethod declarations ((function transparent)) '())

(clos:defmethod declarations ((function emulate)) '())

(cl:defun peal-keyword (keyword parameters)
 (iterate (with new-parameters = '())
	  (if (null parameters)
	      (return (values nil
			      nil
			      (reverse new-parameters))))
	  (if (null (rest parameters))
	      (error "Odd number of keyword parameters"))
	  (if (eq keyword (first parameters))
	      (return (values t
			      (second parameters)
			      (append (reverse new-parameters)
				      (rest (rest parameters))))))
	  (push (pop parameters) new-parameters)
	  (push (pop parameters) new-parameters)))

;;; Things which CLtL2 leaves ambiguous:
;;;  a. What if a keyword appears twice in either the arglist or the call
;;;  b. What if there is a keyword argument named :ALLOW-OTHER-KEYS
;;;  c. Does the appearance of the :ALLOW-OTHER-KEYS NIL itself signal an error

(cl:defun partial-evaluate-call2
    (continuation function arguments mode parameters types model environment
		  level lexical-bindings)
 (let ((argument (first arguments))
       (parameter (first parameters)))
  (cond ((null arguments)
	 (if (eq mode '&key)
	     (multiple-value-bind (found? parameter parameters)
		 (peal-keyword ':allow-other-keys parameters)
	      (if found?
		  (if (typep parameter 'code)
		      (error "Cannot handle :ALLOW-OTHER-KEYS with code")
		      (if (and (not parameter) (not (null parameters)))
			  (error "Too many parameters")))
		  (if (not (null parameters))
		      (error "Too many parameters")))))
	 (if (and (not (null parameters))
		  (or (eq mode nil) (eq mode '&optional)))
	     (error "Too many parameters"))
	 (partial-evaluate-progn
	  continuation
	  (body function)
	  types
	  model
	  (make-instance
	   'environment
	   :macros (macros (environment function))
	   :lexical-bindings (append lexical-bindings
				     (lexical-bindings (environment function)))
	   :special-bindings (special-bindings environment)
	   :function-bindings (function-bindings (environment function))
	   :declarations (append (declarations function)
				 (declarations (environment function)))
	   :block-tags (block-tags (environment function))
	   :tagbody-tags (tagbody-tags (environment function)))
	  (1+ level)))
	((member argument lambda-list-keywords :test #'eq)
	 (partial-evaluate-call2
	  continuation function (rest arguments) argument
	  parameters types model environment level lexical-bindings))
	(t (let ((special-bindings (special-bindings environment)))
	    (case mode
	      ((nil)
	       (if (null parameters) (error "Too few parameters"))
	       (if (or (constant? argument (declarations environment))
		       (constant? argument (declarations function)))
		   (error "Attempt to bind the constant ~S" argument))
	       (if (or (special? argument (declarations environment))
		       (special? argument (declarations function)))
		   (push (list argument parameter) special-bindings)
		   (push (list argument parameter) lexical-bindings))
	       (partial-evaluate-call2
		continuation function (rest arguments) mode
		(rest parameters) types model
		(make-instance
		 'environment
		 :macros (macros environment)
		 :lexical-bindings (lexical-bindings environment)
		 :special-bindings special-bindings
		 :function-bindings (function-bindings environment)
		 :declarations (declarations environment)
		 :block-tags (block-tags environment)
		 :tagbody-tags (tagbody-tags environment))
		level lexical-bindings))
	      (&optional
	       (let ((argument (if (consp argument)
				   (first argument)
				   argument))
		     (default (if (and (consp argument)
				       (not (null (rest argument))))
				  (second argument)
				  nil))
		     (supplied? (and (consp argument)
				     (not (null (rest argument)))
				     (not (null (rest (rest argument))))))
		     (supplied (if (and (consp argument)
					(not (null (rest argument)))
					(not (null (rest (rest argument)))))
				   (third argument)
				   nil)))
		(cond
		  ((null parameters)
		   (partial-evaluate
		    #'(lambda (value)
		       (let ((value (single-value value)))
			(if (or (constant? argument (declarations environment))
				(constant? argument (declarations function)))
			    (error "Attempt to bind the constant ~S" argument))
			(if (and supplied?
				 (or (constant? supplied
						(declarations environment))
				     (constant? supplied
						(declarations function))))
			    (error "Attempt to bind the constant ~S" supplied))
			(if (or (special? argument (declarations environment))
				(special? argument (declarations function)))
			    (push (list argument value) special-bindings)
			    (push (list argument value) lexical-bindings))
			(if supplied?
			    (if (or (special? supplied
					      (declarations environment))
				    (special? supplied
					      (declarations function)))
				(push (list supplied nil) special-bindings)
				(push (list supplied nil) lexical-bindings)))
			(partial-evaluate-call2
			 continuation function (rest arguments) mode
			 nil types model
			 (make-instance
			  'environment
			  :macros (macros environment)
			  :lexical-bindings (lexical-bindings environment)
			  :special-bindings special-bindings
			  :function-bindings (function-bindings environment)
			  :declarations (declarations environment)
			  :block-tags (block-tags environment)
			  :tagbody-tags (tagbody-tags environment))
			 level lexical-bindings)))
		    default
		    '()
		    model
		    (make-instance
		     'environment
		     :macros (macros environment)
		     :lexical-bindings (append lexical-bindings
					       (lexical-bindings environment))
		     :special-bindings (special-bindings environment)
		     :function-bindings (function-bindings environment)
		     :declarations (declarations environment)
		     :block-tags (block-tags environment)
		     :tagbody-tags (tagbody-tags environment))
		    level))
		  (t (if (or (constant? argument (declarations environment))
			     (constant? argument (declarations function)))
			 (error "Attempt to bind the constant ~S" argument))
		     (if (and supplied?
			      (or (constant? supplied
					     (declarations environment))
				  (constant? supplied
					     (declarations function))))
			 (error "Attempt to bind the constant ~S" supplied))
		     (if (or (special? argument (declarations environment))
			     (special? argument (declarations function)))
			 (push (list argument parameter) special-bindings)
			 (push (list argument parameter) lexical-bindings))
		     (if supplied?
			 (if (or (special? supplied (declarations environment))
				 (special? supplied (declarations function)))
			     (push (list supplied t) special-bindings)
			     (push (list supplied t) lexical-bindings)))
		     (partial-evaluate-call2
		      continuation function (rest arguments) mode
		      (rest parameters) types model
		      (make-instance
		       'environment
		       :macros (macros environment)
		       :lexical-bindings (lexical-bindings environment)
		       :special-bindings special-bindings
		       :function-bindings (function-bindings environment)
		       :declarations (declarations environment)
		       :block-tags (block-tags environment)
		       :tagbody-tags (tagbody-tags environment))
		      level lexical-bindings)))))
	      (&rest
	       (if (or (constant? argument (declarations environment))
		       (constant? argument (declarations function)))
		   (error "Attempt to bind the constant ~S" argument))
	       (if (or (special? argument (declarations environment))
		       (special? argument (declarations function)))
		   (push (list argument parameters) special-bindings)
		   (push (list argument parameters) lexical-bindings))
	       (partial-evaluate-call2
		continuation function (rest arguments) mode
		parameters types model
		(make-instance
		 'environment
		 :macros (macros environment)
		 :lexical-bindings (lexical-bindings environment)
		 :special-bindings special-bindings
		 :function-bindings (function-bindings environment)
		 :declarations (declarations environment)
		 :block-tags (block-tags environment)
		 :tagbody-tags (tagbody-tags environment))
		level lexical-bindings))
	      (&key
	       (let ((argument (if (consp argument)
				   (if (consp (first argument))
				       (second (first argument))
				       (first argument))
				   argument))
		     (keyword (if (consp argument)
				  (if (consp (first argument))
				      (first (first argument))
				      (intern (string (first argument))
					      (symbol-package :foo)))
				  (intern (string argument)
					  (symbol-package :foo))))
		     (default (if (and (consp argument)
				       (not (null (rest argument))))
				  (second argument)
				  nil))
		     (supplied? (and (consp argument)
				     (not (null (rest argument)))
				     (not (null (rest (rest argument))))))
		     (supplied (if (and (consp argument)
					(not (null (rest argument)))
					(not (null (rest (rest argument)))))
				   (third argument)
				   nil)))
		(multiple-value-bind (found? parameter parameters)
		    (peal-keyword keyword parameters)
		 (cond
		   (found?
		    (if (or (constant? argument (declarations environment))
			    (constant? argument (declarations function)))
			(error "Attempt to bind the constant ~S" argument))
		    (if (and supplied?
			     (or (constant? supplied
					    (declarations environment))
				 (constant? supplied
					    (declarations function))))
			(error "Attempt to bind the constant ~S" supplied))
		    (if (or (special? argument (declarations environment))
			    (special? argument (declarations function)))
			(push (list argument parameter) special-bindings)
			(push (list argument parameter) lexical-bindings))
		    (if supplied?
			(if (or (special? supplied (declarations environment))
				(special? supplied (declarations function)))
			    (push (list supplied t) special-bindings)
			    (push (list supplied t) lexical-bindings)))
		    (partial-evaluate-call2
		     continuation function (rest arguments) mode parameters
		     types model
		     (make-instance
		      'environment
		      :macros (macros environment)
		      :lexical-bindings (lexical-bindings environment)
		      :special-bindings special-bindings
		      :function-bindings (function-bindings environment)
		      :declarations (declarations environment)
		      :block-tags (block-tags environment)
		      :tagbody-tags (tagbody-tags environment))
		     level lexical-bindings))
		   (t (partial-evaluate
		       #'(lambda (value)
			  (let ((value (single-value value)))
			   (if (or (constant? argument
					      (declarations environment))
				   (constant? argument
					      (declarations function)))
			       (error "Attempt to bind the constant ~S"
				      argument))
			   (if (and supplied?
				    (or (constant? supplied
						   (declarations environment))
					(constant? supplied
						   (declarations function))))
			       (error "Attempt to bind the constant ~S"
				      supplied))
			   (if (or (special? argument
					     (declarations environment))
				   (special? argument (declarations function)))
			       (push (list argument value) special-bindings)
			       (push (list argument value) lexical-bindings))
			   (if supplied?
			       (if (or (special? supplied
						 (declarations environment))
				       (special? supplied
						 (declarations function)))
				   (push (list supplied nil) special-bindings)
				   (push (list supplied nil)
					 lexical-bindings)))
			   (partial-evaluate-call2
			    continuation function (rest arguments) mode
			    parameters types model
			    (make-instance
			     'environment
			     :macros (macros environment)
			     :lexical-bindings (lexical-bindings environment)
			     :special-bindings special-bindings
			     :function-bindings (function-bindings environment)
			     :declarations (declarations environment)
			     :block-tags (block-tags environment)
			     :tagbody-tags (tagbody-tags environment))
			    level lexical-bindings)))
		       default
		       '()
		       model
		       (make-instance
			'environment
			:macros (macros environment)
			:lexical-bindings (append
					   lexical-bindings
					   (lexical-bindings environment))
			:special-bindings (special-bindings environment)
			:function-bindings (function-bindings environment)
			:declarations (declarations environment)
			:block-tags (block-tags environment)
			:tagbody-tags (tagbody-tags environment))
		       level))))))
	      (&allow-other-keys
	       (if (oddp (length parameters))
		   (error "Odd number of keyword parameters"))
	       (partial-evaluate-progn
		continuation
		(body function)
		types
		model
		(make-instance
		 'environment
		 :macros (macros (environment function))
		 :lexical-bindings (append lexical-bindings
					   (lexical-bindings
					    (environment function)))
		 :special-bindings (special-bindings environment)
		 :function-bindings (function-bindings (environment function))
		 :declarations (append (declarations function)
				       (declarations (environment function)))
		 :block-tags (block-tags (environment function))
		 :tagbody-tags (tagbody-tags (environment function)))
		(1+ level)))
	      (&aux (error "&AUX not yet implemented"))
	      (otherwise (error "Invalid lambda-list keyword: ~S" mode))))))))

(cl:defun restrict-parameters
    (forms parameters arguments model &optional mode restricted-parameters)
 (let ((argument (first arguments))
       (parameter (first parameters))
       (form (first forms)))
  (cond ((null arguments)
	 (if (eq mode '&key)
	     (multiple-value-bind (found? parameter parameters)
		 (peal-keyword ':allow-other-keys parameters)
	      (if found?
		  (if (typep parameter 'code)
		      (error "Cannot handle :ALLOW-OTHER-KEYS with code")
		      (if (and (not parameter) (not (null parameters)))
			  (error "Too many parameters")))
		  (if (not (null parameters))
		      (error "Too many parameters")))))
	 (if (and (not (null parameters))
		  (or (eq mode nil) (eq mode '&optional)))
	     (error "Too many parameters"))
	 (reverse restricted-parameters))
	((member argument lambda-list-keywords :test #'eq)
	 (restrict-parameters forms parameters (rest arguments) model argument
			      restricted-parameters))
	(t (ecase mode
	     ((nil)
	      (if (null parameters) (error "Too few parameters"))
	      (restrict-parameters
	       (rest forms) (rest parameters) (rest arguments) model mode
	       (cons (restrict-type form parameter argument model)
		     restricted-parameters)))
	     (&optional
	      (restrict-parameters
	       (rest forms) (rest parameters) (rest arguments) model mode
	       (cons (restrict-type form parameter argument model)
		     restricted-parameters)))
	     (&rest
	      (if (null parameters)
		  (reverse restricted-parameters)
		  (restrict-parameters
		   (rest forms) (rest parameters) arguments model mode
		   (cons (restrict-type form parameter argument model)
			 restricted-parameters))))
	     (&key
	      (error "Can't (yet) handle &KEY parameters in function types"))
	     (&allow-other-keys
	      (error "Can't (yet) handle &ALLOW-OTHER-KEYS in function types")
	      (if (oddp (length parameters))
		  (error "Odd number of keyword parameters"))))))))

(cl:defun partial-evaluate-call1
    (continuation name function forms parameters types model environment level)
 (let ((parameter
	(find-if-not #'(lambda (parameter) (type-in-model parameter model))
		     parameters)))
  (if parameter
      (funcall continuation parameter)
      (typecase function
	(transparent
	 (funcall
	  continuation
	  (let ((record (find (value function) *function-types*
			      :test #'eq :key #'first)))
	   (cond
	     ((or (and record (eq (third record) nil))
		  (some #'(lambda (parameter) (typep parameter 'code))
			parameters))
	      (make-call
	       (value function)
	       (if record
		   (restrict-parameters forms parameters (second record) model)
		   parameters)
	       (if record (third record) t)))
	     (t (let ((values
		       (multiple-value-list
			   (apply
			    (symbol-function (value function))
			    (mapcar
			     #'(lambda (value)
				(typecase value
				  (transparent (symbol-function (value value)))
				  (emulate (value value))
				  (closure
				   (error "Can't (yet) evaluate a closure"))
				  (instance
				   (error "Can't (yet) evaluate an instance"))
				  (code (error "This shouldn't happen"))
				  (otherwise value)))
			     parameters)))))
		 (if (= (length values) 1)
		     (first values)
		     (make-call 'values
				values
				`(values ,@(mapcar #'code-type values))))))))))
	(emulate (funcall
		  continuation
		  (apply (value function) model (value function) parameters)))
	(closure
	 (when *trace?*
	  (format t "~%")
	  (iterate (for i below level) (format t " "))
	  (format t "~S" name))
	 (partial-evaluate-call2
	  continuation function (arguments function) nil parameters
	  types model environment level nil))
	(otherwise (error "This shouldn't happen"))))))

(cl:defun partial-evaluate-call
    (continuation name function forms types model environment level
		  &optional arguments parameters)
 (if (null forms)
     (partial-evaluate-call1
      continuation name function (reverse arguments) (reverse parameters)
      types model environment level)
     (partial-evaluate #'(lambda (value)
			  (partial-evaluate-call continuation
						 name
						 function
						 (rest forms)
						 types
						 model
						 environment
						 level
						 (cons (first forms)
						       arguments)
						 (cons (single-value value)
						       parameters)))
		       (first forms)
		       '()
		       model
		       environment
		       level)))

(cl:defun partial-evaluate (continuation form types model environment level)
 (walk
  #'(lambda (form form-type)
     (case form-type
       (lambda-list (error "This shouldn't happen"))
       (variable
	(let ((binding (find form
			     (if (special? form (declarations environment))
				 (special-bindings environment)
				 (lexical-bindings environment))
			     :test #'eq :key #'first)))
	 ;; needs work: To check TYPES.
	 (funcall
	  continuation
	  (cond (binding (second binding))
		;; needs work: A kludge for now. Really need way to determine
		;;             whether a symbol is a constant defined with
		;;             CL:DEFCONSTANT and not with PARTIAL:DEFCONSTANT
		((eq form 'pi) pi)
		(t (make-full
		    form
		    (reduce
		     #'and-type types
		     :initial-value (if (find form *variable-types*
					      :test #'eq :key #'first)
					(second (find form *variable-types*
						      :test #'eq :key #'first))
					t))))))))
       (block (partial-evaluate-block
	       continuation (second form) (rest (rest form)) types model
	       environment level))
       (flet (partial-evaluate-flet
	      continuation (second form) (rest (rest form)) types model
	      environment level))
       (function-lambda
	(check-lambda-list (second (second form)))
	(multiple-value-bind (body declarations documentation-string)
	    (peal-off-documentation-string-and-declarations
	     (rest (rest (second form))) t)
	 (declare (ignore documentation-string))
	 (partial-evaluate
	  continuation
	  (make-instance 'closure
			 :arguments (second (second form))
			 :declarations declarations
			 :body body
			 :environment environment)
	  types
	  model
	  environment
	  level)))
       ((function-symbol function-setf)
	(let ((binding (find (second form) (function-bindings environment)
			     :test #'equal :key #'first)))
	 (partial-evaluate
	  continuation
	  (if binding
	      (second binding)
	      (make-instance 'transparent :value (second form)))
	  types
	  model
	  environment
	  level)))
       (go (partial-evaluate-go (second form) environment))
       (if (partial-evaluate-if
	    continuation (second form) (third form)
	    (if (null (rest (rest (rest form)))) nil (fourth form)) types
	    model environment level))
       (labels (partial-evaluate-labels
		continuation (second form) (rest (rest form)) types model
		environment level))
       (let (multiple-value-bind (body declarations)
		(peal-off-documentation-string-and-declarations
		 (rest (rest form)))
	     (partial-evaluate-let
	      continuation (second form) body
	      (append declarations (declarations environment)) types model
	      environment level)))
       (let* (multiple-value-bind (body declarations)
		 (peal-off-documentation-string-and-declarations
		  (rest (rest form)))
	      (partial-evaluate-let*
	       continuation (second form) body
	       (append declarations (declarations environment)) types model
	       environment level)))
       (multiple-value-call
	   (partial-evaluate
	    #'(lambda (value)
	       (partial-evaluate-multiple-value-call
		continuation (single-value value) (rest (rest form)) types
		model environment level))
	    (second form) '() model environment level))
       (multiple-value-prog1
	   (partial-evaluate-multiple-value-prog1
	    continuation (second form) (rest (rest form)) types model
	    environment level))
       (progn (partial-evaluate-progn
	       continuation (rest form) types model environment level))
       ;; needs work: To check TYPES.
       (quote (funcall continuation form))
       (return-from
	(partial-evaluate-return-from
	 (second form) (if (= (length form) 2) nil (third form)) types model
	 environment level))
       (setq (partial-evaluate-setq
	      continuation (rest form) types model environment level))
       (tagbody (partial-evaluate-tagbody
		 continuation (rest form) types model environment level))
       (the (partial-evaluate
	     continuation (third form)
	     (cons (convert-type-to-dnf (second form)) types) model
	     environment level))
       (full
	(funcall
	 continuation
	 (make-full (second form) (reduce #'and-type types :initial-value t))))
       (macro-call (error "This shouldn't happen"))
       (lambda-call
	(check-lambda-list (second (second form)))
	(multiple-value-bind (body declarations documentation-string)
	    (peal-off-documentation-string-and-declarations
	     (rest (rest (second form))) t)
	 (declare (ignore documentation-string))
	 (partial-evaluate-call
	  continuation
	  "unnamed function"
	  (make-instance 'closure
			 :arguments (second (second form))
			 :declarations declarations
			 :body body
			 :environment environment)
	  (rest form) types model environment level)))
       ((symbol-call setf-call)
	(let ((binding (find (first form) (function-bindings environment)
			     :test #'equal :key #'first)))
	 (partial-evaluate-call
	  continuation
	  (first form)
	  (if binding
	      (second binding)
	      (make-instance 'transparent :value (first form)))
	  (rest form) types model environment level)))
       (otherwise
	(error "Cannot (currently) partially evaluate the special form ~S.~%"
	       (first form)))))
  nil
  nil
  t
  nil
  form
  (macros environment)))

(defmacro defconstant
    (name initial-value &optional (documentation nil documentation?))
 ;; needs work: Cannot handle a non-empty environment.
 (unless (and (symbolp name) (not (null name)))
  (error "NAME must be a non-NIL symbol"))
 `(progn
   (eval-when (compile load eval)
    (unless (special? ',name (declarations *environment*))
     (push '(special ,name) (declarations *environment*)))
    (unless (constant? ',name (declarations *environment*))
     (push '(constant ,name) (declarations *environment*)))
    (partial-evaluate
     #'(lambda (value)
	(let ((value (single-value value))
	      (binding (find ',name (special-bindings *environment*)
			     :test #'eq :key #'first)))
	 ;; note: This won't work in multiple-path partial evaluation.
	 (if binding
	     (setf (second binding) value)
	     (push (list ',name value) (special-bindings *environment*)))))
     ',initial-value
     '()
     '()
     *environment*
     0))
   ,(if documentation?
	`(cl:defconstant ,name ,initial-value ,documentation)
	`(cl:defconstant ,name ,initial-value))))

(defmacro defparameter
    (name initial-value &optional (documentation nil documentation?))
 ;; needs work: Cannot handle a non-empty environment.
 (unless (and (symbolp name) (not (null name)))
  (error "NAME must be a non-NIL symbol"))
 `(progn
   (eval-when (compile load eval)
    (unless (special? ',name (declarations *environment*))
     (push '(special ,name) (declarations *environment*)))
    (if (constant? ',name (declarations *environment*))
	(error "Attempt to redefine a constant as a variable: ~S" ',name))
    (partial-evaluate
     #'(lambda (value)
	(let ((value (single-value value))
	      (binding (find ',name (special-bindings *environment*)
			     :test #'eq :key #'first)))
	 ;; note: This won't work in multiple-path partial evaluation.
	 (if binding
	     (setf (second binding) value)
	     (push (list ',name value) (special-bindings *environment*)))))
     ',initial-value
     '()
     '()
     *environment*
     0))
   ,(if documentation?
	`(cl:defparameter ,name ,initial-value ,documentation)
	`(cl:defparameter ,name ,initial-value))))

(defmacro defvar
    (name &optional (initial-value nil initial-value?)
	  (documentation nil documentation?))
 ;; needs work: Cannot handle a non-empty environment.
 (unless (and (symbolp name) (not (null name)))
  (error "NAME must be a non-NIL symbol"))
 `(progn
   (eval-when (compile load eval)
    (unless (special? ',name (declarations *environment*))
     (push '(special ,name) (declarations *environment*)))
    (if (constant? ',name (declarations *environment*))
	(error "Attempt to redefine a constant as a variable: ~S" ',name))
    ,@(if initial-value?
	  `((unless (find ',name (special-bindings *environment*)
			  :test #'eq :key #'first)
	     (partial-evaluate
	      #'(lambda (value)
		 ;; note: This won't work in multiple-path partial evaluation.
		 (push (list ',name (single-value value))
		       (special-bindings *environment*)))
	      ',initial-value
	      '()
	      '()
	      *environment*
	      0)))))
   ,(if documentation?
	`(cl:defvar ,name ,initial-value ,documentation)
	(if initial-value?
	    `(cl:defvar ,name ,initial-value)
	    `(cl:defvar ,name)))))

(cl:defun defun-internal (function-name lambda-list declarations body)
 (let ((function-binding (find function-name (function-bindings *environment*)
			       :test #'equal :key #'first)))
  (unless function-binding
   (setf function-binding (list function-name nil))
   (push function-binding (function-bindings *environment*)))
  (setf (second function-binding)
	(make-instance 'closure
		       :arguments lambda-list
		       :declarations declarations
		       :body body
		       :environment *environment*)))
 ;; note: so ILisp doesn't get screwed
 nil)

(defmacro defun (function-name lambda-list &body body)
 ;; needs work: Cannot handle a non-empty environment.
 (check-function-name function-name)
 (check-lambda-list lambda-list)
 (multiple-value-bind (body declarations documentation-string)
     (peal-off-documentation-string-and-declarations body t)
  `(progn
    (eval-when (compile load eval)
     (defun-internal ',function-name ',lambda-list ',declarations ',body))
    (cl:defun ,function-name ,lambda-list
     ,@(if documentation-string (list documentation-string))
     ,@declarations
     ,@body))))

(defun-compile-time defun-emulate-internal (function-name function)
 (let ((function-binding
	(find function-name (function-bindings *environment*)
	      :test #'equal :key #'first)))
  (unless function-binding
   (setf function-binding (list function-name nil))
   (push function-binding (function-bindings *environment*)))
  (setf (second function-binding)
	(make-instance 'emulate :value function :name function-name))))

(defmacro defun-emulate (function-name lambda-list &body body)
 ;; needs work: Cannot handle a non-empty environment.
 (check-function-name function-name)
 (check-lambda-list lambda-list)
 (multiple-value-bind (body declarations documentation-string)
     (peal-off-documentation-string-and-declarations body t)
  `(eval-when (compile load eval)
    (defun-emulate-internal
	',function-name
	#'(lambda (model emulate ,@lambda-list)
	   ,@(if documentation-string (list documentation-string))
	   ,@declarations
	   model			;ignore
	   emulate			;ignore
	   ,@body)))))

(defun-compile-time check-lambda-type-list-internal
    (lambda-list &optional mode)
 (cond
   ((null lambda-list))
   ((member (first lambda-list) '(&optional &rest &key &allow-other-keys)
	    :test #'eq)
    (check-lambda-type-list-internal (rest lambda-list) (first lambda-list)))
   (t (let ((parameter (first lambda-list)))
       (ecase mode
	 ((nil)
	  (unless (symbolp parameter)
	   (error "Invalid parameter: ~S" parameter)))
	 (&optional
	  (unless (symbolp parameter)
	   (error "Invalid &OPTIONAL parameter: ~S" parameter)))
	 (&rest
	  (unless (symbolp parameter)
	   (error "Invalid &REST parameter: ~S" parameter)))
	 (&key
	  (unless (and (consp parameter)
		       (null (rest (last parameter)))
		       (= (length parameter) 2)
		       (symbolp (first parameter))
		       (symbolp (second parameter)))
	   (error "Invalid &KEY parameter: ~S" parameter)))))
      (check-lambda-type-list-internal (rest lambda-list) mode))))

(defun-compile-time check-lambda-type-list (lambda-list)
 (unless (null (rest (last lambda-list)))
  (error "Improper lambda-list: ~S" lambda-list))
 (let ((rest (member '&rest lambda-list :test #'eq)))
  (if rest
      (let ((rest (rest rest)))
       (unless (not (member '&rest rest :test #'eq))
	(error "&REST cannot appear more than once: ~S" lambda-list))
       (unless (and (not (null rest))
		    (not (member (first rest) lambda-list-keywords :test #'eq))
		    (or (null (rest rest))
			(member (first (rest rest)) lambda-list-keywords
				:test #'eq)))
	(error "&REST must be followed by exactly one variable: ~S"
	       lambda-list)))))
 (let ((allow-other-keys (member '&allow-other-keys lambda-list :test #'eq)))
  (if allow-other-keys
      (unless (or (null (rest allow-other-keys))
		  (member (first (rest allow-other-keys)) lambda-list-keywords
			  :test #'eq))
       (error "&ALLOW-OTHER-KEYS must not be followed by a parameter: ~S"
	      lambda-list))))
 (let ((keywords
	(remove-if-not #'(lambda (argument)
			  (member argument lambda-list-keywords :test #'eq))
		       lambda-list)))
  (unless (every #'(lambda (keyword)
		    (member keyword '(&optional &rest &key &allow-other-keys)
			    :test #'eq))
		 keywords)
   (error "Invalid lambda list keyword: ~S" lambda-list))
  (unless (every #'(lambda (x y)
		    (member y
			    (member x '(&optional &rest &key &allow-other-keys)
				    :test #'eq)
			    :test #'eq))
		 keywords
		 (rest keywords))
   (error "Invalid order for lambda list keywords: ~S" lambda-list)))
 (check-lambda-type-list-internal lambda-list))

(defmacro declare-function-type (function-name argument-types result-type)
 ;; needs work: To check that ARGUMENT-TYPES has valid syntax
 (unless (and (symbolp function-name) (not (null function-name)))
  (error "FUNCTION-NAME must be a non-NIL symbol"))
 (check-lambda-type-list argument-types)
 `(eval-when (compile load eval)
   (let ((record
	  (find ',function-name *function-types* :test #'eq :key #'first)))
    (cond (record
	   (setf (second record) ',argument-types)
	   (setf (third record) ',result-type))
	  (t (push '(,function-name ,argument-types ,result-type)
		   *function-types*))))))

(declare-function-type error (string &rest t) nil)
(declare-function-type lucid-runtime-support:etypecase-runtime-otherwise
		       (list t t) nil)
(declare-function-type lucid-runtime-support:ecase-runtime-otherwise
		       (list t t) nil)

(defmacro declare-variable-type (variable-name type)
 (unless (and (symbolp variable-name) (not (null variable-name)))
  (error "VARIABLE-NAME must be a non-NIL symbol"))
 `(eval-when (compile load eval)
   (if (find ',variable-name *variable-types* :test #'eq :key #'first)
       (setf (second (find ',variable-name *variable-types*
			   :test #'eq :key #'first))
	     ',type)
       (push '(,variable-name ,type) *variable-types*))))

(defmacro partial (name form &environment environment)
 (let* ((*fulls* *fulls*)
	(*conditionals* *conditionals*)
	(*calls* *calls*)
	(*codes* *codes*)
	(code
	 (pass2
	  (partial-evaluate
	   #'identity
	   form
	   '()
	   '()
	   (make-instance 'environment
			  :macros environment
			  :lexical-bindings (lexical-bindings *environment*)
			  :special-bindings (special-bindings *environment*)
			  :function-bindings (function-bindings *environment*)
			  :declarations (declarations *environment*)
			  :block-tags (block-tags *environment*)
			  :tagbody-tags (tagbody-tags *environment*))
	   0))))
  (ecase *uncodify*
    (:lisp (let ((*gensym-counter* 0))
	    (iterate (for code in *codes*) (setf (tag code) (gensym "T"))))
	   (uncodify code))
    (:c (iterate (for code in *codes*) (for i from 0) (setf (tag code) i))
	(let ((codes (c-argument-subcodes code)))
	 (c-uncodify (string-downcase (string name)) code codes)
	 (cond
	   ;; needs work: to make extensible
	   ((is-type? code 'symbol)
	    `(let ((result (,name ,@(mapcar #'expression codes))))
	      (cond ((= result 0) nil)
		    ((= result 1) t)
		    (t (error "Can't (yet) return a SYMBOL")))))
	   ((string= (c-uncodify-type (code-type code)) "int_or_symbol")
	    `(progn
	      (,name ,@(mapcar #'expression codes))
	      (cond ((= (int-or-symbol-s int-or-symbol-result) -1)
		     (int-or-symbol-i int-or-symbol-result))
		    ((= (int-or-symbol-s int-or-symbol-result) 0) nil)
		    ((= (int-or-symbol-s int-or-symbol-result) 1) t)
		    (t (error "Can't (yet) return a SYMBOL")))))
	   ((string= (c-uncodify-type (code-type code)) "double_or_symbol")
	    `(progn
	      (,name ,@(mapcar #'expression codes))
	      (cond ((= (double-or-symbol-s double-or-symbol-result) -1)
		     (double-or-symbol-d double-or-symbol-result))
		    ((= (double-or-symbol-s double-or-symbol-result) 0) nil)
		    ((= (double-or-symbol-s double-or-symbol-result) 1) t)
		    (t (error "Can't (yet) return a SYMBOL")))))
	   (t `(,name ,@(mapcar #'expression codes)))))))))

(defmacro full (form)
 (error "FULL must appear inside PARTIAL: ~S" `(full ,form)))

;;; Micro CLOS

(cl:defun get-class (class-name)
 (let ((class (find class-name *classes* :test #'eq :key #'first)))
  (unless class (error "Unknown class: ~S" class-name))
  (second class)))

(cl:defun all-slot-names (class)
 (union (slot-names class)
	(reduce #'union
		(mapcar #'(lambda (superclass)
			   (all-slot-names (get-class superclass)))
			(superclasses class))
		:initial-value nil)))

(cl:defun all-initforms (class)
 ;; needs work: Not sure this is correct.
 (append (initforms class)
	 (reduce #'append
		 (mapcar #'(lambda (superclass)
			    (all-initforms (get-class superclass)))
			 (superclasses class)))))

(cl:defun all-initargs (class)
 ;; needs work: Not sure this is correct.
 (append (initargs class)
	 (reduce #'append
		 (mapcar #'(lambda (superclass)
			    (all-initargs (get-class superclass)))
			 (superclasses class)))))

(cl:defun slot-index (class-name slot-name)
 (let ((index (position slot-name (all-slot-names (get-class class-name))
			:test #'eq)))
  ;; needs work: Should create error CALL here.
  (if (null index) (error "Instance doesn't have a slot named: ~S" slot-name))
  index))

(cl:defun every-other (list)
 (if (or (null list) (null (rest list)))
     nil
     (cons (first list) (every-other (rest (rest list))))))

(cl:defun slot-type (type slot-name)
 (cond ((eq type t) t)
       ((eq type nil) nil)
       ((consp type)
	(ecase (first type)
	  (and (reduce #'and-type
		       (mapcar #'(lambda (type) (slot-type type slot-name))
			       (rest type))
		       :initial-value t))
	  (or (reduce #'or-type
		      (mapcar #'(lambda (type) (slot-type type slot-name))
			      (rest type))
		      :initial-value nil))))
       ((class-name? type)
	(let* ((class (get-class type))
	       (entry (find slot-name (types class) :test #'eq :key #'first))
	       (type (if entry (second entry) t)))
	 (and-type type
		   (reduce #'and-type
			   (mapcar #'(lambda (superclass)
				      (slot-type superclass slot-name))
				   (superclasses class))
			   :initial-value t))))
       (t nil)))

(cl:defun lambda-list-types (lambda-list)
 (iterate
  (for argument in lambda-list)
  (if (and (not (symbolp argument))
	   (or (not (consp argument))
	       (not (symbolp (first argument)))
	       (not (consp (rest argument)))
	       (not (null (rest (rest argument))))
	       (and (not (symbolp (second argument)))
		    (or (not (consp (second argument)))
			(not (eq (first (second argument)) 'eql))
			(not (consp (rest (second argument))))
			(not (null (rest (rest (second argument)))))))))
      (error "Invalid method argument: ~S" argument)))
 (mapcar #'(lambda (argument) (if (symbolp argument) t (second argument)))
	 lambda-list))

(cl:defun lambda-list-arguments (lambda-list)
 (mapcar
  #'(lambda (argument) (if (symbolp argument) argument (first argument)))
  lambda-list))

(cl:defun make-generic-function (function-name)
 (let ((generic-function
	(find function-name *methods* :test #'equal :key #'first)))
  (unless generic-function (error "This shouldn't happen"))
  (let* ((methods (rest generic-function))
	 (arguments (mapcar #'(lambda (x) (declare (ignore x)) (gensym))
			    (arguments (first methods)))))
   ;; needs work: Should warn when converting function into generic function.
   ;; needs work: Doesn't handle specialization correctly, i.e. runs first
   ;;             matching method rather than most specific matching method.
   (defun-internal function-name arguments
    nil
    `((cond
	,@(mapcar #'(lambda (method)
		     `((and ,@(mapcar #'(lambda (argument type)
					 (if (symbolp type)
					     `(typep ,argument ',type)
					     `(eql ,argument ,(second type))))
			       arguments
			       (types method)))
		       (let ,(mapcar #'(lambda (argument parameter)
					`(,argument ,parameter))
				     (arguments method)
				     arguments)
			,@(declarations method)
			,@(body method))))
		  methods)
	(t (error "No applicable method for ~S with argument types ~S"
		  ',function-name
		  (list ,@(mapcar #'(lambda (argument) `(code-type ,argument))
				  arguments))))))))))

(cl:defun defmethod-internal (function-name lambda-list body)
 (let ((generic-function
	(find function-name *methods* :test #'equal :key #'first)))
  (unless generic-function
   (setf generic-function (list function-name))
   (push generic-function *methods*))
  (unless (or (null (rest generic-function))
	      (= (length lambda-list)
		 (length (arguments (second generic-function)))))
   ;; needs work: Should be continuable.
   (error "Noncongruent lambda lists"))
  (let ((method (find (lambda-list-types lambda-list) (rest generic-function)
		      :test #'equal :key #'types)))
   (unless method
    (setf method
	  (make-instance 'method :types (lambda-list-types lambda-list)))
    (push method (rest generic-function)))
   (setf (arguments method) (lambda-list-arguments lambda-list))
   (multiple-value-bind (body declarations documentation-string)
       (peal-off-documentation-string-and-declarations body t)
    (declare (ignore documentation-string))
    (setf (declarations method) declarations)
    (setf (body method) body))))
 (make-generic-function function-name)
 ;; note: so ILisp doesn't get screwed
 nil)

(defmacro defmethod (function-name lambda-list &body body)
 ;; needs work: Cannot handle a non-empty environment.
 (check-function-name function-name)
 ;; needs work: More general CHECK-LAMBDA-LIST needed here.
 (unless (null (intersection lambda-list lambda-list-keywords :test #'eq))
  (error "Cannot (currently) handle lambda list keywords"))
 (unless (every #'(lambda (argument)
		   ;; needs work: Must check that variable name is valid.
		   (or (symbolp argument)
		       (and (consp argument)
			    (consp (rest argument))
			    (null (rest (rest argument)))
			    (symbolp (first argument)))))
		lambda-list)
  (error "Cannot (currently) handle this lambda list"))
 `(progn
   (eval-when (compile load eval)
    (defmethod-internal ',function-name ',lambda-list ',body))
   (clos:defmethod ,function-name ,lambda-list ,@body)))

(defmacro defmethod-emulate (function-name lambda-list &body body)
 ;; needs work: Cannot handle a non-empty environment.
 (check-function-name function-name)
 ;; needs work: More general CHECK-LAMBDA-LIST needed here.
 (unless (null (intersection lambda-list lambda-list-keywords :test #'eq))
  (error "Cannot (currently) handle lambda list keywords"))
 (unless (every #'(lambda (argument)
		   ;; needs work: Must check that variable name is valid.
		   (or (symbolp argument)
		       (and (consp argument)
			    (consp (rest argument))
			    (null (rest (rest argument)))
			    (symbolp (first argument)))))
		lambda-list)
  (error "Cannot (currently) handle this lambda list"))
 `(eval-when (compile load eval)
   (defmethod-internal ',function-name ',lambda-list ',body)))

(cl:defun defclass-internal
    (class-name superclasses slot-names initargs initforms types)
 (let ((class (find class-name *classes* :test #'eq :key #'first)))
  (unless class
   (setf class (list class-name nil))
   (push class *classes*))
  (setf (second class)
	(make-instance 'class
		       :superclasses superclasses
		       :slot-names slot-names
		       :initargs initargs
		       :initforms initforms
		       :types types)))
 ;; note: so ILisp doesn't get screwed
 nil)

(defmacro defclass (class-name superclasses slots &rest options)
 ;; needs work: Cannot handle a non-empty environment.
 (unless (null options) (error "OPTIONS not currently supported"))
 (unless (and (symbolp class-name) (not (null class-name)))
  (error "CLASS-NAME must be a non-NIL symbol"))
 (unless (and (or (null superclasses)
		  (and (consp superclasses)
		       (null (rest (last superclasses)))))
	      (every #'(lambda (superclass)
			(and (symbolp superclass) (not (null superclass))))
		     superclasses))
  (error "SUPERCLASSES must be a proper list of non-NIL symbols"))
 (unless (or (null slots) (and (consp slots) (null (rest (last slots)))))
  (error "SLOTS must be a proper list"))
 (let (slot-names methods initargs initforms types)
  (iterate
   (for slot in slots)
   (unless (or (symbolp slot)
	       (and (consp slot)
		    (null (rest (last slot)))
		    (symbolp (first slot))))
    (error "Improper SLOT"))
   (let (initformp typep)
    (if (consp slot)
	(let ((options (rest slot)))
	 (setf slot (first slot))
	 ;; needs work: To check for duplication of SLOT names.
	 ;; needs work: To check that SLOT name is valid.
	 (pushnew slot slot-names :test #'eq)
	 (iterate
	  (if (null options) (return))
	  (if (null (rest options)) (error "Missing SLOT option"))
	  (case (first options)
	    (:reader
	     (unless (and (symbolp (second options))
			  (not (null (second options))))
	      (error ":READER name must be a non-NIL symbol"))
	     (push `(defmethod-emulate ,(second options) ((x ,class-name))
		     (slot-value x ',slot))
		   methods))
	    (:accessor
	     (unless (and (symbolp (second options))
			  (not (null (second options))))
	      (error ":ACCESSOR name must be a non-NIL symbol"))
	     (push `(defmethod-emulate ,(second options) ((x ,class-name))
		     (slot-value x ',slot))
		   methods))
	    (:initarg
	     (unless (symbolp (second options))
	      (error ":INITARG name must be a symbol"))
	     (push (list (second options) slot) initargs))
	    (:initform
	     (if initformp (error "More than one :INITFORM"))
	     (setf initformp t)
	     (push (list slot (second options)) initforms))
	    (:type
	     (if typep (error "More than one :TYPE"))
	     (setf typep t)
	     (push (list slot (convert-type-to-dnf (second options))) types))
	    (otherwise
	     (error "(Currently) unsupported SLOT option: ~S"
		    (first options))))
	  (setf options (rest (rest options))))))))
  `(progn
    (eval-when (compile load eval)
     (defclass-internal ',class-name ',superclasses
      ',(reverse slot-names) ',(reverse initargs) ',(reverse initforms)
      ',(reverse types)))
    (clos:defclass ,class-name ,superclasses ,slots ,@options)
    ,@methods)))

;;; Emulates

(defun-emulate make-instance (class-name &rest initargs)
 ;; needs work: To do if expansion on class-name and keyword args.
 (cond ((null (code-type class-name)) class-name)
       ((some #'(lambda (initarg) (null (code-type initarg)))
	      initargs)
	(find-if #'(lambda (initarg) (null (code-type initarg))) initargs))
       ((typep class-name 'code)
	(make-call 'make-instance (list* class-name initargs) t emulate))
       ((some #'(lambda (initarg) (typep initarg 'code))
	      (every-other initargs))
	(make-call
	 'make-instance (list* class-name initargs) class-name emulate))
       (t (let* ((class (get-class class-name))
		 (slot-names (all-slot-names class))
		 (instance
		  (make-instance
		   'instance
		   :class-name class-name
		   :slots (make-array (length slot-names)
				      :initial-element *unbound*))))
	   (iterate (for initform in (all-initforms class))
		    (partial-evaluate
		     #'(lambda (value)
			(setf (aref (slots instance)
				    (slot-index class-name (first initform)))
			      (single-value value)))
		     (second initform)
		     '()
		     '()
		     *environment*
		     ;; needs work: The following is not really correct.
		     0))
	   ;; needs work: To signal error if unrecognized INITARG.
	   (iterate (with mappings = (all-initargs class))
		    (if (null initargs) (return))
		    ;; needs work: Should create error CALL here.
		    (if (null (rest initargs)) (error "Missing INITARG"))
		    (iterate
		     (for mapping in mappings)
		     (if (eq (first initargs) (first mapping))
			 (setf (aref (slots instance)
				     (slot-index class-name (second mapping)))
			       (second initargs))))
		    (setf initargs (rest (rest initargs))))
	   instance))))

(defun-emulate slot-value (instance slot-name)
 ;; needs work: If know type of instance and all slots are of same type can
 ;;             do better here.
 (cond ((null (code-type instance)) instance)
       ((null (code-type slot-name)) slot-name)
       ((typep slot-name 'conditional)
	(form-conditional
	 (antecedent slot-name)
	 #'(lambda (model)
	    (funcall emulate model emulate instance (consequent slot-name)))
	 #'(lambda (model)
	    (funcall emulate model emulate instance (alternate slot-name)))
	 model))
       ((typep instance 'conditional)
	(form-conditional
	 (antecedent instance)
	 #'(lambda (model)
	    (funcall emulate model emulate (consequent instance) slot-name))
	 #'(lambda (model)
	    (funcall emulate model emulate (alternate instance) slot-name))
	 model))
       ((typep slot-name 'code)
	(make-call 'slot-value (list instance slot-name) t emulate))
       ((typep instance 'code)
	(let ((type (slot-type (type-in-model instance model) slot-name)))
	 (if type
	     (make-call 'slot-value (list instance slot-name) type emulate)
	     (make-call 'error '("SLOT-VALUE called on non-instance")))))
       ((not (typep instance 'instance))
	(make-call 'error '("SLOT-VALUE called on non-instance")))
       (t (let ((value (aref (slots instance)
			     (slot-index (class-name instance) slot-name))))
	   (if (eq value *unbound*)
	       (make-call 'error `("Unbound slot: ~S" ,slot-name))
	       value)))))

(defun-emulate typep (object type)
 (cond
   ((null (code-type object)) object)
   ((null (code-type type)) type)
   ((eq (type? object type model) 'unknown)
    (cond ((typep object 'conditional)
	   (form-conditional
	    (antecedent object)
	    #'(lambda (model)
	       (funcall emulate model emulate (consequent object) type))
	    #'(lambda (model)
	       (funcall emulate model emulate (alternate object) type))
	    model))
	  ((typep type 'conditional)
	   (form-conditional
	    (antecedent type)
	    #'(lambda (model)
	       (funcall emulate model emulate object (consequent type)))
	    #'(lambda (model)
	       (funcall emulate model emulate object (alternate type)))
	    model))
	  (t (make-call 'typep (list object type) 'boolean emulate))))
   (t (type? object type model))))

(defun-emulate eq (x y)
 (cond ((null (code-type x)) x)
       ((null (code-type y)) y)
       ((disjoint-types? (code-type x) (code-type y)) nil)
       ((and (not (typep x 'code))
	     (typep y 'code)
	     (not (typep x (code-type y))))
	nil)
       ((and (typep x 'code)
	     (not (typep y 'code))
	     (not (typep y (code-type x))))
	nil)
       ((and (typep x 'code)
	     (subtype? (type-in-model x model) 'boolean)
	     (eq y t))
	x)
       ((and (typep x 'conditional) (eq y t))
	(form-conditional
	 (antecedent x)
	 #'(lambda (model) (funcall emulate model emulate (consequent x) y))
	 #'(lambda (model) (funcall emulate model emulate (alternate x) y))
	 model))
       ((or (typep x 'code) (typep y 'code))
	(make-call 'eq (list x y) 'boolean emulate))
       (t (eq x y))))

(defun-emulate eql (x y)
 (cond ((null (code-type x)) x)
       ((null (code-type y)) y)
       ((disjoint-types? (code-type x) (code-type y)) nil)
       ((and (not (typep x 'code))
	     (typep y 'code)
	     (not (typep x (code-type y))))
	nil)
       ((and (typep x 'code)
	     (not (typep y 'code))
	     (not (typep y (code-type x))))
	nil)
       ((typep x 'conditional)
	(form-conditional
	 (antecedent x)
	 #'(lambda (model) (funcall emulate model emulate (consequent x) y))
	 #'(lambda (model) (funcall emulate model emulate (alternate x) y))
	 model))
       ((typep y 'conditional)
	(form-conditional
	 (antecedent y)
	 #'(lambda (model) (funcall emulate model emulate x (consequent y)))
	 #'(lambda (model) (funcall emulate model emulate x (alternate y)))
	 model))
       ((or (typep x 'code) (typep y 'code))
	(make-call 'eql (list x y) 'boolean emulate))
       (t (eql x y))))

;;; needs work: Need emulates for CAR, CDR, FIRST, REST, CONSP, etc. that do
;;;             if expansion.

(defun-emulate cons (x y)
 (cond ((null (code-type x)) x)
       ((null (code-type y)) y)
       (t (cons x y))))

(defun-emulate list (&rest list)
 (if (some #'(lambda (x) (null (code-type x))) list)
     (find-if #'(lambda (x) (null (code-type x))) list)
     (copy-list list)))

(defun-emulate not (x)
 (cond ((null (code-type x)) x)
       ((typep x 'code)
	(form-conditional (boolean-value "argument of NOT" x model)
			  #'(lambda (model) (declare (ignore model)) nil)
			  #'(lambda (model) (declare (ignore model)) t)
			  model))
       (x nil)
       (t t)))

(defun-emulate values (&rest values)
 (cond ((some #'(lambda (value) (null (code-type value))) values)
	(find-if #'(lambda (value) (null (code-type value))) values))
       ((= (length values) 1) (first values))
       (t (make-call
	   'values values `(values ,@(mapcar #'code-type values)) emulate))))

(defun-emulate values-list (values)
 (cond ((some #'(lambda (value) (null (code-type value))) values)
	(find-if #'(lambda (value) (null (code-type value))) values))
       ((= (length values) 1) (first values))
       (t (make-call 'values values `(values ,@(mapcar #'code-type values))))))

(cl:defun expand-min (x y model)
 (cond ((and (typep x 'conditional)
	     (not (subtype? (code-type x) 'number)))
	(form-conditional
	 (antecedent x)
	 #'(lambda (model)
	    (declare (ignore model))
	    (expand-min (consequent x) y model))
	 #'(lambda (model)
	    (declare (ignore model))
	    (expand-min (alternate x) y model))
	 model))
       ((and (typep y 'conditional)
	     (not (subtype? (code-type y) 'number)))
	(form-conditional
	 (antecedent y)
	 #'(lambda (model)
	    (declare (ignore model))
	    (expand-min x (consequent y) model))
	 #'(lambda (model)
	    (declare (ignore model))
	    (expand-min x (alternate y) model))
	 model))
       ((or (not (subtype? (code-type x) 'number))
	    (not (subtype? (code-type y) 'number)))
	(make-call 'error '("Non-numeric argument to MIN")))
       (t (form-conditional
	   (make-call '< (list x y) 'boolean)
	   #'(lambda (model) (declare (ignore model)) x)
	   #'(lambda (model) (declare (ignore model)) y)
	   model))))

(defun-emulate min (number &rest numbers)
 (cond ((null (code-type number)) number)
       ((some #'(lambda (number) (null (code-type number))) numbers)
	(find-if #'(lambda (number) (null (code-type number))) numbers))
       ((null numbers) number)
       (t (let ((tail (apply emulate model emulate numbers)))
	   (cond ((or (typep number 'code) (typep tail 'code))
		  (expand-min number tail model))
		 ((< number tail) number)
		 (t tail))))))

(cl:defun expand-max (x y model)
 (cond ((and (typep x 'conditional)
	     (not (subtype? (code-type x) 'number)))
	(form-conditional
	 (antecedent x)
	 #'(lambda (model)
	    (declare (ignore model))
	    (expand-max (consequent x) y model))
	 #'(lambda (model)
	    (declare (ignore model))
	    (expand-max (alternate x) y model))
	 model))
       ((and (typep y 'conditional)
	     (not (subtype? (code-type y) 'number)))
	(form-conditional
	 (antecedent y)
	 #'(lambda (model)
	    (declare (ignore model))
	    (expand-max x (consequent y) model))
	 #'(lambda (model)
	    (declare (ignore model))
	    (expand-max x (alternate y) model))
	 model))
       ((or (not (subtype? (code-type x) 'number))
	    (not (subtype? (code-type y) 'number)))
	(make-call 'error '("Non-numeric argument to MAX")))
       (t (form-conditional
	   (make-call '> (list x y) 'boolean)
	   #'(lambda (model) (declare (ignore model)) x)
	   #'(lambda (model) (declare (ignore model)) y)
	   model))))

(defun-emulate max (number &rest numbers)
 (cond ((null (code-type number)) number)
       ((some #'(lambda (number) (null (code-type number))) numbers)
	(find-if #'(lambda (number) (null (code-type number))) numbers))
       ((null numbers) number)
       (t (let ((tail (apply emulate model emulate numbers)))
	   (cond ((or (typep number 'code) (typep tail 'code))
		  (expand-max number tail model))
		 ((> number tail) number)
		 (t tail))))))

(defun-emulate code-type (thing)
 (if (null (code-type thing)) thing (code-type thing)))

(defun-emulate error (message &rest arguments)
 (cond ((null (code-type message)) message)
       ((some #'(lambda (argument) (null (code-type argument))) arguments)
	(find-if #'(lambda (argument) (null (code-type argument))) arguments))
       ((or (typep message 'code)
	    (some #'(lambda (argument) (typep argument 'code)) arguments))
	(make-call 'error (cons message arguments) nil emulate))
       (t (make-call
	   'error (list (apply #'format nil message arguments)) nil emulate))))

(defun-emulate lucid-runtime-support:etypecase-runtime-otherwise
    (alternatives value thing)
 (cond ((null (code-type alternatives)) alternatives)
       ((null (code-type value)) value)
       ((null (code-type thing)) thing)
       ((or (typep alternatives 'code) (typep value 'code) (typep thing 'code))
	(make-call 'lucid-runtime-support:etypecase-runtime-otherwise
		   (list alternatives value thing)
		   nil
		   emulate))
       (t (make-call
	   'error
	   ;; note: This is not an accurate knock-off of the Lucid message
	   (list (format nil "The type of ~S, ~S, should be one of ~S"
			 thing value alternatives))))))

(defun-emulate lucid-runtime-support:ecase-runtime-otherwise
    (alternatives value thing)
 (cond ((null (code-type alternatives)) alternatives)
       ((null (code-type value)) value)
       ((null (code-type thing)) thing)
       ((or (typep alternatives 'code) (typep value 'code) (typep thing 'code))
	(make-call 'lucid-runtime-support:ecase-runtime-otherwise
		   (list alternatives value thing)
		   nil
		   emulate))
       (t (make-call
	   'error
	   ;; note: This is not an accurate knock-off of the Lucid message
	   (list (format nil "The value of ~S, ~S, should be one of ~S"
			 thing value alternatives))))))

;;; needs work: Need emulates for + - * and / that handle 0 and 1.

;;; C Uncodifiers

(define-c-uncodifier + ()
 (unless (and (is-type? code 'float)
	      (every #'(lambda (argument) (is-type? argument 'float))
		     (arguments code)))
  (error "Can't (yet) C-UNCODIFY a non-FLOAT +"))
 (cond ((null expressions) "0.0")
       ((null (rest expressions)) (first expressions))
       (t (iterate (with string = (format nil "(~A" (first expressions)))
		   (for expression in (rest expressions))
		   (setf string (format nil "~A+~A" string expression))
		   (finally (return (format nil "~A)" string)))))))

(define-c-uncodifier - ()
 (unless (every #'(lambda (argument) (is-type? argument 'float))
		(arguments code))
  (error "Can't (yet) C-UNCODIFY a non-FLOAT -"))
 (cond ((null expressions) (error "- needs one or more arguments"))
       ((null (rest expressions)) (format nil "(-~A)" (first expressions)))
       (t (iterate (with string = (format nil "(~A" (first expressions)))
		   (for expression in (rest expressions))
		   (setf string (format nil "~A-~A" string expression))
		   (finally (return (format nil "~A)" string)))))))

(define-c-uncodifier * ()
 (unless (and (is-type? code 'float)
	      (every #'(lambda (argument) (is-type? argument 'float))
		     (arguments code)))
  (error "Can't (yet) C-UNCODIFY a non-FLOAT *"))
 (cond ((null expressions) "1.0")
       ((null (rest expressions)) (first expressions))
       (t (iterate (with string = (format nil "(~A" (first expressions)))
		   (for expression in (rest expressions))
		   (setf string (format nil "~A*~A" string expression))
		   (finally (return (format nil "~A)" string)))))))

(define-c-uncodifier / ()
 (unless (every #'(lambda (argument) (is-type? argument 'float))
		(arguments code))
  (error "Can't (yet) C-UNCODIFY a non-FLOAT /"))
 (cond ((null expressions) (error "/ needs one or more arguments"))
       ((null (rest expressions)) (format nil "(1.0/~A)" (first expressions)))
       (t (iterate (with string = (format nil "(~A" (first expressions)))
		   (for expression in (rest expressions))
		   (setf string (format nil "~A/~A" string expression))
		   (finally (return (format nil "~A)" string)))))))

(define-c-uncodifier < ()
 (c-uncodify-float-comparison expressions code '< "(~A<~A)"))

(define-c-uncodifier <= ()
 (c-uncodify-float-comparison expressions code '<= "(~A<=~A)"))

(define-c-uncodifier > ()
 (c-uncodify-float-comparison expressions code '> "(~A>~A)"))

(define-c-uncodifier >= ()
 (c-uncodify-float-comparison expressions code '>= "(~A>=~A)"))

(define-c-uncodifier = ()
 (c-uncodify-float-comparison expressions code '= "(~A==~A)"))

(define-c-uncodifier /= ()
 (unless (every #'(lambda (argument) (is-type? argument 'float))
		(arguments code))
  (error "Can't (yet) C-UNCODIFY a non-FLOAT /="))
 (cond ((null expressions) (error "/= needs one or more arguments"))
       ((null (rest expressions)) (format nil "T" (first expressions)))
       ((null (rest (rest expressions)))
	(format nil "(~A!=~A)" (first expressions) (second expressions)))
       (t (iterate
	   (with string = "")
	   (with first? = t)
	   (for (expression1 . other-expressions) on expressions)
	   (iterate
	    (for expression2 in other-expressions)
	    ;; note: multiple evaluation
	    (cond (first? (setf string (format nil "((~A!=~A)"
					       expression1 expression2))
			  (setf first? nil))
		  (t (setf string
			   (format nil "~A&&(~A!=~A)"
				   string expression1 expression2)))))
	   (finally (return (format nil "~A)" string)))))))

(define-c-uncodifier plusp ()
 (c-uncodify-unary-float expressions code 'plusp "(~A>0.0)"))

(define-c-uncodifier minusp ()
 (c-uncodify-unary-float expressions code 'minusp "(~A<0.0)"))

(define-c-uncodifier zerop ()
 (c-uncodify-unary-float expressions code 'zerop "(~A==0.0)"))

(define-c-uncodifier sin ()
 (c-uncodify-unary-float expressions code 'sin "sin(~A)"))

(define-c-uncodifier cos ()
 (c-uncodify-unary-float expressions code 'cos "cos(~A)"))

(define-c-uncodifier atan ()
 (unless (every #'(lambda (argument) (is-type? argument 'float))
		(arguments code))
  (error "Can't (yet) C-UNCODIFY a non-FLOAT ATAN"))
 (cond ((= (length expressions) 1)
	(format nil "atan(~A)" (first expressions)))
       ((= (length expressions) 2)
	(format nil "atan2(~A,~A)" (first expressions) (second expressions)))
       (t (error "ATAN needs either one or two arguments"))))

(define-c-uncodifier abs ()
 (c-uncodify-unary-float expressions code 'abs "fabs(~A)"))

(define-c-uncodifier sqrt ()
 (c-uncodify-unary-float expressions code 'sqrt "sqrt(~A)"))

(define-c-uncodifier error ()
 (unless (>= (length expressions) 1)
  (error "ERROR needs at least one argument"))
 (unless (is-type? (first (arguments code)) 'string)
  (error "The first argument to ERROR must be a string"))
 (unless (= (length expressions) 1)
  (error "Can't (yet) C-UNCODIFY calls to error with more than one argument"))
 (format nil "error(~A)" (first expressions)))

;;; Result Types

(declare-function-type + (&rest number) number)

(declare-function-type - (number &rest number) number)

(declare-function-type * (&rest number) number)

(declare-function-type / (number &rest number) number)

(declare-function-type < (real &rest real) boolean)

(declare-function-type <= (real &rest real) boolean)

(declare-function-type > (real &rest real) boolean)

(declare-function-type >= (real &rest real) boolean)

(declare-function-type = (number &rest number) boolean)

(declare-function-type /= (number &rest number) boolean)

(declare-function-type plusp (real) boolean)

(declare-function-type minusp (real) boolean)

(declare-function-type zerop (number) boolean)

(declare-function-type sin (number) number)

(declare-function-type cos (number) number)

(declare-function-type atan (number &optional number) number)

(declare-function-type abs (number) real)

(declare-function-type sqrt (number) number)

;;; Variable Types

(declare-variable-type pi float)

;;; Tam V'Nishlam Shevah L'El Borei Olam
