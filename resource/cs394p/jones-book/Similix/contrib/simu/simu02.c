
/* simu02.c --- The user's action functions passed by translation management. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"
#include <sys/dir.h>
#include <signal.h>

extern XawTextPosition position0;
extern XawTextPosition position01;
extern int pidchild;

int userFlag = False;   /* Flag of input widget's creation */

static char textInputTrans[]  = "Ctrl<Key>q: actionInput()";
static char textOutputTrans[] = "<Key>Return: actionOutput()";
static char textBackTrans[]   = "Ctrl<Key>q: actionBack()";

static char textSaveTrans[]   = "Ctrl<Key>x: actionSave()";

static char textBreakTrans[]  = "Ctrl<Key>c: actionBreak()";

static char Translations01[]  = "<Key>a: action01()";
static char Translations02[]  = "<Key>Return: action02()";
static char Translations[]    = "<Key>Return: action()";

static Atom wm_delete_window;

/*****************************************************************************/
/*****************************************************************************/

/*
   Use the system call kill(pidchild, SIGINT) to break the child process out.
   This function is called when the user types in Ctrl-c in the working area or
   in the small bottom box.
*/

void DoTextBreak(w, event, string, n)
Widget w;
XEvent *event;
String *string;
Cardinal *n;
{
   kill(pidchild, SIGINT);
   fprintf(stdout, "%c\n", 3);
}

/*****************************************************************************/

/*
   Save the text in the working area. This function is called when the user 
   types in Ctrl-x in the working area.
*/

void DoTextSave(w, event, string, num)
Widget w;
XEvent *event;
String *string;
Cardinal *num;
{
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;
   static Arg dialogArgs [] = 
   {
      {XtNlabel, (XtArgVal) ""},
      {XtNvalue, (XtArgVal) ""}
   };


   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0; 
   XtSetArg(dialogArgs[n], XtNlabel,
         "Save the current working area --- Input the file name:"); n++;
   dialog[16] = XtCreateManagedWidget("dialog16", dialogWidgetClass, dialogShell,
	        		   dialogArgs, XtNumber(dialogArgs));
   XtVaSetValues(dialog[16], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[16], "OK", DoTextSaveOK, NULL); 
   XawDialogAddButton(dialog[16], "Cancel", DoTextSaveCancel, NULL);
   XawDialogAddButton(dialog[16], "Help", SaveSourceHelp, NULL); 

   XtRealizeWidget(dialogShell);
   Popup(dialogShell, XtGrabNone);
/*   XtPopup(dialogShell, XtGrabNone); */
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in DoTextSave.
*/

void DoTextSaveOK()
/*
(w, event, string, n)
Widget w;
XEvent *event;
String *string;
Cardinal *n;
*/
{
   char buffer[TEMPSTRINGLEN];


   strcpy(buffer, XawDialogGetValueString(dialog[16]));

   XawAsciiSaveAsFile(textsrc, buffer);
   XtDestroyWidget(dialog[16]);
   XtDestroyWidget(XtParent(dialog[16]));
   dialog[16] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in DoTextSave.
*/

void DoTextSaveCancel()
{
   XtDestroyWidget(dialog[16]);
   XtDestroyWidget(XtParent(dialog[16]));
   dialog[16] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   Create the input widget with the type of Edit. In this widhet, receive the
   user's command line when the user presses the Enter Key, and send the 
   command to textpann widget and Similix at the same time.   
*/

void DoTextInput0(w, event, string, num)
Widget w;
XEvent *event;
String *string;
Cardinal *num;
{
   XtTranslations trans_table;
   Position x, y;
   Dimension width, height;
   Cardinal n = 0;
   Arg args[5];
   Widget shell;


   if (userFlag == True)
   {
      XtDestroyWidget(inputwidget);
      XtDestroyWidget(XtParent(inputwidget));
      inputwidget = NULL;
      userFlag = False;
   }

   n = 0;
   XtSetArg(args[0], XtNwidth, &width); n++;
   XtSetArg(args[1], XtNheight, &height); n++;
   XtGetValues(workarea, args, n);
   XtTranslateCoords(workarea, (Position) 0,
		     (Position) height, &x, &y);

   n = 0;
   XtSetArg(args[n], XtNx, x);	 n++;
   XtSetArg(args[n], XtNy, y);	 n++;
   XtSetArg(args[n], XtNtransientFor, workarea);   n++;
   XtSetArg(args[n], XtNallowShellResize, True);   n++;
   /* In order to resize the currently managed child of the Shell widget, the
      Shell must have the resource XtNallowShellResize set to True; otherwise
      it will not even ask the window manager to grant the request and the 
      Shell will not resize. */

   shell  = XtCreatePopupShell("shell", transientShellWidgetClass,
			       toplevel, args, n);
   inputwidget = XtVaCreateManagedWidget("inputwidget", asciiTextWidgetClass,
                                         shell, 
                                         XtNstring, "",
                                         XtNborderWidth, WIDGETBDWIDTH,
                                         XtNwidth, WIDGETWIDTH,
                                         XtNheight, 40,
                                         XtNtype, XawAsciiString,
                                         XtNeditType, XawtextEdit,
                                         XtNresize, XawtextResizeWidth,
                                         NULL);
   XtPopup(shell, XtGrabNone);
   userFlag = True;
   XtVaSetValues(inputwidget, XtNfont, font1Struct, NULL);

   trans_table = XtParseTranslationTable(textBackTrans);
   XtOverrideTranslations(inputwidget, trans_table);

   trans_table = XtParseTranslationTable(textBreakTrans);
   XtOverrideTranslations(inputwidget, trans_table);

   /* Register the user's action of pressing Enter, prepare for sending .*/
   trans_table = XtParseTranslationTable(textOutputTrans);
   XtOverrideTranslations(inputwidget, trans_table);
}

/*****************************************************************************/

/*
   Create the command-line window with the type of Edit. In this window,
   receive the user's command line followed by the  Enter Key, and send the 
   command to textpann widget and Similix at the same time.   
*/

void DoTextInput(w, event, string, num)
Widget w;
XEvent *event;
String *string;
Cardinal *num;
{
   XtTranslations trans_table;
   Position x, y;
   Dimension width, height;
   Cardinal n = 0;
   Arg args[5];
   Widget shell;
   SourceData * InitPsuedoData();
   SourceData *GetData();
   SourceData * text_data;
   char tmpstr[TEMPSTRINGLEN];
   Widget pane, hpane;


   if (userFlag == True)
   {
      text_data = GetData(inputwidget);
      RemoveSource(text_data->This_Source);
      XtDestroyWidget(text_data->This_Source);
      XFree(text_data);

      inputwidget = NULL;
      userFlag = False;
   }

   text_context = XStringToContext(TITLEEDITOR);
   text_data = InitPsuedoData();

   CreateCmdWindow(text_data);

   XtRealizeWidget(text_data->This_Source);
   if (XSaveContext(XtDisplay(text_data->This_Source), 
                    XtWindow(text_data->This_Source), 
                    text_context, (caddr_t) text_data) != XCSUCCESS)
   XtAppError(XtWidgetToApplicationContext(text), 
	   "TextDisplay: Could not save global data, are you out of memory?");
   XtMapWidget(text_data->This_Source);
   XtSetArg(args[0], XtNtransientFor, text_data->This_Source);
   (void) XSetWMProtocols (XtDisplay(text_data->This_Source),
	 		   XtWindow(text_data->This_Source),
	 		   &wm_delete_window, 1);
}

/*****************************************************************************/

/*
   Create the command-line window.
*/

CreateCmdWindow(text_data)
SourceData *text_data;
{
   XtTranslations trans_table;
   Dimension width, height;
   Cardinal n = 0;
   Arg args[5];
   Widget shell;

   SourceData *GetData();
   char tmpstr[TEMPSTRINGLEN];
   Widget hpane;


   n = 0;
   XtSetArg(args[n], XtNtransientFor, workarea);   n++;
   XtSetArg(args[n], XtNallowShellResize, True);   n++;

   top = XtCreatePopupShell(TITLECMD, topLevelShellWidgetClass, toplevel,
			    args, n); 

   hpane = XtCreateManagedWidget("horizPane", boxWidgetClass,
				 top, NULL, 0);

   text_data->This_Source = top;   /* pointer to root widget of SourceData. */

   strcpy(text_data->srcname, "");
   text_data->save = NULL;
   text_data->label = NULL;

   text_data->close = XtCreateManagedWidget("Close", commandWidgetClass,
			                    hpane, NULL, ZERO);
   XtVaSetValues(text_data->close, XtNfont, font0Struct, NULL);
   text_data->textwidget = XtVaCreateManagedWidget("inputwidget",
                                         asciiTextWidgetClass,
                                         hpane,
                                       /*  XtNborderWidth, SIMUONE, */
                                         XtNwidth, WIDGETWIDTH,
                                         XtNheight, 40,
                                         XtNtype, XawAsciiString,
                                         XtNeditType, XawtextEdit,
                                         XtNresize, XawtextResizeWidth,
                                         NULL);
   inputwidget = text_data->textwidget;
   userFlag = True;
   XtVaSetValues(inputwidget, XtNfont, font1Struct, NULL);

   XtAddCallback(text_data->close, XtNcallback, CloseCmdWindow, NULL);

   trans_table = XtParseTranslationTable(textBreakTrans);
   XtOverrideTranslations(inputwidget, trans_table);

   /* Register the user's action of pressing Enter, prepare for sending .*/
   trans_table = XtParseTranslationTable(textOutputTrans);
   XtOverrideTranslations(inputwidget, trans_table);


   XtRealizeWidget(text_data->This_Source);
   if (XSaveContext(XtDisplay(text_data->This_Source), 
                    XtWindow(text_data->This_Source), 
                    text_context, (caddr_t) text_data) != XCSUCCESS)
   XtAppError(XtWidgetToApplicationContext(text), 
	   "TextDisplay: Could not save global data, are you out of memory?");
   XtMapWidget(text_data->This_Source);
   XtSetArg(args[0], XtNtransientFor, text_data->This_Source);
   (void) XSetWMProtocols (XtDisplay(text_data->This_Source),
	 		   XtWindow(text_data->This_Source),
	 		   &wm_delete_window, 1);
}

/*****************************************************************************/

/*
   The callback function for the widget Close in the Command-lin window.
*/

void CloseCmdWindow()
{
   SourceData *text_data;
   SourceData *GetData();


   text_data = GetData(inputwidget);
   RemoveSource(text_data->This_Source);
   XtDestroyWidget(text_data->This_Source);
   XFree(text_data);

   inputwidget = NULL;
   userFlag = False;
}

/*****************************************************************************/

/*
   Receive the user's input of command line, and register the action of 
   destroying the input widget.
*/

void DoTextOutput(w, event, string, n)
Widget w;
XEvent *event;
String *string;
Cardinal *n;
{
   char tmpstr[TEMPSTRINGLEN];
   char tmpstr1[TEMPSTRINGLEN];
   char tmpstr2[TEMPSTRINGLEN];
   String buffer;
   XtTranslations trans_table;


   XtVaGetValues(w, XtNstring, &buffer, NULL);
   strcpy(tmpstr1, buffer);

/*
   if ((strlen(tmpstr) == 2) && (tmpstr[0] == 3) && (tmpstr[1] == 3))
   {
*/
   if (tmpstr1[0] == 3)            /* to see if it's an interrupt action */
   {
      kill(pidchild, SIGINT);
      XtVaSetValues(w, XtNstring, "", NULL);
      return;
   }

   GetPureString(tmpstr, tmpstr1);
   if (strcmp(buffer, "") != 0)
      SendToSimilix(buffer);

   if ((tmpstr[0] == '(') && (tmpstr[strlen(tmpstr) - 1] == ')'))
   {
      strcpy(tmpstr1, tmpstr);
      tmpstr1[0] = ' ';
      tmpstr1[strlen(tmpstr1) - 1] = ' ';
      GetPureString(tmpstr2, tmpstr1);
      if (strcmp(tmpstr2, "exit") == 0)
         exitFlag = True;
/*
      else if (strncmp(tmpstr, "(set-working-directory ", 23) == 0)
         GetDirCommand(tmpstr);
*/
      else if (strncmp(tmpstr2, "chdir ", 6) == 0)
         GetDirCommand(tmpstr2);
   }

   XtVaSetValues(w, XtNstring, "", NULL);
}

/*****************************************************************************/

/*
   Destroy the input widget.
*/

void DoTextBack(w, event, string, n)
Widget w;
XEvent *event;
String *string;
Cardinal *n;
{
   XtDestroyWidget(w);
   XtDestroyWidget(XtParent(w));
   w = NULL;
   userFlag = False;
}

/*****************************************************************************/

void DoUserAction01(w, event, string, n)
Widget w;
XEvent *event;
String *string;
Cardinal *n;
{
   XtTranslations trans_table;


   if (userFlag == True)
      return;
   userFlag = True;
   position0 = XawTextGetInsertionPoint(textpann);

   /* Register the user's action of pressing Enter, prepare for sending .*/
   trans_table = XtParseTranslationTable(Translations02);
   XtOverrideTranslations(w, trans_table);
}

/*****************************************************************************/
/****************** in simu*.c **********************************************/

/*
   This function is a gerneral purpose function about user's pressing Return
   while inputing in the dialog box. Corresponding to different context (marked
   by the label of dialog box), this function is dispatched to different
   successive actions. 
*/

void DoDialogReturn(w, event, params, num_params)
Widget w;
XEvent *event;
String *params;
Cardinal *num_params;
{
   Widget ww = XtParent(w);
   int i;


   for (i = 0 ; i < NUMBEROFDIALOG; i++)
      if ((ww == dialog[i]) && (ww != NULL))
         break;
   switch (i)
   {
      case  0 :  SimToSchemeOK();          break;
      case  1 :  CompileSimFileOK();       break;
      case  2 :  CompileLoadSimFileOK();   break;
      case  3 :  LoadSimFileOK();          break;
      case  4 :  LoadSchemeFileOK();       break;
      case  5 :  CreateFileOK();           break;
      case  6 :  OpenFileOK();             break;   /* in simua.c */
      case  7 :  ReloadAdtFileOK();        break;   /* in simub.c */
      case  8 :  WriteAnnProgOK();         break;
      case  9 :  ShowAnnProgOK();          break;   /* in simuc.c */
      case 10 :  WriteResProgOK();         break;
      case 11 :  ShowResProgOK();          break;   /* in simud.c */
      case 12 :  WriteCompilerOK();        break;
      case 13 :  ShowCompilerOK();         break;   /* in simue.c */

      case 14 :  BindAnnProgOK();          break;   /* in simuc.c */
      case 15 :  BindResProgOK();          break;   /* in simud.c */
      case 16 :  DoTextSaveOK();           break;   /* in simu02.c */
      default :  break;
   }
}

/*****************************************************************************/

/*
   This function is a gerneral purpose function about user's pressing Return
   while inputing in the working box. Corresponding to different context
   (marked by the name of working box), this function is dispatched to
   different successive actions. 
*/

void DoTextReturn(w, event, params, num_params)
Widget w;
XEvent *event;
String *params;
Cardinal *num_params;
{
   Widget ww = XtParent(w);


   if (ww == board1)
      FrontendWholeOK();
   else if (ww == board2)
      PreprocessWholeOK();
   else if (ww == board3)
      SpecializeWholeOK();
   else if (ww == board4)
      CogenWholeOK();
   else if (ww == board5)
      CompileWholeOK();
   else if (ww == board7)
      PrintAnnProgOK();
   else if (ww == board8)
      PrintResProgOK();
   else if (ww == board9)
      FileToListOK();
   else if (ww == board10)
      FileToItemOK();
   else if (ww == board11)
      RunOriginalProgOK();
   else if (ww == board12)
      TimingOriginalProgOK();
   else if (ww == board13)
      RunResidualProgOK();
   else if (ww == board14)
      TimingResidualProgOK();
   else if (ww == board15)
      PrintCompilerOK();
   else if (ww == board16)
      WritePreprocessProgOK();
   else if (w == flowidinput)
      ShowCurrentFlowIdProg();
}

/*****************************************************************************/

void RepositionDialog(w, event, params, num_params)
Widget w;
XEvent *event;
String *params;
Cardinal *num_params;
{
}

/*****************************************************************************/

/*
   Get the directory string from buf, and display the title of directory in a
   small label widget.
*/

GetDirCommand(buf)
char *buf;
{
   int i;   /* the counter pointer of text buf */  
   char tmpstr[TEMPSTRINGLEN];
   int n;
   Arg args[5];
   char buffer[TEMPSTRINGLEN];
   DIR *dirp;
   struct direct *dp;


   i = 0;
   GetNextString(i, tmpstr, buf);        /* "(chdir ...)" */
   i = i + strlen(tmpstr);
   while (buf[i++] != '"');
   i = i -1;                             /* until the beginning of path name */
   if (buf[i] == '"')
   {
      GetNextString(i + 1, tmpstr, buf); 
      tmpstr[strlen(tmpstr) - 1] = '\0'; /* the path name is stored in tmpstr */
   }

   if ((dirp = opendir(tmpstr)) != NULL)
   {
      chdir(tmpstr);
      strcpy(buffer, "The current working directory is: ");
      getcwd(tmpstr, TEMPSTRINGLEN);
      strcat(buffer, tmpstr);
      if (dirFlag == False)
      {
	 n = 0;
	 XtSetArg(args[n], XtNlabel, buffer); n++;
	 dir1label = XtCreateManagedWidget("dir1Label", labelWidgetClass,
					   mainboard, args, n);
	 dirFlag = True;
	 XtVaSetValues(dir1label, XtNfont, font0Struct, NULL);
      }
      else
	 XtVaSetValues(dir1label, XtNlabel, buffer, NULL);
   }
/*
   else
      beep();
*/
}

/*****************************************************************************/

/*
   Get the "pure" string from s0, then copy it to s1.
*/

GetPureString(s1, s0)
char *s1, *s0;
{
   int h, t, i, len0;
   int ch;


   len0 = strlen(s0);
   h = 0;
   t = len0 - 1;
/*
   while (((char) (ch = s0[h]) == ' ')  || (ch == '\b') || (ch == '\t') ||
	  ((char)ch == '\n'))
      h = h + 1;
   while (((char) (ch = s0[t]) == ' ')  || (ch == '\b') || (ch == '\t') ||
	  ((char)ch == '\n'))
      t = t - 1;
*/
   while (isspace((char) s0[h]))
      h = h + 1;

   while (isspace((char) s0[t]))
      t = t - 1;

   for (i = 0; i <= (t - h); i++)
      s1[i] = (char) s0[h + i];
   s1[i] = '\0';
}

/*****************************************************************************/
















































