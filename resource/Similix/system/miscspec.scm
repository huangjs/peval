; Similix miscellaneous definitions used by specializer
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------

(define **Similix-name-clash-list** '())

(define **Similix-resid-pgm** '())
(define (_sim-add-residual-definition! rd)
  (set! **Similix-resid-pgm** (cons rd **Similix-resid-pgm**)))
(define (_sim-get-residual-program!) **Similix-resid-pgm**)

(define (_sim-initialize-magic! adt-file*)
  (set! **Similix-udo** (_sim-fully-lazy-assoc-udo-program adt-file*))
  (set! **Similix-name-clash-list**
	(_sim-fully-lazy-assoc-udo-program-ncl adt-file*))
  (_sim-init-number-generator! **Similix-proc-name-generator**)
  (_sim-init-number-generator! **Similix-var-name-generator**)
  (set! **Similix-resid-pgm** '())
  (set! **Similix-seenb4** '()))

(define **Similix-seenb4** '())
(define _sim-seenb4?
  (lambda (name actuals **Similix-seenb4**)
    (if (null? **Similix-seenb4**)
	#f
	(let ((item (car **Similix-seenb4**)))
	  (if (and (equal? name (car item))
		   (_sim-seenb4-equal? actuals (cadr item)))
	      item
	      (_sim-seenb4? name actuals (cdr **Similix-seenb4**)))))))

(define _sim-seenb4-equal? equal?)


(define **Similix-proc-name-generator** '(0))
(define (_sim-generate-proc-name! name projected*)
  (let ((flag (_sim-seenb4? name projected* **Similix-seenb4**)))
    (if flag
	(begin
	  (_sim-list-set! flag 3 (+ 1 (list-ref flag 3)))
	  (cons (list-ref flag 2) #t))
	(let ((residual-name
	       (let loop
		   ()
		 (let ((rn (_sim-sym/num/string-append
			    name "-" (_sim-next-number!
				      **Similix-proc-name-generator**))))
		   (if (member rn **Similix-name-clash-list**)
		       (loop)
		       rn)))))
	  (if (> **Similix-verbose-spec** 0)
	      (begin (display (_sim-sym/num/string-append 'sp: name))
		     (display " ")
		     (_sim-flush-output-port)))
	  (set! **Similix-seenb4**
		(cons (list name projected* residual-name 1)
		      **Similix-seenb4**))
	  (cons residual-name #f)))))

(define (_sim-pcall-test-output! name)
  (if (= **Similix-verbose-spec** 2)
      (begin (display name) (display " ") (_sim-flush-output-port))))

(define **Similix-var-name-generator** '(0))
(define (_sim-generate-var-name! name)
  (cons name (_sim-next-number! **Similix-var-name-generator**)))

(define _sim-next-number!
  (lambda (n)
    (let ((num (car n)))
      (let ((res num))
	(set-car! n (+ 1 num))
	res))))

(define _sim-init-number-generator! (lambda (n) (set-car! n 0)))

(define (_sim-generate-param-name name counter) (cons name counter))

(define (_sim-lookup-goal-procedure udp) (cons (vector-ref udp 0) 0))
(define (_sim-lookup-goal-proc udp) (vector-ref udp 0))

(define (_sim-make-pseudo-call index arity)
  (_sim-make-abstract-syntax-inserted-pcall
   _sim-bt-dynamic-value
   '_sim-goal
   index
   (let loop
       ((i 0))
     (if (= i arity)
	 '()
	 (cons (_sim-make-abstract-syntax-pseudo-var i)
	       (loop (+ 1 i)))))))

;-----------------------------------------------------------------------------
; Caching during generation of parameters when specializing calls
;
; ca ::= (ca-d ca-ps ca-cl (pos . pos)*)
; ca-d  ::= ((v new-v p pos)*)
; ca-ps ::= ((value new-v p pos)*)
; ca-cl ::= ((index values new-v p pos)*)

(define (_sim-init-cache) (list '() '() '() '()))

; these procedures return (new-v p) or 'not-found
(define (_sim-lookup-cache-d v pos ca)
  (let loop ((ca1 (car ca)))
    (cond
      ((null? ca1) 'not-found)
      ((eq? v (caar ca1))
       (let* ((elem (cdar ca1)) ; elem = (new-v p pos)
	      (old-pos (caddr elem)))
	 (cons elem (_sim-upd-cache-pos old-pos pos ca))))
      (else (loop (cdr ca1))))))
(define (_sim-lookup-cache-ps value pos ca)
  (let loop ((ca1 (cadr ca)))
    (cond
      ((null? ca1) 'not-found)
      ((eq? value (caar ca1))
       (let* ((elem (cdar ca1)) ; elem = (new-v p pos)
	      (old-pos (caddr elem)))
	 (cons elem (_sim-upd-cache-pos old-pos pos ca))))
      (else (loop (cdr ca1))))))
(define (_sim-lookup-cache-cl index values pos ca)
  (let loop ((ca1 (caddr ca)))
    (cond
      ((null? ca1) 'not-found)
      ((and (eq? index (caar ca1)) (eq? values (cadar ca1)))
       (let* ((elem (cddar ca1)) ; elem = (new-v p pos)
	      (old-pos (caddr elem)))
	 (cons elem (_sim-upd-cache-pos old-pos pos ca))))
      (else (loop (cdr ca1))))))

(define (_sim-upd-cache-pos old-pos pos ca)
  (list (car ca) (cadr ca) (caddr ca) (cons (cons old-pos pos) (cadddr ca))))
(define (_sim-upd-cache-d v new-v p pos ca)
  (list (cons (list v new-v p pos) (car ca)) (cadr ca) (caddr ca)
	(cadddr ca)))
(define (_sim-upd-cache-ps value new-v p pos ca)
  (list (car ca) (cons (list value new-v p pos) (cadr ca)) (caddr ca)
	(cadddr ca)))
(define (_sim-upd-cache-cl index values new-v p pos ca)
  (list (car ca) (cadr ca) (cons (list index values new-v p pos) (caddr ca))
	(cadddr ca)))

(define _sim-pos-pairs-in-cache cadddr)

;-----------------------------------------------------------------------------
; Let-expressions

(define (_sim-select-value rexp residual-formal)
  (if (_sim-isresidVar? rexp)
      rexp
      (_sim-build-var residual-formal)))
(define (_sim-conditional-build-let residual-formal eod rexp body)
  (if (_sim-isresidVar? rexp)
      body
      (_sim-build-resid-let residual-formal eod rexp body)))

;-----------------------------------------------------------------------------
