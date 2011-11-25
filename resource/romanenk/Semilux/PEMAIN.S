;; File: pemain.s

;;
;; Global variables.
;; -----------------

(define **run-time-operations** #f)
(define **seenb4** #f)
(define **pending-confs** #f)
(define **proc-name-count** #f)
(define **var-name-count** #f)

;; Main program.

(define (generate-residual-program! o-file pgm static-inputs)

  (define o-port #f)

  (define (write-item x)
    (write x o-port)(newline o-port)(newline o-port))

  (define (kill-globals!)
    (set! **run-time-operations** #!UNASSIGNED)
    (set! **seenb4** #!UNASSIGNED)
    (set! **pending-confs** #!UNASSIGNED)
    (set! **proc-name-count** #!UNASSIGNED)
    (set! **var-name-count** #!UNASSIGNED)
    (set! generate-var-name! #!UNASSIGNED)
    (set! generate-proc-name! #!UNASSIGNED)
    (set! retrieve-proc-name! #!UNASSIGNED)
    (set! generate-param-name #!UNASSIGNED)
    (set! compose-name #!UNASSIGNED)
    (set! x-apply #!UNASSIGNED)
    (set! x-call #!UNASSIGNED)
    (set! pe-lookup-def #!UNASSIGNED)
    (set! pe-lookup-lam #!UNASSIGNED)
    (set! mk-closure #!UNASSIGNED)
    (set! closure/index #!UNASSIGNED)
    (set! closure/values #!UNASSIGNED)
    (set! keyword$? #!UNASSIGNED)
    )

  (define (pe-initialize! ldf* adt* goal-name goal-btp)

    (define (make-initial-conf name btp value*)
      (define (count-statics btp)
        (foldl-map + 0 (lambda (btv) (if (eq? btv 'S) 1 0)) btp))
      (let* ((expected-nos  (count-statics btp))
             (actual-nos    (length value*)))
        (when (not (= expected-nos actual-nos))
              (error "Wrong number of static inputs. Expected:" expected-nos))
        `(,name . ,(make-initial-conf-loop btp value*))))

    (define (make-initial-conf-loop btp value*)
      (cond
        ((null? btp) '())
        ((eq? (car btp) 'S)
         (cons (car value*) (make-initial-conf-loop (cdr btp) (cdr value*))))
        ((eq? (car btp) 'D)
         (cons '_ (make-initial-conf-loop (cdr btp) value*)))
        (else
          (error "Unexpected binding time:" (car btp)))))

    ;; --------------------------------------------- ;;
    ;; (pe-initialize! ldf* adt* goal-name goal-btp) ;;
    ;; --------------------------------------------- ;;

    (for-each load ldf*)
    (for-each loadt adt*)
    (set! **run-time-operations**
          (map (lambda (od)
                 (cons (od/name od) (sx:top-level-eval (od/rto od))))
               (append-map fully-lazy-assoc-od-file adt*)))
    (let* ((conf    (make-initial-conf goal-name goal-btp static-inputs))
           (r-name  (generate-proc-name! conf)))
      'OK))

  (define (pe-main-loop!)
    (if (null? **pending-confs**)
        'OK
        (let ((conf  (car **pending-confs**)))
          (set! **pending-confs**  (cdr **pending-confs**))
          (add-residual-definition! (switch-pe-def pgm conf))
          (pe-main-loop!))))

  (define (add-residual-definition! r-def)
    (display "New def: ")
    (with (( ('define (name . _) _)  r-def )
           )
      (write name)(newline))
    (write-item r-def))

  (define (switch-pe-def pgm conf)
    (if pgm (pe-def pgm conf) (pe-def-0 conf)))

  ;; --------------------------------------------- ;;
  ;; (generate-residual-program pgm static-inputs) ;;
  ;; --------------------------------------------- ;;

  (set! o-port (open-output-file o-file))
  (set-line-length! 78 o-port)
  (set! **seenb4** '())
  (set! **pending-confs** '())
  (set! **proc-name-count** 0)
  (set! **var-name-count** 0)
  (with (( (ldf* adt* goal-name goal-btp)  (switch-pe-def pgm '()) ))
    (pe-initialize! ldf* adt* goal-name goal-btp)
    (write-item ldf*)(write-item adt*)
    (pe-main-loop!)
    (close-output-port o-port)
    (kill-globals!)))

;;
;; Procedures to be called by the partial evaluator.
;; =================================================

;;
;; Generation of residual names.
;; -----------------------------

(define (generate-var-name! formal)
  (set! **var-name-count** (+ 1 **var-name-count**))
  (compose-name formal "#" **var-name-count**))

(define (generate-proc-name! conf)
  (let* ((name   (car conf))
         (descr  (assoc conf **seenb4**)))
    (if (pair? descr)
        (cdr descr)
        (let ((r-name  (compose-name name "-" **proc-name-count**)))
          (set! **proc-name-count** (+ 1 **proc-name-count**))
          (set! **seenb4** `((,conf . ,r-name) . ,**seenb4**))
          (set! **pending-confs** `(,conf . ,**pending-confs**))
          (display "New proc name: ")(write r-name)(newline)
          r-name))))

(define (retrieve-proc-name! conf)
  (let* ((name   (car conf))
         (descr  (assoc conf **seenb4**)))
    (if (pair? descr)
        (cdr descr)
        (error "Unexpected configuration:" conf))))

(define (generate-param-name formal n)
  (compose-name formal "_" n))

(define (compose-name name infix n)
  (string->symbol
    (string-append (symbol->string name) infix
                   (number->string n '(int)))))

;;
;; Evaluation of primitive operations.
;; -----------------------------------

(define (x-apply name args)
  (let ((descr  (assq name **run-time-operations**)))
    (when (not descr)
          (error "Unexpected primitive operator:" name))
    (apply (cdr descr) args)))

(define (x-call . name+args)
  (x-apply (car name+args) (cdr name+args)))

;;
;; Lookup operations.
;; ------------------

(define (pe-lookup-def name pgm)
  (with* (( (_ _ _ (_ . def*) _)  pgm )
          ( def   (find-if (lambda (def)
                             (with (( ('define (name# . _) . _)  def ))
                                   (eq? name name#)))
                           def*))
          )
    (when (not def)
          (error "Unexpected defined procedure:" name))
    def))

(define (pe-lookup-lam index pgm)
  (with (( (_ _ _ _ (_ . lam*))  pgm )
         )
        (list-ref lam* index)))

;; Run-time "closures".
;; --------------------

(define mk-closure cons)
(define closure/index car)
(define closure/values cdr)

;;
;; Abstract residual program trees.
;; --------------------------------

(define (keyword$? name)
  (memq name 
        '(QUOTE IF LET BEGIN O P LAMBDA A ERROR)))

