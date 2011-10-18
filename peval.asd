;; -*- Mode: common-lisp; Package: cl-user -*-

(asdf:defsystem :cl-rewrite
  :description "Partial Evaluation Utilities"
  :author "Jianshi Huang"
  :version "0.1"
  :licence "LLGPL"
  :serial t
  ;; add new files to this list:
  :components
  ((:module src
    :components ((:file "packages")
                 (:file "peval" :depends-on ("packages"))
                 )))
  :depends-on (:alexandria
               ;; :parse-declarations-1.0
               ))

