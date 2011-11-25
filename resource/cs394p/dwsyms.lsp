; dwsyms.lsp            Gordon S. Novak Jr.              14 Mar 95

; Copyright (c) 1995 Gordon S. Novak Jr. and The University of Texas at Austin.

; See the file gnu.license .

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

; This file imports symbols from the X library (in XLIB: package)
; to the current package (such as the :USER package).
; This will allow these symbols to be accessed by just their
; names and without any package qualifier.
; This file may be useful if you wish to modify dwindow.lsp or dwtrans.lsp .

; This file should be loaded immediately after starting Lisp:
; If Lisp has seen any of these symbols, loading this file will cause an error.

(import '(
xlib::BUTTONPRESS
xlib::BUTTONPRESSMASK
xlib::BUTTONRELEASEMASK
xlib::CAPBUTT
xlib::CWBACKINGSTORE
xlib::CWSAVEUNDER
xlib::EXPOSE
xlib::EXPOSUREMASK
xlib::GCBACKGROUND
xlib::GCFOREGROUND
xlib::GCFUNCTION
xlib::GET-C-STRING
xlib::GXCOPY
xlib::GXXOR
xlib::INT-ARRAY
xlib::INT-POS
xlib::ISUNMAPPED
xlib::JOINMITER
xlib::KEYPRESS
xlib::KEYPRESSMASK
xlib::KEYRELEASE
xlib::KEYRELEASEMASK
xlib::LEAVEWINDOWMASK
xlib::LINESOLID
xlib::MAKE-XCOLOR
xlib::MAKE-XEVENT
xlib::MAKE-XGCVALUES
xlib::MAKE-XSETWINDOWATTRIBUTES
xlib::MAKE-XSIZEHINTS
xlib::MAKE-XWINDOWATTRIBUTES
xlib::MOTIONNOTIFY
xlib::NONE
xlib::NoSymbol
xlib::POINTERMOTIONMASK
xlib::PPOSITION
xlib::PSIZE
xlib::SET-XCOLOR-BLUE
xlib::SET-XCOLOR-GREEN
xlib::SET-XCOLOR-RED
xlib::SET-XSETWINDOWATTRIBUTES-BACKING_STORE
xlib::SET-XSETWINDOWATTRIBUTES-SAVE_UNDER
xlib::SET-XSIZEHINTS-HEIGHT
xlib::SET-XSIZEHINTS-FLAGS
xlib::SET-XSIZEHINTS-WIDTH
xlib::SET-XSIZEHINTS-X
xlib::SET-XSIZEHINTS-Y
xlib::WHENMAPPED
xlib::XALLOCCOLOR
xlib::XANYEVENT-TYPE
xlib::XANYEVENT-WINDOW
xlib::XBLACKPIXEL
xlib::XBUTTONEVENT-BUTTON
xlib::XCHANGEWINDOWATTRIBUTES
xlib::XCLEARAREA
xlib::XCLEARWINDOW
xlib::XCOLOR-PIXEL
xlib::XCOPYAREA
xlib::XCREATEFONTCURSOR
xlib::XCREATEGC
xlib::XCREATESIMPLEWINDOW
xlib::XDEFAULTCOLORMAP
xlib::XDEFAULTGC
xlib::XDEFAULTSCREEN
xlib::XDEFINECURSOR
xlib::XDESTROYWINDOW
xlib::XDRAWARC
xlib::XDRAWIMAGESTRING
xlib::XDRAWLINE
xlib::XFILLRECTANGLE
xlib::XFONTSTRUCT-FID
xlib::XFLUSH
xlib::XFREECOLORS
xlib::XFREEGC
xlib::XGCVALUES-BACKGROUND
xlib::XGCVALUES-FOREGROUND
xlib::XGCVALUES-FUNCTION
xlib::XGETGCVALUES
xlib::XGETGEOMETRY
xlib::XGETWINDOWATTRIBUTES
xlib::XLOADQUERYFONT
xlib::XMAPWINDOW
xlib::XMOTIONEVENT-X
xlib::XMOTIONEVENT-Y
xlib::XMOVEWINDOW
xlib::XNEXTEVENT
xlib::XOPENDISPLAY
xlib::XPENDING
xlib::XQUERYPOINTER
xlib::XRECOLORCURSOR
xlib::XROOTWINDOW
xlib::XSELECTINPUT
xlib::XSETBACKGROUND
xlib::XSETFONT
xlib::XSETFOREGROUND
xlib::XSETFUNCTION
xlib::XSETLINEATTRIBUTES
xlib::XSETSTANDARDPROPERTIES
xlib::XSYNC
xlib::XTEXTEXTENTS
xlib::XTEXTWIDTH
xlib::XUNMAPWINDOW
xlib::XWHITEPIXEL
xlib::XWINDOWATTRIBUTES-MAP_STATE
xlib::XDisplayKeycodes
xlib::XGetKeyboardMapping
xlib::XFree
xlib::XK_Shift_R
xlib::XK_Shift_L
xlib::XK_Control_L
xlib::XK_Control_R
xlib::XK_Alt_R
xlib::XK_Alt_L
xlib::XK_Return
xlib::XK_Tab
xlib::XK_BackSpace
))

(setf (get 'xlib::int-pos 'glfnresulttype) 'integer)
