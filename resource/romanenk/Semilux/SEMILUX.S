;; File: semilux.s

;;(set! pcs-debug-mode true)

;;(display "Hello, Sergei!")(newline)

(display "Loading Semilux...")(newline)

(define (sx:fast-load file)
  (fast-load (string-append **semilux-path** file)))

(sx:fast-load "pp.fsl")      (display "PP ")      ;;(newline)
(sx:fast-load "x-util.fsl")  (display "X-UTIL ")  ;;(newline)
(sx:fast-load "x-synt.fsl")  (display "X-SYNT ")  ;;(newline)
(sx:fast-load "x-match.fsl") (display "X-MATCH ") (newline)

(sx:fast-load "misc.fsl")   (display "MISC ")   ;;(newline)
(sx:fast-load "sxio.fsl")   (display "SXIO ")   ;;(newline)
(sx:fast-load "defpre.fsl") (display "DEFPRE ") ;;(newline)
(sx:fast-load "adt.fsl")    (display "ADT ")    ;;(newline)
(sx:fast-load "menu.fsl")   (display "MENU ")   (newline)

(display "Ready!")(newline)
