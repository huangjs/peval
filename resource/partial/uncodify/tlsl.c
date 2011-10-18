#include <math.h>
typedef struct {double d; int s;} double_or_symbol;
typedef struct {int i; int s;} int_or_symbol;
#define NONSYMBOL -1
#define NIL 0
#define T 1
extern double_or_symbol coerce_double_to_double_or_symbol();
extern double_or_symbol coerce_symbol_to_double_or_symbol();
extern int_or_symbol coerce_int_to_int_or_symbol();
extern int_or_symbol coerce_symbol_to_int_or_symbol();
extern double normalize_rotation();
extern double_or_symbol double_or_symbol_result;
extern int_or_symbol int_or_symbol_result;
double tlsl_v408;
double tlsl_v406;
double tlsl_v404;
double tlsl_v402;
double tlsl_v400;
double tlsl_v398;
double tlsl_v396;
double tlsl_v394;
double tlsl_v375;
double tlsl_v391;
double tlsl_v390;
double tlsl_v392;
double tlsl_v384;
int tlsl_v156;
int tlsl_p12;
double tlsl_m12;
int tlsl_p198;
double tlsl_m198;
int tlsl_p27;
int tlsl_m27;
int tlsl_p272;
double tlsl_m272;
int tlsl_p297;
double tlsl_m297;
int tlsl_p91;
int tlsl_m91;
int tlsl_p106;
double tlsl_m106;
int tlsl_p101;
double tlsl_m101;
int tlsl_p115;
double tlsl_m115;
int tlsl_p129;
double tlsl_m129;
int tlsl_p133;
int tlsl_m133;
int tlsl_p383;
double tlsl_m383;
int tlsl_p270;
double tlsl_m270;
int tlsl_p260;
double tlsl_m260;
int tlsl_p249;
double tlsl_m249;
int tlsl_p379;
double tlsl_m379;
int tlsl_p268;
double tlsl_m268;
int tlsl_p259;
double tlsl_m259;
int tlsl_p246;
double tlsl_m246;
int tlsl_p71;
int tlsl_m71;
int tlsl_p74;
int tlsl_m74;
int tlsl_p73;
int tlsl_m73;
int tlsl_p72;
int tlsl_m72;
int tlsl_v71;
int tlsl_p67;
int tlsl_m67;
int tlsl_p59;
int tlsl_m59;
int tlsl_p56;
double tlsl_m56;
int tlsl_p55;
double tlsl_m55;
int tlsl_p51;
double tlsl_m51;
int tlsl_v59;
int tlsl_p32;
double tlsl_m32;
int tlsl_p50;
double tlsl_m50;
double tlsl_v55;
double tlsl_v50;
int tlsl_p46;
double tlsl_m46;
int tlsl_p43;
int tlsl_m43;
int tlsl_v73;
int tlsl_p63;
int tlsl_m63;
int tlsl_p61;
int tlsl_m61;
int tlsl_v43;
int tlsl_v63;
double tlsl_v32;
int tlsl_p19;
int tlsl_m19;
int tlsl_p17;
int tlsl_m17;
int tlsl_p387;
double tlsl_m387;
int tlsl_p381;
double tlsl_m381;
int tlsl_p365;
double tlsl_m365;
int tlsl_p353;
double tlsl_m353;
int tlsl_p378;
double tlsl_m378;
int tlsl_p364;
double tlsl_m364;
int tlsl_p350;
double tlsl_m350;
int tlsl_p144;
int tlsl_m144;
int tlsl_p148;
int tlsl_m148;
int tlsl_v147;
int tlsl_p145;
int tlsl_m145;
int tlsl_v144;
int tlsl_p140;
int tlsl_m140;
int tlsl_p131;
int tlsl_m131;
int tlsl_p126;
double tlsl_m126;
int tlsl_p125;
double tlsl_m125;
int tlsl_p121;
double tlsl_m121;
int tlsl_v131;
int tlsl_p96;
double tlsl_m96;
int tlsl_p120;
double tlsl_m120;
double tlsl_v125;
double tlsl_v120;
int tlsl_p114;
double tlsl_m114;
int tlsl_p111;
int tlsl_m111;
int tlsl_p136;
int tlsl_m136;
int tlsl_v134;
int tlsl_v111;
int tlsl_v136;
double tlsl_v96;
int tlsl_p83;
int tlsl_m83;
int tlsl_v17;
double tlsl_v114;
double tlsl_v46;
static double tlsl_f12(){if (tlsl_p12) return tlsl_m12; else {tlsl_p12=T;return tlsl_m12=error("Non-numeric argument to MIN");}}
static double tlsl_f198(){if (tlsl_p198) return tlsl_m198; else {tlsl_p198=T;return tlsl_m198=(((tlsl_v400*tlsl_v408)+(tlsl_v398*tlsl_v406))-tlsl_v396);}}
static int tlsl_f27(){if (tlsl_p27) return tlsl_m27; else {tlsl_p27=T;return tlsl_m27=(tlsl_f198()>(0.0));}}
static double tlsl_f272(){if (tlsl_p272) return tlsl_m272; else {tlsl_p272=T;return tlsl_m272=((tlsl_v392*tlsl_v404)+(tlsl_v390*tlsl_v402));}}
static double tlsl_f297(){if (tlsl_p297) return tlsl_m297; else {tlsl_p297=T;return tlsl_m297=(((tlsl_v400*tlsl_v404)+(tlsl_v398*tlsl_v402))-tlsl_v396);}}
static int tlsl_f91(){if (tlsl_p91) return tlsl_m91; else {tlsl_p91=T;return tlsl_m91=(tlsl_f297()>(0.0));}}
static double tlsl_f106(){if (tlsl_p106) return tlsl_m106; else {tlsl_p106=T;return tlsl_m106=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double tlsl_f101(){if (tlsl_p101) return tlsl_m101; else {tlsl_p101=T;return tlsl_m101=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double tlsl_f115(){if (tlsl_p115) return tlsl_m115; else {tlsl_p115=T;return tlsl_m115=error("No applicable method for DISTANCE with argument types (POINT (OR BOOLEAN POINT))");}}
static double tlsl_f129(){if (tlsl_p129) return tlsl_m129; else {tlsl_p129=T;return tlsl_m129=error("SLOT-VALUE called on non-instance");}}
static int tlsl_f133(){if (tlsl_p133) return tlsl_m133; else {tlsl_p133=T;return tlsl_m133=(tlsl_v156?NIL:T);}}
static double tlsl_f383(){if (tlsl_p383) return tlsl_m383; else {tlsl_p383=T;return tlsl_m383=(tlsl_v396*tlsl_v390);}}
static double tlsl_f270(){if (tlsl_p270) return tlsl_m270; else {tlsl_p270=T;return tlsl_m270=(tlsl_f383()-(tlsl_v398*tlsl_f272()));}}
static double tlsl_f260(){if (tlsl_p260) return tlsl_m260; else {tlsl_p260=T;return tlsl_m260=(tlsl_f270()/tlsl_v384);}}
static double tlsl_f249(){if (tlsl_p249) return tlsl_m249; else {tlsl_p249=T;return tlsl_m249=(tlsl_f260()-tlsl_v404);}}
static double tlsl_f379(){if (tlsl_p379) return tlsl_m379; else {tlsl_p379=T;return tlsl_m379=(tlsl_v396*tlsl_v392);}}
static double tlsl_f268(){if (tlsl_p268) return tlsl_m268; else {tlsl_p268=T;return tlsl_m268=((tlsl_v400*tlsl_f272())-tlsl_f379());}}
static double tlsl_f259(){if (tlsl_p259) return tlsl_m259; else {tlsl_p259=T;return tlsl_m259=(tlsl_f268()/tlsl_v384);}}
static double tlsl_f246(){if (tlsl_p246) return tlsl_m246; else {tlsl_p246=T;return tlsl_m246=(tlsl_f259()-tlsl_v402);}}
static int tlsl_f71(){if (tlsl_p71) return tlsl_m71; else {tlsl_p71=T;return tlsl_m71=((fabs(tlsl_f249())<tlsl_v375)?(fabs(tlsl_f246())<tlsl_v375):NIL);}}
static int tlsl_f74(){if (tlsl_p74) return tlsl_m74; else {tlsl_p74=T;return tlsl_m74=((fabs((tlsl_f270()-(0.0)))<tlsl_v375)?(fabs((tlsl_f268()-(0.0)))<tlsl_v375):NIL);}}
static int tlsl_f73(){if (tlsl_p73) return tlsl_m73; else {tlsl_p73=T;return tlsl_m73=(tlsl_v156?tlsl_f74():NIL);}}
static int tlsl_f72(){if (tlsl_p72) return tlsl_m72; else {tlsl_p72=T;return tlsl_m72=(tlsl_v156?tlsl_f74():T);}}
static int tlsl_f67(){if (tlsl_p67) return tlsl_m67; else {tlsl_p67=T;return tlsl_m67=(tlsl_f72()?(tlsl_v156?NIL:((fabs((((tlsl_v392*tlsl_f260())+(tlsl_v390*tlsl_f259()))-tlsl_f272()))<tlsl_v375)?((tlsl_v71=tlsl_f71()),(tlsl_v71?tlsl_v71:(fabs((tlsl_v394-atan2(tlsl_f246(),tlsl_f249())))<tlsl_v375))):NIL)):NIL);}}
static int tlsl_f59(){if (tlsl_p59) return tlsl_m59; else {tlsl_p59=T;return tlsl_m59=(tlsl_f73()?NIL:(tlsl_f67()?tlsl_f133():NIL));}}
static double tlsl_f56(){if (tlsl_p56) return tlsl_m56; else {tlsl_p56=T;return tlsl_m56=(tlsl_f73()?tlsl_f129():(tlsl_f67()?(tlsl_v156?tlsl_f129():tlsl_f260()):tlsl_f129()));}}
static double tlsl_f55(){if (tlsl_p55) return tlsl_m55; else {tlsl_p55=T;return tlsl_m55=(tlsl_v404-tlsl_f56());}}
static double tlsl_f51(){if (tlsl_p51) return tlsl_m51; else {tlsl_p51=T;return tlsl_m51=(tlsl_f73()?tlsl_f129():(tlsl_f67()?(tlsl_v156?tlsl_f129():tlsl_f259()):tlsl_f129()));}}
static double tlsl_f32(){if (tlsl_p32) return tlsl_m32; else {tlsl_p32=T;return tlsl_m32=((tlsl_v59=tlsl_f59()),(((tlsl_v400*((tlsl_v59?tlsl_f56():tlsl_f106())+tlsl_v391))+(tlsl_v398*((tlsl_v59?tlsl_f51():tlsl_f101())+tlsl_v392)))-tlsl_v396));}}
static double tlsl_f50(){if (tlsl_p50) return tlsl_m50; else {tlsl_p50=T;return tlsl_m50=(tlsl_v402-tlsl_f51());}}
static double tlsl_f46(){if (tlsl_p46) return tlsl_m46; else {tlsl_p46=T;return tlsl_m46=(tlsl_f59()?((tlsl_v55=tlsl_f55()),(tlsl_v50=tlsl_f50()),sqrt(((tlsl_v55*tlsl_v55)+(tlsl_v50*tlsl_v50)))):tlsl_f115());}}
static int tlsl_f43(){if (tlsl_p43) return tlsl_m43; else {tlsl_p43=T;return tlsl_m43=(fabs((tlsl_f46()-(0.0)))<tlsl_v375);}}
static int tlsl_f63(){if (tlsl_p63) return tlsl_m63; else {tlsl_p63=T;return tlsl_m63=((tlsl_v73=tlsl_f73()),(tlsl_v73?T:(tlsl_f67()?tlsl_v73:NIL)));}}
static int tlsl_f61(){if (tlsl_p61) return tlsl_m61; else {tlsl_p61=T;return tlsl_m61=((tlsl_f73()?T:(tlsl_f67()?tlsl_f72():NIL))?(tlsl_f63()?NIL:T):NIL);}}
static int tlsl_f19(){if (tlsl_p19) return tlsl_m19; else {tlsl_p19=T;return tlsl_m19=((tlsl_v43=tlsl_f43()),(tlsl_v43?((tlsl_v63=tlsl_f63()),(tlsl_v63?tlsl_v63:(((fabs((tlsl_f198()-(0.0)))<tlsl_v375)?NIL:((tlsl_v32=tlsl_f32()),((fabs((tlsl_v32-(0.0)))<tlsl_v375)?NIL:((tlsl_v32>(0.0))?tlsl_f27():(tlsl_f27()?NIL:T)))))?NIL:T))):(tlsl_v43?NIL:T)));}}
static int tlsl_f17(){if (tlsl_p17) return tlsl_m17; else {tlsl_p17=T;return tlsl_m17=(tlsl_f61()?(tlsl_f19()?tlsl_f59():NIL):NIL);}}
static double tlsl_f387(){if (tlsl_p387) return tlsl_m387; else {tlsl_p387=T;return tlsl_m387=((tlsl_v392*tlsl_v408)+(tlsl_v390*tlsl_v406));}}
static double tlsl_f381(){if (tlsl_p381) return tlsl_m381; else {tlsl_p381=T;return tlsl_m381=(tlsl_f383()-(tlsl_v398*tlsl_f387()));}}
static double tlsl_f365(){if (tlsl_p365) return tlsl_m365; else {tlsl_p365=T;return tlsl_m365=(tlsl_f381()/tlsl_v384);}}
static double tlsl_f353(){if (tlsl_p353) return tlsl_m353; else {tlsl_p353=T;return tlsl_m353=(tlsl_f365()-tlsl_v408);}}
static double tlsl_f378(){if (tlsl_p378) return tlsl_m378; else {tlsl_p378=T;return tlsl_m378=((tlsl_v400*tlsl_f387())-tlsl_f379());}}
static double tlsl_f364(){if (tlsl_p364) return tlsl_m364; else {tlsl_p364=T;return tlsl_m364=(tlsl_f378()/tlsl_v384);}}
static double tlsl_f350(){if (tlsl_p350) return tlsl_m350; else {tlsl_p350=T;return tlsl_m350=(tlsl_f364()-tlsl_v406);}}
static int tlsl_f144(){if (tlsl_p144) return tlsl_m144; else {tlsl_p144=T;return tlsl_m144=((fabs(tlsl_f353())<tlsl_v375)?(fabs(tlsl_f350())<tlsl_v375):NIL);}}
static int tlsl_f148(){if (tlsl_p148) return tlsl_m148; else {tlsl_p148=T;return tlsl_m148=((fabs((tlsl_f381()-(0.0)))<tlsl_v375)?(fabs((tlsl_f378()-(0.0)))<tlsl_v375):NIL);}}
static int tlsl_f145(){if (tlsl_p145) return tlsl_m145; else {tlsl_p145=T;return tlsl_m145=(tlsl_v156?tlsl_f148():T);}}
static int tlsl_f140(){if (tlsl_p140) return tlsl_m140; else {tlsl_p140=T;return tlsl_m140=(tlsl_f145()?(tlsl_v156?NIL:((fabs((((tlsl_v392*tlsl_f365())+(tlsl_v390*tlsl_f364()))-tlsl_f387()))<tlsl_v375)?((tlsl_v144=tlsl_f144()),(tlsl_v144?tlsl_v144:(fabs((tlsl_v394-atan2(tlsl_f350(),tlsl_f353())))<tlsl_v375))):NIL)):NIL);}}
static int tlsl_f131(){if (tlsl_p131) return tlsl_m131; else {tlsl_p131=T;return tlsl_m131=(tlsl_v147?NIL:(tlsl_f140()?tlsl_f133():NIL));}}
static double tlsl_f126(){if (tlsl_p126) return tlsl_m126; else {tlsl_p126=T;return tlsl_m126=(tlsl_v147?tlsl_f129():(tlsl_f140()?(tlsl_v156?tlsl_f129():tlsl_f365()):tlsl_f129()));}}
static double tlsl_f125(){if (tlsl_p125) return tlsl_m125; else {tlsl_p125=T;return tlsl_m125=(tlsl_v408-tlsl_f126());}}
static double tlsl_f121(){if (tlsl_p121) return tlsl_m121; else {tlsl_p121=T;return tlsl_m121=(tlsl_v147?tlsl_f129():(tlsl_f140()?(tlsl_v156?tlsl_f129():tlsl_f364()):tlsl_f129()));}}
static double tlsl_f96(){if (tlsl_p96) return tlsl_m96; else {tlsl_p96=T;return tlsl_m96=((tlsl_v131=tlsl_f131()),(((tlsl_v400*((tlsl_v131?tlsl_f126():tlsl_f106())+tlsl_v391))+(tlsl_v398*((tlsl_v131?tlsl_f121():tlsl_f101())+tlsl_v392)))-tlsl_v396));}}
static double tlsl_f120(){if (tlsl_p120) return tlsl_m120; else {tlsl_p120=T;return tlsl_m120=(tlsl_v406-tlsl_f121());}}
static double tlsl_f114(){if (tlsl_p114) return tlsl_m114; else {tlsl_p114=T;return tlsl_m114=(tlsl_f131()?((tlsl_v125=tlsl_f125()),(tlsl_v120=tlsl_f120()),sqrt(((tlsl_v125*tlsl_v125)+(tlsl_v120*tlsl_v120)))):tlsl_f115());}}
static int tlsl_f111(){if (tlsl_p111) return tlsl_m111; else {tlsl_p111=T;return tlsl_m111=(fabs((tlsl_f114()-(0.0)))<tlsl_v375);}}
static int tlsl_f136(){if (tlsl_p136) return tlsl_m136; else {tlsl_p136=T;return tlsl_m136=(tlsl_v147?T:(tlsl_f140()?tlsl_v147:NIL));}}
static int tlsl_f83(){if (tlsl_p83) return tlsl_m83; else {tlsl_p83=T;return tlsl_m83=((tlsl_v111=tlsl_f111()),(tlsl_v111?((tlsl_v136=tlsl_f136()),(tlsl_v136?tlsl_v136:(((fabs((tlsl_f297()-(0.0)))<tlsl_v375)?NIL:((tlsl_v96=tlsl_f96()),((fabs((tlsl_v96-(0.0)))<tlsl_v375)?NIL:((tlsl_v96>(0.0))?tlsl_f91():(tlsl_f91()?NIL:T)))))?NIL:T))):(tlsl_v111?NIL:T)));}}
void tlsl(tlsl_a408,tlsl_a406,tlsl_a404,tlsl_a402,tlsl_a400,tlsl_a398,tlsl_a396,tlsl_a394,tlsl_a375)
double tlsl_a408;
double tlsl_a406;
double tlsl_a404;
double tlsl_a402;
double tlsl_a400;
double tlsl_a398;
double tlsl_a396;
double tlsl_a394;
double tlsl_a375;
{ tlsl_v408=tlsl_a408;
  tlsl_v406=tlsl_a406;
  tlsl_v404=tlsl_a404;
  tlsl_v402=tlsl_a402;
  tlsl_v400=tlsl_a400;
  tlsl_v398=tlsl_a398;
  tlsl_v396=tlsl_a396;
  tlsl_v394=tlsl_a394;
  tlsl_v375=tlsl_a375;
  tlsl_p12=NIL;
  tlsl_p198=NIL;
  tlsl_p27=NIL;
  tlsl_p272=NIL;
  tlsl_p297=NIL;
  tlsl_p91=NIL;
  tlsl_p106=NIL;
  tlsl_p101=NIL;
  tlsl_p115=NIL;
  tlsl_p129=NIL;
  tlsl_p133=NIL;
  tlsl_p383=NIL;
  tlsl_p270=NIL;
  tlsl_p260=NIL;
  tlsl_p249=NIL;
  tlsl_p379=NIL;
  tlsl_p268=NIL;
  tlsl_p259=NIL;
  tlsl_p246=NIL;
  tlsl_p71=NIL;
  tlsl_p74=NIL;
  tlsl_p73=NIL;
  tlsl_p72=NIL;
  tlsl_p67=NIL;
  tlsl_p59=NIL;
  tlsl_p56=NIL;
  tlsl_p55=NIL;
  tlsl_p51=NIL;
  tlsl_p32=NIL;
  tlsl_p50=NIL;
  tlsl_p46=NIL;
  tlsl_p43=NIL;
  tlsl_p63=NIL;
  tlsl_p61=NIL;
  tlsl_p19=NIL;
  tlsl_p17=NIL;
  tlsl_p387=NIL;
  tlsl_p381=NIL;
  tlsl_p365=NIL;
  tlsl_p353=NIL;
  tlsl_p378=NIL;
  tlsl_p364=NIL;
  tlsl_p350=NIL;
  tlsl_p144=NIL;
  tlsl_p148=NIL;
  tlsl_p145=NIL;
  tlsl_p140=NIL;
  tlsl_p131=NIL;
  tlsl_p126=NIL;
  tlsl_p125=NIL;
  tlsl_p121=NIL;
  tlsl_p96=NIL;
  tlsl_p120=NIL;
  tlsl_p114=NIL;
  tlsl_p111=NIL;
  tlsl_p136=NIL;
  tlsl_p83=NIL;
  double_or_symbol_result=((tlsl_v391=cos(tlsl_v394)),(tlsl_v390=(-tlsl_v391)),(tlsl_v392=sin(tlsl_v394)),(tlsl_v384=((tlsl_v400*tlsl_v390)-(tlsl_v398*tlsl_v392))),(tlsl_v156=(fabs((tlsl_v384-(0.0)))<tlsl_v375)),(tlsl_v147=(tlsl_v156?tlsl_f148():NIL)),(tlsl_v134=((tlsl_v147?T:(tlsl_f140()?tlsl_f145():NIL))?(tlsl_f136()?NIL:T):NIL)),((tlsl_v134?(tlsl_f83()?tlsl_f131():NIL):NIL)?((tlsl_v17=tlsl_f17()),((tlsl_v17?tlsl_v17:NIL)?coerce_double_to_double_or_symbol((tlsl_v134?(tlsl_f83()?(tlsl_v17?(tlsl_f61()?(tlsl_f19()?((tlsl_v114=tlsl_f114()),(tlsl_v46=tlsl_f46()),((tlsl_v114<tlsl_v46)?tlsl_v114:tlsl_v46)):tlsl_f12()):tlsl_f12()):tlsl_f12()):tlsl_f12()):tlsl_f12())):(tlsl_v134?(tlsl_f83()?coerce_double_to_double_or_symbol(tlsl_f114()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(tlsl_f17()?(tlsl_f61()?(tlsl_f19()?coerce_double_to_double_or_symbol(tlsl_f46()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))); return;}
