; match.lsp           Gordon S. Novak Jr.              09 Feb 01

; Copyright (c) 2001  Gordon S. Novak Jr. and The University of Texas at Austin

; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 2 of the License, or
; (at your option) any later version.
;
; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License (file gpl.text) for more details.
;
; You should have received a copy of the GNU General Public License
; along with this program; if not, write to the Free Software
; Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

; Match a pattern against an input.  Returns bindings, or nil if failure.
; This version suggested by Michael Bogomolny.
; (match '(- (+ ?x ?y) (+ ?z ?y))
;        '(- (+ (age tom) (age mary)) (+ (age bill) (age mary))))
;   = ((?Z AGE BILL) (?Y AGE MARY) (?X AGE TOM))
(defun match (pat inp)  (matchb pat inp '((t . t))))
(defun matchb (pat inp bindings)
  (if (consp pat)
      (and (consp inp)
	   (let ((new (matchb (car pat) (car inp) bindings)))
	     (and new (matchb (cdr pat) (cdr inp) new))))
      (if (varp pat)
	  (let ((binding (assoc pat bindings)))
	    (if binding
		(and (equal inp (cdr binding))
		     bindings)
	        (cons (cons pat inp)
		      (if (eq (caar bindings) t)
			  nil
			  bindings))))
	  (and (eql pat inp) bindings)) ) )

; Test for variables, indicated by ? prefix, e.g. ?x
(defun varp (v)     ; Test for vars, e.g. ?x
  (and (symbolp v) (char= #\? (char (symbol-name v) 0))) )

; Transform an input given a pattern list (pattern output test vars)
;   where:  pattern = input pattern, e.g.  (+ ?x ?n)
;           output  = output pattern, e.g. (+ ?n ?x)
;           test    = predicate, e.g.      (numberp ?n)
;           vars    = new variables, e.g.  ((?z (append ?x ?y))
;                      ((var value) ...)    (?v (gentemp "V")))
; returns transformed input or 'match-failure
; (transf '((- (+ ?x ?y) (+ ?z ?y))
;              (- ?x ?z))
;         '(- (+ (age tom) (age mary)) (+ (age bill) (age mary))))
;        = (- (AGE TOM) (AGE BILL))
(defun transf (pattern-list input)
  (let ((bindings (match (first pattern-list) input))
	(test (third pattern-list)))
    (if (and bindings
	     (or (null test)
		 (eval (sublisq	bindings test))))
	(progn
	  (dolist (var (fourth pattern-list))
	    (push (cons (car var)
			(eval (sublisq bindings (cadr var))))
		  bindings) )	  
	  (sublis bindings (second pattern-list)))
        'match-failure) ))

; sublis, quoting the second part of bindings so they can be evaluated
(defun sublisq (bindings form)
  (sublis (mapcar #'(lambda (x) (cons (car x) (kwote (cdr x))))
		  bindings)
	  form) )

; quote something if it isn't constant.
(defun kwote (x) (if (constantp x) x (list 'quote x) ) )
