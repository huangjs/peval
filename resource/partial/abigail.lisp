;;; -*- Mode: LISP; Package: (ABIGAIL :USE CL :COLON-MODE :EXTERNAL); Base: 10; Syntax: Ansi-common-lisp -*-

;;; LaHaShem HaAretz U'Mloah

#||#(in-package :cl-user)

(screamer:define-screamer-package :abigail (:use :ape :clim :iterate)
 (:shadowing-import-from
  :clim
  :force-output :peek-char :listen :close :write-string :read-line :read-char
  :write-byte :input-stream-p :stream-element-type :terpri :output-stream-p
  :write-char :read-byte :format :clear-output :clear-input :fresh-line
  :unread-char :streamp :finish-output :read-char-no-hang :boolean
  ;; needs work: a kludge for now due to Lucid 4.1 package screw ups
  :real)
 (:shadowing-import-from :ape :point :line))

(in-package :abigail)

;;; ABIGAIL
;;; Artificial Baby Incorporating Graphics and Automatic Inference of Language
;;; Incorporating ``The Very Last Whole Earth Catalog'' event perception theory

;;; A brief description of the ``TVLWEC'' theory
;;; Perceptual Primitives: (note: no cause, let, orient, go-ext, via)
;;;   exists(x)
;;;   prominent(x)
;;;   supported(x)
;;;   supports(x,y)
;;;   contacts(x,y)
;;;   attached(x,y)
;;;   at(x,y)
;;;   moving-part(x)
;;;   rotating(x)
;;;   rotating-clockwise(x)
;;;   rotating-counterclockwise(x)
;;;   translating(x)
;;;   translating-up(x)
;;;   translating-down(x)
;;;   translating-towards(x,y)
;;;   translating-away-from(x,y)
;;;   flipping(x)
;;;   sliding-against(x,y)
;;;   equal(x,y)
;;;   part(x,y)
;;;   disjoint(x,y)
;;; Need some representation of causation and permission.
;;; Emphasize the distinction between touch, overlap, intersect and contact

;;; Gestures
;;; Select   L
;;; Describe M
;;; Menu     R
;;; Delete   sh-M
;;; Edit     m-L

;;; Current TTMTTD
;;;  1. clusters
;;;  2. speed up ideas
;;;     declare types of floating point variables
;;;     consing of temporaries -> multiple values
;;;     remove dispatching when calling method from method
;;;     common subsexpression removal
;;;     domain redundant expressions
;;;  3. merge INTERSECT-CIRCLES and INTERSECTION-POINT
;;;  4. quasi strange TCLT2 and TLCT1
;;;  5. clicking :DESCRIBE on output of Show Perceptual Data
;;;  6. code from Symbolics version which has been removed:
;;;     PURGE FREE-AND-CLEAR STOPS GROUND-PLANE BARRIER
;;;  7. standard way of toggling options
;;;  8. terminology: ROTATION -> THETA, DISPLACEMENT -> DELTA

;;; Graphics TTMTTD
;;;  1. remove trig and floating point from animation
;;;  2. *TASK-QUEUE*, *ALTERNATE-TASK-QUEUE* and *TASK-QUEUE-POINTER* should
;;;     be special instance variables of the Abigail program
;;;  3. methods for creating and destroying entities
;;;  4. there is no longer a part/whole-hierarchy
;;;     there is no longer parts-excluded
;;;     LEFT-HAND, RIGHT-HAND, LEFT-FOOT and RIGHT-FOOT return points instead
;;;     of entities so MOVE-LIMB must be instead of the general entity routines
;;;  5. now only points can be containers, entities (and thus boxes) can no
;;;     longer be containers
;;;  6. use BITBLT on cached images instead of DRAW-CIRCLE*

;;; Abigail TTMTTD
;;;  1. Should display current mind pathname.
;;;  2. more lines in interactor

;;; Bugs in TVLWEC
;;;  1. Imagination doesn't support cycles. This is needed in at least in the
;;;     following cases:
;;;     a. Mary's dress
;;;     b. Where there are multiple coincident joints like shoulder and groin,
;;;        especially when the joints rotate so the initial intransitive graph
;;;        has joints which get demoted and then since joints can never get
;;;        promoted, new redundant joints get added creating cycles.
;;;     c. When limb segments become coincident. This happens in frame #7 where
;;;        John's left and right thigh become concident causing a joint to be
;;;        hypothesized between his left and right knees which causes a cycle
;;;        during imagination to find the minimal consistent hypothesis set.
;;;  2. Never detect a joint that overlaps but doesn't touch, only can demote
;;;     to one. This can cause problems if a person picks up a ball with her
;;;     hand not touching the perimeter of the ball or one of its line
;;;     segments. No joint will be formed and the imagination will always be
;;;     wrong, saying that the ball will always fall and is not `supported' by
;;;     the hand.
;;;  3. Only create new joints, never promote existing joints. This can cause
;;;     problems in at least one situation, that of walking. Walking causes
;;;     thigh and knee joints to be demoted but then it is no longer possible
;;;     to explain the person being stable while standing up (even when both
;;;     feet are on the ground as at the end of a step). (Ignore the fact the
;;;     due to lack of multi-axis perturbation, the imagination will fail to
;;;     predict the instability.)
;;;  4. Only deal with connected objects. Sometimes objects are objects by
;;;     virtue of simultaneous constrained motion (non-intersecting joints).
;;;     Sometimes objects are objects by virtue of simultaneous motion which
;;;     isn't completely constrained. Sometimes objects are objects even if
;;;     they don't move and aren't touching or overlapping but because they fit
;;;     a model of an object previously perceived and declared an object be
;;;     other means. This happens with John's eye and with Mary's eye.
;;;  5. Need to deal with TURN-AROUND and DIRECTION.
;;;  6. Need to perturb displacement.
;;;  7. Need to choose joint to rotate with maximum torque.
;;;  8. Need simultaneous perturbation on multiple axes. In fact do need this
;;;     in at least the following cases:
;;;     a. The "seesaw problem".
;;;     b. The "squating problem". If a persons thighs and knees rotate then
;;;        why doesn't she fall.
;;;     c. The "holding oneself up by ones bootstraps problem".
;;;  9. Need to pivot around all endpoints that appear in image.
;;;     a. The "single table top problem". A board hanging over the edge of a
;;;        table.
;;;     b. A circle or box should slide around and off of another circle.
;;; 10. Problems with TRANSLATION-LIMITS-CIRCLE-LINE-SEGMENT and
;;;     TRANSLATION-LIMITS-CIRCLE-CIRCLE in notebook.
;;; 11. The "three table top problem". When three tables together support a
;;;     board, removing any one table does not cause the board to become
;;;     unstable so we don't say that any table supports the board. Actually, I
;;;     don't really know whether `in reality' any table alone supports the
;;;     board but definitely the collection of three tables (and the
;;;     disjunction of the conjunction of any two) supports the board and we
;;;     can't represent that.
;;; 12. We can't say that supported(y) is defined as exists(x):supports(x,y)
;;;     for two reasons:
;;;     a. The "three table top problem".
;;;     b. An object on the floor is `supported' but no object supports it.
;;; 13. The "tilted chair problem". A tilted chair with one leg on a table top
;;;     is defintely not stable because it will fall but it is `supported' by
;;;     the table. Furthermore, it is `supported' in some sense because if you
;;;     pick it up you are changing its support status.
;;; 14. Direct vs. indirect support.
;;; 15. a. Fall-1 (falling down)
;;;     b. Fall-2 (falling over)
;;;     c. Fall-3 (falling down an inclined plane)
;;; 16. Need to have fuzzy figure intersection
;;;     a. box bottom on table top
;;;     b. ball circle on table top
;;; 17. Need to have overlapping collinear line-segments.
;;;     a. box bottom on table top
;;; 18. Same layer and support should take precedence over joints.
;;;     a. box bottom on table top
;;;     b. ball circle on table top
;;; 19. down-sameLayer on pass-through not implemented
;;; 20. up-sameLayer on collision not implemented

;;; Limitations in TVLWEC
;;;  1. Only two dimensions. Have layers because layers are needed for
;;;     substantiality and substantiality is needed for support.
;;;  2. Assume can disambiguate P vs. Q for line segments
;;;     (two choice points) rotation for circles (continuous choice point) and
;;;     direction for all figures.
;;;  3. Figures don't change any parameters other than
;;;     (x,y,rotation,direction). They aren't created, destroyed, split or
;;;     fused.
;;;  4. Assume can solve the "elbow problem". Can perceive two collinear lines
;;;     that intersect as distinct. Can perceive two concentric circles with
;;;     the same radius as distinct.
;;;  5. Only figure types are line segments and circles. Could extend to conic
;;;     section arcs and polynomial arcs.
;;;  6. No regions and thus no occlusion. Already do have paths and thus closed
;;;     paths. Could add stipulation that a closed non-crossing path on the
;;;     same layer could be a region with a color/texture attribute and an
;;;     opacity attribute. This introduces the possibility of occlusion.
;;;  7. No liquids, gases, semisolids (powders, gels, mushes), or flexible
;;;     solids like strings and springs. Could model strings as infinitesimal
;;;     chains.
;;;  8. Figures have the same uniform density.
;;;  9. The only force is gravity. Could add light, heat, electricity,
;;;     magnetism, pressure, wind, weather and other nature forces, motile,
;;;     animate and sentient agencies.
;;; 10. Could have joints with bounded displacement and rotation. Could have
;;;     joints with displacement and rotation force profiles. Could have
;;;     ratchets. Could have non-intersecting joints (like between eyes and
;;;     head). Could have animate joints (whose force profiles change over
;;;     time).
;;; 11. Joints don't have pivots.
;;; 12. Ignores momentum, kinetic energy and friction.

;;; Efficiency Issues
;;;  1. should cons in a static area so there is no gc
;;;  2. there is a lot of caching and (interfunction) common subexpression
;;;     removal that can be done throughout

;;; Section: Four useful macros which should be part of CommonLisp

(defmacro defconstant-compile-time (name value &optional documentation)
 `(eval-when (compile load eval)
   (defconstant ,name ,value ,documentation)))

(defmacro defvar-compile-time (name &optional initial-value documentation)
 `(eval-when (compile load eval)
   (defvar ,name ,initial-value ,documentation)))

(defmacro defun-compile-time (function-name lambda-list &body body)
 `(eval-when (compile load eval)
   (defun ,function-name ,lambda-list ,@body)
   (eval-when (compile) (compile ',function-name))))

;;; Section: Process variables

(defvar-compile-time *process-variables* '() "Process variables")

(defmacro defvar-process (name &optional initial-value documentation)
 (unless (and (symbolp name) (not (null name)))
  (error "NAME must be a non-null symbol"))
 `(eval-when (compile load eval)
   (pushnew (list ',name ',initial-value) *process-variables*
    :test #'eq :key #'first)
   (defvar ,name ,initial-value ,documentation)))

;;; Section: Defclass

(defclass entry ()
 ((word :initform nil :accessor word)
  (categories :initform '() :accessor categories)
  (next-entries :initform (make-array 26 :initial-element nil)
		:accessor next-entries)))

(defclass task ()
 ((initial-boxes :initarg :initial-boxes :accessor initial-boxes)
  (final-boxes :initarg :final-boxes :accessor final-boxes)))

(defclass task-box ()
 ((closure :initarg :closure :accessor closure)
  (next-boxes :initform nil :accessor next-boxes)))

(defclass nontask-box ()
 ((closure :initarg :closure :accessor closure)
  (next-boxes :initform nil :accessor next-boxes)))

(defclass if-box ()
 ((antecedent :initarg :antecedent :accessor antecedent)
  (next-boxes :initform nil
	      :initarg :next-boxes
	      :accessor next-boxes)
  (consequent-boxes :initform nil
		    :initarg :consequent-boxes
		    :accessor consequent-boxes)))

(defclass join-box ()
 ((n :initarg :n :accessor n)
  (next-boxes :initform nil :accessor next-boxes)
  (m :initarg :m :accessor m)))

(defclass container () ((contents :initform nil :accessor contents)))

(defclass joint ()
 ((f :initarg :f :accessor f)
  (g :initarg :g :accessor g)
  (displacement-f :initarg :displacement-f :accessor displacement-f)
  (displacement-g :initarg :displacement-g :accessor displacement-g)
  (rotation :initarg :rotation :accessor rotation)))

(defclass object ()
 ((figures :initarg :figures :accessor figures)
  (exists? :initform nil :accessor exists?)
  (prominent? :initform nil :accessor prominent?)
  (subobjects :initform '() :accessor subobjects)
  (superobjects :initform '() :accessor superobjects)
  (supported? :accessor supported?)
  (supported-objects :accessor supported-objects)))

(defclass perceptual-primitive ()
 ((watch :initarg :watch :accessor watch)
  (name :initarg :name :accessor name)
  (y :initform nil :accessor y)
  (p :initform nil :accessor p)
  (d :initform nil :accessor d)
  (state :initform 'off :accessor state)
  (frame-number :accessor frame-number)
  (vertex :accessor vertex)
  (rising-threshold :initform 1
		    :initarg :rising-threshold
		    :accessor rising-threshold)
  (falling-threshold :initform 1
		     :initarg :falling-threshold
		     :accessor falling-threshold)
  (offset :initarg :offset :accessor offset)))

(defclass vertex ()
 ((frame-number :initarg :frame-number :accessor frame-number)
  (previous-vertex :initform nil :accessor previous-vertex)
  (next-vertex :initform nil :accessor next-vertex)
  (edges-entering :initform '() :accessor edges-entering)
  (edges-leaving :initform '() :accessor edges-leaving)))

(defclass edge ()
 ((from-vertex :initarg :from-vertex :accessor from-vertex)
  (to-vertex :initarg :to-vertex :accessor to-vertex)
  (name :initarg :name :accessor name)))

(defclass spanning-interval ()
 ((start-low :initarg :start-low :accessor start-low)
  (start-high :initarg :start-high :accessor start-high)
  (end-low :initarg :end-low :accessor end-low)
  (end-high :initarg :end-high :accessor end-high)))

(defclass entity ()
 ((name :initarg :name :accessor name)
  (center :accessor center)
  (rotation :initform 0 :initarg :rotation :accessor rotation)
  (direction :initform 1.0 :initarg :direction :accessor direction)
  (figures :initform '() :accessor figures)))

(defclass ground (entity) ((ground :accessor ground)))

(defvar-process ground)

(defclass table (entity)
 ((top :accessor top)
  (left-leg :accessor left-leg)
  (right-leg :accessor right-leg)))

(defclass chair (entity)
 ((back :accessor back)
  (front :accessor front)
  (seat :accessor seat)))

(defclass box (entity)
 ((left-wall :accessor left-wall)
  (right-wall :accessor right-wall)
  (bottom :accessor bottom)))

(defclass ball (entity)
 ((line-segment1 :accessor line-segment1)
  (line-segment2 :accessor line-segment2)
  (line-segment3 :accessor line-segment3)
  (surface :accessor surface)))

(defclass limb (point container)
 ((name :initarg :name :accessor name)
  (person :initarg :person :accessor person)))

(defclass hand (limb)
 ((forearm :accessor forearm)
  (upper-arm :accessor upper-arm)
  (forearm-length :initarg :forearm-length :accessor forearm-length)
  (upper-arm-length :initarg :upper-arm-length :accessor upper-arm-length)))

(defclass foot (limb)
 ((calf :accessor calf)
  (thigh :accessor thigh)
  (calf-length :initarg :calf-length :accessor calf-length)
  (thigh-length :initarg :thigh-length :accessor thigh-length)))

(defclass person (entity)
 ((left-hand :accessor left-hand)
  (right-hand :accessor right-hand)
  (left-foot :accessor left-foot)
  (right-foot :accessor right-foot)
  (left-forearm :accessor left-forearm)
  (right-forearm :accessor right-forearm)
  (left-upper-arm :accessor left-upper-arm)
  (right-upper-arm :accessor right-upper-arm)
  (left-calf :accessor left-calf)
  (right-calf :accessor right-calf)
  (left-thigh :accessor left-thigh)
  (right-thigh :accessor right-thigh)
  (torso :accessor torso)
  (head :accessor head)
  (eye :accessor eye)
  (mouth :accessor mouth)))

(defclass man (person) ())

(defclass woman (person)
 ((dress1 :accessor dress1)
  (dress2 :accessor dress2)
  (hem :accessor hem)))

;;; Section: Defconstant

(defconstant pixels-per-foot (/ 92.0 3.0)
  "Pixels per inch on Whirlwind's screen divided by feet per inch scale")

(defconstant quanta 16 "Quantization for Edit Command")

(defconstant lint 0.25 "The bigger fuzzy comparison constant")

(defconstant-compile-time perceptual-primitive-keywords '(:symetric :off-one)
 "A list of all perceptual primitive keywords")

(defconstant gravitational-acceleration 1.0
  "Gravitational acceleration in feet/frame^2")

;;; Section: Defvar

(defvar-process *world* nil "The world pane of the Abigail window")

(defvar-process *interactor* nil "The interactor pane of the Abigail window")

(defvar-process *typeout* nil "The typeout pane of the Abigail window")

(defvar-process *command-menu* nil
 "The command menu pane of the Abigail window")

(defvar-process *default-pathname* nil "The default pathname")

(defvar-process *word* nil "The current typein word")

(defvar-process *words* nil "The current typein words")

(defvar-process *lexicon* (make-instance 'entry) "The lexicon")

(defvar-process *completion-mode?* nil "The completion mode")

(defvar-process *movie* nil "The selected movie")

(defvar-process *f* nil "One selected figure")

(defvar-process *g* nil "The other selected figure")

(defvar-process *j* nil "The selected joint")

(defvar-process *figure-type* 'line-segment
 "The current type of figure to draw")

(defvar-compile-time *movies* '() "A list of all available movies")

(defvar-process *task-queue* (make-array 100) "The task queue")

(defvar-process *task-queue-pointer* 0 "The task queue pointer")

(defvar-process *alternate-task-queue* (make-array 100)
 "The alternate task queue")

(defvar-process *frame-number* 0 "The current frame number")

(defvar-process *displayed-frame-number* nil
 "The current displayed frame number")

(defvar-process *figures* '() "A list of all figures in the movie")

(defvar-process *joints* '()
 "A list of all joints in the current model of the movie")

(defvar-process *objects* '()
 "A list of all objects that have ever been detected")

(defvar-compile-time *perceptual-primitive-templates* '()
 "A list of all perceptual primitive templates")

(defvar-process *perceptual-primitives* '()
 "A list of all perceptual primitives")

(defvar-process *vertices* '() "A list of all vertices")

(defvar-compile-time *event-templates* '() "A list of all event templates")

(defvar-process *layer-assertions* '()
 "A list of all same/different layer assertions")

(defvar-process *display-frame-number?* nil
 "T to enable display of frame number")

(defvar-process *perceive?* nil "T to enable perception")

(defvar-process *layer-assertions-cached* :empty
 "The layer assertions currently cached")

(defvar-process *connected-components-cache* nil
 "The connected components cache")

(defvar-process *draw-recording* nil "The draw recording")

(defvar-process *record-draw?* nil "T to enable draw recording")

(defvar-process *dump-postscript?* nil
 "T to dump postscript during imagination.")

(defvar-process *imagination-number* 0 "The pseudo frame during imagination.")

(defvar-process *commentary?* nil "T to give running commentary on analysis.")

(defvar-process *cheat?* nil "T to cheat on model update.")

(defvar-process *updates* nil "Updates to use when cheating.")

(defvar-process *translation-limit-times* nil "The translation limit times")

(defvar-process *rotation-limit-times* nil "The rotation limit times")

(defvar-process *imagination-times* nil "The imagination times")

(defvar-process *ground* nil "The ground")

;;; Section: Defmacro

(defmacro task (&body body)
 `(task-internal #'(lambda () ,@body)))

(defmacro nontask (&body body)
 `(nontask-internal #'(lambda () ,@body)))

(defmacro task-if (antecedent consequent-task &optional alternate-task)
 (if alternate-task
     `(task-if-internal
       #'(lambda () ,antecedent) ,consequent-task ,alternate-task)
     `(task-if-internal #'(lambda () ,antecedent) ,consequent-task)))

(defmacro serial-do-while (test task &rest tasks)
 `(serial-do-while-internal #'(lambda () ,test) (cons ,task (list ,@tasks))))

(defmacro serial-do-times ((var from to &optional (by 1)) task &rest tasks)
 `(let (from ,var to by)		;note: task instance variables
   (serial (nontask (setf from ,from)
	    (setf ,var from)
	    (setf to ,to)
	    (setf by ,by))
    (serial-do-while (if (> by 0)
			 (cond ((> ,var to) (setf ,var from) nil)
			       (t t))
			 (cond ((< ,var to) (setf ,var from) nil)
			       (t t)))
     ,task
     ,@tasks
     (nontask (incf ,var by))))))

(defmacro define-task (name parameters &body body)
 (let ((arguments (iterate (for parameter in parameters)
			   (unless (member parameter lambda-list-keywords
					   :test #'eq)
			    (collect (if (consp parameter)
					 (car parameter)
					 parameter)))))
       (long-name (intern (format nil "~A-INTERNAL" name))))
  `(progn
    (defun ,long-name ()
     (let ,arguments
      (values (serial ,@body)
	      #'(lambda (&rest parameters)
		 ,@(iterate (for argument in arguments)
			    (for i from 0)
			    (collect `(setf ,argument
				       (nth ,i parameters))))))))
    (defmacro ,name ,parameters
     `(multiple-value-bind (task initializer)
       (,',long-name)
       (serial (nontask (funcall initializer ,,@arguments)) task))))))

(defmacro define-movie (name entities updates &body body)
 `(progn
   (pushnew ',name *movies* :test #'eq)
   (defun ,name ()
    (initialize)
    (setf *updates* ',updates)
    (let* (,@entities
	   (entities (list ,@(iterate (for entity in entities)
				      (collect (first entity))))))
     entities				;ignore
     (window-clear *world*)
     (clear-task-queue)
     (iterate (for f in *figures*) (log-previous f) (paint f))
     (submit (serial ,@body (task (iterate (for f in *figures*) (erase f))))))
    (if *record-draw?* (push '(end-of-frame) *draw-recording*))
    (initialize-caches *figures*)
    (when *display-frame-number?*
     (setf *displayed-frame-number* 0)
     (display-frame-number *displayed-frame-number*))
    (if *perceive?* (perceive)))))

(defmacro observed (&body body)
 (cond ((and (consp body)
	     (null (rest body))
	     (consp (first body))
	     (eq (first (first body)) 'x)
	     (consp (rest (first body)))
	     (null (rest (rest (first body)))))
	`(x-observed ,(second (first body))))
       ((and (consp body)
	     (null (rest body))
	     (consp (first body))
	     (eq (first (first body)) 'y)
	     (consp (rest (first body)))
	     (null (rest (rest (first body)))))
	`(y-observed ,(second (first body))))
       (t `(let ((*coordinate-type* 'observed)) ,@body))))

(defmacro previous (&body body)
 (cond ((and (consp body)
	     (null (rest body))
	     (consp (first body))
	     (eq (first (first body)) 'x)
	     (consp (rest (first body)))
	     (null (rest (rest (first body)))))
	`(x-previous ,(second (first body))))
       ((and (consp body)
	     (null (rest body))
	     (consp (first body))
	     (eq (first (first body)) 'y)
	     (consp (rest (first body)))
	     (null (rest (rest (first body)))))
	`(y-previous ,(second (first body))))
       (t `(let ((*coordinate-type* 'previous)) ,@body))))

(defmacro saved (&body body)
 (cond ((and (consp body)
	     (null (rest body))
	     (consp (first body))
	     (eq (first (first body)) 'x)
	     (consp (rest (first body)))
	     (null (rest (rest (first body)))))
	`(x-saved ,(second (first body))))
       ((and (consp body)
	     (null (rest body))
	     (consp (first body))
	     (eq (first (first body)) 'y)
	     (consp (rest (first body)))
	     (null (rest (rest (first body)))))
	`(y-saved ,(second (first body))))
       (t `(let ((*coordinate-type* 'saved)) ,@body))))

(defmacro imagined (&body body)
 (cond ((and (consp body)
	     (null (rest body))
	     (consp (first body))
	     (eq (first (first body)) 'x)
	     (consp (rest (first body)))
	     (null (rest (rest (first body)))))
	`(x-imagined ,(second (first body))))
       ((and (consp body)
	     (null (rest body))
	     (consp (first body))
	     (eq (first (first body)) 'y)
	     (consp (rest (first body)))
	     (null (rest (rest (first body)))))
	`(y-imagined ,(second (first body))))
       (t `(let ((*coordinate-type* 'imagined)) ,@body))))

(defmacro define-perceptual-primitive (name lambda-list &body body)
 (unless (and (listp lambda-list)
	      (list-length lambda-list)
	      (every #'symbolp lambda-list)
	      (null (intersection lambda-list lambda-list-keywords)))
  (error "Invalid lambda list for perceptual primitive"))
 (let ((keywords (remove-if-not #'(lambda (symbol)
				   (eq (symbol-package symbol)
				       (symbol-package :x)))
				lambda-list))
       (arguments (remove-if #'(lambda (symbol)
				(eq (symbol-package symbol)
				    (symbol-package :x)))
			     lambda-list)))
  (unless (null (set-difference keywords perceptual-primitive-keywords
				:test #'eq))
   (error "Unsupported perceptual primitive keyword"))
  (if (and (/= (length arguments) 1) (/= (length arguments) 2))
      (error "Currently perceptual primitives must have one or two arguments"))
  `(progn
    (setf *perceptual-primitive-templates*
     (delete ',name *perceptual-primitive-templates*
      :test #'eq :key #'first :count 1))
    (push '(,name ,(length arguments) ,keywords)
     *perceptual-primitive-templates*)
    (defun ,name ,arguments
     #'(lambda (perceptual-primitive)
	perceptual-primitive		;ignore
	,(if (= (length arguments) 2)
	     `(and (disjoint? ,@arguments) (progn ,@body))
	     `(progn ,@body)))))))

(defmacro define-event (name lambda-list &body body)
 (unless (and (listp lambda-list)
	      (list-length lambda-list)
	      (every #'symbolp lambda-list)
	      (null (intersection lambda-list lambda-list-keywords)))
  (error "Invalid lambda list for event"))
 (unless (= (length body) 1) (error "Invalid body for event"))
 `(progn
   (setf *event-templates*
    (delete ',name *event-templates* :test #'eq :key #'first :count 1))
   (push '(,name ,lambda-list ,(first body)) *event-templates*)))

(defmacro condition-restart-loop ((conditions description . args) &body body)
 (declare (ignore conditions))
 (let ((tag (clim-utils:gensymbol 'restart)))
  `(tagbody
    ,tag
    (restart-case
     (progn ,@body)
     (nil () :report (lambda (stream) (format stream ,description ,@args))))
    (go ,tag))))

(defmacro postscript-bounding-box ((stream) &body body)
 `(let* ((record (block exit
		  (with-output-to-string (stream)
		   (with-output-to-postscript-stream (,stream stream)
		    (return-from exit
		     (with-output-to-output-record (,stream) ,@body))))))
	 (string (with-output-to-string (string)
		  (with-output-to-postscript-stream (stream string)
		   (draw-line* stream
			       (bounding-rectangle-left record)
			       (bounding-rectangle-top record)
			       (bounding-rectangle-right record)
			       (bounding-rectangle-bottom record))))))
   (with-input-from-string (stream string :start 493)
    (let* ((x-low (read stream))
	   (y-high (read stream))
	   (garbage (read stream))
	   (x-high (read stream))
	   (y-low (read stream)))
     (declare (ignore garbage))
     (values x-low y-low x-high y-high)))))

(defmacro with-bounding-box ((stream pathname) &body body)
 `(multiple-value-bind (left top right bottom)
   (postscript-bounding-box (,stream) ,@body)
   (let ((string
	  (with-output-to-string (stream)
	   (with-output-to-postscript-stream
	       (,stream
		stream
		:header-comments
		(list :title (format nil "~D ~D ~D ~D" left top right bottom)))
	    ,@body))))
    (with-open-file (stream ,pathname :direction :output)
     (princ (subseq string 0 39) stream)
     (princ "BoundingBox" stream)
     (princ (subseq string 44) stream)))))

;;; Section: Defun, Defmethod

;;; Section: Creation Functions

(defun joint (f g displacement-f displacement-g rotation)
 (make-instance 'joint
		:f f
		:g g
		:displacement-f displacement-f
		:displacement-g displacement-g
		:rotation rotation))

(defun intersect-circles (x1 y1 r1 x2 y2 r2 d)
 (let* ((dx (- x2 x1))
	(dy (- y2 y1))
	(d2 (+ (* dx dx) (* dy dy))))
  (cond ((zerop d2)
	 (if (= r1 r2)
	     (error "Can't find the intersection of two identical circles")
	     (error "The circles do not intersect")))
	((> d2 (* (+ r1 r2) (+ r1 r2)))
	 (error "The circles do not intersect"))
	(t (let* ((d1 (sqrt d2))
		  (px (/ (- (+ d2 (* r1 r1)) (* r2 r2)) (* 2 d1)))
		  (temp (- (* r1 r1) (* px px))))
	    (if (< temp 0.0)
		(error "The circles do not intersect")
		(let* ((py (* d (sqrt temp)))
		       (ix (/ (- x2 x1) d1))
		       (iy (/ (- y2 y1) d1))
		       (x (+ x1 (- (* px ix) (* py iy))))
		       (y (+ y1 (* px iy) (* py ix))))
		 (values x y))))))))

;;; Section: Task Mechanism

(defun task-internal (closure)
 (let ((task-box (make-instance 'task-box :closure closure)))
  (make-instance
   'task :initial-boxes (list task-box) :final-boxes (list task-box))))

(defun nontask-internal (closure)
 (let ((nontask-box (make-instance 'nontask-box :closure closure)))
  (make-instance 'task
		 :initial-boxes (list nontask-box)
		 :final-boxes (list nontask-box))))

(defun serial (task &rest tasks)
 (let ((tasks (cons task tasks)))
  (iterate (with previous = (first tasks))
	   (for task in (rest tasks))
	   (iterate (for final-box in (final-boxes previous))
		    (setf (next-boxes final-box) (initial-boxes task)))
	   (setf previous task))
  (make-instance 'task
		 :initial-boxes (initial-boxes (first tasks))
		 :final-boxes (final-boxes (first (last tasks))))))

(defun parallel (task &rest tasks)
 (let* ((tasks (cons task tasks))
	(join-box (make-instance
		   'join-box :n (1- (length tasks)) :m (1- (length tasks)))))
  (iterate (for task in tasks)
	   (iterate (for final-box in (final-boxes task))
		    (setf (next-boxes final-box) (list join-box))))
  (make-instance 'task
		 :initial-boxes (iterate (for task in tasks)
					 (appending (initial-boxes task)))
		 :final-boxes (list join-box))))

(defun task-if-internal (antecedent consequent-task &optional alternate-task)
 (if alternate-task
     (let ((if-box
	    (make-instance
	     'if-box
	     :antecedent antecedent
	     :next-boxes (initial-boxes alternate-task)
	     :consequent-boxes (initial-boxes consequent-task))))
      (make-instance 'task
		     :initial-boxes (list if-box)
		     :final-boxes (append (final-boxes consequent-task)
					  (final-boxes alternate-task))))
     (let ((if-box
	    (make-instance 'if-box
			   :antecedent antecedent
			   :consequent-boxes (initial-boxes consequent-task))))
      (make-instance
       'task
       :initial-boxes (list if-box)
       :final-boxes (cons if-box (final-boxes consequent-task))))))

(defun serial-do-while-internal (antecedent tasks)
 (let ((if-box (make-instance 'if-box :antecedent antecedent)))
  (iterate (with previous = (first tasks))
	   (for task in (rest tasks))
	   (iterate (for final-box in (final-boxes previous))
		    (setf (next-boxes final-box) (initial-boxes task)))
	   (setf previous task))
  (iterate (for final-box in (final-boxes (first (last tasks))))
	   (setf (next-boxes final-box) (list if-box)))
  (setf (consequent-boxes if-box) (initial-boxes (first tasks)))
  (make-instance
   'task :initial-boxes (list if-box) :final-boxes (list if-box))))

;;; Methods for points, containers, figures and entities

(defun quantize (x)
 (/ (* (round (* x pixels-per-foot) quanta) quanta) pixels-per-foot))

;;; Methods for points

;;; Protocol for points:
;;;   relative rotation
;;;     (rotate point delta-rotation center)
;;;   relative translation
;;;     (move point delta-x delta-y)
;;;   relative mirror
;;;     (turn-around point delta-direction center)

(defmethod initialize-instance :after
 ((p point) &key x y)
 (setf (observed (x p)) x)
 (setf (observed (y p)) y)
 (setf (previous (x p)) x)
 (setf (previous (y p)) y)
 (setf (saved (x p)) x)
 (setf (saved (y p)) y)
 (setf (imagined (x p)) x)
 (setf (imagined (y p)) y))

(defmethod print-object ((p point) stream)
 (iterate (for f in *figures*)
	  (when (eq p (p f))
	   (format stream "~S" `(p ,f))
	   (return))
	  (when (eq p (q f))
	   (format stream "~S" `(q ,f))
	   (return))
	  (finally (format stream "(~D,~D)" (x p) (y p)))))

(defmethod rotate ((p point) delta-rotation &optional center)
 (unless center (error "CENTER must be specified"))
 (let ((rotation (+ (rotation2 center p) delta-rotation))
       (distance (distance p center)))
  (setf (observed (x p)) (* distance (cos rotation)))
  (setf (observed (y p)) (* distance (sin rotation)))))

(defmethod move ((p point) delta-x delta-y &optional direction)
 (unless direction (error "DIRECTION must be specified"))
 (incf (observed (x p)) (* direction delta-x))
 (incf (observed (y p)) delta-y))

(defmethod turn-around ((p point) &optional delta-direction center)
 (unless delta-direction (error "DELTA-DIRECTION must be specified"))
 (unless center (error "CENTER must be specified"))
 ;; needs work: may need direction argument like move
 (setf (observed (x p))
       (+ (x center) (* delta-direction (- (x p) (x center))))))

;;; Methods for containers

;;; Protocol for containers:
;;;   relative rotation
;;;     (rotate point delta-rotation center)
;;;   relative translation
;;;     (move point delta-x delta-y)
;;;   relative mirror
;;;     (turn-around point delta-direction center)
;;;   containers
;;;     (grasp container entity)
;;;     (let-go container)

(defmethod rotate :after
 ((container container) delta-rotation &optional center)
 (unless center (error "CENTER must be specified"))
 (unless (null (contents container))
  (rotate (contents container) delta-rotation center)))

(defmethod move :after
 ((container container) delta-x delta-y &optional direction)
 (unless direction (error "DIRECTION must be specified"))
 (unless (null (contents container))
  (move (contents container) delta-x delta-y direction)))

(defmethod turn-around :after
 ((container container) &optional delta-direction center)
 (unless delta-direction (error "DELTA-DIRECTION must be specified"))
 (unless center (error "CENTER must be specified"))
 (unless (null (contents container))
  (turn-around (contents container) delta-direction center)))

(defmethod grasp ((container container) new-contents)
 (unless (null (contents container))
  (error "You can't GRASP two things at once!"))
 ;; needs work: calling MOVE-LIMB-TO is a violation of modularity
 (move-limb-to container (x (center new-contents)) (y (center new-contents)))
 (setf (contents container) new-contents))

(defmethod let-go ((container container))
 (if (null (contents container))
     (error "You can't LET-GO when you are not grasping anything!"))
 (setf (contents container) nil))

;;; Methods for figures

;;; Protocol for figures:
;;;   relative rotation
;;;     (rotate figure delta-rotation center)
;;;   relative translation
;;;     (move figure delta-x delta-y)
;;;   relative mirror
;;;     (turn-around figure delta-direction center)

(defmethod initialize-instance :after
 ((f figure) &rest arguments)
 (declare (ignore arguments))
 (when (name f)
  (setf (index f) (length *figures*))
  (push f *figures*)))

(defmethod print-object ((f figure) stream)
 (if (name f)
     (format stream "~S" (name f))
     (format stream "#<Figure>")))

(defmethod print-object ((f line) stream)
 (cond ((zerop (a f))
	(cond ((zerop (b f)) (error "This shouldn't happen"))
	      ((= (b f) 1) (format stream "y=~D" (c f)))
	      ((= (b f) -1) (format stream "-y=~D" (c f)))
	      (t (format stream "~Dy=~D" (b f) (c f)))))
       ((= (a f) 1)
	(cond ((zerop (b f)) (format stream "x=~D" (c f)))
	      ((= (b f) 1) (format stream "x+y=~D" (c f)))
	      ((= (b f) -1) (format stream "x-y=~D" (c f)))
	      ((plusp (b f)) (format stream "x+~Dy=~D" (b f) (c f)))
	      (t (format stream "x~Dy=~D" (b f) (c f)))))
       ((= (a f) -1)
	(cond ((zerop (b f)) (format stream "-x=~D" (c f)))
	      ((= (b f) 1) (format stream "-x+y=~D" (c f)))
	      ((= (b f) -1) (format stream "-x-y=~D" (c f)))
	      ((plusp (b f)) (format stream "-x+~Dy=~D" (b f) (c f)))
	      (t (format stream "-x~Dy=~D" (b f) (c f)))))
       ((zerop (b f)) (format stream "~Dx=~D" (a f) (c f)))
       ((= (b f) 1) (format stream "~Dx+y=~D" (a f) (c f)))
       ((= (b f) -1) (format stream "~Dx-y=~D" (a f) (c f)))
       ((plusp (b f)) (format stream "~Dx+~Dy=~D" (a f) (b f) (c f)))
       (t (format stream "~Dx~Dy=~D" (a f) (b f) (c f)))))

(defmethod print-object ((f ray) stream)
 (format stream "~S@~D" (p f) (rotation f)))

(defmethod draw ((f line-segment))
 (draw-line* *world*
	     (saved (x (p f))) (saved (y (p f)))
	     (saved (x (q f))) (saved (y (q f)))
	     :ink +flipping-ink+)
 (if *record-draw?*
     (push `(line-segment
	     ,(saved (x (p f)))
	     ,(saved (y (p f)))
	     ,(saved (x (q f)))
	     ,(saved (y (q f))))
	   *draw-recording*)))

(defmethod draw ((f circle))
 (draw-circle* *world* (saved (x (p f))) (saved (y (p f))) (size f)
	       :filled nil
	       :ink +flipping-ink+)
 (if *record-draw?*
     (push `(circle ,(saved (x (p f))) ,(saved (y (p f))) ,(size f))
	   *draw-recording*)))

(defun erase (f) (when (present? f) (draw f) (setf (present? f) nil)))

(defun checkpoint (f)
 (setf (moved? f) nil)
 (setf (saved (x (p f))) (x (p f)))
 (setf (saved (y (p f))) (y (p f)))
 (setf (saved (x (q f))) (x (q f)))
 (setf (saved (y (q f))) (y (q f))))

(defun update (f &optional moved?)
 (when (and (or (moved? f) moved?) (present? f))
  (draw f)
  (setf (present? f) nil)
  (checkpoint f)
  (draw f)
  (setf (present? f) t)))

(defun paint (f)
 (cond ((present? f) (update f))
       (t (checkpoint f) (draw f) (setf (present? f) t))))

(defun log-previous (f)
 (setf (previous (x (p f))) (x (p f)))
 (setf (previous (y (p f))) (y (p f)))
 (setf (previous (x (q f))) (x (q f)))
 (setf (previous (y (q f))) (y (q f))))

(defmethod rotate ((f figure) delta-rotation &optional center)
 ;; needs work: could optimize and not rotate point coincident with center
 ;;             and not erase if neither point rotated
 (unless center (error "CENTER must be specified"))
 (setf (moved? f) t)
 (rotate (p f) delta-rotation center)
 (rotate (q f) delta-rotation center))

(defmethod move ((f figure) delta-x delta-y &optional direction)
 (unless direction (error "DIRECTION must be specified"))
 (setf (moved? f) t)
 (move (p f) delta-x delta-y direction)
 (move (q f) delta-x delta-y direction))

(defmethod turn-around ((f figure) &optional delta-direction center)
 ;; needs work: could optimize and not turn around point coincident with
 ;;             center and not erase if neither point turned around
 ;; needs work: What should this do with the rotation of the line segment?
 (unless delta-direction (error "DELTA-DIRECTION must be specified"))
 (unless center (error "CENTER must be specified"))
 (setf (moved? f) t)
 (turn-around (p f) delta-direction center)
 (turn-around (q f) delta-direction center))

(defmethod mass ((f line-segment)) (size f))

(defmethod mass ((f circle)) (* pi (sqr (size f))))

(defmethod mass ((figures list)) (iterate (for f in figures) (sum (mass f))))

(defmethod x ((f line-segment)) (* 0.5 (+ (x (p f)) (x (q f)))))

(defmethod x ((f circle)) (x (p f)))

(defmethod x ((figures list))
 (/ (iterate (for f in figures) (sum (* (mass f) (x f)))) (mass figures)))

(defmethod y ((f line-segment)) (* 0.5 (+ (y (p f)) (y (q f)))))

(defmethod y ((f circle)) (y (p f)))

(defmethod y ((figures list))
 (/ (iterate (for f in figures) (sum (* (mass f) (y f)))) (mass figures)))

(defun center-of-mass (f) (point (x f) (y f)))

;;; Methods for entities

;;; Protocol for entities:
;;;   relative rotation of center
;;;     (rotate-center entity delta-rotation)
;;;   absolute rotation of center
;;;     (orient-center entity new-rotation)
;;;   relative translation of center
;;;     (move-center entity delta-x delta-y)
;;;     (move-center-forward entity delta-x)
;;;     (move-center-backward entity delta-x)
;;;     (move-center-up entity delta-y)
;;;     (move-center-down entity delta-y)
;;;   absolute translation of center
;;;     (move-center-to entity new-x new-y)
;;;   relative mirror of center
;;;     (turn-center-around entity &optional delta-direction)
;;;   absolute mirror of center
;;;     (face-center entity new-direction)
;;;   relative rotation
;;;     (rotate entity delta-rotation &optional alternate-center)
;;;   absolute rotation
;;;     (orient entity new-rotation &optional alternate-center)
;;;   relative translation
;;;     (move entity delta-x delta-y)
;;;     (move-forward entity delta-x)
;;;     (move-backward entity delta-x)
;;;     (move-up entity delta-y)
;;;     (move-down entity delta-y)
;;;   absolute translation
;;;     (move-to entity new-x new-y)
;;;   relative mirror
;;;     (turn-around entity &optional delta-direction alternate-center)
;;;   absolute mirror
;;;     (face entity new-direction)

(defmethod initialize-instance :after
 ((entity entity) &key x y)
 (setf (center entity) (point x y)))

(defmethod print-object ((entity entity) stream)
 (format stream "~S" (name entity)))

(defmethod rotate-center ((entity entity) delta-rotation)
 (setf (rotation entity) (rotation+ (rotation entity) delta-rotation)))

(defmethod orient-center ((entity entity) new-rotation)
 (setf (rotation entity) new-rotation))

;;; note: movement is not done relative to orientation, though it is done
;;;       relative to direction

(defmethod move-center ((entity entity) delta-x delta-y
                        &optional alternate-direction)
 (if (null alternate-direction) (setf alternate-direction (direction entity)))
 (incf (observed (x (center entity))) (* alternate-direction delta-x))
 (incf (observed (y (center entity))) delta-y))

(defmethod move-center-forward ((entity entity) delta-x)
 (move-center entity delta-x 0.0))

(defmethod move-center-backward ((entity entity) delta-x)
 (move-center entity (- delta-x) 0.0))

(defmethod move-center-up ((entity entity) delta-y)
 (move-center entity 0.0 delta-y))

(defmethod move-center-down ((entity entity) delta-y)
 (move-center entity 0.0 (- delta-y)))

(defmethod move-center-to ((entity entity) new-x new-y)
 (setf (observed (x (center entity))) new-x)
 (setf (observed (y (center entity))) new-y))

(defmethod turn-center-around
    ((entity entity) &optional (delta-direction -1.0))
 (setf (direction entity) (* delta-direction (direction entity))))

(defmethod face-center ((entity entity) new-direction)
 (setf (direction entity) new-direction))

;;; needs work: could optimize cases of null relative rotation, translation
;;;             and mirror

(defmethod rotate ((entity entity) delta-rotation &optional alternate-center)
 (if (null alternate-center) (setf alternate-center (center entity)))
 (iterate (for f in (figures entity))
	  (rotate f delta-rotation alternate-center))
 (rotate-center entity delta-rotation))

(defmethod orient ((entity entity) new-rotation &optional alternate-center)
 ;; note: alternate center capability needed only because turn-around calls
 ;;       orient and turn-around needs alternate center
 (if (null alternate-center) (setf alternate-center (center entity)))
 (iterate (for f in (figures entity))
	  (rotate f (- new-rotation (rotation entity)) alternate-center))
 (orient-center entity new-rotation))

;;; note: movement is not done relative to orientation, though it is done
;;;       relative to direction

(defmethod move ((entity entity) delta-x delta-y &optional alternate-direction)
 (if (null alternate-direction) (setf alternate-direction (direction entity)))
 (iterate (for f in (figures entity))
	  (move f delta-x delta-y alternate-direction))
 (move-center entity delta-x delta-y alternate-direction))

(defmethod move-forward ((entity entity) delta-x) (move entity delta-x 0.0))

(defmethod move-backward ((entity entity) delta-x)
 (move entity (- delta-x) 0.0))

(defmethod move-up ((entity entity) delta-y) (move entity 0.0 delta-y))

(defmethod move-down ((entity entity) delta-y) (move entity 0.0 (- delta-y)))

(defmethod move-to ((entity entity) new-x new-y)
 (iterate (for f in (figures entity))
	  (move f
		(- new-x (x (center entity)))
		(- new-y (y (center entity))) (direction entity)))
 (move-center-to entity new-x new-y))

(defmethod turn-around
    ((entity entity) &optional (delta-direction -1.0) alternate-center)
 ;; needs work: should be done directly without intermediate orient
 (if (null alternate-center) (setf alternate-center (center entity)))
 (let ((old-rotation (rotation entity)))
  (orient entity 0.0 alternate-center)
  (iterate (for f in (figures entity))
	   (turn-around f delta-direction alternate-center))
  (orient entity old-rotation alternate-center))
 (turn-center-around entity delta-direction))

(defmethod face ((entity entity) new-direction)
 ;; needs work: should be done directly without intermediate orient
 (let ((old-rotation (rotation entity)))
  (orient entity 0.0)
  (iterate
   (for f in (figures entity))
   (turn-around f (* (direction entity) new-direction) (center entity)))
  (orient entity old-rotation))
 (face-center entity new-direction))

;;; Methods for ground

(defmethod initialize-instance :after
 ((ground ground) &key x y)
 (declare (ignore x y))
 (setf (name ground) 'ground)
 (setf (ground ground)
       (line-segment (point 0.0 0.0)
		     (point (transform-point*
			     (invert-transformation
			      (medium-transformation *world*))
			     (window-inside-width *world*) 0) 0.0)
		     :name `(ground ,ground))))

;;; Methods for tables

(defmethod initialize-instance :after
 ((table table) &key x y (top-length 6.0) (height 2.5))
 (unless (zerop (rotation table)) (error "Rotation must be zero"))
 (setf (top table)
       (line-segment
	(point (- x (* (direction table) (/ top-length 2.0))) (+ y height))
	(point (+ x (* (direction table) (/ top-length 2.0))) (+ y height))
	:name `(top ,table)))
 (setf (left-leg table)
       (line-segment
	(point (- x (* (direction table) (/ top-length 3.0))) y)
	(point (- x (* (direction table) (/ top-length 3.0))) (+ y height))
	:name `(left-leg ,table)))
 (setf (right-leg table)
       (line-segment
	(point (+ x (* (direction table) (/ top-length 3.0))) y)
	(point (+ x (* (direction table) (/ top-length 3.0))) (+ y height))
	:name `(right-leg ,table)))
 (setf (figures table) (list (top table) (left-leg table) (right-leg table))))

;;; Methods for chairs

(defmethod initialize-instance :after
 ((chair chair) &key x y (seat-height 1.5) (back-height 2.0) (width 1.5))
 (unless (zerop (rotation chair)) (error "Rotation must be zero"))
 (setf (front chair)
       (line-segment
	(point (+ x (* (direction chair) width)) y)
	(point (+ x (* (direction chair) width)) (+ y seat-height))
	:name `(front ,chair)))
 (setf (back chair)
       (line-segment (point x y)
		     (point x (+ y seat-height back-height))
		     :name `(back ,chair)))
 (setf (seat chair)
       (line-segment
	(point x (+ y seat-height))
	(point (+ x (* (direction chair) width)) (+ y seat-height))
	:name `(seat ,chair)))
 (setf (figures chair) (list (front chair) (back chair) (seat chair))))

;;; Methods for boxes

(defmethod initialize-instance :after
 ((box box) &key x y (width 1.0) (height 0.75))
 (unless (zerop (rotation box)) (error "Rotation must be zero"))
 (setf (left-wall box)
       (line-segment
	(point (- x (* (direction box) (/ width 2.0))) y)
	(point (- x (* (direction box) (/ width 2.0))) (+ y height))
	:name `(left-wall ,box)))
 (setf (right-wall box)
       (line-segment
	(point (+ x (* (direction box) (/ width 2.0))) y)
	(point (+ x (* (direction box) (/ width 2.0))) (+ y height))
	:name `(right-wall ,box)))
 (setf (bottom box)
       (line-segment (point (- x (* (direction box) (/ width 2.0))) y)
		     (point (+ x (* (direction box) (/ width 2.0))) y)
		     :name `(bottom ,box)))
 (setf (figures box) (list (left-wall box) (right-wall box) (bottom box))))

;;; Methods for balls

(defmethod initialize-instance :after
 ((ball ball) &key x y (diameter 1.0))
 (unless (zerop (rotation ball)) (error "Rotation must be zero"))
 (let* ((radius (/ diameter 2.0))
	(dx (* radius (cos (/ pi 3.0))))
	(dy (* radius (sin (/ pi 3.0)))))
  (setf (line-segment1 ball)
	(line-segment (point (+ x (* (direction ball) radius)) y)
		      (point (- x (* (direction ball) radius)) y)
		      :name `(line-segment1 ,ball)))
  (setf (line-segment2 ball)
	(line-segment (point (+ x (* (direction ball) dx)) (+ y dy))
		      (point (- x (* (direction ball) dx)) (- y dy))
		      :name `(line-segment2 ,ball)))
  (setf (line-segment3 ball)
	(line-segment (point (+ x (* (direction ball) dx)) (- y dy))
		      (point (- x (* (direction ball) dx)) (+ y dy))
		      :name `(line-segment3 ,ball)))
  (setf (surface ball) (circle (point x y) radius :name `(surface ,ball)))
  (setf (figures ball) (list (line-segment1 ball)
			     (line-segment2 ball)
			     (line-segment3 ball)
			     (surface ball)))))

;;; Methods for limbs

(defmethod print-object ((limb limb) stream) (format stream "~S" (name limb)))

(defun move-limb (limb delta-x delta-y)
 (move-limb-to limb
	       (+ (x limb) (* (direction (person limb)) delta-x))
	       (+ (y limb) delta-y)))

(defun move-limb-forward (limb delta-x) (move-limb limb delta-x 0.0))

(defun move-limb-backward (limb delta-x) (move-limb limb (- delta-x) 0.0))

(defun move-limb-up (limb delta-y) (move-limb limb 0.0 delta-y))

(defun move-limb-down (limb delta-y) (move-limb limb 0.0 (- delta-y)))

;;; Methods for hands

(defmethod move-limb-to ((hand hand) new-x new-y)
 (setf (moved? (forearm hand)) t)
 (setf (moved? (upper-arm hand)) t)
 (move hand (- new-x (x hand)) (- new-y (y hand)) 1.0)
 (multiple-value-bind (elbow-x elbow-y)
     (intersect-circles (x (q (upper-arm hand)))
			(y (q (upper-arm hand)))
			(upper-arm-length hand)
			(x hand)
			(y hand)
			(forearm-length hand)
			(- (direction (person hand))))
  (move (q (forearm hand))
	(- elbow-x (x (q (forearm hand))))
	(- elbow-y (y (q (forearm hand))))
	1.0)
  (move (p (upper-arm hand))
	(- elbow-x (x (p (upper-arm hand))))
	(- elbow-y (y (p (upper-arm hand))))
	1.0)))

;;; Methods for feet

(defmethod move-limb-to ((foot foot) new-x new-y)
 (setf (moved? (calf foot)) t)
 (setf (moved? (thigh foot)) t)
 (move foot (- new-x (x foot)) (- new-y (y foot)) 1.0)
 (multiple-value-bind (knee-x knee-y)
     (intersect-circles (x (q (thigh foot)))
			(y (q (thigh foot)))
			(thigh-length foot)
			(x foot)
			(y foot)
			(calf-length foot)
			(direction (person foot)))
  (move (q (calf foot))
	(- knee-x (x (q (calf foot))))
	(- knee-y (y (q (calf foot))))
	1.0)
  (move (p (thigh foot))
	(- knee-x (x (p (thigh foot))))
	(- knee-y (y (p (thigh foot))))
	1.0)))

;;; Methods for people

(defmethod initialize-instance :after
 ((person person) &key
  x
  y
  (forearm-length 1.5)
  (upper-arm-length 1.5)
  (calf-length 1.5)
  (thigh-length 1.5)
  (torso-length 3.0)
  (shoulder-height 2.5)
  (squat-factor 0.99)
  (gait 3.0)
  (face-diameter 1.5)
  (eye-diameter 0.2))
 (unless (zerop (rotation person)) (error "Rotation must be zero"))
 (let* ((delta (/ (+ upper-arm-length forearm-length) 2.0 (sqrt 2.0)))
	(delta-y (sqrt (- (sqr (* squat-factor (+ thigh-length calf-length)))
			  (sqr (/ gait 2.0)))))
	(left-hand-x (+ x (* (direction person) delta)))
	(left-hand-y (- (+ y delta-y shoulder-height) delta))
	(right-hand-x (- x (* (direction person) delta)))
	(right-hand-y (- (+ y delta-y shoulder-height) delta))
	(left-foot-x (+ x (* (direction person) (/ gait 2.0))))
	(left-foot-y y)
	(right-foot-x (- x (* (direction person) (/ gait 2.0))))
	(right-foot-y y)
	(groin-x x)
	(groin-y (+ y delta-y))
	(shoulder-x x)
	(shoulder-y (+ y delta-y shoulder-height))
	(neck-x x)
	(neck-y (+ y delta-y torso-length)))
  (multiple-value-bind (left-elbow-x left-elbow-y)
      (intersect-circles shoulder-x
			 shoulder-y
			 upper-arm-length
			 left-hand-x
			 left-hand-y
			 forearm-length
			 (- (direction person)))
   (multiple-value-bind (right-elbow-x right-elbow-y)
       (intersect-circles shoulder-x
			  shoulder-y
			  upper-arm-length
			  right-hand-x
			  right-hand-y
			  forearm-length
			  (- (direction person)))
    (multiple-value-bind (left-knee-x left-knee-y)
	(intersect-circles groin-x
			   groin-y
			   thigh-length
			   left-foot-x
			   left-foot-y
			   calf-length
			   (direction person))
     (multiple-value-bind (right-knee-x right-knee-y)
	 (intersect-circles groin-x
			    groin-y
			    thigh-length
			    right-foot-x
			    right-foot-y
			    calf-length
			    (direction person))
      (setf (left-hand person)
	    (make-instance 'hand
			   :name `(left-hand ,person)
			   :x left-hand-x
			   :y left-hand-y
			   :forearm-length forearm-length
			   :upper-arm-length upper-arm-length
			   :person person))
      (setf (right-hand person)
	    (make-instance 'hand
			   :name `(right-hand ,person)
			   :x right-hand-x
			   :y right-hand-y
			   :forearm-length forearm-length
			   :upper-arm-length upper-arm-length
			   :person person))
      (setf (left-foot person)
	    (make-instance 'foot
			   :name `(left-foot ,person)
			   :x left-foot-x
			   :y left-foot-y
			   :calf-length calf-length
			   :thigh-length thigh-length
			   :person person))
      (setf (right-foot person)
	    (make-instance 'foot
			   :name `(right-foot ,person)
			   :x right-foot-x
			   :y right-foot-y
			   :calf-length calf-length
			   :thigh-length thigh-length
			   :person person))
      (setf (left-forearm person)
	    (line-segment (left-hand person)
			  (point left-elbow-x left-elbow-y)
			  :name `(left-forearm ,person)))
      (setf (right-forearm person)
	    (line-segment (right-hand person)
			  (point right-elbow-x right-elbow-y)
			  :name `(right-forearm ,person)))
      (setf (left-upper-arm person)
	    (line-segment (point left-elbow-x left-elbow-y)
			  (point shoulder-x shoulder-y)
			  :name `(left-upper-arm ,person)))
      (setf (right-upper-arm person)
	    (line-segment (point right-elbow-x right-elbow-y)
			  (point shoulder-x shoulder-y)
			  :name `(right-upper-arm ,person)))
      (setf (left-calf person)
	    (line-segment (left-foot person)
			  (point left-knee-x left-knee-y)
			  :name `(left-calf ,person)))
      (setf (right-calf person)
	    (line-segment (right-foot person)
			  (point right-knee-x right-knee-y)
			  :name `(right-calf ,person)))
      (setf (left-thigh person)
	    (line-segment (point left-knee-x left-knee-y)
			  (point groin-x groin-y)
			  :name `(left-thigh ,person)))
      (setf (right-thigh person)
	    (line-segment (point right-knee-x right-knee-y)
			  (point groin-x groin-y)
			  :name `(right-thigh ,person)))
      (setf (torso person)
	    (line-segment (point groin-x groin-y)
			  (point neck-x neck-y)
			  :name `(torso ,person)))
      (setf (head person)
	    (circle (point neck-x (+ neck-y (/ face-diameter 2.0)))
		    (/ face-diameter 2.0)
		    :name `(head ,person)))
      (setf (eye person)
	    (circle (point (+ neck-x (* (direction person) 0.2 face-diameter))
			   (+ neck-y (* 0.6 face-diameter)))
		    (/ eye-diameter 2.0)
		    :name `(eye ,person)))
      (setf (mouth person)
	    (line-segment
	     (point (+ neck-x (* (direction person) 0.125 face-diameter))
		    (+ neck-y (* 0.375 face-diameter)))
	     (point (+ neck-x
		       (* (direction person) (/ (sqrt 2.0) 4.0) face-diameter))
		    (+ neck-y (* (- 0.5 (/ (sqrt 2.0) 4.0)) face-diameter)))
	     :name `(mouth ,person)))
      (setf (forearm (left-hand person)) (left-forearm person))
      (setf (forearm (right-hand person)) (right-forearm person))
      (setf (upper-arm (left-hand person)) (left-upper-arm person))
      (setf (upper-arm (right-hand person)) (right-upper-arm person))
      (setf (calf (left-foot person)) (left-calf person))
      (setf (calf (right-foot person)) (right-calf person))
      (setf (thigh (left-foot person)) (left-thigh person))
      (setf (thigh (right-foot person)) (right-thigh person))
      (setf (figures person)
	    (list (left-forearm person)
		  (right-forearm person)
		  (left-upper-arm person)
		  (right-upper-arm person)
		  (left-calf person)
		  (right-calf person)
		  (left-thigh person)
		  (right-thigh person)
		  (torso person)
		  (head person)
		  (eye person)
		  (mouth person)))))))))

;;; Methods for men

(defmethod initialize-instance :after ((man man) &key))

;;; Methods for women

(defmethod initialize-instance :after
 ((woman woman) &key
  x
  y
  (calf-length 1.5)
  (thigh-length 1.5)
  (shoulder-height 2.5)
  (squat-factor 0.99)
  (gait 3.0)
  (hem-length 4.0)
  (fullness 3.7))
 (unless (zerop (rotation woman)) (error "Rotation must be zero"))
 (let* ((delta-y (sqrt (- (sqr (* squat-factor (+ thigh-length calf-length)))
			  (sqr (/ gait 2.0)))))
	(shoulder-x x)
	(shoulder-y (+ y delta-y shoulder-height)))
  (setf (dress1 woman)
	(line-segment
	 (point shoulder-x shoulder-y)
	 (point (+ shoulder-x (* (direction woman) (/ fullness 2.0)))
		(- shoulder-y hem-length))
	 :name `(dress1 ,woman)))
  (setf (dress2 woman)
	(line-segment
	 (point shoulder-x shoulder-y)
	 (point (- shoulder-x (* (direction woman) (/ fullness 2.0)))
		(- shoulder-y hem-length))
	 :name `(dress2 ,woman)))
  (setf (hem woman)
	(line-segment
	 (point (+ shoulder-x (* (direction woman) (/ fullness 2.0)))
		(- shoulder-y hem-length))
	 (point (- shoulder-x (* (direction woman) (/ fullness 2.0)))
		(- shoulder-y hem-length))
	 :name `(hem ,woman)))
  (setf (figures woman)
	(list* (dress1 woman) (dress2 woman) (hem woman) (figures woman)))))

;;; Section: Tasks

;;; Preconditions:
;;;  1. both feet must be on the ground
;;;  2. body must be between both feet
;;;  3. SQUAT and leg length must be adaquate for GAIT
;;; Postconditions:
;;;  1. both feet are on the ground
;;;  2. feet are separated by GAIT
;;;  3. body is half way in between feet
;;;  4. final accuracy is dependent on SPEED

(define-task step-forward (person &key (gait 3.0) (speed 0.2))
 ;; note: task instance variables
 (let (number-of-frames foot-movement-per-frame body-movement-per-frame)
  (serial
   (nontask
    (let* ((foot-separation
	    (abs (- (x (left-foot person)) (x (right-foot person)))))
	   (foot-movement-distance (+ gait foot-separation))
	   (body-movement-distance
	    (+ (abs (- (x (center person))
		       (x (if (> (* (direction person)
				    (- (x (right-foot person))
				       (x (left-foot person))))
				 0.0)
			      (right-foot person)
			      (left-foot person)))))
	       (/ gait 2.0))))
     (setf number-of-frames (truncate body-movement-distance speed))
     (setf foot-movement-per-frame
	   (/ foot-movement-distance number-of-frames))
     (setf body-movement-per-frame
	   (/ body-movement-distance number-of-frames))))
   (task-if (> (* (direction person)
		  (- (x (right-foot person)) (x (left-foot person))))
	       0.0)
	    (serial (task (move-limb-up (left-foot person) 0.5))
		    (serial-do-times
		     (i 1 number-of-frames)
		     (task (move-forward person body-movement-per-frame)
			   (move-limb-backward (right-foot person)
					       body-movement-per-frame)
			   (move-limb-forward (left-foot person)
					      (- foot-movement-per-frame
						 body-movement-per-frame))))
		    (task (move-limb-down (left-foot person) 0.5)))
	    (serial (task (move-limb-up (right-foot person) 0.5))
		    (serial-do-times
		     (i 1 number-of-frames)
		     (task (move-forward person body-movement-per-frame)
			   (move-limb-backward (left-foot person)
					       body-movement-per-frame)
			   (move-limb-forward (right-foot person)
					      (- foot-movement-per-frame
						 body-movement-per-frame))))
		    (task (move-limb-down (right-foot person) 0.5)))))))

;;; Preconditions:
;;;  1. both feet must be on the ground
;;;  2. body must be between both feet
;;;  3. SQUAT and leg length must be adaquate for GAIT
;;; Postconditions:
;;;  1. both feet are on the ground
;;;  2. feet are separated by GAIT
;;;  3. body is half way in between feet
;;;  4. final accuracy is dependent on SPEED

(define-task walk-n-steps (person steps &key (gait 3.0) (speed 0.2))
 (serial-do-times (i 1 steps)
		  (step-forward person :gait gait :speed speed)))

;;; Preconditions:
;;;  1. both feet must be on the ground
;;;  2. body must be between both feet
;;;  3. SQUAT and leg length must be adaquate for GAIT
;;;  4. X can not be between both feet
;;; Postconditions:
;;;  1. both feet are on the ground
;;;  2. body is half way in between feet
;;;  3. front foot is at X
;;;  4. final accuracy is dependent on SPEED

(define-task walk-to (person x &key (gait 3.0) (speed 0.2))
 (serial
  (nontask (if (<= (min (x (left-foot person)) (x (right-foot person)))
		   x
		   (max (x (left-foot person)) (x (right-foot person))))
	       (error "You can't WALK-TO something you are standing on!")))
  (serial-do-while
   (> (min (abs (- x (x (left-foot person))))
	   (abs (- x (x (right-foot person)))))
      gait)
   (task-if (< (* (direction person) (- x (x (center person)))) 0.0)
	    (task (turn-around person)))
   (step-forward person :gait gait :speed speed))
  (step-forward person
		:gait (min (abs (- x (x (left-foot person))))
			   (abs (- x (x (right-foot person)))))
		:speed speed)))

;;; Preconditions:
;;;  1. ENTITY must be within reach of LIMB
;;;  2. LIMB must be empty
;;; Postconditions:
;;;  1. ENTITY is in LIMB
;;;  2. LIMB is back in original position
;;;  3. ENTITY is at original LIMB position

(define-task pick-up (limb entity &key (frames 5))
 (let (delta-x delta-y)			;note: task instance variables
  (serial
   (nontask (setf delta-x (* (direction (person limb))
			     (/ (- (x (center entity)) (x limb)) frames)))
	    (setf delta-y (/ (- (y (center entity)) (y limb)) frames)))
   (serial-do-times (i 1 frames) (task (move-limb limb delta-x delta-y)))
   (task (grasp limb entity))
   (serial-do-times (i 1 frames)
		    (task (move-limb limb (- delta-x) (- delta-y)))))))

;;; Preconditions:
;;;  1. (X,Y) must be within reach of LIMB
;;;  2. LIMB must not be empty
;;; Postconditions:
;;;  1. contents of LIMB are at (X,Y)
;;;  2. LIMB is back in original position

(define-task put-down (limb x y &key (frames 5))
 (let (delta-x delta-y)			;note: task instance variables
  (serial
   (nontask (setf delta-x
		  (* (direction (person limb)) (/ (- x (x limb)) frames)))
	    (setf delta-y (/ (- y (y limb)) frames)))
   (serial-do-times (i 1 frames) (task (move-limb limb delta-x delta-y)))
   (task (let-go limb))
   (serial-do-times (i 1 frames)
		    (task (move-limb limb (- delta-x) (- delta-y)))))))

;;; Preconditions:
;;;  1. DESTINATION-LIMB must be within reach of SOURCE-LIMB
;;;  2. DESTINATION-LIMB must be empty
;;;  3. SOURCE-LIMB must not be empty
;;; Postconditions:
;;;  1. contents of SOURCE-LIMB are in DESTINATION-LIMB
;;;  2. contents of SOURCE-LIMB are at original position of DESTINATION-LIMB
;;;  3. both LIMBs are back in their original positions
;;;  4. SOURCE-LIMB is empty

(define-task give (source-limb destination-limb &key (frames 5))
 (let (delta-x delta-y)			;note: task instance variables
  (serial
   (nontask (setf delta-x
		  (* (direction (person source-limb))
		     (/ (- (x destination-limb) (x source-limb)) frames)))
	    (setf delta-y
		  (/ (- (y destination-limb) (y source-limb)) frames)))
   (serial-do-times (i 1 frames)
		    (task (move-limb source-limb delta-x delta-y)))
   (task (grasp destination-limb (contents source-limb))
	 (let-go source-limb))
   (serial-do-times (i 1 frames)
		    (task (move-limb source-limb (- delta-x) (- delta-y)))))))

(define-task about-face (person)
 (task (turn-around person)))

(define-task spin (entity)
 (serial-do-while t (task (rotate entity 1))))

(define-task fall (entity vy-initial y)
 (let (vy)				;note: task instance variable
  (serial
   (nontask (setf vy vy-initial))
   ;; needs work: CENTER here is a kludge
   (serial-do-while (fuzzy> (y (center entity)) y)
		    (task (move-down entity (min vy (- (y (center entity)) y)))
			  (incf vy gravitational-acceleration))))))

(define-task bounce (person x y &key (frames 5))
 (let (entity limb delta-x delta-y)	;note: task instance variables
  (serial
   (nontask
    (if (contents (left-hand person))
	(if (contents (right-hand person))
	    (error "Can't determine which entity to BOUNCE!")
	    (setf limb (left-hand person)))
	(if (contents (right-hand person))
	    (error "You can't BOUNCE when you are not grasping anything!")
	    (setf limb (left-hand person))))
    (setf entity (contents limb))
    (setf delta-x
	  (* (direction (person limb)) (/ (- x (x limb)) frames)))
    (setf delta-y (/ (- y (y limb)) frames)))
   (task (move-limb limb delta-x delta-y) (let-go limb))
   (serial-do-times (i 1 (1- frames)) (task (move entity delta-x delta-y)))
   (serial-do-times (i 1 (1- frames))
		    (task (move entity (- delta-x) (- delta-y))))
   (task (grasp limb entity) (move-limb limb (- delta-x) (- delta-y))))))

;;; Section: Queue Operations

(defun clear-task-queue () (setf *task-queue-pointer* 0))

(defun display-frame-number (frame-number)
 (draw-text* *world*
	     (format nil "~D" frame-number)
	     (/ 10 pixels-per-foot)
	     (/ (- (window-inside-height *world*) 20) pixels-per-foot)
	     :ink +flipping-ink+))

(defun single-step ()
 (unless (done?)
  (when *display-frame-number?*
   (when *displayed-frame-number*
    (display-frame-number *displayed-frame-number*))
   (setf *displayed-frame-number* (1+ *frame-number*))
   (display-frame-number *displayed-frame-number*))
  (incf *frame-number*)
  (psetq *task-queue* *alternate-task-queue*
	 *alternate-task-queue* *task-queue*)
  (iterate (for f in *figures*) (log-previous f))
  (let ((task-queue-pointer *task-queue-pointer*))
   (setf *task-queue-pointer* 0)
   (iterate
    (for i from 0)
    (for box = (aref *alternate-task-queue* i))
    (while (< i task-queue-pointer))
    (etypecase box
      (task-box
       (funcall (closure box))
       (iterate (for next-box in (next-boxes box))
		(setf (aref *task-queue* *task-queue-pointer*) next-box)
		(incf *task-queue-pointer*)))
      (nontask-box
       (funcall (closure box))
       (iterate
	(for next-box in (next-boxes box))
	(setf (aref *alternate-task-queue* task-queue-pointer) next-box)
	(incf task-queue-pointer)))
      (if-box
       (if (funcall (antecedent box))
	   (iterate (for next-box in (consequent-boxes box))
		    (setf (aref *alternate-task-queue* task-queue-pointer)
			  next-box)
		    (incf task-queue-pointer))
	   (iterate (for next-box in (next-boxes box))
		    (setf (aref *alternate-task-queue* task-queue-pointer)
			  next-box)
		    (incf task-queue-pointer))))
      (join-box
       (cond ((zerop (m box))
	      (iterate (for next-box in (next-boxes box))
		       (setf (aref *alternate-task-queue* task-queue-pointer)
			     next-box)
		       (incf task-queue-pointer))
	      (setf (m box) (n box)))
	     (t (decf (m box))))))))
  (iterate (for f in *figures*) (update f))
  (if *record-draw?* (push '(end-of-frame) *draw-recording*))
  (force-output *world*)
  (if *perceive?* (perceive))))

(defun done? () (zerop *task-queue-pointer*))

(defun submit (task)
 (iterate (for initial-box in (initial-boxes task))
	  (setf (aref *task-queue* *task-queue-pointer*) initial-box)
	  (incf *task-queue-pointer*)))

;;; Section: TVLWEC Event Perception

;;; Section: Displacement and Rotation Computation Routines

(defmethod compute-displacement (p (f line-segment))
 (maybe-check-type p point)
 (/ (distance p (p f)) (size f)))

(defmethod compute-displacement (p (f circle))
 (maybe-check-type p point)
 (rotation- (rotation2 (p f) p) (rotation f)))

(defun compute-rotation (p1 p2 q1 q2)
 (maybe-check-type p1 point)
 (maybe-check-type p2 point)
 (maybe-check-type q1 point)
 (maybe-check-type q2 point)
 (rotation- (rotation2 q1 q2) (rotation2 p1 p2)))

;;; Section: Generic Geometry Computations on Figures

(defun perpendicular-bisector (p q)
 ;; note: no longer used
 (maybe-check-type p point)
 (maybe-check-type q point)
 (let ((x (* 0.5 (+ (x p) (x q))))
       (y (* 0.5 (+ (y p) (y q)))))
  (if (= (x p) (x q))
      (if (= (y p) (y q))
	  (error "Can't form perpendicular bisector when points are the same")
	  (line 0.0 1.0 y))
      (let ((b (/ (- (y q) (y p)) (- (x q) (x p)))))
       (line 1.0 b (+ x (* b y)))))))

(defun tangency-point-between-two-circles (f g)
 ;; note: no longer used
 (maybe-check-type f circle)
 (maybe-check-type g circle)
 (let ((s (distance (p f) (p g))))
  (cond ((and (> s (size f)) (> s (size g)))
	 (point (+ (x (p f)) (* (/ (size f) s) (- (x (p g)) (x (p f)))))
		(+ (y (p f)) (* (/ (size f) s) (- (y (p g)) (y (p f)))))))
	((> (size f) (size g))
	 (point (+ (x (p f)) (* (/ (size f) s) (- (x (p g)) (x (p f)))))
		(+ (y (p f)) (* (/ (size f) s) (- (y (p g)) (y (p f)))))))
	(t (point (+ (x (p g)) (* (/ (size g) s) (- (x (p f)) (x (p g)))))
		  (+ (y (p g)) (* (/ (size g) s) (- (y (p f)) (y (p g))))))))))

;;; Section: Intersection Routines

;;; note: returns NIL if F touches G (by fuzzy notion of touch)
;;;       except in case where one figure is a line segment and the other is
;;;       a circle and they fuzzy touch in one location and overlap in the
;;;       other

;;; overlap?     | point | line | ray | line-segment | circle
;;;----------------------------------------------------------
;;; point        |       |      |     |              |
;;; line         |       |      |     |      Y       |   Y
;;; ray          |       |      |     |              |
;;; line-segment |       |   C  |     |      Y       |   Y
;;; circle       |       |   C  |     |      C       |   Y

(defmethod overlap? ((f line) (g line-segment))
 (and (not (touch? f g)) (intersection-point f g)))

(defmethod overlap? ((f line) (g circle))
 (and (not (touch? f g)) (intersection-point f g)))

(defmethod overlap? ((f line-segment) (g line)) (overlap? g f))

(defmethod overlap? ((f line-segment) (g line-segment))
 (and (not (touch? f g)) (intersection-point f g)))

(defmethod overlap? ((f line-segment) (g circle))
 (multiple-value-bind (p q) (intersection-point f g)
  (and (or (not p) (not q) (not (touch? p q)))
       (or (and p (not (touch? p (p f))) (not (touch? p (q f))))
	   (and q (not (touch? q (p f))) (not (touch? q (q f))))))))

(defmethod overlap? ((f circle) (g line)) (overlap? g f))

(defmethod overlap? ((f circle) (g line-segment)) (overlap? g f))

(defmethod overlap? ((f circle) (g circle))
 (and (not (touch? f g)) (intersection-point f g)))

(defun intersect? (f g) (or (touch? f g) (overlap? f g)))

;;; displacement-rotation | point | line | ray | line-segment | circle
;;;-------------------------------------------------------------------
;;; point                 |       |      |     |              |
;;; line                  |       |      |     |              |
;;; ray                   |       |      |     |              |
;;; line-segment          |       |      |     |      Y       |   Y
;;; circle                |       |      |     |      Y       |   Y

(defmethod displacement-rotation ((f line-segment) (g line-segment))
 ;; needs work: will fail if F is collinear with and overlaps G
 (let ((p (intersection-point (extend-to-line f) (extend-to-line g))))
  (if p
      (values (compute-displacement p f)
	      (compute-displacement p g)
	      (compute-rotation (p f) (q f) (p g) (q g)))
      (values nil nil nil))))

(defmethod displacement-rotation ((f line-segment) (g circle))
 (multiple-value-bind (q1 q2) (intersection-point (extend-to-line f) g)
  (values (if q1 (compute-displacement q1 f) nil)
	  (if q1 (compute-displacement q1 g) nil)
	  (if q1 (compute-rotation (p f) (q f) q1 (p g)) nil)
	  (if q2 (compute-displacement q2 f) nil)
	  (if q2 (compute-displacement q2 g) nil)
	  (if q2 (compute-rotation (p f) (q f) q2 (p g)) nil))))

(defmethod displacement-rotation ((f circle) (g line-segment))
 (multiple-value-bind (q1 q2) (intersection-point f (extend-to-line g))
  (values (if q1 (compute-displacement q1 f) nil)
	  (if q1 (compute-displacement q1 g) nil)
	  (if q1 (compute-rotation q1 (p f) (p g) (q g)) nil)
	  (if q2 (compute-displacement q2 f) nil)
	  (if q2 (compute-displacement q2 g) nil)
	  (if q2 (compute-rotation q2 (p f) (p g) (q g)) nil))))

(defmethod displacement-rotation ((f circle) (g circle))
 ;; needs work: will fail if F and G are concentric and equiradial
 (multiple-value-bind (q1 q2) (intersection-point f g)
  (values (if q1 (compute-displacement q1 f) nil)
	  (if q1 (compute-displacement q1 g) nil)
	  (if q1 (compute-rotation q1 (p f) q1 (p g)) nil)
	  (if q2 (compute-displacement q2 f) nil)
	  (if q2 (compute-displacement q2 g) nil)
	  (if q2 (compute-rotation q2 (p f) q2 (p g)) nil))))

;;; displacement-rotation-point | point | line | ray | line-segment | circle
;;;-------------------------------------------------------------------------
;;; point                       |       |      |     |              |
;;; line                        |       |      |     |              |
;;; ray                         |       |      |     |              |
;;; line-segment                |       |      |     |      Y       |   Y
;;; circle                      |       |      |     |      Y       |   Y

(defmethod displacement-rotation-point ((f line-segment) (g line-segment) p)
 (maybe-check-type p point)
 (values (compute-displacement p f)
	 (compute-displacement p g)
	 (compute-rotation (p f) (q f) (p g) (q g))))

(defmethod displacement-rotation-point ((f line-segment) (g circle) p)
 (maybe-check-type p point)
 (values (compute-displacement p f)
	 (compute-displacement p g)
	 (compute-rotation (p f) (q f) p (p g))))

(defmethod displacement-rotation-point ((f circle) (g line-segment) p)
 (maybe-check-type p point)
 (values (compute-displacement p f)
	 (compute-displacement p g)
	 (compute-rotation p (p f) (p g) (q g))))

(defmethod displacement-rotation-point ((f circle) (g circle) p)
 (maybe-check-type p point)
 (values (compute-displacement p f)
	 (compute-displacement p g)
	 (compute-rotation p (p f) p (p g))))

(defmethod p ((j joint))
 (cond ((displacement-f j)
	(etypecase (f j)
	  (line-segment
	   (point (+ (x (p (f j)))
		     (* (displacement-f j) (- (x (q (f j))) (x (p (f j))))))
		  (+ (y (p (f j)))
		     (* (displacement-f j) (- (y (q (f j))) (y (p (f j))))))))
	  (circle
	   (let ((rotation (rotation+ (displacement-f j) (rotation (f j)))))
	    (point (+ (x (p (f j))) (* (size (f j)) (cos rotation)))
		   (+ (y (p (f j))) (* (size (f j)) (sin rotation))))))))
       ((displacement-g j)
	(etypecase (g j)
	  (line-segment
	   (point (+ (x (p (g j)))
		     (* (displacement-g j) (- (x (q (g j))) (x (p (g j))))))
		  (+ (y (p (g j)))
		     (* (displacement-g j) (- (y (q (g j))) (y (p (g j))))))))
	  (circle
	   (let ((rotation (rotation+ (displacement-g j) (rotation (g j)))))
	    (point (+ (x (p (g j))) (* (size (g j)) (cos rotation)))
		   (+ (y (p (g j))) (* (size (g j)) (sin rotation))))))))
       (t (error "Cannot reliably determine the coordinates of this joint: ~S"
		 j))))

(defun kludge-p (j)
 (maybe-check-type j joint)
 ;; needs work: This is really crufty. It was introduced since you need to
 ;;             determine p(j) when j's parameters have not yet been updated.
 (multiple-value-bind (p1 p2) (intersection-point (f j) (g j))
  (cond
    ((eq p1 t)
     (error "Cannot reliably determine the coordinates of this joint: ~S" j))
    (p1 (if p2
	    (let ((q (p j)))
	     (if (< (distance p1 q) (distance p2 q)) p1 p2))
	    p1))
    (t (if p2 p2 (error "Broken joint: ~S" j))))))

(defun kludgier-p (j)
 (maybe-check-type j joint)
 ;; needs work: This is really crufty. It was introduced since you need to
 ;;             determine p(j) when j's parameters have not yet been updated.
 (multiple-value-bind (p1 p2) (intersection-point (f j) (g j))
  (cond
    ((eq p1 t)
     (error "Cannot reliably determine the coordinates of this joint: ~S" j))
    (p1 p1)
    (t (if p2 p2 (error "Broken joint: ~S" j))))))

;;; Section: Imagination

(defun subset-of (set)
 (if (null set)
     nil
     (let ((tail (subset-of (rest set))))
      (either (cons (first set) tail) tail))))

(defun subset? (x y)
 (every #'(lambda (element) (member element y :test #'eq)) x))

(defun set= (x y) (and (subset? x y) (subset? y x)))

(defun connected-components (set predicate)
 #+symbolics (declare (sys:downward-funarg predicate))
 (iterate
  (with components = (iterate (for element in set) (collect (list element))))
  (for (element1 . remaining-set) on set)
  (for component1 = (find element1 components
			  :test #'(lambda (x y) (member x y :test #'eq))))
  (iterate
   (for element2 in remaining-set)
   (when (and (not (member element2 component1 :test #'eq))
	      (funcall predicate element1 element2))
    (for component2 = (find element2 components
			    :test #'(lambda (x y) (member x y :test #'eq))))
    (setf components
	  (cons (append component1 component2)
		(delete component1
			(delete component2 components :test #'eq :count 1)
			:test #'eq :count 1)))
    (setf component1 (first components))))
  (finally (return components))))

(defun connected-components-cached (figures joints)
 (let ((entry1 (assoc figures *connected-components-cache* :test #'equal)))
  (unless entry1
   (setf entry1 (cons figures nil))
   (push entry1 *connected-components-cache*))
  (let ((entry2 (assoc joints (cdr entry1) :test #'equal)))
   (unless entry2
    (setf entry2
	  (cons joints
		(connected-components
		 figures #'(lambda (f g) (attached? f g joints)))))
    (push entry2 (cdr entry1)))
   (cdr entry2))))

(defun connected? (set predicate)
 #+symbolics (declare (sys:downward-funarg predicate))
 (= (length (connected-components set predicate)) 1))

(defun connected-component (element set predicate)
 #+symbolics (declare (sys:downward-funarg predicate))
 (find-if #'(lambda (component) (member element component :test #'eq))
	  (connected-components set predicate)))

(defun rigid? (j) (and (displacement-f j) (displacement-g j) (rotation j)))

(defun recently-rigid? (f g)
 (multiple-value-bind (previous-displacement-f1
		       previous-displacement-g1
		       previous-rotation1
		       previous-displacement-f2
		       previous-displacement-g2
		       previous-rotation2)
     (previous (displacement-rotation f g))
  (multiple-value-bind (displacement-f1
			displacement-g1
			rotation1
			displacement-f2
			displacement-g2
			rotation2)
      (displacement-rotation f g)
   (and
    previous-rotation1
    rotation1
    (if previous-rotation2
	(and
	 rotation2
	 (or
	  (and
	   (etypecase f
	     (line-segment
	      (and (fuzzy= displacement-f1 previous-displacement-f1)
		   (fuzzy= displacement-f2 previous-displacement-f2)))
	     (circle
	      (and (fuzzy=rotation displacement-f1 previous-displacement-f1)
		   (fuzzy=rotation displacement-f2 previous-displacement-f2))))
	   (etypecase g
	     (line-segment
	      (and (fuzzy= displacement-g1 previous-displacement-g1)
		   (fuzzy= displacement-g2 previous-displacement-g2)))
	     (circle
	      (and (fuzzy=rotation displacement-g1 previous-displacement-g1)
		   (fuzzy=rotation displacement-g2 previous-displacement-g2))))
	   (fuzzy=rotation rotation1 previous-rotation1)
	   (fuzzy=rotation rotation2 previous-rotation2))
	  (and
	   (etypecase f
	     (line-segment
	      (and (fuzzy= displacement-f1 previous-displacement-f2)
		   (fuzzy= displacement-f2 previous-displacement-f1)))
	     (circle
	      (and (fuzzy=rotation displacement-f1 previous-displacement-f2)
		   (fuzzy=rotation displacement-f2 previous-displacement-f1))))
	   (etypecase g
	     (line-segment
	      (and (fuzzy= displacement-g1 previous-displacement-g2)
		   (fuzzy= displacement-g2 previous-displacement-g1)))
	     (circle
	      (and (fuzzy=rotation displacement-g1 previous-displacement-g2)
		   (fuzzy=rotation displacement-g2 previous-displacement-g1))))
	   (fuzzy=rotation rotation1 previous-rotation2)
	   (fuzzy=rotation rotation2 previous-rotation1))))
	(and (not rotation2)
	     (etypecase f
	       (line-segment
		(fuzzy= displacement-f1 previous-displacement-f1))
	       (circle
		(fuzzy=rotation displacement-f1 previous-displacement-f1)))
	     (etypecase g
	       (line-segment
		(fuzzy= displacement-g1 previous-displacement-g1))
	       (circle
		(fuzzy=rotation displacement-g1 previous-displacement-g1)))
	     (fuzzy=rotation rotation1 previous-rotation1)))))))

(defmethod translation-bounds ((f line-segment) rotation)
 (let ((f1 (extend-to-line (ray (p f) rotation)))
       (f2 (extend-to-line (ray (q f) rotation))))
  (if (or (fuzzy=rotation rotation half-pi)
	  (fuzzy=rotation rotation minus-half-pi))
      (if (<= (x f1) (x f2)) (values f1 f2) (values f2 f1))
      (if (<= (y f1) (y f2)) (values f1 f2) (values f2 f1)))))

(defmethod translation-bounds ((f circle) rotation)
 (multiple-value-bind (f1 f2)
     (parallel-lines-at-distance
      (extend-to-line (ray (p f) rotation)) (size f))
  (if (or (fuzzy=rotation rotation half-pi)
	  (fuzzy=rotation rotation minus-half-pi))
      (if (<= (x f1) (x f2)) (values f1 f2) (values f2 f1))
      (if (<= (y f1) (y f2)) (values f1 f2) (values f2 f1)))))

(defmethod translation-bounds ((figures list) rotation)
 (iterate
  (with low = nil)
  (with high = nil)
  (for f in figures)
  (multiple-value-bind (f1 f2) (translation-bounds f rotation)
   (cond ((null low)
	  (setf low f1)
	  (setf high f2))
	 ((or (fuzzy=rotation rotation half-pi)
	      (fuzzy=rotation rotation minus-half-pi))
	  (if (< (x f1) (x low)) (setf low f1))
	  (if (> (x f2) (x high)) (setf high f2)))
	 (t (if (< (y f1) (y low)) (setf low f1))
	    (if (> (y f2) (y high)) (setf high f2)))))
  (finally (return (values low high)))))

(defun above? (p f)
 (maybe-check-type p point)
 (maybe-check-type f line)
 (if (plusp (b f))
     (> (+ (* (a f) (x p)) (* (b f) (y p))) (c f))
     (< (+ (* (a f) (x p)) (* (b f) (y p))) (c f))))

(defun below? (p f)
 (maybe-check-type p point)
 (maybe-check-type f line)
 (if (plusp (b f))
     (< (+ (* (a f) (x p)) (* (b f) (y p))) (c f))
     (> (+ (* (a f) (x p)) (* (b f) (y p))) (c f))))

(defmethod translation-barrier? ((f line-segment) f1 f2)
 (and (or (above? (p f) f1) (above? (q f) f1))
      (or (below? (p f) f2) (below? (q f) f2))))

(defmethod translation-barrier? ((f circle) f1 f2)
 (or (overlap? f f1)
     (overlap? f f2)
     (and (above? (p f) f1) (below? (p f) f2))))

(defvar *translation-times* nil)

(defun time-translation-limit (f g rotation)
 (let* ((start (get-internal-real-time))
	(result (translation-limit f g rotation)))
  (push (/ (float (- (get-internal-real-time) start))
	   internal-time-units-per-second)
	*translation-times*)
  result))

(defvar *rotation-times* nil)

(defun time-rotation-limit (f g p direction)
 (let* ((start (get-internal-real-time))
	(result (rotation-limit f g p direction)))
  (push (/ (float (- (get-internal-real-time) start))
	   internal-time-units-per-second)
	*rotation-times*)
  result))

(defun aggregate-translation-limit
    (foreground background rotation layer-assertions)
 (maybe-check-type foreground list)
 (maybe-check-type background list)
 (maybe-check-type layer-assertions list)
 (block outer
  (let ((limit nil))
   (iterate
    (for f-cluster in foreground)
    (iterate
     (for f in f-cluster)
     (let ((l (time-translation-limit f (horizontal-line-at 0.0) rotation)))
      (when l
       (if (fuzzy= l 0.0) (return-from outer 0.0))
       (if (or (null limit) (< l limit)) (setf limit l))))))
   (multiple-value-bind (f1 f2) (translation-bounds foreground rotation)
    (iterate
     (for g-cluster in background)
     (iterate
      (for g in g-cluster)
      (if (translation-barrier? g f1 f2)
	  (iterate
	   (for f-cluster in foreground)
	   (iterate
	    (for f in f-cluster)
	    (if (same-layer? f g layer-assertions)
		(let ((l (time-translation-limit f g rotation)))
		 (when l
		  (if (fuzzy= l 0.0) (return-from outer 0.0))
		  (if (or (null limit) (< l limit)) (setf limit l))))))))))))))

(defun cluster-translation-limit
    (foreground background rotation layer-assertions)
 (maybe-check-type foreground list)
 (maybe-check-type background list)
 (maybe-check-type layer-assertions list)
 (block outer
  (let ((limit nil)
	(barriers '()))
   (iterate
    (for f-cluster in foreground)
    (iterate
     (for f in f-cluster)
     (let ((l (time-translation-limit f (horizontal-line-at 0.0) rotation)))
      (when l
       (if (fuzzy= l 0.0) (return-from outer (values 0.0 '())))
       (if (or (null limit) (< l limit)) (setf limit l))))))
   (multiple-value-bind (f1 f2) (translation-bounds foreground rotation)
    (iterate
     (for g-cluster in background)
     (iterate
      inner
      (for g in g-cluster)
      (if (translation-barrier? g f1 f2)
	  (iterate
	   (for f-cluster in foreground)
	   (iterate
	    (for f in f-cluster)
	    (if (same-layer? f g layer-assertions)
		(let ((l (time-translation-limit f g rotation)))
		 (when l
		  (if (or (null limit) (< l limit)) (setf limit l))
		  (when (fuzzy= l 0.0)
		   (push g-cluster barriers)
		   (return-from inner)))))))))))
   (values limit barriers))))

(defmethod rotation-bounds ((f line-segment) p)
 (maybe-check-type p point)
 (let ((d1 (distance (p f) p))
       (d2 (distance (q f) p))
       (q (closest-point-on-line-to-point p (extend-to-line f))))
  (values (if (touch? q f) (min d1 d2 (distance p q)) (min d1 d2))
	  (max d1 d2))))

(defmethod rotation-bounds ((f circle) p)
 (maybe-check-type p point)
 (let ((d (distance (p f) p)))
  (values (max (- d (size f)) 0.0) (+ d (size f)))))

(defmethod rotation-bounds ((figures list) p)
 (maybe-check-type p point)
 (iterate
  (with low = nil)
  (with high = nil)
  (for f in figures)
  (multiple-value-bind (d1 d2) (rotation-bounds f p)
   (cond ((null low)
	  (setf low d1)
	  (setf high d2))
	 (t (if (< d1 low) (setf low d1))
	    (if (> d2 high) (setf high d2)))))
  (finally (return (values low high)))))

(defmethod rotation-barrier? ((f line-segment) p low high)
 (maybe-check-type p point)
 (let ((d1 (distance (p f) p))
       (d2 (distance (q f) p)))
  (and (or (> d1 low) (> d2 low))
       (or (< d1 high) (< d2 high) (overlap? f (circle p high))))))

(defmethod rotation-barrier? ((f circle) p low high)
 (maybe-check-type p point)
 (let ((d (distance (p f) p)))
  (and (> d (max (- low (size f)) 0.0)) (< d (+ high (size f))))))

(defun aggregate-rotation-limit (foreground background p layer-assertions)
 (maybe-check-type foreground list)
 (maybe-check-type background list)
 (maybe-check-type p point)
 (maybe-check-type layer-assertions list)
 (let ((q (center-of-mass foreground)))
  (if (touch? p q)
      0.0
      (let ((limit (rotation- minus-half-pi (rotation2 p q))))
       (cond
	 ((fuzzy=rotation limit 0.0) 0.0)
	 ((minusp limit)
	  (block outer
	   (iterate
	    (for f-cluster in foreground)
	    (iterate
	     (for f in f-cluster)
	     (let ((l (time-rotation-limit
		       f (horizontal-line-at 0.0) p 'clockwise)))
	      (when l
	       (if (fuzzy= l 0.0) (return-from outer 0.0))
	       (if (and (fuzzy<= l 0.0) (> l limit)) (setf limit l))))))
	   (multiple-value-bind (low high) (rotation-bounds foreground p)
	    (iterate
	     (for g-cluster in background)
	     (iterate
	      (for g in g-cluster)
	      (if (rotation-barrier? g p low high)
		  (iterate
		   (for f-cluster in foreground)
		   (iterate
		    (for f in f-cluster)
		    (if (same-layer? f g layer-assertions)
			(let ((l (time-rotation-limit f g p 'clockwise)))
			 (when l
			  (if (fuzzy= l 0.0) (return-from outer 0.0))
			  (if (and (fuzzy<= l 0.0) (> l limit))
			      (setf limit l)))))))))))))
	 (t (block outer
	     (iterate
	      (for f-cluster in foreground)
	      (iterate
	       (for f in f-cluster)
	       (let ((l (time-rotation-limit
			 f (horizontal-line-at 0.0) p 'counterclockwise)))
		(when l
		 (if (fuzzy= l 0.0) (return-from outer 0.0))
		 (if (and (fuzzy>= l 0.0) (< l limit)) (setf limit l))))))
	     (multiple-value-bind (low high) (rotation-bounds foreground p)
	      (iterate
	       (for g-cluster in background)
	       (iterate
		(for g in g-cluster)
		(if (rotation-barrier? g p low high)
		    (iterate
		     (for f-cluster in foreground)
		     (iterate
		      (for f in f-cluster)
		      (if (same-layer? f g layer-assertions)
			  (let ((l (time-rotation-limit
				    f g p 'counterclockwise)))
			   (when l
			    (if (fuzzy= l 0.0) (return-from outer 0.0))
			    (if (and (fuzzy>= l 0.0) (< l limit))
				(setf limit l))))))))))))))))))

(defun cluster-rotation-limit (foreground background p layer-assertions)
 (maybe-check-type foreground list)
 (maybe-check-type background list)
 (maybe-check-type p point)
 (maybe-check-type layer-assertions list)
 (let ((q (center-of-mass foreground)))
  (if (touch? p q)
      (values 0.0 '())
      (let ((limit (rotation- minus-half-pi (rotation2 p q)))
	    (barriers '()))
       (cond
	 ((fuzzy=rotation limit 0.0) (values 0.0 '()))
	 ((minusp limit)
	  (block outer
	   (iterate
	    (for f-cluster in foreground)
	    (iterate
	     (for f in f-cluster)
	     (let ((l (time-rotation-limit
		       f (horizontal-line-at 0.0) p 'clockwise)))
	      (when l
	       (if (fuzzy= l 0.0) (return-from outer (values 0.0 '())))
	       (if (and (fuzzy<= l 0.0) (> l limit)) (setf limit l))))))
	   (multiple-value-bind (low high) (rotation-bounds foreground p)
	    (iterate
	     (for g-cluster in background)
	     (iterate
	      inner
	      (for g in g-cluster)
	      (if (rotation-barrier? g p low high)
		  (iterate
		   (for f-cluster in foreground)
		   (iterate
		    (for f in f-cluster)
		    (if (same-layer? f g layer-assertions)
			(let ((l (time-rotation-limit f g p 'clockwise)))
			 (when l
			  (if (and (fuzzy<= l 0.0) (> l limit)) (setf limit l))
			  (when (fuzzy= l 0.0)
			   (push g-cluster barriers)
			   (return-from inner)))))))))))
	   (values limit barriers)))
	 (t (block outer
	     (iterate
	      (for f-cluster in foreground)
	      (iterate
	       (for f in f-cluster)
	       (let ((l (time-rotation-limit
			 f (horizontal-line-at 0.0) p 'counterclockwise)))
		(when l
		 (if (fuzzy= l 0.0) (return-from outer (values 0.0 '())))
		 (if (and (fuzzy>= l 0.0) (< l limit)) (setf limit l))))))
	     (multiple-value-bind (low high) (rotation-bounds foreground p)
	      (iterate
	       (for g-cluster in background)
	       (iterate
		inner
		(for g in g-cluster)
		(if (rotation-barrier? g p low high)
		    (iterate
		     (for f-cluster in foreground)
		     (iterate
		      (for f in f-cluster)
		      (if (same-layer? f g layer-assertions)
			  (let ((l (time-rotation-limit
				    f g p 'counterclockwise)))
			   (when l
			    (if (and (fuzzy>= l 0.0) (< l limit))
				(setf limit l))
			    (when (fuzzy= l 0.0)
			     (push g-cluster barriers)
			     (return-from inner)))))))))))
	     (values limit barriers))))))))

(defmethod imagine-translate-internal ((f figure) delta-x delta-y display?)
 (incf (imagined (x (p f))) delta-x)
 (incf (imagined (y (p f))) delta-y)
 (incf (imagined (x (q f))) delta-x)
 (incf (imagined (y (q f))) delta-y)
 (if display? (update f t)))

(defmethod imagine-translate-internal
    ((foreground list) delta-x delta-y display?)
 (iterate (for f in foreground)
	  (imagine-translate-internal f delta-x delta-y display?)))

(defun imagine-translate (f delta rotation display?)
 (imagined
  (imagine-translate-internal
   f (* delta (cos rotation)) (* delta (sin rotation)) display?)
  (if display? (force-output *world*))
  (if *record-draw?* (push '(end-of-imagination-step) *draw-recording*))
  (when *dump-postscript?*
   (save-microworld-as-postscript-file
    (format nil "~~/publications/phdthesis/screen/frame~D-~D.ps"
	    *frame-number* *imagination-number*))
   (incf *imagination-number*))))

(defmethod imagine-rotate-internal ((f figure) delta p display?)
 (let ((distance (distance p (p f))))
  (unless (zerop distance)
   (let ((rotation (rotation2 p (p f))))
    (setf (imagined (x (p f)))
	  (+ (imagined (x p)) (* distance (cos (+ rotation delta)))))
    (setf (imagined (y (p f)))
	  (+ (imagined (y p)) (* distance (sin (+ rotation delta))))))))
 (let ((distance (distance p (q f))))
  (unless (zerop distance)
   (let ((rotation (rotation2 p (q f))))
    (setf (imagined (x (q f)))
	  (+ (imagined (x p)) (* distance (cos (+ rotation delta)))))
    (setf (imagined (y (q f)))
	  (+ (imagined (y p)) (* distance (sin (+ rotation delta))))))))
 (if display? (update f t)))

(defmethod imagine-rotate-internal ((foreground list) delta p display?)
 (iterate (for f in foreground) (imagine-rotate-internal f delta p display?)))

(defun imagine-rotate (f delta p display?)
 (imagined
  (imagine-rotate-internal f delta p display?)
  (if display? (force-output *world*))
  (if *record-draw?* (push '(end-of-imagine-step) *draw-recording*))
  (when *dump-postscript?*
   (save-microworld-as-postscript-file
    (format nil "~~/publications/phdthesis/screen/frame~D-~D.ps"
	    *frame-number* *imagination-number*))
   (incf *imagination-number*))))

(defun auxiliary-cluster (component components joints layer-assertions)
 (let* ((components (remove component components :test #'eq :count 1))
	(cluster
	 (cons component
	       (if (null joints)
		   ;; note: This is an efficiency kludge for the first frame.
		   (either '() (list (a-member-of components)))
		   (subset-of components)))))
  (unless (connected?
	   cluster
	   #'(lambda (f g) (imagined (contacts? f g layer-assertions))))
   (fail))
  cluster))

(defun pivot-points (foreground background layer-assertions)
 ;; A pivot point must be between figures that touch and are on the same layer
 ;; or are on the ground.
 (append
  (iterate
   (for f in foreground)
   (etypecase f
     (line-segment
      (if (or (fuzzy= (y (p f)) 0.0)
	      (some #'(lambda (g-cluster)
		       (some #'(lambda (g)
				(and (same-layer? f g layer-assertions)
				     (touch? (p f) g)))
			     g-cluster))
		    background))
	  (collect (p f)))
      (if (or (fuzzy= (y (q f)) 0.0)
	      (some #'(lambda (g-cluster)
		       (some #'(lambda (g)
				(and (same-layer? f g layer-assertions)
				     (touch? (q f) g)))
			     g-cluster))
		    background))
	  (collect (q f))))
     (circle (if (or (fuzzy= (y (p f)) (size f))
		     (contacts? f background layer-assertions))
		 (collect (p f))))))
  (iterate
   outer
   (for g-cluster in background)
   (iterate
    (for g in g-cluster)
    (in outer
	(etypecase g
	  (line-segment
	   (if (some #'(lambda (f) (and (same-layer? f g layer-assertions)
					(touch? f (p g))))
		     foreground)
	       (collect (p g)))
	   (if (some #'(lambda (f) (and (same-layer? f g layer-assertions)
					(touch? f (q g))))
		     foreground)
	       (collect (q g))))
	  (circle (if (contacts? foreground g layer-assertions)
		      (collect (p g))))))))))

;;; A translation rotation must be the rotation of a line segment in the
;;; foreground that touches one of the endpoints of and is on the same layer
;;; as a line segment in the background or that is tangent to and on the same
;;; layer as a circle in the background or visa versa.

(defmethod translation-rotation-contacts? (f (g line-segment) layer-assertions)
 (maybe-check-type f line-segment)
 (and (same-layer? f g layer-assertions)
      (or (touch? f (p g)) (touch? f (q g)))))

(defmethod translation-rotation-contacts? (f (g circle) layer-assertions)
 (maybe-check-type f line-segment)
 (and (same-layer? f g layer-assertions)
      ;; note: This is a really inefficient way to check that F is tangent
      ;;       to G.
      (touch? f g)
      (touch? (extend-to-line f) g)))

(defmethod translation-rotation-contacts?
    (f (background list) layer-assertions)
 (maybe-check-type f line-segment)
 (some #'(lambda (g) (translation-rotation-contacts? f g layer-assertions))
       background))

(defmethod translation-rotations ((f line-segment) g layer-assertions)
 (maybe-check-type layer-assertions list)
 (if (translation-rotation-contacts? f g layer-assertions)
     (let ((rotation (rotation f)))
      ;; A translation rotation must not be vertical or horizontal.
      (if (and (fuzzy/= rotation minus-pi)
	       (fuzzy/= rotation minus-half-pi)
	       (fuzzy/= rotation 0.0)
	       (fuzzy/= rotation half-pi)
	       (fuzzy/= rotation pi))
	  (list (if (minusp rotation) rotation (rotation+ rotation pi)))
	  '()))
     '()))

(defmethod translation-rotations ((f circle) g layer-assertions)
 (declare (ignore g layer-assertions))
 (maybe-check-type layer-assertions list)
 '())

(defmethod translation-rotations ((foreground list) g layer-assertions)
 (maybe-check-type layer-assertions list)
 (iterate (for f in foreground)
	  (appending (translation-rotations f g layer-assertions))))

(defun clusterless-imagine-internal
    (figures joints layer-assertions predicate result display?)
 ;; note: Not currently used.
 #+symbolics (declare (sys:downward-funarg predicate result))
 (setf *imagination-number* 0)
 (iterate (for f in figures)
	  (setf (imagined (x (p f))) (x (p f)))
	  (setf (imagined (y (p f))) (y (p f)))
	  (setf (imagined (x (q f))) (x (q f)))
	  (setf (imagined (y (q f))) (y (q f))))
 (let* ((joints
	 (iterate (for j in joints)
		  (if (and (member (f j) figures :test #'eq)
			   (member (g j) figures :test #'eq))
		      (collect j))))
	(components (connected-components-cached figures joints))
	(triples
	 (iterate
	  (for j in joints)
	  ;; needs work: To vary displacement here.
	  (unless (rotation j)
	   (for component =
		(find-if #'(lambda (component)
			    (member (f j) component :test #'eq))
			 components))
	   (for halves =
		(connected-components-cached
		 component
		 (iterate (for j1 in joints)
			  (if (and (not (eq j1 j))
				   (member (f j1) component :test #'eq)
				   (member (g j1) component :test #'eq))
			      (collect j1)))))
	   (if (= (length halves) 2)
	       (collect
		(list j
		      (list (first halves) (second halves))
		      (cons (first halves)
			    (cons (second halves)
				  (remove component components
					  :test #'eq :count 1))))))))))
  (iterate
   outer
   (for again? = nil)
   (iterate
    (for component in components)
    (for foreground = (list component))
    (for background = (set-difference components foreground :test #'eq))
    ;; Translating an object downwards.
    (let ((translation-limit
	   (imagined
	    (aggregate-translation-limit
	     foreground background minus-half-pi layer-assertions))))
     (when (fuzzy/= translation-limit 0.0)
      (imagine-translate foreground translation-limit minus-half-pi display?)
      (if (funcall predicate) (return-from outer t))
      (setf again? t)))
    ;; Sliding an object along an inclined surface.
    (iterate
     inner
     (for rotation in
	  (remove-duplicates
	   (imagined (append (translation-rotations
			      foreground background layer-assertions)
			     (translation-rotations
			      background foreground layer-assertions)))
	   :test #'fuzzy=))
     (for translation-limit =
	  (imagined (aggregate-translation-limit
		     foreground background rotation layer-assertions)))
     (when (fuzzy/= translation-limit 0.0)
      (imagine-translate foreground translation-limit rotation display?)
      (if (funcall predicate) (return-from outer t))
      (setf again? t)
      (return-from inner)))
    ;; An object falling over.
    (iterate
     inner
     ;; We sort the points so that the rotation around the pivot with the
     ;; greatest torque gets tried first. This is provably always the
     ;; lowest point. We also need both pivot points of foreground
     ;; relative to background (e.g. the leg something is standing on)
     ;; and for background relative to foreground (e.g. something
     ;; balanced on a pivot point). Likewise for circles (e.g. a circle
     ;; rolling off something or something rolling off a circle).
     (for p in (imagined
		(sort (pivot-points component background layer-assertions)
		      #'<
		      :key #'y)))
     (for rotation-limit = (imagined
			    (aggregate-rotation-limit
			     foreground background p layer-assertions)))
     (when (fuzzy/=rotation rotation-limit 0.0)
      (imagine-rotate foreground rotation-limit p display?)
      (if (funcall predicate) (return-from outer t))
      (setf again? t)
      (return-from inner))))
   ;; Varying a flexible parameter of a joint.
   ;; needs work: To vary displacement here.
   ;; needs work: To prefer the joint with the greatest torque.
   (iterate
    (for (j halves components) in triples)
    (for p = (imagined (p j)))
    (iterate
     (for half in halves)
     (for foreground = (list half))
     (for background = (set-difference components foreground :test #'eq))
     (for rotation-limit =
	  (imagined (aggregate-rotation-limit
		     foreground background p layer-assertions)))
     (when (fuzzy/=rotation rotation-limit 0.0)
      (imagine-rotate foreground rotation-limit p display?)
      (if (funcall predicate) (return-from outer t))
      (setf again? t))))
   (unless again? (return-from outer (funcall result)))
   (finally-protected
    (if *record-draw?* (push '(end-of-imagination) *draw-recording*))
    (when display?
     (unless (eq display? 'no-pause) (read-char))
     (iterate (for f in figures)
	      (if (or (/= (imagined (x (p f))) (x (p f)))
		      (/= (imagined (y (p f))) (y (p f)))
		      (/= (imagined (x (q f))) (x (q f)))
		      (/= (imagined (y (q f))) (y (q f))))
		  (update f t))))))))

(defun cluster-imagine-internal
    (figures joints layer-assertions predicate result display?)
 ;; note: Not currently used.
 #+symbolics (declare (sys:downward-funarg predicate result))
 (setf *imagination-number* 0)
 (iterate (for f in figures)
	  (setf (imagined (x (p f))) (x (p f)))
	  (setf (imagined (y (p f))) (y (p f)))
	  (setf (imagined (x (q f))) (x (q f)))
	  (setf (imagined (y (q f))) (y (q f))))
 (let* ((joints
	 (iterate (for j in joints)
		  (if (and (member (f j) figures :test #'eq)
			   (member (g j) figures :test #'eq))
		      (collect j))))
	(components (connected-components-cached figures joints))
	(triples
	 (iterate
	  (for j in joints)
	  ;; needs work: To vary displacement here.
	  (unless (rotation j)
	   (for component =
		(find-if #'(lambda (component)
			    (member (f j) component :test #'eq))
			 components))
	   (for halves =
		(connected-components-cached
		 component
		 (iterate (for j1 in joints)
			  (if (and (not (eq j1 j))
				   (member (f j1) component :test #'eq)
				   (member (g j1) component :test #'eq))
			      (collect j1)))))
	   (if (= (length halves) 2)
	       (collect
		(list j
		      (list (first halves) (second halves))
		      (cons (first halves)
			    (cons (second halves)
				  (remove component components
					  :test #'eq :count 1))))))))))
  (iterate
   outer
   (for again? = nil)
   (iterate
    (for component in components)
    (for-effects
     (let* ((foreground (auxiliary-cluster
			 component
			 (remove component components :test #'eq :count 1)
			 joints
			 layer-assertions))
	    (background (set-difference components foreground :test #'eq)))
      ;; Translating an object downwards.
      (let ((translation-limit
	     (imagined
	      (aggregate-translation-limit
	       foreground background minus-half-pi layer-assertions))))
       (when (fuzzy/= translation-limit 0.0)
	(imagine-translate foreground translation-limit minus-half-pi display?)
	(if (funcall predicate) (return-from outer t))
	(setf again? t)))
      ;; Sliding an object along an inclined surface.
      (iterate
       inner
       (for rotation in
	    (remove-duplicates
	     (imagined (append (translation-rotations
				component background layer-assertions)
			       (translation-rotations
				background component layer-assertions)))
	     :test #'fuzzy=))
       (for translation-limit =
	    (imagined (aggregate-translation-limit
		       foreground background rotation layer-assertions)))
       (when (fuzzy/= translation-limit 0.0)
	(imagine-translate foreground translation-limit rotation display?)
	(if (funcall predicate) (return-from outer t))
	(setf again? t)
	(return-from inner)))
      ;; An object falling over.
      (iterate
       inner
       ;; We sort the points so that the rotation around the pivot with the
       ;; greatest torque gets tried first. This is provably always the
       ;; lowest point. We also need both pivot points of foreground
       ;; relative to background (e.g. the leg something is standing on)
       ;; and for background relative to foreground (e.g. something
       ;; balanced on a pivot point). Likewise for circles (e.g. a circle
       ;; rolling off something or something rolling off a circle).
       (for p in (imagined
		  (sort (pivot-points component background layer-assertions)
			#'<
			:key #'y)))
       (for rotation-limit = (imagined
			      (aggregate-rotation-limit
			       foreground background p layer-assertions)))
       (when (fuzzy/=rotation rotation-limit 0.0)
	(imagine-rotate foreground rotation-limit p display?)
	(if (funcall predicate) (return-from outer t))
	(setf again? t)
	(return-from inner))))))
   ;; Varying a flexible parameter of a joint.
   ;; needs work: To vary displacement here.
   ;; needs work: To prefer the joint with the greatest torque.
   (iterate
    (for (j halves components) in triples)
    (for p = (imagined (p j)))
    (iterate
     (for half in halves)
     (for-effects
      (let* ((foreground
	      (auxiliary-cluster half components joints layer-assertions))
	     (background (set-difference components foreground :test #'eq))
	     (rotation-limit
	      (imagined (aggregate-rotation-limit
			 foreground background p layer-assertions))))
       (when (fuzzy/=rotation rotation-limit 0.0)
	(imagine-rotate foreground rotation-limit p display?)
	(if (funcall predicate) (return-from outer t))
	(setf again? t))))))
   (unless again? (return-from outer (funcall result)))
   (finally-protected
    (if *record-draw?* (push '(end-of-imagination) *draw-recording*))
    (when display?
     (unless (eq display? 'no-pause) (read-char))
     (iterate (for f in figures)
	      (if (or (/= (imagined (x (p f))) (x (p f)))
		      (/= (imagined (y (p f))) (y (p f)))
		      (/= (imagined (x (q f))) (x (q f)))
		      (/= (imagined (y (q f))) (y (q f))))
		  (update f t))))))))

(defun imagine-internal
    (figures joints layer-assertions predicate result display?)
 #+symbolics (declare (sys:downward-funarg predicate result))
 (setf *imagination-number* 0)
 (iterate (for f in figures)
	  (setf (imagined (x (p f))) (x (p f)))
	  (setf (imagined (y (p f))) (y (p f)))
	  (setf (imagined (x (q f))) (x (q f)))
	  (setf (imagined (y (q f))) (y (q f))))
 (let* ((joints
	 (iterate (for j in joints)
		  (if (and (member (f j) figures :test #'eq)
			   (member (g j) figures :test #'eq))
		      (collect j))))
	(components (connected-components-cached figures joints))
	(triples
	 (iterate
	  (for j in joints)
	  ;; needs work: To vary displacement here.
	  (unless (rotation j)
	   (for component =
		(find-if #'(lambda (component)
			    (member (f j) component :test #'eq))
			 components))
	   (for halves =
		(connected-components-cached
		 component
		 (iterate (for j1 in joints)
			  (if (and (not (eq j1 j))
				   (member (f j1) component :test #'eq)
				   (member (g j1) component :test #'eq))
			      (collect j1)))))
	   (if (= (length halves) 2)
	       (collect
		(list j
		      (list (first halves) (second halves))
		      (cons (first halves)
			    (cons (second halves)
				  (remove component components
					  :test #'eq :count 1))))))))))
  (iterate
   outer
   (for again? = nil)
   (iterate
    (for component in components)
    (for background = (remove component components :test #'eq :count 1))
    ;; Translating an object downwards.
    (iterate
     cluster
     (with foreground = (list component))
     (for background = (set-difference components foreground :test #'eq))
     (multiple-value-bind (translation-limit barriers)
	 (imagined (cluster-translation-limit
		    foreground background minus-half-pi layer-assertions))
      (cond ((fuzzy= translation-limit 0.0)
	     (if barriers
		 (setf foreground (append foreground barriers))
		 (return-from cluster)))
	    (t (imagine-translate
		foreground translation-limit minus-half-pi display?)
	       (if (funcall predicate) (return-from outer t))
	       (setf again? t)))))
    ;; Sliding an object along an inclined surface.
    (iterate
     axis
     (for rotation in
	  (remove-duplicates
	   (imagined (append (translation-rotations
			      component background layer-assertions)
			     (translation-rotations
			      background component layer-assertions)))
	   :test #'fuzzy=))
     (iterate
      cluster
      (with foreground = (list component))
      (for background = (set-difference components foreground :test #'eq))
      (multiple-value-bind (translation-limit barriers)
	  (imagined (cluster-translation-limit
		     foreground background rotation layer-assertions))
       (cond ((fuzzy= translation-limit 0.0)
	      (if barriers
		  (setf foreground (append foreground barriers))
		  (return-from cluster)))
	     (t (imagine-translate
		 foreground translation-limit rotation display?)
		(if (funcall predicate) (return-from outer t))
		(setf again? t)
		(return-from axis))))))
    ;; An object falling over.
    (iterate
     pivot
     ;; We sort the points so that the rotation around the pivot with the
     ;; greatest torque gets tried first. This is provably always the
     ;; lowest point. We also need both pivot points of foreground
     ;; relative to background (e.g. the leg something is standing on)
     ;; and for background relative to foreground (e.g. something
     ;; balanced on a pivot point). Likewise for circles (e.g. a circle
     ;; rolling off something or something rolling off a circle).
     (for p in (imagined
		(sort (pivot-points component background layer-assertions)
		      #'<
		      :key #'y)))
     (iterate
      cluster
      (with foreground = (list component))
      (for background = (set-difference components foreground :test #'eq))
      (multiple-value-bind (rotation-limit barriers)
	  (imagined
	   (cluster-rotation-limit foreground background p layer-assertions))
       (cond ((fuzzy= rotation-limit 0.0)
	      (if barriers
		  (setf foreground (append foreground barriers))
		  (return-from cluster)))
	     (t (imagine-rotate foreground rotation-limit p display?)
		(if (funcall predicate) (return-from outer t))
		(setf again? t)
		(return-from pivot)))))))
   ;; Varying a flexible parameter of a joint.
   ;; needs work: To vary displacement here.
   ;; needs work: To prefer the joint with the greatest torque.
   (iterate
    (for (j halves components) in triples)
    (for p = (imagined (p j)))
    (iterate
     (for half in halves)
     (iterate
      cluster
      (with foreground = (list half))
      (for background = (set-difference components foreground :test #'eq))
      (multiple-value-bind (rotation-limit barriers)
	  (imagined
	   (cluster-rotation-limit foreground background p layer-assertions))
       (cond ((fuzzy= rotation-limit 0.0)
	      (if barriers
		  (setf foreground (append foreground barriers))
		  (return-from cluster)))
	     (t (imagine-rotate foreground rotation-limit p display?)
		(if (funcall predicate) (return-from outer t))
		(setf again? t)))))))
   (unless again? (return-from outer (funcall result)))
   (finally-protected
    (if *record-draw?* (push '(end-of-imagination) *draw-recording*))
    (when display?
     (unless (eq display? 'no-pause) (read-char))
     (iterate (for f in figures)
	      (if (or (/= (imagined (x (p f))) (x (p f)))
		      (/= (imagined (y (p f))) (y (p f)))
		      (/= (imagined (x (q f))) (x (q f)))
		      (/= (imagined (y (q f))) (y (q f))))
		  (update f t))))))))

(defun imagine (figures joints layer-assertions predicate result display?)
 #+symbolics (declare (sys:downward-funarg predicate result))
 (let* ((start (get-internal-real-time))
	(result
	 (imagine-internal
	  figures joints layer-assertions predicate result display?)))
  (push (/ (float (- (get-internal-real-time) start))
	   internal-time-units-per-second)
	*imagination-times*)
  result))

(defun add-joint (f g)
 (multiple-value-bind (displacement-f1
		       displacement-g1
		       rotation1
		       displacement-f2
		       displacement-g2
		       rotation2)
     (displacement-rotation f g)
  (cond (displacement-f1
	 (push (joint f g displacement-f1 displacement-g1 rotation1) *joints*))
	(displacement-f2
	 (push (joint f g displacement-f2 displacement-g2 rotation2) *joints*))
	(t (error "Can't add joint"))))
 (first *joints*))

(defun setup-experiment ()
 (iterate (for f in *figures*) (log-previous f) (paint f))
 (initialize-caches *figures*)
 (if *record-draw?* (push '(end-of-frame) *draw-recording*))
 (read-char)
 (imagine *figures*
	  *joints*
	  *layer-assertions*
	  #'(lambda () nil)
	  #'(lambda () nil)
	  t))

(defun line-segment-test-stand ()
 (let ((f1 (line-segment (point 18.0 0.0) (point 18.0 6.0) :name 'f1))
       (f2 (line-segment (point 20.0 0.0) (point 20.0 6.0) :name 'f2))
       (f3 (line-segment (point 16.0 6.0) (point 22.0 6.0) :name 'f3)))
  (add-joint f1 f3)
  (add-joint f2 f3)
  f3))

(defun circle-test-stand ()
 (let ((f1 (line-segment (point 18.0 0.0) (point 18.0 5.0) :name 'f1))
       (f2 (line-segment (point 20.0 0.0) (point 20.0 5.0) :name 'f2))
       (f3 (circle (point 19.0 (+ 5.0 (sqrt 3.0))) 2.0 :name 'f3)))
  (add-joint f1 f3)
  (add-joint f2 f3)
  f3))

(defun translate-line-segment-line-segment-test1 ()
 (clear-world)
 (let ((f3 (line-segment-test-stand))
       (f4 (line-segment (point 17.0 10.0) (point 20.0 13.0) :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-line-segment-line-segment-test2 ()
 (clear-world)
 (let ((f3 (line-segment-test-stand))
       (f4 (line-segment (point 14.0 10.0) (point 17.0 13.0) :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-circle-line-segment-test1 ()
 (clear-world)
 (let ((f3 (line-segment-test-stand))
       (f4 (circle (point 18.5 11.0) 2.0 :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-circle-line-segment-test2 ()
 (clear-world)
 (let ((f3 (line-segment-test-stand))
       (f4 (circle (point 15.5 11.0) 1.0 :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-circle-line-segment-test3 ()
 (clear-world)
 (let ((f3 (line-segment-test-stand))
       (f4 (circle (point 19.0 7.0) 3.5 :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-line-segment-circle-test1 ()
 (clear-world)
 (let ((f3 (circle-test-stand))
       (f4 (line-segment (point 19.0 10.0) (point 22.0 13.0) :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-line-segment-circle-test2 ()
 (clear-world)
 (let ((f3 (circle-test-stand))
       (f4 (line-segment (point 17.0 10.0) (point 20.0 13.0) :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-line-segment-circle-test3 ()
 (clear-world)
 (let ((f3 (circle-test-stand))
       (f4 (line-segment (point 18.0 6.0) (point 20.0 7.0) :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-circle-circle-test1 ()
 (clear-world)
 (let ((f3 (circle-test-stand))
       (f4 (circle (point 19.5 10.0) 0.5 :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-circle-circle-test2 ()
 (clear-world)
 (let ((f3 (circle-test-stand))
       (f4 (circle (point 19.5 6.0) 0.5 :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun translate-circle-circle-test3 ()
 (clear-world)
 (let ((f3 (circle-test-stand))
       (f4 (circle (point 19.5 6.5) 3.0 :name 'f4)))
  (push `(same-layer ,f3 ,f4) *layer-assertions*))
 (setup-experiment))

(defun imagine-translate-test ()
 (translate-line-segment-line-segment-test1)
 (translate-line-segment-line-segment-test2)
 (translate-circle-line-segment-test1)
 (translate-circle-line-segment-test2)
 (translate-circle-line-segment-test3)
 (translate-line-segment-circle-test1)
 (translate-line-segment-circle-test2)
 (translate-line-segment-circle-test3)
 (translate-circle-circle-test1)
 (translate-circle-circle-test2)
 (translate-circle-circle-test3))

(defun test-jig (p f)
 (let ((f4 (line-segment (point 1.0 0.0) (point 9.0 6.0) :name 'f4))
       (f5 (line-segment (point 17.0 0.0) (point 9.0 6.0) :name 'f5))
       (f6 (line-segment (point 9.0 6.0) (point 9.0 9.0) :name 'f6))
       (f7 (line-segment (point 9.0 9.0) p :name 'f7)))
  (add-joint f4 f5)
  (add-joint f4 f6)
  (setf (rotation (add-joint f6 f7)) nil)
  (add-joint f7 f)
  f))

(defun rotate-line-segment-line-segment-test1 ()
 (clear-world)
 (let ((stand (line-segment-test-stand))
       (jig (test-jig
	     (point 18.5 12.5)
	     (line-segment (point 20.0 12.0) (point 17.0 13.0) :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-line-segment-line-segment-test2 ()
 (clear-world)
 (let ((stand (line-segment-test-stand))
       (jig (test-jig
	     (point 21.5 12.5)
	     (line-segment (point 23.0 12.0) (point 20.0 13.0) :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-circle-line-segment-test1 ()
 (clear-world)
 (let ((stand (line-segment-test-stand))
       (jig (test-jig (point 16.5 12.0)
		      (circle (point 18.5 12.0) 2.0 :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-circle-line-segment-test2 ()
 (clear-world)
 (let ((stand (line-segment-test-stand))
       (jig (test-jig (point 21.5 12.0)
		      (circle (point 23.5 12.0) 2.0 :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-circle-line-segment-test3 ()
 (clear-world)
 (let ((stand (line-segment-test-stand))
       (jig (test-jig (point 15.5 7.0)
		      (circle (point 19.0 7.0) 3.5 :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-line-segment-circle-test1 ()
 (clear-world)
 (let ((stand (circle-test-stand))
       (jig (test-jig
	     (point 19.5 11.5)
	     (line-segment (point 19.0 11.0) (point 20.0 12.0) :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-line-segment-circle-test2 ()
 (clear-world)
 (let ((stand (circle-test-stand))
       (jig (test-jig
	     (point 18.5 10.5)
	     (line-segment (point 17.0 10.0) (point 20.0 11.0) :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-line-segment-circle-test3 ()
 (clear-world)
 (let ((stand (circle-test-stand))
       (jig (test-jig
	     (point 19.0 7.5)
	     (line-segment (point 18.0 7.0) (point 20.0 8.0) :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-circle-circle-test1 ()
 (clear-world)
 (let ((stand (circle-test-stand))
       (jig (test-jig (point 19.0 12.0)
		      (circle (point 19.5 12.0) 0.5 :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-circle-circle-test2 ()
 (clear-world)
 (let ((stand (circle-test-stand))
       (jig (test-jig (point 19.0 8.0)
		      (circle (point 19.5 8.0) 0.5 :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun rotate-circle-circle-test3 ()
 (clear-world)
 (let ((stand (circle-test-stand))
       (jig (test-jig (point 16.5 7.0)
		      (circle (point 19.5 7.0) 3.0 :name 'f8))))
  (push `(same-layer ,stand ,jig) *layer-assertions*))
 (setup-experiment))

(defun imagine-rotate-test ()
 (rotate-line-segment-line-segment-test1)
 (rotate-line-segment-line-segment-test2)
 (rotate-circle-line-segment-test1)
 (rotate-circle-line-segment-test2)
 (rotate-circle-line-segment-test3)
 (rotate-line-segment-circle-test1)
 (rotate-line-segment-circle-test2)
 (rotate-line-segment-circle-test3)
 (rotate-circle-circle-test1)
 (rotate-circle-circle-test2)
 (rotate-circle-circle-test3))

(defun imagine-test ()
 (imagine-translate-test)
 (imagine-rotate-test)
 (clear-world))

;;; Section: Layer Assertions and Joints

(defun initialize-caches (figures)
 (setf *layer-assertions-cached* :empty)
 (setf *connected-components-cache* '())
 (let ((n (length figures)))
  (iterate (for f in figures)
	   (setf (different-layer?-array f) (make-array n)))))

(defun dereference (f)
 (iterate (for g first f then (same-layer-link g))
	  (if (eq g (same-layer-link g)) (return g))))

(defun cache-layer-assertions (layer-assertions)
 (setf *layer-assertions-cached* layer-assertions)
 (iterate
  (for f in *figures*)
  (setf (same-layer-link f) f)
  (iterate (with different-layer?-array = (different-layer?-array f))
	   (for i from 0 below (array-dimension different-layer?-array 0))
	   (setf (aref different-layer?-array i) nil)))
 (iterate (for layer-assertion in layer-assertions)
	  (when (eq (first layer-assertion) 'same-layer)
	   (let ((x (dereference (second layer-assertion)))
		 (y (dereference (third layer-assertion))))
	    (unless (eq x y) (setf (same-layer-link x) y)))))
 (iterate
  (for layer-assertion in layer-assertions)
  (when (eq (first layer-assertion) 'different-layer)
   (let ((x (dereference (second layer-assertion)))
	 (y (dereference (third layer-assertion))))
    (if (eq x y) (error "This shouldn't happen"))
    (setf (aref (different-layer?-array x) (index y)) t)
    (setf (aref (different-layer?-array y) (index x)) t)))))

(defun same-layer? (f g &optional (layer-assertions *layer-assertions*))
 (unless (eq layer-assertions *layer-assertions-cached*)
  (cache-layer-assertions layer-assertions))
 (eq (dereference f) (dereference g)))

(defun different-layer? (f g &optional (layer-assertions *layer-assertions*))
 (unless (eq layer-assertions *layer-assertions-cached*)
  (cache-layer-assertions layer-assertions))
 (aref (different-layer?-array (dereference f)) (index (dereference g))))

(defun consistent-layer-assertions (layer-assertions)
 (iterate
  (for f in *figures*)
  (setf (same-layer-link f) f)
  (iterate (with different-layer?-array = (different-layer?-array f))
	   (for i from 0 below (array-dimension different-layer?-array 0))
	   (setf (aref different-layer?-array i) nil)))
 (setf layer-assertions
       (iterate
	(for layer-assertion in layer-assertions)
	(unless (member layer-assertion collection
			:test #'(lambda (x y)
				 (and (eq (second x) (second y))
				      (eq (third x) (third y)))))
	 (ecase (first layer-assertion)
	   (same-layer
	    (let ((x (dereference (second layer-assertion)))
		  (y (dereference (third layer-assertion))))
	     (unless (aref (different-layer?-array y) (index x))
	      (unless (eq x y)
	       (setf (same-layer-link x) y)
	       (iterate
		(with x-different-layer?-array = (different-layer?-array x))
		(with y-different-layer?-array = (different-layer?-array y))
		(for i from 0
		     below (array-dimension x-different-layer?-array 0))
		(if (aref x-different-layer?-array i)
		    (setf (aref y-different-layer?-array i) t))))
	      (collect layer-assertion into collection))))
	   (different-layer
	    (let ((x (dereference (second layer-assertion)))
		  (y (dereference (third layer-assertion))))
	     (unless (eq x y)
	      (setf (aref (different-layer?-array x) (index y)) t)
	      (setf (aref (different-layer?-array y) (index x)) t)
	      (collect layer-assertion into collection))))))
	(finally (iterate (for f in *figures*)
			  (setf (same-layer-link f) (dereference f)))
		 (return collection))))
 (setf *layer-assertions-cached* layer-assertions)
 layer-assertions)

(defun consistent-layer-assertions? (layer-assertions)
 (setf *layer-assertions-cached* layer-assertions)
 (iterate
  (for f in *figures*)
  (setf (same-layer-link f) f)
  (iterate (with different-layer?-array = (different-layer?-array f))
	   (for i from 0 below (array-dimension different-layer?-array 0))
	   (setf (aref different-layer?-array i) nil)))
 (iterate (for layer-assertion in layer-assertions)
	  (when (eq (first layer-assertion) 'same-layer)
	   (let ((x (dereference (second layer-assertion)))
		 (y (dereference (third layer-assertion))))
	    (unless (eq x y) (setf (same-layer-link x) y)))))
 (iterate
  (with result = t)
  (for layer-assertion in layer-assertions)
  (when (eq (first layer-assertion) 'different-layer)
   (let ((x (dereference (second layer-assertion)))
	 (y (dereference (third layer-assertion))))
    (if (eq x y) (setf result nil))
    (setf (aref (different-layer?-array x) (index y)) t)
    (setf (aref (different-layer?-array y) (index x)) t)))
  (finally (return result))))

(defun maximal-consistent-subset (set predicate)
 #+symbolics (declare (sys:downward-funarg predicate))
 (unless (funcall predicate '()) (error "No consistent subset"))
 (iterate (for element in set)
	  (if (funcall predicate (cons element subset))
	      (collect element into subset))
	  (finally (return subset))))

(defun minimal-consistent-subset (set predicate)
 #+symbolics (declare (sys:downward-funarg predicate))
 (unless (funcall predicate set) (error "No consistent subset"))
 (iterate (for (element . remaining-set) on set)
	  (unless (funcall predicate (append subset remaining-set))
	   (collect element into subset))
	  (finally (return subset))))

(defmethod print-object ((j joint) stream)
 (format stream "~S<->~S" (f j) (g j)))

(defun valid? (j) (or (displacement-f j) (displacement-g j)))

(defun broken? (j) (not (intersect? (f j) (g j))))

(defun moved-during-imagine? (f)
 (or (> (distance (p f) (imagined (p (p f)))) *fuzz*)
     (> (distance (q f) (imagined (p (q f)))) *fuzz*)))

(defun demote (demotion)
 (let ((j (second demotion)))
  (ecase (first demotion)
    (displacement-f (setf (displacement-f j) nil))
    (displacement-g (setf (displacement-g j) nil))
    (rotation (setf (rotation j) nil)))))

(defun promote (promotion)
 (let ((j (second promotion)))
  ;; needs work: This is very inefficient to calculate all of these when only
  ;;             one is needed.
  (multiple-value-bind (displacement-f displacement-g rotation)
      (displacement-rotation-point (f j) (g j) (p j))
   (ecase (first promotion)
     (displacement-f (setf (displacement-f j) displacement-f))
     (displacement-g (setf (displacement-g j) displacement-g))
     (rotation (setf (rotation j) rotation))))))

(defun update-layer-assertions-and-joints ()
 (let (demotions different-layer-assertions moved-figures new-joints
		 promotions stable-figures newer-joints same-layer-assertions)
  (if *commentary?*
      (let ((joints (remove-if-not #'broken? *joints*)))
       (when joints
	(format *terminal-io* "~%Broken joints removed:")
	(iterate (for j in joints) (print j *terminal-io*)))))
  (setf *joints* (remove-if #'broken? *joints*))
  (setf demotions
	(iterate
	 (for j in *joints*)
	 (multiple-value-bind (displacement-f displacement-g rotation)
	     (displacement-rotation-point (f j) (g j) (kludge-p j))
	  (when (and (displacement-f j)
		     (etypecase (f j)
		       (line-segment
			(fuzzy/= displacement-f (displacement-f j)))
		       (circle
			(fuzzy/=rotation displacement-f (displacement-f j)))))
	   (setf (displacement-f j) nil)
	   (collect `(displacement-f ,j))
	   (if *commentary?*
	       (format *terminal-io* "~%Demoting displacement-f of ~S" j)))
	  (when (and (displacement-g j)
		     (etypecase (g j)
		       (line-segment
			(fuzzy/= displacement-g (displacement-g j)))
		       (circle
			(fuzzy/=rotation displacement-g (displacement-g j)))))
	   (setf (displacement-g j) nil)
	   (collect `(displacement-g ,j))
	   (if *commentary?*
	       (format *terminal-io* "~%Demoting displacement-g of ~S" j)))
	  (when (and (rotation j) (fuzzy/=rotation rotation (rotation j)))
	   (setf (rotation j) nil)
	   (collect `(rotation ,j))
	   (if *commentary?*
	       (format *terminal-io* "~%Demoting rotation of ~S" j))))))
  (setf different-layer-assertions
	(iterate
	 outer
	 (for (f . remaining-figures) on *figures*)
	 (iterate
	  (for g in remaining-figures)
	  (if (overlap? f g) (in outer (collect `(different-layer ,f ,g)))))))
  (if *commentary?*
      (let ((joints (remove-if #'valid? *joints*)))
       (when joints
	(format *terminal-io* "~%Invalid joints removed:")
	(iterate (for j in joints) (print j *terminal-io*)))))
  (setf *joints* (remove-if-not #'valid? *joints*))
  (setf moved-figures
	(imagine *figures*
		 *joints*
		 (consistent-layer-assertions
		  (append different-layer-assertions *layer-assertions*))
		 #'(lambda () nil)
		 #'(lambda ()
		    (iterate (for f in *figures*)
			     (if (moved-during-imagine? f) (collect f))))
		 nil))
  (setf demotions
	(remove-if-not #'(lambda (demotion) (valid? (second demotion)))
		       demotions))
  (setf new-joints
	(iterate
	 outer
	 (for f in moved-figures)
	 (iterate
	  (for g in *figures*)
	  (block inner
	   (unless (eq f g)
	    (let ((f f)
		  (g g))
	     (if (> (index g) (index f))
		 (if (member g moved-figures :test #'eq)
		     (return-from inner)
		     (rotatef f g)))
	     (in outer
		 (multiple-value-bind (p1 p2) (intersection-point f g)
		  (if (and p1
			   ;; needs work: to figure out ambiguous joint point
			   (not (eq p1 t))
			   (not (member-if #'(lambda (j)
					      (and (eq f (f j))
						   (eq g (g j))
						   (touch? p1 (p j))))
					   *joints*)))
		      (multiple-value-bind (displacement-f
					    displacement-g
					    rotation)
			  (displacement-rotation-point f g p1)
		       (collect (joint f g displacement-f displacement-g
				       rotation))))
		  (if (and p2
			   ;; needs work: ditto
			   (not (eq p2 t))
			   (not (member-if #'(lambda (j)
					      (and (eq f (f j))
						   (eq g (g j))
						   (touch? p2 (p j))))
					   *joints*)))
		      (multiple-value-bind (displacement-f
					    displacement-g
					    rotation)
			  (displacement-rotation-point f g p2)
		       (collect (joint f g displacement-f displacement-g
				       rotation))))))))))))
  (setf promotions
	(set-difference
	 (iterate
	  (for j in *joints*)
	  (unless (displacement-f j) (collect `(displacement-f ,j)))
	  (unless (displacement-g j) (collect `(displacement-g ,j)))
	  (unless (rotation j) (collect `(rotation ,j))))
	 demotions
	 :test #'equal))
  (iterate (for promotion in promotions) (promote promotion))
  (iterate (for demotion in demotions) (promote demotion))
  (setf stable-figures
	(set-difference
	 *figures*
	 (imagine *figures*
		  (append new-joints *joints*)
		  (consistent-layer-assertions
		   (append different-layer-assertions *layer-assertions*))
		  #'(lambda () nil)
		  #'(lambda ()
		     (iterate (for f in *figures*)
			      (if (moved-during-imagine? f) (collect f))))
		  nil)
	 :test #'eq))
  (setf new-joints
	(minimal-consistent-subset
	 new-joints
	 #'(lambda (new-joints)
	    (not (imagine
		  *figures*
		  (append new-joints *joints*)
		  (consistent-layer-assertions
		   (append different-layer-assertions *layer-assertions*))
		  #'(lambda () (some #'moved-during-imagine? stable-figures))
		  #'(lambda () nil)
		  nil)))))
  (iterate
   (for j in new-joints)
   (for displacement-f = (displacement-f j))
   (if (displacement-g j)
       (setf (displacement-f j) nil)
       (if (imagine *figures*
		    (append new-joints *joints*)
		    (consistent-layer-assertions
		     (append different-layer-assertions *layer-assertions*))
		    #'(lambda () (some #'moved-during-imagine? stable-figures))
		    #'(lambda () nil)
		    nil)
	   (setf (displacement-f j) displacement-f)))
   (for displacement-g = (displacement-g j))
   (if (displacement-f j)
       (setf (displacement-g j) nil)
       (if (imagine *figures*
		    (append new-joints *joints*)
		    (consistent-layer-assertions
		     (append different-layer-assertions *layer-assertions*))
		    #'(lambda () (some #'moved-during-imagine? stable-figures))
		    #'(lambda () nil)
		    nil)
	   (setf (displacement-g j) displacement-g)))
   (for rotation = (rotation j))
   (setf (rotation j) nil)
   (if (imagine *figures*
		(append new-joints *joints*)
		(consistent-layer-assertions
		 (append different-layer-assertions *layer-assertions*))
		#'(lambda () (some #'moved-during-imagine? stable-figures))
		#'(lambda () nil)
		nil)
       (setf (rotation j) rotation)))
  (iterate
   (for promotion in promotions)
   (demote promotion)
   (if (imagine	*figures*
		(append new-joints *joints*)
		(consistent-layer-assertions
		 (append different-layer-assertions *layer-assertions*))
		#'(lambda () (some #'moved-during-imagine? stable-figures))
		#'(lambda () nil)
		nil)
       (promote promotion)))
  (iterate
   (for demotion in demotions)
   (demote demotion)
   (if (imagine *figures*
		(append new-joints *joints*)
		(consistent-layer-assertions
		 (append different-layer-assertions *layer-assertions*))
		#'(lambda () (some #'moved-during-imagine? stable-figures))
		#'(lambda () nil)
		nil)
       (promote demotion)))
  (setf newer-joints
	(minimal-consistent-subset
	 new-joints
	 #'(lambda (newer-joints)
	    (not (imagine
		  *figures*
		  (append newer-joints *joints*)
		  (consistent-layer-assertions
		   (append different-layer-assertions
			   (iterate
			    (for j in new-joints)
			    (unless (member j newer-joints :test #'eq)
			     (collect `(same-layer ,(f j) ,(g j)))))
			   *layer-assertions*))
		  #'(lambda () (some #'moved-during-imagine? stable-figures))
		  #'(lambda () nil)
		  nil)))))
  (setf same-layer-assertions
	(iterate (for j in new-joints)
		 (unless (member j newer-joints :test #'eq)
		  (collect `(same-layer ,(f j) ,(g j))))))
  (setf new-joints newer-joints)
  (when (and *commentary?* new-joints)
   (format *terminal-io* "~%Joints added:")
   (iterate (for j in new-joints)
	    (format *terminal-io* "~%~S with rigid" j)
	    (if (displacement-f j) (format *terminal-io* " displacement-f"))
	    (if (displacement-g j) (format *terminal-io* " displacement-g"))
	    (if (rotation j) (format *terminal-io* " rotation"))))
  (when *commentary?*
   (iterate (for promotion in promotions)
	    (if (ecase (first promotion)
		  (displacement-f (displacement-f (second promotion)))
		  (displacement-g (displacement-g (second promotion)))
		  (rotation (rotation (second promotion))))
		(format *terminal-io* "~%Promoting: ~S" promotion)))
   (iterate (for demotion in demotions)
	    (if (ecase (first demotion)
		  (displacement-f (displacement-f (second demotion)))
		  (displacement-g (displacement-g (second demotion)))
		  (rotation (rotation (second demotion))))
		(format *terminal-io* "~%Repromoting: ~S" demotion))))
  (setf *joints* (append *joints* new-joints))
  (let* ((new-layer-assertions
	  (consistent-layer-assertions
	   (append different-layer-assertions
		   same-layer-assertions
		   *layer-assertions*)))
	 (removed (set-difference *layer-assertions* new-layer-assertions
				  :test #'equal))
	 (added (set-difference new-layer-assertions *layer-assertions*
				:test #'equal)))
   (when *commentary?*
    (when removed
     (format *terminal-io* "~%Layer assertions removed:")
     (iterate (for layer-assertion in removed)
	      (print layer-assertion *terminal-io*)))
    (when added
     (format *terminal-io* "~%Layer assertions added:")
     (iterate (for layer-assertion in added)
	      (print layer-assertion *terminal-io*))))
   (setf *layer-assertions* new-layer-assertions))))

(defun lookup-figure (name)
 (let ((f (find-if #'(lambda (f)
		      ;; note: this is hardwired to the particular naming
		      ;;       convention we use for figures.
		      (and (eq (first name) (first (name f)))
			   (eq (second name) (name (second (name f))))))
		   *figures*)))
  (unless f (error "Figure not found: ~S" name))
  f))

(defun lookup-joint (f g)
 (let ((j (find-if #'(lambda (j) (and (eq (f j) f) (eq (g j) g))) *joints*)))
  (unless j
   (setf j (joint f g nil nil nil))
   (push j *joints*))
  j))

(defun update-layer-assertions-and-joints-by-cheating ()
 (if *commentary?*
     (let ((joints (remove-if-not #'broken? *joints*)))
      (when joints
       (format *terminal-io* "~%Broken joints removed:")
       (iterate (for j in joints) (print j *terminal-io*)))))
 (setf *joints* (remove-if #'broken? *joints*))
 (iterate
  (for j in *joints*)
  (multiple-value-bind (displacement-f displacement-g rotation)
      (displacement-rotation-point (f j) (g j) (kludge-p j))
   (when (and (displacement-f j)
	      (etypecase (f j)
		(line-segment
		 (fuzzy/= displacement-f (displacement-f j)))
		(circle
		 (fuzzy/=rotation displacement-f (displacement-f j)))))
    (setf (displacement-f j) nil)
    (if *commentary?*
	(format *terminal-io* "~%Demoting displacement-f of ~S" j)))
   (when (and (displacement-g j)
	      (etypecase (g j)
		(line-segment
		 (fuzzy/= displacement-g (displacement-g j)))
		(circle
		 (fuzzy/=rotation displacement-g (displacement-g j)))))
    (setf (displacement-g j) nil)
    (if *commentary?*
	(format *terminal-io* "~%Demoting displacement-g of ~S" j)))
   (when (and (rotation j) (fuzzy/=rotation rotation (rotation j)))
    (setf (rotation j) nil)
    (if *commentary?* (format *terminal-io* "~%Demoting rotation of ~S" j)))))
 (if *commentary?*
     (let ((joints (remove-if #'valid? *joints*)))
      (when joints
       (format *terminal-io* "~%Invalid joints removed:")
       (iterate (for j in joints) (print j *terminal-io*)))))
 (setf *joints* (remove-if-not #'valid? *joints*))
 (iterate
  (for update in
       (reduce
	#'append
	(mapcar #'rest
		(remove-if-not
		 #'(lambda (update)
		    (member-if
		     #'(lambda (index)
			(if (integerp index)
			    (= index *frame-number*)
			    (<= (first index) *frame-number* (second index))))
		     (first update)))
		 *updates*))))
  (for f = (lookup-figure (second update)))
  (for g = (lookup-figure (third update)))
  (if (< (index f) (index g)) (rotatef f g))
  (ecase (first update)
    (displacement-f
     (let ((j (lookup-joint f g)))
      ;; needs work: This is very inefficient to calculate all of
      ;;             these when only one is needed.
      (multiple-value-bind (displacement-f displacement-g rotation)
	  (displacement-rotation-point (f j) (g j) (kludge-p j))
       (declare (ignore displacement-g rotation))
       (setf (displacement-f j) displacement-f))))
    (displacement-g
     (let ((j (lookup-joint f g)))
      ;; needs work: This is very inefficient to calculate all of
      ;;             these when only one is needed.
      (multiple-value-bind (displacement-f displacement-g rotation)
	  (displacement-rotation-point (f j) (g j) (kludge-p j))
       (declare (ignore displacement-f rotation))
       (setf (displacement-g j) displacement-g))))
    (rotation
     (let ((j (lookup-joint f g)))
      ;; needs work: This is very inefficient to calculate all of
      ;;             these when only one is needed.
      (multiple-value-bind (displacement-f displacement-g rotation)
	  (displacement-rotation-point (f j) (g j) (kludge-p j))
       (declare (ignore displacement-f displacement-g))
       (setf (rotation j) rotation))))
    (<->
     (let ((j (lookup-joint f g)))
      (multiple-value-bind (displacement-f displacement-g rotation)
	  (displacement-rotation-point (f j) (g j) (kludgier-p j))
       (setf (displacement-f j) displacement-f)
       (setf (displacement-g j) displacement-g)
       (setf (rotation j) rotation))))))
 (let* ((different-layer-assertions
	 (iterate
	  outer
	  (for (f . remaining-figures) on *figures*)
	  (iterate
	   (for g in remaining-figures)
	   (if (overlap? f g) (in outer (collect `(different-layer ,f ,g)))))))
	(same-layer-assertions
	 (iterate
	  outer
	  (for (f . remaining-figures) on *figures*)
	  (iterate
	   (for g in remaining-figures)
	   (if (and (touch? f g) (not (attached? f g)))
	       (in outer (collect `(same-layer ,f ,g)))))))
	(stable-figures
	 (imagine *figures*
		  *joints*
		  (consistent-layer-assertions
		   (append different-layer-assertions
			   same-layer-assertions
			   *layer-assertions*))
		  #'(lambda () nil)
		  #'(lambda ()
		     (iterate (for f in *figures*)
			      (unless (moved-during-imagine? f) (collect f))))
		  nil))
	(new-layer-assertions
	 (consistent-layer-assertions
	  (append different-layer-assertions
		  (minimal-consistent-subset
		   same-layer-assertions
		   #'(lambda (same-layer-assertions)
		      (not (imagine
			    *figures*
			    *joints*
			    (consistent-layer-assertions
			     (append different-layer-assertions
				     same-layer-assertions
				     *layer-assertions*))
			    #'(lambda ()
			       (some #'moved-during-imagine? stable-figures))
			    #'(lambda () nil)
			    nil))))
		  *layer-assertions*)))
	(removed (set-difference *layer-assertions* new-layer-assertions
				 :test #'equal))
	(added (set-difference new-layer-assertions *layer-assertions*
			       :test #'equal)))
  (when *commentary?*
   (when removed
    (format *terminal-io* "~%Layer assertions removed:")
    (iterate (for layer-assertion in removed)
	     (print layer-assertion *terminal-io*)))
   (when added
    (format *terminal-io* "~%Layer assertions added:")
    (iterate (for layer-assertion in added)
	     (print layer-assertion *terminal-io*))))
  (setf *layer-assertions* new-layer-assertions)))

;;; Section: Perceptual Primitives

(defmethod print-object ((perceptual-primitive perceptual-primitive) stream)
 (format stream "~S" (name perceptual-primitive)))

(defmethod print-object ((vertex vertex) stream)
 (format stream "[~D]" (frame-number vertex)))

(defmethod print-object ((edge edge) stream)
 (format stream "[~D:~D]~S"
	 (frame-number (from-vertex edge))
	 (frame-number (to-vertex edge))
	 (name edge)))

(defun add-perceptual-primitive (watch name offset)
 (push (make-instance 'perceptual-primitive
		      :watch watch :name name :offset offset)
       *perceptual-primitives*))

(defun lookup-vertex (frame-number)
 (iterate
  (for vertex in *vertices*)
  (if (= (frame-number vertex) frame-number) (return vertex))
  (finally (let ((vertex (make-instance 'vertex :frame-number frame-number)))
	    (push vertex *vertices*)
	    (return vertex)))))

(defun run-perceptual-primitives ()
 (iterate
  (for perceptual-primitive in *perceptual-primitives*)
  (if (funcall (watch perceptual-primitive) perceptual-primitive)
      (ecase (state perceptual-primitive)
	(off
	 (setf (state perceptual-primitive) 'rising)
	 (setf (frame-number perceptual-primitive)
	       (+ *frame-number* (offset perceptual-primitive)))
	 (when (= (rising-threshold perceptual-primitive) 1)
	  (setf (vertex perceptual-primitive)
		(lookup-vertex (frame-number perceptual-primitive)))
	  (setf (state perceptual-primitive) 'on)))
	(on)
	(rising
	 (when (>= (1+ (- *frame-number* (frame-number perceptual-primitive)))
		   (rising-threshold perceptual-primitive))
	  (setf (vertex perceptual-primitive)
		(lookup-vertex (frame-number perceptual-primitive)))
	  (setf (state perceptual-primitive) 'on)))
	(falling (setf (state perceptual-primitive) 'on)))
      (ecase (state perceptual-primitive)
	(off)
	(on
	 (setf (state perceptual-primitive) 'falling)
	 (setf (frame-number perceptual-primitive) *frame-number*)
	 (when (= (falling-threshold perceptual-primitive) 1)
	  (let ((edge
		 (make-instance
		  'edge
		  :from-vertex (vertex perceptual-primitive)
		  :to-vertex (lookup-vertex (1- *frame-number*))
		  :name (copy-list (name perceptual-primitive)))))
	   (push edge (edges-leaving (from-vertex edge)))
	   (push edge (edges-entering (to-vertex edge))))
	  (setf (state perceptual-primitive) 'off)))
	(rising (setf (state perceptual-primitive) 'off))
	(falling
	 (when (>= (1+ (- *frame-number* (frame-number perceptual-primitive)))
		   (falling-threshold perceptual-primitive))
	  (let ((edge
		 (make-instance
		  'edge
		  :from-vertex (vertex perceptual-primitive)
		  :to-vertex (lookup-vertex
			      (- *frame-number*
				 (falling-threshold perceptual-primitive)))
		  :name (copy-list (name perceptual-primitive)))))
	   (push edge (edges-leaving (from-vertex edge)))
	   (push edge (edges-entering (to-vertex edge))))
	  (setf (state perceptual-primitive) 'off)))))))

(defun close-perceptual-primitives ()
 (iterate
  (for perceptual-primitive in *perceptual-primitives*)
  (when (or (eq (state perceptual-primitive) 'on)
	    (eq (state perceptual-primitive) 'falling))
   (setf (frame-number perceptual-primitive) *frame-number*)
   (let ((edge (make-instance 'edge
			      :from-vertex (vertex perceptual-primitive)
			      :to-vertex (lookup-vertex *frame-number*)
			      :name (copy-list (name perceptual-primitive)))))
    (push edge (edges-leaving (from-vertex edge)))
    (push edge (edges-entering (to-vertex edge)))))
  (setf (state perceptual-primitive) 'off))
 (iterate (for (u . rest) on (sort *vertices* #'< :key #'frame-number))
	  (when rest
	   (for v = (first rest))
	   (setf (next-vertex u) v)
	   (setf (previous-vertex v) u))))

(defun disjoint? (x y)
 (let ((x (figures x))
       (y (figures y)))
  (and (every #'(lambda (xe) (not (member xe y :test #'eq))) x)
       (every #'(lambda (ye) (not (member ye x :test #'eq))) y))))

;;; Section: Perceptual Primitives

(defmethod attached? ((f figure) (g figure) &optional (joints *joints*))
 (maybe-check-type joints list)
 (some #'(lambda (j)
	  (or (and (eq f (f j)) (eq g (g j))) (and (eq g (f j)) (eq f (g j)))))
       joints))

(defmethod attached? ((f figure) (g list) &optional (joints *joints*))
 (maybe-check-type joints list)
 (some #'(lambda (g) (attached? f g joints)) g))

(defmethod attached? ((f list) g &optional (joints *joints*))
 (maybe-check-type joints list)
 (some #'(lambda (f) (attached? f g joints)) f))

(defmethod rigidly-attached?
    ((f figure) (g figure) &optional (joints *joints*))
 (maybe-check-type joints list)
 (some #'(lambda (j)
	  (and (rotation j)
	       (displacement-f j)
	       (displacement-g j)
	       (or (and (eq f (f j)) (eq g (g j)))
		   (and (eq g (f j)) (eq f (g j))))))
       joints))

(defmethod rigidly-attached? ((f figure) (g list) &optional (joints *joints*))
 (maybe-check-type joints list)
 (some #'(lambda (g) (rigidly-attached? f g joints)) g))

(defmethod rigidly-attached? ((f list) g &optional (joints *joints*))
 (maybe-check-type joints list)
 (some #'(lambda (f) (rigidly-attached? f g joints)) f))

(defmethod contacts?
    ((f figure) (g figure) &optional (layer-assertions *layer-assertions*))
 (and (or (eq f (first (figures *ground*)))
	  (eq g (first (figures *ground*)))
	  (same-layer? f g layer-assertions))
      (touch? f g)))

(defmethod contacts?
    ((f figure) (g list) &optional (layer-assertions *layer-assertions*))
 (some #'(lambda (g) (contacts? f g layer-assertions)) g))

(defmethod contacts?
    ((f list) g &optional (layer-assertions *layer-assertions*))
 (some #'(lambda (f) (contacts? f g layer-assertions)) f))

(defun rigid-body? (figures)
 (let* ((f (first figures))
	(translation (distance (previous (p (p f))) (p f)))
	(rotation (compute-rotation
		   (previous (p (p f))) (previous (p (q f))) (p f) (q f))))
  (every
   #'(lambda (f)
      (and (fuzzy= translation (distance (previous (p (p f))) (p f)))
	   (fuzzy= rotation
		   (compute-rotation
		    (previous (p (p f))) (previous (p (q f))) (p f) (q f)))))
   figures)))

(defun rotating? (figures)
 (some #'(lambda (f) (fuzzy/= (compute-rotation (previous (p (p f)))
						(previous (p (q f)))
						(p f)
						(q f))
			      0.0))
       figures))

(defun rotating-clockwise? (figures)
 (some #'(lambda (f) (fuzzy< (compute-rotation (previous (p (p f)))
					       (previous (p (q f)))
					       (p f)
					       (q f))
			     0.0))
       figures))

(defun rotating-counterclockwise? (figures)
 (some #'(lambda (f) (fuzzy> (compute-rotation (previous (p (p f)))
					       (previous (p (q f)))
					       (p f)
					       (q f))
			     0.0))
       figures))

(defun radius (figures)
 (let ((p (center-of-mass figures)))
  (iterate
   (with best-distance = 0.0)
   (for f in figures)
   (etypecase f
     (line-segment (let ((this-distance (distance p (p f))))
		    (if (> this-distance best-distance)
			(setf best-distance this-distance)))
		   (let ((this-distance (distance p (q f))))
		    (if (> this-distance best-distance)
			(setf best-distance this-distance))))
     (circle (let ((this-distance (+ (size f) (distance p (p f)))))
	      (if (> this-distance best-distance)
		  (setf best-distance this-distance)))))
   (finally (return best-distance)))))

(defun at? (figures1 figures2)
 (<= (distance (center-of-mass figures1) (center-of-mass figures2))
     (+ (radius figures1) (radius figures2))))

(defun flip-axis (f)
 (* 0.5 (rotation+ (rotation f) (previous (rotation f)))))

(defun flipping? (figures)
 (and (not (null (rest figures)))
      (let ((axis (flip-axis (first figures))))
       (every #'(lambda (f)
		 (let ((this-axis (flip-axis f)))
		  (or (fuzzy=rotation axis this-axis)
		      (fuzzy=rotation axis (rotation+ this-axis pi)))))
	      figures))))

(defun root (figures joints)
 (iterate
  (with root = nil)
  (with root-mass = nil)
  (for component in (connected-components
		     figures
		     #'(lambda (f g)
			(and (attached? f g joints) (recently-rigid? f g)))))
  (for mass = (iterate (for f in component) (sum (mass f))))
  (when (or (null root) (> mass root-mass))
   (setf root component)
   (setf root-mass mass))
  (finally (return root))))

(defun compute-support-relationships ()
 (imagine *figures*
	  *joints*
	  *layer-assertions*
	  #'(lambda () nil)
	  #'(lambda ()
	     (iterate (for x in *objects*)
		      (setf (supported? x)
			    (not (some #'moved-during-imagine? (figures x))))))
	  nil)
 (iterate
  (for x in *objects*)
  (imagine
   (set-difference *figures* (figures x) :test #'eq)
   *joints*
   *layer-assertions*
   #'(lambda () nil)
   #'(lambda ()
      (setf (supported-objects x)
	    (iterate (for y in *objects*)
		     (if (and (supported? y)
			      (some #'moved-during-imagine? (figures y)))
			 (collect y)))))
   nil)))

;;; Section: Perceptual Primitive Definitions

;;; needs work: ROOT conses during every frame analysis and is redundant

(define-perceptual-primitive exists (x) (exists? x))

(define-perceptual-primitive prominent (x) (prominent? x))

(define-perceptual-primitive supported (x)
 ;; note: Need version of that varies on fall-1 vs. fall-2 vs. fall-3.
 (and (exists? x) (supported? x)))

(define-perceptual-primitive supports (x y)
 ;; note: Need version of that varies on fall-1 vs. fall-2 vs. fall-3.
 ;;       Also need direct vs. indirect support.
 ;;       Also need multiple support.
 (and (exists? x) (exists? y) (member y (supported-objects x) :test #'eq)))

(define-perceptual-primitive contacts (x y :symetric)
 (and (exists? x)
      (exists? y)
      (not (member x (subobjects y) :test #'eq))
      (not (member y (subobjects x) :test #'eq))
      (or (contacts? (figures x) (figures y))
	  (attached? (figures x) (figures y)))))

(define-perceptual-primitive attached (x y :symetric)
 (and (exists? x)
      (exists? y)
      (not (member x (subobjects y) :test #'eq))
      (not (member y (subobjects x) :test #'eq))
      (attached? (figures x) (figures y))))

(define-perceptual-primitive at (x y :symetric)
 (and (exists? x)
      (exists? y)
      (not (attached? (figures x) (figures y)))
      (not (member x (subobjects y) :test #'eq))
      (not (member y (subobjects x) :test #'eq))
      (at? (figures x) (figures y))))

(define-perceptual-primitive moving-part (x :off-one)
 (and (exists? x) (not (rigid-body? (figures x)))))

(define-perceptual-primitive rotating (x :off-one)
 (and (exists? x)
      (not (flipping? (figures x)))
      (rotating? (root (figures x) *joints*))))

(define-perceptual-primitive rotating-clockwise (x :off-one)
 (and (exists? x)
      (not (flipping? (figures x)))
      (rotating-clockwise? (root (figures x) *joints*))))

(define-perceptual-primitive rotating-counterclockwise (x :off-one)
 (and (exists? x)
      (not (flipping? (figures x)))
      (rotating-counterclockwise? (root (figures x) *joints*))))

(define-perceptual-primitive translating (x :off-one)
 (let* ((root (root (figures x) *joints*))
	(p (center-of-mass root)))
  (prog1 (and (exists? x)
	      (p perceptual-primitive)
	      (not (touch? p (p perceptual-primitive))))
   (setf (p perceptual-primitive) p))))

(define-perceptual-primitive translating-up (x :off-one)
 (let* ((root (root (figures x) *joints*))
	(y (y root)))
  (prog1 (and (exists? x)
	      (y perceptual-primitive)
	      (fuzzy> y (y perceptual-primitive)))
   (setf (y perceptual-primitive) y))))

(define-perceptual-primitive translating-down (x :off-one)
 (let* ((root (root (figures x) *joints*))
	(y (y root)))
  (prog1 (and (exists? x)
	      (y perceptual-primitive)
	      (fuzzy< y (y perceptual-primitive)))
   (setf (y perceptual-primitive) y))))

(define-perceptual-primitive translating-towards (x y :off-one)
 (let* ((root-x (root (figures x) *joints*))
	(root-y (root (figures y) *joints*))
	(d (distance (center-of-mass root-x) (center-of-mass root-y)))
	(p (center-of-mass root-x)))
  (prog1 (and (exists? x)
	      (exists? y)
	      (d perceptual-primitive)
	      (p perceptual-primitive)
	      (not (attached? (figures x) (figures y)))
	      (not (member x (subobjects y) :test #'eq))
	      (not (member y (subobjects x) :test #'eq))
	      (not (touch? p (p perceptual-primitive)))
	      (fuzzy< d (d perceptual-primitive)))
   (setf (d perceptual-primitive) d)
   (setf (p perceptual-primitive) p))))

(define-perceptual-primitive translating-away-from (x y :off-one)
 (let* ((root-x (root (figures x) *joints*))
	(root-y (root (figures y) *joints*))
	(d (distance (center-of-mass root-x) (center-of-mass root-y)))
	(p (center-of-mass root-x)))
  (prog1 (and (exists? x)
	      (exists? y)
	      (d perceptual-primitive)
	      (p perceptual-primitive)
	      (not (attached? (figures x) (figures y)))
	      (not (member x (subobjects y) :test #'eq))
	      (not (member y (subobjects x) :test #'eq))
	      (not (touch? p (p perceptual-primitive)))
	      (fuzzy> d (d perceptual-primitive)))
   (setf (d perceptual-primitive) d)
   (setf (p perceptual-primitive) p))))

(define-perceptual-primitive flipping (x :off-one)
 (and (exists? x) (flipping? (figures x))))

;;; Section: Partition into Objects

(defmethod print-object ((object object) stream)
 (format stream "[")
 (iterate
  (with first? = t)
  (with part? = nil)
  (for name in (iterate (for f in (figures object))
			(adjoining (second (name f)))))
  (if (iterate
       (for f in *figures*)
       (never (and (eq (second (name f)) name)
		   (not (member f (figures object) :test #'eq)))))
      (format stream (if first? "~A" " ~A") name)
      (cond ((= (iterate (for f in (figures object))
			 (if (eq (second (name f)) name) (sum 1)))
		1)
	     (format stream (if first? "~S" " ~S")
		     (find name (figures object)
			   :test #'eq
			   :key #'(lambda (f) (second (name f))))))
	    (t (format stream (if first? "~A-part" " ~A-part") name)
	       (setf part? t))))
  (setf first? nil)
  (finally (if part?
	       (format stream " ~D" (- (length *objects*)
				       (position object *objects* :test #'eq)
				       1)))))
 (format stream "]"))

(defun set-exists? (object)
 (setf (exists? object) t)
 (iterate (for subobject in (subobjects object)) (set-exists? subobject)))

(defun lookup-object (figures)
 ;; needs work: templates should be CLOS objects so you don't have to do a
 ;;             member on keywords
 (let ((object (find figures *objects* :test #'set= :key #'figures)))
  (if object
      object
      (let ((new-object (make-instance 'object :figures figures)))
       (iterate (for object in *objects*)
		(when (subset? figures (figures object))
		 (push new-object (subobjects object))
		 (push object (superobjects new-object)))
		(when (subset? (figures object) figures)
		 (push new-object (superobjects object))
		 (push object (subobjects new-object))))
       (iterate (for (perceptual-primitive-name number-of-arguments keywords)
		     in *perceptual-primitive-templates*)
		(if (= number-of-arguments 1)
		    (add-perceptual-primitive
		     (funcall (symbol-function perceptual-primitive-name)
			      new-object)
		     `(,perceptual-primitive-name ,new-object)
		     (if (member :off-one keywords :test #'eq) -1 0))))
       (iterate (for object in *objects*)
		(iterate
		 (for (perceptual-primitive-name number-of-arguments keywords)
		      in *perceptual-primitive-templates*)
		 (when (= number-of-arguments 2)
		  (add-perceptual-primitive
		   (funcall (symbol-function perceptual-primitive-name)
			    object new-object)
		   `(,perceptual-primitive-name ,object ,new-object)
		   (if (member :off-one keywords :test #'eq) -1 0))
		  (unless (member :symetric keywords :test #'eq)
		   (add-perceptual-primitive
		    (funcall (symbol-function perceptual-primitive-name)
			     new-object object)
		    `(,perceptual-primitive-name ,new-object ,object)
		    (if (member :off-one keywords :test #'eq) -1 0))))))
       (push new-object *objects*)
       new-object))))

(defun partition-into-objects ()
 (iterate (for object in *objects*) (setf (exists? object) nil))
 (iterate (for component in (connected-components *figures* #'attached?))
	  (for object = (lookup-object component))
	  (set-exists? object)
	  (setf (prominent? object) t))
 (iterate (for component
	       in (connected-components
		   *figures*
		   #'(lambda (f g)
		      (and (attached? f g) (recently-rigid? f g)))))
	  (for object = (lookup-object component))
	  (set-exists? object)
	  (setf (prominent? object) t)))

;;; Section: Event Calculus

(defun starting-frame-number ()
 (iterate (for vertex in *vertices*) (minimize (frame-number vertex))))

(defun ending-frame-number ()
 (iterate (for vertex in *vertices*) (maximize (frame-number vertex))))

(defun evaluate-arguments (e n bindings)
 (unless (= (length (rest e)) n) (error "Improper expression: ~S" e))
 (mapcar #'(lambda (e)
	    (cond ((eq e 'ground) *ground*)
		  ((symbolp e)
		   (let ((binding (assoc e bindings :test #'eq)))
		    (unless binding (error "Unbound symbol: ~S" e))
		    (second binding)))
		  (t e)))
	 (rest e)))

(defun nested-occurs? (f v e i j bindings)
 (if (null v)
     (occurs? e i j bindings)
     (funcall
      f
      #'(lambda (x)
	 (nested-occurs? f (rest v) e i j (cons (list (first v) x) bindings)))
      *objects*)))

(defun occurs? (e i j &optional bindings)
 (unless (consp e) (error "Improper expression: ~S" e))
 (unless (null (rest (last e))) (error "Improper expression: ~S" e))
 (unless (symbolp (first e)) (error "Improper expression: ~S" e))
 (case (first e)
   (some (unless (and (= (length e) 3)
		      (consp (second e))
		      (null (rest (last (second e))))
		      (every #'symbolp (second e))
		      (not (some #'null (second e))))
	  (error "Improper expression: ~S" e))
	 (nested-occurs? #'some (second e) (third e) i j bindings))
   (every (unless (and (= (length e) 3)
		       (consp (second e))
		       (null (rest (last (second e))))
		       (every #'symbolp (second e))
		       (not (some #'null (second e))))
	   (error "Improper expression: ~S" e))
	  (nested-occurs? #'every (second e) (third e) i j bindings))
   (and (every #'(lambda (e) (occurs? e i j bindings)) (rest e)))
   (or (some #'(lambda (e) (occurs? e i j bindings)) (rest e)))
   (not (unless (= (length e) 2) (error "Improper expression: ~S" e))
	(not (occurs? (second e) i j bindings)))
   (plus (unless (= (length e) 2) (error "Improper expression: ~S" e))
	 (or (occurs? (second e) i j bindings)
	     (not (iterate
		   (for k from i below j)
		   (never (and (occurs? (second e) i k bindings)
			       (occurs? e (1+ k) j bindings)))))))
   (progn (if (= (length e) 1) (error "Improper expression: ~S" e))
	  (if (= (length e) 2)
	      (occurs? (second e) i j bindings)
	      (not (iterate
		    (for k from i below j)
		    (never (and (occurs? (second e) i k bindings)
				(occurs? `(progn ,@(rest (rest e)))
					 (1+ k) j bindings)))))))
   (diamond-m (unless (= (length e) 2) (error "Improper expression: ~S" e))
	      (not (iterate
		    (for k from (starting-frame-number) below i)
		    (never (occurs? (second e) k (1- i) bindings)))))
   (diamond-mi (unless (= (length e) 2) (error "Improper expression: ~S" e))
	       (not (iterate
		     (for k from (1+ i) to (ending-frame-number))
		     (never (occurs? (second e) (1+ i) k bindings)))))
   (diamond (unless (= (length e) 2) (error "Improper expression: ~S" e))
	    (not (iterate
		  outer
		  (for k from (starting-frame-number) to j)
		  (iterate
		   (for l from (min k i) to (ending-frame-number))
		   (in outer (never (occurs? (second e) k l bindings)))))))
   (equal (let ((arguments (evaluate-arguments e 2 bindings)))
	   (eq (first arguments) (second arguments))))
   (part (let ((arguments (evaluate-arguments e 2 bindings)))
	  (not (not (member (first arguments) (subobjects (second arguments))
			    :test #'eq)))))
   (disjoint (let ((arguments (evaluate-arguments e 2 bindings)))
	      (null (intersection (figures (first arguments))
				  (figures (second arguments))
				  :test #'eq))))
   (otherwise
    (let ((template
	   (assoc (first e) *perceptual-primitive-templates* :test #'eq)))
     (if template
	 (let* ((arguments (evaluate-arguments e (second template) bindings))
		(reverse-arguments (reverse arguments))
		(symetric? (member :symetric (third template) :test #'eq)))
	  (iterate
	   outer
	   (for vertex in *vertices*)
	   (if (>= i (frame-number vertex))
	       (iterate
		(for edge in (edges-leaving vertex))
		(if (and (<= j (frame-number (to-vertex edge)))
			 (eq (first (name edge)) (first e))
			 (or (equal (rest (name edge)) arguments)
			     (and symetric?
				  (equal (rest (name edge))
					 reverse-arguments))))
		    (return-from outer t))))
	   (finally (return-from outer nil))))
	 (let* ((template (assoc (first e) *event-templates* :test #'eq))
		(arguments
		 (evaluate-arguments e (length (second template)) bindings)))
	  (unless template (error "Improper expression: ~S" e))
	  (occurs?
	   (third template)
	   i
	   j
	   (append (mapcar #'list (second template) arguments) bindings))))))))

(defmethod initialize-instance :after
 ((spanning-interval spanning-interval) &key &allow-other-keys)
 (setf (end-low spanning-interval)
       (max (end-low spanning-interval) (start-low spanning-interval)))
 (setf (start-high spanning-interval)
       (min (start-high spanning-interval) (end-high spanning-interval)))
 (if (or (< (start-high spanning-interval) (start-low spanning-interval))
	 (< (end-high spanning-interval) (end-low spanning-interval)))
     (fail)))

(defun spanning-interval (from to)
 (make-instance 'spanning-interval
		:start-low from :start-high to :end-low from :end-high to))

(defun interval (from to)
 (make-instance 'spanning-interval
		:start-low from :start-high from :end-low to :end-high to))

(defun some-occurrences (v e bindings)
 (if (null v)
     (occurrences e bindings)
     (some-occurrences
      (rest v) e (cons (list (first v) (a-member-of *objects*)) bindings))))

(defun intersect-spanning-intervals (interval1 interval2)
 (make-instance 'spanning-interval
		:start-low (max (start-low interval1) (start-low interval2))
		:start-high (min (start-high interval1) (start-high interval2))
		:end-low (max (end-low interval1) (end-low interval2))
		:end-high (min (end-high interval1) (end-high interval2))))

(defun every-occurrences-internal (v o e bindings)
 (if (null o)
     (spanning-interval (starting-frame-number) (ending-frame-number))
     (intersect-spanning-intervals
      (occurrences e (cons (list v (first o)) bindings))
      (every-occurrences-internal v (rest o) e bindings))))

(defun every-occurrences (v e bindings)
 (if (null v)
     (occurrences e bindings)
     (intersect-spanning-intervals
      (every-occurrences-internal (first v) *objects* e bindings)
      (every-occurrences (rest v) e bindings))))

(defun and-occurrences (e bindings)
 (if (null e)
     (spanning-interval (starting-frame-number) (ending-frame-number))
     (intersect-spanning-intervals
      (occurrences (first e) bindings) (and-occurrences (rest e) bindings))))

(defun not-occurrences (intervals)
 (if (null intervals)
     (spanning-interval (starting-frame-number) (ending-frame-number))
     (intersect-spanning-intervals
      (either (make-instance 'spanning-interval
			     :start-low (starting-frame-number)
			     :start-high (1- (start-low (first intervals)))
			     :end-low (starting-frame-number)
			     :end-high (ending-frame-number))
	      (make-instance 'spanning-interval
			     :start-low (1+ (start-high (first intervals)))
			     :start-high (ending-frame-number)
			     :end-low (starting-frame-number)
			     :end-high (ending-frame-number))
	      (make-instance 'spanning-interval
			     :start-low (starting-frame-number)
			     :start-high (ending-frame-number)
			     :end-low (starting-frame-number)
			     :end-high (1- (end-low (first intervals))))
	      (make-instance 'spanning-interval
			     :start-low (starting-frame-number)
			     :start-high (ending-frame-number)
			     :end-low (1+ (end-high (first intervals)))
			     :end-high (ending-frame-number)))
      (not-occurrences (rest intervals)))))

(defun progn-occurrences (e bindings)
 (if (null (rest e))
     (occurrences (first e) bindings)
     (let* ((interval1 (occurrences (first e) bindings))
	    (interval2 (progn-occurrences (rest e) bindings))
	    (i (an-integer-between
		(max (end-low interval1) (1- (start-low interval2)))
		(min (end-high interval1) (1- (start-high interval2)))))
	    (interval1 (make-instance 'spanning-interval
				      :start-low (start-low interval1)
				      :start-high (start-high interval1)
				      :end-low i
				      :end-high i))
	    (interval2 (make-instance 'spanning-interval
				      :start-low (1+ i)
				      :start-high (1+ i)
				      :end-low (end-low interval2)
				      :end-high (end-high interval2))))
      (make-instance 'spanning-interval
		     :start-low (start-low interval1)
		     :start-high (start-high interval1)
		     :end-low (end-low interval2)
		     :end-high (end-high interval2)))))

(defun diamond-m-occurrences (e bindings)
 (let ((interval (occurrences e bindings)))
  (make-instance 'spanning-interval
		 :start-low (starting-frame-number)
		 :start-high (ending-frame-number)
		 :end-low (1- (start-low interval))
		 :end-high (1- (start-high interval)))))

(defun diamond-mi-occurrences (e bindings)
 (let ((interval (occurrences e bindings)))
  (make-instance 'spanning-interval
		 :start-low (1+ (end-low interval))
		 :start-high (1+ (end-high interval))
		 :end-low (starting-frame-number)
		 :end-high (ending-frame-number))))

(defun diamond-occurrences (e bindings)
 (let ((interval (occurrences e bindings)))
  (either (make-instance 'spanning-interval
			 :start-low (start-low interval)
			 :start-high (end-high interval)
			 :end-low (starting-frame-number)
			 :end-high (ending-frame-number))
	  (make-instance 'spanning-interval
			 :start-low (starting-frame-number)
			 :start-high (ending-frame-number)
			 :end-low (start-low interval)
			 :end-high (end-high interval))
	  (make-instance 'spanning-interval
			 :start-low (starting-frame-number)
			 :start-high (1- (start-low interval))
			 :end-low (1+ (end-high interval))
			 :end-high (ending-frame-number)))))

(defun occurrences-internal (e bindings)
 (unless (consp e) (error "Improper expression: ~S" e))
 (unless (null (rest (last e))) (error "Improper expression: ~S" e))
 (unless (symbolp (first e)) (error "Improper expression: ~S" e))
 (case (first e)
   (some (unless (and (= (length e) 3)
		      (consp (second e))
		      (null (rest (last (second e))))
		      (every #'symbolp (second e))
		      (not (some #'null (second e))))
	  (error "Improper expression: ~S" e))
	 (some-occurrences (second e) (third e) bindings))
   (every (unless (and (= (length e) 3)
		       (consp (second e))
		       (null (rest (last (second e))))
		       (every #'symbolp (second e))
		       (not (some #'null (second e))))
	   (error "Improper expression: ~S" e))
	  (every-occurrences (second e) (third e) bindings))
   (and (and-occurrences (rest e) bindings))
   (or (occurrences (a-member-of (rest e))))
   (not (unless (= (length e) 2) (error "Improper expression: ~S" e))
	(not-occurrences (all-values (occurrences (second e) bindings))))
   (plus (unless (= (length e) 2) (error "Improper expression: ~S" e))
	 ;; needs work
	 (error "Not yet implemented"))
   (progn (if (= (length e) 1) (error "Improper expression: ~S" e))
	  (progn-occurrences (rest e) bindings))
   (diamond-m (unless (= (length e) 2) (error "Improper expression: ~S" e))
	      (diamond-m-occurrences (second e) bindings))
   (diamond-mi (unless (= (length e) 2) (error "Improper expression: ~S" e))
	       (diamond-mi-occurrences (second e) bindings))
   (diamond (unless (= (length e) 2) (error "Improper expression: ~S" e))
	    (diamond-occurrences (second e) bindings))
   (equal (let ((arguments (evaluate-arguments e 2 bindings)))
	   (unless (eq (first arguments) (second arguments)) (fail))
	   (spanning-interval (starting-frame-number) (ending-frame-number))))
   (part (let ((arguments (evaluate-arguments e 2 bindings)))
	  (unless (member (first arguments) (subobjects (second arguments))
			  :test #'eq)
	   (fail))
	  (spanning-interval (starting-frame-number) (ending-frame-number))))
   (disjoint (let ((arguments (evaluate-arguments e 2 bindings)))
	      (unless (null (intersection (figures (first arguments))
					  (figures (second arguments))
					  :test #'eq))
	       (fail))
	      (spanning-interval (starting-frame-number)
				 (ending-frame-number))))
   (otherwise
    (let ((template
	   (assoc (first e) *perceptual-primitive-templates* :test #'eq)))
     (if template
	 (let* ((arguments (evaluate-arguments e (second template) bindings))
		(reverse-arguments (reverse arguments))
		(symetric? (member :symetric (third template) :test #'eq))
		(vertex (a-member-of *vertices*))
		(edge (a-member-of (edges-leaving vertex))))
	  (unless (and (eq (first (name edge)) (first e))
		       (or (equal (rest (name edge)) arguments)
			   (and symetric?
				(equal (rest (name edge)) reverse-arguments))))
	   (fail))
	  (spanning-interval (frame-number (from-vertex edge))
			     (frame-number (to-vertex edge))))
	 (let* ((template (assoc (first e) *event-templates* :test #'eq))
		(arguments
		 (evaluate-arguments e (length (second template)) bindings)))
	  (unless template (error "Improper expression: ~S" e))
	  (occurrences
	   (third template)
	   (append (mapcar #'list (second template) arguments) bindings))))))))

(defun occurrences (e &optional bindings)
 (a-member-of
  (iterate (with ss = '())
	   (for s in (all-values (occurrences-internal e bindings)))
	   (unless (some #'(lambda (s-prime) (subsumes? s-prime s)) ss)
	    (setf ss (cons s (remove-if
			      #'(lambda (s-prime) (subsumes? s s-prime)) ss))))
	   (finally (return ss)))))

;;; Questions:
;;;  1. does event refer to whole interval or subinterval?
;;;  2. HAND/FOOT predicates
;;;  3. short intervals
;;;  4. SLIDING-AGAINST

(define-event throw (x y)
 ;; Questions:
 ;;  1. is hand necessary?
 ;;  2. does hand (or x) support y during first interval?
 (and (not (part y x))
      (some (z)
	    (and (part z x)
		 (progn (and (translating z) (contacts z y) (attached z y))
			(and (not (diamond (contacts z y)))
			     (not (diamond (attached z y)))
			     (not (diamond (supported y)))))
		 (translating y)))))

(define-event fall (x)
 (and (not (diamond (supported x))) (translating-down x)))

(define-event drop (x y)
 ;; Questions:
 ;;  1. is hand necessary?
 ;;  2. is it hand or x which contacts/attached/supports?
 (some (z)
       (and (part z x)
	    (progn (and (contacts z y)
			(attached z y)
			(supports x y)
			(supported y))
		   (and (not (diamond (contacts z y)))
			(not (diamond (attached z y)))
			(not (diamond (supports x y)))
			(not (diamond (supported y)))
			(translating-down y))))))

(define-event bounce (x)
 ;; Questions:
 ;;  1. middle interval must be short
 (and (translating x)
      (some (y)
	    (progn (not (diamond (contacts x y)))
		   (contacts x y)
		   (not (diamond (contacts x y)))))))

(define-event jump (x)
 (progn (supported x) (and (not (diamond (supported x))) (translating-up x))))

(define-event put (x y)
 (some (w)
       (and (part w x)
	    (progn (and (translating w)
			(contacts w y)
			(attached w y)
			(supports x y)
			(translating y))
		   (some (z)
			 (and (disjoint z w)
			      (not (diamond (translating y)))
			      (supported y)
			      (supports z y)))))))

(define-event pick-up (x y)
 (some (w)
       (and (part w x)
	    (progn (some (z)
			 (and (disjoint z w)
			      (supported y)
			      (supports z y)
			      (contacts z y)))
		   (and (translating w)
			(contacts w y)
			(attached w y)
			(supports x y)
			(translating y))))))

(define-event carry (x y)
 (and (translating x) (translating y) (supports x y)))

(define-event raise (x y)
 (and (not (part y x)) (supports x y) (translating-up y)))

#+comment
(define-event slide (x) (some (y) (sliding-against x y)))

#+comment
(define-event roll (x)
 (some (y)
       (and (not (diamond (sliding-against x y)))
	    (or (rotating-clockwise x) (rotating-counterclockwise x))
	    (contacts x y))))

(define-event step (x)
 (some (y)
       (and (part y x)
	    (progn (contacts y ground)
		   (not (diamond (contacts y ground)))
		   (contacts y ground)))))

#+comment
(define-event walk (x)
 (and (plus (step x))
      (translating x)
      (plus (some (y) (and (part y x) (contacts y ground))))
      ;; needs work
      (not (diamond (some (y) (and (part y x) (sliding-against y ground)))))))

;;; Section: Presentation Types

(define-presentation-type from-to ())

;;; Section: Top-Level

(defun initialize ()
 (setf *frame-number* 0)
 (setf *displayed-frame-number* nil)
 (setf *figures* '())
 (setf *joints* '())
 (setf *layer-assertions* '())
 (setf *objects* '())
 (setf *perceptual-primitives* '())
 (setf *vertices* '())
 (setf ground (make-instance 'ground))
 (setf *ground* (lookup-object (list (ground ground)))))

(defun clear-world ()
 (refresh)
 (iterate (for f in *figures*) (erase f))
 (initialize)
 (clear-task-queue))

(defun perceive ()
 (let ((start (get-internal-real-time)))
  (setf *translation-limit-times* nil)
  (setf *rotation-limit-times* nil)
  (setf *imagination-times* nil)
  (if *commentary?* (format *terminal-io* "~%~%Frame: ~D" *frame-number*))
  (if *cheat?*
      (update-layer-assertions-and-joints-by-cheating)
      (update-layer-assertions-and-joints))
  (partition-into-objects)
  (compute-support-relationships)
  (run-perceptual-primitives)
  (when *commentary?*
   (format *terminal-io* "~%~D calls to TRANSLATION-LIMIT"
	   (length *translation-limit-times*))
   (let* ((time (ceiling (reduce #'+ *translation-limit-times*)))
	  (minutes (floor time 60))
	  (seconds (- time (* minutes 60))))
    (format *terminal-io* "~%TRANSLATION-LIMIT time: ~D:~2,'0D"
	    minutes seconds))
   (format *terminal-io* "~%~D calls to ROTATION-LIMIT"
	   (length *rotation-limit-times*))
   (let* ((time (ceiling (reduce #'+ *rotation-limit-times*)))
	  (minutes (floor time 60))
	  (seconds (- time (* minutes 60))))
    (format *terminal-io* "~%ROTATION-LIMIT time: ~D:~2,'0D"
	    minutes seconds))
   (format *terminal-io* "~%~D calls to IMAGINE" (length *imagination-times*))
   (format *terminal-io* "~%Times: ~S" (mapcar #'ceiling *imagination-times*))
   (let* ((time (ceiling (reduce #'+ *imagination-times*)))
	  (minutes (floor time 60))
	  (seconds (- time (* minutes 60))))
    (format *terminal-io* "~%Imagination time: ~D:~2,'0D" minutes seconds))

   (let* ((time (ceiling (/ (float (- (get-internal-real-time) start))
			    internal-time-units-per-second)))
	  (minutes (floor time 60))
	  (seconds (- time (* minutes 60))))
    (format *terminal-io* "~%Total time: ~D:~2,'0D" minutes seconds)))))

(define-application-frame abigail ()
 ()
 (:panes ((title :title
		 :default-text-style '(:sans-serif (:bold :italic) :very-large)
		 :display-string "Abigail")
	  (command-menu :command-menu)
	  (world :application :scroll-bars nil)
	  (typeout :application)
	  (interactor :interactor :initial-cursor-visibility 'off)
	  (pointer-documentation :pointer-documentation)))
 (:layout
  ((world (:column 1
		   (title :compute)
		   (command-menu :compute)
		   (world :rest)
		   (interactor 0.1)
		   (pointer-documentation :compute)))
   (typeout (:column 1
		     (title :compute)
		     (command-menu :compute)
		     (typeout :rest)
		     (interactor 0.1)
		     (pointer-documentation :compute)))))
 (:command-table (abigail :inherit-from (user-command-table)))
 (:command-definer t))

(defmethod frame-standard-output ((frame abigail))
 (get-frame-pane frame 'interactor))

(defmethod frame-replay :after
 ((frame abigail) stream &optional region)
 (declare (ignore region))
 (when (eq stream *world*)
  (when *display-frame-number?*
   (setf *displayed-frame-number* *frame-number*)
   (display-frame-number *displayed-frame-number*))
  (iterate (for f in *figures*) (if (present? f) (draw f)))))

(defmethod read-frame-command ((frame abigail) &key)
 (let ((command-table (find-command-table 'abigail)))
  (with-command-table-keystrokes (keystrokes command-table)
   (read-command-using-keystrokes command-table keystrokes))))

(defun abigail (&optional process?)
 (let ((abigail
	(make-application-frame
	 'abigail
	 :pretty-name "Abigail"
	 :parent (open-root-window :clx
				   :host (lcl:environment-variable "DISPLAY"))
	 :left 140
	 :top 90
	 :height 700
	 :width 1000)))
  (flet ((abigail-top-level ()
	  (progv (mapcar #'first *process-variables*)
	      (mapcar #'(lambda (process-variable)
			 (eval (second process-variable)))
		      *process-variables*)
	   (setf *world* (get-frame-pane abigail 'world))
	   (setf *interactor* (get-frame-pane abigail 'interactor))
	   (setf *typeout* (get-frame-pane abigail 'typeout))
	   (setf *command-menu* (get-frame-pane abigail 'command-menu))
	   (initialize)
	   (run-frame-top-level abigail))))
   (if process?
       (make-process :name "Abigail" :function #'abigail-top-level)
       (abigail-top-level)))))

(defmethod initialize-instance :after
 ((abigail abigail) &key &allow-other-keys)
 (setf (stream-record-p (get-frame-pane abigail 'world)) nil)
 (setf (medium-transformation (get-frame-pane abigail 'world))
       (compose-transformations
	(make-translation-transformation
	 0.0 (- (window-inside-height (get-frame-pane abigail 'world)) 1.0))
	(make-scaling-transformation pixels-per-foot (- pixels-per-foot))))
 (setf *movie* nil)
 (window-clear (get-frame-pane abigail 'world)))

;;; Section: Commands

(defun add-word (word categories lexicon)
 (iterate
  (with entry = lexicon)
  (for i from 0 below (length word))
  (for character = (aref word i))
  (for code = (- (char-code character) (char-code #\a)))
  (if (null (aref (next-entries entry) code))
      (setf (aref (next-entries entry) code) (make-instance 'entry)))
  (setf entry (aref (next-entries entry) code))
  (finally (setf (word entry) (intern word))
	   (setf (categories entry)
		 (union (categories entry) categories :test #'eq)))))

(defun delete-word (word lexicon)
 (iterate
  delete
  (with entries = '())
  (with entry = lexicon)
  (for i from 0 below (length word))
  (for character = (aref word i))
  (for code = (- (char-code character) (char-code #\a)))
  (if (null (aref (next-entries entry) code)) (return-from delete))
  (push entry entries)
  (setf entry (aref (next-entries entry) code))
  (finally
   (setf (word entry) nil)
   (setf (categories entry) '())
   (iterate (for j from 0 below (length (next-entries entry)))
	    (unless (null (aref (next-entries entry) j))
	     (return-from delete)))
   (iterate (for i from (1- (length word)) downto 0)
	    (for character = (aref word i))
	    (for code = (- (char-code character) (char-code #\a)))
	    (for entry in entries)
	    (setf (aref (next-entries entry) code) nil)
	    (unless (null (categories entry)) (return-from delete))
	    (iterate (for j from 0 below (length (next-entries entry)))
		     (unless (null (aref (next-entries entry) j))
		      (return-from delete)))))))

(defun lookup-word (word lexicon)
 (iterate (with entry = lexicon)
	  (for i from 0 below (length word))
	  (for character = (aref word i))
	  (for code = (- (char-code character) (char-code #\a)))
	  (if (null entry) (return nil))
	  (setf entry (aref (next-entries entry) code))
	  (finally (return (cond ((null entry) nil)
				 ((null (categories entry)) nil)
				 (t (word entry)))))))

(defun complete (word lexicon)
 ;; The following code tries to complete a word given a prefix.
 ;; If it returns :NO-ENTRY then there is no entry with that prefix.
 ;; If it returns :UNAMBIGUOUS and nil then that prefix is a word and not a
 ;; prefix of any other word.
 ;; If it returns :AMBIGUOUS and nil then that prefix is a prefix of at least
 ;; two other words. It is not known whether that prefix is itself a word.
 ;; If it returns :UNAMBIGUOUS and some additional characters then adding
 ;; those characters to the end of the prefix is a word and is not a prefix
 ;; of any other word.
 ;; If it returns :AMBIGUOUS and some additional characters then there are
 ;; at least two entries that begin with prefix and all entries that begin
 ;; with prefix also contain the additional characters as a prefix. It is not
 ;; known whether the combination of the prefix with the additional characters
 ;; is itself a word.
 (iterate
  complete
  (with entry = lexicon)
  (for i from 0 below (length word))
  (for character = (aref word i))
  (for code = (- (char-code character) (char-code #\a)))
  (if (null entry) (return-from complete (values :no-entry '())))
  (setf entry (aref (next-entries entry) code))
  (finally
   (if (null entry) (return-from complete (values :no-entry '())))
   (iterate (with additional-characters = '())
	    (unless (null (categories entry))
	     (iterate (for j from 0 below (length (next-entries entry)))
		      (unless (null (aref (next-entries entry) j))
		       (return-from complete
			(values :ambiguous
				(reverse additional-characters)))))
	     (return-from complete
	      (values :unambiguous (reverse additional-characters))))
	    (iterate (with next = nil)
		     (for j from 0 below (length (next-entries entry)))
		     (unless (null (aref (next-entries entry) j))
		      (unless (null next)
		       (return-from complete
			(values :ambiguous
				(reverse additional-characters))))
		      (setf next j))
		     (finally (if (null next) (error "Completion error"))
			      (push (code-char (+ next (char-code #\a)))
				    additional-characters)
			      (setf entry
				    (aref (next-entries entry) next))))))))

(defun type-in (character)
 (write-char character *interactor*)
 (setf *word* (concatenate 'string *word* (string character)))
 (if *completion-mode?*
     (multiple-value-bind (ambiguity additional-characters)
	 (complete *word* *lexicon*)
      (iterate (for character in additional-characters)
	       (write-char character *interactor*))
      (setf *word*
	    (concatenate 'string
			 *word*
			 (coerce additional-characters 'string)))
      (when (eq ambiguity :unambiguous)
       (write-char #\space *interactor*)
       (setf *words* (append *words* (list (lookup-word *word* *lexicon*))))
       (setf *word* "")))))

(defun type-in-space ()
 (when (string/= *word* "")
  (write-char #\space *interactor*)
  (if (null (lookup-word *word* *lexicon*))
      (add-word *word* '(n v p)	*lexicon*))
  (setf *words* (append *words* (list (lookup-word *word* *lexicon*))))
  (setf *word* "")))

(defun type-in-rubout ()
 (if (string= *word* "")
     (unless (null *words*) (setf *words* (reverse (rest (reverse *words*)))))
     (setf *word* ""))
 ;; needs work: To make CLIM-clean
 ;;(multiple-value-bind (x y) (flavor::send *interactor* :read-cursorpos)
 ;; (declare (ignore x))
 ;; (flavor::send *interactor* :set-cursorpos 0 y))
 ;;(flavor::send *interactor* :clear-rest-of-line)
 (iterate (for word in *words*) (format *interactor* "~A " word))
 (format *interactor* "~A" *word*))

(defun type-in-return ()
 (when (string/= *word* "")
  (write-char #\space *interactor*)
  (if (null (lookup-word *word* *lexicon*))
      (add-word *word* '(n v p) *lexicon*))
  (setf *words* (append *words* (list (lookup-word *word* *lexicon*))))
  (setf *word* ""))
 (terpri *interactor*)
 (setf *words* '())
 (setf *word* ""))

(defun refresh ()
 (window-clear *world*)
 (when *display-frame-number?*
  (setf *displayed-frame-number* *frame-number*)
  (display-frame-number *displayed-frame-number*))
 (iterate (for f in *figures*) (if (present? f) (draw f))))

;;; Section: Command Menu Commands

(define-abigail-command (com-help :name t) ()
 (window-clear *typeout*)
 (format *typeout* "Sorry, no on-line help is available for Abigail.")
 (format *typeout* "~%Help may be obtained from:")
 (format *typeout* "~% Jeffrey Mark Siskind")
 (format *typeout* "~% Department of Computer Science")
 (format *typeout* "~% University of Toronto")
 (format *typeout* "~% Toronto Ontario M5S 1A4 CANADA")
 (format *typeout* "~% 416/978-6114")
 (format *typeout* "~% Qobi@CS.Toronto.EDU")
 (format *typeout* "~%            or")
 (format *typeout* "~% 260 Heath Street West #1201")
 (format *typeout* "~% Toronto Ontario M5P 3L6 CANADA")
 (format *typeout* "~% 416/440-0595")
 (set-frame-layout *application-frame* 'typeout))

(define-abigail-command (com-exit :name t) ()
 (let ((window (frame-top-level-window *application-frame*)))
  (setf (window-visibility window) nil)
  (force-output window))
 (frame-exit *application-frame*))

(define-abigail-command (com-complete :name t) () (setf *completion-mode?* t))

(define-abigail-command (com-slow :name t) () (setf *completion-mode?* nil))

(define-abigail-command (com-world :name t) ()
 (set-frame-layout *application-frame* 'world))

(define-abigail-command (com-typeout :name t) ()
 (set-frame-layout *application-frame* 'typeout))

(define-abigail-command (com-refresh :name t) () (refresh))

(define-abigail-command (com-frame-number :name t) ()
 (cond (*display-frame-number?*
	(setf *display-frame-number?* nil)
	(when *displayed-frame-number*
	 (display-frame-number *displayed-frame-number*)
	 (setf *displayed-frame-number* nil)))
       (t (setf *display-frame-number?* t)
	  (setf *displayed-frame-number* *frame-number*)
	  (display-frame-number	*displayed-frame-number*))))

(define-abigail-command (com-perceive :name t) ()
 (cond (*perceive?*
	(setf *perceive?* nil)
	(format t "Perception is OFF~%"))
       (t (setf *perceive?* t)
	  (format t "Perception is ON~%")
	  (unless *display-frame-number?*
	   (setf *display-frame-number?* t)
	   (setf *displayed-frame-number* *frame-number*)
	   (display-frame-number *displayed-frame-number*)))))

(define-abigail-command (com-movie :name t) ()
 (let* ((choices
	 (mapcar #'(lambda (movie)
		    (cons (iterate (with name = (string-capitalize movie))
				   (for i from 0 below (length name))
				   (if (char= (char name i) #\-)
				       (setf (char name i) #\space))
				   (finally (return name)))
			  movie))
		 (reverse *movies*)))
	(choice
	 (menu-choose
	  choices
	  :associated-window *command-menu*
	  :default-item (find *movie* choices :test #'eq :key #'cdr))))
  (when choice
   (setf *movie* choice)
   (funcall (symbol-function choice)))))

(define-abigail-command (com-begin :name t) ()
 (if *movie* (funcall (symbol-function *movie*))))

(define-abigail-command (com-frame :name t) () (single-step))

(define-abigail-command (com-roll :name t) ()
 (iterate (until (or (done?) (read-char-no-hang))) (single-step))
 (if *perceive?* (close-perceptual-primitives)))

(define-abigail-command (com-imagine :name t) ()
 (imagine *figures*
	  *joints*
	  *layer-assertions*
	  #'(lambda () nil)
	  #'(lambda () nil)
	  t))

(define-abigail-command (com-start-recording :name t) ()
 (setf *record-draw?* t))

(define-abigail-command (com-stop-recording :name t) ()
 (setf *record-draw?* nil))

(define-abigail-command (com-erase-recording :name t) ()
 (setf *draw-recording* '()))

(define-abigail-command (com-clear-world :name t) () (clear-world))

(define-abigail-command (com-clear-typeout :name t) ()
 (window-clear *typeout*))

(define-abigail-command (com-clear-layers :name t) ()
 (setf *layer-assertions* '()))

(define-abigail-command (com-add-joint :name t) ()
 (setf *j* nil)
 (when (and *f* *g*)
  (multiple-value-bind (displacement-f1
			displacement-g1
			rotation1
			displacement-f2
			displacement-g2
			rotation2)
      (displacement-rotation *f* *g*)
   ;; needs work: to select which of the following is intended
   (if displacement-f1
       (setf *j* (joint *f* *g* displacement-f1 displacement-g1 rotation1)))
   (if displacement-f2
       (setf *j* (joint *f* *g* displacement-f2 displacement-g2 rotation2)))))
 (cond (*j* (push *j* *joints*) (format t "~S" *j*))
       (t (beep))))

(define-abigail-command (com-rigid-displacement-f :name t) ()
 (if *j*
     (multiple-value-bind (displacement-f displacement-g rotation)
	 (displacement-rotation-point (f *j*) (g *j*) (p *j*))
      (declare (ignore displacement-g rotation))
      (setf (displacement-f *j*) displacement-f)
      (format t "DISPLACEMENT-F(~S) is now rigid" *j*))
     (beep)))

(define-abigail-command (com-rigid-displacement-g :name t) ()
 (if *j*
     (multiple-value-bind (displacement-f displacement-g rotation)
	 (displacement-rotation-point (f *j*) (g *j*) (p *j*))
      (declare (ignore displacement-f rotation))
      (setf (displacement-g *j*) displacement-g)
      (format t "DISPLACEMENT-G(~S) is now rigid" *j*))
     (beep)))

(define-abigail-command (com-rigid-rotation :name t) ()
 (if *j*
     (multiple-value-bind (displacement-f displacement-g rotation)
	 (displacement-rotation-point (f *j*) (g *j*) (p *j*))
      (declare (ignore displacement-f displacement-g))
      (setf (rotation *j*) rotation)
      (format t "ROTATION(~S) is now rigid" *j*))
     (beep)))

(define-abigail-command (com-flexible-displacement-f :name t) ()
 (cond (*j* (setf (displacement-f *j*) nil)
	    (setf *joints*
		  (delete-if #'(lambda (j)
				(and (null (displacement-f j))
				     (null (displacement-g j))))
			     *joints*))
	    (format t "DISPLACEMENT-F(~S) is now flexible" *j*))
       (t (beep))))

(define-abigail-command (com-flexible-displacement-g :name t) ()
 (cond (*j* (setf (displacement-g *j*) nil)
	    (setf *joints*
		  (delete-if #'(lambda (j)
				(and (null (displacement-f j))
				     (null (displacement-g j))))
			     *joints*))
	    (format t "DISPLACEMENT-G(~S) is now flexible" *j*))
       (t (beep))))

(define-abigail-command (com-flexible-rotation :name t) ()
 (cond (*j* (setf (rotation *j*) nil)
	    (format t "ROTATION(~S) is now flexible" *j*))
       (t (beep))))

(define-abigail-command (com-same-layer :name t) ()
 (cond ((and *f* *g*)
	(push `(same-layer ,*f* ,*g*) *layer-assertions*)
	(setf *layer-assertions*
	      (consistent-layer-assertions *layer-assertions*))
	(format t "~S and ~S are now on the same layer" *f* *g*))
       (t (beep))))

(define-abigail-command (com-different-layers :name t) ()
 (cond ((and *f* *g*)
	(push `(different-layer ,*f* ,*g*) *layer-assertions*)
	(setf *layer-assertions*
	      (consistent-layer-assertions *layer-assertions*))
	(format t "~S and ~S are now on different layers" *f* *g*))
       (t (beep))))

(define-abigail-command (com-line-segment :name t) ()
 (setf *figure-type* 'line-segment))

(define-abigail-command (com-circle :name t) () (setf *figure-type* 'circle))

(define-abigail-command (com-test :name t) () (imagine-test))

(define-abigail-command (com-commentary :name t) ()
 (cond (*commentary?*
	(setf *commentary?* nil)
	(format t "Commentary is OFF~%"))
       (t (setf *commentary?* t)
	  (format t "Commentary is ON~%"))))

(define-abigail-command (com-cheat :name t) ()
 (cond (*cheat?*
	(setf *cheat?* nil)
	(format t "Cheating is OFF~%"))
       (t (setf *cheat?* t)
	  (format t "Cheating is ON~%"))))

;;; Section: Command Utilities

(defmethod print-object ((spanning-interval spanning-interval) stream)
 (let ((i (start-low spanning-interval))
       (j (start-high spanning-interval))
       (k (end-low spanning-interval))
       (l (end-high spanning-interval)))
  (cond ((= i j k l) (format stream "[~D]" i))
	((and (= i k) (= j l)) (format stream "[~D:~D]" i j))
	(t (if (= i j)
	       (format stream "[~D," i)
	       (format stream "[~D:~D," i j))
	   (if (= k l)
	       (format stream "~D]" k)
	       (format stream "~D:~D]" k l))))))

(defun default-abigail-pathname (type)
 (unless *default-pathname* (setf *default-pathname* "~/abigail.abigail"))
 (merge-pathnames (make-pathname :type type) *default-pathname*))

(defun save-microworld-as-postscript-file (pathname)
 (with-bounding-box (postscript pathname)
  (draw-line* postscript 0 0 0 (window-inside-height *world*))
  (draw-line* postscript
	      0 (window-inside-height *world*)
	      (window-inside-width *world*) (window-inside-height *world*))
  (draw-line* postscript
	      (window-inside-width *world*) (window-inside-height *world*)
	      (window-inside-width *world*) 0)
  (draw-line* postscript (window-inside-width *world*) 0 0 0)
  (setf (medium-transformation postscript)
	(compose-transformations (medium-transformation postscript)
				 (medium-transformation *world*)))
  (iterate
   (for f in *figures*)
   (etypecase f
     (line-segment
      (draw-line* postscript (x (p f)) (y (p f)) (x (q f)) (y (q f))
		  :line-thickness (/ 25 3)))
     (circle
      (draw-circle* postscript (x (p f)) (y (p f)) (size f)
		    :filled nil
		    :line-thickness (/ 25 3))))))
 t)

(defun draw-perceptual-primitive-edge (stream from to low high scale i)
 (with-output-as-presentation
     (:stream stream :object (list from to) :type 'from-to)
  (draw-line* stream
	      (+ (* scale (- (max from low) low)) 32)
	      i
	      (+ (* scale (- (min to high) low)) 32)
	      i)
  (unless (= from to)
   (draw-text* stream
	       (format nil "~D" from)
	       (+ (- (* scale (- (max from low) low))
		     (* 8 (length (format nil "~D" from))))
		  32)
	       (- i 5)))
  (draw-text* stream
	      (format nil "~D" to)
	      (+ (* scale (- (min to high) low)) 32)
	      (- i 5))))

(defun draw-perceptual-primitive-graph (stream from to)
 (let* ((edges (remove-if
                #'(lambda (edge)
                   (or (and from (< (frame-number (to-vertex edge)) from))
                       (and to (> (frame-number (from-vertex edge)) to))))
                (remove-duplicates
                 (iterate (for vertex in *vertices*)
                          (appending (edges-entering vertex))
                          (appending (edges-leaving vertex)))
                 :test #'eq)))
        (from-to-list (sort (remove-duplicates
                             (mapcar
			      #'(lambda (edge)
				 (list (frame-number (from-vertex edge))
				       (frame-number (to-vertex edge))))
			      edges)
                             :test #'equal)
                            #'(lambda (x y)
                               (or (< (first x) (first y))
                                   (and (= (first x) (first y))
                                        (< (second x) (second y))))))))
  (format stream "~%")
  (if from-to-list
      (with-room-for-graphics (stream)
       (iterate
	(with low =
	      (if from from (reduce #'min (mapcar #'first from-to-list))))
	(with high = (if to to (reduce #'max (mapcar #'second from-to-list))))
	(with scale = (if (= high low) 850 (/ 850 (- high low))))
	(for (from to) in from-to-list)
	(for i from 0 by 13)
	(draw-perceptual-primitive-edge stream from to low high scale i))))))

(defun show-perceptual-data (stream)
 (format stream "~%Frame: ~D" *frame-number*)
 (format stream "~%~%~D Existing Object~:P:"
	 (iterate (for object in *objects*) (if (exists? object) (sum 1))))
 (iterate (for object in *objects*)
	  (if (exists? object) (print object stream)))
 (format stream "~%~%~D Non-existing Object~:P:"
	 (iterate (for object in *objects*)
		  (unless (exists? object) (sum 1))))
 (iterate (for object in *objects*)
	  (unless (exists? object) (print object stream)))
 (format stream "~%~%~D Prominent Object~:P:"
	 (iterate (for object in *objects*) (if (prominent? object) (sum 1))))
 (iterate (for object in *objects*)
	  (if (prominent? object) (print object stream)))
 (format stream "~%~%~D Layer Assertion~:P:" (length *layer-assertions*))
 (iterate (for layer-assertion in *layer-assertions*)
	  (print layer-assertion stream))
 (format stream "~%~%~D Joint~:P:" (length *joints*))
 (iterate
  (for j in *joints*)
  (format stream "~%~A displacement-f, ~A displacement-g, ~A rotation, ~S"
	  (if (displacement-f j) "   Rigid" "Flexible")
	  (if (displacement-g j) "   rigid" "flexible")
	  (if (rotation j) "   rigid" "flexible")
	  j))
 (format stream "~%~%Closed Perceptual Primitives:")
 (iterate (for edge in (remove-duplicates
			(iterate (for vertex in *vertices*)
				 (appending (edges-entering vertex))
				 (appending (edges-leaving vertex)))
			:test #'eq))
	  (print edge stream))
 (format stream "~%~%Open Perceptual Primitives:")
 (iterate
  (for perceptual-primitive in *perceptual-primitives*)
  (when (eq (state perceptual-primitive) 'on)
   (format stream "~%[~D,present]~S"
	   (frame-number (vertex perceptual-primitive))
	   perceptual-primitive))))

(defun list-of (n f)
 (if (zerop n) '() (cons (funcall-nondeterministic f) (list-of (1- n) f))))

(defun show-events (stream from to)
 (iterate
  (for template in *event-templates*)
  (for name = (first template))
  (for n = (length (second template)))
  (for-effects
   (let ((e `(,name ,@(list-of n #'(lambda () (a-member-of *objects*))))))
    (if (and (every #'(lambda (x) (occurs? `(prominent ,x) from to)) (rest e))
	     (occurs? e from to))
	(format stream "~%[~D:~D]~S" from to e))))))

(defun show-all-events (stream from to)
 (iterate
  (for u in *vertices*)
  (if (or (null from) (>= (frame-number u) from))
      (iterate (for v first u then (next-vertex v))
	       (while (and v (or (null to) (<= (frame-number v) to))))
	       (show-events stream (frame-number u) (frame-number v))))))

(defun subsumes? (s1 s2)
 (and (<= (start-low s1) (start-low s2))
      (>= (start-high s1) (start-high s2))
      (<= (end-low s1) (end-low s2))
      (>= (end-high s1) (end-high s2))))

(defun add-consolidated-event (s ss)
 (iterate
  (with queue = (list s))
  (while queue)
  (for s = (pop queue))
  (unless (some #'(lambda (s-prime) (subsumes? s-prime s)) ss)
   (setf ss (remove-if #'(lambda (s-prime) (subsumes? s s-prime)) ss))
   (iterate (for s-prime in ss)
	    (if (and (<= (max (start-low s) (start-low s-prime))
			 (min (start-high s) (start-high s-prime)))
		     (<= (max (end-low s) (end-low s-prime))
			 (1+ (min (end-high s) (end-high s-prime)))))
		(push (list (max (start-low s) (start-low s-prime))
			    (min (start-high s) (start-high s-prime))
			    (min (end-low s) (end-low s-prime))
			    (max (end-high s) (end-high s-prime)))
		      queue))
	    (if (and (<= (max (end-low s) (end-low s-prime))
			 (min (end-high s) (end-high s-prime)))
		     (<= (max (start-low s) (start-low s-prime))
			 (1+ (min (start-high s) (start-high s-prime)))))
		(push (list (min (start-low s) (start-low s-prime))
			    (max (start-high s) (start-high s-prime))
			    (max (end-low s) (end-low s-prime))
			    (min (end-high s) (end-high s-prime)))
		      queue)))
   (push s ss)))
 ss)

(defun show-consolidated-events (stream from to names objects)
 (let ((table (make-hash-table :test #'equal)))
  (iterate
   (for template in *event-templates*)
   (for name = (first template))
   (for n = (length (second template)))
   (if (or (eq names t) (member name names :test #'eq))
       (iterate
	(for u in *vertices*)
	(for i = (frame-number u))
	(if (or (null from) (>= i from))
	    (iterate
	     (for v first u then (next-vertex v))
	     (while (and v (or (null to) (<= (frame-number v) to))))
	     (for j = (frame-number v))
	     (for-effects
	      (let ((e `(,name
			 ,@(list-of n #'(lambda () (a-member-of objects))))))
	       (if (and (every #'(lambda (x) (occurs? `(prominent ,x) i j))
			       (rest e))
			(occurs? e i j))
		   (setf (gethash e table)
			 (add-consolidated-event
			  (interval i j) (gethash e table)))))))))))
  (iterate (for (e ss) in-hashtable table)
	   (iterate (for s in ss) (format stream "~%~S~S" s e)))))

(defun show-occurrences (stream names objects)
 (iterate
  (for template in *event-templates*)
  (for name = (first template))
  (for n = (length (second template)))
  (if (or (eq names t) (member name names :test #'eq))
      (for-effects
       (let ((e `(,name ,@(list-of n #'(lambda () (a-member-of objects))))))
	(format stream "~%~S~S"
		(occurrences
		 `(and ,@(mapcar #'(lambda (x) `(prominent ,x)) (rest e)) ,e))
		e))))))

;;; Section: Command Line Commands

(define-abigail-command (com-clear-output-history :name t) ()
 (window-clear (frame-standard-output *application-frame*)))

(define-abigail-command (com-initialize-mind :name t) ()
 (setf *default-pathname* nil)
 (setf *completion-mode?* nil)
 (setf *lexicon* (make-instance 'entry)))

(define-abigail-command (com-load-mind :name t)
    ((pathname
      'pathname
      :prompt "File"
      :documentation "File to load mind from"
      :default (default-abigail-pathname "mind")))
 (setf *default-pathname* pathname)
 (with-open-file (mind pathname :direction :input)
  ;; needs work: need to be able to read lexicon
  (setf *completion-mode?* (read mind))))

(define-abigail-command (com-save-mind :name t)
    ((pathname
      'pathname
      :prompt "File"
      :documentation "File to save mind to"
      :default (default-abigail-pathname "mind")))
 (setf *default-pathname* pathname)
 (with-open-file (mind pathname :direction :output)
  ;; needs work: need to be able to write lexicon
  (print *completion-mode?* mind)))

(define-abigail-command (com-load-perceptual-data :name t)
    ((pathname
      'pathname
      :prompt "File"
      :documentation "File to load perceptual data from"
      :default (default-abigail-pathname "perceptual-data")))
 (setf *default-pathname* pathname)
 (initialize)
 (with-open-file (perceptual-data pathname :direction :input)
  (setf *frame-number* (read perceptual-data))
  (setf *figures*
	(iterate (for f in (read perceptual-data))
		 (collect (make-instance 'figure :p nil :q nil :name f))))
  (setf *objects*
	(iterate
	 (for (exists? prominent? object) in (read perceptual-data))
	 (let ((object
		(make-instance
		 'object
		 :figures (iterate (for f in object)
				   (collect (nth f *figures*))))))
	  (setf (exists? object) exists?)
	  (setf (prominent? object) prominent?)
	  (collect object))))
  (iterate (for x in *objects*)
	   (iterate (for y in *objects*)
		    (when (and (not (eq x y))
			       (subset? (figures x) (figures y)))
		     (push x (subobjects y))
		     (push y (superobjects x)))))
  (iterate
   (for (from to name) in (read perceptual-data))
   (let ((from-vertex (find from *vertices* :test #'= :key #'frame-number)))
    (when (null from-vertex)
     (setf from-vertex (make-instance 'vertex :frame-number from))
     (push from-vertex *vertices*))
    (let ((to-vertex (find to *vertices* :test #'= :key #'frame-number)))
     (when (null to-vertex)
      (setf to-vertex (make-instance 'vertex :frame-number to))
      (push to-vertex *vertices*))
     (let ((edge
	    (make-instance
	     'edge
	     :from-vertex from-vertex
	     :to-vertex to-vertex
	     :name (cons (first name)
			 (iterate (for index in (rest name))
				  (collect (nth index *objects*)))))))
      (push edge (edges-leaving from-vertex))
      (push edge (edges-entering to-vertex))))))))

(define-abigail-command (com-save-perceptual-data :name t)
    ((pathname
      'pathname
      :prompt "File"
      :documentation "File to save perceptual data to"
      :default (default-abigail-pathname "perceptual-data")))
 (setf *default-pathname* pathname)
 (with-open-file (perceptual-data pathname :direction :output)
  (print *frame-number* perceptual-data)
  (print (iterate (for f in *figures*) (collect (name f)))
	 perceptual-data)
  (print (iterate (for object in *objects*)
		  (collect (list (exists? object)
				 (prominent? object)
				 (iterate (for f in (figures object))
					  (collect (position f *figures*
							     :test #'eq))))))
	 perceptual-data)
  (print
   (iterate
    (for edge in (remove-duplicates
		  (iterate (for vertex in *vertices*)
			   (appending (edges-entering vertex))
			   (appending (edges-leaving vertex)))
		  :test #'eq))
    (collect
     (list (frame-number (from-vertex edge))
	   (frame-number (to-vertex edge))
	   (cons (first (name edge))
		 (iterate
		  (for argument in (rest (name edge)))
		  (collect (position argument *objects* :test #'eq)))))))
   perceptual-data)))

(define-abigail-command (com-save-draw-recording :name t)
 ((pathname
   'pathname
   :prompt "File"
   :documentation "File to save draw recroding to"
   :default (default-abigail-pathname "draw-recording")))
 (setf *default-pathname* pathname)
 (setf *draw-recording* (nreverse *draw-recording*))
 (with-open-file (draw-recording pathname :direction :output)
  (iterate
   (for record in *draw-recording*)
   (ecase (first record)
    (line-segment (format draw-recording "L ~D ~D ~D ~D~%"
			  (second record)
			  (third record)
			  (fourth record)
			  (fifth record)))
    (circle (format draw-recording "C ~D ~D ~D~%"
		    (second record)
		    (third record)
		    (fourth record)))
    (end-of-frame (format draw-recording "F~%"))
    (end-of-imagination-step (format draw-recording "S~%"))
    (end-of-imagination (format draw-recording "E~%")))))
 (setf *draw-recording* (nreverse *draw-recording*)))

(define-abigail-command (com-save-microworld-as-postscript-file :name t)
    ((pathname
      'pathname
      :prompt "File"
      :documentation "File to save microworld to"
      :default (default-abigail-pathname "eps")))
 (setf *default-pathname* pathname)
 (save-microworld-as-postscript-file pathname))

(define-abigail-command
    (com-save-perceptual-primitive-graph-as-postscript-file :name t)
    ((pathname
      'pathname
      :prompt "File"
      :documentation "File to save perceptual primitive graph to"
      :default (default-abigail-pathname "eps"))
     &key
     (from
      'integer
      :prompt "From frame"
      :documentation "Show edges starting at or after this frame"
      :default nil)
     (to
      'integer
      :prompt "To frame"
      :documentation "Show edges ending at or before this frame"
      :default nil))
 (setf *default-pathname* pathname)
 (with-bounding-box (postscript pathname)
  (draw-perceptual-primitive-graph postscript from to)))

(define-abigail-command (com-save-perceptual-primitives-as-file :name t)
    ((pathname
      'pathname
      :prompt "File"
      :documentation "File to save perceptual primitives to"
      :default (default-abigail-pathname "text"))
     &key
     (from
      'integer
      :prompt "From frame"
      :documentation "Show edges starting at or after this frame"
      :default nil)
     (to
      'integer
      :prompt "To frame"
      :documentation "Show edges ending at or before this frame"
      :default nil))
 (setf *default-pathname* pathname)
 (with-open-file (stream pathname :direction :output)
  (let* ((edges (remove-if
		 #'(lambda (edge)
		    (or (and from (< (frame-number (to-vertex edge)) from))
			(and to (> (frame-number (from-vertex edge)) to))))
		 (remove-duplicates
		  (iterate (for vertex in *vertices*)
			   (appending (edges-entering vertex))
			   (appending (edges-leaving vertex)))
		  :test #'eq)))
	 (from-to-list (sort (remove-duplicates
			      (mapcar
			       #'(lambda (edge)
				  (list (frame-number (from-vertex edge))
					(frame-number (to-vertex edge))))
			       edges)
			      :test #'equal)
			     #'(lambda (x y)
				(or (< (first x) (first y))
				    (and (= (first x) (first y))
					 (< (second x) (second y))))))))
   (iterate
    (for from-to in from-to-list)
    (iterate
     (for edge in
	  (remove-duplicates
	   (iterate
	    outer
	    (for vertex in *vertices*)
	    (if (= (frame-number vertex) (first from-to))
		(iterate
		 (for edge in (edges-leaving vertex))
		 (if (= (frame-number (to-vertex edge)) (second from-to))
		     (in outer (collect edge)))))
	    (if (= (frame-number vertex) (second from-to))
		(iterate
		 (for edge in (edges-entering vertex))
		 (if (= (frame-number (from-vertex edge)) (first from-to))
		     (in outer (collect edge))))))
	   :test #'eq))
     (print edge stream))
    (format stream "~%")))))

(define-abigail-command (com-close-perceptual-primitives :name t) ()
 (close-perceptual-primitives))

(define-abigail-command (com-show-perceptual-primitive-graph :name t)
    (&key
     (from
      'integer
      :prompt "From frame"
      :documentation "Show edges starting at or after this frame"
      :default nil)
     (to
      'integer
      :prompt "To frame"
      :documentation "Show edges ending at or before this frame"
      :default nil))
 (draw-perceptual-primitive-graph *typeout* from to)
 (set-frame-layout *application-frame* 'typeout))

(define-abigail-command (com-show-perceptual-primitives) ((from-to 'from-to))
 (iterate
  (for edge in
       (remove-duplicates
	(iterate
	 outer
	 (for vertex in *vertices*)
	 (if (= (frame-number vertex) (first from-to))
	     (iterate
	      (for edge in (edges-leaving vertex))
	      (if (= (frame-number (to-vertex edge)) (second from-to))
		  (in outer (collect edge)))))
	 (if (= (frame-number vertex) (second from-to))
	     (iterate
	      (for edge in (edges-entering vertex))
	      (if (= (frame-number (from-vertex edge)) (first from-to))
		  (in outer (collect edge))))))
	:test #'eq))
  (print edge *typeout*)))

(define-abigail-command (com-show-perceptual-data :name t)
    (&key (buffer?
	   'boolean
	   :prompt "Yes or No"
	   :documentation "Yes to go to Emacs buffer"
	   :default nil))
 (cond (buffer?	(show-perceptual-data *terminal-io*))
       (t (show-perceptual-data *typeout*)
	  (set-frame-layout *application-frame* 'typeout))))

(define-abigail-command (com-show-events :name t)
    ((from
      'integer
      :prompt "From frame"
      :documentation "Show events starting at this frame")
     (to
      'integer
      :prompt "To frame"
      :documentation "Show events ending at this frame")
     &key
     (buffer?
      'boolean
      :prompt "Yes or No"
      :documentation "Yes to go to Emacs buffer"
      :default nil))
 (cond (buffer? (show-events *terminal-io* from to))
       (t (show-events *typeout* from to)
	  (set-frame-layout *application-frame* 'typeout))))

(define-abigail-command (com-show-all-events :name t)
    (&key
     (from
      'integer
      :prompt "From frame"
      :documentation "Show events starting at or after this frame"
      :default nil)
     (to
      'integer
      :prompt "To frame"
      :documentation "Show events ending at or before this frame"
      :default nil)
     (buffer?
      'boolean
      :prompt "Yes or No"
      :documentation "Yes to go to Emacs buffer"
      :default nil))
 (cond (buffer? (show-all-events *terminal-io* from to))
       (t (show-all-events *typeout* from to)
	  (set-frame-layout *application-frame* 'typeout))))

(define-abigail-command (com-show-occurrences :name t)
    (&key
     (buffer?
      'boolean
      :prompt "Yes or No"
      :documentation "Yes to go to Emacs buffer"
      :default nil))
 (cond (buffer? (show-occurrences *terminal-io* t *objects*))
       (t (show-occurrences *typeout* t *objects*)
	  (set-frame-layout *application-frame* 'typeout))))

(define-abigail-command (com-describe-lisp-object) ((object 'expression))
 (let ((*standard-output* *typeout*)) (describe object)))

(define-abigail-command (com-frames-per-second :name t) ()
 (format t "~D fps"
	 (/ 100 (let ((start (get-internal-real-time)))
		 (iterate (repeat 100) (single-step))
		 (/ (float (- (get-internal-real-time) start))
		    internal-time-units-per-second)))))

;;; Section: Mouse driven commands

(define-abigail-command (com-select) ((x 'integer) (y 'integer))
 ;; needs work: should always guarantee that *f*, *g*, and *j* are included in
 ;;             *figures* and *joints*
 (let* ((*fuzz* lint)
	(p (point x y))
	(joints (iterate
		 (for j in *joints*)
		 (for p = (p j))
		 (if (and (fuzzy= (x p) x) (fuzzy= (y p) y)) (collect j)))))
  (if (null joints)
      (iterate
       (for f in *figures*)
       (etypecase f
	 (line-segment
	  (let ((l (extend-to-line f)))
	   (when (and (fuzzy= (+ (* (a l) x) (* (b l) y)) (c l))
		      (fuzzy-point-between-points-inclusive? (p f) p (q f)))
	    (setf *g* *f*)
	    (setf *f* f)
	    (format t "~S selected"	f)
	    (return))))
	 (circle
	  (when (fuzzy= (distance (p f) (q f)) (distance p (p f)))
	   (setf *g* *f*)
	   (setf *f* f)
	   (format t "~S selected" f)
	   (return))))
       (finally (beep)))
      (cond
	((= (length joints) 1)
	 (setf *j* (first joints))
	 (format t "~S selected" *j*))
	((> (length joints) 1)
	 (let ((joints (iterate (for j in joints)
				(if (or (and (eq (f j) *f*) (eq (g j) *g*))
					(and (eq (f j) *g*) (eq (g j) *f*)))
				    (collect j)))))
	  (cond ((= (length joints) 1)
		 (setf *j* (first joints))
		 (format t "~S selected" *j*))
		(t (beep)))))))))

(define-abigail-command (com-delete) ((x 'integer) (y 'integer))
 (let* ((*fuzz* lint)
	(p (point x y))
	(done? nil))
  ;; needs work: will mistakingly delete two figures if one tries to delete a
  ;;             joint that is not there
  (setf *joints*
	(iterate
	 (for j in *joints*)
	 (for p = (p j))
	 (if (and (fuzzy= (x p) x) (fuzzy= (y p) y))
	     (setf done? t)
	     (collect j))))
  (unless done?
   (setf done? nil)
   (setf *figures*
	 (iterate
	  (for f in *figures*)
	  (etypecase f
	    (line-segment
	     (let ((l (extend-to-line f)))
	      (cond ((and (fuzzy= (+ (* (a l) x) (* (b l) y)) (c l))
			  (fuzzy-point-between-points-inclusive?
			   (p f) p (q f)))
		     (erase f)
		     (setf *joints* (delete f *joints* :test #'eq :key #'f))
		     (setf *joints* (delete f *joints* :test #'eq :key #'g))
		     (setf done? t))
		    (t (collect f)))))
	    (circle
	     (cond
	       ((fuzzy= (distance (p f) (q f)) (distance p (p f)))
		(erase f)
		(setf *joints* (delete f *joints* :test #'eq :key #'f))
		(setf *joints* (delete f *joints* :test #'eq :key #'g))
		(setf done? t))
	       (t (collect f)))))))
   (cond
     (done?
      (iterate (for f in *figures*) (for i from 0) (setf (index f) i))
      (initialize-caches *figures*)
      (setf *layer-assertions*
	    (iterate (for layer-assertion in *layer-assertions*)
		     (if (and (member (second layer-assertion)
				      *figures*
				      :test #'eq)
			      (member (third layer-assertion)
				      *figures*
				      :test #'eq))
			 (collect layer-assertion))))
      (setf *layer-assertions*
	    (consistent-layer-assertions *layer-assertions*)))
     (t (beep))))))

(defun add-line-segment (x y)
 (let* ((x1 (quantize x))
	(y1 (quantize y))
	(p1 (point x1 y1)))
  (let ((x2 nil)
	(y2 nil))
   (tracking-pointer
    (*world*)
    (:pointer-motion
     (window x y)
     (declare (ignore window))
     (multiple-value-bind (xt yt)
	 (transform-point*
	  (invert-transformation (medium-transformation *world*)) x y)
      (setf x (quantize xt))
      (setf y (quantize yt)))
     (if (and x2 y2) (draw-line* *world* x1 y1 x2 y2 :ink +flipping-ink+))
     (draw-line* *world* x1 y1 x y :ink +flipping-ink+)
     (setf x2 x y2 y))
    (:pointer-button-release
     ()
     (when (and x2 y2)
      (draw-line* *world* x1 y1 x2 y2 :ink +flipping-ink+)
      (let ((f (line-segment p1 (point x2 y2) :name (gensym "G"))))
       (log-previous f)
       (paint f)))
     (return))))
  (initialize-caches *figures*)
  (setf *layer-assertions* (consistent-layer-assertions *layer-assertions*))))

(defun add-circle (x y)
 (let* ((x1 (quantize x))
	(y1 (quantize y))
	(p1 (point x1 y1)))
  (let ((x2 nil)
	(y2 nil))
   (tracking-pointer
    (*world*)
    (:pointer-motion
     (window x y)
     (declare (ignore window))
     (multiple-value-bind (xt yt)
	 (transform-point*
	  (invert-transformation (medium-transformation *world*)) x y)
      (setf x (quantize xt))
      (setf y (quantize yt)))
     (if (and x2 y2)
	 (draw-circle* *world* x1 y1 (distance p1 (point x2 y2))
		       :filled nil
		       :ink +flipping-ink+))
     (draw-circle* *world* x1 y1 (distance p1 (point x y))
		   :filled nil
		   :ink +flipping-ink+)
     (setf x2 x y2 y))
    (:pointer-button-release
     ()
     (when (and x2 y2)
      (draw-circle* *world* x1 y1 (distance p1 (point x2 y2))
		    :filled nil
		    :ink +flipping-ink+)
      (let ((f (circle p1 (distance p1 (point x2 y2)) :name (gensym "G"))))
       (log-previous f)
       (paint f)))
     (return))))
  (initialize-caches *figures*)
  (setf *layer-assertions* (consistent-layer-assertions *layer-assertions*))))

(define-abigail-command (com-edit) ((x 'integer) (y 'integer))
 (ecase *figure-type*
   ;; needs work: to clip to ground during add-line-segment and add-circle
   (line-segment (add-line-segment x y))
   (circle (add-circle x y))))

;;; Section: Command Table

(define-command-table abigail
    :inherit-from (user-command-table)
    :menu
    (("Help" :command (com-help)
	     :documentation "Display documentation on use of Abigail"
	     :keystroke #\meta-?)
     ("Exit" :command (com-exit)
	     :documentation "Exit Abigail"
	     :keystroke #\meta-\x)
     ("Complete" :command (com-complete)
		 :documentation "Turn on completion mode"
		 :keystroke #\meta-\c)
     ("Slow" :command (com-slow)
	     :documentation "Turn off completion mode"
	     :keystroke #\meta-\s)
     ("World" :command (com-world)
	      :documentation "Display world"
	      :keystroke #\meta-\w)
     ("Typeout" :command (com-typeout)
		:documentation "Display typeout window"
		:keystroke #\meta-\t)
     ("Refresh" :command (com-refresh)
		:documentation "Refresh screen"
		:keystroke #\control-\l)
     ("Frame#" :command (com-frame-number)
	       :documentation "Toggle whether frame number display is enabled"
	       :keystroke #\meta-#)
     ("Perceive" :command (com-perceive)
		 :documentation "Toggle whether perception is enabled"
		 :keystroke #\meta-\p)
     ("Movie" :command (com-movie)
	      :documentation "Select a movie to show"
	      :keystroke #\meta-\m)
     ("Begin" :command (com-begin)
	      :documentation "Reset the movie back to the first frame"
	      :keystroke #\meta-\b)
     ("Frame" :command (com-frame)
	      :documentation "Advance the movie one frame"
	      :keystroke #\meta-\f)
     ("Roll" :command (com-roll)
	     :documentation "Start the movie rolling"
	     :keystroke #\meta-\r)
     ("Imagine" :command (com-imagine)
		:documentation "Imagine what will happen next in the movie"
		:keystroke #\meta-\i)
     ("Start Recording" :command (com-start-recording)
			:documentation "Start the recording tape")
     ("Stop Recording" :command (com-stop-recording)
		       :documentation "Stop the recording tape")
     ("Erase Recording" :command (com-erase-recording)
			:documentation "Erase the recording tape")
     ("Clear World" :command (com-clear-world)
		    :documentation "Clear the world")
     ("Clear Typeout" :command (com-clear-typeout)
		      :documentation "Clear the typeout window")
     ("Clear Layers" :command (com-clear-layers)
		     :documentation "Clear all layer information")
     ("Add Joint" :command (com-add-joint)
		  :documentation "Add a joint to the world")
     ("Rigid Displacement-F"
      :command (com-rigid-displacement-f)
      :documentation "Make a joint have a rigid displacement-f")
     ("Rigid Displacement-G"
      :command (com-rigid-displacement-g)
      :documentation "Make a joint have a rigid displacement-g")
     ("Rigid Rotation" :command (com-rigid-rotation)
		       :documentation "Make a joint have a rigid rotation")
     ("Flexible Displacement-F"
      :command (com-flexible-displacement-f)
      :documentation "Make a joint have a flexible displacement-f")
     ("Flexible Displacement-G"
      :command (com-flexible-displacement-g)
      :documentation "Make a joint have a flexible displacement-g")
     ("Flexible Rotation"
      :command (com-flexible-rotation)
      :documentation "Make a joint have a flexible rotation")
     ("Same Layer" :command (com-same-layer)
		   :documentation "Make two figures lie on the same layer")
     ("Different Layers"
      :command (com-different-layers)
      :documentation "Make two figures lie on different layers")
     ("Line Segment" :command (com-line-segment)
	     :documentation "Prepare to draw a line segment in the world")
     ("Circle" :command (com-circle)
	       :documentation "Prepare to draw a circle in the world")
     ("Test" :command (com-test)
	     :documentation "Test the imagination capacity")
     ("Commentary" :command (com-commentary)
		   :documentation "Toggle whether commentary is enabled"
		   :keystroke #\meta-control-\c)
     ("Cheat" :command (com-cheat)
	      :documentation "Toggle whether cheating is enabled"
	      :keystroke #\control-\c)))

;;; Section: Presentation to Command Translators

(define-presentation-to-command-translator com-select
    (blank-area com-select abigail
                :gesture :select
		:tester ((window) (eq window *world*))
                :documentation "Select figure or joint"
		:echo nil)
 (x y window)
 (multiple-value-list
     (transform-point*
      (invert-transformation (medium-transformation window)) x y)))

(define-presentation-to-command-translator com-delete
    (blank-area com-delete abigail
                :gesture :delete
		:tester ((window) (eq window *world*))
                :documentation "Delete figure or joint"
		:echo nil)
 (x y window)
 (multiple-value-list
     (transform-point*
      (invert-transformation (medium-transformation window)) x y)))

(define-presentation-to-command-translator com-edit
    (blank-area com-edit abigail
                :gesture :edit
		:tester ((window) (eq window *world*))
                :documentation "Draw new figure"
		:echo nil)
 (x y window)
 (multiple-value-list
     (transform-point*
      (invert-transformation (medium-transformation window)) x y)))

(define-presentation-to-command-translator com-show-perceptual-primitives
    (from-to com-show-perceptual-primitives abigail
             :gesture :describe
             :documentation "Display perceptual primitives on this edge"
	     :echo nil)
 (object)
 (list object))

(defun quotify-object-if-necessary (object)
 (if (or (consp object)
	 (and (symbolp object)
	      (not (keywordp object))
	      (not (eq object nil))
	      (not (eq object t))))
     (list 'quote object)
     object))

(define-presentation-to-command-translator com-describe-lisp-object
    (expression com-describe-lisp-object abigail
		:gesture :describe
		:documentation
		((object stream)
		 (let ((*print-length* 3)
		       (*print-level* 3)
		       (*print-pretty* nil))
		  (present `(describe ,(quotify-object-if-necessary object))
			   'expression
			   :stream stream))))
 (object)
 (list object))

;;; Section: Movies

(define-movie two-people-having-a-ball
    ((table (make-instance 'table :name 'table :x 16.0 :y 0.0))
     (chair1 (make-instance 'chair :name 'chair1 :x 12.0 :y 0.0))
     (chair2 (make-instance
	      'chair :name 'chair2 :x 20.0 :y 0.0 :direction -1.0))
     (box (make-instance 'box :name 'box :x 18.0 :y 2.525))
     (ball (make-instance 'ball :name 'ball :x 14.0 :y 3.0))
     (john (make-instance 'man :name 'john :x 3.0 :y 0.0))
     (mary (make-instance 'woman :name 'mary :x 30.0 :y 0.0 :direction -1.0)))
 ()
 ;; As of R18Oct90 this movie has 1063 frames
 ;; Actually, on S5Jan92 I discovered that that the movie really has 1094
 ;; frames. It has 1063 frames on Symbolics machines due to a roundoff bug
 ;; using TRUNCATE in STEP-FORWARD.
 (walk-to john (x (center ball)))
 (pick-up (left-hand john) ball)
 (about-face john)
 (walk-n-steps john 4)
 (walk-to john (x (center table)))
 (put-down (left-hand john)
	   (x (center table))
	   (+ (y (p (top table))) (size (surface ball))))
 (about-face john)
 (walk-n-steps john 4)
 (about-face john)
 (walk-to mary (x (center ball)))
 (pick-up (left-hand mary) ball)
 (about-face mary)
 (walk-n-steps mary 5)
 (walk-to mary (x (center table)))
 (put-down (left-hand mary)
	   (x (center table))
	   (+ (y (p (top table))) (size (surface ball))))
 (about-face mary)
 (walk-n-steps mary 5)
 (about-face mary)
 (walk-to john (x (center ball)))
 (pick-up (right-hand john) ball)
 (walk-to john (x (center mary)))
 (give (right-hand john) (left-hand mary))
 (about-face john)
 (walk-n-steps john 9)
 (walk-to mary (x (center table)))
 (put-down (left-hand mary)
	   (x (center table))
	   (+ (y (p (top table))) (size (surface ball))))
 (about-face mary)
 (walk-n-steps mary 5)
 (about-face mary))

(define-movie a-walk-in-the-park
    ((john (make-instance 'man :name 'john :x 3.0 :y 0.0)))
 ()
 (walk-n-steps john 2)
 (about-face john)
 (walk-n-steps john 2))

(define-movie a-ball-of-fun
    ((table (make-instance 'table :name 'table :x 16.0 :y 0.0))
     (ball (make-instance 'ball :name 'ball :x 14.0 :y 3.0))
     (john (make-instance 'man :name 'john :x 12.5 :y 0.0)))
 (((0)
   (<-> (head john) (mouth john))
   (<-> (head john) (torso john))
   (<-> (right-upper-arm john) (torso john))
   (<-> (left-upper-arm john) (torso john))
   (<-> (right-upper-arm john) (right-forearm john))
   (<-> (left-upper-arm john) (left-forearm john))
   (<-> (torso john) (left-thigh john))
   (<-> (torso john) (right-thigh john))
   (<-> (left-thigh john) (left-calf john))
   (<-> (right-thigh john) (right-calf john))
   (<-> (left-leg table) (top table))
   (<-> (right-leg table) (top table))
   (<-> (line-segment1 ball) (surface ball))
   (<-> (line-segment2 ball) (surface ball))
   (<-> (line-segment3 ball) (surface ball)))
  (((1 33))
   (rotation (left-upper-arm john) (left-forearm john))
   (rotation (left-upper-arm john) (torso john)))
  ((6 20)
   (<-> (left-forearm john) (line-segment1 ball))))
 (pick-up (left-hand john) ball)
 (bounce john (x (left-hand john)) 0.5)
 (put-down (left-hand john)
	   14.0
	   (+ (y (p (top table))) (size (surface ball)))))

(define-movie falling
    ((ball (make-instance 'ball :name 'ball :x 14.0 :y 10.0)))
 ()
 (fall ball 0.0 0.5))

;;; To help when debugging

(defadvice (invoke-debugger abigail-debugger) (&rest arguments)
 (let ((*standard-input* *terminal-io*)
       (*standard-output* *terminal-io*)
       (*error-output* *terminal-io*))
  (apply-advice-continue arguments)))

(defadvice (translation-limit translation-limit-advice) (&rest arguments)
 (let* ((start (get-internal-real-time))
	(result (apply-advice-continue arguments)))
  (push (/ (float (- (get-internal-real-time) start))
	   internal-time-units-per-second)
	*translation-limit-times*)
  result))

(defadvice (rotation-limit rotation-limit-advice) (&rest arguments)
 (let* ((start (get-internal-real-time))
	(result (apply-advice-continue arguments)))
  (push (/ (float (- (get-internal-real-time) start))
	   internal-time-units-per-second)
	*rotation-limit-times*)
  result))

;;; Tam V'Nishlam Shevah L'El Borei Olam
