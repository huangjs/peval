/* assembly.c    Test generation of C from Graphical Programming Server      */

/* 05 Apr 05 */


/* (cc assembly.c -lm ; a.out)       */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

/* Some functions that may be used in generated code */
#define  max(A,B)  ((A) > (B) ? (A) : (B))
#define  min(A,B)  ((A) < (B) ? (A) : (B))
#define  oddp(A)   ((A) & 1)
#define  evenp(A)  (1 - ((A) & 1))
#define  char(S,I) (* ((S) + (I)))

/* Define a record PARTC */

typedef struct partc {
  char * name;
  int   size;
  float weight;
  int pretty;
  struct partc * next;
  } *PARTCP;

typedef struct assemblyc {
  char * name;
  struct partc * ptr;
  } *ASMC;

/* Your data type definitions here */

/* concatenate two strings, free the first one. */
char * concat(char s[], char t[])
{
  char * new;
  new = (char *) malloc(strlen(s) + strlen(t) + 1);
  strcpy(new, s);
  strcat(new, t);
  free(s);
  return new;
}

/* make a PARTC record */
PARTCP ptalloc(char * nm, int sz, float wt, int pr, PARTCP nxt)
  { PARTCP pt = (PARTCP) calloc(1, sizeof(struct partc));
    pt->name = nm;
    pt->size = sz;
    pt->weight = wt;
    pt->pretty = pr;
    pt->next = nxt;
    return pt;
  }

/* make a ASMC record */
ASMC asmalloc(char * nm, PARTCP pts)
  { 
    ASMC zasm = (ASMC) calloc(1, sizeof(struct assemblyc));
    zasm->name = nm;
    zasm->ptr = pts;
    return zasm;
  }

int * makearray (int n) { return malloc(n*4); }

/* Your generated functions here */


int main()
{ int res, i;
  PARTCP pta, ptb, ptc, ptd, pte, ptf;
  ASMC myasm;

  ptf = ptalloc("grommet", 7, 6.8, 1, NULL);   /* Make PARTC test data */
  pte = ptalloc("gadget", 2, 0.3, 0, ptf);
  ptd = ptalloc("widget", 1, 1.4, 1, pte);
  ptc = ptalloc("grommet", 5, 2.5, 0, ptd);
  ptb = ptalloc("gadget", 3, 2.7, 0, ptc);
  pta = ptalloc("widget", 4, 3.1, 1, ptb);
  myasm = asmalloc("fromulus", pta);

/* Calls to your generated functions here */
  /* Example:    printf("gpfn1 = %3d     sum size\n", gpfn1(myasm)); */

  exit(0);
}
