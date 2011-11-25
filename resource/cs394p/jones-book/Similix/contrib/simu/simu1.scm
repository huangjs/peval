; Similix abstract syntax file
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.

;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
; Viewing abstract syntax

;-----------------------------------------------------------------------------
(define **Similix-show-variable-index** #f)
(define (show-variable-index-on) (set! **Similix-show-variable-index** #t))
(define (show-variable-index-off) (set! **Similix-show-variable-index** #f))

(define show
  (lambda inp
    (let ((len (length inp)))
      (if (= len 0)
          (begin
            (display "Format of show facilities:")
            (newline)
            (display "(showp defs kind)")
            (newline)
            (display "(showp defs)              => kind = 'head")
            (newline)
            (display "(showp)                   => defs = 'all, kind = 'head")
            (newline) (display ";") (newline)
            (display "(showpall)                => defs = 'all, kind = 'all")
            (newline) (display ";") (newline)
            (display "(show prep-pgm defs kind)")
            (newline)
            (display "(show prep-pgm defs)       => kind = 'head")
            (newline)
            (display "(show prep-pgm)            => defs = 'all, kind = 'head")
            (newline) (display ";") (newline)
            (display "(showall prep-pgm)         => defs = 'all, kind = 'all")
            (newline) (display ";") (newline)
            (display "where defs ::= '(name*) | 'all") (newline)
            (display "      kind ::= 'head | 'all") (newline) (newline)
            (display
	     "Flag: (show-variable-index-on) (show-variable-index-off)")
            (newline))
	  (let* ((last-goal&pgm (car inp))
		 (pgm (cadr last-goal&pgm))
		 (udp (_sim-fetch-pgm-udp pgm))
		 (orig-arity (_sim-fetch-pgm-orig-arity pgm))
		 (process
		  (lambda (def-names kind)
		    (let loop ((i 0))
		      (if (= i orig-arity)
			  '()
			  (let ((def (vector-ref udp i))
				(rest (loop (+ 1 i))))
			    (if (or (equal? def-names 'all)
				    (member (_sim-fetch-def-name def)
					    def-names))
				(cons (_sim-show-def def kind udp) rest)
				rest)))))))
	    (case (length inp)
	      ((1) (process 'all 'head))
	      ((2) (process (cadr inp) 'head))
	      ((3) (process (cadr inp) (caddr inp)))))))))

(define (showall pgm) (show pgm 'all 'all))

(define showp
  (lambda args
    (apply show (cons (preprocessed-program) args))))

(define (showpall) (showall (preprocessed-program)))

(define (_sim-show-expr-remove-ins-lets-id id e formal* udp)
  (define (possibly-inserted-let? e formal*)
    (and (_sim-isLet? e)
	 (let ((formal (_sim-fetch-let-formal e))
	       (actual (_sim-fetch-let-actual e)))
	   (and (_sim-isVar? actual)
		(equal? formal (_sim-fetch-var-varname actual))
		(member formal formal*)))))
  (let loop ((e e))
    (if (possibly-inserted-let? e formal*)
	(loop (_sim-fetch-let-body e))
	(_sim-show-expr-id id e udp))))

(define (_sim-show-def-id def kind udp id)
  (let* ((body (_sim-fetch-def-exp def))
	 (formal* (_sim-fetch-def-pars def)))
    (list
     'define
     (cons (_sim-fetch-def-name def)
	   (_sim-show-merge-3-id
	    id
	    formal*
	    (_sim-fetch-def-btp def)
	    (_sim-fetch-def-flowp def)
	    (list '-> (_sim-show-abbr-bt
		       (_sim-fetch-bt-tag body)))))
     (if (equal? kind 'head)
	 '...
	 (_sim-show-expr-remove-ins-lets-id id body formal* udp)))))

(define (_sim-show-merge-3-id id l1 l2 l3 rest)
  (if (null? l1)
      rest
      (let ((varname (car l1))
	    (bt (_sim-show-abbr-bt (car l2))))
	(cons (_sim-sym/num/string-append
	       (if (equal? bt 'd) "///" "")
	       (_sim-varname->name varname)
	       (if (equal? bt 'd) "^^^" "")
	       (if **Similix-show-variable-index**
		   (_sim-varname->index (car l1))
		   "")
	       ":" (_sim-show-abbr-bt (car l2))
	       (if (equal? id (car l3)) "<///" "")
	       (if (equal? id (car l3)) (car l3) "")
	       (if (equal? id (car l3)) "^^^>" ""))
	      (_sim-show-merge-3-id id (cdr l1) (cdr l2) (cdr l3) rest)))))


(define (_sim-show-expr-id id e udp)
  (let loop ((e e))
    (let* ((indices (_sim-fetch-local-defs e))
	   (d** (map (lambda (i*)
		       (map (lambda (i)
			      (_sim-fetch-udp-def-from-index udp i))
			    i*))
		     indices)))
      (let loop1 ((d** d**) (indices indices))
	(cond
	  ((null? d**)
	   (cond
	     ((_sim-isLift? e)
	      (list '///lift^^^ (loop (_sim-fetch-lift-arg e))))
	     ((_sim-isCst? e)
	      (let ((val (_sim-fetch-cst-value e)))
		(_sim-sym/num/string-append
		 (cond 
		  ((or (boolean? val) (number? val))
		   val)
		  ((string? val) 
		   (string-append "\"" val "\""))
                  ((char? val)
		   (string-append "#\\" (list->string (list val))))
		  (else
		   (format "" "~a" (list 'quote val))))
		 (if (equal? id (_sim-fetch-flow-tag e)) ":<///" "")
		 (if (equal? id (_sim-fetch-flow-tag e)) id "")
		 (if (equal? id (_sim-fetch-flow-tag e)) "^^^>" ""))))
	     ((_sim-isVar? e)
	      (let ((bt (_sim-show-abbr-bt (_sim-fetch-bt-tag e))))
		(_sim-sym/num/string-append
		 (if (equal? bt 'd) "///" "")
		 (_sim-fetch-var-name e)
		 (if (equal? bt 'd) "^^^" "")
		 (if **Similix-show-variable-index**
		     (_sim-fetch-var-index e)
		     ""))))
;	      (if **Similix-show-variable-index**
;		  (_sim-sym/num/string-append
;		   (_sim-fetch-var-name e) (_sim-fetch-var-index e))
;		  (_sim-fetch-var-name e)))
	     ((_sim-isCond? e)
	      (let ((test (_sim-fetch-cond-test e)))
		(list (if (_sim-isDynamic? test) '///if^^^ 'if)

;		      (list (loop test)
;			    (if (equal? id (_sim-fetch-flow-tag test))
;				(_sim-sym/num/string-append
;				 ":<///" (_sim-fetch-flow-tag test) "^^^>")
;				(_sim-sym/num/string-append "")))

		      (_sim-sym/num/string-append 
		       (format "" "~a" (loop test))
		       (if (equal? id (_sim-fetch-flow-tag test))
			   (_sim-sym/num/string-append
			    ":<///" (_sim-fetch-flow-tag test) "^^^>")
			   (_sim-sym/num/string-append "")))

		      (loop (_sim-fetch-cond-then e))
		      (loop (_sim-fetch-cond-else e)))))
	     ((_sim-isLet? e)
	      (let* ((formalvarname (_sim-fetch-let-formal e))
		     (actual (_sim-fetch-let-actual e))
		     (res-actual (loop actual))
		     (res-body (loop (_sim-fetch-let-body e))))
		(list
		 (if (_sim-isLet-unfoldable? e) 'let '///let^^^)
		 (let ((bt (_sim-show-abbr-bt (_sim-fetch-bt-tag actual))))
		   (list (list
			(_sim-sym/num/string-append
			 (if (equal? bt 'd) "///" "")
			 (_sim-varname->name formalvarname)
			 (if (equal? bt 'd) "^^^" "")
			 (if **Similix-show-variable-index**
			     (_sim-varname->index formalvarname)
			     "")
			 ":"
			 bt
			 (if (equal? id (_sim-fetch-flow-tag actual)) "<///" "")
			 (if (equal? id (_sim-fetch-flow-tag actual))
			     (_sim-fetch-flow-tag actual) "")
			 (if (equal? id (_sim-fetch-flow-tag actual)) "^^^>" ""))
			 res-actual)))
		 res-body)))
	     ((_sim-isBegin? e)
	      (list (if (_sim-isBegin-unfoldable? e) 'begin '///begin^^^)
		    (loop (_sim-fetch-begin-fst e))
		    (loop (_sim-fetch-begin-snd e))))
	     ((_sim-isPrimop? e)
	      (let ((name (_sim-fetch-primop-name e)))
		(cons (_sim-sym/num/string-append
		       (if (or (_sim-isDynamic? e)
			       (member (_sim-fetch-primop-referentiality e)
				       '(abort abort-eoi)))
			   (_sim-sym/num/string-append "///" name "^^^")
			   name)
		       (if (equal? id (_sim-fetch-flow-tag e)) ":<///" "")
		       (if (equal? id (_sim-fetch-flow-tag e)) id "")
		       (if (equal? id (_sim-fetch-flow-tag e)) "^^^>" ""))
		      (map loop (_sim-fetch-primop-args e)))))
	     ((_sim-isCstr? e)
	      (let ((name (_sim-fetch-cstr-name e)))
		(cons (_sim-sym/num/string-append
		       (if (_sim-isPsds? e)
			   name
			   (_sim-sym/num/string-append "///" name "^^^"))
		       (if (equal? id (_sim-fetch-flow-tag e)) ":<///" "")
		       (if (equal? id (_sim-fetch-flow-tag e)) id "")
		       (if (equal? id (_sim-fetch-flow-tag e)) "^^^>" ""))
		      (map loop (_sim-fetch-cstr-args e)))))
	     ((_sim-isSel? e)
	      (let ((name (_sim-fetch-sel-name e))
		    (arg (_sim-fetch-sel-arg e)))
		(list (if (_sim-isPsds? arg)
			  name
			  (_sim-sym/num/string-append "///" name "^^^"))
		      (loop arg)
		      (_sim-sym/num/string-append
		       (if (equal? id (_sim-fetch-flow-tag arg)) ":<///" "")
		       (if (equal? id (_sim-fetch-flow-tag arg)) id "")
		       (if (equal? id (_sim-fetch-flow-tag arg)) "^^^>" "")))))
	     ((_sim-isPred? e)
	      (let ((name (_sim-fetch-pred-name e))
		    (arg (_sim-fetch-pred-arg e)))
		(list (if (_sim-isPsds? arg)
			  name
			  (_sim-sym/num/string-append "///" name "^^^"))
		      (loop arg)
		      (_sim-sym/num/string-append
		       (if (equal? id (_sim-fetch-flow-tag arg)) ":<///" "")
		       (if (equal? id (_sim-fetch-flow-tag arg)) id "")
		       (if (equal? id (_sim-fetch-flow-tag arg)) "^^^>" "")))))
	     ((_sim-isPcall? e)
	      (let ((name (_sim-fetch-pcall-name e))
		    (def (_sim-fetch-udp-def udp e)))
		(if (_sim-unfoldable-procedure? def)
		    (cons name
			  (map loop (_sim-fetch-pcall-args e)))
		    (let ((formal* (_sim-fetch-def-pars def)))
		      (list (_sim-sym/num/string-append '///memo-^^^ name)
			    (_sim-show-expr-remove-ins-lets-id
			     id (_sim-fetch-def-exp def) formal* udp))))))
	     ((_sim-isAbs? e)
	      (let* ((body (_sim-fetch-abs-body e))
		     (formal* (_sim-fetch-abs-formals e))
		     (result (_sim-show-expr-remove-ins-lets-id
			      id body formal* udp)))
		(list (_sim-sym/num/string-append
		       (if (_sim-isClosure? e) 'lambda '///lambda^^^)
		       (if (equal? id (_sim-fetch-flow-tag e)) ":<///" "")
		       (if (equal? id (_sim-fetch-flow-tag e)) id "")
		       (if (equal? id (_sim-fetch-flow-tag e)) "^^^>" ""))
		      (_sim-show-merge-3-id
		       id
		       formal*
		       (_sim-fetch-abs-formals-btp e)
		       (_sim-fetch-abs-formals-flowp e)
		       (list '-> (_sim-show-abbr-bt
				  (_sim-fetch-bt-tag body))))
		      result)))
	     ((_sim-isApp? e)
	      (let* ((e1 (loop (_sim-fetch-app-exp e)))
		     (e0 (_sim-fetch-app-exp e))

;		     (e2 (list
;			  e1
;			  (_sim-sym/num/string-append
;			   (if (equal? id (_sim-fetch-flow-tag e0)) ":<///" "")
;			   (if (equal? id (_sim-fetch-flow-tag e0)) id "")
;			   (if (equal? id (_sim-fetch-flow-tag e0)) "^^^>" ""))))

		     (e2 (_sim-sym/num/string-append 
			  (format "" "~a" e1)
			  (if (equal? id (_sim-fetch-flow-tag e0)) ":<///" "")
			  (if (equal? id (_sim-fetch-flow-tag e0)) id "")
			  (if (equal? id (_sim-fetch-flow-tag e0)) "^^^>" "")))

		     (e* (map loop (_sim-fetch-app-args e))))
		(if (_sim-isClosure? (_sim-fetch-app-exp e))
		    (cons e2 e*)
		    (cons '///_^^^ (cons e2 e*)))))
	     (else
	      (_sim-error '_sim-show-expr "unknown syntactic form: ~s" e))))
	  ((and (= (length d**) 1) (= (length (car d**)) 1)
		(_sim-isPcall? e)
		(equal? (_sim-fetch-pcall-index e) (caar indices)))
	   (let* ((d (caar d**))
		  (formal* (_sim-fetch-def-pars d)))
	     (list 'let
		   (_sim-fetch-pcall-name e)
		   (map (lambda (formalvarname btv e1)
			  (let ((bt (_sim-show-abbr-bt btv)))
			    (list
			     (_sim-sym/num/string-append
			      (if (equal? bt 'd) "///" "")
			      (_sim-varname->name formalvarname)
			      (if (equal? bt 'd) "^^^" "")
			      (if **Similix-show-variable-index**
				  (_sim-varname->index formalvarname)
				  "")
			      ":"
			      (_sim-show-abbr-bt btv))
			     (loop e1))))
			formal*
			(_sim-fetch-def-btp d)
			(_sim-fetch-pcall-args e))
		   (_sim-show-expr-remove-ins-lets-id
		    id (_sim-fetch-def-exp d) formal* udp))))
	  (else
	   (list 'letrec
		 (map
		  (lambda (d)
		    (let ((formal* (_sim-fetch-def-pars d)))
		      (list
		       (_sim-fetch-def-name d)
		       (list
			(_sim-sym/num/string-append
			 'lambda
			 (if (equal? id (_sim-fetch-flow-tag e)) ":<///" "")
			 (if (equal? id (_sim-fetch-flow-tag e)) id "")
			 (if (equal? id (_sim-fetch-flow-tag e)) "^^^>" ""))
			(_sim-show-merge-3-id
			 id
			 formal*
			 (_sim-fetch-def-btp d)
			 (_sim-fetch-def-flowp d)
			 (list '-> (_sim-show-abbr-bt
				    (_sim-fetch-bt-tag
				     (_sim-fetch-def-exp d)))))
			(_sim-show-expr-remove-ins-lets-id
			 id (_sim-fetch-def-exp d) formal* udp)))))
		  (car d**))
		 (loop1 (cdr d**) (cdr indices)))))))))

(define (_sim-show-e e udp) (_sim-show-expr e udp))

;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------

(define showflowid
  (lambda inp
    (let ((len (length inp)))
      (if (= len 0)
          (begin
            (display "Format of showflow facilities:")
            (newline))
	  (let* ((last-goal&pgm (car inp))
		 (pgm (cadr last-goal&pgm))
		 (id _sim-flow-id)
		 (udp (_sim-fetch-pgm-udp pgm))
		 (orig-arity (_sim-fetch-pgm-orig-arity pgm))
		 (process
		  (lambda (def-names kind)
		    (let loop ((i 0))
		      (if (= i orig-arity)
			  '()
			  (let ((def (vector-ref udp i))
				(rest (loop (+ 1 i))))
			    (if (or (equal? def-names 'allflow)
				    (member (_sim-fetch-def-name def)
					    def-names))
				(cons (_sim-show-def-id def kind udp id) rest)
				rest)))))))
	    (case (length inp)
	      ((1) (process 'allflow 'head))
	      ((2) (process (cadr inp) 'head))
	      ((3) (process (cadr inp) (caddr inp)))))))))


;(define (showallflow pgm) (showflow pgm 'allflow 'allflow))

;(define (showpallflow) (showallflow (preprocessed-program)))


(define (showallflowid pgm) (showflowid pgm 'allflow 'allflow))

(define (showpallflowid) (showallflowid (preprocessed-program)))

(define (displayflow id)
  (set! _sim-flow-id id))

(define _sim-flow-id 0)

;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------



