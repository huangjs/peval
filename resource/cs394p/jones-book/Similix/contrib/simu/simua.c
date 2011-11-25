
/* simua.c --- The called back functions for menu items in the menu System.
               At this time, the input widget to receive user's command line
               can be activated. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

int inputFlag = False;   /* The flag of the input callback. */

/*   
   The following definitions and declarations are used for the user's command 
   line input.
*/
static char textInputTrans[]  = "Ctrl<Key>q: actionInput()";
static char textOutputTrans[] = "<Key>Return: actionOutput()";
static char textBackTrans[]   = "Ctrl<Key>q: actionBack()";
static char textSaveTrans[]   = "Ctrl<Key>x: actionSave()";

static char textBreakTrans[]  = "Ctrl<Key>c: actionBreak()";

static char Translations01[]  = "<Key>a: action01()";
static char Translations02[]  = "<Key>Return: action02()";
static char Translations[]    = "<Key>Return: action()";

/*****************************************************************************/
/*****************************************************************************/

/*
   This function builds the environment of running Similix: the working area,
   and invoke the child process "/home/hugin/mix/bin/`arch`/scm" at the 
   first time.
*/

StartSimilix()
{
   int n;
   Arg args[15];
   char buf[TEMPSTRINGLEN];
   XtTranslations trans_table;


   if (textpann == NULL)
   {
      n = 0;
      XtSetArg(args[n], XtNborderWidth, WIDGETBDWIDTH); n++;
      XtSetArg(args[n], XtNwidth, default_width); n++;
      XtSetArg(args[n], XtNheight, default_height); n++;
      XtSetArg(args[n], XtNtype, XawAsciiString); n++;
      XtSetArg(args[n], XtNeditType, XawtextAppend); n++;
      XtSetArg(args[n], XtNwrap, XawtextWrapLine); n++;
      XtSetArg(args[n], XtNscrollVertical, XawtextScrollAlways); n++;

      textpann = XtCreateManagedWidget("textpann", asciiTextWidgetClass,
                                       workarea, args, n);
      XtVaSetValues(textpann, XtNfont, font1Struct, NULL);

   /* Register the user's event action to swith on input widget. */
      trans_table = XtParseTranslationTable(textInputTrans);
      XtOverrideTranslations(textpann, trans_table);

   /* Register the user's saving action. */
      trans_table = XtParseTranslationTable(textSaveTrans);
      XtOverrideTranslations(textpann, trans_table);

   /* Register the user's breaking action. */
      trans_table = XtParseTranslationTable(textBreakTrans);
      XtOverrideTranslations(textpann, trans_table);

   /* Get the text source object: textsrc. */
      n = 0;
      XtSetArg(args[n], XtNtextSource, &textsrc); 
      n++;
      XtGetValues(textpann, args, n);
   }

   if (inputFlag == False)
   {
   /* Register an input callback. Whenever input is pending from stdin, the
      Intrinsics call the function GetFromSimilixNew. */
      XtAppAddInput(app, fileno(stdin), XtInputReadMask || XtInputExceptMask
                    || XtInputWriteMask, GetFromSimilixNew, NULL);
      inputFlag = True;
   }

   /* See whether start up Similix or not. */
   if (exitFlag == True)
   {
   /* Build the connection to the Similix process (child), and load the
      necessary environment data. */

      SITalkTo(SCM);   /* invoke "/home/hugin/mix/bin/`arch`/scm" */

      strcpy(buf, "(load \"");
      strcat(buf, SIMILIXPATH);
      strcat(buf, "/");
      strcat(buf, SIMILIXINITIALFILE);
      strcat(buf, "\")");

      fprintf(stdout, "%s\n", buf);
         /* (load "/home/ask2/lpzong/Similix/system/sim-scm.scm") */

      strcpy(buf, "(load \"");
      strcat(buf, SIMILIXPATH);
      strcat(buf, "/");
      strcat(buf, SIMUSHOWFILE);
      strcat(buf, "\")");

      fprintf(stdout, "%s\n", buf);
         /* (load "/home/ask2/lpzong/Similix/system/simu.scm") */

      strcpy(buf, "(load \"");
      strcat(buf, SIMILIXPATH);
      strcat(buf, "/");
      strcat(buf, SIMILIXSHOWALLFLOWFILE);
      strcat(buf, "\")");

      fprintf(stdout, "%s\n", buf);
         /* (load "/home/ask2/lpzong/Similix/system/abssyn0.scm") */

      strcpy(buf, "(load \"");
      strcat(buf, SIMILIXPATH);
      strcat(buf, "/");
      strcat(buf, SIMUSHOWALLFLOWFILE);
      strcat(buf, "\")");

      fprintf(stdout, "%s\n", buf);
         /* (load "/home/ask2/lpzong/Similix/system/simu0.scm") */

      strcpy(buf, "(load \"");
      strcat(buf, SIMILIXPATH);
      strcat(buf, "/");
      strcat(buf, SIMILIXSHOWFLOWIDFILE);
      strcat(buf, "\")");

      fprintf(stdout, "%s\n", buf);
         /* (load "/home/ask2/lpzong/Similix/system/abssyn1.scm") */

      strcpy(buf, "(load \"");
      strcat(buf, SIMILIXPATH);
      strcat(buf, "/");
      strcat(buf, SIMUSHOWFLOWIDFILE);
      strcat(buf, "\")");

      fprintf(stdout, "%s\n", buf);
         /* (load "/home/ask2/lpzong/Similix/system/simu1.scm") */

      exitFlag = False;
   }
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Call (reset-similix) in Similix and reset some flags which are relating to
   verbose preprocessing, post unfolding, verbose specializing and memoization.
   create a working box first.
*/

void ResetSimilix0()
{
   if (exitFlag == True)
      StartSimilix();

   SendToSimilix("(reset-similix)");
   vprepFlag = True;
   punfdFlag = True;
   vspecFlag = SIMUZERO;
   memoFlag = True;
}

void ResetSimilix()
{
   Position x, y;
   Cardinal n = 0;
   Arg args[12];
   Widget board, label, okbtn, cancelbtn, helpbtn;

   if (exitFlag == True)
      StartSimilix();

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(args[0], XtNx, &x); n++;
   XtSetArg(args[1], XtNy, &y); n++;
   XtGetValues(dialogShell, args, n);

   board = XtVaCreateManagedWidget("board", boxWidgetClass,
				   dialogShell,
				   XtNx, x,
				   XtNy, y,
				   XtNwidth, 550,
				   XtNheight, 1000,
				   XtNresize, XawtextResizeBoth,
				   NULL);

   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, "      Reset Similix       "); n++;
   label = XtCreateManagedWidget("label", labelWidgetClass,
				  board, args, n);
   XtVaSetValues(label, XtNfont, font0Struct, NULL);

   okbtn = XtCreateManagedWidget("OK", commandWidgetClass, board,
				 NULL, 0);
   XtVaSetValues(okbtn, XtNfont, font1Struct, NULL);

   cancelbtn = XtCreateManagedWidget("Cancel", commandWidgetClass, board,
				     NULL, 0);
   XtVaSetValues(cancelbtn, XtNfont, font1Struct, NULL);

   helpbtn = XtCreateManagedWidget("Help", commandWidgetClass, board,
				   NULL, 0);
   XtVaSetValues(helpbtn, XtNfont, font1Struct, NULL);

   XtAddCallback(okbtn, XtNcallback, ResetSimilixOK, NULL);
   XtAddCallback(cancelbtn, XtNcallback, ShowCurrentPreprocessProgCancel, board);
   XtAddCallback(helpbtn, XtNcallback, ResetSimilixHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in ResetSimilix.
*/

void ResetSimilixOK()
{
   if (exitFlag == True)
      StartSimilix();

   SendToSimilix("(reset-similix)");
   vprepFlag = True;
   punfdFlag = True;
   vspecFlag = SIMUZERO;
   memoFlag = True;
}

/*****************************************************************************/
/*****************************************************************************/

/*
   The callback function of OK in the working box created in ResetSimilix.
*/

void ResetSimilixHelp()
{
   WholeHelp(RESETHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (sim2scheme sim-file) in Similix, but create a dialog first.
*/

void SimToScheme()
{
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;
   Arg args[5];
   static Arg dialogArgs [] = 
   {
      {XtNlabel, (XtArgVal) ""},
      {XtNvalue, (XtArgVal) ""}
   };


   if (exitFlag == True)
      StartSimilix();

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(dialogArgs[n], XtNlabel, 
            "Sim -> scheme --- Input the name of program:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, SRCNAME); n++;

   dialog[0] = XtCreateManagedWidget("Src0", dialogWidgetClass,
                                     dialogShell, dialogArgs,
                                     XtNumber(dialogArgs));
   XtVaSetValues(dialog[0], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[0], "OK", SimToSchemeOK, NULL); 
   XawDialogAddButton(dialog[0], "Cancel", SimToSchemeCancel, NULL);
   XawDialogAddButton(dialog[0], "Help", SimToSchemeHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in SimToScheme.
*/

void SimToSchemeOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[0]));
   strcpy(SRCNAME, tmpstr);

   SimToSchemeCancel();

   strcpy(tmpstr, "(sim2scheme \"");
   strcat(tmpstr, SRCNAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in SimToScheme.
*/

void SimToSchemeCancel()
{
   XtDestroyWidget(dialog[0]);
   XtDestroyWidget(XtParent(dialog[0]));
   dialog[0] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in SimToScheme.
*/

void SimToSchemeHelp()
{
   WholeHelp(SIMTOSCHEMEHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (compile-sim-file sim-file) in Similix, but create a dialog
   first.
*/

void CompileSimFile()
{
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;
   static Arg dialogArgs [] = 
   {
      {XtNlabel, (XtArgVal) ""},
      {XtNvalue, (XtArgVal) ""}
   };


   if (exitFlag == True)
      StartSimilix();

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(dialogArgs[n], XtNlabel, 
            "Compile sim-file --- Input the name of program:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, SRCNAME); n++;

   dialog[1] = XtCreateManagedWidget("Src1", dialogWidgetClass,
                                     dialogShell, dialogArgs,
                                     XtNumber(dialogArgs));
   XtVaSetValues(dialog[1], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[1], "OK", CompileSimFileOK, NULL);
   XawDialogAddButton(dialog[1], "Cancel", CompileSimFileCancel, NULL);
   XawDialogAddButton(dialog[1], "Help", CompileSimFileHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in CompileSimFile.
*/

void CompileSimFileOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[1]));
   strcpy(SRCNAME, tmpstr);

   CompileSimFileCancel();

   strcpy(tmpstr, "(compile-sim-file \"");
   strcat(tmpstr, SRCNAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in CompileSimFile.
*/

void CompileSimFileCancel()
{
   XtDestroyWidget(dialog[1]);
   XtDestroyWidget(XtParent(dialog[1]));
   dialog[1] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in CompileSimFile.
*/

void CompileSimFileHelp()
{
   WholeHelp(COMPSIMFILEHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (compile-and-load-sim-file sim-file) in Similix, but create a
   dialog first.
*/

void CompileLoadSimFile()
{
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;
   static Arg dialogArgs [] = 
   {
      {XtNlabel, (XtArgVal) ""},
      {XtNvalue, (XtArgVal) ""}
   };


   if (exitFlag == True)
      StartSimilix();

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(dialogArgs[n], XtNlabel,
       "Compile and load sim-file --- Input the name of program:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, SRCNAME); n++;

   dialog[2] = XtCreateManagedWidget("Src2", dialogWidgetClass,
                                      dialogShell, dialogArgs,
                                      XtNumber(dialogArgs));
   XtVaSetValues(dialog[2], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[2], "OK", CompileLoadSimFileOK, NULL); 
   XawDialogAddButton(dialog[2], "Cancel", CompileLoadSimFileCancel, NULL);
   XawDialogAddButton(dialog[2], "Help", CompileLoadSimFileHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in CompileLoadSimFile.
*/

void CompileLoadSimFileOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[2]));
   strcpy(SRCNAME, tmpstr);

   CompileLoadSimFileCancel();

   strcpy(tmpstr, "(compile-and-load-sim-file \"");
   strcat(tmpstr, SRCNAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in CompileLoadSimFile.
*/

void CompileLoadSimFileCancel()
{
   XtDestroyWidget(dialog[2]);
   XtDestroyWidget(XtParent(dialog[2]));
   dialog[2] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in CompileLoadSimFile.
*/

void CompileLoadSimFileHelp()
{
   WholeHelp(COMPLOADSIMFILEHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (loads sim-file) in Similix, but create a dialog first.
*/

void LoadSimFile()
{
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;
   static Arg dialogArgs [] = 
   {
      {XtNlabel, (XtArgVal) ""},
      {XtNvalue, (XtArgVal) ""}
   };


   if (exitFlag == True)
      StartSimilix();

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(dialogArgs[n], XtNlabel,  
            "Load sim-file --- Input the name of program:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, SRCNAME); n++;

   dialog[3] = XtCreateManagedWidget("Src3", dialogWidgetClass,
                                     dialogShell, dialogArgs,
                                     XtNumber(dialogArgs));
   XtVaSetValues(dialog[3], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[3], "OK", LoadSimFileOK, NULL);
   XawDialogAddButton(dialog[3], "Cancel", LoadSimFileCancel, NULL);
   XawDialogAddButton(dialog[3], "Help", LoadSimFileHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in LoadSimFile.
*/

void LoadSimFileOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[3]));
   strcpy(SRCNAME, tmpstr);

   LoadSimFileCancel();
   strcpy(tmpstr, "(loads \"");
   strcat(tmpstr, SRCNAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in LoadSimFile.
*/

void LoadSimFileCancel()
{
   XtDestroyWidget(dialog[3]);
   XtDestroyWidget(XtParent(dialog[3]));
   dialog[3] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in LoadSimFile.
*/

void LoadSimFileHelp()
{
   WholeHelp(LOADSIMFILEHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (load scheme-file) in Similix, but create a dialog first.
*/

void LoadSchemeFile()
{
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;
   static Arg dialogArgs [] = 
   {
      {XtNlabel, (XtArgVal) ""},
      {XtNvalue, (XtArgVal) ""}
   };


   if (exitFlag == True)
      StartSimilix();

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(dialogArgs[n], XtNlabel,  
            "Load scheme-file --- Input the name of program:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, SCMNAME); n++;

   dialog[4] = XtCreateManagedWidget("Src4", dialogWidgetClass,
                                     dialogShell, dialogArgs,
                                     XtNumber(dialogArgs));
   XtVaSetValues(dialog[4], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[4], "OK", LoadSchemeFileOK, NULL);
   XawDialogAddButton(dialog[4], "Cancel", LoadSchemeFileCancel, NULL);
   XawDialogAddButton(dialog[4], "Help", LoadSchemeFileHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in LoadSchemeFile.
*/

void LoadSchemeFileOK()
{
   char tmpstr[TEMPSTRINGLEN];
   char buffer[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[4]));
   strcpy(SCMNAME, tmpstr);

   LoadSchemeFileCancel();
   strcpy(tmpstr, "(load \"");
   strcat(tmpstr, SCMNAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in LoadSchemeFile.
*/

void LoadSchemeFileCancel()
{
   XtDestroyWidget(dialog[4]);
   XtDestroyWidget(XtParent(dialog[4]));
   dialog[4] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in LoadSchemeFile.
*/

void LoadSchemeFileHelp()
{
   WholeHelp(LOADSCHEMEFILEHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (define list-name (file->list file)) in Similix, but create a
   working box first.
*/

void FileToList()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(FILETOLISTID, &board9);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in FileToList.
*/

void FileToListOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);

   FileToListCancel();

   strcpy(tmpstr, "(define ");
   strcat(tmpstr, buffer2);
   strcat(tmpstr, " (file->list \"");
   strcat(tmpstr, buffer1);
   strcat(tmpstr, "\"))");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in FileToList.
*/

void FileToListCancel()
{
   XtDestroyWidget(board9);
   XtDestroyWidget(XtParent(board9));
   board9 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in FileToList.
*/

void FileToListHelp()
{
   WholeHelp(FILETOLISTHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (define item-name (file->item file)) in Similix, but create a
   working box first.
*/

void FileToItem()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(FILETOITEMID, &board10);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in FileToItem.
*/

void FileToItemOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);

   FileToItemCancel();

   strcpy(tmpstr, "(define ");
   strcat(tmpstr, buffer2);
   strcat(tmpstr, " (file->item \"");
   strcat(tmpstr, buffer1);
   strcat(tmpstr, "\"))");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in FileToItem.
*/

void FileToItemCancel()
{
   XtDestroyWidget(board10);
   XtDestroyWidget(XtParent(board10));
   board10 = NULL;
   shellFlag = False;


   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in FileToItem.
*/

void FileToItemHelp()
{
   WholeHelp(FILETOITEMHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Create a text file in an editor window. First create a dialog.
*/

void CreateFile()
{
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;


   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0; 
   XtSetArg(dialogArgs[n], XtNlabel,
            "Create file --- Input the name of program:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, SRCNAME); n++;

   dialog[5] = XtCreateManagedWidget("Src5", dialogWidgetClass,
                                     dialogShell, dialogArgs,
               	                     XtNumber(dialogArgs));
   XtVaSetValues(dialog[5], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[5], "OK", CreateFileOK, NULL);
   XawDialogAddButton(dialog[5], "Cancel", CreateFileCancel, NULL);
   XawDialogAddButton(dialog[5], "Help", CreateFileHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in CreateFile.
*/

void CreateFileOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[5]));
   strcpy(SRCNAME, tmpstr);

   CreateFileCancel();
   CreateSourceWindow();   /* Open an editor window and create a text file. */
   textFlag = True;
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in CreateFile.
*/

void CreateFileCancel()
{
   XtDestroyWidget(dialog[5]);
   XtDestroyWidget(XtParent(dialog[5]));
   dialog[5] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in CreateFile.
*/

void CreateFileHelp()
{
   WholeHelp(CREATEFILEHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Open a text file in an editor window. First create a dialog.
*/

void OpenFile()
{
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;


   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(dialogArgs[n], XtNlabel,
            "Text editor --- Input the name of Scheme program:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, SRCNAME); n++;

   dialog[6] = XtCreateManagedWidget("Src6", dialogWidgetClass,
                                     dialogShell, dialogArgs,
	        		     XtNumber(dialogArgs));
   XtVaSetValues(dialog[6], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[6], "OK", OpenFileOK, NULL);
   XawDialogAddButton(dialog[6], "Cancel", OpenFileCancel, NULL);
   XawDialogAddButton(dialog[6], "Help", OpenFileHelp, NULL);
/*
   XGrabButton(XtDisplay(dialog[6]), AnyButton, AnyModifier,
	       XtWindow(dialog[6]), 
	       TRUE, ButtonPressMask | ButtonMotionMask | ButtonReleaseMask,
	       GrabModeAsync, GrabModeAsync,
	       XtWindow(dialog[6]), 
	       XCreateFontCursor(XtDisplay(dialog[6]), XC_crosshair));
*/
   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in OpenFile.
*/

void OpenFileOK()
{
   char tmpstr[TEMPSTRINGLEN];

   
   strcpy(tmpstr, XawDialogGetValueString(dialog[6]));
   strcpy(SRCNAME, tmpstr);

   OpenFileCancel();
   OpenSource();
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in OpenFile.
*/

void OpenFileCancel()
{
   XtDestroyWidget(dialog[6]);
   XtDestroyWidget(XtParent(dialog[6]));
   dialog[6] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in OpenFile.
*/

void OpenFileHelp()
{
   WholeHelp(OPENFILEHELP);
}

/*****************************************************************************/

/*
   This function checks whether the file to be opened exists or not, then opens
   an editor window to display the file, or displays prompt in a dialog.
*/

OpenSource()
{
   char tmpstr[TEMPSTRINGLEN];
   FILE *fp;


   if ((fp = fopen(SRCNAME, "r")) == NULL)
   { 
/*
       if (shellFlag == True)
          XtDestroyWidget(dialogShell);
       dialogShell = CreateShell();

       strcpy(tmpstr, "Warning! No such file or directory: ");
       strcat(tmpstr, SRCNAME);
       XtSetArg(dialog0Args[0], XtNlabel, tmpstr);

       dialog0 = XtCreateManagedWidget("dialog0", dialogWidgetClass,
                                       dialogShell, dialog0Args,
                                       XtNumber(dialog0Args));
       XtVaSetValues(dialog0, XtNfont, font1Struct, NULL);

       XawDialogAddButton(dialog0, "OK", CancelDialog, dialog0); 
       XtPopup(dialogShell, XtGrabNone);
       shellFlag = True;
*/
       CreateSourceWindow();
/* 
       strcpy(tmpstr, "Warning! No such file or directory: ");
       strcat(tmpstr, SRCNAME);
       WholeHelp(tmpstr);
*/
   }
   else
   {
       OpenSourceWindow();   /* Open an editor window and open a text file. */
       textFlag = True;
   }
   fclose(fp);
}

/*****************************************************************************/
/*****************************************************************************/
