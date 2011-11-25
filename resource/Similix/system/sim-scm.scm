; Similix load file for Scm
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;----------------------------------------------------------------------------

;****************************************************************************
;**** At this point: insert path name of the path where this file is located
(define **Similix-path** "/home/tyr/anders/Similix/system/")
;			  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
;****************************************************************************



;============================================================================
;======== Scheme system dependent definitions begin here: ===================

(verbose 1) ; make Scm silent

(define **Similix-source-suffix** ".scm")
(define **Similix-compiled-suffix** ".scm") ; No compiler in Scm
(define **Similix-compiled-sim-suffix** ".sim") ; No compiler in Scm


;****************************************************************************
;**** At this point: insert path name of the Slib path;
;**** the variable **scm-lib** is (only) used later in this file;
(define **scm-lib** "/home/hugin/mix/lib/scm/")
;		     ^^^^^^^^^^^^^^^^^^^^^^^^
;****************************************************************************

(define _sim-flush-output-port force-output)

(define _sim-remove-file delete-file)

(define _sim-compile-file
  (lambda args
    (display "No Scheme compiler available in Scm")
    (newline)))

(define _sim-garbage-collect gc)

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

(load (string-append **scm-lib** "pp.scm"))
(define _sim-pretty-print pretty-print)

(load (string-append **scm-lib** "format.scm")) ; defines format
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
