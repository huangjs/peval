;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval)

;;;;;;
;;; Util

(def function make-progn-form-body (body)
  (etypecase body
    (progn-form (body-of body))
    (walked-form (list body))
    (list
     (labels ((recurse (forms last-form?)
                (iter (with length = (length forms))
                      (for index :from 1)
                      (for form :in forms)
                      (if (typep form 'progn-form)
                          (appending (recurse (body-of form) (and last-form?
                                                                  (= length index))))
                          (if (or (and last-form?
                                       (= length index))
                                  (not (never? (has-side-effect? form)))
                                  (not (never? (exits-non-locally? form))))
                              (collect form))))))
       (recurse body #t)))))

(def function make-progn-form (body)
  (etypecase body
    (progn-form body)
    (walked-form body)
    (list
     (bind ((result (make-progn-form-body body)))
       (cond ((null result)
              (make-instance 'constant-form :value nil))
             ((length= result 1)
              (first result))
             (t (make-instance 'progn-form :body result)))))))

(def function make-free-application-form (operator arguments)
  (if (consp operator)
      (make-instance 'free-application-form
                     :operator 'funcall
                     :arguments (cons (make-instance 'function-object-form :name operator) arguments))
      (make-instance 'free-application-form
                     :operator operator
                     :arguments arguments)))

(def function variable-referenced? (name ast)
  (map-ast (lambda (ast)
             ;; FIXME: this is most probably broken with special-variables, and their handling might even need some walker updates
             (when (and (typep ast 'variable-reference-form)
                        (eq name (name-of ast)))
               (return-from variable-referenced? #t))
             ast)
           ast)
  #f)

(def function block-referenced? (block ast)
  (map-ast (lambda (ast)
             (when (and (typep ast 'return-from-form)
                        (eq block (target-block-of ast)))
               (return-from block-referenced? #t))
             ast)
           ast)
  #f)

(def function constant-values? (forms)
  (every (of-type '(or constant-form free-function-object-form)) forms))

(def function constant-values (forms)
  (mapcar (lambda (form)
            (etypecase form
              (constant-form (value-of form))
              (free-function-object-form (fdefinition (name-of form)))))
          forms))

(def function current-layer-prototype ()
  (contextl::layer-context-prototype (current-layer-context)))
