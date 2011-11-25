; Similix front-end
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------
(define (_sim-front-end goal-name file)
  ; Syntactic expansion of the following Scheme standard expression forms:
  ;	cond-expressions -> if-expressions
  ;	and-expressions -> if-expressions
  ;	or-expressions -> if-expression
  ;	let*-expressions -> unary let-expressions
  ;	multi-let-expressions -> unary let-expressions
  ;   in certain contexts: e* -> (begin e*) 
  ;
  ; macro-expand-exp! takes an environment parameter (n*/v*) because
  ; the multi-let expansion renames variables and thereby
  ; introduces bindings of old variable names;
  ;

  (define **prefix** "g-")
  
  ; =========================================================================
  
  ; Misc. operations over concrete syntax:
  
  (define fetch-define-bodies cddr)
  (define fetch-d-define-bodies cdr)
  (define fetch-define-body caddr)
  (define fetch-define-name caadr)
  (define fetch-define-formals cdadr)
  
  (define fetch-test cadr)
  (define fetch-a-test cdr)
  (define fetch-then caddr)
  (define fetch-a-then cddr)
  (define fetch-else cadddr)
  (define fetch-a-else cdddr)
  
  (define fetch-let-formal caaadr)
  (define fetch-let-actual (lambda (e) (car (cdaadr e))))
  (define fetch-let-bindings cadr)
  (define fetch-let-body caddr)
  (define fetch-let-bodies cddr)
  (define fetch-d-let-bodies cdr)
  
  (define fetch-named-let-name cadr)
  (define fetch-named-let-bindings caddr)
  (define fetch-named-let-bodies cdddr)
  
  (define fetch-begin-bodies cdr)
  (define fetch-begin-fst cadr)
  (define fetch-begin-snd caddr)
  
  (define fetch-a-set!-arg cddr)
  
  (define fetch-abs-formals cadr)
  (define fetch-abs-body caddr)
  (define fetch-abs-bodies cddr)
  (define fetch-d-abs-bodies cdr)
  
  (define fetch-operator car)
  (define fetch-operator-exp car)
  (define fetch-args cdr)
  
  (define fetch-letrec-bindings cadr)
  (define fetch-letrec-body caddr)
  (define fetch-letrec-bodies cddr)
  (define fetch-d-letrec-bodies cdr)
  (define fetch-binding-name car)
  (define (fetch-binding-formals binding) (fetch-abs-formals (cadr binding)))
  
  ; -------------------------------------------------------------------------
  
  (define (two-elem-list? l)
    (and (pair? l) (pair? (cdr l)) (null? (cddr l))))
  ; also defined in misc --- locally defined here for efficiency:
  (define (proper-list? e)
    (or (null? e) (and (pair? e) (proper-list? (cdr e)))))
  (define (non-empty-proper-list? e)
    (and (not (null? e)) (proper-list? e)))
  
  (define (concrete-syntax-cst? e)
    (or (boolean? e)
	(number? e)
	(string? e)
	(char? e)
	(and (two-elem-list? e) (equal? (car e) 'quote))))
  
  (define concrete-syntax-symbol? symbol?)
  (define (rebuild-concrete-syntax-symbol name n* v*)
    (cond
      ((null? n*)
       name)		; The symbol might not be defined in the environment
      ((equal? name (car n*))
       (car v*))
      (else
       (rebuild-concrete-syntax-symbol name (cdr n*) (cdr v*)))))
  
  (define (concrete-syntax-var? e r)
    (and (symbol? e)
	 (is-var-entry? (lookup e r))))
  
  (define (concrete-syntax-if? e)
    (and (pair? e)
	 (equal? (car e) 'if)
	 (pair? (cdr e))
	 (two-elem-list? (cddr e))))
  (define (concrete-syntax-one-armed-if? e)
    (and (pair? e)
	 (equal? (car e) 'if)
	 (two-elem-list? (cdr e))))
  (define (rebuild-concrete-syntax-if e1 e2 e3)
    (list 'if e1 e2 e3))
  
  (define (concrete-syntax-cond-expression? e)
    (and (pair? e)
	 (equal? (car e) 'cond)
	 (non-empty-proper-list? (cdr e))
	 (_sim-andmap non-empty-proper-list? (cdr e))))
  
  (define (concrete-syntax-and-expression? e)
    (and (pair? e)
	 (equal? (car e) 'and)
	 (proper-list? (cdr e))))
  
  (define (concrete-syntax-or-expression? e)
    (and (pair? e)
	 (equal? (car e) 'or)
	 (proper-list? (cdr e))))
  
  (define (concrete-syntax-let? e)
    (and (pair? e)
	 (equal? (car e) 'let)
	 (pair? (cdr e))
	 (proper-list? (cadr e))
	 (map two-elem-list? (cadr e))
	 (< (length (cadr e)) 2)
	 (non-empty-proper-list? (cddr e))))
  (define (concrete-syntax-multi-let? e)
    (and (pair? e)
	 (equal? (car e) 'let)
	 (pair? (cdr e))
	 (proper-list? (cadr e))
	 (map two-elem-list? (cadr e))
	 (> (length (cadr e)) 1)
	 (non-empty-proper-list? (cddr e))))
  (define (concrete-syntax-let*? e)
    (and (pair? e)
	 (equal? (car e) 'let*)
	 (pair? (cdr e))
	 (proper-list? (cadr e))
	 (map two-elem-list? (cadr e))
	 (non-empty-proper-list? (cddr e))))
  (define (rebuild-concrete-syntax-let formal actual body)
    (list 'let (list (list formal actual)) body))

  (define (concrete-syntax-named-let? e)
    (and (pair? e)
	 (equal? (car e) 'let)
	 (pair? (cdr e))
	 (symbol? (cadr e))
	 (pair? (cddr e))
	 (proper-list? (caddr e))
	 (map two-elem-list? (caddr e))
	 (non-empty-proper-list? (cdddr e))))

  
  (define (concrete-syntax-begin? e)
    (and (pair? e)
	 (equal? (car e) 'begin)
	 (non-empty-proper-list? (cdr e))))
  (define (rebuild-concrete-syntax-begin e1 e2)
    (list 'begin e1 e2))
  
  (define (rebuild-concrete-syntax-pcall proc args)
    (cons proc args))
  
  (define (concrete-syntax-combination? e)
    (and (pair? e) (proper-list? (cdr e))))
  
  (define (concrete-syntax-app? e r)
    (and (pair? e)
	 (or (pair? (car e)) (concrete-syntax-var? (car e) r))
	 (proper-list? (cdr e))))
  
  (define (concrete-syntax-abs? e)
    (and (pair? e)
	 (equal? (car e) 'lambda)
	 (pair? (cdr e))
	 (_sim-andmap symbol? (cadr e))
	 (non-empty-proper-list? (cddr e))))
  (define (rebuild-concrete-syntax-abs formals bodies)
    (cons 'lambda (cons formals bodies)))

  (define (concrete-syntax-letrec? e)
    (and (pair? e)
	 (equal? (car e) 'letrec)
	 (pair? (cdr e))
	 (proper-list? (cadr e))
	 (_sim-andmap (lambda (l) (and (two-elem-list? l)
				       (symbol? (car l))
				       (concrete-syntax-abs? (cadr l))))
		      (cadr e))
	 (non-empty-proper-list? (cddr e))))
  (define rebuild-concrete-syntax-letrec-binding list)
  (define (rebuild-concrete-syntax-letrec bindings bodies)
    (cons 'letrec (cons bindings bodies)))
  
  ; =========================================================================
  ; Macro expansion

  (define (macro-expand-exp! a-e n* v* ncl)
    (let ((e (car a-e)))
      (cond
	((concrete-syntax-cst? e)
	 "nothing")
	((concrete-syntax-symbol? e)
	 (set-car! a-e (rebuild-concrete-syntax-symbol e n* v*)))
	((concrete-syntax-if? e)
	 (macro-expand-exp! (fetch-a-test e) n* v* ncl)
	 (macro-expand-exp! (fetch-a-then e) n* v* ncl)
	 (macro-expand-exp! (fetch-a-else e) n* v* ncl))
	((concrete-syntax-one-armed-if? e)
	 (macro-expand-exp-one-armed-if! a-e n* v* ncl))
	((concrete-syntax-cond-expression? e)
	 (set-car! a-e (macro-expand-cond-expression! (cdr e) n* v* ncl)))
	((concrete-syntax-and-expression? e)
	 (set-car! a-e (macro-expand-and-expression! (cdr e) n* v* ncl)))
	((concrete-syntax-or-expression? e)
	 (set-car! a-e (macro-expand-or-expression! (cdr e) n* v* ncl)))
	((or (concrete-syntax-let? e) (concrete-syntax-let*? e))
	 (set-car! a-e (macro-expand-let! 'let-let* e n* v* ncl)))
	((concrete-syntax-multi-let? e)
	 (set-car! a-e (macro-expand-let! 'multi-let e n* v* ncl)))
	((concrete-syntax-letrec? e)
	 (set-car! a-e (macro-expand-letrec! e n* v* ncl)))
	((concrete-syntax-named-let? e)
	 (macro-expand-named-let! a-e n* v* ncl))
	((concrete-syntax-begin? e)
	 (set-car! a-e (macro-expand-begin!
			(fetch-begin-bodies e) n* v* ncl)))
	((concrete-syntax-abs? e)
	 (let ((formals (fetch-abs-formals e)))
	   (macro-expand-body!
	    (fetch-d-abs-bodies e)
	    (append formals n*) (append formals v*)
	    (test-name* formals ncl))))
	((concrete-syntax-combination? e)
	 (macro-expand-exp-loop! e n* v* ncl))
	(else
	 (_sim-error 'macro-expand-exp! "unknown expression: ~s" e)))))
  
  (define (macro-expand-exp-loop! e* n* v* ncl)
    (let loop ((e* e*))
      ; a-e = e*
      (macro-expand-exp! e* n* v* ncl)
      (if (not (null? (cdr e*))) (loop (cdr e*)))))
  
  ;---------------------------------------------------------------------------
  (define (macro-expand-sequence! d-e* n* v* ncl)
    (let ((e* (cdr d-e*)))
      (if (null? (cdr e*))
	  ; a-e = e*
	  (macro-expand-exp! e* n* v* ncl)
	  (set-cdr! d-e* (list (macro-expand-begin! e* n* v* ncl))))))
  
  (define (macro-expand-body! d-d*e+ n* v* ncl)
    (let* ((d*e+ (cdr d-d*e+))
	   (hd (car d*e+)))
      (if (is-define? hd)
	  (let ((part2 (split-list! d*e+)))
	    ; d*e+ will now be the first part of the list because of
	    ; the way split-list! works
	    (set-cdr!
	     d-d*e+
	     (list
	      (macro-expand-letrec!
	       (rebuild-concrete-syntax-letrec
		(map (lambda (d)
		       (rebuild-concrete-syntax-letrec-binding
			(fetch-define-name d)
			(rebuild-concrete-syntax-abs
			 (fetch-define-formals d)
			 (fetch-define-bodies d))))
		     d*e+) ; part1
		part2)
	       n* v* ncl))))
	  (macro-expand-sequence! d-d*e+ n* v* ncl))))
  (define (split-list! d+e*)
    (let loop ((x d+e*))
      (let ((tl (cdr x)))
	(cond
	  ((null? tl)
	   (_sim-error 'split-list!
		       "No expression following definitions in ~s"
		       d+e*))
	  ((is-define? (cadr x)) (loop tl))
	  (else (set-cdr! x '()) tl)))))
  
  ;---------------------------------------------------------------------------
  (define (macro-expand-cond-expression! c* n* v* ncl)
    (let loop ((c* c*))
      (if (null? c*)
	  #f
	  (if (and (pair? c*) (pair? (car c*)))
	      (let* ((a-test (car c*))
		     (d-then a-test)
		     (rest (cdr c*)))
		(cond
		  ((and (null? rest) (equal? (car a-test) 'else))
		   (if (null? (cdr d-then))
		       (_sim-error 'macro-expand-cond-expression!
				   "illegal else-clause: ~s"
				   (car c*))
		       (begin
			 (macro-expand-sequence! d-then n* v* ncl)
			 (cadr d-then))))
		  ((null? (cdr d-then))
		   (macro-expand-exp! a-test n* v* ncl)
		   (let ((new-var (get-new-var "" ncl)))
		     (rebuild-concrete-syntax-let
		      new-var
		      (car a-test)
		      (rebuild-concrete-syntax-if
		       new-var new-var (loop rest)))))
		  (else
		   (macro-expand-exp! a-test n* v* ncl)
		   (macro-expand-sequence! d-then n* v* ncl)
		   (rebuild-concrete-syntax-if
		    (car a-test) (cadr d-then) (loop rest)))))
	      (_sim-error 'macro-expand-cond-expression!
			  "Not legal in cond-expressions: ~s"
			  c*)))))
  
  (define (macro-expand-and-expression! e* n* v* ncl)
    (if (null? e*)
	#t
	(let loop
	    ((e* e*))
	  (let ((a-e e*)
		(r (cdr e*)))
	    (if (null? r)
		(begin (macro-expand-exp! a-e n* v* ncl) (car a-e))
		(begin (macro-expand-exp! a-e n* v* ncl)
		       (rebuild-concrete-syntax-if
			(car a-e) (loop r) #f)))))))
  
  ;  (or E1 ...) --> (let ((g32 E1)) (if g32 g32 ...))
  (define (macro-expand-or-expression! e* n* v* ncl)
    (if (null? e*)
	#f
	(let loop ((e* e*))
	  (let ((a-e e*)
		(r (cdr e*)))
	    (if (null? r)
		(begin (macro-expand-exp! a-e n* v* ncl) (car a-e))
		(let ((new-var (get-new-var "" ncl)))
		  (macro-expand-exp! a-e n* v* ncl)
		  (rebuild-concrete-syntax-let
		   new-var
		   (car a-e)
		   (rebuild-concrete-syntax-if
		    new-var new-var (loop r)))))))))
  
  (define (macro-expand-let! let-kind e n* v* ncl)
    (let loop
	((binding* (fetch-let-bindings e)) (new-n* n*) (new-v* v*) (ncl ncl))
      (if (null? binding*)
	  (let ((d-bodies (fetch-d-let-bodies e)))
	    (begin
	      (macro-expand-body! d-bodies new-n* new-v* ncl)
	      (cadr d-bodies)))
	  (let* ((binding (car binding*))
		 (a-actual (cdr binding))
		 (new-n (car binding))
		 (new-v (if (equal? let-kind 'multi-let)
			    (get-new-var new-n ncl)
			    new-n)))
	    (macro-expand-exp! a-actual n* v* ncl)
	    (rebuild-concrete-syntax-let
	     new-v				; formal
	     (car a-actual)			; actual
	     (loop (cdr binding*)	        ; body
		   (cons new-n new-n*)
		   (cons new-v new-v*)
		   (test-name new-v ncl)))))))

  (define (macro-expand-letrec! e n* v* ncl)
    (let* ((binding* (fetch-letrec-bindings e))
	   (names (map fetch-binding-name binding*))
	   (n* (append names n*))
	   (v* (append names v*))
	   (new-ncl (test-name* names ncl)))
      (for-each (lambda (binding)
		  (let ((a-actual (cdr binding)))
		    (macro-expand-exp! a-actual n* v* new-ncl)))
		binding*)
      (let ((d-bodies (fetch-d-letrec-bodies e)))
	(macro-expand-body! d-bodies n* v* new-ncl))
      e))
  
  (define (macro-expand-named-let! a-e n* v* ncl)
    (let* ((e (car a-e))
	   (name (fetch-named-let-name e))
	   (binding* (fetch-named-let-bindings e))
	   (bodies (fetch-named-let-bodies e)))
      (set-car!
       a-e
       (rebuild-concrete-syntax-letrec
	(list (rebuild-concrete-syntax-letrec-binding
	       name
	       (rebuild-concrete-syntax-abs
		(map car binding*) bodies)))
	(list (rebuild-concrete-syntax-pcall name (map cadr binding*)))))
      (macro-expand-exp! a-e n* v* ncl)))

  (define (macro-expand-exp-one-armed-if! a-e n* v* ncl)
    (let ((e (car a-e)))
      (set-car!
       a-e
       (rebuild-concrete-syntax-if (fetch-test e) (fetch-then e) ''undefined))
      (macro-expand-exp! a-e n* v* ncl)))

  (define (macro-expand-begin! e+ n* v* ncl)
    (macro-expand-exp-loop! e+ n* v* ncl)
    (let ((hd (car e+))
	  (tl (cdr e+)))
      (if (null? tl)
	  hd
	  (let loop ((e1 hd) (e2 (car tl)) (e* (cdr tl)))
	    (rebuild-concrete-syntax-begin
	     e1 (if (null? e*)
		    e2
		    (loop e2 (car e*) (cdr e*))))))))
  
  ; -------------------------------------------------------------------------
  
  (define get-new-var
    (let ((seed 0))
      (lambda (n ncl)
	(let loop
	    ()
	  (let ((name (if (equal? n "")
			  (_sim-sym/num/string-append **prefix** seed)
			  (_sim-sym/num/string-append **prefix** n "-" seed))))
	    (set! seed (+ 1 seed))
	    (if (member name ncl)
		(loop)
		name))))))
  
  
  ; Avoid shadowing when generating variables with get-new-var;
  ; the name-clash-list (ncl) is initialized by find-dangerous-names;
  ; the name-clash-list is extended when processing definitions,
  ; let, letrec, and lambda
  ; (these forms introduce new user defined names that must not be shadowed);
  ; look for calls to test-name and test-name*
  (define (test-name* name* ncl)
    (if (null? name*)
	ncl
	(test-name* (cdr name*) (test-name (car name*) ncl))))
  (define (test-name name ncl)
    (if (let ((str (symbol->string name)))
	  (and (> (string-length str) 1)
	       (string=? (substring str 0 2) **prefix**)))
	(cons name ncl)
	ncl))
  (define (find-dangerous-names def* udo)
    (let loop ((d* def*) (ncl '()))
      (if (null? d*)
	  (let ((size (vector-length udo)))
	    (let loop ((offset 0) (ncl ncl))
	      (if (= offset size)
		  ncl
		  (loop (+ 1 offset)
			(test-name
			 (_sim-fetch-udo-entry-name (vector-ref udo offset))
			 ncl)))))
	  (loop (cdr d*) (test-name (fetch-define-name (car d*)) ncl)))))
  
  ; =========================================================================
  ; Conversion to abstract syntax

  (define (init-env) '())
  (define (upd-env-var varname r) (cons (cons 'var varname) r))
  (define (upd-env-var* varname* r)
    (if (null? varname*)
	r
	(upd-env-var (car varname*) (upd-env-var* (cdr varname*) r))))
  (define (upd-env-proc proc formals r)
    (cons (list 'proc proc formals) r))
  (define (is-not-found-entry? entry) (equal? entry 'not-found))
  (define (is-var-entry? entry)
    (and (pair? entry) (equal? (car entry) 'var)))
  (define (var-entry->varname entry) (cdr entry))
  (define (is-proc-entry? entry)
    (and (pair? entry) (equal? (car entry) 'proc)))
  (define (proc-entry->formals entry) (caddr entry))
  (define (lookup name r)
    (cond
      ((null? r) 'not-found)
      ((equal? name (cadar r)) (car r))
      (else (lookup name (cdr r)))))
  
    
  ; Conversion of a concrete expression into an abstract one + expansions
  ; P --> (lambda (...) (P ...)) and O --> (lambda (...) (O ...))
  ;
  (define (make-abstract-syntax-expr! e n* udo)
    (cond
      ((concrete-syntax-cst? e)
       (_sim-make-abstract-syntax-cst (if (pair? e) (cadr e) e)))
      ((symbol? e)
       (let ((entry (lookup e n*)))
	 (cond
	   ((is-not-found-entry? entry)
	    (make-abs-syn-exp1 e n* udo))
	   ; concrete-syntax-var?
	   ((is-var-entry? entry)
	    (_sim-make-abstract-syntax-var (var-entry->varname entry)))
	   ; concrete-syntax-proc-name?
	   ((is-proc-entry? entry)
	    (expand-name-to-lambda
	     (length (proc-entry->formals entry)) e n* udo)))))
      (else
       (make-abs-syn-exp1 e n* udo))))
  
  (define (make-abs-syn-exp1 e n* udo)
    ; concrete-syntax-prim/cstr/sel/pred-name?
    ; O --> (lambda (...) (O ...))
    (if (symbol? e)
	(let loop ((offset (- (vector-length udo) 1)))
	  (if (= offset -1)
	      (make-abs-syn-exp2 e n* udo)
	      (let* ((entry (vector-ref udo offset))
		     (name (_sim-fetch-udo-entry-name entry)))
		(if (equal? e name)
		    (let ((arity (_sim-fetch-udo-entry-arity entry)))
		      (if (equal? arity 'any)
			  (_sim-error
			   'make-abstract-syntax-expr!
			   "primitive ~s with non-fixed arity not in apply-position"
			   name)
			  (expand-name-to-lambda arity e n* udo)))
		    (loop (- offset 1))))))
	(make-abs-syn-exp2 e n* udo)))
  
  (define (make-abs-syn-exp2 e n* udo)
    (cond
      ((concrete-syntax-if? e)
       (let* ((expr-test
	       (make-abstract-syntax-expr!
		(fetch-test e) n* udo))
	      (expr-then
	       (make-abstract-syntax-expr!
		(fetch-then e) n* udo))
	      (expr-else
	       (make-abstract-syntax-expr!
		(fetch-else e) n* udo)))
	 (_sim-make-abstract-syntax-cond expr-test expr-then expr-else)))
      ((concrete-syntax-let? e)
       (let* ((formalvarname (_sim-make-varname (fetch-let-formal e)))
	      (expr-actual
	       (make-abstract-syntax-expr!
		(fetch-let-actual e) n* udo))
	      (expr-body
	       (make-abstract-syntax-expr!
		(fetch-let-body e)
		(upd-env-var formalvarname n*)
		udo)))
	 (_sim-make-abstract-syntax-let
	  formalvarname expr-actual expr-body)))
      ((concrete-syntax-begin? e)
       (_sim-make-abstract-syntax-begin
	(make-abstract-syntax-expr! (fetch-begin-fst e) n* udo)
	(make-abstract-syntax-expr! (fetch-begin-snd e) n* udo)))
      ((concrete-syntax-abs? e)
       (let* ((formalvarnames (map _sim-make-varname (fetch-abs-formals e)))
	      (body (make-abstract-syntax-expr!
		     (fetch-abs-body e)
		     (upd-env-var* formalvarnames n*)
		     udo)))
	 (_sim-make-abstract-syntax-abs
	  (_sim-genint! 'next)
	  formalvarnames
	  (_sim-insert-let-expressions body formalvarnames))))
      ((concrete-syntax-app? e n*)
       (let ((expr-exp
	      (make-abstract-syntax-expr!
	       (fetch-operator-exp e) n* udo)))
	 (_sim-make-abstract-syntax-app
	  expr-exp
	  (map (lambda (e) (make-abstract-syntax-expr! e n* udo))
	       (fetch-args e)))))
      (else
       (make-abs-syn-exp3
	e n* udo
	(lambda () (make-abs-syn-exp4 e n* udo))))))
  
  (define (make-abs-syn-exp3 e n* udo c)
    ; concrete-syntax-pcall?
    (if (pair? e)
	(let ((op (fetch-operator e))
	      (args (fetch-args e)))
	  (if (symbol? op)
	      (let ((entry (lookup op n*)))
		(if (is-proc-entry? entry)
		    (if (= (length args) (length (proc-entry->formals entry)))
			(_sim-make-abstract-syntax-pcall
			 op
			 (map (lambda (e)
				(make-abstract-syntax-expr! e n* udo))
			      args))
			(_sim-error 'make-abstract-syntax-expr!
				    "arity mismatch in procedure call: ~s"
				    e))
		    (c)))
	      (c)))
	(c)))
  
  (define (make-abs-syn-exp4 e n* udo)
    ; concrete-syntax-primop?
    ; concrete-syntax-cstr?
    ; concrete-syntax-sel?
    ; concrete-syntax-pred?
    (define (cstr-index name)
      (let loop ((offset (- (vector-length udo) 1)))
	(cond
	  ((= offset -1)
	   (_sim-error 'make-abs-syn-exp4 "Constructor not defined: ~s" name))
	  ((equal? name (_sim-fetch-udo-entry-name (vector-ref udo offset)))
	   offset)
	  (else
	   (loop (- offset 1))))))
    (if (pair? e)
	(let ((op (fetch-operator e)))
	  (let loop
	      ((offset (- (vector-length udo) 1)))
	    (if (= offset -1)
		(make-abs-syn-exp5 e n* udo)
		(if (equal? op (_sim-fetch-udo-entry-name
				(vector-ref udo offset)))
		    (let* ((entry (vector-ref udo offset))
			   (arity (_sim-fetch-udo-entry-arity entry))
			   (form (_sim-fetch-udo-entry-form entry))
			   (args (fetch-args e)))
		      (if (or (equal? arity 'any)
			      (= arity (length args)))
			  (case form
			    ((sel)
			     (let ((cstr
				    (_sim-fetch-udo-entry-sel-cstr entry)))
			       (_sim-make-abstract-syntax-sel
				op offset
				(_sim-fetch-udo-entry-sel-proj entry) cstr
				(cstr-index cstr)
				(make-abstract-syntax-expr!
				 (car args) n* udo))))
			    ((pred)
			     (let ((cstr
				    (_sim-fetch-udo-entry-pred-cstr entry)))
			       (_sim-make-abstract-syntax-pred
				op offset cstr (cstr-index cstr)
				(make-abstract-syntax-expr!
				 (car args) n* udo))))
			    (else
			     (let ((e* (map (lambda (e)
					      (make-abstract-syntax-expr!
					       e n* udo))
					    args)))
			       (case form
				 ((primop)
				  (_sim-make-abstract-syntax-primop
				   op offset
				   (_sim-fetch-udo-entry-primop-referentiality
				    entry)
				   e*))
				 ((cstr)
				  (_sim-make-abstract-syntax-cstr
				   op offset e*))))))
			  (_sim-error 'make-abstract-syntax-expr!
				      "arity mismatch in the combination: ~s"
				      e)))
		    (loop (- offset 1))))))
	(make-abs-syn-exp5 e n* udo)))
  
  (define (make-abs-syn-exp5 e n* udo)
    (if (concrete-syntax-letrec? e)
	(let* ((bindings (fetch-letrec-bindings e))
	       (new-n* (let loop ((b* bindings))
			 (if (null? b*)
			     n*
			     (let ((binding (car b*)))
			       (upd-env-proc
				(fetch-binding-name binding)
				(fetch-binding-formals binding)
				(loop (cdr b*))))))))
	  (_sim-make-abstract-syntax-letrec
	   (map (lambda (binding)
		  (let* ((name (car binding))
			 (lam-exp (cadr binding))
			 (formalvarnames (map _sim-make-varname
					      (fetch-abs-formals lam-exp)))
			 (body (fetch-abs-body lam-exp)))
		    (_sim-make-abstract-syntax-def
		     name
		     formalvarnames
		     (_sim-insert-let-expressions
		      (make-abstract-syntax-expr!
		       body (upd-env-var* formalvarnames new-n*) udo)
		      formalvarnames))))
		bindings)
	   (make-abstract-syntax-expr!
	    (fetch-letrec-body e) new-n* udo)))
	(_sim-error 'make-abstract-syntax-expr! "unknown expression: ~s" e)))
  

  ; -------------------------------------------------------------------------
  
  (define (expand-name-to-lambda arity e n* udo)
    (let loop ((n arity) (pars '()))
      (if (= n 0)
	  (make-abstract-syntax-expr!
	   (list 'lambda pars (cons e pars)) n* udo)
	  (let ((name (get-new-var "" (list e))))
	    (loop (- n 1) (cons name pars))))))

  ; =========================================================================
  ; =========================================================================
  
  (define (is-load? e)
    (and (pair? e)
	 (equal? (car e) 'load)
	 (pair? (cdr e))
	 (null? (cddr e))))
  
  (define (is-loads? e)
    (and (pair? e)
	 (equal? (car e) 'loads)
	 (pair? (cdr e))
	 (null? (cddr e))))
  
  (define (is-loadt? e)
    (and (pair? e)
	 (equal? (car e) 'loadt)
	 (pair? (cdr e))
	 (null? (cddr e))))
  
  (define (is-define? e)
    (and (pair? e)
	 (equal? (car e) 'define)
	 (pair? (cdr e))
	 (pair? (cadr e))
	 (proper-list? (cadr e))
	 (_sim-andmap symbol? (cadr e))
	 (non-empty-proper-list? (cddr e))))
  
  ;; (define (is-extend-syntax? e)	 ; (extend-syntax (name) clause+)
  ;;  (and (pair? e) (equal? (car e) 'extend-syntax)))
  
  ;--------------------------------------------------------------------------
  ; main function:
  
  (display "front-end ") (_sim-flush-output-port)

  (_sim-init-var-index-counter!)
  
  ; 4 arguments to loop:
  ; l: list of user written stuff
  ; adt-file*: names of adt files seen so far
  ; def*: procedure definitions seen so far
  ; c: continuation
  (let loop
      ((l (_sim-compile-casematch (_sim-normalize-sim-name file)))
       (adt-file* '())
       (def* '())
       (c (lambda (adt-file* def*)
	    ; adt-file* and def* are in reverse order at this point;
	    ; they are both reversed below
	    (let* ((adt-file*
		    (let loop ((l adt-file*) (new-l '()))
		      (if (null? l)
			  (cons
			   '(string-append **Similix-library** "scheme.adt")
			   new-l)
			  (let ((f (car l))
				(r (cdr l)))
			    (if (member f r)
				(loop r new-l)
				(loop r (cons f new-l)))))))
		   (udo (_sim-fully-lazy-assoc-udo-program adt-file*))
		   (ncl (find-dangerous-names def* udo))
		   (concr-def*
		    (let loop ((def* def*) (new-def* '()))
		      (if (null? def*)
			  new-def*
			  (let* ((d (car def*))
				 (name (fetch-define-name d))
				 (formals (fetch-define-formals d)))
			    (if (let loop ((d* new-def*))
				  (or (null? d*)
				      (and (not (equal?
						 name (fetch-define-name
						       (car d*))))
					   (loop (cdr d*)))))
				(begin
				  (macro-expand-body!
				   (fetch-d-define-bodies d) formals formals
				   (test-name* formals ncl))
				  (loop (cdr def*) (cons d new-def*)))
				(_sim-error 'front-end
					    "Procedure defined twice: ~s"
					    name)))))))
	      
	      ;; (pp concr-def*)
	      
	      (_sim-genint! 'reset)
	      
	      ; first compute "initial" udp:
	      (let* ((goal-formals '())
		     (goal-formalvarnames '())
		     (p* (let loop ((cd* concr-def*))
			   (if (null? cd*)
			       (init-env)
			       (upd-env-proc (fetch-define-name (car cd*))
					     (fetch-define-formals (car cd*))
					     (loop (cdr cd*))))))
		     (defs
		       (map
			(lambda (d)
			  (let* ((name (fetch-define-name d))
				 (formals (fetch-define-formals d))
				 (formalvarnames
				  (map _sim-make-varname formals)))
			    (if (equal? name goal-name)
				(begin
				  (set! goal-formals formals)
				  (set! goal-formalvarnames formalvarnames)))
			    (_sim-make-abstract-syntax-def
			     name
			     formalvarnames
			     (_sim-insert-let-expressions
			      (make-abstract-syntax-expr!
			       (fetch-define-body d)
			       (upd-env-var* formalvarnames p*) udo)
			      formalvarnames))))
			concr-def*))
		     (udp (list->vector
			   (cons (_sim-make-abstract-syntax-def
				  '_sim-goal
				  goal-formalvarnames
				  (_sim-insert-let-expressions
				   (make-abs-syn-exp3
				    (rebuild-concrete-syntax-pcall
				     goal-name goal-formals)
				    (upd-env-var* goal-formalvarnames p*)
				    udo
				    (lambda ()
				      (_sim-error
				       'front-end
				       "Undefined goal procedure: ~s"
				       goal-name)))
				   goal-formalvarnames))
				 defs))))

		; then add indices to procedure calls (to make called
		; proc-names unique before lambda-lifting):
		(_sim-compute-proc-indices! udp)

		; then lambda-lift (before computing free-vars fields
		; of abstractions as lambda lifting may add parameters
		; to calls in abstraction bodies):
		(let* ((pgm (_sim-make-abstract-syntax-pgm adt-file* udp))
		       (new-udp (_sim-lambda-lift! udp)))
		  (_sim-set-pgm-udp! pgm new-udp)

		  ; finally, compute free-vars fields of abstractions and
		  ; copmpute Debruijn-indices of variable occurrences
		  ; (in that order, _sim-deBruijn! uses the free-vars fields)
		  (_sim-vector-for-each
		   (lambda (d)
		     (let ((body (_sim-fetch-def-exp d)))
		       (_sim-add-free-vars-of-abstractions! body)
		       (_sim-deBruijn! body (_sim-fetch-def-pars d))))
		   new-udp)
		  pgm)))))) ; Return point
    (if (null? l)
	; Finished, convert to abstract syntax:
	(c adt-file* def*)
	; Continue:
	(let ((e (car l))
	      (rest (cdr l)))
	  (cond
	    ((is-load? e)
	     (loop (file->list (cadr e))
		   adt-file* def*
		   (lambda (adt-file* def*)
		     (loop rest adt-file* def* c))))
	    ((is-loads? e)
	     (loop (_sim-compile-casematch (cadr e))
		   adt-file* def*
		   (lambda (adt-file* def*)
		     (loop rest adt-file* def* c))))
	    ((is-loadt? e)
	     (loop rest
		   (cons (cadr e) adt-file*)
		   def* c))
	    ((is-define? e)
	     (loop rest adt-file* (cons e def*) c))
	    ;; ; partial-expand expands applications af macros
	    ;; ; defined with extend-syntax:
	    ;; ((is-define? e)
	    ;;  (loop rest adt-file* (cons (partial-expand e) def*) c))
	    ;; ((is-extend-syntax? e)
	    ;;  (begin
	    ;;    (_sim-eval e)
	    ;;    (loop rest adt-file* def* c)))
	    (else
	     (_sim-error 'front-end "Not a legal expression: ~s" e)))))))

; -----------------------------------------------------------------------------
