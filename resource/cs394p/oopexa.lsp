; oopexa.lsp      Example of Object-oriented Programming      24 Feb 93
; Gordon Novak         Univ. of Texas at Austin


(defclass vector () ())

(defmethod + ((u vector) (v vector))
  (let (newv)
    (setq newv (make-instance (class-of u)))
    (sendm newv 'set-xy (+ (sendm u 'x) (sendm v 'x))
	                (+ (sendm u 'y) (sendm v 'y))) ))

(defclass xyvector (vector)
	  ((x :type number :initarg :x :initform 0)
	   (y :type number :initarg :y :initform 0)))

(defclass sivector (vector)
	  ((s :type string :initarg :s :initform "")
	   (i :type number :initarg :i :initform 0)))

(defclass xyzvector (vector)
	  ((x :type number :initarg :x :initform 0)
	   (y :type number :initarg :y :initform 0)
	   (z :type number :initarg :z :initform 0)))

(defclass vectorvector (vector)
	  ((u :type vector :initarg :u)
	   (v :type vector :initarg :v)))

(defmethod x     ((v xyvector))     (slot-value v 'x))
(defmethod set-x ((v xyvector) val) (setf (slot-value v 'x) val))
(defmethod y     ((v xyvector))     (slot-value v 'y))
(defmethod set-y ((v xyvector) val) (setf (slot-value v 'y) val))
(defmethod set-xy ((v xyvector) xval yval)
  (setf (slot-value v 'x) xval)
  (setf (slot-value v 'y) yval)
  v)
(defmethod x     ((v xyzvector))     (slot-value v 'x))
(defmethod y     ((v xyzvector))     (slot-value v 'y))
(defmethod z     ((v xyzvector))     (slot-value v 'z))
(defmethod s     ((v sivector))      (slot-value v 's))
(defmethod i     ((v sivector))      (slot-value v 'i))
(defmethod u     ((v vectorvector))  (slot-value v 'u))
(defmethod v     ((v vectorvector))  (slot-value v 'v))

(defclass rthvector (vector)
	  ((r     :type number :initarg :r     :initform 0)
	   (theta :type number :initarg :theta :initform 0)))

(defmethod x  ((self rthvector)) 
  (* (cos (slot-value self 'theta))
     (slot-value self 'r)) )

(defmethod y  ((self rthvector)) 
  (* (sin (slot-value self 'theta))
     (slot-value self 'r)) )

(defmethod set-xy ((self rthvector) x y)
  (setf (slot-value self 'r) (sqrt (+ (* x x) (* y y))))
  (setf (slot-value self 'theta) (atan y x))
  self)

(defmethod set-x  ((self rthvector) x)
  (sendm self 'set-xy x (sendm self 'y)) )

(defmethod set-y  ((self rthvector) y)
  (sendm self 'set-xy (sendm self 'x) y) )

(dolist (type '(integer real fixnum string long-float short-float))
  (setf (get type 'classp) t))

(defmethod + ((i integer) (j integer)) (+ i j))
(defmethod + ((i fixnum) (j fixnum)) (+ i j))
(defmethod + ((r real) (s real)) (+ r s))
(defmethod + ((r long-float) (s long-float)) (+ r s))
(defmethod + ((r short-float) (s short-float)) (+ r s))
(defmethod + ((s string) (ss string))
  (concatenate 'string s ss))
