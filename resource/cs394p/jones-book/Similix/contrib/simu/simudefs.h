
/* simudefs.h --- All constants are defined here. */

/*****************************************************************************/
/*****************************************************************************/

/* used in simua.c */
#ifndef SCM
#define SCM "/home/hugin/mix/bin/sun4/scm"
#endif

#ifndef SIMILIXPATH
#define SIMILIXPATH "/home/ask2/lpzong/Similix/system"
#endif

/* used in simu0.c */
#ifndef HELPFILE
#define HELPFILE "/home/ask2/lpzong/Simu/system/simu.manual.nroff"
#endif

/*****************************************************************************/

/* used in simua.c */
#ifndef SIMILIXINITIALFILE
#define SIMILIXINITIALFILE "sim-scm.scm"
#endif

#ifndef SIMUSHOWFILE
#define SIMUSHOWFILE "simu.scm"
#endif

#ifndef SIMILIXSHOWALLFLOWFILE
#define SIMILIXSHOWALLFLOWFILE "abssyn0.scm"
#endif

#ifndef SIMUSHOWALLFLOWFILE
#define SIMUSHOWALLFLOWFILE "simu0.scm"
#endif

#ifndef SIMILIXSHOWFLOWIDFILE
#define SIMILIXSHOWFLOWIDFILE "abssyn1.scm"
#endif

#ifndef SIMUSHOWFLOWIDFILE
#define SIMUSHOWFLOWIDFILE "simu1.scm"
#endif

/*****************************************************************************/

/* name for each showing page widget. */
#define SIMUNAME            "simu"

/* The default width of simu */
#define DEFAULT_WIDTH        700

#define CREATEFLAG             0
#define OPENFLAG               1

#define SIMUZERO               0
#define SIMUONE                1
#define SIMUTWO                2

#define TEMPFILENAME    "temp%%%"
#define TEMPFILENAME1   "temp1%%%"
#define TEMPFILENAME2   "temp2%%%"

#define TITLEEDITOR     "simu editor: "
#define TITLESHOW       "simu showing: "
#define TITLEHELP       "simu manual"
#define TITLECMD        "simu command-line"

#define NUMBEROFDIALOG         16
#define TEMPSTRINGLEN         512
#define BLOCKLEN             1024
#define WIDGETWIDTH           700 
#define WIDGETHEIGHT          400
#define WIDGETBDWIDTH           2
#define CHILDRENNUMBER         15
#define TIMENUMBER              4

#define FRONTENDID              1
#define PREPROCESSID            2
#define SPECIALIZEID            3
#define COGENID                 4
#define COMPILEID               5
#define TIMINGID                6
#define PRINTANNID              7
#define PRINTRESID              8
#define FILETOLISTID            9
#define FILETOITEMID           10
#define RUNORGID               11
#define TIMINGORGID            12
#define RUNRESID               13
#define TIMINGRESID            14
#define PRINTCOMID             15
#define WRITEANNID             16

#define FONT0NAME          "8x13bold"
#define FONT1NAME          "9x15"
#define FONT2NAME          "lucidasans-bold-18" 

#define VERBOSEPREPLABEL   "Verbose preprocess  "
#define POSTUNFDLABEL      "   Post unfolding  " 
#define VERBOSESPECLABEL1  "Verbose specialization"
#define VERBOSESPECLABEL2  "Verbose specialization"
#define VERBOSESPECLABEL3  "Verbose specialization"
#define MEMOIZATIONLABEL   "  Memoization  "

/*****************************************************************************/


#define RESETHELP   "Similix: (reset-similix)\n\nPurpose: Resets flags and other global variables used by Similix.\n         Useful for resetting flags and for freeing heap space.\n         These flags are relating to verbose preprocessing, post\n         unfolding, verbose specializing and memoization.\n\n"


#define SIMTOSCHEMEHELP    "Input  : The file name of Similix Scheme program\n\nSimilix: (sim2scheme sim-file)\n\nPurpose: Converts Similix Scheme programs into\n         stand-alone Scheme programs which can\n         be run without loading Similix first.\n\n"


#define COMPSIMFILEHELP    "Input  : The file name of Similix Scheme program\n\nSimilix: (compile-sim-file sim-file)\n\nPurpose: Compiles sim-file.\n\n"


#define COMPLOADSIMFILEHELP "Input  : The file name of Similix Scheme program\n\nSimilix: (compile-and-load-sim-file sim-file)\n\nPurpose: Compiles and loads sim-file.\n\n"


#define LOADSIMFILEHELP    "Input  : The file name of Similix Scheme program\n\nSimilix: (loads sim-file)\n\nPurpose: Loads sim-file.\n\n"


#define LOADSCHEMEFILEHELP "Input  : The file name of Scheme program\n\nSimilix: (load scheme-file)\n\nPurpose: Loads scheme-file.\n\n"


#define FILETOLISTHELP     "Input  : (1) The file name\n         (2) The list name\n\nSimilix: (define list-name (file->list file))\n\nPurpose: Returns a list of objects in the file.\n\n"


#define FILETOITEMHELP     "Input  : (1) The file name\n         (2) The item name\n\nSimilix: (define item-name (file->item file))\n\nPurpose: Returns the first object in the file.\n\n"


#define CREATEFILEHELP     "Input  : The file name\n\nPurpose: Creates the file in the editor.\n\n"


#define OPENFILEHELP       "Input  : The file name\n\nPurpose: Opens the file in the editor.\n\n"


/*****************************************************************************/


#define SAVESRCHELP      "If press OK, then the text in the window will be saved\nas the file; if press Cancel, nothing will happen.\n\n"


#define CLOSESRCHELP     "If press OK, then the file and the editor will be\nclosed; if press Cancel, nothing will happen.\n\n"


/*****************************************************************************/


#define FRONTENDHELP   "Input  : (1) The file name of Similix Scheme program\n         (2) The goal function name\n\nSimilix: (front-end goal source-sim-file)\n\nPurpose: Expands and converts the program in the file\n         with the goal function into internal abstract\n         syntax.\n\n"


#define LOADADTFILEHELP   "Input  : The .adt file name\n\nSimilix: (loadt! file)\n\nPurpose: Recompiles and reloads the primitive operators\n         and constructors.\n\n"


/*****************************************************************************/


#define PREPROCESSHELP   "Input  : (1) The file name of Similix Scheme program\n         (2) The goal function name\n         (3) The binding-time pattern which is a list of binding-\n             time values; a binding-time value being one of either\n             s, static, d, dynamic, or the symbol denoting dynamic\n             input (initially ***), where s or static specifies static\n             first-order input, d, dynamic, or the symbol denoting\n             dynamic input specifies dynamic input.\n\nSimilix: (preprocess! goal bt-pat source-sim-file)\n\nPurpose: Front-ends and preprocesses the program in the file with the\n         goal procedure w.r.t. binding-time pattern. If all of entries\n         are empty, it's used to display the information about input\n         formats to preprocess! in Similix.\n\n"


#define CURRENTANNHELP   "Input  : Press OK respectively, or input the flow number\n         then press its OK button.\n\nSimilix: (A) (writelpp (showpall) \"temp%%%\")\n         (B) (writelpp (showpallflow) \"temp%%%\")\n         (C) (displayflow ID)\n             (writelpp (showpallflowid) \"temp%%%\")\n\nPurpose: Shows the latest generated preprocessed program with the\n         pretty-printing in the separated showing window, here\n         temp%%% is used as the temporary file name.\n         (A) Gets the current preprocessed program without any\n             flow information.\n         (B) Gets the current preprocessed program with all of\n             flows.\n         (C) Gets the current preprocessed program with the\n             specified flow number.\n\n"


#define WRITEANNHELP   "Input  : (1) The file name of the preprocessed program without any flow\n         (2) The file name of the preprocessed program with all of flows\n         (3) The flow number\n         (4) The file name of the preprocessed program with the number of flow\n\nSimilix: (A) (writelpp (showpall) file)\n         (B) (writelpp (showpallflow) file)\n         (C) (displayflow ID)\n             (writelpp (showpallflowid) file)\n\nPurpose: Writes the current preprocessed program, or the current preprocessed\n         program with all of the data flow classes or certain data flow class,\n         on to the file with the pretty-printing.\n         (A) Writes the current preprocessed program without any flow.\n         (B) Writes the current preprocessed program with all of flows.\n         (C) Writes the current preprocessed program with the specified flow\n             number.\n\n"


#define SHOWANNHELP     "Input  : The preprocessed file name\n\nPurpose: Shows the preprocessed program which has been written\n         in the separated showing window.\n\n"


#define PRINTANNHELP   "Input  : (1) The preprocessed file name\n         (2) The printer type --- 0: lineprinter, other: laserprinter\n         (3) The printer name\n\nUnix   : (A) format -TLaserPrinterName -ms file\n         (B) nroff -ms file | pciq -PLinePrinterName -FDNROFF\n\nPurpose: Prints out the preprocessed program using the printer.\n         If the printer type is specified by 0, then the lineprinter\n         is used to print out the file, and the actual command (B)\n         will be executed. The corresponding font which is displayed\n         as boldface in the screen will become underscore one in the\n         paper. Otherwise, if the printer type is specified by any\n         other value, then the laserprinter is used, and the actual\n         command (A) will be executed. The corresponding font which\n         is displayed as boldface in the screen will also become\n         boldface one in the paper.\n\n"


#define VERBOSEPREPHELP   "Input  : Presses one of the two toggles On and Off\n\nSimilix: (verbose-prep-on) and (verbose-prep-off)\n\nPurpose: Sets and clears the verbose preprocessing flag respectively.\n         Initially, the flag is set.\n\n"


#define MEMOIZATIONHELP    "Input  : Presses one of the two toggles On and Off\n\nSimilix: (standard-memoization-on) and (standard-memoization-off)\n\nPurpose: Sets and clears the standard memoization flag respectively.\n         Initially, the flag is set.\n         When the flag is set, standard memoization points are\n         inserted when programs are preprocessed. Standard memoization\n         points are generated from dynamic conditionals (conditionals\n         that are not reduced at specialization time due to a dynamic\n         test) and dynamic lambda-expressions (lambdas that are not\n         beta-reduced at specialization time).\n         When the flag is not set, memoization points are only inserted\n         when user-specified by _sim-memoize. This is useful as it gives\n         the user full control of memoization point insertion; dynamic\n         choice of static values is enabled when the flag is cleared.\n\n"


/*****************************************************************************/


#define SPECIALIZEHELP   "Input  : (1) The file name of Similix Scheme program\n         (2) The goal function name of Similix Scheme program\n         (3) The argument pattern which is a list of pe-values; a pe-value\n             being either the symbol *** denoting a dynamic value or some\n             static value (if the static value is the name of list, then\n             the name should be led by the symbol ,). The length of argument\n             pattern must be equal to the arity of the goal function.\n         (4) The file name of residual program\n         (5) The goal function name of residual program\n         (6) The number of specializing times\n\nSimilix: (A) (similix)\n         (B) (similix goal arg-pat source-sim-file [n] [resid-goal]\n              [resid-sim-file])\n         (C) (similix arg-pat [n] [resid-goal] [resid-sim-file])\n\nPurpose: Partially evaluates the program in the file with goal procedure\n         with respec to the input specified by arg-pat.\n         If all of entries are empty, it's used to display the\n         information about input formats to similix in Similix.\n         If resid-goal is supplied, the goal function of the residual\n         program gets the name resid-goal. Otherwise, it gets the default\n         name goal-0.\n         (C) Specializes an already preprocessed program with respect to \n         the input specified by arg-pat.\n\n"


#define CURRENTRESHELP   "Similix: (writelpp (residual-program) \"temp%%%\")\n\nPurpose: Shows the latest generated residual program with the\n         pretty-printing in the separated showing window, here\n         temp%%% is used as the temporary file name.\n\n"


#define WRITERESHELP   "Input  : The residual program name\n\nSimilix: (writelpp (residual-program) file)\n\nPurpose: Writes the latest generated residual program\n         with the pretty-printing.\n\n"


#define SHOWRESHELP    "Input  : The residual program name\n\nPurpose: Shows the residual program which has been written\n         in the separated showing window.\n\n"


#define PRINTRESHELP  "Input  : (1) The residual program name\n         (2) The printer type --- 0: lineprinter, other: laserprinter\n         (3) The printer name\n\nUnix   : (A) lpr -Pprintername file\n         (B) pciq -Pprintername file\n\nPurpose: Prints out the residual program using the printer.\n         If the printer type is specified by 0, then the lineprinter\n         is used to print out the file, and the actual command (B)\n         will be executed. Otherwise, if the printer type is specified\n         by any other value, then the laserprinter is used, and the\n         actual command (A) will be executed.\n\n"


#define POSTUNFDHELP       "Input  : Presses one of the two toggles On and Off\n\nSimilix: (postunfold-on) and (postunfold-off)\n\nPurpose: Sets and clears the post-unfold flag respectively.\n         Initially, the flag is set.\n\n"


#define VERBOSESPECHELP    "Input  : Presses one of the three toggles 0, 1 and 2\n\nSimilix: (verbose-spec n), where n must be 0, 1 or 2.\n\nPurpose: Helps to locate what cause the loop, if specialization\n         does not terminate. If n = 0, no trace information is\n         printed; this is the initial value. If n = 1, information\n         is printed each time the specializer encounters a\n         specialization/memoization point. The information printed\n         is sp:name, where name is the name of the specialization\n         point in the source program. If n = 2, the information\n         printed by if n = 1 is also printed. Additionally, each\n         time a call to a user-defined procedure P is unfolded, the\n         name P is printed. The two forms are distinguishable as\n         specialization point names are preceded by sp:.\n\n"


/*****************************************************************************/


#define COGENHELP   "Input  : (1) The file name of Similix Scheme program\n         (2) The goal function name\n         (3) The binding-time pattern which is a list of binding-\n             time values; a binding-time value being one of either\n             s, static, d, dynamic, or the symbol denoting dynamic\n             input (initially ***), where s or static specifies static\n             first-order input, d, dynamic, or the symbol denoting\n             dynamic input specifies dynamic input.\n         (4) The compiler program name\n         (5) The compiler goal function name\n         (6) The number of compiler generation times\n\nSimilix: (A) (cogen)\n         (B) (cogen goal bt-pat source-sim-file [n] [cmp-goal]\n              [cmp-sim-file])\n         (C) (cogen [n] [cmp-goal] [cmp-sim-file])\n\nPurpose: Generates a generating extension of the program in the file\n         with the goal function.\n         If all of entries are empty, it's used to display the\n         information about input formats to cogen in Similixn.\n         If n is specified, the compiler generator is applied n times\n         to the preprocessed program and timing information is output.\n         If cmp-goal is supplied, the goal function of the generated\n         generating extension gets the name cmp-goal. Otherwise, it\n         gets the default name _sim-specialize-0.\n         (C) Curries an already preprocessed program. The form is useful\n         for avoiding preprocessing if the program to be curried has\n         already been preprocessed.\n\n"


#define CURRENTCOMHELP   "Similix: (writelpp (current-compiler) \"temp%%%\")\n\nPurpose: Shows the latest generated compiler program with the\n         pretty-printing in the separated showing window, here\n         temp%%% is used as the temporary file name.\n\n"


#define WRITECOMHELP   "Input  : The compiler program name\n\nSimilix: (writelpp (current-compiler) file)\n\nPurpose: Writes the latest generated compiler program\n         with the pretty-printing.\n\n"


#define SHOWCOMHELP    "Input  : The compiler program name\n\nPurpose: Shows the compiler program which has been written\n         in the separated showing window.\n\n"


#define PRINTCOMHELP  "Input  : (1) The compiler program name\n         (2) The printer type --- 0: lineprinter, other: laserprinter\n         (3) The printer name\n\nUnix   : (A) lpr -Pprintername file\n         (B) pciq -Pprintername file\n\nPurpose: Prints out the compiler program using the printer.\n         If the printer type is specified by 0, then the lineprinter\n         is used to print out the file, and the actual command (B)\n         will be executed. Otherwise, if the printer type is specified\n         by any other value, then the laserprinter is used, and the\n         actual command (A) will be executed.\n\n"


/*****************************************************************************/


#define COMPILEHELP   "Input  : (1) The file name of compiler program\n         (2) The goal function name of compiler program\n         (3) The argument pattern which is a list of pe-values; a pe-value\n             being either the symbol *** denoting a dynamic value or some\n             static value (if the static value is the name of list, then\n             the name should be led by the symbol ,). The length of argument\n             pattern must be equal to the arity of the goal function.\n         (4) The file name of residual program\n         (5) The goal function name of residual program\n         (6) The number of compiling times\n\nSimilix: (A) (comp)\n         (B) (comp [cmp-goal] [cmp-file] arg-pat [n] [resid-goal]\n              [resid-sim-file])\n\nPurpose: Applies a generating extension generated by cogen to arg-pat.\n         The length of arg-pat must be equal to the length of the bt-pat\n         that was supplied to cogen when generating the generating\n         extension. For those arguments that were specified as static in\n         bt-pat when running cogen, supply a value in arg-pat. For those\n         arguments that were specified as dynamic in bt-pat when running\n         cogen, supply the symbol ***.\n         If all of entries are empty, it's used to display the\n         information about input formats to comp in Similix.\n         If cmp-goal is supplied, the goal function of the generating\n         extension is assumed to have this name (this name must be\n         equal to the cmp-goal specified when generating the generating\n         extension by cogen).  Otherwise, the default name _sim-specialize-0\n         is chosen.\n         If cmp-file is supplied, the generating extension is read from this\n         file. Otherwise, the program in **Similix-current-compiler** is\n         used.\n         If n is supplied, the generating extension is applied n times and\n         timing information is output.\n         If resid-goal is supplied, the goal function of the residual program\n         gets the name resid-goal. Otherwise, it gets the default name goal-0\n         where goal is the goal name of the source program that was specified\n         when generating the generating extension.\n\n"


/*****************************************************************************/


#define RUNORGHELP   "Input  : (1) The goal function name of Similix Scheme program\n         (2) A list of arguments to the goal function\n         (3) The number of running times\n\nSimilix: (A) (apply goal args)\n         (B) (ntimes (lambda() (apply goal args)) [n])\n\nPurpose: (A) Executes the goal function in a sim-file with respec\n             to all of arguments, only after the respective sim-file\n             being loaded.\n         (B) Applies (lambda() (apply goal args)) n times and\n             prints the respective timing information of running.\n\n"


#define TIMINGORGHELP    "Input  : (1) The goal function name of Similix Scheme program\n         (2) A list of arguments to the goal function\n         (3) The number of running times\n\nSimilix: (ntimes (lambda() (apply goal args)) [n])\n\nPurpose: Applies (lambda() (apply goal args)) n times and\n         prints the respective timing information of running.\n\n"


#define RUNRESHELP   "Input  : (1) The goal function name of residual program\n         (2) A list of dynamic arguments to the residual goal function\n         (3) The number of running times\n\nSimilix: (A) (apply resid-goal args)\n         (B) (ntimes (lambda() (apply resid-goal args)) [n])\n\nPurpose: (A) Executes the goal function in a resid-file (the latest\n             generated one), with respec to all of dynamic arguments.\n             If resid-goal is supplied in the specialization, the goa\n             function of the residual program gets the name resid-goal.\n             Otherwise, it gets the default name goal-0.\n         (B) Applies (lambda() (apply resid-goal args)) n times and\n             prints the respective timing information of running.\n             If resid-goal is supplied in the specialization, the goal\n             function of the residual program gets the name resid-goal.\n             Otherwise, it gets the default name goal-0.\n\n"


#define TIMINGRESHELP    "Input  : (1) The goal function name of residual program\n         (2) A list of dynamic arguments to the residual goal function\n         (3) The number of running times\n\nSimilix: (ntimes (lambda() (apply resid-goal args)) [n])\n\nPurpose: Applies (lambda() (apply resid-goal args)) n times and\n         prints the respective timing information of running.\n         If resid-goal is supplied in the specialization, the goal\n         function of the residual program gets the name resid-goal.\n         Otherwise, it gets the default name goal-0.\n\n"


/*****************************************************************************/

#define EXITSIMUHELP   "If press OK, then the whole window system of Simu will be closed,\nand Similix will exit; if press Cancel, nothing will happen.\n\n"


/*****************************************************************************/


#define CLOSESHOWINGHELP  "If press OK, then the shown file and the showing window will be\nclosed; if press Cancel, nothing will happen.\n\n"


/*****************************************************************************/

