;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; test/generic-function

(def suite* (test/generic-function :in test))

;;;;;;
;;; print-applied-method-information

(def suite* (test/generic-function/print-applied-method-information :in test/generic-function))

(def generic print-applied-method-information (instance))

;;;;;;
;;; t

(def method print-applied-method-information :before (instance)
  (print "t: before"))

(def method print-applied-method-information :around (instance)
  (print "t: enter around")
  (call-next-method)
  (print "t: leave around"))

(def method print-applied-method-information (instance)
  (print "t: primary"))

(def method print-applied-method-information :after (instance)
  (print "t: after"))

;;;;;;
;;; string

(def method print-applied-method-information :before ((instance string))
  (print "string: before"))

(def method print-applied-method-information :around ((instance string))
  (print "string: enter around")
  (call-next-method)
  (print "string: leave around"))

(def method print-applied-method-information ((instance string))
  (print "string: primary enter")
  (call-next-method)
  (print "string: primary leave"))

(def method print-applied-method-information :after ((instance string))
  (print "string: after"))

;;;;;;
;;; integer

(def method print-applied-method-information :before ((instance integer))
  (print "integer: before"))

(def method print-applied-method-information :around ((instance integer))
  (print "integer: enter around")
  (call-next-method)
  (print "integer: leave around"))

(def method print-applied-method-information ((instance integer))
  (print "integer: primary enter")
  (call-next-method)
  (print "integer: primary leave"))

(def method print-applied-method-information :after ((instance integer))
  (print "integer: after"))

;;;;;;
;;; partial-eval/print-applied-method-information

(def function partial-eval/print-applied-method-information (form &key types)
  (partial-eval form
                :types types
                :layer 'standard-partial-eval-layer
                :eval-functions '(typep subtypep
                                  ;; KLUDGE: TODO: eliminate these
                                  list list*)
                :inline-functions '(print-applied-method-information sb-int:proper-list-of-length-p)))

(def test test/generic-function/print-applied-method-information/t ()
  (bind ((form '(progn
                 (print "t: enter around")
                 (print "t: before")
                 (print "t: primary")
                 (print "t: after")
                 (print "t: leave around"))))
    (is (equal (partial-eval/print-applied-method-information '(print-applied-method-information t)) form))
    (is (equal (partial-eval/print-applied-method-information '(print-applied-method-information foo) :types '(foo symbol)) form))))

(def test test/generic-function/print-applied-method-information/integer ()
  (bind ((form '(progn
                 (print "integer: enter around")
                 (print "t: enter around")
                 (print "integer: before")
                 (print "t: before")
                 (print "integer: primary enter")
                 (print "t: primary")
                 (print "integer: primary leave")
                 (print "t: after")
                 (print "integer: after")
                 (print "t: leave around")
                 (print "integer: leave around"))))
    (is (equal (partial-eval/print-applied-method-information '(print-applied-method-information 42)) form))
    (is (equal (partial-eval/print-applied-method-information '(print-applied-method-information foo) :types '(foo integer)) form))))

(def test test/generic-function/print-applied-method-information/string ()
  (bind ((form '(progn
                 (print "string: enter around")
                 (print "t: enter around")
                 (print "string: before")
                 (print "t: before")
                 (print "string: primary enter")
                 (print "t: primary")
                 (print "string: primary leave")
                 (print "t: after")
                 (print "string: after")
                 (print "t: leave around")
                 (print "string: leave around"))))
    (is (equal (partial-eval/print-applied-method-information '(print-applied-method-information "42")) form))
    (is (equal (partial-eval/print-applied-method-information '(print-applied-method-information foo) :types '(foo string)) form))))
