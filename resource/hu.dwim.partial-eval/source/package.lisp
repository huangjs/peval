;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.def)

(def package :hu.dwim.partial-eval
  (:use :contextl
        :hu.dwim.asdf
        :hu.dwim.common
        :hu.dwim.def
        :hu.dwim.defclass-star
        :hu.dwim.logger
        :hu.dwim.syntax-sugar
        :hu.dwim.util
        :hu.dwim.walker)
  (:readtable-setup (hu.dwim.util:enable-standard-hu.dwim-syntaxes)))
