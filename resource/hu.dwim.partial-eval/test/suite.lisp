;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval.test)

(def suite* (test :in root-suite))

(def definer partial-eval-test (name arguments &body form-result-pairs)
  `(def test ,name ,arguments
     ,@(iter (for form-result-pair :on form-result-pairs :by 'cdddr)
             (assert (eq '-> (second form-result-pair)))
             (collect `(is (equal (partial-eval ',(first form-result-pair))
                                  ',(third form-result-pair)))))))

(def function replace-uninterned-symbols (form)
  (bind ((index 0))
    (labels ((recurse (form)
               (cond ((consp form)
                      (cons (recurse (car form))
                            (recurse (cdr form))))
                     ((and (symbolp form)
                           (not (symbol-package form)))
                      (incf index))
                     (t form))))
      (recurse form))))
