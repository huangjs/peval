
/* simug1.c --- The sub-functions in the simug.c. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

static Atom wm_delete_window;

/*****************************************************************************/
/*****************************************************************************/

/*
   Create a new display.
*/

Widget CreateDisplay(file)
FILE * file;
{
   ShowpageGlobals * show_globals;	/* The psuedo global structure. */
   char tmpstr[TEMPSTRINGLEN];


   show_globals = InitPsuedoGlobals();
   CreateDisplayWidget(show_globals, TITLESHOW);
  
   if (file == NULL)
   {
      if (OpenHelpfile(show_globals) == True)
      {
	 strcpy(tmpstr, "Simu manual file is: ");
	 strcat(tmpstr, HELPFILE);
         strcpy(show_globals->showpage_title, tmpstr);
         ChangeLabel(show_globals->label, show_globals->showpage_title);
         XtManageChild(show_globals->showpage);
         StartDisplay(show_globals);
      }
   }
   else
   {
      ReadFile(show_globals, file);
      StartDisplay(show_globals);
   }
   return(show_globals->This_Showpage);
}

/*****************************************************************************/

/*
   Initialize the psuedo global variables. It returns a pointer to a new
   pseudo globals structure.
*/

ShowpageGlobals * InitPsuedoGlobals()
{
   ShowpageGlobals *show_globals;


   /* Allocate necessary memory. */
   show_globals = (ShowpageGlobals *) 
                  XtMalloc( (Cardinal) sizeof(ShowpageGlobals));
   return(show_globals);
}
  
/*****************************************************************************/

/*
   Create a new manual page widget.
*/

#define MANPAGEARGS 10

void CreateDisplayWidget(show_globals, name)
ShowpageGlobals *show_globals;  /* a new show_globals structure */
char * name;                    /* name of this shell widget instance */
{
   Arg arglist[MANPAGEARGS];	/* an argument list for widget creation */
   Cardinal num_args;		/* the number of arguments in the list */
   Widget pane, hpane;	        /* widgets */


   num_args = (Cardinal) 0;
   XtSetArg(arglist[num_args], XtNwidth, default_width);
   num_args++; 
   XtSetArg(arglist[num_args], XtNheight, default_height);
   num_args++; 

   top = XtCreatePopupShell(name, topLevelShellWidgetClass, toplevel,
			    arglist, num_args);

   show_globals->This_Showpage = top; /* pointer to root widget of Showpage. */
   num_args = 0;
   pane = XtCreateManagedWidget("Showpage_Vpane", panedWidgetClass, top, NULL, 
			        (Cardinal) 0);
   /* Create the bar. */
   hpane = XtCreateManagedWidget("horizPane", boxWidgetClass,
				 pane, NULL, (Cardinal) 0);

   show_globals->quit_entry = XtCreateManagedWidget("Close",
                              commandWidgetClass,
			      hpane, NULL, ZERO);
   XtVaSetValues(show_globals->quit_entry, XtNfont, font0Struct, NULL);

   XtAddCallback(show_globals->quit_entry, XtNcallback, 
                 OptionCallback, (caddr_t) show_globals);

   show_globals->label = XtCreateManagedWidget("SIMUNAME", labelWidgetClass,
					       hpane, NULL, (Cardinal) 0);
   XtVaSetValues(show_globals->label, XtNfont, font1Struct, NULL);

   /* Create Showpage */
   show_globals->showpage = XtCreateWidget("SHOWPAGE", scrollByLineWidgetClass,
				           pane, NULL, (Cardinal) 0);
   XtVaSetValues(show_globals->showpage, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   Start up a new showpage.
*/

void StartDisplay(show_globals)
ShowpageGlobals *show_globals;  /* the psuedo globals variable */
{
   Arg arglist[1];


   /* Start up, and change the cursor. */
   XtRealizeWidget(show_globals->This_Showpage );
   SaveGlobals(show_globals->This_Showpage, show_globals);
   XtMapWidget(show_globals->This_Showpage );
   XtSetArg(arglist[0], XtNtransientFor, show_globals->This_Showpage);

   /* Set up ICCCM delete window. */
   (void) XSetWMProtocols (XtDisplay(show_globals->This_Showpage),
			   XtWindow(show_globals->This_Showpage),
			   &wm_delete_window, 1);
}

/*****************************************************************************/

/*
   Open the helpfile. It returns False if no helpfile was found.
*/

Boolean OpenHelpfile(show_globals)
ShowpageGlobals * show_globals;  /* the psuedo globals variable */
{
   FILE * help_file_ptr;


   help_file_ptr = fopen(resources.help_file, "r");
   if (help_file_ptr == NULL )
   {
     PopupWarning(show_globals,
		  "Could not open help file, NO HELP WILL BE AVALIABLE.");
     return(FALSE);
   }
   ReadFile(show_globals, help_file_ptr);
   return(TRUE);
}

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/

/*
   This is the callback function for the callback quit_entry.
*/

void OptionCallback(w, pointer, junk)
Widget w;              /* the widget we are calling back from */
XtPointer pointer;     /* a pointer to the psuedo globals structure for this
                          showpage */
XtPointer junk;	       /* (call data) unused */
{
   ShowpageGlobals * show_globals = (ShowpageGlobals *) pointer;
   String params;
   Cardinal num_params = 1;

/*
   if ( w == show_globals->search_entry )
      PopupSearch(XtParent(w), NULL, NULL, NULL);
   else
*/
   if ( w == show_globals->quit_entry)      /* Quit. */
      Quit(XtParent(w), NULL, NULL, NULL);
}

/*************************************************************************/

/*
   This function pops up the given widget under the cursor.
*/

#define OFF_OF_TOP 25   /* How far off the top of the widget to have the 
                           initial cursor postion. */

void Popup(w, grab_kind)
Widget w;               /* the widget to popup */
XtGrabKind grab_kind;   /* the kind of grab to register */
{
   int x_root,y_root,y_pos,garbage;
   unsigned int mask;
   Window junk_window;


   XQueryPointer(XtDisplay(w), XtWindow(w), &junk_window, &junk_window,
		 &x_root, &y_root, &garbage, &garbage, &mask);

   y_pos = OFF_OF_TOP - Height(w)/2 - BorderWidth(w);
   PositionCenter(w, x_root, y_root, y_pos, 0, 2, 2);
   XtPopup(w, grab_kind);
}

/*************************************************************************/
/* Action Routines. */
/*************************************************************************/

/*
   The Action routine that switches over to the showpage or directory.
   (not used)
*/

void GotoPage(w, event, params, num_params)
Widget w;              /* any widget in the widget tree */
XEvent * event;        /* NOT USED */
String * params;       /* params, num_params - the parameters paseed to the */
Cardinal * num_params; /* action routine, can be either Showpage or Directory*/
{
   ShowpageGlobals * show_globals;
   char error_buf[BUFSIZ];
   Arg arglist[1];
   Boolean sensitive;


   if (*num_params != 1)
   {
      XtAppWarning(XtWidgetToApplicationContext(w), 
	       "Simu - GotoPage: This action routine requires one argument.");
      return;
   }

   show_globals = GetGlobals(w);
   switch (params[0][0])
   {
      default:
      sprintf(error_buf,"%s %s", "Simu - GotoPage: Unknown argument must be",
	      "either Showpage or Directory.");
      XtAppWarning(XtWidgetToApplicationContext(w), error_buf);
      return;
   }
}

/*************************************************************************/

/*
   Quit showpage.
*/

void Quit(w, event, params, num_params)
Widget w;                /* any widget */
XEvent * event;          /* NOT USED */
String * params;         /* NOT USED */
Cardinal * num_params;   /* NOT USED */
{
   ShowpageGlobals * show_globals = GetGlobals(w);
   Cardinal n = 0;
   static Arg args [] = 
   {
      {XtNlabel, (XtArgVal) ""},
   };


   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();
 
   XtSetArg(args[0], XtNlabel, "Close the displayed file? ");
   dialog0 = XtCreateManagedWidget("dialog", dialogWidgetClass, dialogShell,
	        		   args, XtNumber(args));
   XtVaSetValues(dialog0, XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog0, "OK", CloseDisplayOK, show_globals); 
   XawDialogAddButton(dialog0, "Cancel", CancelDialog, dialog0);
   XawDialogAddButton(dialog0, "Help", CloseDisplayHelp, NULL);

   XtRealizeWidget(dialogShell);
   Popup(dialogShell, XtGrabNone);
/*   XtPopup(dialogShell, XtGrabNone); */
   shellFlag = True;
}

/*************************************************************************/

/*
   The callback function of OK in the dialog created in Quit.
*/

void CloseDisplayOK(w, client_data, call_data)
Widget w;
XtPointer client_data;
XtPointer call_data;
{
   ShowpageGlobals * show_globals = (ShowpageGlobals *) client_data;


   RemoveGlobals(show_globals->This_Showpage);
   XtDestroyWidget(show_globals->This_Showpage);
   XFree(show_globals);
   XtDestroyWidget(dialog0);
   XtDestroyWidget(XtParent(dialog0));
   dialog0 = NULL;
   shellFlag = False;
}

/*************************************************************************/

/*
   The callback function of Help in the dialog created in Quit.
*/

void CloseDisplayHelp()
{
   WholeHelp(CLOSESHOWINGHELP);
}

/*************************************************************************/
/*************************************************************************/









