;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.documentation)

;;;;;;
;;; Project

(def project :hu.dwim.partial-eval)

(def method make-project-tab-pages ((component project/detail/inspector) (project (eql (find-project :hu.dwim.partial-eval))))
  (append (call-next-method)
          (list (tab-page/widget (:selector (icon/widget switch-to-tab-page :label "Install guide"))
                  (make-value-inspector (find-book 'install-guide)))
                (tab-page/widget (:selector (icon/widget switch-to-tab-page :label "User guide"))
                  (make-value-inspector (find-book 'user-guide)))
                (tab-page/widget (:selector (icon/widget switch-to-tab-page :label "Adventures"))
                  (make-value-inspector (find-book 'adventures)))
                (tab-page/widget (:selector (icon/widget switch-to-tab-page :label "Package"))
                  (make-value-inspector (find-package :hu.dwim.partial-eval))))))
