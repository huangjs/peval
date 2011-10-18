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
double tcl_v569;
double tcl_v567;
double tcl_v565;
double tcl_v563;
double tcl_v561;
double tcl_v559;
double tcl_v557;
double tcl_v555;
double tcl_v522;
double tcl_v538;
double tcl_v537;
double tcl_v539;
double tcl_v531;
int tcl_v189;
int tcl_p12;
double tcl_m12;
int tcl_p436;
int tcl_m436;
int tcl_p439;
double tcl_m439;
int tcl_p438;
double tcl_m438;
int tcl_p261;
double tcl_m261;
int tcl_p69;
int tcl_m69;
int tcl_p437;
double tcl_m437;
int tcl_p120;
double tcl_m120;
double tcl_v437;
int tcl_p434;
double tcl_m434;
int tcl_p429;
double tcl_m429;
int tcl_p428;
double tcl_m428;
int tcl_p427;
double tcl_m427;
int tcl_p393;
int tcl_m393;
int tcl_p388;
double tcl_m388;
int tcl_p381;
double tcl_m381;
int tcl_p379;
double tcl_m379;
int tcl_p430;
double tcl_m430;
int tcl_p385;
double tcl_m385;
int tcl_p383;
double tcl_m383;
int tcl_p132;
int tcl_m132;
int tcl_p376;
double tcl_m376;
int tcl_p148;
double tcl_m148;
int tcl_p162;
double tcl_m162;
int tcl_p166;
int tcl_m166;
int tcl_p534;
double tcl_m534;
int tcl_p529;
double tcl_m529;
int tcl_p527;
double tcl_m527;
int tcl_p553;
double tcl_m553;
int tcl_p551;
double tcl_m551;
double tcl_v553;
double tcl_v551;
int tcl_p548;
double tcl_m548;
double tcl_v548;
int tcl_p435;
double tcl_m435;
int tcl_p547;
double tcl_m547;
int tcl_p425;
double tcl_m425;
int tcl_p404;
double tcl_m404;
int tcl_p402;
double tcl_m402;
double tcl_v404;
double tcl_v402;
int tcl_p135;
int tcl_m135;
int tcl_p103;
double tcl_m103;
int tcl_p84;
double tcl_m84;
int tcl_p108;
int tcl_m108;
int tcl_p123;
int tcl_m123;
int tcl_p546;
double tcl_m546;
int tcl_p432;
double tcl_m432;
int tcl_p431;
int tcl_m431;
int tcl_p545;
double tcl_m545;
double tcl_v545;
int tcl_p344;
double tcl_m344;
double tcl_v120;
int tcl_p116;
double tcl_m116;
double tcl_v344;
int tcl_p96;
double tcl_m96;
int tcl_p115;
int tcl_m115;
int tcl_p113;
int tcl_m113;
int tcl_p105;
int tcl_m105;
int tcl_v105;
int tcl_p74;
double tcl_m74;
int tcl_v113;
double tcl_v74;
int tcl_p63;
int tcl_m63;
int tcl_p543;
double tcl_m543;
int tcl_p541;
double tcl_m541;
int tcl_p479;
double tcl_m479;
int tcl_p469;
double tcl_m469;
int tcl_p458;
double tcl_m458;
int tcl_p477;
double tcl_m477;
int tcl_p468;
double tcl_m468;
int tcl_p455;
double tcl_m455;
int tcl_p49;
int tcl_m49;
int tcl_p52;
int tcl_m52;
int tcl_p51;
int tcl_m51;
int tcl_p50;
int tcl_m50;
int tcl_v49;
int tcl_p45;
int tcl_m45;
int tcl_v51;
int tcl_p39;
int tcl_m39;
int tcl_p37;
int tcl_m37;
int tcl_p33;
double tcl_m33;
int tcl_p28;
double tcl_m28;
double tcl_v33;
double tcl_v28;
int tcl_p24;
double tcl_m24;
int tcl_p21;
int tcl_m21;
int tcl_v21;
int tcl_p19;
int tcl_m19;
int tcl_p17;
int tcl_m17;
int tcl_p542;
double tcl_m542;
int tcl_p528;
double tcl_m528;
int tcl_p512;
double tcl_m512;
int tcl_p500;
double tcl_m500;
int tcl_p525;
double tcl_m525;
int tcl_p511;
double tcl_m511;
int tcl_p497;
double tcl_m497;
int tcl_p177;
int tcl_m177;
int tcl_p181;
int tcl_m181;
int tcl_v180;
int tcl_p178;
int tcl_m178;
int tcl_v177;
int tcl_p173;
int tcl_m173;
int tcl_v167;
int tcl_p164;
int tcl_m164;
int tcl_p158;
double tcl_m158;
int tcl_p153;
double tcl_m153;
double tcl_v158;
double tcl_v153;
int tcl_p147;
double tcl_m147;
int tcl_p144;
int tcl_m144;
int tcl_v144;
int tcl_p61;
int tcl_m61;
int tcl_v17;
double tcl_v147;
double tcl_v24;
static double tcl_f12(){if (tcl_p12) return tcl_m12; else {tcl_p12=T;return tcl_m12=error("Non-numeric argument to MIN");}}
static int tcl_f436(){if (tcl_p436) return tcl_m436; else {tcl_p436=T;return tcl_m436=(tcl_v561==0.0);}}
static double tcl_f439(){if (tcl_p439) return tcl_m439; else {tcl_p439=T;return tcl_m439=(tcl_v561*tcl_v569);}}
static double tcl_f438(){if (tcl_p438) return tcl_m438; else {tcl_p438=T;return tcl_m438=(tcl_v559*tcl_v567);}}
static double tcl_f261(){if (tcl_p261) return tcl_m261; else {tcl_p261=T;return tcl_m261=((tcl_f439()+tcl_f438())-tcl_v557);}}
static int tcl_f69(){if (tcl_p69) return tcl_m69; else {tcl_p69=T;return tcl_m69=(tcl_f261()>(0.0));}}
static double tcl_f437(){if (tcl_p437) return tcl_m437; else {tcl_p437=T;return tcl_m437=(tcl_v557-tcl_f439()-tcl_f438());}}
static double tcl_f120(){if (tcl_p120) return tcl_m120; else {tcl_p120=T;return tcl_m120=((-2.0)*tcl_v559*tcl_f437());}}
static double tcl_f434(){if (tcl_p434) return tcl_m434; else {tcl_p434=T;return tcl_m434=((tcl_v437=tcl_f437()),(tcl_v437*tcl_v437));}}
static double tcl_f429(){if (tcl_p429) return tcl_m429; else {tcl_p429=T;return tcl_m429=(tcl_v561*tcl_v567);}}
static double tcl_f428(){if (tcl_p428) return tcl_m428; else {tcl_p428=T;return tcl_m428=(tcl_v559*tcl_v569);}}
static double tcl_f427(){if (tcl_p427) return tcl_m427; else {tcl_p427=T;return tcl_m427=(tcl_f429()-tcl_f428());}}
static int tcl_f393(){if (tcl_p393) return tcl_m393; else {tcl_p393=T;return tcl_m393=(tcl_v559>0.0);}}
static double tcl_f388(){if (tcl_p388) return tcl_m388; else {tcl_p388=T;return tcl_m388=(tcl_f393()?(-tcl_v561):tcl_v561);}}
static double tcl_f381(){if (tcl_p381) return tcl_m381; else {tcl_p381=T;return tcl_m381=(tcl_f393()?(tcl_f428()-tcl_f429()):tcl_f427());}}
static double tcl_f379(){if (tcl_p379) return tcl_m379; else {tcl_p379=T;return tcl_m379=((tcl_v557*tcl_f388())-(tcl_v559*tcl_f381()));}}
static double tcl_f430(){if (tcl_p430) return tcl_m430; else {tcl_p430=T;return tcl_m430=(-tcl_v559);}}
static double tcl_f385(){if (tcl_p385) return tcl_m385; else {tcl_p385=T;return tcl_m385=(tcl_f393()?tcl_v559:tcl_f430());}}
static double tcl_f383(){if (tcl_p383) return tcl_m383; else {tcl_p383=T;return tcl_m383=((tcl_v561*tcl_f388())-(tcl_v559*tcl_f385()));}}
static int tcl_f132(){if (tcl_p132) return tcl_m132; else {tcl_p132=T;return tcl_m132=(fabs((tcl_f383()-(0.0)))<tcl_v522);}}
static double tcl_f376(){if (tcl_p376) return tcl_m376; else {tcl_p376=T;return tcl_m376=((tcl_v561*tcl_f381())-(tcl_v557*tcl_f385()));}}
static double tcl_f148(){if (tcl_p148) return tcl_m148; else {tcl_p148=T;return tcl_m148=error("No applicable method for DISTANCE with argument types (POINT (OR BOOLEAN POINT))");}}
static double tcl_f162(){if (tcl_p162) return tcl_m162; else {tcl_p162=T;return tcl_m162=error("SLOT-VALUE called on non-instance");}}
static int tcl_f166(){if (tcl_p166) return tcl_m166; else {tcl_p166=T;return tcl_m166=(tcl_v189?NIL:T);}}
static double tcl_f534(){if (tcl_p534) return tcl_m534; else {tcl_p534=T;return tcl_m534=((tcl_v539*tcl_v569)+(tcl_v537*tcl_v567));}}
static double tcl_f529(){if (tcl_p529) return tcl_m529; else {tcl_p529=T;return tcl_m529=(tcl_v559*tcl_f534());}}
static double tcl_f527(){if (tcl_p527) return tcl_m527; else {tcl_p527=T;return tcl_m527=(tcl_v561*tcl_f534());}}
static double tcl_f553(){if (tcl_p553) return tcl_m553; else {tcl_p553=T;return tcl_m553=(tcl_v569-tcl_v565);}}
static double tcl_f551(){if (tcl_p551) return tcl_m551; else {tcl_p551=T;return tcl_m551=(tcl_v567-tcl_v563);}}
static double tcl_f548(){if (tcl_p548) return tcl_m548; else {tcl_p548=T;return tcl_m548=((tcl_v553=tcl_f553()),(tcl_v551=tcl_f551()),sqrt(((tcl_v553*tcl_v553)+(tcl_v551*tcl_v551))));}}
static double tcl_f435(){if (tcl_p435) return tcl_m435; else {tcl_p435=T;return tcl_m435=((tcl_v548=tcl_f548()),(tcl_v548*tcl_v548));}}
static double tcl_f547(){if (tcl_p547) return tcl_m547; else {tcl_p547=T;return tcl_m547=(tcl_v561*tcl_v561);}}
static double tcl_f425(){if (tcl_p425) return tcl_m425; else {tcl_p425=T;return tcl_m425=(tcl_f547()-(tcl_v559*tcl_f430()));}}
static double tcl_f404(){if (tcl_p404) return tcl_m404; else {tcl_p404=T;return tcl_m404=((((tcl_v557*tcl_v561)-(tcl_v559*tcl_f427()))/tcl_f425())-tcl_v569);}}
static double tcl_f402(){if (tcl_p402) return tcl_m402; else {tcl_p402=T;return tcl_m402=((((tcl_v561*tcl_f427())-(tcl_v557*tcl_f430()))/tcl_f425())-tcl_v567);}}
static int tcl_f135(){if (tcl_p135) return tcl_m135; else {tcl_p135=T;return tcl_m135=(fabs((((fabs((tcl_f425()-(0.0)))<tcl_v522)?error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)"):((tcl_v404=tcl_f404()),(tcl_v402=tcl_f402()),sqrt(((tcl_v404*tcl_v404)+(tcl_v402*tcl_v402)))))-tcl_f548()))<tcl_v522);}}
static double tcl_f103(){if (tcl_p103) return tcl_m103; else {tcl_p103=T;return tcl_m103=(tcl_f135()?(tcl_f132()?tcl_f162():(tcl_f379()/tcl_f383())):tcl_f162());}}
static double tcl_f84(){if (tcl_p84) return tcl_m84; else {tcl_p84=T;return tcl_m84=(tcl_f135()?(tcl_f132()?tcl_f162():(tcl_f376()/tcl_f383())):tcl_f162());}}
static int tcl_f108(){if (tcl_p108) return tcl_m108; else {tcl_p108=T;return tcl_m108=(tcl_f135()?(tcl_f132()?NIL:T):NIL);}}
static int tcl_f123(){if (tcl_p123) return tcl_m123; else {tcl_p123=T;return tcl_m123=(tcl_f135()?(tcl_f132()?((fabs((tcl_f379()-(0.0)))<tcl_v522)?(fabs((tcl_f376()-(0.0)))<tcl_v522):NIL):NIL):NIL);}}
static double tcl_f546(){if (tcl_p546) return tcl_m546; else {tcl_p546=T;return tcl_m546=(tcl_v559*tcl_v559);}}
static double tcl_f432(){if (tcl_p432) return tcl_m432; else {tcl_p432=T;return tcl_m432=(tcl_f435()-(tcl_f434()/tcl_f546()));}}
static int tcl_f431(){if (tcl_p431) return tcl_m431; else {tcl_p431=T;return tcl_m431=(tcl_f432()<0.0);}}
static double tcl_f545(){if (tcl_p545) return tcl_m545; else {tcl_p545=T;return tcl_m545=(tcl_f547()+tcl_f546());}}
static double tcl_f344(){if (tcl_p344) return tcl_m344; else {tcl_p344=T;return tcl_m344=((tcl_v545=tcl_f545()),(tcl_v545+tcl_v545));}}
static double tcl_f116(){if (tcl_p116) return tcl_m116; else {tcl_p116=T;return tcl_m116=((tcl_v120=tcl_f120()),((tcl_v120*tcl_v120)-((4.0)*tcl_f545()*(tcl_f434()-(tcl_f547()*tcl_f435())))));}}
static double tcl_f96(){if (tcl_p96) return tcl_m96; else {tcl_p96=T;return tcl_m96=((tcl_v344=tcl_f344()),((((-tcl_f120())/tcl_v344)+(sqrt(tcl_f116())/tcl_v344))+tcl_v567));}}
static int tcl_f115(){if (tcl_p115) return tcl_m115; else {tcl_p115=T;return tcl_m115=(tcl_f116()<0.0);}}
static int tcl_f113(){if (tcl_p113) return tcl_m113; else {tcl_p113=T;return tcl_m113=(tcl_f436()?(tcl_f431()?tcl_f123():NIL):(tcl_f115()?tcl_f123():NIL));}}
static int tcl_f105(){if (tcl_p105) return tcl_m105; else {tcl_p105=T;return tcl_m105=(tcl_f436()?(tcl_f431()?tcl_f108():T):(tcl_f115()?tcl_f108():T));}}
static double tcl_f74(){if (tcl_p74) return tcl_m74; else {tcl_p74=T;return tcl_m74=((tcl_v105=tcl_f105()),(((tcl_v561*((tcl_v105?(tcl_f436()?(tcl_f431()?tcl_f103():(sqrt(tcl_f432())+tcl_v569)):(tcl_f115()?tcl_f103():((tcl_v557-(tcl_v559*tcl_f96()))/tcl_v561))):error("No applicable method for X with argument types ((OR BOOLEAN POINT))"))+tcl_v538))+(tcl_v559*((tcl_v105?(tcl_f436()?(tcl_f431()?tcl_f84():(tcl_v557/tcl_v559)):(tcl_f115()?tcl_f84():tcl_f96())):error("No applicable method for Y with argument types ((OR BOOLEAN POINT))"))+tcl_v539)))-tcl_v557));}}
static int tcl_f63(){if (tcl_p63) return tcl_m63; else {tcl_p63=T;return tcl_m63=((tcl_v113=tcl_f113()),(tcl_v113?tcl_v113:(((fabs((tcl_f261()-(0.0)))<tcl_v522)?T:((tcl_v74=tcl_f74()),((fabs((tcl_v74-(0.0)))<tcl_v522)?NIL:((tcl_v74>(0.0))?tcl_f69():(tcl_f69()?NIL:T)))))?NIL:T)));}}
static double tcl_f543(){if (tcl_p543) return tcl_m543; else {tcl_p543=T;return tcl_m543=(tcl_f548()*sqrt(tcl_f545()));}}
static double tcl_f541(){if (tcl_p541) return tcl_m541; else {tcl_p541=T;return tcl_m541=(tcl_v557-tcl_f543());}}
static double tcl_f479(){if (tcl_p479) return tcl_m479; else {tcl_p479=T;return tcl_m479=((tcl_f541()*tcl_v537)-tcl_f529());}}
static double tcl_f469(){if (tcl_p469) return tcl_m469; else {tcl_p469=T;return tcl_m469=(tcl_f479()/tcl_v531);}}
static double tcl_f458(){if (tcl_p458) return tcl_m458; else {tcl_p458=T;return tcl_m458=(tcl_f469()-tcl_v569);}}
static double tcl_f477(){if (tcl_p477) return tcl_m477; else {tcl_p477=T;return tcl_m477=(tcl_f527()-(tcl_f541()*tcl_v539));}}
static double tcl_f468(){if (tcl_p468) return tcl_m468; else {tcl_p468=T;return tcl_m468=(tcl_f477()/tcl_v531);}}
static double tcl_f455(){if (tcl_p455) return tcl_m455; else {tcl_p455=T;return tcl_m455=(tcl_f468()-tcl_v567);}}
static int tcl_f49(){if (tcl_p49) return tcl_m49; else {tcl_p49=T;return tcl_m49=((fabs(tcl_f458())<tcl_v522)?(fabs(tcl_f455())<tcl_v522):NIL);}}
static int tcl_f52(){if (tcl_p52) return tcl_m52; else {tcl_p52=T;return tcl_m52=((fabs((tcl_f479()-(0.0)))<tcl_v522)?(fabs((tcl_f477()-(0.0)))<tcl_v522):NIL);}}
static int tcl_f51(){if (tcl_p51) return tcl_m51; else {tcl_p51=T;return tcl_m51=(tcl_v189?tcl_f52():NIL);}}
static int tcl_f50(){if (tcl_p50) return tcl_m50; else {tcl_p50=T;return tcl_m50=(tcl_v189?tcl_f52():T);}}
static int tcl_f45(){if (tcl_p45) return tcl_m45; else {tcl_p45=T;return tcl_m45=(tcl_f50()?(tcl_v189?NIL:((fabs((((tcl_v539*tcl_f469())+(tcl_v537*tcl_f468()))-tcl_f534()))<tcl_v522)?((tcl_v49=tcl_f49()),(tcl_v49?tcl_v49:(fabs((tcl_v555-atan2(tcl_f455(),tcl_f458())))<tcl_v522))):NIL)):NIL);}}
static int tcl_f39(){if (tcl_p39) return tcl_m39; else {tcl_p39=T;return tcl_m39=((tcl_v51=tcl_f51()),((tcl_v51?T:(tcl_f45()?tcl_f50():NIL))?((tcl_v51?T:(tcl_f45()?tcl_v51:NIL))?NIL:T):NIL));}}
static int tcl_f37(){if (tcl_p37) return tcl_m37; else {tcl_p37=T;return tcl_m37=(tcl_f51()?NIL:(tcl_f45()?tcl_f166():NIL));}}
static double tcl_f33(){if (tcl_p33) return tcl_m33; else {tcl_p33=T;return tcl_m33=(tcl_v569-(tcl_f51()?tcl_f162():(tcl_f45()?(tcl_v189?tcl_f162():tcl_f469()):tcl_f162())));}}
static double tcl_f28(){if (tcl_p28) return tcl_m28; else {tcl_p28=T;return tcl_m28=(tcl_v567-(tcl_f51()?tcl_f162():(tcl_f45()?(tcl_v189?tcl_f162():tcl_f468()):tcl_f162())));}}
static double tcl_f24(){if (tcl_p24) return tcl_m24; else {tcl_p24=T;return tcl_m24=(tcl_f37()?((tcl_v33=tcl_f33()),(tcl_v28=tcl_f28()),sqrt(((tcl_v33*tcl_v33)+(tcl_v28*tcl_v28)))):tcl_f148());}}
static int tcl_f21(){if (tcl_p21) return tcl_m21; else {tcl_p21=T;return tcl_m21=(fabs((tcl_f24()-(0.0)))<tcl_v522);}}
static int tcl_f19(){if (tcl_p19) return tcl_m19; else {tcl_p19=T;return tcl_m19=((tcl_v21=tcl_f21()),(tcl_v21?tcl_f63():(tcl_v21?NIL:T)));}}
static int tcl_f17(){if (tcl_p17) return tcl_m17; else {tcl_p17=T;return tcl_m17=(tcl_f39()?(tcl_f19()?tcl_f37():NIL):NIL);}}
static double tcl_f542(){if (tcl_p542) return tcl_m542; else {tcl_p542=T;return tcl_m542=(tcl_v557+tcl_f543());}}
static double tcl_f528(){if (tcl_p528) return tcl_m528; else {tcl_p528=T;return tcl_m528=((tcl_f542()*tcl_v537)-tcl_f529());}}
static double tcl_f512(){if (tcl_p512) return tcl_m512; else {tcl_p512=T;return tcl_m512=(tcl_f528()/tcl_v531);}}
static double tcl_f500(){if (tcl_p500) return tcl_m500; else {tcl_p500=T;return tcl_m500=(tcl_f512()-tcl_v569);}}
static double tcl_f525(){if (tcl_p525) return tcl_m525; else {tcl_p525=T;return tcl_m525=(tcl_f527()-(tcl_f542()*tcl_v539));}}
static double tcl_f511(){if (tcl_p511) return tcl_m511; else {tcl_p511=T;return tcl_m511=(tcl_f525()/tcl_v531);}}
static double tcl_f497(){if (tcl_p497) return tcl_m497; else {tcl_p497=T;return tcl_m497=(tcl_f511()-tcl_v567);}}
static int tcl_f177(){if (tcl_p177) return tcl_m177; else {tcl_p177=T;return tcl_m177=((fabs(tcl_f500())<tcl_v522)?(fabs(tcl_f497())<tcl_v522):NIL);}}
static int tcl_f181(){if (tcl_p181) return tcl_m181; else {tcl_p181=T;return tcl_m181=((fabs((tcl_f528()-(0.0)))<tcl_v522)?(fabs((tcl_f525()-(0.0)))<tcl_v522):NIL);}}
static int tcl_f178(){if (tcl_p178) return tcl_m178; else {tcl_p178=T;return tcl_m178=(tcl_v189?tcl_f181():T);}}
static int tcl_f173(){if (tcl_p173) return tcl_m173; else {tcl_p173=T;return tcl_m173=(tcl_f178()?(tcl_v189?NIL:((fabs((((tcl_v539*tcl_f512())+(tcl_v537*tcl_f511()))-tcl_f534()))<tcl_v522)?((tcl_v177=tcl_f177()),(tcl_v177?tcl_v177:(fabs((tcl_v555-atan2(tcl_f497(),tcl_f500())))<tcl_v522))):NIL)):NIL);}}
static int tcl_f164(){if (tcl_p164) return tcl_m164; else {tcl_p164=T;return tcl_m164=(tcl_v180?NIL:(tcl_f173()?tcl_f166():NIL));}}
static double tcl_f158(){if (tcl_p158) return tcl_m158; else {tcl_p158=T;return tcl_m158=(tcl_v569-(tcl_v180?tcl_f162():(tcl_f173()?(tcl_v189?tcl_f162():tcl_f512()):tcl_f162())));}}
static double tcl_f153(){if (tcl_p153) return tcl_m153; else {tcl_p153=T;return tcl_m153=(tcl_v567-(tcl_v180?tcl_f162():(tcl_f173()?(tcl_v189?tcl_f162():tcl_f511()):tcl_f162())));}}
static double tcl_f147(){if (tcl_p147) return tcl_m147; else {tcl_p147=T;return tcl_m147=(tcl_f164()?((tcl_v158=tcl_f158()),(tcl_v153=tcl_f153()),sqrt(((tcl_v158*tcl_v158)+(tcl_v153*tcl_v153)))):tcl_f148());}}
static int tcl_f144(){if (tcl_p144) return tcl_m144; else {tcl_p144=T;return tcl_m144=(fabs((tcl_f147()-(0.0)))<tcl_v522);}}
static int tcl_f61(){if (tcl_p61) return tcl_m61; else {tcl_p61=T;return tcl_m61=((tcl_v144=tcl_f144()),(tcl_v144?tcl_f63():(tcl_v144?NIL:T)));}}
void tcl(tcl_a569,tcl_a567,tcl_a565,tcl_a563,tcl_a561,tcl_a559,tcl_a557,tcl_a555,tcl_a522)
double tcl_a569;
double tcl_a567;
double tcl_a565;
double tcl_a563;
double tcl_a561;
double tcl_a559;
double tcl_a557;
double tcl_a555;
double tcl_a522;
{ tcl_v569=tcl_a569;
  tcl_v567=tcl_a567;
  tcl_v565=tcl_a565;
  tcl_v563=tcl_a563;
  tcl_v561=tcl_a561;
  tcl_v559=tcl_a559;
  tcl_v557=tcl_a557;
  tcl_v555=tcl_a555;
  tcl_v522=tcl_a522;
  tcl_p12=NIL;
  tcl_p436=NIL;
  tcl_p439=NIL;
  tcl_p438=NIL;
  tcl_p261=NIL;
  tcl_p69=NIL;
  tcl_p437=NIL;
  tcl_p120=NIL;
  tcl_p434=NIL;
  tcl_p429=NIL;
  tcl_p428=NIL;
  tcl_p427=NIL;
  tcl_p393=NIL;
  tcl_p388=NIL;
  tcl_p381=NIL;
  tcl_p379=NIL;
  tcl_p430=NIL;
  tcl_p385=NIL;
  tcl_p383=NIL;
  tcl_p132=NIL;
  tcl_p376=NIL;
  tcl_p148=NIL;
  tcl_p162=NIL;
  tcl_p166=NIL;
  tcl_p534=NIL;
  tcl_p529=NIL;
  tcl_p527=NIL;
  tcl_p553=NIL;
  tcl_p551=NIL;
  tcl_p548=NIL;
  tcl_p435=NIL;
  tcl_p547=NIL;
  tcl_p425=NIL;
  tcl_p404=NIL;
  tcl_p402=NIL;
  tcl_p135=NIL;
  tcl_p103=NIL;
  tcl_p84=NIL;
  tcl_p108=NIL;
  tcl_p123=NIL;
  tcl_p546=NIL;
  tcl_p432=NIL;
  tcl_p431=NIL;
  tcl_p545=NIL;
  tcl_p344=NIL;
  tcl_p116=NIL;
  tcl_p96=NIL;
  tcl_p115=NIL;
  tcl_p113=NIL;
  tcl_p105=NIL;
  tcl_p74=NIL;
  tcl_p63=NIL;
  tcl_p543=NIL;
  tcl_p541=NIL;
  tcl_p479=NIL;
  tcl_p469=NIL;
  tcl_p458=NIL;
  tcl_p477=NIL;
  tcl_p468=NIL;
  tcl_p455=NIL;
  tcl_p49=NIL;
  tcl_p52=NIL;
  tcl_p51=NIL;
  tcl_p50=NIL;
  tcl_p45=NIL;
  tcl_p39=NIL;
  tcl_p37=NIL;
  tcl_p33=NIL;
  tcl_p28=NIL;
  tcl_p24=NIL;
  tcl_p21=NIL;
  tcl_p19=NIL;
  tcl_p17=NIL;
  tcl_p542=NIL;
  tcl_p528=NIL;
  tcl_p512=NIL;
  tcl_p500=NIL;
  tcl_p525=NIL;
  tcl_p511=NIL;
  tcl_p497=NIL;
  tcl_p177=NIL;
  tcl_p181=NIL;
  tcl_p178=NIL;
  tcl_p173=NIL;
  tcl_p164=NIL;
  tcl_p158=NIL;
  tcl_p153=NIL;
  tcl_p147=NIL;
  tcl_p144=NIL;
  tcl_p61=NIL;
  double_or_symbol_result=((tcl_v538=cos(tcl_v555)),(tcl_v537=(-tcl_v538)),(tcl_v539=sin(tcl_v555)),(tcl_v531=((tcl_v561*tcl_v537)-(tcl_v559*tcl_v539))),(tcl_v189=(fabs((tcl_v531-(0.0)))<tcl_v522)),(tcl_v180=(tcl_v189?tcl_f181():NIL)),(tcl_v167=((tcl_v180?T:(tcl_f173()?tcl_f178():NIL))?((tcl_v180?T:(tcl_f173()?tcl_v180:NIL))?NIL:T):NIL)),((tcl_v167?(tcl_f61()?tcl_f164():NIL):NIL)?((tcl_v17=tcl_f17()),((tcl_v17?tcl_v17:NIL)?coerce_double_to_double_or_symbol((tcl_v167?(tcl_f61()?(tcl_v17?(tcl_f39()?(tcl_f19()?((tcl_v147=tcl_f147()),(tcl_v24=tcl_f24()),((tcl_v147<tcl_v24)?tcl_v147:tcl_v24)):tcl_f12()):tcl_f12()):tcl_f12()):tcl_f12()):tcl_f12())):(tcl_v167?(tcl_f61()?coerce_double_to_double_or_symbol(tcl_f147()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(tcl_f17()?(tcl_f39()?(tcl_f19()?coerce_double_to_double_or_symbol(tcl_f24()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))); return;}
