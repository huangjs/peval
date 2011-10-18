;;; live-dead analysis. A compiler technique to eliminate
;;; unnecessary temporary variables.

#| 
 LDA and its driver LDA-let is a short but rather subtle program.
example:
(lda-let
 '(LET* ((W0 (EXPT X 2))
       (W1 (+ C (* A W0)))
       (W2 (+ D (* B W0)))
       (W3 (+ (* W0 W1) E))
       (W4 (+ (* W0 W2) F)))
   (+ W3 (* W4 X))))
results in
(LET (W2 W1 W0)
  (SETF W0 (EXPT X 2))
  (SETF W1 (+ C (* A W0)))
  (SETF W2 (+ D (* B W0)))
  (SETF W1 (+ (* W0 W1) E))
  (SETF W0 (+ (* W0 W2) F))
  (+ W1 (* W0 X)))

|#

(defun lda(k)
  (cond((null k)nil)
       (t (lda1 (caar k)(lda (cdr k)))	  k)))

(defun lda1(n j)
  (cond ((null (cdr j) ) nil)
	((free-of n (cdr j))(nsubst n (caar j) (cdr j))
			    (rplaca (car j) n) )
	(t (lda1 n (cdr j)))))

(defun free-of (s tree);; true if tree does not have a symbol s in it
  (cond ((eq s tree) nil)		; contains s, not free of s
	((atom tree) t)			;tree is nil or an atom not s
	(t (and (free-of s (car tree))
		(free-of s (cdr tree))))))

;; run on result of analyze-pipe

(defun lda-let(r)
  (let ((letlist (cadr r))
	(res (cddr r))
	(params nil))
    (setf letlist (lda (append letlist (list(list (gensym) res)))))
    (setf letlist (nreverse letlist))
    (setf res (cadar letlist))
    (setf letlist (nreverse (cdr letlist)))
    (setf params (remove-duplicates (mapcar #'car letlist) :from-end t))
    (if (and (null params)(null (cdr res))) (car res)
    `(let ,params
       ,@(mapcar #'(lambda(r)(cons 'setf r)) letlist) ,@res))))
       


#|
;test for lda
(setf test2 '((t0 (+ a b)) (t1 (+ c t0))  (t2 (+ t1 t0)) (t3 (+ t1 t0))))
;test for lda-let2
(setf test3 '(let* ((t0 (+ a b)) (t1 (+ c t0))
		    (t2 (+ t1 t0)) (t3 (+ t1 t0)))
	      (+ t0 t1)))

|#



