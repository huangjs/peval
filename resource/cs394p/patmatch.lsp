; patmatch.lsp           Gordon S. Novak Jr.          ; 09 Aug 06

; Copyright (c) 2006  Gordon S. Novak Jr. and The University of Texas at Austin

; 03 Feb 03; 07 Jan 05; 31 Jan 05

; Pattern Matching and Transformation

; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 2 of the License, or
; (at your option) any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, write to the Free Software
; Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

; These programs transform an input according to a pair of patterns:
; If the input matches the first (input) pattern,
; it is transformed according to the second (output) pattern.
; Variables in patterns are prefixed with a '?' character.
; Example:  ( (+ ?x (- ?x))  0 )
; This pair of patterns specifies that the sum of something (?x)
; and its negative should be transformed to 0:
; (transf '( (+ ?x (- ?x))  0 ) '(+ (sin x) (- (sin x))))  =>  0
; Note that "dot notation" can match a trailing list of items:
; (progn . ?s) will bind ?s to the list of statements in the progn.
; Transforms can have two additional components:
;   1. a test.  This test must be satisfied for the transformation
;      to be performed:
;      ( (* ?n (* ?m ?x)) (* (* ?n ?m) ?x) (and (numberp ?n) (numberp ?m)) )
;   2. additional variables.  Each such variable is a list,
;      (var value) where the value may be computed from the other
;      variable values:
;      ( (* ?n (* ?m ?x)) (* ?z ?x) (and (numberp ?n) (numberp ?m))
;                                   ( (?z (* ?n ?m)) ) )
;      will transform (* 3 (* 2 w)) into (* 6 W).

; Matching and substitution are inverses, as shown by the identities:
;   [assuming appropriate arguments]
; (matchid1 '(+ ?x ?y) '(+ a b))
(defun matchid1 (pattern instance)
  (equal (sublis (match pattern instance) pattern) instance))
; (matchid2 '(+ ?x ?y) '((?x . a) (?y . b)))
(defun matchid2 (pattern bindings)
  (set-equal (match pattern (sublis bindings pattern))
	     (cons '(t . t) bindings)))

; Match a pattern against an input.  Returns bindings, or nil if failure.
; This version suggested by Michael Bogomolny.
; (match '(- (+ ?x ?y) (+ ?z ?y))
;        '(- (+ (age tom) (age mary)) (+ (age bill) (age mary))))
;   = ((?Z AGE BILL) (?Y AGE MARY) (?X AGE TOM))
; '((t . t)) is a no-op binding to initialize bindings to non-nil.
(defun match (pat inp)  (matchb pat inp '((t . t))))
(defun matchb (pat inp bindings)
  (and bindings
       (if (consp pat)
	   (and (consp inp)
		(matchb (cdr pat) 
			(cdr inp)
			(matchb (car pat)
				(car inp) bindings)))
	   (if (varp pat)
	       (let ((binding (assoc pat bindings)))
		 (if binding
		     (and (equal inp (cdr binding))
			  bindings)
		     (cons (cons pat inp) bindings)))
	       (and (eql pat inp) bindings)) ) ) )

; Test for variables, indicated by ? prefix, e.g. ?x
(defun varp (v) (and (symbolp v) (char= #\? (char (symbol-name v) 0))) )

; Transform an input given a rewrite rule (pattern output test vars)
;   where:  pattern = input pattern, e.g.  (+ ?x ?n)
;           output  = output pattern, e.g. (+ ?n ?x)
;           test    = predicate, e.g.      (numberp ?n)
;           vars    = new variables, e.g.  ((?z (append ?x ?y))
;                      ((var value) ...)    (?v (gentemp "V")))
; test and vars sections are optional.
; returns transformed input or 'match-failure
; (transf '((- (+ ?x ?y) (+ ?z ?y))
;              (- ?x ?z))
;         '(- (+ (age tom) (age mary)) (+ (age bill) (age mary))))
;        = (- (AGE TOM) (AGE BILL))
(defun transf (rule input)
  (let ((bindings (match (first rule) input))
	(test (third rule)))
    (if (and bindings
	     (or (null test)
		 (eval (sublisq	bindings test))))
	(progn
	  (dolist (var (fourth rule))
	    (push (cons (car var)
			(eval (sublisq bindings (cadr var))))
		  bindings) )	  
	  (sublis bindings (second rule)))
        'match-failure) ))

; sublis, quoting the second part of bindings so they can be evaluated
(defun sublisq (bindings form)
  (sublis (mapcar #'(lambda (x) (cons (car x) (kwote (cdr x))))
		  bindings)
	  form) )

; quote something if it isn't constant.
(defun kwote (x)
  (if (constantp x)
      x
      (if (and (consp x) (eq (car x) 'unquote))
	  (cadr x)
	  (list 'quote x) ) ) )

(defun set-equal (x y) (and (subsetp x y :test #'equal)
			    (subsetp y x :test #'equal)))
