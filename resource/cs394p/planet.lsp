;  planet.lsp       G. Novak     20 July 88

; This file demonstrates how a generic procedure for computing density
; can work for a variety of different kinds of objects.

(defclass physical-object () ())

(defclass sphere () ())

(defclass planet (physical-object sphere)
  ((mass   :initarg :mass   :initform 0)
   (radius :initarg :radius :initform 0)) )

(defclass ordinary-object (physical-object) ())

(defclass parallelepiped () ())

(defclass brick (ordinary-object parallelepiped)
  ((weight :initarg :weight :initform 0)
   (length :initarg :length :initform 0)
   (width  :initarg :width  :initform 0)
   (height :initarg :height :initform 0)) )

(defclass bowling-ball (ordinary-object sphere)
  ((kind  :initarg :kind :initform 'adult)) )

(defmethod radius ((self planet)) (slot-value self 'radius))
(defmethod mass   ((self planet)) (slot-value self 'mass))

(defmethod length ((self brick))  (slot-value self 'length))
(defmethod width  ((self brick))  (slot-value self 'width))
(defmethod height ((self brick))  (slot-value self 'height))
(defmethod weight ((self brick))  (slot-value self 'weight))

(defmethod kind   ((self bowling-ball)) (slot-value self 'kind))
(defmethod radius ((self bowling-ball)) 0.1)

(defmethod density ((self physical-object))
  (/ (sendm self 'mass) (sendm self 'volume)) )

(defmethod volume ((self sphere))
  (* (/ 4.0 3.0) pi (expt (sendm self 'radius) 3)) )

(defmethod volume ((self parallelepiped))
  (* (sendm self 'length)
     (sendm self 'width)
     (sendm self 'height)))

(defmethod weight ((self bowling-ball))
  (if (eq (sendm self 'kind) 'adult) 80.0 40.0) )

(defmethod mass   ((self ordinary-object))
  (/ (sendm self 'weight) 9.88) )

(setq earth (make-instance 'planet :mass 5.98E24 :radius 6.37E6))

(setq brk   (make-instance 'brick :weight 20.0 :length 0.2
			          :width 0.1 :height 0.05))

(setq bb    (make-instance 'bowling-ball))

; Now try (sendm earth 'density), (sendm brk 'density), (sendm bb 'density).
; Note that the same method for computing density works for all three
; objects, even though they are quite different.
