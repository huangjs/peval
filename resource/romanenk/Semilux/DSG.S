;; File: dsg.s

(define (desugar-scheme-program! o-file prog)

  (define o-port #f)

  (define (write-item x)
    (write x o-port)(newline o-port)(newline o-port))

  (define (keyword? name)
    (memq name '(QUOTE IF LET BEGIN O P LAMBDA A ERROR)))

  (define (mk-o name args)
    (if (keyword? name)
        `(o ,name . ,args)
        `(,name . ,args)))

  (define **od*** #f)
  (define **funenv** #f)

  ;;
  ;; Compiles (load file)* and continues.
  ;;

  (define (compile-load* prog c)
    (let loop ((ldf* '()) (rest prog))
      (match
        (rest)

        ((('load file) . rest) =>
         (load file)  ;; This is done to get macros loaded!
         (loop (append! ldf* (list file)) rest))

        (_ =>
          (c ldf* rest))

          )))

  ;;
  ;; Compiles (loadt file)* and continues.
  ;;

  (define (compile-loadt* prog c)
    (let loop ((adt* '()) (rest prog))
      (match
        (rest)

        ((('loadt file) . rest) =>
         (loop (append! adt* (list file)) rest))

        (_ =>
          (c adt* rest))

          )))

  ;;
  ;; Checks syntax of a function definition.
  ;; Creates and returns the function's description.
  ;;

  (define (make-fun-descr def)
    (match
      (def)

      (('define (fname . pars) . exp+)
       & (and (varname? fname)
              (well-formed-formals? pars)
              (list+? exp+)) =>
       `(,fname . ,pars))

      (_ =>
         (error "Ill-formed function definition" def))

      ))

  ;;
  ;; Creates a variable name environment and compiles the Scheme
  ;; function definition into an abstract syntax function definition,
  ;; which is returned.
  ;;

  (define (compile-def def)
    (with
      (( ('define (name . formals) . exp+)  def )
       )
      (init-let-var)
      `(define (,name . ,formals) ,(compile-body formals exp+ '()))))

  ;;
  ;; Compiles bodies of function definitions and abstractions.
  ;;

  (define (compile-body formals exp+ varenv)
    (let ((varenv `(,@(map (lambda (var) `(,var . ,var)) formals) . ,varenv)))
      (compile-seq exp+ varenv)))

  ;;
  ;; Compiles a Scheme expression into its abstract tree equivalent,
  ;; which is returned.
  ;;

  (define (compile-exp exp varenv)
    (check-exp exp varenv)
    (select
      (exp)

      (vname
        & (varname? vname) =>
        (cdr (assq vname varenv)))

      (literal
        & (literal? literal) =>
        `(quote ,literal))

      (('quote s-exp) => `(quote ,s-exp))

      (('list . exp*) =>
       (foldr (lambda (exp rest) `(cons ,exp ,rest))
              '(quote ())
              (compile-exp* exp* varenv)))

      (('if exp1 exp2 exp3) =>
       (gen-if (compile-exp exp1 varenv)
               (compile-exp exp2 varenv)
               (compile-exp exp3 varenv)))

      (('let bindings . exp+) =>
       (let ((formals (map car bindings))
             (actuals (compile-exp* (map cadr bindings) varenv)))
         (compile-let
           formals actuals varenv
           (lambda (varenv)
             (compile-seq exp+ varenv)))))

      (('let* bindings . exp+) =>
       (compile-exp
         (foldr (lambda (binding body) `(let (,binding) ,body))
                `(begin . ,exp+)
                bindings)
         varenv))

      (('error . exp*) =>
       `(error . ,(compile-exp* exp* varenv)))

      (('begin . exp+) =>
       (compile-seq exp+ varenv))

      (('lambda formals . exp+) =>
       `(lambda ,formals ,(compile-body formals exp+ varenv)))

      ((exp0 . exp*)
       & (not (symbol? exp0)) =>
       `(a ,(compile-exp exp0 varenv) . ,(compile-exp* exp* varenv)))

      ((fname . exp*) =>
       (let ((vdescr (assq fname varenv))
             (fdescr (assq fname **funenv**)))
         (cond
           ((macro...? fname)
            (compile-exp (macro-expand-1 fname exp) varenv))
           (vdescr
             `(a ,(compile-exp fname varenv)
                 . ,(compile-exp* exp* varenv)))
           (fdescr
             `(p ,fname . ,(compile-exp* exp* varenv)))
           ((c...r? fname)
            (compile-exp (expand-c...r exp) varenv))
           (else
             (mk-o fname (compile-exp* exp* varenv)))
           )))

      ))

  (define (compile-exp* exp* varenv)
    (map (lambda (exp) (compile-exp exp varenv))
         exp*))

  (define (compile-seq exp+ varenv)
    (foldr1 (lambda (actual body) `(begin ,actual ,body))
            (compile-exp* exp+ varenv)))


  ;;
  ;; Generates nested lets, extends the variable environment
  ;; and compiles the original let's body in the extended environment.
  ;;

  (define (compile-let formals actuals varenv cont)
    (select
      (formals actuals)

      ('() '() =>
        (cont varenv))

      ((formal . formals) (actual . actuals) =>
       (let* ((new-formal (if (assq formal varenv)
                              (gen-let-var formal)
                              formal))
              (new-varenv `((,formal . ,new-formal) . ,varenv)))
         `(let ((,new-formal ,actual))
               ,(compile-let formals actuals new-varenv cont))))

      ))

  ;;
  ;; Checks syntax of Scheme expressions.
  ;;

  (define (check-exp exp varenv)
    (match
      (exp)

      (vname
        & (varname? vname) =>
        (when (macro...? vname)
              (error "Macro name used as variable:" vname))
        (or (assq vname varenv)
            (if (assq vname **funenv**)
                (error "Function name used as variable:" vname)
                (error "Unknown variable" vname))))

      (literal
        & (literal? literal) => '())

      (('quote . _) => (check-arity exp 1))

      (('list . exp*)
       & (list? exp*) => '())

      (('if . _) => (check-arity exp 3))

      (('let bindings . exp+)
       & (and (list? bindings) (list+? exp+)) =>
       (check-bindings bindings))

      (('let* bindings . exp+)
       & (and (list? bindings) (list+? exp+)) =>
       (check-bindings bindings))

      (('error . exp*) =>
       & (list+? exp*) => '())

      (('begin . exp+)
       & (list+? exp+) => '())

      (('lambda formals . exp+)
       & (and (well-formed-formals? formals) (list+? exp+)) => '())

      ((key . _)
       & (and (symbol? key)
              (memq  key '(list let let* error begin lambda))) =>
       (error "Ill-formed expression" exp))

      ((key . _)
       & (and (symbol? key)
              (memq  key '(define set! set-car! set-cdr!))) =>
       (error "Unacceptable expression" exp))

      ((exp0 . exp*)
       & (and (not (varname? exp0)) (list? exp*)) => '())

      ((fname . exp*)
       & (and (varname? fname) (list? exp*))
       =>
       (let ((vdescr (assq fname varenv))
             (fdescr (assq fname **funenv**)))
         (cond
           ((macro...? fname)
            (when vdescr
                  (error "Macro name used as a variable:" fname))
            (when fdescr
                  (error "Macro name used as a procedure name:" fname)))
           (vdescr
             )
           (fdescr
             (check-arity exp (length (cdr fdescr))))
           ((c...r? fname)
            (check-arity exp 1))
           (else
             (let ((od (find-od fname **od***)))
               (if od
                   (check-arity exp (od/arity od))
                   (error "Unknown operator name:" exp))))
           )))

      (_ =>
         (error "Ill-formed expression" exp))

      ))

  (define (check-bindings binding*)
    (for-each
      (lambda (binding)
        (match
          (binding)

          ((vname exp) & (varname? vname) => '())

          (_ => (error "Ill-formed binding list" binding*))

          ))
      binding*
      )
    (when (duplicate-symbols? (map car binding*))
          (error "Duplicate variables in bindings" binding*))
    )

  (define (check-arity exp arity)
    (when (not (list+? exp))
          (error "Ill-formed expression" exp))
    (with (( (fname . exp*)  exp ))
          (when (and (not (eq? arity '*)) (not (eqv? (length exp*) arity)))
                (error "Wrong number of argument expressions" exp))))

  ;;
  ;; Local optimization of some constructs.
  ;;

  (define (gen-if exp0 exp1 exp2)
    (match
      (exp0)

      (('quote value) =>
       (if value exp1 exp2))

      (('not p) =>
       `(if ,p ,exp2 ,exp1))

      (('if p ('quote x) ('quote y))
       & (and (not x) y) 
       =>  `(if ,p ,exp2 ,exp1))
             
      (_ =>
         `(if ,exp0 ,exp1 ,exp2))
      ))

  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
  ;;                                                                 ;;
  ;;    Primitive operators...                                       ;;
  ;;                                                                 ;;
  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

  (define (find-od name od*)
    (find-if (lambda (od) (eq? name (od/name od))) od*))


  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
  ;;                                                                 ;;
  ;;                   Car/cdr Sequence Handling                     ;;
  ;;                                                                 ;;
  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

  (define (c...r? fname)
    (assq fname c...r-list))

  (define (expand-c...r exp)
    (match
      (exp)

      ((fname exp1)
       & (symbol? fname) =>
       (let ((decomp (c...r? fname)))
         (if decomp
             (with (( (_ sel1 . sel2)  decomp ))
                   `(,sel1 ,(expand-c...r `(,sel2 ,exp1))))
             exp)))

      (_ => exp)

      ))

  (define c...r-list
    `((caar   car . car  ) (cadr   car . cdr  )
      (cdar   cdr . car  ) (cddr   cdr . cdr  )
      (caaar  car . caar ) (caadr  car . cadr )
      (cadar  car . cdar ) (caddr  car . cddr )
      (cdaar  cdr . caar ) (cdadr  cdr . cadr )
      (cddar  cdr . cdar ) (cdddr  cdr . cddr )
      (caaaar car . caaar) (caaadr car . caadr)
      (caadar car . cadar) (caaddr car . caddr)
      (cadaar car . cdaar) (cadadr car . cdadr)
      (caddar car . cddar) (cadddr car . cdddr)
      (cdaaar cdr . caaar) (cdaadr cdr . caadr)
      (cdadar cdr . cadar) (cdaddr cdr . caddr)
      (cddaar cdr . cdaar) (cddadr cdr . cdadr)
      (cdddar cdr . cddar) (cddddr cdr . cdddr)
      ))

  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
  ;;                                                                 ;;
  ;;                            Macro ...                            ;;
  ;;     (This is dependent on IBM PC TI Scheme macro features.)     ;;
  ;;                                                                 ;;
  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

  ;;
  ;; Tests whether symbol "fname" is the name of a macro.
  ;;

  (define (macro...? fname)
    (getprop fname 'pcs*macro))

  ;;
  ;; Macro-expands "exp" once.
  ;;

  (define (macro-expand-1 fname exp)
    ((getprop fname 'pcs*macro) exp))

  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
  ;;                                                                 ;;
  ;;                     Miscellaneous Functions                     ;;
  ;;                                                                 ;;
  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

  ;; Recognizes non-empty lists.

  (define (list+? lst)
    (and (list? lst) (not (null? lst))))

  ;; Recognizes variable names.

  (define (varname? x)
    (and (symbol? x)
         (not (boolean? x))))

  ;; Recognizes literal constants.

  (define (literal? x)
    (or (boolean? x)
        (number? x)
        (char? x)
        (string? x)
        (vector? x)))

  ;;
  ;; Returns #t iff "lst" is a list of different symbols.
  ;;

  (define (well-formed-formals? lst)
    (and (list? lst)
         (and-map varname? lst)
         (not (duplicate-symbols? lst))))

  ;;
  ;; Generation of the names of local variables.
  ;;

  (define let-var-count #f)  ;; Counter.

  ;; Initializes the variable counter.

  (define (init-let-var)
    (set! let-var-count 0))

  ;; Generates a new variable name.

  (define (gen-let-var var)
    (set! let-var-count (+ let-var-count 1))
    (string->symbol
      (string-append
        (symbol->string var)
        "$"
        (number->string let-var-count '(int)))))

  ;; ------------------------------------- ;;
  ;; (desugar-scheme-program! o-file prog) ;;
  ;; ------------------------------------- ;;

  (display "Desugaring...")(newline)
  (set! o-port (open-output-file o-file))
  (set-line-length! 78 o-port)
  (when (not (list? prog))
        (error "Ill-formed program" prog))
  (compile-load*
    prog
    (lambda (ldf* rest)
      (write-item ldf*)
      (compile-loadt*
        rest
        (lambda (adt* rest)
          (write-item adt*)
          (set! **od*** (append-map fully-lazy-assoc-od-file adt*))
          (set! **funenv** (map make-fun-descr rest))
          (when (null? rest)
                (error "Empty procedure definition list"))
          (for-each (lambda (def) (write-item (compile-def def))) rest)
          (close-output-port o-port)
          'OK)))))
