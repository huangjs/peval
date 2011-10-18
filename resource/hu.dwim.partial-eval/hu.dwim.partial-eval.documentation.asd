;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(load-system :hu.dwim.asdf)

(in-package :hu.dwim.asdf)

(defsystem :hu.dwim.partial-eval.documentation
  :class hu.dwim.documentation-system
  :depends-on (:hu.dwim.partial-eval.test
               :hu.dwim.presentation)
  :components ((:module "documentation"
                :components ((:file "adventures" :depends-on ("package"))
                             (:file "install-guide" :depends-on ("package"))
                             (:file "package")
                             (:file "project" :depends-on ("package"))
                             (:file "user-guide" :depends-on ("package"))))))
