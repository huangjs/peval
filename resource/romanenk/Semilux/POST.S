;; File: post.s

(define (post-switch action)

  (define (do-post)
    (let* ((src  (sx:request-file-name
                   "Source Core Scheme program file name" "" "SC1"))
           (dst  (sx:request-file-name
                   "Target Scheme program file name" src "SR"))
           )
      (sx:fast-load "puf.fsl")
      (post-unfold-residual-program! dst (sx:file->list src))
      (set! post-unfold-residual-program! #!UNASSIGNED)
      (sx:fast-load "ensg.fsl")
      (ensugar-program! dst (sx:file->list dst))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Post-unfolded program has been written into ")
      (display dst) (newline)
      'OK))

  (define (do-puf)
    (let* ((src  (sx:request-file-name
                   "Source Core Scheme program file name" "" "SC1"))
           (dst  (sx:request-file-name
                   "Target Core Scheme program file name" src "SC2"))
           )
      (sx:fast-load "puf.fsl")
      (post-unfold-residual-program! dst (sx:file->list src))
      (set! post-unfold-residual-program! #!UNASSIGNED)
      (display "Post-unfolded program has been written into ")
      (display dst)(newline)
      'OK))

  (define (do-ensg)
    (let* ((src  (sx:request-file-name
                   "Source Core Scheme program file name" "" "SC2"))
           (dst  (sx:request-file-name
                   "Target Scheme program file name" src "SR"))
           )
      (sx:fast-load "ensg.fsl")
      (ensugar-program! dst (sx:file->list src))
      (set! ensugar-program! #!UNASSIGNED)
      (display "Ensugared program has been written into ")
      (display dst)(newline)
      'OK))

  (define (do-form)
    (let* ((src  (sx:request-file-name
                   "Source program file name" "" "S"))
           (dst  (sx:request-file-name
                   "Target program file name" src "SF"))
           )
      (sx:list->pp-file dst (sx:file->list src) 78)
      (display "Formatted program has been written into ")
      (display dst)(newline)
      'OK))

  ;; -------------------- ;;
  ;; (post-switch action) ;;
  ;; -------------------- ;;

  (case action
    ((post)  (do-post))
    ((puf)   (do-puf))
    ((ensg)  (do-ensg))
    ((form)  (do-form))
    ))
