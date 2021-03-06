;; File: xunmixg.scm

;; This file is used, instead of xunmix.scm, to run
;; Unmix under MacGambit Scheme. 

;; Screen size

(define *ux:screen-height* 24)
(define *ux:screen-width*  80)

(for-each
 (lambda (x) (display x) (newline))
 '(""
   "UNMIX 3.0 (December 1993) for MacGambit Scheme"
   "   Sergei A.Romanenko, Keldysh Institute of Applied Mathematics,"
   "   Russian Academy of Sciences, Miusskaya Sq.4, 125047, Moscow, Russia"
   "")
 )

(display "Loading Unmix")(newline)

(define (ux:load file)
  (load (string-append **unmix-path** file ".scm")))

(ux:load "x-misc")    (display "XMISC ")
(ux:load "x-macro")   (display "X-MACRO ")
(ux:load "x-synt")    (display "X-SYNT ")
(ux:load "x-match")   (display "X-MATCH ")
(ux:load "x-ann")     (display "X-ANN ")   (newline)

(ux:load "xio")       (display "XIO ")
(ux:load "xmenu")     (display "XMENU ")   (newline)

(display "Ready!")(newline)

(display "Enter \"(UNMIX)\" to start Unmix.")(newline)

