; examples for prolog of Paul Graham's On Lisp      ; 09 Apr 05

; 23 Mar 05

; Note that the later Prolog version requires quoting constants

; (load "onlisp.lisp")
(defun norules () (setq *rules* nil))   ; clear the rule set
(norules)

; define a shorter name for with-inference
(or (fboundp 'inf)
    (setf (symbol-function 'inf) (symbol-function 'with-inference)))

; Examples from Paul Graham's book:

(<- (painter 'reubens))
(<- (painter ?x) (hungry ?x) (smells-of ?x 'turpentine))
(<- (hungry ?x) (or (gaunt ?x) (eats-ravenously ?x)))
(<- (gaunt 'raoul))
(<- (smells-of 'raoul 'turpentine))
; (inf (painter ?x) (print ?x))

(<- (append nil ?xs ?xs))
(<- (append (?x . ?xs) ?ys (?x . ?zs))
    (append ?xs ?ys ?zs))
; (inf (append ?x '(c d) '(a b c d))  (format t "Left: ~A~%" ?x))
; (inf (append '(a b) ?x '(a b c d))  (format t "Right: ~A~%" ?x))
; (inf (append '(a b) '(c d) ?x)      (format t "Whole: ~A~%" ?x))

(<- (factorial 0 1))
(<- (factorial ?n ?f)
    (lisp (> ?n 0))
    (is ?n1 (- ?n 1))
    (factorial ?n1 ?f1)
    (is ?f (* ?n ?f1)))
; (inf (factorial 3 ?x) (print ?x))
