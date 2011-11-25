
/* simu01.c --- The common functions for communication between UI and Similix. */

#include "simudefs.h"
#include "simutype.h"
#include "simuextv.h"
#include "simuextf.h"
#include <signal.h>
#include <fcntl.h>

XawTextPosition position0;   /* the beginning position in the text widget */
XawTextPosition position01;  /* the ending position in the text widget */

int pid;           /* the preprocess ID */
int pidchild;      /* the child process (scm) ID */
int to_child[2],   /* pipe descriptors from parent->child */
    to_parent[2];  /* pipe descriptors from child->parent */

/*****************************************************************************/
/*****************************************************************************/

/*
   Starts up the program Similix and establishes a two-way connection between
   Similix and Simu, by creating two pipes that connect the stdin and stdout 
   of the parent process (Simu) to the stdout and stdin respectively of the
   child process (Similix). This function can be used to extablish similar 
   pipes between any two programs.
*/

SITalkTo(cmd)
char *cmd;
{
   pipe(to_child);
   pipe(to_parent);


   if ((pid = fork()) == 0)         /* in the child */
   {
      pidchild = pid;
      close(0);                     /* redirect stdin */
      dup2(to_child[0], 0);
      close(1);                     /* redirect stdout */
      dup2(to_parent[1], 1);
      close(2);                     /* ???? */
      dup2(to_parent[1], 2);        /* ???? */

      setbuf(stdout, NULL);         /* no buffered output */

      signal(16, SIG_IGN);
      signal(SIGPIPE, SIG_IGN);
      signal(SIGINT, SIG_IGN);

      close(to_child[0]);           /* close pipes */     
      close(to_child[1]);
      close(to_parent[0]);
      close(to_parent[1]);

      execlp(cmd, cmd, NULL);       /* exec the new cmd */ 
   }
   else if (pid > 0)                /* in th parent */ 
   {
      close(0);                     /* redirect stdin */
      dup2(to_parent[0], 0);
      close(1);                     /* redirect stdout */
      dup2(to_child[1], 1);
      close(2);                     /* ???? */
      dup2(to_child[1], 2);         /* ???? */

      setbuf(stdout, NULL);         /* no buffered output */

      signal(SIGCHLD, SIG_IGN); 
      signal(SIGPIPE, SIG_IGN);
      signal(SIGINT, SIG_IGN);

      close(to_child[0]);           /* close pipes */
      close(to_child[1]);
      close(to_parent[0]);
      close(to_parent[1]);
   }
   else                             /* error */
   {
      fprintf(stderr, "Couldn't fork process %s\n", cmd);
      exit(1);
   }
 
}

/*****************************************************************************/

/*
   The input callback GetFromSimilix handles output from Similix: reads from
   stdin, and after adding NULL to the end of the buffer, calls 
   InsertTextInWidget to display the string in the text widget.
*/

GetFromSimilix()
{
   int nbytes, i;
   int fid;
   char buf[BLOCKLEN];


   /* Get all pending input and append it to the text widget. */
   fid = fileno(stdin);
   fcntl(fid, O_NONBLOCK);
   while ((nbytes = read(fid, buf, BLOCKLEN)) > 0)
   {
      buf[nbytes] = '\0';
      InsertTextInWidget0(buf);

      if ((buf[nbytes - 2] == '>') && 
          (buf[nbytes - 1] == ' '))
         return;
   }
}

/*
void GetFromSimilixNew(client_data, fid, id)
XtPointer client_data;
int *fid;
XtInputId *id;
*/
void GetFromSimilixNew()
{
   int nbytes, i;
   char buf[BLOCKLEN];
   char buf1[BLOCKLEN];


   /* Get all pending input and append it to the text widget. */
   nbytes = read(fileno(stdin), buf, BLOCKLEN);
   buf[nbytes] = '\0';
   InsertTextInWidget0(buf);
/*
      if ((buf[nbytes - 2] == '>') && 
          (buf[nbytes - 1] == ' '))
         fileFlag = True;
*/
}

/*****************************************************************************/

/*
   This function sends the command buf to stdout, and prints it in the text 
   widget.
*/

SendToSimilix(buf)
char *buf;
{
   fprintf(stdout, "%s", buf); 
   fprintf(stdout, "\n");
/*
   InsertTextInWidget(buf, strlen(buf));        
   InsertTextInWidget("\n", strlen("\n"));
*/
   /* New version */

   InsertTextInWidget0(buf);        
   InsertTextInWidget0("\n");
}

/*****************************************************************************/

/*
   This function inserts buf at the current cursor position in the text widget.
*/

InsertTextInWidget(buf, len)
char *buf;
int len;       /* the lenth of text buf */
{
   int i, j;   /* the counter pointers of text buf */  
   char tmpstr[TEMPSTRINGLEN];


   i = 0;
   j = 1;
   while (j <= len)
   {
      GetNextString(i, tmpstr, buf); 

      if ((buf[i] == '(') && (buf[i + 1] == '_'))
      {
         InsertTextInWidgetWithFont(tmpstr, FONT1NAME);
      }
      else
         InsertTextInWidget0(tmpstr);

      i = i + strlen(tmpstr);
      j = i + 1;
   }
}

/*****************************************************************************/

InsertTextInWidget0(buf)
char *buf;
{
   XawTextBlock *txt = XtNew(XawTextBlock);


   txt->firstPos = 0;
   txt->length = strlen(buf);
   txt->format = (unsigned long) FMT8BIT;
   txt->ptr = buf;

   position0 = XawTextGetInsertionPoint(textpann);
   XawTextReplace(textpann, position0, position0, txt);
   XawTextSetInsertionPoint(textpann, position0 + strlen(buf));

   XtFree(txt);
}

/*****************************************************************************/

/*
   This function insert bufs at the current cursor position in the text widget
   with font.
*/

InsertTextInWidgetWithFont(buf, fontname)
char *buf;
char *fontname;
{
   XawTextPosition position, position1;
   XawTextBlock *txt = XtNew(XawTextBlock);
   XFontStruct *XLoadQueryFont();


   txt->firstPos = 0;
   txt->length = strlen(buf);  
   txt->format = (unsigned long) FMT8BIT;
   txt->ptr = buf;

   position0 = XawTextGetInsertionPoint(textpann);
   XawTextSetInsertionPoint(textpann, position0);
   position1 = position0;
   XawTextReplace(textpann, position0, position1, txt);
   XawTextDisplay(textpann);

   XtFree(txt);
}

/*****************************************************************************/

/*
   This function gets a string in a buf from the position of i0, ignoring any
   invisible leading charaters.
*/

GetNextString(i0, tmpstr, buf)
int i0;
char *tmpstr;
char *buf;
{
   int i;
   int j = 0;


   for (i = i0; ((buf[i] != ' ') && (buf[i] != '\n') && (buf[i] != '\0')); i++)
      tmpstr[j++] = buf[i];
   if (buf[i] == ' ')
   {
      tmpstr[j] = ' ';
      tmpstr[j +1] = '\0';
   }
   else if (buf[i] == '\n')
   {
      tmpstr[j] = '\n';
      tmpstr[j +1] = '\0';
  }
   else if (buf[i] == '\0')
      tmpstr[j] = '\0'; 

}

/*****************************************************************************/
