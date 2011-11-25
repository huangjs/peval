;; File: x-util.s

;; Applies "f" to each element of "lst" and takes
;; "and" of the results obtained.

(define (and-map f lst)
  (let loop ((lst lst))
    (or (null? lst)
        (and (f (car lst))
             (loop (cdr lst))))))

;; Applies "f" to each element of "lst" and takes
;; "or" of the results obtained.

(define (or-map f lst)
  (let loop ((lst lst))
    (and (not (null? lst))
         (or (f (car lst))
             (loop (cdr lst))))))

;; The following functions have been introduced, because
;; the TI Scheme doesn't allow the function MAP to accept
;; several lists as arguments: (MAP f lst1 lst...).

(define (map-2 f lst1 lst2)
  (let loop ((result '()) (lst1 lst1) (lst2 lst2))
    (cond
      ((or (null? lst1) (null? lst2))
       (reverse! result))
      (else
        (loop (cons (f (car lst1) (car lst2)) result)
              (cdr lst1) (cdr lst2))))))

(define (map-3 f lst1 lst2 lst3)
  (let loop ((result '()) (lst1 lst1) (lst2 lst2) (lst3 lst3))
    (cond
      ((or (null? lst1) (null? lst2) (null? lst3))
       (reverse! result))
      (else
        (loop (cons (f (car lst1) (car lst2) (car lst3)) result)
              (cdr lst1) (cdr lst2) (cdr lst3))))))

(define (map-4 f lst1 lst2 lst3 lst4)
  (let loop ((result '()) (lst1 lst1) (lst2 lst2) (lst3 lst3) (lst4 lst4))
    (cond
      ((or (null? lst1) (null? lst2) (null? lst3) (null? lst4))
       (reverse! result))
      (else
        (loop (cons (f (car lst1) (car lst2) (car lst3) (car lst4)) result)
              (cdr lst1) (cdr lst2) (cdr lst3) (cdr lst4))))))

(define (multi-map f . lsts)
  (when (null? lsts)
        (error "No argument lists" lsts))
  (let loop ((result '()) (lsts lsts))
    (if (or-map null? lsts)
        (reverse! result)
        (loop (cons (apply f (map car lsts)) result) (map cdr lsts)))))

(define (multi-for-each f . lsts)
  (when (null? lsts)
        (error "No argument lists" lsts))
  (let loop ((lsts lsts))
    (if (or-map null? lsts)
        #f
        (begin
          (apply f (map car lsts))
          (loop (map cdr lsts))))))


(define (list? x)
  (let loop ((fast x) (slow x))
    (or (null? fast)
	(and (pair? fast)
	     (let ((fast (cdr fast)))
	       (or (null? fast)
		   (and (pair? fast)
			(let ((fast (cdr fast))
			      (slow (cdr slow)))
			  (and (not (eq? fast slow))
			       (loop fast slow))))))))))

(define (fsl file-name)
  (let ((src  (string-append file-name ".S"))
        (so   (string-append file-name ".SO"))
        (fsl  (string-append file-name ".FSL"))
        )
    (when (not (file-exists? src))
          (error "File does not exist..." src))
    (display "Compiling: ") (display src) (display " -> ") (display so)
    (newline)
    (compile-file src so)
    (display "--- Done ---") (newline)
    (display "Making: ") (display so) (display " -> ") (display fsl)
    (newline)
    (let ((rc (dos-call
                (string-append pcs-sysdir "\\make_fsl.exe")
                (string-append so " " fsl)
                4095)))
      (when (not (zero? rc))
            (error "DOS-CALL failed with the return code" rc)))
    (dos-delete so)
    (display "--- Done ---") (newline)
    'OK))

(define (ed . arg)
  (let ((file-name #f))
    (cond
      ((null? arg)
       (set! file-name ""))
      ((and (pair? arg) (string? (car arg)) (null? (cdr arg)))
       (set! file-name (car arg)))
      (else
        (error "ED: invalid argument" arg)))
    (dos-call "" (string-append "ne " file-name) 14000)))
