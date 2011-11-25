; Similix 'load system-files' file
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------

(newline)
(display "Welcome to Similix 5.0")
(newline)
(display "Copyright (C) 1993 Anders Bondorf")
(newline)
(display  "Contributions by Olivier Danvy and Jesper Joergensen")
(newline)
(newline)


;----------------------------------------------------------------------------
; Temporary file used by Similix:

(define **Similix-tmp-file** "_simtmp")

;-----------------------------------------------------------------------------

(define **Similix-library** **Similix-path**)

;-----------------------------------------------------------------------------

(display "util ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "util" **Similix-compiled-suffix**))

(display "langext ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "langext" **Similix-compiled-suffix**))

(display "abssyn ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "abssyn" **Similix-compiled-suffix**))

(display "miscspec ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "miscspec" **Similix-compiled-suffix**))

(display "runtime ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "runtime" **Similix-compiled-suffix**))

(display "front ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "front" **Similix-compiled-suffix**))

(display "lam-lift ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "lam-lift" **Similix-compiled-suffix**))

(display "bt-eod ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "bt-eod" **Similix-compiled-suffix**))

(display "sp ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "sp" **Similix-compiled-suffix**))

(display "oc ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "oc" **Similix-compiled-suffix**))

(display "rl ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "rl" **Similix-compiled-suffix**))

(display "post ")
(_sim-flush-output-port)
(load (string-append
       **Similix-path** "post" **Similix-compiled-suffix**))

(display "spec ")
(newline)
(load (string-append
       **Similix-path** "spec" **Similix-compiled-sim-suffix**))

;----------------------------------------------------------------------------
