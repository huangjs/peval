; Similix redundant let-elimination analysis
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;------------------------------------------------------------------------------
(define (_sim-rl-analyse! pgm)
  (define (rl! e)
    (cond
      ((_sim-isLift? e)
       (rl! (_sim-fetch-lift-arg e)))
      ((_sim-isCst? e)
       "nothing")
      ((_sim-isVar? e)
       "nothing here either")
      ((_sim-isCond? e)
       (rl! (_sim-fetch-cond-test e))
       (rl! (_sim-fetch-cond-then e))
       (rl! (_sim-fetch-cond-else e)))
      ((_sim-isLet? e)
       (rl! (_sim-fetch-let-actual e))
       (rl! (_sim-fetch-let-body e)))
      ((_sim-isBegin? e)
       (rl! (_sim-fetch-begin-fst e))
       (rl! (_sim-fetch-begin-snd e)))
      ((_sim-isPrimop? e)
       (rl*! (_sim-fetch-primop-args e)))
      ((_sim-isCstr? e)
       (rl*! (_sim-fetch-cstr-args e)))
      ((_sim-isSel? e)
       (rl! (_sim-fetch-sel-arg e)))
      ((_sim-isPred? e)
       (rl! (_sim-fetch-pred-arg e)))
      ((_sim-isPcall? e)
       (rl*! (_sim-fetch-pcall-args e)))
      ((_sim-isAbs? e)
       (_sim-set-abs-body!
	e
	(eliminate-lets! (_sim-fetch-abs-body e)
			 (_sim-fetch-abs-formals e))))
      ((_sim-isApp? e)
       (rl! (_sim-fetch-app-exp e))
       (rl*! (_sim-fetch-app-args e)))
      (else
       (_sim-error 'rl! "unknown syntactic form: ~s" e))))
  
  (define (rl*! e*)
    (if (not (null? e*))
	(begin (rl! (car e*)) (rl*! (cdr e*)))))
  
  (define (eliminate-lets! e formal*)
    (cond
      ((_sim-isLift? e)
       (begin
	 (_sim-set-lift-arg!
	  e (eliminate-lets! (_sim-fetch-lift-arg e) formal*))
	 e))
      ((possibly-inserted-let? e formal*)
       (let ((e1 (eliminate-lets! (_sim-fetch-let-body e) formal*)))
	 (if (_sim-isLet-unfoldable? e)
	     e1
	     (begin (_sim-set-let-body! e e1) e))))
      (else
       (begin (rl! e) e))))
  
  (define (possibly-inserted-let? e formal*)
    (and (_sim-isLet? e)
	 (let ((formal (_sim-fetch-let-formal e))
	       (actual (_sim-fetch-let-actual e)))
	   (and (_sim-isVar? actual)
		(equal? formal (_sim-fetch-var-varname actual))
		(member formal formal*)))))
  
  ;--------------------------------------------------------------------------
  ; main function:
  
  (let ((udp (_sim-fetch-pgm-udp pgm)))
    (begin
      (_sim-vector-for-each
       (lambda (d)
	 (let* ((e (_sim-fetch-def-exp d))
		(formal* (_sim-fetch-def-pars d))
		(new-e (eliminate-lets! e formal*)))
	   (begin (_sim-set-def-exp! d new-e)
		  (_sim-deBruijn! new-e formal*))))
       udp)
      udp)))

;------------------------------------------------------------------------------
