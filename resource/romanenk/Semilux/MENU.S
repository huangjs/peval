;; File: menu.s

;;(define ucmp:main)

(define (semilux)
  (set-fluid! scheme-top-level sx:menu)
  (reset))

(define (sx:trap)
  (set-fluid! scheme-top-level
    (lambda () (sx:pause) (semilux))))

(define (sx:menu)

  ;;(set! ucmp:main   #!UNASSIGNED)

  (sx:display-menu
    '("S E M I L U X :   M a i n   m e n u")
    25
    '("Preprocessing"
       "Residual program generation"
       "pOstprocessing"
       "Making fast load file"
       "eValuating Scheme expression"
       "Editor (EDWIN)"
       "eXternal editor"
       "Scheme reset"
       "Quit"))
  (let ((item (sx:query
                "Work to do"
                '(#\P #\R #\O #\M #\V #\SPACE #\E #\X #\S #\Q))))
    (window-clear 'console)
    (case item
      ((#\P) (sx:pre:main))
      ((#\R) (sx:gen:main))
      ((#\O) (sx:post:main))
      ((#\M)
       (sx:trap) (sx:cmp:main) (sx:pause) (semilux))
      ((#\V #\SPACE)
       (sx:trap)
       (display "Enter an expression:") (newline)
       (write (eval (read)))
       (sx:pause) (semilux))
      ((#\E) (sx:trap) (edwin) (semilux))
      ((#\X)
       (let ((rc  (dos-call **external-editor-name** "" 14000)))
         (when (not (= rc 0))
               (error "DOS-CALL failed with the return code" rc))))
      ((#\S)
       (display "Enter \"(semilux)\" to resume Semilux")(newline)
       (reset-scheme-top-level)
       (scheme-reset))
      ((#\Q) (exit)))))

(define (sx:pre:main)
  (define (run-pre-switch action)
    (sx:fast-load "pre.fsl")
    (pre-switch action)
    (set! pre-switch #!UNASSIGNED)
    'OK)
  (sx:display-menu
    '("S E M I L U X :   P r e p r o c e s s i n g")
    6
    '("Preprocess                 ann(desugar(s-prog),sdsd) -> ann-prog"
      "Desugar                    desugar(s-prog) -> c-prog"
      "Remove macros              ensugar(desugar(s-prog)) -> s-prog"
      "Main menu (Esc)"))
  (let ((item  (sx:query '"Work to do" '(#\P #\D #\R #\M #\ESCAPE))))
    (window-clear 'console)
    (case item
      ((#\P) (sx:trap) (run-pre-switch 'pre) (sx:pause) (semilux))
      ((#\D) (sx:trap) (run-pre-switch 'dsg) (sx:pause) (semilux))
      ((#\R) (sx:trap) (run-pre-switch 'rmm) (sx:pause) (semilux))
      (else  'OK)
      )))

(define (sx:gen:main)
  (define (run-pe-switch action)
    (sx:fast-load "pe.fsl")
    (pe-switch action)
    (set! pe-switch #!UNASSIGNED)
    'OK)
  (sx:display-menu
    '("S E M I L U X :   G e n e r a t i o n")
    9
    '("Residual program generation   pe(ann-prog,statics) -> res-prog"
      "Self-application              pe(ann-pe,ann-prog) -> gen"
      "Double self-application       pe(ann-pe,ann-pe) -> gen-gen"
      "Generator generation          gen-gen(ann-prog) -> gen"
      "Using program generator       gen(statics) -> res-prog"
      "Main menu (Esc)")
    )
  (let ((item  (sx:query "Work to do" '(#\R #\S #\D #\G #\U #\M #\ESCAPE))))
    (window-clear 'console)
    (case item
      ((#\R) (sx:trap) (run-pe-switch 'pe) (sx:pause) (semilux))
      ((#\S) (sx:trap) (run-pe-switch 'pepe) (sx:pause) (semilux))
      ((#\D) (sx:trap) (run-pe-switch 'pepepe) (sx:pause) (semilux))
      ((#\G) (sx:trap) (run-pe-switch 'gngn) (sx:pause) (semilux))
      ((#\U) (sx:trap) (run-pe-switch 'gn) (sx:pause) (semilux))
      (else 'OK)
      )))

(define (sx:post:main)
  (define (run-post-switch action)
    (sx:fast-load "post.fsl")
    (post-switch action)
    (set! post-switch #!UNASSIGNED)
    'OK)
  (sx:display-menu
    '("S E M I L U X :   P o s t p r o c e s s i n g")
    10
    '("Postprocessing                post(c-prog)    -> s-prog"
      "post Unfolding                puf(c-prog)     -> c-prog"
      "Ensugaring                    ensugar(c-prog) -> s-prog"
      "Formatting                    format(prog)     -> prog"
      "Main menu (Esc)"
      ))
  (let ((item  (sx:query '"Work to do" '(#\P #\U #\A #\E #\F #\M #\ESCAPE))))
    (window-clear 'console)
    (case item
      ((#\P) (sx:trap) (run-post-switch 'post) (sx:pause) (semilux))
      ((#\U) (sx:trap) (run-post-switch 'puf) (sx:pause) (semilux))
      ((#\E) (sx:trap) (run-post-switch 'ensg) (sx:pause) (semilux))
      ((#\F) (sx:trap) (run-post-switch 'form) (sx:pause) (semilux))
      (else 'OK)
      )))

(define (sx:cmp:main)
  (let* ((src
           (sx:request-file-name
             "Source Scheme program file name" "" "S"))
         (file-name  (sx:cut-off-ext src))
         (so   (string-append file-name ".SO"))
         (fsl  (string-append file-name ".FSL"))
         )
    (when (not (file-exists? src))
          (error "File does not exist..." src))
    (display "Compiling: ") (display src) (display " -> ") (display so)
    (newline)
    (compile-file src so)
    (display "--- Done ---") (newline)
    (display "Making: ") (display so) (display " -> ") (display fsl)
    (newline)
    (let ((rc (dos-call
                (string-append pcs-sysdir "\\make_fsl.exe")
                (string-append so " " fsl)
                4095)))
      (when (not (= rc 0))
            (error "DOS-CALL failed with the return code" rc)))
    (dos-delete so)
    (display "--- Done ---") (newline)
    'OK))
