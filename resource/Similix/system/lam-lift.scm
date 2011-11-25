; Similix lambda lifter
; Copyright (C) 1993 Anders Bondorf
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------
(define (_sim-lambda-lift! udp)
  (let ((lifted-procedures '()))

    (define (union a b)
      (cond
	((null? a) b)
	((null? b) a)
	(else (let ((a1 (car a))
		    (b1 (car b)))
		(cond ((equal? a1 b1) (union (cdr a) b))
		      ((and (number? a1) (number? b1) (< a1 b1))
		       (cons a1 (union (cdr a) b)))
		      (else (cons b1 (union a (cdr b)))))))))
    (define (insert a b)
      (if (null? b)
	  (list a)
	  (let ((b1 (car b)))
	    (cond ((equal? a b1) b)
		  ((and (number? a) (number? b1) (< a b1))
		   (cons a b))
		  (else (cons b1 (insert a (cdr b))))))))
    (define (unionmap f l)
      (if (null? l)
	  '()
	  (union (f (car l)) (unionmap f (cdr l)))))
    (define (insertmap f l)
      (if (null? l)
	  '()
	  (insert (f (car l)) (insertmap f (cdr l)))))


    ; net effect: updates free-vars* field in the analysed letrec-expression
    (define (add-free-vars*! e)
      (let ((defs (_sim-fetch-letrec-defs e))
	    (indices (_sim-fetch-letrec-indices e))
	    (free-vars* (_sim-fetch-letrec-free-vars* e)))
	(define (set-letrec-free-vars index vars)
	  (let loop ((i* indices) (v* free-vars*))
	    (if (equal? index (car i*))
		(set-car! v* vars)
		(loop (cdr i*) (cdr v*)))))
	(define (lookup-proc index)
	  (let loop ((d* defs) (i* indices))
	    (if (equal? index (car i*))
		(car d*)
		(loop (cdr d*) (cdr i*)))))
	(define (find-calls-to-mutuals e index)
	  (let loop ((e e))
	    (cond
	      ((_sim-isLift? e)
	       (loop (_sim-fetch-lift-arg e)))
	      ((_sim-isCst? e)
	       '())
	      ((_sim-isVar? e)
	       '())
	      ((_sim-isCond? e)
	       (union (loop (_sim-fetch-cond-test e))
		      (union (loop (_sim-fetch-cond-then e))
			     (loop (_sim-fetch-cond-else e)))))
	      ((_sim-isLet? e)
	       (union (loop (_sim-fetch-let-actual e))
		      (loop (_sim-fetch-let-body e))))
	      ((_sim-isBegin? e)
	       (union (loop (_sim-fetch-begin-fst e))
		      (loop (_sim-fetch-begin-snd e))))
	      ((_sim-isPrimop? e)
	       (unionmap loop (_sim-fetch-primop-args e)))
	      ((_sim-isCstr? e)
	       (unionmap loop (_sim-fetch-cstr-args e)))
	      ((_sim-isSel? e)
	       (loop (_sim-fetch-sel-arg e)))
	      ((_sim-isPred? e)
	       (loop (_sim-fetch-pred-arg e)))
	      ((_sim-isPcall? e)
	       (let* ((res (unionmap loop (_sim-fetch-pcall-args e)))
		      (index2 (_sim-fetch-pcall-index e)))
		 (if (and (member index2 indices)
			  (not (equal? index index2)))
		     (insert index2 res)
		     res)))
	      ((_sim-isAbs? e)
	       (loop (_sim-fetch-abs-body e)))
	      ((_sim-isApp? e)
	       (union (loop (_sim-fetch-app-exp e))
		      (unionmap loop (_sim-fetch-app-args e))))
	      ((_sim-isLetrec? e)
	       (union
		(unionmap (lambda (d) (loop (_sim-fetch-def-exp d)))
			  (_sim-fetch-letrec-defs e))
		(loop (_sim-fetch-letrec-body e))))
	      (else
	       (_sim-error
		'_sim-lambda-lift! "unknown syntactic form: ~s" e)))))
	(let* ((com&conn
		(find-strong-components
		 ; build a call graph --- the additional pseudo root
		 ; node is to ensure that all nodes are reached
		 (cons (vector 'pseudo-node indices)
		       (map (lambda (d index)
			      (vector index (find-calls-to-mutuals
					     (_sim-fetch-def-exp d) index)))
			    defs indices))))
	       (components (car com&conn))
	       (connections (cadr com&conn))
	       (vars* (cons
		       '() ; pseudo component
		       (map (lambda (component)
			      (unionmap (lambda (index)
					  (let ((def (lookup-proc index)))
					    (map _sim-fetch-var-varname
						 (_sim-find-free-vars
						  (_sim-fetch-def-exp def)
						  (_sim-fetch-def-pars def)))))
					component))
			    (cdr components))))) ; cdr because of pseudo comp.
	  ; modify vars* by taking intercomponent-arcs into account:
	  (let loop ((i (- (length components) 1)))
	    (if (> i 0) ; sharp > to ignore pseudo node component
		(let ((vars (list-ref vars* i)))
		  (for-each
		   (lambda (group)
		     (if (>= group i)
			 (_sim-error '_sim-lambda-lift!
				     "Internal error --- topological order not satisfied in ~s"
				     connections))
		     (if (not (= group 0)) ; ignore calls from pseudo node
			 (_sim-list-set!
			  vars* group (union (list-ref vars* group) vars))))
		   (vector-ref connections i))
		  (loop (- i 1)))))
	  
	  ; add the free vars lists to field in the letrec-expressions
	  (for-each
	   (lambda (component vars)
	     (for-each (lambda (index) (set-letrec-free-vars index vars))
		       component))
	   (cdr components) (cdr vars*))))) ; 2xcdr because of pseudo comp.


    (define (add-vars-to-proc-calls e indices varexps*)
      (let loop ((e e))
	(cond
	  ((_sim-isLift? e)
	   (loop (_sim-fetch-lift-arg e)))
	  ((_sim-isCst? e)
	   "nothing here")
	  ((_sim-isVar? e)
	   "nothing here")
	  ((_sim-isCond? e)
	   (loop (_sim-fetch-cond-test e))
	   (loop (_sim-fetch-cond-then e))
	   (loop (_sim-fetch-cond-else e)))
	  ((_sim-isLet? e)
	   (loop (_sim-fetch-let-actual e))
	   (loop (_sim-fetch-let-body e)))
	  ((_sim-isBegin? e)
	   (loop (_sim-fetch-begin-fst e))
	   (loop (_sim-fetch-begin-snd e)))
	  ((_sim-isPrimop? e)
	   (for-each loop (_sim-fetch-primop-args e)))
	  ((_sim-isCstr? e)
	   (for-each loop (_sim-fetch-cstr-args e)))
	  ((_sim-isSel? e)
	   (loop (_sim-fetch-sel-arg e)))
	  ((_sim-isPred? e)
	   (loop (_sim-fetch-pred-arg e)))
	  ((_sim-isPcall? e)
	   (for-each loop (_sim-fetch-pcall-args e))
	   (let ((index (_sim-fetch-pcall-index e)))
	     (if (member index indices)
		 ; Copy vars because of side-effects in _sim-deBruijn!:
		 (let ((new-args (_sim-copy
				  (_sim-lookup index indices varexps*)))
		       (args (_sim-fetch-pcall-args e)))
		   (if (null? args)
		       (_sim-set-pcall-args! e new-args)
		       (append! args new-args))))))
	  ((_sim-isAbs? e)
	   (loop (_sim-fetch-abs-body e)))
	  ((_sim-isApp? e)
	   (loop (_sim-fetch-app-exp e))
	   (for-each loop (_sim-fetch-app-args e)))
	  ((_sim-isLetrec? e)
	   (for-each (lambda (d) (loop (_sim-fetch-def-exp d)))
		     (_sim-fetch-letrec-defs e))
	   (loop (_sim-fetch-letrec-body e)))
	  (else
	   (_sim-error '_sim-lambda-lift! "unknown syntactic form: ~s" e)))))
	  

    (define (add-to-lifted-procedures defs)
      (if (null? lifted-procedures)
	  (set! lifted-procedures defs)
	  (_sim-append! lifted-procedures defs)))
    
    ; generates a vector:
    (define (append-vector-to-list v w)
      (let* ((v-arity (vector-length v))
	     (w-arity (length w))
	     (w-arity-1 (- w-arity 1))
	     (new (make-vector (+ v-arity w-arity))))
	(let loop ((i 0))
	  (or (= i v-arity)
	      (begin (vector-set! new i (vector-ref v i))
		     (loop (+ 1 i)))))
	(let loop ((i 0))
	  (or (= i w-arity)
	      (begin (vector-set! new (+ i v-arity) (list-ref w i))
		     (loop (+ 1 i)))))
	new))
    
    
    ;-------------------------------------------------------------------------
    ; This procedure finds strongly connected components in a graph.
    ; The first node in the input is the root node.
    ; 
    ; Example:
    ; 
    ; (find-strong-components
    ;  (list (vector '27   '(4c 3 1)   )  ; root node
    ;	     (vector '1	   '(1)	       )
    ;	     (vector 'hugo '(5b)       )
    ;	     (vector '3	   '(2 9)      )
    ;	     (vector '4c   '(5b hugo 7))
    ;	     (vector '5b   '(8)	       )
    ;	     (vector '2	   '(hugo)     )
    ;	     (vector '7	   '(8 5b)     )
    ;	     (vector '8	   '(4c)       )
    ;	     (vector '9	   '(5b 2 3)   )))
    ; ---->
    ; ( ((27) (1) (3 9) (2) (4c 5b 8 hugo 7))  --- the str. conn. components
    ;  #(()   (0) (0)	(2) (0 2 3)	    )) --- calls between components
    ;	 ^    ^	  ^	^   ^
    ;	 0    1	  2	3   4
    ; 
    ; There are thus 5 components (0 through 4); e.g., component no. 2 contains
    ; the nodes 3 and 9, components no. 4 contains the nodes 4c, 5b, 8, hugo,
    ; and 7.
    ; The second part of the output shows e.g. that there is an arc to
    ; component no. 2 from component no. 0 and that there are arcs to
    ; component no. 4 from components no. 0, 2, and 3.
    ; The first output part is a list, the second part is a vector of
    ; equal length.
    ;
    (define (find-strong-components graph)
      ; Graph  ::= (Node*)
      ; Node   ::= #(NodeId Arc*)
      ; Arc    ::= NodeId
      ; NodeId ::= "any Scheme type"
      (let ((_nodeid 0)
	    (_arcs 1))
	
	; converting between internal and external node identification:
	(define (nodeid->nodenumber id)
	  (let loop ((node* graph) (number 0))
	    (cond
	      ((null? node*)
	       (_sim-error 'find-strong-components "Node-id not found: ~s" id))
	      ((equal? id (vector-ref (car node*) _nodeid)) number)
	      (else (loop (cdr node*) (+ 1 number))))))
	(define (nodenumber->nodeid number)
	  (vector-ref (list-ref graph number) _nodeid))
	
	
	; This procedure does the actual work.
	; The procedure finds strongly connected components in a graph.
	; It implements the algotithm from Alfred V. Aho, John E. Hopcroft,
	; Jeffrey D. Ullman: "The Design and Analysis of Computer Algorithms",
	; pp. 189--195, Addison-Wesley, 197?.
	(define (find-strong g)
	  ; Assumed: input graph is rooted; first node is the root
	  ; Graph	  ::= #(Node*)
	  ; Node	  ::= #(Nodenumber Arcs Dfnumber Mark Lowlink
	  ;		       InterComCalls Group)
	  ; Arcs	  ::= (Nodenumber*)
	  ; Dfnumber	  ::= Number
	  ; Lowlink	  ::= Number
	  ; InterComCalls ::= (Nodenumber*) ; the nodes FROM which arcs go
	  ;                                 ; to this node
	  ; Group	  ::= Number
	  ;
	  ; Stack	  ::= (Dfnumber*)
	  ; Instack?	  ::= #(Boolean*)
	  ;
	  ; GroupGraph	  ::= #(GroupCalls*)
	  ; GroupCalls*	  ::= (Group*)
	  ;
	  (let ((counter 1)
		(components '())
		
		(stack '())
		(instack? (make-vector (vector-length g) #f))
		
		(_nodenumber 0)
		(_arcs 1)
		(_dfnumber 2)
		(_mark 3)
		(_lowlink 4)
		(_intercomcalls 5)
		(_group 6))
	    (define (find-root g) (vector-ref g 0))
	    (define (push node)
	      (set! stack (cons node stack))
	      (vector-set! instack? (vector-ref node _nodenumber) #t))
	    (define (stack-top) (car stack))
	    (define (pop)
	      (let ((node (car stack)))
		(set! stack (cdr stack))
		(vector-set! instack? (vector-ref node _nodenumber) #f)
		node))
	    
	    (define (searchc node-v)
	      (vector-set! node-v _mark 'old)
	      (let* ((dfnumber counter)
		     (v (vector-ref node-v _nodenumber)))
		(vector-set! node-v _dfnumber dfnumber)
		(set! counter (+ 1 counter))
		(vector-set! node-v _lowlink dfnumber)
		(push node-v)
		
		(for-each
		 (lambda (arc)
		   (let* ((node-w (vector-ref g arc))
			  (w (vector-ref node-w _nodenumber)))
		     (if (equal? (vector-ref node-w _mark) 'new)
			 (begin
			   (searchc node-w)
			   (vector-set! node-v
					_lowlink
					(min (vector-ref node-v _lowlink)
					     (vector-ref node-w _lowlink))))
			 (if (and (< (vector-ref node-w _dfnumber) dfnumber)
				  (vector-ref instack? w))
			     (vector-set! node-v
					  _lowlink
					  (min (vector-ref node-w _dfnumber)
					       (vector-ref node-v _lowlink)))))
		     ; Added to original algotithm find inter-component calls:
		     (if (not (vector-ref instack? w))
			 ; there is an inter-component call from v to w:
			 (vector-set!
			  node-w _intercomcalls
			  (cons v (vector-ref node-w _intercomcalls))))))
		 (vector-ref node-v _arcs))
		
		(if (= (vector-ref node-v _lowlink) dfnumber)
		    (let loop ((component '()))
		      (let* ((node-x (pop))
			     (x (vector-ref node-x _nodenumber))
			     (component (cons x component)))
			(if (= x v)
			    (set! components (cons component components))
			    (loop component)))))))
	    
	    (searchc (find-root g))
	    
	    (let loop ((i 0) (c* components))
	      (if (null? c*)
		  (let ((group-graph (make-vector i '())))
		    (let loop ((i 0) (c* components))
		      (if (null? c*)
			  (cons components group-graph) ; Return place
			  (begin
			    (for-each
			     (lambda (v)
			       (let* ((node-v (vector-ref g v))
				      (group (vector-ref node-v _group)))
				 (vector-set!
				  group-graph
				  group
				  (union
				   (vector-ref group-graph group)
				   (insertmap
				    (lambda (w)
				      (vector-ref (vector-ref g w) _group))
				    (vector-ref node-v _intercomcalls))))))
			     (car c*))
			    (loop (+ 1 i) (cdr c*))))))
		  (begin
		    (for-each
		     (lambda (v)
		       (vector-set! (vector-ref g v) _group i)) (car c*))
		    (loop (+ 1 i) (cdr c*)))))))
	
	; body ---
	; first build the internal graph g with internal node identification:
	(let* ((arity (length graph))
	       (g (make-vector arity)))
	  (let loop ((node* graph) (number 0))
	    (if (not (null? node*))
		(begin
		  (vector-set!
		   g number
		   (vector number
			   (map nodeid->nodenumber
				(vector-ref (car node*) _arcs))
			   'void 'new 'void '() 'void))
		  (loop (cdr node*) (+ 1 number)))))
	  ; then call find-strong on g
	  (let* ((res (find-strong g))
		 (components (car res))
		 (group-graph (cdr res)))
	    ; finally, convert back to external node identification and return
	    ; result:
	    (list (map (lambda (com) (map nodenumber->nodeid com)) components)
		  group-graph)))))
    
    ;-------------------------------------------------------------------------
    (define (proc e)
      (if (_sim-isLetrec? e)
	  ; the order in which procedures are lifted out here has to match
	  ; the indexing scheme used in procedure _sim-compute-proc-indices!
	  (let ((defs (_sim-fetch-letrec-defs e))
		(body (_sim-fetch-letrec-body e))
		(indices (_sim-fetch-letrec-indices e)))

	    ; update letrec's free-vars* field:
	    (add-free-vars*! e)    
	    
	    ; add parameters to definitions and calls:
	    (let* ((vars* (_sim-fetch-letrec-free-vars* e))
		   (varexps* (map (lambda (vars)
				    (map _sim-make-abstract-syntax-var vars))
				  vars*)))
	      (for-each
	       (lambda (d vars)
		 (let ((new-formals (append (_sim-fetch-def-pars d) vars)))
		   (_sim-set-def-pars! d new-formals)
		   (_sim-set-def-btp!
		    d (map (lambda (dummy) _sim-bt-bottom-value) new-formals))
		   (_sim-set-def-exp!
		    d
		    (_sim-insert-let-expressions
		     (_sim-fetch-def-exp d) vars)))
		 (add-vars-to-proc-calls
		  (_sim-fetch-def-exp d) indices varexps*))
	       defs vars*)
	      (add-vars-to-proc-calls body indices varexps*))
	    
	    ; lift out local procedures:
	    (add-to-lifted-procedures defs)
	    
	    ; recurse over actual parameters to letrec:
	    (for-each
	     (lambda (d) (_sim-set-def-exp! d (proc (_sim-fetch-def-exp d))))
	     defs)

	    ; recurse over letrec-body, return processed body (effectively
	    ; "discarding" the local procedures that were lifted out
	    ; above):
	    (let ((new-body (proc body)))
	      (_sim-set-local-defs!
	       new-body (cons indices (_sim-fetch-local-defs new-body)))
	      new-body))

	  (begin
	    (cond
	      ((_sim-isLift? e)
	       (_sim-set-lift-arg! e (proc (_sim-fetch-lift-arg e))))
	      ((_sim-isCst? e)
	       "nothing here")
	      ((_sim-isVar? e)
	       "nothing here")
	      ((_sim-isCond? e)
	       (_sim-set-cond-test! e (proc (_sim-fetch-cond-test e)))
	       (_sim-set-cond-then! e (proc (_sim-fetch-cond-then e)))
	       (_sim-set-cond-else! e (proc (_sim-fetch-cond-else e))))
	      ((_sim-isLet? e)
	       (_sim-set-let-actual! e (proc (_sim-fetch-let-actual e)))
	       (_sim-set-let-body! e (proc (_sim-fetch-let-body e))))
	      ((_sim-isBegin? e)
	       (_sim-set-begin-fst! e (proc (_sim-fetch-begin-fst e)))
	       (_sim-set-begin-snd! e (proc (_sim-fetch-begin-snd e))))
	      ((_sim-isPrimop? e)
	       (proc* (_sim-fetch-primop-args e)))
	      ((_sim-isCstr? e)
	       (proc* (_sim-fetch-cstr-args e)))
	      ((_sim-isSel? e)
	       (_sim-set-sel-arg! e (proc (_sim-fetch-sel-arg e))))
	      ((_sim-isPred? e)
	       (_sim-set-pred-arg! e (proc (_sim-fetch-pred-arg e))))
	      ((_sim-isPcall? e)
	       (proc* (_sim-fetch-pcall-args e)))
	      ((_sim-isAbs? e)
	       (_sim-set-abs-body! e (proc (_sim-fetch-abs-body e))))
	      ((_sim-isApp? e)
	       (_sim-set-app-exp! e (proc (_sim-fetch-app-exp e)))
	       (proc* (_sim-fetch-app-args e)))
	      (else
	       (_sim-error '_sim-lambda-lift! "unknown syntactic form: ~s" e)))
	    e)))
    (define (proc* e*)
      (if (not (null? e*))
	  (begin
	    (set-car! e* (proc (car e*)))
	    (proc* (cdr e*)))))
    
    (_sim-vector-for-each
     (lambda (d) (_sim-set-def-exp! d (proc (_sim-fetch-def-exp d)))) udp)
    (append-vector-to-list udp lifted-procedures)))

;-----------------------------------------------------------------------------

