;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

;;;;;;
;;; test/match-simple-regexp

(def suite* (test/match-simple-regexp :in test))

(def function match-simple-regexp (expression text)
  "A very simple matcher that takes EXPRESSION as a sequence of alphanumeric characters, (), *, + and ? with the usual regular expression semantics. Returns the position in TEXT specifying the next character that was not matched by EXPRESSION, or NIL if there's no match at all."
  (let ((text-length (length text)))
    (labels ((recurse (expression text position)
               (if (stringp expression)
                   (loop
                     :with expression-length = (length expression)
                     :for expression-index :from 0 :below expression-length
                     :for text-index :from position
                     :unless (and (< text-index text-length)
                                  (char= (elt expression expression-index)
                                         (elt text text-index)))
                     :do (return nil)
                     :finally (return expression-index))
                   (let ((head (car expression)))
                     (if (symbolp head)
                         (ecase head
                           (? #+nil (assert (not (cddr expression))) ;; TODO:
                              (or (recurse (second expression) text position)
                                  0))
                           (* #+nil (assert (not (cddr expression))) ;; TODO:
                              (loop
                                :with sum = 0
                                :for length = (recurse (second expression) text position)
                                :do (if length
                                        (progn
                                          (incf position length)
                                          (incf sum length))
                                        (return sum)))))
                         (loop
                           :with sum = 0
                           :for element :in expression
                           :for length = (recurse element text position)
                           :do (if length
                                   (progn
                                     (incf position length)
                                     (incf sum length))
                                   (return nil))
                           :finally (return sum)))))))
      (recurse expression text 0))))

(def test test/match-simple-regexp/correctness ()
  (bind ((expression '("a" (* "ab") "b")))
    (is (not (match-simple-regexp expression "")))
    (is (not (match-simple-regexp expression "a")))
    (is (not (match-simple-regexp expression "aa")))
    (is (not (match-simple-regexp expression "b")))
    (is (not (match-simple-regexp expression "bb")))
    (is (= 2 (match-simple-regexp expression "ab")))
    (is (= 4 (match-simple-regexp expression "aabb")))
    (is (= 6 (match-simple-regexp expression "aababb")))
    (is (= 2 (match-simple-regexp expression "abab")))))

(def function partial-eval/match-simple-regexp (form)
  (partial-eval form
                :eval-functions '(elt)
                :inline-functions '(match-simple-regexp)))

(def test test/match-simple-regexp/partial-eval ()
  (is (equal (partial-eval/match-simple-regexp '(match-simple-regexp "a" text))
             '(block nil
               (if (if (< 0 (length text))
                       (char= #\a (elt text 0)))
                   nil
                   (return nil))
               (return 1))))
  (is (equal (replace-uninterned-symbols (partial-eval/match-simple-regexp '(match-simple-regexp "ab" text)))
             (replace-uninterned-symbols `(block nil
                                            (let* ((#:G2048 (length text)))
                                              (if (if (< 0 #:G2048)
                                                      (char= #\a (elt text 0)))
                                                  nil
                                                  (return nil))
                                              (if (if (< 1 #:G2048)
                                                      (char= #\b (elt text 1)))
                                                  nil
                                                  (return nil))
                                              (return 2))))))
  (is (equal (replace-uninterned-symbols (partial-eval/match-simple-regexp '(match-simple-regexp '(? "a") text)))
             (replace-uninterned-symbols '(let* ((#:g2097 (elt text 0))
                                                 (#:g2096 (char= #\a #:g2097))
                                                 (#:g2095 (length text))
                                                 (#:g2094 (< 0 #:g2095))
                                                 (#:g2093
                                                  (if #:g2094
                                                      #:g2096))
                                                 (#:g2092
                                                  (block nil
                                                    (if #:g2093
                                                        nil
                                                        (return nil))
                                                    (return 1))))
                                           (if #:g2092
                                               #:g2092
                                               0)))))
  #+nil
  (is (equal (replace-uninterned-symbols (partial-eval/match-simple-regexp '(match-simple-regexp '(* "a") text)))
             (replace-uninterned-symbols nil)))
  #+nil
  (is (equal (replace-uninterned-symbols (partial-eval/match-simple-regexp '(match-simple-regexp '("a" (* "ab") "b") text)))
             (replace-uninterned-symbols nil))))
