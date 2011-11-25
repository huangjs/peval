
/* simuc.c --- The called back functions for Preprocess. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (preprocess!) or (preprocess! goal bt-pat source-sim-file) in
   Similix, but create a working box first.
*/

void PreprocessWhole()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(PREPROCESSID, &board2);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in PreprocessWhole.
*/

void PreprocessWholeOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);

   PreprocessWholeCancel();

   strcpy(tmpstr, "(preprocess!");

   strcpy(FUNCNAME, buffer2);
   if (strcmp(buffer2, "") != 0)
   {
      strcat(tmpstr, " `");
      strcat(tmpstr, FUNCNAME);
   }

   strcpy(SDDivision, buffer3);
   if (strcmp(buffer3, "") != 0)
   {
      strcat(tmpstr, " `(");
      strcat(tmpstr, SDDivision);
      strcat(tmpstr, ")");
   }

   strcpy(SRCNAME, buffer1);
   if (strcmp(buffer1, "") != 0)
   {
      strcat(tmpstr, " \"");
      strcat(tmpstr, SRCNAME);
      strcat(tmpstr, "\"");
   }

   strcat(tmpstr, ")");

   SendToSimilix(tmpstr);

   XtSetSensitive(itemC2, TRUE);
   XtSetSensitive(itemC7, TRUE);
/*
   XtSetSensitive(itemD5, TRUE);
*/
   XtSetSensitive(itemE5, TRUE);
   XtSetSensitive(itemE13, TRUE);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in 
   PreprocessWhole.
*/

void PreprocessWholeCancel()
{
   XtDestroyWidget(board2);
   XtDestroyWidget(XtParent(board2));
   board2 = NULL;
   shellFlag = False;


   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in PreprocessWhole.
*/

void PreprocessWholeHelp()
{
   WholeHelp(PREPROCESSHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (writelpp (showpall) "temp%%%"), (writelpp (showpallflow)
   "temp%%%"), or (displayflow ID) and (writelpp (showpallflowid) "temp%%%") 
   in Similix, but create a working box first.
*/

void ShowCurrentPreprocessProg()
{
   Position x, y;
   Cardinal n = 0;
   Arg args[12];
   Widget board, label, annbtn0, annbtn, flowallbtn0, flowallbtn, flowidlabel,
          okbtn, cancelbtn, helpbtn;


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
   XtSetArg(args[n], XtNlabel, "        Show Current Preprocessed Program Functions          "); n++;
   label = XtCreateManagedWidget("label", labelWidgetClass,
				  board, args, n);
   XtVaSetValues(label, XtNfont, font0Struct, NULL);

   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, "Show current preprocessed program                  "); n++;
   annbtn0 = XtCreateManagedWidget("annbtnlabel",
				   labelWidgetClass, board, args, n);
   XtVaSetValues(annbtn0, XtNfont, font1Struct, NULL);

   annbtn = XtCreateManagedWidget("OK",
				  commandWidgetClass, board, NULL, 0);
   XtVaSetValues(annbtn, XtNfont, font1Struct, NULL);

   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, "Show current preprocessed program with all of flows"); n++;
   flowallbtn0 = XtCreateManagedWidget("flowalllabel",
				       labelWidgetClass, board, args, n);
   XtVaSetValues(flowallbtn0, XtNfont, font1Struct, NULL);

   flowallbtn = XtCreateManagedWidget("OK",
				      commandWidgetClass, board, NULL, 0);
   XtVaSetValues(flowallbtn, XtNfont, font1Struct, NULL);

   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, "Show current preprocessed program with the flow ID:"); n++;
   flowidlabel = XtCreateManagedWidget("flowidlabel", labelWidgetClass,
				       board, args, n);
   XtVaSetValues(flowidlabel, XtNfont, font1Struct, NULL);

   n = 0;
   XtSetArg(args[n], XtNstring, FLOWID); n++;
   XtSetArg(args[n], XtNwidth, 468);	 n++;
   XtSetArg(args[n], XtNheight, 20);	 n++;
   XtSetArg(args[n], XtNborderWidth, 1); n++;
   XtSetArg(args[n], XtNtype, XawAsciiString); n++;
   XtSetArg(args[n], XtNeditType, XawtextEdit); n++;
   XtSetArg(args[n], XtNresize, XawtextResizeBoth); n++;
   flowidinput = XtCreateManagedWidget("flowidinput", asciiTextWidgetClass,
				       board, args, n);
   XtVaSetValues(flowidinput, XtNfont, font1Struct, NULL);

   okbtn = XtCreateManagedWidget("OK", commandWidgetClass, board,
				 NULL, 0);
   XtVaSetValues(okbtn, XtNfont, font1Struct, NULL);

   cancelbtn = XtCreateManagedWidget("Cancel", commandWidgetClass, board,
				     NULL, 0);
   XtVaSetValues(cancelbtn, XtNfont, font1Struct, NULL);

   helpbtn = XtCreateManagedWidget("Help", commandWidgetClass, board,
				   NULL, 0);
   XtVaSetValues(helpbtn, XtNfont, font1Struct, NULL);

   XtAddCallback(annbtn, XtNcallback, ShowCurrentAnnProg, NULL);
   XtAddCallback(flowallbtn, XtNcallback, ShowCurrentFlowAllProg, NULL);
   XtAddCallback(okbtn, XtNcallback, ShowCurrentFlowIdProg, NULL);
   XtAddCallback(cancelbtn, XtNcallback, ShowCurrentPreprocessProgCancel, board);
   XtAddCallback(helpbtn, XtNcallback, ShowCurrentPreprocessProgHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of annbtn in the working box created in 
   ShowCurrentPreprocessProg.
*/

void ShowCurrentAnnProg()
{
   char tmpstr[TEMPSTRINGLEN];
   FILE *file_ptr;


   file_ptr = fopen(TEMPFILENAME, "r");
   if (file_ptr != NULL)
   {
      strcpy(tmpstr, "rm ");
      strcat(tmpstr, TEMPFILENAME);
      system(tmpstr);
   }
   fclose(file_ptr);
   file_ptr = fopen(TEMPFILENAME1, "r");
   if (file_ptr != NULL)
   {
      strcpy(tmpstr, "rm ");
      strcat(tmpstr, TEMPFILENAME1);
      system(tmpstr);
   }
   fclose(file_ptr);

   strcpy(tmpstr, "(writelpp (showpall) \"");
   strcat(tmpstr, TEMPFILENAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);

   GenerateAndShowNroffText("The current annotation program");
}

/*****************************************************************************/

/*
   This is a common function, called by ShowCurrentAnnProg,
   ShowCurrentFlowAllProg and ShowCurrentFlowIdProg. It is used to generate a
   new file from the Similix's output which is about the dynamic data, then
   re-produce an nroff file and display it in the showing window.
*/

GenerateAndShowNroffText(title)
char *title;
{
   char tmpstr[TEMPSTRINGLEN];
   FILE *file_ptr, *file_ptr1;
   ShowpageGlobals * show_globals;	/* The psuedo global structure. */
   char c;
   int filesize0 = 0, filesize1 = 0;


   /* Make sure TEMPFILENAME can be generated completely. */
   sleep(SIMUONE);
   do 
   {
      file_ptr = fopen(TEMPFILENAME, "r");
      if (file_ptr != NULL)
      {
         c = fgetc(file_ptr);
	 filesize0 = 0;
	 while (c != EOF)
	 {
	     filesize0 = filesize0 + 1;
	     c = fgetc(file_ptr);
         }
      }
      fclose(file_ptr);
      sleep(SIMUTWO);
      file_ptr = fopen(TEMPFILENAME, "r");
      if (file_ptr != NULL)
      {
	 c = fgetc(file_ptr);
         filesize1 = 0;
         while (c != EOF)
         {
	    filesize1 = filesize1 + 1;
	    c = fgetc(file_ptr);
         }
      }
      fclose(file_ptr);
   } while ((filesize0 == 0) || (filesize1 == 0) || (filesize0 != filesize1));

   GenerateNewFile(TEMPFILENAME, TEMPFILENAME1);
   strcpy(tmpstr, "nroff -ms ");
   strcat(tmpstr, TEMPFILENAME1);
   strcat(tmpstr, " > ");
   strcat(tmpstr, TEMPFILENAME);
   system(tmpstr);

   file_ptr = fopen(TEMPFILENAME, "r");

   if (file_ptr != NULL)
   {
      file_ptr1 = fopen(TEMPFILENAME1, "r");
      if (file_ptr1 != NULL)
      {
         strcpy(tmpstr, "rm ");
         strcat(tmpstr, TEMPFILENAME1);
         system(tmpstr);
      }
      fclose(file_ptr1);

      strcpy(tmpstr, "rm ");
      strcat(tmpstr, TEMPFILENAME);
      system(tmpstr);

      textglobals_context = XStringToContext(SIMUNAME);

      show_globals = InitPsuedoGlobals();
      strcpy(tmpstr, TITLESHOW);
      CreateDisplayWidget(show_globals, tmpstr);
      ReadFile(show_globals, file_ptr);
      strcpy(show_globals->showpage_title, title);
      ChangeLabel(show_globals->label, show_globals->showpage_title);
      XtManageChild(show_globals->showpage);
      StartDisplay(show_globals);
   }
   fclose(file_ptr);
}

/*****************************************************************************/

/*
   The callback function of flowallbtn in the working box created in 
   ShowCurrentPreprocessProg.
*/

void ShowCurrentFlowAllProg()
{
   char tmpstr[TEMPSTRINGLEN];
   FILE *file_ptr;


   file_ptr = fopen(TEMPFILENAME, "r");
   if (file_ptr != NULL)
   {
      strcpy(tmpstr, "rm ");
      strcat(tmpstr, TEMPFILENAME);
      system(tmpstr);
   }
   fclose(file_ptr);
   file_ptr = fopen(TEMPFILENAME1, "r");
   if (file_ptr != NULL)
   {
      strcpy(tmpstr, "rm ");
      strcat(tmpstr, TEMPFILENAME1);
      system(tmpstr);
   }
   fclose(file_ptr);

   strcpy(tmpstr, "(writelpp (showpallflow) \"");
   strcat(tmpstr, TEMPFILENAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
   GenerateAndShowNroffText("The current annotation program with all of flows");
}

/*****************************************************************************/

/*
   The callback function of okbtn in the working box created in 
   ShowCurrentPreprocessProg.
*/

void ShowCurrentFlowIdProg()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer;
   FILE *file_ptr;


   XtVaGetValues(flowidinput, XtNstring, &buffer, NULL);
   strcpy(FLOWID, buffer); 
   strcpy(tmpstr, "(displayflow ");
   strcat(tmpstr, buffer);
   strcat(tmpstr, ")");
   SendToSimilix(tmpstr);

/*
   if (shellFlag == True)
   {
      XtDestroyWidget(flowidinput);
      XtDestroyWidget(XtParent(flowidinput));
      shellFlag = False;
      XtDestroyWidget(dialogShell);
      flowidinput = NULL;
   }
*/

   file_ptr = fopen(TEMPFILENAME, "r");
   if (file_ptr != NULL)
   {
      strcpy(tmpstr, "rm ");
      strcat(tmpstr, TEMPFILENAME);
      system(tmpstr);
   }
   fclose(file_ptr);
   file_ptr = fopen(TEMPFILENAME1, "r");
   if (file_ptr != NULL)
   {
      strcpy(tmpstr, "rm ");
      strcat(tmpstr, TEMPFILENAME1);
      system(tmpstr);
   }
   fclose(file_ptr);

   strcpy(tmpstr, "(writelpp (showpallflowid) \"");
   strcat(tmpstr, TEMPFILENAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);

   strcpy(tmpstr, "The current annotation program with the flow ID: ");
   strcat(tmpstr, FLOWID);
   GenerateAndShowNroffText(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in 
   ShowCurrentPreprocessProg.
*/

void ShowCurrentPreprocessProgCancel(w, event, string, n)
Widget w;
XEvent *event;
String *string;
Cardinal *n;
{
   Widget ww = XtParent(w);


   XtDestroyWidget(w);
   XtDestroyWidget(ww);
   XtDestroyWidget(XtParent(ww));
   w = NULL;
   ww = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in
   ShowCurrentPreprocessProg.
*/

void ShowCurrentPreprocessProgHelp()
{
   WholeHelp(CURRENTANNHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (writelpp (showpall) file), (writelpp (showpallflow) file),
   or (displayflow ID) and (writelpp (showpallflowid) file) in Similix, but
   create a working box first.
*/

void WritePreprocessProg()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(WRITEANNID, &board16);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in
   WritePreprocessProg.
*/

void WritePreprocessProgOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3, buffer4;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);
   XtVaGetValues(input4, XtNstring, &buffer4, NULL);

   WritePreprocessProgCancel();
   strcpy(ANNNAME, buffer1);
   if (strcmp(buffer1, "") != 0)
   {
      strcpy(tmpstr, "(writelpp (showpall) \"");
      strcat(tmpstr, ANNNAME);
      strcat(tmpstr, "\")");
      SendToSimilix(tmpstr);
   }

   if (strcmp(buffer2, "") != 0)
   {
      strcpy(tmpstr, "(writelpp (showpallflow) \"");
      strcat(tmpstr, buffer2);
      strcat(tmpstr, "\")");
      SendToSimilix(tmpstr);
   }

   strcpy(FLOWID, buffer3);
   if (strcmp(buffer3, "") != 0)
   {
      strcpy(tmpstr, "(displayflow ");
      strcat(tmpstr, buffer3);
      strcat(tmpstr, ")");
      SendToSimilix(tmpstr);
   }

   if (strcmp(buffer4, "") != 0)
   {
      strcpy(tmpstr, "(writelpp (showpallflowid) \"");
      strcat(tmpstr, buffer4);
      strcat(tmpstr, "\")");
      SendToSimilix(tmpstr);
   }
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in
   WritePreprocessProg.
*/

void WritePreprocessProgCancel()
{
   XtDestroyWidget(board16);
   XtDestroyWidget(XtParent(board16));
   board16 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in
    WritePreprocessProg.
*/

void WritePreprocessProgHelp()
{
   WholeHelp(WRITEANNHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (writelpp (showpall) file) in Similix, but create a dialog
   first.
*/

void WritePreprocessProg0()
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
    "Write preprocessed program --- Input the name of preprocessed program:");
   n++;
   XtSetArg(dialogArgs[n], XtNvalue, ANNNAME); n++;

   dialog[8] = XtCreateManagedWidget("Src8", dialogWidgetClass,
                                     dialogShell, dialogArgs,
                                     XtNumber(dialogArgs));
   XtVaSetValues(dialog[8], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[8], "OK", WriteAnnProgOK, NULL);
   XawDialogAddButton(dialog[8], "Cancel", WriteAnnProgCancel, NULL);
   XawDialogAddButton(dialog[8], "Help", WriteAnnProgHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in WritePreprocessProg.
*/

void WriteAnnProgOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[8]));
   strcpy(ANNNAME, tmpstr);

   WriteAnnProgCancel();

   strcpy(tmpstr, "(writelpp (showpall) \"");
   strcat(tmpstr, ANNNAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in
   WritePreprocessProg.
*/

void WriteAnnProgCancel()
{
   XtDestroyWidget(dialog[8]);
   XtDestroyWidget(XtParent(dialog[8]));
   dialog[8] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in WritePreprocessProg.
*/

void WriteAnnProgHelp()
{
   WholeHelp(WRITEANNHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   This function is used to show preprocessed programs on the screen.
*/

void ShowPreprocessProg()
{
   char tmpstr[TEMPSTRINGLEN];
   Arg arglist0[1];
   static Arg arglist [] = 
   {
      {XtNlabel, (XtArgVal) ""},
      {XtNvalue, (XtArgVal) ""},
   };
   Cardinal n = 0;


   if (exitFlag == True)
      StartSimilix();

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(arglist[n], XtNlabel,
     "Show preprocessed program --- Input the name of preprocessed program:");
   n++;
   XtSetArg(arglist[n], XtNvalue, ANNNAME); n++;

   dialog[9] = XtCreateManagedWidget("Ann9", dialogWidgetClass,
				     dialogShell, 
                                     arglist, XtNumber(arglist));
   XtVaSetValues(dialog[9], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[9], "OK", ShowAnnProgOK, NULL);
   XawDialogAddButton(dialog[9], "Cancel", ShowAnnProgCancel, NULL);
   XawDialogAddButton(dialog[9], "Help", ShowAnnProgHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in ShowPreprocessProg.
*/

void ShowAnnProgOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[9]));
   strcpy(ANNNAME, tmpstr);

   ShowAnnProgCancel();
   ShowAnnProg0();          /* in simug.c */
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in ShowPreprocessProg.
*/

void ShowAnnProgCancel()
{
   XtDestroyWidget(dialog[9]);
   XtDestroyWidget(XtParent(dialog[9]));
   dialog[9] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in ShowPreprocessProg.
*/

void ShowAnnProgHelp()
{
   WholeHelp(SHOWANNHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   This function is used to print out preprocessed programs using any one of
   laserprinters or lineprinters which are available.
   (The cmd of printing a nroff file using the lineprinter is:
    nroff -ms ANNNAME | pciq -Plineprintername -FDNROFF
    The cmd of printing a nroff file using the laserprinter is:
    format -Tlaserprintername -ms tempfile)
   Create a working box first.
*/

void PrintPreprocessProg()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(PRINTANNID, &board7);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in
   PrintPreprocessProg.
*/

void PrintAnnProgOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer;
   FILE *file_ptr;


   XtVaGetValues(input1, XtNstring, &buffer, NULL);
   strcpy(ANNNAME, buffer);
   XtVaGetValues(input2, XtNstring, &buffer, NULL);
   strcpy(PRTYPE, buffer);
   XtVaGetValues(input3, XtNstring, &buffer, NULL);
   strcpy(PRNAME, buffer);

   PrintAnnProgCancel();

   file_ptr = fopen(ANNNAME, "r");

   if (file_ptr == NULL)
   {
      strcpy(tmpstr, "Warning! No such file or directory: ");
      strcat(tmpstr, ANNNAME);
      WholeHelp(tmpstr);
      fclose(file_ptr);
      return;
   }
   fclose(file_ptr);

   if (strcmp(PRTYPE, "0") == 0)  /* using lineprinter */
   {
      strcpy(tmpstr, "nroff -ms ");
      strcat(tmpstr, ANNNAME);
      strcat(tmpstr, " | pciq -P");
      strcat(tmpstr, PRNAME);
      strcat(tmpstr, " -FDNROFF");
      system(tmpstr);
   }
   else   /* using laserprinter */
   {
      if (GenerateNewFile(ANNNAME, TEMPFILENAME1) == True)

   /* See whether ANNNAME file is a nroff file or not. If True, ANNNAME is not
      a nroff file and needs to be transformed as a nroff file. After then, a
      temporary file will be generated via ANNNAME file, the difference between
      the temporary file and ANNNAME file is that "\fI" in ANNNAME file is 
      "\fB" in the temporary file. Note: "\fI" in a file will be displayed as
      boldface on the screen, "\fB" in a file will be printed as boldface in
      the paper. The temporary file is only used to print ANNAME file using
      laserprinter. */

      {
         strcpy(tmpstr, "cp ");
         strcat(tmpstr, TEMPFILENAME1);
         strcat(tmpstr, " ");
         strcat(tmpstr, ANNNAME);
         system(tmpstr);

	 file_ptr = fopen(TEMPFILENAME1, "r");
	 if (file_ptr != NULL)
	 {
	    strcpy(tmpstr, "rm ");
	    strcat(tmpstr, TEMPFILENAME1);
	    system(tmpstr);
	 }
	 fclose(file_ptr);
      }
      GenerateFileForLaserPrn(ANNNAME, TEMPFILENAME2);

      strcpy(tmpstr, "format -T");
      strcat(tmpstr, PRNAME);
      strcat(tmpstr, " -ms ");
      strcat(tmpstr, TEMPFILENAME2);
      system(tmpstr);

      file_ptr = fopen(TEMPFILENAME2, "r");
      if (file_ptr != NULL)
      {
	 strcpy(tmpstr, "rm ");
	 strcat(tmpstr, TEMPFILENAME2);
	 system(tmpstr);
      }
      fclose(file_ptr);
   }
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in
   PrintPreprocessProg.
*/

void PrintAnnProgCancel()
{
   XtDestroyWidget(board7);
   XtDestroyWidget(XtParent(board7));
   board7 = NULL;
   shellFlag = False;


   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in
   PrintPreprocessProg.
*/

void PrintAnnProgHelp()
{
   WholeHelp(PRINTANNHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (verbose-prep-on) or ( verbose-prep-off) in Similix, but
   create a raido first.
*/

void VerbosePreprocess()
{
   Position x, y;
   Cardinal n = 0;
   Arg args[12];
   Widget name1, name2, buttonOK, buttonCancel, buttonHelp;


   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(args[n], XtNx, &x); n++;
   XtSetArg(args[n], XtNy, &y); n++;
   XtGetValues(dialogShell, args, n);

   radio1 = XtVaCreateManagedWidget("radio1", boxWidgetClass,
			 	   dialogShell,
                                   XtNx, x,
                                   XtNy, y,
                                   XtNwidth, 250,
                                   XtNheight, 100,
                                   NULL);
   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, VERBOSEPREPLABEL); n++;
   name1 = XtCreateManagedWidget("name1", labelWidgetClass, radio1, args, n);
   XtVaSetValues(name1, XtNfont, font1Struct, NULL);

   n = 0;
   if (vprepFlag == True)
   {
      XtSetArg(args[n], XtNstate, True); n++;
   }
   XtSetArg(args[n], XtNlabel, "On"); n++;
   vprepOn = XtCreateManagedWidget("On", toggleWidgetClass, radio1, args, n);
   XtVaSetValues(vprepOn, XtNfont, font1Struct, NULL);

   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, VERBOSEPREPLABEL); n++;
   name2 = XtCreateManagedWidget("name2", labelWidgetClass, radio1, args, n);
   XtVaSetValues(name2, XtNfont, font1Struct, NULL);

   n = 0;
   if (vprepFlag == False)
   {
      XtSetArg(args[n], XtNstate, True); n++;
   }
   XtSetArg(args[n], XtNlabel, "Off"); n++;
   vprepOff = XtCreateManagedWidget("Off", toggleWidgetClass, radio1, args, n);
   XtVaSetValues(vprepOff, XtNfont, font1Struct, NULL);

   XtVaSetValues(vprepOn, XtNradioGroup, vprepOff, NULL);
   XtVaSetValues(vprepOff, XtNradioGroup, vprepOn, NULL);

   buttonOK = XtCreateManagedWidget("OK", commandWidgetClass, radio1, NULL, 0);
   XtVaSetValues(buttonOK, XtNfont, font1Struct, NULL);

   buttonCancel = XtCreateManagedWidget("Cancel", commandWidgetClass, radio1,
				        NULL, 0);
   XtVaSetValues(buttonCancel, XtNfont, font1Struct, NULL);

   buttonHelp = XtCreateManagedWidget("Help", commandWidgetClass, radio1,
				      NULL, 0);
   XtVaSetValues(buttonHelp, XtNfont, font1Struct, NULL);

   XtAddCallback(buttonOK, XtNcallback, VerbosePreprocessOK, NULL);
   XtAddCallback(buttonCancel, XtNcallback, VerbosePreprocessCancel, NULL);
   XtAddCallback(buttonHelp, XtNcallback, VerbosePreprocessHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the radio created in VerbosePreprocess.
*/

void VerbosePreprocessOK()
{
   Cardinal n = 0;
   Arg args[12];
   XtPointer radiodataOn, radiodataOff;


   n = 0;
   XtSetArg(args[n], XtNradioData, &radiodataOn); n++;
   XtGetValues(vprepOn, args, n);
   n = 0;
   XtSetArg(args[n], XtNradioData, &radiodataOff); n++;
   XtGetValues(vprepOff, args, n);

   if (radiodataOn == XawToggleGetCurrent(vprepOn))
   {
      vprepFlag = True;
      SendToSimilix("(verbose-prep-on)");
   }
   else if (radiodataOff == XawToggleGetCurrent(vprepOff))
   {
      vprepFlag = False;
      SendToSimilix("(verbose-prep-off)");
   }

   VerbosePreprocessCancel();
}

/*****************************************************************************/

/*
   The callback function of Cancel in the radio created in VerbosePreprocess.
*/

void VerbosePreprocessCancel()
{
   XtDestroyWidget(vprepOn);
   vprepOn = NULL;
   XtDestroyWidget(vprepOff);
   vprepOff = NULL;
   XtDestroyWidget(radio1);
   radio1 = NULL;

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);

   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the radio created in VerbosePreprocess.
*/

void VerbosePreprocessHelp()
{
   WholeHelp(VERBOSEPREPHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (define filename (preprocessed-program)) in Similix, but 
   create a dialog first. (not used)
*/

void BindPreprocessProg()
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
      "Bind preprocessed program --- Input the name of bound variable:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, VARNAME); n++;

   dialog[14] = XtCreateManagedWidget("Var14", dialogWidgetClass,
                                      dialogShell, dialogArgs,
                                      XtNumber(dialogArgs));
   XtVaSetValues(dialog[14], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[14], "OK", BindAnnProgOK, NULL);
   XawDialogAddButton(dialog[14], "Cancel", BindAnnProgCancel, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in BindPreprocessProg.
*/

void BindAnnProgOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[14]));
   strcpy(VARNAME, tmpstr);

   BindAnnProgCancel();
   strcpy(tmpstr, "(define ");
   strcat(tmpstr, VARNAME);
   strcat(tmpstr, " (preprocessed-program))");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in BindPreprocessProg.
*/

void BindAnnProgCancel()
{
   XtDestroyWidget(dialog[14]);
   XtDestroyWidget(XtParent(dialog[14]));
   dialog[14] = NULL;
   shellFlag = False;
}

/*****************************************************************************/
/*****************************************************************************/





