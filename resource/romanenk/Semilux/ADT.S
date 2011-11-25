;; File: adt.s

(define **od-by-files** '())
;;(define **op-names** '())

;; The following function is TI Scheme dependent...

(define (sx:find-file file)
  (if (file-exists? file)
      file
      (let ((semilux-file  (string-append **semilux-path** file)))
        (if (file-exists? semilux-file)
            semilux-file
            (error "File not found:" file)))))

(define (sx:top-level-eval exp)
  (eval exp user-initial-environment))

(define (loadt file)
  (for-each
    (lambda (entry)
      (let ((name  (od/name entry))
            (rto   (od/rto  entry)))
      (when (not (eq? name rto))
            (sx:top-level-eval `(define ,name ,rto)))))
    (fully-lazy-assoc-od-file file))
  'OK)

(define (unloadt file)
  (set! **od-by-files** (remove-file-entry file **od-by-files**))
  'OK)

(define (loadt! file)
  (unloadt file) (loadt file))

(define (remove-file-entry file binding*)
  (set! file (sx:find-file file))
  (security-filter
    (lambda (binding) (not (equal? file (car binding)))) binding*))

(define (fully-lazy-assoc-od-file file)
  (set! file (sx:find-file file))
  (let ((binding (assoc file **od-by-files**)))
    (if (pair? binding)
        (cdr binding)
        (let ((new-od* (intern-od-file file)))
          (set! **od-by-files** (cons (cons file new-od*) **od-by-files**))
          new-od*))))

(define (intern-od-file file)
  (map intern-od (sx:file->list file)))

(define (intern-od od)
  (match
    (od)
    ((key . _)
     & (memq key
             '(defprim-transparent defprim defprim-dynamic defprim-opaque))
     => '())
    (_ =>
      (error "Ill-formed primitive operator definition:" od)))
  (match
    (od)

    ((key (op . v*) se)
     & (and (symbol? op) (list? v*) 
            (and-map symbol? v*) (not (duplicate-symbols? v*)))
     =>
     (gen-od key op (length v*) `(lambda ,v* ,se)))

    ((key (op . v*))
     & (and (symbol? op) (list? v*) 
            (and-map symbol? v*) (not (duplicate-symbols? v*)))
     =>
     (gen-od key op (length v*) op))

    ((key (op . v) se)
     & (and (symbol? op) (symbol? v))
     =>
     (gen-od key op '* `(lambda ,v ,se)))

    ((key (op . v))
     & (and (symbol? op) (symbol? v))
     =>
     (gen-od key op '* op))

    ((key '* op)
     & (symbol? op)
     =>
     (gen-od key op '* op))

    ((key arity op)
     & (and (number? arity) (>= arity 0) (symbol? op))
     =>
     (gen-od key op arity op))

    ((key '* op sv)
     & (and (symbol? op) (symbol? sv))
     =>
     (gen-od key op '* sv))

    ((key arity op sv)
     & (and (number? arity) (>= arity 0) (symbol? op) (symbol? sv))
     =>
     (gen-od key op arity sv))

    (_ =>
      (error "Ill-formed primitive operator definition:" od))))

(define (gen-od key op arity se)
  ;;(when (memq op **op-names**)
  ;;      (error "Primitive operator is already defined:" key op))
  ;;(set! **op-names** (cons op **op-names**))
  (mk-od op arity (gen-bto key) (gen-rto se)))

(define (gen-bto key)
  (case key
    ((defprim-transparent defprim)
     'transparent)
    ((defprim-dynamic)
     'dynamic)
    ((defprim-opaque)
     'opaque)))

(define (gen-rto se)
  (if (symbol? se) se `(quote ,(sx:top-level-eval se))))
