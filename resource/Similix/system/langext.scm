; Similix Scheme language extensions
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
; Pattern matching compiler


;-----------------------------------------------------------------------------
; casematch:
; ----------
;
; CasematchExp	::= (casematch Exp (Pattern Exp+)*)
;
; Pattern	::= Constant | () | (Pattern . Pattern) | Variable | Wildcard
; Wildcard	::= _ | else  ; _ and else equivalent
; Variable	::= Symbol
; Constant	::= Boolean | Number | String | Character | (quote ...)
;
;
; (casematch E ...) ==> (let ((W E)) (casematch W ...))
; 
; If not(<bind W P> = ()):
; (casematch W (P E+) ...) ==>
;   (if <test W P> (let <bind W P> E+) (casematch W ...))
; 
; If <bind W P> = ():
; (casematch W (P E) ...) ==>
;   (if <test W P> E (casematch W ...))
; (casematch W (P E E*) ...) ==>
;   (if <test W P> (begin E+) (casematch W ...))
; 
; (casematch W) ==> (_sim-error 'casematch "no match for value ~s" W)
; 
; <test W C>	     ==> (equal? W C)
; <test W ()>	     ==> (null? W)
; <test W V>	     ==> #t
; <test W _>	     ==> #t
; <test W (P1 . P2)> ==> (and (pair? W) <test (car W) P1> <test (cdr W) P2>)
; 
; <bind W C>	     ==> []
; <bind W ()>	     ==> []
; <bind W V>	     ==> [(V W)]
; <bind W _>	     ==> []
; <bind W (P1 . P2)> ==> <bind (car W) P1> :: <bind (cdr W) P2>


;-----------------------------------------------------------------------------
; caseconstr:
; -----------
;
; CaseconstrExp ::= (caseconstr Exp (Patt Exp+)*)
;
; Patt		::= (Constructor Patt*) | Variable | Wildcard
; Wildcard	::= _ | else  ; _ and else equivalent
;
;
; (caseconstr E ...) ==> (let ((W E)) (caseconstr W ...))
;
; If not(<bind W P 0> = ()):
; (caseconstr W (P E+) ...) ==>
;   (if <test W P> (let <bind W P 0> E+) (caseconstr W ...))
; 
; If <bind W P 0> = ():
; (caseconstr W (P E) ...) ==>
;   (if <test W P> E (caseconstr W ...))
; (caseconstr W (P E E*) ...) ==>
;   (if <test W P> (begin E+) (caseconstr W ...))
; 
; (caseconstr W) ==> (_sim-error 'caseconstr "no match for value ~s" W)
; 
; <test W (C P*)> ==> (and (C? W) <test* W P* C 0>)
; <test W V>	  ==> #t
; <test W _>	  ==> #t
;
; <test* W ()	    C i> ==> #t
; <test* W (P . P*) C i> ==> (and <test (C.i W) P> <test* W P* C i+1>)
; 
; <bind W (C P*)> ==> <bind* W P* C 0>
; <bind W V>	  ==> [(V W)]
; <bind W _>	  ==> []

; <bind* W ()	    C i> ==> []
; <bind* W (P . P*) C i> ==> <bind (C.i W) P> :: <bind* W P* C i+1>


;-----------------------------------------------------------------------------
; The compile function:
; ---------------------
;
; _sim-compile-casematch: File -> List

(define (_sim-compile-casematch f)
  (let ((w '_sim-v)
	(proper-list? _sim-proper-list?))
    (define (two-elem-list? l)
      (and (pair? l) (pair? (cdr l)) (null? (cddr l))))
    (define (two-or-more-elem-list? l)
      (and (pair? l) (pair? (cdr l)) (proper-list? (cddr l))))
    (define (check-andmap f l)
      (and (_sim-proper-list? l) (_sim-andmap f l)))

    (define (casematch-syntax? e)
      (and (pair? e)
	   (equal? (car e) 'casematch)
	   (pair? (cdr e))
	   (check-andmap
	    (lambda (p-e+)
	      (and (two-or-more-elem-list? p-e+) (pattern-syntax? (car p-e+))))
	    (cddr e))))
    (define (pattern-syntax? p)
      (or (constant-syntax? p)
	  (nil-syntax? p)
	  (and (pair? p)
	       (pattern-syntax? (car p))
	       (pattern-syntax? (cdr p)))
	  (variable-syntax? p)
	  (wildcard-syntax? p)))
    (define (constant-syntax? c)
      (or (boolean? c) (number? c) (string? c) (char? c)
	  (and (two-elem-list? c) (equal? (car c) 'quote))))
    (define (nil-syntax? p) (null? p))

    (define (caseconstr-syntax? e)
      (and (pair? e)
	   (equal? (car e) 'caseconstr)
	   (pair? (cdr e))
	   (check-andmap
	    (lambda (p-e+)
	      (and (two-or-more-elem-list? p-e+) (patt-syntax? (car p-e+))))
	    (cddr e))))
    (define (patt-syntax? p)
      (or (and (pair? p)
	       (constructor-syntax? (car p))
	       (check-andmap patt-syntax? (cdr p)))
	  (variable-syntax? p)
	  (wildcard-syntax? p)))
    (define (constructor-syntax? c) (symbol? c))

    (define (variable-syntax? v)
      (and (symbol? v) (not (member v '(_ else)))))
    (define (wildcard-syntax? e) (member e '(_ else)))

    
    (define (expand-casematch w alt* exp)
      (if (null? alt*)
	  `(_sim-error
	    'casematch
	    "no match in expression (casematch ~s ...) --- value of operand: ~s"
	    ',exp ,w)
	  (let* ((alt (car alt*))
		 (p (car alt))
		 (e+ (cdr alt)))
	    (gen-if (gen-test-cmatch w p)
		    (gen-multi-let (gen-bind-cmatch w p) (map process e+))
		    (expand-casematch w (cdr alt*) exp)))))
    (define (expand-caseconstr w alt* exp)
      (if (null? alt*)
	  `(_sim-error
	    'casematch "no match in expression (casematch ~s ...)" ',exp)
	  (let* ((alt (car alt*))
		 (p (car alt))
		 (e+ (cdr alt)))
	    (gen-if (gen-test-cconstr w p)
		    (gen-multi-let (gen-bind-cconstr w p) (map process e+))
		    (expand-caseconstr w (cdr alt*) exp)))))
    (define (gen-multi-let b* e+)
      (if (null? b*)
	  (if (null? (cdr e+)) ; (= (length e+) 1) i.e. one expression
	      (car e+)
	      (gen-begin e+))
	  `(let ,b* ,@e+)))
    (define (gen-begin e+) `(begin ,@e+))
    (define (gen-if test-exp then-exp else-exp)
      (if (equal? test-exp #t)
	  then-exp
	  `(if ,test-exp ,then-exp ,else-exp)))
    (define (gen-test-cmatch w p)
      (cond
	((constant-syntax? p)
	 `(equal? ,w ,p))
	((nil-syntax? p)
	 `(null? ,w))
	((variable-syntax? p)
	 #t)
	((wildcard-syntax? p)
	 #t)
	(else
	 (gen-and `(pair? ,w)
		  (gen-and (gen-test-cmatch (gen-car w) (car p))
			   (gen-test-cmatch (gen-cdr w) (cdr p)))))))
    (define (gen-test-cconstr w p)
      (cond
	((variable-syntax? p)
	 #t)
	((wildcard-syntax? p)
	 #t)
	(else
	 (let ((c (car p)))
	   (gen-and `(,(_sim-sym/num/string-append c "?") ,w)
		    (gen-test*-cconstr w (cdr p) c 0))))))
    (define (gen-test*-cconstr w p* c i)
      (if (null? p*)
	  #t
	  (gen-and (gen-test-cconstr
		    `(,(_sim-sym/num/string-append c "." i) ,w) (car p*))
		   (gen-test*-cconstr w (cdr p*) c (+ 1 i)))))
    (define (gen-and e1 e2)
      (cond
	((equal? e1 #t)
	 e2)
	((equal? e2 #t)
	 e1)
	(else
	 (let ((is-and? (lambda (e) (and (pair? e) (equal? (car e) 'and)))))
	   (if (is-and? e1)
	       (if (is-and? e2)
		   `(and ,@(cdr e1) ,@(cdr e2))
		   `(and ,@(cdr e1) ,e2))
	       (if (is-and? e2)
		   `(and ,e1 ,@(cdr e2))
		   `(and ,e1 ,e2)))))))
    (define (gen-bind-cmatch w p)
      (cond
	((constant-syntax? p)
	 '())
	((nil-syntax? p)
	 '())
	((variable-syntax? p)
	 `((,p ,w)))
	((wildcard-syntax? p)
	 '())
	(else
	 (append (gen-bind-cmatch (gen-car w) (car p))
		 (gen-bind-cmatch (gen-cdr w) (cdr p))))))
    (define (gen-bind-cconstr w p)
      (cond
	((variable-syntax? p)
	 `((,p ,w)))
	((wildcard-syntax? p)
	 '())
	(else
	 (gen-bind*-cconstr w (cdr p) (car p) 0))))
    (define (gen-bind*-cconstr w p* c i)
      (if (null? p*)
	  '()
	  (append (gen-bind-cconstr
		   `(,(_sim-sym/num/string-append c "." i) ,w) (car p*))
		  (gen-bind*-cconstr w (cdr p*) c (+ 1 i)))))
    (define (gen-car w)
      (if (two-elem-list? w)
	  (let ((x (cadr w)))
	    (case (car w)
	      ((car) `(caar ,x))
	      ((cdr) `(cadr ,x))
	      ((caar) `(caaar ,x))
	      ((cadr) `(caadr ,x))
	      ((cdar) `(cadar ,x))
	      ((cddr) `(caddr ,x))
	      ((caaar) `(caaaar ,x))
	      ((caadr) `(caaadr ,x))
	      ((cadar) `(caadar ,x))
	      ((caddr) `(caaddr ,x))
	      ((cdaar) `(cadaar ,x))
	      ((cdadr) `(cadadr ,x))
	      ((cddar) `(caddar ,x))
	      ((cdddr) `(cadddr ,x))
	      (else `(car ,w))))
	  `(car ,w)))
    (define (gen-cdr w)
      (if (two-elem-list? w)
	  (let ((x (cadr w)))
	    (case (car w)
	      ((car) `(cdar ,x))
	      ((cdr) `(cddr ,x))
	      ((caar) `(cdaar ,x))
	      ((cadr) `(cdadr ,x))
	      ((cdar) `(cddar ,x))
	      ((cddr) `(cdddr ,x))
	      ((caaar) `(cdaaar ,x))
	      ((caadr) `(cdaadr ,x))
	      ((cadar) `(cdadar ,x))
	      ((caddr) `(cdaddr ,x))
	      ((cdaar) `(cddaar ,x))
	      ((cdadr) `(cddadr ,x))
	      ((cddar) `(cdddar ,x))
	      ((cdddr) `(cddddr ,x))
	      (else `(cdr ,w))))
	  `(cdr ,w)))
    (define (gen-let b e) `(let ,b ,e))
    (define (process p)
      (if (pair? p)
	  (let ((hd (car p)))
	    (cond
	      ((equal? hd 'casematch)
	       (if (casematch-syntax? p)
		   (let ((test-exp (cadr p))
			 (alt* (cddr p)))
		     (if (variable-syntax? test-exp)
			 (expand-casematch test-exp alt* test-exp)
			 (gen-let `((,w ,(process test-exp)))
				  (expand-casematch w alt* test-exp))))
		   (_sim-error
		    'case-compiler"Invalid casematch syntax: ~s" p)))
	      ((equal? hd 'caseconstr)
	       (if (caseconstr-syntax? p)
		   (let ((test-exp (cadr p))
			 (alt* (cddr p)))
		     (if (variable-syntax? test-exp)
			 (expand-caseconstr test-exp alt* test-exp)
			 (gen-let `((,w ,(process test-exp)))
				  (expand-caseconstr w alt* test-exp))))
		   (_sim-error
		    'case-compiler "Invalid caseconstr syntax: ~s" p)))
	      ((equal? hd 'quote)
	       p)
	      (else
	       ; safe since there is no sharing in p (p created by file->list):
	       (begin
		 (set-car! p (process hd))
		 (set-cdr! p (process (cdr p)))
		 p))))
	  p))

    (process (file->list f))))


(define (loads file)
  (_sim-load-program (_sim-compile-casematch file)))


;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
; Adt-files

(load (string-append **Similix-path** "constr" **Similix-compiled-suffix**))

;-----------------------------------------------------------------------------

(define **Similix-udo** '())
(define **Similix-udo-by-programs** '())
(define **Similix-udo-by-files** '())

;-----------------------------------------------------------------------------
; Commands to load, unload, and load adt-files by force: 

(define (loadt file)
  (let ((udo (_sim-fully-lazy-assoc-udo-file file)))
    (if (not (equal? (_sim-string-eval file)
		     (string-append **Similix-library** "scheme.adt")))
	(_sim-load-program
	 (map (lambda (entry)
		(list 'define
		      (_sim-fetch-udo-entry-name entry)
		      (_sim-fetch-udo-entry-extended-name entry)))
	      udo)))))

(define (loadt! file)
  (begin
    (unloadt file)
    (loadt file)))

(define (unloadt file)
  (begin
    (set! **Similix-udo-by-files**
	  (_sim-remove-file-entry file **Similix-udo-by-files**))
    (set! **Similix-udo-by-programs**
	  (_sim-remove-program-entry file **Similix-udo-by-programs**))
    'unloadt-ed))

(define (_sim-remove-file-entry file binding*)
  (_sim-remove-entry
   binding* (lambda (binding) (equal? file (car binding)))))

; Filters the entries that do not depend on a file:
(define (_sim-remove-program-entry file binding*)
  (_sim-remove-entry
   binding* (lambda (binding) (member file (car binding)))))

(define (_sim-remove-entry binding* p)
  (let filter ((l binding*))
    (cond
      ((null? l)
       '())
      ((p (car l))
       (filter (cdr l)))
      (else
       (cons (car l) (filter (cdr l)))))))

;-----------------------------------------------------------------------------
; Read an adt-file
;
; Expands (load "<file.adt>")
;
; Leaves (defprim ...) unchanged
;
; Expands
;   (defconstr (c0 s00 ... s0n) ... (cm sm0 ... smk))
; into
;   (def-cstr c0 n+1 (c0 ... cm) type-index body)
;   (def-pred c0? c0 body)
;   (def-sel  s00 0 c0 body)
;     ...
;   (def-sel  s0n n c0 body)
;     ...
;     ...
;   (def-cstr cm k+1 (c0 ... cm) body)
;   (def-pred cm? cm body)
;   (def-sel  sm0 0 cm body)
;     ...
;   (def-sel  smk k cm body)
; where body is an expression implementing the operator.
; 
; The user may write * instead of a name for a selector sij;
; in that case the selector will get the name ci.j 

(define (_sim-read-adt-file file)
  (let ((count 0))
    (let loop ((l (_sim-compile-casematch file)) (r '()))
      (if
       (null? l)
       r
       (let ((hd (car l))
	     (tl (cdr l)))
	 (cond
	   ((and (pair? hd) (equal? (car hd) 'loadt))
	    (loop (_sim-compile-casematch (cadr hd)) (loop tl r)))
	   ((and (pair? hd) (equal? (car hd) 'defconstr))
	    (let ((e* (cdr hd)))
	      (if
	       (and (not (null? e*))
		    (_sim-proper-list? e*)
		    (_sim-andmap _sim-proper-list? e*))
	       (let ((cstr* (map car e*))
		     (type-index count))
		 (set! count (+ 1 count))
		 (let loop1 ((e* e*) (res (loop tl r)))
		   (if
		    (null? e*)
		    res
		    (let* ((e (car e*))
			   (cstr (car e))
			   (sel* (cdr e)))
		      (cons
		       (list
			'def-cstr cstr (length sel*)
			cstr* type-index
			`(lambda arg
			   (_sim-make-constr-val ',cstr arg)))
		       (cons
			(list
			 'def-pred
			 (_sim-sym/num/string-append cstr "?")
			 cstr
			 `(lambda (arg)
			    (equal? (_sim-get-constr-val-cstr-name
				     arg) ',cstr)))
			(let loop2 ((sel* sel*)
				    (i 0)
				    (res (loop1 (cdr e*) res)))
			  (if
			   (null? sel*)
			   res
			   (let ((sel (let ((sel (car sel*)))
					(if (equal? sel '*)
					    (_sim-sym/num/string-append
					     cstr "." i)
					    sel))))
			     (cons
			      (list
			       'def-sel sel i cstr
			       `(lambda (arg)
				  (if
				   (equal?
				    (_sim-get-constr-val-cstr-name arg)
				    ',cstr)
				   (list-ref
				    (_sim-get-constr-val-args arg)
				    ,i)
				   (_sim-error
				    'type-error
				    "selector ~s applied to ~s -- expected ~s"
				    ',sel
				    (_sim-get-constr-val-cstr-name
				     arg)
				    ',cstr))))
			      (loop2
			       (cdr sel*) (+ 1 i) res)))))))))))
	       (_sim-error '_sim-read-adt-file "improper syntax: ~s" hd))))
	   (else
	    (cons hd (loop tl r)))))))))

;-----------------------------------------------------------------------------
; Accessing concrete syntax of adt-definitions

(define (_sim-fetch-op-form def)
  (if (and (pair? def) (pair? (cdr def)) (pair? (cddr def)))
      (cond
	((equal? (car def) 'def-cstr)
	 'cstr)
	((equal? (car def) 'def-sel)
	 'sel)
	((equal? (car def) 'def-pred)
	 'pred)
	((and (pair? (cadr def)) (symbol? (caadr def)) (list? (cdadr def)))
	 'form1a)	; (defprim-Transp (O ...) ...)
	((and (pair? (cadr def)) (symbol? (caadr def)) (symbol? (cdadr def)))
	 'form1b)	; (defprim-Transp (O . V) ...)
	((and (number? (cadr def)) (symbol? (caddr def))
	      (pair? (cdddr def)) (symbol? (cadddr def)))
	 'form2a)	; (defprim-Transp Arity O N)
	((and (symbol? (cadr def)) (pair? (cddr def)) (symbol? (caddr def)))
	 'form2b)	; (defprim-Transp O N)
	(else
	 (_sim-error
	  '_sim-fetch-op-form "Unknown operator definition: ~s" def)))
      (_sim-error '_sim-fetch-op-form "Unknown operator definition: ~s" def)))

(define _sim-fetch-op-kind car)

(define (_sim-fetch-op-referentiality def)
  (case (_sim-fetch-op-kind def)
    ((defprim-transparent defprim)
     'transparent)
    ((defprim-tin)	 ; tin = "transparent if needed"
     'transparent-if-needed)
    ((defprim-dynamic)
     'dynamic)
    ((defprim-opaque)
     'opaque)
    ((defprim-abort)
     'abort)
    ((defprim-abort-eoi) ; eoi means "evaluation-order independent"
     'abort-eoi)
    (else
     (_sim-error
      '_sim-fetch-op-referentiality "unexpected argument: ~s" def))))

(define (_sim-fetch-op-name def)
  (case (_sim-fetch-op-form def)
    ((form1a form1b)
     (caadr def))
    ((form2a)
     (caddr def))
    ((form2b)
     (cadr def))
    ((cstr sel pred)
     (cadr def))
    (else
     (_sim-error '_sim-fetch-op-name "unexpected argument: ~s" def))))

(define (_sim-fetch-op-name-and-args def)
  (case (_sim-fetch-op-form def)
    ((form1a form1b)
     (cadr def))
    (else
     (_sim-error '_sim-fetch-op-name-and-args "unexpected argument: ~s" def))))

(define (_sim-fetch-op-arity def)
  (case (_sim-fetch-op-form def)
    ((form1a)
     (length (cdadr def)))
    ((form2a)
     (cadr def))
    ((form1b form2b)
     'any)
    ((cstr)
     (caddr def))
    ((sel pred)
     1)
    (else
     (_sim-error '_sim-fetch-op-arity "unexpected argument: ~s" def))))

(define (_sim-fetch-op-body def)
  (case (_sim-fetch-op-form def)
    ((form1a form1b)
     (let ((bodies (cddr def)))
       (if (null? (cdr bodies))
	   (car bodies)
	   (cons 'begin bodies))))
    ((form2a)
     (cadddr def))
    ((form2b)
     (caddr def))
    ((cstr)
     (cadr (cddddr def)))
    ((sel)
     (car (cddddr def)))
    ((pred)
     (cadddr def))
    (else
     (_sim-error '_sim-fetch-op-body "unexpected argument: ~s" def))))

(define (_sim-fetch-op-rest def)
  (case (_sim-fetch-op-form def)
    ((cstr sel pred)
     (cddr def))
    (else
     (_sim-error '_sim-fetch-op-rest "unexpected argument: ~s" def))))

(define (_sim-fetch-op-cstr-cstrs def)
  (case (_sim-fetch-op-form def)
    ((cstr)
     (cadddr def))
    (else
     (_sim-error '_sim-fetch-op-cstr-cstrs "unexpected argument: ~s" def))))

(define (_sim-fetch-op-cstr-type-index def)
  (case (_sim-fetch-op-form def)
    ((cstr)
     (car (cddddr def)))
    (else
     (_sim-error
      '_sim-fetch-op-cstr-type-index "unexpected argument: ~s" def))))

(define (_sim-fetch-op-sel-proj def)
  (case (_sim-fetch-op-form def)
    ((sel)
     (caddr def))
    (else
     (_sim-error '_sim-fetch-op-sel-proj "unexpected argument: ~s" def))))

(define (_sim-fetch-op-sel-cstr def)
  (case (_sim-fetch-op-form def)
    ((sel)
     (cadddr def))
    (else
     (_sim-error '_sim-fetch-op-sel-cstr "unexpected argument: ~s" def))))

(define (_sim-fetch-op-pred-cstr def)
  (case (_sim-fetch-op-form def)
    ((pred)
     (caddr def))
    (else
     (_sim-error '_sim-fetch-op-pred-cstr "unexpected argument: ~s" def))))

;-----------------------------------------------------------------------------
; Fully lazy assoc udo (by program):
; if the program has already been loaded the corresponding udo is returned,
; otherwise it is loaded and memoized, and the corresponding udo is returned.
;
; If the ncl-version is called, a list of "dangerous" names is returned
; (ncl = name clash list); these are names which may clash with residual
; procedure and variable names;

(define (_sim-fully-lazy-assoc-udo-program adt-file*)
  (_sim-fully-lazy-assoc-udo-pgm 'udo adt-file*))

(define (_sim-fully-lazy-assoc-udo-program-ncl adt-file*)
  (_sim-fully-lazy-assoc-udo-pgm 'ncl adt-file*))

(define (_sim-fully-lazy-assoc-udo-pgm kind adt-file*)
  (let* ((adt-file* (map _sim-string-eval adt-file*))
	 (binding (assoc adt-file* **Similix-udo-by-programs**)))
    (if (pair? binding)
	(if (equal? kind 'udo)
	    (cadr binding)
	    (caddr binding))
	(let* ((new-udo (list->vector
			 (_sim-map-append _sim-fully-lazy-assoc-udo-file
					  adt-file*)))
	       (ncl (_sim-map-append _sim-fully-lazy-assoc-udo-file-ncl
				     adt-file*)))
	  (set! **Similix-udo-by-programs**
		(cons (list adt-file* new-udo ncl)
		      **Similix-udo-by-programs**))
	  (if (equal? kind 'udo)
	      new-udo
	      ncl)))))

;-----------------------------------------------------------------------------
; Fully lazy assoc udo (by files):
; if the file has already been loaded the corresponding udo is returned,
; otherwise it is loaded and memoized, and the corresponding udo is returned.

(define (_sim-fully-lazy-assoc-udo-file file)
  (_sim-fully-lazy-assoc-udo-fl 'udo file))

(define (_sim-fully-lazy-assoc-udo-file-ncl file)
  (_sim-fully-lazy-assoc-udo-fl 'ncl file))

(define (_sim-fully-lazy-assoc-udo-fl kind file)
  (let ((file (_sim-string-eval file)))
    (letrec ((last-char (lambda (str l) (substring str (- l 1) l)))
	     (first-part (lambda (str l) (substring str 0 (- l 1))))
	     (number-str?
	      (lambda (str)
		(member str '("0" "1" "2" "3" "4" "5" "6" "7" "8" "9"))))
	     
	     ; find-dangerous-prim-names:
	     ; used to find names of primitives which may clash with
	     ; residual procedure or variable names; these all end with
	     ; "-<number>" (residual procedure names, generated in
	     ; "spec.adt") or "_<number>" (residual variable names,
	     ; generated in by the postprocess);
	     (find-dangerous-prim-names
	      (lambda (udo-list)
		(if (null? udo-list)
		    '()
		    (let* ((rest (find-dangerous-prim-names (cdr udo-list)))
			   (name (_sim-fetch-udo-entry-name
				  (car udo-list)))
			   (str (symbol->string name))
			   (l (string-length str)))
		      (if (and (number-str? (last-char str l))
			       (let loop
				   ((str (first-part str l)))
				 (let ((l (string-length str)))
				   (and (not (= l 0))
					(let ((ch (last-char str l)))
					  (or (and (number-str? ch)
						   (loop (first-part
							  str l)))
					      (member
					       ch '("-" "_"))))))))
			  (cons name rest)
			  rest))))))
      (let ((binding (assoc file **Similix-udo-by-files**)))
	(if (pair? binding)
	    (if (equal? kind 'udo)
		(cadr binding)
		(caddr binding))
	    (let* ((new-udo (_sim-make-new-udo file))
		   (ncl (find-dangerous-prim-names new-udo)))
	      (set! **Similix-udo-by-files**
		    (cons (list file new-udo ncl) **Similix-udo-by-files**))
	      (if (equal? kind 'udo)
		  new-udo
		  ncl)))))))

(define (_sim-make-new-udo file)
  (let* ((op-defs (_sim-read-adt-file file))
	 (op-names (map _sim-fetch-op-name op-defs))
	 (extended-op-names
	  (map (lambda (name)
		 (_sim-sym/num/string-append
		  "_sim--" (_sim-string-eval file) "-" name))
	       op-names))
	 (extended-op-defs
	  (letrec ((substitute
		    (lambda (e)
		      (cond
			((and (pair? e)
			      (not (and (equal? (car e) 'quote)
					(pair? (cdr e))
					(null? (cddr e)))))
			 (cons (substitute (car e)) (substitute (cdr e))))
			((and (symbol? e) (member e op-names))
			 (_sim-lookup e op-names extended-op-names))
			(else
			 e)))))
	    (let loop
		((defs op-defs) (seen '()))
	      (if (null? defs)
		  '()
		  (let* ((def (car defs))
			 (form (_sim-fetch-op-form def))
			 (op-name (_sim-fetch-op-name def)))
		    (cons
		     (cond
		       ((member form '(form2a form2b))
			(let* ((kind (_sim-fetch-op-kind def))
			       (body (_sim-fetch-op-body def))
			       (ext-op-name (substitute op-name))
			       (ext-body (if (member body seen)
					     (substitute body)
					     body)))
			  (if (equal? form 'form2a)
			      (list kind
				    (_sim-fetch-op-arity def)
				    ext-op-name
				    ext-body)
			      (list kind ext-op-name ext-body))))
		       ((member form '(cstr sel pred))
			(cons (_sim-fetch-op-kind def)
			      (cons (substitute op-name)
				    (_sim-fetch-op-rest def))))
		       (else
			(substitute def)))
		     (loop (cdr defs) (cons op-name seen)))))))))
    (begin
      ; define extended names at top-level:
      (_sim-load-program
       (_sim-append!
	(map
	 (lambda (def)
	   (let ((op-form (_sim-fetch-op-form def)))
	     (list 'define
		   (if (member op-form '(form1a form1b))
		       (_sim-fetch-op-name-and-args def)
		       (_sim-fetch-op-name def))
		   (_sim-fetch-op-body def))))
	 extended-op-defs)
	; bind _sim-tmp-value to a vector of all values bound to
	; extended-op-names:
	(list (list 'define
		    '_sim-tmp-value
		    (cons 'vector extended-op-names)))))
      
      ; make udo defining non-extended names:
      (let loop ((op-defs op-defs)
		 (op-names op-names)
		 (extended-op-names extended-op-names)
		 (i 0))
	(if (null? op-defs)
	    '()
	    (let* ((def (car op-defs))
		   (op-form (_sim-fetch-op-form def))
		   (op-name (car op-names))
		   (extended-op-name (car extended-op-names)))
	      (cons
	       (_sim-make-udo-entry
		op-name
		(_sim-fetch-op-arity def)
		(case op-form
		  ((cstr sel pred)
		   op-form)
		  (else
		   'primop))
		extended-op-name
		; computes (_sim-get-top-level-value extended-op-name)
		; in a faster way (without using load):
		(vector-ref _sim-tmp-value i)
		(case op-form
		  ((cstr)
		   (_sim-make-udo-entry-attr-cstr
		    (_sim-fetch-op-cstr-cstrs def)
		    (_sim-fetch-op-cstr-type-index def)))
		  ((sel)
		   (_sim-make-udo-entry-attr-sel
		    (_sim-fetch-op-sel-proj def)
		    (_sim-fetch-op-sel-cstr def)))
		  ((pred)
		   (_sim-make-udo-entry-attr-pred
		    (_sim-fetch-op-pred-cstr def)))
		  (else
		   (_sim-make-udo-entry-attr-primop
		    (_sim-fetch-op-referentiality def)))))
	       (loop (cdr op-defs)
		     (cdr op-names)
		     (cdr extended-op-names)
		     (+ 1 i)))))))))

;-----------------------------------------------------------------------------
; udo entry accessors:

(define (_sim-make-udo-entry name arity form extended-name value attribute)
  (list name arity form extended-name value attribute))
(define (_sim-fetch-udo-entry-name v) (list-ref v 0))
(define (_sim-fetch-udo-entry-arity v) (list-ref v 1))
(define (_sim-fetch-udo-entry-form v) (list-ref v 2))
(define (_sim-fetch-udo-entry-extended-name v) (list-ref v 3))
(define (_sim-fetch-udo-entry-value v) (list-ref v 4))
(define (_sim-fetch-udo-entry-attr v) (list-ref v 5))

(define (_sim-fetch-udo-entry-from-index index)
  (vector-ref **Similix-udo** index))

(define (_sim-fetch-udo-entry e)
  (_sim-fetch-udo-entry-from-index
   ((cond
     ((_sim-isPrimop? e)
      _sim-fetch-primop-index)
     ((_sim-isCstr? e)
      _sim-fetch-cstr-index)
     ((_sim-isSel? e)
      _sim-fetch-sel-index)
     ((_sim-isPred? e)
      _sim-fetch-pred-index)
     (else
      (_sim-error '_sim-fetch-udo-entry "unexpected argument: ~s" e)))
    e)))

(define _sim-make-udo-entry-attr-cstr vector)
(define (_sim-fetch-udo-entry-cstr-cstrs entry)
  (vector-ref (_sim-fetch-udo-entry-attr entry) 0))
(define (_sim-fetch-udo-entry-cstr-type-index entry)
  (vector-ref (_sim-fetch-udo-entry-attr entry) 1))

(define _sim-make-udo-entry-attr-sel vector)
(define (_sim-fetch-udo-entry-sel-proj entry)
  (vector-ref (_sim-fetch-udo-entry-attr entry) 0))
(define (_sim-fetch-udo-entry-sel-cstr entry)
  (vector-ref (_sim-fetch-udo-entry-attr entry) 1))

(define _sim-make-udo-entry-attr-pred vector)
(define (_sim-fetch-udo-entry-pred-cstr entry)
  (vector-ref (_sim-fetch-udo-entry-attr entry) 0))

(define _sim-make-udo-entry-attr-primop vector)
(define (_sim-fetch-udo-entry-primop-referentiality entry)
  (vector-ref (_sim-fetch-udo-entry-attr entry) 0))

;-----------------------------------------------------------------------------

(define (_sim-udo-apply* op v*)
  (apply (_sim-fetch-udo-entry-value
	  (vector-ref **Similix-udo** (_sim-fetch-index-from-n+i op)))
	 v*))

(define (_sim-udo-apply op v)
  ((_sim-fetch-udo-entry-value
    (vector-ref **Similix-udo** (_sim-fetch-index-from-n+i op)))
   v))

;-----------------------------------------------------------------------------
; Converting a .sim program into stand-alone Scheme
; (which can run independently of the Similix system)

(define (sim2scheme file)
  (letrec ((process-e* (lambda (e*) (process-e*1 e* '())))
	   (process-e*1
	    (lambda (e* new-e*)
	      (if (null? e*)
		  new-e*
		  (process-e (car e*) (process-e*1 (cdr e*) new-e*)))))
	   (process-e
	    (lambda (e new-e*)
	      (cond
		((equal? (car e) 'load)
		 (process-e*1 (file->list (cadr e)) new-e*))
		((equal? (car e) 'loads)
		 (process-e*1 (_sim-compile-casematch (cadr e)) new-e*))
		((equal? (car e) 'loadt)
		 (let ((d* (_sim-read-adt-file (cadr e))))
		   (let loop ((d* d*) (new-e* new-e*))
		     (if (null? d*)
			 new-e*
			 (let ((d (car d*))
			       (new-e*1 (loop (cdr d*) new-e*)))
			   (if (member (_sim-fetch-op-form d)
				       '(form1a form1b))
			       (cons (list 'define
					   (_sim-fetch-op-name-and-args d)
					   (_sim-fetch-op-body d))
				     new-e*1)
			       (let ((name (_sim-fetch-op-name d))
				     (body (_sim-fetch-op-body d)))
				 (if (equal? name body)
				     new-e*1
				     (cons (list 'define name body)
					   new-e*1)))))))))
		(else
		 (cons e new-e*))))))
    (let ((sim-file (_sim-normalize-sim-name file))
	  (scheme-file (_sim-normalize-source-name
			(_sim-strip-sim-name file))))
      (display "reading from ") (display sim-file) (newline)
      (display "writing on   ") (display scheme-file) (newline)
      (writel (append
	       (file->list
		(string-append
		 **Similix-path** "constr" **Similix-source-suffix**))
	       (process-e* (_sim-compile-casematch sim-file)))
	      scheme-file))))

;-----------------------------------------------------------------------------
