;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; compact-class

(def (class* ea) compact-simple-test ()
  ((standard-slot)
   (compact-boolean-slot :type boolean :allocation :compact)
   (compact-integer-slot :type (integer 0 255) :allocation :compact)
   (compact-base-char-slot :type base-char :allocation :compact))
  (:metaclass compact-class))

(def layer make-instance/compact-class-layer (make-instance/with-slots-layer)
  ())

(def layered-method has-function-call-side-effect? :in make-instance/compact-class-layer ((ast free-application-form) operator arguments)
  (if (member operator '(ldb dpb byte))
      :never
      (call-next-layered-method)))

(def layered-method eval-function-call? :in make-instance/compact-class-layer ((ast free-application-form) operator arguments)
  (or (member operator
              '(slot-definition-type hu.dwim.util::compact-words-count-of hu.dwim.util::compact-words-offset-of
                hu.dwim.util::compact-word-offset-of hu.dwim.util::compact-bit-position-of hu.dwim.util::compact-bit-size-of
                hu.dwim.util::find-slot char-code sb-kernel:single-float-bits))
      (call-next-layered-method)))

(def layered-method inline-function-call? :in make-instance/compact-class-layer ((ast free-application-form) operator arguments)
  (or (member operator
              '(standard-instance-access (setf standard-instance-access) hu.dwim.util::compact-bits (setf hu.dwim.util::compact-bits))
              :test #'equal)
      (call-next-layered-method)))

(def suite* (test/slot-value-using-class/compact-class :in test/slot-value-using-class))

(def test test/slot-value-using-class/compact-class/partial-eval ()
  (with-active-layers (make-instance/compact-class-layer)
    (bind ((class (find-class 'compact-simple-test))
           (slot (hu.dwim.util:find-slot class 'compact-boolean-slot)))
      (is (equal (partial-eval `(slot-value-using-class ,class instance ,slot) :types '(instance compact-simple-test))
                 '(= (ldb (byte 1 0) (aref (sb-kernel:%instance-ref instance 1) 1)) 1)))
      (is (equal (partial-eval `(setf (slot-value-using-class ,class instance ,slot) new-value) :types '(instance compact-simple-test))
                 '(sb-kernel:%svset (sb-kernel:%instance-ref instance 1) 1
                   (dpb (if new-value 1 0) (byte 1 0) (aref (sb-kernel:%instance-ref instance 1) 1))))))))

(def suite* (test/make-instance/compact-class :in test/make-instance))

(def test test/make-instance/compact-class/partial-eval ()
  (with-active-layers (make-instance/compact-class-layer)
    (is (equal (partial-eval '(make-instance 'compact-simple-test
                               :standard-slot "Hello"
                               :compact-boolean-slot #t
                               :compact-integer-slot 12
                               :compact-base-char-slot #\a)
                             :types '(sb-kernel:instance compact-simple-test))
               `(let* ((sb-kernel:instance
                        (let* ((it
                                (let* ((sb-kernel:instance
                                        (sb-pcl::%make-standard-instance nil (random most-positive-fixnum sb-pcl::*instance-hash-code-random-state*))))
                                  (sb-kernel:%set-instance-layout sb-kernel:instance ,(sb-pcl::class-wrapper (find-class 'compact-simple-test)))
                                  (sb-kernel:%instance-set sb-kernel:instance 1 (make-array 2 :initial-element sb-pcl::+slot-unbound+))
                                  sb-kernel:instance)))
                          (sb-kernel:%svset (sb-kernel:%instance-ref it 1) 0 0)
                          it)))
                  ;; TODO: get rid of this stupidness
                  (not (progn
                         (sb-kernel:%svset (sb-kernel:%instance-ref sb-kernel:instance 1) 0 "Hello")
                         t))
                  (not (progn
                         (sb-kernel:%svset (sb-kernel:%instance-ref sb-kernel:instance 1) 1
                                           (dpb 1 (byte 1 0)
                                                (aref (sb-kernel:%instance-ref sb-kernel:instance 1) 1)))
                         t))
                  (not (progn
                         (sb-kernel:%svset (sb-kernel:%instance-ref sb-kernel:instance 1) 1
                                           (dpb 12 (byte 8 1)
                                                (aref (sb-kernel:%instance-ref sb-kernel:instance 1) 1)))
                         t))
                  (not (progn
                         (sb-kernel:%svset (sb-kernel:%instance-ref sb-kernel:instance 1) 1
                                           (dpb 97 (byte 7 9)
                                                (aref (sb-kernel:%instance-ref sb-kernel:instance 1) 1)))
                         t))
                  (not (progn
                         (sb-kernel:%svset (sb-kernel:%instance-ref sb-kernel:instance 1) 1
                                           (dpb 1078529622 (byte 32 16)
                                                (aref (sb-kernel:%instance-ref sb-kernel:instance 1) 1)))
                         t))
                  sb-kernel:instance)))))
