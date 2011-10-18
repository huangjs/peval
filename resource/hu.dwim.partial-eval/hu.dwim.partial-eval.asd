;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(load-system :hu.dwim.asdf)

(in-package :hu.dwim.asdf)

(defsystem :hu.dwim.partial-eval
  :class hu.dwim.system
  :author ("Levente Mészáros <levente.meszaros@gmail.com>")
  :description "Extensible partial evaluator."
  :depends-on (:hu.dwim.common
               :hu.dwim.def
               :hu.dwim.defclass-star+hu.dwim.def+contextl
               :hu.dwim.logger
               :hu.dwim.syntax-sugar
               :hu.dwim.util
               :hu.dwim.util.source
               :hu.dwim.walker
               :swank)
  :components ((:module "source"
                :components ((:file "api" :depends-on ("package"))
                             (:file "environment" :depends-on ("logger"))
                             (:file "logger" :depends-on ("package"))
                             (:file "package")
                             (:file "partial-eval" :depends-on ("api" "util" "source" "environment"))
                             (:file "source" :depends-on ("package"))
                             (:file "standard" :depends-on ("partial-eval"))
                             (:file "util" :depends-on ("package"))))))
