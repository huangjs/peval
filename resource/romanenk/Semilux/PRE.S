;; File: pre.s

(define (pre-switch action)

  ;;
  ;; Requests the description of parameters.
  ;;

  (define (request-descr)
    (map
      (lambda (x) (string->symbol (make-string 1 x)))
      (string->list
        (sx:request-string "Parameter description: "))
      ))

  ;;
  ;; Checks that the description of the input parameters
  ;; is meaningful.
  ;;

  (define (check-descr pgm descr)
    (with (( (_ _ _ def* _)  pgm ))
      (when (not (is-sd-list? descr))
            (error "Ill-formed description of the input parameters"
                   descr))
      (when (null? def*)
            (error "No procedure definitions in the source program"))
      (with* (( (_ _ formals _)  (car def*) ))
        (when (not (= (length formals) (length descr)))
              (error "Incorrect number of indicators in the description"
                     descr)))))

  (define (is-sd-list? descr)
    (and-map (lambda (item) (memq item '(s d))) descr))


  ;;
  ;; Writes the program "prog" into the file "name"
  ;;

  (define (sx:ann-prog->file file prog)
    (let ((port  (open-output-file file)))
      (define (display-item x)
        (display x port) (newline port) (newline port))
      (define (write-item x)
        (write x port)(newline port)(newline port))
      (with (( (style ldf-lst adt-lst (_ . def*) (_ . lam*))  prog )
             )
            (set-line-length! 78 port)
            (write-item style) (write-item ldf-lst)(write-item adt-lst)
            (display-item "(*DEFINITIONS*")
            (sx:write-list def* port)
            (display-item ")")
            (display-item "(*LAMBDAS*")
            (sx:write-list lam* port)
            (display-item ")")
            (close-output-port port))))

  ;;
  ;; The function takes as input a Scheme program, and
  ;; desugares it.
  ;;

  (define (do-dsg)
    (let* ((src  (sx:request-file-name
                   "Source Scheme program file name" "" "S"))
           (pnm  (sx:cut-off-ext src))
           (dst  (string-append pnm ".SC0"))
           (pgm  (sx:file->list src))
           )
      (sx:fast-load "dsg.fsl")
      (set! pgm  (desugar-scheme-program! dst pgm))
      (set! desugar-scheme-program! #!UNASSIGNED)
      (display "Desugared program has been written into ")
      (display dst)(newline)
      'OK))

  ;;
  ;; The function takes as input a Scheme program, and
  ;; removes macros (i.e. desugares, and ensugares).
  ;;

  (define (do-rmm)
    (let* ((src  (sx:request-file-name
                   "Source Scheme program file name" "" "S"))
           (dst  (sx:request-file-name
                   "Target Scheme program file name" src "SE"))
           (pgm  (sx:file->list src))
           )
      (sx:fast-load "dsg.fsl")
      (set! pgm  (desugar-scheme-program! dst pgm))
      (set! desugar-scheme-program! #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! dst (sx:file->list dst))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Target program has been written into ")
      (display dst)(newline)
      'OK))

  ;;
  ;; The function takes as input a Scheme program, compiles
  ;; it into an abstract syntax tree, performs several analyses
  ;; and annotates the program.
  ;;

  (define (do-pre)
    (let* ((src  (sx:request-file-name
                   "Source Scheme program file name" "" "S"))
           (pnm  (sx:cut-off-ext src))
           (ann  (string-append pnm ".ANN"))
           (pgm  #f)
           (descr  (request-descr))
           (cps-style?
             (eqv? (sx:query "Style (Direct/Continuation)" '(#\D #\C))
                   #\C))
           )
      (newline)
      (set! pgm (sx:file->list src))
      (sx:fast-load "dsg.fsl")
      (desugar-scheme-program! ann pgm)
      (set! desugar-scheme-program! #!UNASSIGNED)
      (set! pgm #!UNASSIGNED)
      (sx:fast-load "dcr.fsl")
      (set! pgm (make-decorated-program (sx:file->list ann)))
      (set! make-decorated-program #!UNASSIGNED)
      (check-descr pgm descr)
      (sx:fast-load "cla.fsl")
      (cl-analysis! pgm)
      (set! cl-analysis! #!UNASSIGNED)
      (sx:fast-load "bta.fsl")
      (bt-analysis! cps-style? pgm descr)
      (set! bt-analysis! #!UNASSIGNED)
      (sx:fast-load "spa.fsl")
      (sp-analysis! cps-style? pgm)
      (set! sp-analysis! #!UNASSIGNED)
      (sx:fast-load "oca.fsl")
      (oc-analysis! cps-style? pgm)
      (set! oc-analysis! #!UNASSIGNED)
      (sx:fast-load "ann.fsl")
      (make-annotated-program! cps-style? ann pgm)
      (set! make-annotated-program! #!UNASSIGNED)
      (display "Annotated program has been written into ")
      (display ann)(newline)
      'OK))

  ;; ------------------- ;;
  ;; (pre-switch action) ;;
  ;; ------------------- ;;

  (case action
    ((dsg)  (do-dsg))
    ((rmm)  (do-rmm))
    ((pre)  (do-pre))
    ))
