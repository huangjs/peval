;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval)

;;;;;;
;;; standard-partial-eval-layer

(def (layer e) standard-partial-eval-layer (partial-eval-layer)
  ())

(def layered-method eval-function-call? :in standard-partial-eval-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator '(eq eql not null endp atom car cdr caar cadr cdar cddr consp rest first second third fourth length member
                         getf char= stringp symbolp
                         integerp zerop plusp minusp evenp oddp < <= = >= > - + * / 1+ 1-))))

;;;;;;
;;; has-function-call-side-effect?

(def layered-method has-function-call-side-effect? :in standard-partial-eval-layer ((ast free-application-form) operator arguments)
  (if (member operator '(cons list list* member typep subtypep))
      :never
      (call-next-layered-method)))

;;;;;;
;;; exits-function-call-non-locally?

(def layered-method exits-function-call-non-locally? :in standard-partial-eval-layer ((ast free-application-form) operator arguments)
  (if (member operator '(cons list list*))
      :never
      (call-next-layered-method)))

;;;;;;
;;; function-call-return-value

(def layered-method function-call-return-value :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'not)) arguments)
  (bind ((first-argument (first (arguments-of ast)))
         (result (return-value first-argument)))
    (cond ((typep result 'constant-form)
           (make-instance 'constant-form :value (not (value-of result))))
          ((and (never? (has-side-effect? first-argument))
                (never? (exits-non-locally? first-argument)))
           (make-instance 'free-application-form
                          :operator 'not
                          :arguments (list result))))))

;;;;;;
;;; function-call-return-value

(def layered-method function-call-return-type :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'list)) arguments)
  (if (null arguments)
      'null
      'cons))

(def layered-method function-call-return-type :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'cons)) arguments)
  'cons)

;;;;;;
;;; partial-eval-function-call

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'eql)) arguments)
  (bind ((first-argument (first arguments))
         (second-argument (second arguments)))
    (if (and (typep first-argument 'variable-reference-form)
             (typep second-argument 'variable-reference-form)
             (eq (name-of first-argument)
                 (name-of second-argument)))
        (make-instance 'constant-form :value #t)
        (call-next-layered-method))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'atom)) arguments)
  (bind ((argument (first arguments)))
    (cond ((and (typep argument 'free-application-form)
                (eq 'list (operator-of argument))
                (> (length (arguments-of argument)) 0))
           (make-instance 'constant-form :value #f))
          ((and (typep argument 'free-application-form)
                (eq 'list* (operator-of argument))
                (> (length (arguments-of argument)) 1))
           (make-instance 'constant-form :value #f))
          (t (call-next-layered-method)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'values)) arguments)
  (if (length= 1 arguments)
      (first arguments)
      (call-next-layered-method)))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'apply)) arguments)
  (bind ((function (first arguments))
         (last-argument (last-elt arguments)))
    (if (or (typep last-argument 'constant-form)
            (and (typep last-argument 'free-application-form)
                 (eq 'list (operator-of last-argument))))
        (bind ((arguments (append (butlast (rest arguments))
                                  (etypecase last-argument
                                    (constant-form
                                     (mapcar (lambda (value)
                                               (make-instance 'constant-form :value value))
                                             (value-of last-argument)))
                                    (free-application-form
                                     (arguments-of last-argument))))))
          (typecase function
            (constant-form
             (partial-eval-form (make-instance 'free-application-form
                                               :operator (value-of function)
                                               :arguments arguments)))
            (free-function-object-form
             (partial-eval-form (make-instance 'free-application-form
                                               :operator (name-of function)
                                               :arguments arguments)))
            (lambda-function-form
             (partial-eval-form (make-instance 'lambda-application-form
                                               :operator function
                                               :arguments arguments)))
            (t (call-next-layered-method))))
        (call-next-layered-method))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'funcall)) arguments)
  (bind ((function (first arguments)))
    (typecase function
      (constant-form
       (partial-eval-form (make-instance 'free-application-form
                                         :operator (value-of function)
                                         :arguments (rest arguments))))
      (lexical-function-object-form
       (partial-eval-form (make-instance 'lexical-application-form
                                         :operator (name-of function)
                                         :definition (make-instance 'lambda-function-form
                                                                    :body (body-of (definition-of function))
                                                                    :arguments (arguments-of (definition-of function)))
                                         :arguments (rest arguments))))
      (function-object-form
       (partial-eval-form (make-instance 'free-application-form
                                         :operator (name-of function)
                                         :arguments (rest arguments))))
      (lambda-function-form
       (partial-eval-form (make-instance 'lambda-application-form
                                         :operator function
                                         :arguments (cdr arguments))))
      (t (call-next-layered-method)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'car)) arguments)
  (bind ((argument (first arguments)))
    (cond ((and (typep argument 'free-application-form)
                (eq 'cons (operator-of argument)))
           (partial-eval-form (first (arguments-of argument))))
          ((and (typep argument 'free-application-form)
                (eq 'list (operator-of argument)))
           (partial-eval-form (first (arguments-of argument))))
          ((and (typep argument 'free-application-form)
                (eq 'list* (operator-of argument))
                (> (length (arguments-of argument)) 1))
           (partial-eval-form (first (arguments-of argument))))
          (t (call-next-layered-method)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'cdr)) arguments)
  (bind ((argument (first arguments)))
    (cond ((and (typep argument 'free-application-form)
                (eq 'cons (operator-of argument)))
           (partial-eval-form (second (arguments-of argument))))
          ((and (typep argument 'free-application-form)
                (eq 'list (operator-of argument)))
           (partial-eval-form (make-instance 'free-application-form
                                             :operator 'list
                                             :arguments (cdr (arguments-of argument)))))
          ((and (typep argument 'free-application-form)
                (eq 'list* (operator-of argument))
                (> (length (arguments-of argument)) 1))
           (partial-eval-form (make-instance 'free-application-form
                                             :operator 'list*
                                             :arguments (cdr (arguments-of argument)))))
          (t (call-next-layered-method)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'caar)) arguments)
  (partial-eval-form (make-instance 'free-application-form
                                    :operator 'car
                                    :arguments (list (make-instance 'free-application-form
                                                                    :operator 'car
                                                                    :arguments arguments)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'cadr)) arguments)
  (partial-eval-form (make-instance 'free-application-form
                                    :operator 'car
                                    :arguments (list (make-instance 'free-application-form
                                                                    :operator 'cdr
                                                                    :arguments arguments)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'cdar)) arguments)
  (partial-eval-form (make-instance 'free-application-form
                                    :operator 'cdr
                                    :arguments (list (make-instance 'free-application-form
                                                                    :operator 'car
                                                                    :arguments arguments)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'cddr)) arguments)
  (partial-eval-form (make-instance 'free-application-form
                                    :operator 'cdr
                                    :arguments (list (make-instance 'free-application-form
                                                                    :operator 'cdr
                                                                    :arguments arguments)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'list)) arguments)
  (if arguments
      (call-next-layered-method)
      (make-instance 'constant-form :value nil)))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'list*)) arguments)
  (bind ((first-argument (first arguments)))
    (cond ((and (length= 1 arguments)
                (or (typep first-argument 'constant-form)
                    (and (typep first-argument 'free-application-form)
                         (eq 'list (operator-of first-argument)))))
           first-argument)
          (t (call-next-layered-method)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'null)) arguments)
  (bind ((argument (first arguments)))
    (cond ((and (typep argument 'free-application-form)
                (eq 'list (operator-of argument))
                (> (length (arguments-of argument)) 0))
           (make-instance 'constant-form :value #f))
          ((and (typep argument 'free-application-form)
                (eq 'list* (operator-of argument))
                (> (length (arguments-of argument)) 1))
           (make-instance 'constant-form :value #f))
          (t (call-next-layered-method)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'endp)) arguments)
  (bind ((argument (first arguments)))
    (cond ((and (typep argument 'free-application-form)
                (eq 'cons (operator-of argument)))
           (make-instance 'constant-form :value #f))
          ((and (typep argument 'free-application-form)
                (eq 'list (operator-of argument))
                (> (length (arguments-of argument)) 0))
           (make-instance 'constant-form :value #f))
          ((and (typep argument 'free-application-form)
                (eq 'list* (operator-of argument))
                (> (length (arguments-of argument)) 1))
           (make-instance 'constant-form :value #f))
          (t (call-next-layered-method)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'consp)) arguments)
     (bind ((argument (first arguments)))
       (cond ((and (typep argument 'free-application-form)
                   (eq 'list* (operator-of argument))
                   (> (length (arguments-of argument)) 1))
              (make-instance 'constant-form :value #t))
             (t (call-next-layered-method)))))

(def function has-common-subclass? (class-1 class-2)
  (labels ((subclasses (class)
             (bind ((direct-subclasses (class-direct-subclasses class)))
               (append direct-subclasses
                       (mappend #'subclasses direct-subclasses)))))
    (intersection (cons class-1 (subclasses class-1))
                  (cons class-2 (subclasses class-2)))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'typep)) arguments)
  (bind ((value-argument (first arguments))
         (value-type (return-type value-argument))
         (type-argument (second arguments)))
    (if (typep type-argument 'constant-form)
        (cond ((subtypep value-type (value-of type-argument))
               (make-instance 'constant-form :value #t))
              ((subtypep `(and ,value-type
                               ,(value-of type-argument)) nil)
               (make-instance 'constant-form :value #f))
              ((and (find-class value-type nil)
                    (find-class (value-of type-argument) nil))
               (if (has-common-subclass? (find-class value-type nil)
                                         (find-class (value-of type-argument) nil))
                   (call-next-layered-method)
                   (make-instance 'constant-form :value #f)))
              (t (call-next-layered-method)))
        (call-next-layered-method))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'subtypep)) arguments)
  (bind ((subtype-argument (first arguments)))
    (if (and (typep subtype-argument 'constant-form)
             (null (value-of subtype-argument)))
        (make-instance 'constant-form :value #f)
        (call-next-layered-method))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'class-of)) arguments)
  (bind ((argument (first arguments)))
    (if (and (typep argument 'variable-reference-form)
             (variable-type (name-of argument)))
        (make-instance 'constant-form :value (find-class (variable-type (name-of argument))))
        (call-next-layered-method))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql '*)) arguments)
  (bind ((arguments-length (length arguments)))
    (if (= 1 arguments-length)
        (first arguments)
        (bind ((reduced-arguments (remove-if (lambda (argument)
                                               (and (typep argument 'constant-form)
                                                    (equal 1 (value-of argument))))
                                             arguments)))
          (if (= arguments-length (length reduced-arguments))
              (call-next-layered-method)
              (partial-eval-form (make-instance 'free-application-form
                                                :operator operator
                                                :arguments reduced-arguments)))))))

(def layered-method partial-eval-function-call :in standard-partial-eval-layer ((ast free-application-form) (operator (eql 'getf)) arguments)
  (bind ((first-argument (first arguments))
         (second-argument (second arguments)))
    (when (and (typep first-argument 'free-application-form)
               (eq 'list (operator-of first-argument))
               (typep second-argument 'constant-form))
      (doplist (key value (arguments-of first-argument))
        (when (and (typep key 'constant-form)
                   (eq (value-of key)
                       (value-of second-argument)))
          (return-from partial-eval-function-call value))))
    (call-next-layered-method)))
