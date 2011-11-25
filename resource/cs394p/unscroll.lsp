; unscroll.lsp                  Gordon S. Novak Jr.             31 Jan 96

; Copyright (c) 1996 The University of Texas at Austin.  All rights reserved.


(in-package :user)

; unscroll code in a loop: (dotimes (var n) code)
; (unscroll '(dotimes (i 3) (setf (aref x i) (aref y i))))
; (unscroll '(dotimes (j 5) (setq sum (+ sum j))))
(defun unscroll (docode)
  (let ((var (car (cadr docode)))
	(n   (cadr (cadr docode)))
	(code (caddr docode))
	result)
    (if (and (integerp n)
	     (< n 20))
	(cons 'progn
	      (dotimes (i n (nreverse result))
		(push (subst i var code)
		      result) ) )
        docode) ))
