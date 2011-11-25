
/* simuextv.h --- All external variables are included here. */

/*****************************************************************************/
/*****************************************************************************/

extern Text_Resources resources;	 /* Resource manager sets these. */
extern int default_height, default_width; /* Approximately the default width
and height of the windows */
extern XContext textglobals_context;	 /* The context for text_globals. */

/*****************************************************************************/

extern XContext text_context;	 /* The context for text_data. */

/*****************************************************************************/

extern XtAppContext app;

extern Widget toplevel;
extern Widget workarea;
extern Widget mainboard;

extern Widget top;

/* All of widgets for menu (items), buttons, dialog boxes, board, labels, etc. */

extern Widget buttonA, buttonB, buttonC, buttonD, buttonE, buttonF, buttonG;

extern Widget menupaneA, menupaneB, menupaneC, menupaneD, menupaneE,
              menupaneF, menupaneG;

extern Widget itemA1, itemA2, itemA3, itemA4, itemA5, itemA6, itemA7, itemA8, itemA9, itemA10, itemA11;
extern Widget itemB1, itemB2;
extern Widget itemC1, itemC2, itemC3, itemC4, itemC5, itemC6, itemC7;
extern Widget itemD1, itemD2, itemD3, itemD4, itemD5, itemD6, itemD7, itemD8, itemD9, itemD10, itemD11, itemD12;
extern Widget itemE1, itemE2, itemE3, itemE4, itemE5, itemE6, itemE7, itemE8, itemE9, itemE10, itemE11, itemE12, itemE13;
extern Widget itemF1, itemF2, itemF3, itemF4, itemF5, itemF6, itemF7;
extern Widget itemG1, itemG2, itemG3, itemG4;

extern Widget board1, board2, board3, board4, board5,
              board6, board7, board8, board9, board10, board11, board12, 
              board13, board14, board15, board16;
extern Widget label0, label1, label2, label3, label4, label5, label6,
              input1, input2, input3, input4, input5, input6;
extern Widget button0, button1, button2, button3;

extern Widget flowidinput;

extern Widget srclabel;

extern Widget dir1label;

extern Widget inputwidget;

extern Widget dialog0;
extern Widget dialog[17];
extern Widget dialogShell;
extern Widget helpShell;
extern Widget helpDialog;

extern int shellFlag;

extern Widget text;
extern Widget textpann;

extern Widget textsrc;
extern Widget textsink;

extern int fileFlag;

extern int textFlag;
extern int helpFlag;

extern int dirFlag;
extern int exitFlag;

extern int vprepFlag;
extern int punfdFlag;
extern int vspecFlag;
extern int memoFlag;

extern Widget vprepOn, vprepOff, punfdOn, punfdOff, vspec0, vspec1, vspec2, memoOn, memoOff;
extern Widget radio1, radio2, radio3, radio4;

/* extern int textFlag; */

extern char SRCNAME[TEMPSTRINGLEN];     /* Similix source name */
extern char SCMNAME[TEMPSTRINGLEN];     /* Scheme source name */
extern char FUNCNAME[TEMPSTRINGLEN];    /* the main function name of Similix Prog */
extern char ANNNAME[TEMPSTRINGLEN];     /* Annotated Prog. */

extern char RESNAME[TEMPSTRINGLEN];     /* Residual Prog.*/
extern char RFUNCNAME[TEMPSTRINGLEN];   /* Residual goal func.*/

extern char COMNAME[TEMPSTRINGLEN];     /* Compile Prog.*/
extern char CFUNCNAME[TEMPSTRINGLEN];   /* Compile Func. */

extern char SInput[TEMPSTRINGLEN];      /* Values of Static input */
extern char DInput[TEMPSTRINGLEN];      /* Values of Dynamic input */
extern char SDDivision[TEMPSTRINGLEN];  /* Binding-time pattern */
extern char ADTNAME[TEMPSTRINGLEN];     /* .adt file name */
extern char VARNAME[TEMPSTRINGLEN];     /* Bound variable name for preprocessed program or residual program */

extern char VALNAME[TEMPSTRINGLEN];     /* The list of args for the souce goal */
extern char RVALNAME[TEMPSTRINGLEN];    /* The list of args for the residual goal */

extern char RUNTIME[TEMPSTRINGLEN];     /* Running times */
extern char SPECTIME[TEMPSTRINGLEN];    /* Spec. or compiling times */

extern char PRTYPE[TEMPSTRINGLEN];      /* Printer type */
extern char PRNAME[TEMPSTRINGLEN];      /* Printer name */

extern char FLOWID[TEMPSTRINGLEN];      /* Num of flow class */

extern XFontStruct *font0Struct;        /* Font0 data: "8x13bold" */
extern XFontStruct *font1Struct;        /* Font1 data: "9x15" */
extern XFontStruct *font2Struct;        /* Font2 data: "lucidasans-bold-18" */

/*****************************************************************************/





