;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; test/intersection

(def suite* (test/intersection :in test))

;; KLUDGE: we can't read the source of member, because there's some optimization magic there and introspection does not work
(setf (gethash 'member hu.dwim.partial-eval::*definition-lambda-forms*)
      '(lambda (element list &rest args)
        (block nil
          (loop for cell :on list
                when (eql (car cell) element)
                do (return-from nil cell)))))

(def function partial-eval/intersection (form)
  (partial-eval form :inline-functions '(intersection member)))

(def test test/intersection/partial-eval ()
  (is (equal (partial-eval/intersection '(intersection nil a)) nil))
  (is (equal (partial-eval/intersection '(intersection (list a) (list a))) '(cons a nil)))
  (is (equal (partial-eval/intersection '(intersection (list a b) (list b c)))
             '(let* ((sb-impl::res nil))
               (if (block nil
                     (if (eql b a)
                         (return t))
                     (if (eql c a)
                         (return t))
                     nil)
                   (setq sb-impl::res (cons a nil)))
               (cons b sb-impl::res)))))
