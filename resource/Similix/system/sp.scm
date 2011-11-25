; Similix load file
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------
; Switch for standard memoization points:

(define **Similix-standard-memoization** #t)
(define (standard-memoization-on) (set! **Similix-standard-memoization** #t))
(define (standard-memoization-off) (set! **Similix-standard-memoization** #f))

(define (_sim-memoize e) e)

;-----------------------------------------------------------------------------
(define (_sim-sp-analyse! pgm)
  (let* ((udp (_sim-fetch-pgm-udp pgm))
	 (udp-arity (vector-length udp))
	 (new-procedures '())
	 (proc-names (_sim-vector-map (lambda (d) (_sim-fetch-def-name d))
				      udp)))
    

    ; appends a vector to the reverse of a list --- generates a vector;
    ; equivalent to (but more efficient than)
    ; (lambda (v w) (list->vector (append (vector->list v) (reverse w))))
    ; example: (append-vector-to-reverselist '#(1 2 3 4) '(8 7 6 5)) -->
    ;          #(1 2 3 4 5 6 7 8)
    (define (append-vector-to-reverselist v w)
      (let* ((v-arity (vector-length v))
	     (w-arity (length w))
	     (w-arity-1 (- w-arity 1))
	     (new (make-vector (+ v-arity w-arity))))
	(let loop ((i 0))
	  (or (= i v-arity)
	      (begin (vector-set! new i (vector-ref v i))
		     (loop (+ 1 i)))))
	(let loop ((i 0))
	  (or (= i w-arity)
	      (begin (vector-set!
		      new
		      (+ i v-arity)
		      (list-ref w (- w-arity-1 i)))
		     (loop (+ 1 i)))))
	new))

    (define (sp-def! d)
      (let* ((e (_sim-fetch-def-exp d))
	     (nam (_sim-sym/num/string-append (_sim-fetch-def-name d) "-")))

	; The boolean "ins" is returned by sp! when processing e; ins is
	; #t if a new call must replace some outer expression containing e.
	;
	; Specialization point insertion strategy: specialization points
	; are inserted in expressions containing dynamic conditionals or
	; dynamic "non-trivial" lambda abstractions (controlled by a flag
	; that may switch standard insertions points off).
	; The insertion points are at static conditionals, at static
	; (or, in principle, dynamic "trivial") lambda abstractions,
	; and in argument positions of other compound expressions with
	; non-dynamic result (to prevent inserting a specialization point
	; at a non-dynamic point later on).
	;
	; Specialization points are always inserted at the primitive
	; operation (_sim-memoize E) (and #f is returned as ins value).
	
	(define (sp! e)
	  (cond
	    ((_sim-isLift? e)
	     (sp! (_sim-fetch-lift-arg e)))
	    ((_sim-isCst? e)
	     #f)
	    ((_sim-isVar? e)
	     #f)
	    ((_sim-isCond? e)
	     (let* ((cond-test (_sim-fetch-cond-test e))
		    (cond-then (_sim-fetch-cond-then e))
		    (cond-else (_sim-fetch-cond-else e))
		    (ins-test (sp! cond-test))
		    (ins-then (sp! cond-then))
		    (ins-else (sp! cond-else)))
	       (or (_sim-isDynamic? cond-test)
		   (begin
		     (if ins-then
			 (_sim-set-cond-then!
			  e (standard-insert-pcall! cond-then)))
		     (if ins-else
			 (_sim-set-cond-else!
			  e (standard-insert-pcall! cond-else)))
		     #f))))
	    ((_sim-isLet? e)
	     (let* ((actual (_sim-fetch-let-actual e))
		    (body (_sim-fetch-let-body e)))
	       (if (_sim-isDynamic? e)
		   (_sim-strict-or (sp! actual) (sp! body))
		   (begin
		     (if (sp! actual)
			 (_sim-set-let-actual!
			  e (standard-insert-pcall! actual)))
		     (if (sp! body)
			 (_sim-set-let-body! e (standard-insert-pcall! body)))
		     #f))))
	    ((_sim-isBegin? e)
	     (let* ((fst (_sim-fetch-begin-fst e))
		    (snd (_sim-fetch-begin-snd e)))
	       (if (_sim-isDynamic? e)
		   (_sim-strict-or (sp! fst) (sp! snd))
		   (begin
		     (if (sp! fst)
			 (_sim-set-begin-fst! e (standard-insert-pcall! fst)))
		     (if (sp! snd)
			 (_sim-set-begin-snd! e (standard-insert-pcall! snd)))
		     #f))))
	    ((_sim-isPrimop? e)
	     (let ((e* (_sim-fetch-primop-args e)))
	       (if (equal? (_sim-fetch-primop-name e) '_sim-memoize)
		   (begin
		     (set-car! e* (insert-pcall! (car e*)))
		     #f)
		   (sp*! e e*))))
	    ((_sim-isCstr? e)
	     (sp*! e (_sim-fetch-cstr-args e)))
	    ((_sim-isSel? e)
	     (let ((arg (_sim-fetch-sel-arg e)))
	       (if (_sim-isDynamic? e)
		   (sp! arg)
		   (begin (if (sp! arg)
			      (_sim-set-sel-arg!
			       e (standard-insert-pcall! arg)))
			  #f))))
	    ((_sim-isPred? e)
	     (let ((arg (_sim-fetch-pred-arg e)))
	       (if (_sim-isDynamic? e)
		   (sp! arg)
		   (begin (if (sp! arg)
			      (_sim-set-pred-arg!
			       e (standard-insert-pcall! arg)))
			  #f))))
	    ((_sim-isPcall? e)
	     (sp*! e (_sim-fetch-pcall-args e)))
	    ((_sim-isAbs? e)
	     (let* ((body (_sim-fetch-abs-body e))
		    (ins (sp! body)))
	       (or (and (_sim-isDynamic? e) (not (trivial? body)))
		   (begin
		     (if ins (_sim-set-abs-body!
			      e (standard-insert-pcall! body)))
		     #f))))
	    ((_sim-isApp? e)
	     (let ((exp (_sim-fetch-app-exp e))
		   (e* (_sim-fetch-app-args e)))
	       (if (_sim-isDynamic? e)
		   (_sim-strict-or (sp! exp) (sp*-propagate! e*))
		   (begin
		     (if (sp! exp) ; impossible in practice
			 (_sim-set-app-exp! e (standard-insert-pcall! exp)))
		     (sp*-insert! e e*)))))
	    (else
	     (_sim-error 'sp! "unknown syntactic form: ~s" e))))
	
	(define (sp*! e e*)
	  (if (_sim-isDynamic? e)
	      (sp*-propagate! e*)
	      (sp*-insert! e e*)))
	
	; no insertion done for subexpressions:
	(define (sp*-propagate! e*)
	  (and (not (null? e*))
	       (_sim-strict-or (sp! (car e*))
			       (sp*-propagate! (cdr e*)))))
	
	; always returns #f; specialization points will have
	; been inserted for relevant subexpressions
	(define (sp*-insert! e e*)
	  (and (not (null? e*))
	       (let ((e (car e*)))
		 (if (sp! e)
		     (set-car! e* (standard-insert-pcall! e)))
		 (sp*-insert! e (cdr e*)))))
	
	

	; standard-insert-pcall! calls insert-pcall! or just returns its
	; argument
	(define (standard-insert-pcall! e)
	  (if **Similix-standard-memoization**
	      (insert-pcall! e)
	      e))
	; insert-pcall! generates a fresh procedure and returns
	; a fresh call to that procedure
	(define (insert-pcall! e)
	  (let* ((name
		  (let loop ()
		    (let ((n (_sim-sym/num/string-append
			      nam (_sim-genint! 'next))))
		      (if (member n proc-names) (loop) n))))
		 (free-vars (_sim-find-free-vars e '()))
		 ; Copy free-vars because of side-effects in _sim-deBruijn!:
		 (arg* (map _sim-copy free-vars)) 
		 (par (map _sim-fetch-var-varname free-vars))
		 (btp (map _sim-fetch-bt-tag free-vars))
		 (bt-tag (_sim-fetch-bt-tag e))
		 (eod-tag (_sim-fetch-eod-tag e)))
	    (begin
	      (let ((new-def
		     (let ((def (_sim-make-abstract-syntax-inserted-def
				 name par btp
				 (insert-let-expressions-sp
				  e par btp bt-tag eod-tag))))
		       ; Here the side-effects occur:
		       (begin (_sim-deBruijn! (_sim-fetch-def-exp def)
					      (_sim-fetch-def-pars def))
			      def))))
		(set! new-procedures (cons new-def new-procedures)))
	      (_sim-make-abstract-syntax-inserted-pcall
	       (_sim-fetch-bt-tag e)
	       name
	       (- (+ udp-arity (length new-procedures)) 1) ; HACK!
	       arg*))))
	
	(_sim-genint! 'reset)
	(if (sp! e) (_sim-set-def-exp! d (standard-insert-pcall! e)))
	(_sim-deBruijn! (_sim-fetch-def-exp d) (_sim-fetch-def-pars d))))
    
    ;------------------------------------------------------------------------
    
    ; The bodies of some lambda abstractions are considered "trivial";
    ; no folding is performed for these abstractions.
    (define (trivial? e)
      (or (_sim-isCst? e)
	  (_sim-isVar? e)
	  (and (_sim-isLet? e)
	       (trivial? (_sim-fetch-let-actual e))
	       (trivial? (_sim-fetch-let-body e)))))
    
    (define (insert-let-expressions-sp exp lpar btp bt-tag eod-tag)
      (if (null? lpar)
	  exp
	  (_sim-make-abstract-syntax-inserted-let
	   bt-tag eod-tag (car lpar)
	   (_sim-make-abstract-syntax-inserted-var (car btp) (car lpar))
	   (insert-let-expressions-sp
	    exp (cdr lpar) (cdr btp) bt-tag eod-tag))))
    
    ;------------------------------------------------------------------------
    ; main function:
    
    (begin
      (_sim-vector-for-each sp-def! udp)
      (_sim-set-pgm-udp!
       pgm (append-vector-to-reverselist udp new-procedures)))))

; -----------------------------------------------------------------------------
