
/* simud.c --- The called back functions for Specialize. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (similix), (similix goal arg-pat source-sim-file [n]
   [residual-goal] [resid-sim-file 'pp]) or (similix arg-pat [n] [resid-goal]
   [resid-sim-file 'pp]) in Similix, but create a working box first.
*/

void SpecializeWhole()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(SPECIALIZEID, &board3);
}

/*****************************************************************************/

/*
   The callback function of Shortcut in the working box created in SpecializeWhole.
*/

void SpecializeShortcut()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3, buffer4, buffer5, buffer6;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);
   XtVaGetValues(input4, XtNstring, &buffer4, NULL);
   XtVaGetValues(input5, XtNstring, &buffer5, NULL);
   XtVaGetValues(input6, XtNstring, &buffer6, NULL);

   SpecializeWholeCancel();

   strcpy(SRCNAME, buffer1);
   strcpy(FUNCNAME, buffer2);

   strcpy(tmpstr, "(similix");

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

   XtSetSensitive(itemC2, TRUE);
   XtSetSensitive(itemC7, TRUE);
   XtSetSensitive(itemD2, TRUE);
   XtSetSensitive(itemD12, TRUE);
/*
   XtSetSensitive(itemD5, TRUE);
*/
   XtSetSensitive(itemE5, TRUE);
   XtSetSensitive(itemE13, TRUE);
   XtSetSensitive(itemF2, TRUE);
   XtSetSensitive(itemF7, TRUE);
   XtSetSensitive(itemG3, TRUE);
/*
   XtSetSensitive(itemG4, TRUE);
*/
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in SpecializeWhole.
*/

void SpecializeWholeOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3, buffer4, buffer5, buffer6;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);
   XtVaGetValues(input4, XtNstring, &buffer4, NULL);
   XtVaGetValues(input5, XtNstring, &buffer5, NULL);
   XtVaGetValues(input6, XtNstring, &buffer6, NULL);

   SpecializeWholeCancel();

   strcpy(tmpstr, "(similix");

   strcpy(FUNCNAME, buffer2);
   if (strcmp(buffer2, "") != 0)
   {
      strcat(tmpstr, " `");
      strcat(tmpstr, FUNCNAME);
   }

   strcpy(SInput, buffer3);
   if (strcmp(buffer3, "") != 0)
   {
      strcat(tmpstr, " `(");
      strcat(tmpstr, SInput);
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

   XtSetSensitive(itemC2, TRUE);
   XtSetSensitive(itemC7, TRUE);
   XtSetSensitive(itemD2, TRUE);
   XtSetSensitive(itemD12, TRUE);
/*
   XtSetSensitive(itemD5, TRUE);
*/
   XtSetSensitive(itemE5, TRUE);
   XtSetSensitive(itemE13, TRUE);
   XtSetSensitive(itemF2, TRUE);
   XtSetSensitive(itemF7, TRUE);
   XtSetSensitive(itemG3, TRUE);
/*
   XtSetSensitive(itemG4, TRUE);
*/
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in
   SpecializeWhole.
*/

void SpecializeWholeCancel()
{
   XtDestroyWidget(board3);
   XtDestroyWidget(XtParent(board3));
   board3 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in SpecializeWhole.
*/

void SpecializeWholeHelp()
{
   WholeHelp(SPECIALIZEHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (writelpp (residual-program) "temp%%%") in Similix, but 
   create a working box first.
*/

void ShowCurrentResidualProg()
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
   XtSetArg(args[n], XtNlabel, "        Show Current Residual Program       "); n++;
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

   XtAddCallback(okbtn, XtNcallback, ShowCurrentResidualProgOK, NULL);
   XtAddCallback(cancelbtn, XtNcallback, ShowCurrentPreprocessProgCancel, board);
   XtAddCallback(helpbtn, XtNcallback, ShowCurrentResidualProgHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in 
   ShowCurrentResidualProg.
*/

void ShowCurrentResidualProgOK()
{
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

   strcpy(tmpstr, "(writelpp (residual-program) \"");
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
      strcpy(show_globals->showpage_title, "The current residual program");
      ChangeLabel(show_globals->label, show_globals->showpage_title);
      XtManageChild(show_globals->showpage);
      StartDisplay(show_globals);
   }
   fclose(file_ptr);
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in 
   ShowCurrentResidualProg.
*/

void ShowCurrentResidualProgHelp()
{
   WholeHelp(CURRENTRESHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (writelpp (residual-program) file) in Similix, but create a
   dialog first.
*/

void WriteResidualProg()
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
       "Write residual program --- Input the name of residual program:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, RESNAME); n++;

   dialog[10] = XtCreateManagedWidget("Src10", dialogWidgetClass,
                                      dialogShell, dialogArgs,
                                      XtNumber(dialogArgs));
   XtVaSetValues(dialog[10], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[10], "OK", WriteResProgOK, NULL);
   XawDialogAddButton(dialog[10], "Cancel", WriteResProgCancel, NULL);
   XawDialogAddButton(dialog[10], "Help", WriteResProgHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag == True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in WriteResidualProg.
*/

void WriteResProgOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[10]));
   strcpy(RESNAME, tmpstr);
   WriteResProgCancel();
   strcpy(tmpstr, "(writelpp (residual-program) \"");
   strcat(tmpstr, RESNAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in WriteResidualProg.
*/

void WriteResProgCancel()
{
   XtDestroyWidget(dialog[10]);
   XtDestroyWidget(XtParent(dialog[10]));
   dialog[10] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in WriteResidualProg.
*/

void WriteResProgHelp()
{
   WholeHelp(WRITERESHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   This function is used to show residual programs on the screen.
*/

void ShowResidualProg()
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
        "Show residual program --- Input the name of residual program:"); n++;
   XtSetArg(arglist[n], XtNvalue, RESNAME); n++;

   dialog[11] = XtCreateManagedWidget("Res11", dialogWidgetClass,
				      dialogShell, 
				      arglist, XtNumber(arglist));
   XtVaSetValues(dialog[11], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[11], "OK", ShowResProgOK, NULL);
   XawDialogAddButton(dialog[11], "Cancel", ShowResProgCancel, NULL);
   XawDialogAddButton(dialog[11], "Help", ShowResProgHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in ShowResidualProg.
*/

void ShowResProgOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[11]));
   strcpy(RESNAME, tmpstr);
   ShowResProgCancel();
   ShowResProg0();          /* in simug.c */
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in ShowResidualProg.
*/

void ShowResProgCancel()
{
   XtDestroyWidget(dialog[11]);
   XtDestroyWidget(XtParent(dialog[11]));
   dialog[11] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in ShowResidualProg.
*/

void ShowResProgHelp()
{
   WholeHelp(SHOWRESHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   This function is used to print out residual programs using any one of
   laserprinters or lineprinters which are available.
   (The cmd of printing a residual program using the lineprinter is:
    pciq -Plineprintername RESNAME
    The cmd of printing a residual program using the laserprinter is:
    lpr -Plaserprintername RESNAME)
   Create a working box first.
*/

void PrintResidualProg()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(PRINTRESID, &board8);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in PrintResidualProg.
*/

void PrintResProgOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer;
   FILE *file_ptr;


   XtVaGetValues(input1, XtNstring, &buffer, NULL);
   strcpy(RESNAME, buffer);
   XtVaGetValues(input2, XtNstring, &buffer, NULL);
   strcpy(PRTYPE, buffer);
   XtVaGetValues(input3, XtNstring, &buffer, NULL);
   strcpy(PRNAME, buffer);

   PrintResProgCancel();

   file_ptr = fopen(RESNAME, "r");

   if (file_ptr == NULL) 
   {
      strcpy(tmpstr, "Warning! No such file or directory: ");
      strcat(tmpstr, RESNAME);
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
      strcat(tmpstr, RESNAME);
      system(tmpstr);
   }
   else /* using laser printer */
   {
      strcpy(tmpstr, "lpr -P");
      strcat(tmpstr, PRNAME);
      strcat(tmpstr, " ");
      strcat(tmpstr, RESNAME);
      system(tmpstr);
   }
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in
   PrintResidualProg.
*/

void PrintResProgCancel()
{
   XtDestroyWidget(board8);
   XtDestroyWidget(XtParent(board8));
   board8 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in
   PrintResidualProg.
*/

void PrintResProgHelp()
{
   WholeHelp(PRINTRESHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (verbose-spec n) in Similix, where arguments n must be 0, 1,
   or 2. Create a radio first.
*/

void VerboseSpecialization()
{
   Position x, y;
   Cardinal n = 0;
   Arg args[12];
   Widget name1, name2, name3, buttonOK, buttonCancel, buttonHelp;


   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(args[n], XtNx, &x); n++;
   XtSetArg(args[n], XtNy, &y); n++;
   XtGetValues(dialogShell, args, n);

   radio2 = XtVaCreateManagedWidget("radio2", boxWidgetClass,
			 	   dialogShell,
                                   XtNx, x,
                                   XtNy, y,
                                   XtNwidth, 250,
                                   XtNheight, 100,
                                   NULL);
   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, VERBOSESPECLABEL1); n++;
   name1 = XtCreateManagedWidget("name1", labelWidgetClass, radio2, args, n);
   XtVaSetValues(name1, XtNfont, font1Struct, NULL);

   n = 0;
   if (vspecFlag == SIMUZERO)
   {
      XtSetArg(args[n], XtNstate, True); n++;
   }
   XtSetArg(args[n], XtNlabel, "0"); n++;
   vspec0 = XtCreateManagedWidget("0", toggleWidgetClass, radio2, args, n);
   XtVaSetValues(vspec0, XtNfont, font1Struct, NULL);

   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, VERBOSESPECLABEL2); n++;
   name2 = XtCreateManagedWidget("name2", labelWidgetClass, radio2, args, n);
   XtVaSetValues(name2, XtNfont, font1Struct, NULL);

   n = 0;
   if (vspecFlag == SIMUONE)
   {
      XtSetArg(args[n], XtNstate, True); n++;
   }
   XtSetArg(args[n], XtNlabel, "1"); n++;
   vspec1 = XtCreateManagedWidget("1", toggleWidgetClass, radio2, args, n);
   XtVaSetValues(vspec1, XtNfont, font1Struct, NULL);

   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, VERBOSESPECLABEL3); n++;
   name3 = XtCreateManagedWidget("name3", labelWidgetClass, radio2, args, n);
   XtVaSetValues(name3, XtNfont, font1Struct, NULL);

   n = 0;
   if (vspecFlag == SIMUTWO)
   {
      XtSetArg(args[n], XtNstate, True); n++;
   }
   XtSetArg(args[n], XtNlabel, "2"); n++;
   vspec2 = XtCreateManagedWidget("2", toggleWidgetClass, radio2, args, n);
   XtVaSetValues(vspec2, XtNfont, font1Struct, NULL);

   XtVaSetValues(vspec0, XtNradioGroup, vspec1, NULL);
   XtVaSetValues(vspec1, XtNradioGroup, vspec0, NULL);
   XtVaSetValues(vspec2, XtNradioGroup, vspec1, NULL);

   buttonOK = XtCreateManagedWidget("OK", commandWidgetClass, radio2, NULL, 0);
   XtVaSetValues(buttonOK, XtNfont, font1Struct, NULL);

   buttonCancel = XtCreateManagedWidget("Cancel", commandWidgetClass, radio2,
				        NULL, 0);
   XtVaSetValues(buttonCancel, XtNfont, font1Struct, NULL);

   buttonHelp = XtCreateManagedWidget("Help", commandWidgetClass, radio2,
				      NULL, 0);
   XtVaSetValues(buttonHelp, XtNfont, font1Struct, NULL);

   XtAddCallback(buttonOK, XtNcallback, VerboseSpecializationOK, NULL);
   XtAddCallback(buttonCancel, XtNcallback, VerboseSpecializationCancel, NULL);
   XtAddCallback(buttonHelp, XtNcallback, VerboseSpecializationHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;

}

/*****************************************************************************/

/*
   The callback function of OK in the radio created in VerboseSpecialization.
*/

void VerboseSpecializationOK()
{
   Cardinal n = 0;
   Arg args[12];
   XtPointer radiodata0, radiodata1, radiodata2;


   n = 0;
   XtSetArg(args[n], XtNradioData, &radiodata0); n++;
   XtGetValues(vspec0, args, n);
   n = 0;
   XtSetArg(args[n], XtNradioData, &radiodata1); n++;
   XtGetValues(vspec1, args, n);
   n = 0;
   XtSetArg(args[n], XtNradioData, &radiodata2); n++;
   XtGetValues(vspec2, args, n);

   if (radiodata0 == XawToggleGetCurrent(vspec0))
   {
      vspecFlag = SIMUZERO;
      SendToSimilix("(verbose-spec 0)");
   }
   else if (radiodata1 == XawToggleGetCurrent(vspec1))
   {
      vspecFlag = SIMUONE;
      SendToSimilix("(verbose-spec 1)");
   }
   else if (radiodata2 == XawToggleGetCurrent(vspec2))
   {
      vspecFlag = SIMUTWO;
      SendToSimilix("(verbose-spec 2)");
   }

   VerboseSpecializationCancel();
}

/*****************************************************************************/

/*
   The callback function of Cancel in the radio created in
   VerboseSpecialization.
*/

void VerboseSpecializationCancel()
{
   XtDestroyWidget(vspec0);
   vspec0 = NULL;
   XtDestroyWidget(vspec1);
   vspec1 = NULL;
   XtDestroyWidget(vspec2);
   vspec2 = NULL;
   XtDestroyWidget(radio2);
   radio2 = NULL;

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the radio created in VerboseSpecialization.
*/

void VerboseSpecializationHelp()
{
   WholeHelp(VERBOSESPECHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually Call (standard-memoization-on) or (standard-memoization-off) in
   Similix, but create a radio first.
*/

void Memoization()
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

   radio3 = XtVaCreateManagedWidget("radio3", boxWidgetClass,
			 	   dialogShell,
                                   XtNx, x,
                                   XtNy, y,
                                   XtNwidth, 220,
                                   XtNheight, 100,
                                   NULL);
   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, MEMOIZATIONLABEL); n++;
   name1 = XtCreateManagedWidget("name1", labelWidgetClass, radio3, args, n);
   XtVaSetValues(name1, XtNfont, font1Struct, NULL);

   n = 0;
   if (memoFlag == True)
   {
      XtSetArg(args[n], XtNstate, True); n++;
   }
   XtSetArg(args[n], XtNlabel, "On"); n++;
   memoOn = XtCreateManagedWidget("On", toggleWidgetClass, radio3, args, n);
   XtVaSetValues(memoOn, XtNfont, font1Struct, NULL);

   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, MEMOIZATIONLABEL); n++;
   name2 = XtCreateManagedWidget("name2", labelWidgetClass, radio3, args, n);
   XtVaSetValues(name2, XtNfont, font1Struct, NULL);

   n = 0;
   if (memoFlag == False)
   {
      XtSetArg(args[n], XtNstate, True); n++;
   }
   XtSetArg(args[n], XtNlabel, "Off"); n++;
   memoOff = XtCreateManagedWidget("Off", toggleWidgetClass, radio3, args, n);
   XtVaSetValues(memoOff, XtNfont, font1Struct, NULL);

   XtVaSetValues(memoOn, XtNradioGroup, memoOff, NULL);
   XtVaSetValues(memoOff, XtNradioGroup, memoOn, NULL);

   buttonOK = XtCreateManagedWidget("OK", commandWidgetClass, radio3, NULL, 0);
   XtVaSetValues(buttonOK, XtNfont, font1Struct, NULL);

   buttonCancel = XtCreateManagedWidget("Cancel", commandWidgetClass, radio3,
				        NULL, 0);
   XtVaSetValues(buttonCancel, XtNfont, font1Struct, NULL);

   buttonHelp = XtCreateManagedWidget("Help", commandWidgetClass, radio3,
				      NULL, 0);
   XtVaSetValues(buttonHelp, XtNfont, font1Struct, NULL);

   XtAddCallback(buttonOK, XtNcallback, MemoizationOK, NULL);
   XtAddCallback(buttonCancel, XtNcallback, MemoizationCancel, NULL);
   XtAddCallback(buttonHelp, XtNcallback, MemoizationHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the radio created in Memoization.
*/

void MemoizationOK()
{
   Cardinal n = 0;
   Arg args[12];
   XtPointer radiodataOn, radiodataOff;


   n = 0;
   XtSetArg(args[n], XtNradioData, &radiodataOn); n++;
   XtGetValues(memoOn, args, n);
   n = 0;
   XtSetArg(args[n], XtNradioData, &radiodataOff); n++;
   XtGetValues(memoOff, args, n);

   if (radiodataOn == XawToggleGetCurrent(memoOn))
   {
      memoFlag = True;
      SendToSimilix("(standard-memoization-on)");
   }
   else if (radiodataOff == XawToggleGetCurrent(memoOff))
   {
      memoFlag = False;
      SendToSimilix("(standard-memoization-off)");
   }

   MemoizationCancel();
}

/*****************************************************************************/

/*
   The callback function of Cancel in the radio created in Memoization.
*/

void MemoizationCancel()
{
   XtDestroyWidget(memoOn);
   memoOn = NULL;
   XtDestroyWidget(memoOff);
   memoOff = NULL;
   XtDestroyWidget(radio3);
   radio3 = NULL;

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the radio created in Memoization.
*/

void MemoizationHelp()
{
   WholeHelp(MEMOIZATIONHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (postunfold-on) or (postunfols-off) in Similix, but create a
   radio first.
*/

void PostUnfolding()
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

   radio4 = XtVaCreateManagedWidget("radio4", boxWidgetClass,
			 	   dialogShell,
                                   XtNx, x,
                                   XtNy, y,
                                   XtNwidth, 250,
                                   XtNheight, 100,
                                   NULL);
   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, POSTUNFDLABEL); n++;
   name1 = XtCreateManagedWidget("name1", labelWidgetClass, radio4, args, n);
   XtVaSetValues(name1, XtNfont, font1Struct, NULL);

   n = 0;
   if (punfdFlag == True)
   {
      XtSetArg(args[n], XtNstate, True); n++;
   }
   XtSetArg(args[n], XtNlabel, "On"); n++;
   punfdOn = XtCreateManagedWidget("On", toggleWidgetClass, radio4, args, n);
   XtVaSetValues(punfdOn, XtNfont, font1Struct, NULL);

   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, POSTUNFDLABEL); n++;
   name2 = XtCreateManagedWidget("name2", labelWidgetClass, radio4, args, n);
   XtVaSetValues(name2, XtNfont, font1Struct, NULL);

   n = 0;
   if (punfdFlag == False)
   {
      XtSetArg(args[n], XtNstate, True); n++;
   }
   XtSetArg(args[n], XtNlabel, "Off"); n++;

   punfdOff = XtCreateManagedWidget("Off", toggleWidgetClass, radio4, args, n);
   XtVaSetValues(punfdOff, XtNfont, font1Struct, NULL);

   XtVaSetValues(punfdOn, XtNradioGroup, punfdOff, NULL);
   XtVaSetValues(punfdOff, XtNradioGroup, punfdOn, NULL);

   buttonOK = XtCreateManagedWidget("OK", commandWidgetClass, radio4, NULL, 0);
   XtVaSetValues(buttonOK, XtNfont, font1Struct, NULL);

   buttonCancel = XtCreateManagedWidget("Cancel", commandWidgetClass, radio4,
				        NULL, 0);
   XtVaSetValues(buttonCancel, XtNfont, font1Struct, NULL);

   buttonHelp = XtCreateManagedWidget("Help", commandWidgetClass, radio4,
				      NULL, 0);
   XtVaSetValues(buttonHelp, XtNfont, font1Struct, NULL);

   XtAddCallback(buttonOK, XtNcallback, PostUnfoldingOK, NULL);
   XtAddCallback(buttonCancel, XtNcallback, PostUnfoldingCancel, NULL);
   XtAddCallback(buttonHelp, XtNcallback, PostUnfoldingHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the radio created in PostUnfolding.
*/

void PostUnfoldingOK()
{
   Cardinal n = 0;
   Arg args[12];
   XtPointer radiodataOn, radiodataOff;


   n = 0;
   XtSetArg(args[n], XtNradioData, &radiodataOn); n++;
   XtGetValues(punfdOn, args, n);
   n = 0;
   XtSetArg(args[n], XtNradioData, &radiodataOff); n++;
   XtGetValues(punfdOff, args, n);

   if (radiodataOn == XawToggleGetCurrent(punfdOn))
   {
      punfdFlag = True;
      SendToSimilix("(postunfold-on)");
   }
   else if (radiodataOff == XawToggleGetCurrent(punfdOff))
   {
      punfdFlag = False;
      SendToSimilix("(postunfold-off)");
   }

   PostUnfoldingCancel();
}

/*****************************************************************************/

/*
   The callback function of Cancel in the radio created in PostUnfolding.
*/

void PostUnfoldingCancel()
{
   XtDestroyWidget(punfdOn);
   punfdOn = NULL;
   XtDestroyWidget(punfdOff);
   punfdOff = NULL;
   XtDestroyWidget(radio4);
   radio4 = NULL;

   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the radio created in PostUnfolding.
*/

void PostUnfoldingHelp()
{
   WholeHelp(POSTUNFDHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (define filename (residual-program)) in Similix, but create a
   dialog first. (not used)
*/

void BindResidualProg()
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
         "Bind residual program --- Input the name of bound variable:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, VARNAME); n++;

   dialog[15] = XtCreateManagedWidget("Var15", dialogWidgetClass,
                                      dialogShell, dialogArgs,
                                      XtNumber(dialogArgs));
   XtVaSetValues(dialog[15], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[15], "OK", BindResProgOK, NULL);
   XawDialogAddButton(dialog[15], "Cancel", BindResProgCancel, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}


/*****************************************************************************/

/*
   The callback function of OK in the dialog created in BindResidualProg.
*/

void BindResProgOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[15]));
   strcpy(VARNAME, tmpstr);

   BindResProgCancel();
   strcpy(tmpstr, "(define ");
   strcat(tmpstr, VARNAME);
   strcat(tmpstr, " (residual-program))");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in BindResidualProg.
*/

void BindResProgCancel()
{
   XtDestroyWidget(dialog[15]);
   XtDestroyWidget(XtParent(dialog[15]));
   dialog[15] = NULL;
   shellFlag = False;
}

/*****************************************************************************/
/*****************************************************************************/

