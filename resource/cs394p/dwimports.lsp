; dwimports.lsp                 Gordon S. Novak Jr.              14 Jan 97

; Copyright (c) 1997 Gordon S. Novak Jr. and The University of Texas at Austin.

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

; This file imports symbols from the dwindow.lsp file (in XLIB: package)
; to the current package (such as the :USER package).
; This will allow the dwindow.lsp functions to be called by just their
; names and without any package qualifier.

; This file should be loaded immediately after starting Lisp:
; If Lisp has seen any of these symbols, loading this file will cause an error.

(import '(xlib::window xlib::menu xlib::picmenu xlib::picmenu-spec
 xlib::picmenu-button xlib::barmenu xlib::rgb xlib::stringify
 xlib::window-get-mouse-position xlib::window-create xlib::window-set-font
 xlib::window-font-info xlib::window-gcontext xlib::window-parent
 xlib::window-drawable-height xlib::window-drawable-width xlib::window-label
 xlib::window-font xlib::window-foreground xlib::window-set-foreground
 xlib::window-background xlib::window-set-background xlib::window-wfunction
 xlib::window-get-geometry xlib::window-get-geometry-b xlib::window-sync
 xlib::window-screen-height xlib::window-geometry xlib::window-size
 xlib::window-left xlib::window-top-neg-y xlib::window-reset-geometry
 xlib::window-force-output xlib::window-query-pointer xlib::window-set-xor
 xlib::window-unset xlib::window-reset xlib::window-set-erase
 xlib::window-set-copy xlib::window-set-invert xlib::window-set-line-width
 xlib::window-set-line-attr xlib::window-std-line-attr xlib::window-draw-line
 xlib::window-draw-line-xy xlib::window-draw-arrowhead-xy
 xlib::window-draw-arrow-xy xlib::window-draw-arrow2-xy xlib::window-draw-box
 xlib::window-draw-box-xy xlib::window-xor-box-xy xlib::window-draw-box-corners
 xlib::window-draw-rcbox-xy xlib::window-draw-arc-xy
 xlib::window-draw-circle-xy xlib::window-draw-circle xlib::window-erase-area
 xlib::window-erase-area-xy xlib::window-erase-box-xy
 xlib::window-draw-ellipse-xy xlib::window-copy-area-xy xlib::window-invertarea
 xlib::window-invert-area xlib::window-invert-area-xy
 xlib::window-prettyprintat xlib::window-prettyprintat-xy xlib::window-printat
 xlib::window-printat-xy xlib::window-string-width
 xlib::window-string-height
 xlib::window-string-extents xlib::window-font-string-width
 xlib::window-yposition xlib::window-centeroffset xlib::dowindowcom
 xlib::window-menu xlib::window-close xlib::window-unmap xlib::window-open
 xlib::window-map xlib::window-destroy xlib::window-destroy-selected-window
 xlib::window-clear xlib::window-moveto-xy xlib::window-paint
 xlib::window-move xlib::window-draw-border xlib::window-track-mouse
 xlib::window-wait-exposure xlib::window-wait-unmap
 xlib::window-init-mouse-poll xlib::window-poll-mouse xlib::menu-init
 xlib::menu-calculate-size xlib::menu-adjust-offset xlib::menu-draw
 xlib::menu-item-value xlib::menu-find-item-width xlib::menu-find-item-height
 xlib::menu-clear xlib::menu-display-item xlib::menu-choose xlib::menu-box-item
 xlib::menu-unbox-item xlib::menu-item-position xlib::menu-select
 xlib::menu-select! xlib::menu-select-b xlib::menu-destroy xlib::menu
 xlib::menu-create xlib::menu-offset xlib::menu-size xlib::menu-moveto-xy
 xlib::menu-reposition xlib::picmenu-create xlib::picmenu-create-spec
 xlib::picmenu-create-from-spec xlib::picmenu-calculate-size xlib::picmenu-init
 xlib::picmenu-draw xlib::picmenu-draw-button xlib::picmenu-delete-named-button
 xlib::picmenu-select xlib::picmenu-box-item xlib::picmenu-unbox-item
 xlib::picmenu-destroy xlib::picmenu-button-containsxy?
 xlib::picmenu-item-position xlib::barmenu-create
 xlib::barmenu-calculate-size xlib::barmenu-init xlib::barmenu-draw
 xlib::barmenu-select xlib::barmenu-update-value xlib::window-get-point
 xlib::window-get-click xlib::window-get-line-position
 xlib::window-get-latex-position xlib::window-get-box-position
 xlib::window-get-icon-position xlib::window-get-region
 xlib::window-get-box-size xlib::window-track-mouse-in-region
 xlib::window-adjust-box-side xlib::window-adj-box-xy xlib::window-get-circle
 xlib::window-circle-radius xlib::window-draw-circle-pt
 xlib::window-get-ellipse xlib::window-draw-ellipse-pt
 xlib::window-draw-vector-pt xlib::window-get-vector-end
 xlib::window-get-crosshairs xlib::window-draw-crosshairs-xy
 xlib::window-get-cross xlib::window-draw-cross-xy xlib::window-draw-dot-xy
 xlib::window-draw-latex-xy xlib::window-reset-color
 xlib::window-set-color-rgb xlib::window-set-xcolor xlib::window-set-color
 xlib::window-set-color xlib::window-free-color xlib::window-get-chars
 xlib::window-process-char-event xlib::window-input-string
 xlib::window-input-char-fn xlib::window-draw-carat xlib::window-init-keymap
 xlib::window-set-cursor xlib::window-positive-y xlib::window-code-char
 xlib::window-get-raw-char

 xlib::menu-window xlib::flat xlib::parent-window xlib::parent-offset-x
 xlib::parent-offset-y xlib::picture-width xlib::picture-height
 xlib::title xlib::permanent xlib::menu-font xlib::item-width xlib::item-height
 xlib::items xlib::menuw xlib::title-present xlib::width xlib::height
 xlib::base-x xlib::base-y xlib::offset xlib::size xlib::region xlib::voffset
 xlib::vsize xlib::init xlib::init? xlib::contains? xlib::create xlib::clear
 xlib::select xlib::select! xlib::choose xlib::draw xlib::destroy
 xlib::moveto-xy xlib::reposition xlib::box-item xlib::unbox-item
 xlib::display-item xlib::item-value xlib::item-position xlib::find-item-width
 xlib::find-item-height xlib::adjust-offset xlib::calculate-size
 xlib::menu-x xlib::menu-y xlib::spec xlib::boxflg xlib::deleted-buttons
 xlib::draw-button xlib::delete-named-button xlib::drawing-width
 xlib::drawing-height xlib::buttons xlib::dotflg xlib::drawfn xlib::menu-font
 xlib::name xlib::offset xlib::size xlib::highlightfn xlib::unhighlightfn
 xlib::containsxy? xlib::color xlib::value xlib::maxval xlib::barwidth
 xlib::horizontal xlib::subtrackfn xlib::subtrackparms xlib::update-value
 xlib::gcontext xlib::parent xlib::drawable-height xlib::drawable-width
 xlib::label xlib::font xlib::width xlib::height xlib::left xlib::right
 xlib::top-neg-y xlib::leftmargin xlib::rightmargin xlib::yposition
 xlib::wfunction xlib::foreground xlib::background xlib::force-output
 xlib::set-font xlib::set-foreground xlib::set-background
 xlib::set-cursor xlib::set-erase xlib::set-xor xlib::set-invert xlib::set-copy
 xlib::set-line-width xlib::set-line-attr xlib::std-line-attr xlib::unset
 xlib::reset xlib::sync xlib::geometry xlib::size xlib::get-geometry
 xlib::reset-geometry xlib::query-pointer xlib::wait-exposure xlib::wait-unmap
 xlib::clear xlib::mapw xlib::unmap xlib::open xlib::close xlib::destroy
 xlib::positive-y xlib::drawline xlib::draw-line xlib::draw-line-xy
 xlib::draw-latex-xy xlib::draw-arrow-xy xlib::draw-arrow2-xy
 xlib::draw-arrowhead-xy xlib::draw-box xlib::draw-box-xy
 xlib::draw-box-corners xlib::draw-rcbox-xy xlib::xor-box-xy xlib::draw-circle
 xlib::draw-circle-xy xlib::draw-ellipse-xy xlib::draw-arc-xy xlib::invertarea
 xlib::invert-area xlib::invert-area-xy xlib::copy-area-xy xlib::printat
 xlib::printat-xy xlib::prettyprintat-xy xlib::prettyprintat xlib::string-width
 xlib::string-extents xlib::erase-area xlib::erase-area-xy xlib::erase-box-xy
 xlib::moveto-xy xlib::move xlib::paint xlib::centeroffset xlib::draw-border
 xlib::track-mouse xlib::track-mouse-in-region xlib::init-mouse-poll
 xlib::poll-mouse xlib::get-point xlib::get-click xlib::get-line-position
 xlib::get-latex-position xlib::get-icon-position xlib::get-box-position
 xlib::get-box-size xlib::get-region xlib::adjust-box-side
 xlib::get-mouse-position xlib::get-circle xlib::get-ellipse
 xlib::get-crosshairs xlib::draw-crosshairs-xy xlib::get-cross
 xlib::draw-cross-xy xlib::draw-dot-xy xlib::draw-vector-pt
 xlib::get-vector-end xlib::reset-color xlib::set-color-rgb xlib::set-color
 xlib::set-xcolor xlib::free-color xlib::get-chars xlib::input-string
 xlib::courier-bold-12 xlib::8x10 xlib::9x15 xlib::center xlib::top
 xlib::bottom xlib::xor xlib::erase xlib::display-size xlib::copy
 xlib::window-print-line xlib::window-print-lines xlib::textmenu-create
 xlib::textmenu-calculate-size xlib::textmenu-init xlib::textmenu-draw
 xlib::textmenu-select xlib::textmenu-set-text xlib::textmenu
 xlib::editmenu xlib::editmenu-create xlib::editmenu-calculate-size
 xlib::editmenu-init xlib::editmenu-draw xlib::editmenu-display
 xlib::window-edit
 xlib::window-edit-display xlib::editmenu-carat xlib::editmenu-erase
 xlib::window-edit-erase xlib::editmenu-select xlib::editmenu-edit-fn
 xlib::window-edit-fn xlib::editmenu-setxy xlib::editmenu-char
 xlib::editmenu-edit
 xlib::*window-editmenu-kill-strings*
xlib::*window-add-menu-title*
xlib::*window-menu*
xlib::*mouse-x*
xlib::*mouse-y*
xlib::*mouse-window*
xlib::*window-fonts*
xlib::*window-display*
xlib::*window-screen*
xlib::*root-window*
xlib::*black-pixel*
xlib::*white-pixel*
xlib::*default-fg-color*
xlib::*default-bg-color*
xlib::*default-size-hints*
xlib::*default-GC*
xlib::*default-colormap*
xlib::*window-event*
xlib::*window-default-pos-x*
xlib::*window-default-pos-y*
xlib::*window-default-border*
xlib::*window-default-font-name*
xlib::*window-default-cursor*
xlib::*window-save-foreground*
xlib::*window-save-function*
xlib::*window-attributes*
xlib::*window-attr*
xlib::*menu-title-pad*
xlib::*root-return*
xlib::*child-return*
xlib::*root-x-return*
xlib::*root-y-return*
xlib::*win-x-return*
xlib::*win-y-return*
xlib::*mask-return*
xlib::*x-return*
xlib::*y-return*
xlib::*width-return*
xlib::*height-return*
xlib::*depth-return*
xlib::*border-width-return*
xlib::*text-width-return*
xlib::*direction-return*
xlib::*ascent-return*
xlib::*descent-return*
xlib::*overall-return*
xlib::*GC-Values*
xlib::*window-xcolor*
xlib::*window-menu-code*

xlib::*window-keymap*
xlib::*window-shiftkeymap*
xlib::*window-keyinit*
xlib::*window-meta*
xlib::*window-ctrl*
xlib::*window-shift*
xlib::*window-string*
xlib::*window-string-count*
xlib::*window-string-max*
xlib::*window-input-string-x*
xlib::*window-input-string-y*
xlib::*window-input-string-charwidth*

xlib::*window-shift-keys*
xlib::*window-control-keys*
xlib::*window-meta-keys*
xlib::*barmenu-update-value-cons*
xlib::*picmenu-no-selection*
xlib::*min-keycodes-return*
xlib::*max-keycodes-return*
xlib::*keycodes-return*
 ))
