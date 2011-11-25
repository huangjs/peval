; ooptime.lsp             Gordon S. Novak Jr.              28 Feb 96
;  Object-oriented Programming Exercise        Univ. of Texas at Austin

(in-package :user)

; Load oopexa.lsp first

(defun t1 (x y n)
  (let (v)
    (setq v (make-instance 'xyvector))
    (dotimes (i n) (sendm v 'move-by x y))
    v))

(defun move-v (v x y)
  (incf (first v) x)
  (incf (second v) y)
  v)

(defun t2 (x y n)
  (let (v)
    (setq v (list 0 0))
    (dotimes (i n) (move-v v x y))
    v))

(defun t3 (x y n)
  (let (v)
    (setq v (list 0 0))
    (dotimes (i n)
      (incf (first v) x)
      (incf (second v) y) )
    v))

(defun t4 (x y n)
  (let (u v)
    (setq u (make-instance 'xyvector))
    (setq v (make-instance 'xyvector :x x :y y))
    (dotimes (i n) (sendm u '+ v))
    v))
