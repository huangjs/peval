
/* simuf.c --- The called back functions for Run. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (apply goal args) in Similix, but create a working box first.
*/

void RunOriginalProg()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(RUNORGID, &board11);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in RunOriginalProg.
*/

void  RunOriginalProgOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);

   RunOriginalProgCancel();

   strcpy(RUNTIME, buffer3);
   if (strcmp(buffer3, "") == 0)
   {
      strcpy(tmpstr, "(apply ");
      
      strcpy(FUNCNAME, buffer1);
      if (strcmp(buffer1, "") != 0)
      {
	 strcat(tmpstr, FUNCNAME);
      }

      strcpy(VALNAME, buffer2);
      if (strcmp(buffer2, "") != 0)
      {
	 strcat(tmpstr, " `(");
         strcat(tmpstr, VALNAME);
	 strcat(tmpstr, ")");
      }

      strcat(tmpstr, ")");

      SendToSimilix(tmpstr);
   }
   else
   {
      strcpy(tmpstr, "(ntimes (lambda() (apply ");

      strcpy(FUNCNAME, buffer1);
      if (strcmp(buffer1, "") != 0)
      {
         strcat(tmpstr, FUNCNAME);
      }

      strcpy(VALNAME, buffer2);
      if (strcmp(buffer2, "") != 0)
      {
         strcat(tmpstr, " `(");
	 strcat(tmpstr, VALNAME);
	 strcat(tmpstr, ")");
      }

      strcat(tmpstr, "))");

      strcpy(RUNTIME, buffer3);
      if (strcmp(buffer3, "") != 0)
      {
	 strcat(tmpstr, " ");
	 strcat(tmpstr, RUNTIME);
      }

      strcat(tmpstr, ")");

      SendToSimilix(tmpstr);
   }
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in
   RunOriginalProg.
*/

void  RunOriginalProgCancel()
{
   XtDestroyWidget(board11);
   XtDestroyWidget(XtParent(board11));
   board11 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in RunOriginalProg.
*/

void  RunOriginalProgHelp()
{
   WholeHelp(RUNORGHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (ntimes (lambda() (apply goal args)) [n]) in Similix, but
   create a working box first.
*/

void TimingOriginalProg()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(TIMINGORGID, &board12);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in
   TimingOriginalProg.
*/

void TimingOriginalProgOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);

   TimingOriginalProgCancel();

   strcpy(tmpstr, "(ntimes (lambda() (apply ");

   strcpy(FUNCNAME, buffer1);
   if (strcmp(buffer1, "") != 0)
   {
      strcat(tmpstr, FUNCNAME);
   }

   strcpy(VALNAME, buffer2);
   if (strcmp(buffer2, "") != 0)
   {
      strcat(tmpstr, " `(");
      strcat(tmpstr, VALNAME);
      strcat(tmpstr, ")");
   }

   strcat(tmpstr, "))");

   strcpy(RUNTIME, buffer3);
   if (strcmp(buffer3, "") != 0)
   {
      strcat(tmpstr, " ");
      strcat(tmpstr, RUNTIME);
   }

   strcat(tmpstr, ")");

   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in
   TimingOriginalProg.
*/

void TimingOriginalProgCancel()
{
   XtDestroyWidget(board12);
   XtDestroyWidget(XtParent(board12));
   board12 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in
   TimingOriginalProg.
*/

void TimingOriginalProgHelp()
{
   WholeHelp(TIMINGORGHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (apply resid-goal args) in Similix, but create a working box
   first.
*/

void RunResidualProg()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(RUNRESID, &board13);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in RunResidualProg.
*/

void RunResidualProgOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3;


   SendToSimilix("(load-residual-program)");

   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);

   RunResidualProgCancel();

   strcpy(RUNTIME, buffer3);
   if (strcmp(buffer3, "") == 0)
   {
      strcpy(tmpstr, "(apply ");

      strcpy(RFUNCNAME, buffer1);
      if (strcmp(buffer1, "") != 0)
      {
	 strcat(tmpstr, RFUNCNAME);
      }
      else
      {
         strcat(tmpstr, FUNCNAME);
	 strcat(tmpstr, "-0");
      }

      strcpy(DInput, buffer2);
      if (strcmp(buffer2, "") != 0)
      {
	 strcat(tmpstr, " `(");
	 strcat(tmpstr, DInput);
	 strcat(tmpstr, ")");
      }

      strcat(tmpstr, ")");

      SendToSimilix(tmpstr);
   }
   else
   {
      strcpy(tmpstr, "(ntimes (lambda() (apply ");

      strcpy(RFUNCNAME, buffer1);
      if (strcmp(buffer1, "") != 0)
      {
	 strcat(tmpstr, RFUNCNAME);
      }
      else
      {
         strcat(tmpstr, FUNCNAME);
	 strcat(tmpstr, "-0");
      }

      strcpy(DInput, buffer2);
      if (strcmp(buffer2, "") != 0)
      {
         strcat(tmpstr, " `(");
	 strcat(tmpstr, DInput);
	 strcat(tmpstr, ")");
      }

      strcat(tmpstr, "))");

      strcpy(RUNTIME, buffer3);
      if (strcmp(buffer3, "") != 0)
      {
	 strcat(tmpstr, " ");
	 strcat(tmpstr, RUNTIME);
      }

      strcat(tmpstr, ")");

      SendToSimilix(tmpstr);
   }
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in
   RunResidualProg.
*/

void RunResidualProgCancel()
{
   XtDestroyWidget(board13);
   XtDestroyWidget(XtParent(board13));
   board13 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in RunResidualProg.
*/

void RunResidualProgHelp()
{
   WholeHelp(RUNRESHELP);
}

/*****************************************************************************/
/*****************************************************************************/

/*
   Actually call (ntimes (lambda() (apply resid-goal args)) [n]) in Similix,
   but create a working box first.
*/

void TimingResidualProg()
{
   if (exitFlag == True)
      StartSimilix();

   BuildWorkingBox(TIMINGRESID, &board14);
}

/*****************************************************************************/

/*
   The callback function of OK in the working box created in
   TimingResidualProg.
*/

void TimingResidualProgOK()
{
   char tmpstr[TEMPSTRINGLEN];
   String buffer1, buffer2, buffer3;


   XtVaGetValues(input1, XtNstring, &buffer1, NULL);
   XtVaGetValues(input2, XtNstring, &buffer2, NULL);
   XtVaGetValues(input3, XtNstring, &buffer3, NULL);

   TimingResidualProgCancel();

   SendToSimilix("(load-residual-program)");

   strcpy(tmpstr, "(ntimes (lambda() (apply ");

   strcpy(RFUNCNAME, buffer1);
   if (strcmp(buffer1, "") != 0)
   {
      strcat(tmpstr, RFUNCNAME);
   }
   else
   {
      strcat(tmpstr, FUNCNAME);
      strcat(tmpstr, "-0");
   }

   strcpy(DInput, buffer2);
   if (strcmp(buffer2, "") != 0)
   {
      strcat(tmpstr, " `(");
      strcat(tmpstr, DInput);
      strcat(tmpstr, ")");
   }

   strcat(tmpstr, "))");

   strcpy(RUNTIME, buffer3);
   if (strcmp(buffer3, "") != 0)
   {
      strcat(tmpstr, " ");
      strcat(tmpstr, RUNTIME);
   }

   strcat(tmpstr, ")");

   SendToSimilix(tmpstr);
}

/*****************************************************************************/

/*
   The callback function of Cancel in the working box created in
   TimingResidualProg.
*/

void TimingResidualProgCancel()
{
   XtDestroyWidget(board14);
   XtDestroyWidget(XtParent(board14));
   board14 = NULL;
   shellFlag = False;

   if (helpFlag == True)
      XtDestroyWidget(helpShell);
   helpFlag = False;
}

/*****************************************************************************/

/*
   The callback function of Help in the working box created in
   TimingResidualProg.
*/

void TimingResidualProgHelp()
{
   WholeHelp(TIMINGRESHELP);
}

/*****************************************************************************/
/*****************************************************************************/



