; Similix load file, poor man's
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;----------------------------------------------------------------------------

;****************************************************************************
;**** At this point: insert path name of the path where this file is located
(define **Similix-path** "/home/tyr/anders/Similix/system/")
;                         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
;****************************************************************************



;============================================================================
;======== Scheme system dependent definitions begin here: ===================

(define **Similix-source-suffix** ".scm")
(define **Similix-compiled-suffix** ".scm") ; If no compiler available
(define **Similix-compiled-sim-suffix** ".sim") ; If no compiler available


(define (_sim-flush-output-port) 'dummy)

(define (_sim-remove-file f) 'dummy)

(define _sim-compile-file
  (lambda args
    (display "No Scheme compiler available")
    (newline)))

(define (_sim-garbage-collect) 'dummy)

(define (_sim-ntimes suspension n)
  (let loop ((i 1))
    (if (< i n)
	(begin (suspension)
	       (loop (+ i 1)))))
  (suspension))

(define _sim-pretty-print display)

(define _sim-error (lambda args (display args) (car "ERROR")))

;======== Scheme system dependent definitions end here ======================
;============================================================================



(load (string-append **Similix-path** "loadsysf" **Similix-compiled-suffix**))

;----------------------------------------------------------------------------
