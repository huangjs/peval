;  lispinlisp.lsp               Gordon S. Novak Jr.          31 Oct 90

; Copyright (c) 1990 by Gordon S. Novak Jr.

(in-package :user)

; Simple Lisp interpreter written in Lisp.
; This version allows regular Lisp code to run by falling back on Lisp
; for system functions not defined in the M- system.

; Evaluate expression S in environment ENV
(defun m-eval (s env)
  (let (def)
    (cond ((or (eq s t) (eq s nil)
               (numberp s) (stringp s)) s)
          ((symbolp s) (m-value s env))
          ((eq (first s) 'quote) (second s))
          ((eq (first s) 'if) (m-if s env))
          ((eq (first s) 'let) (m-let s env))
          ((eq (first s) 'setq)
            (m-setq s env))
          ((setq def (get (first s) 'expr))
            (m-apply def
              (mapcar
                #'(lambda (x) (m-eval x env))
                (cdr s))
              env))
          ((fboundp (first s))
            (apply (first s)
              (mapcar
                #'(lambda (x) (m-eval x env))
                (cdr s))))
          (t (error "Undef fn" (first s))))))


(defun m-apply (function actualargs env)
  (if (eq (first function) 'lambda)
      (m-progn (cddr function)
               (m-bind
                 (second function)
                 actualargs
                 env)
               nil)
      (error "Illegal form" function)) )


; M-DEFUN is a macro to avoid quoting
(defmacro m-defun (&rest l) `(m-defun-expr (quote ,l)))
(defun m-defun-expr (l)
  (setf (get (first l) 'expr)
        (cons 'lambda (rest l))) )


; Get value of a variable relative to an environment.
; A binding list or execution environment is simply an association list
; in which each element is a CONS of a variable name and its value.
(defun m-value (var env)
  (let (pair)
    (if (setq pair (assoc var env))
        (cdr pair)
        (error "Unbound variable" var)) ))


; Bind actual arguments in a function call to formal args of the function
(defun m-bind (formalargs actualargs alist)
  (if formalargs
      (if actualargs
          (m-bind
            (rest formalargs)
            (rest actualargs)
            (cons (cons (first formalargs)
                        (first actualargs))
                  alist))
          (error "Not enough args"))
      (if actualargs
          (error "Too many args")
          alist) ))


; Evaluation of LET Special Form
(defun m-let (letform env)
  (m-progn
    (rest (rest letform))
    (m-let-bind (second letform)
                env
                env)
    nil) )


(defun m-let-bind (varlist env newenv)
  (let ((varspec (first varlist)))
    (if varlist
        (m-let-bind
          (rest varlist)
          env
          (cons 
            (if (consp varspec)
                (cons (first varspec)
                      (m-eval
                        (second varspec)
                        env))
                (cons varspec nil))
            newenv))
         newenv) ))


; Evaluation of IF special form
(defun m-if (ifform env)
  (if (m-eval (second ifform) env)
      (m-eval (third  ifform) env)
      (m-eval (fourth ifform) env)))


; Evaluation of SETQ special form
(defun m-setq (setqform env)
  (let ((pair (assoc (second setqform)
                     env)))
    (if pair
        (setf (cdr pair)
              (m-eval (third setqform)
                          env))
        (error "Unbound variable")) ) )


; Evaluation of PROGN special form
(defun m-progn (statements env lastval)
  (if statements 
      (m-progn
        (rest statements)
        env
        (m-eval
          (first statements)
          env))
      lastval) )


; Example for tracing: factorial
(m-defun factorial (n)
  (if (<= n 1)
      1
      (* n (factorial (1- n))) ) )

; To test, trace m-eval and m-apply and enter:
; (m-eval '(factorial 3) nil)
