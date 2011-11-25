; oopexa.tst     Test oopexa.lsp    Gordon S. Novak Jr.     04 Mar 96

; This file tests some vector operations.
; Try these from the keyboard one at a time.


; Look at a class definition
(ppobj 'xyvector)
(classp 'vector)

; Make an instance with initialization:
(setq va (make-instance 'xyvector :x 3 :y 4))
(ppobj va)

; Make an instance and initialize with a message
(setq vb (make-instance 'rthvector))
(sendm vb 'set-xy 6 8)
(ppobj vb)

; Add two vectors of different types
(setq vc (sendm va '+ vb))
(ppobj vc)

; Add two vectors of different types:
; the result type is the same as that of the first argument.
(setq vd (sendm vb '+ va))
(ppobj vd)

; demonstrate messages for basic Lisp types
(sendm 3 '+ 4)
(sendm 7.0 '+ 2.0)
(sendm "foo" '+ "bar")

; vector with three components
(setq v3a (make-instance 'xyzvector :x 3 :y 4 :z 5))
(setq v3b (make-instance 'xyzvector :x 5 :y 8 :z -2))

; vector with string and integer
(setq sia (make-instance 'sivector :s "hi " :i 3))
(setq sib (make-instance 'sivector :s "mom" :i 7))

; vector of vectors
(setq vva (make-instance 'vectorvector
                         :u (make-instance 'xyvector :x 3 :y 4)
                         :v (make-instance 'xyvector :x 5 :y 6)))
(setq vvb (make-instance 'vectorvector
                         :u (make-instance 'xyvector :x 5 :y 7)
                         :v (make-instance 'rthvector :r 5 :theta (/ pi 6))))

; Add methods to make the following work:
(sendm va 'r)
(sendm va 'theta)
(sendm va 'set-r 20.0)
(sendm va 'set-theta 0.5)
(sendm v3a '+ v3b)
(sendm sia '+ sib)
(sendm vva '+ vvb)
