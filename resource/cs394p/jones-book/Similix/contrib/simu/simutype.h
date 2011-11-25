
/* simutype.h --- All type declarations are included here. */

/*****************************************************************************/
/*****************************************************************************/

/* Std system and C header files */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include <sys/stat.h>
#include <sys/file.h>
#include <errno.h>
#include <fcntl.h>

/* X include files */
#include <X11/Xatom.h>

/* X toolkit header files */
#include <X11/Intrinsic.h>
#include <X11/StringDefs.h>
#include <X11/Shell.h>
#include <X11/IntrinsicP.h>
#include <X11/cursorfont.h>
#include <X11/Xutil.h>

/* Athena Widget Set header files. */
#include <X11/Xaw/AsciiText.h>
#include <X11/Xaw/Command.h>
#include <X11/Xaw/Form.h>
#include <X11/Xaw/Box.h>
#include <X11/Xaw/Template.h>
#include <X11/Xaw/Label.h>
#include <X11/Xaw/SimpleMenu.h>
#include <X11/Xaw/MenuButton.h>
#include <X11/Xaw/Toggle.h>
#include <X11/Xaw/Scrollbar.h>
#include <X11/Xaw/Cardinals.h>
#include <X11/Xaw/Dialog.h>
#include <X11/Xaw/List.h>
#include <X11/Xaw/Paned.h>
#include <X11/Xaw/Form.h>
#include <X11/Xaw/Viewport.h>
#include <X11/Xaw/Panner.h>
#include <X11/Xaw/Tree.h>
#include <X11/Xaw/Sme.h>
#include <X11/Xaw/SmeBSB.h>
#include <X11/Xaw/SmeLine.h>

/* program specific header files. */
#include "ScrollByL.h"

/****** Toplevel and Main Board ArgLists *************************************/

static Arg toplevelArgs [] = 
{
   {XtNallowShellResize, (XtArgVal) True}
};

static Arg workareaArgs [] = 
{  
   {XtNallowShellResize, (XtArgVal) True},
   {XtNwidth, (XtArgVal) WIDGETWIDTH},
   {XtNheight, (XtArgVal) WIDGETHEIGHT}
};

static Arg mainboardArgs [] =
{
   {XtNwidth, (XtArgVal) WIDGETWIDTH},
   {XtNheight, (XtArgVal) WIDGETHEIGHT}
};

/****** Menu Buttons ArgLists ************************************************/
/*
static Arg menumgrArgs [] = 
{
   {XtNassociateChildren, (XtArgVal) True},
   {XtNstickyMenus, (XtArgVal) True},
   {XtNmenuPost, (XtArgVal) "<Btn1Down>"},
   {XtNmenuSelect, (XtArgVal) "<Btn3Down>"},
};
*/

static Arg buttonAArgs [] = 
{
   {XtNlabel, (XtArgVal) "System"},
   {XtNnumChildren, (XtArgVal) CHILDRENNUMBER},
   {XtNmenuName, (XtArgVal) "System"},
};

static Arg buttonBArgs [] = 
{
   {XtNlabel, (XtArgVal) "Frontend"},
   {XtNnumChildren, (XtArgVal) CHILDRENNUMBER},
   {XtNmenuName, (XtArgVal) "Frontend"},
};

static Arg buttonCArgs [] = 
{
   {XtNlabel, (XtArgVal) "Preprocess"},
   {XtNnumChildren, (XtArgVal) CHILDRENNUMBER},
   {XtNmenuName, (XtArgVal) "Preprocess"},
};

static Arg buttonDArgs [] = 
{
   {XtNlabel, (XtArgVal) "Specialize"},
   {XtNnumChildren, (XtArgVal) CHILDRENNUMBER},
   {XtNmenuName, (XtArgVal) "Specialize"},
};

static Arg buttonEArgs [] = 
{
   {XtNlabel, (XtArgVal) " Cogen "},
   {XtNnumChildren, (XtArgVal) CHILDRENNUMBER},
   {XtNmenuName, (XtArgVal) " Cogen "},
};

static Arg buttonFArgs [] = 
{
   {XtNlabel, (XtArgVal) "Compile"},
   {XtNnumChildren, (XtArgVal) CHILDRENNUMBER},
   {XtNmenuName, (XtArgVal) "Compile"},
};

static Arg buttonGArgs [] = 
{
   {XtNlabel, (XtArgVal) "  Run  "},
   {XtNnumChildren, (XtArgVal) CHILDRENNUMBER},
   {XtNmenuName, (XtArgVal) "  Run  "},
};

/****** Menu Pane ArgLists ***************************************************/

static Arg menupaneAArgs [] = 
{
   {XtNnumChildren, (XtArgVal) CHILDRENNUMBER}
};

static Arg menupaneBArgs [] = 
{
   {XtNnumChildren, (XtArgVal) CHILDRENNUMBER}
};

static Arg menupaneCArgs [] = 
{
  {XtNnumChildren, (XtArgVal) CHILDRENNUMBER}
};

static Arg menupaneDArgs [] = 
{
  {XtNnumChildren, (XtArgVal) CHILDRENNUMBER}
};

static Arg menupaneEArgs [] = 
{
  {XtNnumChildren, (XtArgVal) CHILDRENNUMBER}
};

static Arg menupaneFArgs [] = 
{
  {XtNnumChildren, (XtArgVal) CHILDRENNUMBER}
};

static Arg menupaneGArgs [] = 
{
  {XtNnumChildren, (XtArgVal) CHILDRENNUMBER}
};

/****** Menu Items (pane A) ArgLists *****************************************/

static Arg itemA1Args [] = 
{
   {XtNlabel, (XtArgVal) "Reset Similix"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA2Args [] = 
{
   {XtNlabel, (XtArgVal) "Sim -> scheme"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA3Args [] = 
{
   {XtNlabel, (XtArgVal) "Compile sim-file"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA4Args [] = 
{
   {XtNlabel, (XtArgVal) "Compile and load sim-file"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA5Args [] = 
{
   {XtNlabel, (XtArgVal) "Load sim-file"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA6Args [] = 
{
   {XtNlabel, (XtArgVal) "Load scheme-file"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA7Args [] = 
{
   {XtNlabel, (XtArgVal) "File -> list"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA8Args [] = 
{
   {XtNlabel, (XtArgVal) "File -> item"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA9Args [] = 
{
   {XtNlabel, (XtArgVal) "Create file"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA10Args [] = 
{
   {XtNlabel, (XtArgVal) "Text editor"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

static Arg itemA11Args [] =
{
   {XtNlabel, (XtArgVal) "Reload ADT-file"},
   {XtNmenuName, (XtArgVal) "menupaneA"},
};

/****** Menu Items (pane B) ArgLists ****************************************/

static Arg itemB1Args [] =
{
   {XtNlabel, (XtArgVal) "Frontend program"},
   {XtNmenuName, (XtArgVal) "menupaneB"},
};
/*
static Arg itemB2Args [] =
{
   {XtNlabel, (XtArgVal) "Reload ADT-file"},
   {XtNmenuName, (XtArgVal) "menupaneB"},
};
*/
/****** Menu Items (pane C) ArgLists ****************************************/

static Arg itemC1Args [] =
{
   {XtNlabel, (XtArgVal) "Preprocess program"},
   {XtNmenuName, (XtArgVal) "menupaneC"},
};

static Arg itemC2Args [] =
{
   {XtNlabel, (XtArgVal) "Write preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneC"},
};

static Arg itemC3Args [] =
{
   {XtNlabel, (XtArgVal) "Show preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneC"},
};

static Arg itemC4Args [] =
{
   {XtNlabel, (XtArgVal) "Print preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneC"},
};

static Arg itemC5Args [] =
{
   {XtNlabel, (XtArgVal) "Verbose preprocessing"},
   {XtNmenuName, (XtArgVal) "menupaneC"},
};

static Arg itemC6Args [] = 
{
   {XtNlabel, (XtArgVal) "Memoization"},
   {XtNmenuName, (XtArgVal) "menupaneC"},
};

/*
static Arg itemC6Args [] =
{
   {XtNlabel, (XtArgVal) "Bind preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneC"},
};
*/

static Arg itemC7Args [] =
{
   {XtNlabel, (XtArgVal) "Show current preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneC"},
};

/****** Menu Items (pane D) ArgLists ****************************************/

static Arg itemD1Args [] = 
{
   {XtNlabel, (XtArgVal) "Specialize program"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD2Args [] = 
{
   {XtNlabel, (XtArgVal) "Write residual program"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD3Args [] = 
{
   {XtNlabel, (XtArgVal) "Show residual program"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD4Args [] =
{
   {XtNlabel, (XtArgVal) "Print residual program"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD5Args [] =
{
   {XtNlabel, (XtArgVal) "Write preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD6Args [] =
{
   {XtNlabel, (XtArgVal) "Show preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD7Args [] =
{
   {XtNlabel, (XtArgVal) "Print preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD8Args [] = 
{
   {XtNlabel, (XtArgVal) "Post unfolding"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD9Args [] = 
{
   {XtNlabel, (XtArgVal) "Verbose specialization"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD10Args [] =
{
   {XtNlabel, (XtArgVal) "Verbose preprocessing"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD11Args [] = 
{
   {XtNlabel, (XtArgVal) "Memoization"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

static Arg itemD12Args [] = 
{
   {XtNlabel, (XtArgVal) "Show current residual program"},
   {XtNmenuName, (XtArgVal) "menupaneD"},
};

/****** Menu Items (pane E) ArgLists *****************************************/

static Arg itemE1Args [] = 
{
   {XtNlabel, (XtArgVal) "Compiler generation"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE2Args [] = 
{
   {XtNlabel, (XtArgVal) "Write compiler"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE3Args [] = 
{
   {XtNlabel, (XtArgVal) "Show compiler"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE4Args [] = 
{
   {XtNlabel, (XtArgVal) "Print compiler"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE5Args [] =
{
   {XtNlabel, (XtArgVal) "Write preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE6Args [] =
{
   {XtNlabel, (XtArgVal) "Show preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE7Args [] =
{
   {XtNlabel, (XtArgVal) "Print preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE8Args [] = 
{
   {XtNlabel, (XtArgVal) "Post unfolding"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE9Args [] = 
{
   {XtNlabel, (XtArgVal) "Verbose specialization"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE10Args [] =
{
   {XtNlabel, (XtArgVal) "Verbose preprocessing"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE11Args [] = 
{
   {XtNlabel, (XtArgVal) "Memoization"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE12Args [] = 
{
   {XtNlabel, (XtArgVal) "Show current compiler"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

static Arg itemE13Args [] = 
{
   {XtNlabel, (XtArgVal) "Show current preprocessed program"},
   {XtNmenuName, (XtArgVal) "menupaneE"},
};

/****** Menu Items (pane F) ArgLists *****************************************/

static Arg itemF1Args [] = 
{
   {XtNlabel, (XtArgVal) "Compile"},
   {XtNmenuName, (XtArgVal) "menupaneF"},
};

static Arg itemF2Args [] = 
{
   {XtNlabel, (XtArgVal) "Write residual program"},
   {XtNmenuName, (XtArgVal) "menupaneF"},
};

static Arg itemF3Args [] = 
{
   {XtNlabel, (XtArgVal) "Show residual program"},
   {XtNmenuName, (XtArgVal) "menupaneF"},
};

static Arg itemF4Args [] = 
{
   {XtNlabel, (XtArgVal) "Print residual program"},
   {XtNmenuName, (XtArgVal) "menupaneF"},
};

static Arg itemF5Args [] = 
{
   {XtNlabel, (XtArgVal) "Post unfolding"},
   {XtNmenuName, (XtArgVal) "menupaneF"},
};

static Arg itemF6Args [] = 
{
   {XtNlabel, (XtArgVal) "Verbose specialization"},
   {XtNmenuName, (XtArgVal) "menupaneF"},
};

static Arg itemF7Args [] = 
{
   {XtNlabel, (XtArgVal) "Show current residual program"},
   {XtNmenuName, (XtArgVal) "menupaneF"},
};

/****** Menu Items (pane G) ArgLists *****************************************/

static Arg itemG1Args [] = 
{
   {XtNlabel, (XtArgVal) "Run original program"},
   {XtNmenuName, (XtArgVal) "menupaneG"},
};

static Arg itemG2Args [] = 
{
   {XtNlabel, (XtArgVal) "Timing original program"},
   {XtNmenuName, (XtArgVal) "menupaneG"},
};

static Arg itemG3Args [] = 
{
   {XtNlabel, (XtArgVal) "Run residual program"},
   {XtNmenuName, (XtArgVal) "menupaneG"},
};

static Arg itemG4Args [] = 
{
   {XtNlabel, (XtArgVal) "Timing residual program"},
   {XtNmenuName, (XtArgVal) "menupaneG"},
};

/****** Text ArgLists ********************************************************/

static Arg textArgs [] = 
{
   {XtNborderWidth, (XtArgVal) WIDGETBDWIDTH},
   {XtNwidth, (XtArgVal) WIDGETWIDTH},
   {XtNheight, (XtArgVal) WIDGETHEIGHT},
   {XtNeditType, (XtArgVal) XawtextEdit},
   {XtNtype, (XtArgVal) XawAsciiFile},
   {XtNautoFill, (XtArgVal) True},
};

/****** dialog ArgLists *****************************************************/

static Arg dialogArgs [] = 
{
   {XtNlabel, (XtArgVal) ""},
   {XtNvalue, (XtArgVal) ""},
};

/****** dialog0 ArgLists *****************************************************/

static Arg dialog0Args [] = 
{
   {XtNlabel, (XtArgVal) ""},
};

/*****************************************************************************/

/* psuedo Globals that are specific to each display created. */

typedef struct _ShowpageGlobal
{
   Widget label;	       /* The label widget at the top of the page. */
   Widget quit_entry;
   char showpage_title[80];    /* the label to use for the current page. */
   char save_file[80];	       /* the name of the file to save fomatted 
				  page into. */
   char tmpfile[80];	       /* the name of the file to copy the formatted
				  page from. */
   Widget showpage;	       /* the page window (scrolled) */
   /* Things to remember when cleaning up when killing the page. */
   Widget This_Showpage;       /* a pointer to the root of this page. */
} ShowpageGlobals;

/*****************************************************************************/

/* Resource manager sets these. */

typedef struct _Text_Resources
{
   char * help_file;	       /* the name of the help file. */
} Text_Resources;

/*****************************************************************************/

typedef struct _SourceData
{
   char srcname[TEMPSTRINGLEN];
   Widget label;	        /* The label widget at the top of the page. */
   Widget save;
   Widget close;
   Widget textwidget;		/* The text window (scrolled) */
   Widget textsrc;
  /* Things to remember when cleaning up when killing source. */
  Widget This_Source;		/* A pointer to the root of this source. */
} SourceData;

/*****************************************************************************/
