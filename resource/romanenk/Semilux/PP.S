
;      -*- Mode: Lisp -*-				 Filename:  pp.s

;		      Last Revision:  29-August-85 1600ct

;--------------------------------------------------------------------------;
;									   ;
;		  SCHEME 84 -- PCS Compiler -- July 1984		   ;
;									   ;
;			       David Bartley				   ;
;									   ;
;                              PrettyPrinter                               ;
;									   ;
;--------------------------------------------------------------------------;


; Modified by Sergei.A.Romanenko (November, 1992)
; %QQ-CA --> UNQUOTE-SPLICING
; %QQ-C  --> UNQUOTE

(define pp						; PP
  (lambda (exp . args)
    (let ((port (car args))
	  (margin (or (cadr args) 72)))
      (fluid-let
          ((output-port
	    (cond ((null? port) (fluid output-port))
		  ((port? port) port)
		  ((string? port)
		   (let ((p (open-output-file port)))
		     (set-line-length! (max margin (line-length p)) p)
		     p))
		  (else 'CONSOLE))))
	 (%pretty-printer exp
			  (min margin (line-length (fluid output-port))))
	 (when (string? port)
	       (close-output-port (fluid output-port)))
	 *the-non-printing-object*))))


(define %pp-me					     ; %PP-ME
  (lambda (e)
    (let ((m (and (pair? e)
		  (getprop (car e) 'PCS*MACRO))))
      (cond ((null? m)
	     e)
	    ((pair? m)			; alias
	     (cons (cdr m)(cdr e)))
	    (else			; macro
	     (pp (m e)))))))


(syntax (%pp-set-pattern id pat)			; %PP-SET-PATTERN
	(PUTPROP id pat '%PRETTY-PRINTER-PATTERN))


(syntax (%pp-get-pattern id)				; %PP-GET-PATTERN
	(GETPROP id '%PRETTY-PRINTER-PATTERN))


;;;
;;;  Pretty Printer Pattern Definitions
;;;

(begin
  (let ((pattern '(KEY . (2 . V-TAIL))))		; BEGIN style
    (%pp-set-pattern  'BEGIN         pattern)
    (%pp-set-pattern  'BEGIN0        pattern)
    (%pp-set-pattern  'SEQUENCE      pattern))

  (let ((pattern '(NEAT (() . EXP) . (2 . V-TAIL))))	; DEFINE style
    (%pp-set-pattern  'ALIAS         pattern)
    (%pp-set-pattern  'ACCESS        pattern)
    (%pp-set-pattern  'APPLY-IF      pattern)
    (%pp-set-pattern  'DEFINE        pattern)
    (%pp-set-pattern  'DEFINE-INTEGRABLE
				     pattern)
    (%pp-set-pattern  'MACRO         pattern)
    (%pp-set-pattern  'REC           pattern)
    (%pp-set-pattern  'SET-FLUID!    pattern)
    (%pp-set-pattern  'SYNTAX        pattern))

  (let ((pattern '(KEY (() . BVL) . (2 . V-TAIL))))	; LAMBDA style
    (%pp-set-pattern  'LAMBDA        pattern)
    (%pp-set-pattern  'FLUID-LAMBDA  pattern)
    (%pp-set-pattern  'NAMED-LAMBDA  pattern))

  (let ((pattern '(KEY (3 . TUPLES) . (2 . V-TAIL))))	; LETREC style
    (%pp-set-pattern  'LETREC        pattern))

  (let ((pattern '(0 . LET)))				; LET style
    (%pp-set-pattern  'LET           pattern)
    (%pp-set-pattern  'LET*          pattern)
    (%pp-set-pattern  'FLUID-LET     pattern))

;;(let ((pattern '(NEAT . (() . V-TAIL))))		; SET! style
;;  (%pp-set-pattern  'SET!          pattern)
;;  (%pp-set-pattern  'IF            pattern)    ; use default (0 . call)
;;  (%pp-set-pattern  'WHEN          pattern)    ; for these short names
;;  (%pp-set-pattern  'AND           pattern)
;;  (%pp-set-pattern  'OR            pattern))

  (%pp-set-pattern  'COND            '(KEY . (() . COND-TAIL)))

  (%pp-set-pattern  'CASE            '(KEY (() . EXP) . (2 . CASE-TAIL)))

  (%pp-set-pattern  'DO              '(KEY (() . TUPLES)
					  (4 . COMB)
					  . (2 . V-TAIL)))

  (%pp-set-pattern  '%PP-FUN-CALL    '(0 . CALL))   ; arbitrary function calls

  (%pp-set-pattern  '%PP-COMBINATION '(0 . COMB))   ; arbitrary combinations
  '())

;;; --------------------------------------------------------------------------


(define %pretty-printer
  (lambda (expression margin)
    (letrec

;-------!

 ((cp	     margin)	; current position

  (miser-cp  (max 20 (quotient margin 2)))

  (nice-fit  (max 50 (quotient margin 2)))

  (call-pat  (%pp-get-pattern '%PP-FUN-CALL))

  (comb-pat  (%pp-get-pattern '%PP-COMBINATION))

  ;;
  ;; PP-EXP pretty-prints expression X at the current position
  ;;

  (pp-exp
   (lambda (x)
     (cond ((atom? x)			  ; X = atom ?
	    (pp-atom x))

	   ((atom? (cdr x))		  ; X = (atom) or (atom . atom) ?
	    (pp-block x cp))

	   ((pair? (car x))		  ; X = ((...)...) ?
	    (pp-by-pattern x cp comb-pat))

	   ((and (null? (cddr x))	  ; X = (quote ...)
		 (memq (car x) '(QUOTE
				 QUASIQUOTE
				 UNQUOTE UNQUOTE-SPLICING %QQ-CD)))
	    (pp-block x cp))

	   ((and (pair? (cddr x))	  ; X = (... . ,value)
		 (null? (cdddr x))
		 (eq? (cadr x) 'UNQUOTE))
	    (pp-block x cp))

	   ((symbol? (car x))		  ; X = (symbol . args) ?
	    (pp-by-pattern x cp
		(or (%pp-get-pattern (car x))
		    call-pat)))

	   (else
	    (pp-block x cp)))))		  ; X = (?)


  ;; PP-BY-PATTERN pretty-prints expression X at the current position
  ;;   (passed in IP) using the pattern PAT
  ;;
  ;; Assumptions:
  ;;   PAT is a valid pattern
  ;;   X is a pair and (cdr X) is a pair
  ;;   (car X) is an atom
  ;;   X might not be properly structured according to PAT

  (pp-by-pattern
   (lambda (x ip pat)			  ; ip = new base for -tabs
     (cond
	((number? (car pat))		  ; PAT = (tab . fun) ?
	 (move (- ip (car pat)))
	 (pp-by-function x (cdr pat)))

	((null? (car pat))		  ; PAT = (() . fun) ?
	 (move (- cp 1))
	 (pp-by-function x (cdr pat)))

	((and (eq? (car pat) 'NEAT)
	      (all-fits-nicely? x))	  ; X fits neatly on this line?
	 (pp-block x cp))

   ;;	((and (eq? (car pat) 'ALL)
   ;;	      (all-fits? x))		  ; X fits on this line?
   ;;	 (pp-block x cp))

	(else				  ; PAT = (KEY ...)
	 (prin-op x)			  ; emit paren and keyword
	 (pp-by-pat-tail (cdr x)
			 ip		  ; emit the rest of X
			 (cdr pat)))
	)))

  (pp-by-pat-tail
   (lambda (x ip pat)
     (cond ((or (atom? x)		  ; X and PAT out of synch?
		(null? pat))
	    (pp-v-tail x))		  ; yes, use the default method
	   ((eq? (car x) 'UNQUOTE)
	    (pp-block-tail x ip))
	   (else
	    (let ((pat1 (car pat))
		  (pat* (cdr pat)))
	      (if (atom? pat1)
		  (begin		  ; PAT matches the tail
		    (move (if (null? pat1)
			      (- cp 1)	     ; PAT = (() . fun)
			      (- ip pat1)))  ; PAT = (num . fun)
		    (pp-by-function x pat*))
		  (let ((tab1 (car pat1))
			(fun1 (cdr pat1)))
		    (move (if (null? tab1)
			      (- cp 1)	     ; PAT = ((() . fun) ...)
			      (- ip tab1)))  ; PAT = ((num . fun)...)
		    (pp-by-function
		        (car x) fun1)	  ; pp the car
		    (pp-by-pat-tail	  ; pp the cdr
		        (cdr x) ip pat*))))))))

  (pp-by-function
   (lambda (x fun)
     (if (null? fun)
	 (pp-call x)
	 (case fun
	    (exp	 (pp-exp x))
	    (v-tail	 (pp-v-tail x))
	    (call	 (pp-call x))
	    (bvl	 (pp-block x cp))
	    (tuples	 (pp-tuples x))
	    (let	 (pp-let x))
	    (cond-tail	 (pp-cond-tail x))
	    (case-tail	 (pp-case-tail x))
	    (comb	 (pp-comb x))
	    (else	 (pp-call x))))))

  (pp-let
   (lambda (x)
     (if (atom? x)
	 (pp-atom x)
	 (let ((p cp))
	   (prin-op x)
	   (move (- cp 1))
	   (when (and (cadr x)			; named LET ?
		      (atom? (cadr x)))
		 (set! x (cdr x))
		 (pp-atom (car x))		; name
		 (move (- p 5)))
	   (if (pair? (cdr x))
	       (begin
		 (pp-tuples (cadr x)) 		; pairs
		 (move (- p 2))
		 (pp-v-tail (cddr x)))		; body
	       (pp-atomic-tail (cdr x)))))))

  (pp-call
   (lambda (x)
     (cond ((or (atom? x)
		(null? (cdr x)) 	     ; no arguments
		(all-fits-nicely? x))
	    (pp-block x cp))
	   ((and (symbol? (car x))
		 ( < (print-length (car x)) 5))
	    (pp-hang x))
	   (else
	    (let ((p cp))
	      (prin-op x)
	      (move (- p 3))
	      (pp-v-tail (cdr x)))))))

  (pp-comb
   (lambda (x)
     (cond ((or (atom? x)
		(and (pair? (cdr x))      ; length = 2 ?
		     (null? (cddr x))
		     (all-fits-nicely? x)))
	    (pp-block x cp))
	   ((and (symbol? (car x))
		 ( < (print-length (car x)) 5))
	    (pp-hang x))
	   (else
	    (pp-v x)))))

  (pp-case-tail
   (lambda (x)
     (if (atom? x)
	 (pp-atomic-tail x)
	 (let ((p cp)
	       (next (car x))
	       (rest (cdr x)))
	   (pp-case-item next)
	   (if (null? rest)
	       (pp-atomic-tail rest)
	       (begin
		  (move p)
		  (pp-case-tail rest)))))))

  (pp-case-item
   (lambda (x)
     (cond ((atom? x)
	    (pp-atom x))
	   ((all-fits-nicely? x)
	    (pp-block x cp))
	   (else
	    (display "(")
	    (set! cp (- cp 1))
	    (let ((p cp))
	      (pp-block (car x) cp)
	      (move p)
	      (pp-v-tail (cdr x)))))))

  (pp-cond-tail
   (lambda (x)
     (if (atom? x)
	 (pp-atomic-tail x)
	 (let ((p cp)
	       (next (car x))
	       (rest (cdr x)))
	   (pp-comb next)
	   (if (null? rest)
	       (pp-atomic-tail rest)
	       (begin
		  (move p)
		  (pp-cond-tail rest)))))))

  (pp-tuples
   (lambda (x)
     (if (and x (atom? x))
	 (pp-atom x)
	 (begin
	    (display "(")
	    (set! cp (- cp 1))
	    (pp-tuples-tail x)))))

  (pp-tuples-tail
   (lambda (x)
     (if (atom? x)
	 (pp-atomic-tail x)
	 (let ((p cp)
	       (next (car x))
	       (rest (cdr x)))
	   (if (or (atom? next)
		   (all-fits-nicely? next))
	       (pp-block next cp)
	       (pp-comb next))
	   (if (null? rest)
	       (pp-atomic-tail rest)
	       (begin
		  (move p)
		  (pp-tuples-tail rest)))))))

  (pp-hang
   (lambda (x)
     (if (atom? x)
	 (pp-atom x)
	 (begin
	    (prin-op x)
	    (move (- cp 1))
	    (pp-v-tail (cdr x))))))

  (pp-v
   (lambda (x)
     (if (and x (atom? x))
	 (pp-atom x)
	 (begin
	    (display "(")
	    (set! cp (- cp 1))
	    (pp-v-tail x)))))

  (pp-v-tail
   (lambda (x)
     (cond ((atom? x)
	    (pp-atomic-tail x))
	   ((eq? (car x) 'UNQUOTE)
	    (pp-block-tail x cp))
	   (else
	    (let ((p cp)
		  (next (car x))
		  (rest (cdr x)))
	      (pp-exp next)
	      (if (null? rest)
		  (pp-atomic-tail rest)
		  (begin
		    (move p)
		    (pp-v-tail rest))))))))

  (pp-block
   (lambda (x ip)
     (if (atom? x)
	 (pp-atom x)
	 (let ((quasi (assq (car x)
			    '((QUOTE . "'")
			      (QUASIQUOTE . "`")
			      (UNQUOTE . ",")
			      (UNQUOTE-SPLICING . ",@")
			      (%QQ-CD . ",.")))))
	   (cond ((and quasi
		       (pair? (cdr x))
		       (null? (cddr x)))
		  (let* ((prefix (cdr quasi))
			 (len (string-length prefix)))
		    (display prefix)
		    (set! cp (- cp len))
		    (pp-block (cadr x) (- ip len))))
		 (else
		  (display "(")
		  (set! cp (- cp 1))
		  (pp-block-tail x (- ip 1))) )))))

  (pp-block-tail
   (lambda (x ip)
     (cond ((atom? x)
	    (pp-atomic-tail x))
	   ((and (eq? (car x) 'UNQUOTE)
		 (pair? (cdr x))
		 (null? (cddr x)))
	    (display " . ,")
	    (set! cp (- cp 4))
	    (pp-block (cadr x)(- ip 4))
	    (display ")")
	    (set! cp (- cp 1)))
	   (else
	    (let* ((carx (car x))
		   (fits (all-fits? carx)))
	      (cond ((and (not fits)
			  (>? ip cp))
		     (move ip)
		     (pp-block-tail x ip))
		    (else
		     (if fits			; print the CAR
			 (pp-block carx ip)
			 (begin
			   (pp-exp carx)
			   (move ip)))
		     (if (atom? (cdr x))	; print the CDR
			 (pp-atomic-tail (cdr x))
			 (begin
			   (move (- cp 1))
			   (pp-block-tail (cdr x) ip))))))))))

  (pp-atom
   (lambda (x)
     (write x)
     (set! cp (- margin
		 (- (current-column) 1)))))

  (pp-atomic-tail
   (lambda (x)
     (cond ((null? x)
	    (display ")")
	    (set! cp (- cp 1)))
	   (else
	    (display " . ")
	    (set! cp (- cp 3))
	    (pp-atom x)
	    (display ")")
	    (set! cp (- cp 1))))))

  (prin-op
   (lambda (x)
     (let ((op (car x))
	   (p  cp))
       (display "(")
       (set! cp (- cp 1))
       (pp-block op cp)
    ;; (when ( < cp miser-cp)	     ;; causes a bug??
    ;;	     (move (- p 2)))
       )))

  (move
   (lambda (p)
     (when ( < cp p)
	   (newline)		     ; move left
	   (set! cp margin))
     (when ( >	cp p)
	   (let ((cp4 (- cp 4)))     ; move right
	     (if ( >= cp4 p)
		 (begin
		    (display "    ")
		    (set! cp cp4))
		 (begin
		    (display " ")
		    (set! cp (- cp 1)))))
	   (move p))))

  (all-fits?
   (lambda (x)
     (fits-in? x cp 0)))

  (all-fits-nicely?
   (lambda (x)
     (fits-in? x (min cp nice-fit) 0)))

  (fits-in?			    ; returns length[X] if <= SIZE
   (lambda (x space acc)	    ; returns #!FALSE otherwise
     (cond ((pair? x)
	    (fits-in-tail? x space acc))
	   ((or (symbol? x) (number? x) (string? x)
		(char? x) (null? x))
	    (let ((len (print-length x)))		     ; broken
	      (and ( >= space len)
		   (+ acc len))))
	   (else #!false))))

  (fits-in-tail?
   (lambda (x space acc)
     (cond ((null? acc)   #!false)
	   (( < space 2)  #!false)
	   ((null? x)	  (+ acc 1))
	   ((atom? x)	  (fits-in? x (- space 4)(+ acc 4)))
	   (else
	    (let ((len (fits-in? (car x) space 0)))
	      (and len
		   (fits-in-tail? (cdr x)
				  (- (- space len) 1)
				  (+ (+ acc len) 1))))))))

  (make-printable
   (lambda (obj)
     (cond ((closure? obj)
	    (apply-if (assq 'SOURCE (%reify obj 0))
		(lambda (entry)
		  (display obj)
		  (display " =")
		  (newline)
		  (cdr entry))
		obj))
	   ;; other special cases ...
	   (else obj))))

;-------!
	)
       (begin
	 (pp-exp (make-printable expression))
	 *the-non-printing-object*))))
