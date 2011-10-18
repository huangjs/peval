;;; -*- Mode: LISP; Package: (APE :USE CL :COLON-MODE :EXTERNAL); Base: 10; Syntax: Ansi-common-lisp -*-

;;; LaHaShem HaAretz U'Mloah

#||#(in-package :cl-user)

(partial:define-partial-package :ape (:use :iterate)
 (:export :*check-type?* :maybe-check-type
	  :sqr
	  :point :figure :line-segment :circle :line :ray
	  :*fuzz*
	  :minus-pi :half-pi :minus-half-pi :two-pi :minus-two-pi
	  :*coordinate-type* :imagined :previous :observed :saved
	  :p :q
	  :present? moved? :same-layer-link :name :different-layer?-array
	  :index
	  :x :y
	  :x-observed :y-observed :x-previous :y-previous
	  :x-saved :y-saved :x-imagined :y-imagined
	  :size
	  :a :b :c
	  :clockwise :counterclockwise
	  :rotation2 :rotation :rotation+ :rotation-
	  :fuzzy= :fuzzy/= :fuzzy<= :fuzzy>= :fuzzy< :fuzzy>
	  :fuzzy=rotation :fuzzy/=rotation
	  :fuzzy-point-between-points-exclusive?
	  :fuzzy-point-between-points-inclusive?
	  :extend-to-line :horizontal-line-at
	  :parallel-lines-at-distance :closest-point-on-line-to-point
	  :distance :intersection-point :touch? :translate
	  :translation-limit :rotation-limit
	  :fast-translation-limit :fast-rotation-limit))

(in-package :ape)

(declare-function-type + (&rest float) float) ;change

(declare-function-type - (float &rest float) float) ;change

(declare-function-type * (&rest float) float) ;change

(declare-function-type / (float &rest float) float) ;change

(declare-function-type sin (float) float) ;change

(declare-function-type cos (float) float) ;change

(declare-function-type atan (float &optional float) float) ;change

(declare-function-type abs (float) float) ;change

(declare-function-type sqrt (float) float) ;change

(declare-function-type normalize-rotation (float) float) ;change

(define-c-uncodifier normalize-rotation () ;change
 (c-uncodify-unary-float
  expressions code 'normalize-rotation "normalize_rotation(~A)"))

(defmacro defun-compile-time (function-name lambda-list &body body)
 `(eval-when (compile load eval)
   (cl:defun ,function-name ,lambda-list ,@body)
   (eval-when (compile) (compile ',function-name))))

(defmacro defvar-compile-time (name &optional initial-value documentation)
 `(eval-when (compile load eval)
   (cl:defvar ,name ,initial-value ,documentation)))

(defvar-compile-time *check-type?* nil "T to enable CHECK-TYPE")

(defmacro maybe-check-type
    (place type-specifier &optional (type-desc nil type-desc?))
 (if *check-type?*
     (if type-desc?
	 `(check-type ,place ,type-specifier ,type-desc)
	 `(check-type ,place ,type-specifier))))

(defmacro sqr (x) `(let ((x ,x)) (* x x)))

;;; change
(defmacro equ (x y) `(let ((x ,x) (y ,y)) (if x (if y t nil) (if y nil t))))
#+comment
(defmacro equ (x y) `(eq ,x ,y))

(defclass point ()
 ;; change: added :INITARG to :X-OBSERVED and Y-OBSERVED
 ;; change: added :TYPE
 ((x-observed :initarg :x :accessor x-observed :type float)
  (y-observed :initarg :y :accessor y-observed :type float)
  (x-previous :accessor x-previous :type float)
  (y-previous :accessor y-previous :type float)
  (x-saved :accessor x-saved :type float)
  (y-saved :accessor y-saved :type float)
  (x-imagined :accessor x-imagined :type float)
  (y-imagined :accessor y-imagined :type float)))

(defclass figure ()
 ;; change: added :TYPE, removed SIZE
 ((p :initarg :p :accessor p :type point)
  (q :initarg :q :accessor q :type point)
  (present? :initform nil :accessor present? :type boolean)
  (moved? :initform nil :accessor moved? :type boolean)
  ;; needs work: the next three have no types
  (same-layer-link :accessor same-layer-link)
  (name :initarg :name :accessor name)
  (different-layer?-array :initform nil :accessor different-layer?-array)
  (index :accessor index :type integer)))

(defclass line-segment (figure) ())

(defclass circle (figure) ())

(defclass line ()
 ;; change: added :TYPE
 ((a :initarg :a :accessor a :type float)
  (b :initarg :b :accessor b :type float)
  (c :initarg :c :accessor c :type float)))

(defclass ray ()
 ;; change: added :TYPE
 ((p :initarg :p :accessor p :type point)
  (rotation :initarg :rotation :accessor rotation :type float)))

(cl:defvar *fuzz* 0.001 "The fuzzy comparison constant")

(proclaim '(float *fuzz*))		;change

(declare-variable-type *fuzz* float)	;change

(defconstant minus-pi (- pi) "-pi")

(defconstant half-pi (/ pi 2.0) "pi/2")

(defconstant minus-half-pi (/ pi -2.0) "-pi/2")

(defconstant two-pi (* 2.0 pi) "2pi")

(defconstant minus-two-pi (* -2.0 pi) "-2pi")

(defvar *coordinate-type* 'observed "Either IMAGINED, PREVIOUS or OBSERVED")

;;; Section: Creation Functions

(defun point (x y) (make-instance 'point :x x :y y))

(defmethod p ((p point)) (point (x p) (y p)))

(defmethod x ((f line)) (/ (c f) (a f)))

(defmethod y ((f line)) (/ (c f) (b f)))

(defmethod p ((f line)) (if (zerop (b f)) (point (x f) 0.0) (point 0.0 (y f))))

;;; change: added
(defmethod size ((f figure)) (distance (p f) (q f)))

(defun line-segment (p q &key name)
 (maybe-check-type p point)
 (maybe-check-type q point)
 (make-instance 'line-segment :p p :q q :name name))

(defun circle (p q &key name)
 ;; change
 (maybe-check-type p point)
 (etypecase q
   (number
    (make-instance 'circle :p p :q (point (+ (x p) q) (y p)) :name name))
   (point (make-instance 'circle :p p :q q :name name))))

;;; change
(defun line (a b c) (make-instance 'line :a a :b b :c c))

(defun ray (p rotation)
 (maybe-check-type p point)
 (make-instance 'ray :p p :rotation rotation))

(defmethod x ((p point))
 (ecase *coordinate-type*
   (observed (x-observed p))
   (previous (x-previous p))
   (saved (x-saved p))
   (imagined (x-imagined p))))

(defmethod y ((p point))
 (ecase *coordinate-type*
   (observed (y-observed p))
   (previous (y-previous p))
   (saved (y-saved p))
   (imagined (y-imagined p))))

(defun tightest-translation-limit-internal (numbers)
 (if (null numbers)
     nil
     (let ((tail (tightest-translation-limit-internal (rest numbers))))
      (if (first numbers)
	  (if tail (min (first numbers) tail) (first numbers))
	  tail))))

(defun tightest-translation-limit (&rest numbers)
 ;; change: doesn't terminate search when a limit of zero is found
 ;; change: encoding no limit as NIL prevents optimizing type declarations
 (tightest-translation-limit-internal numbers))

(defun tightest-clockwise-rotation-limit-internal (numbers)
 (if (null numbers)
     nil
     (let ((tail (tightest-clockwise-rotation-limit-internal (rest numbers))))
      (if (and (first numbers) (fuzzy<= (first numbers) 0.0))
	  (if (and tail (fuzzy<= tail 0.0))
	      (max (first numbers) tail)
	      (first numbers))
	  tail))))

(defun tightest-counterclockwise-rotation-limit-internal (numbers)
 (if (null numbers)
     nil
     (let ((tail (tightest-counterclockwise-rotation-limit-internal
		  (rest numbers))))
      (if (and (first numbers) (fuzzy>= (first numbers) 0.0))
	  (if (and tail (fuzzy>= tail 0.0))
	      (min (first numbers) tail)
	      (first numbers))
	  tail))))

(defun tightest-rotation-limit (direction &rest numbers)
 ;; change: doesn't terminate search when a limit of zero is found
 ;; change: encoding no limit as NIL prevents optimizing type declarations
 (ecase direction
   (clockwise (tightest-clockwise-rotation-limit-internal numbers))
   (counterclockwise
    (tightest-counterclockwise-rotation-limit-internal numbers))))

(defun rotation2 (p q)
 (maybe-check-type p point)
 (maybe-check-type q point)
 (atan (- (y q) (y p)) (- (x q) (x p))))

(defmethod rotation ((f figure)) (rotation2 (p f) (q f)))

(defmethod rotation ((f line)) (atan (- (a f)) (b f)))

;;; Section: TVLWEC Event Perception

;;; Section: Generic Useful Routines

(defun quadratic-formula (a b c)
 (let ((delta (- (* b b) (* 4.0 a c))))
  (if (minusp delta)
      (values nil nil)
      (let ((alpha (/ (- b) (+ a a)))
	    (beta (/ (sqrt delta) (+ a a))))
       (values (+ alpha beta) (- alpha beta))))))

(defun point-between-points-exclusive? (p1 p p2)
 (maybe-check-type p1 point)
 (maybe-check-type p point)
 (maybe-check-type p2 point)
 (or (and (<= (min (x p1) (x p2)) (x p) (max (x p1) (x p2)))
	  (< (min (y p1) (y p2)) (y p) (max (y p1) (y p2))))
     (and (< (min (x p1) (x p2)) (x p) (max (x p1) (x p2)))
	  (<= (min (y p1) (y p2)) (y p) (max (y p1) (y p2))))))

(defun point-between-points-inclusive? (p1 p p2)
 (maybe-check-type p1 point)
 (maybe-check-type p point)
 (maybe-check-type p2 point)
 (and (<= (min (x p1) (x p2)) (x p) (max (x p1) (x p2)))
      (<= (min (y p1) (y p2)) (y p) (max (y p1) (y p2)))))

;;; Section: Rotation Normalization Routines

(defun-compile-time normalize-rotation (rotation)
 ;; change: must be transparent since it is recursive
 (cond ((> rotation pi) (normalize-rotation (- rotation two-pi)))
       ((<= rotation minus-pi) (normalize-rotation (+ rotation two-pi)))
       (t rotation)))

(defun rotation+ (x y) (normalize-rotation (+ x y)))

(defun rotation- (x y) (normalize-rotation (- x y)))

;;; Section: Fuzzy Comparison Routines

(defun fuzzy= (x y) (< (abs (- x y)) *fuzz*))

(defun fuzzy/= (x y) (not (fuzzy= x y)))

(defun fuzzy<= (x y) (or (< x y) (fuzzy= x y)))

(defun fuzzy>= (x y) (or (> x y) (fuzzy= x y)))

(defun fuzzy< (x y) (and (< x y) (fuzzy/= x y)))

(defun fuzzy> (x y) (and (> x y) (fuzzy/= x y)))

(defun fuzzy=rotation (x y)
 (let ((x (normalize-rotation x))
       (y (normalize-rotation y)))
  ;; note: the following is intentionally not ROTATION- and ROTATION+
  (or (fuzzy= x y) (fuzzy= x (- y two-pi)) (fuzzy= x (+ y two-pi)))))

(defun fuzzy/=rotation (x y)
 (let ((x (normalize-rotation x))
       (y (normalize-rotation y)))
  ;; note: the following is intentionally not ROTATION- and ROTATION+
  (and (fuzzy/= x y) (fuzzy/= x (- y two-pi)) (fuzzy/= x (+ y two-pi)))))

(defun fuzzy-between-exclusive? (x y z) (< (+ x *fuzz*) y (- z *fuzz*)))

(defun fuzzy-between-inclusive? (x y z) (<= (- x *fuzz*) y (+ z *fuzz*)))

(defun fuzzy-point-between-points-exclusive? (p1 p p2)
 (maybe-check-type p1 point)
 (maybe-check-type p point)
 (maybe-check-type p2 point)
 (or (and (fuzzy-between-inclusive?
	   (min (x p1) (x p2)) (x p) (max (x p1) (x p2)))
	  (fuzzy-between-exclusive?
	   (min (y p1) (y p2)) (y p) (max (y p1) (y p2))))
     (and (fuzzy-between-exclusive?
	   (min (x p1) (x p2)) (x p) (max (x p1) (x p2)))
	  (fuzzy-between-inclusive?
	   (min (y p1) (y p2)) (y p) (max (y p1) (y p2))))))

(defun fuzzy-point-between-points-inclusive? (p1 p p2)
 (maybe-check-type p1 point)
 (maybe-check-type p point)
 (maybe-check-type p2 point)
 (and (fuzzy-between-inclusive? (min (x p1) (x p2)) (x p) (max (x p1) (x p2)))
      (fuzzy-between-inclusive?
       (min (y p1) (y p2)) (y p) (max (y p1) (y p2)))))

(defun fuzzy-rotation-between-rotations-exclusive? (x y z)
 ;; note: returns true if Y is between X and Z going counterclockwise and Y is
 ;;       not fuzzy equal to either X or Z
 (cond ((> z x) (and (fuzzy> y x) (fuzzy< y z)))
       ((< z x) (or (fuzzy> y x) (fuzzy< y z)))
       (t nil)))

(defun fuzzy-rotation-between-rotations-inclusive? (x y z)
 ;; note: returns true if Y is between X and Z going counterclockwise or if
 ;;       Y is fuzzy equal to X or Z
 (not (fuzzy-rotation-between-rotations-exclusive? z y x)))

;;; Section: Generic Geometry Computations on Figures

(defmethod extend-to-line ((f line-segment))
 ;; note: This has to be FUZZY= since if p1=(4.56067,4.002716) and
 ;;       p2=(3.560666,4.0027175) then a=1.0, b=699053.3 and c=2798116.5
 ;;       which when intersecting a circle of radius 0.5 whose center is
 ;;       (4.060669,4.002716) will yield intersection points at x=3.5,4.5
 ;;       instead of x=3.560666,4.56067 due to roundoff. This error happens
 ;;       in frame 132 of MOVIE1.
 (if (fuzzy= (y (p f)) (y (q f)))
     (if (fuzzy= (x (p f)) (x (q f)))
	 (error "Can't form a single line when the end points are the same")
	 (line 0.0 1.0 (y (p f))))
     (let ((b (/ (- (x (q f)) (x (p f))) (- (y (p f)) (y (q f))))))
      (line 1.0 b (+ (x (p f)) (* b (y (p f))))))))

(defmethod extend-to-line ((f ray))
 (let ((a (sin (rotation f)))
       (b (- (cos (rotation f)))))
  (line a b (+ (* a (x (p f))) (* b (y (p f)))))))

(defun horizontal-line-at (y) (line 0.0 1.0 y))

(defun parallel-lines-at-distance (f d)
 (maybe-check-type f line)
 (let ((delta (* d (sqrt (+ (sqr (a f)) (sqr (b f)))))))
  (values (line (a f) (b f) (+ (c f) delta))
	  (line (a f) (b f) (- (c f) delta)))))

(defun perpendicular-line-through-point (f p)
 (maybe-check-type f line)
 (maybe-check-type p point)
 (if (plusp (b f))
     (line (b f) (- (a f)) (- (* (b f) (x p)) (* (a f) (y p))))
     (line (- (b f)) (a f) (- (* (a f) (y p)) (* (b f) (x p))))))

(defun line-tangent-to-circle-at-point (f p)
 (maybe-check-type f circle)
 (maybe-check-type p point)
 (if (= (x (p f)) (x p))
     (if (= (y (p f)) (y p))
	 (error "Can't form tangent when points are the same")
	 (line 0.0 1.0 (y p)))
     (let ((b (/ (- (y p) (y (p f))) (- (x p) (x (p f))))))
      (line 1.0 b (+ (x p) (* b (y p)))))))

(defun closest-point-on-line-to-point (p f)
 (maybe-check-type p point)
 (maybe-check-type f line)
 (intersection-point
  f
  (line (- (b f)) (a f) (- (* (a f) (y p)) (* (b f) (x p))))))

;;; Section: Distance Routines

;;; distance     | point | line | ray | line-segment | circle
;;;----------------------------------------------------------
;;; point        |   Y   |   Y  |     |              |   Y
;;; line         |   C   |      |     |              |
;;; ray          |       |      |     |              |
;;; line segment |       |      |     |              |
;;; circle       |   C   |      |     |              |

(defmethod distance ((p point) (q point))
 (sqrt (+ (sqr (- (x p) (x q))) (sqr (- (y p) (y q))))))

(defmethod distance ((p point) (f line))
 (distance p (closest-point-on-line-to-point p f)))

(defmethod distance ((p point) (f circle))
 (abs (- (distance p (p f)) (size f))))

(defmethod distance ((f line) (p point)) (distance p f))

(defmethod distance ((f circle) (p point)) (distance p f))

;;; Section: Intersection Routines

;;; intersection-point | point | line | ray | line-segment | circle
;;;----------------------------------------------------------------
;;; point              |       |      |     |              |
;;; line               |       |   Y  |  Y  |      Y       |   Y
;;; ray                |       |   C  |     |      Y       |   Y
;;; line segment       |       |   C  |  C  |      Y       |   Y
;;; circle             |       |   C  |  C  |      C       |   Y

(defmethod intersection-point ((f line) (g line))
 (let ((delta (- (* (a f) (b g)) (* (b f) (a g))))
       (x (- (* (c f) (b g)) (* (b f) (c g))))
       (y (- (* (a f) (c g)) (* (c f) (a g)))))
  (if (fuzzy= delta 0.0)
      ;; change: removed IF
      (and (fuzzy= x 0.0) (fuzzy= y 0.0))
      (point (/ x delta) (/ y delta)))))

(defmethod intersection-point ((f line) (g ray))
 (let ((p (intersection-point f (extend-to-line g))))
  (cond ((eq p t) t)
	((and p (touch? p g)) p)
	(t nil))))

(defmethod intersection-point ((f line) (g line-segment))
 (let ((p (intersection-point f (extend-to-line g))))
  (cond ((eq p t) t)
	((and p (touch? p g)) p)
	(t nil))))

(defun intersection-point-line-circle-special-case (f g)
 (maybe-check-type f line)
 (maybe-check-type g circle)
 (if (touch? f g)
     (let* ((l (perpendicular-line-through-point f (p g)))
	    (p (intersection-point f l)))
      (values p p))
     (values nil nil)))

(defmethod intersection-point ((f line) (g circle))
 (let ((c (- (c f) (* (a f) (x (p g))) (* (b f) (y (p g))))))
  (if (zerop (a f))
      (let ((delta (- (sqr (size g)) (/ (sqr c) (sqr (b f))))))
       (if (minusp delta)
	   (intersection-point-line-circle-special-case f g)
	   (let* ((x1 (sqrt delta))
		  (x2 (- x1))
		  (yb (/ (c f) (b f))))
	    (values (point (+ x1 (x (p g))) yb)
		    (point (+ x2 (x (p g))) yb)))))
      (multiple-value-bind (y1 y2)
	  (quadratic-formula
	   (+ (sqr (a f)) (sqr (b f)))
	   (* -2.0 (b f) c)
	   (- (sqr c) (* (sqr (a f)) (sqr (size g)))))
       (cond (y1 (let ((y1 (+ y1 (y (p g)))) ;change
		       (y2 (+ y2 (y (p g))))) ;change
		  (values (point (/ (- (c f) (* (b f) y1)) (a f)) y1)
			  (point (/ (- (c f) (* (b f) y2)) (a f)) y2))))
	     (t (intersection-point-line-circle-special-case f g)))))))

(defmethod intersection-point ((f ray) (g line)) (intersection-point g f))

(defmethod intersection-point ((f ray) (g line-segment))
 (let ((p (intersection-point (extend-to-line f) (extend-to-line g))))
  (cond ((eq p t)
	 (if (or (and (touch? (p f) (p g)) (not (touch? (q g) f)))
		 (and (touch? (p f) (q g)) (not (touch? (p g) f))))
	     (p f)
	     (or (touch? (p g) f) (touch? (q g) f))))
	((and p (touch? p f) (touch? p g)) p)
	(t nil))))

(defmethod intersection-point ((f ray) (g circle))
 (multiple-value-bind (p q) (intersection-point (extend-to-line f) g)
  (if p
      (if (touch? p f)
	  (if (touch? q f) (values p q) (values p nil))
	  (if (touch? q f) (values q nil) (values nil nil)))
      (values nil nil))))

(defmethod intersection-point ((f line-segment) (g line))
 (intersection-point g f))

(defmethod intersection-point ((f line-segment) (g ray))
 (intersection-point g f))

(defmethod intersection-point ((f line-segment) (g line-segment))
 (let ((p (intersection-point (extend-to-line f) (extend-to-line g))))
  (cond ((eq p t)
	 (cond ((or (and (touch? (p f) (p g))
			 (not (touch? (q f) g))
			 (not (touch? (q g) f)))
		    (and (touch? (p f) (q g))
			 (not (touch? (q f) g))
			 (not (touch? (p g) f))))
		(p f))
	       ((or (and (touch? (q f) (p g))
			 (not (touch? (p f) g))
			 (not (touch? (q g) f)))
		    (and (touch? (q f) (q g))
			 (not (touch? (p f) g))
			 (not (touch? (p g) f))))
		(q f))
	       (t (or (touch? (p f) g)
		      (touch? (q f) g)
		      (touch? (p g) f)
		      (touch? (q g) f)))))
	((and p (touch? p f) (touch? p g)) p)
	(t nil))))

(defmethod intersection-point ((f line-segment) (g circle))
 (multiple-value-bind (p q) (intersection-point (extend-to-line f) g)
  (if p
      (if (touch? p f)
	  (if (touch? q f) (values p q) (values p nil))
	  (if (touch? q f) (values q nil) (values nil nil)))
      (values nil nil))))

(defmethod intersection-point ((f circle) (g line)) (intersection-point g f))

(defmethod intersection-point ((f circle) (g ray)) (intersection-point g f))

(defmethod intersection-point ((f circle) (g line-segment))
 (intersection-point g f))

(defun intersection-point-circle-circle-special-case (f g)
 (maybe-check-type f circle)
 (maybe-check-type g circle)
 (if (touch? f g)
     (let* ((d (distance (p f) (p g)))
	    (alpha (if (fuzzy>= d (+ (size f) (size g)))
		       (/ (+ (size f) (* 0.5 (- d (+ (size f) (size g))))) d)
		       (if (< (size f) (size g))
			   (- (/ (size f) d))
			   (+ (/ (size f) d) 1.0))))
	    (p (point (+ (x (p f)) (* alpha (- (x (p g)) (x (p f)))))
		      (+ (y (p f)) (* alpha (- (y (p g)) (y (p f))))))))
      (values p p))
     (values nil nil)))

(defmethod intersection-point ((f circle) (g circle))
 (let* ((dx (- (x (p g)) (x (p f))))
	(dy (- (y (p g)) (y (p f))))
	(d2 (+ (sqr dx) (sqr dy))))
  (cond
    ((zerop d2) (if (fuzzy= (size f) (size g)) (values t t) (values nil nil)))
    ((> d2 (sqr (+ (size f) (size g))))
     (intersection-point-circle-circle-special-case f g))
    (t (let* ((d1 (sqrt d2))
	      ;; change: 2 -> 2.0
	      (px (/ (- (+ d2 (sqr (size f))) (sqr (size g))) (* 2.0 d1)))
	      (temp (- (sqr (size f)) (sqr px))))
	(if (minusp temp)
	    (intersection-point-circle-circle-special-case f g)
	    (let ((py (sqrt temp))
		  (ix (/ (- (x (p g)) (x (p f))) d1))
		  (iy (/ (- (y (p g)) (y (p f))) d1)))
	     (values (point (+ (x (p f)) (- (* px ix) (* py iy)))
			    (+ (y (p f)) (* px iy) (* py ix)))
		     (point (+ (x (p f)) (* px ix) (* py iy))
			    (+ (y (p f)) (- (* px iy) (* py ix))))))))))))

;;; note: TOUCH? returns T even if the figures don't actually touch but are
;;;       close to touching

;;; touch?       | point | line | ray | line-segment | circle
;;;----------------------------------------------------------
;;; point        |   Y   |   Y  |  Y  |      Y       |   Y
;;; line         |   C   |      |     |      Y       |   Y
;;; ray          |   C   |      |     |              |
;;; line segment |   C   |   C  |     |      Y       |   Y
;;; circle       |   C   |   C  |     |      C       |   Y

(defmethod touch? ((p point) (q point))
 ;; note: uses Manhattan metric rather than Euclidean metric
 (and (fuzzy= (x p) (x q)) (fuzzy= (y p) (y q))))

(defmethod touch? ((p point) (f line))
 (fuzzy= (+ (* (a f) (x p)) (* (b f) (y p))) (c f)))

(defmethod touch? ((p point) (f ray))
 (and (touch? p (extend-to-line f))
      (or (touch? p (p f)) (fuzzy= (rotation f) (rotation2 (p f) p)))))

(defmethod touch? ((p point) (f line-segment))
 (and (touch? p (extend-to-line f))
      (fuzzy-point-between-points-inclusive? (p f) p (q f))))

(defmethod touch? ((p point) (f circle)) (fuzzy= (distance p (p f)) (size f)))

(defmethod touch? ((f line) (p point)) (touch? p f))

(defmethod touch? ((f line) (g line-segment))
 (or (touch? (p g) f) (touch? (q g) f)))

(defmethod touch? ((f line) (g circle))
 (fuzzy= (distance (closest-point-on-line-to-point (p g) f) (p g)) (size g)))

(defmethod touch? ((f ray) (p point)) (touch? p f))

(defmethod touch? ((f line-segment) (p point)) (touch? p f))

(defmethod touch? ((f line-segment) (g line)) (touch? g f))

(defmethod touch? ((f line-segment) (g line-segment))
 (or (touch? (p f) g) (touch? (q f) g) (touch? (p g) f) (touch? (q g) f)))

(defmethod touch? ((f line-segment) (g circle))
 (or (touch? (p f) g)
     (touch? (q f) g)
     (let ((p (closest-point-on-line-to-point (p g) (extend-to-line f))))
      (and (fuzzy= (distance p (p g)) (size g)) (touch? p f)))))

(defmethod touch? ((f circle) (p point)) (touch? p f))

(defmethod touch? ((f circle) (g line)) (touch? g f))

(defmethod touch? ((f circle) (g line-segment)) (touch? g f))

(defmethod touch? ((f circle) (g circle))
 (let ((d (distance (p f) (p g))))
  (or (fuzzy= d (+ (size f) (size g)))
      (fuzzy= d (abs (- (size f) (size g)))))))

(defun same-side-of-line? (p q f q-on-f?)
 ;; note: returns NIL if P lies on F
 (let ((qv (- (+ (* (a f) (x q)) (* (b f) (y q))) (c f))))
  (cond ((fuzzy= qv 0.0)
	 (if (eq q-on-f? 'error) (error "This shouldn't happen"))
	 q-on-f?)
	(t (let ((pv (- (+ (* (a f) (x p)) (* (b f) (y p))) (c f))))
	    ;; change: EQU
	    (and (fuzzy/= pv 0.0) (equ (> pv 0.0) (> qv 0.0))))))))

(defun translation-barrier (d f g q rotation f-on-barrier?)
 ;; D is the potential translation limit
 ;; F is the foreground
 ;; G is the background
 ;; Q is the point of contact between F and G
 ;; ROTATION is the translation axis
 ;; F-ON-BARRIER? tells what to do when F lies on the barrier line:
 ;;               T not block, NIL block, ERROR signal error
 (if (or (fuzzy/= d 0.0)
	 (eq q t)
	 (not (same-side-of-line?
	       (point (+ (x q) (cos rotation)) (+ (y q) (sin rotation)))
	       (etypecase f (line-segment (q f)) (circle (p f)))
	       (etypecase g
		 (line g)
		 (line-segment (extend-to-line g))
		 (circle (line-tangent-to-circle-at-point g q)))
	       f-on-barrier?)))
     d))

(defun rotation-barrier (rotation f g q p direction p-touches-q? f-on-barrier?)
 ;; ROTATION is the potential rotation limit
 ;; F is the foreground
 ;; G is the background
 ;; Q is the point of contact between F and G
 ;; P is the pivot point
 ;; DIRECTION is CLOCKWISE or COUNTERCLOCKWISE
 ;; P-TOUCHES-Q? tells what to do when P touches Q: T block, NIL not to block
 ;; F-ON-BARRIER? tells what to do when F lies on the barrier line:
 ;;               T not block, NIL block, ERROR signal error
 (if (or (fuzzy/=rotation rotation 0.0)
	 (eq q t)
	 (if (touch? p q)
	     p-touches-q?
	     (let ((rotation (+ (rotation2 p q)
				(ecase direction
				  (clockwise minus-half-pi)
				  (counterclockwise half-pi)))))
	      (not (same-side-of-line?
		    (point (+ (x q) (cos rotation)) (+ (y q) (sin rotation)))
		    (etypecase f
		      (line-segment (q f))
		      (circle (p f)))
		    (etypecase g
		      (line g)
		      (line-segment (extend-to-line g))
		      (circle (line-tangent-to-circle-at-point g q)))
		    f-on-barrier?)))))
     rotation))

(defmethod opposite ((direction (eql 'clockwise))) 'counterclockwise)

(defmethod opposite ((direction (eql 'counterclockwise))) 'clockwise)

(defmethod opposite ((direction null)) 'nil)

(defmethod opposite ((direction number)) (- direction))

(defmethod translate ((p point) d rotation)
 (point (+ (x p) (* d (cos rotation))) (+ (y p) (* d (sin rotation)))))

(defmethod translate ((p ray) d rotation)
 (ray (translate (p p) d rotation) rotation))

(defmethod translate ((f line-segment) d rotation)
 (line-segment (translate (p f) d rotation) (translate (q f) d rotation)))

(defmethod translate ((f circle) d rotation)
 (circle (translate (p f) d rotation) (size f)))

(defun translation-limit-line-segment-line (f g rotation)
 (maybe-check-type f line-segment)
 (maybe-check-type g line)
 (let* ((r (ray (p f) rotation))
	(p1 (intersection-point r g)))
  (if (and p1 (not (eq p1 t)))
      (translation-barrier (distance (p f) p1) f g p1 rotation nil))))

(defun translation-limit-line-segment-line-segment (f g rotation)
 (maybe-check-type f line-segment)
 (maybe-check-type g line-segment)
 (let* ((r (ray (p f) rotation))
	(p1 (intersection-point r g)))
  (if (and p1
	   (not (eq p1 t))
	   (or (not (touch? p1 (p g)))
	       (same-side-of-line? (q f) (q g) (extend-to-line r) nil))
	   (or (not (touch? p1 (q g)))
	       (same-side-of-line? (q f) (p g) (extend-to-line r) nil)))
      (translation-barrier (distance (p f) p1) f g p1 rotation nil))))

(defun translation-limit-circle-line-tangent (f g rotation)
 (maybe-check-type f circle)
 (maybe-check-type g line)
 (multiple-value-bind (g1 g2) (parallel-lines-at-distance g (size f))
  (let* ((r (ray (p f) rotation))
	 (p1 (intersection-point r g1))
	 (p2 (intersection-point r g2))
	 (q (intersection-point f g)))
   (tightest-translation-limit
    (if (and p1 (not (eq p1 t)))
	(translation-barrier (distance (p f) p1) f g q rotation 'error))
    (if (and p2 (not (eq p2 t)))
	(translation-barrier (distance (p f) p2) f g q rotation 'error))))))

(defun translation-limit-circle-line-segment-tangent (f g rotation)
 (maybe-check-type f circle)
 (maybe-check-type g line-segment)
 (let* ((g1 (translate g (size f) (rotation+ (rotation g) half-pi)))
	(g2 (translate g (size f) (rotation- (rotation g) half-pi)))
	(r (ray (p f) rotation))
	(p1 (intersection-point r g1))
	(p2 (intersection-point r g2))
	(q (intersection-point f g)))
  (tightest-translation-limit
   (if (and p1 (not (eq p1 t)))
       (translation-barrier (distance (p f) p1) f g q rotation 'error))
   (if (and p2 (not (eq p2 t)))
       (translation-barrier (distance (p f) p2) f g q rotation 'error)))))

(defun translation-limit-line-segment-circle-endpoint (f g rotation)
 (maybe-check-type f line-segment)
 (maybe-check-type g circle)
 (let ((r (ray (p f) rotation)))
  (if (or (not (touch? (extend-to-line r) g))
	  (same-side-of-line? (p g) (q f) (extend-to-line r) nil))
      (multiple-value-bind (p1 p2) (intersection-point r g)
       (tightest-translation-limit
	(if p1 (translation-barrier (distance (p f) p1) f g p1 rotation t))
	(if p2
	    (translation-barrier (distance (p f) p2) f g p2 rotation t)))))))

(defun translation-limit-circle-circle-outside (f g rotation)
 (maybe-check-type f circle)
 (maybe-check-type g circle)
 (let ((r (ray (p f) rotation))
       (g1 (circle (p g) (+ (size f) (size g)))))
  (unless (touch? (extend-to-line r) g1)
   (let ((q (intersection-point f g)))
    (multiple-value-bind (p1 p2) (intersection-point r g1)
     (tightest-translation-limit
      (if p1 (translation-barrier (distance (p f) p1) f g q rotation 'error))
      (if p2
	  (translation-barrier
	   (distance (p f) p2) f g q rotation 'error))))))))

(defun translation-limit-circle-circle-inside (f g rotation)
 (maybe-check-type f circle)
 (maybe-check-type g circle)
 (let* ((r (ray (p f) rotation))
	(g1 (circle (p g) (- (size g) (size f))))
	(p1 (intersection-point r g1)))
  (if p1
      (translation-barrier
       (distance (p f) p1) f g (intersection-point f g) rotation 'error))))

;;; translation-limit | point | line | ray | line-segment | circle
;;;---------------------------------------------------------------
;;; point             |       |      |     |              |
;;; line              |       |      |     |              |
;;; ray               |       |      |     |              |
;;; line segment      |       |   Y  |     |      Y       |   Y
;;; circle            |       |   Y  |     |      Y       |   Y

(defmethod translation-limit ((f line-segment) (g line) rotation)
 (tightest-translation-limit
  (translation-limit-line-segment-line f g rotation)
  (translation-limit-line-segment-line (line-segment (q f) (p f)) g rotation)))

(defmethod translation-limit ((f line-segment) (g line-segment) rotation)
 (tightest-translation-limit
  (translation-limit-line-segment-line-segment f g rotation)
  (translation-limit-line-segment-line-segment
   (line-segment (q f) (p f)) g rotation)
  (translation-limit-line-segment-line-segment g f (rotation+ rotation pi))
  (translation-limit-line-segment-line-segment
   (line-segment (q g) (p g)) f (rotation+ rotation pi))))

(defmethod translation-limit ((f line-segment) (g circle) rotation)
 (tightest-translation-limit
  (translation-limit-circle-line-segment-tangent g f (rotation+ rotation pi))
  (translation-limit-line-segment-circle-endpoint f g rotation)
  (translation-limit-line-segment-circle-endpoint
   (line-segment (q f) (p f)) g rotation)))

(defmethod translation-limit ((f circle) (g line) rotation)
 (translation-limit-circle-line-tangent f g rotation))

(defmethod translation-limit ((f circle) (g line-segment) rotation)
 (tightest-translation-limit
  (translation-limit-circle-line-segment-tangent f g rotation)
  (translation-limit-line-segment-circle-endpoint g f (rotation+ rotation pi))
  (translation-limit-line-segment-circle-endpoint
   (line-segment (q g) (p g)) f (rotation+ rotation pi))))

(defmethod translation-limit ((f circle) (g circle) rotation)
 (if (fuzzy>= (distance (p f) (p g)) (+ (size f) (size g)))
     (translation-limit-circle-circle-outside f g rotation)
     (if (< (size f) (size g))
	 (translation-limit-circle-circle-inside f g rotation)
	 (translation-limit-circle-circle-inside
	  g f (rotation+ rotation pi)))))

(defun rotation-limit-line-segment-line (f g p direction)
 (maybe-check-type f line-segment)
 (maybe-check-type g line)
 (maybe-check-type p point)
 (unless (touch? p (p f))
  (let ((c (circle p (distance p (p f)))))
   (if (or (not (touch? c g))
	   (fuzzy>= (abs (rotation- (rotation f) (rotation2 (p f) p)))
		    half-pi))
       (multiple-value-bind (p1 p2) (intersection-point c g)
	(tightest-rotation-limit
	 direction
	 (if p1
	     (rotation-barrier
	      (rotation- (rotation2 p p1) (rotation2 p (p f))) f g p1 p
	      direction nil nil))
	 (if p2
	     (rotation-barrier
	      (rotation- (rotation2 p p2) (rotation2 p (p f))) f g p2 p
	      direction nil nil))))))))

(defun rotation-limit-line-segment-line-segment (f g p direction)
 (maybe-check-type f line-segment)
 (maybe-check-type g line-segment)
 (maybe-check-type p point)
 (unless (touch? p (p f))
  (let ((c (circle p (distance p (p f)))))
   (if (or (not (touch? c (extend-to-line g)))
	   (fuzzy>= (abs (rotation- (rotation f) (rotation2 (p f) p)))
		    half-pi))
       (multiple-value-bind (p1 p2) (intersection-point c g)
	(tightest-rotation-limit
	 direction
	 (if (and p1
		  (or (not (touch? p1 (p g)))
		      ;; change: EQU
		      (equ (fuzzy>= (abs (rotation- (rotation f)
						    (rotation2 (p f) p)))
				    half-pi)
			   (fuzzy>= (abs (rotation- (rotation g)
						    (rotation2 (p g) p)))
				    half-pi)))
		  (or (not (touch? p1 (q g)))
		      ;; change: EQU
		      (equ (fuzzy>= (abs (rotation- (rotation f)
						    (rotation2 (p f) p)))
				    half-pi)
			   (fuzzy>= (abs (rotation- (rotation2 (q g) (p g))
						    (rotation2 (q g) p)))
				    half-pi))))
	     (rotation-barrier (rotation- (rotation2 p p1) (rotation2 p (p f)))
			       f g p1 p direction nil nil))
	 (if (and p2
		  (or (not (touch? p2 (p g)))
		      ;; change: EQU
		      (equ (fuzzy>= (abs (rotation- (rotation f)
						    (rotation2 (p f) p)))
				    half-pi)
			   (fuzzy>= (abs (rotation- (rotation g)
						    (rotation2 (p g) p)))
				    half-pi)))
		  (or (not (touch? p2 (q g)))
		      ;; change: EQU
		      (equ (fuzzy>= (abs (rotation- (rotation f)
						    (rotation2 (p f) p)))
				    half-pi)
			   (fuzzy>= (abs (rotation- (rotation2 (q g) (p g))
						    (rotation2 (q g) p)))
				    half-pi))))
	     (rotation-barrier (rotation- (rotation2 p p2) (rotation2 p (p f)))
			       f g p2 p direction nil nil))))))))

(defun rotation-limit-circle-line-tangent (f g p direction)
 (maybe-check-type f circle)
 (maybe-check-type g line)
 (maybe-check-type p point)
 (unless (touch? p (p f))
  (multiple-value-bind (g1 g2) (parallel-lines-at-distance g (size f))
   (let ((c (circle p (distance p (p f))))
	 (q (intersection-point f g)))
    (tightest-rotation-limit
     direction
     (if (or (not (touch? c g1)) (same-side-of-line? (p g) p g1 nil))
	 (multiple-value-bind (p1 p2) (intersection-point c g1)
	  (tightest-rotation-limit
	   direction
	   (if p1
	       (rotation-barrier
		(rotation- (rotation2 p p1) (rotation2 p (p f))) f g q p
		direction t 'error))
	   (if p2
	       (rotation-barrier
		(rotation- (rotation2 p p2) (rotation2 p (p f))) f g q p
		direction t 'error)))))
     (if (or (not (touch? c g2)) (same-side-of-line? (p g) p g2 nil))
	 (multiple-value-bind (q1 q2) (intersection-point c g2)
	  (tightest-rotation-limit
	   direction
	   (if q1
	       (rotation-barrier
		(rotation- (rotation2 p q1) (rotation2 p (p f))) f g q p
		direction t 'error))
	   (if q2
	       (rotation-barrier
		(rotation- (rotation2 p q2) (rotation2 p (p f))) f g q p
		direction t 'error))))))))))

(defun rotation-limit-circle-line-segment-tangent (f g p direction)
 (maybe-check-type f circle)
 (maybe-check-type g line-segment)
 (maybe-check-type p point)
 (unless (touch? p (p f))
  (let ((g1 (translate g (size f) (rotation- (rotation g) half-pi)))
	(g2 (translate g (size f) (rotation+ (rotation g) half-pi)))
	(c (circle p (distance p (p f))))
	(q (intersection-point f g)))
   (tightest-rotation-limit
    direction
    (if (or (not (touch? c (extend-to-line g1)))
	    (same-side-of-line? (p g) p (extend-to-line g1) nil))
	(multiple-value-bind (p1 p2) (intersection-point c g1)
	 (tightest-rotation-limit
	  direction
	  (if p1
	      (rotation-barrier
	       (rotation- (rotation2 p p1) (rotation2 p (p f))) f g q p
	       direction t 'error))
	  (if p2
	      (rotation-barrier
	       (rotation- (rotation2 p p2) (rotation2 p (p f))) f g q p
	       direction t 'error)))))
    (if (or (not (touch? c (extend-to-line g2)))
	    (same-side-of-line? (p g) p (extend-to-line g2) nil))
	(multiple-value-bind (q1 q2) (intersection-point c g2)
	 (tightest-rotation-limit
	  direction
	  (if q1
	      (rotation-barrier
	       (rotation- (rotation2 p q1) (rotation2 p (p f))) f g q p
	       direction t 'error))
	  (if q2
	      (rotation-barrier
	       (rotation- (rotation2 p q2) (rotation2 p (p f))) f g q p
	       direction t 'error)))))))))

(defun rotation-limit-line-segment-circle-endpoint (f g p direction)
 (maybe-check-type f line-segment)
 (maybe-check-type g circle)
 (maybe-check-type p point)
 (unless (touch? p (p f))
  (let ((c (circle p (distance p (p f)))))
   (multiple-value-bind (p1 p2) (intersection-point c g)
    (if (or (not (touch? c g))
	    (and (not (eq p1 t))
		 ;; change: EQU
		 (equ (or (> (distance (p g) p) (+ (size c) (size g)))
			  (> (size c) (size g)))
		      (same-side-of-line?
		       (p g) (q f)
		       (line-tangent-to-circle-at-point g p1) nil))))
	(tightest-rotation-limit
	 direction
	 (if (and p1 (not (eq p1 t)))
	     (rotation-barrier (rotation- (rotation2 p p1) (rotation2 p (p f)))
			       f g p1 p direction nil t))
	 (if (and p2 (not (eq p2 t)))
	     (rotation-barrier (rotation- (rotation2 p p2) (rotation2 p (p f)))
			       f g p2 p direction nil t))))))))

(defun rotation-limit-circle-circle-outside (f g p direction)
 (maybe-check-type f circle)
 (maybe-check-type g circle)
 (maybe-check-type p point)
 (unless (touch? p (p f))
  (let ((g1 (circle (p g) (+ (size f) (size g))))
	(c (circle p (distance p (p f)))))
   (if (or (not (touch? c g1))
	   (and (< (size c) (size g1)) (< (distance (p g) p) (size g1))))
       (let ((q (intersection-point f g)))
	(multiple-value-bind (p1 p2) (intersection-point c g1)
	 (tightest-rotation-limit
	  direction
	  (if (and p1 (not (eq p1 t)))
	      (rotation-barrier
	       (rotation- (rotation2 p p1) (rotation2 p (p f))) f g q p
	       direction t 'error))
	  (if (and p2 (not (eq p2 t)))
	      (rotation-barrier
	       (rotation- (rotation2 p p2) (rotation2 p (p f)))	f g q p
	       direction t 'error)))))))))

(defun rotation-limit-circle-circle-inside (f g p direction)
 (maybe-check-type f circle)
 (maybe-check-type g circle)
 (maybe-check-type p point)
 (unless (touch? p (p f))
  (let ((g1 (circle (p g) (- (size g) (size f))))
	(c (circle p (distance p (p f)))))
   (if (or (not (touch? c g1))
	   (> (size c) (size g1))
	   (> (distance (p g) p) (size g1)))
       (let ((q (intersection-point f g)))
	(multiple-value-bind (p1 p2) (intersection-point c g1)
	 (tightest-rotation-limit
	  direction
	  (if (and p1 (not (eq p1 t)))
	      (rotation-barrier
	       (rotation- (rotation2 p p1) (rotation2 p (p f))) f g q p
	       direction t 'error))
	  (if (and p2 (not (eq p2 t)))
	      (rotation-barrier
	       (rotation- (rotation2 p p2) (rotation2 p (p f)))	f g q p
	       direction t 'error)))))))))

;;; rotation-limit | point | line | ray | line-segment | circle
;;;--------------------------------------------------------------
;;; point          |       |      |     |              |
;;; line           |       |      |     |              |
;;; ray            |       |      |     |              |
;;; line segment   |       |   Y  |     |      Y       |   Y
;;; circle         |       |   Y  |     |      Y       |   Y

(defmethod rotation-limit ((f line-segment) (g line) p direction)
 (maybe-check-type p point)
 (tightest-rotation-limit
  direction
  (rotation-limit-line-segment-line f g p direction)
  (rotation-limit-line-segment-line (line-segment (q f) (p f)) g p direction)))

(defmethod rotation-limit ((f line-segment) (g line-segment) p direction)
 (maybe-check-type p point)
 (tightest-rotation-limit
  direction
  (rotation-limit-line-segment-line-segment f g p direction)
  (rotation-limit-line-segment-line-segment
   (line-segment (q f) (p f)) g p direction)
  (opposite
   (rotation-limit-line-segment-line-segment g f p (opposite direction)))
  (opposite (rotation-limit-line-segment-line-segment
	     (line-segment (q g) (p g)) f p (opposite direction)))))

(defmethod rotation-limit ((f line-segment) (g circle) p direction)
 (maybe-check-type p point)
 (tightest-rotation-limit
  direction
  (opposite
   (rotation-limit-circle-line-segment-tangent g f p (opposite direction)))
  (rotation-limit-line-segment-circle-endpoint f g p direction)
  (rotation-limit-line-segment-circle-endpoint
   (line-segment (q f) (p f)) g p direction)))

(defmethod rotation-limit ((f circle) (g line) p direction)
 (maybe-check-type p point)
 (rotation-limit-circle-line-tangent f g p direction))

(defmethod rotation-limit ((f circle) (g line-segment) p direction)
 (maybe-check-type p point)
 (tightest-rotation-limit
  direction
  (rotation-limit-circle-line-segment-tangent f g p direction)
  (opposite
   (rotation-limit-line-segment-circle-endpoint g f p (opposite direction)))
  (opposite (rotation-limit-line-segment-circle-endpoint
	     (line-segment (q g) (p g)) f p (opposite direction)))))

(defmethod rotation-limit ((f circle) (g circle) p direction)
 (maybe-check-type p point)
 (if (fuzzy>= (distance (p f) (p g)) (+ (size f) (size g)))
     (rotation-limit-circle-circle-outside f g p direction)
     (if (< (size f) (size g))
	 (rotation-limit-circle-circle-inside f g p direction)
	 (opposite (rotation-limit-circle-circle-inside
		    g f p (opposite direction))))))

;;; Tam V'Nishlam Shevah L'El Borei Olam
