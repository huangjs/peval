; assembly.lsp                                           05 Apr 05

; Test data for 'assembly' data type used with Graphical Programming Server

(setq mypart (a part with name "widget" size 4 next
               (a part with name "gadget" size 3 next
                 (a part with name "grommet" size 5))))

(setq myasm (an assembly name "fromulus"
  parts (list (a part with name "widget"  size 4 weight 3.1 pretty t)
	      (a part with name "gadget"  size 3 weight 2.7 pretty nil)
	      (a part with name "grommet" size 5 weight 2.5 pretty nil)
	      (a part with name "widget"  size 1 weight 1.4 pretty t)
	      (a part with name "gadget"  size 2 weight 0.3 pretty nil)
	      (a part with name "grommet" size 7 weight 6.8 pretty t))))
