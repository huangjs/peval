; Similix Scheme language extensions, constructor implementation
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------
; These definitions are put into a separate file because the text of the
; definitions is needed when generating stand-alone programs from
; sim-programs that use loadt

;-----------------------------------------------------------------------------

(define _sim-make-constr-val cons)
(define (_sim-get-constr-val-cstr-name v)
  (and (pair? v) (car v)))
(define _sim-get-constr-val-args cdr)

;-----------------------------------------------------------------------------
