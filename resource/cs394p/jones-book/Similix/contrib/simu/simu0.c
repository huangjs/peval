
/* simu0.c --- The main control functions. */

#include "simudefs.h"
#include "simutype.h"
#include "simudcl.h"
#include "simuextf.h"

/*
   These resources specify the actions when Return is pressed in the dialog box
   or in the inputting entry of working box.
*/

String fallback_resources[] =
{
   "*value.translations: #override \\n <Key>Return: dialogReturn()",
   "*input1.*translations: #override \\n <Key>Return: textReturn()",
   "*input2.*translations: #override \\n <Key>Return: textReturn()",
   "*input3.*translations: #override \\n <Key>Return: textReturn()",
   "*input4.*translations: #override \\n <Key>Return: textReturn()",
   "*input5.*translations: #override \\n <Key>Return: textReturn()",
   "*input6.*translations: #override \\n <Key>Return: textReturn()",
   "*flowidinput.*translations: #override \\n <Key>Return: textReturn()",
   NULL,
};

/*
   All of external actions in the widgets are defined as follows.
*/

static XtActionsRec actionsTable[] =
{
   {"actionInput", DoTextInput},
   {"actionOutput", DoTextOutput},
   {"actionBack", DoTextBack},
   {"actionSave", DoTextSave},
   {"actionBreak", DoTextBreak},
   {"action01", DoUserAction01},
   {"dialogReturn", DoDialogReturn},
   {"textReturn", DoTextReturn},
   {"RepositionDialog", RepositionDialog},
   {"Quit", Quit},
};

/*
   This is necessary to keep all TopLevel shells from becoming the size that
   is specified on the command line.
*/

static XrmOptionDescRec simu_options[] = {
{"-geometry", "*topBox.geometry",        XrmoptionSepArg, (caddr_t) NULL},
{"-help",     "help",                    XrmoptionNoArg,  (caddr_t) "True"},
{"=",         "*topBox.geometry",        XrmoptionIsArg,  (caddr_t) NULL},
{"-pagesize", "*manualBrowser.geometry", XrmoptionSepArg, (caddr_t) NULL},
{"-notopbox", "topBox",                  XrmoptionNoArg,  (caddr_t) "False"},
{"-helpfile", "helpFile",                XrmoptionSepArg, (caddr_t) NULL},
{"-title",    "title",                   XrmoptionSepArg, (caddr_t) "Show"}, 
{"-iconic",   "iconic",                  XrmoptionNoArg,  (caddr_t) "True"},
};

/*
   This defines the file of Simu Manual used in Help.
*/

#define Offset(field) (XtOffsetOf(Text_Resources , field))
static XtResource my_resources[] =
{
   {"helpFile", XtCFile, XtRString, sizeof(char *),
       Offset(help_file), XtRString, HELPFILE},    /* defined in simudefs.h */
};
#undef Offset

/*****************************************************************************/
/*****************************************************************************/

/*
   This is the main control function of Simu.
*/

void main(argc, argv)
int argc;
char **argv;
{
   /* Create the top level widget. */
   toplevel = XtAppInitialize(&app, "simu", simu_options, 
                              XtNumber(simu_options),
                              &argc, argv, fallback_resources, NULL, 0);

   XtGetApplicationResources(toplevel, (caddr_t) &resources,  my_resources,
                             XtNumber(my_resources), NULL, (Cardinal) 0);
   XtAppAddActions(app, actionsTable, XtNumber(actionsTable));
   XtSetValues(toplevel, toplevelArgs, XtNumber(toplevelArgs));

   /* The main UI components of Simu. */
   CreateInterface();

   /* Create the working area of Similix, execute the program
      "/home/hugin/mix/bin/sun4/scm" and set up pipes between Similix and UI.*/
   StartSimilix();

   /* Realize the widget tree, and start processing events. */
   XtRealizeWidget(toplevel);
   XtAppMainLoop(app);
}

/*****************************************************************************/

/*
   This function organizes the hierarchy tree of menus.
*/

CreateInterface()
{
   int n;
   char buf[TEMPSTRINGLEN];
   char tmpstr[TEMPSTRINGLEN];
   Arg args[5];
   Widget dirlabel;
   FILE *fd;
   XFontStruct *XLoadQueryFont();


   /* The sizes of the working area, the editor window and the showing window.
       */
   default_width = DEFAULT_WIDTH;          /* defined in globals.h */
   default_height = DisplayHeight(XtDisplay(toplevel), 
 			          XtDisplay(toplevel)->default_screen);
   default_height *= 3;
   default_height /= 6;

   /*  Font resources used in the UI item name are specified as follows. */
   font0Struct = XLoadQueryFont(XtDisplay(toplevel), FONT0NAME);
   font1Struct = XLoadQueryFont(XtDisplay(toplevel), FONT1NAME);
   font2Struct = XLoadQueryFont(XtDisplay(toplevel), FONT2NAME);

   /* A bulletin board will be our primary widget. */
   n = 0;
   XtSetArg(workareaArgs[n], XtNborderWidth, WIDGETBDWIDTH); n++;
   XtSetArg(workareaArgs[n], XtNwidth, default_width); n++;
   XtSetArg(workareaArgs[n], XtNheight, default_height); n++;
   workarea = XtCreateManagedWidget("workarea", boxWidgetClass, toplevel,
	                            workareaArgs, n);

   mainboard = XtCreateManagedWidget("mainboard", boxWidgetClass, workarea,
				     mainboardArgs, XtNumber(mainboardArgs));

   /* Command buttons for Help and Exit. */
   itemH = XtCreateManagedWidget("Help", commandWidgetClass, workarea,
                                 NULL, ZERO);
   XtVaSetValues(itemH, XtNfont, font0Struct, NULL);
   itemI = XtCreateManagedWidget("Exit", commandWidgetClass, workarea,
				 NULL, ZERO);
   XtVaSetValues(itemI, XtNfont, font0Struct, NULL);

   /* Menu buttons for seven menus: System, Frontend, Preprocess, Specialize, 
      Cogen, Compile and Run. */
   buttonA = XtCreateManagedWidget("buttonA", menuButtonWidgetClass, mainboard,
                                   buttonAArgs, XtNumber(buttonAArgs));
   XtVaSetValues(buttonA, XtNfont, font0Struct, NULL);
/*
   buttonB = XtCreateManagedWidget("buttonB", menuButtonWidgetClass, mainboard,
                                   buttonBArgs, XtNumber(buttonBArgs));
   XtVaSetValues(buttonB, XtNfont, font0Struct, NULL);
*/
   buttonC = XtCreateManagedWidget("buttonC", menuButtonWidgetClass, mainboard,
                                   buttonCArgs, XtNumber(buttonCArgs));
   XtVaSetValues(buttonC, XtNfont, font0Struct, NULL);
   buttonD = XtCreateManagedWidget("buttonD", menuButtonWidgetClass, mainboard,
                                   buttonDArgs, XtNumber(buttonDArgs));
   XtVaSetValues(buttonD, XtNfont, font0Struct, NULL);
   buttonE = XtCreateManagedWidget("buttonE", menuButtonWidgetClass, mainboard,
                                   buttonEArgs, XtNumber(buttonEArgs));
   XtVaSetValues(buttonE, XtNfont, font0Struct, NULL);
   buttonF = XtCreateManagedWidget("buttonF", menuButtonWidgetClass, mainboard,
                                   buttonFArgs, XtNumber(buttonFArgs));
   XtVaSetValues(buttonF, XtNfont, font0Struct, NULL);
   buttonG = XtCreateManagedWidget("buttonG", menuButtonWidgetClass, mainboard,
                                   buttonGArgs, XtNumber(buttonGArgs));
   XtVaSetValues(buttonG, XtNfont, font0Struct, NULL);

   /* Displaying the current directory name in the label widget. */
/*
   system("pwd > temp#");
   if ((fd = fopen("temp#", "r")) != NULL)
   {
      n = read(fileno(fd), buf, 100);
      buf[n] = '\0';
   }
   fclose(fd);
   system("rm temp#");
*/
   strcpy(tmpstr, "The original directory is: ");
   getcwd(buf, TEMPSTRINGLEN);
   strcat(tmpstr, buf);
   n = 0;
   XtSetArg(args[n], XtNlabel, tmpstr); n++;
   dirlabel = XtCreateManagedWidget("srcLabel", labelWidgetClass, mainboard,
                                    args, n);
   XtVaSetValues(dirlabel, XtNfont, font1Struct, NULL);

   /* Create 7 menupanes, which will be used to build the menu hierarchy. */
   menupaneA =XtCreatePopupShell("System", simpleMenuWidgetClass, buttonA,
                                 menupaneAArgs, XtNumber(menupaneAArgs));
   XtVaSetValues(menupaneA, XtNfont, font0Struct, NULL);
/*
   menupaneB =XtCreatePopupShell("Frontend", simpleMenuWidgetClass,
                                 buttonB, menupaneBArgs,
                                 XtNumber(menupaneBArgs));
   XtVaSetValues(menupaneB, XtNfont, font0Struct, NULL);
*/
   menupaneC =XtCreatePopupShell("Preprocess", simpleMenuWidgetClass,
                                 buttonC, menupaneCArgs,
                                 XtNumber(menupaneCArgs));
   XtVaSetValues(menupaneC, XtNfont, font0Struct, NULL);
   menupaneD =XtCreatePopupShell("Specialize", simpleMenuWidgetClass,
                                 buttonD, menupaneDArgs,
                                 XtNumber(menupaneDArgs));
   XtVaSetValues(menupaneD, XtNfont, font0Struct, NULL);
   menupaneE =XtCreatePopupShell(" Cogen ", simpleMenuWidgetClass,
                                 buttonE, menupaneEArgs,
                                 XtNumber(menupaneEArgs));
   XtVaSetValues(menupaneE, XtNfont, font0Struct, NULL);
   menupaneF =XtCreatePopupShell("Compile", simpleMenuWidgetClass,
                                 buttonF, menupaneFArgs,
                                 XtNumber(menupaneFArgs));
   XtVaSetValues(menupaneF, XtNfont, font0Struct, NULL);
   menupaneG =XtCreatePopupShell("  Run  ", simpleMenuWidgetClass,
                                 buttonG, menupaneGArgs,
                                 XtNumber(menupaneGArgs));
   XtVaSetValues(menupaneG, XtNfont, font0Struct, NULL);

   /* Create the menu items for menupane A --- the System menu. */
   itemA1 = XtCreateManagedWidget("Reset Similix", smeBSBObjectClass,
                                  menupaneA,
				  itemA1Args, XtNumber(itemA1Args));
   XtVaSetValues(itemA1, XtNfont, font1Struct, NULL);

   itemA5 = XtCreateManagedWidget("Load sim-file", smeBSBObjectClass,
                                  menupaneA,
				  itemA5Args, XtNumber(itemA5Args));
   XtVaSetValues(itemA5, XtNfont, font1Struct, NULL);
   itemA6 = XtCreateManagedWidget("Load scheme-file", smeBSBObjectClass,
                                  menupaneA,
				  itemA6Args, XtNumber(itemA6Args));
   XtVaSetValues(itemA6, XtNfont, font1Struct, NULL);
   itemA11 = XtCreateManagedWidget("Reload ADT-file", smeBSBObjectClass, 
                                   menupaneA, itemA11Args,
                                   XtNumber(itemA11Args));
   XtVaSetValues(itemA11, XtNfont, font1Struct, NULL);

   itemA7 = XtCreateManagedWidget("File -> list", smeBSBObjectClass, menupaneA,
				  itemA7Args, XtNumber(itemA7Args));
   XtVaSetValues(itemA7, XtNfont, font1Struct, NULL);
   itemA8 = XtCreateManagedWidget("File -> item", smeBSBObjectClass, menupaneA,
				  itemA8Args, XtNumber(itemA8Args));
   XtVaSetValues(itemA8, XtNfont, font1Struct, NULL);

   itemA2 = XtCreateManagedWidget("Sim -> scheme", smeBSBObjectClass,
                                  menupaneA,
				  itemA2Args, XtNumber(itemA2Args));
   XtVaSetValues(itemA2, XtNfont, font1Struct, NULL);
   itemA3 = XtCreateManagedWidget("Compile sim-file", smeBSBObjectClass,
                                  menupaneA,
				  itemA3Args, XtNumber(itemA3Args));
   XtVaSetValues(itemA3, XtNfont, font1Struct, NULL);
   itemA4 = XtCreateManagedWidget("Compile and load sim-file", 
                                  smeBSBObjectClass, menupaneA,
				  itemA4Args, XtNumber(itemA4Args));
   XtVaSetValues(itemA4, XtNfont, font1Struct, NULL);

   itemB1 = XtCreateManagedWidget("Frontend program",
                                  smeBSBObjectClass, menupaneA, itemB1Args,
                                  XtNumber(itemB1Args));
   XtVaSetValues(itemB1, XtNfont, font1Struct, NULL);
/*
   itemA9 = XtCreateManagedWidget("Create file", smeBSBObjectClass, menupaneA,
				  itemA9Args, XtNumber(itemA9Args));
   XtVaSetValues(itemA9, XtNfont, font1Struct, NULL);
*/
   itemA10 = XtCreateManagedWidget("Open file", smeBSBObjectClass, menupaneA,
				   itemA10Args, XtNumber(itemA10Args));
   XtVaSetValues(itemA10, XtNfont, font1Struct, NULL);

   /* Create the menu items for menupane B --- the Frontend menu. */
/*
   itemB1 = XtCreateManagedWidget("Frontend program",
                                  smeBSBObjectClass, menupaneB, itemB1Args,
                                  XtNumber(itemB1Args));
   XtVaSetValues(itemB1, XtNfont, font1Struct, NULL);
*/
/*
   itemB2 = XtCreateManagedWidget("Reload ADT-file", smeBSBObjectClass, 
                                  menupaneB, itemB2Args, XtNumber(itemB2Args));
   XtVaSetValues(itemB2, XtNfont, font1Struct, NULL);
*/

   /* Create the menu items for menupane C --- the Preprocess menu. */
   itemC1 = XtCreateManagedWidget("Preprocess program", smeBSBObjectClass, 
                                  menupaneC, itemC1Args, XtNumber(itemC1Args));
   XtVaSetValues(itemC1, XtNfont, font1Struct, NULL);
   itemC7 = XtCreateManagedWidget("Show current preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneC, itemC7Args, XtNumber(itemC7Args));
   XtVaSetValues(itemC7, XtNfont, font1Struct, NULL);
   itemC2 = XtCreateManagedWidget("Write preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneC, itemC2Args, XtNumber(itemC2Args));
   XtVaSetValues(itemC2, XtNfont, font1Struct, NULL);
   itemC3 = XtCreateManagedWidget("Show preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneC, itemC3Args, XtNumber(itemC3Args));
   XtVaSetValues(itemC3, XtNfont, font1Struct, NULL);
   itemC4 = XtCreateManagedWidget("Print preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneC, itemC4Args, XtNumber(itemC4Args));
   XtVaSetValues(itemC4, XtNfont, font1Struct, NULL);
   itemC5 = XtCreateManagedWidget("Verbose preprocessing",
                                  smeBSBObjectClass,
                                  menupaneC, itemC5Args, XtNumber(itemC5Args));
   XtVaSetValues(itemC5, XtNfont, font1Struct, NULL);
   itemC6 = XtCreateManagedWidget("Memoization",
                                  smeBSBObjectClass,
                                  menupaneC, itemC6Args, XtNumber(itemC6Args));
   XtVaSetValues(itemC6, XtNfont, font1Struct, NULL);

   /* Create the menu items for menupane D --- the Specialize menu. */
   itemD1 = XtCreateManagedWidget("Specialize program", smeBSBObjectClass,
                                  menupaneD, itemD1Args, XtNumber(itemD1Args));
   XtVaSetValues(itemD1, XtNfont, font1Struct, NULL);
   itemD12 = XtCreateManagedWidget("Show current residual program",
                                  smeBSBObjectClass,
                                  menupaneD, itemD12Args, XtNumber(itemD12Args));
   XtVaSetValues(itemD12, XtNfont, font1Struct, NULL);
   itemD2 = XtCreateManagedWidget("Write residual program",
                                  smeBSBObjectClass,
                                  menupaneD, itemD2Args, XtNumber(itemD2Args));
   XtVaSetValues(itemD2, XtNfont, font1Struct, NULL);
   itemD3 = XtCreateManagedWidget("Show residual program",
                                  smeBSBObjectClass,
                                  menupaneD, itemD3Args, XtNumber(itemD3Args));
   XtVaSetValues(itemD3, XtNfont, font1Struct, NULL);
   itemD4 = XtCreateManagedWidget("Print residual program",
                                  smeBSBObjectClass,
                                  menupaneD, itemD4Args, XtNumber(itemD4Args));
   XtVaSetValues(itemD4, XtNfont, font1Struct, NULL);
/*
   itemD5 = XtCreateManagedWidget("Write preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneD, itemD5Args, XtNumber(itemD5Args));
   XtVaSetValues(itemD5, XtNfont, font1Struct, NULL);
   itemD6 = XtCreateManagedWidget("Show preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneD, itemD6Args, XtNumber(itemD6Args));
   XtVaSetValues(itemD6, XtNfont, font1Struct, NULL);
   itemD7 = XtCreateManagedWidget("Print preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneD, itemD7Args, XtNumber(itemD7Args));
   XtVaSetValues(itemD7, XtNfont, font1Struct, NULL);
*/
   itemD8 = XtCreateManagedWidget("Post unfolding",
                                  smeBSBObjectClass,
                                  menupaneD, itemD8Args, XtNumber(itemD8Args));
   XtVaSetValues(itemD8, XtNfont, font1Struct, NULL);
   itemD9 = XtCreateManagedWidget("Verbose specialization",
                                  smeBSBObjectClass,
                                  menupaneD, itemD9Args, XtNumber(itemD9Args));
   XtVaSetValues(itemD9, XtNfont, font1Struct, NULL);
   itemD10 = XtCreateManagedWidget("Verbose preprocessing",
                                  smeBSBObjectClass, menupaneD,
                                  itemD10Args, XtNumber(itemD10Args));
   XtVaSetValues(itemD10, XtNfont, font1Struct, NULL);
   itemD11 = XtCreateManagedWidget("Memoization",
                                  smeBSBObjectClass, menupaneD,
                                  itemD11Args, XtNumber(itemD11Args));
   XtVaSetValues(itemD11, XtNfont, font1Struct, NULL);

   /* Create the menu items for menupane E --- the Cogen menu. */
   itemE1 = XtCreateManagedWidget("Compiler generation", smeBSBObjectClass,
                                  menupaneE,
				  itemE1Args, XtNumber(itemE1Args));
   XtVaSetValues(itemE1, XtNfont, font1Struct, NULL);
   itemE12 = XtCreateManagedWidget("Show current compiler", smeBSBObjectClass, 
				   menupaneE,
				   itemE12Args, XtNumber(itemE12Args));
   XtVaSetValues(itemE12, XtNfont, font1Struct, NULL);
   itemE2 = XtCreateManagedWidget("Write compiler", smeBSBObjectClass, 
                                  menupaneE,
				  itemE2Args, XtNumber(itemE2Args));
   XtVaSetValues(itemE2, XtNfont, font1Struct, NULL);
   itemE3 = XtCreateManagedWidget("Show compiler", smeBSBObjectClass,
                                  menupaneE,
				  itemE3Args, XtNumber(itemE3Args));
   XtVaSetValues(itemE3, XtNfont, font1Struct, NULL);
   itemE4 = XtCreateManagedWidget("Print compiler", smeBSBObjectClass,
                                  menupaneE,
				  itemE4Args, XtNumber(itemE4Args));
   XtVaSetValues(itemE4, XtNfont, font1Struct, NULL);
   itemE13 = XtCreateManagedWidget("Show Current preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneE, itemE13Args, XtNumber(itemE13Args));
   XtVaSetValues(itemE13, XtNfont, font1Struct, NULL);
   itemE5 = XtCreateManagedWidget("Write preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneE, itemE5Args, XtNumber(itemE5Args));
   XtVaSetValues(itemE5, XtNfont, font1Struct, NULL);
   itemE6 = XtCreateManagedWidget("Show preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneE, itemE6Args, XtNumber(itemE6Args));
   XtVaSetValues(itemE6, XtNfont, font1Struct, NULL);
   itemE7 = XtCreateManagedWidget("Print preprocessed program",
                                  smeBSBObjectClass,
                                  menupaneE, itemE7Args, XtNumber(itemE7Args));
   XtVaSetValues(itemE7, XtNfont, font1Struct, NULL);
   itemE8 = XtCreateManagedWidget("Post unfolding",
                                  smeBSBObjectClass,
                                  menupaneE, itemE8Args, XtNumber(itemE8Args));
   XtVaSetValues(itemE8, XtNfont, font1Struct, NULL);
   itemE9 = XtCreateManagedWidget("Verbose specialization",
                                  smeBSBObjectClass,
                                  menupaneE, itemE9Args, XtNumber(itemE9Args));
   XtVaSetValues(itemE9, XtNfont, font1Struct, NULL);
   itemE10 = XtCreateManagedWidget("Verbose preprocessing",
                                  smeBSBObjectClass, menupaneE,
                                  itemE10Args, XtNumber(itemE10Args));
   XtVaSetValues(itemE10, XtNfont, font1Struct, NULL);
   itemE11 = XtCreateManagedWidget("Memoization",
                                  smeBSBObjectClass, menupaneE,
                                  itemE11Args, XtNumber(itemE11Args));
   XtVaSetValues(itemE11, XtNfont, font1Struct, NULL);

   /* Create the menu items for menupane F --- the Compile menu. */
   itemF1 = XtCreateManagedWidget("Compile", smeBSBObjectClass,
                                  menupaneF,
				  itemF1Args, XtNumber(itemF1Args));
   XtVaSetValues(itemF1, XtNfont, font1Struct, NULL);
   itemF7 = XtCreateManagedWidget("Show Current residual program", 
                                  smeBSBObjectClass,
                                  menupaneF,
				  itemF7Args, XtNumber(itemF7Args));
   XtVaSetValues(itemF7, XtNfont, font1Struct, NULL);
   itemF2 = XtCreateManagedWidget("Write residual program", 
                                  smeBSBObjectClass,
                                  menupaneF,
				  itemF2Args, XtNumber(itemF2Args));
   XtVaSetValues(itemF2, XtNfont, font1Struct, NULL);
   itemF3 = XtCreateManagedWidget("Show residual program", 
                                  smeBSBObjectClass,
                                  menupaneF,
				  itemF3Args, XtNumber(itemF3Args));
   XtVaSetValues(itemF3, XtNfont, font1Struct, NULL);
   itemF4 = XtCreateManagedWidget("Print residual program", 
                                  smeBSBObjectClass,
                                  menupaneF,
				  itemF4Args, XtNumber(itemF4Args));
   XtVaSetValues(itemF4, XtNfont, font1Struct, NULL);
   itemF5 = XtCreateManagedWidget("Post unfolding",
                                  smeBSBObjectClass,
                                  menupaneF, itemF5Args, XtNumber(itemF5Args));
   XtVaSetValues(itemF5, XtNfont, font1Struct, NULL);
   itemF6 = XtCreateManagedWidget("Verbose specialization",
                                  smeBSBObjectClass,
                                  menupaneF, itemF6Args, XtNumber(itemF6Args));
   XtVaSetValues(itemF6, XtNfont, font1Struct, NULL);

   /* Create the menu items for menupane G --- the Run menu. */
   itemG1 = XtCreateManagedWidget("Run original program", smeBSBObjectClass,
                                  menupaneG,
				  itemG1Args, XtNumber(itemG1Args));
   XtVaSetValues(itemG1, XtNfont, font1Struct, NULL);
/*
   itemG2 = XtCreateManagedWidget("Timing original program", 
                                  smeBSBObjectClass,
                                  menupaneG,
				  itemG2Args, XtNumber(itemG2Args));
   XtVaSetValues(itemG2, XtNfont, font1Struct, NULL);
*/
   itemG3 = XtCreateManagedWidget("Run residual program", smeBSBObjectClass,
                                  menupaneG,
				  itemG3Args, XtNumber(itemG3Args));
   XtVaSetValues(itemG3, XtNfont, font1Struct, NULL);
/*
   itemG4 = XtCreateManagedWidget("Timing residual program", 
                                  smeBSBObjectClass,
                                  menupaneG,
				  itemG4Args, XtNumber(itemG4Args));
   XtVaSetValues(itemG4, XtNfont, font1Struct, NULL);
*/

   /* Attach all of action callbacks to the menu buttons. */
   XtAddCallback(itemA1, XtNcallback, ResetSimilix, NULL);
   XtAddCallback(itemA2, XtNcallback, SimToScheme, NULL);
   XtAddCallback(itemA3, XtNcallback, CompileSimFile, NULL);
   XtAddCallback(itemA4, XtNcallback, CompileLoadSimFile, NULL);
   XtAddCallback(itemA5, XtNcallback, LoadSimFile, NULL);
   XtAddCallback(itemA6, XtNcallback, LoadSchemeFile, NULL);
   XtAddCallback(itemA7, XtNcallback, FileToList, NULL);
   XtAddCallback(itemA8, XtNcallback, FileToItem, NULL);
/*   XtAddCallback(itemA9, XtNcallback, CreateFile, NULL); */
   XtAddCallback(itemA10, XtNcallback, OpenFile, NULL);
   XtAddCallback(itemA11, XtNcallback, ReloadAdtFile, NULL);

   XtAddCallback(itemB1, XtNcallback, FrontendWhole, NULL);
/*
   XtAddCallback(itemB2, XtNcallback, ReloadAdtFile, NULL);
*/

   XtAddCallback(itemC1, XtNcallback, PreprocessWhole, NULL);
   XtAddCallback(itemC7, XtNcallback, ShowCurrentPreprocessProg, NULL);
   XtAddCallback(itemC2, XtNcallback, WritePreprocessProg, NULL);
   XtAddCallback(itemC3, XtNcallback, ShowPreprocessProg, NULL);
   XtAddCallback(itemC4, XtNcallback, PrintPreprocessProg, NULL);
   XtAddCallback(itemC5, XtNcallback, VerbosePreprocess, NULL);
   XtAddCallback(itemC6, XtNcallback, Memoization, NULL);

   XtAddCallback(itemD1, XtNcallback, SpecializeWhole, NULL);
   XtAddCallback(itemD12, XtNcallback, ShowCurrentResidualProg, NULL);
   XtAddCallback(itemD2, XtNcallback, WriteResidualProg, NULL);
   XtAddCallback(itemD3, XtNcallback, ShowResidualProg, NULL);
   XtAddCallback(itemD4, XtNcallback, PrintResidualProg, NULL);
/*
   XtAddCallback(itemD5, XtNcallback, WritePreprocessProg, NULL);
   XtAddCallback(itemD6, XtNcallback, ShowPreprocessProg, NULL);
   XtAddCallback(itemD7, XtNcallback, PrintPreprocessProg, NULL);
*/
   XtAddCallback(itemD8, XtNcallback, PostUnfolding, NULL);
   XtAddCallback(itemD9, XtNcallback, VerboseSpecialization, NULL);
   XtAddCallback(itemD10, XtNcallback, VerbosePreprocess, NULL);
   XtAddCallback(itemD11, XtNcallback, Memoization, NULL);

   XtAddCallback(itemE1, XtNcallback, CogenWhole, NULL);
   XtAddCallback(itemE12, XtNcallback, ShowCurrentCompiler, NULL);
   XtAddCallback(itemE2, XtNcallback, WriteCompiler, NULL);
   XtAddCallback(itemE3, XtNcallback, ShowCompiler, NULL);
   XtAddCallback(itemE4, XtNcallback, PrintCompiler, NULL);
   XtAddCallback(itemE13, XtNcallback, ShowCurrentPreprocessProg, NULL);
   XtAddCallback(itemE5, XtNcallback, WritePreprocessProg, NULL);
   XtAddCallback(itemE6, XtNcallback, ShowPreprocessProg, NULL);
   XtAddCallback(itemE7, XtNcallback, PrintPreprocessProg, NULL);
   XtAddCallback(itemE8, XtNcallback, PostUnfolding, NULL);
   XtAddCallback(itemE9, XtNcallback, VerboseSpecialization, NULL);
   XtAddCallback(itemE10, XtNcallback, VerbosePreprocess, NULL);
   XtAddCallback(itemE11, XtNcallback, Memoization, NULL);

   XtAddCallback(itemF1, XtNcallback, CompileWhole, NULL);
   XtAddCallback(itemF7, XtNcallback, ShowCurrentResidualProg, NULL);
   XtAddCallback(itemF2, XtNcallback, WriteResidualProg, NULL);
   XtAddCallback(itemF3, XtNcallback, ShowResidualProg, NULL);
   XtAddCallback(itemF4, XtNcallback, PrintResidualProg, NULL);
   XtAddCallback(itemF5, XtNcallback, PostUnfolding, NULL);
   XtAddCallback(itemF6, XtNcallback, VerboseSpecialization, NULL);

   XtAddCallback(itemG1, XtNcallback, RunOriginalProg, NULL);
/*
   XtAddCallback(itemG2, XtNcallback, TimingOriginalProg, NULL);
*/
   XtAddCallback(itemG3, XtNcallback, RunResidualProg, NULL);
/*
   XtAddCallback(itemG4, XtNcallback, TimingResidualProg, NULL);
*/

   XtAddCallback(itemH, XtNcallback, DisplayHelpManual, NULL);

   XtAddCallback(itemI, XtNcallback, ExitSimu, NULL);

   /* Set the masks to some menu items and make them not available at the 
      first. */
   XtSetSensitive(itemC2, FALSE);
   XtSetSensitive(itemC7, FALSE);

   XtSetSensitive(itemD2, FALSE);
/*
   XtSetSensitive(itemD5, FALSE);
*/
   XtSetSensitive(itemD12, FALSE);

   XtSetSensitive(itemE2, FALSE);
   XtSetSensitive(itemE5, FALSE);
   XtSetSensitive(itemE12, FALSE);
   XtSetSensitive(itemE13, FALSE);

   XtSetSensitive(itemF1, FALSE);
   XtSetSensitive(itemF2, FALSE);
   XtSetSensitive(itemF7, FALSE);

   XtSetSensitive(itemG3, FALSE);
/*
   XtSetSensitive(itemG4, FALSE);
*/
}

/*****************************************************************************/
