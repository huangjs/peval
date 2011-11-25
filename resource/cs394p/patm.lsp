; patm.lsp             Gordon S. Novak Jr.              ; 31 Jan 05

; Copyright (c) 2005 Gordon S. Novak Jr. and The University of Texas at Austin

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

; 01 Mar 94; 28 Apr 98; 11 Feb 99; 09 Feb 01; 28 Jan 05

; Pattern matching functions, derived from the GLISP pattern matcher.

; (load "patmatch.lsp")     ; load patterm matcher first

(defvar *compile-time-constants* nil)

; While loop, (while test ...)
(defmacro while (test &rest forms)
  `(loop (unless ,test (return)) ,@forms) )

; Subset of a list for which fn is true, e.g. (subset #'numberp '(a 1 b 3 c))
(defmacro subset (fn lst)
  (let ((x (gensym)))
    `(mapcan #'(lambda (,x) (if (funcall ,fn ,x) (cons ,x nil))) ,lst)))

; 16 Aug 89; 09 Nov 89; 14 Nov 89; 30 Apr 91; 11 Mar 92; 26 Jan 93
; 04 Feb 93; 13 Jan 94; 07 Feb 01
; Try to match input against optimization patterns.
; If a match is found, the transformed is returned with substitutions.
; patwd is the name of a kind of transformation patterns; patterns are
; stored under the patwd property of the top operator of the pattern.
(defun ptmatch (inp patwd)
  (let (patterns pattern tmp (res 'match-failure))
    (if (setq tmp (assoc inp *compile-time-constants* :test #'equal))
	(cadr tmp)
	(if (and (consp inp)
		 (symbolp (car inp))      ; patterns are indexed
		 (setq patterns (get (car inp) patwd)))    ; by function name.
	    (progn
	      (while (and patterns (eq res 'match-failure))
		(setq res (transf (pop patterns) inp)) )
	      (if (eq res 'match-failure) inp res))
	    inp) ) ))

; 4-May-89; 07 Feb 91; 18 Nov 91; 25 Feb 92; 21 Apr 92; 26 Jan 93; 01 Feb 93
; 13 Jan 94
; Store rewriting patterns for use in optimization etc.
; Note that order of pattern definitions must be maintained;
; otherwise, some patterns could cause an infinite loop.
(defun defpatterns (patwd l)
  (dolist (pat l)
    (unless (member pat (get (caar pat) patwd) :test #'equal)
      (setf (get (caar pat) patwd)
	    (nconc (get (caar pat) patwd) (list pat)) ) ) ) )

; Get rid of old patterns
(defun resetpats (patwd l)
  (dolist (pat l)
    (if (consp (car pat))
	(setf (get (caar pat) patwd) nil)) ) )

; Get rid of old patterns and then define new ones.
(defun redefpatterns (patwd l)
  (resetpats patwd l)
  (defpatterns patwd l))

; 02 Feb 93
; Define compile-time constants.  Input is ( (pattern  constant) ...)
(defun defctconstants (l)
  (dolist (pair l) (pushnew pair *compile-time-constants*)) )

; 04 Feb 93
(defun redefctconstants (l)
  (setq *compile-time-constants* nil)
  (defctconstants l))

; 26 Jan 93; 27 Jan 93; 31 Jan 93; 04 Feb 93; 13 Jan 94; 24 Feb 94; 01 Mar 94
; 07 Feb 01; 28 Jan 05
; Transform an input x using patterns of kind patwd
(defun trans (x patwd)
  (let (xp tail tmp)
    (if (consp x)                   ; if certain fns are applied to constants
	(if (and (not (member (first x)
			      '(print princ terpri format random)))
		 (rest x)
		 (symbolp (first x))
		 (fboundp (first x))
		 (every #'constantp (rest x)))
	    (kwote (eval x))                ; evaluate at translation time
	    (progn
	      (setq tail (pttransl (rest x) patwd))   ; translate args first
	      (if (symbolp (first x))               ; avoid conses if no change
		  (setq xp (ptmatch (if (eq tail (rest x))
					x
					(cons (first x) tail))
				    patwd))
		  (progn (setq tmp (trans (first x) patwd))
			 (setq xp (if (and (eq tail (rest x))
					   (eql tmp (first x)))
				      x
				      (cons tmp tail)))))
	      (if (eq x xp)
		  x
		  (trans xp patwd)) ))            ; if it changed, hit it again
	(if (and (symbolp x)
		 (setq tmp (assoc x *compile-time-constants*)))
	    (cadr tmp)
	    x)) ))

; 04 Feb 93; 30 Jan 05
; Optimize code of a defined function
(defun fnopt (fn &optional newfn newargs)
  (let (def)
    (setq def (trans (symbol-function fn) 'opt))
    (if newfn (eval (cons 'defun (cons newfn (cons newargs (cdddr def))))))
    (cons 'defun (cons (or newfn fn) (cddr def)))))

; 26 Jan 93; 11 Feb 99
; Translate a list of arguments.  Avoids conses if no changes are made.
(defun pttransl (l patwd)
  (let (new tail)
    (if (consp l)
	(progn (setq new (trans (first l) patwd))
	       (setq tail (pttransl (rest l) patwd))
	       (if (or (not (eq tail (rest l)))
		       (not (eq new (first l))))
		   (cons new tail)
		   l))
        l) ))

; 04 Feb 93
; Translate a Lisp function to C
(defun cprfn (fn)
  (cpr (trans (cons 'defun (cdr (symbol-function fn))) 'lisptoc)) )

; 29 Jan 93; 31 Jan 93; 02 Feb 93; 13 Jan 94
; Print stuff out in C form.
; Strings are simply printed, without quotation marks.
; #\Return causes newline and spaces to current tab setting.
; #\Tab causes a new tab setting to be made, adding to the current tab.
; Lisp code is printed in C functional form, e.g. (SIN X) becomes sin(x).
(defun cpr (item &optional tabs)
  (let (newtabs)
    (if (stringp item)
	(princ item)
	(if (characterp item)
	    (if (char= item #\Return)
		(progn (terpri)
		       (if tabs (spaces tabs)))
		(princ item))
	    (if (symbolp item)
		(princ (string-downcase (symbol-name item)))
		(if (consp item)
		    (if (symbolp (first item))
			(progn (cpr (first item))
			       (princ "(")
			       (mapl #'(lambda (z)
					 (if (not (eq z (rest item)))
					     (princ ", "))
					 (cpr (car z)))
				       (rest item))
			       (princ ")"))			     
			(dolist (z item)
			  (if (and (characterp z) (char= z #\Tab))
			      (setq newtabs (+ (or tabs 0) 2))
			      (cpr z (or newtabs tabs)) )))
		    (princ item))))) ))

; Print n spaces
(defun spaces (n) (dotimes (i n) (princ " ")))
