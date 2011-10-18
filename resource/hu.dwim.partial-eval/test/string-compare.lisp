;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; test/string-compare

(def suite* (test/string-compare :in test))

;;;;;;
;;; test/string-compare/loop

(def suite* (test/string-compare/loop :in test/string-compare))

(def function string-compare/loop (text-1 text-2)
  "A simple text comparison."
  (and (= (length text-1)
          (length text-2))
       (loop
          :for char-1 :across text-1
          :for char-2 :across text-2
          :do (unless (char= char-1 char-2)
                (return nil))
          :finally (return t))))

(def test test/string-compare/loop/correctness ()
  (is (string-compare/loop "hello" "hello"))
  (is (not (string-compare/loop "hello" "he")))
  (is (not (string-compare/loop "he" "hello")))
  (is (not (string-compare/loop "" "hello")))
  (is (not (string-compare/loop "hello" ""))))

(def layer string-compare/loop-layer (standard-partial-eval-layer)
  ())

(def layered-method eval-function-call? :in string-compare/loop-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator '(aref))))

(def layered-method inline-function-call? :in string-compare/loop-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator '(string-compare/loop))))

(def layered-method partial-eval-form :in string-compare/loop-layer ((ast free-application-form))
  (aif (and (eq 'length (operator-of ast))
            (find (unwalk-form (make-instance 'free-application-form
                                              :operator 'length
                                              :arguments (mapcar #'partial-eval-form (arguments-of ast))))
                  (hu.dwim.partial-eval::assumptions-of hu.dwim.partial-eval::*environment*) :test (lambda (a b) (member a b :test #'equal))))
       (make-instance 'constant-form :value (second it))
       (call-next-layered-method)))

(def test test/string-compare/loop/partial-eval ()
  (with-active-layers (string-compare/loop-layer)
    (is (equal t (partial-eval '(string-compare/loop "he" "he"))))
    (is (equal nil (partial-eval '(string-compare/loop "he" "hello"))))
    (is (equal (partial-eval '(string-compare/loop "" text))
               '(if (= 0 (length text))
                    t)))
    (is (equal (partial-eval '(string-compare/loop "he" text))
               '(if (= 2 (length text))
                 (block nil
                   (if (char= #\h (aref text 0))
                       nil
                       (return nil))
                   (if (char= #\e (aref text 1))
                       nil
                       (return nil))
                   (return t)))))))

;;;;;;
;;; string-compare/recursion

(def suite* (test/string-compare/recursion :in test/string-compare))

(def function string-compare/recursion (text-1 text-2)
  "A simple text comparison."
  (bind ((l (length text-1))
         (i 0))
    (labels ((recurse (text-1 text-2)
               (if (= l i)
                   t
                   (when (char= (aref text-1 i)
                                (aref text-2 i))
                     (incf i)
                     (recurse text-1 text-2)))))
      (and (= l (length text-2))
           (recurse text-1 text-2)))))

(def test test/string-compare/recursion/correctness ()
  (is (string-compare/recursion "hello" "hello"))
  (is (not (string-compare/recursion "hello" "he")))
  (is (not (string-compare/recursion "he" "hello")))
  (is (not (string-compare/recursion "" "hello")))
  (is (not (string-compare/recursion "hello" ""))))

(def layer string-compare/recursion-layer (standard-partial-eval-layer)
  ())

(def layered-method eval-function-call? :in string-compare/recursion-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator '(aref))))

(def layered-method inline-function-call? :in string-compare/recursion-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator '(string-compare/recursion))))

(def test test/string-compare/recursion/partial-eval ()
  (with-active-layers (string-compare/recursion-layer)
    (is (equal (partial-eval '(string-compare/recursion "" text))
               '(if (= 0 (length text))
                    t)))
    (is (equal (partial-eval '(string-compare/recursion "he" text))
               '(if (= 2 (length text))
                    (if (char= #\h (aref text 0))
                        (if (char= #\e (aref text 1))
                            t)))))))
