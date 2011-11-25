
/* ScrollByL.h --- ScrollByLine Widget (subclass of Simple) */

/*****************************************************************************/
/*****************************************************************************/

#ifndef _XtScrollByLine_h
#define _XtScrollByLine_h

/* The default fonts. */
#ifdef ATHENA
#define MANPAGE_NORMAL   "9x15"
#define MANPAGE_BOLD     "*-new century schoolbook-bold-i-normal--*-120-*"
#define MANPAGE_ITALIC   "helvetica-bold12"
#define MANPAGE_SYMBOL   "9x15"
#else
#define MANPAGE_NORMAL   "9x15"
#define MANPAGE_BOLD     "9x15"     /* ##### */
#define MANPAGE_ITALIC   "9x15bold"
#define MANPAGE_SYMBOL   "9x15"
#endif

#define XtNindent           "indent"
#define XtNforceVert        "forceVert"
#define XtNmanualFontNormal "manualFontNormal"
#define XtNmanualFontBold   "manualFontBold"
#define XtNmanualFontItalic "manualFontItalic"
#define XtNmanualFontSymbol "manualFontSymbol"

#define XtCIndent           "Indent"

/* Class record constants */

extern WidgetClass scrollByLineWidgetClass;

typedef struct _ScrollByLineClassRec *ScrollByLineWidgetClass;
typedef struct _ScrollByLineRec      *ScrollByLineWidget;

#endif

/*****************************************************************************/

