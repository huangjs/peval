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
double tlsls_v1922;
double tlsls_v1920;
double tlsls_v1918;
double tlsls_v1916;
double tlsls_v1914;
double tlsls_v1912;
double tlsls_v1910;
double tlsls_v1908;
double tlsls_v1906;
double tlsls_v1896;
double tlsls_v1904;
double tlsls_v1903;
double tlsls_v1902;
double tlsls_v1898;
int tlsls_v1894;
int tlsls_p72;
double tlsls_m72;
int tlsls_p1248;
double tlsls_m1248;
int tlsls_p1246;
double tlsls_m1246;
int tlsls_p1239;
double tlsls_m1239;
int tlsls_p1237;
double tlsls_m1237;
int tlsls_p455;
double tlsls_m455;
int tlsls_p454;
double tlsls_m454;
int tlsls_p450;
double tlsls_m450;
int tlsls_p449;
double tlsls_m449;
int tlsls_p328;
double tlsls_m328;
int tlsls_p407;
double tlsls_m407;
int tlsls_p232;
double tlsls_m232;
int tlsls_p134;
int tlsls_m134;
int tlsls_p420;
double tlsls_m420;
int tlsls_p242;
double tlsls_m242;
int tlsls_p152;
int tlsls_m152;
int tlsls_p439;
double tlsls_m439;
int tlsls_p157;
double tlsls_m157;
int tlsls_p154;
int tlsls_m154;
int tlsls_p153;
int tlsls_m153;
int tlsls_p327;
double tlsls_m327;
int tlsls_p324;
int tlsls_m324;
int tlsls_p323;
int tlsls_m323;
int tlsls_p406;
double tlsls_m406;
int tlsls_p304;
int tlsls_m304;
int tlsls_p419;
double tlsls_m419;
int tlsls_p322;
int tlsls_m322;
int tlsls_p1358;
double tlsls_m1358;
int tlsls_p1350;
double tlsls_m1350;
int tlsls_p1356;
int tlsls_m1356;
int tlsls_p1353;
int tlsls_m1353;
int tlsls_p1559;
double tlsls_m1559;
int tlsls_p1556;
double tlsls_m1556;
int tlsls_p600;
int tlsls_m600;
int tlsls_v600;
int tlsls_p235;
int tlsls_m235;
int tlsls_p1546;
double tlsls_m1546;
int tlsls_p1549;
double tlsls_m1549;
int tlsls_p599;
int tlsls_m599;
int tlsls_p1584;
double tlsls_m1584;
int tlsls_p1581;
double tlsls_m1581;
int tlsls_p606;
int tlsls_m606;
int tlsls_v606;
int tlsls_p412;
int tlsls_m412;
int tlsls_p1571;
double tlsls_m1571;
int tlsls_p1574;
double tlsls_m1574;
int tlsls_p605;
int tlsls_m605;
int tlsls_p1684;
double tlsls_m1684;
int tlsls_p644;
double tlsls_m644;
int tlsls_p639;
double tlsls_m639;
int tlsls_p657;
double tlsls_m657;
int tlsls_p716;
double tlsls_m716;
int tlsls_p1756;
double tlsls_m1756;
int tlsls_p1754;
double tlsls_m1754;
int tlsls_p1747;
double tlsls_m1747;
int tlsls_p1745;
double tlsls_m1745;
int tlsls_p1824;
double tlsls_m1824;
int tlsls_p1821;
double tlsls_m1821;
int tlsls_p770;
int tlsls_m770;
int tlsls_v770;
int tlsls_p225;
int tlsls_m225;
int tlsls_v225;
int tlsls_p221;
int tlsls_m221;
int tlsls_p1815;
double tlsls_m1815;
int tlsls_p1552;
double tlsls_m1552;
int tlsls_p507;
int tlsls_m507;
int tlsls_v599;
int tlsls_p597;
int tlsls_m597;
int tlsls_p1808;
double tlsls_m1808;
int tlsls_p1811;
double tlsls_m1811;
int tlsls_p769;
int tlsls_m769;
int tlsls_p410;
int tlsls_m410;
int tlsls_p1852;
double tlsls_m1852;
int tlsls_p1849;
double tlsls_m1849;
int tlsls_p777;
int tlsls_m777;
int tlsls_v777;
int tlsls_p399;
int tlsls_m399;
int tlsls_v399;
int tlsls_p395;
int tlsls_m395;
int tlsls_v410;
int tlsls_p396;
int tlsls_m396;
int tlsls_p1843;
double tlsls_m1843;
int tlsls_p1577;
double tlsls_m1577;
int tlsls_p525;
int tlsls_m525;
int tlsls_v605;
int tlsls_p603;
int tlsls_m603;
int tlsls_v597;
int tlsls_p593;
int tlsls_m593;
int tlsls_p601;
int tlsls_m601;
int tlsls_v601;
int tlsls_p594;
int tlsls_m594;
int tlsls_p1836;
double tlsls_m1836;
int tlsls_p1839;
double tlsls_m1839;
int tlsls_p776;
int tlsls_m776;
int tlsls_p233;
int tlsls_m233;
int tlsls_v233;
int tlsls_p222;
int tlsls_m222;
int tlsls_p1887;
double tlsls_m1887;
int tlsls_p1899;
double tlsls_m1899;
int tlsls_p1445;
double tlsls_m1445;
int tlsls_p527;
int tlsls_m527;
int tlsls_p526;
int tlsls_m526;
int tlsls_p1683;
double tlsls_m1683;
int tlsls_p694;
int tlsls_m694;
int tlsls_p693;
int tlsls_m693;
int tlsls_p1814;
double tlsls_m1814;
int tlsls_p674;
int tlsls_m674;
int tlsls_v769;
int tlsls_p767;
int tlsls_m767;
int tlsls_p1842;
double tlsls_m1842;
int tlsls_p692;
int tlsls_m692;
int tlsls_v776;
int tlsls_p774;
int tlsls_m774;
int tlsls_v767;
int tlsls_p763;
int tlsls_m763;
int tlsls_p771;
int tlsls_m771;
int tlsls_v771;
int tlsls_p764;
int tlsls_m764;
int tlsls_p1891;
int tlsls_m1891;
int tlsls_p807;
double tlsls_m807;
double tlsls_v804;
double tlsls_v800;
double tlsls_v798;
int tlsls_v795;
int tlsls_p452;
double tlsls_m452;
int tlsls_p436;
double tlsls_m436;
int tlsls_p435;
double tlsls_m435;
int tlsls_p253;
double tlsls_m253;
int tlsls_p434;
double tlsls_m434;
int tlsls_p430;
double tlsls_m430;
int tlsls_p447;
double tlsls_m447;
int tlsls_p111;
double tlsls_m111;
int tlsls_p95;
int tlsls_m95;
int tlsls_p248;
double tlsls_m248;
int tlsls_p244;
int tlsls_m244;
int tlsls_p281;
double tlsls_m281;
int tlsls_p265;
int tlsls_m265;
int tlsls_p445;
double tlsls_m445;
int tlsls_p218;
double tlsls_m218;
int tlsls_p210;
double tlsls_m210;
int tlsls_p216;
double tlsls_m216;
int tlsls_p207;
double tlsls_m207;
int tlsls_p204;
int tlsls_m204;
int tlsls_p392;
double tlsls_m392;
int tlsls_p384;
double tlsls_m384;
int tlsls_p442;
int tlsls_m442;
int tlsls_p243;
int tlsls_m243;
int tlsls_p219;
int tlsls_m219;
int tlsls_v442;
int tlsls_v204;
double tlsls_v218;
double tlsls_v216;
int tlsls_p184;
int tlsls_m184;
int tlsls_v243;
int tlsls_p179;
int tlsls_m179;
int tlsls_p173;
double tlsls_m173;
int tlsls_p124;
double tlsls_m124;
int tlsls_p166;
double tlsls_m166;
int tlsls_p122;
double tlsls_m122;
int tlsls_p352;
int tlsls_m352;
int tlsls_p177;
int tlsls_m177;
int tlsls_p161;
int tlsls_m161;
int tlsls_p138;
int tlsls_m138;
int tlsls_v161;
int tlsls_v138;
int tlsls_p125;
int tlsls_m125;
int tlsls_v177;
int tlsls_p100;
double tlsls_m100;
double tlsls_v124;
double tlsls_v122;
int tlsls_p118;
double tlsls_m118;
int tlsls_p115;
int tlsls_m115;
int tlsls_v115;
int tlsls_v179;
double tlsls_v100;
int tlsls_p87;
int tlsls_m87;
int tlsls_p85;
int tlsls_m85;
int tlsls_v85;
int tlsls_p84;
int tlsls_m84;
int tlsls_p428;
double tlsls_m428;
int tlsls_p390;
double tlsls_m390;
int tlsls_p381;
double tlsls_m381;
int tlsls_p378;
int tlsls_m378;
int tlsls_p424;
int tlsls_m424;
int tlsls_p423;
int tlsls_m423;
int tlsls_p393;
int tlsls_m393;
int tlsls_v442;
int tlsls_v378;
double tlsls_v392;
double tlsls_v390;
int tlsls_p358;
int tlsls_m358;
int tlsls_v423;
int tlsls_p353;
int tlsls_m353;
int tlsls_p350;
int tlsls_m350;
int tlsls_p346;
double tlsls_m346;
int tlsls_p294;
double tlsls_m294;
int tlsls_p339;
double tlsls_m339;
int tlsls_p334;
int tlsls_m334;
int tlsls_p308;
int tlsls_m308;
int tlsls_v334;
int tlsls_v308;
int tlsls_p295;
int tlsls_m295;
int tlsls_v350;
int tlsls_p270;
double tlsls_m270;
int tlsls_p292;
double tlsls_m292;
double tlsls_v294;
double tlsls_v292;
int tlsls_p288;
double tlsls_m288;
int tlsls_p83;
int tlsls_m83;
int tlsls_p285;
int tlsls_m285;
int tlsls_v285;
int tlsls_v353;
double tlsls_v270;
int tlsls_p257;
int tlsls_m257;
int tlsls_p77;
int tlsls_m77;
int tlsls_p255;
int tlsls_m255;
int tlsls_v255;
int tlsls_p75;
int tlsls_m75;
int tlsls_p67;
double tlsls_m67;
int tlsls_p720;
int tlsls_m720;
int tlsls_p792;
double tlsls_m792;
int tlsls_p484;
double tlsls_m484;
int tlsls_p468;
int tlsls_m468;
int tlsls_p649;
double tlsls_m649;
int tlsls_p629;
int tlsls_m629;
int tlsls_p791;
double tlsls_m791;
int tlsls_p617;
double tlsls_m617;
int tlsls_p590;
double tlsls_m590;
int tlsls_p582;
double tlsls_m582;
int tlsls_p790;
double tlsls_m790;
int tlsls_p760;
double tlsls_m760;
int tlsls_p752;
double tlsls_m752;
int tlsls_p786;
double tlsls_m786;
int tlsls_p612;
double tlsls_m612;
int tlsls_p588;
double tlsls_m588;
int tlsls_p579;
double tlsls_m579;
int tlsls_p576;
int tlsls_m576;
int tlsls_p608;
int tlsls_m608;
int tlsls_p607;
int tlsls_m607;
int tlsls_p591;
int tlsls_m591;
int tlsls_v576;
double tlsls_v590;
double tlsls_v588;
int tlsls_p556;
int tlsls_m556;
int tlsls_v607;
int tlsls_p551;
int tlsls_m551;
int tlsls_p549;
int tlsls_m549;
int tlsls_p545;
double tlsls_m545;
int tlsls_p497;
double tlsls_m497;
int tlsls_p538;
double tlsls_m538;
int tlsls_p533;
int tlsls_m533;
int tlsls_p511;
int tlsls_m511;
int tlsls_v533;
int tlsls_v511;
int tlsls_p498;
int tlsls_m498;
int tlsls_v549;
int tlsls_p473;
double tlsls_m473;
int tlsls_p495;
double tlsls_m495;
double tlsls_v497;
double tlsls_v495;
int tlsls_p491;
double tlsls_m491;
int tlsls_p66;
int tlsls_m66;
int tlsls_p64;
int tlsls_m64;
int tlsls_p59;
int tlsls_m59;
int tlsls_p488;
int tlsls_m488;
int tlsls_v488;
int tlsls_v551;
double tlsls_v473;
int tlsls_p460;
int tlsls_m460;
int tlsls_p458;
int tlsls_m458;
int tlsls_p38;
double tlsls_m38;
int tlsls_p784;
double tlsls_m784;
int tlsls_p758;
double tlsls_m758;
int tlsls_p749;
double tlsls_m749;
int tlsls_p746;
int tlsls_m746;
int tlsls_p779;
int tlsls_m779;
int tlsls_v778;
int tlsls_p761;
int tlsls_m761;
int tlsls_v746;
double tlsls_v760;
double tlsls_v758;
int tlsls_p726;
int tlsls_m726;
int tlsls_p721;
int tlsls_m721;
int tlsls_p718;
int tlsls_m718;
int tlsls_p712;
double tlsls_m712;
int tlsls_p664;
double tlsls_m664;
int tlsls_p705;
double tlsls_m705;
int tlsls_p700;
int tlsls_m700;
int tlsls_p678;
int tlsls_m678;
int tlsls_v665;
int tlsls_v700;
int tlsls_v678;
int tlsls_v718;
int tlsls_p634;
double tlsls_m634;
int tlsls_p662;
double tlsls_m662;
double tlsls_v664;
double tlsls_v662;
int tlsls_p656;
double tlsls_m656;
int tlsls_p653;
int tlsls_m653;
int tlsls_v653;
int tlsls_v721;
double tlsls_v634;
int tlsls_p621;
int tlsls_m621;
int tlsls_v458;
double tlsls_v656;
double tlsls_v38;
double tlsls_v656;
double tlsls_v491;
double tlsls_v656;
double tlsls_v67;
double tlsls_v656;
double tlsls_v288;
double tlsls_v656;
double tlsls_v118;
static double tlsls_f72(){if (tlsls_p72) return tlsls_m72; else {tlsls_p72=T;return tlsls_m72=error("Non-numeric argument to MIN");}}
static double tlsls_f1248(){if (tlsls_p1248) return tlsls_m1248; else {tlsls_p1248=T;return tlsls_m1248=(((tlsls_v1922<tlsls_v1918)?tlsls_v1922:tlsls_v1918)-tlsls_v1896);}}
static double tlsls_f1246(){if (tlsls_p1246) return tlsls_m1246; else {tlsls_p1246=T;return tlsls_m1246=(((tlsls_v1922>tlsls_v1918)?tlsls_v1922:tlsls_v1918)+tlsls_v1896);}}
static double tlsls_f1239(){if (tlsls_p1239) return tlsls_m1239; else {tlsls_p1239=T;return tlsls_m1239=(((tlsls_v1920<tlsls_v1916)?tlsls_v1920:tlsls_v1916)-tlsls_v1896);}}
static double tlsls_f1237(){if (tlsls_p1237) return tlsls_m1237; else {tlsls_p1237=T;return tlsls_m1237=(((tlsls_v1920>tlsls_v1916)?tlsls_v1920:tlsls_v1916)+tlsls_v1896);}}
static double tlsls_f455(){if (tlsls_p455) return tlsls_m455; else {tlsls_p455=T;return tlsls_m455=normalize_rotation((tlsls_v1906+(3.141592653589793)));}}
static double tlsls_f454(){if (tlsls_p454) return tlsls_m454; else {tlsls_p454=T;return tlsls_m454=sin(tlsls_f455());}}
static double tlsls_f450(){if (tlsls_p450) return tlsls_m450; else {tlsls_p450=T;return tlsls_m450=cos(tlsls_f455());}}
static double tlsls_f449(){if (tlsls_p449) return tlsls_m449; else {tlsls_p449=T;return tlsls_m449=(-tlsls_f450());}}
static double tlsls_f328(){if (tlsls_p328) return tlsls_m328; else {tlsls_p328=T;return tlsls_m328=((tlsls_f454()*tlsls_v1910)+(tlsls_f449()*tlsls_v1908));}}
static double tlsls_f407(){if (tlsls_p407) return tlsls_m407; else {tlsls_p407=T;return tlsls_m407=((tlsls_f454()*tlsls_v1922)+(tlsls_f449()*tlsls_v1920));}}
static double tlsls_f232(){if (tlsls_p232) return tlsls_m232; else {tlsls_p232=T;return tlsls_m232=(tlsls_f407()-tlsls_f328());}}
static int tlsls_f134(){if (tlsls_p134) return tlsls_m134; else {tlsls_p134=T;return tlsls_m134=(tlsls_f232()>(0.0));}}
static double tlsls_f420(){if (tlsls_p420) return tlsls_m420; else {tlsls_p420=T;return tlsls_m420=((tlsls_f454()*tlsls_v1918)+(tlsls_f449()*tlsls_v1916));}}
static double tlsls_f242(){if (tlsls_p242) return tlsls_m242; else {tlsls_p242=T;return tlsls_m242=(tlsls_f420()-tlsls_f328());}}
static int tlsls_f152(){if (tlsls_p152) return tlsls_m152; else {tlsls_p152=T;return tlsls_m152=(tlsls_f242()>(0.0));}}
static double tlsls_f439(){if (tlsls_p439) return tlsls_m439; else {tlsls_p439=T;return tlsls_m439=((tlsls_f454()*tlsls_v1914)+(tlsls_f449()*tlsls_v1912));}}
static double tlsls_f157(){if (tlsls_p157) return tlsls_m157; else {tlsls_p157=T;return tlsls_m157=(tlsls_f439()-tlsls_f328());}}
static int tlsls_f154(){if (tlsls_p154) return tlsls_m154; else {tlsls_p154=T;return tlsls_m154=(fabs((tlsls_f157()-(0.0)))<tlsls_v1896);}}
static int tlsls_f153(){if (tlsls_p153) return tlsls_m153; else {tlsls_p153=T;return tlsls_m153=(tlsls_f157()>(0.0));}}
static double tlsls_f327(){if (tlsls_p327) return tlsls_m327; else {tlsls_p327=T;return tlsls_m327=(tlsls_f328()-tlsls_f439());}}
static int tlsls_f324(){if (tlsls_p324) return tlsls_m324; else {tlsls_p324=T;return tlsls_m324=(fabs((tlsls_f327()-(0.0)))<tlsls_v1896);}}
static int tlsls_f323(){if (tlsls_p323) return tlsls_m323; else {tlsls_p323=T;return tlsls_m323=(tlsls_f327()>(0.0));}}
static double tlsls_f406(){if (tlsls_p406) return tlsls_m406; else {tlsls_p406=T;return tlsls_m406=(tlsls_f407()-tlsls_f439());}}
static int tlsls_f304(){if (tlsls_p304) return tlsls_m304; else {tlsls_p304=T;return tlsls_m304=(tlsls_f406()>(0.0));}}
static double tlsls_f419(){if (tlsls_p419) return tlsls_m419; else {tlsls_p419=T;return tlsls_m419=(tlsls_f420()-tlsls_f439());}}
static int tlsls_f322(){if (tlsls_p322) return tlsls_m322; else {tlsls_p322=T;return tlsls_m322=(tlsls_f419()>(0.0));}}
static double tlsls_f1358(){if (tlsls_p1358) return tlsls_m1358; else {tlsls_p1358=T;return tlsls_m1358=(tlsls_v1920-tlsls_v1916);}}
static double tlsls_f1350(){if (tlsls_p1350) return tlsls_m1350; else {tlsls_p1350=T;return tlsls_m1350=((tlsls_v1918-tlsls_v1922)/tlsls_f1358());}}
static int tlsls_f1356(){if (tlsls_p1356) return tlsls_m1356; else {tlsls_p1356=T;return tlsls_m1356=(fabs(tlsls_f1358())<tlsls_v1896);}}
static int tlsls_f1353(){if (tlsls_p1353) return tlsls_m1353; else {tlsls_p1353=T;return tlsls_m1353=(fabs((tlsls_v1922-tlsls_v1918))<tlsls_v1896);}}
static double tlsls_f1559(){if (tlsls_p1559) return tlsls_m1559; else {tlsls_p1559=T;return tlsls_m1559=(tlsls_v1918-tlsls_v1910);}}
static double tlsls_f1556(){if (tlsls_p1556) return tlsls_m1556; else {tlsls_p1556=T;return tlsls_m1556=(tlsls_v1916-tlsls_v1908);}}
static int tlsls_f600(){if (tlsls_p600) return tlsls_m600; else {tlsls_p600=T;return tlsls_m600=((fabs(tlsls_f1559())<tlsls_v1896)?(fabs(tlsls_f1556())<tlsls_v1896):NIL);}}
static int tlsls_f235(){if (tlsls_p235) return tlsls_m235; else {tlsls_p235=T;return tlsls_m235=((fabs(tlsls_f242())<tlsls_v1896)?((tlsls_v600=tlsls_f600()),(tlsls_v600?tlsls_v600:(fabs((tlsls_f455()-atan2(tlsls_f1556(),tlsls_f1559())))<tlsls_v1896))):NIL);}}
static double tlsls_f1546(){if (tlsls_p1546) return tlsls_m1546; else {tlsls_p1546=T;return tlsls_m1546=(tlsls_v1912-tlsls_v1916);}}
static double tlsls_f1549(){if (tlsls_p1549) return tlsls_m1549; else {tlsls_p1549=T;return tlsls_m1549=(tlsls_v1914-tlsls_v1918);}}
static int tlsls_f599(){if (tlsls_p599) return tlsls_m599; else {tlsls_p599=T;return tlsls_m599=((fabs(tlsls_f1549())<tlsls_v1896)?(fabs(tlsls_f1546())<tlsls_v1896):NIL);}}
static double tlsls_f1584(){if (tlsls_p1584) return tlsls_m1584; else {tlsls_p1584=T;return tlsls_m1584=(tlsls_v1918-tlsls_v1914);}}
static double tlsls_f1581(){if (tlsls_p1581) return tlsls_m1581; else {tlsls_p1581=T;return tlsls_m1581=(tlsls_v1916-tlsls_v1912);}}
static int tlsls_f606(){if (tlsls_p606) return tlsls_m606; else {tlsls_p606=T;return tlsls_m606=((fabs(tlsls_f1584())<tlsls_v1896)?(fabs(tlsls_f1581())<tlsls_v1896):NIL);}}
static int tlsls_f412(){if (tlsls_p412) return tlsls_m412; else {tlsls_p412=T;return tlsls_m412=((fabs(tlsls_f419())<tlsls_v1896)?((tlsls_v606=tlsls_f606()),(tlsls_v606?tlsls_v606:(fabs((tlsls_f455()-atan2(tlsls_f1581(),tlsls_f1584())))<tlsls_v1896))):NIL);}}
static double tlsls_f1571(){if (tlsls_p1571) return tlsls_m1571; else {tlsls_p1571=T;return tlsls_m1571=(tlsls_v1908-tlsls_v1916);}}
static double tlsls_f1574(){if (tlsls_p1574) return tlsls_m1574; else {tlsls_p1574=T;return tlsls_m1574=(tlsls_v1910-tlsls_v1918);}}
static int tlsls_f605(){if (tlsls_p605) return tlsls_m605; else {tlsls_p605=T;return tlsls_m605=((fabs(tlsls_f1574())<tlsls_v1896)?(fabs(tlsls_f1571())<tlsls_v1896):NIL);}}
static double tlsls_f1684(){if (tlsls_p1684) return tlsls_m1684; else {tlsls_p1684=T;return tlsls_m1684=((tlsls_v1904*tlsls_v1918)+(tlsls_v1902*tlsls_v1916));}}
static double tlsls_f644(){if (tlsls_p644) return tlsls_m644; else {tlsls_p644=T;return tlsls_m644=error("No applicable method for X with argument types ((OR POINT BOOLEAN))");}}
static double tlsls_f639(){if (tlsls_p639) return tlsls_m639; else {tlsls_p639=T;return tlsls_m639=error("No applicable method for Y with argument types ((OR POINT BOOLEAN))");}}
static double tlsls_f657(){if (tlsls_p657) return tlsls_m657; else {tlsls_p657=T;return tlsls_m657=error("No applicable method for DISTANCE with argument types (POINT (OR POINT BOOLEAN))");}}
static double tlsls_f716(){if (tlsls_p716) return tlsls_m716; else {tlsls_p716=T;return tlsls_m716=error("SLOT-VALUE called on non-instance");}}
static double tlsls_f1756(){if (tlsls_p1756) return tlsls_m1756; else {tlsls_p1756=T;return tlsls_m1756=(((tlsls_v1914<tlsls_v1910)?tlsls_v1914:tlsls_v1910)-tlsls_v1896);}}
static double tlsls_f1754(){if (tlsls_p1754) return tlsls_m1754; else {tlsls_p1754=T;return tlsls_m1754=(((tlsls_v1914>tlsls_v1910)?tlsls_v1914:tlsls_v1910)+tlsls_v1896);}}
static double tlsls_f1747(){if (tlsls_p1747) return tlsls_m1747; else {tlsls_p1747=T;return tlsls_m1747=(((tlsls_v1912<tlsls_v1908)?tlsls_v1912:tlsls_v1908)-tlsls_v1896);}}
static double tlsls_f1745(){if (tlsls_p1745) return tlsls_m1745; else {tlsls_p1745=T;return tlsls_m1745=(((tlsls_v1912>tlsls_v1908)?tlsls_v1912:tlsls_v1908)+tlsls_v1896);}}
static double tlsls_f1824(){if (tlsls_p1824) return tlsls_m1824; else {tlsls_p1824=T;return tlsls_m1824=(tlsls_v1922-tlsls_v1910);}}
static double tlsls_f1821(){if (tlsls_p1821) return tlsls_m1821; else {tlsls_p1821=T;return tlsls_m1821=(tlsls_v1920-tlsls_v1908);}}
static int tlsls_f770(){if (tlsls_p770) return tlsls_m770; else {tlsls_p770=T;return tlsls_m770=((fabs(tlsls_f1824())<tlsls_v1896)?(fabs(tlsls_f1821())<tlsls_v1896):NIL);}}
static int tlsls_f225(){if (tlsls_p225) return tlsls_m225; else {tlsls_p225=T;return tlsls_m225=((fabs(tlsls_f232())<tlsls_v1896)?((tlsls_v770=tlsls_f770()),(tlsls_v770?tlsls_v770:(fabs((tlsls_f455()-atan2(tlsls_f1821(),tlsls_f1824())))<tlsls_v1896))):NIL);}}
static int tlsls_f221(){if (tlsls_p221) return tlsls_m221; else {tlsls_p221=T;return tlsls_m221=((tlsls_v225=tlsls_f225()),(tlsls_v225?tlsls_v225:tlsls_f235()));}}
static double tlsls_f1815(){if (tlsls_p1815) return tlsls_m1815; else {tlsls_p1815=T;return tlsls_m1815=((tlsls_v1904*tlsls_v1914)+(tlsls_v1902*tlsls_v1912));}}
static double tlsls_f1552(){if (tlsls_p1552) return tlsls_m1552; else {tlsls_p1552=T;return tlsls_m1552=(tlsls_f1815()-tlsls_f1684());}}
static int tlsls_f507(){if (tlsls_p507) return tlsls_m507; else {tlsls_p507=T;return tlsls_m507=(tlsls_f1552()>(0.0));}}
static int tlsls_f597(){if (tlsls_p597) return tlsls_m597; else {tlsls_p597=T;return tlsls_m597=((fabs(tlsls_f1552())<tlsls_v1896)?((tlsls_v599=tlsls_f599()),(tlsls_v599?tlsls_v599:(fabs((tlsls_v1906-atan2(tlsls_f1546(),tlsls_f1549())))<tlsls_v1896))):NIL);}}
static double tlsls_f1808(){if (tlsls_p1808) return tlsls_m1808; else {tlsls_p1808=T;return tlsls_m1808=(tlsls_v1912-tlsls_v1920);}}
static double tlsls_f1811(){if (tlsls_p1811) return tlsls_m1811; else {tlsls_p1811=T;return tlsls_m1811=(tlsls_v1914-tlsls_v1922);}}
static int tlsls_f769(){if (tlsls_p769) return tlsls_m769; else {tlsls_p769=T;return tlsls_m769=((fabs(tlsls_f1811())<tlsls_v1896)?(fabs(tlsls_f1808())<tlsls_v1896):NIL);}}
static int tlsls_f410(){if (tlsls_p410) return tlsls_m410; else {tlsls_p410=T;return tlsls_m410=(tlsls_f769()?(tlsls_f412()?NIL:T):NIL);}}
static double tlsls_f1852(){if (tlsls_p1852) return tlsls_m1852; else {tlsls_p1852=T;return tlsls_m1852=(tlsls_v1922-tlsls_v1914);}}
static double tlsls_f1849(){if (tlsls_p1849) return tlsls_m1849; else {tlsls_p1849=T;return tlsls_m1849=(tlsls_v1920-tlsls_v1912);}}
static int tlsls_f777(){if (tlsls_p777) return tlsls_m777; else {tlsls_p777=T;return tlsls_m777=((fabs(tlsls_f1852())<tlsls_v1896)?(fabs(tlsls_f1849())<tlsls_v1896):NIL);}}
static int tlsls_f399(){if (tlsls_p399) return tlsls_m399; else {tlsls_p399=T;return tlsls_m399=((fabs(tlsls_f406())<tlsls_v1896)?((tlsls_v777=tlsls_f777()),(tlsls_v777?tlsls_v777:(fabs((tlsls_f455()-atan2(tlsls_f1849(),tlsls_f1852())))<tlsls_v1896))):NIL);}}
static int tlsls_f395(){if (tlsls_p395) return tlsls_m395; else {tlsls_p395=T;return tlsls_m395=((tlsls_v399=tlsls_f399()),(tlsls_v399?tlsls_v399:tlsls_f412()));}}
static int tlsls_f396(){if (tlsls_p396) return tlsls_m396; else {tlsls_p396=T;return tlsls_m396=((tlsls_v410=tlsls_f410()),(tlsls_v410?tlsls_v410:(tlsls_f599()?(tlsls_f399()?NIL:T):NIL)));}}
static double tlsls_f1843(){if (tlsls_p1843) return tlsls_m1843; else {tlsls_p1843=T;return tlsls_m1843=((tlsls_v1904*tlsls_v1910)+(tlsls_v1902*tlsls_v1908));}}
static double tlsls_f1577(){if (tlsls_p1577) return tlsls_m1577; else {tlsls_p1577=T;return tlsls_m1577=(tlsls_f1843()-tlsls_f1684());}}
static int tlsls_f525(){if (tlsls_p525) return tlsls_m525; else {tlsls_p525=T;return tlsls_m525=(tlsls_f1577()>(0.0));}}
static int tlsls_f603(){if (tlsls_p603) return tlsls_m603; else {tlsls_p603=T;return tlsls_m603=((fabs(tlsls_f1577())<tlsls_v1896)?((tlsls_v605=tlsls_f605()),(tlsls_v605?tlsls_v605:(fabs((tlsls_v1906-atan2(tlsls_f1571(),tlsls_f1574())))<tlsls_v1896))):NIL);}}
static int tlsls_f593(){if (tlsls_p593) return tlsls_m593; else {tlsls_p593=T;return tlsls_m593=((tlsls_v597=tlsls_f597()),(tlsls_v597?tlsls_v597:tlsls_f603()));}}
static int tlsls_f601(){if (tlsls_p601) return tlsls_m601; else {tlsls_p601=T;return tlsls_m601=(tlsls_f606()?(tlsls_f603()?NIL:T):NIL);}}
static int tlsls_f594(){if (tlsls_p594) return tlsls_m594; else {tlsls_p594=T;return tlsls_m594=((tlsls_v601=tlsls_f601()),(tlsls_v601?tlsls_v601:(tlsls_f600()?(tlsls_f597()?NIL:T):NIL)));}}
static double tlsls_f1836(){if (tlsls_p1836) return tlsls_m1836; else {tlsls_p1836=T;return tlsls_m1836=(tlsls_v1908-tlsls_v1920);}}
static double tlsls_f1839(){if (tlsls_p1839) return tlsls_m1839; else {tlsls_p1839=T;return tlsls_m1839=(tlsls_v1910-tlsls_v1922);}}
static int tlsls_f776(){if (tlsls_p776) return tlsls_m776; else {tlsls_p776=T;return tlsls_m776=((fabs(tlsls_f1839())<tlsls_v1896)?(fabs(tlsls_f1836())<tlsls_v1896):NIL);}}
static int tlsls_f233(){if (tlsls_p233) return tlsls_m233; else {tlsls_p233=T;return tlsls_m233=(tlsls_f776()?(tlsls_f235()?NIL:T):NIL);}}
static int tlsls_f222(){if (tlsls_p222) return tlsls_m222; else {tlsls_p222=T;return tlsls_m222=((tlsls_v233=tlsls_f233()),(tlsls_v233?tlsls_v233:(tlsls_f605()?(tlsls_f225()?NIL:T):NIL)));}}
static double tlsls_f1887(){if (tlsls_p1887) return tlsls_m1887; else {tlsls_p1887=T;return tlsls_m1887=((tlsls_v1910-tlsls_v1914)/tlsls_v1898);}}
static double tlsls_f1899(){if (tlsls_p1899) return tlsls_m1899; else {tlsls_p1899=T;return tlsls_m1899=((tlsls_v1904*tlsls_v1922)+(tlsls_v1902*tlsls_v1920));}}
static double tlsls_f1445(){if (tlsls_p1445) return tlsls_m1445; else {tlsls_p1445=T;return tlsls_m1445=(tlsls_f1899()-tlsls_f1684());}}
static int tlsls_f527(){if (tlsls_p527) return tlsls_m527; else {tlsls_p527=T;return tlsls_m527=(fabs((tlsls_f1445()-(0.0)))<tlsls_v1896);}}
static int tlsls_f526(){if (tlsls_p526) return tlsls_m526; else {tlsls_p526=T;return tlsls_m526=(tlsls_f1445()>(0.0));}}
static double tlsls_f1683(){if (tlsls_p1683) return tlsls_m1683; else {tlsls_p1683=T;return tlsls_m1683=(tlsls_f1684()-tlsls_f1899());}}
static int tlsls_f694(){if (tlsls_p694) return tlsls_m694; else {tlsls_p694=T;return tlsls_m694=(fabs((tlsls_f1683()-(0.0)))<tlsls_v1896);}}
static int tlsls_f693(){if (tlsls_p693) return tlsls_m693; else {tlsls_p693=T;return tlsls_m693=(tlsls_f1683()>(0.0));}}
static double tlsls_f1814(){if (tlsls_p1814) return tlsls_m1814; else {tlsls_p1814=T;return tlsls_m1814=(tlsls_f1815()-tlsls_f1899());}}
static int tlsls_f674(){if (tlsls_p674) return tlsls_m674; else {tlsls_p674=T;return tlsls_m674=(tlsls_f1814()>(0.0));}}
static int tlsls_f767(){if (tlsls_p767) return tlsls_m767; else {tlsls_p767=T;return tlsls_m767=((fabs(tlsls_f1814())<tlsls_v1896)?((tlsls_v769=tlsls_f769()),(tlsls_v769?tlsls_v769:(fabs((tlsls_v1906-atan2(tlsls_f1808(),tlsls_f1811())))<tlsls_v1896))):NIL);}}
static double tlsls_f1842(){if (tlsls_p1842) return tlsls_m1842; else {tlsls_p1842=T;return tlsls_m1842=(tlsls_f1843()-tlsls_f1899());}}
static int tlsls_f692(){if (tlsls_p692) return tlsls_m692; else {tlsls_p692=T;return tlsls_m692=(tlsls_f1842()>(0.0));}}
static int tlsls_f774(){if (tlsls_p774) return tlsls_m774; else {tlsls_p774=T;return tlsls_m774=((fabs(tlsls_f1842())<tlsls_v1896)?((tlsls_v776=tlsls_f776()),(tlsls_v776?tlsls_v776:(fabs((tlsls_v1906-atan2(tlsls_f1836(),tlsls_f1839())))<tlsls_v1896))):NIL);}}
static int tlsls_f763(){if (tlsls_p763) return tlsls_m763; else {tlsls_p763=T;return tlsls_m763=((tlsls_v767=tlsls_f767()),(tlsls_v767?tlsls_v767:tlsls_f774()));}}
static int tlsls_f771(){if (tlsls_p771) return tlsls_m771; else {tlsls_p771=T;return tlsls_m771=(tlsls_f777()?(tlsls_f774()?NIL:T):NIL);}}
static int tlsls_f764(){if (tlsls_p764) return tlsls_m764; else {tlsls_p764=T;return tlsls_m764=((tlsls_v771=tlsls_f771()),(tlsls_v771?tlsls_v771:(tlsls_f770()?(tlsls_f767()?NIL:T):NIL)));}}
static int tlsls_f1891(){if (tlsls_p1891) return tlsls_m1891; else {tlsls_p1891=T;return tlsls_m1891=(fabs((tlsls_v1914-tlsls_v1910))<tlsls_v1896);}}
static double tlsls_f807(){if (tlsls_p807) return tlsls_m807; else {tlsls_p807=T;return tlsls_m807=error("Can't form a single line when the end points are the same");}}
static double tlsls_f452(){if (tlsls_p452) return tlsls_m452; else {tlsls_p452=T;return tlsls_m452=(tlsls_f1356()?(tlsls_f1353()?tlsls_f807():(1.0)):tlsls_f1350());}}
static double tlsls_f436(){if (tlsls_p436) return tlsls_m436; else {tlsls_p436=T;return tlsls_m436=(tlsls_f1356()?(tlsls_f1353()?tlsls_f807():tlsls_v1920):(tlsls_v1922+(tlsls_f1350()*tlsls_v1920)));}}
static double tlsls_f435(){if (tlsls_p435) return tlsls_m435; else {tlsls_p435=T;return tlsls_m435=(tlsls_f449()*tlsls_f436());}}
static double tlsls_f253(){if (tlsls_p253) return tlsls_m253; else {tlsls_p253=T;return tlsls_m253=((tlsls_f328()*tlsls_f452())-tlsls_f435());}}
static double tlsls_f434(){if (tlsls_p434) return tlsls_m434; else {tlsls_p434=T;return tlsls_m434=((tlsls_f439()*tlsls_f452())-tlsls_f435());}}
static double tlsls_f430(){if (tlsls_p430) return tlsls_m430; else {tlsls_p430=T;return tlsls_m430=(tlsls_f454()*tlsls_f436());}}
static double tlsls_f447(){if (tlsls_p447) return tlsls_m447; else {tlsls_p447=T;return tlsls_m447=(tlsls_f1356()?(tlsls_f1353()?tlsls_f807():(0.0)):(1.0));}}
static double tlsls_f111(){if (tlsls_p111) return tlsls_m111; else {tlsls_p111=T;return tlsls_m111=(((tlsls_f447()*tlsls_v1914)+(tlsls_f452()*tlsls_v1912))-tlsls_f436());}}
static int tlsls_f95(){if (tlsls_p95) return tlsls_m95; else {tlsls_p95=T;return tlsls_m95=(tlsls_f111()>(0.0));}}
static double tlsls_f248(){if (tlsls_p248) return tlsls_m248; else {tlsls_p248=T;return tlsls_m248=(tlsls_f430()-(tlsls_f328()*tlsls_f447()));}}
static int tlsls_f244(){if (tlsls_p244) return tlsls_m244; else {tlsls_p244=T;return tlsls_m244=((fabs((tlsls_f253()-(0.0)))<tlsls_v1896)?(fabs((tlsls_f248()-(0.0)))<tlsls_v1896):NIL);}}
static double tlsls_f281(){if (tlsls_p281) return tlsls_m281; else {tlsls_p281=T;return tlsls_m281=(((tlsls_f447()*tlsls_v1910)+(tlsls_f452()*tlsls_v1908))-tlsls_f436());}}
static int tlsls_f265(){if (tlsls_p265) return tlsls_m265; else {tlsls_p265=T;return tlsls_m265=(tlsls_f281()>(0.0));}}
static double tlsls_f445(){if (tlsls_p445) return tlsls_m445; else {tlsls_p445=T;return tlsls_m445=((tlsls_f454()*tlsls_f452())-(tlsls_f449()*tlsls_f447()));}}
static double tlsls_f218(){if (tlsls_p218) return tlsls_m218; else {tlsls_p218=T;return tlsls_m218=(tlsls_f253()/tlsls_f445());}}
static double tlsls_f210(){if (tlsls_p210) return tlsls_m210; else {tlsls_p210=T;return tlsls_m210=(tlsls_f218()-tlsls_v1910);}}
static double tlsls_f216(){if (tlsls_p216) return tlsls_m216; else {tlsls_p216=T;return tlsls_m216=(tlsls_f248()/tlsls_f445());}}
static double tlsls_f207(){if (tlsls_p207) return tlsls_m207; else {tlsls_p207=T;return tlsls_m207=(tlsls_f216()-tlsls_v1908);}}
static int tlsls_f204(){if (tlsls_p204) return tlsls_m204; else {tlsls_p204=T;return tlsls_m204=((fabs(tlsls_f210())<tlsls_v1896)?(fabs(tlsls_f207())<tlsls_v1896):NIL);}}
static double tlsls_f392(){if (tlsls_p392) return tlsls_m392; else {tlsls_p392=T;return tlsls_m392=(tlsls_f434()/tlsls_f445());}}
static double tlsls_f384(){if (tlsls_p384) return tlsls_m384; else {tlsls_p384=T;return tlsls_m384=(tlsls_f392()-tlsls_v1914);}}
static int tlsls_f442(){if (tlsls_p442) return tlsls_m442; else {tlsls_p442=T;return tlsls_m442=(fabs((tlsls_f445()-(0.0)))<tlsls_v1896);}}
static int tlsls_f243(){if (tlsls_p243) return tlsls_m243; else {tlsls_p243=T;return tlsls_m243=(tlsls_f442()?tlsls_f244():NIL);}}
static int tlsls_f219(){if (tlsls_p219) return tlsls_m219; else {tlsls_p219=T;return tlsls_m219=(tlsls_f442()?tlsls_f244():T);}}
static int tlsls_f184(){if (tlsls_p184) return tlsls_m184; else {tlsls_p184=T;return tlsls_m184=(tlsls_f219()?((tlsls_v442=tlsls_f442()),((tlsls_v442?NIL:((fabs((((tlsls_f454()*tlsls_f218())+(tlsls_f449()*tlsls_f216()))-tlsls_f328()))<tlsls_v1896)?((tlsls_v204=tlsls_f204()),(tlsls_v204?tlsls_v204:(fabs((tlsls_f455()-atan2(tlsls_f207(),tlsls_f210())))<tlsls_v1896))):NIL))?(tlsls_v442?NIL:((tlsls_v218=tlsls_f218()),(tlsls_v216=tlsls_f216()),((fabs((((tlsls_f447()*tlsls_v218)+(tlsls_f452()*tlsls_v216))-tlsls_f436()))<tlsls_v1896)?(((tlsls_f1248()<=tlsls_v218)&&(tlsls_v218<=tlsls_f1246()))?((tlsls_f1239()<=tlsls_v216)&&(tlsls_v216<=tlsls_f1237())):NIL):NIL))):NIL)):NIL);}}
static int tlsls_f179(){if (tlsls_p179) return tlsls_m179; else {tlsls_p179=T;return tlsls_m179=((tlsls_v243=tlsls_f243()),(tlsls_v243?(tlsls_f222()?NIL:tlsls_f221()):(tlsls_f184()?tlsls_v243:NIL)));}}
static double tlsls_f173(){if (tlsls_p173) return tlsls_m173; else {tlsls_p173=T;return tlsls_m173=(tlsls_f243()?(tlsls_f222()?tlsls_v1910:tlsls_f716()):(tlsls_f184()?(tlsls_f442()?tlsls_f716():tlsls_f218()):tlsls_f716()));}}
static double tlsls_f124(){if (tlsls_p124) return tlsls_m124; else {tlsls_p124=T;return tlsls_m124=(tlsls_v1910-tlsls_f173());}}
static double tlsls_f166(){if (tlsls_p166) return tlsls_m166; else {tlsls_p166=T;return tlsls_m166=(tlsls_f243()?(tlsls_f222()?tlsls_v1908:tlsls_f716()):(tlsls_f184()?(tlsls_f442()?tlsls_f716():tlsls_f216()):tlsls_f716()));}}
static double tlsls_f122(){if (tlsls_p122) return tlsls_m122; else {tlsls_p122=T;return tlsls_m122=(tlsls_v1908-tlsls_f166());}}
static int tlsls_f352(){if (tlsls_p352) return tlsls_m352; else {tlsls_p352=T;return tlsls_m352=(tlsls_f442()?NIL:T);}}
static int tlsls_f177(){if (tlsls_p177) return tlsls_m177; else {tlsls_p177=T;return tlsls_m177=(tlsls_f243()?tlsls_f222():(tlsls_f184()?tlsls_f352():NIL));}}
static int tlsls_f161(){if (tlsls_p161) return tlsls_m161; else {tlsls_p161=T;return tlsls_m161=(tlsls_f177()?((fabs((tlsls_f173()-tlsls_v1922))<tlsls_v1896)?(fabs((tlsls_f166()-tlsls_v1920))<tlsls_v1896):NIL):NIL);}}
static int tlsls_f138(){if (tlsls_p138) return tlsls_m138; else {tlsls_p138=T;return tlsls_m138=(tlsls_f177()?((fabs((tlsls_f173()-tlsls_v1918))<tlsls_v1896)?(fabs((tlsls_f166()-tlsls_v1916))<tlsls_v1896):NIL):NIL);}}
static int tlsls_f125(){if (tlsls_p125) return tlsls_m125; else {tlsls_p125=T;return tlsls_m125=((tlsls_f243()?(tlsls_f222()?T:tlsls_f221()):(tlsls_f184()?tlsls_f219():NIL))?(tlsls_f179()?NIL:((tlsls_v161=tlsls_f161()),((tlsls_v161?((fabs((tlsls_f242()-(0.0)))<tlsls_v1896)?NIL:(tlsls_f154()?NIL:(tlsls_f153()?tlsls_f152():(tlsls_f152()?NIL:T)))):(tlsls_v161?NIL:T))?((tlsls_v138=tlsls_f138()),(tlsls_v138?((fabs((tlsls_f232()-(0.0)))<tlsls_v1896)?NIL:(tlsls_f154()?NIL:(tlsls_f153()?tlsls_f134():(tlsls_f134()?NIL:T)))):(tlsls_v138?NIL:T))):NIL))):NIL);}}
static double tlsls_f100(){if (tlsls_p100) return tlsls_m100; else {tlsls_p100=T;return tlsls_m100=((tlsls_v177=tlsls_f177()),(((tlsls_f447()*((tlsls_v177?tlsls_f173():tlsls_f644())+tlsls_f450()))+(tlsls_f452()*((tlsls_v177?tlsls_f166():tlsls_f639())+tlsls_f454())))-tlsls_f436()));}}
static double tlsls_f118(){if (tlsls_p118) return tlsls_m118; else {tlsls_p118=T;return tlsls_m118=(tlsls_f177()?((tlsls_v124=tlsls_f124()),(tlsls_v122=tlsls_f122()),sqrt(((tlsls_v124*tlsls_v124)+(tlsls_v122*tlsls_v122)))):tlsls_f657());}}
static int tlsls_f115(){if (tlsls_p115) return tlsls_m115; else {tlsls_p115=T;return tlsls_m115=(fabs((tlsls_f118()-(0.0)))<tlsls_v1896);}}
static int tlsls_f87(){if (tlsls_p87) return tlsls_m87; else {tlsls_p87=T;return tlsls_m87=((tlsls_v115=tlsls_f115()),(tlsls_v115?((tlsls_v179=tlsls_f179()),(tlsls_v179?tlsls_v179:(((fabs((tlsls_f111()-(0.0)))<tlsls_v1896)?NIL:((tlsls_v100=tlsls_f100()),((fabs((tlsls_v100-(0.0)))<tlsls_v1896)?NIL:((tlsls_v100>(0.0))?tlsls_f95():(tlsls_f95()?NIL:T)))))?NIL:T))):(tlsls_v115?NIL:T)));}}
static int tlsls_f85(){if (tlsls_p85) return tlsls_m85; else {tlsls_p85=T;return tlsls_m85=(tlsls_f125()?(tlsls_f87()?tlsls_f177():NIL):NIL);}}
static int tlsls_f84(){if (tlsls_p84) return tlsls_m84; else {tlsls_p84=T;return tlsls_m84=((tlsls_v85=tlsls_f85()),(tlsls_v85?tlsls_v85:NIL));}}
static double tlsls_f428(){if (tlsls_p428) return tlsls_m428; else {tlsls_p428=T;return tlsls_m428=(tlsls_f430()-(tlsls_f439()*tlsls_f447()));}}
static double tlsls_f390(){if (tlsls_p390) return tlsls_m390; else {tlsls_p390=T;return tlsls_m390=(tlsls_f428()/tlsls_f445());}}
static double tlsls_f381(){if (tlsls_p381) return tlsls_m381; else {tlsls_p381=T;return tlsls_m381=(tlsls_f390()-tlsls_v1912);}}
static int tlsls_f378(){if (tlsls_p378) return tlsls_m378; else {tlsls_p378=T;return tlsls_m378=((fabs(tlsls_f384())<tlsls_v1896)?(fabs(tlsls_f381())<tlsls_v1896):NIL);}}
static int tlsls_f424(){if (tlsls_p424) return tlsls_m424; else {tlsls_p424=T;return tlsls_m424=((fabs((tlsls_f434()-(0.0)))<tlsls_v1896)?(fabs((tlsls_f428()-(0.0)))<tlsls_v1896):NIL);}}
static int tlsls_f423(){if (tlsls_p423) return tlsls_m423; else {tlsls_p423=T;return tlsls_m423=(tlsls_f442()?tlsls_f424():NIL);}}
static int tlsls_f393(){if (tlsls_p393) return tlsls_m393; else {tlsls_p393=T;return tlsls_m393=(tlsls_f442()?tlsls_f424():T);}}
static int tlsls_f358(){if (tlsls_p358) return tlsls_m358; else {tlsls_p358=T;return tlsls_m358=(tlsls_f393()?((tlsls_v442=tlsls_f442()),((tlsls_v442?NIL:((fabs((((tlsls_f454()*tlsls_f392())+(tlsls_f449()*tlsls_f390()))-tlsls_f439()))<tlsls_v1896)?((tlsls_v378=tlsls_f378()),(tlsls_v378?tlsls_v378:(fabs((tlsls_f455()-atan2(tlsls_f381(),tlsls_f384())))<tlsls_v1896))):NIL))?(tlsls_v442?NIL:((tlsls_v392=tlsls_f392()),(tlsls_v390=tlsls_f390()),((fabs((((tlsls_f447()*tlsls_v392)+(tlsls_f452()*tlsls_v390))-tlsls_f436()))<tlsls_v1896)?(((tlsls_f1248()<=tlsls_v392)&&(tlsls_v392<=tlsls_f1246()))?((tlsls_f1239()<=tlsls_v390)&&(tlsls_v390<=tlsls_f1237())):NIL):NIL))):NIL)):NIL);}}
static int tlsls_f353(){if (tlsls_p353) return tlsls_m353; else {tlsls_p353=T;return tlsls_m353=((tlsls_v423=tlsls_f423()),(tlsls_v423?(tlsls_f396()?NIL:tlsls_f395()):(tlsls_f358()?tlsls_v423:NIL)));}}
static int tlsls_f350(){if (tlsls_p350) return tlsls_m350; else {tlsls_p350=T;return tlsls_m350=(tlsls_f423()?tlsls_f396():(tlsls_f358()?tlsls_f352():NIL));}}
static double tlsls_f346(){if (tlsls_p346) return tlsls_m346; else {tlsls_p346=T;return tlsls_m346=(tlsls_f423()?(tlsls_f396()?tlsls_v1914:tlsls_f716()):(tlsls_f358()?(tlsls_f442()?tlsls_f716():tlsls_f392()):tlsls_f716()));}}
static double tlsls_f294(){if (tlsls_p294) return tlsls_m294; else {tlsls_p294=T;return tlsls_m294=(tlsls_v1914-tlsls_f346());}}
static double tlsls_f339(){if (tlsls_p339) return tlsls_m339; else {tlsls_p339=T;return tlsls_m339=(tlsls_f423()?(tlsls_f396()?tlsls_v1912:tlsls_f716()):(tlsls_f358()?(tlsls_f442()?tlsls_f716():tlsls_f390()):tlsls_f716()));}}
static int tlsls_f334(){if (tlsls_p334) return tlsls_m334; else {tlsls_p334=T;return tlsls_m334=(tlsls_f350()?((fabs((tlsls_f346()-tlsls_v1922))<tlsls_v1896)?(fabs((tlsls_f339()-tlsls_v1920))<tlsls_v1896):NIL):NIL);}}
static int tlsls_f308(){if (tlsls_p308) return tlsls_m308; else {tlsls_p308=T;return tlsls_m308=(tlsls_f350()?((fabs((tlsls_f346()-tlsls_v1918))<tlsls_v1896)?(fabs((tlsls_f339()-tlsls_v1916))<tlsls_v1896):NIL):NIL);}}
static int tlsls_f295(){if (tlsls_p295) return tlsls_m295; else {tlsls_p295=T;return tlsls_m295=((tlsls_f423()?(tlsls_f396()?T:tlsls_f395()):(tlsls_f358()?tlsls_f393():NIL))?(tlsls_f353()?NIL:((tlsls_v334=tlsls_f334()),((tlsls_v334?((fabs((tlsls_f419()-(0.0)))<tlsls_v1896)?NIL:(tlsls_f324()?NIL:(tlsls_f323()?tlsls_f322():(tlsls_f322()?NIL:T)))):(tlsls_v334?NIL:T))?((tlsls_v308=tlsls_f308()),(tlsls_v308?((fabs((tlsls_f406()-(0.0)))<tlsls_v1896)?NIL:(tlsls_f324()?NIL:(tlsls_f323()?tlsls_f304():(tlsls_f304()?NIL:T)))):(tlsls_v308?NIL:T))):NIL))):NIL);}}
static double tlsls_f270(){if (tlsls_p270) return tlsls_m270; else {tlsls_p270=T;return tlsls_m270=((tlsls_v350=tlsls_f350()),(((tlsls_f447()*((tlsls_v350?tlsls_f346():tlsls_f644())+tlsls_f450()))+(tlsls_f452()*((tlsls_v350?tlsls_f339():tlsls_f639())+tlsls_f454())))-tlsls_f436()));}}
static double tlsls_f292(){if (tlsls_p292) return tlsls_m292; else {tlsls_p292=T;return tlsls_m292=(tlsls_v1912-tlsls_f339());}}
static double tlsls_f288(){if (tlsls_p288) return tlsls_m288; else {tlsls_p288=T;return tlsls_m288=(tlsls_f350()?((tlsls_v294=tlsls_f294()),(tlsls_v292=tlsls_f292()),sqrt(((tlsls_v294*tlsls_v294)+(tlsls_v292*tlsls_v292)))):tlsls_f657());}}
static int tlsls_f83(){if (tlsls_p83) return tlsls_m83; else {tlsls_p83=T;return tlsls_m83=(tlsls_f288()<tlsls_f118());}}
static int tlsls_f285(){if (tlsls_p285) return tlsls_m285; else {tlsls_p285=T;return tlsls_m285=(fabs((tlsls_f288()-(0.0)))<tlsls_v1896);}}
static int tlsls_f257(){if (tlsls_p257) return tlsls_m257; else {tlsls_p257=T;return tlsls_m257=((tlsls_v285=tlsls_f285()),(tlsls_v285?((tlsls_v353=tlsls_f353()),(tlsls_v353?tlsls_v353:(((fabs((tlsls_f281()-(0.0)))<tlsls_v1896)?NIL:((tlsls_v270=tlsls_f270()),((fabs((tlsls_v270-(0.0)))<tlsls_v1896)?NIL:((tlsls_v270>(0.0))?tlsls_f265():(tlsls_f265()?NIL:T)))))?NIL:T))):(tlsls_v285?NIL:T)));}}
static int tlsls_f77(){if (tlsls_p77) return tlsls_m77; else {tlsls_p77=T;return tlsls_m77=(tlsls_f295()?(tlsls_f257()?(tlsls_f85()?(tlsls_f125()?(tlsls_f87()?(tlsls_f83()?tlsls_f350():tlsls_f177()):NIL):NIL):NIL):NIL):NIL);}}
static int tlsls_f255(){if (tlsls_p255) return tlsls_m255; else {tlsls_p255=T;return tlsls_m255=(tlsls_f295()?(tlsls_f257()?tlsls_f350():NIL):NIL);}}
static int tlsls_f75(){if (tlsls_p75) return tlsls_m75; else {tlsls_p75=T;return tlsls_m75=((tlsls_v255=tlsls_f255()),(tlsls_v255?(tlsls_f84()?tlsls_f77():tlsls_v255):tlsls_f84()));}}
static double tlsls_f67(){if (tlsls_p67) return tlsls_m67; else {tlsls_p67=T;return tlsls_m67=(tlsls_f295()?(tlsls_f257()?(tlsls_f85()?(tlsls_f125()?(tlsls_f87()?(tlsls_f83()?tlsls_f288():tlsls_f118()):tlsls_f72()):tlsls_f72()):tlsls_f72()):tlsls_f72()):tlsls_f72());}}
static int tlsls_f720(){if (tlsls_p720) return tlsls_m720; else {tlsls_p720=T;return tlsls_m720=(tlsls_v795?NIL:T);}}
static double tlsls_f792(){if (tlsls_p792) return tlsls_m792; else {tlsls_p792=T;return tlsls_m792=(tlsls_v1894?(tlsls_f1891()?tlsls_f807():tlsls_v1912):(tlsls_v1914+(tlsls_f1887()*tlsls_v1912)));}}
static double tlsls_f484(){if (tlsls_p484) return tlsls_m484; else {tlsls_p484=T;return tlsls_m484=(((tlsls_v800*tlsls_v1922)+(tlsls_v804*tlsls_v1920))-tlsls_f792());}}
static int tlsls_f468(){if (tlsls_p468) return tlsls_m468; else {tlsls_p468=T;return tlsls_m468=(tlsls_f484()>(0.0));}}
static double tlsls_f649(){if (tlsls_p649) return tlsls_m649; else {tlsls_p649=T;return tlsls_m649=(((tlsls_v800*tlsls_v1918)+(tlsls_v804*tlsls_v1916))-tlsls_f792());}}
static int tlsls_f629(){if (tlsls_p629) return tlsls_m629; else {tlsls_p629=T;return tlsls_m629=(tlsls_f649()>(0.0));}}
static double tlsls_f791(){if (tlsls_p791) return tlsls_m791; else {tlsls_p791=T;return tlsls_m791=(tlsls_v1902*tlsls_f792());}}
static double tlsls_f617(){if (tlsls_p617) return tlsls_m617; else {tlsls_p617=T;return tlsls_m617=((tlsls_f1684()*tlsls_v804)-tlsls_f791());}}
static double tlsls_f590(){if (tlsls_p590) return tlsls_m590; else {tlsls_p590=T;return tlsls_m590=(tlsls_f617()/tlsls_v798);}}
static double tlsls_f582(){if (tlsls_p582) return tlsls_m582; else {tlsls_p582=T;return tlsls_m582=(tlsls_f590()-tlsls_v1918);}}
static double tlsls_f790(){if (tlsls_p790) return tlsls_m790; else {tlsls_p790=T;return tlsls_m790=((tlsls_f1899()*tlsls_v804)-tlsls_f791());}}
static double tlsls_f760(){if (tlsls_p760) return tlsls_m760; else {tlsls_p760=T;return tlsls_m760=(tlsls_f790()/tlsls_v798);}}
static double tlsls_f752(){if (tlsls_p752) return tlsls_m752; else {tlsls_p752=T;return tlsls_m752=(tlsls_f760()-tlsls_v1922);}}
static double tlsls_f786(){if (tlsls_p786) return tlsls_m786; else {tlsls_p786=T;return tlsls_m786=(tlsls_v1904*tlsls_f792());}}
static double tlsls_f612(){if (tlsls_p612) return tlsls_m612; else {tlsls_p612=T;return tlsls_m612=(tlsls_f786()-(tlsls_f1684()*tlsls_v800));}}
static double tlsls_f588(){if (tlsls_p588) return tlsls_m588; else {tlsls_p588=T;return tlsls_m588=(tlsls_f612()/tlsls_v798);}}
static double tlsls_f579(){if (tlsls_p579) return tlsls_m579; else {tlsls_p579=T;return tlsls_m579=(tlsls_f588()-tlsls_v1916);}}
static int tlsls_f576(){if (tlsls_p576) return tlsls_m576; else {tlsls_p576=T;return tlsls_m576=((fabs(tlsls_f582())<tlsls_v1896)?(fabs(tlsls_f579())<tlsls_v1896):NIL);}}
static int tlsls_f608(){if (tlsls_p608) return tlsls_m608; else {tlsls_p608=T;return tlsls_m608=((fabs((tlsls_f617()-(0.0)))<tlsls_v1896)?(fabs((tlsls_f612()-(0.0)))<tlsls_v1896):NIL);}}
static int tlsls_f607(){if (tlsls_p607) return tlsls_m607; else {tlsls_p607=T;return tlsls_m607=(tlsls_v795?tlsls_f608():NIL);}}
static int tlsls_f591(){if (tlsls_p591) return tlsls_m591; else {tlsls_p591=T;return tlsls_m591=(tlsls_v795?tlsls_f608():T);}}
static int tlsls_f556(){if (tlsls_p556) return tlsls_m556; else {tlsls_p556=T;return tlsls_m556=(tlsls_f591()?((tlsls_v795?NIL:((fabs((((tlsls_v1904*tlsls_f590())+(tlsls_v1902*tlsls_f588()))-tlsls_f1684()))<tlsls_v1896)?((tlsls_v576=tlsls_f576()),(tlsls_v576?tlsls_v576:(fabs((tlsls_v1906-atan2(tlsls_f579(),tlsls_f582())))<tlsls_v1896))):NIL))?(tlsls_v795?NIL:((tlsls_v590=tlsls_f590()),(tlsls_v588=tlsls_f588()),((fabs((((tlsls_v800*tlsls_v590)+(tlsls_v804*tlsls_v588))-tlsls_f792()))<tlsls_v1896)?(((tlsls_f1756()<=tlsls_v590)&&(tlsls_v590<=tlsls_f1754()))?((tlsls_f1747()<=tlsls_v588)&&(tlsls_v588<=tlsls_f1745())):NIL):NIL))):NIL):NIL);}}
static int tlsls_f551(){if (tlsls_p551) return tlsls_m551; else {tlsls_p551=T;return tlsls_m551=((tlsls_v607=tlsls_f607()),(tlsls_v607?(tlsls_f594()?NIL:tlsls_f593()):(tlsls_f556()?tlsls_v607:NIL)));}}
static int tlsls_f549(){if (tlsls_p549) return tlsls_m549; else {tlsls_p549=T;return tlsls_m549=(tlsls_f607()?tlsls_f594():(tlsls_f556()?tlsls_f720():NIL));}}
static double tlsls_f545(){if (tlsls_p545) return tlsls_m545; else {tlsls_p545=T;return tlsls_m545=(tlsls_f607()?(tlsls_f594()?tlsls_v1918:tlsls_f716()):(tlsls_f556()?(tlsls_v795?tlsls_f716():tlsls_f590()):tlsls_f716()));}}
static double tlsls_f497(){if (tlsls_p497) return tlsls_m497; else {tlsls_p497=T;return tlsls_m497=(tlsls_v1918-tlsls_f545());}}
static double tlsls_f538(){if (tlsls_p538) return tlsls_m538; else {tlsls_p538=T;return tlsls_m538=(tlsls_f607()?(tlsls_f594()?tlsls_v1916:tlsls_f716()):(tlsls_f556()?(tlsls_v795?tlsls_f716():tlsls_f588()):tlsls_f716()));}}
static int tlsls_f533(){if (tlsls_p533) return tlsls_m533; else {tlsls_p533=T;return tlsls_m533=(tlsls_f549()?((fabs((tlsls_f545()-tlsls_v1914))<tlsls_v1896)?(fabs((tlsls_f538()-tlsls_v1912))<tlsls_v1896):NIL):NIL);}}
static int tlsls_f511(){if (tlsls_p511) return tlsls_m511; else {tlsls_p511=T;return tlsls_m511=(tlsls_f549()?((fabs((tlsls_f545()-tlsls_v1910))<tlsls_v1896)?(fabs((tlsls_f538()-tlsls_v1908))<tlsls_v1896):NIL):NIL);}}
static int tlsls_f498(){if (tlsls_p498) return tlsls_m498; else {tlsls_p498=T;return tlsls_m498=((tlsls_f607()?(tlsls_f594()?T:tlsls_f593()):(tlsls_f556()?tlsls_f591():NIL))?(tlsls_f551()?NIL:((tlsls_v533=tlsls_f533()),((tlsls_v533?((fabs((tlsls_f1577()-(0.0)))<tlsls_v1896)?NIL:(tlsls_f527()?NIL:(tlsls_f526()?tlsls_f525():(tlsls_f525()?NIL:T)))):(tlsls_v533?NIL:T))?((tlsls_v511=tlsls_f511()),(tlsls_v511?((fabs((tlsls_f1552()-(0.0)))<tlsls_v1896)?NIL:(tlsls_f527()?NIL:(tlsls_f526()?tlsls_f507():(tlsls_f507()?NIL:T)))):(tlsls_v511?NIL:T))):NIL))):NIL);}}
static double tlsls_f473(){if (tlsls_p473) return tlsls_m473; else {tlsls_p473=T;return tlsls_m473=((tlsls_v549=tlsls_f549()),(((tlsls_v800*((tlsls_v549?tlsls_f545():tlsls_f644())+tlsls_v1903))+(tlsls_v804*((tlsls_v549?tlsls_f538():tlsls_f639())+tlsls_v1904)))-tlsls_f792()));}}
static double tlsls_f495(){if (tlsls_p495) return tlsls_m495; else {tlsls_p495=T;return tlsls_m495=(tlsls_v1916-tlsls_f538());}}
static double tlsls_f491(){if (tlsls_p491) return tlsls_m491; else {tlsls_p491=T;return tlsls_m491=(tlsls_f549()?((tlsls_v497=tlsls_f497()),(tlsls_v495=tlsls_f495()),sqrt(((tlsls_v497*tlsls_v497)+(tlsls_v495*tlsls_v495)))):tlsls_f657());}}
static int tlsls_f66(){if (tlsls_p66) return tlsls_m66; else {tlsls_p66=T;return tlsls_m66=(tlsls_f491()<tlsls_f67());}}
static int tlsls_f64(){if (tlsls_p64) return tlsls_m64; else {tlsls_p64=T;return tlsls_m64=(tlsls_f491()<tlsls_f288());}}
static int tlsls_f59(){if (tlsls_p59) return tlsls_m59; else {tlsls_p59=T;return tlsls_m59=(tlsls_f491()<tlsls_f118());}}
static int tlsls_f488(){if (tlsls_p488) return tlsls_m488; else {tlsls_p488=T;return tlsls_m488=(fabs((tlsls_f491()-(0.0)))<tlsls_v1896);}}
static int tlsls_f460(){if (tlsls_p460) return tlsls_m460; else {tlsls_p460=T;return tlsls_m460=((tlsls_v488=tlsls_f488()),(tlsls_v488?((tlsls_v551=tlsls_f551()),(tlsls_v551?tlsls_v551:(((fabs((tlsls_f484()-(0.0)))<tlsls_v1896)?NIL:((tlsls_v473=tlsls_f473()),((fabs((tlsls_v473-(0.0)))<tlsls_v1896)?NIL:((tlsls_v473>(0.0))?tlsls_f468():(tlsls_f468()?NIL:T)))))?NIL:T))):(tlsls_v488?NIL:T)));}}
static int tlsls_f458(){if (tlsls_p458) return tlsls_m458; else {tlsls_p458=T;return tlsls_m458=(tlsls_f498()?(tlsls_f460()?tlsls_f549():NIL):NIL);}}
static double tlsls_f38(){if (tlsls_p38) return tlsls_m38; else {tlsls_p38=T;return tlsls_m38=(tlsls_f498()?(tlsls_f460()?(tlsls_f255()?(tlsls_f84()?(tlsls_f66()?tlsls_f491():tlsls_f67()):(tlsls_f295()?(tlsls_f257()?(tlsls_f64()?tlsls_f491():tlsls_f288()):tlsls_f72()):tlsls_f72())):(tlsls_f85()?(tlsls_f125()?(tlsls_f87()?(tlsls_f59()?tlsls_f491():tlsls_f118()):tlsls_f72()):tlsls_f72()):tlsls_f72())):tlsls_f72()):tlsls_f72());}}
static double tlsls_f784(){if (tlsls_p784) return tlsls_m784; else {tlsls_p784=T;return tlsls_m784=(tlsls_f786()-(tlsls_f1899()*tlsls_v800));}}
static double tlsls_f758(){if (tlsls_p758) return tlsls_m758; else {tlsls_p758=T;return tlsls_m758=(tlsls_f784()/tlsls_v798);}}
static double tlsls_f749(){if (tlsls_p749) return tlsls_m749; else {tlsls_p749=T;return tlsls_m749=(tlsls_f758()-tlsls_v1920);}}
static int tlsls_f746(){if (tlsls_p746) return tlsls_m746; else {tlsls_p746=T;return tlsls_m746=((fabs(tlsls_f752())<tlsls_v1896)?(fabs(tlsls_f749())<tlsls_v1896):NIL);}}
static int tlsls_f779(){if (tlsls_p779) return tlsls_m779; else {tlsls_p779=T;return tlsls_m779=((fabs((tlsls_f790()-(0.0)))<tlsls_v1896)?(fabs((tlsls_f784()-(0.0)))<tlsls_v1896):NIL);}}
static int tlsls_f761(){if (tlsls_p761) return tlsls_m761; else {tlsls_p761=T;return tlsls_m761=(tlsls_v795?tlsls_f779():T);}}
static int tlsls_f726(){if (tlsls_p726) return tlsls_m726; else {tlsls_p726=T;return tlsls_m726=(tlsls_f761()?((tlsls_v795?NIL:((fabs((((tlsls_v1904*tlsls_f760())+(tlsls_v1902*tlsls_f758()))-tlsls_f1899()))<tlsls_v1896)?((tlsls_v746=tlsls_f746()),(tlsls_v746?tlsls_v746:(fabs((tlsls_v1906-atan2(tlsls_f749(),tlsls_f752())))<tlsls_v1896))):NIL))?(tlsls_v795?NIL:((tlsls_v760=tlsls_f760()),(tlsls_v758=tlsls_f758()),((fabs((((tlsls_v800*tlsls_v760)+(tlsls_v804*tlsls_v758))-tlsls_f792()))<tlsls_v1896)?(((tlsls_f1756()<=tlsls_v760)&&(tlsls_v760<=tlsls_f1754()))?((tlsls_f1747()<=tlsls_v758)&&(tlsls_v758<=tlsls_f1745())):NIL):NIL))):NIL):NIL);}}
static int tlsls_f721(){if (tlsls_p721) return tlsls_m721; else {tlsls_p721=T;return tlsls_m721=(tlsls_v778?(tlsls_f764()?NIL:tlsls_f763()):(tlsls_f726()?tlsls_v778:NIL));}}
static int tlsls_f718(){if (tlsls_p718) return tlsls_m718; else {tlsls_p718=T;return tlsls_m718=(tlsls_v778?tlsls_f764():(tlsls_f726()?tlsls_f720():NIL));}}
static double tlsls_f712(){if (tlsls_p712) return tlsls_m712; else {tlsls_p712=T;return tlsls_m712=(tlsls_v778?(tlsls_f764()?tlsls_v1922:tlsls_f716()):(tlsls_f726()?(tlsls_v795?tlsls_f716():tlsls_f760()):tlsls_f716()));}}
static double tlsls_f664(){if (tlsls_p664) return tlsls_m664; else {tlsls_p664=T;return tlsls_m664=(tlsls_v1922-tlsls_f712());}}
static double tlsls_f705(){if (tlsls_p705) return tlsls_m705; else {tlsls_p705=T;return tlsls_m705=(tlsls_v778?(tlsls_f764()?tlsls_v1920:tlsls_f716()):(tlsls_f726()?(tlsls_v795?tlsls_f716():tlsls_f758()):tlsls_f716()));}}
static int tlsls_f700(){if (tlsls_p700) return tlsls_m700; else {tlsls_p700=T;return tlsls_m700=(tlsls_f718()?((fabs((tlsls_f712()-tlsls_v1914))<tlsls_v1896)?(fabs((tlsls_f705()-tlsls_v1912))<tlsls_v1896):NIL):NIL);}}
static int tlsls_f678(){if (tlsls_p678) return tlsls_m678; else {tlsls_p678=T;return tlsls_m678=(tlsls_f718()?((fabs((tlsls_f712()-tlsls_v1910))<tlsls_v1896)?(fabs((tlsls_f705()-tlsls_v1908))<tlsls_v1896):NIL):NIL);}}
static double tlsls_f634(){if (tlsls_p634) return tlsls_m634; else {tlsls_p634=T;return tlsls_m634=((tlsls_v718=tlsls_f718()),(((tlsls_v800*((tlsls_v718?tlsls_f712():tlsls_f644())+tlsls_v1903))+(tlsls_v804*((tlsls_v718?tlsls_f705():tlsls_f639())+tlsls_v1904)))-tlsls_f792()));}}
static double tlsls_f662(){if (tlsls_p662) return tlsls_m662; else {tlsls_p662=T;return tlsls_m662=(tlsls_v1920-tlsls_f705());}}
static double tlsls_f656(){if (tlsls_p656) return tlsls_m656; else {tlsls_p656=T;return tlsls_m656=(tlsls_f718()?((tlsls_v664=tlsls_f664()),(tlsls_v662=tlsls_f662()),sqrt(((tlsls_v664*tlsls_v664)+(tlsls_v662*tlsls_v662)))):tlsls_f657());}}
static int tlsls_f653(){if (tlsls_p653) return tlsls_m653; else {tlsls_p653=T;return tlsls_m653=(fabs((tlsls_f656()-(0.0)))<tlsls_v1896);}}
static int tlsls_f621(){if (tlsls_p621) return tlsls_m621; else {tlsls_p621=T;return tlsls_m621=((tlsls_v653=tlsls_f653()),(tlsls_v653?((tlsls_v721=tlsls_f721()),(tlsls_v721?tlsls_v721:(((fabs((tlsls_f649()-(0.0)))<tlsls_v1896)?NIL:((tlsls_v634=tlsls_f634()),((fabs((tlsls_v634-(0.0)))<tlsls_v1896)?NIL:((tlsls_v634>(0.0))?tlsls_f629():(tlsls_f629()?NIL:T)))))?NIL:T))):(tlsls_v653?NIL:T)));}}
void tlsls(tlsls_a1922,tlsls_a1920,tlsls_a1918,tlsls_a1916,tlsls_a1914,tlsls_a1912,tlsls_a1910,tlsls_a1908,tlsls_a1906,tlsls_a1896)
double tlsls_a1922;
double tlsls_a1920;
double tlsls_a1918;
double tlsls_a1916;
double tlsls_a1914;
double tlsls_a1912;
double tlsls_a1910;
double tlsls_a1908;
double tlsls_a1906;
double tlsls_a1896;
{ tlsls_v1922=tlsls_a1922;
  tlsls_v1920=tlsls_a1920;
  tlsls_v1918=tlsls_a1918;
  tlsls_v1916=tlsls_a1916;
  tlsls_v1914=tlsls_a1914;
  tlsls_v1912=tlsls_a1912;
  tlsls_v1910=tlsls_a1910;
  tlsls_v1908=tlsls_a1908;
  tlsls_v1906=tlsls_a1906;
  tlsls_v1896=tlsls_a1896;
  tlsls_p72=NIL;
  tlsls_p1248=NIL;
  tlsls_p1246=NIL;
  tlsls_p1239=NIL;
  tlsls_p1237=NIL;
  tlsls_p455=NIL;
  tlsls_p454=NIL;
  tlsls_p450=NIL;
  tlsls_p449=NIL;
  tlsls_p328=NIL;
  tlsls_p407=NIL;
  tlsls_p232=NIL;
  tlsls_p134=NIL;
  tlsls_p420=NIL;
  tlsls_p242=NIL;
  tlsls_p152=NIL;
  tlsls_p439=NIL;
  tlsls_p157=NIL;
  tlsls_p154=NIL;
  tlsls_p153=NIL;
  tlsls_p327=NIL;
  tlsls_p324=NIL;
  tlsls_p323=NIL;
  tlsls_p406=NIL;
  tlsls_p304=NIL;
  tlsls_p419=NIL;
  tlsls_p322=NIL;
  tlsls_p1358=NIL;
  tlsls_p1350=NIL;
  tlsls_p1356=NIL;
  tlsls_p1353=NIL;
  tlsls_p1559=NIL;
  tlsls_p1556=NIL;
  tlsls_p600=NIL;
  tlsls_p235=NIL;
  tlsls_p1546=NIL;
  tlsls_p1549=NIL;
  tlsls_p599=NIL;
  tlsls_p1584=NIL;
  tlsls_p1581=NIL;
  tlsls_p606=NIL;
  tlsls_p412=NIL;
  tlsls_p1571=NIL;
  tlsls_p1574=NIL;
  tlsls_p605=NIL;
  tlsls_p1684=NIL;
  tlsls_p644=NIL;
  tlsls_p639=NIL;
  tlsls_p657=NIL;
  tlsls_p716=NIL;
  tlsls_p1756=NIL;
  tlsls_p1754=NIL;
  tlsls_p1747=NIL;
  tlsls_p1745=NIL;
  tlsls_p1824=NIL;
  tlsls_p1821=NIL;
  tlsls_p770=NIL;
  tlsls_p225=NIL;
  tlsls_p221=NIL;
  tlsls_p1815=NIL;
  tlsls_p1552=NIL;
  tlsls_p507=NIL;
  tlsls_p597=NIL;
  tlsls_p1808=NIL;
  tlsls_p1811=NIL;
  tlsls_p769=NIL;
  tlsls_p410=NIL;
  tlsls_p1852=NIL;
  tlsls_p1849=NIL;
  tlsls_p777=NIL;
  tlsls_p399=NIL;
  tlsls_p395=NIL;
  tlsls_p396=NIL;
  tlsls_p1843=NIL;
  tlsls_p1577=NIL;
  tlsls_p525=NIL;
  tlsls_p603=NIL;
  tlsls_p593=NIL;
  tlsls_p601=NIL;
  tlsls_p594=NIL;
  tlsls_p1836=NIL;
  tlsls_p1839=NIL;
  tlsls_p776=NIL;
  tlsls_p233=NIL;
  tlsls_p222=NIL;
  tlsls_p1887=NIL;
  tlsls_p1899=NIL;
  tlsls_p1445=NIL;
  tlsls_p527=NIL;
  tlsls_p526=NIL;
  tlsls_p1683=NIL;
  tlsls_p694=NIL;
  tlsls_p693=NIL;
  tlsls_p1814=NIL;
  tlsls_p674=NIL;
  tlsls_p767=NIL;
  tlsls_p1842=NIL;
  tlsls_p692=NIL;
  tlsls_p774=NIL;
  tlsls_p763=NIL;
  tlsls_p771=NIL;
  tlsls_p764=NIL;
  tlsls_p1891=NIL;
  tlsls_p807=NIL;
  tlsls_p452=NIL;
  tlsls_p436=NIL;
  tlsls_p435=NIL;
  tlsls_p253=NIL;
  tlsls_p434=NIL;
  tlsls_p430=NIL;
  tlsls_p447=NIL;
  tlsls_p111=NIL;
  tlsls_p95=NIL;
  tlsls_p248=NIL;
  tlsls_p244=NIL;
  tlsls_p281=NIL;
  tlsls_p265=NIL;
  tlsls_p445=NIL;
  tlsls_p218=NIL;
  tlsls_p210=NIL;
  tlsls_p216=NIL;
  tlsls_p207=NIL;
  tlsls_p204=NIL;
  tlsls_p392=NIL;
  tlsls_p384=NIL;
  tlsls_p442=NIL;
  tlsls_p243=NIL;
  tlsls_p219=NIL;
  tlsls_p184=NIL;
  tlsls_p179=NIL;
  tlsls_p173=NIL;
  tlsls_p124=NIL;
  tlsls_p166=NIL;
  tlsls_p122=NIL;
  tlsls_p352=NIL;
  tlsls_p177=NIL;
  tlsls_p161=NIL;
  tlsls_p138=NIL;
  tlsls_p125=NIL;
  tlsls_p100=NIL;
  tlsls_p118=NIL;
  tlsls_p115=NIL;
  tlsls_p87=NIL;
  tlsls_p85=NIL;
  tlsls_p84=NIL;
  tlsls_p428=NIL;
  tlsls_p390=NIL;
  tlsls_p381=NIL;
  tlsls_p378=NIL;
  tlsls_p424=NIL;
  tlsls_p423=NIL;
  tlsls_p393=NIL;
  tlsls_p358=NIL;
  tlsls_p353=NIL;
  tlsls_p350=NIL;
  tlsls_p346=NIL;
  tlsls_p294=NIL;
  tlsls_p339=NIL;
  tlsls_p334=NIL;
  tlsls_p308=NIL;
  tlsls_p295=NIL;
  tlsls_p270=NIL;
  tlsls_p292=NIL;
  tlsls_p288=NIL;
  tlsls_p83=NIL;
  tlsls_p285=NIL;
  tlsls_p257=NIL;
  tlsls_p77=NIL;
  tlsls_p255=NIL;
  tlsls_p75=NIL;
  tlsls_p67=NIL;
  tlsls_p720=NIL;
  tlsls_p792=NIL;
  tlsls_p484=NIL;
  tlsls_p468=NIL;
  tlsls_p649=NIL;
  tlsls_p629=NIL;
  tlsls_p791=NIL;
  tlsls_p617=NIL;
  tlsls_p590=NIL;
  tlsls_p582=NIL;
  tlsls_p790=NIL;
  tlsls_p760=NIL;
  tlsls_p752=NIL;
  tlsls_p786=NIL;
  tlsls_p612=NIL;
  tlsls_p588=NIL;
  tlsls_p579=NIL;
  tlsls_p576=NIL;
  tlsls_p608=NIL;
  tlsls_p607=NIL;
  tlsls_p591=NIL;
  tlsls_p556=NIL;
  tlsls_p551=NIL;
  tlsls_p549=NIL;
  tlsls_p545=NIL;
  tlsls_p497=NIL;
  tlsls_p538=NIL;
  tlsls_p533=NIL;
  tlsls_p511=NIL;
  tlsls_p498=NIL;
  tlsls_p473=NIL;
  tlsls_p495=NIL;
  tlsls_p491=NIL;
  tlsls_p66=NIL;
  tlsls_p64=NIL;
  tlsls_p59=NIL;
  tlsls_p488=NIL;
  tlsls_p460=NIL;
  tlsls_p458=NIL;
  tlsls_p38=NIL;
  tlsls_p784=NIL;
  tlsls_p758=NIL;
  tlsls_p749=NIL;
  tlsls_p746=NIL;
  tlsls_p779=NIL;
  tlsls_p761=NIL;
  tlsls_p726=NIL;
  tlsls_p721=NIL;
  tlsls_p718=NIL;
  tlsls_p712=NIL;
  tlsls_p664=NIL;
  tlsls_p705=NIL;
  tlsls_p700=NIL;
  tlsls_p678=NIL;
  tlsls_p634=NIL;
  tlsls_p662=NIL;
  tlsls_p656=NIL;
  tlsls_p653=NIL;
  tlsls_p621=NIL;
  double_or_symbol_result=((tlsls_v1904=sin(tlsls_v1906)),(tlsls_v1903=cos(tlsls_v1906)),(tlsls_v1902=(-tlsls_v1903)),(tlsls_v1898=(tlsls_v1912-tlsls_v1908)),(tlsls_v1894=(fabs(tlsls_v1898)<tlsls_v1896)),(tlsls_v804=(tlsls_v1894?(tlsls_f1891()?tlsls_f807():(1.0)):tlsls_f1887())),(tlsls_v800=(tlsls_v1894?(tlsls_f1891()?tlsls_f807():(0.0)):(1.0))),(tlsls_v798=((tlsls_v1904*tlsls_v804)-(tlsls_v1902*tlsls_v800))),(tlsls_v795=(fabs((tlsls_v798-(0.0)))<tlsls_v1896)),(tlsls_v778=(tlsls_v795?tlsls_f779():NIL)),(tlsls_v665=((tlsls_v778?(tlsls_f764()?T:tlsls_f763()):(tlsls_f726()?tlsls_f761():NIL))?(tlsls_f721()?NIL:((tlsls_v700=tlsls_f700()),((tlsls_v700?((fabs((tlsls_f1842()-(0.0)))<tlsls_v1896)?NIL:(tlsls_f694()?NIL:(tlsls_f693()?tlsls_f692():(tlsls_f692()?NIL:T)))):(tlsls_v700?NIL:T))?((tlsls_v678=tlsls_f678()),(tlsls_v678?((fabs((tlsls_f1814()-(0.0)))<tlsls_v1896)?NIL:(tlsls_f694()?NIL:(tlsls_f693()?tlsls_f674():(tlsls_f674()?NIL:T)))):(tlsls_v678?NIL:T))):NIL))):NIL)),((tlsls_v665?(tlsls_f621()?tlsls_f718():NIL):NIL)?((tlsls_v458=tlsls_f458()),((tlsls_v458?(tlsls_f75()?(tlsls_f498()?(tlsls_f460()?(tlsls_f255()?(tlsls_f84()?(tlsls_f66()?tlsls_f549():tlsls_f77()):(tlsls_f295()?(tlsls_f257()?(tlsls_f64()?tlsls_f549():tlsls_f350()):NIL):NIL)):(tlsls_f85()?(tlsls_f125()?(tlsls_f87()?(tlsls_f59()?tlsls_f549():tlsls_f177()):NIL):NIL):NIL)):NIL):NIL):tlsls_v458):tlsls_f75())?coerce_double_to_double_or_symbol((tlsls_v665?(tlsls_f621()?(tlsls_v458?(tlsls_f75()?((tlsls_v656=tlsls_f656()),(tlsls_v38=tlsls_f38()),((tlsls_v656<tlsls_v38)?tlsls_v656:tlsls_v38)):(tlsls_f498()?(tlsls_f460()?((tlsls_v656=tlsls_f656()),(tlsls_v491=tlsls_f491()),((tlsls_v656<tlsls_v491)?tlsls_v656:tlsls_v491)):tlsls_f72()):tlsls_f72())):(tlsls_f255()?(tlsls_f84()?((tlsls_v656=tlsls_f656()),(tlsls_v67=tlsls_f67()),((tlsls_v656<tlsls_v67)?tlsls_v656:tlsls_v67)):(tlsls_f295()?(tlsls_f257()?((tlsls_v656=tlsls_f656()),(tlsls_v288=tlsls_f288()),((tlsls_v656<tlsls_v288)?tlsls_v656:tlsls_v288)):tlsls_f72()):tlsls_f72())):(tlsls_f85()?(tlsls_f125()?(tlsls_f87()?((tlsls_v656=tlsls_f656()),(tlsls_v118=tlsls_f118()),((tlsls_v656<tlsls_v118)?tlsls_v656:tlsls_v118)):tlsls_f72()):tlsls_f72()):tlsls_f72()))):tlsls_f72()):tlsls_f72())):(tlsls_v665?(tlsls_f621()?coerce_double_to_double_or_symbol(tlsls_f656()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(tlsls_f458()?(tlsls_f75()?coerce_double_to_double_or_symbol(tlsls_f38()):(tlsls_f498()?(tlsls_f460()?coerce_double_to_double_or_symbol(tlsls_f491()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))):(tlsls_f255()?(tlsls_f84()?coerce_double_to_double_or_symbol(tlsls_f67()):(tlsls_f295()?(tlsls_f257()?coerce_double_to_double_or_symbol(tlsls_f288()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))):(tlsls_f85()?(tlsls_f125()?(tlsls_f87()?coerce_double_to_double_or_symbol(tlsls_f118()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))))); return;}
