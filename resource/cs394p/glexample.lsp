; glexample.lsp          Gordon S. Novak Jr.             ; 09 Jun 04

; Copyright (c) 2004 Gordon S. Novak Jr. and The University of Texas at Austin.
; All rights reserved.

; Examples to illustrate features of GLISP.  Also see the file vector.lsp

; 22 Mar 95; 06 Jun 95; 02 Mar 98

(glispobjects

(dcircle (listobject (center   vector)
		     (diameter real))
prop    ((radius (diameter / 2)))
supers  (circle)
doc     (* "A DCIRCLE is implemented differently from a circle. The" 
	   "data structure is different, and DIAMETER is stored"
	   "instead of RADIUS. By defining RADIUS as a PROPerty, all" 
	   "of the CIRCLE properties defined in terms of radius can be"
	   "inherited."))

) ; end glispobjects


; create some example data using the "a" function:
(setq mycircle (a circle with radius = 5.0
		  center = (a vector with x = 3 y = 4)))
(setq mydcircle (a dcircle with radius = 5.0
		  center = (a vector with x = 3 y = 4)))

; Some test functions on circles.  Try e.g. (t1 mycircle) , (glp)
(gldefun t1 ((c circle)) (radius c))
(gldefun t2 ((c circle)) (area c))
; Examine mycircle before and after (t3 mycircle) to see the change
(gldefun t3 ((c circle)) ((area c) = 100))
; Examples: (t4 mycircle '(6 7))   (t4 mycircle '(8 8))
(gldefun t4 ((c circle) (v vector)) (contains c v))

; Same functions for a dcircle
(gldefun t1d ((c dcircle)) (radius c))
(gldefun t2d ((c dcircle)) (area c))
(gldefun t3d ((c dcircle)) ((area c) = 100))
(gldefun t4d ((c dcircle) (v vector)) (contains c v))

; Write a glispobjects for some "application" type that defines a radius
; (either stored or as a prop) and lists circle as a superclass.
; See if the above kinds of procedures work for your data.


(glispobjects

(pizza (list (size symbol)
	     (toppings (listof symbol)))
  adj ((spicy  ((intersection '(pepperoni onion jalapena) toppings)) ) ) )

) ; end glispobjects

(setq mypizza (a pizza size 'medium toppings '(pepperoni mushrooms)))

; Suppose that a small pizza is 10 inches in diameter, medium is 12 inches,
; and large is 16 inches.  Define a view type pizza-as-circle that
; views a pizza as a circle, i.e.,
; (glispobjects
;   (pizza-as-circle (p pizza)
;     prop ((radius ...))
;     supers (circle))  )
; Try the following procedures:
(gldefun t1p ((c pizza-as-circle)) (radius c))
(gldefun t2p ((c pizza-as-circle)) (area c))


(glispobjects

(pipe (listobject (inside-diameter real)
		  (outside-diameter real)
		  (length real)
		  (material material)
		  (nxt (^ pipe)))
  views ((inside-circle  circle (radius (inside-diameter / 2)))
	 (outside-circle circle (radius (outside-diameter / 2))) )
  prop  ((cross-section (  (area (outside-circle self))
		         - (area (inside-circle self)))))
  adj   ((floats        ( (area (outside-circle self)) >
			  (cross-section self) * (density (material self)))))
  supers (bar) )

(bar anything
  prop   ((volume  ((length self) * (cross-section self)))
	  (density ((density (material self)))) )
  supers (physical-object) )

(physical-object anything
  prop   ((mass    (density * volume))
	  (density (mass / volume))
	  (mass    (weight / 9.88))
	  (weight  (mass * 9.88)) ) )

(material (symbol (proplist (density real)
			    (conductivity real))))

) ; end glispobjects

; Try the following and look at the compiled code
(gldefun ql ((p pipe)) (length p))
(gldefun qn ((p pipe)) (cross-section p))
(gldefun qo ((p pipe)) (mass p))
(gldefun qp ((p pipe)) (floats p))
(gldefun qq ((p pipe)) (weight p))
; must do (viewas 'linked-list 'pipe) before the following will work.
(gldefun qm ((p pipe)) (length (linked-list p)))

(setf (get 'pvc  'density) 1.5)
(setf (get 'iron 'density) 5.0)
(setq pipe1 (a pipe with inside-diameter 0.5 outside-diameter 0.75
	       length 10.0 material 'pvc))
(setq pipe2 (a pipe with inside-diameter 0.5 outside-diameter 0.7 
	       length 8.0 material 'iron))
; (qp pipe1) ; = T
; (qp pipe2) ; = NIL


(glispobjects

(consv (cons (x integer) (y integer))    ; alternative kind of vector
  supers  (vector))

(fvector (cons (y string)
	       (x boolean))
supers  (vector)
doc     (* "A FVECTOR is a very different kind of VECTOR: it has a" 
	   "different storage structure and different element types."
	   "However, it can still inherit some vector properties," 
	   "e.g., addition."))

(vofv (list (x vector)
	    (y vector))
supers  (vector)
doc     ("A VOFV is a vector of vectors, that is, a vector whose" 
	   "components are VECTORs"))

) ; end glispobjects

; Illustrate specializations of vector-+
; (tvplus '(1 2) '(3 4))
(gldefun tvplus ((u vector) (v vector)) u + v)

; (tfvplus '("hi " . nil) '("mom" . t))
(gldefun tfvplus ((u fvector) (v fvector)) u + v)

; (tvofvplus '((1 2) (3 4)) '((5 5) (6 6)))
(gldefun tvofvplus ((u vofv) (v vofv)) u + v)


; A simple version of SQRT.  (sqrtb 2)
(gldefun sqrtb ((x number))
  (let ((s x))
    (if (x >= 0)
	(progn (while ((abs s * s - x) > 1.0E-6) do (s = (s + x / s) * .5))
	       s)) ))


; Function SQUASH illustrates elimination of compile-time constants.
; (glcp 'squash)
(gldefun squash nil
  (if 1>3
      'amazing
      (if (sqrt 7.2) < 2
	  'incredible
          (if 2 + 2 == 4
	      'okay
	      'jeez))))


; The following examples illustrate inheritance of the "density" property
; for very different kinds of objects.
(glispobjects

(ordinary-object anything
prop    ((mass (weight / 9.88)))
supers  (physical-object))            ; defined above

(sphere anything
prop    ((volume ((4.0 / 3.0) * 3.141593 * radius ^ 3))))

(parallelepiped anything
prop    ((volume (length * width * height))))

(planet (listobject (mass   real)
		    (radius real))
supers  (physical-object sphere))

(brick (object (length real)
	       (width  real)
	       (height real)
	       (weight real))
supers  (ordinary-object parallelepiped))

(bowling-ball (atomobject (type   symbol)
			  (weight real))
prop    ((radius ((if type == 'adult 0.1 0.07))))
supers  (ordinary-object sphere))

) ; end glispobjects

(setq earth  (a planet with mass = 5.98E24 radius = 6.37E6))
(setq brick1 (a brick with weight = 20.0 width = .1
		 height = .05 length = .2))
(setq bb1 (a bowling-ball with type = 'adult weight = 60.0))

; Three test functions to demonstrate inheritance of the Density property.

; (dplanet earth)
(gldefun dplanet ((p planet)) density)

; (dbrick brick1)
(gldefun dbrick ((b brick)) density)

; (dbb bb1)
(gldefun dbb ((b bowling-ball)) density)
