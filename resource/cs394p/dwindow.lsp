; dwindow.lsp               Gordon S. Novak Jr.            18 Mar 95

; Window types and interface functions for using X windows from GNU Common Lisp

; Copyright (c) 1995 Gordon S. Novak Jr. and The University of Texas at Austin.

; See the files gnu.license and dec.copyright .

; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 1, or (at your option)
; any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, write to the Free Software
; Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

; Some of the files that interface to the Xlib are adapted from DEC/MIT files.
; See the file dec.copyright for details.

; Written by: Gordon S. Novak Jr., Department of Computer Sciences,
; University of Texas at Austin  78712.    novak@cs.utexas.edu

; These functions use the convention that positive y is upwards,
; (0 0) is the lower-left corner of a window.

; derived from {DSK}<LISPFILES>DWINDOW.CL;1  1-Mar-89 13:16:20 
; Modified for AKCL/X using Hiep Huu Nguyen's interfaces from AKCL -> C -> X.
; Parts of Nguyen's file Xinit.lsp are included.

(defvar *window-add-menu-title* nil)  ; t to add title bar within menu area
(defvar *window-menu* nil)
(defvar *mouse-x* nil)
(defvar *mouse-y* nil)
(defvar *mouse-window* nil)

(defvar *window-fonts* (list
			(list 'courier-bold-12
			      "*-*-courier-bold-r-*-*-12-*-*-*-*-*-iso8859-1")
			(list '8x10 "8x10")
			(list '9x15 "9x15")))

(glispglobals (*window-menu*          menu)
	      (*mouse-x*              integer)
	      (*mouse-y*              integer)
	      (*mouse-window*         window)
	      (*picmenu-no-selection* picmenu-button) )

(defvar *window-display* nil)
(defvar *window-screen* nil)
(defvar *root-window*)
(defvar *black-pixel*) 
(defvar *white-pixel*)
(defvar *default-fg-color*)
(defvar *default-bg-color*)
(defvar *default-size-hints*)
(defvar *default-GC*)
(defvar *default-colormap*)
(defvar *window-event*)
(defvar *window-default-pos-x* 10)
(defvar *window-default-pos-y* 20)
(defvar *window-default-border* 1)
(defvar *window-default-font-name* 'courier-bold-12)
(defvar *window-default-cursor* 68)
(defvar *window-save-foreground*)
(defvar *window-save-function*)
(defvar *window-attributes*)
(defvar *window-attr*)
(defvar *menu-title-pad* 30)           ; extra space for title bar of menu
(defvar *root-return*         (int-array 1))
(defvar *child-return*        (int-array 1))
(defvar *root-x-return*       (int-array 1))
(defvar *root-y-return*       (int-array 1))
(defvar *win-x-return*        (int-array 1))
(defvar *win-y-return*        (int-array 1))
(defvar *mask-return*         (int-array 1))
(defvar *x-return*            (int-array 1))
(defvar *y-return*            (int-array 1))
(defvar *width-return*        (int-array 1))
(defvar *height-return*       (int-array 1))
(defvar *depth-return*        (int-array 1))
(defvar *border-width-return* (int-array 1))
(defvar *text-width-return*   (int-array 1))
(defvar *direction-return*    (int-array 1))
(defvar *ascent-return*       (int-array 1))
(defvar *descent-return*      (int-array 1))
(defvar *overall-return*      (int-array 1))
(defvar *GC-Values*)
(defvar *window-xcolor* nil)
(defvar *window-menu-code* nil)

(defvar *window-keymap* (make-array 256))
(defvar *window-shiftkeymap* (make-array 256))
(defvar *window-keyinit* nil)
(defvar *window-meta*)        ; set if meta down when char is pressed
(defvar *window-ctrl*)        ; set if ctrl down when char is pressed
(defvar *window-shift*)       ; set if shift down when char is pressed
(defvar *window-string* (make-string 100))
(defvar *window-string-count*)
(defvar *window-string-max*)
(defvar *window-input-string-x*)
(defvar *window-input-string-y*)
(defvar *window-input-string-charwidth*)

(defvar *window-shift-keys*     nil)
(defvar *window-control-keys*   nil)
(defvar *window-meta-keys*      nil)
(defvar *min-keycodes-return*   (int-array 1))
(defvar *max-keycodes-return*   (int-array 1))
(defvar *keycodes-return*       (int-array 1))

(setq *window-keyinit* nil)

(defmacro picmenu-spec (symbol) `(get ,symbol 'picmenu-spec))

(glispobjects

(drawable anything)

(menu (listobject (menu-window     window)
		  (flat            boolean)
		  (parent-window   drawable)
		  (parent-offset-x integer)
		  (parent-offset-y integer)
		  (picture-width   integer)
		  (picture-height  integer)
		  (title           string)
		  (permanent       boolean)
		  (menu-font       symbol)
		  (item-width      integer)
		  (item-height     integer)
		  (items           (listof symbol)) )
  prop ((menuw         (menu-window or (menu-init self)) result window)
	(title-present (title and ((length title) > 0)))
	(width         (picture-width))
	(height        (picture-height))
	(base-x        ((if flat then parent-offset-x else 0)))
	(base-y        ((if flat then parent-offset-y else 0)))
	(offset        menu-offset)
	(size          menu-size)
	(region        ((virtual region with start = voffset size = vsize)))
	(voffset       ((virtual vector with x = base-x y = base-y)))
	(vsize         ((virtual vector with x = picture-width
				             y = picture-height)))  )
  msg  ((init          menu-init)
	(init?         ((menu-window and (item-height > 0)) or (init self)))
	(contains?     (glambda (m p) (contains? (region m) p)))
	(create        menu-create result menu)
	(clear         menu-clear)
	(select        menu-select)
	(select!       menu-select!)
	(choose        menu-choose)
	(draw          menu-draw)
	(destroy       menu-destroy)
	(moveto-xy     menu-moveto-xy)
	(reposition    menu-reposition)
	(box-item      menu-box-item)
	(unbox-item    menu-box-item)      ; same since it uses xor
        (display-item  menu-display-item)
	(item-value    menu-item-value   open t)
	(item-position menu-item-position result vector)
	(find-item-width    menu-find-item-width)
	(find-item-height   menu-find-item-height)
	(adjust-offset menu-adjust-offset)
	(calculate-size menu-calculate-size)
        (menu-x        (glambda (m x) ((base-x m) + x)))
        (menu-y        (glambda (m y) ((base-y m) + y)))  ) )

; picture menu: a drawn object with "hot buttons" at certain points.
; note: the first 10 data items of picmenu must be the same as in menu.
(picmenu (listobject (menu-window     window)
		     (flat            boolean)
		     (parent-window   drawable)
		     (parent-offset-x integer)
		     (parent-offset-y integer)
		     (picture-width   integer)
		     (picture-height  integer)
		     (title           string)
		     (permanent       boolean)
		     (spec (transparent picmenu-spec))
		     (boxflg          boolean)
		     (deleted-buttons (listof symbol)) )
  prop ((menuw          (menu-window or (picmenu-init self)) result window) )
  msg  ((init                picmenu-init)
	(init?         ((menu-window and (picture-height > 0)) or (init self)))
	(create              picmenu-create result picmenu)
	(select              picmenu-select)
	(draw                picmenu-draw)
	(draw-button         picmenu-draw-button)
	(delete-named-button picmenu-delete-named-button)
	(box-item            picmenu-box-item)
	(unbox-item          picmenu-unbox-item)
	(calculate-size      picmenu-calculate-size)
	(item-position       picmenu-item-position result vector) )
 supers (menu) )

(picmenu-spec (listobject (drawing-width   integer)
			  (drawing-height  integer)
			  (buttons         (listof picmenu-button))
			  (dotflg          boolean)
			  (drawfn          anything)
			  (menu-font       symbol) ))

(picmenu-button (list (name          symbol)
		      (offset        vector)
		      (size          vector)
		      (highlightfn   anything)
		      (unhighlightfn anything))
  msg  ((containsxy?  picmenu-button-containsxy?)) )

(barmenu (listobject (menu-window     window)
		     (flat            boolean)
		     (parent-window   drawable)
		     (parent-offset-x integer)
		     (parent-offset-y integer)
		     (picture-width   integer)
		     (picture-height  integer)
		     (title           string)
		     (permanent       boolean)
		     (color           rgb)
		     (value           integer)
		     (maxval          integer)
		     (barwidth        integer)
		     (horizontal      boolean)
		     (subtrackfn      anything)
		     (subtrackparms   (listof anything)))
  prop ((menuw          (menu-window or (barmenu-init self)) result window)
	(picture-width  ((if (horizontal m) then (maxval m)
			                    else (barwidth m)) ))
	(picture-height ((if (horizontal m) then (barwidth m)
			                    else (maxval m)) )) )
  msg  ((init           barmenu-init)
	(init?          ((menu-window and (picture-height > 0))
			  or (init self)))
	(create         barmenu-create result barmenu)
	(select         barmenu-select)
	(draw           barmenu-draw)
	(update-value   barmenu-update-value)
	(calculate-size barmenu-calculate-size) )
supers (menu))

(window (listobject (parent drawable)
		    (gcontext anything)
		    (drawable-height integer)
		    (drawable-width integer)
		    (label string)
		    (font anything) )
default ((self nil))
prop    ((width          (drawable-width))
	 (height         (drawable-height))
	 (left           window-left open t  result integer)
	 (right          (left + width))
	 (top-neg-y      window-top-neg-y open t result integer)
	 (leftmargin     (1))
	 (rightmargin    (width - 1))
         (yposition      window-yposition result integer open t)
	 (wfunction          window-wfunction        open t)
	 (foreground         window-foreground       open t)
	 (background         window-background       open t)  )
msg     ((force-output       window-force-output     open t)
	 (set-font           window-set-font)
	 (set-foreground     window-set-foreground   open t)
	 (set-background     window-set-background   open t)
	 (set-cursor         window-set-cursor       open t)
	 (set-erase          window-set-erase        open t)
	 (set-xor            window-set-xor          open t)
	 (set-invert         window-set-invert       open t)
	 (set-copy           window-set-copy         open t)
	 (set-line-width     window-set-line-width   open t)
	 (set-line-attr      window-set-line-attr    open t)
	 (std-line-attr      window-std-line-attr    open t)
	 (unset              window-unset            open t)
	 (reset              window-reset            open t)
	 (sync               window-sync             open t)
	 (geometry           window-geometry         open t)
	 (size               window-size)
	 (get-geometry       window-get-geometry     open t)
	 (reset-geometry     window-reset-geometry   open t)
	 (query-pointer      window-query-pointer    open t)
	 (wait-exposure      window-wait-exposure)
	 (wait-unmap         window-wait-unmap)
         (clear              window-clear            open t)
	 (mapw               window-map              open t)
	 (unmap              window-unmap            open t)
	 (open               window-open             open t)
	 (close              window-close            open t)
	 (destroy            window-destroy          open t)
	 (positive-y         window-positive-y       open t)
	 (drawline           window-draw-line        open t)
	 (draw-line          window-draw-line        open t)
	 (draw-line-xy       window-draw-line-xy     open t)
	 (draw-latex-xy      window-draw-latex-xy)
	 (draw-arrow-xy      window-draw-arrow-xy    )
	 (draw-arrow2-xy     window-draw-arrow2-xy   )
	 (draw-arrowhead-xy  window-draw-arrowhead-xy )
	 (draw-box           window-draw-box         open t)
	 (draw-box-xy        window-draw-box-xy)
	 (draw-box-corners   window-draw-box-corners open t)
	 (draw-rcbox-xy      window-draw-rcbox-xy)
	 (xor-box-xy         window-xor-box-xy       open t)
	 (draw-circle        window-draw-circle      open t)
	 (draw-circle-xy     window-draw-circle-xy   open t)
	 (draw-ellipse-xy    window-draw-ellipse-xy  open t)
	 (draw-arc-xy        window-draw-arc-xy      open t)
	 (invertarea         window-invertarea       open t)
	 (invert-area        window-invert-area      open t)
	 (invert-area-xy     window-invert-area-xy   open t)
	 (copy-area-xy       window-copy-area-xy     open t)
	 (printat            window-printat          open t)
	 (printat-xy         window-printat-xy       open t)
	 (prettyprintat      window-prettyprintat    open t)
	 (prettyprintat-xy   window-prettyprintat-xy open t)
         (string-width       window-string-width     open t)
	 (string-extents     window-string-extents   open t)
	 (erase-area         window-erase-area       open t)
	 (erase-area-xy      window-erase-area-xy    open t)
	 (erase-box-xy       window-erase-box-xy     open t)
         (moveto-xy          window-moveto-xy)
         (move               window-move)
         (paint              window-paint)
         (centeroffset       window-centeroffset     open t)
	 (draw-border        window-draw-border      open t)
	 (track-mouse        window-track-mouse)
	 (track-mouse-in-region window-track-mouse-in-region)
	 (init-mouse-poll    window-init-mouse-poll)
	 (poll-mouse         window-poll-mouse)
	 (get-point          window-get-point)
	 (get-click          window-get-click)
	 (get-line-position  window-get-line-position)
	 (get-latex-position  window-get-latex-position)
	 (get-icon-position  window-get-icon-position)
	 (get-box-position   window-get-box-position)
	 (get-box-size       window-get-box-size)
	 (get-region         window-get-region)
	 (adjust-box-side    window-adjust-box-side)
	 (get-mouse-position window-get-mouse-position)
	 (get-circle         window-get-circle)
	 (get-ellipse        window-get-ellipse)
	 (get-crosshairs     window-get-crosshairs)
	 (draw-crosshairs-xy window-draw-crosshairs-xy)
	 (get-cross          window-get-cross)
	 (draw-cross-xy      window-draw-cross-xy)
	 (draw-dot-xy        window-draw-dot-xy)
	 (draw-vector-pt     window-draw-vector-pt)
	 (get-vector-end     window-get-vector-end)
	 (reset-color        window-reset-color)
	 (set-color-rgb      window-set-color-rgb)
	 (set-color          window-set-color)
	 (set-xcolor         window-set-xcolor)
	 (free-color         window-free-color)
	 (get-chars          window-get-chars)
	 (input-string       window-input-string)
	  ))

(rgb (list (red integer) (green integer) (blue integer)))

 ) ; glispobjects

(glispconstants                      ; used by GEV
  (windowcharwidth     9 integer)
  (windowlineyspacing 17 integer)
)

(defvar *picmenu-no-selection* '(no-selection (0 0) (0 0) nil nil))

; 14 Mar 95
; Make something into a string.
; The copy-seq avoids an error with get-c-string on Sun.
(defun stringify (x)
  (cond ((stringp x) x)
        ((symbolp x) (copy-seq (symbol-name x)))
	(t (princ-to-string x))))

; This function initializes variables needed by most applications.
; It uses all defaults inherited from the root window, and screen. ; H. Nguyen
(defun window-Xinit ()
  (setq *window-display* (XOpenDisplay (get-c-string "")))
  (setq *window-screen* (XdefaultScreen *window-display*))
  (setq *root-window* (XRootWindow *window-display* *window-screen*))
  (setq *black-pixel* (XBlackPixel *window-display* *window-screen*))
  (setq *white-pixel* (XWhitePixel *window-display* *window-screen*))
  (setq *default-fg-color* *black-pixel*)
  (setq *default-bg-color* *white-pixel*)
  (setq *default-GC*  (XDefaultGC *window-display* *window-screen*))
  (setq *default-colormap* (XDefaultColormap *window-display*
					     *window-screen*))
  (setq *window-attributes* (make-XsetWindowAttributes))
  (set-XsetWindowAttributes-backing_store *window-attributes*
						WhenMapped)
  (set-XsetWindowAttributes-save_under *window-attributes* 1) ; True
  (setq *window-attr* (make-XWindowAttributes))
  (Xflush *window-display*)
  (setq *default-size-hints* (make-XsizeHints))
  (setq *window-event* (make-XEvent))
  (setq *GC-Values* (make-XGCValues)) )

(defun window-get-mouse-position ()
  (XQueryPointer *window-display* *root-window*
		 *root-return* *child-return* *root-x-return* *root-y-return*
		 *win-x-return* *win-y-return* *mask-return*)
  (setq *mouse-x* (int-pos *root-x-return* 0))
  (setq *mouse-y* (int-pos *root-y-return* 0))
  (setq *mouse-window* (int-pos *child-return* 0)) )

; 13 Aug 91; 14 Aug 91; 06 Sep 91; 12 Sep 91; 06 Dec 91; 01 May 92; 01 Sep 92
(gldefun window-create (width height &optional str parentw pos-x pos-y font)
  (let (w pw fg-color bg-color)
    (or *window-display* (window-Xinit))
    (setq fg-color *default-fg-color*)
    (setq bg-color *default-bg-color*)
    (unless pos-x (pos-x \:= *window-default-pos-x*))
    (unless pos-y (pos-y \:= *window-default-pos-y*))
    (w \:= (a window with
	      drawable-width  = width
	      drawable-height = height
              label           = (if str (stringify str) else " ") ))
    (pw \:= (or parentw *root-window*))
    (window-get-geometry-b pw)
    ((parent w) \:=
       (XCreateSimpleWindow *window-display* pw
			    pos-x
			    ((int-pos *height-return* 0)
			        - pos-y - height)
			    width height
			    *window-default-border*
			    fg-color bg-color))
    (set-xsizehints-x      *default-size-hints* pos-x)
    (set-xsizehints-y      *default-size-hints* pos-y)
    (set-xsizehints-width  *default-size-hints* (width w))
    (set-xsizehints-height *default-size-hints* (height w))
    (set-xsizehints-flags  *default-size-hints*
				 (+ Psize Pposition))
    (XsetStandardProperties  *window-display* (parent w)
			     (get-c-string (label w))
			     (get-c-string (label w))  ; icon name
			     none null null
			     *default-size-hints*)
    ((gcontext w) \:= (XCreateGC *window-display* (parent w) 0 null))
    (set-foreground w fg-color)
    (set-background w bg-color)
    (set-font w (or font *window-default-font-name*))
    (set-cursor w *window-default-cursor*)
    (set-line-width w 1)
    (XChangeWindowAttributes *window-display* (parent w)
			     (+ CWSaveUnder CWBackingStore)
			     *window-attributes*)
    (Xselectinput *window-display* (parent w)	
		  (+ leavewindowmask buttonpressmask
		     buttonreleasemask
		     pointermotionmask exposuremask))
    (open w)
    w  ))

; 06 Aug 91
; Set the font for a window to the one specified by fontsymbol.
; derived from Nguyen's my-load-font.
(gldefun window-set-font (w\:window fontsymbol\:symbol)
  (let (fontstring font-info (display *window-display*))
    (fontstring \:= (or (cadr (assoc fontsymbol *window-fonts*))
			(stringify fontsymbol)))
    (font-info \:= (XloadQueryFont display
					 (get-c-string fontstring)))
    (if (eql 0 font-info)
	then (format t "~%can't open font ~a ~a~%" fontsymbol fontstring)
	else (XsetFont display (gcontext w)
			     (Xfontstruct-fid font-info))
	     ((font w) \:= font-info) ) ))

; 15 Oct 91
(defun window-font-info (fontsymbol)
  (XloadQueryFont *window-display*
		  (get-c-string
		    (or (cadr (assoc fontsymbol *window-fonts*))
			(stringify fontsymbol)))))


; Functions to allow access to window properties from plain Lisp
(gldefun window-gcontext        (w\:window) (gcontext w))
(gldefun window-parent          (w\:window) (parent w))
(gldefun window-drawable-height (w\:window) (drawable-height w))
(gldefun window-drawable-width  (w\:window) (drawable-width w))
(gldefun window-label           (w\:window) (label w))
(gldefun window-font            (w\:window) (font w))

; 07 Aug 91; 14 Aug 91
(gldefun window-foreground (w\:window)
  (XGetGCValues *window-display* (gcontext w) GCForeground
		      *GC-Values*)
  (XGCValues-foreground  *GC-Values*) )

(gldefun window-set-foreground (w\:window fg-color\:integer)
  (XsetForeground *window-display* (gcontext w) fg-color))

(gldefun window-background (w\:window)
  (XGetGCValues *window-display* (gcontext w) GCBackground
		      *GC-Values*)
  (XGCValues-Background  *GC-Values*) )

(gldefun window-set-background (w\:window bg-color\:integer)
  (XsetBackground *window-display* (gcontext w) bg-color))

; 08 Aug 91
(gldefun window-wfunction (w\:window)
  (XGetGCValues *window-display* (gcontext w) GCFunction
		      *GC-Values*)
  (XGCValues-function *GC-Values*) )

; 08 Aug 91
; Get the geometry parameters of a window into global variables
(gldefun window-get-geometry (w\:window) (window-get-geometry-b (parent w)))

; 06 Dec 91
; Set cursor to a selected cursor number
(gldefun window-set-cursor (w\:window n\:integer)
  (let (c)
    (c \:= (XCreateFontCursor *window-display* n) )
    (XDefineCursor *window-display* (parent w) c) ))

(defun window-get-geometry-b (w)
  (XGetGeometry *window-display* w
		*root-return* *x-return* *y-return* *width-return* 
		*height-return* *border-width-return* *depth-return*) )

; 15 Aug 91
; clear event queue of previous motion events
(gldefun window-sync (w\:window)
  (Xsync *window-display* 1) )

; 03 Oct 91; 06 Oct 94
(gldefun window-screen-height ()
  (window-get-geometry-b *root-window*)
  (int-pos *height-return* 0) )

; 08 Aug 91; 12 Sep 91; 28 Oct 91
; Make a list of window geometry, (x y width height border-width).
(gldefun window-geometry (w\:window)
  (let (sh)
    (sh \:= (window-screen-height))
    (get-geometry w)
  ((drawable-width w) \:= (int-pos *width-return* 0))
  ((drawable-height w) \:= (int-pos *height-return* 0))
    (list (int-pos *x-return* 0)
	  (sh - (int-pos *y-return* 0)
	      - (int-pos *height-return* 0))
	  (int-pos *width-return* 0) 
	  (int-pos *height-return* 0)
	  (int-pos *border-width-return* 0)) ))

; 27 Nov 91
(gldefun window-size (w\:window) (result vector)
  (get-geometry w)
  (list ((drawable-width w) \:= (int-pos *width-return* 0))
	((drawable-height w) \:= (int-pos *height-return* 0)) ) )

(gldefun window-left (w\:window)
  (get-geometry w)
  (int-pos *x-return* 0))

; Get top of window in X (y increasing downwards) coordinates.
(gldefun window-top-neg-y (w\:window)
  (get-geometry w)
  (int-pos *y-return* 0))

; 08 Aug 91
; Reset the local geometry parameters of a window from its X values.
; Needed, for example, if the user resizes the window by mouse command.
(gldefun window-reset-geometry (w\:window)
  (get-geometry w)
  ((drawable-width w) \:= (int-pos *width-return* 0))
  ((drawable-height w) \:= (int-pos *height-return* 0)) )

(gldefun window-force-output (&optional w\:window)
  (Xflush *window-display*))

(gldefun window-query-pointer (w\:window) (window-query-pointer-b (parent w)) )

(defun window-query-pointer-b (w)
  (XQueryPointer *window-display* w
		 *root-return* *child-return* *root-x-return* *root-y-return*
		 *win-x-return* *win-y-return* *mask-return*) )

(gldefun window-positive-y (w\:\window y\:integer) ((height w) - y))

; 08 Aug 91
; Set parameters of a window for drawing by XOR, saving old values.
(gldefun window-set-xor (w\:window)
  (let ((gc (gcontext w)) )
    (setq *window-save-function*   (wfunction w))
    (XsetFunction   *window-display* gc GXxor)
    (setq *window-save-foreground* (foreground w))
    (XsetForeground *window-display* gc
		    (logxor *window-save-foreground* (background w))) ))

; 08 Aug 91
; Reset parameters of a window after change, using saved values.
(gldefun window-unset (w\:window)
  (let ((gc (gcontext w)) )
    (XsetFunction   *window-display* gc *window-save-function*)
    (XsetForeground *window-display* gc *window-save-foreground*) ))

; 04 Sep 91
; Reset parameters of a window, using default values.
(gldefun window-reset (w\:window)
  (let ((gc (gcontext w)) )
    (XsetFunction   *window-display* gc GXcopy)
    (XsetForeground *window-display* gc *default-fg-color*)
    (XsetBackground *window-display* gc *default-bg-color*)  ))

; 09 Aug 91; 03 Sep 92
; Set parameters of a window for erasing, saving old values.
(gldefun window-set-erase (w\:window)
  (let ((gc (gcontext w)) )
    (setq *window-save-function* (wfunction w))
    (XsetFunction *window-display* gc GXcopy)
    (setq *window-save-foreground* (foreground w))
    (XsetForeground *window-display* gc (background w)) ))

(gldefun window-set-copy (w\:window)
  (let ((gc (gcontext w)) )
    (setq *window-save-function*   (wfunction w))
    (XsetFunction *window-display* gc GXcopy)
    (setq *window-save-foreground* (foreground w)) ))

; 12 Aug 91
; Set parameters of a window for inversion, saving old values.
(gldefun window-set-invert (w\:window)
  (let ((gc (gcontext w)) )
    (setq *window-save-function*   (wfunction w))
    (XsetFunction *window-display* gc GXxor)
    (setq *window-save-foreground* (foreground w))
    (XsetForeground *window-display* gc
		    (logxor *window-save-foreground* (background w))) ))

; 13 Aug 91
(gldefun window-set-line-width (w\:window width\:integer)
  (set-line-attr w width nil nil nil))

; 13 Aug 91; 12 Sep 91
(gldefun window-set-line-attr
 (w\:window width &optional line-style cap-style join-style)
  (XsetLineAttributes *window-display* (gcontext w)
		      (or width 1)
		      (or line-style LineSolid)
		      (or cap-style CapButt)
		      (or join-style JoinMiter) ) )

; 13 Aug 91
; Set standard line attributes
(gldefun window-std-line-attr (w\:window)
  (XsetLineAttributes *window-display* (gcontext w)
		      1 LineSolid CapButt JoinMiter) )

; 06 Aug 91; 08 Aug 91; 12 Sep 91
(gldefun window-draw-line (w\:window from\:vector to\:vector
				     &optional linewidth)
  (window-draw-line-xy w (x from) (y from) (x to) (y to) linewidth) )

; 19 Dec 90; 07 Aug 91; 08 Aug 91; 09 Aug 91; 13 Aug 91; 12 Sep 91; 28 Sep 94
(gldefun window-draw-line-xy (w\:window fromx\:integer
					fromy\:integer
					tox\:integer   toy\:integer
					&optional linewidth
					operation\:atom)
  (let ( (qqwheight (drawable-height w)) )
    (if (linewidth and (linewidth <> 1)) (set-line-width w linewidth))
    (case operation
      (xor (set-xor w))
      (erase (set-erase w))
      (t nil))
    (XDrawLine *window-display*  (parent w) (gcontext w)
	       fromx (- qqwheight fromy) tox (- qqwheight toy) )
    (case operation
      ((xor erase) (unset w))
      (t nil))
    (if (linewidth and (linewidth <> 1)) (set-line-width w 1)) ))

; 09 Oct 91
(defun window-draw-arrowhead-xy (w x1 y1 x2 y2 &optional (linewidth 1) size)
  (let (th theta ysth ycth (y2dela 0) (y2delb 0) (x2dela 0) (x2delb 0))
    (or size (setq size (+ 20 (* linewidth 5))))
    (setq th (atan (- y2 y1) (- x2 x1)))
    (setq theta (* th (/ 180.0 pi)))
    (setq ysth (round (* (1+ size) (sin th))))
    (setq ycth (round (* (1+ size) (cos th))))
    (if (and (eql y1 y2) (evenp linewidth)) ; correct for even-size lines
	(if (> x2 x1) (setq y2delb 1) (setq y2dela 1)))
    (if (and (eql x1 x2) (evenp linewidth)) ; correct for even-size lines
	(if (> y2 y1) (setq x2delb 1) (setq x2dela 1)))
    (window-draw-arc-xy w (- (- x2 ysth) x2dela)
			  (+ (+ y2 ycth) y2dela) size size
			  (+ 240 theta) 30 linewidth)
    (window-draw-arc-xy w (- (+ x2 ysth) x2delb)
			  (+ (- y2 ycth) y2delb) size size
			  (+ 90 theta) 30 linewidth)   ))

(defun window-draw-arrow-xy (w x1 y1 x2 y2
			       &optional (linewidth 1) size)
  (window-draw-line-xy w x1 y1 x2 y2 linewidth)
  (window-draw-arrowhead-xy w x1 y1 x2 y2 linewidth size) )

(defun window-draw-arrow2-xy (w x1 y1 x2 y2
				&optional (linewidth 1) size)
  (window-draw-line-xy w x1 y1 x2 y2 linewidth)
  (window-draw-arrowhead-xy w x1 y1 x2 y2 linewidth size)
  (window-draw-arrowhead-xy w x2 y2 x1 y1 linewidth size) )

; 08 Aug 91; 14 Aug 91; 12 Sep 91
(gldefun window-draw-box
	 (w\:window offset\:vector size\:vector &optional linewidth)
  (window-draw-box-xy w (x offset) (y offset) (x size) (y size) linewidth) )

; 08 Aug 91; 12 Sep 91; 11 Dec 91; 01 Sep 92; 02 Sep 92
; New version avoids XDrawRectangle, which messes up when used with XOR.
; was  (XDrawRectangle *window-display* (parent w) (gcontext w)
;		       offsetx (- qqwheight (offsety + sizey)) sizex sizey)
(gldefun window-draw-box-xy
	 (w\:window offsetx\:integer offsety\:integer
		    sizex\:integer   sizey\:integer
		    &optional linewidth)
  (let ((qqwheight (drawable-height w)) miny lw lw2 lw2b (pw (parent w))
	(gc  (gcontext w)))
    (if (linewidth and (linewidth <> 1)) (set-line-width w linewidth))
    (lw \:= (or linewidth 1))
    (lw2 \:= lw / 2)
    (lw2b \:= (lw + 1) / 2)
    (miny \:= offsety - lw2b)
    (XdrawLine *window-display*  pw gc offsetx (- qqwheight miny)
	       offsetx (- qqwheight (miny + sizey + lw)))
    (XdrawLine *window-display*  pw gc
		     (offsetx + sizex) (- qqwheight miny)
		     (offsetx + sizex) (- qqwheight (miny + sizey + lw)))
    (XdrawLine *window-display*  pw gc
		     (offsetx + lw2b) (- qqwheight offsety)
		     (offsetx + sizex - lw2) (- qqwheight offsety) )
    (XdrawLine *window-display*  pw gc
		     (offsetx + lw2b) (- qqwheight (offsety + sizey))
		     (offsetx + sizex - lw2) (- qqwheight (offsety + sizey)) )
    (if (linewidth and (linewidth <> 1)) (set-line-width w 1)) ))

; 26 Nov 91
(gldefun window-xor-box-xy
	 (w\:window offsetx\:integer offsety\:integer
		    sizex\:integer   sizey\:integer
		    &optional linewidth)
  (window-set-xor w)
  (window-draw-box-xy w offsetx offsety sizex sizey linewidth)
  (window-unset w))

; 15 Aug 91; 12 Sep 91
; Draw a box whose corners are specified
(gldefun window-draw-box-corners (w\:window xa\:integer ya\:integer
				  xb\:integer yb\:integer
				  &optional lw)
  (draw-box-xy w (min xa xb) (min ya yb) (abs (- xa xb)) (abs (- ya yb)) lw) )

; 13 Sep 91
; Draw a box with round corners
(gldefun window-draw-rcbox-xy (w\:window x\:integer y\:integer width\:integer
					 height\:integer radius\:integer
					 &optional linewidth)
  (let (x1 x2 y1 y2 r)
    (r \:= (max 0 (min radius (truncate (abs width) 2)
			           (truncate (abs height) 2))))
    (x1 \:= x + r)
    (x2 \:= x + width - r)
    (y1 \:= y + r)
    (y2 \:= y + height - r)
    (draw-line-xy w x1 y x2 y linewidth)
    (draw-line-xy w (x + width) y1 (x + width) y2 linewidth)
    (draw-line-xy w x1 (y + height) x2 (y + height) linewidth)
    (draw-line-xy w x y1 x y2 linewidth)
    (draw-arc-xy w x1 y1 r r 180 90 linewidth)
    (draw-arc-xy w x2 y1 r r 270 90 linewidth)
    (draw-arc-xy w x2 y2 r r   0 90 linewidth)
    (draw-arc-xy w x1 y2 r r  90 90 linewidth) ))

; 13 Aug 91; 15 Aug 91; 12 Sep 91
(gldefun window-draw-arc-xy (w\:window x\:integer y\:integer
			     radiusx\:integer radiusy\:integer
			     anglea\:number angleb\:number
			     &optional linewidth)
  (if (linewidth and (linewidth <> 1)) (set-line-width w linewidth))
  (XdrawArc *window-display* (parent w) (gcontext w)
	    (x - radiusx) (positive-y w (y + radiusy))
	    (radiusx * 2) (radiusy * 2)
	    (truncate (* anglea 64)) (truncate (* angleb 64)))
  (if (linewidth and (linewidth <> 1)) (set-line-width w 1)) )

; 08 Aug 91; 12 Sep 91
(gldefun window-draw-circle-xy (w\:window x\:integer y\:integer
					  radius\:integer
					  &optional linewidth)
  (if (linewidth and (linewidth <> 1)) (set-line-width w linewidth))
  (XdrawArc *window-display* (parent w) (gcontext w)
	    (x - radius) (positive-y w (y + radius))
	    (radius * 2) (radius * 2) 0 (* 360 64))
  (if (linewidth and (linewidth <> 1)) (set-line-width w 1)) )

; 06 Aug 91; 14 Aug 91; 12 Sep 91
(gldefun window-draw-circle (w\:window pos\:vector radius\:integer
				       &optional linewidth)
  (window-draw-circle-xy w (x pos) (y pos) radius linewidth) )

; 08 Aug 91; 09 Sep 91
(gldefun window-erase-area (w\:window offset\:vector size\:vector)
  (window-erase-area-xy w (x offset) (y offset) (x size) (y size)))

; 09 Sep 91; 11 Dec 91
(gldefun window-erase-area-xy (w\:window xoff\:integer yoff\:integer
				         xsize\:integer ysize\:integer)
  (XClearArea *window-display* (parent w)
	      xoff (positive-y w (yoff + ysize - 1))
	      xsize ysize
	      0 ))     ;   exposures

; 21 Dec 93
(gldefun window-erase-box-xy (w\:window xoff\:integer yoff\:integer
				        xsize\:integer ysize\:integer
					&optional linewidth\:integer)
  (XClearArea *window-display* (parent w)
		    (xoff - (or linewidth 1) / 2)
		    (positive-y w (yoff + ysize + (or linewidth 1) / 2))
		    (xsize + (or linewidth 1))
		    (ysize + (or linewidth 1))
		    0 ))    ;   exposures

; 15 Aug 91; 12 Sep 91
(gldefun window-draw-ellipse-xy (w\:window x\:integer y\:integer
			         rx\:integer ry\:integer &optional lw)
  (draw-arc-xy w x y rx ry 0 360 lw))

; 09 Aug 91
(gldefun window-copy-area-xy (w\:window fromx fromy\:integer
					tox toy\:integer width height)
  (let ((qqwheight (drawable-height w)))
    (set-copy w)
    (XCopyArea *window-display* (parent w) (parent w) (gcontext w)
	       fromx (- qqwheight (+ fromy height))
	       width height
	       tox (- qqwheight (+ toy height)))
    (unset w) ))

; 07 Dec 90; 09 Aug 91; 12 Sep 91
(gldefun window-invertarea (w\:window area\:region)
  (window-invert-area-xy w (left area) (bottom area)
			   (width area) (height area)))

; 07 Dec 90; 09 Aug 91; 12 Sep 91
(gldefun window-invert-area (w\:window offset\:vector size\:vector)
  (window-invert-area-xy w (x offset) (y offset) (x size) (y size)) )

; 12 Aug 91; 15 Aug 91; 13 Dec 91
(gldefun window-invert-area-xy (w\:window left bottom\:integer width height)
  (set-invert w)
  (XFillRectangle *window-display* (parent w) (gcontext w)
	          left (- (drawable-height w) (bottom + height - 1))
		  width height)
  (unset w) )

; 05 Dec 90; 15 Aug 91
(gldefun window-prettyprintat (w\:window s\:string pos\:vector)
  (printat w s pos) )

(gldefun window-prettyprintat-xy (w\:window s\:string x\:integer y\:integer)
  (printat-xy w s x y))

; 06 Aug 91; 08 Aug 91; 15 Aug 91
(gldefun window-printat (w\:window s\:string pos\:vector)
  (printat-xy w s (x pos) (y pos)) )

; 06 Aug 91; 08 Aug 91; 12 Aug 91
(gldefun window-printat-xy (w\:window s\:string x\:integer y\:integer)
  (let ( (sstr (stringify s)) )
    (XdrawImageString *window-display* (parent w) (gcontext w)
		      x (- (drawable-height w) y)
		      (get-c-string sstr) (length sstr)) ))

; 08 Aug 91
; Find the width of a string when printed in a given window
(gldefun window-string-width  (w\:window s\:string)
  (let ((sstr (stringify s)))
    (XTextWidth (font w) (get-c-string sstr) (length sstr)) ))

; 01 Dec 93
; Find the ascent and descent of a string when printed in a given window
(gldefun window-string-extents  (w\:window s\:string)
  (let ((sstr (stringify s)))
    (XTextExtents (font w) (get-c-string sstr) (length sstr)
      *direction-return* *ascent-return* *descent-return* *overall-return*)
    (list (int-pos *ascent-return* 0)
	  (int-pos *descent-return* 0)) ))

; 15 Oct 91
(gldefun window-font-string-width (font s\:string)
  (let ((sstr (stringify s)))
    (XTextWidth font (get-c-string sstr) (length sstr)) ))

(gldefun window-yposition (w\:window)
  (window-get-mouse-position)
  (positive-y w (- *mouse-y* (top-neg-y w))) )

(gldefun window-centeroffset (w\:window v\:vector)
  (a vector with x = (truncate ((width w)  - (x v)) 2)
                 y = (truncate ((height w) - (y v)) 2)))

; 18 Aug 89; 15 Aug 91
; Command to a window display manager 
(gldefun dowindowcom (w\:window)
  (let (comm)
    (comm \:= (select (window-menu)) )
  (case comm
	(close  (close w))
	(paint  (paint w))
	(clear  (clear w))
	(move   (move w))
	(t (when comm
		 (princ "This command not implemented.") (terpri))) ) ))

(gldefun window-menu ()
  (result menu)
  (or *window-menu*
      (setq *window-menu*
	(a menu with items = '(close paint clear move)))) )

; 06 Dec 90; 11 Mar 93
(gldefun window-close (w\:window)
    (unmap w)
    (force-output w)
    (window-wait-unmap w))

(gldefun window-unmap (w\:window)
  (XUnMapWindow *window-display* (parent w)) )

; 06 Aug 91; 22 Aug 91
(gldefun window-open (w\:window)
  (mapw w)
  (force-output w)
  (wait-exposure w) )

(gldefun window-map (w\:window)
  (XMapWindow *window-display* (parent w))  )

; 08 Aug 91; 02 Sep 91
(gldefun window-destroy (w\:window)
  (XDestroyWindow *window-display* (parent w))
  (force-output w)
  ((parent w) \:= nil)
  (XFreeGC *window-display* (gcontext w))
  ((gcontext w) \:= nil) )

; 09 Sep 91
; Wait 3 seconds, then destroy the window where the mouse is.  Use with care.
(defun window-destroy-selected-window ()
  (prog (ww child)
    (sleep 3)
    (setq ww *root-window*)
 lp (window-query-pointer-b ww)
    (setq child (int-pos *child-return* 0))
    (if (> child 0)
	(progn (setq ww child) (go lp)))
    (if (/= ww *root-window*)
	(progn (XDestroyWindow *window-display* ww)
	       (Xflush *window-display*))) ))

; 07 Aug 91
(gldefun window-clear (w\:window)
  (XClearWindow *window-display* (parent w))
  (force-output w) )

; 08 Aug 91
(gldefun window-moveto-xy (w\:window x\:integer y\:integer)
  (XMoveWindow *window-display* (parent w)
		     x (- (window-screen-height) y)) )

; 15 Aug 91; 05 Sep 91
; Paint in window with mouse: Left paints, Middle erases, Right quits.
(defun window-paint (window)
  (let (state)
    (window-track-mouse window
      #'(lambda (x y code)
          (if (= code 1) (if (= state 1) (setq state 0) (setq state 1))
	      (if (= code 2) (if (= state 2) (setq state 0) (setq state 2))))
          (if (= state 1) (window-draw-line-xy window x y x y 1 'paint)
	    (if (= state 2) (window-draw-line-xy window x y x y 1 'erase)))
	(= code 3))  ) ))

; 15 Aug 91; 06 May 93
; Move a window.
(gldefun window-move (w\:window)
  (window-get-mouse-position)
  (XMoveWindow *window-display* (parent w)
	       *mouse-x* (- (window-screen-height) *mouse-y*)) )

; 15 Sep 93; 06 Jan 94
(gldefun window-draw-border (w\:window)
  (draw-box-xy w 0 1 ((x (size w)) - 1) ((y (size w)) - 1))
  (force-output w) )

; 13 Aug 91; 22 Aug 91; 27 Aug 91; 14 Oct 91
; Track the mouse within a window, calling function fn with args (x y event).
; event is 0 = no button, 1 = left button, 2 = middle, 3 = right button.
; Tracking continues until fn returns non-nil; result is that value.
; Partly adapted from Hiep Nguyen's code.
(defun window-track-mouse (w fn &optional outflg)
  (let (win h)
    (setq win (window-parent w))
    (setq h   (window-drawable-height w))
    (Xsync *window-display* 1) ; clear event queue of prev motion events
    (Xselectinput *window-display* win
			(+ ButtonPressMask PointerMotionMask))
 ;; Event processing loop: stop when function returns non-nil.
  (do ((res nil)) (res res)
    (XNextEvent *window-display* *window-event*)
    (let ((type (XAnyEvent-type *window-event*))
	  (eventwindow (XAnyEvent-window *window-event*)))
      (when (or (and (eql eventwindow win)
		     (or (eql type MotionNotify)
			 (eql type ButtonPress)))
		(and outflg (eql type ButtonPress)))
	(let ((x (XMotionEvent-x *window-event*))
	      (y (XMotionEvent-y *window-event*))
	      (code (if (eql type ButtonPress)
			(XButtonEvent-button *window-event*)
			0)))
	  (setq res (if (eql eventwindow win)
			(funcall fn x (- h y) code)
			(funcall fn -1 -1 code))) ) ) ) ) ))

; 22 Aug 91; 23 Aug 91; 27 Aug 91; 04 Sep 92; 11 Mar 93
; Wait for a window to become exposed, but not more than 1 second.
(defun window-wait-exposure (w)
  (prog (win start-time max-time eventwindow type)
    (setq win (window-parent w))
    (XGetWindowAttributes *window-display* win *window-attr*)
    (unless (eql (XWindowAttributes-map_state *window-attr*)
		 ISUnmapped)
      (return t))
    (setq start-time (get-internal-real-time))
    (setq max-time internal-time-units-per-second)
    (Xselectinput *window-display* win (+ ExposureMask))
    ; Event processing loop: stop when exposure is seen or time out
 lp (cond ((> (XPending *window-display*) 0)
	    (XNextEvent *window-display* *window-event*)
	    (setq type (XAnyEvent-type *window-event*))
	    (setq eventwindow (XAnyEvent-window *window-event*))
	    (if (and (eql eventwindow win)
		     (eql type Expose))
		(return t)))
	  ((> (- (get-internal-real-time) start-time)
	      max-time)
	    (return nil)) )
    (go lp) ))

; 11 Mar 93; 06 May 93
; Wait for a window to become unmapped, but not more than 1 second.
(defun window-wait-unmap (w)
  (prog (win start-time max-time)
    (setq win (window-parent w))
    (setq start-time (get-internal-real-time))
    (setq max-time internal-time-units-per-second)
lp  (XGetWindowAttributes *window-display* win *window-attr*)
    (if (eql (XWindowAttributes-map_state *window-attr*)
	     ISUnmapped)
	(return t)
	(if (> (- (get-internal-real-time) start-time) max-time)
	    (return nil)))
    (go lp) ))

; 07 Oct 93
; Initialize to poll the mouse for a specified window
(defun window-init-mouse-poll (w)
  (let (win)
    (setq win (window-parent w))
    (Xsync *window-display* 1) ; clear event queue of prev motion events
    (Xselectinput *window-display* win
			(+ ButtonPressMask PointerMotionMask))  ))

; 07 Oct 93
; Poll the mouse for a position change or button push
; Returns nil if no mouse activity,
;  else (x y code), where x and y are positions, or nil if no movement,
;                         and code is 0 if no button else button number
(defun window-poll-mouse (w)
  (let (win h eventtype eventwindow x y cd (code 0))
    (setq win (window-parent w))
    (setq h   (window-drawable-height w))
    (while (> (XPending *window-display*) 0)
      (XNextEvent *window-display* *window-event*)
      (setq eventtype (XAnyEvent-type *window-event*))
      (setq eventwindow (XAnyEvent-window *window-event*))
      (if (eql eventwindow win)
	  (if (eql eventtype MotionNotify)
	      (progn (setq x (XMotionEvent-x *window-event*))
		     (setq y (XMotionEvent-y *window-event*)))
	      (if (eql eventtype ButtonPress)
		  (if (> (setq cd (XButtonEvent-button *window-event*))
			 0)
		      (setq code cd))))) )
    (if (or x (> code 0)) (list x (if y (- h y)) code)) ))

; 14 Dec 90; 17 Dec 90; 13 Aug 91; 20 Aug 91; 30 Aug 91; 09 Sep 91; 11 Sep 91
; 15 Oct 91; 16 Oct 91; 10 Feb 92; 25 Sep 92; 26 Sep 92
; Initialize a menu
(gldefun menu-init (m\:menu)
  (let ()
    (or *window-display* (window-Xinit))    ; init windows if necessary
    (calculate-size m)
    (if ~ (flat m)
	((menu-window m) \:= (window-create (picture-width m)
					    (picture-height m)
					    ((title m) or "")
					    (parent-window m)
					    (parent-offset-x m)
					    (parent-offset-y m)
					    (menu-font m) )) ) ))

; 25 Sep 92; 26 Sep 92; 11 Mar 93; 05 Oct 93; 08 Oct 93
; Calculate the displayed size of a menu
(gldefun menu-calculate-size (m\:menu)
  (let (maxwidth maxheight nitems)
    (or (menu-font m) ((menu-font m) \:= '9x15))
    (maxwidth \:= (find-item-width m (title m))
	          + (if (or (flat m) *window-add-menu-title*)
			then 0 else *menu-title-pad*))
    (maxheight \:=  13)                      ; ***** fix for font
    (nitems \:= (if (and (title-present m)
			 (or (flat m) *window-add-menu-title*))
		    then 1 else 0))
    (for item in (items m) do
      (nitems _+ 1)
      (maxwidth  \:= (max maxwidth  (find-item-width m item)))
      (maxheight \:= (max maxheight (find-item-height m item))) )
    ((item-width m) \:= maxwidth + 6)
    ((picture-width m) \:= (item-width m) + 1)
    ((item-height m) \:=  maxheight + 2)
    ((picture-height m) \:= ((item-height m) * nitems) + 2)
    (adjust-offset m) ))

; 06 Sep 91; 09 Sep 91; 10 Sep 91; 21 May 93
; Adjust a menu's offset position if necessary to keep it in parent window.
(gldefun menu-adjust-offset (m\:menu)
  (let (xbase ybase wbase hbase xoff yoff wgm width height)
    (width \:= (picture-width m))
    (height \:= (picture-height m))
    (if ~ (parent-window m)
	then (window-get-mouse-position)  ; put it where the mouse is
	     (wgm \:= t)                  ; set flag that we got mouse position
	     ((parent-window m) \:= *root-window*)) ; 21 May 93 was *mouse-window*
    (window-get-geometry-b (parent-window m))
    (setq xbase (int-pos *x-return* 0))
    (setq ybase (int-pos *y-return* 0))
    (setq wbase (int-pos *width-return* 0))
    (setq hbase (int-pos *height-return* 0))
    (if (~ (parent-offset-x m) or (parent-offset-x m) = 0)
	then (or wgm (window-get-mouse-position))
             (xoff \:= ((*mouse-x* - xbase) - (width  / 2) - 4))
             (yoff \:= ((hbase - (*mouse-y* - ybase)) - (height / 2)))
	else (xoff \:= (parent-offset-x m))
	     (yoff \:= (parent-offset-y m)))
    ((parent-offset-x m) \:= (max 0 (min xoff (wbase - width))))
    ((parent-offset-y m) \:= (max 0 (min yoff (hbase - height)))) ))

; 07 Dec 90; 14 Dec 90; 12 Aug 91; 22 Aug 91; 09 Sep 91; 10 Sep 91; 28 Jan 92;
; 10 Feb 92; 26 Sep 92; 11 Mar 93; 08 Oct 93
(gldefun menu-draw (m\:menu)
  (let (mw xzero yzero bottom)
    (init? m)
    (xzero \:= (menu-x m 0))
    (yzero \:= (menu-y m 0))
    (mw \:= (menu-window m))
    (open mw)
    (clear m)
    (if (flat m) (draw-box-xy mw (xzero - 1) yzero ((picture-width m) + 2)
			      ((picture-height m) + 1) 1))
    (bottom \:= (yzero + (picture-height m) + 3))
    (if (and (title-present m)
	     (or (flat m) *window-add-menu-title*))
	then (bottom _- (item-height m))
             (printat-xy mw (stringify (title m)) (+ xzero 3) bottom)
             (invert-area-xy mw xzero (bottom - 2)
			        ((picture-width m) + 1) (item-height m)))
    (for item in (items m) do
	 (bottom _- (item-height m))
	 (display-item m item (+ xzero 3) bottom) )
    (force-output mw) ))

(gldefun menu-item-value (self item)
  (if (consp item) then (cdr item) else item))

; 06 Sep 91; 11 Sep 91; 15 Oct 91; 16 Oct 91; 23 Oct 91
(gldefun menu-find-item-width (self\:menu item)
  (let (tmp\:vector)
    (if (and (consp item)
	     (symbolp (car item))
	     (fboundp (car item)))
        then (or (and (tmp \:= (get (car item) 'display-size))
		      (x tmp))
		 40)
        else (window-font-string-width
	      (or (and (flat self)
		       (menu-window self)
		       (font (menu-window self)))
		  (window-font-info (menu-font self)))
	      (stringify (if (consp item) then (car item) else item)))) ))


; 09 Sep 91; 10 Sep 91; 11 Sep 91
(gldefun menu-find-item-height (self\:menu item)     ; ***** fix for font
  (let (tmp\:vector)
    (if (and (consp item)
	     (symbolp (car item))
	     (tmp \:= (get (car item) 'display-size)))
	then ((y tmp) + 3)
        else 15) ))

; 09 Sep 91; 10 Sep 91; 10 Feb 92
(gldefun menu-clear (m\:menu)
  (if (flat m)
      (erase-area-xy (menu-window m) ((base-x m) - 1) ((base-y m) - 1)
		     ((picture-width m) + 3) ((picture-height m) + 3))
      else (clear (menu-window m))) )

; 06 Sep 91; 04 Dec 91
(gldefun menu-display-item (self\:menu item x y)
  (let ((mw (menu-window self)))
    (if (consp item)
        then (if (and (symbolp (car item))
		      (fboundp (car item)))
 		 then (funcall (car item) mw x y)
	         elseif (or (stringp (car item)) (symbolp (car item))
			    (numberp (car item)))
	         then (printat-xy mw (car item) x y)
		 else (printat-xy mw (stringify item) x y))
        else (printat-xy mw (stringify item) x y)) ))

; 07 Dec 90; 18 Dec 90; 15 Aug 91; 27 Aug 91; 06 Sep 91; 10 Sep 91; 29 Sep 92
; 04 Aug 93; 07 Jan 94
(gldefun menu-choose (m\:menu inside\:boolean)
  (let (mw current-item-n newn itemh itms nitems val maxx xzero yzero)
    (init? m)
    (mw \:= (menu-window m))
    (draw m)
    (xzero \:= (menu-x m 0))
    (yzero \:= (menu-y m 0))
    (maxx \:= (+ xzero (picture-width m)))
    (itemh \:= (item-height m))
    (itms \:= (items m))
    (nitems \:= (length itms))
    (track-mouse mw
      #'(lambda (x y code)
	  (setq *window-menu-code* code)
          (setq newn (1- (- nitems (truncate (- y (+ yzero 3)) itemh))))
	  (if ((x >= xzero) and (x <= maxx)
	       and (newn >= 0) and (newn < nitems))
	      then
	      (if current-item-n
		  then (if (/= newn current-item-n)
			   then (unbox-item m current-item-n)
			        (box-item m newn)
				(current-item-n \:= newn))
		  else (inside \:= t)
		       (box-item m newn)
		       (current-item-n \:= newn))
	      (if (and current-item-n (> code 0))
		  (unbox-item m current-item-n)
		  (val \:= current-item-n))
	      else (if current-item-n
		       then (unbox-item m current-item-n)
		            (current-item-n \:= nil))
	           (if (> code 0) or
		       (inside and ((x < xzero) or (x > maxx)
				    or (y < yzero)
				    or (y > (yzero + (picture-height m)))))
		       then (val \:= -777))))
      t)
    (if (val <> -777) (item-value m (nth val itms)) ) ))

; 07 Dec 90; 12 Aug 91; 10 Sep 91; 05 Oct 92
(gldefun menu-box-item (m\:menu item\:integer)
  (let (itemh nitems (mw (menuw m)) )
    (itemh \:= (item-height m))
    (nitems \:= (length (items m)))
    (set-xor mw)
    (draw-box-xy mw (menu-x m 1) (menu-y m ((nitems - item - 1) * itemh + 2))
		    ((item-width m) - 2) itemh 1)
    (unset mw) ))

; 07 Dec 90; 12 Aug 91; 14 Aug 91; 15 Aug 91; 05 Oct 92
(gldefun menu-unbox-item (m\:menu item\:integer)
  (box-item m item) )

; 11 Sep 91; 08 Sep 92; 28 Sep 92; 18 Jan 94
(gldefun menu-item-position (m\:menu itemname\:symbol &optional place\:symbol)
  (let ((n 0) found itms item (xsize (item-width m)) (ysize (item-height m)))
    (itms \:= (items m))
    (found \:= (null itemname))
    (while itms and ~ found do
	   (n _+ 1)
	   (item -_ itms)
	   (if (or (eq item itemname)
		   (and (consp item)
			(or (eq itemname (car item))
			    (and (stringp (car item))
				 (string= (stringify itemname) (car item)))
			    (eq (cdr item) itemname)
			    (and (consp (cdr item))
				 (eq (cadr item) itemname)))))
	       (found \:= t)))
    (if found (a vector with
		 x = ((menu-x m 0) +
		      (case place
			((center top bottom) (xsize / 2))
			(left -1)
			(right xsize + 2)
			else 0))
		 y = ((menu-y m (((length (items m)) - n) * ysize)) +
		      (case place
			((center right left) (ysize / 2))
			(bottom 0)
			(top ysize)
			else 0)) )) ))

; 10 Dec 90; 13 Dec 90; 10 Sep 91; 29 Sep 92
; Choose from menu, then close it
(gldefun menu-select (m\:menu &optional inside) (menu-select-b m nil inside))
(gldefun menu-select! (m\:menu) (menu-select-b m t nil))
(gldefun menu-select-b (m\:menu flg\:boolean inside\:boolean)
  (prog (res)
lp  (res \:= (choose m inside))
    (if (flg and ~res) (go lp))
    (if ~(permanent m)
	(if (flat m) then (clear m)
	                  (force-output (menu-window m))
	             else (close (menu-window m))))
    (return res)))

; 12 Aug 91
(gldefun menu-destroy (m\:menu)
  (if ~ (flat m)
      then (destroy (menu-window m))
           ((menu-window m) \:= nil) ))

; 19 Aug 91; 02 Sep 91
; Easy interface to make a menu, select from it, and destroy it.
(defun menu (items &optional title)
  (let (m res)
    (setq m (menu-create items title))
    (setq res (menu-select m))
    (menu-destroy m)
    res ))

; 12 Aug 91; 15 Aug 91; 06 Sep 91; 09 Sep 91; 12 Sep 91; 23 Oct 91
; Simple call from plain Lisp to make a menu.
(setf (glfnresulttype 'menu-create) 'menu)
(gldefun menu-create (items &optional title parentw\:window x y
			    perm\:boolean flat\:boolean font\:symbol)
  (a menu with title           = (if title (stringify title) else "")
               menu-window     = (if flat then parentw)
               items           = items
               parent-window   = (parent parentw)
	       parent-offset-x = x
	       parent-offset-y = y
	       permanent       = perm
	       flat            = flat
	       menu-font       = font ))

; 15 Oct 91; 30 Oct 91
(gldefun menu-offset (m\:menu)
  (result vector)
  (a vector with x = (base-x m) y = (base-y m)))

; 15 Oct 91; 30 Oct 91; 25 Sep 92; 29 Sep 92
(gldefun menu-size (m\:menu)
  (result vector)
  (if ((picture-width m) <= 0)
      (if ((first m) = 'picmenu)
	  then (picmenu-calculate-size m)
	  else (menu-calculate-size m)))
  (a vector with x = (picture-width m) y = (picture-height m)) )

; 15 Oct 91
(gldefun menu-moveto-xy (m\:menu x\:integer y\:integer)
  (if (flat m)
      then ((parent-offset-x m) \:= x)
           ((parent-offset-y m) \:= y)
	   (adjust-offset m)) )

; 27 Nov 92
; Reposition a menu to a position specified by the user by mouse click
(gldefun menu-reposition (m\:menu)
  (let (sizev pos)
  (if (flat m)
      (sizev \:= (size m))
      (pos \:= (get-box-position (menu-window m) (x sizev) (y sizev)))
      (moveto-xy m (x pos) (y pos)) ) ))

; 09 Sep 91; 11 Sep 91; 12 Sep 91; 14 Sep 91
; Simple call from plain Lisp to make a picture menu.
(setf (glfnresulttype 'picmenu-create) 'picmenu)
(gldefun picmenu-create
  (buttons width\:integer height\:integer drawfn
         &optional title dotflg\:boolean parentw\:window x y
	           perm\:boolean flat\:boolean font\:symbol boxflg\:boolean)
  (picmenu-create-from-spec
    (picmenu-create-spec buttons width height drawfn dotflg font)
    title parentw x y perm flat boxflg))                  

; 14 Sep 91
(setf (glfnresulttype 'picmenu-create-spec) 'picmenu-spec)
(gldefun picmenu-create-spec (buttons width\:integer height\:integer drawfn
		              &optional dotflg\:boolean font\:symbol)
  (a picmenu-spec with drawing-width   = width
                       drawing-height  = height
		       buttons         = buttons
		       dotflg          = dotflg
		       drawfn          = drawfn
		       menu-font       = (font or '9x15)))

; 14 Sep 91
(setf (glfnresulttype 'picmenu-create-from-spec) 'picmenu)
(gldefun picmenu-create-from-spec
	 (spec\:picmenu-spec &optional title parentw\:window x y
	           perm\:boolean flat\:boolean boxflg\:boolean)
  (a picmenu with title           = (if title (stringify title) else "")
                  menu-window     = (if flat then parentw)
		  parent-window   = (if parentw (parent parentw))
		  parent-offset-x = x
		  parent-offset-y = y
		  permanent       = perm
	          flat            = flat
		  spec            = spec
		  boxflg          = boxflg))

; 29 Sep 92; 13 Oct 93
(gldefun picmenu-calculate-size (m\:picmenu)
  (let (maxwidth maxheight)
    (maxwidth \:= (max (if (title m) then ((* 9 (length (title m))) + 6)
		                     else 0)
		       (drawing-width m)))
    (maxheight \:= (if (and (title-present m)
			    (or (flat m) *window-add-menu-title*))
		       then 15 else 0)
	           + (drawing-height m))
    ((picture-width m) \:= maxwidth)
    ((picture-height m) \:= maxheight) ))

; 09 Sep 91; 10 Sep 91; 29 Sep 92
; Initialize a picture menu
(gldefun picmenu-init (m\:picmenu)
  (let ()
    (calculate-size m)
    (adjust-offset m)
    (if ~ (flat m)
	((menu-window m) \:= (window-create (picture-width m)
					    (picture-height m)
					    ((title m) or "")
					    (parent-window m)
					    (parent-offset-x m)
					    (parent-offset-y m)
					    (menu-font m) )) ) ))

; 09 Sep 91; 10 Sep 91; 11 Sep 91; 10 Feb 92; 05 Oct 92; 30 Oct 92; 13 Oct 93
; Draw a picture menu
(gldefun picmenu-draw (m\:picmenu)
  (let (mw bottom xzero yzero)
    (init? m)
    (mw \:= (menu-window m))
    (open mw)
    (clear m)
    (xzero \:= (menu-x m 0))
    (yzero \:= (menu-y m 0))
    (bottom \:= yzero + (picture-height m))
    (if (and (title-present m)
			    (or (flat m) *window-add-menu-title*))
	then (printat-xy mw (stringify (title m)) (xzero + 3) (bottom - 13))
             (invert-area-xy mw xzero (bottom - 15) (picture-width m) 16))
    (funcall (drawfn m) mw xzero yzero)
    (if (boxflg m) (draw-box-xy mw xzero yzero
				   (picture-width m) (picture-height m) 1))
    (if (dotflg m)
	then (for b in (buttons m) do (draw-button m b)) )
    ((deleted-buttons m) \:= nil)
    (force-output mw) ))

; 05 Oct 92
(gldefun picmenu-draw-button (m\:picmenu b\:picmenu-button)
  (let ((mw (menu-window m)))
    (set-invert mw)
    (draw-box-xy mw ((menu-x m 0) + (x (offset b)) - 2)
		    ((menu-y m 0) + (y (offset b)) - 2)
		    4 4 1)
    (unset mw) ))

; 05 Oct 92; 30 Oct 92
; Delete a button and erase it from the display
(gldefun picmenu-delete-named-button (m\:picmenu name\:symbol)
  (let (b)
    (if (and (b \:= (assoc name (buttons m)))
	     ~ (name <= (deleted-buttons m)))
	then (if (dotflg m) (draw-button m b))
	     ((deleted-buttons m) +_ name) )
    (force-output (menu-window m)) ))

; 09 Sep 91; 10 Sep 91; 18 Sep 91; 29 Sep 92; 26 Oct 92; 30 Oct 92; 06 May 93
; 04 Aug 93; 07 JAN 94
; inside = t if the mouse is already inside the menu area
; anyclick = value to return for a mouse click that is not on a button.
(gldefun picmenu-select (m\:picmenu &optional inside anyclick)
  (let (mw current-button\:picmenu-button item items val\:picmenu-button
	   xzero yzero codeval)
    (mw \:= (menuw m))
    (if ~ (permanent m) (draw m))
    (xzero \:= (menu-x m 0))
    (yzero \:= (menu-y m 0))
    (track-mouse mw
      #'(lambda (x y code)
	  (setq *window-menu-code* code)
	  (x \:= (x - xzero))
	  (y \:= (y - yzero))
	  (if ((x >= 0) and (x <= (picture-width m))
	        and (y >= 0) and (y <= (picture-height m)))
	      then (inside \:= t))
	  (if current-button
	      (if ~ (containsxy? current-button x y)
		  then (unbox-item m current-button)
		       (current-button \:= nil)))
	  (if ~ current-button
	      then (items \:= (buttons m))
	           (while ~ current-button and (item -_ items) do
			  (if (and (containsxy? item x y)
				   ~ ((name item) <= (deleted-buttons m)))
			      then (box-item m item)
			           (current-button \:= item))))
	  (if (or (> code 0)
	          (and inside (or (x < 0) (x > (picture-width m))
				  (y < 0) (y > (picture-height m)))))
	      then (if current-button then (unbox-item m current-button))
	           (codeval \:= code)
	           (val \:= (if (and (> code 0) current-button)
				then current-button
				else *picmenu-no-selection*)) ))
      t)
    (if ~(permanent m)
	(if (flat m) then (clear m)
	                  (force-output (menu-window m))
	             else (close (menu-window m))))
    (if (val = *picmenu-no-selection*)
	then (and (> codeval 0) anyclick)
        else (name val)) ))


; 09 Sep 91; 10 Sep 91
(gldefun picmenu-box-item (m\:picmenu item\:picmenu-button)
  (let ((mw (menuw m)) xoff yoff siz)
    (xoff \:= (menu-x m (x (offset item))))
    (yoff \:= (menu-y m (y (offset item))))
    (if (highlightfn item)
	then (funcall (highlightfn item) (menuw m) xoff yoff)
        else (set-xor mw)
	     (if (siz \:= (size item))
	         then (draw-box-xy mw (xoff - (x siz) / 2)
			              (yoff - (y siz) / 2)
				      (x siz) (y siz) 1)
		 else (draw-box-xy mw (xoff - 6) (yoff - 6) 12 12 1))
	     (unset mw)
	     (force-output mw) ) ))

; 09 Sep 91; 06 May 93
(gldefun picmenu-unbox-item (m\:picmenu item\:picmenu-button)
  (let ((mw (menuw m)))
    (if (unhighlightfn item)
	then (funcall (unhighlightfn item) (menuw m)
		      (x (offset item)) (y (offset item)))
             (force-output mw)
        else (box-item m item) ) ))

(defun picmenu-destroy (m) (menu-destroy m))

; 09 Sep 91; 10 Sep 91; 11 Sep 91
(gldefun picmenu-button-containsxy? (b\:picmenu-button x\:integer y\:integer)
  (let ((xsize 6) (ysize 6))
    (if (size b) then (xsize \:= (x (size b)) / 2)
                      (ysize \:= (y (size b)) / 2))
    ((x >= ((x (offset b)) - xsize)) and (x <= ((x (offset b)) + xsize)) and
     (y >= ((y (offset b)) - ysize)) and (y <= ((y (offset b)) + ysize)) ) ))

; 11 Sep 91; 08 Sep 92; 18 Jan 94
(gldefun picmenu-item-position (m\:picmenu itemname\:symbol
					   &optional place\:symbol)
  (let (b\:picmenu-button (xsize 0) (ysize 0) xoff yoff)
    (if (null itemname)
	then (xsize \:= (picture-width m))
	     (ysize \:= ((picture-height m) - (drawing-height m)) / 2)
	     (xoff \:= xsize / 2)
	     (yoff \:= (drawing-height m) + ysize / 2)		       
	else (if (b \:= (that (buttons m) with name = itemname))
		 then (if (size b)
			  then (xsize \:= (x (size b)))
			       (ysize \:= (y (size b))))
	              (xoff \:= (x (offset b)))
		      (yoff \:= (y (offset b))) ) )
    (if xoff then (a vector with
		     x = ((menu-x m xoff) + (case place
					      ((center top bottom) 0)
					      (left (- (xsize / 2)))
					      (right (xsize / 2))
					      else 0))
		     y = ((menu-y m yoff) + (case place
					      ((center right left) 0)
					      (bottom (- (ysize / 2)))
					      (top (ysize / 2))
					      else 0))) ) ))

; 03 Jan 94; 18 Jan 94
; Simple call from plain Lisp to make a picture menu.
(setf (glfnresulttype 'barmenu-create) 'barmenu)
(gldefun barmenu-create
  (maxval\:integer initval\:integer barwidth\:integer
         &optional title horizontal\:boolean subtrackfn subtrackparms
	 parentw\:window x y perm\:boolean flat\:boolean color\:rgb)
  (a barmenu with title           = (if title (stringify title) else "")
                  menu-window     = (if flat then parentw)
		  parent-window   = (if parentw (parent parentw))
		  parent-offset-x = (or x 0)
		  parent-offset-y = (or y 0)
		  permanent       = perm
	          flat            = flat
		  value           = initval
		  maxval          = maxval
		  barwidth        = barwidth
		  horizontal      = horizontal
		  subtrackfn      = subtrackfn
		  subtrackparms   = subtrackparms
		  color           = color) )

; 03 Jan 94
(gldefun barmenu-calculate-size (m\:barmenu)
  (let (maxwidth maxheight)
    (maxwidth \:= (max (if (title m) then ((* 9 (length (title m))) + 6)
		                     else 0)
		       (barwidth m)))
    (maxheight \:= (if (and (title-present m)
			    (or (flat m) *window-add-menu-title*))
		       then 15 else 0)
	           + (maxval m))
    ((picture-width m) \:= maxwidth)
    ((picture-height m) \:= maxheight) ))

; 03 Jan 94
; Initialize a picture menu
(gldefun barmenu-init (m\:barmenu)
  (let ()
    (calculate-size m)
    (adjust-offset m)
    (if ~ (flat m)
	((menu-window m) \:= (window-create (picture-width m)
					    (picture-height m)
					    ((title m) or "")
					    (parent-window m)
					    (parent-offset-x m)
					    (parent-offset-y m) )) ) ))

; 03 Jan 94; 18 Jan 94
; Draw a picture menu
(gldefun barmenu-draw (m\:barmenu)
  (let (mw xzero yzero)
    (init? m)
    (mw \:= (menu-window m))
    (open mw)
    (clear m)
    (xzero \:= (menu-x m ((picture-width m) / 2)))
    (yzero \:= (menu-y m 0))
    (if (color m) then (window-set-color mw (color m)))
    (if (horizontal m)
	then (draw-line-xy (menu-window m) xzero yzero
			   (xzero + (value m)) yzero (barwidth m))
        else (draw-line-xy (menu-window m) xzero yzero
			   xzero (+ yzero (value m)) (barwidth m)) )
    (if (color m) then (window-reset-color mw))
    (force-output mw) ))

; 03 Jan 94; 04 Jan 94; 07 Jan 94; 18 Jan 94
; inside = t if the mouse is already inside the menu area
(gldefun barmenu-select (m\:barmenu &optional inside)
  (let (mw xzero yzero val)
    (mw \:= (menuw m))
    (if ~ (permanent m) (draw m))
    (xzero \:= (menu-x m ((picture-width m) / 2)))
    (yzero \:= (menu-y m 0))
    (when (window-track-mouse-in-region mw (menu-x m 0) yzero
	        (picture-width m) (picture-height m) t t)		
      (track-mouse mw
        #'(lambda (x y code)
	    (setq *window-menu-code* code)
	    (val \:= (if (horizontal m) then (x - xzero) else (y - yzero)))
	    (update-value m val)
	    (if (> code 0) code) ))
      val) ))

; 03 Jan 93
(defvar *barmenu-update-value-cons* (cons nil nil))  ; reusable cons
(gldefun barmenu-update-value (m\:barmenu val\:integer)
  (let ((mw (menuw m)) xzero yzero)
    (val \:= (max 0 (min val (maxval m))))
    (if (val <> (value m))
	then (if (val < (value m))
		 then (set-erase mw)
	         else (if (color m) then (window-set-color mw (color m))))
             (xzero \:= (menu-x m ((picture-width m) / 2)))
	     (yzero \:= (menu-y m 0))
             (if (horizontal m)
		 then (draw-line-xy (menu-window m)
				    (+ xzero (value m)) yzero
				    (+ xzero val) yzero (barwidth m))
                 else (draw-line-xy (menu-window m)
				    xzero (+ yzero (value m))
				    xzero (+ yzero val) (barwidth m)) )
             (if (val < (value m))
		 then (unset mw)
	         else (if (color m) then (window-reset-color mw)) )
	     ((value m) \:= val)
	     (if (subtrackfn m)
		 then ((car *barmenu-update-value-cons*) \:= val)
	              ((cdr *barmenu-update-value-cons*) \:= (subtrackparms m))
		      (apply (subtrackfn m) *barmenu-update-value-cons*))
	     (force-output mw) ) ))

; 15 Aug 91
; Get a point position by mouse click.  Returns (x y).
(setf (glfnresulttype 'window-get-point) 'vector)
(defun window-get-point (w)
  (let (orgx orgy)
    (window-track-mouse w                  ; get one point
	    #'(lambda (x y code)
		(when (not (zerop code))
		  (setq orgx x)
		  (setq orgy y))))
    (list orgx orgy) ))

; 23 Aug 91
; Get a point position by mouse click.  Returns (button (x y)).
(setf (glfnresulttype 'window-get-click)
 '(list (button integer) (pos vector)))
(defun window-get-click (w)
  (let (orgx orgy button)
    (window-track-mouse w                  ; get one point
	    #'(lambda (x y code)	
	(when (not (zerop code))
		  (setq button code)
		  (setq orgx x)
		  (setq orgy y))))
    (list button (list orgx orgy)) ))

; 13 Aug 91; 06 Aug 91
; Get a position indicated by a line from a specified origin position.
; Returns (x y) at end of line.
(setf (glfnresulttype 'window-get-line-position) 'vector)
(defun window-get-line-position (w orgx orgy)
  (window-get-icon-position w #'window-draw-line-xy (list orgx orgy 1 'paint)))

; 17 Dec 93
; Get a position indicated by a line from a specified origin position.
; The visual feedback is restricted to lines that LaTex can draw.
; Returns (x y) at end of line.  flg is T for a vector position, nil for line.
(setf (glfnresulttype 'window-get-latex-position) 'vector)
(defun window-get-latex-position (w orgx orgy &optional flg)
  (window-get-icon-position w #'window-draw-latex-xy (list orgx orgy flg)))

; 13 Aug 91; 15 Aug 91; 05 Sep 91
; Get a position indicated by a box of a specified size.
; (dx dy) is offset of lower-left corner of box from mouse
; Returns (x y) of lower-left corner of box.
(setf (glfnresulttype 'window-get-box-position) 'vector)
(defun window-get-box-position (w width height &optional (dx 0) (dy 0))
  (window-get-icon-position w #'window-draw-box-xy
			      (list width height 1) dx dy))

; 05 Sep 91
; Get a position indicated by an icon.
; fn is the function to draw the icon: (fn w x y . args) .
; fn must simply draw the icon, not set window parameters.
; (dx dy) is offset of lower-left corner of icon (x y) from mouse.
; Returns (x y) of mouse.
(setf (glfnresulttype 'window-get-icon-position) 'vector)
(defun window-get-icon-position (w fn args &optional (dx 0) (dy 0))
  (let (lastx lasty argl)
    (setq argl (cons w (cons 0 (cons 0 args))))   ; arg list for fn
    (window-set-xor w)
    (window-track-mouse w 
	    #'(lambda (x y code)
		(when (or (null lastx) (/= x lastx) (/= y lasty))
		  (if lastx (apply fn argl))     ; undraw
		  (rplaca (cdr argl) (+ x dx))
		  (rplaca (cddr argl) (+ y dy))
		  (apply fn argl)                ; draw
		  (setq lastx x)
		  (setq lasty y))
		(not (zerop code)) ))
    (apply fn argl)                ; undraw
    (window-unset w)
    (window-force-output w)
    (list lastx lasty) ))

; 13 Aug 91; 06 Sep 91; 06 Nov 91
; Get a box size and position.
; Click for top right, then click for bottom left, then move it.
; Returns ((x y) (width height)) where (x y) is lower-left corner of box.
(setf (glfnresulttype 'window-get-region) 'region)
(defun window-get-region (w &optional wid ht)
  (let (lastx lasty start end width height place offx offy stx sty)
    (if (and (numberp wid) (numberp ht))
	(progn (setq start (window-get-box-position w wid ht (- wid) (- ht)))
	       (setq stx (- (car start) wid))
	       (setq sty (- (cadr start) ht)) )
	(progn (setq start (window-get-point w))
	       (setq stx (car start))
	       (setq sty (cadr start))))
    (setq end (window-get-icon-position w #'window-draw-box-corners
					  (list stx sty 1)))
    (setq lastx (car end))
    (setq lasty (cadr end))
    (setq width  (abs (- stx lastx)))
    (setq height (abs (- sty lasty)))
    (setq offx (- (min stx lastx) lastx))
    (setq offy (- (min sty lasty) lasty))
    (setq place (window-get-box-position w width height offx offy))
    (list (list (+ offx (first place))
	        (+ offy (second place)))
          (list width height)) ))

; 27 Nov 91; 10 Sep 92
; Get box size and echo the size in pixels.  Click for top right.
; Returns (width height) of box.
(setf (glfnresulttype 'window-get-box-size) 'vector)
(defun window-get-box-size (w offsetx offsety)
  (let (legendy lastx lasty dx dy)
    (setq offsety (max offsety 30))
    (setq legendy (- offsety 25))
    (window-erase-area-xy w offsetx legendy 71 21)
    (window-draw-box-xy w offsetx legendy 70 20)
    (window-track-mouse w 
	    #'(lambda (x y code)
		(when (or (null lastx) (/= x lastx) (/= y lasty))
		  (if lastx (window-xor-box-xy w offsetx offsety
					         (- lastx offsetx)
					         (- lasty offsety)))
		  (setq lastx nil)
		  (setq dx (- x offsetx))
		  (setq dy (- y offsety))
		  (when (and (> dx 0) (> dy 0))
		    (window-xor-box-xy w offsetx offsety dx dy)
		    (window-printat-xy w (format nil "~3D x ~3D" dx dy)
			       (+ offsetx 3) (+ legendy 5))
		    (setq lastx x)
		    (setq lasty y)))
		(not (zerop code)) ))
    (if lastx (window-xor-box-xy w offsetx offsety (- lastx offsetx)
					           (- lasty offsety)))
    (window-erase-area-xy w offsetx legendy 71 21)
    (window-force-output w)
    (list dx dy) ))

; 29 Oct 91; 30 Oct 91; 04 Jan 94
; Track mouse until a button is pressed or it leaves specified region.
; Returns (x y code) or nil.  boxflg is T to box the region.
(setf (glfnresulttype 'window-track-mouse-in-region)
      '(list (code integer)
		   (position (transparent vector))))
(defun window-track-mouse-in-region (w offsetx offsety sizex sizey
				       &optional boxflg inside)
  (let (res)
    (when boxflg
      (window-set-xor w)
      (window-draw-box-xy w (- offsetx 4) (- offsety 4)
			    (+ sizex 8) (+ sizey 8))
      (window-unset w)
      (window-force-output w) )
    (setq res (window-track-mouse w
	        #'(lambda (x y code)
		    (if (> code 0)
			(if inside (list code (list x y)) t)
			(if (or (< x offsetx)
				(> x (+ offsetx sizex))
				(< y offsety)
				(> y (+ offsety sizey)))
			    inside
			    (and (setq inside t) nil)))) ) )
    (when boxflg
      (window-set-xor w)
      (window-draw-box-xy w (- offsetx 4) (- offsety 4)
			    (+ sizex 8) (+ sizey 8))
      (window-unset w)
      (window-force-output w) )
    (if (consp res) res) ))

; 04 Nov 91
; Adjust one side of a box by mouse movement.  Returns ((x y) (width height)).
(setf (glfnresulttype 'window-adjust-box-side) 'region)
(defun window-adjust-box-side (w orgx orgy width height side)
  (let (new (xx orgx) (yy orgy) (ww width) (hh height))
    (setq new (window-get-icon-position w #'window-adj-box-xy
					(list orgx orgy width height side)))
    (case side (left (setq xx (car new))
		     (setq ww (+ width (- orgx (car new)))))
               (right (setq ww (- (car new) orgx)))
	       (top   (setq hh (- (cadr new) orgy)))
	       (bottom (setq yy (cadr new))
		       (setq hh (+ height (- orgy (cadr new))))) )
    (list (list xx yy) (list ww hh))  ))

; 04 Nov 91
(defun window-adj-box-xy (w x y orgx orgy width height side)
  (let ((xx orgx) (yy orgy) (ww width) (hh height))
    (case side (left (setq xx x) (setq ww (+ width (- orgx x))))
               (right (setq ww (- x orgx)))
	       (top   (setq hh (- y orgy)))
	       (bottom (setq yy y) (setq hh (+ height (- orgy y)))) )
    (window-draw-box-xy w xx yy ww hh) ))
          

; 10 Sep 92
; Get a circle with a specified center and size.
; center is initial center position, if specified.
; Returns ((x y) radius)
(setf (glfnresulttype 'window-get-circle)
      '(list (center vector) (radius integer)))
(defun window-get-circle (w &optional center)
  (let (pt)
    (or center (setq center (window-get-crosshairs w)))
    (setq pt (window-get-icon-position w #'window-draw-circle-pt
				         (list center)))
    (list center (window-circle-radius (car pt) (cadr pt) center)) ))

; 10 Sep 92
(defun window-circle-radius (x y center)
  (let ((dx (- x (car center))) (dy (- y (cadr center))))
    (truncate (+ 0.5 (sqrt (+ (* dx dx) (* dy dy))))) ))

; 10 Sep 92
(defun window-draw-circle-pt (w x y center)
  (window-draw-circle w center (window-circle-radius x y center) 1))

; 10 Sep 92; 15 Sep 92; 06 Nov 92
; Get an ellipse with a specified center and sizes.
; center is initial center position, if specified.
; First gets a circle whose radius is x size, then adjusts it.
; Returns ((x y) (radiusx radiusy))
(setf (glfnresulttype 'window-get-ellipse)
      '(list (center vector) (halfsize vector)))
(defun window-get-ellipse (w &optional center)
  (let (cir radiusx pt)
    (setq cir (window-get-circle w center))
    (setq center (car cir))
    (setq radiusx (cadr cir))
    (setq pt (window-get-icon-position w #'window-draw-ellipse-pt
				         (list center radiusx)))
    (list center (list radiusx (abs (- (cadr pt) (cadr center))))) ))

; 10 Sep 92
(defun window-draw-ellipse-pt (w x y center radiusx)
  (window-draw-ellipse-xy w (car center) (cadr center)
			    radiusx (abs (- y (cadr center)))) )

; 30 Dec 93
(defun window-draw-vector-pt (w x y center radius)
  (let (dx dy theta)
    (setq dy (- y (cadr center)))
    (setq dx (- x (car center)))
    (when (or (/= dx 0) (/= dy 0))
      (setq theta (atan (- y (cadr center)) (- x (car center))))
      (window-draw-line-xy w (car center) (cadr center)
			   (+ (car center) (* radius (cos theta)))
			   (+ (cadr center) (* radius (sin theta))) ) ) ))

; 30 Dec 93
(setf (glfnresulttype 'window-get-vector-end) 'vector)
(defun window-get-vector-end (w center radius)
  (window-get-icon-position w #'window-draw-vector-pt (list center radius)) )

; 12 Sep 92
(setf (glfnresulttype 'window-get-crosshairs) 'vector)
(defun window-get-crosshairs (w)
  (window-get-icon-position w #'window-draw-crosshairs-xy nil) )

; 12 Sep 92
(defun window-draw-crosshairs-xy (w x y)
  (window-draw-line-xy w (- x 12) y        (- x 3) y)
  (window-draw-line-xy w (+ x 3)  y        (+ x 12) y)
  (window-draw-line-xy w x        (- y 12) x        (- y 3))
  (window-draw-line-xy w x        (+ y 3)  x        (+ y 12)) )

; 12 Sep 92
(setf (glfnresulttype 'window-get-cross) 'vector)
(defun window-get-cross (w)
  (window-get-icon-position w #'window-draw-cross-xy nil) )

; 12 Sep 92
(defun window-draw-cross-xy (w x y)
  (window-draw-line-xy w (- x 10) (- y 10) (+ x 10) (+ y 10) 2)
  (window-draw-line-xy w (+ x 10) (- y 10) (- x 10) (+ y 10) 2) )

; 11 Sep 92; 14 Sep 92
; Draw a dot whose center is at (x y)
(defun window-draw-dot-xy (w x y)
  (window-draw-circle-xy w x y 1)
  (window-draw-circle-xy w x y 2)
  (window-draw-line-xy   w x y (+ x 1) y 1) )

; 17 Dec 93; 19 Dec 93
; Draw a line close to the specified coordinates, but restricted to slopes
; that can be drawn by LaTex.  flg = T to restrict slopes for vector.
(defun window-draw-latex-xy (w x y orgx orgy flg)
  (let (dx dy delx dely n ratio cd nrat)
    (setq dx (- x orgx))
    (setq dy (- y orgy))
    (if (or (= dx 0) (= dy 0))
	(window-draw-line-xy w x y orgx orgy)
	(progn (setq n (if flg 4 6))
	       (if (> (abs dy) (abs dx))
		   (progn (setq ratio (round (/ (* (abs dx) n) (abs dy))))
			  (setq cd (gcd n ratio))
			  (setq n (/ n cd))
			  (setq ratio (/ ratio cd))
			  (setq nrat (round (/ (abs dy) n)))
			  (setq dely (* (signum dy) nrat n))
			  (setq delx (* (signum dx) nrat ratio)) )
		   (progn (setq ratio (round (/ (* (abs dy) n) (abs dx))))
			  (setq cd (gcd n ratio))
			  (setq n (/ n cd))
			  (setq ratio (/ ratio cd))
			  (setq nrat (round (/ (abs dx) n)))
			  (setq delx (* (signum dx) nrat n))
			  (setq dely (* (signum dy) nrat ratio)) ))
	       (window-draw-line-xy w (+ orgx delx) (+ orgy dely) orgx orgy)) )
    ))

; 31 Dec 93
; Reset window colors to default foreground and background.
(gldefun window-reset-color (w\:window)
  (XSetForeground *window-display* (gcontext w) *default-fg-color*)
  (XSetBackground *window-display* (gcontext w) *default-bg-color*) )

; 31 Dec 93; 04 Jan 94; 05 Jan 94
; Set color to be used in a window to specified red/green/blue values.
; Values of r, g, b are integers on scale of 65535.
; Background is t if the background color is to be set, else foreground is set.
; Returns an xcolor.
(defun window-set-color-rgb (w r g b &optional background)
  (let (ret)
    (or *window-xcolor*	(setq *window-xcolor* (Make-Xcolor)))
    (set-Xcolor-red *window-xcolor* (+ r 0))
    (set-Xcolor-green *window-xcolor* (+ g 0))
    (set-Xcolor-blue *window-xcolor* (+ b 0))
    (setq ret (XAllocColor *window-display*
				    *default-colormap* *window-xcolor*))
    (if (not (eql ret 0)) 
	(window-set-xcolor w *window-xcolor* background)) ))

; 05 Jan 94
(defun window-set-xcolor (w &optional xcolor background)
  (if background
      (window-set-background w (XColor-Pixel xcolor))
      (window-set-foreground w (XColor-Pixel xcolor)))
  xcolor)

; 03 Jan 94
(defun window-set-color (w rgb &optional background)
  (window-set-color-rgb w (first rgb) (second rgb) (third rgb) background) )

; 31 Dec 93; 03 Jan 94; 05 Jan 94
; Free the last xcolor used
(defun window-free-color (w &optional xcolor)
  (or xcolor (setq xcolor *window-xcolor*))
  (if xcolor
      (unless (or (eql xcolor *default-fg-color*)
		  (eql xcolor *default-bg-color*))
	(XFreeColors *window-display*
			   *default-colormap* xcolor 1 0)) ) )

; 31 Dec 93
; Get characters within a window, calling function fn with arg (char).
; Tracking continues until fn returns non-nil; result is that value.
(defun window-get-chars (w fn)
  (let (win res)
    (or *window-keyinit* (window-init-keymap))
    (setq *window-shift* nil)
    (setq *window-ctrl* nil)
    (setq *window-meta* nil)
    (setq win (window-parent w))
    (Xsync *window-display* 1) ; clear event queue of prev motion events
    (Xselectinput *window-display* win
			(+ KeyPressMask KeyReleaseMask))
 ;; Event processing loop: stop when function returns non-nil.
  (while (null res)
    (XNextEvent *window-display* *window-event*)
    (let ((type (XAnyEvent-type *window-event*))
	  (eventwindow (XAnyEvent-window *window-event*)))
      (if (eql eventwindow win)
	  (setq res (window-process-char-event w type fn))) ))
  res))

; 31 Dec 93; 18 Jan 94; 04 Oct 94
; Process a character event.  type is event type.
; For Control, Shift, and Meta, global flags are set.
; fn is called for other characters.
(defun window-process-char-event (w type fn)
  (let (code)
    (if (eql type KeyRelease)
	(progn
	  (setq code (XButtonEvent-button *window-event*))
	  (if (member code *window-shift-keys*)
	      (setq *window-shift* nil)
	      (if (member code *window-control-keys*)
		  (setq *window-ctrl* nil)
		  (if (member code *window-meta-keys*)
		      (setq *window-meta* nil)))))
	(if (eql type KeyPress )
	    (progn
	      (setq code (XButtonEvent-button *window-event*))
	      (if (member code *window-shift-keys*)
		  (progn (setq *window-shift* t) nil)
		  (if (member code *window-control-keys*)
		      (progn (setq *window-ctrl* t) nil)
		      (if (member code *window-meta-keys*)
			  (progn (setq *window-meta* t) nil)
			  (funcall fn w (or (aref (if *window-shift*
						      *window-shiftkeymap*
						      *window-keymap*)
						  code)
					    #\Space)) ))))) ) ))

; 31 Dec 93; 04 Oct 94; 16 Nov 94
; Get character within a window, calling function fn with arg (char).
; Tracking continues until fn returns non-nil; result is that value.
(defun window-get-raw-char (w)
  (let (win res)
    (or *window-keyinit* (window-init-keymap))
    (setq *window-shift* nil)
    (setq *window-ctrl* nil)
    (setq *window-meta* nil)
    (setq win (window-parent w))
    (Xsync *window-display* 1) ; clear event queue of prev motion events
    (Xselectinput *window-display* win
			(+ KeyPressMask KeyReleaseMask))
 ;; Event processing loop: stop when function returns non-nil.
  (while (null res)
    (XNextEvent *window-display* *window-event*)
    (let ((type (XAnyEvent-type *window-event*))
	  (eventwindow (XAnyEvent-window *window-event*)))
      (if (and (eql eventwindow win)
	       (eql type KeyPress))
	  (setq res (XButtonEvent-button *window-event*)) ) ))
  res))

; 31 Dec 93
; Input a string from keyboard, echo in window.  str is initial string.
; Backspace is handled; terminate with return.  Size is max width in pixels.
(defun window-input-string (w str x y &optional size)
  (let ()
    (setq *window-input-string-x* x)
    (setq *window-input-string-y* y)
    (setq *window-input-string-charwidth* (window-string-width w "M"))
    (setq *window-string-max* (if size
				  (/ size *window-input-string-charwidth*)
				  100))
    (setq *window-string-count* (if str (min (length str)
					     *window-string-max*)
				        0))
    (window-erase-area-xy w x (- y 2) (or size 100) 14)
    (if (> *window-string-count* 0)
	(progn (dotimes (i *window-string-count*)
		 (setf (char *window-string* i) (char str i)) )
	       (window-printat-xy w str x y)))
    (window-draw-carat w)
    (window-get-chars w #'window-input-char-fn) ))

; 31 Dec 93
; Process input characters for window-input-string
(defun window-input-char-fn (w char)
  (let ((tmpstring "Z"))
    (window-draw-carat w)                          ; erase the input pointer
    (if (char= char #\Return)
	(subseq *window-string* 0 *window-string-count*)
	(progn
	  (if (char= char #\Backspace)
	      (if (> *window-string-count* 0)
		  (progn (decf *window-string-count*)
			 (window-printat-xy w " "
			   (+ *window-input-string-x*
			      (* *window-string-count*
				 *window-input-string-charwidth*))
			    *window-input-string-y*)
			 (window-draw-carat w)))
	      (if (< *window-string-count* *window-string-max*)
		  (progn (setf (char *window-string* *window-string-count*)
			       char)
			 (incf *window-string-count*)
			 (setf (char tmpstring 0) char)
			 (window-printat-xy w tmpstring
			   (+ *window-input-string-x*
			      (* (1- *window-string-count*)
				 *window-input-string-charwidth*))
			   *window-input-string-y*)
			 (window-draw-carat w))))
	  nil) ) ))      ; return nil to continue input

; 31 Dec 93
(defun window-draw-carat (w)
  (let ((origx *window-input-string-x*) (y *window-input-string-y*) x)
    (setq x (+ origx (* *window-input-string-charwidth*
			*window-string-count*)))
    (window-set-xor w)
    (window-draw-line-xy w (- x 2) (- y 2) (+ x 3) y)
    (window-draw-line-xy w (+ x 3) y (+ x 8) (- y 2))
    (window-unset w)
    (window-force-output w) ))

; 31 Dec 93; 04 Oct 94; 15 Nov 94; 16 Nov 94; 14 Mar 95
; Initialize mapping between keys and ASCII.
(defun window-init-keymap ()
  (let (mincode maxcode keycode keysym keynum shiftkeynum char)
  ; Get the min and max keycodes for this keyboard
    (XDisplayKeycodes *window-display* *min-keycodes-return*
		                       *max-keycodes-return*)
    (setq mincode (int-pos *min-keycodes-return* 0))
    (setq maxcode (int-pos *max-keycodes-return* 0))
    (setq *window-keymap* (make-array (1+ maxcode) :initial-element nil))
    (setq *window-shiftkeymap* (make-array (1+ maxcode) :initial-element nil))
    (setq *window-shift-keys* nil)
    (setq *window-control-keys* nil)
    (setq *window-meta-keys* nil)
  ; Get the ASCII corresponding to these keycodes
    (dotimes (i (1+ (- maxcode mincode)))
      (setq keycode (+ i mincode))
      (setq keysym (XGetKeyboardMapping *window-display* keycode 1
					*keycodes-return*))
      (setq keynum (int-pos keysym 0))       ; ascii integer code
      (setq shiftkeynum (int-pos keysym 1))
   ;   (XFree keysym)   ; ***** commented out -- causes error on Sun
  ; Following is a Kludge (TM) for Sun keyboard
      (if (and (>= keynum 65) (<= keynum 90) (eql shiftkeynum NoSymbol))
	  (progn (setq shiftkeynum keynum)
		 (setq keynum (+ keynum 32))))
      (if (> keynum 0)
	  (if (setq char (window-code-char keynum))
	      (setf (aref *window-keymap* keycode) char)
	      (if (> keynum 256)
		  (cond ((or (eql keynum XK_Shift_R) (eql keynum XK_Shift_L))
			  (push keycode *window-shift-keys*))
			((or (eql keynum XK_Control_L) (eql keynum XK_Control_R))
			  (push keycode *window-control-keys*))
			((or (eql keynum XK_Alt_R) (eql keynum XK_Alt_L))
			  (push keycode *window-meta-keys*))))))
      (if (> shiftkeynum 0)
	  (if (setq char (window-code-char shiftkeynum))
	      (setf (aref *window-shiftkeymap* keycode) char)
	    )) )
    (setq *window-keyinit* t) ))       ; signify initialization done

; 15 Nov 94
(defun window-code-char (code)
  (if (> code 0)
      (if (< code 256)
	  (code-char code)
	  (cond ((eql code XK_Return) #\Return)
		((eql code XK_Tab) #\Tab)
		((eql code XK_BackSpace) #\Backspace)) ) ) )

; 14 Dec 90; 12 Aug 91; 09 Oct 91; 09 Sep 92; 04 Aug 93; 06 Oct 94
; Compile the dwindow file into a plain Lisp file
(defun compile-dwindow ()
  (glcompfiles *directory*
	       '("glisp/vector.lsp")   ; auxiliary files
               '("X/dwindow.lsp")      ; translated files
	       "X/dwtrans.lsp"         ; output file
	       "X/dwhead.lsp"          ; header file
	       '(glfnresulttype glmacro glispobjects
		 glispconstants glispglobals compile-dwindow compile-dwindowb))
  (compile-file (concatenate 'string *directory* "X/dwtrans.lsp")) )

(defun compile-dwindowb ()
  (glcompfiles *directory*
	       '("glisp/vector.lsp")   ; auxiliary files
               '("X/dwindow.lsp")      ; translated files
	       "X/dwtransb.lsp")       ; output file
  (compile-file (concatenate 'string *directory* "X/dwtransb.lsp")) )

; Note: when compiling dwtrans.lsp, be sure glmacros.lsp is loaded.
