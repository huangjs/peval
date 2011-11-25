
/* simue.c --- The called back functions for Cogen. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (cogen), (cogen goal bt-pat source-sim-file [n] [cmp-goal]
   [cmp-sim-file 'pp]) or (cogen [n] [cmp-goal] [cmp-sim-file 'pp]) in 
   Similix. But create a working box first.
*/

void CogenWhole()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(COGENID, &board4);
}

/*****************************************************************************/

/*
   The callback function of Shortcut in the working box created in CogenWhole.
*/

void CogenShortcut()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3, buffer4, buffer5, buffer6;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);
   XtVaGetValues(input4, XtNstring, &buffer4, NULL);
   XtVaGetValues(input5, XtNstring, &buffer5, NULL);
   XtVaGetValues(input6, XtNstring, &buffer6, NULL);

   CogenWholeCancel();

   strcpy(SRCNAME, buffer1);
   strcpy(FUNCNAME, buffer2);
   strcpy(SDDivision, buffer3);

   strcpy(tmpstr, "(cogen");

   strcpy(SPECTIME, buffer6);
   if (strcmp(buffer6, "") != 0)
   {
      strcat(tmpstr, " ");
      strcat(tmpstr, SPECTIME);
   }

   strcpy(CFUNCNAME, buffer5);
   if (strcmp(buffer5, "") != 0)
   {
      strcat(tmpstr, " `");
      strcat(tmpstr, CFUNCNAME);
   }

   strcpy(COMNAME, buffer4);
   if (strcmp(buffer4, "") != 0)
   {
      strcat(tmpstr, " \"");
      strcat(tmpstr, COMNAME);
      strcat(tmpstr, "\"");
      strcat(tmpstr, " 'pp");
   }

   strcat(tmpstr, ")");

   SendToSimilix(tmpstr);

   XtSetSensitive(itemE2, TRUE);
   XtSetSensitive(itemE5, TRUE);
   XtSetSensitive(itemE12, TRUE);
   XtSetSensitive(itemE13, TRUE);
   XtSetSensitive(itemC2, TRUE);
   XtSetSensitive(itemC7, TRUE);
/*
   XtSetSensitive(itemD5, TRUE);
*/
   XtSetSensitive(itemF1, TRUE);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in CogenWhole.
*/

void CogenWholeOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3, buffer4, buffer5, buffer6;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);
   XtVaGetValues(input4, XtNstring, &buffer4, NULL);
   XtVaGetValues(input5, XtNstring, &buffer5, NULL);
   XtVaGetValues(input6, XtNstring, &buffer6, NULL);

   CogenWholeCancel();

   strcpy(tmpstr, "(cogen");

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

   strcpy(SPECTIME, buffer6);
   if (strcmp(buffer6, "") != 0)
   {
      strcat(tmpstr, " ");
      strcat(tmpstr, SPECTIME);
   }

   strcpy(CFUNCNAME, buffer5);
   if (strcmp(buffer5, "") != 0)
   {
      strcat(tmpstr, " `");
      strcat(tmpstr, CFUNCNAME);
   }

   strcpy(COMNAME, buffer4);
   if (strcmp(buffer4, "") != 0)
   {
      strcat(tmpstr, " \"");
      strcat(tmpstr, COMNAME);
      strcat(tmpstr, "\"");
      strcat(tmpstr, " 'pp");
   }

   strcat(tmpstr, ")");

   SendToSimilix(tmpstr);

   XtSetSensitive(itemE2, TRUE);
   XtSetSensitive(itemE5, TRUE);
   XtSetSensitive(itemE12, TRUE);
   XtSetSensitive(itemE13, TRUE);
   XtSetSensitive(itemC2, TRUE);
   XtSetSensitive(itemC7, TRUE);
/*
   XtSetSensitive(itemD5, TRUE);
*/
   XtSetSensitive(itemF1, TRUE);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in CogenWhole.
*/

void CogenWholeCancel()
{
   XtDestroyWidget(board4);
   XtDestroyWidget(XtParent(board4));
   board4 = NULL;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in CogenWhole.
*/

void CogenWholeHelp()
{
   WholeHelp(COGENHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (writelpp (current-compiler) "temp%%%") in Similix, but 
   create a working box first.
*/

void ShowCurrentCompiler()
{
   Position x, y;
   Cardinal n = 0;
   Arg args[12];
   Widget board, label, okbtn, cancelbtn, helpbtn;


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
   XtSetArg(args[n], XtNlabel, "        Show Current Compiler Program       "); n++;
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

   XtAddCallback(okbtn, XtNcallback, ShowCurrentCompilerOK, NULL);
   XtAddCallback(cancelbtn, XtNcallback, ShowCurrentPreprocessProgCancel, board);
   XtAddCallback(helpbtn, XtNcallback, ShowCurrentCompilerHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in
   ShowCurrentCompiler.
*/

void ShowCurrentCompilerOK()
{
   int fd;
   char tmpstr[TEMPSTRINGLEN];
   FILE *file_ptr;
   ShowpageGlobals * show_globals;	/* The psuedo global structure. */
   char c;
   int filesize0 = 0, filesize1 = 0;


   file_ptr = fopen(TEMPFILENAME, "r");
   if (file_ptr != NULL)
   {
      strcpy(tmpstr, "rm ");
      strcat(tmpstr, TEMPFILENAME);
      system(tmpstr);
   }
   fclose(file_ptr);

   strcpy(tmpstr, "(writelpp (current-compiler) \"");
   strcat(tmpstr, TEMPFILENAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);

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

   file_ptr = fopen(TEMPFILENAME, "r");
   if (file_ptr != NULL)
   {
      strcpy(tmpstr, "rm ");
      strcat(tmpstr, TEMPFILENAME);
      system(tmpstr);

      textglobals_context = XStringToContext(SIMUNAME);

      show_globals = InitPsuedoGlobals();
      strcpy(tmpstr, TITLESHOW);
      CreateDisplayWidget(show_globals, tmpstr);
      ReadFile(show_globals, file_ptr);
      strcpy(show_globals->showpage_title, "The current compiler program");
      ChangeLabel(show_globals->label, show_globals->showpage_title);
      XtManageChild(show_globals->showpage);
      StartDisplay(show_globals);
   }
   fclose(file_ptr);
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in
   ShowCurrentCompiler.
*/

void ShowCurrentCompilerHelp()
{
   WholeHelp(CURRENTCOMHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (writelpp (current-compiler) file) in Similix, but create a
   dialog first.
*/

void WriteCompiler()
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
       "Write compiler --- Input the name of compiler:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, COMNAME); n++;

   dialog[12] = XtCreateManagedWidget("Com12", dialogWidgetClass,
                                      dialogShell, dialogArgs,
                                      XtNumber(dialogArgs));

   XawDialogAddButton(dialog[12], "OK", WriteCompilerOK, NULL);
   XawDialogAddButton(dialog[12], "Cancel", WriteCompilerCancel, NULL);
   XawDialogAddButton(dialog[12], "Help", WriteCompilerHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag == True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in WriteCompiler.
*/

void WriteCompilerOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[12]));
   strcpy(COMNAME, tmpstr);
   WriteCompilerCancel();
   strcpy(tmpstr, "(writelpp (current-compiler) \"");
   strcat(tmpstr, COMNAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in WriteCompiler.
*/

void WriteCompilerCancel()
{
   XtDestroyWidget(dialog[12]);
   XtDestroyWidget(XtParent(dialog[12]));
   dialog[12] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in WriteCompiler.
*/

void WriteCompilerHelp()
{
   WholeHelp(WRITECOMHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   This function is used to show compiler programs on the screen.
*/

void ShowCompiler()
{
   char tmpstr[TEMPSTRINGLEN];
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
        "Show compiler --- Input the name of compiler:"); n++;
   XtSetArg(arglist[n], XtNvalue, COMNAME); n++;

   dialog[13] = XtCreateManagedWidget("Com13", dialogWidgetClass,
				      dialogShell, 
				      arglist, XtNumber(arglist));

   XawDialogAddButton(dialog[13], "OK", ShowCompilerOK, NULL);
   XawDialogAddButton(dialog[13], "Cancel", ShowCompilerCancel, NULL);
   XawDialogAddButton(dialog[13], "Help", ShowCompilerHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in ShowCompiler.
*/

void ShowCompilerOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[13]));
   strcpy(COMNAME, tmpstr);
   ShowCompilerCancel();
   ShowComProg0();   /* in simug.c */
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in ShowCompiler.
*/

void ShowCompilerCancel()
{
   XtDestroyWidget(dialog[13]);
   XtDestroyWidget(XtParent(dialog[13]));
   dialog[13] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in ShowCompiler.
*/

void ShowCompilerHelp()
{
   WholeHelp(SHOWCOMHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   This function is used to print out compiler programs using any one of
   laserprinters or lineprinters which are available.
   (The cmd of printing a compiler program using the lineprinter is:
    pciq -Plineprintername COMNAME
    The cmd of printing a compiler program using the laserprinter is:
    lpr -Plaserprintername COMNAME)
   Create a working box first.
*/

void PrintCompiler()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(PRINTCOMID, &board15);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in PrintCompiler.
*/

void PrintCompilerOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer;
   FILE *file_ptr;


   XtVaGetValues(input1, XtNstring, &buffer, NULL);
   strcpy(COMNAME, buffer);
   XtVaGetValues(input2, XtNstring, &buffer, NULL);
   strcpy(PRTYPE, buffer);
   XtVaGetValues(input3, XtNstring, &buffer, NULL);
   strcpy(PRNAME, buffer);

   PrintCompilerCancel();

   file_ptr = fopen(COMNAME, "r");

   if (file_ptr == NULL) 
   {
      strcpy(tmpstr, "Warning! No such file or directory: ");
      strcat(tmpstr, COMNAME);
      WholeHelp(tmpstr);
      fclose(file_ptr);
      return;
   }
   fclose(file_ptr);

   if (strcmp(PRTYPE, "0") == 0)
   {
      strcpy(tmpstr, "pciq -P");
      strcat(tmpstr, PRNAME);
      strcat(tmpstr, " ");
      strcat(tmpstr, COMNAME);
      system(tmpstr);
   }
   else /* using laser printer */
   {
      strcpy(tmpstr, "lpr -P");
      strcat(tmpstr, PRNAME);
      strcat(tmpstr, " ");
      strcat(tmpstr, COMNAME);
      system(tmpstr);
   }
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in PrintCompiler.
*/

void PrintCompilerCancel()
{
   XtDestroyWidget(board15);
   XtDestroyWidget(XtParent(board15));
   board15 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in PrintCompiler.
*/

void PrintCompilerHelp()
{
   WholeHelp(PRINTCOMHELP);
}

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (comp) or (comp [cmp-goal] [cmp-file] arg-pat [n] 
   [resid-goal] [resid-sim-file 'pp]) in Similix, but create a working box
   first.
*/

void CompileWhole()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(COMPILEID, &board5);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in CompileWhole.
*/

void CompileWholeOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3, buffer4, buffer5, buffer6;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);
   XtVaGetValues(input4, XtNstring, &buffer4, NULL);
   XtVaGetValues(input5, XtNstring, &buffer5, NULL);
   XtVaGetValues(input6, XtNstring, &buffer6, NULL);

   CompileWholeCancel();

   strcpy(tmpstr, "(comp");

   strcpy(CFUNCNAME, buffer2);
   if (strcmp(buffer2, "") != 0)
   {
      strcat(tmpstr, " `");
      strcat(tmpstr, CFUNCNAME);
   }

   strcpy(COMNAME, buffer1);
   if (strcmp(buffer1, "") != 0)
   {
      strcat(tmpstr, " \"");
      strcat(tmpstr, COMNAME);
      strcat(tmpstr, "\"");
   }

   strcpy(SInput, buffer3);
   if (strcmp(buffer3, "") != 0)
   {
      strcat(tmpstr, " `(");
      strcat(tmpstr, SInput);
      strcat(tmpstr, ")");
   }

   strcpy(SPECTIME, buffer6);
   if (strcmp(buffer6, "") != 0)
   {
      strcat(tmpstr, " ");
      strcat(tmpstr, SPECTIME);
   }

   strcpy(RFUNCNAME, buffer5);
   if (strcmp(buffer5, "") != 0)
   {
      strcat(tmpstr, " `");
      strcat(tmpstr, RFUNCNAME);
   }

   strcpy(RESNAME, buffer4);
   if (strcmp(buffer4, "") != 0)
   {
      strcat(tmpstr, " \"");
      strcat(tmpstr, RESNAME);
      strcat(tmpstr, "\"");
      strcat(tmpstr, " 'pp");
   }

   strcat(tmpstr, ")");

   SendToSimilix(tmpstr);

   XtSetSensitive(itemF2, TRUE);
   XtSetSensitive(itemF7, TRUE);
   XtSetSensitive(itemD2, TRUE);
   XtSetSensitive(itemD12, TRUE);
   XtSetSensitive(itemG3, TRUE);
/*
   XtSetSensitive(itemG4, TRUE);
*/
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in CompileWhole.
*/

void CompileWholeCancel()
{
   XtDestroyWidget(board5);
   XtDestroyWidget(XtParent(board5));
   board5 = NULL;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in CompileWhole.
*/

void CompileWholeHelp()
{
   WholeHelp(COMPILEHELP);
}

/*****************************************************************************/
/*****************************************************************************/

