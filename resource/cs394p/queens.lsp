; queens.lsp           Gordon S. Novak Jr.        01 May 96; 01 Apr 05

; Copyright (c) 1996 Gordon S. Novak Jr. and The University of Texas at Austin.

; (queens 8 8)

(defun queens (n k)
  (if (<= n 0)
      (list '())
      (let (result)
	(dotimes (i k)
	  (dolist (b (queens (1- n) k))
	    (if (safe i b)
		(push (cons i b) result)) ) )
	result) ) )

; Is queen q safe on partial board b
(defun safe (q b)
  (let ((okay t))
    (dotimes (i (length b) okay)
      (if (checks q b i) (setq okay nil))) ))

; Does queen q check the queen on b at position i
(defun checks (q b i)
  (or (= q (nth i b))
      (= (abs (- q (nth i b))) (1+ i)) ) )
