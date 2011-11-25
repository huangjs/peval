; Similix run time system utilities
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------

(define **Similix-preprocessed-program** 'no-value)
(define **Similix-last-goal** 'no-value)
(define **Similix-last-btp** 'no-value)
(define **Similix-residual-program** 'no-value)
(define **Similix-cogen-loaded?** #f)
(define **Similix-current-compiler** 'no-value)
(define **Similix-current-compiler-loaded?** #f)

;-----------------------------------------------------------------------------

(define **Similix-dynamic-input-symbol** '***)
(define (set-dynamic-input-symbol sym)
  (set! **Similix-dynamic-input-symbol** sym))

;-----------------------------------------------------------------------------
; verbose

(define **Similix-verbose-prep** #t)
(define (verbose-prep-on) (set! **Similix-verbose-prep** #t))
(define (verbose-prep-off) (set! **Similix-verbose-prep** #f))

(define **Similix-verbose-spec** 0)
(define (verbose-spec n) (set! **Similix-verbose-spec** n))

;-----------------------------------------------------------------------------

; Front-ending a program:
(define front-end
  (lambda args
    (cond
      ((null? args)
       (display "Format of input to front-end:") (newline)
       (display "(front-end goal source-sim-file)")
       (newline))
      ((and (pair? args) (pair? (cdr args)) (null? (cddr args))
	    (symbol? (car args)) (string? (cadr args)))
       (_sim-front-end (car args) (_sim-normalize-sim-name (cadr args))))
      (else (_sim-error 'front-end "Incorrect argument syntax: ~s" args)))))
      

; Preprocessing a program:
(define preprocess!
  (lambda args
    (cond
      ((null? args)
       (display "Format of input to preprocess!:") (newline)
       (display "(preprocess! goal bt-pat source-sim-file)")
       (newline))
      ((and (pair? args) (pair? (cdr args)) (pair? (cddr args))
	    (null? (cdddr args))
	    (symbol? (car args)) (_sim-proper-list? (cadr args))
	    (string? (caddr args)))
       (let* ((goal-name (car args))
	      (btp (map
		    (lambda (b)
		      (cond
			((memv b (list 'd **Similix-dynamic-input-symbol**))
			 _sim-bt-dynamic-value)
			((equal? b 's) _sim-bt-static-value)
			((or (_sim-bt-static? b) (_sim-bt-dynamic? b)) b)
			(else (_sim-error
			       'preprocess!
			       "Unknown binding time input: ~s" b))))
		    (cadr args)))
	      (pgm (front-end goal-name (caddr args))))
	 (set! **Similix-udo**
	       (_sim-fully-lazy-assoc-udo-program
		(_sim-fetch-pgm-adt-file* pgm)))
	 
	 (_sim-bt-sp-eod-analyse! btp pgm)
	 
	 (display "oc ") (_sim-flush-output-port)
	 (_sim-oc-analyse! pgm)
	 
	 (display "rl ") (newline)
	 (_sim-rl-analyse! pgm)
	 
	 (set! **Similix-preprocessed-program** pgm)
	 (set! **Similix-last-goal** goal-name)
	 (set! **Similix-last-btp** btp)
	 
	 'done))
      (else (_sim-error 'preprocess! "Incorrect argument syntax: ~s" args)))))

;-----------------------------------------------------------------------------

(define (_sim-result suspended-exp n residual-file pp)
  (if (not (= n -1)) (display " (timing)"))
  (newline)
  (let ((result (if (= n -1)
		    (suspended-exp)
		    (ntimes suspended-exp n))))
    (cond ((null? residual-file) "nothing")
	  (pp (writelpp result residual-file))
	  (else (writel result residual-file)))
    result))

(define (_sim-n-rg-rf-pp-continue origin rest c)
  (let* ((old-rest rest)
	 (n
	  (if (null? rest)
	      -1
	      (let ((hd (car rest)))
		(if (number? hd)
		    (begin (set! rest (cdr rest)) (max hd 1))
		    -1))))
	 (residual-goal
	  (if (null? rest)
	      '()
	      (let ((hd (car rest)))
		(if (symbol? hd)
		    (begin (set! rest (cdr rest)) hd)
		    '()))))
	 (residual-file
	  (if (null? rest)
	      '()
	      (let ((hd (car rest)))
		(if (string? hd)
		    (let ((name (_sim-normalize-sim-name (car rest))))
		      (begin (set! rest (cdr rest)) name))
		    (_sim-error origin "Illegal arguments: ~s" old-rest)))))
	 (pp (and (not (null? rest))
		  (or (equal? (car rest) 'pp)
		      (_sim-error
		       origin
		       "Wrong expression: ~s -- symbol  pp  expected"
		       (car rest))))))
    (c n residual-goal residual-file pp)))

;-----------------------------------------------------------------------------

(define similix
  (lambda args
    (if (null? args)
	(begin
	  (display "Format of input to similix:") (newline)
	  (display
	   "(similix goal arg-pat source-sim-file [n] [resid-goal] [resid-sim-file ['pp]])")
	  (newline)  ; form1
	  (display "(similix arg-pat prep-pgm [n] [resid-goal] [resid-sim-file ['pp]])")
	  (newline)  ; form2
	  (display "(similix arg-pat [n] [resid-goal] [resid-sim-file ['pp]])")
	  (newline)) ; form3
	(let* ((arg1 (car args))
	       (form (cond
		      ((symbol? arg1)
		       'form1)
		      ((and (not (null? (cdr args)))
			    (pair? (cadr args)))
		       'form2)
		      (else
		       'form3)))
	       (goal (case form
		      ((form1) arg1)
		      ((form2) (car (cadr args)))
		      (else **Similix-last-goal**)))
	       (arg-pat (if (equal? form 'form1) (cadr args) arg1))
	       (pgm (case form
		      ((form1) (begin
				 (preprocess!
				  goal (_sim-arg->btp arg-pat) (caddr args))
				 (_sim-get-preprocessed-program)))
		      ((form2) (cadr (cadr args)))
		      (else (_sim-get-preprocessed-program)))))
	  (_sim-n-rg-rf-pp-continue
	   'similix
	   (case form
	     ((form1) (cdddr args))
	     ((form2) (cddr args))
	     (else (cdr args)))
	   (lambda (n residual-goal residual-file pp)
	     (display "specializing")
	     (let ((result (_sim-result
			    (lambda ()
			      (_sim-specialize
			       goal arg-pat pgm residual-goal))
			    n residual-file pp)))
	       (set! **Similix-residual-program** result)
	       (if (null? residual-file)
		   result
		   '()))))))))


; Conversion of a partially known list of arguments into a binding time pattern
(define _sim-arg->btp
  (lambda (arg-pat)
    ; Quick and dirty predicates:
    (let ((unknown? (lambda (arg)
		      (equal? arg **Similix-dynamic-input-symbol**))))
      (map (lambda (arg)
	     (if (unknown? arg)
		 _sim-bt-dynamic-value
		 _sim-bt-static-value))
	   arg-pat))))

;-----------------------------------------------------------------------------

(define cogen
  (lambda args
    (if (null? args)
	(begin
	  (display "Format of input to cogen:") (newline)
	  (display "(cogen goal bt-pat source-sim-file [n] [cmp-goal] [cmp-sim-file ['pp]])")
	  (newline)  ; form1
	  (display "(cogen prep-pgm [n] [cmp-goal] [cmp-sim-file ['pp]])")
	  (newline)  ; form2
	  (display "(cogen [n] [cmp-goal] [cmp-sim-file ['pp]]) --- at least one arg. needed")
	  (newline)  ; form3
	  )
	(let* ((arg1 (car args))
	       (form (cond
		      ((symbol? arg1) 'form1)
		      ((pair? arg1) 'form2)
		      (else 'form3)))
	       (goal (case form
		       ((form1) arg1)
		       ((form2) (car (car args)))
		       (else **Similix-last-goal**)))
	       (pgm (case form
		      ((form1) (begin
				 (preprocess! goal (cadr args) (caddr args))
				 (_sim-get-preprocessed-program)))
		      ((form2) (cadr (car args)))
		      (else (_sim-get-preprocessed-program)))))
	  (if (not **Similix-cogen-loaded?**)
	      (begin (display "loading compiler generator") (newline)
		     (load (string-append
			    **Similix-path** "cogen"
			    **Similix-compiled-sim-suffix**))
		     (set! **Similix-cogen-loaded?** #t)))
	  (_sim-n-rg-rf-pp-continue
	   'cogen
	   (case form
	     ((form1) (cdddr args))
	     ((form2) (cdr args))
	     (else args))
	   (lambda (n cmp-goal cmp-file pp)
	     (display "generating compiler")
	     (let ((result
		    (_sim-result
		     (lambda ()
		       (_sim-cogen
			(list goal
			      **Similix-dynamic-input-symbol**
			      pgm
			      **Similix-dynamic-input-symbol**)
			cmp-goal))
		     n cmp-file pp)))
	       (set! **Similix-current-compiler** result)
	       (set! **Similix-current-compiler-loaded?** #f)
	       '())))))))

(define comp
  (lambda args
    (if (null? args)
	(begin
	  (display "Format of input to comp:") (newline)
	  (display "(comp [cmp-goal] [cmp-file] arg-pat [n] [resid-goal] [resid-sim-file ['pp]])")
	  (newline))
	(let* ((cmp-goal
		(let ((hd (car args)))
		  (if (symbol? hd)
		      (begin (set! args (cdr args)) hd)
		      '_sim-specialize-0)))
	       (cmp-file
		(let ((hd (car args)))
		  (if (string? hd)
		      (begin (set! args (cdr args)) hd)
		      'current)))
	       (arg-pat (car args)))
	  (if (equal? cmp-file 'current)
	      (if (not **Similix-current-compiler-loaded?**)
		  (if (equal? **Similix-current-compiler** 'no-value)
		      (_sim-error 'comp "No current compiler available --- a file name must be specified")
		      (begin
			(display "loading current compiler") (newline)
			(_sim-load-program **Similix-current-compiler**))))
	      (begin
		(display "loading compiler ") (display cmp-file) (newline)
		(set! **Similix-current-compiler** (file->list cmp-file))
		(load cmp-file)))
	  (set! **Similix-current-compiler-loaded?** #t)
	  (_sim-n-rg-rf-pp-continue
	   'comp
	   (cdr args)
	   (lambda (n residual-goal residual-file pp)
	     (display "specializing")
	     (let ((result
		    (_sim-result
		     (lambda ()
		       ((if (equal? cmp-goal '_sim-specialize-0)
			    _sim-specialize-0
			    (_sim-get-top-level-value cmp-goal))
			arg-pat residual-goal))
		     n residual-file pp)))
	       (set! **Similix-residual-program** result)
	       (if (null? residual-file)
		   result
		   '()))))))))

;-----------------------------------------------------------------------------

(define (_sim-get-preprocessed-program)
  (let ((x **Similix-preprocessed-program**))
    (if (equal? x 'no-value)
	(_sim-error '_sim-get-preprocessed-program
		    "No preprocessed program available")
	x)))

;-----------------------------------------------------------------------------

(define (residual-program) **Similix-residual-program**)

(define (load-residual-program)
  (_sim-load-program **Similix-residual-program**))

(define (current-compiler) **Similix-current-compiler**)

(define (preprocessed-program)
  (list **Similix-last-goal** (_sim-get-preprocessed-program)))

;-----------------------------------------------------------------------------

(define (help)
  (display "(cogen)") (newline)
  (display "(comp)") (newline)
  (display "(compile-sim-file sim-file) (compile-and-load-sim-file sim-file)")
  (newline)
  (display "(current-compiler)") (newline)
  (display "(front-end)") (newline)
  (display "(load-residual-program)") (newline)
  (display "(loads sim-file)") (newline)
  (display "(loadt file) (loadt! file)") (newline)
  (display "(postunfold-on) (postunfold-off)") (newline)
  (display "(preprocess!)") (newline)
  (display "(preprocessed-program)") (newline)
  (display "(reset-similix)") (newline)
  (display "(residual-program)") (newline)
  (display "(set-dynamic-input-symbol sym)") (newline)
  (display "(show)") (newline)
  (display "(sim2scheme file)") (newline)
  (display "(similix)") (newline)
  (display "(standard-memoization-on) (standard-memoization-off)") (newline)
  (display "(unloadt file)") (newline)
  (display "(verbose-prep-on) (verbose-prep-off)") (newline)
  (display "(verbose-spec n)") (newline)

  (display "Utilities: (file->item file) (file->list file) (help)") (newline)
  (display "           (ntimes suspension n) (out e) (outnl e) (outpp e) (pp e) (size e)")
  (newline)
  (display "           (writef e file) (writefpp e file) (writel l file) (writelpp l file)")
  (newline))

;-----------------------------------------------------------------------------

(define (reset-similix)
  ; abssyn file:
  (set! **Similix-show-variable-index** #f)

  ; langext file:
  (set! **Similix-udo** '())
  (set! **Similix-udo-by-programs** '())
  (set! **Similix-udo-by-files** '())
  
  ; sp file:
  (set! **Similix-standard-memoization** #t)
  
  ; miscspec file:
  (set! **Similix-name-clash-list** '())
  (set! **Similix-resid-pgm** '())
  (set! **Similix-seenb4** '())
  (set! **Similix-proc-name-generator** '(0))
  (set! **Similix-var-name-generator** '(0))
  
  ; runtime file:
  (set! **Similix-preprocessed-program** 'no-value)
  (set! **Similix-last-goal** 'no-value)
  (set! **Similix-last-btp** 'no-value)
  (set! **Similix-residual-program** 'no-value)
  (set! **Similix-cogen-loaded?** #f)
  (set! **Similix-current-compiler** 'no-value)
  (set! **Similix-current-compiler-loaded?** #f)
  (set! **Similix-dynamic-input-symbol** '***)
  (set! **Similix-verbose-prep** #t)
  (set! **Similix-verbose-spec** 0)

  ; post file:
  (set! **Similix-postunfold** #t)
  (set! **Similix-optimize-standard-primops** #t)
  (set! **Similix-optimize-sim-primops** #t)

  '())

;-----------------------------------------------------------------------------
