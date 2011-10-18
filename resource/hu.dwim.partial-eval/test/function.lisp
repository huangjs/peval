;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; test/function

(def suite* (test/function :in test))

(def partial-eval-test test/function/list ()
  (list) -> nil
  (list a) -> (list a)
  (car (list a b)) -> a
  (car (list (cons a b))) -> (cons a b)
  (cdr (list a b)) -> (list b)
  (cdr (list a)) -> nil
  (null (list a)) -> #f)

(def partial-eval-test test/function/list* ()
  (list* nil) -> nil
  (list* a nil) -> (list* a nil)
  (car (list* a nil)) -> a
  (car (list* (cons a b) nil)) -> (cons a b)
  (cdr (list* a b nil)) -> (list* b nil)
  (cdr (list* a nil)) -> nil
  (null (list* a nil)) -> #f)

(def partial-eval-test test/function/funcall ()
  (funcall '+ a b) -> (+ a b)
  (funcall (lambda (x y) (+ x y)) a b) -> (+ a b)
  (funcall (lambda (&key (a nil a?)) a?)) -> nil)

(def partial-eval-test test/function/apply ()
  (apply '+ a b nil) -> (+ a b)
  (apply (lambda (x y) (+ x y)) a b nil) -> (+ a b))
