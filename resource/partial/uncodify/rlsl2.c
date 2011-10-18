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
double rlsl2_v2282;
double rlsl2_v2280;
double rlsl2_v2278;
double rlsl2_v2276;
double rlsl2_v2274;
double rlsl2_v2272;
double rlsl2_v2270;
double rlsl2_v2268;
double rlsl2_v2266;
double rlsl2_v2262;
double rlsl2_v2264;
int rlsl2_p1648;
double rlsl2_m1648;
int rlsl2_p591;
int rlsl2_m591;
int rlsl2_p590;
int rlsl2_m590;
int rlsl2_p589;
int rlsl2_m589;
int rlsl2_p1669;
double rlsl2_m1669;
int rlsl2_p1746;
double rlsl2_m1746;
int rlsl2_p1743;
double rlsl2_m1743;
int rlsl2_p619;
int rlsl2_m619;
int rlsl2_p1719;
double rlsl2_m1719;
int rlsl2_p615;
int rlsl2_m615;
double rlsl2_v1746;
double rlsl2_v1743;
int rlsl2_p1733;
double rlsl2_m1733;
int rlsl2_p660;
double rlsl2_m660;
int rlsl2_p2189;
int rlsl2_m2189;
int rlsl2_p2181;
int rlsl2_m2181;
int rlsl2_p2176;
double rlsl2_m2176;
int rlsl2_p914;
double rlsl2_m914;
int rlsl2_p919;
double rlsl2_m919;
int rlsl2_p2059;
double rlsl2_m2059;
int rlsl2_p944;
int rlsl2_m944;
int rlsl2_p930;
int rlsl2_m930;
int rlsl2_p929;
int rlsl2_m929;
int rlsl2_p2096;
double rlsl2_m2096;
int rlsl2_p2145;
double rlsl2_m2145;
int rlsl2_p1980;
int rlsl2_m1980;
int rlsl2_p2005;
double rlsl2_m2005;
int rlsl2_p2186;
double rlsl2_m2186;
int rlsl2_p2190;
double rlsl2_m2190;
int rlsl2_p809;
double rlsl2_m809;
double rlsl2_v809;
int rlsl2_p808;
double rlsl2_m808;
double rlsl2_v2190;
int rlsl2_p2187;
double rlsl2_m2187;
int rlsl2_p2185;
double rlsl2_m2185;
int rlsl2_p2249;
double rlsl2_m2249;
int rlsl2_p2248;
double rlsl2_m2248;
int rlsl2_p2247;
double rlsl2_m2247;
int rlsl2_p2169;
double rlsl2_m2169;
int rlsl2_p2167;
double rlsl2_m2167;
int rlsl2_p2246;
double rlsl2_m2246;
int rlsl2_p2140;
double rlsl2_m2140;
double rlsl2_v2140;
int rlsl2_p2131;
double rlsl2_m2131;
int rlsl2_p802;
double rlsl2_m802;
int rlsl2_p2250;
double rlsl2_m2250;
int rlsl2_p2173;
double rlsl2_m2173;
int rlsl2_p2171;
double rlsl2_m2171;
int rlsl2_p2153;
double rlsl2_m2153;
int rlsl2_p984;
int rlsl2_m984;
int rlsl2_p969;
double rlsl2_m969;
int rlsl2_p2164;
double rlsl2_m2164;
int rlsl2_p2152;
double rlsl2_m2152;
int rlsl2_p947;
int rlsl2_m947;
int rlsl2_p973;
double rlsl2_m973;
int rlsl2_p967;
double rlsl2_m967;
int rlsl2_p607;
double rlsl2_m607;
int rlsl2_p606;
double rlsl2_m606;
double rlsl2_v606;
int rlsl2_p594;
int rlsl2_m594;
int rlsl2_p943;
double rlsl2_m943;
double rlsl2_v943;
int rlsl2_p935;
double rlsl2_m935;
int rlsl2_p932;
int rlsl2_m932;
int rlsl2_p931;
int rlsl2_m931;
int rlsl2_p965;
double rlsl2_m965;
int rlsl2_p964;
double rlsl2_m964;
double rlsl2_v964;
int rlsl2_p950;
int rlsl2_m950;
int rlsl2_p977;
int rlsl2_m977;
int rlsl2_p976;
int rlsl2_m976;
int rlsl2_p949;
int rlsl2_m949;
int rlsl2_v594;
int rlsl2_v949;
int rlsl2_p582;
int rlsl2_m582;
int rlsl2_p330;
double rlsl2_m330;
int rlsl2_p21;
double_or_symbol rlsl2_m21;
int rlsl2_p581;
int rlsl2_m581;
int rlsl2_p576;
double rlsl2_m576;
int rlsl2_p579;
double rlsl2_m579;
int rlsl2_p578;
int rlsl2_m578;
int rlsl2_v578;
int rlsl2_p571;
int rlsl2_m571;
int rlsl2_p570;
int rlsl2_m570;
int rlsl2_p337;
double rlsl2_m337;
int rlsl2_p339;
double rlsl2_m339;
int rlsl2_p338;
int rlsl2_m338;
int rlsl2_v338;
int rlsl2_p332;
int rlsl2_m332;
int rlsl2_v950;
int rlsl2_v949;
int rlsl2_p922;
int rlsl2_m922;
int rlsl2_p43;
double_or_symbol rlsl2_m43;
int rlsl2_p658;
double rlsl2_m658;
int rlsl2_p921;
int rlsl2_m921;
int rlsl2_p912;
double rlsl2_m912;
int rlsl2_p917;
double rlsl2_m917;
int rlsl2_p916;
int rlsl2_m916;
int rlsl2_v916;
int rlsl2_p907;
int rlsl2_m907;
int rlsl2_p667;
double rlsl2_m667;
int rlsl2_p669;
double rlsl2_m669;
int rlsl2_p668;
int rlsl2_m668;
int rlsl2_p906;
int rlsl2_m906;
int rlsl2_v668;
int rlsl2_p662;
int rlsl2_m662;
int rlsl2_p2244;
double rlsl2_m2244;
int rlsl2_p2223;
double rlsl2_m2223;
int rlsl2_p2221;
double rlsl2_m2221;
double rlsl2_v2223;
double rlsl2_v2221;
int rlsl2_p999;
double rlsl2_m999;
int rlsl2_p2259;
double rlsl2_m2259;
int rlsl2_v1006;
int rlsl2_p2199;
double rlsl2_m2199;
int rlsl2_p994;
int rlsl2_m994;
double rlsl2_v2259;
int rlsl2_p2215;
double rlsl2_m2215;
int rlsl2_p2213;
double rlsl2_m2213;
double rlsl2_v2213;
int rlsl2_p2212;
double rlsl2_m2212;
double rlsl2_v1733;
int rlsl2_p1730;
double rlsl2_m1730;
double rlsl2_v1730;
int rlsl2_p1712;
double rlsl2_m1712;
int rlsl2_p473;
double rlsl2_m473;
int rlsl2_p472;
int rlsl2_m472;
int rlsl2_p470;
double rlsl2_m470;
int rlsl2_p411;
double rlsl2_m411;
int rlsl2_p407;
double rlsl2_m407;
int rlsl2_p405;
double rlsl2_m405;
int rlsl2_p382;
double rlsl2_m382;
double rlsl2_v382;
int rlsl2_p374;
double rlsl2_m374;
int rlsl2_p403;
double rlsl2_m403;
int rlsl2_p402;
double rlsl2_m402;
double rlsl2_v402;
int rlsl2_p390;
int rlsl2_m390;
int rlsl2_v390;
double rlsl2_v374;
int rlsl2_p364;
int rlsl2_m364;
int rlsl2_p361;
double rlsl2_m361;
int rlsl2_p363;
double rlsl2_m363;
int rlsl2_p362;
int rlsl2_m362;
int rlsl2_v362;
int rlsl2_p356;
int rlsl2_m356;
int rlsl2_p355;
int rlsl2_m355;
int rlsl2_p352;
double rlsl2_m352;
int rlsl2_p354;
double rlsl2_m354;
int rlsl2_p353;
int rlsl2_m353;
int rlsl2_v353;
int rlsl2_p347;
int rlsl2_m347;
int rlsl2_p468;
double rlsl2_m468;
int rlsl2_p464;
double rlsl2_m464;
int rlsl2_p462;
double rlsl2_m462;
int rlsl2_p439;
double rlsl2_m439;
double rlsl2_v439;
int rlsl2_p431;
double rlsl2_m431;
int rlsl2_p460;
double rlsl2_m460;
int rlsl2_p459;
double rlsl2_m459;
double rlsl2_v459;
int rlsl2_p447;
int rlsl2_m447;
int rlsl2_v447;
double rlsl2_v431;
int rlsl2_p421;
int rlsl2_m421;
double rlsl2_v460;
double rlsl2_v403;
int rlsl2_p316;
double rlsl2_m316;
int rlsl2_p418;
double rlsl2_m418;
int rlsl2_p420;
double rlsl2_m420;
int rlsl2_p419;
int rlsl2_m419;
int rlsl2_v419;
int rlsl2_p413;
int rlsl2_m413;
int rlsl2_p1711;
double rlsl2_m1711;
int rlsl2_p1710;
int rlsl2_m1710;
int rlsl2_p1704;
double rlsl2_m1704;
int rlsl2_p1701;
double rlsl2_m1701;
int rlsl2_p1561;
double rlsl2_m1561;
int rlsl2_p514;
double rlsl2_m514;
double rlsl2_v514;
int rlsl2_p506;
double rlsl2_m506;
int rlsl2_p1559;
double rlsl2_m1559;
int rlsl2_p1558;
double rlsl2_m1558;
double rlsl2_v1558;
int rlsl2_p516;
int rlsl2_m516;
int rlsl2_v516;
double rlsl2_v506;
int rlsl2_p496;
int rlsl2_m496;
int rlsl2_p493;
double rlsl2_m493;
int rlsl2_p495;
double rlsl2_m495;
int rlsl2_p494;
int rlsl2_m494;
int rlsl2_v494;
int rlsl2_p488;
int rlsl2_m488;
int rlsl2_p487;
int rlsl2_m487;
int rlsl2_p484;
double rlsl2_m484;
int rlsl2_p486;
double rlsl2_m486;
int rlsl2_p485;
int rlsl2_m485;
int rlsl2_v485;
int rlsl2_p479;
int rlsl2_m479;
int rlsl2_p1702;
double rlsl2_m1702;
int rlsl2_p1605;
double rlsl2_m1605;
int rlsl2_p554;
double rlsl2_m554;
double rlsl2_v554;
int rlsl2_p546;
double rlsl2_m546;
int rlsl2_p1603;
double rlsl2_m1603;
int rlsl2_p1602;
double rlsl2_m1602;
double rlsl2_v1602;
int rlsl2_p556;
int rlsl2_m556;
int rlsl2_v556;
double rlsl2_v546;
int rlsl2_p536;
int rlsl2_m536;
double rlsl2_v1603;
double rlsl2_v1559;
int rlsl2_p324;
double rlsl2_m324;
int rlsl2_p533;
double rlsl2_m533;
int rlsl2_p535;
double rlsl2_m535;
int rlsl2_p534;
int rlsl2_m534;
int rlsl2_v534;
int rlsl2_p528;
int rlsl2_m528;
int rlsl2_p616;
int rlsl2_m616;
double rlsl2_v658;
double rlsl2_v330;
double rlsl2_v658;
double rlsl2_v607;
int rlsl2_p274;
double rlsl2_m274;
double rlsl2_v965;
double rlsl2_v330;
double rlsl2_v965;
double rlsl2_v607;
int rlsl2_p251;
double rlsl2_m251;
int rlsl2_p306;
double rlsl2_m306;
int rlsl2_p327;
double rlsl2_m327;
int rlsl2_p568;
int rlsl2_m568;
int rlsl2_v616;
int rlsl2_v615;
int rlsl2_p609;
int rlsl2_m609;
int rlsl2_p340;
int rlsl2_m340;
int rlsl2_p297;
double rlsl2_m297;
int rlsl2_p310;
double rlsl2_m310;
int rlsl2_p309;
int rlsl2_m309;
int rlsl2_v309;
int rlsl2_p292;
int rlsl2_m292;
int rlsl2_p289;
int rlsl2_m289;
int rlsl2_v571;
int rlsl2_p17;
double_or_symbol rlsl2_m17;
double rlsl2_v2215;
int rlsl2_p2210;
double rlsl2_m2210;
double rlsl2_v2210;
int rlsl2_p2188;
double rlsl2_m2188;
int rlsl2_p805;
double rlsl2_m805;
int rlsl2_p804;
int rlsl2_m804;
int rlsl2_p800;
double rlsl2_m800;
int rlsl2_p741;
double rlsl2_m741;
int rlsl2_p737;
double rlsl2_m737;
int rlsl2_p735;
double rlsl2_m735;
int rlsl2_p712;
double rlsl2_m712;
double rlsl2_v712;
int rlsl2_p704;
double rlsl2_m704;
int rlsl2_p733;
double rlsl2_m733;
int rlsl2_p732;
double rlsl2_m732;
double rlsl2_v732;
int rlsl2_p720;
int rlsl2_m720;
int rlsl2_v720;
double rlsl2_v704;
int rlsl2_p694;
int rlsl2_m694;
int rlsl2_p691;
double rlsl2_m691;
int rlsl2_p693;
double rlsl2_m693;
int rlsl2_p692;
int rlsl2_m692;
int rlsl2_v692;
int rlsl2_p686;
int rlsl2_m686;
int rlsl2_p685;
int rlsl2_m685;
int rlsl2_p682;
double rlsl2_m682;
int rlsl2_p684;
double rlsl2_m684;
int rlsl2_p683;
int rlsl2_m683;
int rlsl2_v683;
int rlsl2_p677;
int rlsl2_m677;
int rlsl2_p798;
double rlsl2_m798;
int rlsl2_p794;
double rlsl2_m794;
int rlsl2_p792;
double rlsl2_m792;
int rlsl2_p769;
double rlsl2_m769;
double rlsl2_v769;
int rlsl2_p761;
double rlsl2_m761;
int rlsl2_p790;
double rlsl2_m790;
int rlsl2_p789;
double rlsl2_m789;
double rlsl2_v789;
int rlsl2_p777;
int rlsl2_m777;
int rlsl2_v777;
double rlsl2_v761;
int rlsl2_p751;
int rlsl2_m751;
double rlsl2_v790;
double rlsl2_v733;
int rlsl2_p644;
double rlsl2_m644;
int rlsl2_p748;
double rlsl2_m748;
int rlsl2_p750;
double rlsl2_m750;
int rlsl2_p749;
int rlsl2_m749;
int rlsl2_v749;
int rlsl2_p743;
int rlsl2_m743;
int rlsl2_p2184;
double rlsl2_m2184;
int rlsl2_p2183;
int rlsl2_m2183;
int rlsl2_p2147;
double rlsl2_m2147;
int rlsl2_p2143;
double rlsl2_m2143;
int rlsl2_p1956;
double rlsl2_m1956;
int rlsl2_p850;
double rlsl2_m850;
double rlsl2_v850;
int rlsl2_p842;
double rlsl2_m842;
int rlsl2_p1954;
double rlsl2_m1954;
int rlsl2_p1953;
double rlsl2_m1953;
double rlsl2_v1953;
int rlsl2_p852;
int rlsl2_m852;
int rlsl2_v852;
double rlsl2_v842;
int rlsl2_p832;
int rlsl2_m832;
int rlsl2_p829;
double rlsl2_m829;
int rlsl2_p831;
double rlsl2_m831;
int rlsl2_p830;
int rlsl2_m830;
int rlsl2_v830;
int rlsl2_p824;
int rlsl2_m824;
int rlsl2_p823;
int rlsl2_m823;
int rlsl2_p820;
double rlsl2_m820;
int rlsl2_p822;
double rlsl2_m822;
int rlsl2_p821;
int rlsl2_m821;
int rlsl2_v821;
int rlsl2_p815;
int rlsl2_m815;
int rlsl2_p2144;
double rlsl2_m2144;
int rlsl2_p2003;
double rlsl2_m2003;
int rlsl2_p890;
double rlsl2_m890;
double rlsl2_v890;
int rlsl2_p882;
double rlsl2_m882;
int rlsl2_p2001;
double rlsl2_m2001;
int rlsl2_p2000;
double rlsl2_m2000;
double rlsl2_v2000;
int rlsl2_p892;
int rlsl2_m892;
int rlsl2_v892;
double rlsl2_v882;
int rlsl2_p872;
int rlsl2_m872;
double rlsl2_v2001;
double rlsl2_v1954;
int rlsl2_p652;
double rlsl2_m652;
int rlsl2_p869;
double rlsl2_m869;
int rlsl2_p871;
double rlsl2_m871;
int rlsl2_p870;
int rlsl2_m870;
int rlsl2_v870;
int rlsl2_p864;
int rlsl2_m864;
int rlsl2_p996;
int rlsl2_m996;
int rlsl2_v907;
int rlsl2_p39;
double_or_symbol rlsl2_m39;
int rlsl2_p634;
double rlsl2_m634;
int rlsl2_p655;
double rlsl2_m655;
int rlsl2_v996;
int rlsl2_v994;
int rlsl2_p987;
int rlsl2_m987;
int rlsl2_p637;
int rlsl2_m637;
int rlsl2_p904;
int rlsl2_m904;
int rlsl2_v637;
int rlsl2_v292;
int rlsl2_v289;
double rlsl2_v658;
double rlsl2_v324;
double rlsl2_v658;
double rlsl2_v1603;
double rlsl2_v658;
double rlsl2_v1559;
double rlsl2_v965;
double rlsl2_v324;
double rlsl2_v965;
double rlsl2_v1603;
double rlsl2_v965;
double rlsl2_v1559;
double rlsl2_v652;
double rlsl2_v330;
double rlsl2_v652;
double rlsl2_v607;
double rlsl2_v652;
double rlsl2_v324;
double rlsl2_v652;
double rlsl2_v1603;
double rlsl2_v652;
double rlsl2_v1559;
double rlsl2_v2001;
double rlsl2_v330;
double rlsl2_v2001;
double rlsl2_v607;
double rlsl2_v2001;
double rlsl2_v324;
double rlsl2_v2001;
double rlsl2_v1603;
double rlsl2_v2001;
double rlsl2_v1559;
double rlsl2_v1954;
double rlsl2_v330;
double rlsl2_v1954;
double rlsl2_v607;
double rlsl2_v1954;
double rlsl2_v324;
double rlsl2_v1954;
double rlsl2_v1603;
double rlsl2_v1954;
double rlsl2_v1559;
double rlsl2_v658;
double rlsl2_v316;
double rlsl2_v658;
double rlsl2_v460;
double rlsl2_v658;
double rlsl2_v403;
double rlsl2_v965;
double rlsl2_v316;
double rlsl2_v965;
double rlsl2_v460;
double rlsl2_v965;
double rlsl2_v403;
double rlsl2_v644;
double rlsl2_v330;
double rlsl2_v644;
double rlsl2_v607;
double rlsl2_v644;
double rlsl2_v316;
double rlsl2_v644;
double rlsl2_v460;
double rlsl2_v644;
double rlsl2_v403;
double rlsl2_v790;
double rlsl2_v330;
double rlsl2_v790;
double rlsl2_v607;
double rlsl2_v790;
double rlsl2_v316;
double rlsl2_v790;
double rlsl2_v460;
double rlsl2_v790;
double rlsl2_v403;
double rlsl2_v733;
double rlsl2_v330;
double rlsl2_v733;
double rlsl2_v607;
double rlsl2_v733;
double rlsl2_v316;
double rlsl2_v733;
double rlsl2_v460;
double rlsl2_v733;
double rlsl2_v403;
static double rlsl2_f1648(){if (rlsl2_p1648) return rlsl2_m1648; else {rlsl2_p1648=T;return rlsl2_m1648=(((rlsl2_v2274*rlsl2_v2282)+(rlsl2_v2272*rlsl2_v2280))-rlsl2_v2270);}}
static int rlsl2_f591(){if (rlsl2_p591) return rlsl2_m591; else {rlsl2_p591=T;return rlsl2_m591=(fabs((rlsl2_f1648()-(0.0)))<rlsl2_v2262);}}
static int rlsl2_f590(){if (rlsl2_p590) return rlsl2_m590; else {rlsl2_p590=T;return rlsl2_m590=(rlsl2_f1648()>(0.0));}}
static int rlsl2_f589(){if (rlsl2_p589) return rlsl2_m589; else {rlsl2_p589=T;return rlsl2_m589=(rlsl2_f590()?NIL:T);}}
static double rlsl2_f1669(){if (rlsl2_p1669) return rlsl2_m1669; else {rlsl2_p1669=T;return rlsl2_m1669=atan2((rlsl2_v2276-rlsl2_v2266),(rlsl2_v2278-rlsl2_v2268));}}
static double rlsl2_f1746(){if (rlsl2_p1746) return rlsl2_m1746; else {rlsl2_p1746=T;return rlsl2_m1746=(rlsl2_v2268-rlsl2_v2278);}}
static double rlsl2_f1743(){if (rlsl2_p1743) return rlsl2_m1743; else {rlsl2_p1743=T;return rlsl2_m1743=(rlsl2_v2266-rlsl2_v2276);}}
static int rlsl2_f619(){if (rlsl2_p619) return rlsl2_m619; else {rlsl2_p619=T;return rlsl2_m619=((fabs(rlsl2_f1746())<rlsl2_v2262)?(fabs(rlsl2_f1743())<rlsl2_v2262):NIL);}}
static double rlsl2_f1719(){if (rlsl2_p1719) return rlsl2_m1719; else {rlsl2_p1719=T;return rlsl2_m1719=fabs(normalize_rotation((atan2((rlsl2_v2280-rlsl2_v2276),(rlsl2_v2282-rlsl2_v2278))-atan2(rlsl2_f1743(),rlsl2_f1746()))));}}
static int rlsl2_f615(){if (rlsl2_p615) return rlsl2_m615; else {rlsl2_p615=T;return rlsl2_m615=(rlsl2_f1719()>(1.5707963267948966));}}
static double rlsl2_f1733(){if (rlsl2_p1733) return rlsl2_m1733; else {rlsl2_p1733=T;return rlsl2_m1733=((rlsl2_v1746=rlsl2_f1746()),(rlsl2_v1743=rlsl2_f1743()),(rlsl2_v2268-(rlsl2_v2268+sqrt(((rlsl2_v1746*rlsl2_v1746)+(rlsl2_v1743*rlsl2_v1743))))));}}
static double rlsl2_f660(){if (rlsl2_p660) return rlsl2_m660; else {rlsl2_p660=T;return rlsl2_m660=error("Non-numeric argument to MIN");}}
static int rlsl2_f2189(){if (rlsl2_p2189) return rlsl2_m2189; else {rlsl2_p2189=T;return rlsl2_m2189=(rlsl2_v2274==0.0);}}
static int rlsl2_f2181(){if (rlsl2_p2181) return rlsl2_m2181; else {rlsl2_p2181=T;return rlsl2_m2181=(rlsl2_v2272>0.0);}}
static double rlsl2_f2176(){if (rlsl2_p2176) return rlsl2_m2176; else {rlsl2_p2176=T;return rlsl2_m2176=(rlsl2_f2181()?(-rlsl2_v2274):rlsl2_v2274);}}
static double rlsl2_f914(){if (rlsl2_p914) return rlsl2_m914; else {rlsl2_p914=T;return rlsl2_m914=error("Argument X not of type FLOAT");}}
static double rlsl2_f919(){if (rlsl2_p919) return rlsl2_m919; else {rlsl2_p919=T;return rlsl2_m919=error("Argument X not of type REAL");}}
static double rlsl2_f2059(){if (rlsl2_p2059) return rlsl2_m2059; else {rlsl2_p2059=T;return rlsl2_m2059=(((rlsl2_v2274*rlsl2_v2278)+(rlsl2_v2272*rlsl2_v2276))-rlsl2_v2270);}}
static int rlsl2_f944(){if (rlsl2_p944) return rlsl2_m944; else {rlsl2_p944=T;return rlsl2_m944=(fabs((rlsl2_f2059()-(0.0)))<rlsl2_v2262);}}
static int rlsl2_f930(){if (rlsl2_p930) return rlsl2_m930; else {rlsl2_p930=T;return rlsl2_m930=(rlsl2_f2059()>(0.0));}}
static int rlsl2_f929(){if (rlsl2_p929) return rlsl2_m929; else {rlsl2_p929=T;return rlsl2_m929=(rlsl2_f930()?NIL:T);}}
static double rlsl2_f2096(){if (rlsl2_p2096) return rlsl2_m2096; else {rlsl2_p2096=T;return rlsl2_m2096=atan2((rlsl2_v2280-rlsl2_v2266),(rlsl2_v2282-rlsl2_v2268));}}
static double rlsl2_f2145(){if (rlsl2_p2145) return rlsl2_m2145; else {rlsl2_p2145=T;return rlsl2_m2145=(rlsl2_v2270/rlsl2_v2272);}}
static int rlsl2_f1980(){if (rlsl2_p1980) return rlsl2_m1980; else {rlsl2_p1980=T;return rlsl2_m1980=(fabs((rlsl2_v2266-rlsl2_f2145()))<rlsl2_v2262);}}
static double rlsl2_f2005(){if (rlsl2_p2005) return rlsl2_m2005; else {rlsl2_p2005=T;return rlsl2_m2005=(rlsl2_f2145()-rlsl2_v2266);}}
static double rlsl2_f2186(){if (rlsl2_p2186) return rlsl2_m2186; else {rlsl2_p2186=T;return rlsl2_m2186=(rlsl2_v2272*rlsl2_v2272);}}
static double rlsl2_f2190(){if (rlsl2_p2190) return rlsl2_m2190; else {rlsl2_p2190=T;return rlsl2_m2190=(rlsl2_v2270-(rlsl2_v2274*rlsl2_v2268)-(rlsl2_v2272*rlsl2_v2266));}}
static double rlsl2_f809(){if (rlsl2_p809) return rlsl2_m809; else {rlsl2_p809=T;return rlsl2_m809=((-2.0)*rlsl2_v2272*rlsl2_f2190());}}
static double rlsl2_f808(){if (rlsl2_p808) return rlsl2_m808; else {rlsl2_p808=T;return rlsl2_m808=((rlsl2_v809=rlsl2_f809()),(rlsl2_v809*rlsl2_v809));}}
static double rlsl2_f2187(){if (rlsl2_p2187) return rlsl2_m2187; else {rlsl2_p2187=T;return rlsl2_m2187=((rlsl2_v2190=rlsl2_f2190()),(rlsl2_v2190*rlsl2_v2190));}}
static double rlsl2_f2185(){if (rlsl2_p2185) return rlsl2_m2185; else {rlsl2_p2185=T;return rlsl2_m2185=(rlsl2_f2187()/rlsl2_f2186());}}
static double rlsl2_f2249(){if (rlsl2_p2249) return rlsl2_m2249; else {rlsl2_p2249=T;return rlsl2_m2249=(rlsl2_v2274*rlsl2_v2266);}}
static double rlsl2_f2248(){if (rlsl2_p2248) return rlsl2_m2248; else {rlsl2_p2248=T;return rlsl2_m2248=(rlsl2_v2272*rlsl2_v2268);}}
static double rlsl2_f2247(){if (rlsl2_p2247) return rlsl2_m2247; else {rlsl2_p2247=T;return rlsl2_m2247=(rlsl2_f2249()-rlsl2_f2248());}}
static double rlsl2_f2169(){if (rlsl2_p2169) return rlsl2_m2169; else {rlsl2_p2169=T;return rlsl2_m2169=(rlsl2_f2181()?(rlsl2_f2248()-rlsl2_f2249()):rlsl2_f2247());}}
static double rlsl2_f2167(){if (rlsl2_p2167) return rlsl2_m2167; else {rlsl2_p2167=T;return rlsl2_m2167=((rlsl2_v2270*rlsl2_f2176())-(rlsl2_v2272*rlsl2_f2169()));}}
static double rlsl2_f2246(){if (rlsl2_p2246) return rlsl2_m2246; else {rlsl2_p2246=T;return rlsl2_m2246=(rlsl2_v2274*rlsl2_v2274);}}
static double rlsl2_f2140(){if (rlsl2_p2140) return rlsl2_m2140; else {rlsl2_p2140=T;return rlsl2_m2140=(rlsl2_f2246()+rlsl2_f2186());}}
static double rlsl2_f2131(){if (rlsl2_p2131) return rlsl2_m2131; else {rlsl2_p2131=T;return rlsl2_m2131=((rlsl2_v2140=rlsl2_f2140()),(rlsl2_v2140+rlsl2_v2140));}}
static double rlsl2_f802(){if (rlsl2_p802) return rlsl2_m802; else {rlsl2_p802=T;return rlsl2_m802=((-rlsl2_f809())/rlsl2_f2131());}}
static double rlsl2_f2250(){if (rlsl2_p2250) return rlsl2_m2250; else {rlsl2_p2250=T;return rlsl2_m2250=(-rlsl2_v2272);}}
static double rlsl2_f2173(){if (rlsl2_p2173) return rlsl2_m2173; else {rlsl2_p2173=T;return rlsl2_m2173=(rlsl2_f2181()?rlsl2_v2272:rlsl2_f2250());}}
static double rlsl2_f2171(){if (rlsl2_p2171) return rlsl2_m2171; else {rlsl2_p2171=T;return rlsl2_m2171=((rlsl2_v2274*rlsl2_f2176())-(rlsl2_v2272*rlsl2_f2173()));}}
static double rlsl2_f2153(){if (rlsl2_p2153) return rlsl2_m2153; else {rlsl2_p2153=T;return rlsl2_m2153=(rlsl2_f2167()/rlsl2_f2171());}}
static int rlsl2_f984(){if (rlsl2_p984) return rlsl2_m984; else {rlsl2_p984=T;return rlsl2_m984=(fabs((rlsl2_f2171()-(0.0)))<rlsl2_v2262);}}
static double rlsl2_f969(){if (rlsl2_p969) return rlsl2_m969; else {rlsl2_p969=T;return rlsl2_m969=(rlsl2_f984()?error("No applicable method for X with argument types ((OR BOOLEAN POINT))"):rlsl2_f2153());}}
static double rlsl2_f2164(){if (rlsl2_p2164) return rlsl2_m2164; else {rlsl2_p2164=T;return rlsl2_m2164=((rlsl2_v2274*rlsl2_f2169())-(rlsl2_v2270*rlsl2_f2173()));}}
static double rlsl2_f2152(){if (rlsl2_p2152) return rlsl2_m2152; else {rlsl2_p2152=T;return rlsl2_m2152=(rlsl2_f2164()/rlsl2_f2171());}}
static int rlsl2_f947(){if (rlsl2_p947) return rlsl2_m947; else {rlsl2_p947=T;return rlsl2_m947=(rlsl2_f984()?NIL:((fabs((rlsl2_v2268-rlsl2_f2153()))<rlsl2_v2262)?(fabs((rlsl2_v2266-rlsl2_f2152()))<rlsl2_v2262):NIL));}}
static double rlsl2_f973(){if (rlsl2_p973) return rlsl2_m973; else {rlsl2_p973=T;return rlsl2_m973=(rlsl2_f984()?error("No applicable method for Y with argument types ((OR BOOLEAN POINT))"):rlsl2_f2152());}}
static double rlsl2_f967(){if (rlsl2_p967) return rlsl2_m967; else {rlsl2_p967=T;return rlsl2_m967=atan2((rlsl2_f973()-rlsl2_v2266),(rlsl2_f969()-rlsl2_v2268));}}
static double rlsl2_f607(){if (rlsl2_p607) return rlsl2_m607; else {rlsl2_p607=T;return rlsl2_m607=normalize_rotation((rlsl2_f967()-rlsl2_f1669()));}}
static double rlsl2_f606(){if (rlsl2_p606) return rlsl2_m606; else {rlsl2_p606=T;return rlsl2_m606=normalize_rotation(rlsl2_f607());}}
static int rlsl2_f594(){if (rlsl2_p594) return rlsl2_m594; else {rlsl2_p594=T;return rlsl2_m594=((rlsl2_v606=rlsl2_f606()),((fabs((rlsl2_v606-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v606-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v606-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static double rlsl2_f943(){if (rlsl2_p943) return rlsl2_m943; else {rlsl2_p943=T;return rlsl2_m943=(rlsl2_f967()+(1.5707963267948966));}}
static double rlsl2_f935(){if (rlsl2_p935) return rlsl2_m935; else {rlsl2_p935=T;return rlsl2_m935=((rlsl2_v943=rlsl2_f943()),(((rlsl2_v2274*(rlsl2_f969()+cos(rlsl2_v943)))+(rlsl2_v2272*(rlsl2_f973()+sin(rlsl2_v943))))-rlsl2_v2270));}}
static int rlsl2_f932(){if (rlsl2_p932) return rlsl2_m932; else {rlsl2_p932=T;return rlsl2_m932=(fabs((rlsl2_f935()-(0.0)))<rlsl2_v2262);}}
static int rlsl2_f931(){if (rlsl2_p931) return rlsl2_m931; else {rlsl2_p931=T;return rlsl2_m931=(rlsl2_f935()>(0.0));}}
static double rlsl2_f965(){if (rlsl2_p965) return rlsl2_m965; else {rlsl2_p965=T;return rlsl2_m965=normalize_rotation((rlsl2_f967()-rlsl2_f2096()));}}
static double rlsl2_f964(){if (rlsl2_p964) return rlsl2_m964; else {rlsl2_p964=T;return rlsl2_m964=normalize_rotation(rlsl2_f965());}}
static int rlsl2_f950(){if (rlsl2_p950) return rlsl2_m950; else {rlsl2_p950=T;return rlsl2_m950=((rlsl2_v964=rlsl2_f964()),((fabs((rlsl2_v964-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v964-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v964-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static int rlsl2_f977(){if (rlsl2_p977) return rlsl2_m977; else {rlsl2_p977=T;return rlsl2_m977=((fabs((rlsl2_f2167()-(0.0)))<rlsl2_v2262)?(fabs((rlsl2_f2164()-(0.0)))<rlsl2_v2262):NIL);}}
static int rlsl2_f976(){if (rlsl2_p976) return rlsl2_m976; else {rlsl2_p976=T;return rlsl2_m976=(rlsl2_f984()?rlsl2_f977():T);}}
static int rlsl2_f949(){if (rlsl2_p949) return rlsl2_m949; else {rlsl2_p949=T;return rlsl2_m949=(rlsl2_f984()?rlsl2_f977():NIL);}}
static int rlsl2_f582(){if (rlsl2_p582) return rlsl2_m582; else {rlsl2_p582=T;return rlsl2_m582=((rlsl2_v594=rlsl2_f594()),(rlsl2_v594?rlsl2_v594:((rlsl2_v949=rlsl2_f949()),(rlsl2_v949?rlsl2_v949:(rlsl2_f947()?NIL:((rlsl2_f591()?NIL:(rlsl2_f932()?NIL:(rlsl2_f931()?rlsl2_f590():rlsl2_f589())))?NIL:T))))));}}
static double rlsl2_f330(){if (rlsl2_p330) return rlsl2_m330; else {rlsl2_p330=T;return rlsl2_m330=(rlsl2_f976()?(rlsl2_f582()?rlsl2_f607():rlsl2_f660()):rlsl2_f660());}}
static double_or_symbol rlsl2_f21(){if (rlsl2_p21) return rlsl2_m21; else {rlsl2_p21=T;return rlsl2_m21=(rlsl2_f976()?(rlsl2_f582()?coerce_double_to_double_or_symbol(rlsl2_f607()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int rlsl2_f581(){if (rlsl2_p581) return rlsl2_m581; else {rlsl2_p581=T;return rlsl2_m581=(rlsl2_f976()?rlsl2_f582():NIL);}}
static double rlsl2_f576(){if (rlsl2_p576) return rlsl2_m576; else {rlsl2_p576=T;return rlsl2_m576=(rlsl2_f976()?(rlsl2_f582()?rlsl2_f607():rlsl2_f914()):rlsl2_f914());}}
static double rlsl2_f579(){if (rlsl2_p579) return rlsl2_m579; else {rlsl2_p579=T;return rlsl2_m579=(rlsl2_f976()?(rlsl2_f582()?rlsl2_f607():rlsl2_f919()):rlsl2_f919());}}
static int rlsl2_f578(){if (rlsl2_p578) return rlsl2_m578; else {rlsl2_p578=T;return rlsl2_m578=(rlsl2_f579()>(0.0));}}
static int rlsl2_f571(){if (rlsl2_p571) return rlsl2_m571; else {rlsl2_p571=T;return rlsl2_m571=(rlsl2_f581()?((rlsl2_v578=rlsl2_f578()),(rlsl2_v578?rlsl2_v578:(fabs((rlsl2_f576()-(0.0)))<rlsl2_v2262))):NIL);}}
static int rlsl2_f570(){if (rlsl2_p570) return rlsl2_m570; else {rlsl2_p570=T;return rlsl2_m570=(rlsl2_f571()?rlsl2_f581():NIL);}}
static double rlsl2_f337(){if (rlsl2_p337) return rlsl2_m337; else {rlsl2_p337=T;return rlsl2_m337=(rlsl2_f571()?rlsl2_f576():rlsl2_f914());}}
static double rlsl2_f339(){if (rlsl2_p339) return rlsl2_m339; else {rlsl2_p339=T;return rlsl2_m339=(rlsl2_f571()?rlsl2_f579():rlsl2_f919());}}
static int rlsl2_f338(){if (rlsl2_p338) return rlsl2_m338; else {rlsl2_p338=T;return rlsl2_m338=(rlsl2_f339()>(0.0));}}
static int rlsl2_f332(){if (rlsl2_p332) return rlsl2_m332; else {rlsl2_p332=T;return rlsl2_m332=(rlsl2_f570()?((rlsl2_v338=rlsl2_f338()),(rlsl2_v338?rlsl2_v338:(fabs((rlsl2_f337()-(0.0)))<rlsl2_v2262))):NIL);}}
static int rlsl2_f922(){if (rlsl2_p922) return rlsl2_m922; else {rlsl2_p922=T;return rlsl2_m922=((rlsl2_v950=rlsl2_f950()),(rlsl2_v950?rlsl2_v950:((rlsl2_v949=rlsl2_f949()),(rlsl2_v949?rlsl2_v949:(rlsl2_f947()?NIL:((rlsl2_f944()?NIL:(rlsl2_f932()?NIL:(rlsl2_f931()?rlsl2_f930():rlsl2_f929())))?NIL:T))))));}}
static double_or_symbol rlsl2_f43(){if (rlsl2_p43) return rlsl2_m43; else {rlsl2_p43=T;return rlsl2_m43=(rlsl2_f976()?(rlsl2_f922()?coerce_double_to_double_or_symbol(rlsl2_f965()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsl2_f658(){if (rlsl2_p658) return rlsl2_m658; else {rlsl2_p658=T;return rlsl2_m658=(rlsl2_f976()?(rlsl2_f922()?rlsl2_f965():rlsl2_f660()):rlsl2_f660());}}
static int rlsl2_f921(){if (rlsl2_p921) return rlsl2_m921; else {rlsl2_p921=T;return rlsl2_m921=(rlsl2_f976()?rlsl2_f922():NIL);}}
static double rlsl2_f912(){if (rlsl2_p912) return rlsl2_m912; else {rlsl2_p912=T;return rlsl2_m912=(rlsl2_f976()?(rlsl2_f922()?rlsl2_f965():rlsl2_f914()):rlsl2_f914());}}
static double rlsl2_f917(){if (rlsl2_p917) return rlsl2_m917; else {rlsl2_p917=T;return rlsl2_m917=(rlsl2_f976()?(rlsl2_f922()?rlsl2_f965():rlsl2_f919()):rlsl2_f919());}}
static int rlsl2_f916(){if (rlsl2_p916) return rlsl2_m916; else {rlsl2_p916=T;return rlsl2_m916=(rlsl2_f917()>(0.0));}}
static int rlsl2_f907(){if (rlsl2_p907) return rlsl2_m907; else {rlsl2_p907=T;return rlsl2_m907=(rlsl2_f921()?((rlsl2_v916=rlsl2_f916()),(rlsl2_v916?rlsl2_v916:(fabs((rlsl2_f912()-(0.0)))<rlsl2_v2262))):NIL);}}
static double rlsl2_f667(){if (rlsl2_p667) return rlsl2_m667; else {rlsl2_p667=T;return rlsl2_m667=(rlsl2_f907()?rlsl2_f912():rlsl2_f914());}}
static double rlsl2_f669(){if (rlsl2_p669) return rlsl2_m669; else {rlsl2_p669=T;return rlsl2_m669=(rlsl2_f907()?rlsl2_f917():rlsl2_f919());}}
static int rlsl2_f668(){if (rlsl2_p668) return rlsl2_m668; else {rlsl2_p668=T;return rlsl2_m668=(rlsl2_f669()>(0.0));}}
static int rlsl2_f906(){if (rlsl2_p906) return rlsl2_m906; else {rlsl2_p906=T;return rlsl2_m906=(rlsl2_f907()?rlsl2_f921():NIL);}}
static int rlsl2_f662(){if (rlsl2_p662) return rlsl2_m662; else {rlsl2_p662=T;return rlsl2_m662=(rlsl2_f906()?((rlsl2_v668=rlsl2_f668()),(rlsl2_v668?rlsl2_v668:(fabs((rlsl2_f667()-(0.0)))<rlsl2_v2262))):NIL);}}
static double rlsl2_f2244(){if (rlsl2_p2244) return rlsl2_m2244; else {rlsl2_p2244=T;return rlsl2_m2244=(rlsl2_f2246()-(rlsl2_v2272*rlsl2_f2250()));}}
static double rlsl2_f2223(){if (rlsl2_p2223) return rlsl2_m2223; else {rlsl2_p2223=T;return rlsl2_m2223=((((rlsl2_v2270*rlsl2_v2274)-(rlsl2_v2272*rlsl2_f2247()))/rlsl2_f2244())-rlsl2_v2268);}}
static double rlsl2_f2221(){if (rlsl2_p2221) return rlsl2_m2221; else {rlsl2_p2221=T;return rlsl2_m2221=((((rlsl2_v2274*rlsl2_f2247())-(rlsl2_v2270*rlsl2_f2250()))/rlsl2_f2244())-rlsl2_v2266);}}
static double rlsl2_f999(){if (rlsl2_p999) return rlsl2_m999; else {rlsl2_p999=T;return rlsl2_m999=((fabs((rlsl2_f2244()-(0.0)))<rlsl2_v2262)?error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)"):((rlsl2_v2223=rlsl2_f2223()),(rlsl2_v2221=rlsl2_f2221()),sqrt(((rlsl2_v2223*rlsl2_v2223)+(rlsl2_v2221*rlsl2_v2221)))));}}
static double rlsl2_f2259(){if (rlsl2_p2259) return rlsl2_m2259; else {rlsl2_p2259=T;return rlsl2_m2259=(rlsl2_v2266-rlsl2_v2280);}}
static double rlsl2_f2199(){if (rlsl2_p2199) return rlsl2_m2199; else {rlsl2_p2199=T;return rlsl2_m2199=fabs(normalize_rotation((atan2((rlsl2_v2276-rlsl2_v2280),(rlsl2_v2278-rlsl2_v2282))-atan2(rlsl2_f2259(),rlsl2_v2264))));}}
static int rlsl2_f994(){if (rlsl2_p994) return rlsl2_m994; else {rlsl2_p994=T;return rlsl2_m994=(rlsl2_f2199()>(1.5707963267948966));}}
static double rlsl2_f2215(){if (rlsl2_p2215) return rlsl2_m2215; else {rlsl2_p2215=T;return rlsl2_m2215=((rlsl2_v2259=rlsl2_f2259()),(rlsl2_v2268-(rlsl2_v2268+sqrt(((rlsl2_v2264*rlsl2_v2264)+(rlsl2_v2259*rlsl2_v2259))))));}}
static double rlsl2_f2213(){if (rlsl2_p2213) return rlsl2_m2213; else {rlsl2_p2213=T;return rlsl2_m2213=(rlsl2_v2266-rlsl2_v2266);}}
static double rlsl2_f2212(){if (rlsl2_p2212) return rlsl2_m2212; else {rlsl2_p2212=T;return rlsl2_m2212=((rlsl2_v2213=rlsl2_f2213()),(rlsl2_v2213*rlsl2_v2213));}}
static double rlsl2_f1730(){if (rlsl2_p1730) return rlsl2_m1730; else {rlsl2_p1730=T;return rlsl2_m1730=((rlsl2_v1733=rlsl2_f1733()),sqrt(((rlsl2_v1733*rlsl2_v1733)+rlsl2_f2212())));}}
static double rlsl2_f1712(){if (rlsl2_p1712) return rlsl2_m1712; else {rlsl2_p1712=T;return rlsl2_m1712=((rlsl2_v1730=rlsl2_f1730()),(rlsl2_v1730*rlsl2_v1730));}}
static double rlsl2_f473(){if (rlsl2_p473) return rlsl2_m473; else {rlsl2_p473=T;return rlsl2_m473=(rlsl2_f808()-((4.0)*rlsl2_f2140()*(rlsl2_f2187()-(rlsl2_f2246()*rlsl2_f1712()))));}}
static int rlsl2_f472(){if (rlsl2_p472) return rlsl2_m472; else {rlsl2_p472=T;return rlsl2_m472=(rlsl2_f473()<0.0);}}
static double rlsl2_f470(){if (rlsl2_p470) return rlsl2_m470; else {rlsl2_p470=T;return rlsl2_m470=(sqrt(rlsl2_f473())/rlsl2_f2131());}}
static double rlsl2_f411(){if (rlsl2_p411) return rlsl2_m411; else {rlsl2_p411=T;return rlsl2_m411=((rlsl2_f802()-rlsl2_f470())+rlsl2_v2266);}}
static double rlsl2_f407(){if (rlsl2_p407) return rlsl2_m407; else {rlsl2_p407=T;return rlsl2_m407=((rlsl2_v2270-(rlsl2_v2272*rlsl2_f411()))/rlsl2_v2274);}}
static double rlsl2_f405(){if (rlsl2_p405) return rlsl2_m405; else {rlsl2_p405=T;return rlsl2_m405=atan2((rlsl2_f411()-rlsl2_v2266),(rlsl2_f407()-rlsl2_v2268));}}
static double rlsl2_f382(){if (rlsl2_p382) return rlsl2_m382; else {rlsl2_p382=T;return rlsl2_m382=(rlsl2_f405()+(1.5707963267948966));}}
static double rlsl2_f374(){if (rlsl2_p374) return rlsl2_m374; else {rlsl2_p374=T;return rlsl2_m374=((rlsl2_v382=rlsl2_f382()),(((rlsl2_v2274*(rlsl2_f407()+cos(rlsl2_v382)))+(rlsl2_v2272*(rlsl2_f411()+sin(rlsl2_v382))))-rlsl2_v2270));}}
static double rlsl2_f403(){if (rlsl2_p403) return rlsl2_m403; else {rlsl2_p403=T;return rlsl2_m403=normalize_rotation((rlsl2_f405()-rlsl2_f1669()));}}
static double rlsl2_f402(){if (rlsl2_p402) return rlsl2_m402; else {rlsl2_p402=T;return rlsl2_m402=normalize_rotation(rlsl2_f403());}}
static int rlsl2_f390(){if (rlsl2_p390) return rlsl2_m390; else {rlsl2_p390=T;return rlsl2_m390=((rlsl2_v402=rlsl2_f402()),((fabs((rlsl2_v402-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v402-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v402-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static int rlsl2_f364(){if (rlsl2_p364) return rlsl2_m364; else {rlsl2_p364=T;return rlsl2_m364=((rlsl2_v390=rlsl2_f390()),(rlsl2_v390?rlsl2_v390:(((fabs((rlsl2_v2268-rlsl2_f407()))<rlsl2_v2262)?(fabs((rlsl2_v2266-rlsl2_f411()))<rlsl2_v2262):NIL)?NIL:((rlsl2_f591()?NIL:((rlsl2_v374=rlsl2_f374()),((fabs((rlsl2_v374-(0.0)))<rlsl2_v2262)?NIL:((rlsl2_v374>(0.0))?rlsl2_f590():rlsl2_f589()))))?NIL:T))));}}
static double rlsl2_f361(){if (rlsl2_p361) return rlsl2_m361; else {rlsl2_p361=T;return rlsl2_m361=(rlsl2_f364()?rlsl2_f403():rlsl2_f914());}}
static double rlsl2_f363(){if (rlsl2_p363) return rlsl2_m363; else {rlsl2_p363=T;return rlsl2_m363=(rlsl2_f364()?rlsl2_f403():rlsl2_f919());}}
static int rlsl2_f362(){if (rlsl2_p362) return rlsl2_m362; else {rlsl2_p362=T;return rlsl2_m362=(rlsl2_f363()>(0.0));}}
static int rlsl2_f356(){if (rlsl2_p356) return rlsl2_m356; else {rlsl2_p356=T;return rlsl2_m356=(rlsl2_f364()?((rlsl2_v362=rlsl2_f362()),(rlsl2_v362?rlsl2_v362:(fabs((rlsl2_f361()-(0.0)))<rlsl2_v2262))):NIL);}}
static int rlsl2_f355(){if (rlsl2_p355) return rlsl2_m355; else {rlsl2_p355=T;return rlsl2_m355=(rlsl2_f356()?rlsl2_f364():NIL);}}
static double rlsl2_f352(){if (rlsl2_p352) return rlsl2_m352; else {rlsl2_p352=T;return rlsl2_m352=(rlsl2_f356()?rlsl2_f361():rlsl2_f914());}}
static double rlsl2_f354(){if (rlsl2_p354) return rlsl2_m354; else {rlsl2_p354=T;return rlsl2_m354=(rlsl2_f356()?rlsl2_f363():rlsl2_f919());}}
static int rlsl2_f353(){if (rlsl2_p353) return rlsl2_m353; else {rlsl2_p353=T;return rlsl2_m353=(rlsl2_f354()>(0.0));}}
static int rlsl2_f347(){if (rlsl2_p347) return rlsl2_m347; else {rlsl2_p347=T;return rlsl2_m347=(rlsl2_f355()?((rlsl2_v353=rlsl2_f353()),(rlsl2_v353?rlsl2_v353:(fabs((rlsl2_f352()-(0.0)))<rlsl2_v2262))):NIL);}}
static double rlsl2_f468(){if (rlsl2_p468) return rlsl2_m468; else {rlsl2_p468=T;return rlsl2_m468=((rlsl2_f802()+rlsl2_f470())+rlsl2_v2266);}}
static double rlsl2_f464(){if (rlsl2_p464) return rlsl2_m464; else {rlsl2_p464=T;return rlsl2_m464=((rlsl2_v2270-(rlsl2_v2272*rlsl2_f468()))/rlsl2_v2274);}}
static double rlsl2_f462(){if (rlsl2_p462) return rlsl2_m462; else {rlsl2_p462=T;return rlsl2_m462=atan2((rlsl2_f468()-rlsl2_v2266),(rlsl2_f464()-rlsl2_v2268));}}
static double rlsl2_f439(){if (rlsl2_p439) return rlsl2_m439; else {rlsl2_p439=T;return rlsl2_m439=(rlsl2_f462()+(1.5707963267948966));}}
static double rlsl2_f431(){if (rlsl2_p431) return rlsl2_m431; else {rlsl2_p431=T;return rlsl2_m431=((rlsl2_v439=rlsl2_f439()),(((rlsl2_v2274*(rlsl2_f464()+cos(rlsl2_v439)))+(rlsl2_v2272*(rlsl2_f468()+sin(rlsl2_v439))))-rlsl2_v2270));}}
static double rlsl2_f460(){if (rlsl2_p460) return rlsl2_m460; else {rlsl2_p460=T;return rlsl2_m460=normalize_rotation((rlsl2_f462()-rlsl2_f1669()));}}
static double rlsl2_f459(){if (rlsl2_p459) return rlsl2_m459; else {rlsl2_p459=T;return rlsl2_m459=normalize_rotation(rlsl2_f460());}}
static int rlsl2_f447(){if (rlsl2_p447) return rlsl2_m447; else {rlsl2_p447=T;return rlsl2_m447=((rlsl2_v459=rlsl2_f459()),((fabs((rlsl2_v459-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v459-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v459-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static int rlsl2_f421(){if (rlsl2_p421) return rlsl2_m421; else {rlsl2_p421=T;return rlsl2_m421=((rlsl2_v447=rlsl2_f447()),(rlsl2_v447?rlsl2_v447:(((fabs((rlsl2_v2268-rlsl2_f464()))<rlsl2_v2262)?(fabs((rlsl2_v2266-rlsl2_f468()))<rlsl2_v2262):NIL)?NIL:((rlsl2_f591()?NIL:((rlsl2_v431=rlsl2_f431()),((fabs((rlsl2_v431-(0.0)))<rlsl2_v2262)?NIL:((rlsl2_v431>(0.0))?rlsl2_f590():rlsl2_f589()))))?NIL:T))));}}
static double rlsl2_f316(){if (rlsl2_p316) return rlsl2_m316; else {rlsl2_p316=T;return rlsl2_m316=(rlsl2_f421()?(rlsl2_f356()?(rlsl2_f364()?((rlsl2_v460=rlsl2_f460()),(rlsl2_v403=rlsl2_f403()),((rlsl2_v460<rlsl2_v403)?rlsl2_v460:rlsl2_v403)):rlsl2_f660()):rlsl2_f660()):rlsl2_f660());}}
static double rlsl2_f418(){if (rlsl2_p418) return rlsl2_m418; else {rlsl2_p418=T;return rlsl2_m418=(rlsl2_f421()?rlsl2_f460():rlsl2_f914());}}
static double rlsl2_f420(){if (rlsl2_p420) return rlsl2_m420; else {rlsl2_p420=T;return rlsl2_m420=(rlsl2_f421()?rlsl2_f460():rlsl2_f919());}}
static int rlsl2_f419(){if (rlsl2_p419) return rlsl2_m419; else {rlsl2_p419=T;return rlsl2_m419=(rlsl2_f420()>(0.0));}}
static int rlsl2_f413(){if (rlsl2_p413) return rlsl2_m413; else {rlsl2_p413=T;return rlsl2_m413=(rlsl2_f421()?((rlsl2_v419=rlsl2_f419()),(rlsl2_v419?rlsl2_v419:(fabs((rlsl2_f418()-(0.0)))<rlsl2_v2262))):NIL);}}
static double rlsl2_f1711(){if (rlsl2_p1711) return rlsl2_m1711; else {rlsl2_p1711=T;return rlsl2_m1711=(rlsl2_f1712()-rlsl2_f2185());}}
static int rlsl2_f1710(){if (rlsl2_p1710) return rlsl2_m1710; else {rlsl2_p1710=T;return rlsl2_m1710=(rlsl2_f1711()<0.0);}}
static double rlsl2_f1704(){if (rlsl2_p1704) return rlsl2_m1704; else {rlsl2_p1704=T;return rlsl2_m1704=sqrt(rlsl2_f1711());}}
static double rlsl2_f1701(){if (rlsl2_p1701) return rlsl2_m1701; else {rlsl2_p1701=T;return rlsl2_m1701=((-rlsl2_f1704())+rlsl2_v2268);}}
static double rlsl2_f1561(){if (rlsl2_p1561) return rlsl2_m1561; else {rlsl2_p1561=T;return rlsl2_m1561=atan2(rlsl2_f2005(),(rlsl2_f1701()-rlsl2_v2268));}}
static double rlsl2_f514(){if (rlsl2_p514) return rlsl2_m514; else {rlsl2_p514=T;return rlsl2_m514=(rlsl2_f1561()+(1.5707963267948966));}}
static double rlsl2_f506(){if (rlsl2_p506) return rlsl2_m506; else {rlsl2_p506=T;return rlsl2_m506=((rlsl2_v514=rlsl2_f514()),(((rlsl2_v2274*(rlsl2_f1701()+cos(rlsl2_v514)))+(rlsl2_v2272*(rlsl2_f2145()+sin(rlsl2_v514))))-rlsl2_v2270));}}
static double rlsl2_f1559(){if (rlsl2_p1559) return rlsl2_m1559; else {rlsl2_p1559=T;return rlsl2_m1559=normalize_rotation((rlsl2_f1561()-rlsl2_f1669()));}}
static double rlsl2_f1558(){if (rlsl2_p1558) return rlsl2_m1558; else {rlsl2_p1558=T;return rlsl2_m1558=normalize_rotation(rlsl2_f1559());}}
static int rlsl2_f516(){if (rlsl2_p516) return rlsl2_m516; else {rlsl2_p516=T;return rlsl2_m516=((rlsl2_v1558=rlsl2_f1558()),((fabs((rlsl2_v1558-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v1558-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v1558-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static int rlsl2_f496(){if (rlsl2_p496) return rlsl2_m496; else {rlsl2_p496=T;return rlsl2_m496=((rlsl2_v516=rlsl2_f516()),(rlsl2_v516?rlsl2_v516:(((fabs((rlsl2_v2268-rlsl2_f1701()))<rlsl2_v2262)?rlsl2_f1980():NIL)?NIL:((rlsl2_f591()?NIL:((rlsl2_v506=rlsl2_f506()),((fabs((rlsl2_v506-(0.0)))<rlsl2_v2262)?NIL:((rlsl2_v506>(0.0))?rlsl2_f590():rlsl2_f589()))))?NIL:T))));}}
static double rlsl2_f493(){if (rlsl2_p493) return rlsl2_m493; else {rlsl2_p493=T;return rlsl2_m493=(rlsl2_f496()?rlsl2_f1559():rlsl2_f914());}}
static double rlsl2_f495(){if (rlsl2_p495) return rlsl2_m495; else {rlsl2_p495=T;return rlsl2_m495=(rlsl2_f496()?rlsl2_f1559():rlsl2_f919());}}
static int rlsl2_f494(){if (rlsl2_p494) return rlsl2_m494; else {rlsl2_p494=T;return rlsl2_m494=(rlsl2_f495()>(0.0));}}
static int rlsl2_f488(){if (rlsl2_p488) return rlsl2_m488; else {rlsl2_p488=T;return rlsl2_m488=(rlsl2_f496()?((rlsl2_v494=rlsl2_f494()),(rlsl2_v494?rlsl2_v494:(fabs((rlsl2_f493()-(0.0)))<rlsl2_v2262))):NIL);}}
static int rlsl2_f487(){if (rlsl2_p487) return rlsl2_m487; else {rlsl2_p487=T;return rlsl2_m487=(rlsl2_f488()?rlsl2_f496():NIL);}}
static double rlsl2_f484(){if (rlsl2_p484) return rlsl2_m484; else {rlsl2_p484=T;return rlsl2_m484=(rlsl2_f488()?rlsl2_f493():rlsl2_f914());}}
static double rlsl2_f486(){if (rlsl2_p486) return rlsl2_m486; else {rlsl2_p486=T;return rlsl2_m486=(rlsl2_f488()?rlsl2_f495():rlsl2_f919());}}
static int rlsl2_f485(){if (rlsl2_p485) return rlsl2_m485; else {rlsl2_p485=T;return rlsl2_m485=(rlsl2_f486()>(0.0));}}
static int rlsl2_f479(){if (rlsl2_p479) return rlsl2_m479; else {rlsl2_p479=T;return rlsl2_m479=(rlsl2_f487()?((rlsl2_v485=rlsl2_f485()),(rlsl2_v485?rlsl2_v485:(fabs((rlsl2_f484()-(0.0)))<rlsl2_v2262))):NIL);}}
static double rlsl2_f1702(){if (rlsl2_p1702) return rlsl2_m1702; else {rlsl2_p1702=T;return rlsl2_m1702=(rlsl2_f1704()+rlsl2_v2268);}}
static double rlsl2_f1605(){if (rlsl2_p1605) return rlsl2_m1605; else {rlsl2_p1605=T;return rlsl2_m1605=atan2(rlsl2_f2005(),(rlsl2_f1702()-rlsl2_v2268));}}
static double rlsl2_f554(){if (rlsl2_p554) return rlsl2_m554; else {rlsl2_p554=T;return rlsl2_m554=(rlsl2_f1605()+(1.5707963267948966));}}
static double rlsl2_f546(){if (rlsl2_p546) return rlsl2_m546; else {rlsl2_p546=T;return rlsl2_m546=((rlsl2_v554=rlsl2_f554()),(((rlsl2_v2274*(rlsl2_f1702()+cos(rlsl2_v554)))+(rlsl2_v2272*(rlsl2_f2145()+sin(rlsl2_v554))))-rlsl2_v2270));}}
static double rlsl2_f1603(){if (rlsl2_p1603) return rlsl2_m1603; else {rlsl2_p1603=T;return rlsl2_m1603=normalize_rotation((rlsl2_f1605()-rlsl2_f1669()));}}
static double rlsl2_f1602(){if (rlsl2_p1602) return rlsl2_m1602; else {rlsl2_p1602=T;return rlsl2_m1602=normalize_rotation(rlsl2_f1603());}}
static int rlsl2_f556(){if (rlsl2_p556) return rlsl2_m556; else {rlsl2_p556=T;return rlsl2_m556=((rlsl2_v1602=rlsl2_f1602()),((fabs((rlsl2_v1602-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v1602-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v1602-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static int rlsl2_f536(){if (rlsl2_p536) return rlsl2_m536; else {rlsl2_p536=T;return rlsl2_m536=((rlsl2_v556=rlsl2_f556()),(rlsl2_v556?rlsl2_v556:(((fabs((rlsl2_v2268-rlsl2_f1702()))<rlsl2_v2262)?rlsl2_f1980():NIL)?NIL:((rlsl2_f591()?NIL:((rlsl2_v546=rlsl2_f546()),((fabs((rlsl2_v546-(0.0)))<rlsl2_v2262)?NIL:((rlsl2_v546>(0.0))?rlsl2_f590():rlsl2_f589()))))?NIL:T))));}}
static double rlsl2_f324(){if (rlsl2_p324) return rlsl2_m324; else {rlsl2_p324=T;return rlsl2_m324=(rlsl2_f536()?(rlsl2_f488()?(rlsl2_f496()?((rlsl2_v1603=rlsl2_f1603()),(rlsl2_v1559=rlsl2_f1559()),((rlsl2_v1603<rlsl2_v1559)?rlsl2_v1603:rlsl2_v1559)):rlsl2_f660()):rlsl2_f660()):rlsl2_f660());}}
static double rlsl2_f533(){if (rlsl2_p533) return rlsl2_m533; else {rlsl2_p533=T;return rlsl2_m533=(rlsl2_f536()?rlsl2_f1603():rlsl2_f914());}}
static double rlsl2_f535(){if (rlsl2_p535) return rlsl2_m535; else {rlsl2_p535=T;return rlsl2_m535=(rlsl2_f536()?rlsl2_f1603():rlsl2_f919());}}
static int rlsl2_f534(){if (rlsl2_p534) return rlsl2_m534; else {rlsl2_p534=T;return rlsl2_m534=(rlsl2_f535()>(0.0));}}
static int rlsl2_f528(){if (rlsl2_p528) return rlsl2_m528; else {rlsl2_p528=T;return rlsl2_m528=(rlsl2_f536()?((rlsl2_v534=rlsl2_f534()),(rlsl2_v534?rlsl2_v534:(fabs((rlsl2_f533()-(0.0)))<rlsl2_v2262))):NIL);}}
static int rlsl2_f616(){if (rlsl2_p616) return rlsl2_m616; else {rlsl2_p616=T;return rlsl2_m616=(fabs((rlsl2_f999()-rlsl2_f1730()))<rlsl2_v2262);}}
static double rlsl2_f274(){if (rlsl2_p274) return rlsl2_m274; else {rlsl2_p274=T;return rlsl2_m274=(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?((rlsl2_v658=rlsl2_f658()),(rlsl2_v330=rlsl2_f330()),((rlsl2_v658<rlsl2_v330)?rlsl2_v658:rlsl2_v330)):(rlsl2_f976()?(rlsl2_f582()?((rlsl2_v658=rlsl2_f658()),(rlsl2_v607=rlsl2_f607()),((rlsl2_v658<rlsl2_v607)?rlsl2_v658:rlsl2_v607)):rlsl2_f660()):rlsl2_f660())):rlsl2_f660()):rlsl2_f660());}}
static double rlsl2_f251(){if (rlsl2_p251) return rlsl2_m251; else {rlsl2_p251=T;return rlsl2_m251=(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?((rlsl2_v965=rlsl2_f965()),(rlsl2_v330=rlsl2_f330()),((rlsl2_v965<rlsl2_v330)?rlsl2_v965:rlsl2_v330)):(rlsl2_f582()?((rlsl2_v965=rlsl2_f965()),(rlsl2_v607=rlsl2_f607()),((rlsl2_v965<rlsl2_v607)?rlsl2_v965:rlsl2_v607)):rlsl2_f660())):rlsl2_f660()):rlsl2_f660());}}
static double rlsl2_f306(){if (rlsl2_p306) return rlsl2_m306; else {rlsl2_p306=T;return rlsl2_m306=(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?rlsl2_f330():rlsl2_f576()):rlsl2_f337()):rlsl2_f914());}}
static double rlsl2_f327(){if (rlsl2_p327) return rlsl2_m327; else {rlsl2_p327=T;return rlsl2_m327=(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?rlsl2_f330():rlsl2_f579()):rlsl2_f339()):rlsl2_f919());}}
static int rlsl2_f568(){if (rlsl2_p568) return rlsl2_m568; else {rlsl2_p568=T;return rlsl2_m568=(rlsl2_f616()?(rlsl2_f571()?rlsl2_f581():rlsl2_f570()):NIL);}}
static int rlsl2_f609(){if (rlsl2_p609) return rlsl2_m609; else {rlsl2_p609=T;return rlsl2_m609=((rlsl2_v616=rlsl2_f616()),(rlsl2_v616?((rlsl2_v615=rlsl2_f615()),(rlsl2_v615?rlsl2_v615:(fabs((rlsl2_f1719()-(1.5707963267948966)))<rlsl2_v2262))):(rlsl2_v616?NIL:T)));}}
static int rlsl2_f340(){if (rlsl2_p340) return rlsl2_m340; else {rlsl2_p340=T;return rlsl2_m340=(rlsl2_f619()?NIL:(rlsl2_f609()?(rlsl2_f2189()?(rlsl2_f1710()?rlsl2_f568():(rlsl2_f528()?(rlsl2_f479()?(rlsl2_f536()?rlsl2_f487():NIL):rlsl2_f536()):rlsl2_f487())):(rlsl2_f472()?rlsl2_f568():(rlsl2_f413()?(rlsl2_f347()?(rlsl2_f421()?rlsl2_f355():NIL):rlsl2_f421()):rlsl2_f355()))):NIL));}}
static double rlsl2_f297(){if (rlsl2_p297) return rlsl2_m297; else {rlsl2_p297=T;return rlsl2_m297=(rlsl2_f619()?rlsl2_f914():(rlsl2_f609()?(rlsl2_f2189()?(rlsl2_f1710()?rlsl2_f306():(rlsl2_f528()?(rlsl2_f479()?rlsl2_f324():rlsl2_f533()):rlsl2_f484())):(rlsl2_f472()?rlsl2_f306():(rlsl2_f413()?(rlsl2_f347()?rlsl2_f316():rlsl2_f418()):rlsl2_f352()))):rlsl2_f914()));}}
static double rlsl2_f310(){if (rlsl2_p310) return rlsl2_m310; else {rlsl2_p310=T;return rlsl2_m310=(rlsl2_f619()?rlsl2_f919():(rlsl2_f609()?(rlsl2_f2189()?(rlsl2_f1710()?rlsl2_f327():(rlsl2_f528()?(rlsl2_f479()?rlsl2_f324():rlsl2_f535()):rlsl2_f486())):(rlsl2_f472()?rlsl2_f327():(rlsl2_f413()?(rlsl2_f347()?rlsl2_f316():rlsl2_f420()):rlsl2_f354()))):rlsl2_f919()));}}
static int rlsl2_f309(){if (rlsl2_p309) return rlsl2_m309; else {rlsl2_p309=T;return rlsl2_m309=(rlsl2_f310()>(0.0));}}
static int rlsl2_f292(){if (rlsl2_p292) return rlsl2_m292; else {rlsl2_p292=T;return rlsl2_m292=(rlsl2_f340()?((rlsl2_v309=rlsl2_f309()),(rlsl2_v309?rlsl2_v309:(fabs((rlsl2_f297()-(0.0)))<rlsl2_v2262))):NIL);}}
static int rlsl2_f289(){if (rlsl2_p289) return rlsl2_m289; else {rlsl2_p289=T;return rlsl2_m289=((rlsl2_f292()?rlsl2_f310():rlsl2_f919())>(0.0));}}
static double_or_symbol rlsl2_f17(){if (rlsl2_p17) return rlsl2_m17; else {rlsl2_p17=T;return rlsl2_m17=(rlsl2_f616()?((rlsl2_v571=rlsl2_f571()),(rlsl2_v571?(rlsl2_f332()?coerce_double_to_double_or_symbol(rlsl2_f330()):rlsl2_f21()):(rlsl2_v571?rlsl2_f21():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsl2_f2210(){if (rlsl2_p2210) return rlsl2_m2210; else {rlsl2_p2210=T;return rlsl2_m2210=((rlsl2_v2215=rlsl2_f2215()),sqrt(((rlsl2_v2215*rlsl2_v2215)+rlsl2_f2212())));}}
static double rlsl2_f2188(){if (rlsl2_p2188) return rlsl2_m2188; else {rlsl2_p2188=T;return rlsl2_m2188=((rlsl2_v2210=rlsl2_f2210()),(rlsl2_v2210*rlsl2_v2210));}}
static double rlsl2_f805(){if (rlsl2_p805) return rlsl2_m805; else {rlsl2_p805=T;return rlsl2_m805=(rlsl2_f808()-((4.0)*rlsl2_f2140()*(rlsl2_f2187()-(rlsl2_f2246()*rlsl2_f2188()))));}}
static int rlsl2_f804(){if (rlsl2_p804) return rlsl2_m804; else {rlsl2_p804=T;return rlsl2_m804=(rlsl2_f805()<0.0);}}
static double rlsl2_f800(){if (rlsl2_p800) return rlsl2_m800; else {rlsl2_p800=T;return rlsl2_m800=(sqrt(rlsl2_f805())/rlsl2_f2131());}}
static double rlsl2_f741(){if (rlsl2_p741) return rlsl2_m741; else {rlsl2_p741=T;return rlsl2_m741=((rlsl2_f802()-rlsl2_f800())+rlsl2_v2266);}}
static double rlsl2_f737(){if (rlsl2_p737) return rlsl2_m737; else {rlsl2_p737=T;return rlsl2_m737=((rlsl2_v2270-(rlsl2_v2272*rlsl2_f741()))/rlsl2_v2274);}}
static double rlsl2_f735(){if (rlsl2_p735) return rlsl2_m735; else {rlsl2_p735=T;return rlsl2_m735=atan2((rlsl2_f741()-rlsl2_v2266),(rlsl2_f737()-rlsl2_v2268));}}
static double rlsl2_f712(){if (rlsl2_p712) return rlsl2_m712; else {rlsl2_p712=T;return rlsl2_m712=(rlsl2_f735()+(1.5707963267948966));}}
static double rlsl2_f704(){if (rlsl2_p704) return rlsl2_m704; else {rlsl2_p704=T;return rlsl2_m704=((rlsl2_v712=rlsl2_f712()),(((rlsl2_v2274*(rlsl2_f737()+cos(rlsl2_v712)))+(rlsl2_v2272*(rlsl2_f741()+sin(rlsl2_v712))))-rlsl2_v2270));}}
static double rlsl2_f733(){if (rlsl2_p733) return rlsl2_m733; else {rlsl2_p733=T;return rlsl2_m733=normalize_rotation((rlsl2_f735()-rlsl2_f2096()));}}
static double rlsl2_f732(){if (rlsl2_p732) return rlsl2_m732; else {rlsl2_p732=T;return rlsl2_m732=normalize_rotation(rlsl2_f733());}}
static int rlsl2_f720(){if (rlsl2_p720) return rlsl2_m720; else {rlsl2_p720=T;return rlsl2_m720=((rlsl2_v732=rlsl2_f732()),((fabs((rlsl2_v732-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v732-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v732-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static int rlsl2_f694(){if (rlsl2_p694) return rlsl2_m694; else {rlsl2_p694=T;return rlsl2_m694=((rlsl2_v720=rlsl2_f720()),(rlsl2_v720?rlsl2_v720:(((fabs((rlsl2_v2268-rlsl2_f737()))<rlsl2_v2262)?(fabs((rlsl2_v2266-rlsl2_f741()))<rlsl2_v2262):NIL)?NIL:((rlsl2_f944()?NIL:((rlsl2_v704=rlsl2_f704()),((fabs((rlsl2_v704-(0.0)))<rlsl2_v2262)?NIL:((rlsl2_v704>(0.0))?rlsl2_f930():rlsl2_f929()))))?NIL:T))));}}
static double rlsl2_f691(){if (rlsl2_p691) return rlsl2_m691; else {rlsl2_p691=T;return rlsl2_m691=(rlsl2_f694()?rlsl2_f733():rlsl2_f914());}}
static double rlsl2_f693(){if (rlsl2_p693) return rlsl2_m693; else {rlsl2_p693=T;return rlsl2_m693=(rlsl2_f694()?rlsl2_f733():rlsl2_f919());}}
static int rlsl2_f692(){if (rlsl2_p692) return rlsl2_m692; else {rlsl2_p692=T;return rlsl2_m692=(rlsl2_f693()>(0.0));}}
static int rlsl2_f686(){if (rlsl2_p686) return rlsl2_m686; else {rlsl2_p686=T;return rlsl2_m686=(rlsl2_f694()?((rlsl2_v692=rlsl2_f692()),(rlsl2_v692?rlsl2_v692:(fabs((rlsl2_f691()-(0.0)))<rlsl2_v2262))):NIL);}}
static int rlsl2_f685(){if (rlsl2_p685) return rlsl2_m685; else {rlsl2_p685=T;return rlsl2_m685=(rlsl2_f686()?rlsl2_f694():NIL);}}
static double rlsl2_f682(){if (rlsl2_p682) return rlsl2_m682; else {rlsl2_p682=T;return rlsl2_m682=(rlsl2_f686()?rlsl2_f691():rlsl2_f914());}}
static double rlsl2_f684(){if (rlsl2_p684) return rlsl2_m684; else {rlsl2_p684=T;return rlsl2_m684=(rlsl2_f686()?rlsl2_f693():rlsl2_f919());}}
static int rlsl2_f683(){if (rlsl2_p683) return rlsl2_m683; else {rlsl2_p683=T;return rlsl2_m683=(rlsl2_f684()>(0.0));}}
static int rlsl2_f677(){if (rlsl2_p677) return rlsl2_m677; else {rlsl2_p677=T;return rlsl2_m677=(rlsl2_f685()?((rlsl2_v683=rlsl2_f683()),(rlsl2_v683?rlsl2_v683:(fabs((rlsl2_f682()-(0.0)))<rlsl2_v2262))):NIL);}}
static double rlsl2_f798(){if (rlsl2_p798) return rlsl2_m798; else {rlsl2_p798=T;return rlsl2_m798=((rlsl2_f802()+rlsl2_f800())+rlsl2_v2266);}}
static double rlsl2_f794(){if (rlsl2_p794) return rlsl2_m794; else {rlsl2_p794=T;return rlsl2_m794=((rlsl2_v2270-(rlsl2_v2272*rlsl2_f798()))/rlsl2_v2274);}}
static double rlsl2_f792(){if (rlsl2_p792) return rlsl2_m792; else {rlsl2_p792=T;return rlsl2_m792=atan2((rlsl2_f798()-rlsl2_v2266),(rlsl2_f794()-rlsl2_v2268));}}
static double rlsl2_f769(){if (rlsl2_p769) return rlsl2_m769; else {rlsl2_p769=T;return rlsl2_m769=(rlsl2_f792()+(1.5707963267948966));}}
static double rlsl2_f761(){if (rlsl2_p761) return rlsl2_m761; else {rlsl2_p761=T;return rlsl2_m761=((rlsl2_v769=rlsl2_f769()),(((rlsl2_v2274*(rlsl2_f794()+cos(rlsl2_v769)))+(rlsl2_v2272*(rlsl2_f798()+sin(rlsl2_v769))))-rlsl2_v2270));}}
static double rlsl2_f790(){if (rlsl2_p790) return rlsl2_m790; else {rlsl2_p790=T;return rlsl2_m790=normalize_rotation((rlsl2_f792()-rlsl2_f2096()));}}
static double rlsl2_f789(){if (rlsl2_p789) return rlsl2_m789; else {rlsl2_p789=T;return rlsl2_m789=normalize_rotation(rlsl2_f790());}}
static int rlsl2_f777(){if (rlsl2_p777) return rlsl2_m777; else {rlsl2_p777=T;return rlsl2_m777=((rlsl2_v789=rlsl2_f789()),((fabs((rlsl2_v789-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v789-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v789-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static int rlsl2_f751(){if (rlsl2_p751) return rlsl2_m751; else {rlsl2_p751=T;return rlsl2_m751=((rlsl2_v777=rlsl2_f777()),(rlsl2_v777?rlsl2_v777:(((fabs((rlsl2_v2268-rlsl2_f794()))<rlsl2_v2262)?(fabs((rlsl2_v2266-rlsl2_f798()))<rlsl2_v2262):NIL)?NIL:((rlsl2_f944()?NIL:((rlsl2_v761=rlsl2_f761()),((fabs((rlsl2_v761-(0.0)))<rlsl2_v2262)?NIL:((rlsl2_v761>(0.0))?rlsl2_f930():rlsl2_f929()))))?NIL:T))));}}
static double rlsl2_f644(){if (rlsl2_p644) return rlsl2_m644; else {rlsl2_p644=T;return rlsl2_m644=(rlsl2_f751()?(rlsl2_f686()?(rlsl2_f694()?((rlsl2_v790=rlsl2_f790()),(rlsl2_v733=rlsl2_f733()),((rlsl2_v790<rlsl2_v733)?rlsl2_v790:rlsl2_v733)):rlsl2_f660()):rlsl2_f660()):rlsl2_f660());}}
static double rlsl2_f748(){if (rlsl2_p748) return rlsl2_m748; else {rlsl2_p748=T;return rlsl2_m748=(rlsl2_f751()?rlsl2_f790():rlsl2_f914());}}
static double rlsl2_f750(){if (rlsl2_p750) return rlsl2_m750; else {rlsl2_p750=T;return rlsl2_m750=(rlsl2_f751()?rlsl2_f790():rlsl2_f919());}}
static int rlsl2_f749(){if (rlsl2_p749) return rlsl2_m749; else {rlsl2_p749=T;return rlsl2_m749=(rlsl2_f750()>(0.0));}}
static int rlsl2_f743(){if (rlsl2_p743) return rlsl2_m743; else {rlsl2_p743=T;return rlsl2_m743=(rlsl2_f751()?((rlsl2_v749=rlsl2_f749()),(rlsl2_v749?rlsl2_v749:(fabs((rlsl2_f748()-(0.0)))<rlsl2_v2262))):NIL);}}
static double rlsl2_f2184(){if (rlsl2_p2184) return rlsl2_m2184; else {rlsl2_p2184=T;return rlsl2_m2184=(rlsl2_f2188()-rlsl2_f2185());}}
static int rlsl2_f2183(){if (rlsl2_p2183) return rlsl2_m2183; else {rlsl2_p2183=T;return rlsl2_m2183=(rlsl2_f2184()<0.0);}}
static double rlsl2_f2147(){if (rlsl2_p2147) return rlsl2_m2147; else {rlsl2_p2147=T;return rlsl2_m2147=sqrt(rlsl2_f2184());}}
static double rlsl2_f2143(){if (rlsl2_p2143) return rlsl2_m2143; else {rlsl2_p2143=T;return rlsl2_m2143=((-rlsl2_f2147())+rlsl2_v2268);}}
static double rlsl2_f1956(){if (rlsl2_p1956) return rlsl2_m1956; else {rlsl2_p1956=T;return rlsl2_m1956=atan2(rlsl2_f2005(),(rlsl2_f2143()-rlsl2_v2268));}}
static double rlsl2_f850(){if (rlsl2_p850) return rlsl2_m850; else {rlsl2_p850=T;return rlsl2_m850=(rlsl2_f1956()+(1.5707963267948966));}}
static double rlsl2_f842(){if (rlsl2_p842) return rlsl2_m842; else {rlsl2_p842=T;return rlsl2_m842=((rlsl2_v850=rlsl2_f850()),(((rlsl2_v2274*(rlsl2_f2143()+cos(rlsl2_v850)))+(rlsl2_v2272*(rlsl2_f2145()+sin(rlsl2_v850))))-rlsl2_v2270));}}
static double rlsl2_f1954(){if (rlsl2_p1954) return rlsl2_m1954; else {rlsl2_p1954=T;return rlsl2_m1954=normalize_rotation((rlsl2_f1956()-rlsl2_f2096()));}}
static double rlsl2_f1953(){if (rlsl2_p1953) return rlsl2_m1953; else {rlsl2_p1953=T;return rlsl2_m1953=normalize_rotation(rlsl2_f1954());}}
static int rlsl2_f852(){if (rlsl2_p852) return rlsl2_m852; else {rlsl2_p852=T;return rlsl2_m852=((rlsl2_v1953=rlsl2_f1953()),((fabs((rlsl2_v1953-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v1953-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v1953-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static int rlsl2_f832(){if (rlsl2_p832) return rlsl2_m832; else {rlsl2_p832=T;return rlsl2_m832=((rlsl2_v852=rlsl2_f852()),(rlsl2_v852?rlsl2_v852:(((fabs((rlsl2_v2268-rlsl2_f2143()))<rlsl2_v2262)?rlsl2_f1980():NIL)?NIL:((rlsl2_f944()?NIL:((rlsl2_v842=rlsl2_f842()),((fabs((rlsl2_v842-(0.0)))<rlsl2_v2262)?NIL:((rlsl2_v842>(0.0))?rlsl2_f930():rlsl2_f929()))))?NIL:T))));}}
static double rlsl2_f829(){if (rlsl2_p829) return rlsl2_m829; else {rlsl2_p829=T;return rlsl2_m829=(rlsl2_f832()?rlsl2_f1954():rlsl2_f914());}}
static double rlsl2_f831(){if (rlsl2_p831) return rlsl2_m831; else {rlsl2_p831=T;return rlsl2_m831=(rlsl2_f832()?rlsl2_f1954():rlsl2_f919());}}
static int rlsl2_f830(){if (rlsl2_p830) return rlsl2_m830; else {rlsl2_p830=T;return rlsl2_m830=(rlsl2_f831()>(0.0));}}
static int rlsl2_f824(){if (rlsl2_p824) return rlsl2_m824; else {rlsl2_p824=T;return rlsl2_m824=(rlsl2_f832()?((rlsl2_v830=rlsl2_f830()),(rlsl2_v830?rlsl2_v830:(fabs((rlsl2_f829()-(0.0)))<rlsl2_v2262))):NIL);}}
static int rlsl2_f823(){if (rlsl2_p823) return rlsl2_m823; else {rlsl2_p823=T;return rlsl2_m823=(rlsl2_f824()?rlsl2_f832():NIL);}}
static double rlsl2_f820(){if (rlsl2_p820) return rlsl2_m820; else {rlsl2_p820=T;return rlsl2_m820=(rlsl2_f824()?rlsl2_f829():rlsl2_f914());}}
static double rlsl2_f822(){if (rlsl2_p822) return rlsl2_m822; else {rlsl2_p822=T;return rlsl2_m822=(rlsl2_f824()?rlsl2_f831():rlsl2_f919());}}
static int rlsl2_f821(){if (rlsl2_p821) return rlsl2_m821; else {rlsl2_p821=T;return rlsl2_m821=(rlsl2_f822()>(0.0));}}
static int rlsl2_f815(){if (rlsl2_p815) return rlsl2_m815; else {rlsl2_p815=T;return rlsl2_m815=(rlsl2_f823()?((rlsl2_v821=rlsl2_f821()),(rlsl2_v821?rlsl2_v821:(fabs((rlsl2_f820()-(0.0)))<rlsl2_v2262))):NIL);}}
static double rlsl2_f2144(){if (rlsl2_p2144) return rlsl2_m2144; else {rlsl2_p2144=T;return rlsl2_m2144=(rlsl2_f2147()+rlsl2_v2268);}}
static double rlsl2_f2003(){if (rlsl2_p2003) return rlsl2_m2003; else {rlsl2_p2003=T;return rlsl2_m2003=atan2(rlsl2_f2005(),(rlsl2_f2144()-rlsl2_v2268));}}
static double rlsl2_f890(){if (rlsl2_p890) return rlsl2_m890; else {rlsl2_p890=T;return rlsl2_m890=(rlsl2_f2003()+(1.5707963267948966));}}
static double rlsl2_f882(){if (rlsl2_p882) return rlsl2_m882; else {rlsl2_p882=T;return rlsl2_m882=((rlsl2_v890=rlsl2_f890()),(((rlsl2_v2274*(rlsl2_f2144()+cos(rlsl2_v890)))+(rlsl2_v2272*(rlsl2_f2145()+sin(rlsl2_v890))))-rlsl2_v2270));}}
static double rlsl2_f2001(){if (rlsl2_p2001) return rlsl2_m2001; else {rlsl2_p2001=T;return rlsl2_m2001=normalize_rotation((rlsl2_f2003()-rlsl2_f2096()));}}
static double rlsl2_f2000(){if (rlsl2_p2000) return rlsl2_m2000; else {rlsl2_p2000=T;return rlsl2_m2000=normalize_rotation(rlsl2_f2001());}}
static int rlsl2_f892(){if (rlsl2_p892) return rlsl2_m892; else {rlsl2_p892=T;return rlsl2_m892=((rlsl2_v2000=rlsl2_f2000()),((fabs((rlsl2_v2000-(0.0)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v2000-(-6.283185307179586)))<rlsl2_v2262)?NIL:((fabs((rlsl2_v2000-(6.283185307179586)))<rlsl2_v2262)?NIL:T))));}}
static int rlsl2_f872(){if (rlsl2_p872) return rlsl2_m872; else {rlsl2_p872=T;return rlsl2_m872=((rlsl2_v892=rlsl2_f892()),(rlsl2_v892?rlsl2_v892:(((fabs((rlsl2_v2268-rlsl2_f2144()))<rlsl2_v2262)?rlsl2_f1980():NIL)?NIL:((rlsl2_f944()?NIL:((rlsl2_v882=rlsl2_f882()),((fabs((rlsl2_v882-(0.0)))<rlsl2_v2262)?NIL:((rlsl2_v882>(0.0))?rlsl2_f930():rlsl2_f929()))))?NIL:T))));}}
static double rlsl2_f652(){if (rlsl2_p652) return rlsl2_m652; else {rlsl2_p652=T;return rlsl2_m652=(rlsl2_f872()?(rlsl2_f824()?(rlsl2_f832()?((rlsl2_v2001=rlsl2_f2001()),(rlsl2_v1954=rlsl2_f1954()),((rlsl2_v2001<rlsl2_v1954)?rlsl2_v2001:rlsl2_v1954)):rlsl2_f660()):rlsl2_f660()):rlsl2_f660());}}
static double rlsl2_f869(){if (rlsl2_p869) return rlsl2_m869; else {rlsl2_p869=T;return rlsl2_m869=(rlsl2_f872()?rlsl2_f2001():rlsl2_f914());}}
static double rlsl2_f871(){if (rlsl2_p871) return rlsl2_m871; else {rlsl2_p871=T;return rlsl2_m871=(rlsl2_f872()?rlsl2_f2001():rlsl2_f919());}}
static int rlsl2_f870(){if (rlsl2_p870) return rlsl2_m870; else {rlsl2_p870=T;return rlsl2_m870=(rlsl2_f871()>(0.0));}}
static int rlsl2_f864(){if (rlsl2_p864) return rlsl2_m864; else {rlsl2_p864=T;return rlsl2_m864=(rlsl2_f872()?((rlsl2_v870=rlsl2_f870()),(rlsl2_v870?rlsl2_v870:(fabs((rlsl2_f869()-(0.0)))<rlsl2_v2262))):NIL);}}
static int rlsl2_f996(){if (rlsl2_p996) return rlsl2_m996; else {rlsl2_p996=T;return rlsl2_m996=(fabs((rlsl2_f999()-rlsl2_f2210()))<rlsl2_v2262);}}
static double_or_symbol rlsl2_f39(){if (rlsl2_p39) return rlsl2_m39; else {rlsl2_p39=T;return rlsl2_m39=(rlsl2_f996()?((rlsl2_v907=rlsl2_f907()),(rlsl2_v907?(rlsl2_f662()?coerce_double_to_double_or_symbol(rlsl2_f658()):rlsl2_f43()):(rlsl2_v907?rlsl2_f43():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsl2_f634(){if (rlsl2_p634) return rlsl2_m634; else {rlsl2_p634=T;return rlsl2_m634=(rlsl2_f996()?(rlsl2_f907()?(rlsl2_f662()?rlsl2_f658():rlsl2_f912()):rlsl2_f667()):rlsl2_f914());}}
static double rlsl2_f655(){if (rlsl2_p655) return rlsl2_m655; else {rlsl2_p655=T;return rlsl2_m655=(rlsl2_f996()?(rlsl2_f907()?(rlsl2_f662()?rlsl2_f658():rlsl2_f917()):rlsl2_f669()):rlsl2_f919());}}
static int rlsl2_f987(){if (rlsl2_p987) return rlsl2_m987; else {rlsl2_p987=T;return rlsl2_m987=((rlsl2_v996=rlsl2_f996()),(rlsl2_v996?((rlsl2_v994=rlsl2_f994()),(rlsl2_v994?rlsl2_v994:(fabs((rlsl2_f2199()-(1.5707963267948966)))<rlsl2_v2262))):(rlsl2_v996?NIL:T)));}}
static int rlsl2_f637(){if (rlsl2_p637) return rlsl2_m637; else {rlsl2_p637=T;return rlsl2_m637=((rlsl2_v1006?rlsl2_f919():(rlsl2_f987()?(rlsl2_f2189()?(rlsl2_f2183()?rlsl2_f655():(rlsl2_f864()?(rlsl2_f815()?rlsl2_f652():rlsl2_f871()):rlsl2_f822())):(rlsl2_f804()?rlsl2_f655():(rlsl2_f743()?(rlsl2_f677()?rlsl2_f644():rlsl2_f750()):rlsl2_f684()))):rlsl2_f919()))>(0.0));}}
static int rlsl2_f904(){if (rlsl2_p904) return rlsl2_m904; else {rlsl2_p904=T;return rlsl2_m904=(rlsl2_f996()?(rlsl2_f907()?rlsl2_f921():rlsl2_f906()):NIL);}}
void rlsl2(rlsl2_a2282,rlsl2_a2280,rlsl2_a2278,rlsl2_a2276,rlsl2_a2274,rlsl2_a2272,rlsl2_a2270,rlsl2_a2268,rlsl2_a2266,rlsl2_a2262)
double rlsl2_a2282;
double rlsl2_a2280;
double rlsl2_a2278;
double rlsl2_a2276;
double rlsl2_a2274;
double rlsl2_a2272;
double rlsl2_a2270;
double rlsl2_a2268;
double rlsl2_a2266;
double rlsl2_a2262;
{ rlsl2_v2282=rlsl2_a2282;
  rlsl2_v2280=rlsl2_a2280;
  rlsl2_v2278=rlsl2_a2278;
  rlsl2_v2276=rlsl2_a2276;
  rlsl2_v2274=rlsl2_a2274;
  rlsl2_v2272=rlsl2_a2272;
  rlsl2_v2270=rlsl2_a2270;
  rlsl2_v2268=rlsl2_a2268;
  rlsl2_v2266=rlsl2_a2266;
  rlsl2_v2262=rlsl2_a2262;
  rlsl2_p1648=NIL;
  rlsl2_p591=NIL;
  rlsl2_p590=NIL;
  rlsl2_p589=NIL;
  rlsl2_p1669=NIL;
  rlsl2_p1746=NIL;
  rlsl2_p1743=NIL;
  rlsl2_p619=NIL;
  rlsl2_p1719=NIL;
  rlsl2_p615=NIL;
  rlsl2_p1733=NIL;
  rlsl2_p660=NIL;
  rlsl2_p2189=NIL;
  rlsl2_p2181=NIL;
  rlsl2_p2176=NIL;
  rlsl2_p914=NIL;
  rlsl2_p919=NIL;
  rlsl2_p2059=NIL;
  rlsl2_p944=NIL;
  rlsl2_p930=NIL;
  rlsl2_p929=NIL;
  rlsl2_p2096=NIL;
  rlsl2_p2145=NIL;
  rlsl2_p1980=NIL;
  rlsl2_p2005=NIL;
  rlsl2_p2186=NIL;
  rlsl2_p2190=NIL;
  rlsl2_p809=NIL;
  rlsl2_p808=NIL;
  rlsl2_p2187=NIL;
  rlsl2_p2185=NIL;
  rlsl2_p2249=NIL;
  rlsl2_p2248=NIL;
  rlsl2_p2247=NIL;
  rlsl2_p2169=NIL;
  rlsl2_p2167=NIL;
  rlsl2_p2246=NIL;
  rlsl2_p2140=NIL;
  rlsl2_p2131=NIL;
  rlsl2_p802=NIL;
  rlsl2_p2250=NIL;
  rlsl2_p2173=NIL;
  rlsl2_p2171=NIL;
  rlsl2_p2153=NIL;
  rlsl2_p984=NIL;
  rlsl2_p969=NIL;
  rlsl2_p2164=NIL;
  rlsl2_p2152=NIL;
  rlsl2_p947=NIL;
  rlsl2_p973=NIL;
  rlsl2_p967=NIL;
  rlsl2_p607=NIL;
  rlsl2_p606=NIL;
  rlsl2_p594=NIL;
  rlsl2_p943=NIL;
  rlsl2_p935=NIL;
  rlsl2_p932=NIL;
  rlsl2_p931=NIL;
  rlsl2_p965=NIL;
  rlsl2_p964=NIL;
  rlsl2_p950=NIL;
  rlsl2_p977=NIL;
  rlsl2_p976=NIL;
  rlsl2_p949=NIL;
  rlsl2_p582=NIL;
  rlsl2_p330=NIL;
  rlsl2_p21=NIL;
  rlsl2_p581=NIL;
  rlsl2_p576=NIL;
  rlsl2_p579=NIL;
  rlsl2_p578=NIL;
  rlsl2_p571=NIL;
  rlsl2_p570=NIL;
  rlsl2_p337=NIL;
  rlsl2_p339=NIL;
  rlsl2_p338=NIL;
  rlsl2_p332=NIL;
  rlsl2_p922=NIL;
  rlsl2_p43=NIL;
  rlsl2_p658=NIL;
  rlsl2_p921=NIL;
  rlsl2_p912=NIL;
  rlsl2_p917=NIL;
  rlsl2_p916=NIL;
  rlsl2_p907=NIL;
  rlsl2_p667=NIL;
  rlsl2_p669=NIL;
  rlsl2_p668=NIL;
  rlsl2_p906=NIL;
  rlsl2_p662=NIL;
  rlsl2_p2244=NIL;
  rlsl2_p2223=NIL;
  rlsl2_p2221=NIL;
  rlsl2_p999=NIL;
  rlsl2_p2259=NIL;
  rlsl2_p2199=NIL;
  rlsl2_p994=NIL;
  rlsl2_p2215=NIL;
  rlsl2_p2213=NIL;
  rlsl2_p2212=NIL;
  rlsl2_p1730=NIL;
  rlsl2_p1712=NIL;
  rlsl2_p473=NIL;
  rlsl2_p472=NIL;
  rlsl2_p470=NIL;
  rlsl2_p411=NIL;
  rlsl2_p407=NIL;
  rlsl2_p405=NIL;
  rlsl2_p382=NIL;
  rlsl2_p374=NIL;
  rlsl2_p403=NIL;
  rlsl2_p402=NIL;
  rlsl2_p390=NIL;
  rlsl2_p364=NIL;
  rlsl2_p361=NIL;
  rlsl2_p363=NIL;
  rlsl2_p362=NIL;
  rlsl2_p356=NIL;
  rlsl2_p355=NIL;
  rlsl2_p352=NIL;
  rlsl2_p354=NIL;
  rlsl2_p353=NIL;
  rlsl2_p347=NIL;
  rlsl2_p468=NIL;
  rlsl2_p464=NIL;
  rlsl2_p462=NIL;
  rlsl2_p439=NIL;
  rlsl2_p431=NIL;
  rlsl2_p460=NIL;
  rlsl2_p459=NIL;
  rlsl2_p447=NIL;
  rlsl2_p421=NIL;
  rlsl2_p316=NIL;
  rlsl2_p418=NIL;
  rlsl2_p420=NIL;
  rlsl2_p419=NIL;
  rlsl2_p413=NIL;
  rlsl2_p1711=NIL;
  rlsl2_p1710=NIL;
  rlsl2_p1704=NIL;
  rlsl2_p1701=NIL;
  rlsl2_p1561=NIL;
  rlsl2_p514=NIL;
  rlsl2_p506=NIL;
  rlsl2_p1559=NIL;
  rlsl2_p1558=NIL;
  rlsl2_p516=NIL;
  rlsl2_p496=NIL;
  rlsl2_p493=NIL;
  rlsl2_p495=NIL;
  rlsl2_p494=NIL;
  rlsl2_p488=NIL;
  rlsl2_p487=NIL;
  rlsl2_p484=NIL;
  rlsl2_p486=NIL;
  rlsl2_p485=NIL;
  rlsl2_p479=NIL;
  rlsl2_p1702=NIL;
  rlsl2_p1605=NIL;
  rlsl2_p554=NIL;
  rlsl2_p546=NIL;
  rlsl2_p1603=NIL;
  rlsl2_p1602=NIL;
  rlsl2_p556=NIL;
  rlsl2_p536=NIL;
  rlsl2_p324=NIL;
  rlsl2_p533=NIL;
  rlsl2_p535=NIL;
  rlsl2_p534=NIL;
  rlsl2_p528=NIL;
  rlsl2_p616=NIL;
  rlsl2_p274=NIL;
  rlsl2_p251=NIL;
  rlsl2_p306=NIL;
  rlsl2_p327=NIL;
  rlsl2_p568=NIL;
  rlsl2_p609=NIL;
  rlsl2_p340=NIL;
  rlsl2_p297=NIL;
  rlsl2_p310=NIL;
  rlsl2_p309=NIL;
  rlsl2_p292=NIL;
  rlsl2_p289=NIL;
  rlsl2_p17=NIL;
  rlsl2_p2210=NIL;
  rlsl2_p2188=NIL;
  rlsl2_p805=NIL;
  rlsl2_p804=NIL;
  rlsl2_p800=NIL;
  rlsl2_p741=NIL;
  rlsl2_p737=NIL;
  rlsl2_p735=NIL;
  rlsl2_p712=NIL;
  rlsl2_p704=NIL;
  rlsl2_p733=NIL;
  rlsl2_p732=NIL;
  rlsl2_p720=NIL;
  rlsl2_p694=NIL;
  rlsl2_p691=NIL;
  rlsl2_p693=NIL;
  rlsl2_p692=NIL;
  rlsl2_p686=NIL;
  rlsl2_p685=NIL;
  rlsl2_p682=NIL;
  rlsl2_p684=NIL;
  rlsl2_p683=NIL;
  rlsl2_p677=NIL;
  rlsl2_p798=NIL;
  rlsl2_p794=NIL;
  rlsl2_p792=NIL;
  rlsl2_p769=NIL;
  rlsl2_p761=NIL;
  rlsl2_p790=NIL;
  rlsl2_p789=NIL;
  rlsl2_p777=NIL;
  rlsl2_p751=NIL;
  rlsl2_p644=NIL;
  rlsl2_p748=NIL;
  rlsl2_p750=NIL;
  rlsl2_p749=NIL;
  rlsl2_p743=NIL;
  rlsl2_p2184=NIL;
  rlsl2_p2183=NIL;
  rlsl2_p2147=NIL;
  rlsl2_p2143=NIL;
  rlsl2_p1956=NIL;
  rlsl2_p850=NIL;
  rlsl2_p842=NIL;
  rlsl2_p1954=NIL;
  rlsl2_p1953=NIL;
  rlsl2_p852=NIL;
  rlsl2_p832=NIL;
  rlsl2_p829=NIL;
  rlsl2_p831=NIL;
  rlsl2_p830=NIL;
  rlsl2_p824=NIL;
  rlsl2_p823=NIL;
  rlsl2_p820=NIL;
  rlsl2_p822=NIL;
  rlsl2_p821=NIL;
  rlsl2_p815=NIL;
  rlsl2_p2144=NIL;
  rlsl2_p2003=NIL;
  rlsl2_p890=NIL;
  rlsl2_p882=NIL;
  rlsl2_p2001=NIL;
  rlsl2_p2000=NIL;
  rlsl2_p892=NIL;
  rlsl2_p872=NIL;
  rlsl2_p652=NIL;
  rlsl2_p869=NIL;
  rlsl2_p871=NIL;
  rlsl2_p870=NIL;
  rlsl2_p864=NIL;
  rlsl2_p996=NIL;
  rlsl2_p39=NIL;
  rlsl2_p634=NIL;
  rlsl2_p655=NIL;
  rlsl2_p987=NIL;
  rlsl2_p637=NIL;
  rlsl2_p904=NIL;
  double_or_symbol_result=((rlsl2_v2264=(rlsl2_v2268-rlsl2_v2282)),(rlsl2_v1006=((fabs(rlsl2_v2264)<rlsl2_v2262)?(fabs(rlsl2_f2259())<rlsl2_v2262):NIL)),(((rlsl2_v1006?NIL:(rlsl2_f987()?(rlsl2_f2189()?(rlsl2_f2183()?rlsl2_f904():(rlsl2_f864()?(rlsl2_f815()?(rlsl2_f872()?rlsl2_f823():NIL):rlsl2_f872()):rlsl2_f823())):(rlsl2_f804()?rlsl2_f904():(rlsl2_f743()?(rlsl2_f677()?(rlsl2_f751()?rlsl2_f685():NIL):rlsl2_f751()):rlsl2_f685()))):NIL))?((rlsl2_v637=rlsl2_f637()),(rlsl2_v637?rlsl2_v637:(fabs(((rlsl2_v1006?rlsl2_f914():(rlsl2_f987()?(rlsl2_f2189()?(rlsl2_f2183()?rlsl2_f634():(rlsl2_f864()?(rlsl2_f815()?rlsl2_f652():rlsl2_f869()):rlsl2_f820())):(rlsl2_f804()?rlsl2_f634():(rlsl2_f743()?(rlsl2_f677()?rlsl2_f644():rlsl2_f748()):rlsl2_f682()))):rlsl2_f914()))-(0.0)))<rlsl2_v2262))):NIL)?((rlsl2_v292=rlsl2_f292()),(((rlsl2_v292?rlsl2_f340():NIL)?((rlsl2_v289=rlsl2_f289()),(rlsl2_v289?rlsl2_v289:(fabs(((rlsl2_v292?rlsl2_f297():rlsl2_f914())-(0.0)))<rlsl2_v2262))):NIL)?coerce_double_to_double_or_symbol((rlsl2_v1006?rlsl2_f660():(rlsl2_f987()?(rlsl2_f2189()?(rlsl2_f2183()?(rlsl2_f996()?(rlsl2_f907()?(rlsl2_f662()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f1710()?rlsl2_f274():(rlsl2_f528()?(rlsl2_f479()?((rlsl2_v658=rlsl2_f658()),(rlsl2_v324=rlsl2_f324()),((rlsl2_v658<rlsl2_v324)?rlsl2_v658:rlsl2_v324)):(rlsl2_f536()?((rlsl2_v658=rlsl2_f658()),(rlsl2_v1603=rlsl2_f1603()),((rlsl2_v658<rlsl2_v1603)?rlsl2_v658:rlsl2_v1603)):rlsl2_f660())):(rlsl2_f488()?(rlsl2_f496()?((rlsl2_v658=rlsl2_f658()),(rlsl2_v1559=rlsl2_f1559()),((rlsl2_v658<rlsl2_v1559)?rlsl2_v658:rlsl2_v1559)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):(rlsl2_f976()?(rlsl2_f922()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f1710()?rlsl2_f251():(rlsl2_f528()?(rlsl2_f479()?((rlsl2_v965=rlsl2_f965()),(rlsl2_v324=rlsl2_f324()),((rlsl2_v965<rlsl2_v324)?rlsl2_v965:rlsl2_v324)):(rlsl2_f536()?((rlsl2_v965=rlsl2_f965()),(rlsl2_v1603=rlsl2_f1603()),((rlsl2_v965<rlsl2_v1603)?rlsl2_v965:rlsl2_v1603)):rlsl2_f660())):(rlsl2_f488()?(rlsl2_f496()?((rlsl2_v965=rlsl2_f965()),(rlsl2_v1559=rlsl2_f1559()),((rlsl2_v965<rlsl2_v1559)?rlsl2_v965:rlsl2_v1559)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):(rlsl2_f864()?(rlsl2_f815()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f1710()?(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?((rlsl2_v652=rlsl2_f652()),(rlsl2_v330=rlsl2_f330()),((rlsl2_v652<rlsl2_v330)?rlsl2_v652:rlsl2_v330)):(rlsl2_f976()?(rlsl2_f582()?((rlsl2_v652=rlsl2_f652()),(rlsl2_v607=rlsl2_f607()),((rlsl2_v652<rlsl2_v607)?rlsl2_v652:rlsl2_v607)):rlsl2_f660()):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):(rlsl2_f528()?(rlsl2_f479()?((rlsl2_v652=rlsl2_f652()),(rlsl2_v324=rlsl2_f324()),((rlsl2_v652<rlsl2_v324)?rlsl2_v652:rlsl2_v324)):(rlsl2_f536()?((rlsl2_v652=rlsl2_f652()),(rlsl2_v1603=rlsl2_f1603()),((rlsl2_v652<rlsl2_v1603)?rlsl2_v652:rlsl2_v1603)):rlsl2_f660())):(rlsl2_f488()?(rlsl2_f496()?((rlsl2_v652=rlsl2_f652()),(rlsl2_v1559=rlsl2_f1559()),((rlsl2_v652<rlsl2_v1559)?rlsl2_v652:rlsl2_v1559)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):(rlsl2_f872()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f1710()?(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?((rlsl2_v2001=rlsl2_f2001()),(rlsl2_v330=rlsl2_f330()),((rlsl2_v2001<rlsl2_v330)?rlsl2_v2001:rlsl2_v330)):(rlsl2_f976()?(rlsl2_f582()?((rlsl2_v2001=rlsl2_f2001()),(rlsl2_v607=rlsl2_f607()),((rlsl2_v2001<rlsl2_v607)?rlsl2_v2001:rlsl2_v607)):rlsl2_f660()):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):(rlsl2_f528()?(rlsl2_f479()?((rlsl2_v2001=rlsl2_f2001()),(rlsl2_v324=rlsl2_f324()),((rlsl2_v2001<rlsl2_v324)?rlsl2_v2001:rlsl2_v324)):(rlsl2_f536()?((rlsl2_v2001=rlsl2_f2001()),(rlsl2_v1603=rlsl2_f1603()),((rlsl2_v2001<rlsl2_v1603)?rlsl2_v2001:rlsl2_v1603)):rlsl2_f660())):(rlsl2_f488()?(rlsl2_f496()?((rlsl2_v2001=rlsl2_f2001()),(rlsl2_v1559=rlsl2_f1559()),((rlsl2_v2001<rlsl2_v1559)?rlsl2_v2001:rlsl2_v1559)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):rlsl2_f660())):(rlsl2_f824()?(rlsl2_f832()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f1710()?(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?((rlsl2_v1954=rlsl2_f1954()),(rlsl2_v330=rlsl2_f330()),((rlsl2_v1954<rlsl2_v330)?rlsl2_v1954:rlsl2_v330)):(rlsl2_f976()?(rlsl2_f582()?((rlsl2_v1954=rlsl2_f1954()),(rlsl2_v607=rlsl2_f607()),((rlsl2_v1954<rlsl2_v607)?rlsl2_v1954:rlsl2_v607)):rlsl2_f660()):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):(rlsl2_f528()?(rlsl2_f479()?((rlsl2_v1954=rlsl2_f1954()),(rlsl2_v324=rlsl2_f324()),((rlsl2_v1954<rlsl2_v324)?rlsl2_v1954:rlsl2_v324)):(rlsl2_f536()?((rlsl2_v1954=rlsl2_f1954()),(rlsl2_v1603=rlsl2_f1603()),((rlsl2_v1954<rlsl2_v1603)?rlsl2_v1954:rlsl2_v1603)):rlsl2_f660())):(rlsl2_f488()?(rlsl2_f496()?((rlsl2_v1954=rlsl2_f1954()),(rlsl2_v1559=rlsl2_f1559()),((rlsl2_v1954<rlsl2_v1559)?rlsl2_v1954:rlsl2_v1559)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):rlsl2_f660()))):(rlsl2_f804()?(rlsl2_f996()?(rlsl2_f907()?(rlsl2_f662()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f472()?rlsl2_f274():(rlsl2_f413()?(rlsl2_f347()?((rlsl2_v658=rlsl2_f658()),(rlsl2_v316=rlsl2_f316()),((rlsl2_v658<rlsl2_v316)?rlsl2_v658:rlsl2_v316)):(rlsl2_f421()?((rlsl2_v658=rlsl2_f658()),(rlsl2_v460=rlsl2_f460()),((rlsl2_v658<rlsl2_v460)?rlsl2_v658:rlsl2_v460)):rlsl2_f660())):(rlsl2_f356()?(rlsl2_f364()?((rlsl2_v658=rlsl2_f658()),(rlsl2_v403=rlsl2_f403()),((rlsl2_v658<rlsl2_v403)?rlsl2_v658:rlsl2_v403)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):(rlsl2_f976()?(rlsl2_f922()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f472()?rlsl2_f251():(rlsl2_f413()?(rlsl2_f347()?((rlsl2_v965=rlsl2_f965()),(rlsl2_v316=rlsl2_f316()),((rlsl2_v965<rlsl2_v316)?rlsl2_v965:rlsl2_v316)):(rlsl2_f421()?((rlsl2_v965=rlsl2_f965()),(rlsl2_v460=rlsl2_f460()),((rlsl2_v965<rlsl2_v460)?rlsl2_v965:rlsl2_v460)):rlsl2_f660())):(rlsl2_f356()?(rlsl2_f364()?((rlsl2_v965=rlsl2_f965()),(rlsl2_v403=rlsl2_f403()),((rlsl2_v965<rlsl2_v403)?rlsl2_v965:rlsl2_v403)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):(rlsl2_f743()?(rlsl2_f677()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f472()?(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?((rlsl2_v644=rlsl2_f644()),(rlsl2_v330=rlsl2_f330()),((rlsl2_v644<rlsl2_v330)?rlsl2_v644:rlsl2_v330)):(rlsl2_f976()?(rlsl2_f582()?((rlsl2_v644=rlsl2_f644()),(rlsl2_v607=rlsl2_f607()),((rlsl2_v644<rlsl2_v607)?rlsl2_v644:rlsl2_v607)):rlsl2_f660()):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):(rlsl2_f413()?(rlsl2_f347()?((rlsl2_v644=rlsl2_f644()),(rlsl2_v316=rlsl2_f316()),((rlsl2_v644<rlsl2_v316)?rlsl2_v644:rlsl2_v316)):(rlsl2_f421()?((rlsl2_v644=rlsl2_f644()),(rlsl2_v460=rlsl2_f460()),((rlsl2_v644<rlsl2_v460)?rlsl2_v644:rlsl2_v460)):rlsl2_f660())):(rlsl2_f356()?(rlsl2_f364()?((rlsl2_v644=rlsl2_f644()),(rlsl2_v403=rlsl2_f403()),((rlsl2_v644<rlsl2_v403)?rlsl2_v644:rlsl2_v403)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):(rlsl2_f751()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f472()?(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?((rlsl2_v790=rlsl2_f790()),(rlsl2_v330=rlsl2_f330()),((rlsl2_v790<rlsl2_v330)?rlsl2_v790:rlsl2_v330)):(rlsl2_f976()?(rlsl2_f582()?((rlsl2_v790=rlsl2_f790()),(rlsl2_v607=rlsl2_f607()),((rlsl2_v790<rlsl2_v607)?rlsl2_v790:rlsl2_v607)):rlsl2_f660()):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):(rlsl2_f413()?(rlsl2_f347()?((rlsl2_v790=rlsl2_f790()),(rlsl2_v316=rlsl2_f316()),((rlsl2_v790<rlsl2_v316)?rlsl2_v790:rlsl2_v316)):(rlsl2_f421()?((rlsl2_v790=rlsl2_f790()),(rlsl2_v460=rlsl2_f460()),((rlsl2_v790<rlsl2_v460)?rlsl2_v790:rlsl2_v460)):rlsl2_f660())):(rlsl2_f356()?(rlsl2_f364()?((rlsl2_v790=rlsl2_f790()),(rlsl2_v403=rlsl2_f403()),((rlsl2_v790<rlsl2_v403)?rlsl2_v790:rlsl2_v403)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):rlsl2_f660())):(rlsl2_f686()?(rlsl2_f694()?(rlsl2_v292?(rlsl2_f619()?rlsl2_f660():(rlsl2_f609()?(rlsl2_f472()?(rlsl2_f616()?(rlsl2_f571()?(rlsl2_f332()?((rlsl2_v733=rlsl2_f733()),(rlsl2_v330=rlsl2_f330()),((rlsl2_v733<rlsl2_v330)?rlsl2_v733:rlsl2_v330)):(rlsl2_f976()?(rlsl2_f582()?((rlsl2_v733=rlsl2_f733()),(rlsl2_v607=rlsl2_f607()),((rlsl2_v733<rlsl2_v607)?rlsl2_v733:rlsl2_v607)):rlsl2_f660()):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):(rlsl2_f413()?(rlsl2_f347()?((rlsl2_v733=rlsl2_f733()),(rlsl2_v316=rlsl2_f316()),((rlsl2_v733<rlsl2_v316)?rlsl2_v733:rlsl2_v316)):(rlsl2_f421()?((rlsl2_v733=rlsl2_f733()),(rlsl2_v460=rlsl2_f460()),((rlsl2_v733<rlsl2_v460)?rlsl2_v733:rlsl2_v460)):rlsl2_f660())):(rlsl2_f356()?(rlsl2_f364()?((rlsl2_v733=rlsl2_f733()),(rlsl2_v403=rlsl2_f403()),((rlsl2_v733<rlsl2_v403)?rlsl2_v733:rlsl2_v403)):rlsl2_f660()):rlsl2_f660()))):rlsl2_f660())):rlsl2_f660()):rlsl2_f660()):rlsl2_f660())))):rlsl2_f660()))):(rlsl2_v1006?coerce_symbol_to_double_or_symbol(NIL):(rlsl2_f987()?(rlsl2_f2189()?(rlsl2_f2183()?rlsl2_f39():(rlsl2_f864()?(rlsl2_f815()?coerce_double_to_double_or_symbol(rlsl2_f652()):(rlsl2_f872()?coerce_double_to_double_or_symbol(rlsl2_f2001()):coerce_symbol_to_double_or_symbol(NIL))):(rlsl2_f824()?(rlsl2_f832()?coerce_double_to_double_or_symbol(rlsl2_f1954()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(rlsl2_f804()?rlsl2_f39():(rlsl2_f743()?(rlsl2_f677()?coerce_double_to_double_or_symbol(rlsl2_f644()):(rlsl2_f751()?coerce_double_to_double_or_symbol(rlsl2_f790()):coerce_symbol_to_double_or_symbol(NIL))):(rlsl2_f686()?(rlsl2_f694()?coerce_double_to_double_or_symbol(rlsl2_f733()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))))):(rlsl2_f292()?(rlsl2_f619()?coerce_symbol_to_double_or_symbol(NIL):(rlsl2_f609()?(rlsl2_f2189()?(rlsl2_f1710()?rlsl2_f17():(rlsl2_f528()?(rlsl2_f479()?coerce_double_to_double_or_symbol(rlsl2_f324()):(rlsl2_f536()?coerce_double_to_double_or_symbol(rlsl2_f1603()):coerce_symbol_to_double_or_symbol(NIL))):(rlsl2_f488()?(rlsl2_f496()?coerce_double_to_double_or_symbol(rlsl2_f1559()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(rlsl2_f472()?rlsl2_f17():(rlsl2_f413()?(rlsl2_f347()?coerce_double_to_double_or_symbol(rlsl2_f316()):(rlsl2_f421()?coerce_double_to_double_or_symbol(rlsl2_f460()):coerce_symbol_to_double_or_symbol(NIL))):(rlsl2_f356()?(rlsl2_f364()?coerce_double_to_double_or_symbol(rlsl2_f403()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))):coerce_symbol_to_double_or_symbol(NIL)))); return;}
