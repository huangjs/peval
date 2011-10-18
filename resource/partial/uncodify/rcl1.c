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
double rcl1_v2360;
double rcl1_v2358;
double rcl1_v2356;
double rcl1_v2354;
double rcl1_v2352;
double rcl1_v2350;
double rcl1_v2348;
double rcl1_v2346;
double rcl1_v2344;
double rcl1_v2340;
double rcl1_v2342;
int rcl1_p645;
double rcl1_m645;
int rcl1_p2311;
int rcl1_m2311;
int rcl1_p875;
double rcl1_m875;
int rcl1_p880;
double rcl1_m880;
int rcl1_p928;
double rcl1_m928;
int rcl1_p2314;
double rcl1_m2314;
int rcl1_p2313;
double rcl1_m2313;
int rcl1_p1999;
double rcl1_m1999;
int rcl1_p911;
int rcl1_m911;
int rcl1_p891;
int rcl1_m891;
int rcl1_p890;
int rcl1_m890;
int rcl1_p2312;
double rcl1_m2312;
int rcl1_p802;
double rcl1_m802;
double rcl1_v2312;
int rcl1_p2309;
double rcl1_m2309;
int rcl1_p2304;
double rcl1_m2304;
int rcl1_p2303;
double rcl1_m2303;
int rcl1_p2302;
double rcl1_m2302;
int rcl1_p2050;
double rcl1_m2050;
int rcl1_p971;
double rcl1_m971;
int rcl1_p967;
double rcl1_m967;
int rcl1_p2268;
int rcl1_m2268;
int rcl1_p2256;
double rcl1_m2256;
int rcl1_p2263;
double rcl1_m2263;
int rcl1_p2254;
double rcl1_m2254;
int rcl1_p2154;
int rcl1_m2154;
int rcl1_p2232;
double rcl1_m2232;
int rcl1_v2154;
int rcl1_p997;
double rcl1_m997;
int rcl1_p2151;
double rcl1_m2151;
int rcl1_p2150;
double rcl1_m2150;
int rcl1_p2149;
double rcl1_m2149;
int rcl1_p1009;
double rcl1_m1009;
int rcl1_p2190;
double rcl1_m2190;
int rcl1_p2189;
double rcl1_m2189;
int rcl1_p2188;
double rcl1_m2188;
int rcl1_p2117;
double rcl1_m2117;
int rcl1_p2116;
double rcl1_m2116;
int rcl1_p2114;
double rcl1_m2114;
int rcl1_p2186;
double rcl1_m2186;
int rcl1_p2184;
double rcl1_m2184;
int rcl1_p2333;
double rcl1_m2333;
int rcl1_p2331;
double rcl1_m2331;
double rcl1_v2333;
double rcl1_v2331;
int rcl1_p2328;
double rcl1_m2328;
double rcl1_v2328;
int rcl1_p2310;
double rcl1_m2310;
int rcl1_p2326;
double rcl1_m2326;
int rcl1_p2307;
double rcl1_m2307;
int rcl1_p2306;
int rcl1_m2306;
int rcl1_p2327;
double rcl1_m2327;
int rcl1_p2325;
double rcl1_m2325;
double rcl1_v2325;
int rcl1_p2219;
double rcl1_m2219;
double rcl1_v802;
int rcl1_p799;
double rcl1_m799;
double rcl1_v2219;
int rcl1_p790;
double rcl1_m790;
int rcl1_p798;
int rcl1_m798;
int rcl1_p2323;
double rcl1_m2323;
int rcl1_p2321;
double rcl1_m2321;
int rcl1_p1668;
double rcl1_m1668;
int rcl1_p1563;
double rcl1_m1563;
int rcl1_p1676;
double rcl1_m1676;
int rcl1_p473;
double rcl1_m473;
int rcl1_p452;
double rcl1_m452;
double rcl1_v1676;
int rcl1_p1675;
double rcl1_m1675;
int rcl1_p583;
double rcl1_m583;
int rcl1_p1692;
double rcl1_m1692;
int rcl1_p578;
int rcl1_m578;
int rcl1_p2322;
double rcl1_m2322;
int rcl1_p1943;
double rcl1_m1943;
int rcl1_p2115;
double rcl1_m2115;
int rcl1_p2127;
double rcl1_m2127;
int rcl1_p808;
double rcl1_m808;
int rcl1_p736;
double rcl1_m736;
double rcl1_v2127;
int rcl1_p2125;
double rcl1_m2125;
int rcl1_p996;
double rcl1_m996;
int rcl1_p2148;
double rcl1_m2148;
int rcl1_p991;
int rcl1_m991;
int rcl1_p2305;
double rcl1_m2305;
int rcl1_p2260;
double rcl1_m2260;
int rcl1_p1666;
double rcl1_m1666;
int rcl1_p2251;
double rcl1_m2251;
int rcl1_p2258;
double rcl1_m2258;
int rcl1_p981;
int rcl1_m981;
int rcl1_p564;
int rcl1_m564;
int rcl1_v981;
int rcl1_p557;
double rcl1_m557;
int rcl1_p556;
double rcl1_m556;
double rcl1_v556;
int rcl1_p544;
int rcl1_m544;
int rcl1_p2112;
double rcl1_m2112;
int rcl1_p973;
int rcl1_m973;
int rcl1_v981;
int rcl1_p962;
double rcl1_m962;
double rcl1_v962;
double rcl1_v557;
int rcl1_p273;
double rcl1_m273;
int rcl1_p961;
double rcl1_m961;
double rcl1_v961;
int rcl1_p947;
int rcl1_m947;
int rcl1_p2300;
double rcl1_m2300;
int rcl1_p1704;
double rcl1_m1704;
int rcl1_p1702;
double rcl1_m1702;
int rcl1_p2279;
double rcl1_m2279;
int rcl1_p2277;
double rcl1_m2277;
int rcl1_p1011;
int rcl1_m1011;
double rcl1_v2279;
double rcl1_v2277;
int rcl1_p943;
int rcl1_m943;
int rcl1_p926;
double rcl1_m926;
int rcl1_p786;
double rcl1_m786;
int rcl1_p925;
double rcl1_m925;
int rcl1_p920;
double rcl1_m920;
int rcl1_p782;
double rcl1_m782;
int rcl1_p919;
double rcl1_m919;
int rcl1_p931;
int rcl1_m931;
int rcl1_p796;
int rcl1_m796;
int rcl1_p775;
double rcl1_m775;
int rcl1_p776;
double rcl1_m776;
int rcl1_p771;
double rcl1_m771;
double rcl1_v771;
int rcl1_p763;
double rcl1_m763;
int rcl1_p930;
int rcl1_m930;
int rcl1_p909;
double rcl1_m909;
int rcl1_p910;
double rcl1_m910;
int rcl1_p904;
double rcl1_m904;
double rcl1_v904;
int rcl1_p896;
double rcl1_m896;
int rcl1_p934;
int rcl1_m934;
int rcl1_p797;
int rcl1_m797;
int rcl1_v797;
double rcl1_v763;
int rcl1_p753;
int rcl1_m753;
int rcl1_v544;
int rcl1_p468;
int rcl1_m468;
int rcl1_p342;
double rcl1_m342;
int rcl1_p15;
double_or_symbol rcl1_m15;
int rcl1_p467;
int rcl1_m467;
int rcl1_p462;
double rcl1_m462;
int rcl1_p465;
double rcl1_m465;
int rcl1_p464;
int rcl1_m464;
int rcl1_v464;
int rcl1_p457;
int rcl1_m457;
int rcl1_p456;
int rcl1_m456;
int rcl1_p349;
double rcl1_m349;
int rcl1_p351;
double rcl1_m351;
int rcl1_p350;
int rcl1_m350;
int rcl1_v350;
int rcl1_p344;
int rcl1_m344;
int rcl1_v947;
int rcl1_p752;
int rcl1_m752;
int rcl1_p42;
double_or_symbol rcl1_m42;
int rcl1_p624;
double rcl1_m624;
int rcl1_p751;
int rcl1_m751;
int rcl1_p746;
double rcl1_m746;
int rcl1_p749;
double rcl1_m749;
int rcl1_p748;
int rcl1_m748;
int rcl1_v748;
int rcl1_p741;
int rcl1_m741;
int rcl1_p631;
double rcl1_m631;
int rcl1_p633;
double rcl1_m633;
int rcl1_p632;
int rcl1_m632;
int rcl1_p740;
int rcl1_m740;
int rcl1_v632;
int rcl1_p626;
int rcl1_m626;
int rcl1_p933;
int rcl1_m933;
int rcl1_v933;
double rcl1_v896;
int rcl1_p884;
int rcl1_m884;
int rcl1_v544;
int rcl1_p543;
int rcl1_m543;
int rcl1_p361;
double rcl1_m361;
int rcl1_p27;
double_or_symbol rcl1_m27;
int rcl1_p542;
int rcl1_m542;
int rcl1_p537;
double rcl1_m537;
int rcl1_p540;
double rcl1_m540;
int rcl1_p539;
int rcl1_m539;
int rcl1_v539;
int rcl1_p532;
int rcl1_m532;
int rcl1_p531;
int rcl1_m531;
int rcl1_p368;
double rcl1_m368;
int rcl1_p370;
double rcl1_m370;
int rcl1_p369;
int rcl1_m369;
int rcl1_v369;
int rcl1_p363;
int rcl1_m363;
int rcl1_v947;
int rcl1_p883;
int rcl1_m883;
int rcl1_p54;
double_or_symbol rcl1_m54;
int rcl1_p643;
double rcl1_m643;
int rcl1_p882;
int rcl1_m882;
int rcl1_p873;
double rcl1_m873;
int rcl1_p878;
double rcl1_m878;
int rcl1_p877;
int rcl1_m877;
int rcl1_v877;
int rcl1_p868;
int rcl1_m868;
int rcl1_p652;
double rcl1_m652;
int rcl1_p654;
double rcl1_m654;
int rcl1_p653;
int rcl1_m653;
int rcl1_p867;
int rcl1_m867;
int rcl1_v653;
int rcl1_p647;
int rcl1_m647;
int rcl1_p2171;
double rcl1_m2171;
int rcl1_p2169;
double rcl1_m2169;
int rcl1_p2337;
double rcl1_m2337;
double rcl1_v2337;
int rcl1_p2164;
double rcl1_m2164;
int rcl1_p2162;
double rcl1_m2162;
double rcl1_v2164;
double rcl1_v2162;
int rcl1_p2159;
double rcl1_m2159;
double rcl1_v1704;
double rcl1_v1702;
int rcl1_p587;
int rcl1_m587;
int rcl1_v587;
double rcl1_v583;
int rcl1_p572;
int rcl1_m572;
double rcl1_v2159;
int rcl1_p2126;
double rcl1_m2126;
int rcl1_p1673;
double rcl1_m1673;
int rcl1_p1672;
int rcl1_m1672;
int rcl1_p1653;
double rcl1_m1653;
int rcl1_p1538;
double rcl1_m1538;
int rcl1_p1537;
double rcl1_m1537;
double rcl1_v1537;
int rcl1_p496;
int rcl1_m496;
int rcl1_v496;
int rcl1_p495;
int rcl1_m495;
int rcl1_p492;
double rcl1_m492;
int rcl1_p494;
double rcl1_m494;
int rcl1_p493;
int rcl1_m493;
int rcl1_v493;
int rcl1_p487;
int rcl1_m487;
int rcl1_p486;
int rcl1_m486;
int rcl1_p483;
double rcl1_m483;
int rcl1_p485;
double rcl1_m485;
int rcl1_p484;
int rcl1_m484;
int rcl1_v484;
int rcl1_p478;
int rcl1_m478;
int rcl1_p1559;
double rcl1_m1559;
int rcl1_p1558;
double rcl1_m1558;
double rcl1_v1558;
int rcl1_p517;
int rcl1_m517;
int rcl1_v517;
int rcl1_p516;
int rcl1_m516;
double rcl1_v1559;
double rcl1_v1538;
int rcl1_p355;
double rcl1_m355;
int rcl1_p513;
double rcl1_m513;
int rcl1_p515;
double rcl1_m515;
int rcl1_p514;
int rcl1_m514;
int rcl1_v514;
int rcl1_p508;
int rcl1_m508;
int rcl1_p2091;
double rcl1_m2091;
double rcl1_v473;
int rcl1_p470;
double rcl1_m470;
int rcl1_p469;
int rcl1_m469;
int rcl1_p450;
double rcl1_m450;
int rcl1_p416;
double rcl1_m416;
double rcl1_v416;
int rcl1_p408;
double rcl1_m408;
int rcl1_p407;
double rcl1_m407;
double rcl1_v407;
int rcl1_p395;
int rcl1_m395;
int rcl1_v395;
int rcl1_p394;
int rcl1_m394;
int rcl1_p391;
double rcl1_m391;
int rcl1_p393;
double rcl1_m393;
int rcl1_p392;
int rcl1_m392;
int rcl1_v392;
int rcl1_p386;
int rcl1_m386;
int rcl1_p385;
int rcl1_m385;
int rcl1_p382;
double rcl1_m382;
int rcl1_p384;
double rcl1_m384;
int rcl1_p383;
int rcl1_m383;
int rcl1_v383;
int rcl1_p377;
int rcl1_m377;
int rcl1_p448;
double rcl1_m448;
double rcl1_v448;
int rcl1_p440;
double rcl1_m440;
int rcl1_p439;
double rcl1_m439;
double rcl1_v439;
int rcl1_p427;
int rcl1_m427;
int rcl1_v427;
int rcl1_p426;
int rcl1_m426;
double rcl1_v440;
double rcl1_v408;
int rcl1_p334;
double rcl1_m334;
int rcl1_p423;
double rcl1_m423;
int rcl1_p425;
double rcl1_m425;
int rcl1_p424;
int rcl1_m424;
int rcl1_v424;
int rcl1_p418;
int rcl1_m418;
int rcl1_p371;
int rcl1_m371;
int rcl1_p314;
double rcl1_m314;
int rcl1_p329;
double rcl1_m329;
int rcl1_p328;
int rcl1_m328;
int rcl1_v328;
int rcl1_p309;
int rcl1_m309;
int rcl1_p306;
int rcl1_m306;
double rcl1_v808;
int rcl1_p804;
double rcl1_m804;
int rcl1_p803;
int rcl1_m803;
int rcl1_p734;
double rcl1_m734;
int rcl1_p700;
double rcl1_m700;
double rcl1_v700;
int rcl1_p692;
double rcl1_m692;
int rcl1_p691;
double rcl1_m691;
double rcl1_v691;
int rcl1_p679;
int rcl1_m679;
int rcl1_v679;
int rcl1_p678;
int rcl1_m678;
int rcl1_p675;
double rcl1_m675;
int rcl1_p677;
double rcl1_m677;
int rcl1_p676;
int rcl1_m676;
int rcl1_v676;
int rcl1_p670;
int rcl1_m670;
int rcl1_p669;
int rcl1_m669;
int rcl1_p666;
double rcl1_m666;
int rcl1_p668;
double rcl1_m668;
int rcl1_p667;
int rcl1_m667;
int rcl1_v667;
int rcl1_p661;
int rcl1_m661;
int rcl1_p732;
double rcl1_m732;
double rcl1_v732;
int rcl1_p724;
double rcl1_m724;
int rcl1_p723;
double rcl1_m723;
double rcl1_v723;
int rcl1_p711;
int rcl1_m711;
int rcl1_v711;
int rcl1_p710;
int rcl1_m710;
double rcl1_v724;
double rcl1_v692;
int rcl1_p616;
double rcl1_m616;
int rcl1_p707;
double rcl1_m707;
int rcl1_p709;
double rcl1_m709;
int rcl1_p708;
int rcl1_m708;
int rcl1_v708;
int rcl1_p702;
int rcl1_m702;
int rcl1_p2123;
double rcl1_m2123;
int rcl1_p2122;
int rcl1_m2122;
int rcl1_p2099;
double rcl1_m2099;
int rcl1_p1918;
double rcl1_m1918;
int rcl1_p1917;
double rcl1_m1917;
double rcl1_v1917;
int rcl1_p832;
int rcl1_m832;
int rcl1_v832;
int rcl1_p831;
int rcl1_m831;
int rcl1_p828;
double rcl1_m828;
int rcl1_p830;
double rcl1_m830;
int rcl1_p829;
int rcl1_m829;
int rcl1_v829;
int rcl1_p823;
int rcl1_m823;
int rcl1_p822;
int rcl1_m822;
int rcl1_p819;
double rcl1_m819;
int rcl1_p821;
double rcl1_m821;
int rcl1_p820;
int rcl1_m820;
int rcl1_v820;
int rcl1_p814;
int rcl1_m814;
int rcl1_p1939;
double rcl1_m1939;
int rcl1_p1938;
double rcl1_m1938;
double rcl1_v1938;
int rcl1_p853;
int rcl1_m853;
int rcl1_v853;
int rcl1_p852;
int rcl1_m852;
double rcl1_v1939;
double rcl1_v1918;
int rcl1_p637;
double rcl1_m637;
int rcl1_p849;
double rcl1_m849;
int rcl1_p851;
double rcl1_m851;
int rcl1_p850;
int rcl1_m850;
int rcl1_v850;
int rcl1_p844;
int rcl1_m844;
double rcl1_v2171;
double rcl1_v2169;
int rcl1_p1005;
int rcl1_m1005;
int rcl1_v1005;
double rcl1_v996;
int rcl1_p984;
int rcl1_m984;
int rcl1_p610;
int rcl1_m610;
int rcl1_v984;
int rcl1_v610;
int rcl1_v309;
int rcl1_v306;
double rcl1_v643;
double rcl1_v361;
double rcl1_v643;
double rcl1_v557;
double rcl1_v643;
double rcl1_v355;
double rcl1_v643;
double rcl1_v1559;
double rcl1_v643;
double rcl1_v1538;
double rcl1_v962;
double rcl1_v361;
double rcl1_v962;
double rcl1_v355;
double rcl1_v962;
double rcl1_v1559;
double rcl1_v962;
double rcl1_v1538;
double rcl1_v637;
double rcl1_v361;
double rcl1_v637;
double rcl1_v557;
double rcl1_v637;
double rcl1_v355;
double rcl1_v637;
double rcl1_v1559;
double rcl1_v637;
double rcl1_v1538;
double rcl1_v1939;
double rcl1_v361;
double rcl1_v1939;
double rcl1_v557;
double rcl1_v1939;
double rcl1_v355;
double rcl1_v1939;
double rcl1_v1559;
double rcl1_v1939;
double rcl1_v1538;
double rcl1_v1918;
double rcl1_v361;
double rcl1_v1918;
double rcl1_v557;
double rcl1_v1918;
double rcl1_v355;
double rcl1_v1918;
double rcl1_v1559;
double rcl1_v1918;
double rcl1_v1538;
double rcl1_v624;
double rcl1_v342;
double rcl1_v624;
double rcl1_v557;
double rcl1_v624;
double rcl1_v334;
double rcl1_v624;
double rcl1_v440;
double rcl1_v624;
double rcl1_v408;
double rcl1_v962;
double rcl1_v342;
double rcl1_v962;
double rcl1_v334;
double rcl1_v962;
double rcl1_v440;
double rcl1_v962;
double rcl1_v408;
double rcl1_v616;
double rcl1_v342;
double rcl1_v616;
double rcl1_v557;
double rcl1_v616;
double rcl1_v334;
double rcl1_v616;
double rcl1_v440;
double rcl1_v616;
double rcl1_v408;
double rcl1_v724;
double rcl1_v342;
double rcl1_v724;
double rcl1_v557;
double rcl1_v724;
double rcl1_v334;
double rcl1_v724;
double rcl1_v440;
double rcl1_v724;
double rcl1_v408;
double rcl1_v692;
double rcl1_v342;
double rcl1_v692;
double rcl1_v557;
double rcl1_v692;
double rcl1_v334;
double rcl1_v692;
double rcl1_v440;
double rcl1_v692;
double rcl1_v408;
int rcl1_v868;
int rcl1_v741;
int rcl1_v532;
int rcl1_v457;
static double rcl1_f645(){if (rcl1_p645) return rcl1_m645; else {rcl1_p645=T;return rcl1_m645=error("Non-numeric argument to MAX");}}
static int rcl1_f2311(){if (rcl1_p2311) return rcl1_m2311; else {rcl1_p2311=T;return rcl1_m2311=(rcl1_v2352==0.0);}}
static double rcl1_f875(){if (rcl1_p875) return rcl1_m875; else {rcl1_p875=T;return rcl1_m875=error("Argument X not of type FLOAT");}}
static double rcl1_f880(){if (rcl1_p880) return rcl1_m880; else {rcl1_p880=T;return rcl1_m880=error("Argument X not of type REAL");}}
static double rcl1_f928(){if (rcl1_p928) return rcl1_m928; else {rcl1_p928=T;return rcl1_m928=error("SLOT-VALUE called on non-instance");}}
static double rcl1_f2314(){if (rcl1_p2314) return rcl1_m2314; else {rcl1_p2314=T;return rcl1_m2314=(rcl1_v2352*rcl1_v2360);}}
static double rcl1_f2313(){if (rcl1_p2313) return rcl1_m2313; else {rcl1_p2313=T;return rcl1_m2313=(rcl1_v2350*rcl1_v2358);}}
static double rcl1_f1999(){if (rcl1_p1999) return rcl1_m1999; else {rcl1_p1999=T;return rcl1_m1999=((rcl1_f2314()+rcl1_f2313())-rcl1_v2348);}}
static int rcl1_f911(){if (rcl1_p911) return rcl1_m911; else {rcl1_p911=T;return rcl1_m911=(fabs((rcl1_f1999()-(0.0)))<rcl1_v2340);}}
static int rcl1_f891(){if (rcl1_p891) return rcl1_m891; else {rcl1_p891=T;return rcl1_m891=(rcl1_f1999()>(0.0));}}
static int rcl1_f890(){if (rcl1_p890) return rcl1_m890; else {rcl1_p890=T;return rcl1_m890=(rcl1_f891()?NIL:T);}}
static double rcl1_f2312(){if (rcl1_p2312) return rcl1_m2312; else {rcl1_p2312=T;return rcl1_m2312=(rcl1_v2348-rcl1_f2314()-rcl1_f2313());}}
static double rcl1_f802(){if (rcl1_p802) return rcl1_m802; else {rcl1_p802=T;return rcl1_m802=((-2.0)*rcl1_v2350*rcl1_f2312());}}
static double rcl1_f2309(){if (rcl1_p2309) return rcl1_m2309; else {rcl1_p2309=T;return rcl1_m2309=((rcl1_v2312=rcl1_f2312()),(rcl1_v2312*rcl1_v2312));}}
static double rcl1_f2304(){if (rcl1_p2304) return rcl1_m2304; else {rcl1_p2304=T;return rcl1_m2304=(rcl1_v2352*rcl1_v2358);}}
static double rcl1_f2303(){if (rcl1_p2303) return rcl1_m2303; else {rcl1_p2303=T;return rcl1_m2303=(rcl1_v2350*rcl1_v2360);}}
static double rcl1_f2302(){if (rcl1_p2302) return rcl1_m2302; else {rcl1_p2302=T;return rcl1_m2302=(rcl1_f2304()-rcl1_f2303());}}
static double rcl1_f2050(){if (rcl1_p2050) return rcl1_m2050; else {rcl1_p2050=T;return rcl1_m2050=atan2((rcl1_v2358-rcl1_v2344),(rcl1_v2360-rcl1_v2346));}}
static double rcl1_f971(){if (rcl1_p971) return rcl1_m971; else {rcl1_p971=T;return rcl1_m971=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rcl1_f967(){if (rcl1_p967) return rcl1_m967; else {rcl1_p967=T;return rcl1_m967=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static int rcl1_f2268(){if (rcl1_p2268) return rcl1_m2268; else {rcl1_p2268=T;return rcl1_m2268=(rcl1_v2350>0.0);}}
static double rcl1_f2256(){if (rcl1_p2256) return rcl1_m2256; else {rcl1_p2256=T;return rcl1_m2256=(rcl1_f2268()?(rcl1_f2303()-rcl1_f2304()):rcl1_f2302());}}
static double rcl1_f2263(){if (rcl1_p2263) return rcl1_m2263; else {rcl1_p2263=T;return rcl1_m2263=(rcl1_f2268()?(-rcl1_v2352):rcl1_v2352);}}
static double rcl1_f2254(){if (rcl1_p2254) return rcl1_m2254; else {rcl1_p2254=T;return rcl1_m2254=((rcl1_v2348*rcl1_f2263())-(rcl1_v2350*rcl1_f2256()));}}
static int rcl1_f2154(){if (rcl1_p2154) return rcl1_m2154; else {rcl1_p2154=T;return rcl1_m2154=(rcl1_v2350==0.0);}}
static double rcl1_f2232(){if (rcl1_p2232) return rcl1_m2232; else {rcl1_p2232=T;return rcl1_m2232=(rcl1_v2348/rcl1_v2350);}}
static double rcl1_f997(){if (rcl1_p997) return rcl1_m997; else {rcl1_p997=T;return rcl1_m997=((rcl1_v2154=rcl1_f2154()),((rcl1_v2352*(rcl1_v2154?(rcl1_v2348/rcl1_v2352):(0.0)))+(rcl1_v2350*(rcl1_v2154?(0.0):rcl1_f2232()))));}}
static double rcl1_f2151(){if (rcl1_p2151) return rcl1_m2151; else {rcl1_p2151=T;return rcl1_m2151=(rcl1_v2352*rcl1_v2346);}}
static double rcl1_f2150(){if (rcl1_p2150) return rcl1_m2150; else {rcl1_p2150=T;return rcl1_m2150=(rcl1_v2350*rcl1_v2344);}}
static double rcl1_f2149(){if (rcl1_p2149) return rcl1_m2149; else {rcl1_p2149=T;return rcl1_m2149=(rcl1_f2151()+rcl1_f2150());}}
static double rcl1_f1009(){if (rcl1_p1009) return rcl1_m1009; else {rcl1_p1009=T;return rcl1_m1009=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static double rcl1_f2190(){if (rcl1_p2190) return rcl1_m2190; else {rcl1_p2190=T;return rcl1_m2190=(rcl1_v2352*rcl1_v2344);}}
static double rcl1_f2189(){if (rcl1_p2189) return rcl1_m2189; else {rcl1_p2189=T;return rcl1_m2189=(rcl1_v2350*rcl1_v2346);}}
static double rcl1_f2188(){if (rcl1_p2188) return rcl1_m2188; else {rcl1_p2188=T;return rcl1_m2188=(rcl1_f2190()-rcl1_f2189());}}
static double rcl1_f2117(){if (rcl1_p2117) return rcl1_m2117; else {rcl1_p2117=T;return rcl1_m2117=(rcl1_f2268()?(rcl1_f2189()-rcl1_f2190()):rcl1_f2188());}}
static double rcl1_f2116(){if (rcl1_p2116) return rcl1_m2116; else {rcl1_p2116=T;return rcl1_m2116=(rcl1_v2350*rcl1_f2117());}}
static double rcl1_f2114(){if (rcl1_p2114) return rcl1_m2114; else {rcl1_p2114=T;return rcl1_m2114=(rcl1_v2352*rcl1_f2117());}}
static double rcl1_f2186(){if (rcl1_p2186) return rcl1_m2186; else {rcl1_p2186=T;return rcl1_m2186=(rcl1_v2350*rcl1_f2188());}}
static double rcl1_f2184(){if (rcl1_p2184) return rcl1_m2184; else {rcl1_p2184=T;return rcl1_m2184=(rcl1_v2352*rcl1_f2188());}}
static double rcl1_f2333(){if (rcl1_p2333) return rcl1_m2333; else {rcl1_p2333=T;return rcl1_m2333=(rcl1_v2360-rcl1_v2356);}}
static double rcl1_f2331(){if (rcl1_p2331) return rcl1_m2331; else {rcl1_p2331=T;return rcl1_m2331=(rcl1_v2358-rcl1_v2354);}}
static double rcl1_f2328(){if (rcl1_p2328) return rcl1_m2328; else {rcl1_p2328=T;return rcl1_m2328=((rcl1_v2333=rcl1_f2333()),(rcl1_v2331=rcl1_f2331()),sqrt(((rcl1_v2333*rcl1_v2333)+(rcl1_v2331*rcl1_v2331))));}}
static double rcl1_f2310(){if (rcl1_p2310) return rcl1_m2310; else {rcl1_p2310=T;return rcl1_m2310=((rcl1_v2328=rcl1_f2328()),(rcl1_v2328*rcl1_v2328));}}
static double rcl1_f2326(){if (rcl1_p2326) return rcl1_m2326; else {rcl1_p2326=T;return rcl1_m2326=(rcl1_v2350*rcl1_v2350);}}
static double rcl1_f2307(){if (rcl1_p2307) return rcl1_m2307; else {rcl1_p2307=T;return rcl1_m2307=(rcl1_f2310()-(rcl1_f2309()/rcl1_f2326()));}}
static int rcl1_f2306(){if (rcl1_p2306) return rcl1_m2306; else {rcl1_p2306=T;return rcl1_m2306=(rcl1_f2307()<0.0);}}
static double rcl1_f2327(){if (rcl1_p2327) return rcl1_m2327; else {rcl1_p2327=T;return rcl1_m2327=(rcl1_v2352*rcl1_v2352);}}
static double rcl1_f2325(){if (rcl1_p2325) return rcl1_m2325; else {rcl1_p2325=T;return rcl1_m2325=(rcl1_f2327()+rcl1_f2326());}}
static double rcl1_f2219(){if (rcl1_p2219) return rcl1_m2219; else {rcl1_p2219=T;return rcl1_m2219=((rcl1_v2325=rcl1_f2325()),(rcl1_v2325+rcl1_v2325));}}
static double rcl1_f799(){if (rcl1_p799) return rcl1_m799; else {rcl1_p799=T;return rcl1_m799=((rcl1_v802=rcl1_f802()),((rcl1_v802*rcl1_v802)-((4.0)*rcl1_f2325()*(rcl1_f2309()-(rcl1_f2327()*rcl1_f2310())))));}}
static double rcl1_f790(){if (rcl1_p790) return rcl1_m790; else {rcl1_p790=T;return rcl1_m790=((rcl1_v2219=rcl1_f2219()),((((-rcl1_f802())/rcl1_v2219)+(sqrt(rcl1_f799())/rcl1_v2219))+rcl1_v2358));}}
static int rcl1_f798(){if (rcl1_p798) return rcl1_m798; else {rcl1_p798=T;return rcl1_m798=(rcl1_f799()<0.0);}}
static double rcl1_f2323(){if (rcl1_p2323) return rcl1_m2323; else {rcl1_p2323=T;return rcl1_m2323=(rcl1_f2328()*sqrt(rcl1_f2325()));}}
static double rcl1_f2321(){if (rcl1_p2321) return rcl1_m2321; else {rcl1_p2321=T;return rcl1_m2321=(rcl1_v2348-rcl1_f2323());}}
static double rcl1_f1668(){if (rcl1_p1668) return rcl1_m1668; else {rcl1_p1668=T;return rcl1_m1668=((rcl1_f2321()*rcl1_f2263())-rcl1_f2116());}}
static double rcl1_f1563(){if (rcl1_p1563) return rcl1_m1563; else {rcl1_p1563=T;return rcl1_m1563=((rcl1_f2321()/rcl1_v2350)-rcl1_v2344);}}
static double rcl1_f1676(){if (rcl1_p1676) return rcl1_m1676; else {rcl1_p1676=T;return rcl1_m1676=(rcl1_f2321()-rcl1_f2151()-rcl1_f2150());}}
static double rcl1_f473(){if (rcl1_p473) return rcl1_m473; else {rcl1_p473=T;return rcl1_m473=((-2.0)*rcl1_v2350*rcl1_f1676());}}
static double rcl1_f452(){if (rcl1_p452) return rcl1_m452; else {rcl1_p452=T;return rcl1_m452=((-rcl1_f473())/rcl1_f2219());}}
static double rcl1_f1675(){if (rcl1_p1675) return rcl1_m1675; else {rcl1_p1675=T;return rcl1_m1675=((rcl1_v1676=rcl1_f1676()),(rcl1_v1676*rcl1_v1676));}}
static double rcl1_f583(){if (rcl1_p583) return rcl1_m583; else {rcl1_p583=T;return rcl1_m583=(rcl1_f997()-rcl1_f2321());}}
static double rcl1_f1692(){if (rcl1_p1692) return rcl1_m1692; else {rcl1_p1692=T;return rcl1_m1692=(rcl1_f2149()-rcl1_f2321());}}
static int rcl1_f578(){if (rcl1_p578) return rcl1_m578; else {rcl1_p578=T;return rcl1_m578=(rcl1_f1692()>(0.0));}}
static double rcl1_f2322(){if (rcl1_p2322) return rcl1_m2322; else {rcl1_p2322=T;return rcl1_m2322=(rcl1_v2348+rcl1_f2323());}}
static double rcl1_f1943(){if (rcl1_p1943) return rcl1_m1943; else {rcl1_p1943=T;return rcl1_m1943=((rcl1_f2322()/rcl1_v2350)-rcl1_v2344);}}
static double rcl1_f2115(){if (rcl1_p2115) return rcl1_m2115; else {rcl1_p2115=T;return rcl1_m2115=((rcl1_f2322()*rcl1_f2263())-rcl1_f2116());}}
static double rcl1_f2127(){if (rcl1_p2127) return rcl1_m2127; else {rcl1_p2127=T;return rcl1_m2127=(rcl1_f2322()-rcl1_f2151()-rcl1_f2150());}}
static double rcl1_f808(){if (rcl1_p808) return rcl1_m808; else {rcl1_p808=T;return rcl1_m808=((-2.0)*rcl1_v2350*rcl1_f2127());}}
static double rcl1_f736(){if (rcl1_p736) return rcl1_m736; else {rcl1_p736=T;return rcl1_m736=((-rcl1_f808())/rcl1_f2219());}}
static double rcl1_f2125(){if (rcl1_p2125) return rcl1_m2125; else {rcl1_p2125=T;return rcl1_m2125=((rcl1_v2127=rcl1_f2127()),(rcl1_v2127*rcl1_v2127));}}
static double rcl1_f996(){if (rcl1_p996) return rcl1_m996; else {rcl1_p996=T;return rcl1_m996=(rcl1_f997()-rcl1_f2322());}}
static double rcl1_f2148(){if (rcl1_p2148) return rcl1_m2148; else {rcl1_p2148=T;return rcl1_m2148=(rcl1_f2149()-rcl1_f2322());}}
static int rcl1_f991(){if (rcl1_p991) return rcl1_m991; else {rcl1_p991=T;return rcl1_m991=(rcl1_f2148()>(0.0));}}
static double rcl1_f2305(){if (rcl1_p2305) return rcl1_m2305; else {rcl1_p2305=T;return rcl1_m2305=(-rcl1_v2350);}}
static double rcl1_f2260(){if (rcl1_p2260) return rcl1_m2260; else {rcl1_p2260=T;return rcl1_m2260=(rcl1_f2268()?rcl1_v2350:rcl1_f2305());}}
static double rcl1_f1666(){if (rcl1_p1666) return rcl1_m1666; else {rcl1_p1666=T;return rcl1_m1666=(rcl1_f2114()-(rcl1_f2321()*rcl1_f2260()));}}
static double rcl1_f2251(){if (rcl1_p2251) return rcl1_m2251; else {rcl1_p2251=T;return rcl1_m2251=((rcl1_v2352*rcl1_f2256())-(rcl1_v2348*rcl1_f2260()));}}
static double rcl1_f2258(){if (rcl1_p2258) return rcl1_m2258; else {rcl1_p2258=T;return rcl1_m2258=((rcl1_v2352*rcl1_f2263())-(rcl1_v2350*rcl1_f2260()));}}
static int rcl1_f981(){if (rcl1_p981) return rcl1_m981; else {rcl1_p981=T;return rcl1_m981=(fabs((rcl1_f2258()-(0.0)))<rcl1_v2340);}}
static int rcl1_f564(){if (rcl1_p564) return rcl1_m564; else {rcl1_p564=T;return rcl1_m564=(rcl1_f981()?((fabs((rcl1_f1668()-(0.0)))<rcl1_v2340)?(fabs((rcl1_f1666()-(0.0)))<rcl1_v2340):NIL):T);}}
static double rcl1_f557(){if (rcl1_p557) return rcl1_m557; else {rcl1_p557=T;return rcl1_m557=((rcl1_v981=rcl1_f981()),normalize_rotation((atan2(((rcl1_v981?rcl1_f971():(rcl1_f1666()/rcl1_f2258()))-rcl1_v2344),((rcl1_v981?rcl1_f967():(rcl1_f1668()/rcl1_f2258()))-rcl1_v2346))-rcl1_f2050())));}}
static double rcl1_f556(){if (rcl1_p556) return rcl1_m556; else {rcl1_p556=T;return rcl1_m556=normalize_rotation(rcl1_f557());}}
static int rcl1_f544(){if (rcl1_p544) return rcl1_m544; else {rcl1_p544=T;return rcl1_m544=((rcl1_v556=rcl1_f556()),((fabs((rcl1_v556-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v556-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v556-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static double rcl1_f2112(){if (rcl1_p2112) return rcl1_m2112; else {rcl1_p2112=T;return rcl1_m2112=(rcl1_f2114()-(rcl1_f2322()*rcl1_f2260()));}}
static int rcl1_f973(){if (rcl1_p973) return rcl1_m973; else {rcl1_p973=T;return rcl1_m973=(rcl1_f981()?((fabs((rcl1_f2115()-(0.0)))<rcl1_v2340)?(fabs((rcl1_f2112()-(0.0)))<rcl1_v2340):NIL):T);}}
static double rcl1_f962(){if (rcl1_p962) return rcl1_m962; else {rcl1_p962=T;return rcl1_m962=((rcl1_v981=rcl1_f981()),normalize_rotation((atan2(((rcl1_v981?rcl1_f971():(rcl1_f2112()/rcl1_f2258()))-rcl1_v2344),((rcl1_v981?rcl1_f967():(rcl1_f2115()/rcl1_f2258()))-rcl1_v2346))-rcl1_f2050())));}}
static double rcl1_f273(){if (rcl1_p273) return rcl1_m273; else {rcl1_p273=T;return rcl1_m273=((rcl1_v962=rcl1_f962()),(rcl1_v557=rcl1_f557()),((rcl1_v962>rcl1_v557)?rcl1_v962:rcl1_v557));}}
static double rcl1_f961(){if (rcl1_p961) return rcl1_m961; else {rcl1_p961=T;return rcl1_m961=normalize_rotation(rcl1_f962());}}
static int rcl1_f947(){if (rcl1_p947) return rcl1_m947; else {rcl1_p947=T;return rcl1_m947=((rcl1_v961=rcl1_f961()),((fabs((rcl1_v961-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v961-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v961-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static double rcl1_f2300(){if (rcl1_p2300) return rcl1_m2300; else {rcl1_p2300=T;return rcl1_m2300=(rcl1_f2327()-(rcl1_v2350*rcl1_f2305()));}}
static double rcl1_f1704(){if (rcl1_p1704) return rcl1_m1704; else {rcl1_p1704=T;return rcl1_m1704=((((rcl1_f2321()*rcl1_v2352)-rcl1_f2186())/rcl1_f2300())-rcl1_v2346);}}
static double rcl1_f1702(){if (rcl1_p1702) return rcl1_m1702; else {rcl1_p1702=T;return rcl1_m1702=(((rcl1_f2184()-(rcl1_f2321()*rcl1_f2305()))/rcl1_f2300())-rcl1_v2344);}}
static double rcl1_f2279(){if (rcl1_p2279) return rcl1_m2279; else {rcl1_p2279=T;return rcl1_m2279=((((rcl1_v2348*rcl1_v2352)-(rcl1_v2350*rcl1_f2302()))/rcl1_f2300())-rcl1_v2360);}}
static double rcl1_f2277(){if (rcl1_p2277) return rcl1_m2277; else {rcl1_p2277=T;return rcl1_m2277=((((rcl1_v2352*rcl1_f2302())-(rcl1_v2348*rcl1_f2305()))/rcl1_f2300())-rcl1_v2358);}}
static int rcl1_f1011(){if (rcl1_p1011) return rcl1_m1011; else {rcl1_p1011=T;return rcl1_m1011=(fabs((rcl1_f2300()-(0.0)))<rcl1_v2340);}}
static int rcl1_f943(){if (rcl1_p943) return rcl1_m943; else {rcl1_p943=T;return rcl1_m943=(fabs(((rcl1_f1011()?rcl1_f1009():((rcl1_v2279=rcl1_f2279()),(rcl1_v2277=rcl1_f2277()),sqrt(((rcl1_v2279*rcl1_v2279)+(rcl1_v2277*rcl1_v2277)))))-rcl1_f2328()))<rcl1_v2340);}}
static double rcl1_f926(){if (rcl1_p926) return rcl1_m926; else {rcl1_p926=T;return rcl1_m926=(rcl1_f943()?(rcl1_f981()?rcl1_f928():(rcl1_f2254()/rcl1_f2258())):rcl1_f928());}}
static double rcl1_f786(){if (rcl1_p786) return rcl1_m786; else {rcl1_p786=T;return rcl1_m786=(rcl1_f798()?rcl1_f926():((rcl1_v2348-(rcl1_v2350*rcl1_f790()))/rcl1_v2352));}}
static double rcl1_f925(){if (rcl1_p925) return rcl1_m925; else {rcl1_p925=T;return rcl1_m925=(rcl1_f2306()?rcl1_f926():(sqrt(rcl1_f2307())+rcl1_v2360));}}
static double rcl1_f920(){if (rcl1_p920) return rcl1_m920; else {rcl1_p920=T;return rcl1_m920=(rcl1_f943()?(rcl1_f981()?rcl1_f928():(rcl1_f2251()/rcl1_f2258())):rcl1_f928());}}
static double rcl1_f782(){if (rcl1_p782) return rcl1_m782; else {rcl1_p782=T;return rcl1_m782=(rcl1_f798()?rcl1_f920():rcl1_f790());}}
static double rcl1_f919(){if (rcl1_p919) return rcl1_m919; else {rcl1_p919=T;return rcl1_m919=(rcl1_f2306()?rcl1_f920():rcl1_f2232());}}
static int rcl1_f931(){if (rcl1_p931) return rcl1_m931; else {rcl1_p931=T;return rcl1_m931=(rcl1_f943()?(rcl1_f981()?NIL:T):NIL);}}
static int rcl1_f796(){if (rcl1_p796) return rcl1_m796; else {rcl1_p796=T;return rcl1_m796=(rcl1_f798()?rcl1_f931():T);}}
static double rcl1_f775(){if (rcl1_p775) return rcl1_m775; else {rcl1_p775=T;return rcl1_m775=(rcl1_f796()?rcl1_f782():rcl1_f971());}}
static double rcl1_f776(){if (rcl1_p776) return rcl1_m776; else {rcl1_p776=T;return rcl1_m776=(rcl1_f796()?rcl1_f786():rcl1_f967());}}
static double rcl1_f771(){if (rcl1_p771) return rcl1_m771; else {rcl1_p771=T;return rcl1_m771=(atan2((rcl1_f775()-rcl1_v2344),(rcl1_f776()-rcl1_v2346))+(-1.5707963267948966));}}
static double rcl1_f763(){if (rcl1_p763) return rcl1_m763; else {rcl1_p763=T;return rcl1_m763=((rcl1_v771=rcl1_f771()),(((rcl1_v2352*(rcl1_f776()+cos(rcl1_v771)))+(rcl1_v2350*(rcl1_f775()+sin(rcl1_v771))))-rcl1_v2348));}}
static int rcl1_f930(){if (rcl1_p930) return rcl1_m930; else {rcl1_p930=T;return rcl1_m930=(rcl1_f2306()?rcl1_f931():T);}}
static double rcl1_f909(){if (rcl1_p909) return rcl1_m909; else {rcl1_p909=T;return rcl1_m909=(rcl1_f930()?rcl1_f919():rcl1_f971());}}
static double rcl1_f910(){if (rcl1_p910) return rcl1_m910; else {rcl1_p910=T;return rcl1_m910=(rcl1_f930()?rcl1_f925():rcl1_f967());}}
static double rcl1_f904(){if (rcl1_p904) return rcl1_m904; else {rcl1_p904=T;return rcl1_m904=(atan2((rcl1_f909()-rcl1_v2344),(rcl1_f910()-rcl1_v2346))+(-1.5707963267948966));}}
static double rcl1_f896(){if (rcl1_p896) return rcl1_m896; else {rcl1_p896=T;return rcl1_m896=((rcl1_v904=rcl1_f904()),(((rcl1_v2352*(rcl1_f910()+cos(rcl1_v904)))+(rcl1_v2350*(rcl1_f909()+sin(rcl1_v904))))-rcl1_v2348));}}
static int rcl1_f934(){if (rcl1_p934) return rcl1_m934; else {rcl1_p934=T;return rcl1_m934=(rcl1_f943()?(rcl1_f981()?((fabs((rcl1_f2254()-(0.0)))<rcl1_v2340)?(fabs((rcl1_f2251()-(0.0)))<rcl1_v2340):NIL):NIL):NIL);}}
static int rcl1_f797(){if (rcl1_p797) return rcl1_m797; else {rcl1_p797=T;return rcl1_m797=(rcl1_f798()?rcl1_f934():NIL);}}
static int rcl1_f753(){if (rcl1_p753) return rcl1_m753; else {rcl1_p753=T;return rcl1_m753=((rcl1_v797=rcl1_f797()),(rcl1_v797?rcl1_v797:((rcl1_f796()?((fabs((rcl1_v2346-rcl1_f786()))<rcl1_v2340)?(fabs((rcl1_v2344-rcl1_f782()))<rcl1_v2340):NIL):NIL)?T:((rcl1_f911()?T:((rcl1_v763=rcl1_f763()),((fabs((rcl1_v763-(0.0)))<rcl1_v2340)?NIL:((rcl1_v763>(0.0))?rcl1_f891():rcl1_f890()))))?NIL:T))));}}
static int rcl1_f468(){if (rcl1_p468) return rcl1_m468; else {rcl1_p468=T;return rcl1_m468=((rcl1_v544=rcl1_f544()),(rcl1_v544?rcl1_v544:rcl1_f753()));}}
static double rcl1_f342(){if (rcl1_p342) return rcl1_m342; else {rcl1_p342=T;return rcl1_m342=(rcl1_f564()?(rcl1_f468()?rcl1_f557():rcl1_f645()):rcl1_f645());}}
static double_or_symbol rcl1_f15(){if (rcl1_p15) return rcl1_m15; else {rcl1_p15=T;return rcl1_m15=(rcl1_f564()?(rcl1_f468()?coerce_double_to_double_or_symbol(rcl1_f557()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int rcl1_f467(){if (rcl1_p467) return rcl1_m467; else {rcl1_p467=T;return rcl1_m467=(rcl1_f564()?rcl1_f468():NIL);}}
static double rcl1_f462(){if (rcl1_p462) return rcl1_m462; else {rcl1_p462=T;return rcl1_m462=(rcl1_f564()?(rcl1_f468()?rcl1_f557():rcl1_f875()):rcl1_f875());}}
static double rcl1_f465(){if (rcl1_p465) return rcl1_m465; else {rcl1_p465=T;return rcl1_m465=(rcl1_f564()?(rcl1_f468()?rcl1_f557():rcl1_f880()):rcl1_f880());}}
static int rcl1_f464(){if (rcl1_p464) return rcl1_m464; else {rcl1_p464=T;return rcl1_m464=(rcl1_f465()<(0.0));}}
static int rcl1_f457(){if (rcl1_p457) return rcl1_m457; else {rcl1_p457=T;return rcl1_m457=(rcl1_f467()?((rcl1_v464=rcl1_f464()),(rcl1_v464?rcl1_v464:(fabs((rcl1_f462()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f456(){if (rcl1_p456) return rcl1_m456; else {rcl1_p456=T;return rcl1_m456=(rcl1_f457()?rcl1_f467():NIL);}}
static double rcl1_f349(){if (rcl1_p349) return rcl1_m349; else {rcl1_p349=T;return rcl1_m349=(rcl1_f457()?rcl1_f462():rcl1_f875());}}
static double rcl1_f351(){if (rcl1_p351) return rcl1_m351; else {rcl1_p351=T;return rcl1_m351=(rcl1_f457()?rcl1_f465():rcl1_f880());}}
static int rcl1_f350(){if (rcl1_p350) return rcl1_m350; else {rcl1_p350=T;return rcl1_m350=(rcl1_f351()<(0.0));}}
static int rcl1_f344(){if (rcl1_p344) return rcl1_m344; else {rcl1_p344=T;return rcl1_m344=(rcl1_f456()?((rcl1_v350=rcl1_f350()),(rcl1_v350?rcl1_v350:(fabs((rcl1_f349()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f752(){if (rcl1_p752) return rcl1_m752; else {rcl1_p752=T;return rcl1_m752=((rcl1_v947=rcl1_f947()),(rcl1_v947?rcl1_v947:rcl1_f753()));}}
static double_or_symbol rcl1_f42(){if (rcl1_p42) return rcl1_m42; else {rcl1_p42=T;return rcl1_m42=(rcl1_f973()?(rcl1_f752()?coerce_double_to_double_or_symbol(rcl1_f962()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcl1_f624(){if (rcl1_p624) return rcl1_m624; else {rcl1_p624=T;return rcl1_m624=(rcl1_f973()?(rcl1_f752()?rcl1_f962():rcl1_f645()):rcl1_f645());}}
static int rcl1_f751(){if (rcl1_p751) return rcl1_m751; else {rcl1_p751=T;return rcl1_m751=(rcl1_f973()?rcl1_f752():NIL);}}
static double rcl1_f746(){if (rcl1_p746) return rcl1_m746; else {rcl1_p746=T;return rcl1_m746=(rcl1_f973()?(rcl1_f752()?rcl1_f962():rcl1_f875()):rcl1_f875());}}
static double rcl1_f749(){if (rcl1_p749) return rcl1_m749; else {rcl1_p749=T;return rcl1_m749=(rcl1_f973()?(rcl1_f752()?rcl1_f962():rcl1_f880()):rcl1_f880());}}
static int rcl1_f748(){if (rcl1_p748) return rcl1_m748; else {rcl1_p748=T;return rcl1_m748=(rcl1_f749()<(0.0));}}
static int rcl1_f741(){if (rcl1_p741) return rcl1_m741; else {rcl1_p741=T;return rcl1_m741=(rcl1_f751()?((rcl1_v748=rcl1_f748()),(rcl1_v748?rcl1_v748:(fabs((rcl1_f746()-(0.0)))<rcl1_v2340))):NIL);}}
static double rcl1_f631(){if (rcl1_p631) return rcl1_m631; else {rcl1_p631=T;return rcl1_m631=(rcl1_f741()?rcl1_f746():rcl1_f875());}}
static double rcl1_f633(){if (rcl1_p633) return rcl1_m633; else {rcl1_p633=T;return rcl1_m633=(rcl1_f741()?rcl1_f749():rcl1_f880());}}
static int rcl1_f632(){if (rcl1_p632) return rcl1_m632; else {rcl1_p632=T;return rcl1_m632=(rcl1_f633()<(0.0));}}
static int rcl1_f740(){if (rcl1_p740) return rcl1_m740; else {rcl1_p740=T;return rcl1_m740=(rcl1_f741()?rcl1_f751():NIL);}}
static int rcl1_f626(){if (rcl1_p626) return rcl1_m626; else {rcl1_p626=T;return rcl1_m626=(rcl1_f740()?((rcl1_v632=rcl1_f632()),(rcl1_v632?rcl1_v632:(fabs((rcl1_f631()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f933(){if (rcl1_p933) return rcl1_m933; else {rcl1_p933=T;return rcl1_m933=(rcl1_f2306()?rcl1_f934():NIL);}}
static int rcl1_f884(){if (rcl1_p884) return rcl1_m884; else {rcl1_p884=T;return rcl1_m884=((rcl1_v933=rcl1_f933()),(rcl1_v933?rcl1_v933:((rcl1_f930()?((fabs((rcl1_v2346-rcl1_f925()))<rcl1_v2340)?(fabs((rcl1_v2344-rcl1_f919()))<rcl1_v2340):NIL):NIL)?T:((rcl1_f911()?T:((rcl1_v896=rcl1_f896()),((fabs((rcl1_v896-(0.0)))<rcl1_v2340)?NIL:((rcl1_v896>(0.0))?rcl1_f891():rcl1_f890()))))?NIL:T))));}}
static int rcl1_f543(){if (rcl1_p543) return rcl1_m543; else {rcl1_p543=T;return rcl1_m543=((rcl1_v544=rcl1_f544()),(rcl1_v544?rcl1_v544:rcl1_f884()));}}
static double rcl1_f361(){if (rcl1_p361) return rcl1_m361; else {rcl1_p361=T;return rcl1_m361=(rcl1_f564()?(rcl1_f543()?rcl1_f557():rcl1_f645()):rcl1_f645());}}
static double_or_symbol rcl1_f27(){if (rcl1_p27) return rcl1_m27; else {rcl1_p27=T;return rcl1_m27=(rcl1_f564()?(rcl1_f543()?coerce_double_to_double_or_symbol(rcl1_f557()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int rcl1_f542(){if (rcl1_p542) return rcl1_m542; else {rcl1_p542=T;return rcl1_m542=(rcl1_f564()?rcl1_f543():NIL);}}
static double rcl1_f537(){if (rcl1_p537) return rcl1_m537; else {rcl1_p537=T;return rcl1_m537=(rcl1_f564()?(rcl1_f543()?rcl1_f557():rcl1_f875()):rcl1_f875());}}
static double rcl1_f540(){if (rcl1_p540) return rcl1_m540; else {rcl1_p540=T;return rcl1_m540=(rcl1_f564()?(rcl1_f543()?rcl1_f557():rcl1_f880()):rcl1_f880());}}
static int rcl1_f539(){if (rcl1_p539) return rcl1_m539; else {rcl1_p539=T;return rcl1_m539=(rcl1_f540()<(0.0));}}
static int rcl1_f532(){if (rcl1_p532) return rcl1_m532; else {rcl1_p532=T;return rcl1_m532=(rcl1_f542()?((rcl1_v539=rcl1_f539()),(rcl1_v539?rcl1_v539:(fabs((rcl1_f537()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f531(){if (rcl1_p531) return rcl1_m531; else {rcl1_p531=T;return rcl1_m531=(rcl1_f532()?rcl1_f542():NIL);}}
static double rcl1_f368(){if (rcl1_p368) return rcl1_m368; else {rcl1_p368=T;return rcl1_m368=(rcl1_f532()?rcl1_f537():rcl1_f875());}}
static double rcl1_f370(){if (rcl1_p370) return rcl1_m370; else {rcl1_p370=T;return rcl1_m370=(rcl1_f532()?rcl1_f540():rcl1_f880());}}
static int rcl1_f369(){if (rcl1_p369) return rcl1_m369; else {rcl1_p369=T;return rcl1_m369=(rcl1_f370()<(0.0));}}
static int rcl1_f363(){if (rcl1_p363) return rcl1_m363; else {rcl1_p363=T;return rcl1_m363=(rcl1_f531()?((rcl1_v369=rcl1_f369()),(rcl1_v369?rcl1_v369:(fabs((rcl1_f368()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f883(){if (rcl1_p883) return rcl1_m883; else {rcl1_p883=T;return rcl1_m883=((rcl1_v947=rcl1_f947()),(rcl1_v947?rcl1_v947:rcl1_f884()));}}
static double_or_symbol rcl1_f54(){if (rcl1_p54) return rcl1_m54; else {rcl1_p54=T;return rcl1_m54=(rcl1_f973()?(rcl1_f883()?coerce_double_to_double_or_symbol(rcl1_f962()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcl1_f643(){if (rcl1_p643) return rcl1_m643; else {rcl1_p643=T;return rcl1_m643=(rcl1_f973()?(rcl1_f883()?rcl1_f962():rcl1_f645()):rcl1_f645());}}
static int rcl1_f882(){if (rcl1_p882) return rcl1_m882; else {rcl1_p882=T;return rcl1_m882=(rcl1_f973()?rcl1_f883():NIL);}}
static double rcl1_f873(){if (rcl1_p873) return rcl1_m873; else {rcl1_p873=T;return rcl1_m873=(rcl1_f973()?(rcl1_f883()?rcl1_f962():rcl1_f875()):rcl1_f875());}}
static double rcl1_f878(){if (rcl1_p878) return rcl1_m878; else {rcl1_p878=T;return rcl1_m878=(rcl1_f973()?(rcl1_f883()?rcl1_f962():rcl1_f880()):rcl1_f880());}}
static int rcl1_f877(){if (rcl1_p877) return rcl1_m877; else {rcl1_p877=T;return rcl1_m877=(rcl1_f878()<(0.0));}}
static int rcl1_f868(){if (rcl1_p868) return rcl1_m868; else {rcl1_p868=T;return rcl1_m868=(rcl1_f882()?((rcl1_v877=rcl1_f877()),(rcl1_v877?rcl1_v877:(fabs((rcl1_f873()-(0.0)))<rcl1_v2340))):NIL);}}
static double rcl1_f652(){if (rcl1_p652) return rcl1_m652; else {rcl1_p652=T;return rcl1_m652=(rcl1_f868()?rcl1_f873():rcl1_f875());}}
static double rcl1_f654(){if (rcl1_p654) return rcl1_m654; else {rcl1_p654=T;return rcl1_m654=(rcl1_f868()?rcl1_f878():rcl1_f880());}}
static int rcl1_f653(){if (rcl1_p653) return rcl1_m653; else {rcl1_p653=T;return rcl1_m653=(rcl1_f654()<(0.0));}}
static int rcl1_f867(){if (rcl1_p867) return rcl1_m867; else {rcl1_p867=T;return rcl1_m867=(rcl1_f868()?rcl1_f882():NIL);}}
static int rcl1_f647(){if (rcl1_p647) return rcl1_m647; else {rcl1_p647=T;return rcl1_m647=(rcl1_f867()?((rcl1_v653=rcl1_f653()),(rcl1_v653?rcl1_v653:(fabs((rcl1_f652()-(0.0)))<rcl1_v2340))):NIL);}}
static double rcl1_f2171(){if (rcl1_p2171) return rcl1_m2171; else {rcl1_p2171=T;return rcl1_m2171=((((rcl1_f2322()*rcl1_v2352)-rcl1_f2186())/rcl1_f2300())-rcl1_v2346);}}
static double rcl1_f2169(){if (rcl1_p2169) return rcl1_m2169; else {rcl1_p2169=T;return rcl1_m2169=(((rcl1_f2184()-(rcl1_f2322()*rcl1_f2305()))/rcl1_f2300())-rcl1_v2344);}}
static double rcl1_f2337(){if (rcl1_p2337) return rcl1_m2337; else {rcl1_p2337=T;return rcl1_m2337=(rcl1_v2344-rcl1_v2358);}}
static double rcl1_f2164(){if (rcl1_p2164) return rcl1_m2164; else {rcl1_p2164=T;return rcl1_m2164=((rcl1_v2337=rcl1_f2337()),(rcl1_v2346-(rcl1_v2346+sqrt(((rcl1_v2342*rcl1_v2342)+(rcl1_v2337*rcl1_v2337))))));}}
static double rcl1_f2162(){if (rcl1_p2162) return rcl1_m2162; else {rcl1_p2162=T;return rcl1_m2162=(rcl1_v2344-rcl1_v2344);}}
static double rcl1_f2159(){if (rcl1_p2159) return rcl1_m2159; else {rcl1_p2159=T;return rcl1_m2159=((rcl1_v2164=rcl1_f2164()),(rcl1_v2162=rcl1_f2162()),sqrt(((rcl1_v2164*rcl1_v2164)+(rcl1_v2162*rcl1_v2162))));}}
static int rcl1_f587(){if (rcl1_p587) return rcl1_m587; else {rcl1_p587=T;return rcl1_m587=(fabs(((rcl1_f1011()?rcl1_f1009():((rcl1_v1704=rcl1_f1704()),(rcl1_v1702=rcl1_f1702()),sqrt(((rcl1_v1704*rcl1_v1704)+(rcl1_v1702*rcl1_v1702)))))-rcl1_f2159()))<rcl1_v2340);}}
static int rcl1_f572(){if (rcl1_p572) return rcl1_m572; else {rcl1_p572=T;return rcl1_m572=((rcl1_v587=rcl1_f587()),(rcl1_v587?((fabs((rcl1_f1692()-(0.0)))<rcl1_v2340)?NIL:((rcl1_v583=rcl1_f583()),((fabs((rcl1_v583-(0.0)))<rcl1_v2340)?NIL:((rcl1_v583>(0.0))?rcl1_f578():(rcl1_f578()?NIL:T))))):(rcl1_v587?NIL:T)));}}
static double rcl1_f2126(){if (rcl1_p2126) return rcl1_m2126; else {rcl1_p2126=T;return rcl1_m2126=((rcl1_v2159=rcl1_f2159()),(rcl1_v2159*rcl1_v2159));}}
static double rcl1_f1673(){if (rcl1_p1673) return rcl1_m1673; else {rcl1_p1673=T;return rcl1_m1673=(rcl1_f2126()-(rcl1_f1675()/rcl1_f2326()));}}
static int rcl1_f1672(){if (rcl1_p1672) return rcl1_m1672; else {rcl1_p1672=T;return rcl1_m1672=(rcl1_f1673()<0.0);}}
static double rcl1_f1653(){if (rcl1_p1653) return rcl1_m1653; else {rcl1_p1653=T;return rcl1_m1653=sqrt(rcl1_f1673());}}
static double rcl1_f1538(){if (rcl1_p1538) return rcl1_m1538; else {rcl1_p1538=T;return rcl1_m1538=normalize_rotation((atan2(rcl1_f1563(),(((-rcl1_f1653())+rcl1_v2346)-rcl1_v2346))-rcl1_f2050()));}}
static double rcl1_f1537(){if (rcl1_p1537) return rcl1_m1537; else {rcl1_p1537=T;return rcl1_m1537=normalize_rotation(rcl1_f1538());}}
static int rcl1_f496(){if (rcl1_p496) return rcl1_m496; else {rcl1_p496=T;return rcl1_m496=((rcl1_v1537=rcl1_f1537()),((fabs((rcl1_v1537-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v1537-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v1537-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static int rcl1_f495(){if (rcl1_p495) return rcl1_m495; else {rcl1_p495=T;return rcl1_m495=((rcl1_v496=rcl1_f496()),(rcl1_v496?rcl1_v496:rcl1_f884()));}}
static double rcl1_f492(){if (rcl1_p492) return rcl1_m492; else {rcl1_p492=T;return rcl1_m492=(rcl1_f495()?rcl1_f1538():rcl1_f875());}}
static double rcl1_f494(){if (rcl1_p494) return rcl1_m494; else {rcl1_p494=T;return rcl1_m494=(rcl1_f495()?rcl1_f1538():rcl1_f880());}}
static int rcl1_f493(){if (rcl1_p493) return rcl1_m493; else {rcl1_p493=T;return rcl1_m493=(rcl1_f494()<(0.0));}}
static int rcl1_f487(){if (rcl1_p487) return rcl1_m487; else {rcl1_p487=T;return rcl1_m487=(rcl1_f495()?((rcl1_v493=rcl1_f493()),(rcl1_v493?rcl1_v493:(fabs((rcl1_f492()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f486(){if (rcl1_p486) return rcl1_m486; else {rcl1_p486=T;return rcl1_m486=(rcl1_f487()?rcl1_f495():NIL);}}
static double rcl1_f483(){if (rcl1_p483) return rcl1_m483; else {rcl1_p483=T;return rcl1_m483=(rcl1_f487()?rcl1_f492():rcl1_f875());}}
static double rcl1_f485(){if (rcl1_p485) return rcl1_m485; else {rcl1_p485=T;return rcl1_m485=(rcl1_f487()?rcl1_f494():rcl1_f880());}}
static int rcl1_f484(){if (rcl1_p484) return rcl1_m484; else {rcl1_p484=T;return rcl1_m484=(rcl1_f485()<(0.0));}}
static int rcl1_f478(){if (rcl1_p478) return rcl1_m478; else {rcl1_p478=T;return rcl1_m478=(rcl1_f486()?((rcl1_v484=rcl1_f484()),(rcl1_v484?rcl1_v484:(fabs((rcl1_f483()-(0.0)))<rcl1_v2340))):NIL);}}
static double rcl1_f1559(){if (rcl1_p1559) return rcl1_m1559; else {rcl1_p1559=T;return rcl1_m1559=normalize_rotation((atan2(rcl1_f1563(),((rcl1_f1653()+rcl1_v2346)-rcl1_v2346))-rcl1_f2050()));}}
static double rcl1_f1558(){if (rcl1_p1558) return rcl1_m1558; else {rcl1_p1558=T;return rcl1_m1558=normalize_rotation(rcl1_f1559());}}
static int rcl1_f517(){if (rcl1_p517) return rcl1_m517; else {rcl1_p517=T;return rcl1_m517=((rcl1_v1558=rcl1_f1558()),((fabs((rcl1_v1558-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v1558-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v1558-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static int rcl1_f516(){if (rcl1_p516) return rcl1_m516; else {rcl1_p516=T;return rcl1_m516=((rcl1_v517=rcl1_f517()),(rcl1_v517?rcl1_v517:rcl1_f884()));}}
static double rcl1_f355(){if (rcl1_p355) return rcl1_m355; else {rcl1_p355=T;return rcl1_m355=(rcl1_f516()?(rcl1_f487()?(rcl1_f495()?((rcl1_v1559=rcl1_f1559()),(rcl1_v1538=rcl1_f1538()),((rcl1_v1559>rcl1_v1538)?rcl1_v1559:rcl1_v1538)):rcl1_f645()):rcl1_f645()):rcl1_f645());}}
static double rcl1_f513(){if (rcl1_p513) return rcl1_m513; else {rcl1_p513=T;return rcl1_m513=(rcl1_f516()?rcl1_f1559():rcl1_f875());}}
static double rcl1_f515(){if (rcl1_p515) return rcl1_m515; else {rcl1_p515=T;return rcl1_m515=(rcl1_f516()?rcl1_f1559():rcl1_f880());}}
static int rcl1_f514(){if (rcl1_p514) return rcl1_m514; else {rcl1_p514=T;return rcl1_m514=(rcl1_f515()<(0.0));}}
static int rcl1_f508(){if (rcl1_p508) return rcl1_m508; else {rcl1_p508=T;return rcl1_m508=(rcl1_f516()?((rcl1_v514=rcl1_f514()),(rcl1_v514?rcl1_v514:(fabs((rcl1_f513()-(0.0)))<rcl1_v2340))):NIL);}}
static double rcl1_f2091(){if (rcl1_p2091) return rcl1_m2091; else {rcl1_p2091=T;return rcl1_m2091=(rcl1_f2327()*rcl1_f2126());}}
static double rcl1_f470(){if (rcl1_p470) return rcl1_m470; else {rcl1_p470=T;return rcl1_m470=((rcl1_v473=rcl1_f473()),((rcl1_v473*rcl1_v473)-((4.0)*rcl1_f2325()*(rcl1_f1675()-rcl1_f2091()))));}}
static int rcl1_f469(){if (rcl1_p469) return rcl1_m469; else {rcl1_p469=T;return rcl1_m469=(rcl1_f470()<0.0);}}
static double rcl1_f450(){if (rcl1_p450) return rcl1_m450; else {rcl1_p450=T;return rcl1_m450=(sqrt(rcl1_f470())/rcl1_f2219());}}
static double rcl1_f416(){if (rcl1_p416) return rcl1_m416; else {rcl1_p416=T;return rcl1_m416=((rcl1_f452()-rcl1_f450())+rcl1_v2344);}}
static double rcl1_f408(){if (rcl1_p408) return rcl1_m408; else {rcl1_p408=T;return rcl1_m408=((rcl1_v416=rcl1_f416()),normalize_rotation((atan2((rcl1_v416-rcl1_v2344),(((rcl1_f2321()-(rcl1_v2350*rcl1_v416))/rcl1_v2352)-rcl1_v2346))-rcl1_f2050())));}}
static double rcl1_f407(){if (rcl1_p407) return rcl1_m407; else {rcl1_p407=T;return rcl1_m407=normalize_rotation(rcl1_f408());}}
static int rcl1_f395(){if (rcl1_p395) return rcl1_m395; else {rcl1_p395=T;return rcl1_m395=((rcl1_v407=rcl1_f407()),((fabs((rcl1_v407-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v407-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v407-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static int rcl1_f394(){if (rcl1_p394) return rcl1_m394; else {rcl1_p394=T;return rcl1_m394=((rcl1_v395=rcl1_f395()),(rcl1_v395?rcl1_v395:rcl1_f753()));}}
static double rcl1_f391(){if (rcl1_p391) return rcl1_m391; else {rcl1_p391=T;return rcl1_m391=(rcl1_f394()?rcl1_f408():rcl1_f875());}}
static double rcl1_f393(){if (rcl1_p393) return rcl1_m393; else {rcl1_p393=T;return rcl1_m393=(rcl1_f394()?rcl1_f408():rcl1_f880());}}
static int rcl1_f392(){if (rcl1_p392) return rcl1_m392; else {rcl1_p392=T;return rcl1_m392=(rcl1_f393()<(0.0));}}
static int rcl1_f386(){if (rcl1_p386) return rcl1_m386; else {rcl1_p386=T;return rcl1_m386=(rcl1_f394()?((rcl1_v392=rcl1_f392()),(rcl1_v392?rcl1_v392:(fabs((rcl1_f391()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f385(){if (rcl1_p385) return rcl1_m385; else {rcl1_p385=T;return rcl1_m385=(rcl1_f386()?rcl1_f394():NIL);}}
static double rcl1_f382(){if (rcl1_p382) return rcl1_m382; else {rcl1_p382=T;return rcl1_m382=(rcl1_f386()?rcl1_f391():rcl1_f875());}}
static double rcl1_f384(){if (rcl1_p384) return rcl1_m384; else {rcl1_p384=T;return rcl1_m384=(rcl1_f386()?rcl1_f393():rcl1_f880());}}
static int rcl1_f383(){if (rcl1_p383) return rcl1_m383; else {rcl1_p383=T;return rcl1_m383=(rcl1_f384()<(0.0));}}
static int rcl1_f377(){if (rcl1_p377) return rcl1_m377; else {rcl1_p377=T;return rcl1_m377=(rcl1_f385()?((rcl1_v383=rcl1_f383()),(rcl1_v383?rcl1_v383:(fabs((rcl1_f382()-(0.0)))<rcl1_v2340))):NIL);}}
static double rcl1_f448(){if (rcl1_p448) return rcl1_m448; else {rcl1_p448=T;return rcl1_m448=((rcl1_f452()+rcl1_f450())+rcl1_v2344);}}
static double rcl1_f440(){if (rcl1_p440) return rcl1_m440; else {rcl1_p440=T;return rcl1_m440=((rcl1_v448=rcl1_f448()),normalize_rotation((atan2((rcl1_v448-rcl1_v2344),(((rcl1_f2321()-(rcl1_v2350*rcl1_v448))/rcl1_v2352)-rcl1_v2346))-rcl1_f2050())));}}
static double rcl1_f439(){if (rcl1_p439) return rcl1_m439; else {rcl1_p439=T;return rcl1_m439=normalize_rotation(rcl1_f440());}}
static int rcl1_f427(){if (rcl1_p427) return rcl1_m427; else {rcl1_p427=T;return rcl1_m427=((rcl1_v439=rcl1_f439()),((fabs((rcl1_v439-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v439-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v439-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static int rcl1_f426(){if (rcl1_p426) return rcl1_m426; else {rcl1_p426=T;return rcl1_m426=((rcl1_v427=rcl1_f427()),(rcl1_v427?rcl1_v427:rcl1_f753()));}}
static double rcl1_f334(){if (rcl1_p334) return rcl1_m334; else {rcl1_p334=T;return rcl1_m334=(rcl1_f426()?(rcl1_f386()?(rcl1_f394()?((rcl1_v440=rcl1_f440()),(rcl1_v408=rcl1_f408()),((rcl1_v440>rcl1_v408)?rcl1_v440:rcl1_v408)):rcl1_f645()):rcl1_f645()):rcl1_f645());}}
static double rcl1_f423(){if (rcl1_p423) return rcl1_m423; else {rcl1_p423=T;return rcl1_m423=(rcl1_f426()?rcl1_f440():rcl1_f875());}}
static double rcl1_f425(){if (rcl1_p425) return rcl1_m425; else {rcl1_p425=T;return rcl1_m425=(rcl1_f426()?rcl1_f440():rcl1_f880());}}
static int rcl1_f424(){if (rcl1_p424) return rcl1_m424; else {rcl1_p424=T;return rcl1_m424=(rcl1_f425()<(0.0));}}
static int rcl1_f418(){if (rcl1_p418) return rcl1_m418; else {rcl1_p418=T;return rcl1_m418=(rcl1_f426()?((rcl1_v424=rcl1_f424()),(rcl1_v424?rcl1_v424:(fabs((rcl1_f423()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f371(){if (rcl1_p371) return rcl1_m371; else {rcl1_p371=T;return rcl1_m371=(rcl1_f572()?(rcl1_f2311()?(rcl1_f1672()?(rcl1_f587()?(rcl1_f532()?rcl1_f542():rcl1_f531()):NIL):(rcl1_f508()?(rcl1_f478()?(rcl1_f516()?rcl1_f486():NIL):rcl1_f516()):rcl1_f486())):(rcl1_f469()?(rcl1_f587()?(rcl1_f457()?rcl1_f467():rcl1_f456()):NIL):(rcl1_f418()?(rcl1_f377()?(rcl1_f426()?rcl1_f385():NIL):rcl1_f426()):rcl1_f385()))):NIL);}}
static double rcl1_f314(){if (rcl1_p314) return rcl1_m314; else {rcl1_p314=T;return rcl1_m314=(rcl1_f572()?(rcl1_f2311()?(rcl1_f1672()?(rcl1_f587()?(rcl1_f532()?(rcl1_f363()?rcl1_f361():rcl1_f537()):rcl1_f368()):rcl1_f875()):(rcl1_f508()?(rcl1_f478()?rcl1_f355():rcl1_f513()):rcl1_f483())):(rcl1_f469()?(rcl1_f587()?(rcl1_f457()?(rcl1_f344()?rcl1_f342():rcl1_f462()):rcl1_f349()):rcl1_f875()):(rcl1_f418()?(rcl1_f377()?rcl1_f334():rcl1_f423()):rcl1_f382()))):rcl1_f875());}}
static double rcl1_f329(){if (rcl1_p329) return rcl1_m329; else {rcl1_p329=T;return rcl1_m329=(rcl1_f572()?(rcl1_f2311()?(rcl1_f1672()?(rcl1_f587()?(rcl1_f532()?(rcl1_f363()?rcl1_f361():rcl1_f540()):rcl1_f370()):rcl1_f880()):(rcl1_f508()?(rcl1_f478()?rcl1_f355():rcl1_f515()):rcl1_f485())):(rcl1_f469()?(rcl1_f587()?(rcl1_f457()?(rcl1_f344()?rcl1_f342():rcl1_f465()):rcl1_f351()):rcl1_f880()):(rcl1_f418()?(rcl1_f377()?rcl1_f334():rcl1_f425()):rcl1_f384()))):rcl1_f880());}}
static int rcl1_f328(){if (rcl1_p328) return rcl1_m328; else {rcl1_p328=T;return rcl1_m328=(rcl1_f329()<(0.0));}}
static int rcl1_f309(){if (rcl1_p309) return rcl1_m309; else {rcl1_p309=T;return rcl1_m309=(rcl1_f371()?((rcl1_v328=rcl1_f328()),(rcl1_v328?rcl1_v328:(fabs((rcl1_f314()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f306(){if (rcl1_p306) return rcl1_m306; else {rcl1_p306=T;return rcl1_m306=((rcl1_f309()?rcl1_f329():rcl1_f880())<(0.0));}}
static double rcl1_f804(){if (rcl1_p804) return rcl1_m804; else {rcl1_p804=T;return rcl1_m804=((rcl1_v808=rcl1_f808()),((rcl1_v808*rcl1_v808)-((4.0)*rcl1_f2325()*(rcl1_f2125()-rcl1_f2091()))));}}
static int rcl1_f803(){if (rcl1_p803) return rcl1_m803; else {rcl1_p803=T;return rcl1_m803=(rcl1_f804()<0.0);}}
static double rcl1_f734(){if (rcl1_p734) return rcl1_m734; else {rcl1_p734=T;return rcl1_m734=(sqrt(rcl1_f804())/rcl1_f2219());}}
static double rcl1_f700(){if (rcl1_p700) return rcl1_m700; else {rcl1_p700=T;return rcl1_m700=((rcl1_f736()-rcl1_f734())+rcl1_v2344);}}
static double rcl1_f692(){if (rcl1_p692) return rcl1_m692; else {rcl1_p692=T;return rcl1_m692=((rcl1_v700=rcl1_f700()),normalize_rotation((atan2((rcl1_v700-rcl1_v2344),(((rcl1_f2322()-(rcl1_v2350*rcl1_v700))/rcl1_v2352)-rcl1_v2346))-rcl1_f2050())));}}
static double rcl1_f691(){if (rcl1_p691) return rcl1_m691; else {rcl1_p691=T;return rcl1_m691=normalize_rotation(rcl1_f692());}}
static int rcl1_f679(){if (rcl1_p679) return rcl1_m679; else {rcl1_p679=T;return rcl1_m679=((rcl1_v691=rcl1_f691()),((fabs((rcl1_v691-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v691-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v691-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static int rcl1_f678(){if (rcl1_p678) return rcl1_m678; else {rcl1_p678=T;return rcl1_m678=((rcl1_v679=rcl1_f679()),(rcl1_v679?rcl1_v679:rcl1_f753()));}}
static double rcl1_f675(){if (rcl1_p675) return rcl1_m675; else {rcl1_p675=T;return rcl1_m675=(rcl1_f678()?rcl1_f692():rcl1_f875());}}
static double rcl1_f677(){if (rcl1_p677) return rcl1_m677; else {rcl1_p677=T;return rcl1_m677=(rcl1_f678()?rcl1_f692():rcl1_f880());}}
static int rcl1_f676(){if (rcl1_p676) return rcl1_m676; else {rcl1_p676=T;return rcl1_m676=(rcl1_f677()<(0.0));}}
static int rcl1_f670(){if (rcl1_p670) return rcl1_m670; else {rcl1_p670=T;return rcl1_m670=(rcl1_f678()?((rcl1_v676=rcl1_f676()),(rcl1_v676?rcl1_v676:(fabs((rcl1_f675()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f669(){if (rcl1_p669) return rcl1_m669; else {rcl1_p669=T;return rcl1_m669=(rcl1_f670()?rcl1_f678():NIL);}}
static double rcl1_f666(){if (rcl1_p666) return rcl1_m666; else {rcl1_p666=T;return rcl1_m666=(rcl1_f670()?rcl1_f675():rcl1_f875());}}
static double rcl1_f668(){if (rcl1_p668) return rcl1_m668; else {rcl1_p668=T;return rcl1_m668=(rcl1_f670()?rcl1_f677():rcl1_f880());}}
static int rcl1_f667(){if (rcl1_p667) return rcl1_m667; else {rcl1_p667=T;return rcl1_m667=(rcl1_f668()<(0.0));}}
static int rcl1_f661(){if (rcl1_p661) return rcl1_m661; else {rcl1_p661=T;return rcl1_m661=(rcl1_f669()?((rcl1_v667=rcl1_f667()),(rcl1_v667?rcl1_v667:(fabs((rcl1_f666()-(0.0)))<rcl1_v2340))):NIL);}}
static double rcl1_f732(){if (rcl1_p732) return rcl1_m732; else {rcl1_p732=T;return rcl1_m732=((rcl1_f736()+rcl1_f734())+rcl1_v2344);}}
static double rcl1_f724(){if (rcl1_p724) return rcl1_m724; else {rcl1_p724=T;return rcl1_m724=((rcl1_v732=rcl1_f732()),normalize_rotation((atan2((rcl1_v732-rcl1_v2344),(((rcl1_f2322()-(rcl1_v2350*rcl1_v732))/rcl1_v2352)-rcl1_v2346))-rcl1_f2050())));}}
static double rcl1_f723(){if (rcl1_p723) return rcl1_m723; else {rcl1_p723=T;return rcl1_m723=normalize_rotation(rcl1_f724());}}
static int rcl1_f711(){if (rcl1_p711) return rcl1_m711; else {rcl1_p711=T;return rcl1_m711=((rcl1_v723=rcl1_f723()),((fabs((rcl1_v723-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v723-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v723-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static int rcl1_f710(){if (rcl1_p710) return rcl1_m710; else {rcl1_p710=T;return rcl1_m710=((rcl1_v711=rcl1_f711()),(rcl1_v711?rcl1_v711:rcl1_f753()));}}
static double rcl1_f616(){if (rcl1_p616) return rcl1_m616; else {rcl1_p616=T;return rcl1_m616=(rcl1_f710()?(rcl1_f670()?(rcl1_f678()?((rcl1_v724=rcl1_f724()),(rcl1_v692=rcl1_f692()),((rcl1_v724>rcl1_v692)?rcl1_v724:rcl1_v692)):rcl1_f645()):rcl1_f645()):rcl1_f645());}}
static double rcl1_f707(){if (rcl1_p707) return rcl1_m707; else {rcl1_p707=T;return rcl1_m707=(rcl1_f710()?rcl1_f724():rcl1_f875());}}
static double rcl1_f709(){if (rcl1_p709) return rcl1_m709; else {rcl1_p709=T;return rcl1_m709=(rcl1_f710()?rcl1_f724():rcl1_f880());}}
static int rcl1_f708(){if (rcl1_p708) return rcl1_m708; else {rcl1_p708=T;return rcl1_m708=(rcl1_f709()<(0.0));}}
static int rcl1_f702(){if (rcl1_p702) return rcl1_m702; else {rcl1_p702=T;return rcl1_m702=(rcl1_f710()?((rcl1_v708=rcl1_f708()),(rcl1_v708?rcl1_v708:(fabs((rcl1_f707()-(0.0)))<rcl1_v2340))):NIL);}}
static double rcl1_f2123(){if (rcl1_p2123) return rcl1_m2123; else {rcl1_p2123=T;return rcl1_m2123=(rcl1_f2126()-(rcl1_f2125()/rcl1_f2326()));}}
static int rcl1_f2122(){if (rcl1_p2122) return rcl1_m2122; else {rcl1_p2122=T;return rcl1_m2122=(rcl1_f2123()<0.0);}}
static double rcl1_f2099(){if (rcl1_p2099) return rcl1_m2099; else {rcl1_p2099=T;return rcl1_m2099=sqrt(rcl1_f2123());}}
static double rcl1_f1918(){if (rcl1_p1918) return rcl1_m1918; else {rcl1_p1918=T;return rcl1_m1918=normalize_rotation((atan2(rcl1_f1943(),(((-rcl1_f2099())+rcl1_v2346)-rcl1_v2346))-rcl1_f2050()));}}
static double rcl1_f1917(){if (rcl1_p1917) return rcl1_m1917; else {rcl1_p1917=T;return rcl1_m1917=normalize_rotation(rcl1_f1918());}}
static int rcl1_f832(){if (rcl1_p832) return rcl1_m832; else {rcl1_p832=T;return rcl1_m832=((rcl1_v1917=rcl1_f1917()),((fabs((rcl1_v1917-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v1917-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v1917-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static int rcl1_f831(){if (rcl1_p831) return rcl1_m831; else {rcl1_p831=T;return rcl1_m831=((rcl1_v832=rcl1_f832()),(rcl1_v832?rcl1_v832:rcl1_f884()));}}
static double rcl1_f828(){if (rcl1_p828) return rcl1_m828; else {rcl1_p828=T;return rcl1_m828=(rcl1_f831()?rcl1_f1918():rcl1_f875());}}
static double rcl1_f830(){if (rcl1_p830) return rcl1_m830; else {rcl1_p830=T;return rcl1_m830=(rcl1_f831()?rcl1_f1918():rcl1_f880());}}
static int rcl1_f829(){if (rcl1_p829) return rcl1_m829; else {rcl1_p829=T;return rcl1_m829=(rcl1_f830()<(0.0));}}
static int rcl1_f823(){if (rcl1_p823) return rcl1_m823; else {rcl1_p823=T;return rcl1_m823=(rcl1_f831()?((rcl1_v829=rcl1_f829()),(rcl1_v829?rcl1_v829:(fabs((rcl1_f828()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f822(){if (rcl1_p822) return rcl1_m822; else {rcl1_p822=T;return rcl1_m822=(rcl1_f823()?rcl1_f831():NIL);}}
static double rcl1_f819(){if (rcl1_p819) return rcl1_m819; else {rcl1_p819=T;return rcl1_m819=(rcl1_f823()?rcl1_f828():rcl1_f875());}}
static double rcl1_f821(){if (rcl1_p821) return rcl1_m821; else {rcl1_p821=T;return rcl1_m821=(rcl1_f823()?rcl1_f830():rcl1_f880());}}
static int rcl1_f820(){if (rcl1_p820) return rcl1_m820; else {rcl1_p820=T;return rcl1_m820=(rcl1_f821()<(0.0));}}
static int rcl1_f814(){if (rcl1_p814) return rcl1_m814; else {rcl1_p814=T;return rcl1_m814=(rcl1_f822()?((rcl1_v820=rcl1_f820()),(rcl1_v820?rcl1_v820:(fabs((rcl1_f819()-(0.0)))<rcl1_v2340))):NIL);}}
static double rcl1_f1939(){if (rcl1_p1939) return rcl1_m1939; else {rcl1_p1939=T;return rcl1_m1939=normalize_rotation((atan2(rcl1_f1943(),((rcl1_f2099()+rcl1_v2346)-rcl1_v2346))-rcl1_f2050()));}}
static double rcl1_f1938(){if (rcl1_p1938) return rcl1_m1938; else {rcl1_p1938=T;return rcl1_m1938=normalize_rotation(rcl1_f1939());}}
static int rcl1_f853(){if (rcl1_p853) return rcl1_m853; else {rcl1_p853=T;return rcl1_m853=((rcl1_v1938=rcl1_f1938()),((fabs((rcl1_v1938-(0.0)))<rcl1_v2340)?NIL:((fabs((rcl1_v1938-(-6.283185307179586)))<rcl1_v2340)?NIL:((fabs((rcl1_v1938-(6.283185307179586)))<rcl1_v2340)?NIL:T))));}}
static int rcl1_f852(){if (rcl1_p852) return rcl1_m852; else {rcl1_p852=T;return rcl1_m852=((rcl1_v853=rcl1_f853()),(rcl1_v853?rcl1_v853:rcl1_f884()));}}
static double rcl1_f637(){if (rcl1_p637) return rcl1_m637; else {rcl1_p637=T;return rcl1_m637=(rcl1_f852()?(rcl1_f823()?(rcl1_f831()?((rcl1_v1939=rcl1_f1939()),(rcl1_v1918=rcl1_f1918()),((rcl1_v1939>rcl1_v1918)?rcl1_v1939:rcl1_v1918)):rcl1_f645()):rcl1_f645()):rcl1_f645());}}
static double rcl1_f849(){if (rcl1_p849) return rcl1_m849; else {rcl1_p849=T;return rcl1_m849=(rcl1_f852()?rcl1_f1939():rcl1_f875());}}
static double rcl1_f851(){if (rcl1_p851) return rcl1_m851; else {rcl1_p851=T;return rcl1_m851=(rcl1_f852()?rcl1_f1939():rcl1_f880());}}
static int rcl1_f850(){if (rcl1_p850) return rcl1_m850; else {rcl1_p850=T;return rcl1_m850=(rcl1_f851()<(0.0));}}
static int rcl1_f844(){if (rcl1_p844) return rcl1_m844; else {rcl1_p844=T;return rcl1_m844=(rcl1_f852()?((rcl1_v850=rcl1_f850()),(rcl1_v850?rcl1_v850:(fabs((rcl1_f849()-(0.0)))<rcl1_v2340))):NIL);}}
static int rcl1_f1005(){if (rcl1_p1005) return rcl1_m1005; else {rcl1_p1005=T;return rcl1_m1005=(fabs(((rcl1_f1011()?rcl1_f1009():((rcl1_v2171=rcl1_f2171()),(rcl1_v2169=rcl1_f2169()),sqrt(((rcl1_v2171*rcl1_v2171)+(rcl1_v2169*rcl1_v2169)))))-rcl1_f2159()))<rcl1_v2340);}}
static int rcl1_f984(){if (rcl1_p984) return rcl1_m984; else {rcl1_p984=T;return rcl1_m984=((rcl1_v1005=rcl1_f1005()),(rcl1_v1005?((fabs((rcl1_f2148()-(0.0)))<rcl1_v2340)?NIL:((rcl1_v996=rcl1_f996()),((fabs((rcl1_v996-(0.0)))<rcl1_v2340)?NIL:((rcl1_v996>(0.0))?rcl1_f991():(rcl1_f991()?NIL:T))))):(rcl1_v1005?NIL:T)));}}
static int rcl1_f610(){if (rcl1_p610) return rcl1_m610; else {rcl1_p610=T;return rcl1_m610=((rcl1_f984()?(rcl1_f2311()?(rcl1_f2122()?(rcl1_f1005()?(rcl1_f868()?(rcl1_f647()?rcl1_f643():rcl1_f878()):rcl1_f654()):rcl1_f880()):(rcl1_f844()?(rcl1_f814()?rcl1_f637():rcl1_f851()):rcl1_f821())):(rcl1_f803()?(rcl1_f1005()?(rcl1_f741()?(rcl1_f626()?rcl1_f624():rcl1_f749()):rcl1_f633()):rcl1_f880()):(rcl1_f702()?(rcl1_f661()?rcl1_f616():rcl1_f709()):rcl1_f668()))):rcl1_f880())<(0.0));}}
void rcl1(rcl1_a2360,rcl1_a2358,rcl1_a2356,rcl1_a2354,rcl1_a2352,rcl1_a2350,rcl1_a2348,rcl1_a2346,rcl1_a2344,rcl1_a2340)
double rcl1_a2360;
double rcl1_a2358;
double rcl1_a2356;
double rcl1_a2354;
double rcl1_a2352;
double rcl1_a2350;
double rcl1_a2348;
double rcl1_a2346;
double rcl1_a2344;
double rcl1_a2340;
{ rcl1_v2360=rcl1_a2360;
  rcl1_v2358=rcl1_a2358;
  rcl1_v2356=rcl1_a2356;
  rcl1_v2354=rcl1_a2354;
  rcl1_v2352=rcl1_a2352;
  rcl1_v2350=rcl1_a2350;
  rcl1_v2348=rcl1_a2348;
  rcl1_v2346=rcl1_a2346;
  rcl1_v2344=rcl1_a2344;
  rcl1_v2340=rcl1_a2340;
  rcl1_p645=NIL;
  rcl1_p2311=NIL;
  rcl1_p875=NIL;
  rcl1_p880=NIL;
  rcl1_p928=NIL;
  rcl1_p2314=NIL;
  rcl1_p2313=NIL;
  rcl1_p1999=NIL;
  rcl1_p911=NIL;
  rcl1_p891=NIL;
  rcl1_p890=NIL;
  rcl1_p2312=NIL;
  rcl1_p802=NIL;
  rcl1_p2309=NIL;
  rcl1_p2304=NIL;
  rcl1_p2303=NIL;
  rcl1_p2302=NIL;
  rcl1_p2050=NIL;
  rcl1_p971=NIL;
  rcl1_p967=NIL;
  rcl1_p2268=NIL;
  rcl1_p2256=NIL;
  rcl1_p2263=NIL;
  rcl1_p2254=NIL;
  rcl1_p2154=NIL;
  rcl1_p2232=NIL;
  rcl1_p997=NIL;
  rcl1_p2151=NIL;
  rcl1_p2150=NIL;
  rcl1_p2149=NIL;
  rcl1_p1009=NIL;
  rcl1_p2190=NIL;
  rcl1_p2189=NIL;
  rcl1_p2188=NIL;
  rcl1_p2117=NIL;
  rcl1_p2116=NIL;
  rcl1_p2114=NIL;
  rcl1_p2186=NIL;
  rcl1_p2184=NIL;
  rcl1_p2333=NIL;
  rcl1_p2331=NIL;
  rcl1_p2328=NIL;
  rcl1_p2310=NIL;
  rcl1_p2326=NIL;
  rcl1_p2307=NIL;
  rcl1_p2306=NIL;
  rcl1_p2327=NIL;
  rcl1_p2325=NIL;
  rcl1_p2219=NIL;
  rcl1_p799=NIL;
  rcl1_p790=NIL;
  rcl1_p798=NIL;
  rcl1_p2323=NIL;
  rcl1_p2321=NIL;
  rcl1_p1668=NIL;
  rcl1_p1563=NIL;
  rcl1_p1676=NIL;
  rcl1_p473=NIL;
  rcl1_p452=NIL;
  rcl1_p1675=NIL;
  rcl1_p583=NIL;
  rcl1_p1692=NIL;
  rcl1_p578=NIL;
  rcl1_p2322=NIL;
  rcl1_p1943=NIL;
  rcl1_p2115=NIL;
  rcl1_p2127=NIL;
  rcl1_p808=NIL;
  rcl1_p736=NIL;
  rcl1_p2125=NIL;
  rcl1_p996=NIL;
  rcl1_p2148=NIL;
  rcl1_p991=NIL;
  rcl1_p2305=NIL;
  rcl1_p2260=NIL;
  rcl1_p1666=NIL;
  rcl1_p2251=NIL;
  rcl1_p2258=NIL;
  rcl1_p981=NIL;
  rcl1_p564=NIL;
  rcl1_p557=NIL;
  rcl1_p556=NIL;
  rcl1_p544=NIL;
  rcl1_p2112=NIL;
  rcl1_p973=NIL;
  rcl1_p962=NIL;
  rcl1_p273=NIL;
  rcl1_p961=NIL;
  rcl1_p947=NIL;
  rcl1_p2300=NIL;
  rcl1_p1704=NIL;
  rcl1_p1702=NIL;
  rcl1_p2279=NIL;
  rcl1_p2277=NIL;
  rcl1_p1011=NIL;
  rcl1_p943=NIL;
  rcl1_p926=NIL;
  rcl1_p786=NIL;
  rcl1_p925=NIL;
  rcl1_p920=NIL;
  rcl1_p782=NIL;
  rcl1_p919=NIL;
  rcl1_p931=NIL;
  rcl1_p796=NIL;
  rcl1_p775=NIL;
  rcl1_p776=NIL;
  rcl1_p771=NIL;
  rcl1_p763=NIL;
  rcl1_p930=NIL;
  rcl1_p909=NIL;
  rcl1_p910=NIL;
  rcl1_p904=NIL;
  rcl1_p896=NIL;
  rcl1_p934=NIL;
  rcl1_p797=NIL;
  rcl1_p753=NIL;
  rcl1_p468=NIL;
  rcl1_p342=NIL;
  rcl1_p15=NIL;
  rcl1_p467=NIL;
  rcl1_p462=NIL;
  rcl1_p465=NIL;
  rcl1_p464=NIL;
  rcl1_p457=NIL;
  rcl1_p456=NIL;
  rcl1_p349=NIL;
  rcl1_p351=NIL;
  rcl1_p350=NIL;
  rcl1_p344=NIL;
  rcl1_p752=NIL;
  rcl1_p42=NIL;
  rcl1_p624=NIL;
  rcl1_p751=NIL;
  rcl1_p746=NIL;
  rcl1_p749=NIL;
  rcl1_p748=NIL;
  rcl1_p741=NIL;
  rcl1_p631=NIL;
  rcl1_p633=NIL;
  rcl1_p632=NIL;
  rcl1_p740=NIL;
  rcl1_p626=NIL;
  rcl1_p933=NIL;
  rcl1_p884=NIL;
  rcl1_p543=NIL;
  rcl1_p361=NIL;
  rcl1_p27=NIL;
  rcl1_p542=NIL;
  rcl1_p537=NIL;
  rcl1_p540=NIL;
  rcl1_p539=NIL;
  rcl1_p532=NIL;
  rcl1_p531=NIL;
  rcl1_p368=NIL;
  rcl1_p370=NIL;
  rcl1_p369=NIL;
  rcl1_p363=NIL;
  rcl1_p883=NIL;
  rcl1_p54=NIL;
  rcl1_p643=NIL;
  rcl1_p882=NIL;
  rcl1_p873=NIL;
  rcl1_p878=NIL;
  rcl1_p877=NIL;
  rcl1_p868=NIL;
  rcl1_p652=NIL;
  rcl1_p654=NIL;
  rcl1_p653=NIL;
  rcl1_p867=NIL;
  rcl1_p647=NIL;
  rcl1_p2171=NIL;
  rcl1_p2169=NIL;
  rcl1_p2337=NIL;
  rcl1_p2164=NIL;
  rcl1_p2162=NIL;
  rcl1_p2159=NIL;
  rcl1_p587=NIL;
  rcl1_p572=NIL;
  rcl1_p2126=NIL;
  rcl1_p1673=NIL;
  rcl1_p1672=NIL;
  rcl1_p1653=NIL;
  rcl1_p1538=NIL;
  rcl1_p1537=NIL;
  rcl1_p496=NIL;
  rcl1_p495=NIL;
  rcl1_p492=NIL;
  rcl1_p494=NIL;
  rcl1_p493=NIL;
  rcl1_p487=NIL;
  rcl1_p486=NIL;
  rcl1_p483=NIL;
  rcl1_p485=NIL;
  rcl1_p484=NIL;
  rcl1_p478=NIL;
  rcl1_p1559=NIL;
  rcl1_p1558=NIL;
  rcl1_p517=NIL;
  rcl1_p516=NIL;
  rcl1_p355=NIL;
  rcl1_p513=NIL;
  rcl1_p515=NIL;
  rcl1_p514=NIL;
  rcl1_p508=NIL;
  rcl1_p2091=NIL;
  rcl1_p470=NIL;
  rcl1_p469=NIL;
  rcl1_p450=NIL;
  rcl1_p416=NIL;
  rcl1_p408=NIL;
  rcl1_p407=NIL;
  rcl1_p395=NIL;
  rcl1_p394=NIL;
  rcl1_p391=NIL;
  rcl1_p393=NIL;
  rcl1_p392=NIL;
  rcl1_p386=NIL;
  rcl1_p385=NIL;
  rcl1_p382=NIL;
  rcl1_p384=NIL;
  rcl1_p383=NIL;
  rcl1_p377=NIL;
  rcl1_p448=NIL;
  rcl1_p440=NIL;
  rcl1_p439=NIL;
  rcl1_p427=NIL;
  rcl1_p426=NIL;
  rcl1_p334=NIL;
  rcl1_p423=NIL;
  rcl1_p425=NIL;
  rcl1_p424=NIL;
  rcl1_p418=NIL;
  rcl1_p371=NIL;
  rcl1_p314=NIL;
  rcl1_p329=NIL;
  rcl1_p328=NIL;
  rcl1_p309=NIL;
  rcl1_p306=NIL;
  rcl1_p804=NIL;
  rcl1_p803=NIL;
  rcl1_p734=NIL;
  rcl1_p700=NIL;
  rcl1_p692=NIL;
  rcl1_p691=NIL;
  rcl1_p679=NIL;
  rcl1_p678=NIL;
  rcl1_p675=NIL;
  rcl1_p677=NIL;
  rcl1_p676=NIL;
  rcl1_p670=NIL;
  rcl1_p669=NIL;
  rcl1_p666=NIL;
  rcl1_p668=NIL;
  rcl1_p667=NIL;
  rcl1_p661=NIL;
  rcl1_p732=NIL;
  rcl1_p724=NIL;
  rcl1_p723=NIL;
  rcl1_p711=NIL;
  rcl1_p710=NIL;
  rcl1_p616=NIL;
  rcl1_p707=NIL;
  rcl1_p709=NIL;
  rcl1_p708=NIL;
  rcl1_p702=NIL;
  rcl1_p2123=NIL;
  rcl1_p2122=NIL;
  rcl1_p2099=NIL;
  rcl1_p1918=NIL;
  rcl1_p1917=NIL;
  rcl1_p832=NIL;
  rcl1_p831=NIL;
  rcl1_p828=NIL;
  rcl1_p830=NIL;
  rcl1_p829=NIL;
  rcl1_p823=NIL;
  rcl1_p822=NIL;
  rcl1_p819=NIL;
  rcl1_p821=NIL;
  rcl1_p820=NIL;
  rcl1_p814=NIL;
  rcl1_p1939=NIL;
  rcl1_p1938=NIL;
  rcl1_p853=NIL;
  rcl1_p852=NIL;
  rcl1_p637=NIL;
  rcl1_p849=NIL;
  rcl1_p851=NIL;
  rcl1_p850=NIL;
  rcl1_p844=NIL;
  rcl1_p1005=NIL;
  rcl1_p984=NIL;
  rcl1_p610=NIL;
  double_or_symbol_result=((rcl1_v2342=(rcl1_v2346-rcl1_v2360)),(((fabs(rcl1_v2342)<rcl1_v2340)?(fabs(rcl1_f2337())<rcl1_v2340):NIL)?coerce_symbol_to_double_or_symbol(NIL):((rcl1_v984=rcl1_f984()),(((rcl1_v984?(rcl1_f2311()?(rcl1_f2122()?(rcl1_f1005()?(rcl1_f868()?rcl1_f882():rcl1_f867()):NIL):(rcl1_f844()?(rcl1_f814()?(rcl1_f852()?rcl1_f822():NIL):rcl1_f852()):rcl1_f822())):(rcl1_f803()?(rcl1_f1005()?(rcl1_f741()?rcl1_f751():rcl1_f740()):NIL):(rcl1_f702()?(rcl1_f661()?(rcl1_f710()?rcl1_f669():NIL):rcl1_f710()):rcl1_f669()))):NIL)?((rcl1_v610=rcl1_f610()),(rcl1_v610?rcl1_v610:(fabs(((rcl1_v984?(rcl1_f2311()?(rcl1_f2122()?(rcl1_f1005()?(rcl1_f868()?(rcl1_f647()?rcl1_f643():rcl1_f873()):rcl1_f652()):rcl1_f875()):(rcl1_f844()?(rcl1_f814()?rcl1_f637():rcl1_f849()):rcl1_f819())):(rcl1_f803()?(rcl1_f1005()?(rcl1_f741()?(rcl1_f626()?rcl1_f624():rcl1_f746()):rcl1_f631()):rcl1_f875()):(rcl1_f702()?(rcl1_f661()?rcl1_f616():rcl1_f707()):rcl1_f666()))):rcl1_f875())-(0.0)))<rcl1_v2340))):NIL)?((rcl1_v309=rcl1_f309()),(((rcl1_v309?rcl1_f371():NIL)?((rcl1_v306=rcl1_f306()),(rcl1_v306?rcl1_v306:(fabs(((rcl1_v309?rcl1_f314():rcl1_f875())-(0.0)))<rcl1_v2340))):NIL)?coerce_double_to_double_or_symbol((rcl1_v984?(rcl1_f2311()?(rcl1_f2122()?(rcl1_f1005()?(rcl1_f868()?(rcl1_f647()?(rcl1_v309?(rcl1_f572()?(rcl1_f1672()?(rcl1_f587()?(rcl1_f532()?(rcl1_f363()?((rcl1_v643=rcl1_f643()),(rcl1_v361=rcl1_f361()),((rcl1_v643>rcl1_v361)?rcl1_v643:rcl1_v361)):(rcl1_f564()?(rcl1_f543()?((rcl1_v643=rcl1_f643()),(rcl1_v557=rcl1_f557()),((rcl1_v643>rcl1_v557)?rcl1_v643:rcl1_v557)):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f508()?(rcl1_f478()?((rcl1_v643=rcl1_f643()),(rcl1_v355=rcl1_f355()),((rcl1_v643>rcl1_v355)?rcl1_v643:rcl1_v355)):(rcl1_f516()?((rcl1_v643=rcl1_f643()),(rcl1_v1559=rcl1_f1559()),((rcl1_v643>rcl1_v1559)?rcl1_v643:rcl1_v1559)):rcl1_f645())):(rcl1_f487()?(rcl1_f495()?((rcl1_v643=rcl1_f643()),(rcl1_v1538=rcl1_f1538()),((rcl1_v643>rcl1_v1538)?rcl1_v643:rcl1_v1538)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):(rcl1_f973()?(rcl1_f883()?(rcl1_v309?(rcl1_f572()?(rcl1_f1672()?(rcl1_f587()?(rcl1_f532()?(rcl1_f363()?((rcl1_v962=rcl1_f962()),(rcl1_v361=rcl1_f361()),((rcl1_v962>rcl1_v361)?rcl1_v962:rcl1_v361)):(rcl1_f564()?(rcl1_f543()?rcl1_f273():rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f508()?(rcl1_f478()?((rcl1_v962=rcl1_f962()),(rcl1_v355=rcl1_f355()),((rcl1_v962>rcl1_v355)?rcl1_v962:rcl1_v355)):(rcl1_f516()?((rcl1_v962=rcl1_f962()),(rcl1_v1559=rcl1_f1559()),((rcl1_v962>rcl1_v1559)?rcl1_v962:rcl1_v1559)):rcl1_f645())):(rcl1_f487()?(rcl1_f495()?((rcl1_v962=rcl1_f962()),(rcl1_v1538=rcl1_f1538()),((rcl1_v962>rcl1_v1538)?rcl1_v962:rcl1_v1538)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f844()?(rcl1_f814()?(rcl1_v309?(rcl1_f572()?(rcl1_f1672()?(rcl1_f587()?(rcl1_f532()?(rcl1_f363()?((rcl1_v637=rcl1_f637()),(rcl1_v361=rcl1_f361()),((rcl1_v637>rcl1_v361)?rcl1_v637:rcl1_v361)):(rcl1_f564()?(rcl1_f543()?((rcl1_v637=rcl1_f637()),(rcl1_v557=rcl1_f557()),((rcl1_v637>rcl1_v557)?rcl1_v637:rcl1_v557)):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f508()?(rcl1_f478()?((rcl1_v637=rcl1_f637()),(rcl1_v355=rcl1_f355()),((rcl1_v637>rcl1_v355)?rcl1_v637:rcl1_v355)):(rcl1_f516()?((rcl1_v637=rcl1_f637()),(rcl1_v1559=rcl1_f1559()),((rcl1_v637>rcl1_v1559)?rcl1_v637:rcl1_v1559)):rcl1_f645())):(rcl1_f487()?(rcl1_f495()?((rcl1_v637=rcl1_f637()),(rcl1_v1538=rcl1_f1538()),((rcl1_v637>rcl1_v1538)?rcl1_v637:rcl1_v1538)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):(rcl1_f852()?(rcl1_v309?(rcl1_f572()?(rcl1_f1672()?(rcl1_f587()?(rcl1_f532()?(rcl1_f363()?((rcl1_v1939=rcl1_f1939()),(rcl1_v361=rcl1_f361()),((rcl1_v1939>rcl1_v361)?rcl1_v1939:rcl1_v361)):(rcl1_f564()?(rcl1_f543()?((rcl1_v1939=rcl1_f1939()),(rcl1_v557=rcl1_f557()),((rcl1_v1939>rcl1_v557)?rcl1_v1939:rcl1_v557)):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f508()?(rcl1_f478()?((rcl1_v1939=rcl1_f1939()),(rcl1_v355=rcl1_f355()),((rcl1_v1939>rcl1_v355)?rcl1_v1939:rcl1_v355)):(rcl1_f516()?((rcl1_v1939=rcl1_f1939()),(rcl1_v1559=rcl1_f1559()),((rcl1_v1939>rcl1_v1559)?rcl1_v1939:rcl1_v1559)):rcl1_f645())):(rcl1_f487()?(rcl1_f495()?((rcl1_v1939=rcl1_f1939()),(rcl1_v1538=rcl1_f1538()),((rcl1_v1939>rcl1_v1538)?rcl1_v1939:rcl1_v1538)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):rcl1_f645())):(rcl1_f823()?(rcl1_f831()?(rcl1_v309?(rcl1_f572()?(rcl1_f1672()?(rcl1_f587()?(rcl1_f532()?(rcl1_f363()?((rcl1_v1918=rcl1_f1918()),(rcl1_v361=rcl1_f361()),((rcl1_v1918>rcl1_v361)?rcl1_v1918:rcl1_v361)):(rcl1_f564()?(rcl1_f543()?((rcl1_v1918=rcl1_f1918()),(rcl1_v557=rcl1_f557()),((rcl1_v1918>rcl1_v557)?rcl1_v1918:rcl1_v557)):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f508()?(rcl1_f478()?((rcl1_v1918=rcl1_f1918()),(rcl1_v355=rcl1_f355()),((rcl1_v1918>rcl1_v355)?rcl1_v1918:rcl1_v355)):(rcl1_f516()?((rcl1_v1918=rcl1_f1918()),(rcl1_v1559=rcl1_f1559()),((rcl1_v1918>rcl1_v1559)?rcl1_v1918:rcl1_v1559)):rcl1_f645())):(rcl1_f487()?(rcl1_f495()?((rcl1_v1918=rcl1_f1918()),(rcl1_v1538=rcl1_f1538()),((rcl1_v1918>rcl1_v1538)?rcl1_v1918:rcl1_v1538)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):rcl1_f645()):rcl1_f645()))):(rcl1_f803()?(rcl1_f1005()?(rcl1_f741()?(rcl1_f626()?(rcl1_v309?(rcl1_f572()?(rcl1_f469()?(rcl1_f587()?(rcl1_f457()?(rcl1_f344()?((rcl1_v624=rcl1_f624()),(rcl1_v342=rcl1_f342()),((rcl1_v624>rcl1_v342)?rcl1_v624:rcl1_v342)):(rcl1_f564()?(rcl1_f468()?((rcl1_v624=rcl1_f624()),(rcl1_v557=rcl1_f557()),((rcl1_v624>rcl1_v557)?rcl1_v624:rcl1_v557)):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f418()?(rcl1_f377()?((rcl1_v624=rcl1_f624()),(rcl1_v334=rcl1_f334()),((rcl1_v624>rcl1_v334)?rcl1_v624:rcl1_v334)):(rcl1_f426()?((rcl1_v624=rcl1_f624()),(rcl1_v440=rcl1_f440()),((rcl1_v624>rcl1_v440)?rcl1_v624:rcl1_v440)):rcl1_f645())):(rcl1_f386()?(rcl1_f394()?((rcl1_v624=rcl1_f624()),(rcl1_v408=rcl1_f408()),((rcl1_v624>rcl1_v408)?rcl1_v624:rcl1_v408)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):(rcl1_f973()?(rcl1_f752()?(rcl1_v309?(rcl1_f572()?(rcl1_f469()?(rcl1_f587()?(rcl1_f457()?(rcl1_f344()?((rcl1_v962=rcl1_f962()),(rcl1_v342=rcl1_f342()),((rcl1_v962>rcl1_v342)?rcl1_v962:rcl1_v342)):(rcl1_f564()?(rcl1_f468()?rcl1_f273():rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f418()?(rcl1_f377()?((rcl1_v962=rcl1_f962()),(rcl1_v334=rcl1_f334()),((rcl1_v962>rcl1_v334)?rcl1_v962:rcl1_v334)):(rcl1_f426()?((rcl1_v962=rcl1_f962()),(rcl1_v440=rcl1_f440()),((rcl1_v962>rcl1_v440)?rcl1_v962:rcl1_v440)):rcl1_f645())):(rcl1_f386()?(rcl1_f394()?((rcl1_v962=rcl1_f962()),(rcl1_v408=rcl1_f408()),((rcl1_v962>rcl1_v408)?rcl1_v962:rcl1_v408)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f702()?(rcl1_f661()?(rcl1_v309?(rcl1_f572()?(rcl1_f469()?(rcl1_f587()?(rcl1_f457()?(rcl1_f344()?((rcl1_v616=rcl1_f616()),(rcl1_v342=rcl1_f342()),((rcl1_v616>rcl1_v342)?rcl1_v616:rcl1_v342)):(rcl1_f564()?(rcl1_f468()?((rcl1_v616=rcl1_f616()),(rcl1_v557=rcl1_f557()),((rcl1_v616>rcl1_v557)?rcl1_v616:rcl1_v557)):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f418()?(rcl1_f377()?((rcl1_v616=rcl1_f616()),(rcl1_v334=rcl1_f334()),((rcl1_v616>rcl1_v334)?rcl1_v616:rcl1_v334)):(rcl1_f426()?((rcl1_v616=rcl1_f616()),(rcl1_v440=rcl1_f440()),((rcl1_v616>rcl1_v440)?rcl1_v616:rcl1_v440)):rcl1_f645())):(rcl1_f386()?(rcl1_f394()?((rcl1_v616=rcl1_f616()),(rcl1_v408=rcl1_f408()),((rcl1_v616>rcl1_v408)?rcl1_v616:rcl1_v408)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):(rcl1_f710()?(rcl1_v309?(rcl1_f572()?(rcl1_f469()?(rcl1_f587()?(rcl1_f457()?(rcl1_f344()?((rcl1_v724=rcl1_f724()),(rcl1_v342=rcl1_f342()),((rcl1_v724>rcl1_v342)?rcl1_v724:rcl1_v342)):(rcl1_f564()?(rcl1_f468()?((rcl1_v724=rcl1_f724()),(rcl1_v557=rcl1_f557()),((rcl1_v724>rcl1_v557)?rcl1_v724:rcl1_v557)):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f418()?(rcl1_f377()?((rcl1_v724=rcl1_f724()),(rcl1_v334=rcl1_f334()),((rcl1_v724>rcl1_v334)?rcl1_v724:rcl1_v334)):(rcl1_f426()?((rcl1_v724=rcl1_f724()),(rcl1_v440=rcl1_f440()),((rcl1_v724>rcl1_v440)?rcl1_v724:rcl1_v440)):rcl1_f645())):(rcl1_f386()?(rcl1_f394()?((rcl1_v724=rcl1_f724()),(rcl1_v408=rcl1_f408()),((rcl1_v724>rcl1_v408)?rcl1_v724:rcl1_v408)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):rcl1_f645())):(rcl1_f670()?(rcl1_f678()?(rcl1_v309?(rcl1_f572()?(rcl1_f469()?(rcl1_f587()?(rcl1_f457()?(rcl1_f344()?((rcl1_v692=rcl1_f692()),(rcl1_v342=rcl1_f342()),((rcl1_v692>rcl1_v342)?rcl1_v692:rcl1_v342)):(rcl1_f564()?(rcl1_f468()?((rcl1_v692=rcl1_f692()),(rcl1_v557=rcl1_f557()),((rcl1_v692>rcl1_v557)?rcl1_v692:rcl1_v557)):rcl1_f645()):rcl1_f645())):rcl1_f645()):rcl1_f645()):(rcl1_f418()?(rcl1_f377()?((rcl1_v692=rcl1_f692()),(rcl1_v334=rcl1_f334()),((rcl1_v692>rcl1_v334)?rcl1_v692:rcl1_v334)):(rcl1_f426()?((rcl1_v692=rcl1_f692()),(rcl1_v440=rcl1_f440()),((rcl1_v692>rcl1_v440)?rcl1_v692:rcl1_v440)):rcl1_f645())):(rcl1_f386()?(rcl1_f394()?((rcl1_v692=rcl1_f692()),(rcl1_v408=rcl1_f408()),((rcl1_v692>rcl1_v408)?rcl1_v692:rcl1_v408)):rcl1_f645()):rcl1_f645()))):rcl1_f645()):rcl1_f645()):rcl1_f645()):rcl1_f645())))):rcl1_f645())):(rcl1_v984?(rcl1_f2311()?(rcl1_f2122()?(rcl1_f1005()?((rcl1_v868=rcl1_f868()),(rcl1_v868?(rcl1_f647()?coerce_double_to_double_or_symbol(rcl1_f643()):rcl1_f54()):(rcl1_v868?rcl1_f54():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):(rcl1_f844()?(rcl1_f814()?coerce_double_to_double_or_symbol(rcl1_f637()):(rcl1_f852()?coerce_double_to_double_or_symbol(rcl1_f1939()):coerce_symbol_to_double_or_symbol(NIL))):(rcl1_f823()?(rcl1_f831()?coerce_double_to_double_or_symbol(rcl1_f1918()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(rcl1_f803()?(rcl1_f1005()?((rcl1_v741=rcl1_f741()),(rcl1_v741?(rcl1_f626()?coerce_double_to_double_or_symbol(rcl1_f624()):rcl1_f42()):(rcl1_v741?rcl1_f42():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):(rcl1_f702()?(rcl1_f661()?coerce_double_to_double_or_symbol(rcl1_f616()):(rcl1_f710()?coerce_double_to_double_or_symbol(rcl1_f724()):coerce_symbol_to_double_or_symbol(NIL))):(rcl1_f670()?(rcl1_f678()?coerce_double_to_double_or_symbol(rcl1_f692()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)))):(rcl1_f309()?(rcl1_f572()?(rcl1_f2311()?(rcl1_f1672()?(rcl1_f587()?((rcl1_v532=rcl1_f532()),(rcl1_v532?(rcl1_f363()?coerce_double_to_double_or_symbol(rcl1_f361()):rcl1_f27()):(rcl1_v532?rcl1_f27():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):(rcl1_f508()?(rcl1_f478()?coerce_double_to_double_or_symbol(rcl1_f355()):(rcl1_f516()?coerce_double_to_double_or_symbol(rcl1_f1559()):coerce_symbol_to_double_or_symbol(NIL))):(rcl1_f487()?(rcl1_f495()?coerce_double_to_double_or_symbol(rcl1_f1538()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(rcl1_f469()?(rcl1_f587()?((rcl1_v457=rcl1_f457()),(rcl1_v457?(rcl1_f344()?coerce_double_to_double_or_symbol(rcl1_f342()):rcl1_f15()):(rcl1_v457?rcl1_f15():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):(rcl1_f418()?(rcl1_f377()?coerce_double_to_double_or_symbol(rcl1_f334()):(rcl1_f426()?coerce_double_to_double_or_symbol(rcl1_f440()):coerce_symbol_to_double_or_symbol(NIL))):(rcl1_f386()?(rcl1_f394()?coerce_double_to_double_or_symbol(rcl1_f408()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))))); return;}
