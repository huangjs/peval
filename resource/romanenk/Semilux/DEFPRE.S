;; File: defpre.s

(define (list-set! lst n value)
  (set-car! (list-tail lst n) value))

;; Programs:

;;(define (mk-pgm ldf* adt* od* def*)
;;  `(,ldf* ,adt* ,od* ,def* ,#f))
;;(define (pgm/ldf* pgm) (list-ref pgm 0))
;;(define (pgm/adt* pgm) (list-ref pgm 1))
;;(define (pgm/od* pgm) (list-ref pgm 2))
;;(define (pgm/def* pgm) (list-ref pgm 3))
;;(define (pgm/lam* pgm) (list-ref pgm 4))

;; Procedure definitions:

;;(define (mk-def name formals body)
;;  ;; 0     1    2        3
;;  ;; acsp  btp  unfold?  ret-bt
;;  `(,name ,(make-vector 4) ,formals ,body))

(define (def//acsp x) (vector-ref x 0))
(define (def//acsp! x v) (vector-set! x 0 v))
(define (def//btp x) (vector-ref x 1))
(define (def//btp! x v) (vector-set! x 1 v))
(define (def//unfold? x) (vector-ref x 2))
(define (def//unfold?! x v) (vector-set! x 2 v))
(define (def//ret-bt x) (vector-ref x 3))
(define (def//ret-bt! x v) (vector-set! x 3 v))

;;(define (def/name def) (list-ref def 0))
;;(define (def/formals def) (list-ref def 2))
;;(define (def/body def) (list-ref def 3))

;;(define (def/acsp def) (def//acsp (exp/att def)))
;;(define (def/btp def) (def//btp (exp/att def)))
;;(define (def/unfold? def) (def//unfold? (exp/att def)))
;;(define (def/unfold?! def v) (def//unfold?! (exp/att def) v))
;;(define (def/ret-bt def) (def//ret-bt (exp/att def)))
;;(define (def/ret-bt! def v) (def//ret-bt! (exp/att def) v))

;; Expressions:

(define (exp/att e) (list-ref e 1))

(define (exp//acs x) (vector-ref x 0))
(define (exp//acs! x acs) (vector-set! x 0 acs))
(define (exp//bt x) (vector-ref x 1))
(define (exp//bt! x bt) (vector-set! x 1 bt))

(define (exp/acs e) (exp//acs (exp/att e)))
(define (exp/acs! e acs) (exp//acs! (exp/att e) acs))
(define (exp/bt e) (exp//bt (exp/att e)))
(define (exp/bt! e bt) (exp//bt! (exp/att e) bt))

;; Constant expressions:

;;(define (mk-cst value)
;;  `(quote ,(make-vector 2) ,value))
;;(define (cst? e) (eq? (car e) 'quote))
;;(define (cst/value e) (list-ref e 2))

;; Identifiers:

;;(define (mk-ide name)
;;  `(ide ,(make-vector 2) ,name))

;;(define (ide? e) (eq? (car e) 'ide))
;;(define (ide/name e) (list-ref e 2))

;; Conditional expressions:

;;(define (mk-if e1 e2 e3)
;;  `(if ,(make-vector 2) ,e1 ,e2 ,e3))
;;(define (if? e) (eq? (car e) 'if))
;;(define (if/test e) (list-ref e 2))
;;(define (if/then e) (list-ref e 3))
;;(define (if/else e) (list-ref e 4))

;; Let expressions:

;;(define (mk-let formal actual body)
;;  ;; 0   1  2
;;  ;; acs bt unfold?
;;  `(let ,(make-vector 3)  ,formal ,actual ,body))

(define (let//unfold? x) (vector-ref x 2))
(define (let//unfold?! x v) (vector-set! x 2 v))

;;(define (let? e) (eq? (car e) 'let))
;;(define (let/formal e) (list-ref e 2))
;;(define (let/actual e) (list-ref e 3))
;;(define (let/body e) (list-ref e 4))

;;(define (let/unfold? e) (let//unfold? (exp/att e)))
;;(define (let/unfold?! e v) (let//unfold?! (exp/att e) v))

;; Begin expressions:

;;(define (mk-begin actual body)
;;  `(begin ,(make-vector 2) ,actual ,body))
;;(define (begin? e) (eq? (car e) 'begin))
;;(define (begin/actual e) (list-ref e 2))
;;(define (begin/body e) (list-ref e 3))

;; Primitive operator calls:

;;(define (mk-o-call name args)
;;  `(o ,(make-vector 2) ,name . ,args))

;;(define (o-call? e) (eq? (car e) 'o))
;;(define (o-call/name e) (list-ref e 2))
;;(define (o-call/args e) (list-tail e 3))

;; Defined procedure calls:

;;(define (mk-p-call name args)
;;  `(p ,(make-vector 2) ,name . ,args))

;;(define (p-call? e) (eq? (car e) 'p))
;;(define (p-call/name e) (list-ref e 2))
;;(define (p-call/args e) (list-tail e 3))

;; Lambda abstractions:

;;(define (mk-lam formals body)
;;  ;; 0    1   2     3    4        5       6      7
;;  ;; acs  bt  acsp  btp  unfold?  ret-bt  index  free-vars
;;  `(lambda ,(make-vector 8) ,formals ,body))

(define (lam//acsp x) (vector-ref x 2))
(define (lam//acsp! x v) (vector-set! x 2 v))
(define (lam//btp x) (vector-ref x 3))
(define (lam//btp! x v) (vector-set! x 3 v))
(define (lam//unfold? x) (vector-ref x 4))
(define (lam//unfold?! x v) (vector-set! x 4 v))
(define (lam//ret-bt x) (vector-ref x 5))
(define (lam//ret-bt! x v) (vector-set! x 5 v))
(define (lam//index x) (vector-ref x 6))
(define (lam//index! x v) (vector-set! x 6 v))
(define (lam//free-vars x) (vector-ref x 7))
(define (lam//free-vars! x v) (vector-set! x 7 v))

;;(define (lam? e) (eq? (car e) 'lambda))
;;(define (lam/formals e) (list-ref e 2))
;;(define (lam/body e) (list-ref e 3))

;;(define (lam/acsp e) (lam//acsp (exp/att e)))
;;(define (lam/acsp! e v) (lam//acsp! (exp/att e) v))
;;(define (lam/btp e) (lam//btp (exp/att e)))
;;(define (lam/btp! e v) (lam//btp! (exp/att e) v))
;;(define (lam/unfold? e) (lam//unfold? (exp/att e)))
;;(define (lam/unfold?! e v) (lam//unfold?! (exp/att e) v))
;;(define (lam/ret-bt e) (lam//ret-bt (exp/att e)))
;;(define (lam/ret-bt! e v) (lam//ret-bt! (exp/att e) v))
;;(define (lam/index e) (lam//index (exp/att e)))
;;(define (lam/free-vars e) (lam//free-vars (exp/att e)))
;;(define (lam/free-vars! e v) (lam//free-vars! (exp/att e) v))

;; Applications:

;;(define (mk-app proc args)
;;  `(a ,(make-vector 2) ,proc . ,args))
;;(define (app? e) (eq? (car e) 'a))
;;(define (app/proc e) (list-ref e 2))
;;(define (app/args e) (list-tail e 3))

;; Errors:

;;(define (mk-error args)
;;  `(error ,(make-vector 2) . ,args))
;;(define (error? e) (eq? (car e) 'error))
;;(define (error/args e) (list-tail e 2))

;;
;; Primitive operator definitions:
;; -------------------------------

(define (mk-od name arity bto rto)
  `(,name ,arity ,bto ,rto))

(define (od/name od) (car od))
(define (od/arity od) (list-ref od 1))
(define (od/bto od) (list-ref od 2))
(define (od/rto od) (list-ref od 3))

;;
;; Some predicates:
;; ----------------

(define (exp/bottom? e)
  (eq? (exp/bt e) 'B))

(define (exp/static? e)
  (eq? (exp/bt e) 'S))

(define (exp/closure? e)
  (eq? (exp/bt e) 'C))

(define (bt-resid? btv)
  (or (eq? btv 'D) (eq? btv 'X)))

(define (exp/resid? e)
  (bt-resid? (exp/bt e)))

(define (bt-lub x y)
  (select
    (x y)

    ('B _  => y)
    (_  'B => x)

    ('X _  => 'X)
    (_  'X => 'X)

    ('D  _ => 'D)
    (_  'D => 'D)

    (_ _ =>
      (if (eq? x y) x 'D))

      ))

(define (bt-select-resid btv)
  (if (bt-resid? btv) btv 'B))

(define (bt-remove-extern btv)
  (if (eq? btv 'X) 'D btv))

(define (bt-with-resid bt btp)
  (foldl-map bt-lub bt bt-select-resid btp))
