
/* simu03.c --- The common callback functions for all memu items. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

/*****************************************************************************/
/*****************************************************************************/

/*
   Cancel callback function in the dialog widget.
*/

void CancelDialog(w, client_data, call_data)
Widget w;
XtPointer client_data;
XtPointer call_data;
{
   Widget ww = (Widget) client_data;


   XtDestroyWidget(ww);
   XtDestroyWidget(XtParent(ww));
   ww = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   Whenever a widget (dialog or working box) creates, call this function to
   create a shell widget.
*/

Widget CreateShell()
{
   Position x, y;
   Dimension width, height;
   Cardinal n = 0;
   Arg args[5];
   Widget shell;


   if (XtIsRealized(workarea))
   {
      XtSetArg(args[0], XtNtransientFor, workarea); n++;
   }
   n = 0;
   XtSetArg(args[0], XtNwidth, &width); n++;
   XtSetArg(args[1], XtNheight, &height); n++;
   XtGetValues(mainboard, args, n);
/*
   XtTranslateCoords(mainboard, (Position) (width / 2),
		     (Position) (height / 2), &x, &y);
*/
   XtTranslateCoords(mainboard, (Position) (width / 5),
		     (Position) (height + 5), &x, &y);
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
			       textpann, args, n);
   shellFlag = True;
   return(shell);
}

/*****************************************************************************/

/*
   This function is used the Help button in all of dialogs and working boxes.
*/

WholeHelp(name)
char *name;
{
   int n;
   Arg args[3];


   if (helpFlag == True)
      XtDestroyWidget(helpShell);

   n = 0;
   XtSetArg(args[n], XtNallowShellResize, True);   n++;
   /* In order to resize the currently managed child of the Shell widget, the
      Shell must have the resource XtNallowShellResize set to True; otherwise
      it will not even ask the window manager to grant the request and the 
      Shell will not resize. */

   helpShell = XtCreatePopupShell("helpShell", transientShellWidgetClass, 
			          toplevel, args, n);
   n = 0;
   XtSetArg(args[n], XtNlabel, name); n++;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   helpDialog = XtCreateManagedWidget("helpDialog", dialogWidgetClass, 
				      helpShell, args, n);
   XtVaSetValues(helpDialog, XtNfont, font1Struct, NULL);

   XawDialogAddButton(helpDialog, "Dismiss", PopdownWarning, 
		      (XtPointer) helpShell);
   XtRealizeWidget(helpShell);
   Popup(helpShell, XtGrabNone);
   helpFlag = True;
}

/*****************************************************************************/

/*
   This is a general function for creating the working box: creates the main
   board and three buttons of OK, Cancel and Help. According to different
   context, calls the corresponding entries making function.
*/

BuildWorkingBox(boxid, board)
int boxid;
Widget *board;
{
   Position x, y;
   Cardinal n = 0;
   Arg args[12];


   if (shellFlag == True)
      XtDestroyWidget(dialogShell);
   dialogShell = CreateShell();

   n = 0;
   XtSetArg(args[0], XtNx, &x); n++;
   XtSetArg(args[1], XtNy, &y); n++;
   XtGetValues(dialogShell, args, n);

   *board  = XtVaCreateManagedWidget("board", boxWidgetClass,
			 	     dialogShell,
                                     XtNx, x,
                                     XtNy, y,
                                     XtNwidth, 490,
                                     NULL);

   BuildLabel0(boxid, *board);
   BuildLabel1(boxid, *board);
   BuildInput1(boxid, *board);
   BuildLabel2(boxid, *board);
   BuildInput2(boxid, *board);
   BuildLabel3(boxid, *board);
   BuildInput3(boxid, *board);

   if (boxid == WRITEANNID)
   {
      BuildLabel4(boxid, *board);
      BuildInput4(boxid, *board);
   }

   if ((boxid == SPECIALIZEID) || (boxid == COGENID) || (boxid == COMPILEID))
   {
      BuildLabel4(boxid, *board);
      BuildInput4(boxid, *board);
      BuildLabel5(boxid, *board);
      BuildInput5(boxid, *board);
      BuildLabel6(boxid, *board);
      BuildInput6(boxid, *board);
   }

   button1 = XtCreateManagedWidget("OK", commandWidgetClass, *board,
				   NULL, 0);
   XtVaSetValues(button1, XtNfont, font1Struct, NULL);

   button2 = XtCreateManagedWidget("Cancel", commandWidgetClass, *board,
				   NULL, 0);
   XtVaSetValues(button2, XtNfont, font1Struct, NULL);

   button3 = XtCreateManagedWidget("Help", commandWidgetClass, *board,
				   NULL, 0);
   XtVaSetValues(button3, XtNfont, font1Struct, NULL);

   BoardCallbacks(boxid);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
   /* To limit the pointer in the special widget (but it looks impossible) */
/*
   XtGrabPointer(input1, TRUE, 0, GrabModeAsync, GrabModeAsync,
		 XtWindow(input1), 
		 None,
		 CurrentTime);
*/
/*
   XGrabButton(XtDisplay(textpann), AnyButton, AnyModifier, XtWindow(textpann), 
	       TRUE, ButtonPressMask | ButtonMotionMask | ButtonReleaseMask,
	       GrabModeAsync, GrabModeAsync,
	       XtWindow(textpann), 
	       XCreateFontCursor(XtDisplay(textpann), XC_crosshair));
*/
}

/*****************************************************************************/

/*
   This function creates the title of different working boxes.
*/

BuildLabel0(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   switch (boxid)
   {
      case FRONTENDID :
           XtSetArg(args[n], XtNlabel, "                   Frontend                   "); n++; break;
      case PREPROCESSID :
           XtSetArg(args[n], XtNlabel, "                   Preprocess                   "); n++; break;
      case SPECIALIZEID :
           XtSetArg(args[n], XtNlabel, "             Specialize                        "); n++; break;
      case COGENID :
           XtSetArg(args[n], XtNlabel, "        Compiler generation                    "); n++; break;
      case COMPILEID :
           XtSetArg(args[n], XtNlabel, "                    Compile                    "); n++; break;
      case PRINTANNID :
           XtSetArg(args[n], XtNlabel, "          Print the preprocessed program          "); n++; break;
      case PRINTRESID :
           XtSetArg(args[n], XtNlabel, "          Print the residual program           "); n++; break;
      case FILETOLISTID :
           XtSetArg(args[n], XtNlabel, "                   File -> list                "); n++; break;
      case FILETOITEMID :
           XtSetArg(args[n], XtNlabel, "                   File -> item                "); n++; break;
      case RUNORGID :
           XtSetArg(args[n], XtNlabel, "             Run original program              "); n++; break;
      case TIMINGORGID :
           XtSetArg(args[n], XtNlabel, "            Timing original program            "); n++; break;
      case RUNRESID :
           XtSetArg(args[n], XtNlabel, "             Run residual program              "); n++; break;
      case TIMINGRESID :
           XtSetArg(args[n], XtNlabel, "            Timing residual program            "); n++; break;
      case PRINTCOMID :
           XtSetArg(args[n], XtNlabel, "           Print the compiler program          "); n++; break;
      case WRITEANNID :
           XtSetArg(args[n], XtNlabel, "           Write the preprocessed program          "); n++; break;

      default: break;
   }
   label0 = XtCreateManagedWidget("label0", labelWidgetClass,
				  board, args, n);
   XtVaSetValues(label0, XtNfont, font0Struct, NULL);

   if ((boxid == SPECIALIZEID) || (boxid == COGENID))
   {
      button0 = XtCreateManagedWidget("Shortcut", commandWidgetClass, 
				      board, NULL, 0);
      XtVaSetValues(button0, XtNfont, font0Struct, NULL);
  }
}

/*****************************************************************************/

/*
   This function creates the first label of different working boxes.
*/

BuildLabel1(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   switch (boxid)
   {
      case FRONTENDID :
      case PREPROCESSID :
      case SPECIALIZEID :
      case COGENID :
           XtSetArg(args[n], XtNlabel, "    Source program name     "); n++; break;
      case COMPILEID :
           XtSetArg(args[n], XtNlabel, " *Compiler program name     "); n++; break;
      case PRINTANNID :
           XtSetArg(args[n], XtNlabel, "    Preprocessed program name"); n++; break;
      case PRINTRESID :
           XtSetArg(args[n], XtNlabel, "        Residual program name"); n++; break;
      case FILETOLISTID :
           XtSetArg(args[n], XtNlabel, "     File name             "); n++; break;
      case FILETOITEMID :
           XtSetArg(args[n], XtNlabel, "     File name             "); n++; break;
      case RUNORGID :
      case TIMINGORGID :
      case RUNRESID :
      case TIMINGRESID :
           XtSetArg(args[n], XtNlabel, "      Goal function name    "); n++; break;
      case PRINTCOMID :
           XtSetArg(args[n], XtNlabel, "       Compiler program name "); n++; break;
      case WRITEANNID :
	   XtSetArg(args[n], XtNlabel, "The preprocessed program without flow "); n++; break;
      default: break;
   }
   label1 = XtCreateManagedWidget("label1", labelWidgetClass,
				  board, args, n);
   XtVaSetValues(label1, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This function creates the first input entry of different working boxes.
*/

BuildInput1(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   if ((boxid == RUNORGID) || (boxid == TIMINGORGID))
   {
      XtSetArg(args[n], XtNstring, FUNCNAME); n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
   }
   else if ((boxid == RUNRESID) || (boxid == TIMINGRESID))
   {
      XtSetArg(args[n], XtNstring, RFUNCNAME); n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
   }
   else if ((boxid == PRINTANNID) || (boxid == WRITEANNID))
   {
      XtSetArg(args[n], XtNstring, ANNNAME); n++;
      XtSetArg(args[n], XtNwidth, 180);	 n++;
   }
   else if (boxid == PRINTRESID)
   {
      XtSetArg(args[n], XtNstring, RESNAME); n++;
      XtSetArg(args[n], XtNwidth, 180);	 n++;
   }
   else if ((boxid == FILETOLISTID) || (boxid == FILETOITEMID))
   {
      XtSetArg(args[n], XtNwidth, 200);	 n++;
   }
   else if (boxid == COMPILEID)
   {
      XtSetArg(args[n], XtNstring, COMNAME); n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
   } 
   else if (boxid == PRINTCOMID)
   {
      XtSetArg(args[n], XtNstring, COMNAME); n++;
      XtSetArg(args[n], XtNwidth, 180);	 n++;
   }
   else
   {
      XtSetArg(args[n], XtNstring, SRCNAME);  n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
   }

   XtSetArg(args[n], XtNheight, 20);	 n++;
   XtSetArg(args[n], XtNborderWidth, 1); n++;
   XtSetArg(args[n], XtNtype, XawAsciiString); n++;
   XtSetArg(args[n], XtNeditType, XawtextEdit); n++;
   XtSetArg(args[n], XtNresize, XawtextResizeWidth); n++;

   input1 = XtCreateManagedWidget("input1", asciiTextWidgetClass,
				  board, args, n);
   XtVaSetValues(input1, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This function creates the 2nd label of different working boxes.
*/

BuildLabel2(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   switch (boxid)
   {
      case FRONTENDID :
      case PREPROCESSID :
      case SPECIALIZEID :
      case COGENID :
           XtSetArg(args[n], XtNlabel, "     Goal function name     "); n++; break;
      case COMPILEID :
           XtSetArg(args[n], XtNlabel, "*Compiler goal function name"); n++; break;
      case PRINTANNID :
      case PRINTRESID :
      case PRINTCOMID :
           XtSetArg(args[n], XtNlabel, "Printer type (0: Lineprinter)"); n++; break;
      case FILETOLISTID :
           XtSetArg(args[n], XtNlabel, "     List name             "); n++; break;
      case FILETOITEMID :
           XtSetArg(args[n], XtNlabel, "     Item name             "); n++; break;
      case RUNORGID :
      case TIMINGORGID :
           XtSetArg(args[n], XtNlabel, "  All of the input value(s) "); n++; break;
      case RUNRESID :
      case TIMINGRESID :
           XtSetArg(args[n], XtNlabel, " The dynamic input value(s) "); n++; break;
      case WRITEANNID :
           XtSetArg(args[n], XtNlabel, "The preprocessed program with all of flows "); n++; break;
      default: break;
   }
   label2 = XtCreateManagedWidget("label2", labelWidgetClass,
				  board, args, n);
   XtVaSetValues(label2, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This function creates the 2nd input entry of different working boxes.
*/

BuildInput2(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   if ((boxid == PRINTANNID) || (boxid == PRINTRESID) || (boxid == PRINTCOMID))
   {
      XtSetArg(args[n], XtNstring, PRTYPE); n++;
      XtSetArg(args[n], XtNwidth, 180);	    n++;
   }
   else if ((boxid == RUNORGID) || (boxid == TIMINGORGID))
   {
      XtSetArg(args[n], XtNstring, VALNAME); n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
   }
   else if ((boxid == RUNRESID) || (boxid == TIMINGRESID))
   {
      XtSetArg(args[n], XtNstring, DInput); n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
   }
   else if ((boxid == FILETOLISTID) || (boxid == FILETOITEMID))
   {
      XtSetArg(args[n], XtNwidth, 200);	 n++;
   }
   else if (boxid == COMPILEID)
   {
      XtSetArg(args[n], XtNstring, CFUNCNAME); n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
   }
   else if (boxid == WRITEANNID)
   {
      XtSetArg(args[n], XtNwidth, 180);	 n++;
   }
   else
   {
      XtSetArg(args[n], XtNstring, FUNCNAME); n++;
      XtSetArg(args[n], XtNwidth, 200);	      n++;
   }

   XtSetArg(args[n], XtNheight, 20);	 n++;
   XtSetArg(args[n], XtNborderWidth, 1); n++;
   XtSetArg(args[n], XtNtype, XawAsciiString); n++;
   XtSetArg(args[n], XtNeditType, XawtextEdit); n++;
/* 
   XtSetArg(args[n], XtNautoFill, True); n++;
*/
   XtSetArg(args[n], XtNresize, XawtextResizeBoth); n++;

   input2 = XtCreateManagedWidget("input2", asciiTextWidgetClass,
				  board, args, n);
   XtVaSetValues(input2, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This function creates the 3rd label of different working boxes.
*/

BuildLabel3(boxid, board)
int boxid;
Widget board;
{
   char tmpstr[TEMPSTRINGLEN];
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   if ((boxid == PREPROCESSID) || (boxid == COGENID))
   {
      XtSetArg(args[n], XtNlabel, "    Argument bt-pattern     "); n++;
      label3 = XtCreateManagedWidget("label3", labelWidgetClass,
				     board, args, n);
      XtVaSetValues(label3, XtNfont, font1Struct, NULL);
   }
   else if ((boxid == SPECIALIZEID) || (boxid == COMPILEID))
   {
      XtSetArg(args[n], XtNlabel, "       Argument pattern     "); n++;
      label3 = XtCreateManagedWidget("label3", labelWidgetClass,
				     board, args, n);
      XtVaSetValues(label3, XtNfont, font1Struct, NULL);
   }
/*
   else if ((boxid == TIMINGORGID) || (boxid == TIMINGRESID))
*/
   else if ((boxid == RUNORGID) || (boxid == RUNRESID))
   {
      XtSetArg(args[n], XtNlabel, "   How many times to run    "); n++;
      label3 = XtCreateManagedWidget("label3", labelWidgetClass,
				     board, args, n);
      XtVaSetValues(label3, XtNfont, font1Struct, NULL);
   }
   else if ((boxid == PRINTANNID) || (boxid == PRINTRESID) || 
            (boxid == PRINTCOMID))
   {
      XtSetArg(args[n], XtNlabel, "                 Printer name"); n++;
      label3 = XtCreateManagedWidget("label3", labelWidgetClass,
				     board, args, n);
      XtVaSetValues(label3, XtNfont, font1Struct, NULL);
   }
   else if (boxid == WRITEANNID)
   {
      strcpy(tmpstr, "The flow ID in the preprocessed program");
      XtSetArg(args[n], XtNlabel, tmpstr); n++;
      label3 = XtCreateManagedWidget("label3", labelWidgetClass,
				     board, args, n);
      XtVaSetValues(label3, XtNfont, font1Struct, NULL);
   }
}
 
/*****************************************************************************/

/*
   This function creates the 3rd input entry of different working boxes.
*/

BuildInput3(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];
   char *ptr;


   n = 0;
   XtSetArg(args[n], XtNheight, 20);	 n++;
   XtSetArg(args[n], XtNborderWidth, 1); n++;
   XtSetArg(args[n], XtNtype, XawAsciiString); n++;
   XtSetArg(args[n], XtNeditType, XawtextEdit); n++;
/*
   XtSetArg(args[n], XtNautoFill, True); n++;
*/
   XtSetArg(args[n], XtNresize, XawtextResizeBoth); n++;
   if ((boxid == PREPROCESSID) || (boxid == COGENID))
   {
      XtSetArg(args[n], XtNstring, SDDivision); n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
      input3 = XtCreateManagedWidget("input3", asciiTextWidgetClass,
				     board, args, n);
      XtVaSetValues(input3, XtNfont, font1Struct, NULL);
   }
   else if ((boxid == SPECIALIZEID) || (boxid == COMPILEID))
   {
      XtSetArg(args[n], XtNstring, SInput); n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
      input3 = XtCreateManagedWidget("input3", asciiTextWidgetClass,
				     board, args, n);
      XtVaSetValues(input3, XtNfont, font1Struct, NULL);
   }
/*
   else if ((boxid == TIMINGORGID) || (boxid == TIMINGRESID))
*/
   else if ((boxid == RUNORGID) || (boxid == RUNRESID))
   {
      XtSetArg(args[n], XtNstring, RUNTIME); n++;
      XtSetArg(args[n], XtNwidth, 200);	 n++;
      input3 = XtCreateManagedWidget("input3", asciiTextWidgetClass,
				     board, args, n);
      XtVaSetValues(input3, XtNfont, font1Struct, NULL);
   }
   else if ((boxid == PRINTANNID) || (boxid == PRINTRESID) ||
            (boxid == PRINTCOMID))
   {
      if (strcmp(PRNAME, "") == 0)
      {
         ptr = getenv("PRINTER");
         if (ptr == NULL)
            strcpy(PRNAME, "");
         else
            strcpy(PRNAME, ptr);
      }
      XtSetArg(args[n], XtNstring, PRNAME); n++;
      XtSetArg(args[n], XtNwidth, 180);	 n++;
      input3 = XtCreateManagedWidget("input3", asciiTextWidgetClass,
				     board, args, n);
      XtVaSetValues(input3, XtNfont, font1Struct, NULL);
   }
   else if (boxid == WRITEANNID)
   {
      XtSetArg(args[n], XtNwidth, 180);	 n++;
      XtSetArg(args[n], XtNstring, FLOWID); n++;
      input3 = XtCreateManagedWidget("input3", asciiTextWidgetClass,
				     board, args, n);
      XtVaSetValues(input3, XtNfont, font1Struct, NULL);
   }
}

/*****************************************************************************/

/*
   This function creates the 4th label of different working boxes.
*/

BuildLabel4(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   switch (boxid)
   {
      case SPECIALIZEID :
      case COMPILEID :
           XtSetArg(args[n], XtNlabel, "   *Residual program name   "); n++; break;
      case COGENID :
           XtSetArg(args[n], XtNlabel, "   *Compiler program name   "); n++; break;
      case WRITEANNID :
	   XtSetArg(args[n], XtNlabel, "The preprocessed program with the flow ID"); n++; break;
      default: break;
   }
   label4 = XtCreateManagedWidget("label4", labelWidgetClass,
				  board, args, n);
   XtVaSetValues(label4, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This function creates the 4th input entry of different working boxes.
*/

BuildInput4(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   if ((boxid == SPECIALIZEID) || (boxid == COMPILEID))
   {
      XtSetArg(args[n], XtNstring, RESNAME); n++;
      XtSetArg(args[n], XtNwidth, 200); n++;
   }
   else if (boxid == COGENID)
   {
      XtSetArg(args[n], XtNstring, COMNAME); n++;
      XtSetArg(args[n], XtNwidth, 200); n++;
   }
   else if (boxid == WRITEANNID)
   {
      XtSetArg(args[n], XtNwidth, 180); n++;
   }

   XtSetArg(args[n], XtNheight, 20);	 n++;
   XtSetArg(args[n], XtNborderWidth, 1); n++;
   XtSetArg(args[n], XtNtype, XawAsciiString); n++;
   XtSetArg(args[n], XtNeditType, XawtextEdit); n++;
/*
   XtSetArg(args[n], XtNautoFill, True); n++;
*/
   XtSetArg(args[n], XtNresize, XawtextResizeBoth); n++;
   input4 = XtCreateManagedWidget("input4", asciiTextWidgetClass,
				  board, args, n);
   XtVaSetValues(input4, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This function creates the 5th label of different working boxes.
*/

BuildLabel5(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   switch (boxid)
   {
      case SPECIALIZEID :
      case COMPILEID :
           XtSetArg(args[n], XtNlabel, "*Residual goal function name"); n++; break;
      case COGENID :
           XtSetArg(args[n], XtNlabel, "*Compiler goal function name"); n++; break;
      default: break;
   }
   label5 = XtCreateManagedWidget("label5", labelWidgetClass,
				  board, args, n);
   XtVaSetValues(label5, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This function creates the 5th input entry of different working boxes.
*/

BuildInput5(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   if ((boxid == SPECIALIZEID) || (boxid == COMPILEID))
   {
      XtSetArg(args[n], XtNstring, RFUNCNAME); n++;
   }
   else if (boxid == COGENID)
   {
      XtSetArg(args[n], XtNstring, CFUNCNAME); n++;
   }
   XtSetArg(args[n], XtNheight, 20);	 n++;
   XtSetArg(args[n], XtNborderWidth, 1); n++;
   XtSetArg(args[n], XtNtype, XawAsciiString); n++;
   XtSetArg(args[n], XtNeditType, XawtextEdit); n++;
/*
   XtSetArg(args[n], XtNautoFill, True); n++;
*/
   XtSetArg(args[n], XtNresize, XawtextResizeBoth); n++;
   XtSetArg(args[n], XtNwidth, 200);	 n++;
   input5 = XtCreateManagedWidget("input5", asciiTextWidgetClass,
				  board, args, n);
   XtVaSetValues(input5, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This function creates the 6th label of different working boxes.
*/

BuildLabel6(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];


   n = 0;
   XtSetArg(args[n], XtNborderWidth, 0); n++;
   XtSetArg(args[n], XtNlabel, "       *Running times       "); n++;

   label6 = XtCreateManagedWidget("label6", labelWidgetClass,
				  board, args, n);
   XtVaSetValues(label6, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This function creates the 6th input entry of different working boxes.
*/

BuildInput6(boxid, board)
int boxid;
Widget board;
{
   Cardinal n = 0;
   Arg args[12];

   n = 0;
   XtSetArg(args[n], XtNstring, SPECTIME); n++;
   XtSetArg(args[n], XtNheight, 20);	 n++;
   XtSetArg(args[n], XtNborderWidth, 1); n++;
   XtSetArg(args[n], XtNtype, XawAsciiString); n++;
   XtSetArg(args[n], XtNeditType, XawtextEdit); n++;
/* 
   XtSetArg(args[n], XtNautoFill, True); n++;
*/
   XtSetArg(args[n], XtNresize, XawtextResizeBoth); n++;
   XtSetArg(args[n], XtNwidth, 200);	 n++;
   input6 = XtCreateManagedWidget("input6", asciiTextWidgetClass,
				  board, args, n);
   XtVaSetValues(input6, XtNfont, font1Struct, NULL);
}

/*****************************************************************************/

/*
   This is a general function to list all of callbacks in the different
   working boxes.
*/

BoardCallbacks(boxid)
int boxid;
{
   switch (boxid)
   {
      case FRONTENDID :
           XtAddCallback(button1, XtNcallback, FrontendWholeOK, NULL);
           XtAddCallback(button2, XtNcallback, FrontendWholeCancel, NULL);
           XtAddCallback(button3, XtNcallback, FrontendWholeHelp, NULL);
           break;
      case PREPROCESSID :
           XtAddCallback(button1, XtNcallback, PreprocessWholeOK, NULL);
           XtAddCallback(button2, XtNcallback, PreprocessWholeCancel, NULL);
           XtAddCallback(button3, XtNcallback, PreprocessWholeHelp, NULL);
           break;
      case SPECIALIZEID :
	   XtAddCallback(button0, XtNcallback, SpecializeShortcut, NULL);
           XtAddCallback(button1, XtNcallback, SpecializeWholeOK, NULL);
           XtAddCallback(button2, XtNcallback, SpecializeWholeCancel, NULL);
           XtAddCallback(button3, XtNcallback, SpecializeWholeHelp, NULL);
           break;
      case COGENID :
	   XtAddCallback(button0, XtNcallback, CogenShortcut, NULL);
           XtAddCallback(button1, XtNcallback, CogenWholeOK, NULL);
           XtAddCallback(button2, XtNcallback, CogenWholeCancel, NULL);
           XtAddCallback(button3, XtNcallback, CogenWholeHelp, NULL);
           break;
      case COMPILEID :
           XtAddCallback(button1, XtNcallback, CompileWholeOK, NULL);
           XtAddCallback(button2, XtNcallback, CompileWholeCancel, NULL);
           XtAddCallback(button3, XtNcallback, CompileWholeHelp, NULL);
           break;
      case PRINTANNID :
           XtAddCallback(button1, XtNcallback, PrintAnnProgOK, NULL);
           XtAddCallback(button2, XtNcallback, PrintAnnProgCancel, NULL);
           XtAddCallback(button3, XtNcallback, PrintAnnProgHelp, NULL);
           break;
      case PRINTRESID :
           XtAddCallback(button1, XtNcallback, PrintResProgOK, NULL);
           XtAddCallback(button2, XtNcallback, PrintResProgCancel, NULL);
           XtAddCallback(button3, XtNcallback, PrintResProgHelp, NULL);
           break;
      case FILETOLISTID :
           XtAddCallback(button1, XtNcallback, FileToListOK, NULL);
           XtAddCallback(button2, XtNcallback, FileToListCancel, NULL);
           XtAddCallback(button3, XtNcallback, FileToListHelp, NULL);
           break;
      case FILETOITEMID :
           XtAddCallback(button1, XtNcallback, FileToItemOK, NULL);
           XtAddCallback(button2, XtNcallback, FileToItemCancel, NULL);
           XtAddCallback(button3, XtNcallback, FileToItemHelp, NULL);
           break;
      case RUNORGID :
           XtAddCallback(button1, XtNcallback, RunOriginalProgOK, NULL);
           XtAddCallback(button2, XtNcallback, RunOriginalProgCancel, NULL);
           XtAddCallback(button3, XtNcallback, RunOriginalProgHelp, NULL);
           break;
      case TIMINGORGID :
           XtAddCallback(button1, XtNcallback, TimingOriginalProgOK, NULL);
           XtAddCallback(button2, XtNcallback, TimingOriginalProgCancel, NULL);
           XtAddCallback(button3, XtNcallback, TimingOriginalProgHelp, NULL);
           break;
      case RUNRESID :
           XtAddCallback(button1, XtNcallback, RunResidualProgOK, NULL);
           XtAddCallback(button2, XtNcallback, RunResidualProgCancel, NULL);
           XtAddCallback(button3, XtNcallback, RunResidualProgHelp, NULL);
           break;
      case TIMINGRESID :
           XtAddCallback(button1, XtNcallback, TimingResidualProgOK, NULL);
           XtAddCallback(button2, XtNcallback, TimingResidualProgCancel, NULL);
           XtAddCallback(button3, XtNcallback, TimingResidualProgHelp, NULL);
           break;
      case PRINTCOMID :
           XtAddCallback(button1, XtNcallback, PrintCompilerOK, NULL);
           XtAddCallback(button2, XtNcallback, PrintCompilerCancel, NULL);
           XtAddCallback(button3, XtNcallback, PrintCompilerHelp, NULL);
	   break;
      case WRITEANNID :
           XtAddCallback(button1, XtNcallback, WritePreprocessProgOK, NULL);
           XtAddCallback(button2, XtNcallback, WritePreprocessProgCancel, NULL);
           XtAddCallback(button3, XtNcallback, WritePreprocessProgHelp, NULL);
	   break;
    
      default: break;
   }
}

/*****************************************************************************/
/*****************************************************************************/
