typedef struct {double d; int s;} double_or_symbol;
typedef struct {int i; int s;} int_or_symbol;
#define NONSYMBOL -1
#define NIL 0
#define T 1
#define PI 3.141592653589793
double_or_symbol double_or_symbol_result;
double_or_symbol coerce_double_to_double_or_symbol(x)
double x;
{ double_or_symbol_result.d = x;
  double_or_symbol_result.s = NONSYMBOL;
  return(double_or_symbol_result);}
double_or_symbol coerce_symbol_to_double_or_symbol(x)
int x;
{ double_or_symbol_result.s = x;
  return(double_or_symbol_result);}
int_or_symbol int_or_symbol_result;
int_or_symbol coerce_int_to_int_or_symbol(x)
int x;
{ int_or_symbol_result.i = x;
  int_or_symbol_result.s = NONSYMBOL;
  return(int_or_symbol_result);}
int_or_symbol coerce_symbol_to_int_or_symbol(x)
int x;
{ int_or_symbol_result.s = x;
  return(int_or_symbol_result);}
/* needs work: since this is specific to APE */
double normalize_rotation(rotation)
double rotation;
{ loop:
  if (rotation>PI) {rotation = rotation-2.0*PI; goto loop;}
  if (rotation<=-PI) {rotation = rotation+2.0*PI; goto loop;}
  return(rotation);}
