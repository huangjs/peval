;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval)

;;;;;;
;;; partial-eval-layer

(def (layer* e) partial-eval-layer ()
  ((eval-functions)
   (inline-functions)
   (side-effect-free-functions)
   (non-local-exit-free-functions)
   (lookup-variable-values)))

(def special-variable *function-call-inline-limit* 10)

(def special-variable *function-call-inline-level*)

(def special-variable *tagbody-go-unroll-limit* 10)

;;;;;;
;;; may-type

(def type may-type ()
  '(member :never :unknown :always))

(def function never? (value)
  (eq value :never))

(def function unknown? (value)
  (eq value :unknown))

(def function always? (value)
  (eq value :always))

(def function may-not (value)
  (ecase value
    (:never :always)
    (:unknown :unknown)
    (:always :never)))

(def function may-or (&rest values)
  (may-or* values))

(def function may-or* (values &key (key #'identity))
  (cond ((find :always values :key key)
         :always)
        ((find :unknown values :key key)
         :unknown)
        (t :never)))

(def function may-and (&rest values)
  (may-and* values))

(def function may-and* (values &key (key #'identity))
  (may-not (may-or* values :key key)))

(def function may-merge (&rest values)
  (may-merge* values))

(def function may-merge* (values &key (key #'identity))
  (bind ((length (length values)))
    (cond ((= length (count :always values :key key))
           :always)
          ((= length (count :never values :key key))
           :never)
          (t :unknown))))

;;;;;;
;;; eval-function-call?

(def layered-method eval-function-call? ((ast free-application-form) operator arguments)
  #f)

(def layered-method eval-function-call? :in partial-eval-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator (eval-functions-of (current-layer-prototype)) :test #'equal)))

;;;;;;
;;; inline-function-call?

(def layered-method inline-function-call? ((ast free-application-form) operator arguments)
  #f)

(def layered-method inline-function-call? :in partial-eval-layer ((ast free-application-form) operator arguments)
  (or (call-next-layered-method)
      (member operator (inline-functions-of (current-layer-prototype)) :test #'equal)))

;;;;;;
;;; lookup-variable-value?

(def layered-method lookup-variable-value? ((ast variable-reference-form) name)
  #f)

(def layered-method lookup-variable-value? :in partial-eval-layer ((ast variable-reference-form) name)
  (or (call-next-layered-method)
      (member name (lookup-variable-values-of (current-layer-prototype)))))

;;;;;;
;;; return-type

(def layered-method return-type ((ast walked-form))
  t)

(def layered-method return-type ((ast constant-form))
  (type-of (value-of ast)))

(def layered-method return-type ((ast variable-reference-form))
  (variable-type (name-of ast)))

(def layered-method return-type ((ast free-application-form))
  (function-call-return-type ast (operator-of ast) (arguments-of ast)))

;;;;;;
;;; function-call-return-type

(def layered-method function-call-return-type ((ast free-application-form) operator arguments)
  t)

;;;;;;
;;; return-value

(def layered-method return-value ((ast walked-form))
  nil)

(def layered-method return-value ((ast constant-form))
  ast)

(def layered-method return-value ((ast implicit-progn-mixin))
  (if (never? (exits-non-locally? ast))
      (return-value (last-elt (body-of ast)))
      (call-next-layered-method)))

(def layered-method return-value ((ast block-form))
  (if (block-referenced? ast ast)
      ast
      (call-next-layered-method)))

(def layered-method return-value ((ast free-application-form))
  (function-call-return-value ast (operator-of ast) (arguments-of ast)))

;;;;;;
;;; collect-return-values

(def layered-method collect-return-values ((ast walked-form))
  (list ast))

(def layered-method collect-return-values ((ast implicit-progn-mixin))
  (collect-return-values (aif (body-of ast)
                              (last-elt it)
                              (make-instance 'constant-form :value nil))))

(def layered-method collect-return-values ((block block-form))
  (append (prog1-bind return-values nil
            (map-ast (lambda (ast)
                       (when (and (typep ast 'return-from-form)
                                  (eq block (target-block-of ast)))
                         (setf return-values (nconc (collect-return-values (result-of ast)) return-values)))
                       ast)
                     block))
          (call-next-layered-method)))

;;;;;;
;;; function-call-return-value

(def layered-method function-call-return-value ((ast free-application-form) operator arguments)
  nil)

;;;;;;
;;; returns-new-allocation?

(def layered-method returns-new-allocation? ((ast walked-form))
  :unknown)

(def layered-method returns-new-allocation? ((ast constant-form))
  :never)

;;;;;;
;;; returns-locally?

(def layered-method returns-locally? ((ast walked-form))
  :unknown)

(def layered-method returns-locally? ((ast constant-form))
  :always)

(def layered-method returns-locally? ((ast return-from-form))
  :never)

(def layered-method returns-locally? ((ast go-form))
  :never)

(def layered-method returns-locally? ((ast implicit-progn-mixin))
  (may-not (may-or* (body-of ast) :key 'exits-non-locally?)))

;;;;;;
;;; exits-non-locally?

(def layered-method exits-non-locally? ((ast walked-form))
  :unknown)

(def layered-method exits-non-locally? ((ast constant-form))
  :never)

(def layered-method exits-non-locally? ((ast if-form))
  (may-or (exits-non-locally? (condition-of ast))
          (may-merge (exits-non-locally? (then-of ast))
                     (exits-non-locally? (else-of ast)))))

(def layered-method exits-non-locally? ((ast implicit-progn-mixin))
  (may-or* (body-of ast) :key 'exits-non-locally?))

(def layered-method exits-non-locally? ((ast binder-form-mixin))
  (may-or (may-or* (bindings-of ast) :key 'exits-non-locally?)
          (call-next-layered-method)))

(def layered-method exits-non-locally? ((ast block-form))
  (if (every (lambda (non-local-exit)
               (typep non-local-exit 'return-from-form))
             (collect-non-local-exits ast))
      :never
      (call-next-layered-method)))

(def layered-method exits-non-locally? ((ast return-from-form))
  :always)

(def layered-method exits-non-locally? ((ast go-tag-form))
  :never)

(def layered-method exits-non-locally? ((ast go-form))
  :always)

(def layered-method exits-non-locally? ((ast the-form))
  (exits-non-locally? (value-of ast)))

(def layered-method exits-non-locally? ((ast variable-reference-form))
  :never)

(def layered-method exits-non-locally? ((ast lexical-variable-binding-form))
  (exits-non-locally? (initial-value-of ast)))

(def layered-method exits-non-locally? ((ast walked-lexical-application-form))
  (exits-non-locally? (definition-of ast)))

(def layered-method exits-non-locally? ((ast lambda-function-form))
  :never)

(def layered-method exits-non-locally? ((ast function-object-form))
  :never)

(def layered-method exits-non-locally? ((ast free-application-form))
  (if (and (never? (may-or* (arguments-of ast) :key 'exits-non-locally?))
           (eval-function-call? ast (operator-of ast) (arguments-of ast)))
      :never
      (exits-function-call-non-locally? ast (operator-of ast) (arguments-of ast))))

;;;;;;
;;; exits-function-call-non-locally?

(def layered-method exits-function-call-non-locally? ((ast free-application-form) operator arguments)
  :unknown)

(def layered-method exits-function-call-non-locally? :in partial-eval-layer ((ast free-application-form) operator arguments)
  (if (member operator (non-local-exit-free-functions-of (current-layer-prototype)) :test #'equal)
      :never
      (call-next-layered-method)))

;;;;;;
;;; collect-non-local-exits

(def layered-method collect-non-local-exits ((ast walked-form))
  nil)

(def layered-method collect-non-local-exits ((ast constant-form))
  nil)

(def layered-method collect-non-local-exits ((ast if-form))
  (append (collect-non-local-exits (condition-of ast))
          (collect-non-local-exits (then-of ast))
          (collect-non-local-exits (else-of ast))))

(def layered-method collect-non-local-exits ((ast implicit-progn-mixin))
  (mappend #'collect-non-local-exits (body-of ast)))

(def layered-method collect-non-local-exits ((ast return-from-form))
  (list ast))

(def layered-method collect-non-local-exits ((ast go-tag-form))
  nil)

(def layered-method collect-non-local-exits ((ast go-form))
  (list ast))

(def layered-method collect-non-local-exits ((ast the-form))
  (collect-non-local-exits (value-of ast)))

(def layered-method collect-non-local-exits ((ast variable-reference-form))
  nil)

(def layered-method collect-non-local-exits ((ast free-application-form))
  nil)

(def layered-method collect-non-local-exits ((ast setq-form))
  nil)

(def layered-method collect-non-local-exits ((ast walked-lexical-application-form))
  (collect-non-local-exits (definition-of ast)))

;;;;;;
;;; has-side-effect?

(def layered-method has-side-effect? ((ast walked-form))
  :unknown)

(def layered-method has-side-effect? ((ast constant-form))
  :never)

(def layered-method has-side-effect? ((ast if-form))
  (may-or (has-side-effect? (condition-of ast))
          (may-merge (has-side-effect? (then-of ast))
                     (has-side-effect? (else-of ast)))))

(def layered-method has-side-effect? ((ast implicit-progn-mixin))
  (may-or* (body-of ast) :key 'has-side-effect?))

(def layered-method has-side-effect? ((ast binder-form-mixin))
  (may-or (may-or* (bindings-of ast) :key 'has-side-effect?)
          (call-next-layered-method)))

(def layered-method has-side-effect? ((ast return-from-form))
  :never)

(def layered-method has-side-effect? ((ast go-tag-form))
  :never)

(def layered-method has-side-effect? ((ast go-form))
  :never)

(def layered-method has-side-effect? ((ast setq-form))
  :always)

(def layered-method has-side-effect? ((ast the-form))
  (has-side-effect? (value-of ast)))

(def layered-method has-side-effect? ((ast variable-reference-form))
  :never)

(def layered-method has-side-effect? ((ast lexical-variable-binding-form))
  (has-side-effect? (initial-value-of ast)))

(def layered-method has-side-effect? ((ast lambda-function-form))
  :never)

(def layered-method has-side-effect? ((ast function-object-form))
  :never)

(def layered-method has-side-effect? ((ast walked-lexical-application-form))
  (has-side-effect? (definition-of ast)))

(def layered-method has-side-effect? ((ast free-application-form))
  (if (and (never? (may-or* (arguments-of ast) :key 'has-side-effect?))
           (eval-function-call? ast (operator-of ast) (arguments-of ast)))
      :never
      (has-function-call-side-effect? ast (operator-of ast) (arguments-of ast))))

;;;;;;
;;; has-function-call-side-effect?

(def layered-method has-function-call-side-effect? ((ast free-application-form) operator arguments)
  :unknown)

(def layered-method has-function-call-side-effect? :in partial-eval-layer ((ast free-application-form) operator arguments)
  (if (member operator (side-effect-free-functions-of (current-layer-prototype)) :test #'equal)
      :never
      (call-next-layered-method)))

;;;;;;
;;; collect-side-effects

(def layered-method collect-side-effects ((ast constant-form))
  nil)

(def layered-method collect-side-effects ((ast implicit-progn-mixin))
  (mappend 'collect-side-effects (body-of ast)))

(def layered-method collect-side-effects ((ast free-application-form))
  (if (eval-function-call? ast (operator-of ast) (arguments-of ast))
      (mappend 'collect-side-effects (arguments-of ast))
      (list ast)))

;;;;;;
;;; partial-eval-lambda-list

(def function partial-eval-lambda-list (argument-definitions argument-values)
  (when (or argument-definitions
            argument-values)
    (bind ((argument-names (remove nil (mappend (lambda (argument-definition)
                                                  (typecase argument-definition
                                                    (function-argument-form-with-supplied-p-parameter (list (name-of argument-definition)
                                                                                                            (supplied-p-parameter-name-of argument-definition)))
                                                    (function-argument-form (list (name-of argument-definition)))))
                                                argument-definitions)))
           ;; KLUDGE: TODO: remove this eval and use alexandria
           (evaluated-values (mapcar 'walk-form ; KLUDGE: TODO: this is stupid, in what environment are we walking?
                                     (eval `(destructuring-bind
                                                  ,@(cdadr (unwalk-form (make-instance 'lambda-function-form
                                                                                       :bindings argument-definitions
                                                                                       :body nil)))
                                                ,(list 'quote (mapcar 'unwalk-form (mapcar 'partial-eval-form argument-values)))
                                              (list ,@argument-names))))))
      (iter (for argument-name :in argument-names)
            (for evaluated-value :in evaluated-values)
            (extend-variable-bindings argument-name
                                      (etypecase evaluated-value
                                        (walked-form evaluated-value)
                                        ;; TODO: get rid of this as soon as we handle &key (a nil a?) above for a?
                                        (cons (if (constant-values? evaluated-value)
                                                  (make-instance 'constant-form :value (constant-values evaluated-value))
                                                  (make-instance 'free-application-form
                                                                 :operator 'list
                                                                 :arguments evaluated-value)))
                                        (t (make-instance 'constant-form :value evaluated-value))))))))

;;;;;;
;;; partial-eval-implicit-progn

(def layered-method partial-eval-implicit-progn ((ast implicit-progn-mixin))
  (partial-eval-implicit-progn (body-of ast)))

(def layered-method partial-eval-implicit-progn ((ast list))
  (iter (for body-ast-cell :on ast)
        (for body-ast = (car body-ast-cell))
        (for last-form? = (null (cdr body-ast-cell)))
        (for evaluated-ast = (progn
                               (partial-eval.debug "Progn form element ~A" body-ast)
                               (partial-eval-form body-ast)))
        (for exists-non-locally? = (exits-non-locally? evaluated-ast))
        (when evaluated-ast
          (if (or last-form?
                  (not (never? (has-side-effect? evaluated-ast)))
                  (not (never? exists-non-locally?)))
              (etypecase evaluated-ast
                (progn-form
                 (appending (body-of evaluated-ast) :into result))
                (multiple-value-prog1-form
                 (if last-form?
                     (collect evaluated-ast :into result)
                     (progn
                       (collect (first-form-of evaluated-ast) :into result)
                       (appending (other-forms-of evaluated-ast) :into result))))
                (t (collect evaluated-ast :into result)))
              (partial-eval.debug "Skipping implicit progn body form ~A" evaluated-ast))
          (when (always? exists-non-locally?)
            (partial-eval.debug "Skipping the rest of implicit progn body form due to ~A, returning ~A" evaluated-ast result)
            (return (make-progn-form result))))
        (finally
         (progn
           (partial-eval.debug "Finished implicit progn body, result is ~A" result)
           (return (make-progn-form result))))))

;;;;;;
;;; partial-eval-function-call

(def layered-method partial-eval-function-call ((ast free-application-form) operator arguments)
  (partial-eval.debug "Leaving function call to ~A intact" operator)
  (make-free-application-form operator arguments))

;;;;;;
;;; partial-eval-form

(def layered-method partial-eval-form ((ast constant-form))
  ast)

(def layered-method partial-eval-form ((ast if-form))
  (bind ((evaluated-condition (partial-eval-form (condition-of ast)))
         (evaluated-condition-return-value (return-value evaluated-condition))
         (evaluated-condition-return-type (if evaluated-condition-return-value
                                              (return-type evaluated-condition-return-value)
                                              (return-type evaluated-condition))))
    (labels ((partial-eval-then ()
               (bind ((form (if (typep evaluated-condition 'constant-form)
                                (unwalk-form (condition-of ast))
                                (unwalk-form evaluated-condition))))
                 (if (and (consp form)
                          (member (first form) '(eq eql =)))
                     (extend-assumptions form)
                     (extend-assumptions `(not (eq #f ,form))))
                 (partial-eval-form (then-of ast))))
             (partial-eval-else ()
               (bind ((form (if (typep evaluated-condition 'constant-form)
                                (unwalk-form (condition-of ast))
                                (unwalk-form evaluated-condition))))
                 (extend-assumptions `(eq #f ,form))
                 (partial-eval-form (else-of ast))))
             (partial-eval-branch (condition?)
               (bind ((outer-environment *environment*)
                      (*environment* (fork-environment))
                      (evaluated-branch (if condition?
                                            (partial-eval-then)
                                            (partial-eval-else)))
                      (runtime-bindings (iter (for (name outer-value) :on (bindings-of outer-environment) :by #'cddr)
                                              (for branch-value = (variable-binding name))
                                              (unless (eq outer-value branch-value)
                                                (setf (variable-binding name outer-environment) nil)
                                                (when branch-value
                                                  (collect (make-instance 'setq-form
                                                                          :variable (make-instance 'variable-reference-form :name name)
                                                                          :value branch-value)))))))
                 (if runtime-bindings
                     (if (and (length= 1 runtime-bindings)
                              (eq evaluated-branch (value-of (first runtime-bindings))))
                         (make-instance 'setq-form
                                        :variable (variable-of (first runtime-bindings))
                                        :value evaluated-branch)
                         (make-instance 'multiple-value-prog1-form
                                        :first-form evaluated-branch
                                        :other-forms runtime-bindings))
                     evaluated-branch))))
      (partial-eval.debug "If condition evaluated to ~A" evaluated-condition)
      (if (or (typep evaluated-condition-return-value 'constant-form)
              (subtypep evaluated-condition-return-type 'null)
              (subtypep evaluated-condition-return-type '(not null)))
          (bind ((evaluated-branch (if (or (and evaluated-condition-return-value
                                                (value-of evaluated-condition-return-value))
                                           (subtypep evaluated-condition-return-type '(not null)))
                                       (partial-eval-then)
                                       (partial-eval-else))))
            (if (and (never? (has-side-effect? evaluated-condition))
                     (never? (exits-non-locally? evaluated-condition)))
                evaluated-branch
                (make-progn-form (list evaluated-condition evaluated-branch))))
          (bind ((negeated-condition? (and (typep evaluated-condition 'free-application-form)
                                           (eq 'not (operator-of evaluated-condition)))))
            (iter (for return-value :in (collect-return-values evaluated-condition))
                  (when (and (never? (has-side-effect? return-value))
                             (never? (exits-non-locally? return-value)))
                    (bind ((type (return-type return-value)))
                      (cond ((subtypep type '(not null))
                             (change-class return-value 'constant-form :value #t))
                            ((subtypep type 'null)
                             (change-class return-value 'constant-form :value #f))))))
            (bind ((runtime-condition (if negeated-condition?
                                          (first (arguments-of evaluated-condition))
                                          evaluated-condition))
                   (runtime-then (partial-eval-branch (not negeated-condition?)))
                   (runtime-else (partial-eval-branch negeated-condition?)))
              ;; TODO: find better aproach for these rules being applied recursievely!
              ;; TODO: use fare-matcher, cl-unification or something
              (cond ((and (typep runtime-then 'constant-form)
                          (null (value-of runtime-then))
                          (typep runtime-else 'constant-form)
                          (null (value-of runtime-else)))
                     (if (or (has-side-effect? runtime-condition)
                             (exits-non-locally? runtime-condition))
                         (make-instance 'progn-form :body (list runtime-condition (make-instance 'constant-form :value nil)))
                         (make-instance 'constant-form :value nil)))
                    ((and (or (eq runtime-condition runtime-then) ; NOTE: eq means the value is the same value runtime!
                              (and (typep runtime-condition 'variable-reference-form)
                                   (typep runtime-then 'variable-reference-form)
                                   (eq (name-of runtime-condition) (name-of runtime-then))))
                          (typep runtime-else 'constant-form)
                          (null (value-of runtime-else)))
                     runtime-condition)
                    (t
                     (make-instance 'if-form
                                    :condition runtime-condition
                                    :then runtime-then
                                    :else runtime-else)))))))))

(def layered-method partial-eval-form ((ast progn-form))
  (partial-eval-implicit-progn ast))

(def layered-method partial-eval-form ((ast multiple-value-prog1-form))
  (bind ((evaluated-first-form (partial-eval-form (first-form-of ast)))
         (evaluated-other-forms (partial-eval-implicit-progn (other-forms-of ast))))
    (if (and (never? (has-side-effect? evaluated-first-form))
             (never? (exits-non-locally? evaluated-first-form)))
        (if (typep evaluated-other-forms 'constant-form)
            evaluated-first-form
            (make-progn-form (list evaluated-other-forms
                                   evaluated-first-form)))
        (make-instance 'multiple-value-prog1-form
                       :first-form evaluated-first-form
                       :other-forms (list evaluated-other-forms)))))

(def layered-method partial-eval-form ((ast block-form))
  (bind ((evaluated-body (partial-eval-implicit-progn ast))
         (non-local-exits (collect-non-local-exits evaluated-body)))
    (cond ((and (always? (exits-non-locally? evaluated-body))
                (length= 1 non-local-exits)
                (typep (first non-local-exits) 'return-from-form)
                (eq ast (target-block-of (first non-local-exits))))
           (bind ((non-local-exit (first non-local-exits)))
             (aprog1 (if (not (never? (has-side-effect? evaluated-body)))
                         (make-instance 'progn-form :body (append (remove-if (of-type 'return-from-form) (body-of evaluated-body))
                                                                  (list (partial-eval-form (result-of non-local-exit)))))
                         (partial-eval-form (result-of non-local-exit)))
               (partial-eval.debug "Eliminated ~A by ~A, result is ~A" ast (first non-local-exits) it))))
          ((block-referenced? ast evaluated-body)
           ;; NOTE: keep the identity, so that we don't break referring return-from forms
           (setf (body-of ast)
                 (if (typep evaluated-body 'progn-form)
                     (body-of evaluated-body)
                     (list evaluated-body)))
           ast)
          (t evaluated-body))))

(def layered-method partial-eval-form ((ast return-from-form))
  (make-instance 'return-from-form
                 :target-block (target-block-of ast)
                 :result (partial-eval-form (result-of ast))))

(def layered-method partial-eval-form ((ast tagbody-form))
  (iter (with body = ast)
        (for go-count :from 0)
        (when (= go-count *tagbody-go-unroll-limit*)
          (partial-eval.debug "Too many go statements evaluated, giving up unrolling ~A" ast)
          (return ast))
        (for evaluated-body = (partial-eval-implicit-progn body))
        (for non-local-exits = (collect-non-local-exits evaluated-body))
        (for gos = (remove-if-not (lambda (non-local-exit)
                                    (and (typep non-local-exit 'go-form)
                                         (eq ast (enclosing-tagbody-of non-local-exit))))
                                  non-local-exits))
        (for always-go? = (and (always? (exits-non-locally? evaluated-body))
                               (length= 1 gos)))
        (if (typep evaluated-body 'progn-form)
            (appending (body-of evaluated-body) :into result)
            (collect evaluated-body :into result))
        (setf body (when always-go?
                     (jump-target-of (first gos))))
        (unless body
          (return
            (if (or always-go?
                    (null gos))
                ;; TODO: KLUDGE: what do we do with go forms down the tree?
                (bind ((result (remove-if (of-type '(or go-form go-tag-form)) result))
                       (result-ast (make-progn-form result)))
                  (aprog1 (if (or (never? (returns-locally? result-ast))
                                  (eq (return-type result-ast) 'null))
                              result-ast
                              (make-progn-form (append result (list (make-instance 'constant-form :value nil)))))
                    (partial-eval.debug "Eliminated ~A by unrolling, result is ~A" ast it)))
                (progn
                  (partial-eval.debug "Undecidable go statementes, giving up unrolling ~A" ast)
                  ast))))))

(def layered-method partial-eval-form ((ast go-tag-form))
  ast)

(def layered-method partial-eval-form ((ast go-form))
  ast)

(def layered-method partial-eval-form ((ast setq-form))
  (bind ((value (partial-eval-form (value-of ast)))
         (variable (variable-of ast)))
    (if (typep variable 'free-variable-reference-form)
        (make-instance 'setq-form
                       :variable variable
                       :value value)
        (setf (variable-binding (name-of variable)) value))))

(def function partial-eval-variable-binding-body (ast bindings)
  (bind ((evaluated-body (partial-eval-implicit-progn ast))
         (body (make-progn-form evaluated-body))
         (runtime-bindings (iter (for binding :in bindings)
                                 (for name = (name-of binding))
                                 (for variable-referenced? = (variable-referenced? name evaluated-body))
                                 (for initial-value = (initial-value-of binding))
                                 (for has-side-effect? = (has-side-effect? initial-value))
                                 (for exits-non-locally? = (exits-non-locally? initial-value))
                                 (if (and (not (and (typep initial-value 'variable-reference-form)
                                                    (eq name (name-of initial-value))))
                                          variable-referenced?)
                                     (collect binding)
                                     (if (or (not (never? has-side-effect?))
                                             (not (never? exits-non-locally?)))
                                         (setf body (make-progn-form (list initial-value body))))))))
    ;; make common subexpressions local variables
    (bind ((seen-forms (make-hash-table)))
      (map-ast (lambda (ast)
                 (when (typep ast 'walked-form)
                   (incf (gethash ast seen-forms 0)))
                 (unless (typep ast 'binder-form-mixin)
                   ast))
               body)
      (map nil 'funcall
           (iter (for (key value) :in-hashtable seen-forms)
                 (when (and (not (typep key '(or constant-form variable-reference-form lexical-variable-binding-form)))
                            (never? (has-side-effect? key))
                            (never? (exits-non-locally? key))
                            (> value 1))
                   (bind ((name (gensym)))
                     (push (make-instance 'lexical-variable-binding-form
                                          :name name
                                          :initial-value (bind ((class (class-of key)))
                                                           (prog1-bind clone (make-instance class)
                                                             (dolist (slot (class-slots class))
                                                               (when (slot-boundp-using-class class key slot)
                                                                 (setf (slot-value-using-class class clone slot) (slot-value-using-class class key slot)))))))
                           runtime-bindings)
                     (map-ast (lambda (ast)
                                (when (eq key ast)
                                  (collect (bind ((key key))
                                             (lambda ()
                                               (change-class key 'lexical-variable-reference-form :name name)))))
                                ast)
                              body)))))
      (if runtime-bindings
          (make-instance 'let*-form ;; TODO: is this right?
                         :bindings runtime-bindings
                         :body (make-progn-form-body body))
          (make-progn-form body)))))

(def layered-method partial-eval-form ((ast let-form))
  (bind ((*environment* (clone-environment))
         (bindings (mapcar (lambda (binding)
                             (bind ((name (name-of binding))
                                    (value (partial-eval-form (initial-value-of binding))))
                               (make-instance 'lexical-variable-binding-form
                                              :name name
                                              :initial-value value)))
                           (bindings-of ast))))
    (iter (for binding :in bindings)
          (extend-variable-bindings (name-of binding) (initial-value-of binding)))
    (partial-eval-variable-binding-body ast bindings)))

(def layered-method partial-eval-form ((ast let*-form))
  (bind ((*environment* (clone-environment))
         (bindings (mapcar (lambda (binding)
                             (bind ((name (name-of binding))
                                    (value (partial-eval-form (initial-value-of binding))))
                               (extend-variable-bindings name value)
                               (make-instance 'lexical-variable-binding-form
                                              :name name
                                              :initial-value value)))
                           (bindings-of ast))))
    (partial-eval-variable-binding-body ast bindings)))

(def layered-method partial-eval-form ((ast variable-reference-form))
  (bind ((value (variable-binding (name-of ast))))
    (if value
        (if (and (never? (has-side-effect? value))
                 (never? (exits-non-locally? value)))
            value
            (or (return-value value)
                ast))
        ast)))

(def layered-method partial-eval-form ((ast special-variable-reference-form))
  (bind ((name (name-of ast)))
    (if (or (and (constantp name)
                 (boundp name))
            (lookup-variable-value? ast name))
        (make-instance 'constant-form :value (symbol-value name))
        (call-next-layered-method))))

(def layered-method partial-eval-form ((ast walked-lexical-function-object-form))
  ast)

(def layered-method partial-eval-form ((ast free-function-object-form))
  ast)

(def layered-method partial-eval-form ((ast lambda-function-form))
  ast)

(def layered-method partial-eval-form ((ast free-application-form))
  (bind ((operator (operator-of ast))
         (arguments (mapcar #'partial-eval-form (arguments-of ast))))
    (cond ((and (constant-values? arguments)
                (eval-function-call? ast operator arguments))
           ;; TODO: should check assumptions in *environment*, because we may already have the return value there in some form
           (partial-eval.debug "Immediately evaluating function call to ~A with constant arguments ~A" operator arguments)
           ;; TODO: this assumes the function does not change, let the user decide
           (prog1-bind value
               (make-instance 'constant-form :value (apply operator (constant-values arguments)))
             (partial-eval.debug "Evaluating function call returned ~A" value)))
          ((and (inline-function-call? ast operator arguments)
                (< *function-call-inline-level* *function-call-inline-limit*))
           (bind ((form (make-function-lambda-form operator))
                  (*function-call-inline-level* (1+ *function-call-inline-level*)))
             (aprog1 (restart-case
                         (if form
                             ;; TODO: at least copy types for variable which are passed down
                             (bind ((*environment* (make-instance 'environment :types (types-of *environment*)))
                                    (lambda-ast (walk-form form)))
                               (bind ((*print-level* 3))
                                 (partial-eval.debug "Inlining function call to ~A as ~A" operator form))
                               (partial-eval-lambda-list (bindings-of lambda-ast) arguments)
                               (partial-eval-implicit-progn lambda-ast))
                             (make-free-application-form operator arguments))
                       (give-up nil ast))
               (partial-eval.debug "Result for inlining function call to ~A is ~A" operator it))))
          (t
           (partial-eval.debug "Partial evaluating function call to ~A with arguments ~A" operator arguments)
           (partial-eval-function-call ast operator arguments)))))

(def layered-method partial-eval-form ((ast multiple-value-call-form))
  (bind ((arguments (mapcar #'partial-eval-form (arguments-of ast))))
    (partial-eval-lambda-list (bindings-of (function-designator-of ast)) arguments)
    (partial-eval-form (function-designator-of ast))))

(def layered-method partial-eval-form ((ast macrolet-form))
  (partial-eval-implicit-progn ast))

(def layered-method partial-eval-form ((ast flet-form))
  (partial-eval.debug "Evaluating flet function ~A" ast)
  (partial-eval-implicit-progn ast))

(def layered-method partial-eval-form ((ast labels-form))
  (partial-eval-implicit-progn ast))

(def layered-method partial-eval-form ((ast lexical-application-form))
  (bind ((*environment* (clone-environment))
         (lambda-ast (definition-of ast))
         (argument-values (mapcar #'partial-eval-form (arguments-of ast))))
    (partial-eval.debug "Lexical function application ~A for arguments ~A with values ~A" (operator-of ast) (bindings-of lambda-ast) argument-values)
    (partial-eval-lambda-list (bindings-of lambda-ast) argument-values)
    (aprog1 (partial-eval-implicit-progn lambda-ast)
      (partial-eval.debug "Result for lexical function application ~A is ~A" (operator-of ast) it))))

(def layered-method partial-eval-form ((ast lambda-application-form))
  (bind ((*environment* (clone-environment))
         (argument-definitions (bindings-of (operator-of ast)))
         (argument-values (mapcar #'partial-eval-form (arguments-of ast))))
    (partial-eval.debug "Lambda function application ~A for arguments ~A with values ~A"
                        (operator-of ast) argument-definitions argument-values)
    (partial-eval-lambda-list argument-definitions argument-values)
    (partial-eval-implicit-progn (operator-of ast))))

(def layered-method partial-eval-form ((ast the-form))
  (partial-eval-form (value-of ast)))

(def layered-method partial-eval-form ((ast locally-form))
  (partial-eval-implicit-progn ast))

(def layered-method partial-eval-form ((ast symbol-macrolet-form))
  ;; TODO: bindings
  (partial-eval-implicit-progn ast))

;;;;;;
;;; partial-eval

(def (function e) partial-eval (form &key (layer 'standard-partial-eval-layer)
                                     assumptions bindings types
                                     eval-functions inline-functions side-effect-free-functions non-local-exit-free-functions lookup-variable-values)
  "The function PARTIAL-EVAL takes a lisp FORM and returns another lisp FORM. The resulting form should, in all possible environments, produce the same return value(s), the same side effects in the same order, and the same non local exits (in and out), as the original FORM would have produced. The ENVIRONMENT parameter specifies the initial assumptions in which the form should be partially evaluated. The LAYER parameter provides a way to customize the standard partial evaluation logic to your needs."
  (bind ((*environment* (make-instance 'environment
                                       :assumptions assumptions
                                       :bindings bindings
                                       :types types))
         (*function-call-inline-level* 0))
    (with-active-layers (ignore-undefined-references)
      (funcall-with-layer-context (aprog1
                                      (if layer
                                          (adjoin-layer layer (current-layer-context))
                                          (current-layer-context))
                                    ;; KLUDGE: unfortunately contextl does not support slot values in layers
                                    ;; TODO: this is not thread safe, maybe this should be part of the environment?
                                    (bind ((prototype (contextl::layer-context-prototype it)))
                                      (setf (eval-functions-of prototype) eval-functions
                                            (inline-functions-of prototype) inline-functions
                                            (side-effect-free-functions-of prototype) side-effect-free-functions
                                            (non-local-exit-free-functions-of prototype) non-local-exit-free-functions
                                            (lookup-variable-values-of prototype) lookup-variable-values)))
                                  (lambda ()
                                    (unwalk-form (partial-eval-form (walk-form form))))))))
