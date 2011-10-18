;;; -*- Mode: LISP; Package: (APE :USE CL :COLON-MODE :EXTERNAL); Base: 10; Syntax: Ansi-common-lisp -*-

;;; LaHaShem HaAretz U'Mloah

(in-package :ape)

(clos:defmethod fast-translation-limit ((f line-segment) (g line) rotation)
 'ignore
 (partial tlsl
	  (translation-limit
	   (line-segment (point (the float (full (x (p f))))
				(the float (full (y (p f)))))
			 (point (the float (full (x (q f))))
				(the float (full (y (q f))))))
	   (line (the float (full (a g)))
		 (the float (full (b g)))
		 (the float (full (c g))))
	   (the float (full rotation)))))

(clos:defmethod fast-translation-limit
    ((f line-segment) (g line-segment) rotation)
 'ignore
 (partial tlsls
	  (translation-limit
	   (line-segment (point (the float (full (x (p f))))
				(the float (full (y (p f)))))
			 (point (the float (full (x (q f))))
				(the float (full (y (q f))))))
	   (line-segment (point (the float (full (x (p g))))
				(the float (full (y (p g)))))
			 (point (the float (full (x (q g))))
				(the float (full (y (q g))))))
	   (the float (full rotation)))))

(clos:defmethod fast-translation-limit ((f line-segment) (g circle) rotation)
 'ignore
 (partial tlsc
	  (translation-limit
	   (line-segment (point (the float (full (x (p f))))
				(the float (full (y (p f)))))
			 (point (the float (full (x (q f))))
				(the float (full (y (q f))))))
	   (circle (point (the float (full (x (p g))))
			  (the float (full (y (p g)))))
		   (point (the float (full (x (q g))))
			  (the float (full (y (q g))))))
	   (the float (full rotation)))))

(clos:defmethod fast-translation-limit ((f circle) (g line) rotation)
 'ignore
 (partial tcl
	  (translation-limit
	   (circle (point (the float (full (x (p f))))
			  (the float (full (y (p f)))))
		   (point (the float (full (x (q f))))
			  (the float (full (y (q f))))))
	   (line (the float (full (a g)))
		 (the float (full (b g)))
		 (the float (full (c g))))
	   (the float (full rotation)))))

(clos:defmethod fast-translation-limit ((f circle) (g line-segment) rotation)
 'ignore
 (partial tcls
	  (translation-limit
	   (circle (point (the float (full (x (p f))))
			  (the float (full (y (p f)))))
		   (point (the float (full (x (q f))))
			  (the float (full (y (q f))))))
	   (line-segment (point (the float (full (x (p g))))
				(the float (full (y (p g)))))
			 (point (the float (full (x (q g))))
				(the float (full (y (q g))))))
	   (the float (full rotation)))))

(clos:defmethod fast-translation-limit ((f circle) (g circle) rotation)
 'ignore
 (partial tcc
	  (translation-limit
	   (circle (point (the float (full (x (p f))))
			  (the float (full (y (p f)))))
		   (point (the float (full (x (q f))))
			  (the float (full (y (q f))))))
	   (circle (point (the float (full (x (p g))))
			  (the float (full (y (p g)))))
		   (point (the float (full (x (q g))))
			  (the float (full (y (q g))))))
	   (the float (full rotation)))))

(clos:defmethod fast-rotation-limit
    ((f line-segment) (g line) p (direction (eql 'clockwise)))
 'ignore
 (partial rlsl1
	  (rotation-limit
	   (line-segment (point (the float (full (x (p f))))
				(the float (full (y (p f)))))
			 (point (the float (full (x (q f))))
				(the float (full (y (q f))))))
	   (line (the float (full (a g)))
		 (the float (full (b g)))
		 (the float (full (c g))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'clockwise)))

(clos:defmethod fast-rotation-limit
    ((f line-segment) (g line) p (direction (eql 'counterclockwise)))
 'ignore
 (partial rlsl2
	  (rotation-limit
	   (line-segment (point (the float (full (x (p f))))
				(the float (full (y (p f)))))
			 (point (the float (full (x (q f))))
				(the float (full (y (q f))))))
	   (line (the float (full (a g)))
		 (the float (full (b g)))
		 (the float (full (c g))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'counterclockwise)))

(clos:defmethod fast-rotation-limit
    ((f line-segment) (g line-segment) p (direction (eql 'clockwise)))
 'ignore
 (partial rlsls1
	  (rotation-limit
	   (line-segment (point (the float (full (x (p f))))
				(the float (full (y (p f)))))
			 (point (the float (full (x (q f))))
				(the float (full (y (q f))))))
	   (line-segment (point (the float (full (x (p g))))
				(the float (full (y (p g)))))
			 (point (the float (full (x (q g))))
				(the float (full (y (q g))))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'clockwise)))

(clos:defmethod fast-rotation-limit
    ((f line-segment) (g line-segment) p (direction (eql 'counterclockwise)))
 'ignore
 (partial rlsls2
	  (rotation-limit
	   (line-segment (point (the float (full (x (p f))))
				(the float (full (y (p f)))))
			 (point (the float (full (x (q f))))
				(the float (full (y (q f))))))
	   (line-segment (point (the float (full (x (p g))))
				(the float (full (y (p g)))))
			 (point (the float (full (x (q g))))
				(the float (full (y (q g))))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'counterclockwise)))

(clos:defmethod fast-rotation-limit
    ((f line-segment) (g circle) p (direction (eql 'clockwise)))
 'ignore
 (partial rlsc1
	  (rotation-limit
	   (line-segment (point (the float (full (x (p f))))
				(the float (full (y (p f)))))
			 (point (the float (full (x (q f))))
				(the float (full (y (q f))))))
	   (circle (point (the float (full (x (p g))))
			  (the float (full (y (p g)))))
		   (point (the float (full (x (q g))))
			  (the float (full (y (q g))))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'clockwise)))

(clos:defmethod fast-rotation-limit
    ((f line-segment) (g circle) p (direction (eql 'counterclockwise)))
 'ignore
 (partial rlsc2
	  (rotation-limit
	   (line-segment (point (the float (full (x (p f))))
				(the float (full (y (p f)))))
			 (point (the float (full (x (q f))))
				(the float (full (y (q f))))))
	   (circle (point (the float (full (x (p g))))
			  (the float (full (y (p g)))))
		   (point (the float (full (x (q g))))
			  (the float (full (y (q g))))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'counterclockwise)))

(clos:defmethod fast-rotation-limit
    ((f circle) (g line) p (direction (eql 'clockwise)))
 'ignore
 (partial rcl1
	  (rotation-limit
	   (circle (point (the float (full (x (p f))))
			  (the float (full (y (p f)))))
		   (point (the float (full (x (q f))))
			  (the float (full (y (q f))))))
	   (line (the float (full (a g)))
		 (the float (full (b g)))
		 (the float (full (c g))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'clockwise)))

(clos:defmethod fast-rotation-limit
    ((f circle) (g line) p (direction (eql 'counterclockwise)))
 'ignore
 (partial rcl2
	  (rotation-limit
	   (circle (point (the float (full (x (p f))))
			  (the float (full (y (p f)))))
		   (point (the float (full (x (q f))))
			  (the float (full (y (q f))))))
	   (line (the float (full (a g)))
		 (the float (full (b g)))
		 (the float (full (c g))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'counterclockwise)))

(clos:defmethod fast-rotation-limit
    ((f circle) (g line-segment) p (direction (eql 'clockwise)))
 'ignore
 (partial rcls1
	  (rotation-limit
	   (circle (point (the float (full (x (p f))))
			  (the float (full (y (p f)))))
		   (point (the float (full (x (q f))))
			  (the float (full (y (q f))))))
	   (line-segment (point (the float (full (x (p g))))
				(the float (full (y (p g)))))
			 (point (the float (full (x (q g))))
				(the float (full (y (q g))))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'clockwise)))

(clos:defmethod fast-rotation-limit
    ((f circle) (g line-segment) p (direction (eql 'counterclockwise)))
 'ignore
 (partial rcls2
	  (rotation-limit
	   (circle (point (the float (full (x (p f))))
			  (the float (full (y (p f)))))
		   (point (the float (full (x (q f))))
			  (the float (full (y (q f))))))
	   (line-segment (point (the float (full (x (p g))))
				(the float (full (y (p g)))))
			 (point (the float (full (x (q g))))
				(the float (full (y (q g))))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'counterclockwise)))

(clos:defmethod fast-rotation-limit
    ((f circle) (g circle) p (direction (eql 'clockwise)))
 'ignore
 (partial rcc1
	  (rotation-limit
	   (circle (point (the float (full (x (p f))))
			  (the float (full (y (p f)))))
		   (point (the float (full (x (q f))))
			  (the float (full (y (q f))))))
	   (circle (point (the float (full (x (p g))))
			  (the float (full (y (p g)))))
		   (point (the float (full (x (q g))))
			  (the float (full (y (q g))))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'clockwise)))

(clos:defmethod fast-rotation-limit
    ((f circle) (g circle) p (direction (eql 'counterclockwise)))
 'ignore
 (partial rcc2
	  (rotation-limit
	   (circle (point (the float (full (x (p f))))
			  (the float (full (y (p f)))))
		   (point (the float (full (x (q f))))
			  (the float (full (y (q f))))))
	   (circle (point (the float (full (x (p g))))
			  (the float (full (y (p g)))))
		   (point (the float (full (x (q g))))
			  (the float (full (y (q g))))))
	   (point (the float (full (x p))) (the float (full (y p))))
	   'counterclockwise)))

(eval-when (load)
 (load-foreign-files
  '("~/uncodify/tlsl.o"
    "~/uncodify/tlsls.o"
    "~/uncodify/tlsc.o"
    "~/uncodify/tcl.o"
    "~/uncodify/tcls.o"
    "~/uncodify/tcc.o"
    "~/uncodify/rlsl1.o"
    "~/uncodify/rlsl2.o"
    "~/uncodify/rlsls1.o"
    "~/uncodify/rlsls2.o"
    "~/uncodify/rlsc1.o"
    "~/uncodify/rlsc2.o"
    "~/uncodify/rcl1.o"
    "~/uncodify/rcl2.o"
    "~/uncodify/rcls1.o"
    "~/uncodify/rcls2.o"
    "~/uncodify/rcc1.o"
    "~/uncodify/rcc2.o"))
 (load "~/uncodify/tlsl" :verbose nil)
 (load "~/uncodify/tlsls" :verbose nil)
 (load "~/uncodify/tlsc" :verbose nil)
 (load "~/uncodify/tcl" :verbose nil)
 (load "~/uncodify/tcls" :verbose nil)
 (load "~/uncodify/tcc" :verbose nil)
 (load "~/uncodify/rlsl1" :verbose nil)
 (load "~/uncodify/rlsl2" :verbose nil)
 (load "~/uncodify/rlsls1" :verbose nil)
 (load "~/uncodify/rlsls2" :verbose nil)
 (load "~/uncodify/rlsc1" :verbose nil)
 (load "~/uncodify/rlsc2" :verbose nil)
 (load "~/uncodify/rcl1" :verbose nil)
 (load "~/uncodify/rcl2" :verbose nil)
 (load "~/uncodify/rcls1" :verbose nil)
 (load "~/uncodify/rcls2" :verbose nil)
 (load "~/uncodify/rcc1" :verbose nil)
 (load "~/uncodify/rcc2" :verbose nil))

;;; Tam V'Nishlam Shevah L'El Borei Olam
