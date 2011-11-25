;  oops.lsp               Gordon S. Novak Jr.            01 Mar 95

; Simple Object-Oriented Programming System, sytactically similar to CLOS

; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 2 of the License, or
; (at your option) any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, write to the Free Software
; Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

(defvar *classes* nil)

; Define a class.
(defmacro defclass (class supers slot-specs &rest class-options)
  `(defclass-expr (quote ,class) (quote ,supers)
		  (quote ,slot-specs) (quote ,class-options)) )

(defun defclass-expr (class supers slot-specs class-options)
  (pushnew class *classes*)
  (setf (get class 'classp)  t)
  (setf (get class 'supers)  supers)
  (setf (get class 'slots)   slot-specs)
  (setf (get class 'options) class-options)
  class)

; Test whether something is a class.
(defun classp (class) (and (symbolp class) (get class 'classp)))

; Get the class of an object
(defun class-of (object)
  (or (and (symbolp object) (get object 'class))
      (type-of object)))

; Print a description of an object
(defun ppobj (object)
  (if (symbolp object) (pprint (cons object (symbol-plist object))) ))

; Make a new gensym atom with the specified name.
(defun make-atom (name) (gentemp (symbol-name name)))

; Make an instance of a class
(defun make-instance (class &rest initargs)
  (if (classp class)
    (let ((instance (make-atom class)))
      (addslots instance class initargs)
      (setf (get instance 'class) class)
      instance) ))

(defun addslots (instance class initargs)
  (let (initarg)
    (dolist (super (get class 'supers))
      (addslots instance super initargs))
    (dolist (slot (get class 'slots))
      (setf (get instance (car slot))
	    (or (and (setq initarg (getf (cdr slot) ':initarg))
		     (getf initargs initarg))
		(eval (getf (cdr slot) ':initform)))) ) ))

; get the names of all slots defined for a class
(defun slot-names (class)
  (let (names)
    (setq names (mapcar #'car (get class 'slots)))
    (dolist (super (get class 'supers))
      (setq names (union names (slot-names super))) )
    names))

; Get the stored value of a slot
(defun slot-value (object slot-name)
  (get object slot-name))

; Set the stored value of a slot
(defun set-slot-value (object slot-name value)
  (setf (get object slot-name) value) )

(defsetf slot-value set-slot-value)

; Define a method
(defmacro defmethod (selector args &rest rest)
  `(defmethod-expr (quote ,selector) (quote ,args) (quote ,rest)))

(defun defmethod-expr (selector args rest)
  (let (class fnname)
    (unless (and (consp (car args))
		 (setq class (cadar args))
		 (symbolp class))
      (error "Bad form - no initial class name ~S" args))
    (setq fnname (intern
		  (concatenate 'string (symbol-name class)
			       "-" (symbol-name selector))))
    (pushnew (list selector fnname)
	     (get class 'methods))
    (eval (cons 'defun (cons fnname
	    (cons (mapcar #'(lambda (x) (if (consp x) (car x) x))
			  args)
		  rest)))) ))

; Define a temporary cons cell for use by sendm
(defvar *sendmcons* (cons nil nil))

; Send a message to an object
(defun sendm (object selector &rest args)
  (let (method class)
    (unless (setq class (class-of object))
      (error "Object ~S has no Class." object))
    (if (setq method (findmethod selector class))
        (progn (rplaca *sendmcons* object)
	       (rplacd *sendmcons* args)
	       (apply method *sendmcons*))
	(error "No method defined for selector ~A for object ~S"
	       selector object)) ))

; Find a method for a given selector and class
(defun findmethod (selector class)
  (if (classp class)
      (or (cadr (assoc selector
                       (get class 'methods)))
          (some #'(lambda (super)
                   (findmethod selector super))
                (get class 'supers))) ) ) )

(defun commpile-class-methods (class)
  (dolist (pair (get class 'methods))
    (if (and (fboundp (second pair))
	     (consp (symbol-function (second pair))))
	(compile (second pair)))))

(defun compile-methods ()
  (dolist (class *classes*) (commpile-class-methods class)))
