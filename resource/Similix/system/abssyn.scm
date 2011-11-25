; Similix abstract syntax file
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------
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
(define _sim-fetch-def-btp (lambda (d) (vector-ref d 2)))
(define _sim-set-def-btp! (lambda (d btp) (vector-set! d 2 btp)))
(define _sim-fetch-def-exp (lambda (d) (vector-ref d 3)))
(define _sim-set-def-exp! (lambda (d v) (vector-set! d 3 v)))
(define _sim-fetch-def-unfoldability-tag (lambda (d) (vector-ref d 4)))
(define _sim-set-def-unfoldability-tag! (lambda (d u) (vector-set! d 4 u)))
(define _sim-raise-def-unfoldability-tag!
  (lambda (d) (vector-set! d 4 'to-be-specialized)))
(define _sim-unfoldable-procedure?
  (lambda (d) (equal? (_sim-fetch-def-unfoldability-tag d) 'to-be-unfolded)))
(define _sim-make-abstract-syntax-def
  (lambda (name formalvarnames body)
    (vector name
	    formalvarnames
	    (map (lambda (dummy) _sim-bt-bottom-value) formalvarnames)
	    body 'to-be-unfolded)))
(define _sim-make-abstract-syntax-inserted-def
  (lambda (name formalvarnames btp body)
    (vector name formalvarnames btp body 'to-be-specialized)))


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

; Getting and updating expression bt-tags:
(define _sim-fetch-bt-tag (lambda (e) (vector-ref (vector-ref e 1) 0)))
(define _sim-set-bt-tag! (lambda (e v) (vector-set! (vector-ref e 1) 0 v)))
(define _sim-fetch-bt-tag* (lambda (e*) (map _sim-fetch-bt-tag e*)))

; Getting and updating expression eod-tags:
(define _sim-fetch-eod-tag (lambda (e) (vector-ref (vector-ref e 1) 1)))
(define _sim-set-eod-tag! (lambda (e v) (vector-set! (vector-ref e 1) 1 v)))
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
     'lift (vector _sim-bt-dynamic-value _sim-eod-bottom-value) '() arg)))


; Constant expressions:
; ---------------------
(define _sim-isCst? (lambda (e) (equal? (vector-ref e 0) 'cst)))
(define _sim-fetch-cst-value (lambda (e) (vector-ref e 3)))
(define _sim-make-abstract-syntax-cst
  (lambda (value)
    (vector
     'cst (vector _sim-bt-bottom-value _sim-eod-bottom-value) '() value)))


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
    (vector 'var (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    varname "debruijn")))
(define _sim-make-abstract-syntax-inserted-var
  (lambda (bt-tag varname)
    (vector 'var (vector bt-tag _sim-eod-bottom-value) '()
	    varname "debruijn")))
(define _sim-make-abstract-syntax-pseudo-var
  (lambda (debruijn)
    (vector 'var (vector 'void 'void) 'void
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
    (vector 'cond (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    test-part then-part else-part)))


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
    (vector 'let (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    formalvarname actual body 'unfoldable)))
(define _sim-make-abstract-syntax-inserted-let
  (lambda (bt-tag eod-tag formalvarname actual body)
    (vector 'let (vector bt-tag eod-tag) '()
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
    (vector 'begin (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
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
    (vector 'primop (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
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
    (vector 'cstr (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
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
    (vector 'sel (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
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
    (vector 'pred (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
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
    (vector 'pcall (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    (list op "proc index") args)))
(define _sim-make-abstract-syntax-inserted-pcall
  (lambda (bt-tag op index args)
    (vector
     'pcall (vector bt-tag _sim-eod-bottom-value) '() (list op index) args)))


; Abstractions:
; -------------
(define _sim-isAbs? (lambda (e) (equal? (vector-ref e 0) 'abs)))
(define _sim-fetch-abs-index (lambda (e) (vector-ref e 3)))
(define _sim-fetch-abs-free-variables (lambda (e) (vector-ref e 4)))
(define _sim-set-abs-free-variables! (lambda (e v) (vector-set! e 4 v)))
(define _sim-fetch-abs-free-variable-debruijns
  (lambda (e) (map _sim-fetch-var-debruijn (_sim-fetch-abs-free-variables e))))
(define _sim-fetch-abs-formals (lambda (e) (vector-ref e 5)))
(define _sim-fetch-abs-formals-btp (lambda (e) (vector-ref e 6)))
(define _sim-set-abs-formals-btp! (lambda (e btp) (vector-set! e 6 btp)))
(define _sim-fetch-abs-body (lambda (e) (vector-ref e 7)))
(define _sim-set-abs-body! (lambda (e v) (vector-set! e 7 v)))
(define _sim-make-abstract-syntax-abs
  (lambda (abs-index formalvarnames body)
    (vector 'abs (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    abs-index "free-vars" formalvarnames
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
    (vector 'app (vector _sim-bt-bottom-value _sim-eod-bottom-value) '()
	    proc-exp arg-exps)))


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
; Residual abstract syntax:

; Residual udp:
; -------------
(define (_sim-residfetch-udp-def-by-name name udp)
  (let loop
      ((udp udp))
    (if (null? udp)
	(_sim-error
	 '_sim-residfetch-udp-def-by-name "name not defined: ~s" name)
	(let ((def (car udp)))
	  (if (equal? (_sim-residfetch-def-name def) name)
	      def
	      (loop (cdr udp)))))))


; Residual definitions:
; ---------------------
(define _sim-build-resid-def
  (lambda (res-name res-par* res-exp) (vector res-name res-par* res-exp)))
(define _sim-residfetch-def-name (lambda (e) (vector-ref e 0)))
(define _sim-residfetch-def-pars (lambda (e) (vector-ref e 1)))
;; (define _sim-residset-def-pars! (lambda (e v) (vector-set! e 1 v)))
(define _sim-residfetch-def-exp (lambda (e) (vector-ref e 2)))
;; (define _sim-residset-def-exp! (lambda (e v) (vector-set! e 2 v)))


; Residual constant expressions:
; ------------------------------
(define _sim-isresidCst? (lambda (res) (equal? (vector-ref res 0) 'cst)))
(define _sim-build-resid-cst (lambda (res) (vector 'cst res)))
(define _sim-residfetch-cst-value (lambda (e) (vector-ref e 1)))


; Residual variables:
; -------------------
(define _sim-isresidVar? (lambda (res) (equal? (vector-ref res 0) 'var)))
(define _sim-build-resid-var (lambda (resid-name) (vector 'var resid-name)))
(define _sim-residfetch-var-resid-name (lambda (e) (vector-ref e 1)))


; Residual conditional expressions:
; ---------------------------------
(define _sim-isresidCond? (lambda (res) (equal? (vector-ref res 0) 'cond)))
(define _sim-build-resid-cond
  (lambda (res-test res-then res-else)
    (vector 'cond res-test res-then res-else)))
(define _sim-residfetch-cond-test (lambda (e) (vector-ref e 1)))
;; (define _sim-residset-cond-test! (lambda (e v) (vector-set! e 1 v)))
(define _sim-residfetch-cond-then (lambda (e) (vector-ref e 2)))
;; (define _sim-residset-cond-then! (lambda (e v) (vector-set! e 2 v)))
(define _sim-residfetch-cond-else (lambda (e) (vector-ref e 3)))
;; (define _sim-residset-cond-else! (lambda (e v) (vector-set! e 3 v)))


; Residual let-expressions:
; -------------------------
(define _sim-isresidLet? (lambda (res) (equal? (vector-ref res 0) 'let)))
(define _sim-build-resid-let
  (lambda (res-formal eod-actual res-actual res-body)
    (vector 'let res-formal eod-actual res-actual res-body)))
(define _sim-residfetch-let-formal (lambda (e) (vector-ref e 1)))
;; (define _sim-residset-let-formal! (lambda (e v) (vector-set! e 1 v)))
(define _sim-residfetch-let-eod-actual (lambda (e) (vector-ref e 2)))
(define _sim-residfetch-let-actual (lambda (e) (vector-ref e 3)))
;; (define _sim-residset-let-actual! (lambda (e v) (vector-set! e 3 v)))
(define _sim-residfetch-let-body (lambda (e) (vector-ref e 4)))
;; (define _sim-residset-let-body! (lambda (e v) (vector-set! e 4 v)))


; Residual begin-expressions:
; -------------------------
(define _sim-isresidBegin? (lambda (res) (equal? (vector-ref res 0) 'begin)))
(define _sim-build-resid-begin
  (lambda (res1 res2) (vector 'begin res1 res2)))
(define _sim-residfetch-begin-fst (lambda (e) (vector-ref e 1)))
;; (define _sim-residset-begin-fst! (lambda (e v) (vector-set! e 1 v)))
(define _sim-residfetch-begin-snd (lambda (e) (vector-ref e 2)))
;; (define _sim-residset-begin-snd! (lambda (e v) (vector-set! e 2 v)))


; Residual primitive operations:
; ------------------------------
(define _sim-isresidPrimop? (lambda (res) (equal? (vector-ref res 0) 'primop)))
(define _sim-build-resid-primop (lambda (op res*) (vector 'primop op res*)))
(define _sim-build-resid-primop-l
  (lambda (op . res*) (vector 'primop op res*)))
(define _sim-residfetch-primop-name (lambda (e) (vector-ref e 1)))
(define _sim-residfetch-primop-args (lambda (e) (vector-ref e 2)))
;; (define _sim-residset-primop-args! (lambda (e v) (vector-set! e 2 v)))


; Residual constructor expressions:
; ---------------------------------
(define _sim-isresidCstr? (lambda (res) (equal? (vector-ref res 0) 'cstr)))
(define _sim-build-resid-cstr (lambda (name res*) (vector 'cstr name res*)))
(define _sim-residfetch-cstr-name (lambda (e) (vector-ref e 1)))
(define _sim-residfetch-cstr-args (lambda (e) (vector-ref e 2)))
;; (define _sim-residset-cstr-args! (lambda (e v) (vector-set! e 2 v)))


; Residual selector expressions:
; ------------------------------
(define _sim-isresidSel? (lambda (res) (equal? (vector-ref res 0) 'sel)))
(define _sim-build-resid-sel
  (lambda (name proj cstr res) (vector 'sel name proj cstr res)))
(define _sim-residfetch-sel-name (lambda (e) (vector-ref e 1)))
(define _sim-residfetch-sel-proj (lambda (e) (vector-ref e 2)))
(define _sim-residfetch-sel-cstr (lambda (e) (vector-ref e 3)))
(define _sim-residfetch-sel-arg (lambda (e) (vector-ref e 4)))
;; (define _sim-residset-sel-arg! (lambda (e v) (vector-set! e 4 v)))


; Residual predicate expressions:
; -------------------------------
(define _sim-isresidPred? (lambda (res) (equal? (vector-ref res 0) 'pred)))
(define _sim-build-resid-pred
  (lambda (name cstr res) (vector 'pred name cstr res)))
(define _sim-residfetch-pred-name (lambda (e) (vector-ref e 1)))
(define _sim-residfetch-pred-cstr (lambda (e) (vector-ref e 2)))
(define _sim-residfetch-pred-arg (lambda (e) (vector-ref e 3)))
;; (define _sim-residset-pred-arg! (lambda (e v) (vector-set! e 3 v)))


; Residual procedure calls:
; -------------------------
(define _sim-isresidPcall? (lambda (res) (equal? (vector-ref res 0) 'pcall)))
(define _sim-build-resid-pcall
  (lambda (residual-name res*) (vector 'pcall residual-name res*)))
(define _sim-residfetch-pcall-name (lambda (e) (vector-ref e 1)))
(define _sim-residfetch-pcall-args (lambda (e) (vector-ref e 2)))
;; (define _sim-residset-pcall-args! (lambda (e v) (vector-set! e 2 v)))


; Residual abstractions:
; ----------------------
(define _sim-isresidAbs? (lambda (res) (equal? (vector-ref res 0) 'abs)))
(define _sim-build-resid-abs
  (lambda (res-formals res-body) (vector 'abs res-formals res-body)))
(define _sim-residfetch-abs-formals (lambda (e) (vector-ref e 1)))
(define _sim-residfetch-abs-body (lambda (e) (vector-ref e 2)))
;; (define _sim-residset-abs-body! (lambda (e v) (vector-set! e 2 v)))


; Residual applications:
; ----------------------
(define _sim-isresidApp? (lambda (res) (equal? (vector-ref res 0) 'app)))
(define _sim-build-resid-app (lambda (res res*) (vector 'app res res*)))
(define _sim-residfetch-app-exp (lambda (e) (vector-ref e 1)))
;; (define _sim-residset-app-exp! (lambda (e v) (vector-set! e 1 v)))
(define _sim-residfetch-app-args (lambda (e) (vector-ref e 2)))
;; (define _sim-residset-app-args! (lambda (e v) (vector-set! e 2 v)))

;-----------------------------------------------------------------------------

(define (_sim-lookup-var e r) (list-ref r (_sim-fetch-var-debruijn e)))

;-----------------------------------------------------------------------------

(define (_sim-insert-let-expressions body varname*)
  (let loop
      ((p varname*))
    (if (null? p)
	body
	(let ((varname (car p)))
	  (_sim-make-abstract-syntax-let
	   varname
	   (_sim-make-abstract-syntax-var varname)
	   (loop (cdr p)))))))

;-----------------------------------------------------------------------------
; Compute free-vars fields of abstractions:

(define (_sim-add-free-vars-of-abstractions! e)
  (let proc ((e e))
    (cond
      ((_sim-isLift? e)
       (proc (_sim-fetch-lift-arg e)))
      ((_sim-isCst? e)
       "nothing here")
      ((_sim-isVar? e)
       "nothing here")
      ((_sim-isCond? e)
       (proc (_sim-fetch-cond-test e))
       (proc (_sim-fetch-cond-then e))
       (proc (_sim-fetch-cond-else e)))
      ((_sim-isLet? e)
       (proc (_sim-fetch-let-actual e))
       (proc (_sim-fetch-let-body e)))
      ((_sim-isBegin? e)
       (proc (_sim-fetch-begin-fst e))
       (proc (_sim-fetch-begin-snd e)))
      ((_sim-isPrimop? e)
       (for-each proc (_sim-fetch-primop-args e)))
      ((_sim-isCstr? e)
       (for-each proc (_sim-fetch-cstr-args e)))
      ((_sim-isSel? e)
       (proc (_sim-fetch-sel-arg e)))
      ((_sim-isPred? e)
       (proc (_sim-fetch-pred-arg e)))
      ((_sim-isPcall? e)
       (for-each proc (_sim-fetch-pcall-args e)))
      ((_sim-isAbs? e)
       (let ((body (_sim-fetch-abs-body e)))
	 ; _sim-copy is used because the deBruijn indices (added by destructive
	 ; updating of the syntax) may be different:
	 ; for different occurrences of the variables;
	 (_sim-set-abs-free-variables!
	  e (_sim-copy (_sim-find-free-vars body (_sim-fetch-abs-formals e))))
	 (proc body)))
      ((_sim-isApp? e)
       (proc (_sim-fetch-app-exp e))
       (for-each proc (_sim-fetch-app-args e)))
      (else
       (_sim-error '_sim-deBruijn! "unknown syntactic form: ~s" e)))))


;-----------------------------------------------------------------------------
; Add indices to procedure calls (and to local definitions; only these need
; to their own index):

(define (_sim-compute-proc-indices! udp)
  (let ((counter 0))
    (define (init-index! i) (set! counter i))
    (define (next-index!)
      (let ((res counter))
	(set! counter (+ 1 counter))
	res))
    (define (compute-index n r)
      (cond
	((null? r) (_sim-error '_sim-compute-proc-indices! "Internal error"))
	((equal? n (caar r)) (cdar r))
	(else (compute-index n (cdr r)))))	  
    (define (proc e r)
      (cond
	((_sim-isLift? e)
	 (proc (_sim-fetch-lift-arg e) r))
	((_sim-isCst? e)
	 "nothing here")
	((_sim-isVar? e)
	 "nothing here")
	((_sim-isCond? e)
	 (proc (_sim-fetch-cond-test e) r)
	 (proc (_sim-fetch-cond-then e) r)
	 (proc (_sim-fetch-cond-else e) r))
	((_sim-isLet? e)
	 (proc (_sim-fetch-let-actual e) r)
	 (proc (_sim-fetch-let-body e) r))
	((_sim-isBegin? e)
	 (proc (_sim-fetch-begin-fst e) r)
	 (proc (_sim-fetch-begin-snd e) r))
	((_sim-isPrimop? e)
	 (for-each (lambda (e) (proc e r)) (_sim-fetch-primop-args e)))
	((_sim-isCstr? e)
	 (for-each (lambda (e) (proc e r)) (_sim-fetch-cstr-args e)))
	((_sim-isSel? e)
	 (proc (_sim-fetch-sel-arg e) r))
	((_sim-isPred? e)
	 (proc (_sim-fetch-pred-arg e) r))
	((_sim-isPcall? e)
	 (_sim-set-pcall-index! e (compute-index (_sim-fetch-pcall-name e) r))
	 (for-each (lambda (e) (proc e r)) (_sim-fetch-pcall-args e)))
	((_sim-isAbs? e)
	 (proc (_sim-fetch-abs-body e) r))
	((_sim-isApp? e)
	 (proc (_sim-fetch-app-exp e) r)
	 (for-each (lambda (e) (proc e r)) (_sim-fetch-app-args e)))
	((_sim-isLetrec? e)
	 ; the order in which indices are generated here has to match
	 ; the order in which local procedures are lifted in lambda
	 ; lifting
	 (let* ((d* (_sim-fetch-letrec-defs e))
		(new-indices (let loop ((d* d*))
			       (if (null? d*)
				   '()
				   ; a let is used to get right sequencing:
				   (let ((i (next-index!)))
				     (cons i (loop (cdr d*)))))))
		(r1 (let loop ((d* d*) (i* new-indices))
		      (if (null? d*)
			  r
			  (cons (cons (_sim-fetch-def-name (car d*)) (car i*))
				(loop (cdr d*) (cdr i*)))))))
	   (_sim-set-letrec-indices! e new-indices)
	   (for-each (lambda (d) (proc (_sim-fetch-def-exp d) r1)) d*)
	   (proc (_sim-fetch-letrec-body e) r1)))
	(else
	 (_sim-error
	  '_sim-compute-proc-indices! "unknown syntactic form: ~s" e))))
    
    ; compute environment binding top-level procedure names to indices:
    (let* ((arity (vector-length udp))
	   (r (let loop ((i 0))
		(if (= i arity)
		    (begin (init-index! arity) '())
		    (cons (cons (_sim-fetch-def-name (vector-ref udp i)) i)
			  (loop (+ 1 i)))))))
      ; locally (letrec-)defined procedures now start with index = arity;
      ; this is because of lambda lifting where the procedures after lifting
      ; will be added to the end of the udp; notice that the indexing used
      ; here ONLY works if the lambda lifter operates the expected way
      (_sim-vector-for-each
       (lambda (d) (proc (_sim-fetch-def-exp d) r)) udp))))

;----------------------------------------------------------------------------
; (Re-)compute the deBruijn indices in a procedure body
(define (_sim-deBruijn! e lpar)
  (define (compute-index il i)
    (let index ((il il) (n 0))
      (if (null? il)
	  (_sim-error 'compute-index "Unbound variable: ~s" i)
	  (if (equal? (car il) i)
	      n
	      (index (cdr il) (+ 1 n))))))
  (let proc ((e e) (lpar lpar))
    (cond
      ((_sim-isLift? e)
       (proc (_sim-fetch-lift-arg e) lpar))
      ((_sim-isCst? e)
       "nothing here")
      ((_sim-isVar? e)
       (_sim-set-var-debruijn!
	e (compute-index lpar (_sim-fetch-var-varname e))))
      ((_sim-isCond? e)
       (proc (_sim-fetch-cond-test e) lpar)
       (proc (_sim-fetch-cond-then e) lpar)
       (proc (_sim-fetch-cond-else e) lpar))
      ((_sim-isLet? e)
       (proc (_sim-fetch-let-actual e) lpar)
       (proc (_sim-fetch-let-body e)
	     (cons (_sim-fetch-let-formal e) lpar)))
      ((_sim-isBegin? e)
       (proc (_sim-fetch-begin-fst e) lpar)
       (proc (_sim-fetch-begin-snd e) lpar))
      ((_sim-isPrimop? e)
       (for-each (lambda (e) (proc e lpar)) (_sim-fetch-primop-args e)))
      ((_sim-isCstr? e)
       (for-each (lambda (e) (proc e lpar)) (_sim-fetch-cstr-args e)))
      ((_sim-isSel? e)
       (proc (_sim-fetch-sel-arg e) lpar))
      ((_sim-isPred? e)
       (proc (_sim-fetch-pred-arg e) lpar))
      ((_sim-isPcall? e)
       (for-each (lambda (e) (proc e lpar)) (_sim-fetch-pcall-args e)))
      ((_sim-isAbs? e)
       (let ((free-vars (_sim-fetch-abs-free-variables e)))
	 ; separate (different) deBruijn indices for list of free variables:
	 (for-each (lambda (fv) (proc fv lpar)) free-vars)
	 (proc (_sim-fetch-abs-body e)
	       (append (_sim-fetch-abs-formals e)
		       (map _sim-fetch-var-varname free-vars)))))
      ((_sim-isApp? e)
       (proc (_sim-fetch-app-exp e) lpar)
       (for-each (lambda (e) (proc e lpar)) (_sim-fetch-app-args e)))
      (else
       (_sim-error '_sim-deBruijn! "unknown syntactic form: ~s" e)))))

;----------------------------------------------------------------------------
; Scanning an expression for finding free variables:

; _sim-find-free-vars finds the free variable expressions in an expression
(define (_sim-find-free-vars e b*)
  ; b*: bound variables, f*: free variables
  (define (scan e b* f*)
    (cond
      ((_sim-isLift? e)
       (scan (_sim-fetch-lift-arg e) b* f*))
      ((_sim-isCst? e)
       f*)
      ((_sim-isVar? e)
       (let ((i (_sim-fetch-var-varname e)))
	 (if (or (member i b*)
		 (_sim-ormap (lambda (f) (equal? i (_sim-fetch-var-varname f)))
			     f*))
	     f*
	     (cons e f*))))
      ((_sim-isCond? e)
       (scan (_sim-fetch-cond-test e)
	     b*
	     (scan (_sim-fetch-cond-then e)
		   b*
		   (scan (_sim-fetch-cond-else e) b* f*))))
      ((_sim-isLet? e)
       (scan (_sim-fetch-let-actual e)
	     b*
	     (scan (_sim-fetch-let-body e)
		   (cons (_sim-fetch-let-formal e) b*)
		   f*)))
      ((_sim-isBegin? e)
       (scan (_sim-fetch-begin-fst e)
	     b*
	     (scan (_sim-fetch-begin-snd e) b* f*)))
      ((_sim-isPrimop? e)
       (scan* (_sim-fetch-primop-args e) b* f*))
      ((_sim-isCstr? e)
       (scan* (_sim-fetch-cstr-args e) b* f*))
      ((_sim-isSel? e)
       (scan (_sim-fetch-sel-arg e) b* f*))
      ((_sim-isPred? e)
       (scan (_sim-fetch-pred-arg e) b* f*))
      ((_sim-isPcall? e)
       (scan* (_sim-fetch-pcall-args e) b* f*))
      ((_sim-isAbs? e)
       (scan
	(_sim-fetch-abs-body e) (append (_sim-fetch-abs-formals e) b*) f*))
      ((_sim-isApp? e)
       (scan (_sim-fetch-app-exp e)
	     b*
	     (scan* (_sim-fetch-app-args e) b* f*)))
      ((_sim-isLetrec? e)
       (scan (_sim-fetch-letrec-body e)
	     b*
	     (let loop ((d* (_sim-fetch-letrec-defs e)) (f* f*))
	       (if (null? d*)
		   f*
		   (let ((d (car d*)))
		     (loop (cdr d*)
			   (scan (_sim-fetch-def-exp d)
				 (append (_sim-fetch-def-pars d) b*)
				 f*)))))))			 
      (else (_sim-error 'scan "unknown syntactic form: ~s" e))))
  (define (scan* e* b* f*)
    (if (null? e*)
	f*
	(scan (car e*) b* (scan* (cdr e*) b* f*))))
  (scan e b* '()))


; Checking whether a variable (name) occurs free in an abstraction:
(define (_sim-occurs-free? name free-variables)
  (_sim-ormap (lambda (ide) (equal? name (_sim-fetch-var-varname ide)))
	      free-variables))

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

(define (_sim-show-expr-remove-ins-lets e formal* udp)
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
	(_sim-show-expr e udp))))

(define (_sim-show-def def kind udp)
  (let* ((body (_sim-fetch-def-exp def))
	 (formal* (_sim-fetch-def-pars def)))
    (list
     'define
     (cons (_sim-fetch-def-name def)
	   (_sim-show-merge
	    formal*
	    (_sim-fetch-def-btp def)
	    (list '-> (_sim-show-abbr-bt
		       (_sim-fetch-bt-tag body)))))
     (if (equal? kind 'head)
	 '...
	 (_sim-show-expr-remove-ins-lets body formal* udp)))))

(define (_sim-show-merge l1 l2 rest)
  (if (null? l1)
      rest
      (let ((varname (car l1)))
	(cons (_sim-sym/num/string-append
	       (_sim-varname->name varname)
	       (if **Similix-show-variable-index**
		   (_sim-varname->index (car l1))
		   "")
	       ":" (_sim-show-abbr-bt (car l2)))
	      (_sim-show-merge (cdr l1) (cdr l2) rest)))))

(define (_sim-show-abbr-bt bt)
  (cond ((_sim-bt-bottom? bt) 'bot)
	((_sim-bt-static? bt) 's)
	((_sim-bt-psds? bt) 'ps)
	((_sim-bt-closure? bt) 'cl)
	((_sim-bt-dynamic? bt) 'd)))

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
	      (list 'lift (loop (_sim-fetch-lift-arg e))))
	     ((_sim-isCst? e)
	      (let ((val (_sim-fetch-cst-value e)))
		(if (or (boolean? val) (number? val) (string? val) (char? val))
		    val
		    (list 'quote val))))
	     ((_sim-isVar? e)
	      (if **Similix-show-variable-index**
		  (_sim-sym/num/string-append
		   (_sim-fetch-var-name e) (_sim-fetch-var-index e))
		  (_sim-fetch-var-name e)))
	     ((_sim-isCond? e)
	      (let ((test (_sim-fetch-cond-test e)))
		(list (if (_sim-isDynamic? test) '_if 'if)
		      (loop test)
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
			 (_sim-show-abbr-bt (_sim-fetch-bt-tag actual)))
			res-actual))
		 res-body)))
	     ((_sim-isBegin? e)
	      (list (if (_sim-isBegin-unfoldable? e) 'begin '_begin)
		    (loop (_sim-fetch-begin-fst e))
		    (loop (_sim-fetch-begin-snd e))))
	     ((_sim-isPrimop? e)
	      (let ((name (_sim-fetch-primop-name e)))
		(cons (if (or (_sim-isDynamic? e)
			      (member (_sim-fetch-primop-referentiality e)
				      '(abort abort-eoi)))
			  (_sim-sym/num/string-append "_" name)
			  name)
		      (map loop (_sim-fetch-primop-args e)))))
	     ((_sim-isCstr? e)
	      (let ((name (_sim-fetch-cstr-name e)))
		(cons (if (_sim-isPsds? e)
			  name
			  (_sim-sym/num/string-append "_" name))
		      (map loop (_sim-fetch-cstr-args e)))))
	     ((_sim-isSel? e)
	      (let ((name (_sim-fetch-sel-name e))
		    (arg (_sim-fetch-sel-arg e)))
		(list (if (_sim-isPsds? arg)
			  name
			  (_sim-sym/num/string-append "_" name))
		      (loop arg))))
	     ((_sim-isPred? e)
	      (let ((name (_sim-fetch-pred-name e))
		    (arg (_sim-fetch-pred-arg e)))
		(list (if (_sim-isPsds? arg)
			  name
			  (_sim-sym/num/string-append "_" name))
		      (loop arg))))
	     ((_sim-isPcall? e)
	      (let ((name (_sim-fetch-pcall-name e))
		    (def (_sim-fetch-udp-def udp e)))
		(if (_sim-unfoldable-procedure? def)
		    (cons name
			  (map loop (_sim-fetch-pcall-args e)))
		    (let ((formal* (_sim-fetch-def-pars def)))
		      (list (_sim-sym/num/string-append 'memo- name)
			    (_sim-show-expr-remove-ins-lets
			     (_sim-fetch-def-exp def) formal* udp))))))
	     ((_sim-isAbs? e)
	      (let* ((body (_sim-fetch-abs-body e))
		     (formal* (_sim-fetch-abs-formals e))
		     (result (_sim-show-expr-remove-ins-lets
			      body formal* udp)))
		(list (if (_sim-isClosure? e) 'lambda '_lambda)
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
		    (cons '_ (cons e1 e*)))))
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

(define (_sim-show-e e udp) (_sim-show-expr e udp))

;-----------------------------------------------------------------------------
