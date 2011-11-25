; Similix load file for Scm
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;----------------------------------------------------------------------------

; This is a 'quick' port of sim-scm.scm to the Scheme2C interpreter.
; It seems to work OK, but I give no guarantees.
; 				Morten V. Christiansen (voet@diku.dk)


;****************************************************************************
;**** At this point: insert path name of the path where this file is located
(define **Similix-path** "/home/fenris/similix/src/system/dev/")
;			  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
;****************************************************************************



;============================================================================
;======== Scheme system dependent definitions begin here: ===================


(define **Similix-source-suffix** ".sc")
(define **Similix-compiled-suffix** ".scm") ; No compiler in Sci
(define **Similix-compiled-sim-suffix** ".sim") ; No compiler in Sci


(define _sim-flush-output-port flush-buffer)

(define (_sim-remove-file file)
(system (string-append "rm -f " file)))

(define _sim-compile-file
  (lambda args
    (display "No Scheme compiler available in Sci")
    (newline)))


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

(define _sim-eval eval)
;evaluation in top-level environment.

;if 'eval' is not supported in the scheme that similix is to be configured to, 
;_sim-eval can be defined as:
;(define (_sim-eval lst)
;  (begin
;    (_sim-load-program (list (list 'define '_sim-tmp-value s)))
;    _sim-tmp-value))

(define _sim-pretty-print pp)

(define _sim-error
  (lambda (f . args)
    (display "ERROR in ")
    (display f)
    (display ": ")
    (display (apply format (cons #f args))) ; format is loaded above
    (newline)
    (abort)))				    ; abort is non-standard

;======== Scheme system dependent definitions end here ======================
;============================================================================



(load (string-append **Similix-path** "loadsysf" **Similix-compiled-suffix**))

;----------------------------------------------------------------------------


