;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; test/list-append

(def suite* (test/list-append :in test))

(def function list-append (list-1 list-2)
  "A simple recursive variant for list append."
  (if (consp list-1)
      (cons (car list-1)
            (list-append (cdr list-1) list-2))
      list-2))

(def test test/list-append/correctness ()
  (is (equal nil (list-append nil nil)))
  (is (equal '(1 2 3) (list-append '(1 2 3) nil)))
  (is (equal '(1 2 3) (list-append nil '(1 2 3))))
  (is (equal '(1 2 3 4 5 6) (list-append '(1 2 3) '(4 5 6)))))

(def function partial-eval/list-append (form)
  (partial-eval form :inline-functions '(list-append)))

(def test test/list-append/partial-eval ()
  (is (equal (partial-eval/list-append '(list-append '(1 2 3) list))
             '(cons 1 (cons 2 (cons 3 list))))))
