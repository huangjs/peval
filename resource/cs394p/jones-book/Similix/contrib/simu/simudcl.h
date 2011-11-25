
/* simudcl.h --- All global ariables are included here. */

/*****************************************************************************/
/*****************************************************************************/

Text_Resources resources;	    /* Resource manager sets these. */
int default_height, default_width;  /* Approximately the default width and 
height of the windows */
XContext textglobals_context;	    /* The context for text_globals. */

/*****************************************************************************/

XContext text_context;	 /* The context for text_data. */

/*****************************************************************************/

XtAppContext app;

Widget toplevel;
Widget workarea;
Widget mainboard;

Widget top;

/* All of widgets for menu (items), buttons, dialog boxes, board, labels, etc. */

Widget buttonA, buttonB, buttonC, buttonD, buttonE, buttonF, buttonG; 

Widget menupaneA, menupaneB, menupaneC, menupaneD, menupaneE, menupaneF,
       menupaneG;

Widget itemA1, itemA2, itemA3, itemA4, itemA5, itemA6, itemA7, itemA8, itemA9, itemA10, itemA11;

Widget itemB1, itemB2;

Widget itemC1, itemC2, itemC3, itemC4, itemC5, itemC6, itemC7;

Widget itemD1, itemD2, itemD3, itemD4, itemD5, itemD6, itemD7, itemD8, itemD9, itemD10, itemD11, itemD12;

Widget itemE1, itemE2, itemE3, itemE4, itemE5, itemE6, itemE7, itemE8, itemE9, itemE10, itemE11, itemE12, itemE13;

Widget itemF1, itemF2, itemF3, itemF4, itemF5, itemF6, itemF7;

Widget itemG1, itemG2, itemG3, itemG4;

Widget itemH;

Widget itemI;

Widget board1, board2, board3, board4, board5, board6,
       board7, board8, board9, board10, board11, board12, board13, board14,
       board15, board16;

Widget label0, label1, label2, label3, label4, label5, label6, 
       input1, input2, input3, input4, input5, input6;

Widget button0, button1, button2, button3;

Widget flowidinput;

Widget srclabel;

Widget dir1label;

Widget inputwidget;

Widget dialog0;
Widget dialog[17];
Widget dialogShell;
Widget helpShell;
Widget helpDialog;

int shellFlag = False;

Widget text;
Widget textpann;

Widget textsrc;
Widget textsink;

int fileFlag = False;

int textFlag = False;
int helpFlag = False;

int dirFlag = False;
int exitFlag = True;

int vprepFlag = True;
int punfdFlag = True;
int vspecFlag = SIMUZERO;
int memoFlag = True;
Widget vprepOn, vprepOff, punfdOn, punfdOff, vspec0, vspec1, vspec2, memoOn, memoOff;
Widget radio1, radio2, radio3, radio4;

char SRCNAME[TEMPSTRINGLEN];      /* Similix source name */
char SCMNAME[TEMPSTRINGLEN];      /* Scheme source name */
char FUNCNAME[TEMPSTRINGLEN];     /* the main function name of Similix Prog */
char ANNNAME[TEMPSTRINGLEN];      /* Annotated Prog. */

char RESNAME[TEMPSTRINGLEN];      /* Residual Prog.*/
char RFUNCNAME[TEMPSTRINGLEN];    /* Residual goal func.*/

char COMNAME[TEMPSTRINGLEN];      /* Compile Prog.*/
char CFUNCNAME[TEMPSTRINGLEN];    /* Compile Func. */

char SInput[TEMPSTRINGLEN];       /* Values of Static input */
char DInput[TEMPSTRINGLEN];       /* Values of Dynamic input */

char SDDivision[TEMPSTRINGLEN];   /* Binding-time pattern */
char ADTNAME[TEMPSTRINGLEN];      /* .adt file name */
char VARNAME[TEMPSTRINGLEN];      /* Bound variable name for preprocessed program or residual program */

char VALNAME[TEMPSTRINGLEN];      /* The list of args for the souce goal */
char RVALNAME[TEMPSTRINGLEN];     /* The list of args for the residual goal */
char RUNTIME[TEMPSTRINGLEN];      /* Running times */
char SPECTIME[TEMPSTRINGLEN];     /* Spec. or compiling times */

char PRTYPE[TEMPSTRINGLEN];       /* Printer type */
char PRNAME[TEMPSTRINGLEN];       /* Printer name */

char FLOWID[TEMPSTRINGLEN];       /* Num of flow class */

XFontStruct *font0Struct;         /* Font0 data: "8x13bold" */
XFontStruct *font1Struct;         /* Font1 data: "9x15" */
XFontStruct *font2Struct;         /* Font2 data: "lucidasans-bold-18" */

/*****************************************************************************/
