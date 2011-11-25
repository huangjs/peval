; pats.lsp             Gordon S. Novak Jr.             23 Jan 05

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

; 07 Feb 01

; Optimization patterns

(redefpatterns 'opt
  '( ((= ?x 0)                  (zerop ?x))
     ((+ ?x ?n)                 (+ ?n ?x)   (numberp ?n))   ; canonical form
     ((* ?x ?n)                 (* ?n ?x)   (numberp ?n))
     ((+ 0 ?x)                  ?x)
     ((+ (+ ?n ?x) (+ ?m ?y))   (+ (+ ?n ?m) (+ ?x ?y))
                                            (and (numberp ?m) (numberp ?n)))
     ((if ?p (progn . ?z))      (when ?p . ?z))
     ((if t ?p ?q)              ?p)
     ((if nil ?p ?q)            ?q)
     ((intersection (subset (function (lambda (?x) ?p)) ?s)
		    (subset (function (lambda (?y) ?q)) ?s))
        (subset (function (lambda (?x) (and ?p ?qq))) ?s)
	nil
        ((?qq (subst ?x ?y ?q))) ) ; where ?qq is ?q with ?y replaced by ?x
     ((sqrt (* ?n ?x))           (* (sqrt ?n) (sqrt ?x))
                                   (and (numberp ?n) (> ?n 0)) )
     ((= (* ?n ?x) (* ?n ?y))    (= ?x ?y) (and (numberp ?n) (/= ?n 0)))
     ((= (* ?n ?x) (* ?n ?y))    t         (and (numberp ?n) (= ?n 0)))
     ((progn nil . ?s)           (progn . ?s))
     ((progn ?x (progn . ?s))    (progn ?x . ?s))
     ((progn (progn . ?u) . ?v)  (progn . ?w)   t  ((?w (append ?u ?v))))
   ) ) ; defpatterns

; Some examples to try:
; (trans '(= (car foo) 0) 'opt)
; (trans '(+ foo 3) 'opt)
; (trans '(+ (+ foo 3) (+ fum 7)) 'opt)
; (trans '(if (zerop bar) (progn (print bar) (setq baz (1+ baz)))) 'opt)
; (trans '(intersection (subset #'(lambda (w) (richp w)) professors)
;                       (subset #'(lambda (v) (famousp v)) professors))
;        'opt)
; (trans '(sqrt (* 7 x)) 'opt)
; (trans '(sqrt (* -7 x)) 'opt)
; (trans '(if (> 7 3) (print 'yes) (print 'ouch)) 'opt)
; (trans '(+ x (- 3 (if (> 3 4) 7 3))) 'opt)
; (trans '(= (* 7 x) (* y 7)) 'opt)
; (trans '(= (* 0 x) (* y 0)) 'opt)

; 29 Jan 93; 07 Feb 01
;
; Patterns to expand high-level loop operators and specialize them
; for various data structure implementations.
; $ variables are replaced by gensym variables.
(redefpatterns 'loop
  '( ((sum ?set)      (make-loop ?set ?item (?total)
				 (setq ?total 0)
				 (incf ?total ?item) ?total)
                      t ((?item (gentemp "ITEM"))
			 (?total (gentemp "TOTAL"))) )
     ((average ?set)  (make-loop ?set ?item (?total ?n)
				 (progn (setq ?total 0)
					(setq ?n 0))
				 (progn (incf ?total ?item)
					(incf ?n))
				 (/ ?total ?n) )
                      t ((?item (gentemp "ITEM"))
			 (?total (gentemp "TOTAL"))
			 (?n (gentemp "N"))) ) ) )

(redefpatterns 'list
  '( ((make-loop ?lst ?item ?vars ?init ?action ?result)
        (let (?ptr ?item . ?vars)
	  ?init
	  (setq ?ptr ?lst)
	  (while ?ptr
	    (setq ?item (first ?ptr))
	    (setq ?ptr (rest ?ptr))
	    ?action)
	  ?result)
	t ((?ptr (gentemp "PTR"))) ) ) )

(redefpatterns 'array
  '( ((make-loop ?arr ?item ?vars ?init ?action ?result)
        (let (?item ?n . ?vars)
	  ?init
	  (setq ?n (array-dimension ?arr 0))
	  (dotimes (?i ?n)
	    (setq ?item (aref ?arr ?i))
	    ?action)
	  ?result)
	t ((?i (gentemp "I"))
	   (?n (gentemp "N"))) ) ) )

; (trans (trans '(defun za (l) (sum l)) 'loop) 'list)
; (eval *)            ; eval the definition to define the function
; (za '(2 3 4 1 7))   ; see if it works
; (trans (trans '(defun zb (l) (sum l)) 'loop) 'array)
; (eval *)
; (setq myarr (make-array 4 :initial-contents '(1 2 3 4)))
; (zb myarr)
; (trans (trans '(defun zc (l) (average l)) 'loop) 'list)
; (eval *)
; (zc '(2 3 4 1 7))   ; see if it works
; (trans (trans '(defun zd (l) (average l)) 'loop) 'array)
; (eval *)
; (zd myarr)


; 03 Feb 93
;
; Patterns to convert Lisp code to C code
;
; Define output transformation patterns
(redefpatterns 'lisptoc
  '( ((aref ?x ?y)                ("" ?x "[" ?y "]"))
     ((incf ?x)                   ("++" ?x))
     ((+ ?x ?y)                   ("(" ?x " + " ?y ")"))
     ((= ?x ?y)                   ("(" ?x " == " ?y ")"))
     ((go ?x)                     ("goto " ?x))
     ((setq ?x ?y)                ("" ?x " = " ?y))
     ((setf ?x ?y)                ("" ?x " = " ?y))
     ((while ?p . ?s)             ("while ( " ?p " ) " #\Tab
                                      #\Return (progn . ?s)))
     ((return ?x)                 ("return " ?x))
     ((defun ?fn ?args . ?code)   ("" ?fn "(" (fn-args . ?args) ")" #\Tab
				      #\Return (progn . ?code)))
     ((fn-args)                   (""))
     ((fn-args ?x)                ("" ?x))
     ((fn-args ?x . ?rest)        ("" ?x ", " (fn-args . ?rest)))
     ((progn . ?code)             ("{" #\Tab #\Return (progn-contents . ?code)
				         #\Return "}"))
     ((progn-contents)            (""))
     ((progn-contents ?x)         ("" ?x ";"))
     ((progn-contents ?x . ?rest) ("" ?x ";" #\Return
				    (progn-contents . ?rest)))
 ))

; Simple cases can be tried individually:
; (cpr (trans '(aref x i) 'lisptoc))
; (cpr (trans '(aref x (incf i)) 'lisptoc))
; (cpr (trans '(setf (aref x (incf i)) (+ y z)) 'lisptoc))
; (cpr (trans '(defun foo (x y) (incf y) (setq x (+ x y))) 'lisptoc))
;
; The following example will need some additional work:
; (cpr (trans (trans (trans '(defun zb (l) (sum l)) 'loop) 'array) 'lisptoc))
