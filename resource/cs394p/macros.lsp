; macros.lsp               G. Novak                         06 Sep 90

; A few useful macros for Lisp

; e.g. (subset #'numberp '(a 1 b 2 3 c 4 d)) = (1 2 3 4)
(defmacro subset (fn lst)
  (let ((x (gensym)))
    `(mapcan #'(lambda (,x) (if (funcall ,fn ,x) (cons ,x nil))) ,lst)))

(defmacro while (test &rest forms)
  `(loop (unless ,test (return)) ,@forms) )

