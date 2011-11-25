
/* simub.c --- The called back functions for menu items in the menu 
Frontend. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually Call (front-end) or (front-end goal source-sim-file) in Similix,
   but create a working box first.
*/

void FrontendWhole()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(FRONTENDID, &board1);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in FrontendWhole.
*/

void FrontendWholeOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);

   FrontendWholeCancel();

   strcpy(tmpstr, "(front-end");

   strcpy(FUNCNAME, buffer2);
   if (strcmp(buffer2, "") != 0)
   {
      strcat(tmpstr, " '");
      strcat(tmpstr, FUNCNAME);
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
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in FrontendWhole.
*/

void FrontendWholeCancel()
{
   XtDestroyWidget(board1);
   XtDestroyWidget(XtParent(board1));
   board1 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in FrontendWhole.
*/

void FrontendWholeHelp()
{
   WholeHelp(FRONTENDHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (loadt! file) in Similix, but create a dialog first.
*/

void ReloadAdtFile()
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
            "Reload ADT-file --- Input the name of ADT file:"); n++;
   XtSetArg(dialogArgs[n], XtNvalue, ADTNAME); n++;

   dialog[7] = XtCreateManagedWidget("Src7", dialogWidgetClass,
                                     dialogShell, dialogArgs,
                                     XtNumber(dialogArgs));
   XtVaSetValues(dialog[7], XtNfont, font1Struct, NULL);

   XawDialogAddButton(dialog[7], "OK", ReloadAdtFileOK, NULL);
   XawDialogAddButton(dialog[7], "Cancel", ReloadAdtFileCancel, NULL);
   XawDialogAddButton(dialog[7], "Help", ReloadAdtFileHelp, NULL);

   XtPopup(dialogShell, XtGrabNone);
   shellFlag = True;
}

/*****************************************************************************/

/*
   The callback function of OK in the dialog created in ReloadAdtFile.
*/

void ReloadAdtFileOK()
{
   char tmpstr[TEMPSTRINGLEN];


   strcpy(tmpstr, XawDialogGetValueString(dialog[7]));
   strcpy(ADTNAME, tmpstr);

   ReloadAdtFileCancel();

   strcpy(tmpstr, "(loadt! \"");
   strcat(tmpstr, ADTNAME);
   strcat(tmpstr, "\")");
   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the dialog created in ReloadAdtFile.
*/

void ReloadAdtFileCancel()
{
   XtDestroyWidget(dialog[7]);
   XtDestroyWidget(XtParent(dialog[7]));
   dialog[7] = NULL;
   shellFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the dialog created in ReloadAdtFile.
*/

void ReloadAdtFileHelp()
{
   WholeHelp(LOADADTFILEHELP);
} 

/*****************************************************************************/
/*****************************************************************************/


