;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(load-system :hu.dwim.asdf)

(in-package :hu.dwim.asdf)

(defsystem :hu.dwim.partial-eval.test
  :class hu.dwim.test-system
  :depends-on (:hu.dwim.partial-eval
               :hu.dwim.stefil+hu.dwim.def+swank
               :hu.dwim.util.mop)
  :components ((:module "test"
                :components ((:file "class" :depends-on ("suite"))
                             (:file "compact-class" :depends-on ("make-instance"))
                             (:file "function" :depends-on ("suite"))
                             (:file "generic-function" :depends-on ("suite"))
                             (:file "integer-power" :depends-on ("suite"))
                             (:file "intersection" :depends-on ("suite"))
                             (:file "list-append" :depends-on ("suite"))
                             (:file "make-instance" :depends-on ("slot-value"))
                             (:file "match-simple-regexp" :depends-on ("suite"))
                             (:file "package")
                             (:file "slot-value" :depends-on ("suite"))
                             (:file "special-form" :depends-on ("suite"))
                             (:file "string-compare" :depends-on ("suite"))
                             (:file "suite" :depends-on ("package"))))))
