
/* simua0.c --- The functions for multiple text editors. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

static Atom wm_delete_window;

/*****************************************************************************/
/*****************************************************************************/

/*
   Set the environment when creating the text file.
*/

CreateSourceWindow()
{
   SourceData *text_data;	/* The psuedo data structure. */
   SourceData * InitPsuedoData();


   text_context = XStringToContext(TITLEEDITOR);
   text_data = InitPsuedoData();
   CreateSourceWidget(text_data, TITLEEDITOR, CREATEFLAG);
   StartSource(text_data);
}

/*****************************************************************************/

/*
   Set the environment when opening the text file.
*/

OpenSourceWindow()
{
   SourceData *text_data;	/* the psuedo data structure. */
   SourceData * InitPsuedoData();


   text_context = XStringToContext(TITLEEDITOR);
   text_data = InitPsuedoData();
   CreateSourceWidget(text_data, TITLEEDITOR, OPENFLAG);
   StartSource(text_data);
}

/*****************************************************************************/

/*
   Create the editor window, to create or open the text file.
*/

CreateSourceWidget(text_data, name, flag)
SourceData *text_data;	
char *name;
int flag;
{  
   Arg arglist[5];	        /* an argument list for widget creation */
   Cardinal num_args;		/* the number of arguments in the list. */
   Widget pane, hpane;	        /* widgets */
   char tmpstr[TEMPSTRINGLEN];


   num_args = (Cardinal) 0;
   XtSetArg(arglist[num_args], XtNwidth, default_width);
   num_args++; 
   XtSetArg(arglist[num_args], XtNheight, default_height);
   num_args++; 

   strcpy(tmpstr, name);
   strcat(tmpstr, SRCNAME);

   top = XtCreatePopupShell(tmpstr, topLevelShellWidgetClass, toplevel,
			    arglist, num_args); /* tmpstr --- name */

   pane = XtCreateManagedWidget("SourceTop", panedWidgetClass, top, NULL, 
			        (Cardinal) 0);

   hpane = XtCreateManagedWidget("horizPane", boxWidgetClass,
				 pane, NULL, 0);

   strcpy(text_data->srcname, SRCNAME);
   text_data->This_Source = top;   /* pointer to root widget of SourceData. */
   text_data->save = XtCreateManagedWidget("Save", commandWidgetClass,
			                   hpane, NULL, ZERO);
   XtVaSetValues(text_data->save, XtNfont, font0Struct, NULL);
   text_data->close = XtCreateManagedWidget("Close", commandWidgetClass,
			                    hpane, NULL, ZERO);
   XtVaSetValues(text_data->close, XtNfont, font0Struct, NULL);
   text_data->label = XtCreateManagedWidget("Source", labelWidgetClass,
					    hpane, NULL, (Cardinal) 0);
   strcpy(tmpstr, "The Scheme source program is: ");
   strcat(tmpstr, text_data->srcname);
   ChangeLabel(text_data->label, tmpstr);
   XtVaSetValues(text_data->label, XtNfont, font1Struct, NULL);
   if (flag == CREATEFLAG)
      text_data->textwidget = XtVaCreateManagedWidget("text",
                              asciiTextWidgetClass,
                              pane, 
                              XtNborderWidth, WIDGETBDWIDTH,
                              XtNwidth, WIDGETWIDTH,
                              XtNheight, WIDGETHEIGHT,
                              XtNtype, XawAsciiString,
                              XtNeditType, XawtextEdit,
                              XtNwrap, XawtextWrapLine,
                              XtNscrollVertical, XawtextScrollAlways,
                              NULL);
   else if (flag == OPENFLAG)
      text_data->textwidget = XtVaCreateManagedWidget("text",
                              asciiTextWidgetClass,
                              pane, 
                              XtNstring, SRCNAME,
                              XtNborderWidth, WIDGETBDWIDTH,
                              XtNwidth, WIDGETWIDTH,
                              XtNheight, WIDGETHEIGHT,
                              XtNtype, XawAsciiFile,
                              XtNeditType, XawtextEdit,
                              XtNwrap, XawtextWrapLine,
                              XtNscrollVertical, XawtextScrollAlways,
                              NULL);

   XtVaSetValues(text_data->textwidget, XtNfont, font1Struct, NULL);

   XtAddCallback(text_data->save, XtNcallback, SourceCallback,
                 (caddr_t) text_data);
   XtAddCallback(text_data->close, XtNcallback, SourceCallback,
                 (caddr_t) text_data);

   /* Get the text source object: textsrc. */
   num_args = 0;
   XtSetArg(arglist[num_args], XtNtextSource, &(text_data->textsrc)); 
   num_args++;
   XtGetValues(text_data->textwidget, arglist, num_args);
}

/*****************************************************************************/

/*
   Realize the editor window.
*/

StartSource(text_data)
SourceData *text_data;
{
   Arg arglist[5];	


   XtRealizeWidget(text_data->This_Source);
   if (XSaveContext(XtDisplay(text_data->This_Source), 
                    XtWindow(text_data->This_Source), 
                    text_context, (caddr_t) text_data) != XCSUCCESS)
   XtAppError(XtWidgetToApplicationContext(text), 
	   "TextDisplay: Could not save global data, are you out of memory?");
   XtMapWidget(text_data->This_Source);
   XtSetArg(arglist[0], XtNtransientFor, text_data->This_Source);
   (void) XSetWMProtocols (XtDisplay(text_data->This_Source),
	 		   XtWindow(text_data->This_Source),
	 		   &wm_delete_window, 1);
}

/*****************************************************************************/

/*
   Initialize the psuedo data variables.
*/

SourceData * InitPsuedoData()
{
   SourceData *text_data;


   /* Allocate the necessary memory. */
   text_data = (SourceData *) XtMalloc( (Cardinal) sizeof(SourceData));
   return(text_data);
}

/*****************************************************************************/

/*
   Get the psuedo data associated with the textwidget associated with this 
   widget.
*/

SourceData *GetData(w)
Widget w;
{
   Widget temp;
   caddr_t data;


   while ( (temp = XtParent(w)) != toplevel && (temp != NULL))
   w = temp;

   if (temp == NULL)
      XtAppError(XtWidgetToApplicationContext(w), 
	         "Simu: Could not locate widget in tree, exiting");
   if (XFindContext(XtDisplay(w), XtWindow(w),
		    text_context, &data) != XCSUCCESS)
      XtAppError(XtWidgetToApplicationContext(w), 
	         "Simu: Could not find data, exiting");

   return((SourceData *)data);
}
  
/*****************************************************************************/
/*****************************************************************************/

/*
   This is the callback function for the callback item in the editor window.
   Returns: none.
*/

void SourceCallback(w, pointer, junk)
Widget w;            /* the widget we are calling back from. */
XtPointer pointer;   /* a pointer to the psuedo data structure for this 
                        text widget. */
XtPointer junk;	     /* (call data) not used */
{
   SourceData * text_data = (SourceData *) pointer;
   String params;
   Cardinal num_params = 1;


   if (w == text_data->save)
      SaveSource(XtParent(w), NULL, NULL, NULL);
   else if (w == text_data->close)      /* Quit. */
      CloseSource(XtParent(w), NULL, NULL, NULL);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Quit the text editor.   Returns: none.
*/

CloseSource(w, event, params, num_params)
Widget w;               /* any widget. */
XEvent * event;         /* NOT USED. */
String * params;        /* NOT USED. */
Cardinal * num_params;  /* NOT USED. */
{
   SourceData *GetData();
   SourceData * text_data = GetData(w);
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;


   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   strcpy(tmpstr, "Close the current created/opened file? ");
   strcat(tmpstr, text_data->srcname);
   strcpy(SRCNAME, text_data->srcname);
   XtSetArg(dialog0Args[0], XtNlabel, tmpstr);

   dialog0 = XtCreateManagedWidget("dialog0", dialogWidgetClass, dialogShell,
	        		   dialog0Args, XtNumber(dialog0Args));
   XtVaSetValues(dialog0, XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog0, "OK", CloseSourceOK, text_data); 
   XawDialogAddButton(dialog0, "Cancel", CancelDialog, dialog0);
   XawDialogAddButton(dialog0, "Help", CloseSourceHelp, NULL);

   XtRealizeWidget(dialogShell);
   Popup(dialogShell, XtGrabNone);

/*   XtPopup(dialogShell, XtGrabNone); */
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in CloseSource.
*/

void CloseSourceOK(w, client_data, call_data)
Widget w;
XtPointer client_data;
XtPointer call_data;
{
   SourceData * text_data = (SourceData *) client_data;


   RemoveSource(text_data->This_Source);
   XtDestroyWidget(text_data->This_Source);
   XFree(text_data);
   XtDestroyWidget(dialog0);
   XtDestroyWidget(XtParent(dialog0));
   dialog0 = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in CloseSource.
*/

void CloseSourceHelp()
{
   WholeHelp(CLOSESRCHELP);
}

/*****************************************************************************/

/*
   Remove the psuedo globals from the widget passed to this function.
   Notes: WIDGET MUST BE REALIZED.
*/

RemoveSource(w)
Widget w;   /* the widget to remove the data from. */
{
  if (XDeleteContext(XtDisplay(w), XtWindow(w), text_context) != XCSUCCESS)
    XtAppError(XtWidgetToApplicationContext(w), 
	       "Simu: Could not remove data?");
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Save the file in the text editor.
*/

SaveSource(w, event, params, num_params)
Widget w;
XEvent * event;
String * params;
Cardinal * num_params;
{
   SourceData *GetData();
   SourceData * text_data = GetData(w);
   char tmpstr[TEMPSTRINGLEN];


   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   strcpy(tmpstr, "Save the current created/opened file? ");
   strcat(tmpstr, text_data->srcname);
   strcpy(SRCNAME, text_data->srcname);
   XtSetArg(dialog0Args[0], XtNlabel, tmpstr);

   dialog0 = XtCreateManagedWidget("dialog0", dialogWidgetClass, dialogShell,
	        		   dialog0Args, XtNumber(dialog0Args));
   XtVaSetValues(dialog0, XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog0, "OK", SaveSourceOK, text_data); 
   XawDialogAddButton(dialog0, "Cancel", CancelDialog, dialog0);
   XawDialogAddButton(dialog0, "Help", SaveSourceHelp, NULL); 

   XtRealizeWidget(dialogShell);
   Popup(dialogShell, XtGrabNone);

/*   XtPopup(dialogShell, XtGrabNone); */
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in SaveSource.
*/

void SaveSourceOK(w, client_data, call_data)
Widget w;
XtPointer client_data;
XtPointer call_data;
{
   SourceData * text_data = (SourceData *) client_data;


   XawAsciiSaveAsFile(text_data->textsrc, text_data->srcname);
   strcpy(SRCNAME, text_data->srcname);
   XtDestroyWidget(dialog0);
   XtDestroyWidget(XtParent(dialog0));
   dialog0 = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in SaveSource.
*/

void SaveSourceHelp()
{
   WholeHelp(SAVESRCHELP);
}

/*****************************************************************************/
/*****************************************************************************/
