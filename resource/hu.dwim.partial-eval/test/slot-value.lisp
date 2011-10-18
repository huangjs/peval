;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; test/slot-value-using-class

(def suite* (test/slot-value-using-class :in test))

(def layer slot-value-using-class-layer (standard-partial-eval-layer)
  ())

(def layered-method eval-function-call? :in slot-value-using-class-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator '(typep subtypep slot-definition-location slot-definition-name list*
                         sb-pcl::check-obsolete-instance sb-pcl::safe-p))))

(def layered-method inline-function-call? :in slot-value-using-class-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator '(slot-value-using-class (setf slot-value-using-class) svref
                         sb-pcl::clos-slots-ref (setf sb-pcl::clos-slots-ref) sb-int:proper-list-of-length-p)
              :test #'equal)))

(def layered-method partial-eval-function-call :in slot-value-using-class-layer ((ast free-application-form) (operator (eql 'sb-pcl::std-instance-p)) arguments)
  (bind ((argument (first-elt arguments)))
    (if (and (typep argument 'variable-reference-form)
             (subtypep (variable-type (name-of argument)) 'standard-object))
        (make-instance 'constant-form :value #t)
        (call-next-layered-method))))

(def layered-method has-function-call-side-effect? :in slot-value-using-class-layer ((ast free-application-form) operator arguments)
  (if (member operator '(sb-kernel:%instance-ref sb-kernel:coerce-to-condition))
      :never
      (call-next-layered-method)))

(def test test/slot-value-using-class/partial-eval ()
  (with-active-layers (slot-value-using-class-layer)
    (bind ((class (find-class 'standard-class/with-slots))
           (slot (first (class-slots class))))
      (is (equal (partial-eval `(slot-value-using-class ,class instance ,slot) :types '(instance standard-class/with-slots))
                 `(let* ((sb-pcl::value (aref (sb-kernel:%instance-ref instance 1) 0)))
                    (if (eq sb-pcl::value sb-pcl::+slot-unbound+)
                        (slot-unbound ,class instance ',(slot-definition-name slot))
                        sb-pcl::value))))
      (is (equal (partial-eval `(setf (slot-value-using-class ,class instance ,slot) foo) :types '(instance standard-class/with-slots))
                 '(sb-kernel:%svset (sb-kernel:%instance-ref instance 1) 0 foo))))))
