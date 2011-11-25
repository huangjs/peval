;; File: pe.s

(define (pe-switch action)

  ;;
  ;; Makes the name of the residual program by putting
  ;; together the names of data files.
  ;;

  (define (make-res-filename file-names)
    (if (null? file-names)
        "$RES$"
        (let ((mfn  (merge-file-names file-names)))
          (substring mfn 0 (min 8 (string-length mfn))))))

  (define (merge-file-names names)
    (foldr1 (lambda (name1 name2)
              (string-append name1 "-" name2))
            (map sx:cut-off-ext names)))

  ;;
  ;; Requests names of files that contains values
  ;; of static parameters.
  ;;

  (define (request-data-file-names)
    (norm-ext*
      "DAT"
      (request-tokens "Static data file names [.DAT]: ")))

  ;;
  ;; Appends extension "ext" to the filenames in "names"
  ;; that don't have one.
  ;;

  (define (norm-ext* ext names)
    (map (lambda (name) (sx:norm-file-name "" ext name))
         names))

  ;;
  ;; Requests and scans a string.
  ;;

  (define (request-tokens msg)
    
    (define input-string #f)
    (define len #f)
    (define pos #f)
    (define tokens #f)
    (define current-token #f)
    
    (define (current-char)
      (string-ref input-string pos))
    
    (define (scan-tokens!)
      (cond
        ((= pos len)
         #f)
        ((eqv? (current-char) #\space)
         (set! pos (+ 1 pos)) (scan-tokens!))
        (else
          (set! current-token '()) (scan-1-token!))))
    
    (define (scan-1-token!)
      (cond
        ((or (= pos len)
             (eqv? (current-char) #\space))
         (set! tokens
               (cons (list->string (reverse! current-token)) tokens))
         (set! current-token '())
         (scan-tokens!))
        (else
          (set! current-token (cons (current-char) current-token))
          (set! pos (+ 1 pos))
          (scan-1-token!))))
    
    ;; ---------------------- ;;
    ;;  (request-tokens msg)  ;;
    ;; ---------------------- ;;
    
    (fresh-line) (display msg)
    (flush-input)
    (set! input-string (sx:string-upcase (read-line)))
    (set! len (string-length input-string))
    (set! pos 0)
    (set! tokens '())
    (scan-tokens!)
    (reverse! tokens))

  (define (request-style)
    (let ((style (sx:query "Style (Direct/Continuation)" '(#\D #\C))))
      (newline)
      (eqv? style #\C)))

  (define (get-style ann-program)
    (with (( ((_ style) . _)  ann-program ))
      style))

  ;;
  ;; Partial evaluation.
  ;;

  (define (do-pe)
    (let* ((ann-file-name
               (sx:request-file-name
                 "Annotated program file name" "" "ANN"))
           (data-file-names
               (request-data-file-names))
           (res
             (make-res-filename data-file-names))
           (sc1
             (string-append res ".SC1"))
           (sr1
             (string-append res ".SR1"))
           (sc2
             (string-append res ".SC2"))
           (sr
             (string-append res ".SR"))
           (ann-program
             (sx:file->list ann-file-name))
           (static-inputs
             (append-map sx:file->list data-file-names)))
      (run-pe sc1 ann-program static-inputs)
      (set! ann-program #!UNASSIGNED)
      (set! static-inputs #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr1 (sx:file->list sc1))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Residual program has been written into ")(display sr1)
      (newline)
      (sx:fast-load "puf.fsl")
      (post-unfold-residual-program! sc2 (sx:file->list sc1))
      (set! post-unfold-residual-program! #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr (sx:file->list sc2))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Post-unfolded program has been written into ")(display sr)
      (newline)
      'OK))

  ;;
  ;; Partial evaluation of the partial evaluator
  ;; with respect to an annotated program.
  ;;

  (define (do-pepe)
    (let* ((ann
               (sx:request-file-name
                 "Annotated program file name" "" "ANN"))
           (res
               (sx:request-name
                 "Residual program file name " "$GEN$"))
           (sc1
             (string-append res ".SC1"))
           (sr1
             (string-append res ".SR1"))
           (sc2
             (string-append res ".SC2"))
           (sr
             (string-append res ".SR"))
           (ann-program
             (sx:file->list ann))
           (cps-style?
             (eq? (get-style ann-program) 'continuation-passing))
           (ann-pe
             (sx:file->list
               (string-append
                 **semilux-path**
                 (if cps-style? "C-PEDEF.ANN" "PEDEF.ANN"))))
           (static-inputs
             (list ann-program))
           )
      (newline)
      (run-pe sc1 ann-pe static-inputs)
      (set! ann-pe #!UNASSIGNED)
      (set! static-inputs #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr1 (sx:file->list sc1))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Residual program has been written into ")(display sr1)
      (newline)
      (sx:fast-load "puf.fsl")
      (post-unfold-residual-program! sc2 (sx:file->list sc1))
      (set! post-unfold-residual-program! #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr (sx:file->list sc2))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Post-unfolded program has been written into ")(display sr)
      (newline)
      'OK))

  ;;
  ;; Partial evaluation of the partial evaluator
  ;; with respect to itself.
  ;;

  (define (do-pepepe)
    (let* ((cps-style?
             (request-style))
           (res
             (sx:request-name
               "Residual generator file name"
               (if cps-style? "C-GNDEF" "GNDEF")))
           (ann-pe
             (sx:file->list
               (string-append
                 **semilux-path**
                 (if cps-style? "C-PEDEF.ANN" "PEDEF.ANN"))))
           (static-inputs
             (list ann-pe))
           (sc1
             (string-append res ".SC1"))
           (sr1
             (string-append res ".SR1"))
           (sc2
             (string-append res ".SC2"))
           (sr
             (string-append res ".SR"))
           )
      (newline)
      (run-pe sc1 ann-pe static-inputs)
      (set! ann-pe #!UNASSIGNED)
      (set! static-inputs #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr1 (sx:file->list sc1))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Residual program has been written into ")(display sr1)
      (newline)
      (sx:fast-load "puf.fsl")
      (post-unfold-residual-program! sc2 (sx:file->list sc1))
      (set! post-unfold-residual-program! #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr (sx:file->list sc2))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Post-unfolded program has been written into ")(display sr)
      (newline)
      'OK))


  ;;
  ;; Generating residual program generators by means of a generator
  ;; previously produced by specializing the partial evaluator
  ;; with respect to itself.
  ;;

  (define (do-gngn)
    (let* ((ann
               (sx:request-file-name
                 "Annotated program file name" "" "ANN"))
           (res
               (sx:request-name
                 "Residual program file name " "$GEN$"))
           (ann-program
             (sx:file->list ann))
           (cps-style?
             (eq? (get-style ann-program) 'continuation-passing))
           (gn-file-name
             (if cps-style? "C-GNDEF.FSL" "GNDEF.FSL"))
           (sc1
             (string-append res ".SC1"))
           (sr1
             (string-append res ".SR1"))
           (sc2
             (string-append res ".SC2"))
           (sr
             (string-append res ".SR"))
           (static-inputs
             (list ann-program))
           )
      (run-pe sc1 gn-file-name static-inputs)
      (set! ann-program #!UNASSIGNED)
      (set! static-inputs #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr1 (sx:file->list sc1))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Residual program has been written into ")(display sr1)
      (newline)
      (sx:fast-load "puf.fsl")
      (post-unfold-residual-program! sc2 (sx:file->list sc1))
      (set! post-unfold-residual-program! #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr (sx:file->list sc2))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Post-unfolded program has been written into ")(display sr)
      (newline)
      'OK))

  ;;
  ;; Generating residual programs by means of a generator
  ;; previously produced by specializing the partial evaluator
  ;; with respect to an annotated program.
  ;;

  (define (do-gn)
    (let* ((gn-file-name
               (sx:request-file-name
                 "Generator file name" "" "FSL"))
           (data-file-names
               (request-data-file-names))
           (res
             (make-res-filename data-file-names))
           (sc1
             (string-append res ".SC1"))
           (sr1
             (string-append res ".SR1"))
           (sc2
             (string-append res ".SC2"))
           (sr
             (string-append res ".SR"))
           (static-inputs
             (append-map sx:file->list data-file-names)))
      (run-pe sc1 gn-file-name static-inputs)
      (set! static-inputs #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr1 (sx:file->list sc1))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Residual program has been written into ")(display sr1)
      (newline)
      (sx:fast-load "puf.fsl")
      (post-unfold-residual-program! sc2 (sx:file->list sc1))
      (set! post-unfold-residual-program! #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! sr (sx:file->list sc2))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Post-unfolded program has been written into ")(display sr)
      (newline)
      'OK))

  (define (run-pe o-file ann-program static-inputs)
    (sx:fast-load "pemain.fsl")
    (cond
      ((string? ann-program)
       (fast-load ann-program)
       (generate-residual-program! o-file #f static-inputs))
      (else
        (cond ((eq? (get-style ann-program) 'direct)
               (display "Partial evaluation: direct style...")
               (newline)
               (sx:fast-load "pedef.fsl"))
              (else
                (display "Partial evaluation: continuation-passing style...")
                (newline)
                (sx:fast-load "c-pedef.fsl")))
          (generate-residual-program! o-file ann-program static-inputs)))
    (set! generate-residual-program! #!UNASSIGNED))

  ;; ------------------ ;;
  ;; (pe-switch action) ;;
  ;; ------------------ ;;

  (case action
    ((pe)     (do-pe))
    ((pepe)   (do-pepe))
    ((pepepe) (do-pepepe))
    ((gngn)   (do-gngn))
    ((gn)     (do-gn))))
