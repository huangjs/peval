;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; test/integer-power

(def suite* (test/integer-power :in test))

;;;;;;
;;; integer-power/looop

(def suite* (test/integer-power/loop :in test/integer-power))

(def function integer-power/loop (base exponent)
  "A simple power function with non-negative integer EXPONENT."
  (loop
     :with result = 1
     :repeat exponent
     :do (setf result (* base result))
     :finally (return result)))

(def test test/integer-power/loop/correctness ()
  (is (= 1 (integer-power/loop 10 0)))
  (is (= 10 (integer-power/loop 10 1)))
  (is (= 100 (integer-power/loop 10 2)))
  (is (= 0 (integer-power/loop 0 1)))
  (is (= 0 (integer-power/loop 0 10))))

(def function partial-eval/integer-power/loop (form)
  (partial-eval form
                :eval-functions '(ceiling)
                :inline-functions '(integer-power/loop)))

(def test test/integer-power/loop/partial-eval ()
  (is (equal (partial-eval/integer-power/loop '(integer-power/loop base 0))
             1))
  (is (equal (partial-eval/integer-power/loop '(integer-power/loop base 1))
             'base))
  (is (equal (partial-eval/integer-power/loop '(integer-power/loop base 4))
             '(* base (* base (* base base))))))

;;;;;;
;;; integer-power/recursive

(def suite* (test/integer-power/recursive :in test/integer-power))

(def function integer-power/recursive (base exponent)
  (cond ((zerop exponent)
         1)
        ((evenp exponent)
         (let ((result (integer-power/recursive base (/ exponent 2))))
           (* result result)))
        (t
         (* base (integer-power/recursive base (1- exponent))))))

(def test test/integer-power/recursive/correctness ()
  (is (= 1 (integer-power/recursive 10 0)))
  (is (= 10 (integer-power/recursive 10 1)))
  (is (= 100 (integer-power/recursive 10 2)))
  (is (= 0 (integer-power/recursive 0 1)))
  (is (= 0 (integer-power/recursive 0 10))))

(def function partial-eval/integer-power/recursive (form)
  (partial-eval form :inline-functions '(integer-power/recursive)))

(def test test/integer-power/recursive/partial-eval ()
  (is (equal (partial-eval/integer-power/recursive '(integer-power/recursive base 0))
             1))
  (is (equal (partial-eval/integer-power/recursive '(integer-power/recursive base 1))
             'base))
  (is (equal (partial-eval/integer-power/recursive '(integer-power/recursive base 3))
             '(* base (* base base))))
  (is (equal (replace-uninterned-symbols (partial-eval/integer-power/recursive '(integer-power/recursive base 7)))
             (replace-uninterned-symbols '(* base
                                           (let* ((#:g3215 (* base base)) (#:g3214 (* base #:g3215)))
                                             (* #:g3214 #:g3214)))))))
