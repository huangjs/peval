
/* simug0.c --- Some low-level common functions in the showing window */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

static Widget warnShell, warnDialog;

/*****************************************************************************/
/*****************************************************************************/

/*
   This function pops up a warning message.
*/

void PopupWarning(show_globals, string)
ShowpageGlobals *show_globals;
char * string;   /* the specific warning string */
{
   int n;
   Arg wargs[3];
   Dimension topX, topY;
   char buffer[BUFSIZ];
   Widget positionto;
   Boolean hasPosition;


   sprintf(buffer, "Simu Warning: %s", string);
   hasPosition = FALSE;
   if (show_globals->This_Showpage)
      positionto = show_globals->This_Showpage;
   else
      positionto = top;
   if (top)
   {
      n = 0;
      XtSetArg(wargs[n], XtNx, &topX); n++;
      XtSetArg(wargs[n], XtNy, &topY); n++;
      XtGetValues(top, wargs, n);
      hasPosition = TRUE;
   }

   if (show_globals != NULL) 
      ChangeLabel(show_globals->label, buffer);
   if (show_globals->label == NULL)
   {
      n = 0;
      if (hasPosition)
      {
         XtSetArg(wargs[n], XtNx, topX);   n++;
         XtSetArg(wargs[n], XtNy, topY);   n++;
      }
      XtSetArg(wargs[n], XtNtransientFor, top);   n++;
      XtSetArg(wargs[n], XtNallowShellResize, True);   n++;
   /* In order to resize the currently managed child of the Shell widget, the
      Shell must have the resource XtNallowShellResize set to True; otherwise
      it will not even ask the window manager to grant the request and the 
      Shell will not resize. */

      warnShell = XtCreatePopupShell("warnShell", transientShellWidgetClass, 
				     toplevel, wargs, n);
      XtSetArg(wargs[0], XtNlabel, buffer); 
      warnDialog = XtCreateManagedWidget("warnDialog", dialogWidgetClass, 
				         warnShell, wargs, 1);
      XtVaSetValues(warnDialog, XtNfont, font1Struct, NULL);

      XawDialogAddButton(warnDialog, "Dismiss", PopdownWarning, 
		         (XtPointer) warnShell);
      XtRealizeWidget(warnShell);
      Popup(warnShell, XtGrabNone);
   }
}

/*****************************************************************************/

/*
   The callback function of Dismiss in the dialog created in PopupWarning.
*/

void PopdownWarning(w, client, call)
Widget w; 
XtPointer client, call;
{
   XtPopdown((Widget)client);
   helpFlag = False;
}

/*****************************************************************************/

/*
   This function prints a warning message to stderr. (not used)
*/

void PrintWarning(show_globals, string)
ShowpageGlobals *show_globals;
char * string;  /* string - the specific warning string */
{
   char buffer[BUFSIZ];


   sprintf( buffer, "Simu Warning: %s", string);

   if (show_globals != NULL) 
      ChangeLabel(show_globals->label, buffer);

   fprintf(stderr, "%s\n", buffer);
}

/*****************************************************************************/

/*
   This Function prints an error message and exits.
*/

void PrintError(string)
char * string;  /* the specific message */
{
   fprintf(stderr, "Simu error: %s\n", string);
   exit(1);
}

/*****************************************************************************/

/*
   Assigne a file to the showpage.
*/

void ReadFile(show_globals, file)
ShowpageGlobals *show_globals; /* global structure */
FILE * file;                   /* the file pointer */
{
   Arg arglist[1];
   Cardinal num_args = 0;


   XtSetArg(arglist[num_args], XtNfile, file); num_args++;
   XtSetValues(show_globals->showpage, arglist, num_args);
}

/*****************************************************************************/

/*
   This function changes the label field of the given widget to the string 
   in str.
*/

void ChangeLabel(w, str)
Widget w;           /* the widget */
char * str;         /* the string to change the label to */
{
   Arg arglist[3];  /* an argument list */


   if (w == NULL) return;
   XtSetArg(arglist[0], XtNlabel, str);

   /* Shouldn't really have to do this. */
   XtSetArg(arglist[1], XtNwidth, 0);
   XtSetArg(arglist[2], XtNheight, 0);
   XtSetValues(w, arglist, (Cardinal) 1);
}

/*****************************************************************************/

/*
   This fuction positions the given widgets center in the following location.
   Note:  This should only be used with a popup widget that has override
          redirect set.
*/

void PositionCenter(widget, x, y, above, left, v_space, h_space)
Widget widget;       /* the widget widget to postion */
int x, y,            /* the location for the center of the widget */
    above,           /* number of pixels above center to locate this widget */
    left;            /* number of pixels left of center to locate this widget*/
int h_space, v_space;/* how close to get to the edges of the parent window */
{
   Arg wargs[2];
   int x_temp, y_temp;		    /* location of the new window. */
   int parent_height, parent_width; /* Height and width of the parent widget or
				       the root window if it has no parent. */


   x_temp = x - left - Width(widget) / 2 + BorderWidth(widget);
   y_temp = y - above -  Height(widget) / 2 + BorderWidth(widget);

   parent_height = HeightOfScreen(XtScreen(widget));
   parent_width = WidthOfScreen(XtScreen(widget));

   /* Check to make sure that all edges are within the viewable part of the
      root window, and if not then force them to be. */

   if (x_temp < h_space) 
      x_temp = v_space;
   if (y_temp < v_space)
      (y_temp = 2);

   if ( y_temp + Height(widget) + v_space > parent_height )
      y_temp = parent_height - Height(widget) - v_space; 

   if ( x_temp + Width(widget) + h_space > parent_width )
      x_temp = parent_width - Width(widget) - h_space; 

   XtSetArg(wargs[0], XtNx, x_temp); 
   XtSetArg(wargs[1], XtNy, y_temp); 
   XtSetValues(widget, wargs, 2);
}  

/*****************************************************************************/

/*
   Get the psuedo globals associated with the showpage associated with this
   widget. It returns the psuedo globals.
   Notes: toplevel and textglobals_context both are global variables.
*/

ShowpageGlobals *GetGlobals(w)
Widget w;   /* a widget in the showpage */
{
   Widget temp;
   caddr_t data;


   while ( (temp = XtParent(w)) != toplevel && (temp != NULL))
      w = temp;

   if (temp == NULL) 
      XtAppError(XtWidgetToApplicationContext(w), 
	         "Simu: Could not locate widget in tree, exiting");
   if (XFindContext(XtDisplay(w), XtWindow(w),
		    textglobals_context, &data) != XCSUCCESS)
   XtAppError(XtWidgetToApplicationContext(w), 
	      "Simu: Could not find global data, exiting");

   return((ShowpageGlobals *) data);
}
  
/*****************************************************************************/

/*
   Save the psuedo globals on the widget passed to this function, although
   GetGlobals assumes that the data is associated with the popup child of
   topBox.
   Notes: WIDGET MUST BE REALIZED. textglobals_context is a global variable.
*/

void SaveGlobals(w, globals)
Widget w;                  /* the widget to associate the data with */
ShowpageGlobals * globals; /* data to associate with this widget */
{
   if (XSaveContext(XtDisplay(w), XtWindow(w), textglobals_context,
		    (caddr_t) globals) != XCSUCCESS)
   XtAppError(XtWidgetToApplicationContext(w), 
	      "Simu: Could not save global data, are you out of memory?");
}

/*****************************************************************************/

/*
   Remove the psuedo globals from the widget passed to this function.
   Notes: WIDGET MUST BE REALIZED. textglobals_context is a global variable.
*/

void RemoveGlobals(w)
Widget w;   /* the widget to remove the data from */
{
   if (XDeleteContext(XtDisplay(w), XtWindow(w), 
		      textglobals_context) != XCSUCCESS)
   XtAppError(XtWidgetToApplicationContext(w), 
	      "Simu: Could not remove global data?");
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Find the width of a widget. It returns the width of that widget.
*/

int Width(w)
Widget w;    /* the widget */
{
   return((int) w->core.width);
}

/*****************************************************************************/

/*
   Find the height of a widget. It returns the height of that widget.
*/

int Height(w)
Widget w;    /* the widget */
{
   return((int) w->core.height);
}

/*****************************************************************************/

/*
   Find the BorderWidth of a widget. It returns the BorderWidth of that widget.
*/

int BorderWidth(w)
Widget w;    /* the widget */
{
   return((int) w->core.border_width);
}

/*****************************************************************************/

/*
   This function returns the correct popup child.
*/

char *Name(w)
Widget w;    /* the widget */
{
   return(w->core.name);
}

/*****************************************************************************/





