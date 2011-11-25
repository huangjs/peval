
;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
; The following modifies some definitions from the file "abssyn.scm"


(define (_sim-show-merge l1 l2 rest)
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
	       ":" bt)
	      (_sim-show-merge (cdr l1) (cdr l2) rest)))))

(define (_sim-show-expr e udp)
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
		(if (or (boolean? val) (number? val) (string? val) (char? val))
		    val
		    (list 'quote val))))
	     ((_sim-isVar? e)
	      (let ((bt (_sim-show-abbr-bt (_sim-fetch-bt-tag e))))
		(_sim-sym/num/string-append
		 (if (equal? bt 'd) "///" "")
		 (_sim-fetch-var-name e)
		 (if (equal? bt 'd) "^^^" "")
		 (if **Similix-show-variable-index**
		     (_sim-fetch-var-index e)
		     ""))))
	     ((_sim-isCond? e)
	      (let ((test (_sim-fetch-cond-test e)))
		(list (if (_sim-isDynamic? test) '///if^^^ 'if)
		      (loop test)
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
			   bt)
			  res-actual)))
		 res-body)))
	     ((_sim-isBegin? e)
	      (list (if (_sim-isBegin-unfoldable? e) 'begin '///begin^^^)
		    (loop (_sim-fetch-begin-fst e))
		    (loop (_sim-fetch-begin-snd e))))
	     ((_sim-isPrimop? e)
	      (let ((name (_sim-fetch-primop-name e)))
		(cons (if (or (_sim-isDynamic? e)
			      (member (_sim-fetch-primop-referentiality e)
				      '(abort abort-eoi)))
			  (_sim-sym/num/string-append "///" name "^^^")
			  name)
		      (map loop (_sim-fetch-primop-args e)))))
	     ((_sim-isCstr? e)
	      (let ((name (_sim-fetch-cstr-name e)))
		(cons (if (_sim-isPsds? e)
			  name
			  (_sim-sym/num/string-append "///" name "^^^"))
		      (map loop (_sim-fetch-cstr-args e)))))
	     ((_sim-isSel? e)
	      (let ((name (_sim-fetch-sel-name e))
		    (arg (_sim-fetch-sel-arg e)))
		(list (if (_sim-isPsds? arg)
			  name
			  (_sim-sym/num/string-append "///" name "^^^"))
		      (loop arg))))
	     ((_sim-isPred? e)
	      (let ((name (_sim-fetch-pred-name e))
		    (arg (_sim-fetch-pred-arg e)))
		(list (if (_sim-isPsds? arg)
			  name
			  (_sim-sym/num/string-append "///" name "^^^"))
		      (loop arg))))
	     ((_sim-isPcall? e)
	      (let ((name (_sim-fetch-pcall-name e))
		    (def (_sim-fetch-udp-def udp e)))
		(if (_sim-unfoldable-procedure? def)
		    (cons name
			  (map loop (_sim-fetch-pcall-args e)))
		    (let ((formal* (_sim-fetch-def-pars def)))
		      (list (_sim-sym/num/string-append '///memo-^^^ name)
			    (_sim-show-expr-remove-ins-lets
			     (_sim-fetch-def-exp def) formal* udp))))))
	     ((_sim-isAbs? e)
	      (let* ((body (_sim-fetch-abs-body e))
		     (formal* (_sim-fetch-abs-formals e))
		     (result (_sim-show-expr-remove-ins-lets
			      body formal* udp)))
		(list (if (_sim-isClosure? e) 'lambda '///lambda^^^)
		      (_sim-show-merge
		       formal*
		       (_sim-fetch-abs-formals-btp e)
		       (list '-> (_sim-show-abbr-bt
				  (_sim-fetch-bt-tag body))))
		      result)))
	     ((_sim-isApp? e)
	      (let* ((e0 (_sim-fetch-app-exp e))
		     (e1 (loop e0))
		     (e* (map loop (_sim-fetch-app-args e))))
		(if (_sim-isClosure? e0)
		    (cons e1 e*)
		    (cons '///_^^^ (cons e1 e*)))))
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
		   (_sim-show-expr-remove-ins-lets
		    (_sim-fetch-def-exp d) formal* udp))))
	  (else
	   (list 'letrec
		 (map
		  (lambda (d)
		    (let ((formal* (_sim-fetch-def-pars d)))
		      (list
		       (_sim-fetch-def-name d)
		       (list
			'lambda
			(_sim-show-merge
			 formal*
			 (_sim-fetch-def-btp d)
			 (list '-> (_sim-show-abbr-bt
				    (_sim-fetch-bt-tag
				     (_sim-fetch-def-exp d)))))
			(_sim-show-expr-remove-ins-lets
			 (_sim-fetch-def-exp d) formal* udp)))))
		  (car d**))
		 (loop1 (cdr d**) (cdr indices)))))))))

;-----------------------------------------------------------------------------
