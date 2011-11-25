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

(define **Similix-source-suffix** ".ss")
(define **Similix-compiled-suffix** ".so")
(define **Similix-compiled-sim-suffix** ".so")


(define _sim-flush-output-port flush-output-port)

(define (_sim-remove-file file)
  (system (string-append "/bin/rm " (_sim-string-eval file))))

(define _sim-compile-file compile-file)

(define _sim-garbage-collect collect)

(define (_sim-ntimes suspension n)
  (_sim-garbage-collect)
  (time (begin
	  (let loop ((i 1))
	    (if (< i n)
		(begin (suspension)
		       (loop (+ i 1)))))
	  (suspension))))

(define _sim-pretty-print pretty-print)

(define _sim-error error)

;-----------------------------------------------------------------------------

;======== Scheme system dependent definitions end here ======================
;============================================================================



(load (string-append **Similix-path** "loadsysf" **Similix-compiled-suffix**))

;----------------------------------------------------------------------------
