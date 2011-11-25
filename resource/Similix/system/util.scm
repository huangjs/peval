; Similix utility system definitions
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------
; User visible utility functions

(define (file->list file)
  (let ((port (open-input-file (_sim-string-eval file))))
    (let loop
	((o (read port)))
      (if (eof-object? o)
	  (begin
	    (close-input-port port)
	    '())
	  (cons o (loop (read port)))))))

(define (file->item file)
  (let ((_sim-port@ (open-input-file (_sim-string-eval file))))
    (let ((res (read _sim-port@)))
      (close-input-port _sim-port@)
      res)))

(define (writef obj file)
  (begin
    (_sim-remove-file file)
    (let ((port (open-output-file (_sim-string-eval file))))
      (begin 
	(write obj port)
	(newline port)
	(close-output-port port)))))

(define (writefpp obj file)
  (begin
    (_sim-remove-file file)
    (let ((port (open-output-file (_sim-string-eval file))))
      (begin 
	(pretty-print obj port)
	(close-output-port port)))))

(define (writel lst file)		; list->file
  (begin
    (_sim-remove-file file)
    (let ((port (open-output-file (_sim-string-eval file))))
      (begin
	(for-each (lambda (e)
		    (begin
		      (write e port)
		      (newline port)
		      (newline port)))
		  lst)
	(close-output-port port)))))

(define (writelpp lst file)
  (begin
    (_sim-remove-file file)
    (let ((port (open-output-file (_sim-string-eval file))))
      (begin
	(for-each (lambda (e) (begin (pretty-print e port) (newline port)))
		  lst)
	(close-output-port port)))))

(define (out x)
  (begin (display x) (display " ") (_sim-flush-output-port) x))

(define (outnl x)
  (begin (display x) (newline) (_sim-flush-output-port) x))

(define (outpp x)
  (begin (pretty-print x) (_sim-flush-output-port) x))

(define (size x)
  (cond
   ((pair? x)
    (+ 1 (size (car x)) (size (cdr x))))
   ((vector? x)
    (let ((arity (vector-length x)))
      (+ arity
	 (let loop
	     ((i 0))
	   (if (= i arity)
	       0
	       (+ (size (vector-ref x i)) (loop (+ 1 i))))))))
   (else
    0)))

(define pp _sim-pretty-print)

(define ntimes _sim-ntimes)

;-----------------------------------------------------------------------------

(define (compile-sim-file file)
  (let* ((file (_sim-strip-sim-name file))
	 (tmp-file (string-append file **Similix-source-suffix**))
	 (p (_sim-compile-casematch (string-append file ".sim"))))
    (writel p tmp-file)
    (_sim-compile-file tmp-file)
    (_sim-remove-file tmp-file)
    '()))

(define (compile-and-load-sim-file file)
  (compile-sim-file file)
  (load (string-append (_sim-strip-sim-name file)
		       **Similix-compiled-sim-suffix**))
  '())

;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
; Utility functions, not user visible

(define _sim-sym/num/string-append
  (lambda ss
    (string->symbol
     (apply string-append
	    (map (lambda (s)
		   (cond
		    ((symbol? s)
		     (symbol->string s))
		    ((number? s)
		     (number->string s))
		    ((string? s)
		     s)
		    (else
		     (_sim-error '_sim-sym/num/string-append
				 "Not a symbol/number/string: ~s"
				 s))))
		 ss)))))

(define _sim-andmap
  (lambda (f ls . more)
    (if (null? more)
	(let map1 ((ls ls))
	  (if (null? ls)
	      #t
	      (and (f (car ls))
		   (map1 (cdr ls)))))
	(let map-more ((ls ls) (more more))
	  (if (or (null? ls) (_sim-ormap null? more))
	      #t
	      (and (apply f
			  (cons (car ls)
				(map car more)))
		   (map-more (cdr ls)
			     (map cdr more))))))))

(define _sim-ormap
  (lambda (f ls . more)
    (if (null? more)
	(let map1 ((ls ls))
	  (if (null? ls)
	      #f
	      (or (f (car ls))
		  (map1 (cdr ls)))))
	(let map-more ((ls ls) (more more))
	  (if (or (null? ls) (_sim-ormap null? more))
	      #f
	      (or (apply f
			 (cons (car ls)
			       (map car more)))
		  (map-more (cdr ls)
			    (map cdr more))))))))

(define (_sim-copy x)
  (let proc ((x x))
    (cond
      ((pair? x)
       (cons (proc (car x)) (proc (cdr x))))
      ((vector? x)
       (let* ((l (vector-length x))
	      (v (make-vector l)))
	 (let loop
	     ((o 0))
	   (if (= o l)
	       v
	       (begin (vector-set! v o (proc (vector-ref x o)))
		      (loop (+ 1 o)))))))
      (else
       x))))

(define (_sim-vector/list-ref e i)
  (if (vector? e)
      (vector-ref e i)
      (list-ref e i)))

(define (_sim-vector-for-each f v)
  (let ((arity (vector-length v)))
    (let loop
	((i 0))
      (or (= i arity)
	  (begin
	    (f (vector-ref v i))
	    (loop (+ 1 i)))))))

(define (_sim-vector-map f v) ; returns a list
  (let ((arity (vector-length v)))
    (let loop
	((i 0))
      (if (= i arity)
	  '()
	  (cons (f (vector-ref v i)) (loop (+ 1 i)))))))

(define (_sim-proper-list? e)
  (or (null? e) (and (pair? e) (_sim-proper-list? (cdr e)))))

(define (_sim-map-append f l)
  (if (null? l)
      '()
      (append (f (car l)) (_sim-map-append f (cdr l)))))

(define (_sim-map-append! f l)
  (if (null? l)
      '()
      (_sim-append! (f (car l)) (_sim-map-append! f (cdr l)))))

(define _sim-append!
  (lambda args
    (cond ((null? args) '())
	  ((null? (cdr args)) (car args))
	  ((null? (car args)) (cadr args))
	  (else
	   (set-cdr! (_sim-last-pair (car args))
		     (apply _sim-append! (cdr args)))
	   (car args)))))

(define (_sim-last-pair l)
  (if (pair? (cdr l)) (_sim-last-pair (cdr l)) l))

(define (_sim-map-strict-or f l)
  (and (not (null? l))
       (_sim-strict-or (f (car l)) (_sim-map-strict-or f (cdr l)))))

(define _sim-strict-or
  (lambda x
    (and (not (null? x))
	 (let ((rest (apply _sim-strict-or (cdr x))))
	   (or (car x) rest)))))

(define (_sim-map-strict-and f l)
  (or (null? l)
      (_sim-strict-and (f (car l)) (_sim-map-strict-and f (cdr l)))))

(define _sim-strict-and
  (lambda x
    (or (null? x)
	(let ((rest (apply _sim-strict-and (cdr x))))
	  (and (car x) rest)))))

(define (_sim-string-eval x)
  (cond
    ((string? x) x)
    ((and (_sim-proper-list? x) (equal? (car x) 'string-append))
     (apply string-append
	    (map (lambda (y)
		   (cond
		     ((string? y) y)
		     ((symbol? y) (_sim-get-top-level-value y))
		     (else
		      (_sim-error
		       '_sim-string-eval "Unexpected syntax: ~s" x))))
		 (cdr x))))
    (else (_sim-error '_sim-string-eval "Unexpected syntax: ~s" x))))

(define (_sim-get-top-level-value s)
  (let ((tmp-file (string-append
		   **Similix-tmp-file** **Similix-source-suffix**)))
    (writef (list 'define '_sim-tmp-value s) tmp-file)
    (load tmp-file)
    (_sim-remove-file tmp-file)
    _sim-tmp-value))

(define (_sim-load-program pgm)
  (let ((tmp-file (string-append
		   **Similix-tmp-file** **Similix-source-suffix**)))
    (writel pgm tmp-file)
    (load tmp-file)
    (_sim-remove-file tmp-file)
    '()))

;-----------------------------------------------------------------------------

(define _sim-genint!
  (let ((seed 0))
    (lambda (msg)
      (case msg
	((reset)
	 (set! seed 0))
	((next)
	 (let ((res seed))
	   (set! seed (+ 1 seed))
	   res))
	(else
	 seed)))))

;-----------------------------------------------------------------------------

; Looking up:
(define (_sim-lookup name ns vs)
  (let loop
      ((ns ns) (vs vs))
    (cond
      ((or (null? ns) (null? vs))
       (_sim-error '_sim-lookup "Name not found: ~s" name))
      ((equal? name (car ns))
       (car vs))
      (else
       (loop (cdr ns) (cdr vs))))))

(define (_sim-list-set! l i v)
  (let loop ((l l) (i i))
    (if (= i 0)
	(set-car! l v)
	(loop (cdr l) (- i 1)))))

;-----------------------------------------------------------------------------

(define (_sim-strip-sim-name file)
  (_sim-strip-name file ".sim"))

(define (_sim-strip-source-name file)
  (_sim-strip-name file **Similix-source-suffix**))

(define (_sim-normalize-sim-name file)
  (string-append (_sim-strip-sim-name file) ".sim"))

(define (_sim-normalize-source-name file)
  (string-append (_sim-strip-source-name file) **Similix-source-suffix**))

(define (_sim-strip-name file suffix)
  (let ((l (string-length suffix)))
    (if (string=? (_sim-string-sub file l) suffix)
	(substring file 0 (- (string-length file) l))
	file)))

(define _sim-string-sub
  (lambda (str n)
    (let ((l (string-length str)))
      (substring str (max 0 (- l n)) l))))

;-----------------------------------------------------------------------------
