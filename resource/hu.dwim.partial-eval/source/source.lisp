;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval)

;;;;;;
;;; Generic function

(def special-variable *definition-lambda-forms* (make-hash-table :synchronized #t))

(def function clear-definition-lambda-forms ()
  (clrhash *definition-lambda-forms*))

(def function make-generic-method-lambda-form (method)
  (bind ((lambda-list (method-lambda-list method))
         (function-name (generic-function-name (method-generic-function method)))
         (form (definition-source-form method))
         ;; KLUDGE: TODO: this is pretty much broken
         ((:values body declarations) (parse-body (cddr (remove-if (lambda (element)
                                                                     (member element '(closer-mop:defmethod common-lisp:defmethod def method :before :around :after)))
                                                                   form)))))
    (with-unique-names (arguments methods)
      `(lambda (,arguments ,methods)
         (destructuring-bind ,lambda-list ,arguments
           ,@declarations
           (block ,function-name
             ,@body))))))

(def function make-generic-function-discriminating-form (function arguments-list)
  (flet ((map-form (form function)
           (labels ((recurse (form)
                      (setf form (funcall function form))
                      (if (consp form)
                          (cons (recurse (car form))
                                (recurse (cdr form)))
                          form)))
             (recurse form))))
    (bind ((lambda-list (generic-function-lambda-list function))
           (required-arguments (parse-ordinary-lambda-list lambda-list))
           (sorted-applicable-methods (sb-pcl::sort-applicable-methods
                                       (sb-pcl::compute-precedence lambda-list
                                                                   (length required-arguments)
                                                                   (generic-function-argument-precedence-order function))
                                       (copy-list (generic-function-methods function))
                                       (make-list (length required-arguments) :initial-element t)))
           (methods-info (mapcar (lambda (method)
                                   (list method (gensym "METHOD")))
                                 sorted-applicable-methods))
           (argument-names (iter (for index :from 0 :below 10)
                                 (collect (sb-pcl::dfun-arg-symbol index))))
           (discrimination-net (sb-pcl::generate-discrimination-net function sorted-applicable-methods nil #t))
           (effective-methods-form (map-form discrimination-net
                                             (lambda (form)
                                               (if (and (consp form)
                                                        (eq 'sb-pcl::methods (first form)))
                                                   (compute-effective-method function (generic-function-method-combination function) (second form))
                                                   form))))
           (expanded-call-methods-form (map-form effective-methods-form
                                                 (lambda (form)
                                                   (if (and (consp form)
                                                            (eq 'call-method (first form)))
                                                       (bind ((method (second form))
                                                              (next-methods (third form))
                                                              (name (second (find method methods-info :key 'car))))
                                                         `(,name ,arguments-list (list ,@(mapcar (lambda (method)
                                                                                                   `(function ,(or (second (find method methods-info :key 'car))
                                                                                                                   method)))
                                                                                                 next-methods))))
                                                       (if (member form argument-names)
                                                           (elt required-arguments (position form argument-names))
                                                           form)))))
           (method-forms (mapcar (lambda (method-info)
                                   (bind ((form (make-generic-method-lambda-form (car method-info)))
                                          (arguments (second form)))
                                     `(,(second method-info) ,arguments
                                        (flet ((call-next-method ()
                                                 (funcall (car ,(second arguments)) ,(first arguments) (cdr ,(second arguments)))))
                                          ,@(cddr form)))))
                                 methods-info))
           (make-method-form-names (make-hash-table))
           (make-method-forms (bind ((functions nil))
                                (map-form expanded-call-methods-form
                                          (lambda (form)
                                            (if (and (consp form)
                                                     (eq 'make-method (first form)))
                                                (bind ((name (gensym "METHOD")))
                                                  (setf (gethash form make-method-form-names) name)
                                                  (push `(,name (&rest args)
                                                                (declare (ignore args))
                                                                ,(second form)) functions))
                                                form)))
                                functions)))
      `(flet ,method-forms
         (flet ,make-method-forms
           ,(map-form expanded-call-methods-form
                      (lambda (form)
                        (if (and (consp form)
                                 (eq 'make-method (first form)))
                            (gethash form make-method-form-names)
                            form))))))))

;;;;;;
;;; Function

(def generic make-function-lambda-form (function)
  (:method :around (function)
    (or (gethash function *definition-lambda-forms*)
        (setf (gethash function *definition-lambda-forms*)
              (call-next-method function))))

  (:method ((name symbol))
    (make-function-lambda-form (fdefinition name)))

  (:method ((name cons))
    (make-function-lambda-form (fdefinition name)))

  (:method ((function function))
    (bind (((:values nil nil function-name) (function-lambda-expression function))
           (form (definition-source-form function)))
      (labels ((%make-function-lambda-form (form)
                 (cond ((and (eq 'defun (first form))
                             (equal function-name (second form)))
                        ;; TODO: use walker
                        (bind (((:values body declarations nil) (parse-body (cdddr form) :documentation #t)))
                          `(lambda ,(caddr form)
                             ,@declarations
                             (block ,function-name
                               ,@body))))
                       ((and (consp form)
                             (macro-function (first form)))
                        (%make-function-lambda-form (macroexpand-1 form)))
                       ((and (consp form)
                             (member (first form) '(progn locally)))
                        (bind ((child-forms (mapcar #'%make-function-lambda-form (cdr form))))
                          (when (= 1 (count-if-not 'null child-forms))
                            (return-from %make-function-lambda-form (find-if-not 'null child-forms)))))
                       (t
                        nil))))
        (%make-function-lambda-form form))))

  (:method ((function generic-function))
    (bind ((lambda-list (generic-function-lambda-list function))
           ((:values required-arguments nil rest-argument) (parse-ordinary-lambda-list lambda-list)))
      (with-unique-names (arguments-list)
        `(lambda ,lambda-list
           (bind ((,arguments-list (list* ,@required-arguments ,rest-argument)))
             ,(make-generic-function-discriminating-form function arguments-list)))))))
