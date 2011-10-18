;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; standard-class

(def class* standard-class/without-slots ()
  ())

(def class* standard-class/with-slots ()
  ((foo "foo")
   (bar "bar")))
