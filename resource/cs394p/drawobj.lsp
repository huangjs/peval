; drawobj.lsp             Gordon S. Novak Jr.               24 Mar 05

; This file demonstrates the use generic procedures for graphics

; These functions *must* use Xgcl Lisp:  /p/bin/xgcl
; (load "/projects/cs394p/dwimports.lsp")
; (load "/projects/cs394p/dwsyms.lsp")    ; init for exported symbols

; Documentation of the graphics functions is in /projects/cs394p/dwdoc.dvi

(defvar *drawing-window* nil)

; Make a window to play in.
(defun drawing-window ()
  (or *drawing-window*
      (setq *drawing-window* (window-create 300 300 "drawing window")) ) )

; reset the drawing window state
(defun reset () (window-reset (drawing-window)))
; clear the drawing window
(defun clear () (window-clear (drawing-window)))

(defclass drawable-object ()
  ((posx   :initarg :posx   :initform 0)
   (posy   :initarg :posy   :initform 0)) )

(defclass circle (drawable-object)
  ((radius :initarg :radius :initform 0)) )

(defclass square (drawable-object)
  ((side   :initarg :side   :initform 0)) )

(defclass rectangle (drawable-object)
  ((width  :initarg :width  :initform 0)
   (height :initarg :height :initform 0)) )

(defmethod draw ((self circle))
  (window-draw-circle-xy (drawing-window)
			 (slot-value self 'posx)
			 (slot-value self 'posy)
			 (slot-value self 'radius))
  (window-force-output (drawing-window)))

(defmethod draw ((self square))
  (window-draw-box-xy (drawing-window)
		      (slot-value self 'posx)
		      (slot-value self 'posy)
		      (slot-value self 'side)
		      (slot-value self 'side))
  (window-force-output (drawing-window)))

(defmethod draw ((self rectangle))
  (window-draw-box-xy (drawing-window)
		      (slot-value self 'posx)
		      (slot-value self 'posy)
		      (slot-value self 'width)
		      (slot-value self 'height))
  (window-force-output (drawing-window)))

(defmethod posx ((self drawable-object)) (slot-value self 'posx))
(defmethod posy ((self drawable-object)) (slot-value self 'posy))
(defmethod set-posx ((self drawable-object) (new integer))
  (setf (slot-value self 'posx) new) )
(defmethod set-posy ((self drawable-object) (new integer))
  (setf (slot-value self 'posy) new) )

(defmethod erase   ((self drawable-object))
  (window-set-erase (drawing-window))
  (sendm self 'draw)
  (window-unset (drawing-window)) )

(defmethod move-by   ((self drawable-object) (dx integer) (dy integer))
  (sendm self 'erase)
  (sendm self 'change-pos dx dy)
  (sendm self 'draw) )

(defmethod move-to   ((self drawable-object) (x integer) (y integer))
  (sendm self 'erase)
  (sendm self 'set-pos x y)
  (sendm self 'draw) )

(defmethod set-pos   ((self drawable-object) (x integer) (y integer))
  (sendm self 'set-posx x)
  (sendm self 'set-posy y))

(defmethod change-pos   ((self drawable-object) (dx integer) (dy integer))
  (sendm self 'set-posx (+ (sendm self 'posx) dx))
  (sendm self 'set-posy (+ (sendm self 'posy) dy)) )

(defmethod slide
    ((self drawable-object) (dx integer) (dy integer) (n integer))
  (dotimes (i n) (sendm self 'move-by dx dy)) )

; (setq mysq   (make-instance 'square :side 6))
; (setq mycir  (make-instance 'circle :radius 10))
; (setq myrect (make-instance 'rectangle :width 20 :height 10))
; (sendm mysq 'set-pos 20 20)
; (sendm mysq 'draw)
; (sendm mysq 'move-to 40 40)
; (sendm mysq 'slide 4 4 50)
