; Similix flow, binding time, is-used, and eod-analyses
; Copyright (C) 1993 Anders Bondorf and Jesper Joergensen
; Please see the file README for copyright notice, license and disclaimer.


;-----------------------------------------------------------------------------
; ExprInfos: FlowNode, BtNode, ~BtNode, EodNode
;
;
; NodeInfo    ::= #(NodeId EcrPtr Rank)
;
;
; FlowNode    ::= #(NodeInfo FlowInfo)
; FlowInfo    ::= #((CstrNode*) (FctNode*))
;
; CstrNode    ::= #(NodeInfo CstrInfo)
; CstrInfo    ::= #(Index (ArgInfo*))
; ArgInfo     ::= #(FlowNode BtNode)
;
; FctNode     ::= #(NodeInfo FctInfo)
; FctInfo     ::= #(Arity (ArgInfo*) ResultInfo)
; ArgInfo     ::= #(FlowNode BtNode)
; ResultInfo  ::= #(FlowNode BtNode EodNode)
;
;
; ~BtNode     ::= BtNode
; BtNode      ::= #(NodeInfo BtInfo)
; BtInfo      ::= #(BtVal B<=-dep <=B-dep B!>-dep Used)
; BtVal	      ::= bt-undef | #(S) | #(Cl Arity) | #(Ps FlowIndex)
; B<=-dep     ::= (BtNode*)
; <=B-dep     ::= (BtNode*)
; B!>-dep     ::= (BtNode*)
; Used	      ::= Boolean
;
;
; EodNode     ::= #(NodeInfo EodInfo) | ImperaNode
; ImperaNode  ::= TopNode
; EodInfo     ::= #(EodVal B<=-dep Bup-dep Bdown-dep)
; EodVal      ::= eod-undef | M
; B<=-dep     ::= (EodNode*)
; Bup-dep     ::= (EodNode*)
; Bdown-dep   ::= (EodNode*)
;
; ---------------------------------------------------------------------------
;
; FlowCon      ::= #(CstrNode FlowNode)	  (* cstr-in constraint *)
;		 | #(FctNode FlowNode)	  (* fct-in constraint *)
;
; BtCon	       ::= #(BtNode BtNode)	  (* <= constraint *)
;		 | #(BtNode BtNode)	  (* !> constraint *)
;		 | BtNode		  (* used constraint *)
;		 | BtNode		  (* =dynamic constraint *)
;		 | #(BtVal BtNode)	  (* static<= constraint *)
;		 | #(BtVal BtNode)	  (* psds<= constraint *)
;		 | #(BtVal BtNode)	  (* closure<= constraint *)
;
;

(define (_sim-bt-sp-eod-analyse! input-btp pgm)
  (let* ((udp (_sim-fetch-pgm-udp pgm))
	 (goal-def (_sim-lookup-goal-proc udp))
	 (goal-arity (length (_sim-fetch-def-pars goal-def)))
	 (input-arity (length input-btp))
	 

	 ; ----------------------------------------------------------------
	 ; During flow, bt- and eod-analyses, bt- and eod-fields in abstract
	 ; syntax are used for flow, bt- and eod-nodes.
	 ; When annotating, the fields are set to bt- and eod-values.

	 (def-fetch _sim-fetch-def-btp)
	 (init-def-fields!
	  (lambda (d) (_sim-set-def-btp! d (vector 'undef0 'undef1))))
	 (fetch-def-flow* (lambda (d) (vector-ref (def-fetch d) 0)))
	 (set-def-flow*! (lambda (d v) (vector-set! (def-fetch d) 0 v)))
	 (fetch-def-bt* (lambda (d) (vector-ref (def-fetch d) 1)))
	 (set-def-bt*! (lambda (d v) (vector-set! (def-fetch d) 1 v)))
	 
	 (abs-fetch _sim-fetch-abs-formals-btp)
	 (init-abs-fields!
	  (lambda (a) (_sim-set-abs-formals-btp! a (vector 'undef2 'undef3))))
	 (fetch-abs-formals-flow* (lambda (a) (vector-ref (abs-fetch a) 0)))
	 (set-abs-formals-flow*!
	  (lambda (a v) (vector-set! (abs-fetch a) 0 v)))
	 (fetch-abs-formals-bt* (lambda (a) (vector-ref (abs-fetch a) 1)))
	 (set-abs-formals-bt*!
	  (lambda (a v) (vector-set! (abs-fetch a) 1 v)))

	 (e-fetch _sim-fetch-bt-tag)
	 (init-e-fields!
	  (lambda (e)
	    (_sim-set-bt-tag! e (vector 'undef4 'undef5 'undef6))))
	 (fetch-flow (lambda (e) (vector-ref (e-fetch e) 0)))
	 (set-flow! (lambda (e v) (vector-set! (e-fetch e) 0 v)))
	 ;
	 (fetch-bt (lambda (e) (vector-ref (e-fetch e) 1)))
	 (set-bt! (lambda (e v) (vector-set! (e-fetch e) 1 v)))
	 (fetch-~bt (lambda (e) (vector-ref (e-fetch e) 2)))
	 (set-~bt! (lambda (e v) (vector-set! (e-fetch e) 2 v)))
	 ;
	 (fetch-eod _sim-fetch-eod-tag)
	 (set-eod! _sim-set-eod-tag!)
	 (eod-field-undefined?
	  (lambda (e) (equal? _sim-eod-bottom-value (_sim-fetch-eod-tag e))))
	 ; ----------------------------------------------------------------

	 
	 (seed 0)

	 (flow-constraints-cstr-in '())
	 (flow-constraints-fct-in '())

	 (bt-constraints-<= '())
	 (bt-constraints-used '())
	 (bt-constraints-!> '())
	 (bt-constraints-static<= '())
	 (bt-constraints-psds<= '())
	 (bt-constraints-closure<= '())
	 (bt-constraints-=dynamic '())
	 
	 (eod-constraint-<=M '())
	 (eod-constraint-=I '())
	 )
    
    (define (make-node info)
      (vector (make-node-info) info))
    (define (make-node-info)
      (vector (genint! 'next) '() 1))
    (define (make-arg-info flow bt) (vector flow bt))	   
    (define (make-result-info flow bt eod) (vector flow bt eod))      

    (define (get-name index)
      (_sim-fetch-udo-entry-name
       (_sim-fetch-udo-entry-from-index index)))
    (define (get-cstrs index)
      (_sim-fetch-udo-entry-cstr-cstrs
       (_sim-fetch-udo-entry-from-index index)))
    (define (get-type-index index)
      (_sim-fetch-udo-entry-cstr-type-index
       (_sim-fetch-udo-entry-from-index index)))
    (define (genint! msg)
      (case msg
	((reset) (set! seed 0))
	((next) (let ((res seed)) (set! seed (+ 1 seed)) res))
	(else seed)))
    (genint! 'reset) ; For debugging only

    (let* ((init-bt-info (lambda () (vector 'bt-undef '() '() '() #f)))
	   (init-eod-info (lambda () (vector 'eod-undef '() '() '())))
	   (the-dyn-bt-node (make-node (init-bt-info)))
	   (the-imp-eod-node (make-node (init-eod-info))))
      
      (define (gen-flow-node!)
	(make-node (vector '() '())))
      (define (gen-cstr-node! index arg*)
	(make-node (vector index arg*)))
      (define (gen-fct-node! arity arg* result)
	(make-node (vector arity arg* result)))
      (define (gen-bt-node!)
	(make-node (init-bt-info)))
      (define (gen-eod-node!)
	(make-node (init-eod-info)))
      
      (define (is-top? node)
	(or (eq? node the-dyn-bt-node)
	    (eq? node the-imp-eod-node)))
      (define (is-dyn? node) (eq? node the-dyn-bt-node))
      (define (is-imp? node) (eq? node the-imp-eod-node))

      (define (.nodeinfo node) (vector-ref node 0))

      (define (.flowinfo node) (vector-ref node 1))
      (define (.cstrinfo node) (vector-ref node 1))
      (define (.fctinfo node) (vector-ref node 1))
      (define (.btinfo node) (vector-ref node 1))
      (define (.eodinfo node) (vector-ref node 1))

      (define (.nodeid node) (vector-ref (.nodeinfo node) 0))
      (define (.ecrptr node) (vector-ref (.nodeinfo node) 1))
      (define (.ecrptr:= node ecr) (vector-set! (.nodeinfo node) 1 ecr))
      (define (.rank node) (vector-ref (.nodeinfo node) 2))
      (define (.rank:= node rank) (vector-set! (.nodeinfo node) 2 rank))

      (define (flownode.cstrnode* node) (vector-ref (.flowinfo node) 0))
      (define (flownode.cstrnode*:=+ node1 node2)
	(vector-set! 
	 (.flowinfo node1) 0 (cons node2 (flownode.cstrnode* node1))))
      (define (flownode.fctnode* node) (vector-ref (.flowinfo node) 1))
      (define (flownode.fctnode*:=+ node1 node2) 
	(vector-set! 
	 (.flowinfo node1) 1 (cons node2 (flownode.fctnode* node1))))

      (define (arginfo.flownode ai) (vector-ref ai 0))
      (define (arginfo.btnode ai) (vector-ref ai 1))

      (define (cstrnode.index node) (vector-ref (.cstrinfo node) 0))
      (define (cstrnode.arginfo* node) (vector-ref (.cstrinfo node) 1))

      (define (fctnode.arity node) (vector-ref (.fctinfo node) 0))
      (define (fctnode.arginfo* node) (vector-ref (.fctinfo node) 1))
      (define (fctnode.resultinfo node) (vector-ref (.fctinfo node) 2))

      (define (resultinfo.flownode ri) (vector-ref ri 0))
      (define (resultinfo.btnode ri) (vector-ref ri 1))
      (define (resultinfo.eodnode ri) (vector-ref ri 2))


      (define (btnode.btval bt) (vector-ref (.btinfo bt) 0))
      (define (btnode.btval:= bt v) (vector-set! (.btinfo bt) 0 v))

      (define make-btval (lambda x (apply vector x)))
      (define (btnode.btval.val bt) (vector-ref (btnode.btval bt) 0))
      (define (btnode.btval.arity bt) (vector-ref (btnode.btval bt) 1))
      (define (btnode.btval.type-index bt) (vector-ref (btnode.btval bt) 1))
      
      (define (btnode.b<=-dep bt) (vector-ref (.btinfo bt) 1))
      (define (btnode.b<=-dep:= bt dep*) (vector-set! (.btinfo bt) 1 dep*))
      (define (btnode.b<=-dep:=+ bt1 bt2)
	(btnode.b<=-dep:= bt1 (cons bt2 (btnode.b<=-dep bt1))))
      (define (btnode.<=b-dep bt) (vector-ref (.btinfo bt) 2))
      (define (btnode.<=b-dep:= bt dep*) (vector-set! (.btinfo bt) 2 dep*))
      (define (btnode.<=b-dep:=+ bt1 bt2)
	(btnode.<=b-dep:= bt1 (cons bt2 (btnode.<=b-dep bt1))))
      (define (btnode.b!>-dep bt) (vector-ref (.btinfo bt) 3))
      (define (btnode.b!>-dep:= bt dep*) (vector-set! (.btinfo bt) 3 dep*))
      (define (btnode.b!>-dep:=+ bt1 bt2)
	(btnode.b!>-dep:= bt1 (cons bt2 (btnode.b!>-dep bt1))))
      (define (btnode.used bt) (vector-ref (.btinfo bt) 4))
      (define (btnode.used:= bt bool) (vector-set! (.btinfo bt) 4 bool))
      
      (define (eodnode.eodval eod) (vector-ref (.eodinfo eod) 0))
      (define (eodnode.eodval:= eod eodval)
	(vector-set! (.eodinfo eod) 0 eodval))
      (define (eodnode.b<=-dep eod) (vector-ref (.eodinfo eod) 1))
      (define (eodnode.b<=-dep:= eod eod*)
	(vector-set! (.eodinfo eod) 1 eod*))
      (define (eodnode.b<=-dep:=+ eod1 eod2)
	(eodnode.b<=-dep:= eod1 (cons eod2 (eodnode.b<=-dep eod1))))
      (define (eodnode.bup-dep eod) (vector-ref (.eodinfo eod) 2))
      (define (eodnode.bup-dep:= eod eod*)
	(vector-set! (.eodinfo eod) 2 eod*))
      (define (eodnode.bup-dep:=+ eod1 eod2)
	(eodnode.bup-dep:= eod1 (cons eod2 (eodnode.bup-dep eod1))))
      (define (eodnode.bdown-dep eod) (vector-ref (.eodinfo eod) 3))
      (define (eodnode.bdown-dep:= eod eod*)
	(vector-set! (.eodinfo eod) 3 eod*))
      (define (eodnode.bdown-dep:=+ eod1 eod2)
	(eodnode.bdown-dep:= eod1 (cons eod2 (eodnode.bdown-dep eod1))))

      (define (flowcon.cstrnode c) (vector-ref c 0))
      (define (flowcon.fctnode c) (vector-ref c 0))
      (define (flowcon.flownode c) (vector-ref c 1))

      (define (make-cstr-in cstr flow) (vector cstr flow))
      (define (make-fct-in fct flow) (vector fct flow))

      (define (btcon.1st c) (vector-ref c 0))
      (define (btcon.2nd c) (vector-ref c 1))
      (define (btcon.bt c) (vector-ref c 1))
      (define (btcon.btval c) (vector-ref c 0))

      (define (make-static/psds/closure<= btval bt) (vector btval bt))
      (define (make-<= bt1 bt2) (vector bt1 bt2))
      (define (make-!> bt1 bt2) (vector bt1 bt2))


      ;**********************************************************************
      ; Union/find definitions
      ;**********************************************************************
      
      (define (find! node)
	(let ((node1 (.ecrptr node)))
	  (if (null? node1)
	      node
	      (let ((node2 (find! node1)))
		(.ecrptr:= node node2)
		node2))))

      (define (safe-union! node1 node2)
	(let ((node1 (find! node1))
	      (node2 (find! node2)))
	  (if (not (eq? node1 node2)) (union! node1 node2))))
      
      (define (union! node1 node2)
	(let ((rank1 (.rank node1))
	      (rank2 (.rank node2)))
	  (cond
	    ((eq? node1 node2) (_sim-error 'union! "Nodes equal!"))
	    ((is-top? node1)
	     (union! node2 node1))
	    ((is-top? node2)
	     (.ecrptr:= node1 node2)
	     (let ((rank (max rank1 rank2)))
	       (.rank:= node2 (if (= rank1 rank2) (+ rank 1) rank)))
	     node2)
	    ((= rank1 rank2)
	     (.rank:= node2 (+ rank2 1))
	     (.ecrptr:= node1 node2)
	     node2)
	    ((> rank1 rank2)
	     (.ecrptr:= node2 node1)
	     node1)
	    (else
	     (.ecrptr:= node1 node2)
	     node2))))



      ;**********************************************************************
      ; Flow analysis
      ;**********************************************************************
      
      (define (flow-analysis!)
	(define (make-flow-constraints!)
	  (define (add-flow-constraint-=! flow1 flow2)
	    (safe-union! flow1 flow2))
	  
	  (define (record! e flow)
	    (init-e-fields! e)
	    (set-flow! e flow))
	  
	  (define (loop! e rf)
	    (cond
	      ((_sim-isCst? e)
	       (record! e (gen-flow-node!)))
	      ((_sim-isVar? e)
	       (record! e (_sim-lookup-var e rf)))
	      ((_sim-isCond? e)
	       (let ((then-exp (_sim-fetch-cond-then e))
		     (else-exp (_sim-fetch-cond-else e)))
		 (loop! (_sim-fetch-cond-test e) rf)
		 (loop! then-exp rf)
		 (let ((flow-then (fetch-flow then-exp)))
		   (loop! else-exp rf)
		   (add-flow-constraint-=! flow-then (fetch-flow else-exp))
		   (record! e flow-then))))
	      ((_sim-isLet? e)
	       (let ((body (_sim-fetch-let-body e))
		     (actual (_sim-fetch-let-actual e)))
		 (loop! actual rf)
		 (loop! body (cons (fetch-flow actual) rf))
		 (record! e (fetch-flow body))))
	      ((_sim-isBegin? e)
	       (let ((snd (_sim-fetch-begin-snd e)))
		 (loop! (_sim-fetch-begin-fst e) rf)
		 (loop! snd rf)
		 (record! e (fetch-flow snd))))
	      ((_sim-isPrimop? e)
	       (let ((flow (gen-flow-node!)))
		 (for-each (lambda (ei)
			     (loop! ei rf)
			     (add-flow-constraint-=! flow (fetch-flow ei)))
			   (_sim-fetch-primop-args e))
		 (cond
		   ; no flow info. can escape out of aborting primitives:
		   ((member (_sim-fetch-primop-referentiality e)
			    '(abort abort-eoi))
		    (record! e (gen-flow-node!)))
		   (else
		    (record! e flow)))))
	      ((_sim-isCstr? e)
	       (let ((flow (gen-flow-node!))
		     (index (_sim-fetch-cstr-index e)))
		 (add-flow-constraint-cstr-in!
		  (gen-cstr-node!
		   index
		   (map (lambda (ei)
			  (loop! ei rf)
			  (let ((~bti (gen-bt-node!)))
			    (set-~bt! ei ~bti)
			    (make-arg-info (fetch-flow ei) ~bti)))
			(_sim-fetch-cstr-args e)))
		  flow)
		 (record! e flow)))
	      ((_sim-isSel? e)
	       (let* ((arg (_sim-fetch-sel-arg e))
		      (flow (gen-flow-node!))
		      (bt (gen-bt-node!))
		      (proj (_sim-fetch-udo-entry-sel-proj
			     (_sim-fetch-udo-entry e)))
		      (cstr-index (_sim-fetch-sel-cstrindex e))
		      (cstr-arity
		       (_sim-fetch-udo-entry-arity
			(_sim-fetch-udo-entry-from-index cstr-index))))
		 (loop! arg rf)
		 (add-flow-constraint-cstr-in!
		  (gen-cstr-node!
		   cstr-index
		   (let loop1! ((n 0))
		     (cond
		       ((= n cstr-arity) '())
		       ((= n proj) (cons (make-arg-info flow bt)
					 (loop1! (+ 1 n))))
		       (else
			(cons (make-arg-info (gen-flow-node!) (gen-bt-node!))
			      (loop1! (+ 1 n)))))))
		  (fetch-flow arg))
		 (record! e flow)
		 (set-bt! e bt)))
	      ((_sim-isPred? e)
	       (loop! (_sim-fetch-pred-arg e) rf)
	       (record! e (gen-flow-node!)))
	      ((_sim-isPcall? e)
	       (let* ((d (_sim-fetch-udp-def udp e)))
		 (for-each (lambda (ei flowi)
			     (loop! ei rf)
			     (add-flow-constraint-=! (fetch-flow ei) flowi))
			   (_sim-fetch-pcall-args e)
			   (fetch-def-flow* d))
		 (record! e (fetch-flow (_sim-fetch-def-exp d)))))
	      ((_sim-isAbs? e)
	       (let* ((body (_sim-fetch-abs-body e))
		      (flow (gen-flow-node!))
		      (~bt1 (gen-bt-node!))
		      (eod1 (gen-eod-node!))
		      (free-var* (_sim-fetch-abs-free-variables e))
		      (formal* (_sim-fetch-abs-formals e))
		      (arity (length formal*))
		      (flow* (map (lambda (formal) (gen-flow-node!)) formal*))
		      (bt* (map (lambda (formal) (gen-bt-node!)) formal*)))
		 (init-abs-fields! e)
		 (set-abs-formals-flow*! e flow*)
		 (set-abs-formals-bt*! e bt*)
		 (loop! body
			(append flow*
				(map (lambda (ei)
				       (let ((flow (_sim-lookup-var ei rf)))
					 (record! ei flow)
					 flow))
				     free-var*)))
		 (add-flow-constraint-fct-in!
		  (gen-fct-node!
		   arity
		   (map make-arg-info flow* bt*)
		   (make-result-info (fetch-flow body) ~bt1 eod1))
		  flow)
		 (record! e flow)
		 (set-~bt! body ~bt1)
		 (set-eod! body eod1)))
	      ((_sim-isApp? e)
	       (let* ((e0 (_sim-fetch-app-exp e))
		      (e* (_sim-fetch-app-args e))
		      (arity (length e*))
		      (flow (gen-flow-node!))
		      (bt (gen-bt-node!))
		      (eod (gen-eod-node!)))
		 (loop! e0 rf)
		 (add-flow-constraint-fct-in!
		  (gen-fct-node!
		   arity
		   (map (lambda (ei)
			  (loop! ei rf)
			  (let ((~bti (gen-bt-node!)))
			    (set-~bt! ei ~bti)
			    (make-arg-info (fetch-flow ei) ~bti)))
			e*)
		   (make-result-info flow bt eod))
		  (fetch-flow e0))
		 (record! e flow)
		 (set-bt! e bt)
		 (set-eod! e eod)))
	      (else
	       (_sim-error
		'make-flow-constraints! "unknown syntactic form: ~s" e))))
	  
	  (define (gen-flow-node1! dummy) (gen-flow-node!))
	  
	  ; generate nodes for procedure heads and bodies:
	  (_sim-vector-for-each
	   (lambda (d)
	     (init-def-fields! d)
	     (set-def-flow*! d (map gen-flow-node1! (_sim-fetch-def-pars d)))
	     (let ((body (_sim-fetch-def-exp d)))
	       (record! body (gen-flow-node!))))
	   udp)
	  
	  ; run through each procedure body:
	  (_sim-vector-for-each
	   (lambda (d)
	     (let* ((body (_sim-fetch-def-exp d))
		    (flow (fetch-flow body)))
	       (loop! body (fetch-def-flow* d))
	       (add-flow-constraint-=! flow (fetch-flow body))))
	   udp)
	  )
	
	(define (add-flow-constraint-cstr-in! cstr flow)
	  (set! flow-constraints-cstr-in
		(cons (make-cstr-in cstr flow) flow-constraints-cstr-in)))
	(define (add-flow-constraint-fct-in! fct flow)
	  (set! flow-constraints-fct-in
		(cons (make-fct-in fct flow) flow-constraints-fct-in)))

	
	(define (solve-flow-constraints!)
	  (define (add-flow-constraint-=! flow1 flow2)
	    (let* ((flow1 (find! flow1))
		   (flow2 (find! flow2)))
	      (if (not (eq? flow1 flow2))
		  (let* ((flow3 (union! flow1 flow2)) ; 1. & 2. ok
			 (flow4 (if (eq? flow2 flow3) flow1 flow2)))
		    (add-flow-constraint-=-cstr-in!
		     (flownode.cstrnode* flow4) flow3)
		    (add-flow-constraint-=-fct-in!
		     (flownode.fctnode* flow4) flow3)))))
	  (define (add-flow-constraint-=-cstr-in! cstr* flow3)
	    (if (not (null? cstr*))
		(begin
		  (add-flow-constraint-cstr-in! (car cstr*) flow3)
		  (add-flow-constraint-=-cstr-in! (cdr cstr*) flow3))))
	  (define (add-flow-constraint-=-fct-in! fct* flow3)
	    (if (not (null? fct*))
		(begin
		  (add-flow-constraint-fct-in! (car fct*) flow3)
		  (add-flow-constraint-=-fct-in! (cdr fct*) flow3))))
	  (define (add-bt-constraint-=! bt1 bt2) (safe-union! bt1 bt2))
	  (define (add-eod-constraint-=! eod1 eod2) (safe-union! eod1 eod2))
	  (define (solve-cstr!)
	    (let* ((c (car flow-constraints-cstr-in))
		   (cstr (find! (flowcon.cstrnode c)))
		   (index (cstrnode.index cstr))
		   (flow (find! (flowcon.flownode c)))
		   (cstr* (flownode.cstrnode* flow)))
	      (set! flow-constraints-cstr-in (cdr flow-constraints-cstr-in))
	      (let ((in-sb4-type-index*? (solve-cstr*! cstr* cstr index)))
		(if (not (equal? in-sb4-type-index*? "exit"))
		    (begin
		      (if **Similix-verbose-prep**
			  (if (not (or (null? cstr*) in-sb4-type-index*?))
			      (begin
				(newline)
				(display "Warning: constructor ")
				(display (get-name index))
				(display " mixed with constructors")
				(newline)
				(display
				 (get-cstrs (cstrnode.index (car cstr*))))
				(newline))))
		      (flownode.cstrnode*:=+ flow cstr))))))
	  (define (solve-cstr*! cstr* cstr index)
	    (if (null? cstr*)
		#f
		(let ((hd (let* ((cstr (find! cstr))
				 (cstr1 (find! (car cstr*)))
				 (index1 (cstrnode.index cstr1))
				 (arginfo* (cstrnode.arginfo* cstr))
				 (arginfo*1 (cstrnode.arginfo* cstr1)))
			    (if (and (not (eq? cstr cstr1))
				     (equal? index1 index))
				(begin
				  (union! cstr cstr1) ; 1. & 2. ok
				  (for-each solve-flow-arg! arginfo* arginfo*1)
				  "exit")
				(equal? (get-type-index index)
					(get-type-index index1))))))
		  (if (equal? hd "exit")
		      "exit"
		      (let ((rest (solve-cstr*! (cdr cstr*) cstr index)))
			(if (equal? rest "exit")
			    "exit"
			    (or hd rest)))))))
	  (define (solve-fct!)
	    (let* ((c (car flow-constraints-fct-in))
		   (fct (find! (flowcon.fctnode c)))
		   (arity (fctnode.arity fct))
		   (flow (find! (flowcon.flownode c)))
		   (fct* (flownode.fctnode* flow)))
	      (set! flow-constraints-fct-in (cdr flow-constraints-fct-in))
	      (let ((sb4-arity* (solve-fct*! fct* fct arity)))
		(if (not (equal? sb4-arity* "exit"))
		    (begin
		      (if **Similix-verbose-prep**
			  (if (not (or (null? sb4-arity*)
				       (member arity sb4-arity*)))
			      (begin
				(newline)
				(display "Warning: abstraction with arity ")
				(display arity)
				(display " mixed with arities ")
				(newline)
				(display sb4-arity*)
				(newline))))
		      (flownode.fctnode*:=+ flow fct))))))
	  (define (solve-fct*! fct* fct arity)
	    (if (null? fct*)
		'()
		(let ((hd (let* ((fct (find! fct))
				 (fct1 (find! (car fct*)))
				 (arity1 (fctnode.arity fct1))
				 (arginfo* (fctnode.arginfo* fct))
				 (arginfo*1 (fctnode.arginfo* fct1))
				 (resultinfo (fctnode.resultinfo fct))
				 (resultinfo1 (fctnode.resultinfo fct1)))
			    (if (and (not (eq? fct fct1)) 
				     (= arity1 arity))
				(begin
				  (union! fct fct1) ; 1. & 2. ok
				  (for-each solve-flow-arg! arginfo* arginfo*1)
				  (let ((ri resultinfo)
					(ri1 resultinfo1))
				    (add-flow-constraint-=!
				     (resultinfo.flownode ri)
				     (resultinfo.flownode ri1))
				    (add-bt-constraint-=!
				     (resultinfo.btnode ri)
				     (resultinfo.btnode ri1))
				    (add-eod-constraint-=!
				     (resultinfo.eodnode ri)
				     (resultinfo.eodnode ri1)))
				  "exit")
				arity1))))
		  (if (equal? hd "exit")
		      "exit"
		      (let ((rest (solve-fct*! (cdr fct*) fct arity)))
			(if (equal? rest "exit")
			    "exit"
			    (cons hd rest)))))))
	  (define (solve-flow-arg! ai ai1)
	    (add-flow-constraint-=!
	     (arginfo.flownode ai) (arginfo.flownode ai1))
	    (add-bt-constraint-=! (arginfo.btnode ai) (arginfo.btnode ai1)))
	  
	  (let loop! ()
	    (if (not (null? flow-constraints-cstr-in))
		(begin (solve-cstr!) (loop!)))
	    (if (not (null? flow-constraints-fct-in))
		(begin (solve-fct!) (loop!)))))

	; body:
	(make-flow-constraints!)
	(solve-flow-constraints!)
	)


      
      ;**********************************************************************
      ; Binding-time and is-used analyses
      ;**********************************************************************
      
      (define (bt-analysis!)
	(define (add-bt-constraint-=dynamic! bt)
	  (set! bt-constraints-=dynamic (cons bt bt-constraints-=dynamic)))

	(define (make-bt-constraints!)
	  (define (add-bt-constraint-<=! bt ~bt)
	    (set! bt-constraints-<=
		  (cons (make-<= bt ~bt) bt-constraints-<=)))
	  (define (add-bt-constraint-used! bt)
	    (set! bt-constraints-used (cons bt bt-constraints-used)))
	  (define (add-bt-constraint-!>! bt1 bt2)
	    (set! bt-constraints-!>
		  (cons (make-!> bt1 bt2) bt-constraints-!>)))
	  (define (add-bt-constraint-static<=! bt)
	    (set! bt-constraints-static<=
		  (cons (make-static/psds/closure<= (make-btval 'S) bt)
			bt-constraints-static<=)))
	  (define (add-bt-constraint-psds<=! type-index bt)
	    (set! bt-constraints-psds<=
		  (cons (make-static/psds/closure<=
			 (make-btval 'Ps type-index) bt)
			bt-constraints-psds<=)))
	  (define (add-bt-constraint-closure<=! arity bt)
	    (set! bt-constraints-closure<=
		  (cons (make-static/psds/closure<=
			 (make-btval 'Cl arity) bt)
			bt-constraints-closure<=)))
	  
	  (define (record! e bt ~bt)
	    (record1! e bt ~bt)
	    (add-bt-constraint-<=! bt ~bt))
	  
	  (define (record1! e bt ~bt)
	    (set-bt! e bt)
	    (set-~bt! e ~bt))
	  
	  (define (loop! e rb ~bt)
	    (cond
	      ((_sim-isCst? e)
	       (let ((bt (gen-bt-node!)))
		 (add-bt-constraint-static<=! bt)
		 (add-bt-constraint-used! bt)
		 (record! e bt ~bt)))
	      ((_sim-isVar? e)
	       (record! e (_sim-lookup-var e rb) ~bt))
	      ((_sim-isCond? e)
	       (let ((bt (gen-bt-node!))
		     (~bt1 (gen-bt-node!)))
		 (loop! (_sim-fetch-cond-test e) rb ~bt1)
		 (loop! (_sim-fetch-cond-then e) rb bt)
		 (loop! (_sim-fetch-cond-else e) rb bt)
		 (add-bt-constraint-static<=! ~bt1)
		 (add-bt-constraint-used! ~bt1)
		 (if **Similix-standard-memoization**
		     (add-bt-constraint-!>! ~bt1 bt))
		 (record! e bt ~bt)))
	      ((_sim-isLet? e)
	       (let ((bt (gen-bt-node!))
		     (~bt1 (gen-bt-node!)))
		 (loop! (_sim-fetch-let-actual e) rb ~bt1)
		 (loop! (_sim-fetch-let-body e) (cons ~bt1 rb) bt)
		 (record! e bt ~bt)))
	      ((_sim-isBegin? e)
	       (let ((bt (gen-bt-node!))
		     (~bt1 (gen-bt-node!)))
		 (loop! (_sim-fetch-begin-fst e) rb ~bt1)
		 (loop! (_sim-fetch-begin-snd e) rb bt)
		 (record! e bt ~bt)))
	      ((_sim-isPrimop? e)
	       (let ((bt (gen-bt-node!))
		     (referentiality (_sim-fetch-primop-referentiality e)))
		 (for-each (lambda (ei) (loop! ei rb bt))
			   (_sim-fetch-primop-args e))
		 (cond
		   ; Special treatment of aborting primitives;
		   ; All arguments dynamic:
		   ((member referentiality '(abort abort-eoi))
		    (add-bt-constraint-=dynamic! bt)
		    ; Result value independent of arguments:
		    ; result's bt and ~bt equal;
		    (record! e ~bt ~bt))
		   ((memv referentiality '(transparent transparent-if-needed))
		    (add-bt-constraint-static<=! bt)
		    ; Another option is to remove the following constraint
		    ; (but that generates horrible residual code):
		    (if (not (equal? 'transparent-if-needed referentiality))
			(add-bt-constraint-used! bt))
		    (record! e bt ~bt))
		   (else
		    (add-bt-constraint-=dynamic! bt)
		    (record! e bt ~bt)))))
	      ((_sim-isCstr? e)
	       (let ((bt (gen-bt-node!))
		     (index (_sim-fetch-cstr-index e)))
		 (for-each (lambda (ei)
			     (let ((~bti (fetch-~bt ei)))
			       (loop! ei rb ~bti)
			       (add-bt-constraint-!>! bt ~bti)))
			   (_sim-fetch-cstr-args e))
		 (add-bt-constraint-psds<=! (get-type-index index) bt)
		 (record! e bt ~bt)))
	      ((_sim-isSel? e)
	       (let* ((bt (fetch-bt e))
		      (~bt1 (gen-bt-node!)))
		 (loop! (_sim-fetch-sel-arg e) rb ~bt1)
		 (add-bt-constraint-!>! ~bt1 bt)
		 (add-bt-constraint-psds<=!
		  (get-type-index (_sim-fetch-sel-cstrindex e)) ~bt1)
		 (record! e bt ~bt)))
	      ((_sim-isPred? e)
	       (let* ((bt (gen-bt-node!))
		      (~bt1 (gen-bt-node!)))
		 (loop! (_sim-fetch-pred-arg e) rb ~bt1)
		 (add-bt-constraint-!>! ~bt1 bt)
		 (add-bt-constraint-psds<=!
		  (get-type-index (_sim-fetch-pred-cstrindex e)) ~bt1)
		 (add-bt-constraint-used! bt)
		 (add-bt-constraint-static<=! bt)
		 (record! e bt ~bt)))
	      ((_sim-isPcall? e)
	       (let* ((d (_sim-fetch-udp-def udp e))
		      (bt (fetch-~bt (_sim-fetch-def-exp d))))
		 (for-each (lambda (ei bti) (loop! ei rb bti))
			   (_sim-fetch-pcall-args e)
			   (fetch-def-bt* d))
		 (record! e bt ~bt)))
	      ((_sim-isAbs? e)
	       (let* ((body (_sim-fetch-abs-body e))
		      (bt (gen-bt-node!))
		      (~bt1 (fetch-~bt body))
		      (free-var* (_sim-fetch-abs-free-variables e))
		      (arity (length (_sim-fetch-abs-formals e)))
		      (bt* (fetch-abs-formals-bt* e)))
		 (loop! body
			(append
			 bt*
			 (map (lambda (e)
				(let ((bt1 (_sim-lookup-var e rb)))
				  (record1! e bt1 bt1)
				  bt1))
			      free-var*))
			~bt1)
		 (for-each (lambda (bti) (add-bt-constraint-!>! bt bti)) bt*)
		 (add-bt-constraint-closure<=! arity bt)
		 (add-bt-constraint-!>! bt ~bt1)
		 (record! e bt ~bt)))
	      ((_sim-isApp? e)
	       (let* ((e0 (_sim-fetch-app-exp e))
		      (e* (_sim-fetch-app-args e))
		      (arity (length e*))
		      (bt (fetch-bt e))
		      (~bt0 (gen-bt-node!)))
		 (loop! e0 rb ~bt0)
		 (for-each (lambda (ei) (loop! ei rb (fetch-~bt ei))) e*)
		 (add-bt-constraint-!>! ~bt0 bt)
		 (add-bt-constraint-closure<=! arity ~bt0)
		 (record! e bt ~bt)))
	      (else
	       (_sim-error
		'make-bt-constraints! "unknown syntactic form: ~s" e))))
	  
	  (define (gen-bt-node1! dummy) (gen-bt-node!))
	  
	  ; generate nodes for procedure heads and bodies:
	  (_sim-vector-for-each
	   (lambda (d)
	     (set-def-bt*! d (map gen-bt-node1! (_sim-fetch-def-pars d)))
	     (set-~bt! (_sim-fetch-def-exp d) (gen-bt-node!)))
	   udp)
	  
	  ; run through each procedure body:
	  (_sim-vector-for-each
	   (lambda (d)
	     (let ((body (_sim-fetch-def-exp d)))
	       (loop! body (fetch-def-bt* d) (fetch-~bt body))))
	   udp)
	  
	  ; goal procedure's body always dynamic:
	  (add-bt-constraint-=dynamic!
	   (fetch-~bt (_sim-fetch-def-exp goal-def)))

	  ; goal procedure's body always "used":
	  (add-bt-constraint-used! (fetch-bt (_sim-fetch-def-exp goal-def)))
	  
	  ; goal procedure's input parameters:
	  (for-each
	   (lambda (bt btv)
	     (cond
	       ((_sim-bt-dynamic? btv)
		(add-bt-constraint-=dynamic! bt))
	       ((_sim-bt-static? btv)
		(add-bt-constraint-static<=! bt)
		(add-bt-constraint-used! bt))
	       (else
		(_sim-error '_sim-bt-analyse!
			    "Unexpected binding time value ~s in input"
			    btv))))
	   (fetch-def-bt* goal-def) input-btp)
	  )
	
	
	(define (solve-bt-constraints!)
	  (define (insert-<=! c)
	    (let ((bt1 (find! (btcon.1st c)))
		  (bt2 (find! (btcon.2nd c))))
	      (btnode.b<=-dep:=+ bt1 bt2)
	      (btnode.<=b-dep:=+ bt2 bt1)))
	  
	  (define (propagate-static! c)
	    (let ((bt (find! (btcon.bt c)))
		  (btval (btcon.btval c)))
	      (btnode.btval:= bt btval)
	      (propagate-static-loop*! (btnode.b<=-dep bt) btval)))
	  (define (propagate-static-loop*! b<=-dep btval)
	    (if (not (null? b<=-dep))
		(begin
		  (propagate-static-loop! (car b<=-dep) btval)
		  (propagate-static-loop*! (cdr b<=-dep) btval))))
	  (define (propagate-static-loop! bt1 btval)
	    (let* ((bt1 (find! bt1))
		   (btval1 (btnode.btval bt1)))
	      (cond
		((equal? btval1 'bt-undef)
		 (btnode.btval:= bt1 btval)
		 (propagate-static-loop*! (btnode.b<=-dep bt1) btval))
		((equal? btval btval1)
		 "nothing")
		(else
		 (add-bt-constraint-=dynamic! bt1)))))
	  
	  (define (propagate-psds! c)
	    (reach-<=! (btcon.bt c) (btcon.btval c)))
	  
	  (define (propagate-closure! c)
	    (reach-<=! (btcon.bt c) (btcon.btval c)))
	  
	  (define (reach-<=! bt btval)
	    (let ((old-btval-equal?
		   (let ((old-btval (btnode.btval (find! bt))))
		     (or (equal? old-btval 'bt-undef)
			 (equal? btval old-btval)))))
	      (if (and old-btval-equal? (all-equal? bt bt btval))
		  (btnode.btval:= (find! bt) btval)
		  (add-bt-constraint-=dynamic! bt))))
	  (define (all-equal? bt2 bt btval)
	    (let* ((bt2 (find! bt2)) 
		   (b<=-dep (btnode.b<=-dep bt2)))
	      (btnode.b<=-dep:= bt2 '())
	      (reach-<=-loop*! b<=-dep bt btval)))
	  (define (reach-<=-loop*! b<=-dep bt btval)
	    (if (null? b<=-dep)
		#t
		; a let is used because and is non-strict:
		(let ((tl (reach-<=-loop*! (cdr b<=-dep) bt btval)))
		  (and (let* ((bt (find! bt))
			      (bt1 (find! (car b<=-dep))))
			 (or (eq? bt bt1)
			     (let ((btval1 (btnode.btval bt1))
				   (all-equal1? (all-equal? bt1 bt btval)))
			       (safe-union! bt bt1)
			       (and all-equal1?
				    (or (equal? btval1 'bt-undef)
					(equal? btval btval1))))))
		       tl))))
	  
	  (define (insert-!>! c)
	    (btnode.b!>-dep:=+ (find! (btcon.1st c)) (find! (btcon.2nd c))))
	  
	  (define (propagate-dynamic! bt)
	    (let ((bt (find! bt)))
	      (if (not (is-dyn? bt))
		  (let* ((b!>-dep (btnode.b!>-dep bt))
			 (b<=-dep (btnode.b<=-dep bt)))
		    (union! bt the-dyn-bt-node)
		    (for-each propagate-dynamic! b!>-dep)
		    (for-each propagate-dynamic! b<=-dep)))))
	  
	  (define (propagate-used! bt)
	    (let ((bt (find! bt)))
	      (if (not (is-dyn? bt))
		  (begin
		    (btnode.used:= bt #t)
		    (let ((<=b-dep (btnode.<=b-dep bt)))
		      (btnode.<=b-dep:= bt '())
		      (for-each propagate-used! <=b-dep))))))

	  (for-each insert-<=! bt-constraints-<=)
	  (for-each propagate-static! bt-constraints-static<=)
	  (for-each propagate-psds! bt-constraints-psds<=)
	  (for-each propagate-closure! bt-constraints-closure<=)
	  (for-each insert-!>! bt-constraints-!>)
	  (for-each propagate-dynamic! bt-constraints-=dynamic)
	  (for-each propagate-used! bt-constraints-used))

	
	(define (bt-analysis-annotate!)
	  (define (find-bt! bt)
	    (let ((bt (find! bt)))
	      (cond
		((is-dyn? bt) _sim-bt-dynamic-value)
		((equal? (btnode.btval bt) 'bt-undef) _sim-bt-bottom-value)
		(else
		 (case (btnode.btval.val bt)
		   ((Ps) _sim-bt-psds-value)
		   ((Cl) _sim-bt-closure-value)
		   ((S)
		    (if (btnode.used bt)
			_sim-bt-static-value
			_sim-bt-dynamic-value))
		   (else
		    (_sim-error
		     'find-bt!
		     "Internal error: ~s" (btnode.btval.val bt))))))))
	  (define (find-bt!* bt*) (map find-bt! bt*))
	  (define (loop! e)
	    (cond
	      ((_sim-isCst? e)
	       "nothing")
	      ((_sim-isVar? e)
	       "nothing")
	      ((_sim-isCond? e)
	       (_sim-set-cond-test! e (loop! (_sim-fetch-cond-test e)))
	       (_sim-set-cond-then! e (loop! (_sim-fetch-cond-then e)))
	       (_sim-set-cond-else! e (loop! (_sim-fetch-cond-else e)))
	       )
	      ((_sim-isLet? e)
	       (_sim-set-let-actual! e (loop! (_sim-fetch-let-actual e)))
	       (_sim-set-let-body! e (loop! (_sim-fetch-let-body e))))
	      ((_sim-isBegin? e)
	       (let ((fst (_sim-fetch-begin-fst e)))
		 (_sim-set-begin-fst! e (loop! fst))
		 (_sim-set-begin-snd! e (loop! (_sim-fetch-begin-snd e)))
		 (if (_sim-isDynamic? fst)
		     (_sim-raise-begin-unfoldability! e))))
	      ((_sim-isPrimop? e)
	       (loop*! (_sim-fetch-primop-args e)))
	      ((_sim-isCstr? e)
	       (loop*! (_sim-fetch-cstr-args e)))
	      ((_sim-isSel? e)
	       (_sim-set-sel-arg! e (loop! (_sim-fetch-sel-arg e))))
	      ((_sim-isPred? e)
	       (_sim-set-pred-arg! e (loop! (_sim-fetch-pred-arg e))))
	      ((_sim-isPcall? e)
	       (loop*! (_sim-fetch-pcall-args e)))
	      ((_sim-isAbs? e)
	       (_sim-set-abs-formals-btp!
		e (find-bt!* (fetch-abs-formals-bt* e)))
	       (loop*! (_sim-fetch-abs-free-variables e))
	       (_sim-set-abs-body! e (loop! (_sim-fetch-abs-body e))))
	      ((_sim-isApp? e)
	       (_sim-set-app-exp! e (loop! (_sim-fetch-app-exp e)))
	       (loop*! (_sim-fetch-app-args e)))
	      (else
	       (_sim-error
		'bt-analysis-annotate! "unknown syntactic form: ~s" e)))
	    (let ((btv (find-bt! (fetch-bt e)))
		  (~btv (find-bt! (fetch-~bt e))))
	      (cond
		((equal? btv ~btv)
		 (_sim-set-bt-tag! e btv) e)
		((and (_sim-bt-dynamic? ~btv) (_sim-bt-static? btv))
		 (let ((lift-e (_sim-make-abstract-syntax-lift e)))
		   (_sim-set-bt-tag! e btv)
		   (_sim-set-bt-tag! lift-e ~btv)
		   lift-e))
		((_sim-bt-bottom? btv)
		 (_sim-set-bt-tag! e btv) e)
		(else
		 (_sim-error 'bt-analysis-annotate!
			     "Internal error -- unexpected bt-values: ~s and ~s -- expression: ~s"
			     btv ~btv (_sim-show-e e udp))
		 ))))
	  (define (loop*! e*)
	    (if (not (null? e*))
		(begin
		  (set-car! e* (loop! (car e*)))
		  (loop*! (cdr e*)))))
	  
	  (_sim-vector-for-each
	   (lambda (d)
	     (_sim-set-def-btp! d (find-bt!* (fetch-def-bt* d)))
	     (_sim-set-def-exp! d (loop! (_sim-fetch-def-exp d))))
	   udp))

	; body:
	(make-bt-constraints!)
	(solve-bt-constraints!)
	(bt-analysis-annotate!))
      
      
      
      ;**********************************************************************
      ; Evaluation-order dependency analysis
      ;**********************************************************************

      (define (eod-analysis!)
	(define (make-eod-constraints!)
	  (define (add-eod-constraint-up! eod1 eod2)
	    (eodnode.bup-dep:=+ (find! eod1) eod2))
	  (define (add-eod-constraint-down! eod1 eod2)
	    (eodnode.bdown-dep:=+ (find! eod1) eod2))
	  (define (add-eod-constraint-<=! eod1 eod2)
	    (eodnode.b<=-dep:=+ (find! eod1) eod2))
	  (define (add-eod-constraint-<=M! eod)
	    (set! eod-constraint-<=M (cons eod eod-constraint-<=M)))
	  (define (add-eod-constraint-=I! eod)
	    (set! eod-constraint-=I (cons eod eod-constraint-=I)))
	  (define (add-eod-constraint-down*! e* eod)
	    (if (not (null? e*))
		(begin
		  (add-eod-constraint-down! (loop! (car e*)) eod)
		  (add-eod-constraint-down*! (cdr e*) eod))))
	  
	  (define (loop! e)
	    (let ((eod (if (eod-field-undefined? e)
			   (let ((eod (gen-eod-node!)))
			     (set-eod! e eod)
			     eod)
			   (fetch-eod e))))
	      (cond
		((_sim-isLift? e)
		 (add-eod-constraint-<=! (loop! (_sim-fetch-lift-arg e)) eod))
		((_sim-isCst? e)
		 "nothing")
		((_sim-isVar? e)
		 "nothing")
		((_sim-isCond? e)
		 (let* ((cond-test (_sim-fetch-cond-test e))
			(cond-then (_sim-fetch-cond-then e))
			(eod-then (loop! cond-then))
			(eod-else (loop! (_sim-fetch-cond-else e))))
		   (add-eod-constraint-<=! (loop! cond-test) eod)
		   (if (and (_sim-isDynamic? cond-test)
			    (_sim-isDynamic? cond-then))
		       ; (_sim-isDynamic? cond-else) also holds;
		       ; specializer initializes continuation, therefore
		       ; up-constraints generated
		       (begin (add-eod-constraint-up! eod-then eod)
			      (add-eod-constraint-up! eod-else eod))
		       ; specializer does not initialize continuation,
		       ; therefore <=-constraints generated
		       (begin (add-eod-constraint-<=! eod-then eod)
			      (add-eod-constraint-<=! eod-else eod)))))
		((_sim-isLet? e)
		 (add-eod-constraint-down!
		  (loop! (_sim-fetch-let-actual e)) eod)
		 (add-eod-constraint-<=! (loop! (_sim-fetch-let-body e)) eod))
		((_sim-isBegin? e)
		 (add-eod-constraint-down!
		  (loop! (_sim-fetch-begin-fst e)) eod)
		 (add-eod-constraint-<=! (loop! (_sim-fetch-begin-snd e)) eod))
		((_sim-isPrimop? e)
		 (let ((e* (_sim-fetch-primop-args e))
		       (referentiality (_sim-fetch-primop-referentiality e)))
		   (cond
		     ; Special treatment of aborting primitives:
		     ((equal? referentiality 'abort)
		      (for-each loop! e*)
		      (add-eod-constraint-<=M! eod))
		     ((equal? referentiality 'opaque)
		      (for-each loop! e*)
		      (add-eod-constraint-=I! eod))
		     (else ; note that abort-eoi case is included here
		      (add-eod-constraint-down*! e* eod)))))
		((_sim-isCstr? e)
		 (add-eod-constraint-down*! (_sim-fetch-cstr-args e) eod))
		((_sim-isSel? e)
		 (add-eod-constraint-<=! (loop! (_sim-fetch-sel-arg e)) eod))
		((_sim-isPred? e)
		 (add-eod-constraint-<=! (loop! (_sim-fetch-pred-arg e)) eod))
		((_sim-isPcall? e)
		 (let* ((d (_sim-fetch-udp-def udp e))
			(eod-body (fetch-eod (_sim-fetch-def-exp d))))
		   (add-eod-constraint-down*! (_sim-fetch-pcall-args e) eod)
		   (if (_sim-unfoldable-procedure? d)
		       (add-eod-constraint-<=! eod-body eod)
		       (add-eod-constraint-up! eod-body eod))))
		((_sim-isAbs? e)
		 (for-each loop! (_sim-fetch-abs-free-variables e))
		 (let ((eod-body (loop! (_sim-fetch-abs-body e))))
		   (if (_sim-isDynamic? e)
		       (add-eod-constraint-up! eod-body eod-body))))
		((_sim-isApp? e)
		 (let* ((exp (_sim-fetch-app-exp e))
			(eod-exp (loop! exp)))
		   (add-eod-constraint-down*! (_sim-fetch-app-args e) eod)
		   (add-eod-constraint-down! eod-exp eod)))
		(else
		 (_sim-error 'eod-analysis! "unknown syntactic form: ~s" e)))
	      eod))
	  
	  ; generate nodes for procedure bodies:
	  (_sim-vector-for-each
	   (lambda (d)
	     (let ((e (_sim-fetch-def-exp d)))
	       (if (eod-field-undefined? e) (set-eod! e (gen-eod-node!)))))
	   udp)
	  
	  ; run through each procedure body:
	  (_sim-vector-for-each
	   (lambda (d) (loop! (_sim-fetch-def-exp d))) udp)
	  )
	
	
	(define (solve-eod-constraints!)
	  (define (solve-eod-constraint-<=M! eod)
	    (let ((eod (find! eod)))
	      (if (not (or (is-imp? eod) (equal? (eodnode.eodval eod) 'M)))
		  (let ((b<=-dep (eodnode.b<=-dep eod))
			(bup-dep (eodnode.bup-dep eod))
			(bdown-dep (eodnode.bdown-dep eod)))
		    (eodnode.eodval:= eod 'M)
		    (for-each solve-eod-constraint-<=M! b<=-dep)
		    (eodnode.bdown-dep:= eod '())
		    (for-each solve-eod-constraint-<=M! bdown-dep)
		    (eodnode.bup-dep:= eod '())
		    (for-each solve-eod-constraint-=I! bup-dep)))))
	  (define (solve-eod-constraint-=I! eod)
	    (let ((eod (find! eod)))
	      (if (not (is-imp? eod))
		  (let ((b<=-dep (eodnode.b<=-dep eod))
			(bup-dep (eodnode.bup-dep eod))
			(bdown-dep (eodnode.bdown-dep eod)))
		    (union! eod the-imp-eod-node)
		    (for-each solve-eod-constraint-=I! b<=-dep)
		    (for-each solve-eod-constraint-<=M! bdown-dep)
		    (for-each solve-eod-constraint-=I! bup-dep)))))
	  
	  (for-each solve-eod-constraint-<=M! eod-constraint-<=M)
	  (for-each solve-eod-constraint-=I! eod-constraint-=I))
	
	
	(define (eod-analysis-annotate!)
	  (define (loop! e)
	    (cond
	      ((_sim-isLift? e)
	       (loop! (_sim-fetch-lift-arg e)))
	      ((_sim-isCst? e)
	       "nothing")
	      ((_sim-isVar? e)
	       "nothing")
	      ((_sim-isCond? e)
	       (loop! (_sim-fetch-cond-test e))
	       (loop! (_sim-fetch-cond-then e))
	       (loop! (_sim-fetch-cond-else e)))
	      ((_sim-isLet? e)
	       (loop! (_sim-fetch-let-actual e))
	       (loop! (_sim-fetch-let-body e)))
	      ((_sim-isBegin? e)
	       (loop! (_sim-fetch-begin-fst e))
	       (loop! (_sim-fetch-begin-snd e)))
	      ((_sim-isPrimop? e)
	       (for-each loop! (_sim-fetch-primop-args e)))
	      ((_sim-isCstr? e)
	       (for-each loop! (_sim-fetch-cstr-args e)))
	      ((_sim-isSel? e)
	       (loop! (_sim-fetch-sel-arg e)))
	      ((_sim-isPred? e)
	       (loop! (_sim-fetch-pred-arg e)))
	      ((_sim-isPcall? e)
	       (for-each loop! (_sim-fetch-pcall-args e)))
	      ((_sim-isAbs? e)
	       (for-each loop! (_sim-fetch-abs-free-variables e))
	       (loop! (_sim-fetch-abs-body e)))
	      ((_sim-isApp? e)
	       (loop! (_sim-fetch-app-exp e))
	       (for-each loop! (_sim-fetch-app-args e)))
	      (else
	       (_sim-error
		'eod-analysis-annotate! "unknown syntactic form: ~s" e)))
	    (_sim-set-eod-tag!
	     e
	     (let ((eod (find! (fetch-eod e))))
	       (cond
		 ((is-imp? eod) _sim-eod-imperative-value)
		 ((equal? (eodnode.eodval eod) 'M) _sim-eod-mixed-value)
		 (else _sim-eod-bottom-value)))))
	  
	  (_sim-vector-for-each
	   (lambda (d) (loop! (_sim-fetch-def-exp d))) udp))

	; body:
	(make-eod-constraints!)
	(solve-eod-constraints!)
	(eod-analysis-annotate!)
	)


      ;**********************************************************************
      ; Main program
      ;**********************************************************************

      (if (not (= goal-arity input-arity))
	  (_sim-error '_sim-bt-analyse!
		      "Arity mismatch: the goal procedure has arity ~s -- the supplied input has arity ~s"
		      goal-arity input-arity))
      
      (display "flow ") (_sim-flush-output-port)
      (flow-analysis!)
      
      (display "bt ") (_sim-flush-output-port)
      (bt-analysis!)
      
      (display "sp ") (_sim-flush-output-port)
      (_sim-sp-analyse! pgm)
      ; _sim-sp-analyse! only updates pgm, not udp:
      (set! udp (_sim-fetch-pgm-udp pgm))
      
      (display "eod ") (_sim-flush-output-port)
      (eod-analysis!)
      )))

;=============================================================================



(define _sim-bt-bottom-value 'bottom)

(define _sim-bt-static-value 'static)

(define _sim-bt-psds-value 'psds)

(define _sim-bt-closure-value 'closure)

(define _sim-bt-dynamic-value 'dynamic)


(define (_sim-bt-bottom? bt-value)
  (equal? bt-value _sim-bt-bottom-value))

(define (_sim-bt-static? bt-value)
  (equal? bt-value _sim-bt-static-value))

(define (_sim-bt-psds? bt-value)
  (equal? bt-value _sim-bt-psds-value))

(define (_sim-bt-closure? bt-value)
  (equal? bt-value _sim-bt-closure-value))

(define (_sim-bt-dynamic? bt-value)
  (equal? bt-value _sim-bt-dynamic-value))

;-----------------------------------------------------------------------------

(define _sim-eod-bottom-value 'fun)

(define _sim-eod-mixed-value 'mixed)

(define _sim-eod-imperative-value 'imp)


(define (_sim-eod-bottom? eod-value)
  (equal? eod-value _sim-eod-bottom-value))

(define (_sim-eod-mixed? eod-value)
  (equal? eod-value _sim-eod-mixed-value))

(define (_sim-eod-imperative? eod-value)
  (equal? eod-value _sim-eod-imperative-value))

;-----------------------------------------------------------------------------
