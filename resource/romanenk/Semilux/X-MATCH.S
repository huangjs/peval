;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;                                                                 ;;
;;  File:     x-match.s                                            ;;
;;  Project:  the specializer Unmix                                ;;
;;  Author:   S.A.Romanenko, the Institute for Applied             ;;
;;            Mathematics, the USSR Acedemy of Sciences,           ;;
;;            Moscow.                                              ;;
;;  Credits:  The original version was written by                  ;;
;;            Hans Dybkjaer, October 1988, modified April 1989.    ;;
;;  Created:  July 1990                                            ;;
;;  Revised:  August 1992                                          ;;
;;                                                                 ;;
;;  Contents: Some macro extensions to Scheme.                     ;;
;;                                                                 ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; Auxiliary functions, which are used in the following
;; macro definitions.

(define (%*gen-let-vars*% args)
  (map
    (lambda (arg)
      (if (%*varname?*% arg) arg (gensym)))
    args))

(define (%*gen-let*% bindings exp*)

  (define (del-trivial-bindings bindings)
    (if (null? bindings)
        '()
        (let ((var  (caar  bindings))
              (val  (cadar bindings))
              (rest (cdr   bindings)))
          (if (eq? var val)
              (del-trivial-bindings rest)
              (cons (car bindings)
                    (del-trivial-bindings rest))))))

  (let ((bindings (del-trivial-bindings bindings)))
    `(let ,bindings . ,exp*)
    ))

(define (%*varname?*% x)
  (and (symbol? x)
       (not (boolean? x))))

(define (%*literal?*% x)
  (or (boolean? x)
      (number? x)
      (char? x)
      (string? x)
      (vector? x)))

;;;;;; End of the auxiliary functions ;;;;;;

;;
;; GENERALIZED CASE-EXPRESSION ------------------------------------------------
;;
;;    (MATCH  (arg ...)
;;        (pat ...  & guard => exp ...) ...)
;;
;;    The expressions "arg ..." are evaluated to produce S-expressions
;; "S-exp ...". "S-exp ..." are then matched against the corresponding
;; patterns "pat ...". If the matching succeeds for some clause
;;
;;    (pat ... & guard => exp ...)
;;
;; the variables in "pat ..." get bound to the corresponding subexpressions
;; in "S-exp ...", and then the expression "guard" is evaluated
;; in the extended environment. If the result of "guard" is not #f,
;; the expressions "exp ..." are evaluated in the extended environment,
;; otherwise the next clause is tried.
;;    If the guard is #t, "& guard"  may be omitted.
;;
;;  The patterns have the following syntax:
;;
;;    <pat> ::= '<S-exp>               matches <S-exp>.
;;            | <literal>              matches <literal>.
;;            | <var>                  matches anything, <var> is bound.
;;            | _                      matches anything.
;;            | (<var> as <pat>)       matches <pat>, <var> is bound.
;;            | (<pat> . <pat>)        matches a pair with <pat>'s as elements.
;;
;;    <var> ::= <symbol>
;;    <literal> ::=
;;            | ()
;;            | <boolean>
;;            | <number>
;;            | <character>
;;            | <string>
;;            | <vector>
;;

;; MATCH     (macro) ----------------------------------------------------------

(extend-syntax
  (match)

  ((match (arg ...) clause ...)
   (with (( (var ...) (%*gen-let-vars*% '(arg ...)) ))
         (*let$* ((var arg) ...)
           (match$* (var ...) (clause ...)))))

  )

;; MATCH$*  (auxiliary macro) -------------------------------------------------

(extend-syntax
  (match$*)

  ((match$* args ())
   (error "MATCH: no match for" (list . args)))

  ((match$* args (clause . more))
   (match$ clause args () () (match$* args more)))

)

;; MATCH$    (auxiliary macro) ------------------------------------------------

;;    The expression
;;
;;    (MATCH$  (pat... => exp...) (arg...) env cnd alt)
;;
;; means, that if "pat ..." match values of "arg ...", then
;; "exp ..." are to be evaluated in the extended environment. Otherwise
;; "alt" is to be evaluated.
;;    "Env" accumulates bindings for variables in patterns, whereas
;; "cnd" accumulates conditions, imposed by patterns.
;;

(extend-syntax
  (match$ & => as _ quote quasiquote)

  ((match$ (=> . exps) () ((id . val) ...) (cnd ...) alt)
   (if (and cnd ...)
       (*let$* ((id val) ...) . exps)
       alt))

  ((match$ (& guard => . exps) () ((id . val) ...)  (cnd ...) alt)
   (if (and cnd ... (*let$* ((id val) ...) guard))
       (*let$* ((id val) ...) . exps)
       alt))

  ((match$ (=> . exps) args env cnds alt)
   (with ((_ (error "MATCH: too many arguments" 'args)))
         ()))

  ((match$ clause () env cnds alt)
   (with ((_ (error "MATCH: too few arguments" 'clause)))
         ()))

  ((match$ ((x as pat) . pats) (arg . args) env cnds alt)
   (%*varname?*% 'x)
   (match$ (x pat . pats) (arg arg . args) env cnds alt))

  ((match$ ((x as pat) . pats) (arg . args) env cnds alt)
   (with ((_ (error "MATCH: invalid pattern" '(x as pat))))
         ()))

  ((match$ ((quote e) . pats) (arg . args) env  (cnd ...) alt)
   (match$ pats args env (cnd ... (equal? arg (quote e))) alt))

  ((match$ (() . pats) (arg . args) env (cnd ...) alt)
   (match$ pats args env (cnd ... (null? arg)) alt))

  ((match$ ((xp . yp) . pats) (arg . args) env (cnd ...) alt)
   (with ((car/arg (*extend-syntax-add-car* 'arg))
          (cdr/arg (*extend-syntax-add-cdr* 'arg)))
         (match$ (xp yp . pats) (car/arg cdr/arg . args)
                 env (cnd ... (pair? arg)) alt)))

  ((match$ (_ . pats) (arg . args) env cnds alt)
   (match$ pats args env cnds alt))

  ((match$ (quote . pats) (arg . args) env cnds alt)
   (with ((_ (error "MATCH: 'quote' appears as variable in pattern")))
         ()))

  ((match$ (quasiquote . pats) (arg . args) env cnds alt)
   (with ((_ (error "MATCH: 'quasiquote' appears as variable in pattern")))
         ()))

  ((match$ (pat . pats) (arg . args) env cnds alt)
   (and (%*varname?*% 'pat) (assoc 'pat 'env) )
   (with ((_ (error "MATCH: duplicate variable in pattern" 'pat)))
          ()))

  ((match$ (pat . pats) (arg . args) env cnds alt)
   (%*varname?*% 'pat)
   (match$ pats args ((pat . arg) . env) cnds alt))

  ((match$ (pat . pats) (arg . args) env (cnd ...) alt)
   (%*literal?*% 'pat)
   (match$ pats args env (cnd ... (equal? arg pat)) alt))

  )

;;
;; GENERALIZED LET-EXPRESSION -------------------------------------------------
;;
;;    (WITH  ((pat arg) ...)
;;        exp ...)
;;
;;    The expressions "arg ..." are evaluated to produce S-expressions
;; "S-exp ...". "S-exp ..." are supposed to match the patterns "pat ...",
;; in which case the variables in "pat ..." get bound to the corresponding
;; subexpressions in "S-exp ...", and then the expressions "exp ..." are
;; evaluated in the extended environment.
;;    If some of "S-exp ..." do not match against patterns "pat ...",
;; the result of the form WITH is unspecified, because there is no actual
;; analysis of the structure of "S-exp ...".
;;    The syntax of patterns is exactly the same as in the case of the
;; form MATCH.
;;
;;    The form
;;
;;    (WITH* ((pat1 arg1) . (pat arg) ...) exp ...)
;;
;; is equivalent to
;;
;;    (WITH ((pat1 arg1)) (WITH* ((pat arg) ...) exp ...))
;;

;; WITH  (macro) --------------------------------------------------------------

(extend-syntax
  (with)

  ((with bindings . body)
   (with% bindings . body))

  )

;; WITH*  (macro) -------------------------------------------------------------

(extend-syntax
  (with*)

  ((with* () . body) (let () . body))

  ((with* ((pat arg)) . body)
   (with% ((pat arg)) . body))

  ((with* ((pat arg) . rest) . body)
   (with% ((pat arg)) (with* rest . body)))

  )

;; WITH%  (auxiliary macro) -------------------------------------------------

(extend-syntax
  (with%)

  ((with% ((pat arg) ...) exp ...)
   (with (( (var ...) (%*gen-let-vars*% '(arg ...)) ))
         (*let$* ((var arg) ...)
                 (with$ (pat ...) (var ...) () (exp ...)))))
  )

;; WITH$  (auxiliary macro) -------------------------------------------------

;;    The expression
;;
;;    (WITH$  (pat...) (arg...) env (exp ...))
;;
;; means, that if "pat ..." match values of "arg ...", then
;; "exp ..." are to be evaluated in the extended environment.
;; "alt" is to be evaluated.
;;    "Env" accumulates bindings for variables in patterns.
;;

(extend-syntax
  (with$ as _ quote quasiquote)

  ((with$ () () ((id . val) ...) (exp ...))
   (*let$* ((id val) ...) exp ...))

  ((with$ ((x as pat) . pats) (arg . args) env body)
   (%*varname?*% 'x)
   (with$ (x pat . pats) (arg arg . args) env body))

  ((with$ ((x as pat) . pats) (arg . args) env body)
   (with ((_ (error "WITH: invalid pattern" '(x as pat))))
         ()))

  ((with$ ((quote e) . pats) (arg . args) env body)
   (with$ pats args env body))

  ((with$ (() . pats) (arg . args) env body)
   (with$ pats args env body))

  ((with$ ((xp . yp) . pats) (arg . args) env body)
   (with ((car/arg (*extend-syntax-add-car* 'arg))
          (cdr/arg (*extend-syntax-add-cdr* 'arg)))
         (with$ (xp yp . pats) (car/arg cdr/arg . args) env body)))

  ((with$ (_ . pats) (arg . args) env body)
   (with$ pats args env body))

  ((with$ (quote . pats) (arg . args) env body)
   (with ((_ (error "WITH: 'quote' appears as variable in pattern")))
         ()))

  ((with$ (quasiquote . pats) (arg . args) env body)
   (with ((_ (error "WITH: 'quasiquote' appears as variable in pattern")))
         ()))

  ((with$ (pat . pats) (arg . args) env body)
   (and (%*varname?*% 'pat) (assoc 'pat 'env) )
   (with  ((_ (error "WITH: duplicate variable in pattern" 'pat)))
          ()))

  ((with$ (pat . pats) (arg . args) env body)
   (%*varname?*% 'pat)
   (with$ pats args ((pat . arg) . env) body))

  ((with$ (pat . pats) (arg . args) env body)
   (%*literal?*% 'pat)
   (with$ pats args env body))

)

;;
;; RESTRICTED GENERALIZED CASE-EXPRESSION -------------------------------------
;;
;;    (SELECT  (arg ...)
;;        (rpat ...  & guard => exp ...) ...)
;;
;;    The expressions "arg ..." are evaluated to produce S-expressions
;; "S-exp ...". "S-exp ..." are then matched against the corresponding
;; restricted patterns "rpat ...". If the matching succeeds for some clause
;;
;;    (rpat ... & guard => exp ...)
;;
;; the variables in "pat ..." get bound to the corresponding subexpressions
;; in "S-exp ...", and then the expression "guard" is evaluated
;; in the extended environment. If the result of "guard" is not #f,
;; the expressions "exp ..." are evaluated in the extended environment,
;; otherwise the next clause is tried.
;;    If the guard is #t, "& guard"  may be omitted.
;;
;;    Restricted patterns is a subclass of patterns.
;;
;;    <rpat>::= '<S-exp>
;;            | <literal>
;;            | <var>
;;            | _
;;            | ('<S-exp> . <pat>)
;;            | (<literal> . <pat>)
;;            | (_ . <pat>)
;;            | (<var> . <pat>)
;;
;;    Restricted patterns have the following meaning.
;;    Restricted patterns '<S-exp>, <literal>, <var>, and _ have
;; the same meaning as the ordinary patterns.
;;    The result of matching an S-expression against other
;; restricted patterns may be unspecified.
;;    If an S-expression <S-exp'> is not a pair, the result of matching
;; <S-exp'> against the patterns ('<S-exp> . <pat>), (<literal> . <pat>),
;; (_ . <pat>), and (<var> . <pat>) is unspecified.
;;    If an S-expression is a pair (<S-exp'> . <S-exp''>), where
;; the pattern <pat> does not match <S-exp''>, the result of matching
;; (<S-exp'> . <S-exp''>) against the patterns ('<S-exp> . <pat>),
;; (<literal> . <pat>), (_ . <pat>), and (<var> . <pat>) is unspecified.
;;    Now suppose that an S-expression is a pair (<S-exp'> . <S-exp''>),
;; where the pattern <pat> matches <S-exp''>. Then we have the following
;; cases.
;;    The patterns (_ . <pat>), and (<var> . <pat>)  always match
;; (<S-exp'> . <S-exp''>).
;;    The pattern (<S-exp> . <pat>) matches (<S-exp'> . <S-exp''>)
;; if <S-exp> is equal to <S-exp'>, otherwise the matching fails.
;;    The pattern (<literal> . <pat>) matches (<S-exp'> . <S-exp''>)
;; if <literal> is equal to <S-exp'>, otherwise the matching fails.
;;
;;    The above definition enables the restricted patterns to be
;; compiled into efficient code.
;;


;; SELECT    (macro) ----------------------------------------------------------

(extend-syntax
  (select)

  ((select (arg ...) clause ...)
   (with (( (var ...) (%*gen-let-vars*% '(arg ...)) ))
         (*let$* ((var arg) ...)
           (select$* (var ...) (clause ...)))))

  )

;; SELECT$*  (macro) ----------------------------------------------------------

(extend-syntax
  (select$*)

  ((select$* args ())
   (error "SELECT: no match for" (list . args)))

  ((select$* args (clause . more))
   (select$ clause args () () (select$* args more)))

  )

;;
;; SELECT$    (auxiliary macro) -----------------------------------------------
;;
;;    The expression
;;
;;    (SELECT$  (pat... => exp...) (arg...) env cnd alt)
;;
;; means, that if "pat ..." match values of "arg ...", then
;; "exp ..." are to be evaluated in the extended environment. Otherwise
;; "alt" is to be evaluated.
;;    "Env" accumulates bindings for variables in patterns, whereas
;; "cnd" accumulates conditions, imposed by patterns.
;;    Some errors are ignored, since, anyway, they are to be detected
;; by WITH.
;;

(extend-syntax
  (select$ & => as _ quote quasiquote)

  ((select$ (=> exp ...) () env (cnd ...) alt)
   (if (and cnd ...)
       (with% env exp ...)
       alt))

  ((select$ (& guard => exp ...) () env (cnd ...) alt)
   (if (and cnd ... (with% env guard))
       (with% env exp ...)
       alt))

  ((select$ (=> exp ...) args env cnds alt)
   (with ((_ (error "SELECT: too many arguments" 'args)))
         ()))

  ((select$ clause () env cnds alt)
   (with ((_ (error "SELECT: too few arguments" 'clause)))
         ()))

  ((select$ (() . pats) (arg . args) env (cnd ...) alt)
   (select$ pats args env (cnd ... (null? arg)) alt))

  ((select$ (pat . pats) (arg . args) env (cnd ...) alt)
   (%*literal?*% 'pat)
   (select$ pats args env (cnd ... (equal? arg pat)) alt))

  ((select$ (pat . pats) (arg . args) env cnds alt)
   (%*varname?*% 'pat)
   (select$ pats args ((pat arg) . env) cnds alt))

  ((select$ ((x as pat) . pats) (arg . args) env cnds alt)
   (with ((_ (error "MATCH: invalid pattern" '(x as pat))))
         ()))

  ((select$ ((quote e) . pats) (arg . args) env (cnd ...) alt)
   (select$ pats args env (cnd ... (equal? arg (quote e))) alt))

  ((select$ (((quote e) . pat) . pats) (arg . args) env (cnd ...) alt)
   (select$ pats args ((((quote e) . pat) arg) . env)
            (cnd ... (equal? (car arg) (quote e))) alt))

  ((select$ ((() . pat) . pats) (arg . args) env (cnd ...) alt)
   (select$ pats args (((() . pat) arg) . env)
            (cnd ... (null? (car arg))) alt))

  ((select$ ((vname . pat) . pats) (arg . args) env cnds alt)
   (%*varname?*% 'vname)
   (select$ pats args (((vname . pat) arg) . env) cnds alt))

  ((select$ ((literal . pat) . pats) (arg . args) env (cnd ...) alt)
   (%*literal?*% 'literal)
   (select$ pats args (((literal . pat) arg) . env)
            (cnd ... (equal? (car arg) literal)) alt))

  )

;; *let$* -- (auxiliary macro)

(extend-syntax
  (*let$*)

  ((*let$* ((var val) ...) exp ...)
   (with (( result (%*gen-let*% '((var val) ...) '(exp ...)) ))
         result))

  )
