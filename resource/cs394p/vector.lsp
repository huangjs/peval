; vector.lsp               Gordon S. Novak Jr.           ; 18 Feb 99

; Copyright (c) 1999 Gordon S. Novak Jr. and The University of Texas at Austin.
; All rights reserved.

; 01 Mar 96; 28 Dec 98; 15 Jan 99; 26 Jan 99

; Vector utility file

(glispobjects

(vector (list (x integer)
	      (y integer))
prop    ((magnitude ((sqrt x ^ 2 + y ^ 2)))
	 (imagnitude ((truncate magnitude + 0.9999)))
	 (angle ((atan y x)) result (units real radians))
	 (unitvector ((a rvector with x = x / magnitude y = y / magnitude))))
adj     ((zero (x is zero and y is zero))
	 (normalized (magnitude = 1.0)))
msg     ((+           vectorplus         open t argtypes (vector))
	 (+b          vectorplus-b       open t argtypes (vector))
         (++          vectorplus-v       open t argtypes (vector))
	 (-           vectordiff         open t argtypes (vector))
	 (*           vectortimes        open t argtypes (number))
	 (dotproduct  vectordotproduct   open t argtypes (vector))
	 (/           vectorquotient     open t argtypes (number))
	 (>           vectorgreaterp     open t argtypes (vector))
	 (<=          vectorleqp         open t argtypes (vector))
	 (=           vectorequal        open t argtypes (vector))
	 (<>          vectornotequal     open t argtypes (vector))
	 (equal       vectorequal        open t argtypes (vector))
	 (_+          vectormove         open t argtypes (vector))
	 (max         vectormax          open t argtypes (vector))
	 (maxb        vectormaxb         open t argtypes (vector))
	 (distance    vector-distance    open t argtypes (vector))
	 (prin1 ((format t "(%a,%a)" x y)))
	 (print ((format t "(~a,~a)~%" x y))) ) )

(consv (cons (x integer) (y integer))  supers  (vector))

(rvector (list (x real)  (y real))     supers  (vector))

(nvector (list (x number) (y number))  supers (vector))

(rthvector (list (r real) (theta real))
  viewspecs ((vector  vector  (magnitude r) (angle theta))
	     (nvector nvector (magnitude r) (angle theta))
	     (rvector rvector (magnitude r) (angle theta))) )


(region (list (start vector)
	      (size vector))
prop    ((left         ((x start)))
	 (bottom       ((y start)))
	 (right        (left + width))
	 (top          (bottom + height))
	 (width        ((x size)))
	 (height       ((y size)))
	 (center       (start + size / 2))
	 (topcenter    ((a vector with x = left + width / 2 y = top)))
	 (bottomcenter ((a vector with x = left + width / 2 y = bottom)))
	 (area         (width * height))
	 (start        ((virtual vector with x = left y = bottom)))
	 (size         ((virtual vector with x = width y = height))) )
adj     ((empty        (width is zero or height is zero))
	 (zero         (self is empty)))
msg     ((contains?    region-contains open t)
	 (contains-xy  region-contains-xy open t)
	 (setposition  region-setposition open t)
	 (centeroffset region-centeroffset open t)
	 (union        region-union specialize t)
	 (intersect    region-intersect specialize t) ))

; 30 Dec 91; 02 Oct 92; 14 Oct 92; 22 Oct 93; 01 Mar 96
(line-segment (list (p1 vector) (p2 vector))
 prop   ((p1x             ((x p1)))
	 (p1y             ((y p1)))
	 (p1              ((virtual vector with x = p1x y = p1y)))
	 (p2x             ((x p2)))
	 (p2y             ((y p2)))
	 (p2              ((virtual vector with x = p2x y = p2y)))
	 (deltax          (p2x - p1x))
	 (deltay          (p2y - p1y))
	 (size            ((virtual vector with x = deltax y = deltay)))
	 (slope           ((if (vertical self)
		             then (if (deltay > 0)
				      then most-positive-single-float
			              else most-negative-single-float)
		             else ((okslope self)))))
	 (length          ((sqrt deltax ^ 2 + deltay ^ 2)))
	 (theta           ((atan deltay deltax)))
	 (okslope         (deltay / (float deltax))) )
 adj    ((vertical        (p2x = p1x)) )
 msg    ((leftof-distance line-segment-leftof-distance open t)
	 (distance        line-segment-distance open t)
	 (leftof          line-segment-leftof open t)
	 (leftof-x        line-segment-leftof-x open t)
	 (within-y        line-segment-within-y open t)
	 (area-under      line-segment-area-under open t)
	 (cofg-area-x     line-segment-cofg-area-x open t)
	 (cofg-area-y     line-segment-cofg-area-y open t)
	 (draw            line-segment-draw open t)
	 (intersect       line-segment-intersect specialize t)
 ))

; 23 Oct 92
(right-triangle (list (x number) (y number))
 prop   ((r               ((sqrt x ^ 2 + y ^ 2)))
	 (theta           ((atan y x)))
	 (slope           (/ y x))
	 (phi             ((atan x y)))
	 (area            (x * y / 2))) )

  ) ; glispobjects


(setf (get 'vector 'ap-omit)
      '(double print prin1 maxb max _+ >= <= > / * ++ +b imagnitude))

(setf (get 'line-segment 'ap-omit)
      '(double draw cofg-area-y cofg-area-x within-y
        leftof-x okslope))

(setf (get 'region 'ap-omit)
      '(centeroffset setposition zero bottomcenter topcenter))

; GSN  2-FEB-83 14:00 
(gldefun region-centeroffset (r\:region v\:vector)
  (a (typeof v) with x = (r\:width - v\:x) / 2
                     y = (r\:height - v\:y) / 2))


; 26-OCT-82; 01 Jun 95; 28 Dec 98
; Test whether a region contains a point P. 
(gldefun region-contains (reg\:region p\:vector)
  (result boolean)
  (p\:x >= reg\:left   and p\:x <= reg\:right and
   p\:y >= reg\:bottom and p\:y <= reg\:top))

; 22 Nov 91; 28 Dec 98
(gldefun region-contains-xy (reg\:region x\:integer y\:integer)
  (x >= reg\:left   and x <= reg\:right and
   y >= reg\:bottom and y <= reg\:top))


; 30-JAN-83; 28 Dec 94; 01 Jun 95
(gldefun region-intersect (p\:region q\:region)
  (result (typeof p))
; Produce a region which is the intersection of two given regions. 
  (let (newbottom newleft newarea xsize ysize)
      (newbottom \:= (max p\:bottom q\:bottom))
      (ysize \:= (min p\:top q\:top) - newbottom)
      (newleft \:= (max p\:left q\:left))
      (xsize \:= (min p\:right q\:right) - newleft)
      (newarea \:= (a (typeof p)))
      (newarea\:left   \:= newleft)
      (newarea\:bottom \:= newbottom)
      (newarea\:width  \:= (max 0 xsize))
      (newarea\:height \:= (max 0 ysize))
       newarea))


; 14-JAN-83 11:52 ; 01 Jun 95; 28 Dec 98
; Change the START point of region so that the position APOS relative to 
;   the region will have the position NEWPOS. 
(gldefun region-setposition (reg\:region apos\:vector newpos\:vector)
(reg\:start _+ newpos - apos))


; 30-JAN-83; 28 Dec 94; 01 Jun 95
(gldefun region-union (p\:region q\:region)
  (result (typeof p))
; Produce a region which is the union of two given regions. 
  (let (newbottom newleft xsize ysize newarea)
    (newbottom \:= (min p\:bottom q\:bottom))
    (ysize \:= (max p\:top q\:top) - newbottom)
    (newleft \:= (min p\:left q\:left))
    (xsize \:= (max p\:right q\:right) - newleft)
    (newarea \:= (a (typeof p)))
    (newarea\:left \:= newleft)
    (newarea\:bottom \:= newbottom)
    (newarea\:width \:= xsize)
    (newarea\:height \:= ysize)
    newarea))


; GSN 10-FEB-83 13:41 
(gldefun vectorplus (v1\:vector v2\:vector)
  (a (typeof v1) with x = v1\:x + v2\:x  y = v1\:y + v2\:y))

; 08 Jan 92
(gldefun vectorplus-b (u\:vector v\:vector)
  (let ((newv (a (typeof u))))
    (for nm in (components (typeof u)) do
      ((funcall nm newv) \:= (+ (funcall nm u) (funcall nm v))) )
    newv))

; 17 Oct 90; 24 Oct 90
; version of vectorplus using virtual view -- but it messes up the
; standard vector examples.
(gldefun vectorplus-v (v1\:vector v2\:vector)
  (viewas vsum (typeof v1)  x = v1\:x + v2\:x  y = v1\:y + v2\:y)
  vsum)


; 06 Feb 90
(gldefun vectordiff (v1\:vector v2\:vector)
  (a (typeof v1) with x = (x v1) - (x v2)  y = (y v1) - (y v2)))


; GSN 03 Oct 95
(gldefun vectordotproduct (v1\:vector v2\:vector)
  ( (x v1) * (x v2) + (y v1) * (y v2) ) )

; old -- this is not the correct definition of dot product of vectors!
; GSN 10-FEB-83 13:42 
; (gldefun vectordotproduct (v1\:vector v2\:vector)
;   (a (typeof v1) with x = v1\:x * v2\:x  y = v1\:y * v2\:y))


; GSN 14-JAN-83 12:33 
; This version of > tests whether one box will fit inside the other. 
(gldefun vectorgreaterp (u\:vector v\:vector)
  (u\:x > v\:x or u\:y > v\:y))


; GSN 14-JAN-83 12:31 
(gldefun vectorleqp (u\:vector v\:vector)
  (u\:x <= v\:x and u\:y <= v\:y))

; 17 May 93
(gldefun vectorequal (u\:vector v\:vector)
  (u\:x = v\:x and u\:y = v\:y))

; 17 May 93
(gldefun vectornotequal (u\:vector v\:vector)
  (u\:x <> v\:x or u\:y <> v\:y))

; GSN 10-FEB-83 13:41 
(gldefun vectortimes (v\:vector n\:number)
  (a (typeof v) with x = x*n  y = y*n))


; GSN 10-FEB-83 13:42 
(gldefun vectorquotient (v\:vector n\:number)
  (a (typeof v) with x = x / n  y = y / n))


; GSN 10-FEB-83 13:43 
(gldefun vectormove (v\:vector delta\:vector)
  (v\:x _+ delta\:x) (v\:y _+ delta\:y)v)

; 21 Dec 90
; Destructive max, alters first argument
(gldefun vectormax (v\:vector new\:vector)
  ((x v) \:= (max (x v) (x new)))
  ((y v) \:= (max (y v) (y new)))
  v )

; 03 Jan 92
(gldefun vector-distance (u\:vector v\:vector)
  (let ((dx ((x u) - (x v))) (dy ((y u) - (y v))))
    (sqrt dx * dx + dy * dy)))
; was   (magnitude (u - v))  -- elegant, but materializes the difference

; 21 Dec 90
; Destructive max, alters first argument
; more general version
(gldefun vectormaxb (v\:vector new\:vector)
  (for c in (components (typeof v)) do
    ((funcall c v) \:= (max (funcall c v) (funcall c new))))
  v)

; 17 Sep 92
; Magnitude of perpendicular distance from a point to a line segment
(gldefun line-segment-distance (ls\:line-segment p\:vector)
  (abs (leftof-distance ls p)) )

#|  ; old version -- commented out
; 30 Dec 91; 31 Dec 91; 14 Oct 92
; Perpendicular distance of a point to the left of a directed line segment
(gldefun line-segment-leftof-distance (ls\:line-segment p\:vector)
  (let ()
    (if ls is vertical
	then (if ((p2y ls) > (p1y ls))
		 then ((p1x ls) - (x p))
	         else ((x p) - (p1x ls)))
        else ((cos (theta ls))
	      * (((y p) - (p1y ls)) - ((x p)  - (p1x ls)) * (slope ls))) ) ))

; 31 Dec 91; 14 Oct 92
; Test whether a point is to the left of a directed line segment,
; from the point of view of an observer facing along the line segment.
(gldefun line-segment-leftof (ls\:line-segment p\:vector)
  (let ( (dx (deltax ls)) (dy (deltay ls)) slope bdif)
    (if ls is vertical
	then (if (dy > 0) then ((p1x ls) > (x p))
	                  else ((x p) < (p1x ls)))
        else (slope \:= dy / (float dx))
	     (bdif \:= ((y p) - (p1y ls) - slope * ((x p) - (p1x ls))))
	     (if (dx > 0) then (bdif > 0) else (bdif < 0)) ) ))
|#

; 21 Jan 93; 22 Jan 93; 16 Feb 95
; Perpendicular distance of a point to the left of a directed line segment
(gldefun line-segment-leftof-distance (ls\:line-segment p\:vector)
    ( ( (deltax ls) * ( (y p) - (p1y ls) )
	- (deltay ls) * ( (x p) - (p1x ls) ) )
      / (length ls) ) )

; 31 Dec 91; 14 Oct 92; 22 Jan 93
; Test whether a point is to the left of a directed line segment,
; from the point of view of an observer facing along the line segment.
(gldefun line-segment-leftof (ls\:line-segment p\:vector)
  ( (deltax ls) * ( (y p) - (p1y ls) ) > (deltay ls) * ( (x p) - (p1x ls) )) )

; 14 Jan 92; 14 Oct 92
; Test whether a point is within the y range of a line segment
(gldefun line-segment-within-y (ls\:line-segment p\:vector)
  (or (((y p) <= (p2y ls)) and ((y p) > (p1y ls)))
      (((y p) <= (p1y ls)) and ((y p) > (p2y ls))) ) )

; 14 Jan 92; 14 Oct 92
; Test whether a point is to the left of a line segment, relative to x-y axes.
(gldefun line-segment-leftof-x (ls\:line-segment p\:vector)
  (let ( (dx (deltax ls)) (dy (deltay ls)) slope bdif)
    (and (within-y ls p)
	 (if (dx = 0)
	     then ((x p) < (p1x ls))
	     else (slope \:= dy / (float dx))
	          (bdif \:= ((y p) - (p1y ls)
			     - slope * ((x p) - (p1x ls))))
		  (if (slope > 0) then (bdif > 0) else (bdif < 0)) ) ) ))

; 14 Jan 92; 14 Oct 92
; Area under a line segment (to the x axis)
(gldefun line-segment-area-under (ls\:line-segment)
  ( ((p2x ls) - (p1x ls)) * ((p2y ls) + (p1y ls)) / 2.0) )

; Area of a line segment, for accumulating center of gravity
(gldefun line-segment-cofg-area-x (ls\:line-segment)
  (let ( (dx (deltax ls)) )
    ( -0.5 * dx * (deltay ls) * ( (p1x ls) + dx / 3.0 )
      + dx * (p2y ls) * ( (p1x ls) + dx / 2.0) ) ))

(gldefun line-segment-cofg-area-y (ls\:line-segment)
  (let ( (dx (deltax ls)) (dy (deltay ls)) )
    ( -0.5 * dx * dy * ( (p2y ls) - dy / 3.0 )
      + dx * ((p2y ls) ^ 2) / 2.0) ))

; 20 Oct 94
(gldefun line-segment-draw (ls\:line-segment substrate)
  (draw-line-xy substrate (p1x ls) (p1y ls) (p2x ls) (p2y ls)))

; 27 Oct 94; 28 Oct 94
; K. Loo, adapted by G. Novak
; If ls1 and ls2 are not parallel, and there is a unique intersection,
; returns the intersection point, else nil.
(gldefun line-segment-intersect (ls1\:line-segment ls2\:line-segment
                                 &optional int-pt\:nvector)
   (result (typeof int-pt))
   (let (dy1 dy2 s r denominator\:real)
     (dy1 \:= ((p2y ls1) - (p1y ls1)))
     (dy2 \:= ((p2y ls2) - (p1y ls2)))
     (denominator \:= (p1x ls1) * dy2 + (p2x ls2) * dy1
		      - ((p2x ls1) * dy2 + (p1x ls2) *dy1))
     (if (not (zerop denominator))
       then 
       (s \:= ( (p1x ls1) * dy2 +
		(p1x ls2) * ((p1y ls1) - (p2y ls2)) +
		(p2x ls2) * ((p1y ls2) - (p1y ls1)) ) / denominator)
       (r \:= - ((p1x ls2) * dy1 +
		 (p1x ls1) * ((p1y ls2) - (p2y ls1)) +
		 (p2x ls1) * ((p1y ls1) - (p1y ls2)) )
	      / denominator)
       (if ((0.0 <= s) and (s <= 1.0) and (0.0 <= r) and (r <= 1.0))
	   then (a (typeof int-pt) with
		   x = ((p1x ls1) + s * ((p2x ls1) - (p1x ls1)))
		   y = ((p1y ls1) + s * dy1) ) ) ) ))
