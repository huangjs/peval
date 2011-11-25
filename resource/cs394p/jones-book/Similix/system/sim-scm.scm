; Similix load file for Scm
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.

; Edited by G. Novak 16 Feb 98  ; changes marked GSN

;----------------------------------------------------------------------------

;****************************************************************************
;**** At this point: insert path name of the path where this file is located
(define **Similix-path** "/u/novak/cs394p/Similix/system/")
;			  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
;****************************************************************************



;============================================================================
;======== Scheme system dependent definitions begin here: ===================

; (verbose 1) ; make Scm silent

(define **Similix-source-suffix** ".scm")
(define **Similix-compiled-suffix** ".scm") ; No compiler in Scm
(define **Similix-compiled-sim-suffix** ".sim") ; No compiler in Scm


(define **scm-lib** "")    ; GSN was (library-vicinity)

(define _sim-flush-output-port newline) ; GSN was force-output

(define (identity x) x)  ; GSN

(define _sim-remove-file identity)  ; GSN was delete-file

(define _sim-compile-file
  (lambda args
    (display "No Scheme compiler available in Scm")
    (newline)))

(define _sim-garbage-collect identity)  ; GSN was gc

(define (_sim-ntimes suspension n)
  (_sim-garbage-collect)
  (let ((t1 (get-internal-run-time)))
    (let loop ((i 1))
      (if (< i n)
	  (begin (suspension)
		 (loop (+ i 1)))))
    (let ((result (suspension)))
      (display "Run time: ")
      (display (/ (- (get-internal-run-time) t1)
		  internal-time-units-per-second))
      (display " seconds")
      (newline)
      result)))

(define (get-internal-run-time) 0)         ; GSN
(define internal-time-units-per-second 1)  ; GSN
(define (suspension) '())                  ; GSN

(define _sim-eval eval)
;evaluation in top-level environment.

;if 'eval' is not supported in the scheme that similix is to be configured to, 
;_sim-eval can be defined as:
;(define (_sim-eval lst)
;  (begin
;    (_sim-load-program (list (list 'define '_sim-tmp-value s)))
;    _sim-tmp-value))

; (load (string-append **scm-lib** "pp.scm")) ; GSN
(define pp display)                           ; GSN
(define pretty-print display)                 ; GSN
(define _sim-pretty-print pretty-print)

; (load (string-append **scm-lib** "format.scm")) ; GSN  defines format

(define (format z args) args)                 ; GSN

(define _sim-error
  (lambda (f . args)
    (display "ERROR in ")
    (display f)
    (display ": ")
    (display (apply format (cons #f args))) ; format is loaded above
    (newline)
;    (abort)                        ; GSN
))				    ; abort is non-standard

;======== Scheme system dependent definitions end here ======================
;============================================================================



(load (string-append **Similix-path** "loadsysf" **Similix-compiled-suffix**))

;----------------------------------------------------------------------------









