;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.def)

(def package :hu.dwim.partial-eval.test
  (:use :contextl
        :hu.dwim.common
        :hu.dwim.defclass-star
        :hu.dwim.def
        :hu.dwim.partial-eval
        :hu.dwim.stefil
        :hu.dwim.syntax-sugar
        :hu.dwim.util
        :hu.dwim.walker)
  (:readtable-setup (setup-readtable/same-as-package :hu.dwim.partial-eval)))
