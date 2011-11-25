
; Similix abstract syntax file
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.

;-----------------------------------------------------------------------------

(define (_sim-write-object obj)
  (cond ((pair? obj) (_sim-sym/num/string-append
		      "(" (map _sim-write-object obj) ")"))
;	((symbol? obj) (symbol->string obj))
	(else  obj)))


; Programs:
; ---------
(define _sim-fetch-pgm-adt-file* (lambda (pgm) (vector-ref pgm 0)))
(define _sim-fetch-pgm-udp (lambda (pgm) (vector-ref pgm 1)))
(define _sim-set-pgm-udp! (lambda (pgm udp) (vector-set! pgm 1 udp)))
(define _sim-fetch-pgm-orig-arity (lambda (pgm) (vector-ref pgm 2)))
(define _sim-make-abstract-syntax-pgm
  (lambda (adt-file* udp)
    (vector adt-file* udp (vector-length udp))))


; udp's:
; ------
(define (_sim-fetch-udp-def-from-index udp i)
  (vector-ref udp i))
(define (_sim-fetch-udp-def udp e)
  (vector-ref udp (_sim-fetch-pcall-index e)))



; VarNames:
; ---------
(define _sim-var-index-counter 0)
(define (_sim-init-var-index-counter!) (set! _sim-var-index-counter 0))
(define _sim-varname->name car)
(define _sim-varname->index cdr)
(define _sim-set-varname-index! set-cdr!)
(define (_sim-make-varname name)
  (let ((index _sim-var-index-counter))
    (set! _sim-var-index-counter (+ 1 _sim-var-index-counter))
    (cons name index)))

; Procedure definitions:
; ----------------------
(define _sim-fetch-def-name (lambda (d) (vector-ref d 0)))
(define _sim-fetch-def-pars (lambda (d) (vector-ref d 1)))
(define _sim-set-def-pars! (lambda (d v) (vector-set! d 1 v)))
(define (_sim-fetch-def-arity def) (length (_sim-fetch-def-pars def)))
(define _sim-fetch-def-flowp (lambda (d) (vector-ref d 2)))
(define _sim-set-def-flowp! (lambda (d flowp) (vector-set! d 2 flowp)))
(define _sim-fetch-def-btp (lambda (d) (vector-ref d 3)))
(define _sim-set-def-btp! (lambda (d btp) (vector-set! d 3 btp)))
(define _sim-fetch-def-exp (lambda (d) (vector-ref d 4)))
(define _sim-set-def-exp! (lambda (d v) (vector-set! d 4 v)))
(define _sim-fetch-def-unfoldability-tag (lambda (d) (vector-ref d 5)))
(define _sim-set-def-unfoldability-tag! (lambda (d u) (vector-set! d 5 u)))
(define _sim-raise-def-unfoldability-tag!
  (lambda (d) (vector-set! d 5 'to-be-specialized)))
(define _sim-unfoldable-procedure?
  (lambda (d) (equal? (_sim-fetch-def-unfoldability-tag d) 'to-be-unfolded)))
(define _sim-make-abstract-syntax-def
  (lambda (name formalvarnames body)
    (vector name
	    formalvarnames
	    (map (lambda (dummy) _sim-flow-bottom-value) formalvarnames)
	    (map (lambda (dummy) _sim-bt-bottom-value) formalvarnames)
	    body 'to-be-unfolded)))
(define _sim-make-abstract-syntax-inserted-def
  (lambda (name formalvarnames flowp btp body)
    (vector name formalvarnames flowp btp body 'to-be-specialized)))


; Expressions:
; ------------

; Checking binding time:
(define (_sim-isBottom? e) (_sim-bt-bottom? (_sim-fetch-bt-tag e)))
(define (_sim-isStatic? e) (_sim-bt-static? (_sim-fetch-bt-tag e)))
(define (_sim-isPsds? e) (_sim-bt-psds? (_sim-fetch-bt-tag e)))
(define (_sim-isClosure? e) (_sim-bt-closure? (_sim-fetch-bt-tag e)))
(define (_sim-isDynamic? e) (_sim-bt-dynamic? (_sim-fetch-bt-tag e)))

; Checking evaluation order dependency:
(define (_sim-isImperative? e) (_sim-eod-imperative? (_sim-fetch-eod-tag e)))

; Getting and updating expression flow-tags:
(define _sim-fetch-flow-tag (lambda (e) (vector-ref (vector-ref e 1) 0)))
(define _sim-set-flow-tag! (lambda (e v) (vector-set! (vector-ref e 1) 0 v)))
(define _sim-fetch-flow-tag* (lambda (e*) (map _sim-fetch-flow-tag e*)))

; Getting and updating expression bt-tags:
(define _sim-fetch-bt-tag (lambda (e) (vector-ref (vector-ref e 1) 1)))
(define _sim-set-bt-tag! (lambda (e v) (vector-set! (vector-ref e 1) 1 v)))
(define _sim-fetch-bt-tag* (lambda (e*) (map _sim-fetch-bt-tag e*)))


; Getting and updating expression dyn-dep:
(define sim-fetch-dyn-dep (lambda (e) (vector-ref (vector-ref e 1) 3)))
(define _sim-set-dyn-dep! (lambda (e v) (vector-set! (vector-ref e 1) 3 v)))
(define _sim-fetch-dyn-dep* (lambda (e*) (map _sim-fetch-dyn-dep e*)))


(define _sim-fetch-dyn-ptr (lambda (e) (vector-ref (vector-ref e 0) 3)))
(define _sim-fetch-dyn-ptr* (lambda (e*) (map _sim-fetch-dyn-ptr e*)))


; Getting and updating expression eod-tags:
(define _sim-fetch-eod-tag (lambda (e) (vector-ref (vector-ref e 1) 2)))
(define _sim-set-eod-tag! (lambda (e v) (vector-set! (vector-ref e 1) 2 v)))
(define _sim-fetch-eod-tag* (lambda (e*) (map _sim-fetch-eod-tag e*)))

; Getting and updating localdefs-tags:
(define _sim-fetch-local-defs (lambda (e) (vector-ref e 2)))
(define _sim-set-local-defs! (lambda (e v) (vector-set! e 2 v)))


; Accessing names and indices in (Name Index)-lists
(define _sim-fetch-name-from-n+i car)
(define _sim-fetch-index-from-n+i cadr)
(define _sim-set-index-in-n+i! (lambda (n+i i) (set-car! (cdr n+i) i)))


; Lift expressions:
; ---------------------
(define _sim-isLift? (lambda (e) (equal? (vector-ref e 0) 'lift)))
(define _sim-fetch-lift-arg (lambda (e) (vector-ref e 3)))
(define _sim-set-lift-arg! (lambda (e v) (vector-set! e 3 v)))
(define _sim-make-abstract-syntax-lift
  (lambda (arg)
    (vector
     'lift (vector (_sim-fetch-flow-tag arg) _sim-bt-dynamic-value _sim-eod-bottom-value) '() arg)))



; Constant expressions:
; ---------------------
(define _sim-isCst? (lambda (e) (equal? (vector-ref e 0) 'cst)))
(define _sim-fetch-cst-value (lambda (e) (vector-ref e 3)))
(define _sim-make-abstract-syntax-cst
  (lambda (value)
    (vector
     'cst (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '() value)))


; Variables:
; ----------
(define _sim-isVar? (lambda (e) (equal? (vector-ref e 0) 'var)))
(define _sim-fetch-var-varname (lambda (e) (vector-ref e 3)))
(define _sim-set-var-varname! (lambda (e v) (vector-set! e 3 v)))
(define _sim-fetch-var-name
  (lambda (e) (_sim-varname->name (_sim-fetch-var-varname e))))
(define _sim-fetch-var-index
  (lambda (e) (_sim-varname->index (_sim-fetch-var-varname e))))
(define _sim-set-var-index!
  (lambda (e n) (_sim-set-varname-index! (_sim-fetch-var-varname e) n)))
(define _sim-fetch-var-debruijn (lambda (e) (vector-ref e 4)))
(define _sim-set-var-debruijn! (lambda (e v) (vector-set! e 4 v)))
(define _sim-make-abstract-syntax-var
  (lambda (varname)
    (vector 'var (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    varname "debruijn")))

(define _sim-make-abstract-syntax-inserted-var
  (lambda (flow-tag bt-tag varname)
    (vector 'var (vector flow-tag bt-tag _sim-eod-bottom-value) '()
	    varname "debruijn")))
(define _sim-make-abstract-syntax-pseudo-var
  (lambda (debruijn)
    (vector 'var (vector 'void 'void 'void) 'void
	    (_sim-make-varname 'void) debruijn)))


; Conditional expressions:
; ------------------------
(define _sim-isCond? (lambda (e) (equal? (vector-ref e 0) 'cond)))
(define _sim-fetch-cond-test (lambda (e) (vector-ref e 3)))
(define _sim-set-cond-test! (lambda (e v) (vector-set! e 3 v)))
(define _sim-fetch-cond-then (lambda (e) (vector-ref e 4)))
(define _sim-set-cond-then! (lambda (e v) (vector-set! e 4 v)))
(define _sim-fetch-cond-else (lambda (e) (vector-ref e 5)))
(define _sim-set-cond-else! (lambda (e v) (vector-set! e 5 v)))
(define _sim-make-abstract-syntax-cond
  (lambda (test-part then-part else-part)
    (vector 'cond (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    test-part then-part else-part)))

(define _sim-fetch-cond-test-flowp (lambda (e) (vector-ref (vector-ref e 1) 0)))
(define _sim-set-cond-test-flowp! (lambda (e flowp) (vector-set! (vector-ref e 1) 0 flowp)))

(define _sim-fetch-cond-test-btp (lambda (d) (vector-ref (vector-ref d 1) 1)))
(define _sim-set-cond-test-btp! (lambda (d btp) (vector-set! (vector-ref d 1) 1 btp)))

(define _sim-fetch-cond-testexpr (lambda (e) (vector-ref (vector-ref e 3) 3)))

; Let-expressions:
; ----------------
(define _sim-isLet? (lambda (e) (equal? (vector-ref e 0) 'let)))
(define _sim-fetch-let-formal (lambda (e) (vector-ref e 3)))
(define _sim-fetch-let-actual (lambda (e) (vector-ref e 4)))
(define _sim-set-let-actual! (lambda (e v) (vector-set! e 4 v)))
(define _sim-fetch-let-body (lambda (e) (vector-ref e 5)))
(define _sim-set-let-body! (lambda (e v) (vector-set! e 5 v)))
(define _sim-fetch-let-unfoldability (lambda (ae) (vector-ref ae 6)))
(define _sim-raise-let-unfoldability!
  (lambda (ae) (vector-set! ae 6 'residual)))
(define _sim-isLet-unfoldable?
  (lambda (e) (equal? (_sim-fetch-let-unfoldability e) 'unfoldable)))
(define _sim-isLet-residual?
  (lambda (e) (equal? (_sim-fetch-let-unfoldability e) 'residual)))
(define _sim-make-abstract-syntax-let
  (lambda (formalvarname actual body)
    (vector 'let (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    formalvarname actual body 'unfoldable)))
(define _sim-make-abstract-syntax-inserted-let
  (lambda (flow-tag bt-tag eod-tag formalvarname actual body)
    (vector 'let (vector flow-tag bt-tag eod-tag) '()
	    formalvarname actual body 'unfoldable)))


; Begin-expressions:
; ----------------
(define _sim-isBegin? (lambda (e) (equal? (vector-ref e 0) 'begin)))
(define _sim-fetch-begin-fst (lambda (e) (vector-ref e 3)))
(define _sim-set-begin-fst! (lambda (e v) (vector-set! e 3 v)))
(define _sim-fetch-begin-snd (lambda (e) (vector-ref e 4)))
(define _sim-set-begin-snd! (lambda (e v) (vector-set! e 4 v)))
(define _sim-fetch-begin-unfoldability (lambda (ae) (vector-ref ae 5)))
(define _sim-raise-begin-unfoldability!
  (lambda (ae) (vector-set! ae 5 'residual)))
(define _sim-isBegin-unfoldable?
  (lambda (e) (equal? (_sim-fetch-begin-unfoldability e) 'unfoldable)))
(define _sim-isBegin-residual?
  (lambda (e) (equal? (_sim-fetch-begin-unfoldability e) 'residual)))
(define _sim-make-abstract-syntax-begin
  (lambda (f s)
    (vector 'begin (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    f s 'unfoldable)))


; Primitive operations:
; ---------------------
(define _sim-isPrimop? (lambda (e) (equal? (vector-ref e 0) 'primop)))
(define _sim-fetch-primop-n+i (lambda (e) (vector-ref e 3)))
(define _sim-fetch-primop-name
  (lambda (e)
    (_sim-fetch-name-from-n+i (_sim-fetch-primop-n+i e))))
(define _sim-fetch-primop-index
  (lambda (e)
    (_sim-fetch-index-from-n+i (_sim-fetch-primop-n+i e))))
(define _sim-fetch-primop-referentiality (lambda (e) (vector-ref e 4)))
(define _sim-fetch-primop-args (lambda (e) (vector-ref e 5)))
(define _sim-set-primop-args! (lambda (e v) (vector-set! e 5 v)))
(define _sim-make-abstract-syntax-primop
  (lambda (op index ref args)
    (vector 'primop (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    (list op index) ref args)))


; Constructor expressions:
; ------------------------
(define _sim-isCstr? (lambda (e) (equal? (vector-ref e 0) 'cstr)))
(define _sim-fetch-cstr-n+i (lambda (e) (vector-ref e 3)))
(define _sim-fetch-cstr-name
  (lambda (e)
    (_sim-fetch-name-from-n+i (_sim-fetch-cstr-n+i e))))
(define _sim-fetch-cstr-index
  (lambda (e)
    (_sim-fetch-index-from-n+i (_sim-fetch-cstr-n+i e))))
(define _sim-fetch-cstr-args (lambda (e) (vector-ref e 4)))
(define _sim-set-cstr-args! (lambda (e v) (vector-set! e 4 v)))
(define _sim-make-abstract-syntax-cstr
  (lambda (op index args)
    (vector 'cstr (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    (list op index) args)))


; Selector expressions:
; ---------------------
(define _sim-isSel? (lambda (e) (equal? (vector-ref e 0) 'sel)))
(define _sim-fetch-sel-n+i (lambda (e) (vector-ref e 3)))
(define _sim-fetch-sel-proj-from-n+i caddr)
(define _sim-fetch-sel-cstr-from-n+i cadddr)
(define _sim-fetch-sel-name
  (lambda (e)
    (_sim-fetch-name-from-n+i (_sim-fetch-sel-n+i e))))
(define _sim-fetch-sel-index
  (lambda (e)
    (_sim-fetch-index-from-n+i (_sim-fetch-sel-n+i e))))
(define _sim-fetch-sel-proj
  (lambda (e)
    (_sim-fetch-sel-proj-from-n+i (_sim-fetch-sel-n+i e))))
(define _sim-fetch-sel-cstr
  (lambda (e)
    (_sim-fetch-sel-cstr-from-n+i (_sim-fetch-sel-n+i e))))
(define _sim-fetch-sel-cstrindex (lambda (e) (vector-ref e 4)))
(define _sim-fetch-sel-arg (lambda (e) (vector-ref e 5)))
(define _sim-set-sel-arg! (lambda (e v) (vector-set! e 5 v)))
(define _sim-make-abstract-syntax-sel
  (lambda (op index proj cstr cstr-index arg)
    (vector 'sel (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    (list op index proj cstr) cstr-index arg)))



; Predicate expressions:
; ----------------------
(define _sim-isPred? (lambda (e) (equal? (vector-ref e 0) 'pred)))
(define _sim-fetch-pred-n+i (lambda (e) (vector-ref e 3)))
(define _sim-fetch-pred-cstr-from-n+i caddr)
(define _sim-fetch-pred-name
  (lambda (e)
    (_sim-fetch-name-from-n+i (_sim-fetch-pred-n+i e))))
(define _sim-fetch-pred-index
  (lambda (e)
    (_sim-fetch-index-from-n+i (_sim-fetch-pred-n+i e))))
(define _sim-fetch-pred-cstr
  (lambda (e)
    (_sim-fetch-pred-cstr-from-n+i (_sim-fetch-pred-n+i e))))
(define _sim-fetch-pred-cstrindex (lambda (e) (vector-ref e 4)))
(define _sim-fetch-pred-arg (lambda (e) (vector-ref e 5)))
(define _sim-set-pred-arg! (lambda (e v) (vector-set! e 5 v)))
(define _sim-make-abstract-syntax-pred
  (lambda (op index cstr cstr-index arg)
    (vector 'pred (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    (list op index cstr) cstr-index arg)))


; Procedure calls:
; ----------------
(define _sim-isPcall? (lambda (e) (equal? (vector-ref e 0) 'pcall)))
(define _sim-fetch-pcall-n+i (lambda (e) (vector-ref e 3)))
(define _sim-fetch-pcall-name
  (lambda (e) (_sim-fetch-name-from-n+i (_sim-fetch-pcall-n+i e))))
(define _sim-fetch-pcall-index
  (lambda (e)
    (_sim-fetch-index-from-n+i (_sim-fetch-pcall-n+i e))))
(define _sim-set-pcall-index!
  (lambda (e i)
    (_sim-set-index-in-n+i! (_sim-fetch-pcall-n+i e) i)))
 (define _sim-fetch-pcall-args (lambda (e) (vector-ref e 4)))
(define _sim-set-pcall-args! (lambda (e v) (vector-set! e 4 v)))
(define _sim-make-abstract-syntax-pcall
  (lambda (op args)
    (vector 'pcall (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    (list op "proc index") args)))
(define _sim-make-abstract-syntax-inserted-pcall
  (lambda (flow-tag bt-tag op index args)
    (vector
     'pcall (vector flow-tag bt-tag _sim-eod-bottom-value) '() (list op index) args)))

; Abstractions:
; -------------
(define _sim-isAbs? (lambda (e) (equal? (vector-ref e 0) 'abs)))
(define _sim-fetch-abs-index (lambda (e) (vector-ref e 3)))
(define _sim-fetch-abs-free-variables (lambda (e) (vector-ref e 4)))
(define _sim-set-abs-free-variables! (lambda (e v) (vector-set! e 4 v)))
(define _sim-fetch-abs-free-variable-debruijns
  (lambda (e) (map _sim-fetch-var-debruijn (_sim-fetch-abs-free-variables e))))
(define _sim-fetch-abs-formals (lambda (e) (vector-ref e 5)))
(define _sim-fetch-abs-formals-flowp (lambda (e) (vector-ref e 6)))
(define _sim-set-abs-formals-flowp! (lambda (e flowp) (vector-set! e 6 flowp)))
(define _sim-fetch-abs-formals-btp (lambda (e) (vector-ref e 7)))
(define _sim-set-abs-formals-btp! (lambda (e btp) (vector-set! e 7 btp)))
(define _sim-fetch-abs-body (lambda (e) (vector-ref e 8)))
(define _sim-set-abs-body! (lambda (e v) (vector-set! e 8 v)))
(define _sim-make-abstract-syntax-abs
  (lambda (abs-index formalvarnames body)
    (vector 'abs (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    abs-index "free-vars" formalvarnames
            (map (lambda (dummy) _sim-flow-bottom-value) formalvarnames)
	    (map (lambda (dummy) _sim-bt-bottom-value) formalvarnames)
	    body)))


; Applications:
; -------------
(define _sim-isApp? (lambda (e) (equal? (vector-ref e 0) 'app)))
(define _sim-fetch-app-exp (lambda (e) (vector-ref e 3)))
(define _sim-set-app-exp! (lambda (e v) (vector-set! e 3 v)))
(define _sim-fetch-app-args (lambda (e) (vector-ref e 4)))
(define _sim-set-app-args! (lambda (e v) (vector-set! e 4 v)))
(define _sim-make-abstract-syntax-app
  (lambda (proc-exp arg-exps)
    (vector 'app (vector _sim-flow-bottom-value _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    proc-exp arg-exps)))


(define _sim-fetch-app-flowp (lambda (e) (vector-ref (vector-ref e 1) 0)))
(define _sim-set-app-flowp! (lambda (e flowp) (vector-set! (vector-ref e 1) 0 flowp)))

(define _sim-fetch-app-btp (lambda (d) (vector-ref (vector-ref d 1) 1)))
(define _sim-set-app-btp! (lambda (d btp) (vector-set! (vector-ref d 1) 1 btp)))



; Letrec-expressions: (only used internally by front-end before lambda lifting)
; -------------------
(define _sim-isLetrec? (lambda (e) (equal? (vector-ref e 0) 'letrec)))
(define _sim-fetch-letrec-defs (lambda (e) (vector-ref e 1)))
(define _sim-fetch-letrec-indices (lambda (e) (vector-ref e 2)))
(define _sim-set-letrec-indices! (lambda (e v) (vector-set! e 2 v)))
(define _sim-fetch-letrec-free-vars* (lambda (e) (vector-ref e 3)))
(define _sim-set-letrec-free-vars*! (lambda (e v) (vector-set! e 3 v)))
(define _sim-fetch-letrec-body (lambda (e) (vector-ref e 4)))
(define _sim-set-letrec-body! (lambda (e v) (vector-set! e 4 v)))
(define _sim-make-abstract-syntax-letrec
  (lambda (defs body)
    (vector 'letrec defs "proc-indices" (map (lambda (dummy) '()) defs)
	    body)))


;-----------------------------------------------------------------------------


(define showflow
  (lambda inp
    (let ((len (length inp)))
      (if (= len 0)
          (begin
            (display "Format of showflow facilities:")
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
			    (if (or (equal? def-names 'allflow)
				    (member (_sim-fetch-def-name def)
					    def-names))
				(cons (_sim-show-def-flow def kind udp) rest)
				rest)))))))
	    (case (length inp)
	      ((1) (process 'allflow 'head))
	      ((2) (process (cadr inp) 'head))
	      ((3) (process (cadr inp) (caddr inp)))))))))

(define (showallflow pgm) (showflow pgm 'allflow 'allflow))

(define (showpallflow) (showallflow (preprocessed-program)))

(define (_sim-show-expr-remove-ins-lets-flow e formal* udp)
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
	(_sim-show-expr-flow e udp))))

(define (_sim-show-def-flow def kind udp)
  (let* ((body (_sim-fetch-def-exp def))
	 (formal* (_sim-fetch-def-pars def)))
    (list
     'define
     (cons (_sim-fetch-def-name def)
	   (_sim-show-merge-3-flow
	    formal*
	    (_sim-fetch-def-btp def)
	    (_sim-fetch-def-flowp def)
	    (list '-> (_sim-show-abbr-bt
		       (_sim-fetch-bt-tag body)))))
     (if (equal? kind 'head)
	 '...
	 (_sim-show-expr-remove-ins-lets-flow body formal* udp)))))

(define (_sim-show-merge-3-flow l1 l2 l3 rest)
  (if (null? l1)
      rest
      (let ((varname (car l1)))
	(cons (_sim-sym/num/string-append
	       (_sim-varname->name varname)
	       (if **Similix-show-variable-index**
		   (_sim-varname->index (car l1))
		   "")
	       ":" (_sim-show-abbr-bt (car l2))
	       "<" (car l3) ">")
	      (_sim-show-merge-3-flow (cdr l1) (cdr l2) (cdr l3) rest)))))


(define (_sim-show-merge-1 l1 l2 l3 rest)
  (if (not (null? l1))
      (let ((varname l1))
	(cons (_sim-sym/num/string-append
	       (_sim-varname->name varname)
	       (if **Similix-show-variable-index**
		   (_sim-varname->index (car l1))
		   "")
	       ":" (_sim-show-abbr-bt l2)
	       "<" l3 ">") rest))
      (cons (((((":" (_sim-show-abbr-bt l2)) "<") l3) ">") rest))))

;(define (_sim-show-merge l1 l2 rest)
;  (if (null? l1)
;      rest
;      (let ((varname (car l1)))
;	(cons (_sim-sym/num/string-append
;	       (_sim-varname->name varname)
;	       (if **Similix-show-variable-index**
;		   (_sim-varname->index (car l1))
;		   "")
;	       ":" (_sim-show-abbr-bt (car l2)))
;	      (_sim-show-merge (cdr l1) (cdr l2) rest)))))

(define (_sim-show-expr-flow e udp)
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
	      (list 'lift (loop (_sim-fetch-lift-arg e))))
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
		 ":<" (_sim-fetch-flow-tag e) ">")))
	     ((_sim-isVar? e)
	      (if **Similix-show-variable-index**
		  (_sim-sym/num/string-append
		   (_sim-fetch-var-name e) (_sim-fetch-var-index e))
		  (_sim-fetch-var-name e)))
	     ((_sim-isCond? e)
	      (let ((test (_sim-fetch-cond-test e)))
		(list (if (_sim-isDynamic? test) '_if 'if)

;		      (_sim-write-object (loop test))
;		      (_sim-sym/num/string-append 
;		       ":<" (_sim-fetch-flow-tag test) "> ")

		      (_sim-sym/num/string-append
		       (format "" "~a" (loop test))
		       ":<" (_sim-fetch-flow-tag test) "> ")

		      (loop (_sim-fetch-cond-then e))
		      (loop (_sim-fetch-cond-else e)))))
	     ((_sim-isLet? e)
	      (let* ((formalvarname (_sim-fetch-let-formal e))
		     (actual (_sim-fetch-let-actual e))
		     (res-actual (loop actual))
		     (res-body (loop (_sim-fetch-let-body e))))
		(list
		 (if (_sim-isLet-unfoldable? e) 'let '_let)
		 (list (list
			(_sim-sym/num/string-append
			 (_sim-varname->name formalvarname)
			 (if **Similix-show-variable-index**
			     (_sim-varname->index formalvarname)
			     "")
			 ":"
			 (_sim-show-abbr-bt (_sim-fetch-bt-tag actual))
                         "<" (_sim-fetch-flow-tag actual) ">")
			res-actual))
		 res-body)))
	     ((_sim-isBegin? e)
	      (list (if (_sim-isBegin-unfoldable? e) 'begin '_begin)
		    (loop (_sim-fetch-begin-fst e))
		    (loop (_sim-fetch-begin-snd e))))
	     ((_sim-isPrimop? e)
	      (let ((name (_sim-fetch-primop-name e)))
		(cons (_sim-sym/num/string-append
		       (if (or (_sim-isDynamic? e)
			       (member (_sim-fetch-primop-referentiality e)
				       '(abort abort-eoi)))
			   (_sim-sym/num/string-append "_" name)
			   name)
		       ":<" (_sim-fetch-flow-tag e) ">")
		      (map loop (_sim-fetch-primop-args e)))))
	     ((_sim-isCstr? e)
	      (let ((name (_sim-fetch-cstr-name e)))
		(cons (_sim-sym/num/string-append
		       (if (_sim-isPsds? e)
			   name
			   (_sim-sym/num/string-append "_" name))
		       ":<" (_sim-fetch-flow-tag e) ">")
		      (map loop (_sim-fetch-cstr-args e)))))
	     ((_sim-isSel? e)
	      (let ((name (_sim-fetch-sel-name e))
		    (arg (_sim-fetch-sel-arg e)))
		(list (if (_sim-isPsds? arg)
			  name
			  (_sim-sym/num/string-append "_" name))
		      (loop arg)
		      (_sim-sym/num/string-append
		       ":<" (_sim-fetch-flow-tag (_sim-fetch-sel-arg e)) ">"))))
	     ((_sim-isPred? e)
	      (let ((name (_sim-fetch-pred-name e))
		    (arg (_sim-fetch-pred-arg e)))
		(list (if (_sim-isPsds? arg)
			  name
			  (_sim-sym/num/string-append "_" name))
		      (loop arg)
		      (_sim-sym/num/string-append
		       ":<" (_sim-fetch-flow-tag (_sim-fetch-sel-arg e)) ">"))))
	     ((_sim-isPcall? e)
	      (let ((name (_sim-fetch-pcall-name e))
		    (def (_sim-fetch-udp-def udp e)))
		(if (_sim-unfoldable-procedure? def)
		    (cons name
			  (map loop (_sim-fetch-pcall-args e)))
		    (let ((formal* (_sim-fetch-def-pars def)))
		      (list (_sim-sym/num/string-append 'memo- name)
			    (_sim-show-expr-remove-ins-lets-flow
			     (_sim-fetch-def-exp def) formal* udp))))))
	     ((_sim-isAbs? e)
	      (let* ((body (_sim-fetch-abs-body e))
		     (formal* (_sim-fetch-abs-formals e))
		     (result (_sim-show-expr-remove-ins-lets-flow
			      body formal* udp)))
		(list (_sim-sym/num/string-append
		       (if (_sim-isClosure? e) 'lambda '_lambda)
		       ":<" (_sim-fetch-flow-tag e) ">")
		      (_sim-show-merge-3-flow
		       formal*
		       (_sim-fetch-abs-formals-btp e)
		       (_sim-fetch-abs-formals-flowp e)
		       (list '-> (_sim-show-abbr-bt
				  (_sim-fetch-bt-tag body))))
		      result)))
	     ((_sim-isApp? e)
	      (let* ((e1 (loop (_sim-fetch-app-exp e)))

		     (e2 (_sim-sym/num/string-append 
			  (format "" "~a" e1)
			  ":<" (_sim-fetch-flow-tag (_sim-fetch-app-exp e))
			  ">"))

;		     (e2 (list
;			  e1
;			  (_sim-sym/num/string-append
;			  ":<" (_sim-fetch-flow-tag (_sim-fetch-app-exp e))
;			  ">")))

		     (e* (map loop (_sim-fetch-app-args e))))
		(if (_sim-isClosure? (_sim-fetch-app-exp e))
		    (cons e2 e*)
		    (cons '_ (cons e2 e*)))))
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
			  (list
			   (_sim-sym/num/string-append
			    (_sim-varname->name formalvarname)
			    (if **Similix-show-variable-index**
				(_sim-varname->index formalvarname)
				"")
			    ":"
			    (_sim-show-abbr-bt btv))
			   (loop e1)))
			formal*
			(_sim-fetch-def-btp d)
			(_sim-fetch-pcall-args e))
		   (_sim-show-expr-remove-ins-lets-flow
		    (_sim-fetch-def-exp d) formal* udp))))
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
			 ":<" (_sim-fetch-flow-tag e) ">")
			(_sim-show-merge-3-flow
			 formal*
			 (_sim-fetch-def-btp d)
			 (_sim-fetch-def-flowp d)
			 (list '-> (_sim-show-abbr-bt
				    (_sim-fetch-bt-tag
				     (_sim-fetch-def-exp d)))))
			(_sim-show-expr-remove-ins-lets-flow
			 (_sim-fetch-def-exp d) formal* udp)))))
		  (car d**))
		 (loop1 (cdr d**) (cdr indices)))))))))

;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
