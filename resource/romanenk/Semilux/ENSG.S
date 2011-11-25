;; File: ensg.s

;; Ensugaring residual programs.

(define (ensugar-program! o-file pgm)

  (define o-port #f)

  (define (write-item x)
    (pp x o-port 78)(newline o-port)(newline o-port))

  (define (ensg-adt file) `(loadt ,file))

  (define (ensg-ldf file) `(load ,file))

  (define (ensg-def def)
    (with (( ('define (name . formals) body)  def ))
    `(define  (,name . ,formals) . ,(ensg-body (ensg-exp body)))))

  (define (ensg-exp exp)
    (select
      (exp)
      
      (name & (symbol? exp) => name)

      (('quote value) => (ensg-cst value))

      (('if e1 e2 e3) =>
       (ensg-if (ensg-exp e1) (ensg-exp e2) (ensg-exp e3)))

      (('let ((formal actual)) body) =>
       (ensg-let formal (ensg-exp actual) (ensg-exp body)))

      (('begin actual body) =>
       (ensg-begin (ensg-exp actual) (ensg-exp body)))

      (('o name . args) =>
       `(,name . ,(ensg-exp* args)))

      (('error . args) =>
       `(error . ,(ensg-exp* args)))

      (('p name . args) =>
       `(,name . ,(ensg-exp* args)))

      (('lambda formals body) =>
       `(lambda ,formals . ,(ensg-body (ensg-exp body))))

      (('a proc . args) =>
       `(,(ensg-exp proc) . ,(ensg-exp* args)))

      (('car e1) =>
       (*extend-syntax-add-car* (ensg-exp e1)))

      (('cdr e1) =>
       (*extend-syntax-add-cdr* (ensg-exp e1)))

      (('cons e1 e2) =>
       (ensg-cons (ensg-exp e1) (ensg-exp e2)))

      ((name . args) =>
       `(,name . ,(ensg-exp* args)))

      ))

  (define (ensg-exp* exp*)
    (map ensg-exp exp*))

  (define (ensg-cst value)
    (if (ensg-literal? value) value `(quote ,value)))

  (define (ensg-cons exp1 exp2)
    (list 'quasiquote
          (cons (ensg-unquote exp1) (ensg-unquote exp2))))

  (define (ensg-unquote exp)
    (match
      (exp)
      
      (_ & (ensg-literal? exp) => exp)
      
      (('quote c) => c)
      
      (('quasiquote c) => c)
      
      (_ => (list 'UNQUOTE exp))
      
      ))

  (define (ensg-if exp0 exp1 exp2)
    (match
      (exp2)
      
      (('if p a b) =>
       `(cond (,exp0 . ,(ensg-body exp1))
              (,p . ,(ensg-body a))
              (else . ,(ensg-body b))))
      
      (('cond . clause*) =>
       `(cond (,exp0 . ,(ensg-body exp1)) . ,clause*))
      
      (('quote #f) =>
       (ensg-and exp0 exp1))
      
      (_ =>
         `(if ,exp0 ,exp1 ,exp2))
      
      ))

  (define (ensg-and exp0 exp2)
    (match
      (exp2)
      
      (('and . exp*) => `(and ,exp0 . ,exp*))
      
      (_ => `(and ,exp0 ,exp2))
      
      ))

  (define (ensg-let formal actual body)
    (match
      (body)
      
      (('let ((formal0 actual0)) . exp+) =>
       `(let* ((,formal ,actual) (,formal0 ,actual0)) . ,exp+))
      
      (('let* bindings . exp+) =>
       `(let* ((,formal ,actual) . ,bindings) . ,exp+))
      
      (_ =>
         `(let ((,formal ,actual)) . ,(ensg-body body)))
      
      ))

  (define (ensg-begin actual body)
    (match
      (actual)
      
      (('begin . actual+) =>
       `(begin ,@actual+ . ,(ensg-body body)))
      
      (_ =>
         `(begin ,actual . ,(ensg-body body)))
      
      ))

  (define (ensg-literal? x)
    (or (boolean? x)
        (number? x)
        (char? x)
        (string? x)))

  (define (ensg-body exp)
    (match
      (exp)

      (('begin . exp+) => exp+)

      (_ => `(,exp))

      ))

  ;; ---------------------- ;;
  ;; (ensugar-program! pgm) ;;
  ;; ---------------------- ;;

  (display "Ensugaring...")(newline)
  (set! o-port (open-output-file o-file))
  (with (( (ldf* adt* . def*)  pgm )
         )
         (for-each (lambda (ldf) (write-item (ensg-ldf ldf))) ldf*)
         (for-each (lambda (adt) (write-item (ensg-adt adt))) adt*)
         (for-each (lambda (def) (write-item (ensg-def def))) def*)
         (close-output-port o-port)))
