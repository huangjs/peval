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
double rlsl1_v2283;
double rlsl1_v2281;
double rlsl1_v2279;
double rlsl1_v2277;
double rlsl1_v2275;
double rlsl1_v2273;
double rlsl1_v2271;
double rlsl1_v2269;
double rlsl1_v2267;
double rlsl1_v2263;
double rlsl1_v2265;
int rlsl1_p1649;
double rlsl1_m1649;
int rlsl1_p591;
int rlsl1_m591;
int rlsl1_p590;
int rlsl1_m590;
int rlsl1_p589;
int rlsl1_m589;
int rlsl1_p1670;
double rlsl1_m1670;
int rlsl1_p1747;
double rlsl1_m1747;
int rlsl1_p1744;
double rlsl1_m1744;
int rlsl1_p619;
int rlsl1_m619;
int rlsl1_p1720;
double rlsl1_m1720;
int rlsl1_p615;
int rlsl1_m615;
double rlsl1_v1747;
double rlsl1_v1744;
int rlsl1_p1734;
double rlsl1_m1734;
int rlsl1_p660;
double rlsl1_m660;
int rlsl1_p2190;
int rlsl1_m2190;
int rlsl1_p2182;
int rlsl1_m2182;
int rlsl1_p2177;
double rlsl1_m2177;
int rlsl1_p914;
double rlsl1_m914;
int rlsl1_p919;
double rlsl1_m919;
int rlsl1_p2060;
double rlsl1_m2060;
int rlsl1_p945;
int rlsl1_m945;
int rlsl1_p930;
int rlsl1_m930;
int rlsl1_p929;
int rlsl1_m929;
int rlsl1_p2097;
double rlsl1_m2097;
int rlsl1_p2146;
double rlsl1_m2146;
int rlsl1_p1981;
int rlsl1_m1981;
int rlsl1_p2006;
double rlsl1_m2006;
int rlsl1_p2187;
double rlsl1_m2187;
int rlsl1_p2191;
double rlsl1_m2191;
int rlsl1_p809;
double rlsl1_m809;
double rlsl1_v809;
int rlsl1_p808;
double rlsl1_m808;
double rlsl1_v2191;
int rlsl1_p2188;
double rlsl1_m2188;
int rlsl1_p2186;
double rlsl1_m2186;
int rlsl1_p2250;
double rlsl1_m2250;
int rlsl1_p2249;
double rlsl1_m2249;
int rlsl1_p2248;
double rlsl1_m2248;
int rlsl1_p2170;
double rlsl1_m2170;
int rlsl1_p2168;
double rlsl1_m2168;
int rlsl1_p2247;
double rlsl1_m2247;
int rlsl1_p2141;
double rlsl1_m2141;
double rlsl1_v2141;
int rlsl1_p2132;
double rlsl1_m2132;
int rlsl1_p802;
double rlsl1_m802;
int rlsl1_p2251;
double rlsl1_m2251;
int rlsl1_p2174;
double rlsl1_m2174;
int rlsl1_p2172;
double rlsl1_m2172;
int rlsl1_p2154;
double rlsl1_m2154;
int rlsl1_p985;
int rlsl1_m985;
int rlsl1_p970;
double rlsl1_m970;
int rlsl1_p2165;
double rlsl1_m2165;
int rlsl1_p2153;
double rlsl1_m2153;
int rlsl1_p948;
int rlsl1_m948;
int rlsl1_p974;
double rlsl1_m974;
int rlsl1_p968;
double rlsl1_m968;
int rlsl1_p607;
double rlsl1_m607;
int rlsl1_p606;
double rlsl1_m606;
double rlsl1_v606;
int rlsl1_p594;
int rlsl1_m594;
int rlsl1_p943;
double rlsl1_m943;
double rlsl1_v943;
int rlsl1_p935;
double rlsl1_m935;
int rlsl1_p932;
int rlsl1_m932;
int rlsl1_p931;
int rlsl1_m931;
int rlsl1_p966;
double rlsl1_m966;
int rlsl1_p965;
double rlsl1_m965;
double rlsl1_v965;
int rlsl1_p951;
int rlsl1_m951;
int rlsl1_p978;
int rlsl1_m978;
int rlsl1_p977;
int rlsl1_m977;
int rlsl1_p950;
int rlsl1_m950;
int rlsl1_v594;
int rlsl1_v950;
int rlsl1_p582;
int rlsl1_m582;
int rlsl1_p330;
double rlsl1_m330;
int rlsl1_p21;
double_or_symbol rlsl1_m21;
int rlsl1_p581;
int rlsl1_m581;
int rlsl1_p576;
double rlsl1_m576;
int rlsl1_p579;
double rlsl1_m579;
int rlsl1_p578;
int rlsl1_m578;
int rlsl1_v578;
int rlsl1_p571;
int rlsl1_m571;
int rlsl1_p570;
int rlsl1_m570;
int rlsl1_p337;
double rlsl1_m337;
int rlsl1_p339;
double rlsl1_m339;
int rlsl1_p338;
int rlsl1_m338;
int rlsl1_v338;
int rlsl1_p332;
int rlsl1_m332;
int rlsl1_v951;
int rlsl1_v950;
int rlsl1_p922;
int rlsl1_m922;
int rlsl1_p43;
double_or_symbol rlsl1_m43;
int rlsl1_p658;
double rlsl1_m658;
int rlsl1_p921;
int rlsl1_m921;
int rlsl1_p912;
double rlsl1_m912;
int rlsl1_p917;
double rlsl1_m917;
int rlsl1_p916;
int rlsl1_m916;
int rlsl1_v916;
int rlsl1_p907;
int rlsl1_m907;
int rlsl1_p667;
double rlsl1_m667;
int rlsl1_p669;
double rlsl1_m669;
int rlsl1_p668;
int rlsl1_m668;
int rlsl1_p906;
int rlsl1_m906;
int rlsl1_v668;
int rlsl1_p662;
int rlsl1_m662;
int rlsl1_p2245;
double rlsl1_m2245;
int rlsl1_p2224;
double rlsl1_m2224;
int rlsl1_p2222;
double rlsl1_m2222;
double rlsl1_v2224;
double rlsl1_v2222;
int rlsl1_p1000;
double rlsl1_m1000;
int rlsl1_p2260;
double rlsl1_m2260;
int rlsl1_v1007;
int rlsl1_p2200;
double rlsl1_m2200;
int rlsl1_p995;
int rlsl1_m995;
double rlsl1_v2260;
int rlsl1_p2216;
double rlsl1_m2216;
int rlsl1_p2214;
double rlsl1_m2214;
double rlsl1_v2214;
int rlsl1_p2213;
double rlsl1_m2213;
double rlsl1_v1734;
int rlsl1_p1731;
double rlsl1_m1731;
double rlsl1_v1731;
int rlsl1_p1713;
double rlsl1_m1713;
int rlsl1_p473;
double rlsl1_m473;
int rlsl1_p472;
int rlsl1_m472;
int rlsl1_p470;
double rlsl1_m470;
int rlsl1_p411;
double rlsl1_m411;
int rlsl1_p407;
double rlsl1_m407;
int rlsl1_p405;
double rlsl1_m405;
int rlsl1_p382;
double rlsl1_m382;
double rlsl1_v382;
int rlsl1_p374;
double rlsl1_m374;
int rlsl1_p403;
double rlsl1_m403;
int rlsl1_p402;
double rlsl1_m402;
double rlsl1_v402;
int rlsl1_p390;
int rlsl1_m390;
int rlsl1_v390;
double rlsl1_v374;
int rlsl1_p364;
int rlsl1_m364;
int rlsl1_p361;
double rlsl1_m361;
int rlsl1_p363;
double rlsl1_m363;
int rlsl1_p362;
int rlsl1_m362;
int rlsl1_v362;
int rlsl1_p356;
int rlsl1_m356;
int rlsl1_p355;
int rlsl1_m355;
int rlsl1_p352;
double rlsl1_m352;
int rlsl1_p354;
double rlsl1_m354;
int rlsl1_p353;
int rlsl1_m353;
int rlsl1_v353;
int rlsl1_p347;
int rlsl1_m347;
int rlsl1_p468;
double rlsl1_m468;
int rlsl1_p464;
double rlsl1_m464;
int rlsl1_p462;
double rlsl1_m462;
int rlsl1_p439;
double rlsl1_m439;
double rlsl1_v439;
int rlsl1_p431;
double rlsl1_m431;
int rlsl1_p460;
double rlsl1_m460;
int rlsl1_p459;
double rlsl1_m459;
double rlsl1_v459;
int rlsl1_p447;
int rlsl1_m447;
int rlsl1_v447;
double rlsl1_v431;
int rlsl1_p421;
int rlsl1_m421;
double rlsl1_v460;
double rlsl1_v403;
int rlsl1_p316;
double rlsl1_m316;
int rlsl1_p418;
double rlsl1_m418;
int rlsl1_p420;
double rlsl1_m420;
int rlsl1_p419;
int rlsl1_m419;
int rlsl1_v419;
int rlsl1_p413;
int rlsl1_m413;
int rlsl1_p1712;
double rlsl1_m1712;
int rlsl1_p1711;
int rlsl1_m1711;
int rlsl1_p1705;
double rlsl1_m1705;
int rlsl1_p1702;
double rlsl1_m1702;
int rlsl1_p1562;
double rlsl1_m1562;
int rlsl1_p514;
double rlsl1_m514;
double rlsl1_v514;
int rlsl1_p506;
double rlsl1_m506;
int rlsl1_p1560;
double rlsl1_m1560;
int rlsl1_p1559;
double rlsl1_m1559;
double rlsl1_v1559;
int rlsl1_p516;
int rlsl1_m516;
int rlsl1_v516;
double rlsl1_v506;
int rlsl1_p496;
int rlsl1_m496;
int rlsl1_p493;
double rlsl1_m493;
int rlsl1_p495;
double rlsl1_m495;
int rlsl1_p494;
int rlsl1_m494;
int rlsl1_v494;
int rlsl1_p488;
int rlsl1_m488;
int rlsl1_p487;
int rlsl1_m487;
int rlsl1_p484;
double rlsl1_m484;
int rlsl1_p486;
double rlsl1_m486;
int rlsl1_p485;
int rlsl1_m485;
int rlsl1_v485;
int rlsl1_p479;
int rlsl1_m479;
int rlsl1_p1703;
double rlsl1_m1703;
int rlsl1_p1606;
double rlsl1_m1606;
int rlsl1_p554;
double rlsl1_m554;
double rlsl1_v554;
int rlsl1_p546;
double rlsl1_m546;
int rlsl1_p1604;
double rlsl1_m1604;
int rlsl1_p1603;
double rlsl1_m1603;
double rlsl1_v1603;
int rlsl1_p556;
int rlsl1_m556;
int rlsl1_v556;
double rlsl1_v546;
int rlsl1_p536;
int rlsl1_m536;
double rlsl1_v1604;
double rlsl1_v1560;
int rlsl1_p324;
double rlsl1_m324;
int rlsl1_p533;
double rlsl1_m533;
int rlsl1_p535;
double rlsl1_m535;
int rlsl1_p534;
int rlsl1_m534;
int rlsl1_v534;
int rlsl1_p528;
int rlsl1_m528;
int rlsl1_p616;
int rlsl1_m616;
double rlsl1_v658;
double rlsl1_v330;
double rlsl1_v658;
double rlsl1_v607;
int rlsl1_p274;
double rlsl1_m274;
double rlsl1_v966;
double rlsl1_v330;
double rlsl1_v966;
double rlsl1_v607;
int rlsl1_p251;
double rlsl1_m251;
int rlsl1_p306;
double rlsl1_m306;
int rlsl1_p327;
double rlsl1_m327;
int rlsl1_p568;
int rlsl1_m568;
int rlsl1_v616;
int rlsl1_v615;
int rlsl1_p609;
int rlsl1_m609;
int rlsl1_p340;
int rlsl1_m340;
int rlsl1_p297;
double rlsl1_m297;
int rlsl1_p310;
double rlsl1_m310;
int rlsl1_p309;
int rlsl1_m309;
int rlsl1_v309;
int rlsl1_p292;
int rlsl1_m292;
int rlsl1_p289;
int rlsl1_m289;
int rlsl1_v571;
int rlsl1_p17;
double_or_symbol rlsl1_m17;
double rlsl1_v2216;
int rlsl1_p2211;
double rlsl1_m2211;
double rlsl1_v2211;
int rlsl1_p2189;
double rlsl1_m2189;
int rlsl1_p805;
double rlsl1_m805;
int rlsl1_p804;
int rlsl1_m804;
int rlsl1_p800;
double rlsl1_m800;
int rlsl1_p741;
double rlsl1_m741;
int rlsl1_p737;
double rlsl1_m737;
int rlsl1_p735;
double rlsl1_m735;
int rlsl1_p712;
double rlsl1_m712;
double rlsl1_v712;
int rlsl1_p704;
double rlsl1_m704;
int rlsl1_p733;
double rlsl1_m733;
int rlsl1_p732;
double rlsl1_m732;
double rlsl1_v732;
int rlsl1_p720;
int rlsl1_m720;
int rlsl1_v720;
double rlsl1_v704;
int rlsl1_p694;
int rlsl1_m694;
int rlsl1_p691;
double rlsl1_m691;
int rlsl1_p693;
double rlsl1_m693;
int rlsl1_p692;
int rlsl1_m692;
int rlsl1_v692;
int rlsl1_p686;
int rlsl1_m686;
int rlsl1_p685;
int rlsl1_m685;
int rlsl1_p682;
double rlsl1_m682;
int rlsl1_p684;
double rlsl1_m684;
int rlsl1_p683;
int rlsl1_m683;
int rlsl1_v683;
int rlsl1_p677;
int rlsl1_m677;
int rlsl1_p798;
double rlsl1_m798;
int rlsl1_p794;
double rlsl1_m794;
int rlsl1_p792;
double rlsl1_m792;
int rlsl1_p769;
double rlsl1_m769;
double rlsl1_v769;
int rlsl1_p761;
double rlsl1_m761;
int rlsl1_p790;
double rlsl1_m790;
int rlsl1_p789;
double rlsl1_m789;
double rlsl1_v789;
int rlsl1_p777;
int rlsl1_m777;
int rlsl1_v777;
double rlsl1_v761;
int rlsl1_p751;
int rlsl1_m751;
double rlsl1_v790;
double rlsl1_v733;
int rlsl1_p644;
double rlsl1_m644;
int rlsl1_p748;
double rlsl1_m748;
int rlsl1_p750;
double rlsl1_m750;
int rlsl1_p749;
int rlsl1_m749;
int rlsl1_v749;
int rlsl1_p743;
int rlsl1_m743;
int rlsl1_p2185;
double rlsl1_m2185;
int rlsl1_p2184;
int rlsl1_m2184;
int rlsl1_p2148;
double rlsl1_m2148;
int rlsl1_p2144;
double rlsl1_m2144;
int rlsl1_p1957;
double rlsl1_m1957;
int rlsl1_p850;
double rlsl1_m850;
double rlsl1_v850;
int rlsl1_p842;
double rlsl1_m842;
int rlsl1_p1955;
double rlsl1_m1955;
int rlsl1_p1954;
double rlsl1_m1954;
double rlsl1_v1954;
int rlsl1_p852;
int rlsl1_m852;
int rlsl1_v852;
double rlsl1_v842;
int rlsl1_p832;
int rlsl1_m832;
int rlsl1_p829;
double rlsl1_m829;
int rlsl1_p831;
double rlsl1_m831;
int rlsl1_p830;
int rlsl1_m830;
int rlsl1_v830;
int rlsl1_p824;
int rlsl1_m824;
int rlsl1_p823;
int rlsl1_m823;
int rlsl1_p820;
double rlsl1_m820;
int rlsl1_p822;
double rlsl1_m822;
int rlsl1_p821;
int rlsl1_m821;
int rlsl1_v821;
int rlsl1_p815;
int rlsl1_m815;
int rlsl1_p2145;
double rlsl1_m2145;
int rlsl1_p2004;
double rlsl1_m2004;
int rlsl1_p890;
double rlsl1_m890;
double rlsl1_v890;
int rlsl1_p882;
double rlsl1_m882;
int rlsl1_p2002;
double rlsl1_m2002;
int rlsl1_p2001;
double rlsl1_m2001;
double rlsl1_v2001;
int rlsl1_p892;
int rlsl1_m892;
int rlsl1_v892;
double rlsl1_v882;
int rlsl1_p872;
int rlsl1_m872;
double rlsl1_v2002;
double rlsl1_v1955;
int rlsl1_p652;
double rlsl1_m652;
int rlsl1_p869;
double rlsl1_m869;
int rlsl1_p871;
double rlsl1_m871;
int rlsl1_p870;
int rlsl1_m870;
int rlsl1_v870;
int rlsl1_p864;
int rlsl1_m864;
int rlsl1_p997;
int rlsl1_m997;
int rlsl1_v907;
int rlsl1_p39;
double_or_symbol rlsl1_m39;
int rlsl1_p634;
double rlsl1_m634;
int rlsl1_p655;
double rlsl1_m655;
int rlsl1_v997;
int rlsl1_v995;
int rlsl1_p988;
int rlsl1_m988;
int rlsl1_p637;
int rlsl1_m637;
int rlsl1_p904;
int rlsl1_m904;
int rlsl1_v637;
int rlsl1_v292;
int rlsl1_v289;
double rlsl1_v658;
double rlsl1_v324;
double rlsl1_v658;
double rlsl1_v1604;
double rlsl1_v658;
double rlsl1_v1560;
double rlsl1_v966;
double rlsl1_v324;
double rlsl1_v966;
double rlsl1_v1604;
double rlsl1_v966;
double rlsl1_v1560;
double rlsl1_v652;
double rlsl1_v330;
double rlsl1_v652;
double rlsl1_v607;
double rlsl1_v652;
double rlsl1_v324;
double rlsl1_v652;
double rlsl1_v1604;
double rlsl1_v652;
double rlsl1_v1560;
double rlsl1_v2002;
double rlsl1_v330;
double rlsl1_v2002;
double rlsl1_v607;
double rlsl1_v2002;
double rlsl1_v324;
double rlsl1_v2002;
double rlsl1_v1604;
double rlsl1_v2002;
double rlsl1_v1560;
double rlsl1_v1955;
double rlsl1_v330;
double rlsl1_v1955;
double rlsl1_v607;
double rlsl1_v1955;
double rlsl1_v324;
double rlsl1_v1955;
double rlsl1_v1604;
double rlsl1_v1955;
double rlsl1_v1560;
double rlsl1_v658;
double rlsl1_v316;
double rlsl1_v658;
double rlsl1_v460;
double rlsl1_v658;
double rlsl1_v403;
double rlsl1_v966;
double rlsl1_v316;
double rlsl1_v966;
double rlsl1_v460;
double rlsl1_v966;
double rlsl1_v403;
double rlsl1_v644;
double rlsl1_v330;
double rlsl1_v644;
double rlsl1_v607;
double rlsl1_v644;
double rlsl1_v316;
double rlsl1_v644;
double rlsl1_v460;
double rlsl1_v644;
double rlsl1_v403;
double rlsl1_v790;
double rlsl1_v330;
double rlsl1_v790;
double rlsl1_v607;
double rlsl1_v790;
double rlsl1_v316;
double rlsl1_v790;
double rlsl1_v460;
double rlsl1_v790;
double rlsl1_v403;
double rlsl1_v733;
double rlsl1_v330;
double rlsl1_v733;
double rlsl1_v607;
double rlsl1_v733;
double rlsl1_v316;
double rlsl1_v733;
double rlsl1_v460;
double rlsl1_v733;
double rlsl1_v403;
static double rlsl1_f1649(){if (rlsl1_p1649) return rlsl1_m1649; else {rlsl1_p1649=T;return rlsl1_m1649=(((rlsl1_v2275*rlsl1_v2283)+(rlsl1_v2273*rlsl1_v2281))-rlsl1_v2271);}}
static int rlsl1_f591(){if (rlsl1_p591) return rlsl1_m591; else {rlsl1_p591=T;return rlsl1_m591=(fabs((rlsl1_f1649()-(0.0)))<rlsl1_v2263);}}
static int rlsl1_f590(){if (rlsl1_p590) return rlsl1_m590; else {rlsl1_p590=T;return rlsl1_m590=(rlsl1_f1649()>(0.0));}}
static int rlsl1_f589(){if (rlsl1_p589) return rlsl1_m589; else {rlsl1_p589=T;return rlsl1_m589=(rlsl1_f590()?NIL:T);}}
static double rlsl1_f1670(){if (rlsl1_p1670) return rlsl1_m1670; else {rlsl1_p1670=T;return rlsl1_m1670=atan2((rlsl1_v2277-rlsl1_v2267),(rlsl1_v2279-rlsl1_v2269));}}
static double rlsl1_f1747(){if (rlsl1_p1747) return rlsl1_m1747; else {rlsl1_p1747=T;return rlsl1_m1747=(rlsl1_v2269-rlsl1_v2279);}}
static double rlsl1_f1744(){if (rlsl1_p1744) return rlsl1_m1744; else {rlsl1_p1744=T;return rlsl1_m1744=(rlsl1_v2267-rlsl1_v2277);}}
static int rlsl1_f619(){if (rlsl1_p619) return rlsl1_m619; else {rlsl1_p619=T;return rlsl1_m619=((fabs(rlsl1_f1747())<rlsl1_v2263)?(fabs(rlsl1_f1744())<rlsl1_v2263):NIL);}}
static double rlsl1_f1720(){if (rlsl1_p1720) return rlsl1_m1720; else {rlsl1_p1720=T;return rlsl1_m1720=fabs(normalize_rotation((atan2((rlsl1_v2281-rlsl1_v2277),(rlsl1_v2283-rlsl1_v2279))-atan2(rlsl1_f1744(),rlsl1_f1747()))));}}
static int rlsl1_f615(){if (rlsl1_p615) return rlsl1_m615; else {rlsl1_p615=T;return rlsl1_m615=(rlsl1_f1720()>(1.5707963267948966));}}
static double rlsl1_f1734(){if (rlsl1_p1734) return rlsl1_m1734; else {rlsl1_p1734=T;return rlsl1_m1734=((rlsl1_v1747=rlsl1_f1747()),(rlsl1_v1744=rlsl1_f1744()),(rlsl1_v2269-(rlsl1_v2269+sqrt(((rlsl1_v1747*rlsl1_v1747)+(rlsl1_v1744*rlsl1_v1744))))));}}
static double rlsl1_f660(){if (rlsl1_p660) return rlsl1_m660; else {rlsl1_p660=T;return rlsl1_m660=error("Non-numeric argument to MAX");}}
static int rlsl1_f2190(){if (rlsl1_p2190) return rlsl1_m2190; else {rlsl1_p2190=T;return rlsl1_m2190=(rlsl1_v2275==0.0);}}
static int rlsl1_f2182(){if (rlsl1_p2182) return rlsl1_m2182; else {rlsl1_p2182=T;return rlsl1_m2182=(rlsl1_v2273>0.0);}}
static double rlsl1_f2177(){if (rlsl1_p2177) return rlsl1_m2177; else {rlsl1_p2177=T;return rlsl1_m2177=(rlsl1_f2182()?(-rlsl1_v2275):rlsl1_v2275);}}
static double rlsl1_f914(){if (rlsl1_p914) return rlsl1_m914; else {rlsl1_p914=T;return rlsl1_m914=error("Argument X not of type FLOAT");}}
static double rlsl1_f919(){if (rlsl1_p919) return rlsl1_m919; else {rlsl1_p919=T;return rlsl1_m919=error("Argument X not of type REAL");}}
static double rlsl1_f2060(){if (rlsl1_p2060) return rlsl1_m2060; else {rlsl1_p2060=T;return rlsl1_m2060=(((rlsl1_v2275*rlsl1_v2279)+(rlsl1_v2273*rlsl1_v2277))-rlsl1_v2271);}}
static int rlsl1_f945(){if (rlsl1_p945) return rlsl1_m945; else {rlsl1_p945=T;return rlsl1_m945=(fabs((rlsl1_f2060()-(0.0)))<rlsl1_v2263);}}
static int rlsl1_f930(){if (rlsl1_p930) return rlsl1_m930; else {rlsl1_p930=T;return rlsl1_m930=(rlsl1_f2060()>(0.0));}}
static int rlsl1_f929(){if (rlsl1_p929) return rlsl1_m929; else {rlsl1_p929=T;return rlsl1_m929=(rlsl1_f930()?NIL:T);}}
static double rlsl1_f2097(){if (rlsl1_p2097) return rlsl1_m2097; else {rlsl1_p2097=T;return rlsl1_m2097=atan2((rlsl1_v2281-rlsl1_v2267),(rlsl1_v2283-rlsl1_v2269));}}
static double rlsl1_f2146(){if (rlsl1_p2146) return rlsl1_m2146; else {rlsl1_p2146=T;return rlsl1_m2146=(rlsl1_v2271/rlsl1_v2273);}}
static int rlsl1_f1981(){if (rlsl1_p1981) return rlsl1_m1981; else {rlsl1_p1981=T;return rlsl1_m1981=(fabs((rlsl1_v2267-rlsl1_f2146()))<rlsl1_v2263);}}
static double rlsl1_f2006(){if (rlsl1_p2006) return rlsl1_m2006; else {rlsl1_p2006=T;return rlsl1_m2006=(rlsl1_f2146()-rlsl1_v2267);}}
static double rlsl1_f2187(){if (rlsl1_p2187) return rlsl1_m2187; else {rlsl1_p2187=T;return rlsl1_m2187=(rlsl1_v2273*rlsl1_v2273);}}
static double rlsl1_f2191(){if (rlsl1_p2191) return rlsl1_m2191; else {rlsl1_p2191=T;return rlsl1_m2191=(rlsl1_v2271-(rlsl1_v2275*rlsl1_v2269)-(rlsl1_v2273*rlsl1_v2267));}}
static double rlsl1_f809(){if (rlsl1_p809) return rlsl1_m809; else {rlsl1_p809=T;return rlsl1_m809=((-2.0)*rlsl1_v2273*rlsl1_f2191());}}
static double rlsl1_f808(){if (rlsl1_p808) return rlsl1_m808; else {rlsl1_p808=T;return rlsl1_m808=((rlsl1_v809=rlsl1_f809()),(rlsl1_v809*rlsl1_v809));}}
static double rlsl1_f2188(){if (rlsl1_p2188) return rlsl1_m2188; else {rlsl1_p2188=T;return rlsl1_m2188=((rlsl1_v2191=rlsl1_f2191()),(rlsl1_v2191*rlsl1_v2191));}}
static double rlsl1_f2186(){if (rlsl1_p2186) return rlsl1_m2186; else {rlsl1_p2186=T;return rlsl1_m2186=(rlsl1_f2188()/rlsl1_f2187());}}
static double rlsl1_f2250(){if (rlsl1_p2250) return rlsl1_m2250; else {rlsl1_p2250=T;return rlsl1_m2250=(rlsl1_v2275*rlsl1_v2267);}}
static double rlsl1_f2249(){if (rlsl1_p2249) return rlsl1_m2249; else {rlsl1_p2249=T;return rlsl1_m2249=(rlsl1_v2273*rlsl1_v2269);}}
static double rlsl1_f2248(){if (rlsl1_p2248) return rlsl1_m2248; else {rlsl1_p2248=T;return rlsl1_m2248=(rlsl1_f2250()-rlsl1_f2249());}}
static double rlsl1_f2170(){if (rlsl1_p2170) return rlsl1_m2170; else {rlsl1_p2170=T;return rlsl1_m2170=(rlsl1_f2182()?(rlsl1_f2249()-rlsl1_f2250()):rlsl1_f2248());}}
static double rlsl1_f2168(){if (rlsl1_p2168) return rlsl1_m2168; else {rlsl1_p2168=T;return rlsl1_m2168=((rlsl1_v2271*rlsl1_f2177())-(rlsl1_v2273*rlsl1_f2170()));}}
static double rlsl1_f2247(){if (rlsl1_p2247) return rlsl1_m2247; else {rlsl1_p2247=T;return rlsl1_m2247=(rlsl1_v2275*rlsl1_v2275);}}
static double rlsl1_f2141(){if (rlsl1_p2141) return rlsl1_m2141; else {rlsl1_p2141=T;return rlsl1_m2141=(rlsl1_f2247()+rlsl1_f2187());}}
static double rlsl1_f2132(){if (rlsl1_p2132) return rlsl1_m2132; else {rlsl1_p2132=T;return rlsl1_m2132=((rlsl1_v2141=rlsl1_f2141()),(rlsl1_v2141+rlsl1_v2141));}}
static double rlsl1_f802(){if (rlsl1_p802) return rlsl1_m802; else {rlsl1_p802=T;return rlsl1_m802=((-rlsl1_f809())/rlsl1_f2132());}}
static double rlsl1_f2251(){if (rlsl1_p2251) return rlsl1_m2251; else {rlsl1_p2251=T;return rlsl1_m2251=(-rlsl1_v2273);}}
static double rlsl1_f2174(){if (rlsl1_p2174) return rlsl1_m2174; else {rlsl1_p2174=T;return rlsl1_m2174=(rlsl1_f2182()?rlsl1_v2273:rlsl1_f2251());}}
static double rlsl1_f2172(){if (rlsl1_p2172) return rlsl1_m2172; else {rlsl1_p2172=T;return rlsl1_m2172=((rlsl1_v2275*rlsl1_f2177())-(rlsl1_v2273*rlsl1_f2174()));}}
static double rlsl1_f2154(){if (rlsl1_p2154) return rlsl1_m2154; else {rlsl1_p2154=T;return rlsl1_m2154=(rlsl1_f2168()/rlsl1_f2172());}}
static int rlsl1_f985(){if (rlsl1_p985) return rlsl1_m985; else {rlsl1_p985=T;return rlsl1_m985=(fabs((rlsl1_f2172()-(0.0)))<rlsl1_v2263);}}
static double rlsl1_f970(){if (rlsl1_p970) return rlsl1_m970; else {rlsl1_p970=T;return rlsl1_m970=(rlsl1_f985()?error("No applicable method for X with argument types ((OR BOOLEAN POINT))"):rlsl1_f2154());}}
static double rlsl1_f2165(){if (rlsl1_p2165) return rlsl1_m2165; else {rlsl1_p2165=T;return rlsl1_m2165=((rlsl1_v2275*rlsl1_f2170())-(rlsl1_v2271*rlsl1_f2174()));}}
static double rlsl1_f2153(){if (rlsl1_p2153) return rlsl1_m2153; else {rlsl1_p2153=T;return rlsl1_m2153=(rlsl1_f2165()/rlsl1_f2172());}}
static int rlsl1_f948(){if (rlsl1_p948) return rlsl1_m948; else {rlsl1_p948=T;return rlsl1_m948=(rlsl1_f985()?NIL:((fabs((rlsl1_v2269-rlsl1_f2154()))<rlsl1_v2263)?(fabs((rlsl1_v2267-rlsl1_f2153()))<rlsl1_v2263):NIL));}}
static double rlsl1_f974(){if (rlsl1_p974) return rlsl1_m974; else {rlsl1_p974=T;return rlsl1_m974=(rlsl1_f985()?error("No applicable method for Y with argument types ((OR BOOLEAN POINT))"):rlsl1_f2153());}}
static double rlsl1_f968(){if (rlsl1_p968) return rlsl1_m968; else {rlsl1_p968=T;return rlsl1_m968=atan2((rlsl1_f974()-rlsl1_v2267),(rlsl1_f970()-rlsl1_v2269));}}
static double rlsl1_f607(){if (rlsl1_p607) return rlsl1_m607; else {rlsl1_p607=T;return rlsl1_m607=normalize_rotation((rlsl1_f968()-rlsl1_f1670()));}}
static double rlsl1_f606(){if (rlsl1_p606) return rlsl1_m606; else {rlsl1_p606=T;return rlsl1_m606=normalize_rotation(rlsl1_f607());}}
static int rlsl1_f594(){if (rlsl1_p594) return rlsl1_m594; else {rlsl1_p594=T;return rlsl1_m594=((rlsl1_v606=rlsl1_f606()),((fabs((rlsl1_v606-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v606-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v606-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static double rlsl1_f943(){if (rlsl1_p943) return rlsl1_m943; else {rlsl1_p943=T;return rlsl1_m943=(rlsl1_f968()+(-1.5707963267948966));}}
static double rlsl1_f935(){if (rlsl1_p935) return rlsl1_m935; else {rlsl1_p935=T;return rlsl1_m935=((rlsl1_v943=rlsl1_f943()),(((rlsl1_v2275*(rlsl1_f970()+cos(rlsl1_v943)))+(rlsl1_v2273*(rlsl1_f974()+sin(rlsl1_v943))))-rlsl1_v2271));}}
static int rlsl1_f932(){if (rlsl1_p932) return rlsl1_m932; else {rlsl1_p932=T;return rlsl1_m932=(fabs((rlsl1_f935()-(0.0)))<rlsl1_v2263);}}
static int rlsl1_f931(){if (rlsl1_p931) return rlsl1_m931; else {rlsl1_p931=T;return rlsl1_m931=(rlsl1_f935()>(0.0));}}
static double rlsl1_f966(){if (rlsl1_p966) return rlsl1_m966; else {rlsl1_p966=T;return rlsl1_m966=normalize_rotation((rlsl1_f968()-rlsl1_f2097()));}}
static double rlsl1_f965(){if (rlsl1_p965) return rlsl1_m965; else {rlsl1_p965=T;return rlsl1_m965=normalize_rotation(rlsl1_f966());}}
static int rlsl1_f951(){if (rlsl1_p951) return rlsl1_m951; else {rlsl1_p951=T;return rlsl1_m951=((rlsl1_v965=rlsl1_f965()),((fabs((rlsl1_v965-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v965-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v965-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static int rlsl1_f978(){if (rlsl1_p978) return rlsl1_m978; else {rlsl1_p978=T;return rlsl1_m978=((fabs((rlsl1_f2168()-(0.0)))<rlsl1_v2263)?(fabs((rlsl1_f2165()-(0.0)))<rlsl1_v2263):NIL);}}
static int rlsl1_f977(){if (rlsl1_p977) return rlsl1_m977; else {rlsl1_p977=T;return rlsl1_m977=(rlsl1_f985()?rlsl1_f978():T);}}
static int rlsl1_f950(){if (rlsl1_p950) return rlsl1_m950; else {rlsl1_p950=T;return rlsl1_m950=(rlsl1_f985()?rlsl1_f978():NIL);}}
static int rlsl1_f582(){if (rlsl1_p582) return rlsl1_m582; else {rlsl1_p582=T;return rlsl1_m582=((rlsl1_v594=rlsl1_f594()),(rlsl1_v594?rlsl1_v594:((rlsl1_v950=rlsl1_f950()),(rlsl1_v950?rlsl1_v950:(rlsl1_f948()?NIL:((rlsl1_f591()?NIL:(rlsl1_f932()?NIL:(rlsl1_f931()?rlsl1_f590():rlsl1_f589())))?NIL:T))))));}}
static double rlsl1_f330(){if (rlsl1_p330) return rlsl1_m330; else {rlsl1_p330=T;return rlsl1_m330=(rlsl1_f977()?(rlsl1_f582()?rlsl1_f607():rlsl1_f660()):rlsl1_f660());}}
static double_or_symbol rlsl1_f21(){if (rlsl1_p21) return rlsl1_m21; else {rlsl1_p21=T;return rlsl1_m21=(rlsl1_f977()?(rlsl1_f582()?coerce_double_to_double_or_symbol(rlsl1_f607()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int rlsl1_f581(){if (rlsl1_p581) return rlsl1_m581; else {rlsl1_p581=T;return rlsl1_m581=(rlsl1_f977()?rlsl1_f582():NIL);}}
static double rlsl1_f576(){if (rlsl1_p576) return rlsl1_m576; else {rlsl1_p576=T;return rlsl1_m576=(rlsl1_f977()?(rlsl1_f582()?rlsl1_f607():rlsl1_f914()):rlsl1_f914());}}
static double rlsl1_f579(){if (rlsl1_p579) return rlsl1_m579; else {rlsl1_p579=T;return rlsl1_m579=(rlsl1_f977()?(rlsl1_f582()?rlsl1_f607():rlsl1_f919()):rlsl1_f919());}}
static int rlsl1_f578(){if (rlsl1_p578) return rlsl1_m578; else {rlsl1_p578=T;return rlsl1_m578=(rlsl1_f579()<(0.0));}}
static int rlsl1_f571(){if (rlsl1_p571) return rlsl1_m571; else {rlsl1_p571=T;return rlsl1_m571=(rlsl1_f581()?((rlsl1_v578=rlsl1_f578()),(rlsl1_v578?rlsl1_v578:(fabs((rlsl1_f576()-(0.0)))<rlsl1_v2263))):NIL);}}
static int rlsl1_f570(){if (rlsl1_p570) return rlsl1_m570; else {rlsl1_p570=T;return rlsl1_m570=(rlsl1_f571()?rlsl1_f581():NIL);}}
static double rlsl1_f337(){if (rlsl1_p337) return rlsl1_m337; else {rlsl1_p337=T;return rlsl1_m337=(rlsl1_f571()?rlsl1_f576():rlsl1_f914());}}
static double rlsl1_f339(){if (rlsl1_p339) return rlsl1_m339; else {rlsl1_p339=T;return rlsl1_m339=(rlsl1_f571()?rlsl1_f579():rlsl1_f919());}}
static int rlsl1_f338(){if (rlsl1_p338) return rlsl1_m338; else {rlsl1_p338=T;return rlsl1_m338=(rlsl1_f339()<(0.0));}}
static int rlsl1_f332(){if (rlsl1_p332) return rlsl1_m332; else {rlsl1_p332=T;return rlsl1_m332=(rlsl1_f570()?((rlsl1_v338=rlsl1_f338()),(rlsl1_v338?rlsl1_v338:(fabs((rlsl1_f337()-(0.0)))<rlsl1_v2263))):NIL);}}
static int rlsl1_f922(){if (rlsl1_p922) return rlsl1_m922; else {rlsl1_p922=T;return rlsl1_m922=((rlsl1_v951=rlsl1_f951()),(rlsl1_v951?rlsl1_v951:((rlsl1_v950=rlsl1_f950()),(rlsl1_v950?rlsl1_v950:(rlsl1_f948()?NIL:((rlsl1_f945()?NIL:(rlsl1_f932()?NIL:(rlsl1_f931()?rlsl1_f930():rlsl1_f929())))?NIL:T))))));}}
static double_or_symbol rlsl1_f43(){if (rlsl1_p43) return rlsl1_m43; else {rlsl1_p43=T;return rlsl1_m43=(rlsl1_f977()?(rlsl1_f922()?coerce_double_to_double_or_symbol(rlsl1_f966()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsl1_f658(){if (rlsl1_p658) return rlsl1_m658; else {rlsl1_p658=T;return rlsl1_m658=(rlsl1_f977()?(rlsl1_f922()?rlsl1_f966():rlsl1_f660()):rlsl1_f660());}}
static int rlsl1_f921(){if (rlsl1_p921) return rlsl1_m921; else {rlsl1_p921=T;return rlsl1_m921=(rlsl1_f977()?rlsl1_f922():NIL);}}
static double rlsl1_f912(){if (rlsl1_p912) return rlsl1_m912; else {rlsl1_p912=T;return rlsl1_m912=(rlsl1_f977()?(rlsl1_f922()?rlsl1_f966():rlsl1_f914()):rlsl1_f914());}}
static double rlsl1_f917(){if (rlsl1_p917) return rlsl1_m917; else {rlsl1_p917=T;return rlsl1_m917=(rlsl1_f977()?(rlsl1_f922()?rlsl1_f966():rlsl1_f919()):rlsl1_f919());}}
static int rlsl1_f916(){if (rlsl1_p916) return rlsl1_m916; else {rlsl1_p916=T;return rlsl1_m916=(rlsl1_f917()<(0.0));}}
static int rlsl1_f907(){if (rlsl1_p907) return rlsl1_m907; else {rlsl1_p907=T;return rlsl1_m907=(rlsl1_f921()?((rlsl1_v916=rlsl1_f916()),(rlsl1_v916?rlsl1_v916:(fabs((rlsl1_f912()-(0.0)))<rlsl1_v2263))):NIL);}}
static double rlsl1_f667(){if (rlsl1_p667) return rlsl1_m667; else {rlsl1_p667=T;return rlsl1_m667=(rlsl1_f907()?rlsl1_f912():rlsl1_f914());}}
static double rlsl1_f669(){if (rlsl1_p669) return rlsl1_m669; else {rlsl1_p669=T;return rlsl1_m669=(rlsl1_f907()?rlsl1_f917():rlsl1_f919());}}
static int rlsl1_f668(){if (rlsl1_p668) return rlsl1_m668; else {rlsl1_p668=T;return rlsl1_m668=(rlsl1_f669()<(0.0));}}
static int rlsl1_f906(){if (rlsl1_p906) return rlsl1_m906; else {rlsl1_p906=T;return rlsl1_m906=(rlsl1_f907()?rlsl1_f921():NIL);}}
static int rlsl1_f662(){if (rlsl1_p662) return rlsl1_m662; else {rlsl1_p662=T;return rlsl1_m662=(rlsl1_f906()?((rlsl1_v668=rlsl1_f668()),(rlsl1_v668?rlsl1_v668:(fabs((rlsl1_f667()-(0.0)))<rlsl1_v2263))):NIL);}}
static double rlsl1_f2245(){if (rlsl1_p2245) return rlsl1_m2245; else {rlsl1_p2245=T;return rlsl1_m2245=(rlsl1_f2247()-(rlsl1_v2273*rlsl1_f2251()));}}
static double rlsl1_f2224(){if (rlsl1_p2224) return rlsl1_m2224; else {rlsl1_p2224=T;return rlsl1_m2224=((((rlsl1_v2271*rlsl1_v2275)-(rlsl1_v2273*rlsl1_f2248()))/rlsl1_f2245())-rlsl1_v2269);}}
static double rlsl1_f2222(){if (rlsl1_p2222) return rlsl1_m2222; else {rlsl1_p2222=T;return rlsl1_m2222=((((rlsl1_v2275*rlsl1_f2248())-(rlsl1_v2271*rlsl1_f2251()))/rlsl1_f2245())-rlsl1_v2267);}}
static double rlsl1_f1000(){if (rlsl1_p1000) return rlsl1_m1000; else {rlsl1_p1000=T;return rlsl1_m1000=((fabs((rlsl1_f2245()-(0.0)))<rlsl1_v2263)?error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)"):((rlsl1_v2224=rlsl1_f2224()),(rlsl1_v2222=rlsl1_f2222()),sqrt(((rlsl1_v2224*rlsl1_v2224)+(rlsl1_v2222*rlsl1_v2222)))));}}
static double rlsl1_f2260(){if (rlsl1_p2260) return rlsl1_m2260; else {rlsl1_p2260=T;return rlsl1_m2260=(rlsl1_v2267-rlsl1_v2281);}}
static double rlsl1_f2200(){if (rlsl1_p2200) return rlsl1_m2200; else {rlsl1_p2200=T;return rlsl1_m2200=fabs(normalize_rotation((atan2((rlsl1_v2277-rlsl1_v2281),(rlsl1_v2279-rlsl1_v2283))-atan2(rlsl1_f2260(),rlsl1_v2265))));}}
static int rlsl1_f995(){if (rlsl1_p995) return rlsl1_m995; else {rlsl1_p995=T;return rlsl1_m995=(rlsl1_f2200()>(1.5707963267948966));}}
static double rlsl1_f2216(){if (rlsl1_p2216) return rlsl1_m2216; else {rlsl1_p2216=T;return rlsl1_m2216=((rlsl1_v2260=rlsl1_f2260()),(rlsl1_v2269-(rlsl1_v2269+sqrt(((rlsl1_v2265*rlsl1_v2265)+(rlsl1_v2260*rlsl1_v2260))))));}}
static double rlsl1_f2214(){if (rlsl1_p2214) return rlsl1_m2214; else {rlsl1_p2214=T;return rlsl1_m2214=(rlsl1_v2267-rlsl1_v2267);}}
static double rlsl1_f2213(){if (rlsl1_p2213) return rlsl1_m2213; else {rlsl1_p2213=T;return rlsl1_m2213=((rlsl1_v2214=rlsl1_f2214()),(rlsl1_v2214*rlsl1_v2214));}}
static double rlsl1_f1731(){if (rlsl1_p1731) return rlsl1_m1731; else {rlsl1_p1731=T;return rlsl1_m1731=((rlsl1_v1734=rlsl1_f1734()),sqrt(((rlsl1_v1734*rlsl1_v1734)+rlsl1_f2213())));}}
static double rlsl1_f1713(){if (rlsl1_p1713) return rlsl1_m1713; else {rlsl1_p1713=T;return rlsl1_m1713=((rlsl1_v1731=rlsl1_f1731()),(rlsl1_v1731*rlsl1_v1731));}}
static double rlsl1_f473(){if (rlsl1_p473) return rlsl1_m473; else {rlsl1_p473=T;return rlsl1_m473=(rlsl1_f808()-((4.0)*rlsl1_f2141()*(rlsl1_f2188()-(rlsl1_f2247()*rlsl1_f1713()))));}}
static int rlsl1_f472(){if (rlsl1_p472) return rlsl1_m472; else {rlsl1_p472=T;return rlsl1_m472=(rlsl1_f473()<0.0);}}
static double rlsl1_f470(){if (rlsl1_p470) return rlsl1_m470; else {rlsl1_p470=T;return rlsl1_m470=(sqrt(rlsl1_f473())/rlsl1_f2132());}}
static double rlsl1_f411(){if (rlsl1_p411) return rlsl1_m411; else {rlsl1_p411=T;return rlsl1_m411=((rlsl1_f802()-rlsl1_f470())+rlsl1_v2267);}}
static double rlsl1_f407(){if (rlsl1_p407) return rlsl1_m407; else {rlsl1_p407=T;return rlsl1_m407=((rlsl1_v2271-(rlsl1_v2273*rlsl1_f411()))/rlsl1_v2275);}}
static double rlsl1_f405(){if (rlsl1_p405) return rlsl1_m405; else {rlsl1_p405=T;return rlsl1_m405=atan2((rlsl1_f411()-rlsl1_v2267),(rlsl1_f407()-rlsl1_v2269));}}
static double rlsl1_f382(){if (rlsl1_p382) return rlsl1_m382; else {rlsl1_p382=T;return rlsl1_m382=(rlsl1_f405()+(-1.5707963267948966));}}
static double rlsl1_f374(){if (rlsl1_p374) return rlsl1_m374; else {rlsl1_p374=T;return rlsl1_m374=((rlsl1_v382=rlsl1_f382()),(((rlsl1_v2275*(rlsl1_f407()+cos(rlsl1_v382)))+(rlsl1_v2273*(rlsl1_f411()+sin(rlsl1_v382))))-rlsl1_v2271));}}
static double rlsl1_f403(){if (rlsl1_p403) return rlsl1_m403; else {rlsl1_p403=T;return rlsl1_m403=normalize_rotation((rlsl1_f405()-rlsl1_f1670()));}}
static double rlsl1_f402(){if (rlsl1_p402) return rlsl1_m402; else {rlsl1_p402=T;return rlsl1_m402=normalize_rotation(rlsl1_f403());}}
static int rlsl1_f390(){if (rlsl1_p390) return rlsl1_m390; else {rlsl1_p390=T;return rlsl1_m390=((rlsl1_v402=rlsl1_f402()),((fabs((rlsl1_v402-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v402-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v402-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static int rlsl1_f364(){if (rlsl1_p364) return rlsl1_m364; else {rlsl1_p364=T;return rlsl1_m364=((rlsl1_v390=rlsl1_f390()),(rlsl1_v390?rlsl1_v390:(((fabs((rlsl1_v2269-rlsl1_f407()))<rlsl1_v2263)?(fabs((rlsl1_v2267-rlsl1_f411()))<rlsl1_v2263):NIL)?NIL:((rlsl1_f591()?NIL:((rlsl1_v374=rlsl1_f374()),((fabs((rlsl1_v374-(0.0)))<rlsl1_v2263)?NIL:((rlsl1_v374>(0.0))?rlsl1_f590():rlsl1_f589()))))?NIL:T))));}}
static double rlsl1_f361(){if (rlsl1_p361) return rlsl1_m361; else {rlsl1_p361=T;return rlsl1_m361=(rlsl1_f364()?rlsl1_f403():rlsl1_f914());}}
static double rlsl1_f363(){if (rlsl1_p363) return rlsl1_m363; else {rlsl1_p363=T;return rlsl1_m363=(rlsl1_f364()?rlsl1_f403():rlsl1_f919());}}
static int rlsl1_f362(){if (rlsl1_p362) return rlsl1_m362; else {rlsl1_p362=T;return rlsl1_m362=(rlsl1_f363()<(0.0));}}
static int rlsl1_f356(){if (rlsl1_p356) return rlsl1_m356; else {rlsl1_p356=T;return rlsl1_m356=(rlsl1_f364()?((rlsl1_v362=rlsl1_f362()),(rlsl1_v362?rlsl1_v362:(fabs((rlsl1_f361()-(0.0)))<rlsl1_v2263))):NIL);}}
static int rlsl1_f355(){if (rlsl1_p355) return rlsl1_m355; else {rlsl1_p355=T;return rlsl1_m355=(rlsl1_f356()?rlsl1_f364():NIL);}}
static double rlsl1_f352(){if (rlsl1_p352) return rlsl1_m352; else {rlsl1_p352=T;return rlsl1_m352=(rlsl1_f356()?rlsl1_f361():rlsl1_f914());}}
static double rlsl1_f354(){if (rlsl1_p354) return rlsl1_m354; else {rlsl1_p354=T;return rlsl1_m354=(rlsl1_f356()?rlsl1_f363():rlsl1_f919());}}
static int rlsl1_f353(){if (rlsl1_p353) return rlsl1_m353; else {rlsl1_p353=T;return rlsl1_m353=(rlsl1_f354()<(0.0));}}
static int rlsl1_f347(){if (rlsl1_p347) return rlsl1_m347; else {rlsl1_p347=T;return rlsl1_m347=(rlsl1_f355()?((rlsl1_v353=rlsl1_f353()),(rlsl1_v353?rlsl1_v353:(fabs((rlsl1_f352()-(0.0)))<rlsl1_v2263))):NIL);}}
static double rlsl1_f468(){if (rlsl1_p468) return rlsl1_m468; else {rlsl1_p468=T;return rlsl1_m468=((rlsl1_f802()+rlsl1_f470())+rlsl1_v2267);}}
static double rlsl1_f464(){if (rlsl1_p464) return rlsl1_m464; else {rlsl1_p464=T;return rlsl1_m464=((rlsl1_v2271-(rlsl1_v2273*rlsl1_f468()))/rlsl1_v2275);}}
static double rlsl1_f462(){if (rlsl1_p462) return rlsl1_m462; else {rlsl1_p462=T;return rlsl1_m462=atan2((rlsl1_f468()-rlsl1_v2267),(rlsl1_f464()-rlsl1_v2269));}}
static double rlsl1_f439(){if (rlsl1_p439) return rlsl1_m439; else {rlsl1_p439=T;return rlsl1_m439=(rlsl1_f462()+(-1.5707963267948966));}}
static double rlsl1_f431(){if (rlsl1_p431) return rlsl1_m431; else {rlsl1_p431=T;return rlsl1_m431=((rlsl1_v439=rlsl1_f439()),(((rlsl1_v2275*(rlsl1_f464()+cos(rlsl1_v439)))+(rlsl1_v2273*(rlsl1_f468()+sin(rlsl1_v439))))-rlsl1_v2271));}}
static double rlsl1_f460(){if (rlsl1_p460) return rlsl1_m460; else {rlsl1_p460=T;return rlsl1_m460=normalize_rotation((rlsl1_f462()-rlsl1_f1670()));}}
static double rlsl1_f459(){if (rlsl1_p459) return rlsl1_m459; else {rlsl1_p459=T;return rlsl1_m459=normalize_rotation(rlsl1_f460());}}
static int rlsl1_f447(){if (rlsl1_p447) return rlsl1_m447; else {rlsl1_p447=T;return rlsl1_m447=((rlsl1_v459=rlsl1_f459()),((fabs((rlsl1_v459-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v459-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v459-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static int rlsl1_f421(){if (rlsl1_p421) return rlsl1_m421; else {rlsl1_p421=T;return rlsl1_m421=((rlsl1_v447=rlsl1_f447()),(rlsl1_v447?rlsl1_v447:(((fabs((rlsl1_v2269-rlsl1_f464()))<rlsl1_v2263)?(fabs((rlsl1_v2267-rlsl1_f468()))<rlsl1_v2263):NIL)?NIL:((rlsl1_f591()?NIL:((rlsl1_v431=rlsl1_f431()),((fabs((rlsl1_v431-(0.0)))<rlsl1_v2263)?NIL:((rlsl1_v431>(0.0))?rlsl1_f590():rlsl1_f589()))))?NIL:T))));}}
static double rlsl1_f316(){if (rlsl1_p316) return rlsl1_m316; else {rlsl1_p316=T;return rlsl1_m316=(rlsl1_f421()?(rlsl1_f356()?(rlsl1_f364()?((rlsl1_v460=rlsl1_f460()),(rlsl1_v403=rlsl1_f403()),((rlsl1_v460>rlsl1_v403)?rlsl1_v460:rlsl1_v403)):rlsl1_f660()):rlsl1_f660()):rlsl1_f660());}}
static double rlsl1_f418(){if (rlsl1_p418) return rlsl1_m418; else {rlsl1_p418=T;return rlsl1_m418=(rlsl1_f421()?rlsl1_f460():rlsl1_f914());}}
static double rlsl1_f420(){if (rlsl1_p420) return rlsl1_m420; else {rlsl1_p420=T;return rlsl1_m420=(rlsl1_f421()?rlsl1_f460():rlsl1_f919());}}
static int rlsl1_f419(){if (rlsl1_p419) return rlsl1_m419; else {rlsl1_p419=T;return rlsl1_m419=(rlsl1_f420()<(0.0));}}
static int rlsl1_f413(){if (rlsl1_p413) return rlsl1_m413; else {rlsl1_p413=T;return rlsl1_m413=(rlsl1_f421()?((rlsl1_v419=rlsl1_f419()),(rlsl1_v419?rlsl1_v419:(fabs((rlsl1_f418()-(0.0)))<rlsl1_v2263))):NIL);}}
static double rlsl1_f1712(){if (rlsl1_p1712) return rlsl1_m1712; else {rlsl1_p1712=T;return rlsl1_m1712=(rlsl1_f1713()-rlsl1_f2186());}}
static int rlsl1_f1711(){if (rlsl1_p1711) return rlsl1_m1711; else {rlsl1_p1711=T;return rlsl1_m1711=(rlsl1_f1712()<0.0);}}
static double rlsl1_f1705(){if (rlsl1_p1705) return rlsl1_m1705; else {rlsl1_p1705=T;return rlsl1_m1705=sqrt(rlsl1_f1712());}}
static double rlsl1_f1702(){if (rlsl1_p1702) return rlsl1_m1702; else {rlsl1_p1702=T;return rlsl1_m1702=((-rlsl1_f1705())+rlsl1_v2269);}}
static double rlsl1_f1562(){if (rlsl1_p1562) return rlsl1_m1562; else {rlsl1_p1562=T;return rlsl1_m1562=atan2(rlsl1_f2006(),(rlsl1_f1702()-rlsl1_v2269));}}
static double rlsl1_f514(){if (rlsl1_p514) return rlsl1_m514; else {rlsl1_p514=T;return rlsl1_m514=(rlsl1_f1562()+(-1.5707963267948966));}}
static double rlsl1_f506(){if (rlsl1_p506) return rlsl1_m506; else {rlsl1_p506=T;return rlsl1_m506=((rlsl1_v514=rlsl1_f514()),(((rlsl1_v2275*(rlsl1_f1702()+cos(rlsl1_v514)))+(rlsl1_v2273*(rlsl1_f2146()+sin(rlsl1_v514))))-rlsl1_v2271));}}
static double rlsl1_f1560(){if (rlsl1_p1560) return rlsl1_m1560; else {rlsl1_p1560=T;return rlsl1_m1560=normalize_rotation((rlsl1_f1562()-rlsl1_f1670()));}}
static double rlsl1_f1559(){if (rlsl1_p1559) return rlsl1_m1559; else {rlsl1_p1559=T;return rlsl1_m1559=normalize_rotation(rlsl1_f1560());}}
static int rlsl1_f516(){if (rlsl1_p516) return rlsl1_m516; else {rlsl1_p516=T;return rlsl1_m516=((rlsl1_v1559=rlsl1_f1559()),((fabs((rlsl1_v1559-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v1559-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v1559-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static int rlsl1_f496(){if (rlsl1_p496) return rlsl1_m496; else {rlsl1_p496=T;return rlsl1_m496=((rlsl1_v516=rlsl1_f516()),(rlsl1_v516?rlsl1_v516:(((fabs((rlsl1_v2269-rlsl1_f1702()))<rlsl1_v2263)?rlsl1_f1981():NIL)?NIL:((rlsl1_f591()?NIL:((rlsl1_v506=rlsl1_f506()),((fabs((rlsl1_v506-(0.0)))<rlsl1_v2263)?NIL:((rlsl1_v506>(0.0))?rlsl1_f590():rlsl1_f589()))))?NIL:T))));}}
static double rlsl1_f493(){if (rlsl1_p493) return rlsl1_m493; else {rlsl1_p493=T;return rlsl1_m493=(rlsl1_f496()?rlsl1_f1560():rlsl1_f914());}}
static double rlsl1_f495(){if (rlsl1_p495) return rlsl1_m495; else {rlsl1_p495=T;return rlsl1_m495=(rlsl1_f496()?rlsl1_f1560():rlsl1_f919());}}
static int rlsl1_f494(){if (rlsl1_p494) return rlsl1_m494; else {rlsl1_p494=T;return rlsl1_m494=(rlsl1_f495()<(0.0));}}
static int rlsl1_f488(){if (rlsl1_p488) return rlsl1_m488; else {rlsl1_p488=T;return rlsl1_m488=(rlsl1_f496()?((rlsl1_v494=rlsl1_f494()),(rlsl1_v494?rlsl1_v494:(fabs((rlsl1_f493()-(0.0)))<rlsl1_v2263))):NIL);}}
static int rlsl1_f487(){if (rlsl1_p487) return rlsl1_m487; else {rlsl1_p487=T;return rlsl1_m487=(rlsl1_f488()?rlsl1_f496():NIL);}}
static double rlsl1_f484(){if (rlsl1_p484) return rlsl1_m484; else {rlsl1_p484=T;return rlsl1_m484=(rlsl1_f488()?rlsl1_f493():rlsl1_f914());}}
static double rlsl1_f486(){if (rlsl1_p486) return rlsl1_m486; else {rlsl1_p486=T;return rlsl1_m486=(rlsl1_f488()?rlsl1_f495():rlsl1_f919());}}
static int rlsl1_f485(){if (rlsl1_p485) return rlsl1_m485; else {rlsl1_p485=T;return rlsl1_m485=(rlsl1_f486()<(0.0));}}
static int rlsl1_f479(){if (rlsl1_p479) return rlsl1_m479; else {rlsl1_p479=T;return rlsl1_m479=(rlsl1_f487()?((rlsl1_v485=rlsl1_f485()),(rlsl1_v485?rlsl1_v485:(fabs((rlsl1_f484()-(0.0)))<rlsl1_v2263))):NIL);}}
static double rlsl1_f1703(){if (rlsl1_p1703) return rlsl1_m1703; else {rlsl1_p1703=T;return rlsl1_m1703=(rlsl1_f1705()+rlsl1_v2269);}}
static double rlsl1_f1606(){if (rlsl1_p1606) return rlsl1_m1606; else {rlsl1_p1606=T;return rlsl1_m1606=atan2(rlsl1_f2006(),(rlsl1_f1703()-rlsl1_v2269));}}
static double rlsl1_f554(){if (rlsl1_p554) return rlsl1_m554; else {rlsl1_p554=T;return rlsl1_m554=(rlsl1_f1606()+(-1.5707963267948966));}}
static double rlsl1_f546(){if (rlsl1_p546) return rlsl1_m546; else {rlsl1_p546=T;return rlsl1_m546=((rlsl1_v554=rlsl1_f554()),(((rlsl1_v2275*(rlsl1_f1703()+cos(rlsl1_v554)))+(rlsl1_v2273*(rlsl1_f2146()+sin(rlsl1_v554))))-rlsl1_v2271));}}
static double rlsl1_f1604(){if (rlsl1_p1604) return rlsl1_m1604; else {rlsl1_p1604=T;return rlsl1_m1604=normalize_rotation((rlsl1_f1606()-rlsl1_f1670()));}}
static double rlsl1_f1603(){if (rlsl1_p1603) return rlsl1_m1603; else {rlsl1_p1603=T;return rlsl1_m1603=normalize_rotation(rlsl1_f1604());}}
static int rlsl1_f556(){if (rlsl1_p556) return rlsl1_m556; else {rlsl1_p556=T;return rlsl1_m556=((rlsl1_v1603=rlsl1_f1603()),((fabs((rlsl1_v1603-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v1603-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v1603-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static int rlsl1_f536(){if (rlsl1_p536) return rlsl1_m536; else {rlsl1_p536=T;return rlsl1_m536=((rlsl1_v556=rlsl1_f556()),(rlsl1_v556?rlsl1_v556:(((fabs((rlsl1_v2269-rlsl1_f1703()))<rlsl1_v2263)?rlsl1_f1981():NIL)?NIL:((rlsl1_f591()?NIL:((rlsl1_v546=rlsl1_f546()),((fabs((rlsl1_v546-(0.0)))<rlsl1_v2263)?NIL:((rlsl1_v546>(0.0))?rlsl1_f590():rlsl1_f589()))))?NIL:T))));}}
static double rlsl1_f324(){if (rlsl1_p324) return rlsl1_m324; else {rlsl1_p324=T;return rlsl1_m324=(rlsl1_f536()?(rlsl1_f488()?(rlsl1_f496()?((rlsl1_v1604=rlsl1_f1604()),(rlsl1_v1560=rlsl1_f1560()),((rlsl1_v1604>rlsl1_v1560)?rlsl1_v1604:rlsl1_v1560)):rlsl1_f660()):rlsl1_f660()):rlsl1_f660());}}
static double rlsl1_f533(){if (rlsl1_p533) return rlsl1_m533; else {rlsl1_p533=T;return rlsl1_m533=(rlsl1_f536()?rlsl1_f1604():rlsl1_f914());}}
static double rlsl1_f535(){if (rlsl1_p535) return rlsl1_m535; else {rlsl1_p535=T;return rlsl1_m535=(rlsl1_f536()?rlsl1_f1604():rlsl1_f919());}}
static int rlsl1_f534(){if (rlsl1_p534) return rlsl1_m534; else {rlsl1_p534=T;return rlsl1_m534=(rlsl1_f535()<(0.0));}}
static int rlsl1_f528(){if (rlsl1_p528) return rlsl1_m528; else {rlsl1_p528=T;return rlsl1_m528=(rlsl1_f536()?((rlsl1_v534=rlsl1_f534()),(rlsl1_v534?rlsl1_v534:(fabs((rlsl1_f533()-(0.0)))<rlsl1_v2263))):NIL);}}
static int rlsl1_f616(){if (rlsl1_p616) return rlsl1_m616; else {rlsl1_p616=T;return rlsl1_m616=(fabs((rlsl1_f1000()-rlsl1_f1731()))<rlsl1_v2263);}}
static double rlsl1_f274(){if (rlsl1_p274) return rlsl1_m274; else {rlsl1_p274=T;return rlsl1_m274=(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?((rlsl1_v658=rlsl1_f658()),(rlsl1_v330=rlsl1_f330()),((rlsl1_v658>rlsl1_v330)?rlsl1_v658:rlsl1_v330)):(rlsl1_f977()?(rlsl1_f582()?((rlsl1_v658=rlsl1_f658()),(rlsl1_v607=rlsl1_f607()),((rlsl1_v658>rlsl1_v607)?rlsl1_v658:rlsl1_v607)):rlsl1_f660()):rlsl1_f660())):rlsl1_f660()):rlsl1_f660());}}
static double rlsl1_f251(){if (rlsl1_p251) return rlsl1_m251; else {rlsl1_p251=T;return rlsl1_m251=(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?((rlsl1_v966=rlsl1_f966()),(rlsl1_v330=rlsl1_f330()),((rlsl1_v966>rlsl1_v330)?rlsl1_v966:rlsl1_v330)):(rlsl1_f582()?((rlsl1_v966=rlsl1_f966()),(rlsl1_v607=rlsl1_f607()),((rlsl1_v966>rlsl1_v607)?rlsl1_v966:rlsl1_v607)):rlsl1_f660())):rlsl1_f660()):rlsl1_f660());}}
static double rlsl1_f306(){if (rlsl1_p306) return rlsl1_m306; else {rlsl1_p306=T;return rlsl1_m306=(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?rlsl1_f330():rlsl1_f576()):rlsl1_f337()):rlsl1_f914());}}
static double rlsl1_f327(){if (rlsl1_p327) return rlsl1_m327; else {rlsl1_p327=T;return rlsl1_m327=(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?rlsl1_f330():rlsl1_f579()):rlsl1_f339()):rlsl1_f919());}}
static int rlsl1_f568(){if (rlsl1_p568) return rlsl1_m568; else {rlsl1_p568=T;return rlsl1_m568=(rlsl1_f616()?(rlsl1_f571()?rlsl1_f581():rlsl1_f570()):NIL);}}
static int rlsl1_f609(){if (rlsl1_p609) return rlsl1_m609; else {rlsl1_p609=T;return rlsl1_m609=((rlsl1_v616=rlsl1_f616()),(rlsl1_v616?((rlsl1_v615=rlsl1_f615()),(rlsl1_v615?rlsl1_v615:(fabs((rlsl1_f1720()-(1.5707963267948966)))<rlsl1_v2263))):(rlsl1_v616?NIL:T)));}}
static int rlsl1_f340(){if (rlsl1_p340) return rlsl1_m340; else {rlsl1_p340=T;return rlsl1_m340=(rlsl1_f619()?NIL:(rlsl1_f609()?(rlsl1_f2190()?(rlsl1_f1711()?rlsl1_f568():(rlsl1_f528()?(rlsl1_f479()?(rlsl1_f536()?rlsl1_f487():NIL):rlsl1_f536()):rlsl1_f487())):(rlsl1_f472()?rlsl1_f568():(rlsl1_f413()?(rlsl1_f347()?(rlsl1_f421()?rlsl1_f355():NIL):rlsl1_f421()):rlsl1_f355()))):NIL));}}
static double rlsl1_f297(){if (rlsl1_p297) return rlsl1_m297; else {rlsl1_p297=T;return rlsl1_m297=(rlsl1_f619()?rlsl1_f914():(rlsl1_f609()?(rlsl1_f2190()?(rlsl1_f1711()?rlsl1_f306():(rlsl1_f528()?(rlsl1_f479()?rlsl1_f324():rlsl1_f533()):rlsl1_f484())):(rlsl1_f472()?rlsl1_f306():(rlsl1_f413()?(rlsl1_f347()?rlsl1_f316():rlsl1_f418()):rlsl1_f352()))):rlsl1_f914()));}}
static double rlsl1_f310(){if (rlsl1_p310) return rlsl1_m310; else {rlsl1_p310=T;return rlsl1_m310=(rlsl1_f619()?rlsl1_f919():(rlsl1_f609()?(rlsl1_f2190()?(rlsl1_f1711()?rlsl1_f327():(rlsl1_f528()?(rlsl1_f479()?rlsl1_f324():rlsl1_f535()):rlsl1_f486())):(rlsl1_f472()?rlsl1_f327():(rlsl1_f413()?(rlsl1_f347()?rlsl1_f316():rlsl1_f420()):rlsl1_f354()))):rlsl1_f919()));}}
static int rlsl1_f309(){if (rlsl1_p309) return rlsl1_m309; else {rlsl1_p309=T;return rlsl1_m309=(rlsl1_f310()<(0.0));}}
static int rlsl1_f292(){if (rlsl1_p292) return rlsl1_m292; else {rlsl1_p292=T;return rlsl1_m292=(rlsl1_f340()?((rlsl1_v309=rlsl1_f309()),(rlsl1_v309?rlsl1_v309:(fabs((rlsl1_f297()-(0.0)))<rlsl1_v2263))):NIL);}}
static int rlsl1_f289(){if (rlsl1_p289) return rlsl1_m289; else {rlsl1_p289=T;return rlsl1_m289=((rlsl1_f292()?rlsl1_f310():rlsl1_f919())<(0.0));}}
static double_or_symbol rlsl1_f17(){if (rlsl1_p17) return rlsl1_m17; else {rlsl1_p17=T;return rlsl1_m17=(rlsl1_f616()?((rlsl1_v571=rlsl1_f571()),(rlsl1_v571?(rlsl1_f332()?coerce_double_to_double_or_symbol(rlsl1_f330()):rlsl1_f21()):(rlsl1_v571?rlsl1_f21():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsl1_f2211(){if (rlsl1_p2211) return rlsl1_m2211; else {rlsl1_p2211=T;return rlsl1_m2211=((rlsl1_v2216=rlsl1_f2216()),sqrt(((rlsl1_v2216*rlsl1_v2216)+rlsl1_f2213())));}}
static double rlsl1_f2189(){if (rlsl1_p2189) return rlsl1_m2189; else {rlsl1_p2189=T;return rlsl1_m2189=((rlsl1_v2211=rlsl1_f2211()),(rlsl1_v2211*rlsl1_v2211));}}
static double rlsl1_f805(){if (rlsl1_p805) return rlsl1_m805; else {rlsl1_p805=T;return rlsl1_m805=(rlsl1_f808()-((4.0)*rlsl1_f2141()*(rlsl1_f2188()-(rlsl1_f2247()*rlsl1_f2189()))));}}
static int rlsl1_f804(){if (rlsl1_p804) return rlsl1_m804; else {rlsl1_p804=T;return rlsl1_m804=(rlsl1_f805()<0.0);}}
static double rlsl1_f800(){if (rlsl1_p800) return rlsl1_m800; else {rlsl1_p800=T;return rlsl1_m800=(sqrt(rlsl1_f805())/rlsl1_f2132());}}
static double rlsl1_f741(){if (rlsl1_p741) return rlsl1_m741; else {rlsl1_p741=T;return rlsl1_m741=((rlsl1_f802()-rlsl1_f800())+rlsl1_v2267);}}
static double rlsl1_f737(){if (rlsl1_p737) return rlsl1_m737; else {rlsl1_p737=T;return rlsl1_m737=((rlsl1_v2271-(rlsl1_v2273*rlsl1_f741()))/rlsl1_v2275);}}
static double rlsl1_f735(){if (rlsl1_p735) return rlsl1_m735; else {rlsl1_p735=T;return rlsl1_m735=atan2((rlsl1_f741()-rlsl1_v2267),(rlsl1_f737()-rlsl1_v2269));}}
static double rlsl1_f712(){if (rlsl1_p712) return rlsl1_m712; else {rlsl1_p712=T;return rlsl1_m712=(rlsl1_f735()+(-1.5707963267948966));}}
static double rlsl1_f704(){if (rlsl1_p704) return rlsl1_m704; else {rlsl1_p704=T;return rlsl1_m704=((rlsl1_v712=rlsl1_f712()),(((rlsl1_v2275*(rlsl1_f737()+cos(rlsl1_v712)))+(rlsl1_v2273*(rlsl1_f741()+sin(rlsl1_v712))))-rlsl1_v2271));}}
static double rlsl1_f733(){if (rlsl1_p733) return rlsl1_m733; else {rlsl1_p733=T;return rlsl1_m733=normalize_rotation((rlsl1_f735()-rlsl1_f2097()));}}
static double rlsl1_f732(){if (rlsl1_p732) return rlsl1_m732; else {rlsl1_p732=T;return rlsl1_m732=normalize_rotation(rlsl1_f733());}}
static int rlsl1_f720(){if (rlsl1_p720) return rlsl1_m720; else {rlsl1_p720=T;return rlsl1_m720=((rlsl1_v732=rlsl1_f732()),((fabs((rlsl1_v732-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v732-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v732-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static int rlsl1_f694(){if (rlsl1_p694) return rlsl1_m694; else {rlsl1_p694=T;return rlsl1_m694=((rlsl1_v720=rlsl1_f720()),(rlsl1_v720?rlsl1_v720:(((fabs((rlsl1_v2269-rlsl1_f737()))<rlsl1_v2263)?(fabs((rlsl1_v2267-rlsl1_f741()))<rlsl1_v2263):NIL)?NIL:((rlsl1_f945()?NIL:((rlsl1_v704=rlsl1_f704()),((fabs((rlsl1_v704-(0.0)))<rlsl1_v2263)?NIL:((rlsl1_v704>(0.0))?rlsl1_f930():rlsl1_f929()))))?NIL:T))));}}
static double rlsl1_f691(){if (rlsl1_p691) return rlsl1_m691; else {rlsl1_p691=T;return rlsl1_m691=(rlsl1_f694()?rlsl1_f733():rlsl1_f914());}}
static double rlsl1_f693(){if (rlsl1_p693) return rlsl1_m693; else {rlsl1_p693=T;return rlsl1_m693=(rlsl1_f694()?rlsl1_f733():rlsl1_f919());}}
static int rlsl1_f692(){if (rlsl1_p692) return rlsl1_m692; else {rlsl1_p692=T;return rlsl1_m692=(rlsl1_f693()<(0.0));}}
static int rlsl1_f686(){if (rlsl1_p686) return rlsl1_m686; else {rlsl1_p686=T;return rlsl1_m686=(rlsl1_f694()?((rlsl1_v692=rlsl1_f692()),(rlsl1_v692?rlsl1_v692:(fabs((rlsl1_f691()-(0.0)))<rlsl1_v2263))):NIL);}}
static int rlsl1_f685(){if (rlsl1_p685) return rlsl1_m685; else {rlsl1_p685=T;return rlsl1_m685=(rlsl1_f686()?rlsl1_f694():NIL);}}
static double rlsl1_f682(){if (rlsl1_p682) return rlsl1_m682; else {rlsl1_p682=T;return rlsl1_m682=(rlsl1_f686()?rlsl1_f691():rlsl1_f914());}}
static double rlsl1_f684(){if (rlsl1_p684) return rlsl1_m684; else {rlsl1_p684=T;return rlsl1_m684=(rlsl1_f686()?rlsl1_f693():rlsl1_f919());}}
static int rlsl1_f683(){if (rlsl1_p683) return rlsl1_m683; else {rlsl1_p683=T;return rlsl1_m683=(rlsl1_f684()<(0.0));}}
static int rlsl1_f677(){if (rlsl1_p677) return rlsl1_m677; else {rlsl1_p677=T;return rlsl1_m677=(rlsl1_f685()?((rlsl1_v683=rlsl1_f683()),(rlsl1_v683?rlsl1_v683:(fabs((rlsl1_f682()-(0.0)))<rlsl1_v2263))):NIL);}}
static double rlsl1_f798(){if (rlsl1_p798) return rlsl1_m798; else {rlsl1_p798=T;return rlsl1_m798=((rlsl1_f802()+rlsl1_f800())+rlsl1_v2267);}}
static double rlsl1_f794(){if (rlsl1_p794) return rlsl1_m794; else {rlsl1_p794=T;return rlsl1_m794=((rlsl1_v2271-(rlsl1_v2273*rlsl1_f798()))/rlsl1_v2275);}}
static double rlsl1_f792(){if (rlsl1_p792) return rlsl1_m792; else {rlsl1_p792=T;return rlsl1_m792=atan2((rlsl1_f798()-rlsl1_v2267),(rlsl1_f794()-rlsl1_v2269));}}
static double rlsl1_f769(){if (rlsl1_p769) return rlsl1_m769; else {rlsl1_p769=T;return rlsl1_m769=(rlsl1_f792()+(-1.5707963267948966));}}
static double rlsl1_f761(){if (rlsl1_p761) return rlsl1_m761; else {rlsl1_p761=T;return rlsl1_m761=((rlsl1_v769=rlsl1_f769()),(((rlsl1_v2275*(rlsl1_f794()+cos(rlsl1_v769)))+(rlsl1_v2273*(rlsl1_f798()+sin(rlsl1_v769))))-rlsl1_v2271));}}
static double rlsl1_f790(){if (rlsl1_p790) return rlsl1_m790; else {rlsl1_p790=T;return rlsl1_m790=normalize_rotation((rlsl1_f792()-rlsl1_f2097()));}}
static double rlsl1_f789(){if (rlsl1_p789) return rlsl1_m789; else {rlsl1_p789=T;return rlsl1_m789=normalize_rotation(rlsl1_f790());}}
static int rlsl1_f777(){if (rlsl1_p777) return rlsl1_m777; else {rlsl1_p777=T;return rlsl1_m777=((rlsl1_v789=rlsl1_f789()),((fabs((rlsl1_v789-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v789-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v789-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static int rlsl1_f751(){if (rlsl1_p751) return rlsl1_m751; else {rlsl1_p751=T;return rlsl1_m751=((rlsl1_v777=rlsl1_f777()),(rlsl1_v777?rlsl1_v777:(((fabs((rlsl1_v2269-rlsl1_f794()))<rlsl1_v2263)?(fabs((rlsl1_v2267-rlsl1_f798()))<rlsl1_v2263):NIL)?NIL:((rlsl1_f945()?NIL:((rlsl1_v761=rlsl1_f761()),((fabs((rlsl1_v761-(0.0)))<rlsl1_v2263)?NIL:((rlsl1_v761>(0.0))?rlsl1_f930():rlsl1_f929()))))?NIL:T))));}}
static double rlsl1_f644(){if (rlsl1_p644) return rlsl1_m644; else {rlsl1_p644=T;return rlsl1_m644=(rlsl1_f751()?(rlsl1_f686()?(rlsl1_f694()?((rlsl1_v790=rlsl1_f790()),(rlsl1_v733=rlsl1_f733()),((rlsl1_v790>rlsl1_v733)?rlsl1_v790:rlsl1_v733)):rlsl1_f660()):rlsl1_f660()):rlsl1_f660());}}
static double rlsl1_f748(){if (rlsl1_p748) return rlsl1_m748; else {rlsl1_p748=T;return rlsl1_m748=(rlsl1_f751()?rlsl1_f790():rlsl1_f914());}}
static double rlsl1_f750(){if (rlsl1_p750) return rlsl1_m750; else {rlsl1_p750=T;return rlsl1_m750=(rlsl1_f751()?rlsl1_f790():rlsl1_f919());}}
static int rlsl1_f749(){if (rlsl1_p749) return rlsl1_m749; else {rlsl1_p749=T;return rlsl1_m749=(rlsl1_f750()<(0.0));}}
static int rlsl1_f743(){if (rlsl1_p743) return rlsl1_m743; else {rlsl1_p743=T;return rlsl1_m743=(rlsl1_f751()?((rlsl1_v749=rlsl1_f749()),(rlsl1_v749?rlsl1_v749:(fabs((rlsl1_f748()-(0.0)))<rlsl1_v2263))):NIL);}}
static double rlsl1_f2185(){if (rlsl1_p2185) return rlsl1_m2185; else {rlsl1_p2185=T;return rlsl1_m2185=(rlsl1_f2189()-rlsl1_f2186());}}
static int rlsl1_f2184(){if (rlsl1_p2184) return rlsl1_m2184; else {rlsl1_p2184=T;return rlsl1_m2184=(rlsl1_f2185()<0.0);}}
static double rlsl1_f2148(){if (rlsl1_p2148) return rlsl1_m2148; else {rlsl1_p2148=T;return rlsl1_m2148=sqrt(rlsl1_f2185());}}
static double rlsl1_f2144(){if (rlsl1_p2144) return rlsl1_m2144; else {rlsl1_p2144=T;return rlsl1_m2144=((-rlsl1_f2148())+rlsl1_v2269);}}
static double rlsl1_f1957(){if (rlsl1_p1957) return rlsl1_m1957; else {rlsl1_p1957=T;return rlsl1_m1957=atan2(rlsl1_f2006(),(rlsl1_f2144()-rlsl1_v2269));}}
static double rlsl1_f850(){if (rlsl1_p850) return rlsl1_m850; else {rlsl1_p850=T;return rlsl1_m850=(rlsl1_f1957()+(-1.5707963267948966));}}
static double rlsl1_f842(){if (rlsl1_p842) return rlsl1_m842; else {rlsl1_p842=T;return rlsl1_m842=((rlsl1_v850=rlsl1_f850()),(((rlsl1_v2275*(rlsl1_f2144()+cos(rlsl1_v850)))+(rlsl1_v2273*(rlsl1_f2146()+sin(rlsl1_v850))))-rlsl1_v2271));}}
static double rlsl1_f1955(){if (rlsl1_p1955) return rlsl1_m1955; else {rlsl1_p1955=T;return rlsl1_m1955=normalize_rotation((rlsl1_f1957()-rlsl1_f2097()));}}
static double rlsl1_f1954(){if (rlsl1_p1954) return rlsl1_m1954; else {rlsl1_p1954=T;return rlsl1_m1954=normalize_rotation(rlsl1_f1955());}}
static int rlsl1_f852(){if (rlsl1_p852) return rlsl1_m852; else {rlsl1_p852=T;return rlsl1_m852=((rlsl1_v1954=rlsl1_f1954()),((fabs((rlsl1_v1954-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v1954-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v1954-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static int rlsl1_f832(){if (rlsl1_p832) return rlsl1_m832; else {rlsl1_p832=T;return rlsl1_m832=((rlsl1_v852=rlsl1_f852()),(rlsl1_v852?rlsl1_v852:(((fabs((rlsl1_v2269-rlsl1_f2144()))<rlsl1_v2263)?rlsl1_f1981():NIL)?NIL:((rlsl1_f945()?NIL:((rlsl1_v842=rlsl1_f842()),((fabs((rlsl1_v842-(0.0)))<rlsl1_v2263)?NIL:((rlsl1_v842>(0.0))?rlsl1_f930():rlsl1_f929()))))?NIL:T))));}}
static double rlsl1_f829(){if (rlsl1_p829) return rlsl1_m829; else {rlsl1_p829=T;return rlsl1_m829=(rlsl1_f832()?rlsl1_f1955():rlsl1_f914());}}
static double rlsl1_f831(){if (rlsl1_p831) return rlsl1_m831; else {rlsl1_p831=T;return rlsl1_m831=(rlsl1_f832()?rlsl1_f1955():rlsl1_f919());}}
static int rlsl1_f830(){if (rlsl1_p830) return rlsl1_m830; else {rlsl1_p830=T;return rlsl1_m830=(rlsl1_f831()<(0.0));}}
static int rlsl1_f824(){if (rlsl1_p824) return rlsl1_m824; else {rlsl1_p824=T;return rlsl1_m824=(rlsl1_f832()?((rlsl1_v830=rlsl1_f830()),(rlsl1_v830?rlsl1_v830:(fabs((rlsl1_f829()-(0.0)))<rlsl1_v2263))):NIL);}}
static int rlsl1_f823(){if (rlsl1_p823) return rlsl1_m823; else {rlsl1_p823=T;return rlsl1_m823=(rlsl1_f824()?rlsl1_f832():NIL);}}
static double rlsl1_f820(){if (rlsl1_p820) return rlsl1_m820; else {rlsl1_p820=T;return rlsl1_m820=(rlsl1_f824()?rlsl1_f829():rlsl1_f914());}}
static double rlsl1_f822(){if (rlsl1_p822) return rlsl1_m822; else {rlsl1_p822=T;return rlsl1_m822=(rlsl1_f824()?rlsl1_f831():rlsl1_f919());}}
static int rlsl1_f821(){if (rlsl1_p821) return rlsl1_m821; else {rlsl1_p821=T;return rlsl1_m821=(rlsl1_f822()<(0.0));}}
static int rlsl1_f815(){if (rlsl1_p815) return rlsl1_m815; else {rlsl1_p815=T;return rlsl1_m815=(rlsl1_f823()?((rlsl1_v821=rlsl1_f821()),(rlsl1_v821?rlsl1_v821:(fabs((rlsl1_f820()-(0.0)))<rlsl1_v2263))):NIL);}}
static double rlsl1_f2145(){if (rlsl1_p2145) return rlsl1_m2145; else {rlsl1_p2145=T;return rlsl1_m2145=(rlsl1_f2148()+rlsl1_v2269);}}
static double rlsl1_f2004(){if (rlsl1_p2004) return rlsl1_m2004; else {rlsl1_p2004=T;return rlsl1_m2004=atan2(rlsl1_f2006(),(rlsl1_f2145()-rlsl1_v2269));}}
static double rlsl1_f890(){if (rlsl1_p890) return rlsl1_m890; else {rlsl1_p890=T;return rlsl1_m890=(rlsl1_f2004()+(-1.5707963267948966));}}
static double rlsl1_f882(){if (rlsl1_p882) return rlsl1_m882; else {rlsl1_p882=T;return rlsl1_m882=((rlsl1_v890=rlsl1_f890()),(((rlsl1_v2275*(rlsl1_f2145()+cos(rlsl1_v890)))+(rlsl1_v2273*(rlsl1_f2146()+sin(rlsl1_v890))))-rlsl1_v2271));}}
static double rlsl1_f2002(){if (rlsl1_p2002) return rlsl1_m2002; else {rlsl1_p2002=T;return rlsl1_m2002=normalize_rotation((rlsl1_f2004()-rlsl1_f2097()));}}
static double rlsl1_f2001(){if (rlsl1_p2001) return rlsl1_m2001; else {rlsl1_p2001=T;return rlsl1_m2001=normalize_rotation(rlsl1_f2002());}}
static int rlsl1_f892(){if (rlsl1_p892) return rlsl1_m892; else {rlsl1_p892=T;return rlsl1_m892=((rlsl1_v2001=rlsl1_f2001()),((fabs((rlsl1_v2001-(0.0)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v2001-(-6.283185307179586)))<rlsl1_v2263)?NIL:((fabs((rlsl1_v2001-(6.283185307179586)))<rlsl1_v2263)?NIL:T))));}}
static int rlsl1_f872(){if (rlsl1_p872) return rlsl1_m872; else {rlsl1_p872=T;return rlsl1_m872=((rlsl1_v892=rlsl1_f892()),(rlsl1_v892?rlsl1_v892:(((fabs((rlsl1_v2269-rlsl1_f2145()))<rlsl1_v2263)?rlsl1_f1981():NIL)?NIL:((rlsl1_f945()?NIL:((rlsl1_v882=rlsl1_f882()),((fabs((rlsl1_v882-(0.0)))<rlsl1_v2263)?NIL:((rlsl1_v882>(0.0))?rlsl1_f930():rlsl1_f929()))))?NIL:T))));}}
static double rlsl1_f652(){if (rlsl1_p652) return rlsl1_m652; else {rlsl1_p652=T;return rlsl1_m652=(rlsl1_f872()?(rlsl1_f824()?(rlsl1_f832()?((rlsl1_v2002=rlsl1_f2002()),(rlsl1_v1955=rlsl1_f1955()),((rlsl1_v2002>rlsl1_v1955)?rlsl1_v2002:rlsl1_v1955)):rlsl1_f660()):rlsl1_f660()):rlsl1_f660());}}
static double rlsl1_f869(){if (rlsl1_p869) return rlsl1_m869; else {rlsl1_p869=T;return rlsl1_m869=(rlsl1_f872()?rlsl1_f2002():rlsl1_f914());}}
static double rlsl1_f871(){if (rlsl1_p871) return rlsl1_m871; else {rlsl1_p871=T;return rlsl1_m871=(rlsl1_f872()?rlsl1_f2002():rlsl1_f919());}}
static int rlsl1_f870(){if (rlsl1_p870) return rlsl1_m870; else {rlsl1_p870=T;return rlsl1_m870=(rlsl1_f871()<(0.0));}}
static int rlsl1_f864(){if (rlsl1_p864) return rlsl1_m864; else {rlsl1_p864=T;return rlsl1_m864=(rlsl1_f872()?((rlsl1_v870=rlsl1_f870()),(rlsl1_v870?rlsl1_v870:(fabs((rlsl1_f869()-(0.0)))<rlsl1_v2263))):NIL);}}
static int rlsl1_f997(){if (rlsl1_p997) return rlsl1_m997; else {rlsl1_p997=T;return rlsl1_m997=(fabs((rlsl1_f1000()-rlsl1_f2211()))<rlsl1_v2263);}}
static double_or_symbol rlsl1_f39(){if (rlsl1_p39) return rlsl1_m39; else {rlsl1_p39=T;return rlsl1_m39=(rlsl1_f997()?((rlsl1_v907=rlsl1_f907()),(rlsl1_v907?(rlsl1_f662()?coerce_double_to_double_or_symbol(rlsl1_f658()):rlsl1_f43()):(rlsl1_v907?rlsl1_f43():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsl1_f634(){if (rlsl1_p634) return rlsl1_m634; else {rlsl1_p634=T;return rlsl1_m634=(rlsl1_f997()?(rlsl1_f907()?(rlsl1_f662()?rlsl1_f658():rlsl1_f912()):rlsl1_f667()):rlsl1_f914());}}
static double rlsl1_f655(){if (rlsl1_p655) return rlsl1_m655; else {rlsl1_p655=T;return rlsl1_m655=(rlsl1_f997()?(rlsl1_f907()?(rlsl1_f662()?rlsl1_f658():rlsl1_f917()):rlsl1_f669()):rlsl1_f919());}}
static int rlsl1_f988(){if (rlsl1_p988) return rlsl1_m988; else {rlsl1_p988=T;return rlsl1_m988=((rlsl1_v997=rlsl1_f997()),(rlsl1_v997?((rlsl1_v995=rlsl1_f995()),(rlsl1_v995?rlsl1_v995:(fabs((rlsl1_f2200()-(1.5707963267948966)))<rlsl1_v2263))):(rlsl1_v997?NIL:T)));}}
static int rlsl1_f637(){if (rlsl1_p637) return rlsl1_m637; else {rlsl1_p637=T;return rlsl1_m637=((rlsl1_v1007?rlsl1_f919():(rlsl1_f988()?(rlsl1_f2190()?(rlsl1_f2184()?rlsl1_f655():(rlsl1_f864()?(rlsl1_f815()?rlsl1_f652():rlsl1_f871()):rlsl1_f822())):(rlsl1_f804()?rlsl1_f655():(rlsl1_f743()?(rlsl1_f677()?rlsl1_f644():rlsl1_f750()):rlsl1_f684()))):rlsl1_f919()))<(0.0));}}
static int rlsl1_f904(){if (rlsl1_p904) return rlsl1_m904; else {rlsl1_p904=T;return rlsl1_m904=(rlsl1_f997()?(rlsl1_f907()?rlsl1_f921():rlsl1_f906()):NIL);}}
void rlsl1(rlsl1_a2283,rlsl1_a2281,rlsl1_a2279,rlsl1_a2277,rlsl1_a2275,rlsl1_a2273,rlsl1_a2271,rlsl1_a2269,rlsl1_a2267,rlsl1_a2263)
double rlsl1_a2283;
double rlsl1_a2281;
double rlsl1_a2279;
double rlsl1_a2277;
double rlsl1_a2275;
double rlsl1_a2273;
double rlsl1_a2271;
double rlsl1_a2269;
double rlsl1_a2267;
double rlsl1_a2263;
{ rlsl1_v2283=rlsl1_a2283;
  rlsl1_v2281=rlsl1_a2281;
  rlsl1_v2279=rlsl1_a2279;
  rlsl1_v2277=rlsl1_a2277;
  rlsl1_v2275=rlsl1_a2275;
  rlsl1_v2273=rlsl1_a2273;
  rlsl1_v2271=rlsl1_a2271;
  rlsl1_v2269=rlsl1_a2269;
  rlsl1_v2267=rlsl1_a2267;
  rlsl1_v2263=rlsl1_a2263;
  rlsl1_p1649=NIL;
  rlsl1_p591=NIL;
  rlsl1_p590=NIL;
  rlsl1_p589=NIL;
  rlsl1_p1670=NIL;
  rlsl1_p1747=NIL;
  rlsl1_p1744=NIL;
  rlsl1_p619=NIL;
  rlsl1_p1720=NIL;
  rlsl1_p615=NIL;
  rlsl1_p1734=NIL;
  rlsl1_p660=NIL;
  rlsl1_p2190=NIL;
  rlsl1_p2182=NIL;
  rlsl1_p2177=NIL;
  rlsl1_p914=NIL;
  rlsl1_p919=NIL;
  rlsl1_p2060=NIL;
  rlsl1_p945=NIL;
  rlsl1_p930=NIL;
  rlsl1_p929=NIL;
  rlsl1_p2097=NIL;
  rlsl1_p2146=NIL;
  rlsl1_p1981=NIL;
  rlsl1_p2006=NIL;
  rlsl1_p2187=NIL;
  rlsl1_p2191=NIL;
  rlsl1_p809=NIL;
  rlsl1_p808=NIL;
  rlsl1_p2188=NIL;
  rlsl1_p2186=NIL;
  rlsl1_p2250=NIL;
  rlsl1_p2249=NIL;
  rlsl1_p2248=NIL;
  rlsl1_p2170=NIL;
  rlsl1_p2168=NIL;
  rlsl1_p2247=NIL;
  rlsl1_p2141=NIL;
  rlsl1_p2132=NIL;
  rlsl1_p802=NIL;
  rlsl1_p2251=NIL;
  rlsl1_p2174=NIL;
  rlsl1_p2172=NIL;
  rlsl1_p2154=NIL;
  rlsl1_p985=NIL;
  rlsl1_p970=NIL;
  rlsl1_p2165=NIL;
  rlsl1_p2153=NIL;
  rlsl1_p948=NIL;
  rlsl1_p974=NIL;
  rlsl1_p968=NIL;
  rlsl1_p607=NIL;
  rlsl1_p606=NIL;
  rlsl1_p594=NIL;
  rlsl1_p943=NIL;
  rlsl1_p935=NIL;
  rlsl1_p932=NIL;
  rlsl1_p931=NIL;
  rlsl1_p966=NIL;
  rlsl1_p965=NIL;
  rlsl1_p951=NIL;
  rlsl1_p978=NIL;
  rlsl1_p977=NIL;
  rlsl1_p950=NIL;
  rlsl1_p582=NIL;
  rlsl1_p330=NIL;
  rlsl1_p21=NIL;
  rlsl1_p581=NIL;
  rlsl1_p576=NIL;
  rlsl1_p579=NIL;
  rlsl1_p578=NIL;
  rlsl1_p571=NIL;
  rlsl1_p570=NIL;
  rlsl1_p337=NIL;
  rlsl1_p339=NIL;
  rlsl1_p338=NIL;
  rlsl1_p332=NIL;
  rlsl1_p922=NIL;
  rlsl1_p43=NIL;
  rlsl1_p658=NIL;
  rlsl1_p921=NIL;
  rlsl1_p912=NIL;
  rlsl1_p917=NIL;
  rlsl1_p916=NIL;
  rlsl1_p907=NIL;
  rlsl1_p667=NIL;
  rlsl1_p669=NIL;
  rlsl1_p668=NIL;
  rlsl1_p906=NIL;
  rlsl1_p662=NIL;
  rlsl1_p2245=NIL;
  rlsl1_p2224=NIL;
  rlsl1_p2222=NIL;
  rlsl1_p1000=NIL;
  rlsl1_p2260=NIL;
  rlsl1_p2200=NIL;
  rlsl1_p995=NIL;
  rlsl1_p2216=NIL;
  rlsl1_p2214=NIL;
  rlsl1_p2213=NIL;
  rlsl1_p1731=NIL;
  rlsl1_p1713=NIL;
  rlsl1_p473=NIL;
  rlsl1_p472=NIL;
  rlsl1_p470=NIL;
  rlsl1_p411=NIL;
  rlsl1_p407=NIL;
  rlsl1_p405=NIL;
  rlsl1_p382=NIL;
  rlsl1_p374=NIL;
  rlsl1_p403=NIL;
  rlsl1_p402=NIL;
  rlsl1_p390=NIL;
  rlsl1_p364=NIL;
  rlsl1_p361=NIL;
  rlsl1_p363=NIL;
  rlsl1_p362=NIL;
  rlsl1_p356=NIL;
  rlsl1_p355=NIL;
  rlsl1_p352=NIL;
  rlsl1_p354=NIL;
  rlsl1_p353=NIL;
  rlsl1_p347=NIL;
  rlsl1_p468=NIL;
  rlsl1_p464=NIL;
  rlsl1_p462=NIL;
  rlsl1_p439=NIL;
  rlsl1_p431=NIL;
  rlsl1_p460=NIL;
  rlsl1_p459=NIL;
  rlsl1_p447=NIL;
  rlsl1_p421=NIL;
  rlsl1_p316=NIL;
  rlsl1_p418=NIL;
  rlsl1_p420=NIL;
  rlsl1_p419=NIL;
  rlsl1_p413=NIL;
  rlsl1_p1712=NIL;
  rlsl1_p1711=NIL;
  rlsl1_p1705=NIL;
  rlsl1_p1702=NIL;
  rlsl1_p1562=NIL;
  rlsl1_p514=NIL;
  rlsl1_p506=NIL;
  rlsl1_p1560=NIL;
  rlsl1_p1559=NIL;
  rlsl1_p516=NIL;
  rlsl1_p496=NIL;
  rlsl1_p493=NIL;
  rlsl1_p495=NIL;
  rlsl1_p494=NIL;
  rlsl1_p488=NIL;
  rlsl1_p487=NIL;
  rlsl1_p484=NIL;
  rlsl1_p486=NIL;
  rlsl1_p485=NIL;
  rlsl1_p479=NIL;
  rlsl1_p1703=NIL;
  rlsl1_p1606=NIL;
  rlsl1_p554=NIL;
  rlsl1_p546=NIL;
  rlsl1_p1604=NIL;
  rlsl1_p1603=NIL;
  rlsl1_p556=NIL;
  rlsl1_p536=NIL;
  rlsl1_p324=NIL;
  rlsl1_p533=NIL;
  rlsl1_p535=NIL;
  rlsl1_p534=NIL;
  rlsl1_p528=NIL;
  rlsl1_p616=NIL;
  rlsl1_p274=NIL;
  rlsl1_p251=NIL;
  rlsl1_p306=NIL;
  rlsl1_p327=NIL;
  rlsl1_p568=NIL;
  rlsl1_p609=NIL;
  rlsl1_p340=NIL;
  rlsl1_p297=NIL;
  rlsl1_p310=NIL;
  rlsl1_p309=NIL;
  rlsl1_p292=NIL;
  rlsl1_p289=NIL;
  rlsl1_p17=NIL;
  rlsl1_p2211=NIL;
  rlsl1_p2189=NIL;
  rlsl1_p805=NIL;
  rlsl1_p804=NIL;
  rlsl1_p800=NIL;
  rlsl1_p741=NIL;
  rlsl1_p737=NIL;
  rlsl1_p735=NIL;
  rlsl1_p712=NIL;
  rlsl1_p704=NIL;
  rlsl1_p733=NIL;
  rlsl1_p732=NIL;
  rlsl1_p720=NIL;
  rlsl1_p694=NIL;
  rlsl1_p691=NIL;
  rlsl1_p693=NIL;
  rlsl1_p692=NIL;
  rlsl1_p686=NIL;
  rlsl1_p685=NIL;
  rlsl1_p682=NIL;
  rlsl1_p684=NIL;
  rlsl1_p683=NIL;
  rlsl1_p677=NIL;
  rlsl1_p798=NIL;
  rlsl1_p794=NIL;
  rlsl1_p792=NIL;
  rlsl1_p769=NIL;
  rlsl1_p761=NIL;
  rlsl1_p790=NIL;
  rlsl1_p789=NIL;
  rlsl1_p777=NIL;
  rlsl1_p751=NIL;
  rlsl1_p644=NIL;
  rlsl1_p748=NIL;
  rlsl1_p750=NIL;
  rlsl1_p749=NIL;
  rlsl1_p743=NIL;
  rlsl1_p2185=NIL;
  rlsl1_p2184=NIL;
  rlsl1_p2148=NIL;
  rlsl1_p2144=NIL;
  rlsl1_p1957=NIL;
  rlsl1_p850=NIL;
  rlsl1_p842=NIL;
  rlsl1_p1955=NIL;
  rlsl1_p1954=NIL;
  rlsl1_p852=NIL;
  rlsl1_p832=NIL;
  rlsl1_p829=NIL;
  rlsl1_p831=NIL;
  rlsl1_p830=NIL;
  rlsl1_p824=NIL;
  rlsl1_p823=NIL;
  rlsl1_p820=NIL;
  rlsl1_p822=NIL;
  rlsl1_p821=NIL;
  rlsl1_p815=NIL;
  rlsl1_p2145=NIL;
  rlsl1_p2004=NIL;
  rlsl1_p890=NIL;
  rlsl1_p882=NIL;
  rlsl1_p2002=NIL;
  rlsl1_p2001=NIL;
  rlsl1_p892=NIL;
  rlsl1_p872=NIL;
  rlsl1_p652=NIL;
  rlsl1_p869=NIL;
  rlsl1_p871=NIL;
  rlsl1_p870=NIL;
  rlsl1_p864=NIL;
  rlsl1_p997=NIL;
  rlsl1_p39=NIL;
  rlsl1_p634=NIL;
  rlsl1_p655=NIL;
  rlsl1_p988=NIL;
  rlsl1_p637=NIL;
  rlsl1_p904=NIL;
  double_or_symbol_result=((rlsl1_v2265=(rlsl1_v2269-rlsl1_v2283)),(rlsl1_v1007=((fabs(rlsl1_v2265)<rlsl1_v2263)?(fabs(rlsl1_f2260())<rlsl1_v2263):NIL)),(((rlsl1_v1007?NIL:(rlsl1_f988()?(rlsl1_f2190()?(rlsl1_f2184()?rlsl1_f904():(rlsl1_f864()?(rlsl1_f815()?(rlsl1_f872()?rlsl1_f823():NIL):rlsl1_f872()):rlsl1_f823())):(rlsl1_f804()?rlsl1_f904():(rlsl1_f743()?(rlsl1_f677()?(rlsl1_f751()?rlsl1_f685():NIL):rlsl1_f751()):rlsl1_f685()))):NIL))?((rlsl1_v637=rlsl1_f637()),(rlsl1_v637?rlsl1_v637:(fabs(((rlsl1_v1007?rlsl1_f914():(rlsl1_f988()?(rlsl1_f2190()?(rlsl1_f2184()?rlsl1_f634():(rlsl1_f864()?(rlsl1_f815()?rlsl1_f652():rlsl1_f869()):rlsl1_f820())):(rlsl1_f804()?rlsl1_f634():(rlsl1_f743()?(rlsl1_f677()?rlsl1_f644():rlsl1_f748()):rlsl1_f682()))):rlsl1_f914()))-(0.0)))<rlsl1_v2263))):NIL)?((rlsl1_v292=rlsl1_f292()),(((rlsl1_v292?rlsl1_f340():NIL)?((rlsl1_v289=rlsl1_f289()),(rlsl1_v289?rlsl1_v289:(fabs(((rlsl1_v292?rlsl1_f297():rlsl1_f914())-(0.0)))<rlsl1_v2263))):NIL)?coerce_double_to_double_or_symbol((rlsl1_v1007?rlsl1_f660():(rlsl1_f988()?(rlsl1_f2190()?(rlsl1_f2184()?(rlsl1_f997()?(rlsl1_f907()?(rlsl1_f662()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f1711()?rlsl1_f274():(rlsl1_f528()?(rlsl1_f479()?((rlsl1_v658=rlsl1_f658()),(rlsl1_v324=rlsl1_f324()),((rlsl1_v658>rlsl1_v324)?rlsl1_v658:rlsl1_v324)):(rlsl1_f536()?((rlsl1_v658=rlsl1_f658()),(rlsl1_v1604=rlsl1_f1604()),((rlsl1_v658>rlsl1_v1604)?rlsl1_v658:rlsl1_v1604)):rlsl1_f660())):(rlsl1_f488()?(rlsl1_f496()?((rlsl1_v658=rlsl1_f658()),(rlsl1_v1560=rlsl1_f1560()),((rlsl1_v658>rlsl1_v1560)?rlsl1_v658:rlsl1_v1560)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):(rlsl1_f977()?(rlsl1_f922()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f1711()?rlsl1_f251():(rlsl1_f528()?(rlsl1_f479()?((rlsl1_v966=rlsl1_f966()),(rlsl1_v324=rlsl1_f324()),((rlsl1_v966>rlsl1_v324)?rlsl1_v966:rlsl1_v324)):(rlsl1_f536()?((rlsl1_v966=rlsl1_f966()),(rlsl1_v1604=rlsl1_f1604()),((rlsl1_v966>rlsl1_v1604)?rlsl1_v966:rlsl1_v1604)):rlsl1_f660())):(rlsl1_f488()?(rlsl1_f496()?((rlsl1_v966=rlsl1_f966()),(rlsl1_v1560=rlsl1_f1560()),((rlsl1_v966>rlsl1_v1560)?rlsl1_v966:rlsl1_v1560)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):(rlsl1_f864()?(rlsl1_f815()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f1711()?(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?((rlsl1_v652=rlsl1_f652()),(rlsl1_v330=rlsl1_f330()),((rlsl1_v652>rlsl1_v330)?rlsl1_v652:rlsl1_v330)):(rlsl1_f977()?(rlsl1_f582()?((rlsl1_v652=rlsl1_f652()),(rlsl1_v607=rlsl1_f607()),((rlsl1_v652>rlsl1_v607)?rlsl1_v652:rlsl1_v607)):rlsl1_f660()):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):(rlsl1_f528()?(rlsl1_f479()?((rlsl1_v652=rlsl1_f652()),(rlsl1_v324=rlsl1_f324()),((rlsl1_v652>rlsl1_v324)?rlsl1_v652:rlsl1_v324)):(rlsl1_f536()?((rlsl1_v652=rlsl1_f652()),(rlsl1_v1604=rlsl1_f1604()),((rlsl1_v652>rlsl1_v1604)?rlsl1_v652:rlsl1_v1604)):rlsl1_f660())):(rlsl1_f488()?(rlsl1_f496()?((rlsl1_v652=rlsl1_f652()),(rlsl1_v1560=rlsl1_f1560()),((rlsl1_v652>rlsl1_v1560)?rlsl1_v652:rlsl1_v1560)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):(rlsl1_f872()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f1711()?(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?((rlsl1_v2002=rlsl1_f2002()),(rlsl1_v330=rlsl1_f330()),((rlsl1_v2002>rlsl1_v330)?rlsl1_v2002:rlsl1_v330)):(rlsl1_f977()?(rlsl1_f582()?((rlsl1_v2002=rlsl1_f2002()),(rlsl1_v607=rlsl1_f607()),((rlsl1_v2002>rlsl1_v607)?rlsl1_v2002:rlsl1_v607)):rlsl1_f660()):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):(rlsl1_f528()?(rlsl1_f479()?((rlsl1_v2002=rlsl1_f2002()),(rlsl1_v324=rlsl1_f324()),((rlsl1_v2002>rlsl1_v324)?rlsl1_v2002:rlsl1_v324)):(rlsl1_f536()?((rlsl1_v2002=rlsl1_f2002()),(rlsl1_v1604=rlsl1_f1604()),((rlsl1_v2002>rlsl1_v1604)?rlsl1_v2002:rlsl1_v1604)):rlsl1_f660())):(rlsl1_f488()?(rlsl1_f496()?((rlsl1_v2002=rlsl1_f2002()),(rlsl1_v1560=rlsl1_f1560()),((rlsl1_v2002>rlsl1_v1560)?rlsl1_v2002:rlsl1_v1560)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):rlsl1_f660())):(rlsl1_f824()?(rlsl1_f832()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f1711()?(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?((rlsl1_v1955=rlsl1_f1955()),(rlsl1_v330=rlsl1_f330()),((rlsl1_v1955>rlsl1_v330)?rlsl1_v1955:rlsl1_v330)):(rlsl1_f977()?(rlsl1_f582()?((rlsl1_v1955=rlsl1_f1955()),(rlsl1_v607=rlsl1_f607()),((rlsl1_v1955>rlsl1_v607)?rlsl1_v1955:rlsl1_v607)):rlsl1_f660()):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):(rlsl1_f528()?(rlsl1_f479()?((rlsl1_v1955=rlsl1_f1955()),(rlsl1_v324=rlsl1_f324()),((rlsl1_v1955>rlsl1_v324)?rlsl1_v1955:rlsl1_v324)):(rlsl1_f536()?((rlsl1_v1955=rlsl1_f1955()),(rlsl1_v1604=rlsl1_f1604()),((rlsl1_v1955>rlsl1_v1604)?rlsl1_v1955:rlsl1_v1604)):rlsl1_f660())):(rlsl1_f488()?(rlsl1_f496()?((rlsl1_v1955=rlsl1_f1955()),(rlsl1_v1560=rlsl1_f1560()),((rlsl1_v1955>rlsl1_v1560)?rlsl1_v1955:rlsl1_v1560)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):rlsl1_f660()))):(rlsl1_f804()?(rlsl1_f997()?(rlsl1_f907()?(rlsl1_f662()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f472()?rlsl1_f274():(rlsl1_f413()?(rlsl1_f347()?((rlsl1_v658=rlsl1_f658()),(rlsl1_v316=rlsl1_f316()),((rlsl1_v658>rlsl1_v316)?rlsl1_v658:rlsl1_v316)):(rlsl1_f421()?((rlsl1_v658=rlsl1_f658()),(rlsl1_v460=rlsl1_f460()),((rlsl1_v658>rlsl1_v460)?rlsl1_v658:rlsl1_v460)):rlsl1_f660())):(rlsl1_f356()?(rlsl1_f364()?((rlsl1_v658=rlsl1_f658()),(rlsl1_v403=rlsl1_f403()),((rlsl1_v658>rlsl1_v403)?rlsl1_v658:rlsl1_v403)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):(rlsl1_f977()?(rlsl1_f922()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f472()?rlsl1_f251():(rlsl1_f413()?(rlsl1_f347()?((rlsl1_v966=rlsl1_f966()),(rlsl1_v316=rlsl1_f316()),((rlsl1_v966>rlsl1_v316)?rlsl1_v966:rlsl1_v316)):(rlsl1_f421()?((rlsl1_v966=rlsl1_f966()),(rlsl1_v460=rlsl1_f460()),((rlsl1_v966>rlsl1_v460)?rlsl1_v966:rlsl1_v460)):rlsl1_f660())):(rlsl1_f356()?(rlsl1_f364()?((rlsl1_v966=rlsl1_f966()),(rlsl1_v403=rlsl1_f403()),((rlsl1_v966>rlsl1_v403)?rlsl1_v966:rlsl1_v403)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):(rlsl1_f743()?(rlsl1_f677()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f472()?(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?((rlsl1_v644=rlsl1_f644()),(rlsl1_v330=rlsl1_f330()),((rlsl1_v644>rlsl1_v330)?rlsl1_v644:rlsl1_v330)):(rlsl1_f977()?(rlsl1_f582()?((rlsl1_v644=rlsl1_f644()),(rlsl1_v607=rlsl1_f607()),((rlsl1_v644>rlsl1_v607)?rlsl1_v644:rlsl1_v607)):rlsl1_f660()):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):(rlsl1_f413()?(rlsl1_f347()?((rlsl1_v644=rlsl1_f644()),(rlsl1_v316=rlsl1_f316()),((rlsl1_v644>rlsl1_v316)?rlsl1_v644:rlsl1_v316)):(rlsl1_f421()?((rlsl1_v644=rlsl1_f644()),(rlsl1_v460=rlsl1_f460()),((rlsl1_v644>rlsl1_v460)?rlsl1_v644:rlsl1_v460)):rlsl1_f660())):(rlsl1_f356()?(rlsl1_f364()?((rlsl1_v644=rlsl1_f644()),(rlsl1_v403=rlsl1_f403()),((rlsl1_v644>rlsl1_v403)?rlsl1_v644:rlsl1_v403)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):(rlsl1_f751()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f472()?(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?((rlsl1_v790=rlsl1_f790()),(rlsl1_v330=rlsl1_f330()),((rlsl1_v790>rlsl1_v330)?rlsl1_v790:rlsl1_v330)):(rlsl1_f977()?(rlsl1_f582()?((rlsl1_v790=rlsl1_f790()),(rlsl1_v607=rlsl1_f607()),((rlsl1_v790>rlsl1_v607)?rlsl1_v790:rlsl1_v607)):rlsl1_f660()):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):(rlsl1_f413()?(rlsl1_f347()?((rlsl1_v790=rlsl1_f790()),(rlsl1_v316=rlsl1_f316()),((rlsl1_v790>rlsl1_v316)?rlsl1_v790:rlsl1_v316)):(rlsl1_f421()?((rlsl1_v790=rlsl1_f790()),(rlsl1_v460=rlsl1_f460()),((rlsl1_v790>rlsl1_v460)?rlsl1_v790:rlsl1_v460)):rlsl1_f660())):(rlsl1_f356()?(rlsl1_f364()?((rlsl1_v790=rlsl1_f790()),(rlsl1_v403=rlsl1_f403()),((rlsl1_v790>rlsl1_v403)?rlsl1_v790:rlsl1_v403)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):rlsl1_f660())):(rlsl1_f686()?(rlsl1_f694()?(rlsl1_v292?(rlsl1_f619()?rlsl1_f660():(rlsl1_f609()?(rlsl1_f472()?(rlsl1_f616()?(rlsl1_f571()?(rlsl1_f332()?((rlsl1_v733=rlsl1_f733()),(rlsl1_v330=rlsl1_f330()),((rlsl1_v733>rlsl1_v330)?rlsl1_v733:rlsl1_v330)):(rlsl1_f977()?(rlsl1_f582()?((rlsl1_v733=rlsl1_f733()),(rlsl1_v607=rlsl1_f607()),((rlsl1_v733>rlsl1_v607)?rlsl1_v733:rlsl1_v607)):rlsl1_f660()):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):(rlsl1_f413()?(rlsl1_f347()?((rlsl1_v733=rlsl1_f733()),(rlsl1_v316=rlsl1_f316()),((rlsl1_v733>rlsl1_v316)?rlsl1_v733:rlsl1_v316)):(rlsl1_f421()?((rlsl1_v733=rlsl1_f733()),(rlsl1_v460=rlsl1_f460()),((rlsl1_v733>rlsl1_v460)?rlsl1_v733:rlsl1_v460)):rlsl1_f660())):(rlsl1_f356()?(rlsl1_f364()?((rlsl1_v733=rlsl1_f733()),(rlsl1_v403=rlsl1_f403()),((rlsl1_v733>rlsl1_v403)?rlsl1_v733:rlsl1_v403)):rlsl1_f660()):rlsl1_f660()))):rlsl1_f660())):rlsl1_f660()):rlsl1_f660()):rlsl1_f660())))):rlsl1_f660()))):(rlsl1_v1007?coerce_symbol_to_double_or_symbol(NIL):(rlsl1_f988()?(rlsl1_f2190()?(rlsl1_f2184()?rlsl1_f39():(rlsl1_f864()?(rlsl1_f815()?coerce_double_to_double_or_symbol(rlsl1_f652()):(rlsl1_f872()?coerce_double_to_double_or_symbol(rlsl1_f2002()):coerce_symbol_to_double_or_symbol(NIL))):(rlsl1_f824()?(rlsl1_f832()?coerce_double_to_double_or_symbol(rlsl1_f1955()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(rlsl1_f804()?rlsl1_f39():(rlsl1_f743()?(rlsl1_f677()?coerce_double_to_double_or_symbol(rlsl1_f644()):(rlsl1_f751()?coerce_double_to_double_or_symbol(rlsl1_f790()):coerce_symbol_to_double_or_symbol(NIL))):(rlsl1_f686()?(rlsl1_f694()?coerce_double_to_double_or_symbol(rlsl1_f733()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))))):(rlsl1_f292()?(rlsl1_f619()?coerce_symbol_to_double_or_symbol(NIL):(rlsl1_f609()?(rlsl1_f2190()?(rlsl1_f1711()?rlsl1_f17():(rlsl1_f528()?(rlsl1_f479()?coerce_double_to_double_or_symbol(rlsl1_f324()):(rlsl1_f536()?coerce_double_to_double_or_symbol(rlsl1_f1604()):coerce_symbol_to_double_or_symbol(NIL))):(rlsl1_f488()?(rlsl1_f496()?coerce_double_to_double_or_symbol(rlsl1_f1560()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(rlsl1_f472()?rlsl1_f17():(rlsl1_f413()?(rlsl1_f347()?coerce_double_to_double_or_symbol(rlsl1_f316()):(rlsl1_f421()?coerce_double_to_double_or_symbol(rlsl1_f460()):coerce_symbol_to_double_or_symbol(NIL))):(rlsl1_f356()?(rlsl1_f364()?coerce_double_to_double_or_symbol(rlsl1_f403()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))):coerce_symbol_to_double_or_symbol(NIL)))); return;}
