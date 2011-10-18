;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; test/make-instance

(def suite* (test/make-instance :in test))

;;;;;;
;;; test/make-instance/without-slots

(def suite* (test/make-instance/without-slots :in test/make-instance))

(def layer make-instance/without-slots-layer (standard-partial-eval-layer)
  ())

(def layered-method eval-function-call? :in make-instance/without-slots-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator
              '(list rplacd list* ; TODO: eliminate these
                typep subtypep find-class class-finalized-p finalize-inheritance class-default-initargs class-of class-slots class-prototype
                sb-int:list-of-length-at-least-p sb-pcl::class-wrapper sb-kernel:layout-length sb-kernel::classoid-of))))

(def layered-method inline-function-call? :in make-instance/without-slots-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator
              '(make-instance allocate-instance initialize-instance shared-initialize
                sb-int:list-of-length-at-least-p sb-pcl::allocate-standard-instance sb-pcl::get-instance-hash-code))))

(def layered-method lookup-variable-value? :in make-instance/without-slots-layer ((ast special-variable-reference-form) (name (eql 'sb-pcl::**boot-state**)))
  #t)

(def layered-method partial-eval-function-call :in make-instance/without-slots-layer ((ast free-application-form) (operator (eql 'sb-kernel::classoid-of)) arguments)
  (bind ((argument (first arguments)))
    (if (and (typep argument 'variable-reference-form)
             (variable-type (name-of argument)))
        (make-instance 'constant-form :value (sb-kernel:find-classoid (hu.dwim.partial-eval::variable-type (name-of argument))))
        (call-next-layered-method))))

(def layered-method has-function-call-side-effect? :in make-instance/without-slots-layer ((ast free-application-form) operator arguments)
  (if (member operator '(make-array))
      :never
      (call-next-layered-method)))

(def test test/make-instance/without-slots/partial-eval ()
  (with-active-layers (make-instance/without-slots-layer)
    (is (equal (partial-eval '(make-instance 'standard-class/without-slots) :types '(sb-kernel::instance standard-class/without-slots))
               `(let* ((sb-kernel:instance
                        (let* ((sb-kernel:instance
                                (sb-pcl::%make-standard-instance nil (random most-positive-fixnum sb-pcl::*instance-hash-code-random-state*))))
                          (sb-kernel:%set-instance-layout sb-kernel:instance ,(sb-pcl::class-wrapper (find-class 'standard-class/without-slots)))
                          (sb-kernel:%instance-set sb-kernel:instance 1 (make-array 0 :initial-element sb-pcl::+slot-unbound+))
                          sb-kernel:instance)))
                  sb-kernel:instance)))))

;;;;;;
;;; standard-class/with-slots

(def suite* (test/make-instance/with-slots :in test/make-instance))

;;;;;;
;;; partial-eval

(def layer make-instance/with-slots-layer (make-instance/without-slots-layer slot-value-using-class-layer)
  ())

(def layered-method eval-function-call? :in make-instance/with-slots-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator
              '(slot-definition-location slot-definition-initfunction slot-definition-initargs compute-applicable-methods append
                sb-int::memq sb-pcl::safe-p sb-pcl::std-instance-p sb-int:proper-list-of-length-p sb-pcl::check-obsolete-instance
                sb-pcl::clos-slots-ref sb-kernel:%instance-ref sb-pcl::check-initargs-1))
      (typep operator 'function)))

(def layered-method partial-eval-function-call :in make-instance/with-slots-layer ((ast free-application-form) (operator (eql 'eq)) arguments)
  ;; KLUDGE: to avoid checking for slots being unbound
  (if (and (typep (second arguments) 'special-variable-reference-form)
           (eq (name-of (second arguments)) 'sb-pcl::+slot-unbound+))
      (make-instance 'constant-form :value #t)
      (call-next-layered-method)))

;; TODO: this is redundant with slot-value-using-class-layer
(def layered-method inline-function-call? :in make-instance/with-slots-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator '((setf slot-value-using-class) slot-boundp-using-class
                         (setf sb-pcl::clos-slots-ref) sb-int:proper-list-of-length-p) :test #'equal)))

;; TODO: this is redundant with slot-value-using-class-layer
(def layered-method has-function-call-side-effect? :in make-instance/with-slots-layer ((ast free-application-form) operator arguments)
  (if (member operator '(aref sb-kernel:%instance-ref))
      :never
      (call-next-layered-method)))

(def test test/make-instance/with-slots/partial-eval ()
  (with-active-layers (make-instance/with-slots-layer)
    (is (equal (partial-eval '(make-instance 'standard-class/with-slots) :types '(sb-kernel::instance standard-class/with-slots))
               `(let* ((sb-kernel:instance
                        (let* ((sb-kernel:instance
                                (sb-pcl::%make-standard-instance nil (random most-positive-fixnum sb-pcl::*instance-hash-code-random-state*))))
                          (sb-kernel:%set-instance-layout sb-kernel:instance ,(sb-pcl::class-wrapper (find-class 'standard-class/with-slots)))
                          (sb-kernel:%instance-set sb-kernel:instance 1 (make-array 2 :initial-element sb-pcl::+slot-unbound+))
                          sb-kernel:instance)))
                  (sb-kernel:%svset (sb-kernel:%instance-ref sb-kernel:instance 1) 0 "foo")
                  (sb-kernel:%svset (sb-kernel:%instance-ref sb-kernel:instance 1) 1 "bar")
                  sb-kernel:instance)))
    (is (equal (partial-eval '(make-instance 'standard-class/with-slots :foo foo) :types '(sb-kernel::instance standard-class/with-slots))
               `(let* ((sb-kernel:instance
                        (let* ((sb-kernel:instance
                                (sb-pcl::%make-standard-instance nil (random most-positive-fixnum sb-pcl::*instance-hash-code-random-state*))))
                          (sb-kernel:%set-instance-layout sb-kernel:instance ,(sb-pcl::class-wrapper (find-class 'standard-class/with-slots)))
                          (sb-kernel:%instance-set sb-kernel:instance 1 (make-array 2 :initial-element sb-pcl::+slot-unbound+))
                          sb-kernel:instance)))
                  (not
                   (progn
                     (sb-kernel:%svset (sb-kernel:%instance-ref sb-kernel:instance 1) 0 foo)
                     t))
                  (sb-kernel:%svset (sb-kernel:%instance-ref sb-kernel:instance 1) 1 "bar")
                  sb-kernel:instance)))))
