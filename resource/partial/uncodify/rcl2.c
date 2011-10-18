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
double rcl2_v2360;
double rcl2_v2358;
double rcl2_v2356;
double rcl2_v2354;
double rcl2_v2352;
double rcl2_v2350;
double rcl2_v2348;
double rcl2_v2346;
double rcl2_v2344;
double rcl2_v2340;
double rcl2_v2342;
int rcl2_p645;
double rcl2_m645;
int rcl2_p2311;
int rcl2_m2311;
int rcl2_p875;
double rcl2_m875;
int rcl2_p880;
double rcl2_m880;
int rcl2_p928;
double rcl2_m928;
int rcl2_p2314;
double rcl2_m2314;
int rcl2_p2313;
double rcl2_m2313;
int rcl2_p1999;
double rcl2_m1999;
int rcl2_p911;
int rcl2_m911;
int rcl2_p891;
int rcl2_m891;
int rcl2_p890;
int rcl2_m890;
int rcl2_p2312;
double rcl2_m2312;
int rcl2_p802;
double rcl2_m802;
double rcl2_v2312;
int rcl2_p2309;
double rcl2_m2309;
int rcl2_p2304;
double rcl2_m2304;
int rcl2_p2303;
double rcl2_m2303;
int rcl2_p2302;
double rcl2_m2302;
int rcl2_p2050;
double rcl2_m2050;
int rcl2_p971;
double rcl2_m971;
int rcl2_p967;
double rcl2_m967;
int rcl2_p2268;
int rcl2_m2268;
int rcl2_p2256;
double rcl2_m2256;
int rcl2_p2263;
double rcl2_m2263;
int rcl2_p2254;
double rcl2_m2254;
int rcl2_p2154;
int rcl2_m2154;
int rcl2_p2232;
double rcl2_m2232;
int rcl2_v2154;
int rcl2_p997;
double rcl2_m997;
int rcl2_p2151;
double rcl2_m2151;
int rcl2_p2150;
double rcl2_m2150;
int rcl2_p2149;
double rcl2_m2149;
int rcl2_p1009;
double rcl2_m1009;
int rcl2_p2190;
double rcl2_m2190;
int rcl2_p2189;
double rcl2_m2189;
int rcl2_p2188;
double rcl2_m2188;
int rcl2_p2117;
double rcl2_m2117;
int rcl2_p2116;
double rcl2_m2116;
int rcl2_p2114;
double rcl2_m2114;
int rcl2_p2186;
double rcl2_m2186;
int rcl2_p2184;
double rcl2_m2184;
int rcl2_p2333;
double rcl2_m2333;
int rcl2_p2331;
double rcl2_m2331;
double rcl2_v2333;
double rcl2_v2331;
int rcl2_p2328;
double rcl2_m2328;
double rcl2_v2328;
int rcl2_p2310;
double rcl2_m2310;
int rcl2_p2326;
double rcl2_m2326;
int rcl2_p2307;
double rcl2_m2307;
int rcl2_p2306;
int rcl2_m2306;
int rcl2_p2327;
double rcl2_m2327;
int rcl2_p2325;
double rcl2_m2325;
double rcl2_v2325;
int rcl2_p2219;
double rcl2_m2219;
double rcl2_v802;
int rcl2_p799;
double rcl2_m799;
double rcl2_v2219;
int rcl2_p790;
double rcl2_m790;
int rcl2_p798;
int rcl2_m798;
int rcl2_p2323;
double rcl2_m2323;
int rcl2_p2321;
double rcl2_m2321;
int rcl2_p1668;
double rcl2_m1668;
int rcl2_p1563;
double rcl2_m1563;
int rcl2_p1676;
double rcl2_m1676;
int rcl2_p473;
double rcl2_m473;
int rcl2_p452;
double rcl2_m452;
double rcl2_v1676;
int rcl2_p1675;
double rcl2_m1675;
int rcl2_p583;
double rcl2_m583;
int rcl2_p1692;
double rcl2_m1692;
int rcl2_p578;
int rcl2_m578;
int rcl2_p2322;
double rcl2_m2322;
int rcl2_p1943;
double rcl2_m1943;
int rcl2_p2115;
double rcl2_m2115;
int rcl2_p2127;
double rcl2_m2127;
int rcl2_p808;
double rcl2_m808;
int rcl2_p736;
double rcl2_m736;
double rcl2_v2127;
int rcl2_p2125;
double rcl2_m2125;
int rcl2_p996;
double rcl2_m996;
int rcl2_p2148;
double rcl2_m2148;
int rcl2_p991;
int rcl2_m991;
int rcl2_p2305;
double rcl2_m2305;
int rcl2_p2260;
double rcl2_m2260;
int rcl2_p1666;
double rcl2_m1666;
int rcl2_p2251;
double rcl2_m2251;
int rcl2_p2258;
double rcl2_m2258;
int rcl2_p981;
int rcl2_m981;
int rcl2_p564;
int rcl2_m564;
int rcl2_v981;
int rcl2_p557;
double rcl2_m557;
int rcl2_p556;
double rcl2_m556;
double rcl2_v556;
int rcl2_p544;
int rcl2_m544;
int rcl2_p2112;
double rcl2_m2112;
int rcl2_p973;
int rcl2_m973;
int rcl2_v981;
int rcl2_p962;
double rcl2_m962;
double rcl2_v962;
double rcl2_v557;
int rcl2_p273;
double rcl2_m273;
int rcl2_p961;
double rcl2_m961;
double rcl2_v961;
int rcl2_p947;
int rcl2_m947;
int rcl2_p2300;
double rcl2_m2300;
int rcl2_p1704;
double rcl2_m1704;
int rcl2_p1702;
double rcl2_m1702;
int rcl2_p2279;
double rcl2_m2279;
int rcl2_p2277;
double rcl2_m2277;
int rcl2_p1011;
int rcl2_m1011;
double rcl2_v2279;
double rcl2_v2277;
int rcl2_p943;
int rcl2_m943;
int rcl2_p926;
double rcl2_m926;
int rcl2_p786;
double rcl2_m786;
int rcl2_p925;
double rcl2_m925;
int rcl2_p920;
double rcl2_m920;
int rcl2_p782;
double rcl2_m782;
int rcl2_p919;
double rcl2_m919;
int rcl2_p931;
int rcl2_m931;
int rcl2_p796;
int rcl2_m796;
int rcl2_p775;
double rcl2_m775;
int rcl2_p776;
double rcl2_m776;
int rcl2_p771;
double rcl2_m771;
double rcl2_v771;
int rcl2_p763;
double rcl2_m763;
int rcl2_p930;
int rcl2_m930;
int rcl2_p909;
double rcl2_m909;
int rcl2_p910;
double rcl2_m910;
int rcl2_p904;
double rcl2_m904;
double rcl2_v904;
int rcl2_p896;
double rcl2_m896;
int rcl2_p934;
int rcl2_m934;
int rcl2_p797;
int rcl2_m797;
int rcl2_v797;
double rcl2_v763;
int rcl2_p753;
int rcl2_m753;
int rcl2_v544;
int rcl2_p468;
int rcl2_m468;
int rcl2_p342;
double rcl2_m342;
int rcl2_p15;
double_or_symbol rcl2_m15;
int rcl2_p467;
int rcl2_m467;
int rcl2_p462;
double rcl2_m462;
int rcl2_p465;
double rcl2_m465;
int rcl2_p464;
int rcl2_m464;
int rcl2_v464;
int rcl2_p457;
int rcl2_m457;
int rcl2_p456;
int rcl2_m456;
int rcl2_p349;
double rcl2_m349;
int rcl2_p351;
double rcl2_m351;
int rcl2_p350;
int rcl2_m350;
int rcl2_v350;
int rcl2_p344;
int rcl2_m344;
int rcl2_v947;
int rcl2_p752;
int rcl2_m752;
int rcl2_p42;
double_or_symbol rcl2_m42;
int rcl2_p624;
double rcl2_m624;
int rcl2_p751;
int rcl2_m751;
int rcl2_p746;
double rcl2_m746;
int rcl2_p749;
double rcl2_m749;
int rcl2_p748;
int rcl2_m748;
int rcl2_v748;
int rcl2_p741;
int rcl2_m741;
int rcl2_p631;
double rcl2_m631;
int rcl2_p633;
double rcl2_m633;
int rcl2_p632;
int rcl2_m632;
int rcl2_p740;
int rcl2_m740;
int rcl2_v632;
int rcl2_p626;
int rcl2_m626;
int rcl2_p933;
int rcl2_m933;
int rcl2_v933;
double rcl2_v896;
int rcl2_p884;
int rcl2_m884;
int rcl2_v544;
int rcl2_p543;
int rcl2_m543;
int rcl2_p361;
double rcl2_m361;
int rcl2_p27;
double_or_symbol rcl2_m27;
int rcl2_p542;
int rcl2_m542;
int rcl2_p537;
double rcl2_m537;
int rcl2_p540;
double rcl2_m540;
int rcl2_p539;
int rcl2_m539;
int rcl2_v539;
int rcl2_p532;
int rcl2_m532;
int rcl2_p531;
int rcl2_m531;
int rcl2_p368;
double rcl2_m368;
int rcl2_p370;
double rcl2_m370;
int rcl2_p369;
int rcl2_m369;
int rcl2_v369;
int rcl2_p363;
int rcl2_m363;
int rcl2_v947;
int rcl2_p883;
int rcl2_m883;
int rcl2_p54;
double_or_symbol rcl2_m54;
int rcl2_p643;
double rcl2_m643;
int rcl2_p882;
int rcl2_m882;
int rcl2_p873;
double rcl2_m873;
int rcl2_p878;
double rcl2_m878;
int rcl2_p877;
int rcl2_m877;
int rcl2_v877;
int rcl2_p868;
int rcl2_m868;
int rcl2_p652;
double rcl2_m652;
int rcl2_p654;
double rcl2_m654;
int rcl2_p653;
int rcl2_m653;
int rcl2_p867;
int rcl2_m867;
int rcl2_v653;
int rcl2_p647;
int rcl2_m647;
int rcl2_p2171;
double rcl2_m2171;
int rcl2_p2169;
double rcl2_m2169;
int rcl2_p2337;
double rcl2_m2337;
double rcl2_v2337;
int rcl2_p2164;
double rcl2_m2164;
int rcl2_p2162;
double rcl2_m2162;
double rcl2_v2164;
double rcl2_v2162;
int rcl2_p2159;
double rcl2_m2159;
double rcl2_v1704;
double rcl2_v1702;
int rcl2_p587;
int rcl2_m587;
int rcl2_v587;
double rcl2_v583;
int rcl2_p572;
int rcl2_m572;
double rcl2_v2159;
int rcl2_p2126;
double rcl2_m2126;
int rcl2_p1673;
double rcl2_m1673;
int rcl2_p1672;
int rcl2_m1672;
int rcl2_p1653;
double rcl2_m1653;
int rcl2_p1538;
double rcl2_m1538;
int rcl2_p1537;
double rcl2_m1537;
double rcl2_v1537;
int rcl2_p496;
int rcl2_m496;
int rcl2_v496;
int rcl2_p495;
int rcl2_m495;
int rcl2_p492;
double rcl2_m492;
int rcl2_p494;
double rcl2_m494;
int rcl2_p493;
int rcl2_m493;
int rcl2_v493;
int rcl2_p487;
int rcl2_m487;
int rcl2_p486;
int rcl2_m486;
int rcl2_p483;
double rcl2_m483;
int rcl2_p485;
double rcl2_m485;
int rcl2_p484;
int rcl2_m484;
int rcl2_v484;
int rcl2_p478;
int rcl2_m478;
int rcl2_p1559;
double rcl2_m1559;
int rcl2_p1558;
double rcl2_m1558;
double rcl2_v1558;
int rcl2_p517;
int rcl2_m517;
int rcl2_v517;
int rcl2_p516;
int rcl2_m516;
double rcl2_v1559;
double rcl2_v1538;
int rcl2_p355;
double rcl2_m355;
int rcl2_p513;
double rcl2_m513;
int rcl2_p515;
double rcl2_m515;
int rcl2_p514;
int rcl2_m514;
int rcl2_v514;
int rcl2_p508;
int rcl2_m508;
int rcl2_p2091;
double rcl2_m2091;
double rcl2_v473;
int rcl2_p470;
double rcl2_m470;
int rcl2_p469;
int rcl2_m469;
int rcl2_p450;
double rcl2_m450;
int rcl2_p416;
double rcl2_m416;
double rcl2_v416;
int rcl2_p408;
double rcl2_m408;
int rcl2_p407;
double rcl2_m407;
double rcl2_v407;
int rcl2_p395;
int rcl2_m395;
int rcl2_v395;
int rcl2_p394;
int rcl2_m394;
int rcl2_p391;
double rcl2_m391;
int rcl2_p393;
double rcl2_m393;
int rcl2_p392;
int rcl2_m392;
int rcl2_v392;
int rcl2_p386;
int rcl2_m386;
int rcl2_p385;
int rcl2_m385;
int rcl2_p382;
double rcl2_m382;
int rcl2_p384;
double rcl2_m384;
int rcl2_p383;
int rcl2_m383;
int rcl2_v383;
int rcl2_p377;
int rcl2_m377;
int rcl2_p448;
double rcl2_m448;
double rcl2_v448;
int rcl2_p440;
double rcl2_m440;
int rcl2_p439;
double rcl2_m439;
double rcl2_v439;
int rcl2_p427;
int rcl2_m427;
int rcl2_v427;
int rcl2_p426;
int rcl2_m426;
double rcl2_v440;
double rcl2_v408;
int rcl2_p334;
double rcl2_m334;
int rcl2_p423;
double rcl2_m423;
int rcl2_p425;
double rcl2_m425;
int rcl2_p424;
int rcl2_m424;
int rcl2_v424;
int rcl2_p418;
int rcl2_m418;
int rcl2_p371;
int rcl2_m371;
int rcl2_p314;
double rcl2_m314;
int rcl2_p329;
double rcl2_m329;
int rcl2_p328;
int rcl2_m328;
int rcl2_v328;
int rcl2_p309;
int rcl2_m309;
int rcl2_p306;
int rcl2_m306;
double rcl2_v808;
int rcl2_p804;
double rcl2_m804;
int rcl2_p803;
int rcl2_m803;
int rcl2_p734;
double rcl2_m734;
int rcl2_p700;
double rcl2_m700;
double rcl2_v700;
int rcl2_p692;
double rcl2_m692;
int rcl2_p691;
double rcl2_m691;
double rcl2_v691;
int rcl2_p679;
int rcl2_m679;
int rcl2_v679;
int rcl2_p678;
int rcl2_m678;
int rcl2_p675;
double rcl2_m675;
int rcl2_p677;
double rcl2_m677;
int rcl2_p676;
int rcl2_m676;
int rcl2_v676;
int rcl2_p670;
int rcl2_m670;
int rcl2_p669;
int rcl2_m669;
int rcl2_p666;
double rcl2_m666;
int rcl2_p668;
double rcl2_m668;
int rcl2_p667;
int rcl2_m667;
int rcl2_v667;
int rcl2_p661;
int rcl2_m661;
int rcl2_p732;
double rcl2_m732;
double rcl2_v732;
int rcl2_p724;
double rcl2_m724;
int rcl2_p723;
double rcl2_m723;
double rcl2_v723;
int rcl2_p711;
int rcl2_m711;
int rcl2_v711;
int rcl2_p710;
int rcl2_m710;
double rcl2_v724;
double rcl2_v692;
int rcl2_p616;
double rcl2_m616;
int rcl2_p707;
double rcl2_m707;
int rcl2_p709;
double rcl2_m709;
int rcl2_p708;
int rcl2_m708;
int rcl2_v708;
int rcl2_p702;
int rcl2_m702;
int rcl2_p2123;
double rcl2_m2123;
int rcl2_p2122;
int rcl2_m2122;
int rcl2_p2099;
double rcl2_m2099;
int rcl2_p1918;
double rcl2_m1918;
int rcl2_p1917;
double rcl2_m1917;
double rcl2_v1917;
int rcl2_p832;
int rcl2_m832;
int rcl2_v832;
int rcl2_p831;
int rcl2_m831;
int rcl2_p828;
double rcl2_m828;
int rcl2_p830;
double rcl2_m830;
int rcl2_p829;
int rcl2_m829;
int rcl2_v829;
int rcl2_p823;
int rcl2_m823;
int rcl2_p822;
int rcl2_m822;
int rcl2_p819;
double rcl2_m819;
int rcl2_p821;
double rcl2_m821;
int rcl2_p820;
int rcl2_m820;
int rcl2_v820;
int rcl2_p814;
int rcl2_m814;
int rcl2_p1939;
double rcl2_m1939;
int rcl2_p1938;
double rcl2_m1938;
double rcl2_v1938;
int rcl2_p853;
int rcl2_m853;
int rcl2_v853;
int rcl2_p852;
int rcl2_m852;
double rcl2_v1939;
double rcl2_v1918;
int rcl2_p637;
double rcl2_m637;
int rcl2_p849;
double rcl2_m849;
int rcl2_p851;
double rcl2_m851;
int rcl2_p850;
int rcl2_m850;
int rcl2_v850;
int rcl2_p844;
int rcl2_m844;
double rcl2_v2171;
double rcl2_v2169;
int rcl2_p1005;
int rcl2_m1005;
int rcl2_v1005;
double rcl2_v996;
int rcl2_p984;
int rcl2_m984;
int rcl2_p610;
int rcl2_m610;
int rcl2_v984;
int rcl2_v610;
int rcl2_v309;
int rcl2_v306;
double rcl2_v643;
double rcl2_v361;
double rcl2_v643;
double rcl2_v557;
double rcl2_v643;
double rcl2_v355;
double rcl2_v643;
double rcl2_v1559;
double rcl2_v643;
double rcl2_v1538;
double rcl2_v962;
double rcl2_v361;
double rcl2_v962;
double rcl2_v355;
double rcl2_v962;
double rcl2_v1559;
double rcl2_v962;
double rcl2_v1538;
double rcl2_v637;
double rcl2_v361;
double rcl2_v637;
double rcl2_v557;
double rcl2_v637;
double rcl2_v355;
double rcl2_v637;
double rcl2_v1559;
double rcl2_v637;
double rcl2_v1538;
double rcl2_v1939;
double rcl2_v361;
double rcl2_v1939;
double rcl2_v557;
double rcl2_v1939;
double rcl2_v355;
double rcl2_v1939;
double rcl2_v1559;
double rcl2_v1939;
double rcl2_v1538;
double rcl2_v1918;
double rcl2_v361;
double rcl2_v1918;
double rcl2_v557;
double rcl2_v1918;
double rcl2_v355;
double rcl2_v1918;
double rcl2_v1559;
double rcl2_v1918;
double rcl2_v1538;
double rcl2_v624;
double rcl2_v342;
double rcl2_v624;
double rcl2_v557;
double rcl2_v624;
double rcl2_v334;
double rcl2_v624;
double rcl2_v440;
double rcl2_v624;
double rcl2_v408;
double rcl2_v962;
double rcl2_v342;
double rcl2_v962;
double rcl2_v334;
double rcl2_v962;
double rcl2_v440;
double rcl2_v962;
double rcl2_v408;
double rcl2_v616;
double rcl2_v342;
double rcl2_v616;
double rcl2_v557;
double rcl2_v616;
double rcl2_v334;
double rcl2_v616;
double rcl2_v440;
double rcl2_v616;
double rcl2_v408;
double rcl2_v724;
double rcl2_v342;
double rcl2_v724;
double rcl2_v557;
double rcl2_v724;
double rcl2_v334;
double rcl2_v724;
double rcl2_v440;
double rcl2_v724;
double rcl2_v408;
double rcl2_v692;
double rcl2_v342;
double rcl2_v692;
double rcl2_v557;
double rcl2_v692;
double rcl2_v334;
double rcl2_v692;
double rcl2_v440;
double rcl2_v692;
double rcl2_v408;
int rcl2_v868;
int rcl2_v741;
int rcl2_v532;
int rcl2_v457;
static double rcl2_f645(){if (rcl2_p645) return rcl2_m645; else {rcl2_p645=T;return rcl2_m645=error("Non-numeric argument to MIN");}}
static int rcl2_f2311(){if (rcl2_p2311) return rcl2_m2311; else {rcl2_p2311=T;return rcl2_m2311=(rcl2_v2352==0.0);}}
static double rcl2_f875(){if (rcl2_p875) return rcl2_m875; else {rcl2_p875=T;return rcl2_m875=error("Argument X not of type FLOAT");}}
static double rcl2_f880(){if (rcl2_p880) return rcl2_m880; else {rcl2_p880=T;return rcl2_m880=error("Argument X not of type REAL");}}
static double rcl2_f928(){if (rcl2_p928) return rcl2_m928; else {rcl2_p928=T;return rcl2_m928=error("SLOT-VALUE called on non-instance");}}
static double rcl2_f2314(){if (rcl2_p2314) return rcl2_m2314; else {rcl2_p2314=T;return rcl2_m2314=(rcl2_v2352*rcl2_v2360);}}
static double rcl2_f2313(){if (rcl2_p2313) return rcl2_m2313; else {rcl2_p2313=T;return rcl2_m2313=(rcl2_v2350*rcl2_v2358);}}
static double rcl2_f1999(){if (rcl2_p1999) return rcl2_m1999; else {rcl2_p1999=T;return rcl2_m1999=((rcl2_f2314()+rcl2_f2313())-rcl2_v2348);}}
static int rcl2_f911(){if (rcl2_p911) return rcl2_m911; else {rcl2_p911=T;return rcl2_m911=(fabs((rcl2_f1999()-(0.0)))<rcl2_v2340);}}
static int rcl2_f891(){if (rcl2_p891) return rcl2_m891; else {rcl2_p891=T;return rcl2_m891=(rcl2_f1999()>(0.0));}}
static int rcl2_f890(){if (rcl2_p890) return rcl2_m890; else {rcl2_p890=T;return rcl2_m890=(rcl2_f891()?NIL:T);}}
static double rcl2_f2312(){if (rcl2_p2312) return rcl2_m2312; else {rcl2_p2312=T;return rcl2_m2312=(rcl2_v2348-rcl2_f2314()-rcl2_f2313());}}
static double rcl2_f802(){if (rcl2_p802) return rcl2_m802; else {rcl2_p802=T;return rcl2_m802=((-2.0)*rcl2_v2350*rcl2_f2312());}}
static double rcl2_f2309(){if (rcl2_p2309) return rcl2_m2309; else {rcl2_p2309=T;return rcl2_m2309=((rcl2_v2312=rcl2_f2312()),(rcl2_v2312*rcl2_v2312));}}
static double rcl2_f2304(){if (rcl2_p2304) return rcl2_m2304; else {rcl2_p2304=T;return rcl2_m2304=(rcl2_v2352*rcl2_v2358);}}
static double rcl2_f2303(){if (rcl2_p2303) return rcl2_m2303; else {rcl2_p2303=T;return rcl2_m2303=(rcl2_v2350*rcl2_v2360);}}
static double rcl2_f2302(){if (rcl2_p2302) return rcl2_m2302; else {rcl2_p2302=T;return rcl2_m2302=(rcl2_f2304()-rcl2_f2303());}}
static double rcl2_f2050(){if (rcl2_p2050) return rcl2_m2050; else {rcl2_p2050=T;return rcl2_m2050=atan2((rcl2_v2358-rcl2_v2344),(rcl2_v2360-rcl2_v2346));}}
static double rcl2_f971(){if (rcl2_p971) return rcl2_m971; else {rcl2_p971=T;return rcl2_m971=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rcl2_f967(){if (rcl2_p967) return rcl2_m967; else {rcl2_p967=T;return rcl2_m967=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static int rcl2_f2268(){if (rcl2_p2268) return rcl2_m2268; else {rcl2_p2268=T;return rcl2_m2268=(rcl2_v2350>0.0);}}
static double rcl2_f2256(){if (rcl2_p2256) return rcl2_m2256; else {rcl2_p2256=T;return rcl2_m2256=(rcl2_f2268()?(rcl2_f2303()-rcl2_f2304()):rcl2_f2302());}}
static double rcl2_f2263(){if (rcl2_p2263) return rcl2_m2263; else {rcl2_p2263=T;return rcl2_m2263=(rcl2_f2268()?(-rcl2_v2352):rcl2_v2352);}}
static double rcl2_f2254(){if (rcl2_p2254) return rcl2_m2254; else {rcl2_p2254=T;return rcl2_m2254=((rcl2_v2348*rcl2_f2263())-(rcl2_v2350*rcl2_f2256()));}}
static int rcl2_f2154(){if (rcl2_p2154) return rcl2_m2154; else {rcl2_p2154=T;return rcl2_m2154=(rcl2_v2350==0.0);}}
static double rcl2_f2232(){if (rcl2_p2232) return rcl2_m2232; else {rcl2_p2232=T;return rcl2_m2232=(rcl2_v2348/rcl2_v2350);}}
static double rcl2_f997(){if (rcl2_p997) return rcl2_m997; else {rcl2_p997=T;return rcl2_m997=((rcl2_v2154=rcl2_f2154()),((rcl2_v2352*(rcl2_v2154?(rcl2_v2348/rcl2_v2352):(0.0)))+(rcl2_v2350*(rcl2_v2154?(0.0):rcl2_f2232()))));}}
static double rcl2_f2151(){if (rcl2_p2151) return rcl2_m2151; else {rcl2_p2151=T;return rcl2_m2151=(rcl2_v2352*rcl2_v2346);}}
static double rcl2_f2150(){if (rcl2_p2150) return rcl2_m2150; else {rcl2_p2150=T;return rcl2_m2150=(rcl2_v2350*rcl2_v2344);}}
static double rcl2_f2149(){if (rcl2_p2149) return rcl2_m2149; else {rcl2_p2149=T;return rcl2_m2149=(rcl2_f2151()+rcl2_f2150());}}
static double rcl2_f1009(){if (rcl2_p1009) return rcl2_m1009; else {rcl2_p1009=T;return rcl2_m1009=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static double rcl2_f2190(){if (rcl2_p2190) return rcl2_m2190; else {rcl2_p2190=T;return rcl2_m2190=(rcl2_v2352*rcl2_v2344);}}
static double rcl2_f2189(){if (rcl2_p2189) return rcl2_m2189; else {rcl2_p2189=T;return rcl2_m2189=(rcl2_v2350*rcl2_v2346);}}
static double rcl2_f2188(){if (rcl2_p2188) return rcl2_m2188; else {rcl2_p2188=T;return rcl2_m2188=(rcl2_f2190()-rcl2_f2189());}}
static double rcl2_f2117(){if (rcl2_p2117) return rcl2_m2117; else {rcl2_p2117=T;return rcl2_m2117=(rcl2_f2268()?(rcl2_f2189()-rcl2_f2190()):rcl2_f2188());}}
static double rcl2_f2116(){if (rcl2_p2116) return rcl2_m2116; else {rcl2_p2116=T;return rcl2_m2116=(rcl2_v2350*rcl2_f2117());}}
static double rcl2_f2114(){if (rcl2_p2114) return rcl2_m2114; else {rcl2_p2114=T;return rcl2_m2114=(rcl2_v2352*rcl2_f2117());}}
static double rcl2_f2186(){if (rcl2_p2186) return rcl2_m2186; else {rcl2_p2186=T;return rcl2_m2186=(rcl2_v2350*rcl2_f2188());}}
static double rcl2_f2184(){if (rcl2_p2184) return rcl2_m2184; else {rcl2_p2184=T;return rcl2_m2184=(rcl2_v2352*rcl2_f2188());}}
static double rcl2_f2333(){if (rcl2_p2333) return rcl2_m2333; else {rcl2_p2333=T;return rcl2_m2333=(rcl2_v2360-rcl2_v2356);}}
static double rcl2_f2331(){if (rcl2_p2331) return rcl2_m2331; else {rcl2_p2331=T;return rcl2_m2331=(rcl2_v2358-rcl2_v2354);}}
static double rcl2_f2328(){if (rcl2_p2328) return rcl2_m2328; else {rcl2_p2328=T;return rcl2_m2328=((rcl2_v2333=rcl2_f2333()),(rcl2_v2331=rcl2_f2331()),sqrt(((rcl2_v2333*rcl2_v2333)+(rcl2_v2331*rcl2_v2331))));}}
static double rcl2_f2310(){if (rcl2_p2310) return rcl2_m2310; else {rcl2_p2310=T;return rcl2_m2310=((rcl2_v2328=rcl2_f2328()),(rcl2_v2328*rcl2_v2328));}}
static double rcl2_f2326(){if (rcl2_p2326) return rcl2_m2326; else {rcl2_p2326=T;return rcl2_m2326=(rcl2_v2350*rcl2_v2350);}}
static double rcl2_f2307(){if (rcl2_p2307) return rcl2_m2307; else {rcl2_p2307=T;return rcl2_m2307=(rcl2_f2310()-(rcl2_f2309()/rcl2_f2326()));}}
static int rcl2_f2306(){if (rcl2_p2306) return rcl2_m2306; else {rcl2_p2306=T;return rcl2_m2306=(rcl2_f2307()<0.0);}}
static double rcl2_f2327(){if (rcl2_p2327) return rcl2_m2327; else {rcl2_p2327=T;return rcl2_m2327=(rcl2_v2352*rcl2_v2352);}}
static double rcl2_f2325(){if (rcl2_p2325) return rcl2_m2325; else {rcl2_p2325=T;return rcl2_m2325=(rcl2_f2327()+rcl2_f2326());}}
static double rcl2_f2219(){if (rcl2_p2219) return rcl2_m2219; else {rcl2_p2219=T;return rcl2_m2219=((rcl2_v2325=rcl2_f2325()),(rcl2_v2325+rcl2_v2325));}}
static double rcl2_f799(){if (rcl2_p799) return rcl2_m799; else {rcl2_p799=T;return rcl2_m799=((rcl2_v802=rcl2_f802()),((rcl2_v802*rcl2_v802)-((4.0)*rcl2_f2325()*(rcl2_f2309()-(rcl2_f2327()*rcl2_f2310())))));}}
static double rcl2_f790(){if (rcl2_p790) return rcl2_m790; else {rcl2_p790=T;return rcl2_m790=((rcl2_v2219=rcl2_f2219()),((((-rcl2_f802())/rcl2_v2219)+(sqrt(rcl2_f799())/rcl2_v2219))+rcl2_v2358));}}
static int rcl2_f798(){if (rcl2_p798) return rcl2_m798; else {rcl2_p798=T;return rcl2_m798=(rcl2_f799()<0.0);}}
static double rcl2_f2323(){if (rcl2_p2323) return rcl2_m2323; else {rcl2_p2323=T;return rcl2_m2323=(rcl2_f2328()*sqrt(rcl2_f2325()));}}
static double rcl2_f2321(){if (rcl2_p2321) return rcl2_m2321; else {rcl2_p2321=T;return rcl2_m2321=(rcl2_v2348-rcl2_f2323());}}
static double rcl2_f1668(){if (rcl2_p1668) return rcl2_m1668; else {rcl2_p1668=T;return rcl2_m1668=((rcl2_f2321()*rcl2_f2263())-rcl2_f2116());}}
static double rcl2_f1563(){if (rcl2_p1563) return rcl2_m1563; else {rcl2_p1563=T;return rcl2_m1563=((rcl2_f2321()/rcl2_v2350)-rcl2_v2344);}}
static double rcl2_f1676(){if (rcl2_p1676) return rcl2_m1676; else {rcl2_p1676=T;return rcl2_m1676=(rcl2_f2321()-rcl2_f2151()-rcl2_f2150());}}
static double rcl2_f473(){if (rcl2_p473) return rcl2_m473; else {rcl2_p473=T;return rcl2_m473=((-2.0)*rcl2_v2350*rcl2_f1676());}}
static double rcl2_f452(){if (rcl2_p452) return rcl2_m452; else {rcl2_p452=T;return rcl2_m452=((-rcl2_f473())/rcl2_f2219());}}
static double rcl2_f1675(){if (rcl2_p1675) return rcl2_m1675; else {rcl2_p1675=T;return rcl2_m1675=((rcl2_v1676=rcl2_f1676()),(rcl2_v1676*rcl2_v1676));}}
static double rcl2_f583(){if (rcl2_p583) return rcl2_m583; else {rcl2_p583=T;return rcl2_m583=(rcl2_f997()-rcl2_f2321());}}
static double rcl2_f1692(){if (rcl2_p1692) return rcl2_m1692; else {rcl2_p1692=T;return rcl2_m1692=(rcl2_f2149()-rcl2_f2321());}}
static int rcl2_f578(){if (rcl2_p578) return rcl2_m578; else {rcl2_p578=T;return rcl2_m578=(rcl2_f1692()>(0.0));}}
static double rcl2_f2322(){if (rcl2_p2322) return rcl2_m2322; else {rcl2_p2322=T;return rcl2_m2322=(rcl2_v2348+rcl2_f2323());}}
static double rcl2_f1943(){if (rcl2_p1943) return rcl2_m1943; else {rcl2_p1943=T;return rcl2_m1943=((rcl2_f2322()/rcl2_v2350)-rcl2_v2344);}}
static double rcl2_f2115(){if (rcl2_p2115) return rcl2_m2115; else {rcl2_p2115=T;return rcl2_m2115=((rcl2_f2322()*rcl2_f2263())-rcl2_f2116());}}
static double rcl2_f2127(){if (rcl2_p2127) return rcl2_m2127; else {rcl2_p2127=T;return rcl2_m2127=(rcl2_f2322()-rcl2_f2151()-rcl2_f2150());}}
static double rcl2_f808(){if (rcl2_p808) return rcl2_m808; else {rcl2_p808=T;return rcl2_m808=((-2.0)*rcl2_v2350*rcl2_f2127());}}
static double rcl2_f736(){if (rcl2_p736) return rcl2_m736; else {rcl2_p736=T;return rcl2_m736=((-rcl2_f808())/rcl2_f2219());}}
static double rcl2_f2125(){if (rcl2_p2125) return rcl2_m2125; else {rcl2_p2125=T;return rcl2_m2125=((rcl2_v2127=rcl2_f2127()),(rcl2_v2127*rcl2_v2127));}}
static double rcl2_f996(){if (rcl2_p996) return rcl2_m996; else {rcl2_p996=T;return rcl2_m996=(rcl2_f997()-rcl2_f2322());}}
static double rcl2_f2148(){if (rcl2_p2148) return rcl2_m2148; else {rcl2_p2148=T;return rcl2_m2148=(rcl2_f2149()-rcl2_f2322());}}
static int rcl2_f991(){if (rcl2_p991) return rcl2_m991; else {rcl2_p991=T;return rcl2_m991=(rcl2_f2148()>(0.0));}}
static double rcl2_f2305(){if (rcl2_p2305) return rcl2_m2305; else {rcl2_p2305=T;return rcl2_m2305=(-rcl2_v2350);}}
static double rcl2_f2260(){if (rcl2_p2260) return rcl2_m2260; else {rcl2_p2260=T;return rcl2_m2260=(rcl2_f2268()?rcl2_v2350:rcl2_f2305());}}
static double rcl2_f1666(){if (rcl2_p1666) return rcl2_m1666; else {rcl2_p1666=T;return rcl2_m1666=(rcl2_f2114()-(rcl2_f2321()*rcl2_f2260()));}}
static double rcl2_f2251(){if (rcl2_p2251) return rcl2_m2251; else {rcl2_p2251=T;return rcl2_m2251=((rcl2_v2352*rcl2_f2256())-(rcl2_v2348*rcl2_f2260()));}}
static double rcl2_f2258(){if (rcl2_p2258) return rcl2_m2258; else {rcl2_p2258=T;return rcl2_m2258=((rcl2_v2352*rcl2_f2263())-(rcl2_v2350*rcl2_f2260()));}}
static int rcl2_f981(){if (rcl2_p981) return rcl2_m981; else {rcl2_p981=T;return rcl2_m981=(fabs((rcl2_f2258()-(0.0)))<rcl2_v2340);}}
static int rcl2_f564(){if (rcl2_p564) return rcl2_m564; else {rcl2_p564=T;return rcl2_m564=(rcl2_f981()?((fabs((rcl2_f1668()-(0.0)))<rcl2_v2340)?(fabs((rcl2_f1666()-(0.0)))<rcl2_v2340):NIL):T);}}
static double rcl2_f557(){if (rcl2_p557) return rcl2_m557; else {rcl2_p557=T;return rcl2_m557=((rcl2_v981=rcl2_f981()),normalize_rotation((atan2(((rcl2_v981?rcl2_f971():(rcl2_f1666()/rcl2_f2258()))-rcl2_v2344),((rcl2_v981?rcl2_f967():(rcl2_f1668()/rcl2_f2258()))-rcl2_v2346))-rcl2_f2050())));}}
static double rcl2_f556(){if (rcl2_p556) return rcl2_m556; else {rcl2_p556=T;return rcl2_m556=normalize_rotation(rcl2_f557());}}
static int rcl2_f544(){if (rcl2_p544) return rcl2_m544; else {rcl2_p544=T;return rcl2_m544=((rcl2_v556=rcl2_f556()),((fabs((rcl2_v556-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v556-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v556-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static double rcl2_f2112(){if (rcl2_p2112) return rcl2_m2112; else {rcl2_p2112=T;return rcl2_m2112=(rcl2_f2114()-(rcl2_f2322()*rcl2_f2260()));}}
static int rcl2_f973(){if (rcl2_p973) return rcl2_m973; else {rcl2_p973=T;return rcl2_m973=(rcl2_f981()?((fabs((rcl2_f2115()-(0.0)))<rcl2_v2340)?(fabs((rcl2_f2112()-(0.0)))<rcl2_v2340):NIL):T);}}
static double rcl2_f962(){if (rcl2_p962) return rcl2_m962; else {rcl2_p962=T;return rcl2_m962=((rcl2_v981=rcl2_f981()),normalize_rotation((atan2(((rcl2_v981?rcl2_f971():(rcl2_f2112()/rcl2_f2258()))-rcl2_v2344),((rcl2_v981?rcl2_f967():(rcl2_f2115()/rcl2_f2258()))-rcl2_v2346))-rcl2_f2050())));}}
static double rcl2_f273(){if (rcl2_p273) return rcl2_m273; else {rcl2_p273=T;return rcl2_m273=((rcl2_v962=rcl2_f962()),(rcl2_v557=rcl2_f557()),((rcl2_v962<rcl2_v557)?rcl2_v962:rcl2_v557));}}
static double rcl2_f961(){if (rcl2_p961) return rcl2_m961; else {rcl2_p961=T;return rcl2_m961=normalize_rotation(rcl2_f962());}}
static int rcl2_f947(){if (rcl2_p947) return rcl2_m947; else {rcl2_p947=T;return rcl2_m947=((rcl2_v961=rcl2_f961()),((fabs((rcl2_v961-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v961-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v961-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static double rcl2_f2300(){if (rcl2_p2300) return rcl2_m2300; else {rcl2_p2300=T;return rcl2_m2300=(rcl2_f2327()-(rcl2_v2350*rcl2_f2305()));}}
static double rcl2_f1704(){if (rcl2_p1704) return rcl2_m1704; else {rcl2_p1704=T;return rcl2_m1704=((((rcl2_f2321()*rcl2_v2352)-rcl2_f2186())/rcl2_f2300())-rcl2_v2346);}}
static double rcl2_f1702(){if (rcl2_p1702) return rcl2_m1702; else {rcl2_p1702=T;return rcl2_m1702=(((rcl2_f2184()-(rcl2_f2321()*rcl2_f2305()))/rcl2_f2300())-rcl2_v2344);}}
static double rcl2_f2279(){if (rcl2_p2279) return rcl2_m2279; else {rcl2_p2279=T;return rcl2_m2279=((((rcl2_v2348*rcl2_v2352)-(rcl2_v2350*rcl2_f2302()))/rcl2_f2300())-rcl2_v2360);}}
static double rcl2_f2277(){if (rcl2_p2277) return rcl2_m2277; else {rcl2_p2277=T;return rcl2_m2277=((((rcl2_v2352*rcl2_f2302())-(rcl2_v2348*rcl2_f2305()))/rcl2_f2300())-rcl2_v2358);}}
static int rcl2_f1011(){if (rcl2_p1011) return rcl2_m1011; else {rcl2_p1011=T;return rcl2_m1011=(fabs((rcl2_f2300()-(0.0)))<rcl2_v2340);}}
static int rcl2_f943(){if (rcl2_p943) return rcl2_m943; else {rcl2_p943=T;return rcl2_m943=(fabs(((rcl2_f1011()?rcl2_f1009():((rcl2_v2279=rcl2_f2279()),(rcl2_v2277=rcl2_f2277()),sqrt(((rcl2_v2279*rcl2_v2279)+(rcl2_v2277*rcl2_v2277)))))-rcl2_f2328()))<rcl2_v2340);}}
static double rcl2_f926(){if (rcl2_p926) return rcl2_m926; else {rcl2_p926=T;return rcl2_m926=(rcl2_f943()?(rcl2_f981()?rcl2_f928():(rcl2_f2254()/rcl2_f2258())):rcl2_f928());}}
static double rcl2_f786(){if (rcl2_p786) return rcl2_m786; else {rcl2_p786=T;return rcl2_m786=(rcl2_f798()?rcl2_f926():((rcl2_v2348-(rcl2_v2350*rcl2_f790()))/rcl2_v2352));}}
static double rcl2_f925(){if (rcl2_p925) return rcl2_m925; else {rcl2_p925=T;return rcl2_m925=(rcl2_f2306()?rcl2_f926():(sqrt(rcl2_f2307())+rcl2_v2360));}}
static double rcl2_f920(){if (rcl2_p920) return rcl2_m920; else {rcl2_p920=T;return rcl2_m920=(rcl2_f943()?(rcl2_f981()?rcl2_f928():(rcl2_f2251()/rcl2_f2258())):rcl2_f928());}}
static double rcl2_f782(){if (rcl2_p782) return rcl2_m782; else {rcl2_p782=T;return rcl2_m782=(rcl2_f798()?rcl2_f920():rcl2_f790());}}
static double rcl2_f919(){if (rcl2_p919) return rcl2_m919; else {rcl2_p919=T;return rcl2_m919=(rcl2_f2306()?rcl2_f920():rcl2_f2232());}}
static int rcl2_f931(){if (rcl2_p931) return rcl2_m931; else {rcl2_p931=T;return rcl2_m931=(rcl2_f943()?(rcl2_f981()?NIL:T):NIL);}}
static int rcl2_f796(){if (rcl2_p796) return rcl2_m796; else {rcl2_p796=T;return rcl2_m796=(rcl2_f798()?rcl2_f931():T);}}
static double rcl2_f775(){if (rcl2_p775) return rcl2_m775; else {rcl2_p775=T;return rcl2_m775=(rcl2_f796()?rcl2_f782():rcl2_f971());}}
static double rcl2_f776(){if (rcl2_p776) return rcl2_m776; else {rcl2_p776=T;return rcl2_m776=(rcl2_f796()?rcl2_f786():rcl2_f967());}}
static double rcl2_f771(){if (rcl2_p771) return rcl2_m771; else {rcl2_p771=T;return rcl2_m771=(atan2((rcl2_f775()-rcl2_v2344),(rcl2_f776()-rcl2_v2346))+(1.5707963267948966));}}
static double rcl2_f763(){if (rcl2_p763) return rcl2_m763; else {rcl2_p763=T;return rcl2_m763=((rcl2_v771=rcl2_f771()),(((rcl2_v2352*(rcl2_f776()+cos(rcl2_v771)))+(rcl2_v2350*(rcl2_f775()+sin(rcl2_v771))))-rcl2_v2348));}}
static int rcl2_f930(){if (rcl2_p930) return rcl2_m930; else {rcl2_p930=T;return rcl2_m930=(rcl2_f2306()?rcl2_f931():T);}}
static double rcl2_f909(){if (rcl2_p909) return rcl2_m909; else {rcl2_p909=T;return rcl2_m909=(rcl2_f930()?rcl2_f919():rcl2_f971());}}
static double rcl2_f910(){if (rcl2_p910) return rcl2_m910; else {rcl2_p910=T;return rcl2_m910=(rcl2_f930()?rcl2_f925():rcl2_f967());}}
static double rcl2_f904(){if (rcl2_p904) return rcl2_m904; else {rcl2_p904=T;return rcl2_m904=(atan2((rcl2_f909()-rcl2_v2344),(rcl2_f910()-rcl2_v2346))+(1.5707963267948966));}}
static double rcl2_f896(){if (rcl2_p896) return rcl2_m896; else {rcl2_p896=T;return rcl2_m896=((rcl2_v904=rcl2_f904()),(((rcl2_v2352*(rcl2_f910()+cos(rcl2_v904)))+(rcl2_v2350*(rcl2_f909()+sin(rcl2_v904))))-rcl2_v2348));}}
static int rcl2_f934(){if (rcl2_p934) return rcl2_m934; else {rcl2_p934=T;return rcl2_m934=(rcl2_f943()?(rcl2_f981()?((fabs((rcl2_f2254()-(0.0)))<rcl2_v2340)?(fabs((rcl2_f2251()-(0.0)))<rcl2_v2340):NIL):NIL):NIL);}}
static int rcl2_f797(){if (rcl2_p797) return rcl2_m797; else {rcl2_p797=T;return rcl2_m797=(rcl2_f798()?rcl2_f934():NIL);}}
static int rcl2_f753(){if (rcl2_p753) return rcl2_m753; else {rcl2_p753=T;return rcl2_m753=((rcl2_v797=rcl2_f797()),(rcl2_v797?rcl2_v797:((rcl2_f796()?((fabs((rcl2_v2346-rcl2_f786()))<rcl2_v2340)?(fabs((rcl2_v2344-rcl2_f782()))<rcl2_v2340):NIL):NIL)?T:((rcl2_f911()?T:((rcl2_v763=rcl2_f763()),((fabs((rcl2_v763-(0.0)))<rcl2_v2340)?NIL:((rcl2_v763>(0.0))?rcl2_f891():rcl2_f890()))))?NIL:T))));}}
static int rcl2_f468(){if (rcl2_p468) return rcl2_m468; else {rcl2_p468=T;return rcl2_m468=((rcl2_v544=rcl2_f544()),(rcl2_v544?rcl2_v544:rcl2_f753()));}}
static double rcl2_f342(){if (rcl2_p342) return rcl2_m342; else {rcl2_p342=T;return rcl2_m342=(rcl2_f564()?(rcl2_f468()?rcl2_f557():rcl2_f645()):rcl2_f645());}}
static double_or_symbol rcl2_f15(){if (rcl2_p15) return rcl2_m15; else {rcl2_p15=T;return rcl2_m15=(rcl2_f564()?(rcl2_f468()?coerce_double_to_double_or_symbol(rcl2_f557()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int rcl2_f467(){if (rcl2_p467) return rcl2_m467; else {rcl2_p467=T;return rcl2_m467=(rcl2_f564()?rcl2_f468():NIL);}}
static double rcl2_f462(){if (rcl2_p462) return rcl2_m462; else {rcl2_p462=T;return rcl2_m462=(rcl2_f564()?(rcl2_f468()?rcl2_f557():rcl2_f875()):rcl2_f875());}}
static double rcl2_f465(){if (rcl2_p465) return rcl2_m465; else {rcl2_p465=T;return rcl2_m465=(rcl2_f564()?(rcl2_f468()?rcl2_f557():rcl2_f880()):rcl2_f880());}}
static int rcl2_f464(){if (rcl2_p464) return rcl2_m464; else {rcl2_p464=T;return rcl2_m464=(rcl2_f465()>(0.0));}}
static int rcl2_f457(){if (rcl2_p457) return rcl2_m457; else {rcl2_p457=T;return rcl2_m457=(rcl2_f467()?((rcl2_v464=rcl2_f464()),(rcl2_v464?rcl2_v464:(fabs((rcl2_f462()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f456(){if (rcl2_p456) return rcl2_m456; else {rcl2_p456=T;return rcl2_m456=(rcl2_f457()?rcl2_f467():NIL);}}
static double rcl2_f349(){if (rcl2_p349) return rcl2_m349; else {rcl2_p349=T;return rcl2_m349=(rcl2_f457()?rcl2_f462():rcl2_f875());}}
static double rcl2_f351(){if (rcl2_p351) return rcl2_m351; else {rcl2_p351=T;return rcl2_m351=(rcl2_f457()?rcl2_f465():rcl2_f880());}}
static int rcl2_f350(){if (rcl2_p350) return rcl2_m350; else {rcl2_p350=T;return rcl2_m350=(rcl2_f351()>(0.0));}}
static int rcl2_f344(){if (rcl2_p344) return rcl2_m344; else {rcl2_p344=T;return rcl2_m344=(rcl2_f456()?((rcl2_v350=rcl2_f350()),(rcl2_v350?rcl2_v350:(fabs((rcl2_f349()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f752(){if (rcl2_p752) return rcl2_m752; else {rcl2_p752=T;return rcl2_m752=((rcl2_v947=rcl2_f947()),(rcl2_v947?rcl2_v947:rcl2_f753()));}}
static double_or_symbol rcl2_f42(){if (rcl2_p42) return rcl2_m42; else {rcl2_p42=T;return rcl2_m42=(rcl2_f973()?(rcl2_f752()?coerce_double_to_double_or_symbol(rcl2_f962()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcl2_f624(){if (rcl2_p624) return rcl2_m624; else {rcl2_p624=T;return rcl2_m624=(rcl2_f973()?(rcl2_f752()?rcl2_f962():rcl2_f645()):rcl2_f645());}}
static int rcl2_f751(){if (rcl2_p751) return rcl2_m751; else {rcl2_p751=T;return rcl2_m751=(rcl2_f973()?rcl2_f752():NIL);}}
static double rcl2_f746(){if (rcl2_p746) return rcl2_m746; else {rcl2_p746=T;return rcl2_m746=(rcl2_f973()?(rcl2_f752()?rcl2_f962():rcl2_f875()):rcl2_f875());}}
static double rcl2_f749(){if (rcl2_p749) return rcl2_m749; else {rcl2_p749=T;return rcl2_m749=(rcl2_f973()?(rcl2_f752()?rcl2_f962():rcl2_f880()):rcl2_f880());}}
static int rcl2_f748(){if (rcl2_p748) return rcl2_m748; else {rcl2_p748=T;return rcl2_m748=(rcl2_f749()>(0.0));}}
static int rcl2_f741(){if (rcl2_p741) return rcl2_m741; else {rcl2_p741=T;return rcl2_m741=(rcl2_f751()?((rcl2_v748=rcl2_f748()),(rcl2_v748?rcl2_v748:(fabs((rcl2_f746()-(0.0)))<rcl2_v2340))):NIL);}}
static double rcl2_f631(){if (rcl2_p631) return rcl2_m631; else {rcl2_p631=T;return rcl2_m631=(rcl2_f741()?rcl2_f746():rcl2_f875());}}
static double rcl2_f633(){if (rcl2_p633) return rcl2_m633; else {rcl2_p633=T;return rcl2_m633=(rcl2_f741()?rcl2_f749():rcl2_f880());}}
static int rcl2_f632(){if (rcl2_p632) return rcl2_m632; else {rcl2_p632=T;return rcl2_m632=(rcl2_f633()>(0.0));}}
static int rcl2_f740(){if (rcl2_p740) return rcl2_m740; else {rcl2_p740=T;return rcl2_m740=(rcl2_f741()?rcl2_f751():NIL);}}
static int rcl2_f626(){if (rcl2_p626) return rcl2_m626; else {rcl2_p626=T;return rcl2_m626=(rcl2_f740()?((rcl2_v632=rcl2_f632()),(rcl2_v632?rcl2_v632:(fabs((rcl2_f631()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f933(){if (rcl2_p933) return rcl2_m933; else {rcl2_p933=T;return rcl2_m933=(rcl2_f2306()?rcl2_f934():NIL);}}
static int rcl2_f884(){if (rcl2_p884) return rcl2_m884; else {rcl2_p884=T;return rcl2_m884=((rcl2_v933=rcl2_f933()),(rcl2_v933?rcl2_v933:((rcl2_f930()?((fabs((rcl2_v2346-rcl2_f925()))<rcl2_v2340)?(fabs((rcl2_v2344-rcl2_f919()))<rcl2_v2340):NIL):NIL)?T:((rcl2_f911()?T:((rcl2_v896=rcl2_f896()),((fabs((rcl2_v896-(0.0)))<rcl2_v2340)?NIL:((rcl2_v896>(0.0))?rcl2_f891():rcl2_f890()))))?NIL:T))));}}
static int rcl2_f543(){if (rcl2_p543) return rcl2_m543; else {rcl2_p543=T;return rcl2_m543=((rcl2_v544=rcl2_f544()),(rcl2_v544?rcl2_v544:rcl2_f884()));}}
static double rcl2_f361(){if (rcl2_p361) return rcl2_m361; else {rcl2_p361=T;return rcl2_m361=(rcl2_f564()?(rcl2_f543()?rcl2_f557():rcl2_f645()):rcl2_f645());}}
static double_or_symbol rcl2_f27(){if (rcl2_p27) return rcl2_m27; else {rcl2_p27=T;return rcl2_m27=(rcl2_f564()?(rcl2_f543()?coerce_double_to_double_or_symbol(rcl2_f557()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int rcl2_f542(){if (rcl2_p542) return rcl2_m542; else {rcl2_p542=T;return rcl2_m542=(rcl2_f564()?rcl2_f543():NIL);}}
static double rcl2_f537(){if (rcl2_p537) return rcl2_m537; else {rcl2_p537=T;return rcl2_m537=(rcl2_f564()?(rcl2_f543()?rcl2_f557():rcl2_f875()):rcl2_f875());}}
static double rcl2_f540(){if (rcl2_p540) return rcl2_m540; else {rcl2_p540=T;return rcl2_m540=(rcl2_f564()?(rcl2_f543()?rcl2_f557():rcl2_f880()):rcl2_f880());}}
static int rcl2_f539(){if (rcl2_p539) return rcl2_m539; else {rcl2_p539=T;return rcl2_m539=(rcl2_f540()>(0.0));}}
static int rcl2_f532(){if (rcl2_p532) return rcl2_m532; else {rcl2_p532=T;return rcl2_m532=(rcl2_f542()?((rcl2_v539=rcl2_f539()),(rcl2_v539?rcl2_v539:(fabs((rcl2_f537()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f531(){if (rcl2_p531) return rcl2_m531; else {rcl2_p531=T;return rcl2_m531=(rcl2_f532()?rcl2_f542():NIL);}}
static double rcl2_f368(){if (rcl2_p368) return rcl2_m368; else {rcl2_p368=T;return rcl2_m368=(rcl2_f532()?rcl2_f537():rcl2_f875());}}
static double rcl2_f370(){if (rcl2_p370) return rcl2_m370; else {rcl2_p370=T;return rcl2_m370=(rcl2_f532()?rcl2_f540():rcl2_f880());}}
static int rcl2_f369(){if (rcl2_p369) return rcl2_m369; else {rcl2_p369=T;return rcl2_m369=(rcl2_f370()>(0.0));}}
static int rcl2_f363(){if (rcl2_p363) return rcl2_m363; else {rcl2_p363=T;return rcl2_m363=(rcl2_f531()?((rcl2_v369=rcl2_f369()),(rcl2_v369?rcl2_v369:(fabs((rcl2_f368()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f883(){if (rcl2_p883) return rcl2_m883; else {rcl2_p883=T;return rcl2_m883=((rcl2_v947=rcl2_f947()),(rcl2_v947?rcl2_v947:rcl2_f884()));}}
static double_or_symbol rcl2_f54(){if (rcl2_p54) return rcl2_m54; else {rcl2_p54=T;return rcl2_m54=(rcl2_f973()?(rcl2_f883()?coerce_double_to_double_or_symbol(rcl2_f962()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcl2_f643(){if (rcl2_p643) return rcl2_m643; else {rcl2_p643=T;return rcl2_m643=(rcl2_f973()?(rcl2_f883()?rcl2_f962():rcl2_f645()):rcl2_f645());}}
static int rcl2_f882(){if (rcl2_p882) return rcl2_m882; else {rcl2_p882=T;return rcl2_m882=(rcl2_f973()?rcl2_f883():NIL);}}
static double rcl2_f873(){if (rcl2_p873) return rcl2_m873; else {rcl2_p873=T;return rcl2_m873=(rcl2_f973()?(rcl2_f883()?rcl2_f962():rcl2_f875()):rcl2_f875());}}
static double rcl2_f878(){if (rcl2_p878) return rcl2_m878; else {rcl2_p878=T;return rcl2_m878=(rcl2_f973()?(rcl2_f883()?rcl2_f962():rcl2_f880()):rcl2_f880());}}
static int rcl2_f877(){if (rcl2_p877) return rcl2_m877; else {rcl2_p877=T;return rcl2_m877=(rcl2_f878()>(0.0));}}
static int rcl2_f868(){if (rcl2_p868) return rcl2_m868; else {rcl2_p868=T;return rcl2_m868=(rcl2_f882()?((rcl2_v877=rcl2_f877()),(rcl2_v877?rcl2_v877:(fabs((rcl2_f873()-(0.0)))<rcl2_v2340))):NIL);}}
static double rcl2_f652(){if (rcl2_p652) return rcl2_m652; else {rcl2_p652=T;return rcl2_m652=(rcl2_f868()?rcl2_f873():rcl2_f875());}}
static double rcl2_f654(){if (rcl2_p654) return rcl2_m654; else {rcl2_p654=T;return rcl2_m654=(rcl2_f868()?rcl2_f878():rcl2_f880());}}
static int rcl2_f653(){if (rcl2_p653) return rcl2_m653; else {rcl2_p653=T;return rcl2_m653=(rcl2_f654()>(0.0));}}
static int rcl2_f867(){if (rcl2_p867) return rcl2_m867; else {rcl2_p867=T;return rcl2_m867=(rcl2_f868()?rcl2_f882():NIL);}}
static int rcl2_f647(){if (rcl2_p647) return rcl2_m647; else {rcl2_p647=T;return rcl2_m647=(rcl2_f867()?((rcl2_v653=rcl2_f653()),(rcl2_v653?rcl2_v653:(fabs((rcl2_f652()-(0.0)))<rcl2_v2340))):NIL);}}
static double rcl2_f2171(){if (rcl2_p2171) return rcl2_m2171; else {rcl2_p2171=T;return rcl2_m2171=((((rcl2_f2322()*rcl2_v2352)-rcl2_f2186())/rcl2_f2300())-rcl2_v2346);}}
static double rcl2_f2169(){if (rcl2_p2169) return rcl2_m2169; else {rcl2_p2169=T;return rcl2_m2169=(((rcl2_f2184()-(rcl2_f2322()*rcl2_f2305()))/rcl2_f2300())-rcl2_v2344);}}
static double rcl2_f2337(){if (rcl2_p2337) return rcl2_m2337; else {rcl2_p2337=T;return rcl2_m2337=(rcl2_v2344-rcl2_v2358);}}
static double rcl2_f2164(){if (rcl2_p2164) return rcl2_m2164; else {rcl2_p2164=T;return rcl2_m2164=((rcl2_v2337=rcl2_f2337()),(rcl2_v2346-(rcl2_v2346+sqrt(((rcl2_v2342*rcl2_v2342)+(rcl2_v2337*rcl2_v2337))))));}}
static double rcl2_f2162(){if (rcl2_p2162) return rcl2_m2162; else {rcl2_p2162=T;return rcl2_m2162=(rcl2_v2344-rcl2_v2344);}}
static double rcl2_f2159(){if (rcl2_p2159) return rcl2_m2159; else {rcl2_p2159=T;return rcl2_m2159=((rcl2_v2164=rcl2_f2164()),(rcl2_v2162=rcl2_f2162()),sqrt(((rcl2_v2164*rcl2_v2164)+(rcl2_v2162*rcl2_v2162))));}}
static int rcl2_f587(){if (rcl2_p587) return rcl2_m587; else {rcl2_p587=T;return rcl2_m587=(fabs(((rcl2_f1011()?rcl2_f1009():((rcl2_v1704=rcl2_f1704()),(rcl2_v1702=rcl2_f1702()),sqrt(((rcl2_v1704*rcl2_v1704)+(rcl2_v1702*rcl2_v1702)))))-rcl2_f2159()))<rcl2_v2340);}}
static int rcl2_f572(){if (rcl2_p572) return rcl2_m572; else {rcl2_p572=T;return rcl2_m572=((rcl2_v587=rcl2_f587()),(rcl2_v587?((fabs((rcl2_f1692()-(0.0)))<rcl2_v2340)?NIL:((rcl2_v583=rcl2_f583()),((fabs((rcl2_v583-(0.0)))<rcl2_v2340)?NIL:((rcl2_v583>(0.0))?rcl2_f578():(rcl2_f578()?NIL:T))))):(rcl2_v587?NIL:T)));}}
static double rcl2_f2126(){if (rcl2_p2126) return rcl2_m2126; else {rcl2_p2126=T;return rcl2_m2126=((rcl2_v2159=rcl2_f2159()),(rcl2_v2159*rcl2_v2159));}}
static double rcl2_f1673(){if (rcl2_p1673) return rcl2_m1673; else {rcl2_p1673=T;return rcl2_m1673=(rcl2_f2126()-(rcl2_f1675()/rcl2_f2326()));}}
static int rcl2_f1672(){if (rcl2_p1672) return rcl2_m1672; else {rcl2_p1672=T;return rcl2_m1672=(rcl2_f1673()<0.0);}}
static double rcl2_f1653(){if (rcl2_p1653) return rcl2_m1653; else {rcl2_p1653=T;return rcl2_m1653=sqrt(rcl2_f1673());}}
static double rcl2_f1538(){if (rcl2_p1538) return rcl2_m1538; else {rcl2_p1538=T;return rcl2_m1538=normalize_rotation((atan2(rcl2_f1563(),(((-rcl2_f1653())+rcl2_v2346)-rcl2_v2346))-rcl2_f2050()));}}
static double rcl2_f1537(){if (rcl2_p1537) return rcl2_m1537; else {rcl2_p1537=T;return rcl2_m1537=normalize_rotation(rcl2_f1538());}}
static int rcl2_f496(){if (rcl2_p496) return rcl2_m496; else {rcl2_p496=T;return rcl2_m496=((rcl2_v1537=rcl2_f1537()),((fabs((rcl2_v1537-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v1537-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v1537-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static int rcl2_f495(){if (rcl2_p495) return rcl2_m495; else {rcl2_p495=T;return rcl2_m495=((rcl2_v496=rcl2_f496()),(rcl2_v496?rcl2_v496:rcl2_f884()));}}
static double rcl2_f492(){if (rcl2_p492) return rcl2_m492; else {rcl2_p492=T;return rcl2_m492=(rcl2_f495()?rcl2_f1538():rcl2_f875());}}
static double rcl2_f494(){if (rcl2_p494) return rcl2_m494; else {rcl2_p494=T;return rcl2_m494=(rcl2_f495()?rcl2_f1538():rcl2_f880());}}
static int rcl2_f493(){if (rcl2_p493) return rcl2_m493; else {rcl2_p493=T;return rcl2_m493=(rcl2_f494()>(0.0));}}
static int rcl2_f487(){if (rcl2_p487) return rcl2_m487; else {rcl2_p487=T;return rcl2_m487=(rcl2_f495()?((rcl2_v493=rcl2_f493()),(rcl2_v493?rcl2_v493:(fabs((rcl2_f492()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f486(){if (rcl2_p486) return rcl2_m486; else {rcl2_p486=T;return rcl2_m486=(rcl2_f487()?rcl2_f495():NIL);}}
static double rcl2_f483(){if (rcl2_p483) return rcl2_m483; else {rcl2_p483=T;return rcl2_m483=(rcl2_f487()?rcl2_f492():rcl2_f875());}}
static double rcl2_f485(){if (rcl2_p485) return rcl2_m485; else {rcl2_p485=T;return rcl2_m485=(rcl2_f487()?rcl2_f494():rcl2_f880());}}
static int rcl2_f484(){if (rcl2_p484) return rcl2_m484; else {rcl2_p484=T;return rcl2_m484=(rcl2_f485()>(0.0));}}
static int rcl2_f478(){if (rcl2_p478) return rcl2_m478; else {rcl2_p478=T;return rcl2_m478=(rcl2_f486()?((rcl2_v484=rcl2_f484()),(rcl2_v484?rcl2_v484:(fabs((rcl2_f483()-(0.0)))<rcl2_v2340))):NIL);}}
static double rcl2_f1559(){if (rcl2_p1559) return rcl2_m1559; else {rcl2_p1559=T;return rcl2_m1559=normalize_rotation((atan2(rcl2_f1563(),((rcl2_f1653()+rcl2_v2346)-rcl2_v2346))-rcl2_f2050()));}}
static double rcl2_f1558(){if (rcl2_p1558) return rcl2_m1558; else {rcl2_p1558=T;return rcl2_m1558=normalize_rotation(rcl2_f1559());}}
static int rcl2_f517(){if (rcl2_p517) return rcl2_m517; else {rcl2_p517=T;return rcl2_m517=((rcl2_v1558=rcl2_f1558()),((fabs((rcl2_v1558-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v1558-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v1558-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static int rcl2_f516(){if (rcl2_p516) return rcl2_m516; else {rcl2_p516=T;return rcl2_m516=((rcl2_v517=rcl2_f517()),(rcl2_v517?rcl2_v517:rcl2_f884()));}}
static double rcl2_f355(){if (rcl2_p355) return rcl2_m355; else {rcl2_p355=T;return rcl2_m355=(rcl2_f516()?(rcl2_f487()?(rcl2_f495()?((rcl2_v1559=rcl2_f1559()),(rcl2_v1538=rcl2_f1538()),((rcl2_v1559<rcl2_v1538)?rcl2_v1559:rcl2_v1538)):rcl2_f645()):rcl2_f645()):rcl2_f645());}}
static double rcl2_f513(){if (rcl2_p513) return rcl2_m513; else {rcl2_p513=T;return rcl2_m513=(rcl2_f516()?rcl2_f1559():rcl2_f875());}}
static double rcl2_f515(){if (rcl2_p515) return rcl2_m515; else {rcl2_p515=T;return rcl2_m515=(rcl2_f516()?rcl2_f1559():rcl2_f880());}}
static int rcl2_f514(){if (rcl2_p514) return rcl2_m514; else {rcl2_p514=T;return rcl2_m514=(rcl2_f515()>(0.0));}}
static int rcl2_f508(){if (rcl2_p508) return rcl2_m508; else {rcl2_p508=T;return rcl2_m508=(rcl2_f516()?((rcl2_v514=rcl2_f514()),(rcl2_v514?rcl2_v514:(fabs((rcl2_f513()-(0.0)))<rcl2_v2340))):NIL);}}
static double rcl2_f2091(){if (rcl2_p2091) return rcl2_m2091; else {rcl2_p2091=T;return rcl2_m2091=(rcl2_f2327()*rcl2_f2126());}}
static double rcl2_f470(){if (rcl2_p470) return rcl2_m470; else {rcl2_p470=T;return rcl2_m470=((rcl2_v473=rcl2_f473()),((rcl2_v473*rcl2_v473)-((4.0)*rcl2_f2325()*(rcl2_f1675()-rcl2_f2091()))));}}
static int rcl2_f469(){if (rcl2_p469) return rcl2_m469; else {rcl2_p469=T;return rcl2_m469=(rcl2_f470()<0.0);}}
static double rcl2_f450(){if (rcl2_p450) return rcl2_m450; else {rcl2_p450=T;return rcl2_m450=(sqrt(rcl2_f470())/rcl2_f2219());}}
static double rcl2_f416(){if (rcl2_p416) return rcl2_m416; else {rcl2_p416=T;return rcl2_m416=((rcl2_f452()-rcl2_f450())+rcl2_v2344);}}
static double rcl2_f408(){if (rcl2_p408) return rcl2_m408; else {rcl2_p408=T;return rcl2_m408=((rcl2_v416=rcl2_f416()),normalize_rotation((atan2((rcl2_v416-rcl2_v2344),(((rcl2_f2321()-(rcl2_v2350*rcl2_v416))/rcl2_v2352)-rcl2_v2346))-rcl2_f2050())));}}
static double rcl2_f407(){if (rcl2_p407) return rcl2_m407; else {rcl2_p407=T;return rcl2_m407=normalize_rotation(rcl2_f408());}}
static int rcl2_f395(){if (rcl2_p395) return rcl2_m395; else {rcl2_p395=T;return rcl2_m395=((rcl2_v407=rcl2_f407()),((fabs((rcl2_v407-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v407-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v407-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static int rcl2_f394(){if (rcl2_p394) return rcl2_m394; else {rcl2_p394=T;return rcl2_m394=((rcl2_v395=rcl2_f395()),(rcl2_v395?rcl2_v395:rcl2_f753()));}}
static double rcl2_f391(){if (rcl2_p391) return rcl2_m391; else {rcl2_p391=T;return rcl2_m391=(rcl2_f394()?rcl2_f408():rcl2_f875());}}
static double rcl2_f393(){if (rcl2_p393) return rcl2_m393; else {rcl2_p393=T;return rcl2_m393=(rcl2_f394()?rcl2_f408():rcl2_f880());}}
static int rcl2_f392(){if (rcl2_p392) return rcl2_m392; else {rcl2_p392=T;return rcl2_m392=(rcl2_f393()>(0.0));}}
static int rcl2_f386(){if (rcl2_p386) return rcl2_m386; else {rcl2_p386=T;return rcl2_m386=(rcl2_f394()?((rcl2_v392=rcl2_f392()),(rcl2_v392?rcl2_v392:(fabs((rcl2_f391()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f385(){if (rcl2_p385) return rcl2_m385; else {rcl2_p385=T;return rcl2_m385=(rcl2_f386()?rcl2_f394():NIL);}}
static double rcl2_f382(){if (rcl2_p382) return rcl2_m382; else {rcl2_p382=T;return rcl2_m382=(rcl2_f386()?rcl2_f391():rcl2_f875());}}
static double rcl2_f384(){if (rcl2_p384) return rcl2_m384; else {rcl2_p384=T;return rcl2_m384=(rcl2_f386()?rcl2_f393():rcl2_f880());}}
static int rcl2_f383(){if (rcl2_p383) return rcl2_m383; else {rcl2_p383=T;return rcl2_m383=(rcl2_f384()>(0.0));}}
static int rcl2_f377(){if (rcl2_p377) return rcl2_m377; else {rcl2_p377=T;return rcl2_m377=(rcl2_f385()?((rcl2_v383=rcl2_f383()),(rcl2_v383?rcl2_v383:(fabs((rcl2_f382()-(0.0)))<rcl2_v2340))):NIL);}}
static double rcl2_f448(){if (rcl2_p448) return rcl2_m448; else {rcl2_p448=T;return rcl2_m448=((rcl2_f452()+rcl2_f450())+rcl2_v2344);}}
static double rcl2_f440(){if (rcl2_p440) return rcl2_m440; else {rcl2_p440=T;return rcl2_m440=((rcl2_v448=rcl2_f448()),normalize_rotation((atan2((rcl2_v448-rcl2_v2344),(((rcl2_f2321()-(rcl2_v2350*rcl2_v448))/rcl2_v2352)-rcl2_v2346))-rcl2_f2050())));}}
static double rcl2_f439(){if (rcl2_p439) return rcl2_m439; else {rcl2_p439=T;return rcl2_m439=normalize_rotation(rcl2_f440());}}
static int rcl2_f427(){if (rcl2_p427) return rcl2_m427; else {rcl2_p427=T;return rcl2_m427=((rcl2_v439=rcl2_f439()),((fabs((rcl2_v439-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v439-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v439-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static int rcl2_f426(){if (rcl2_p426) return rcl2_m426; else {rcl2_p426=T;return rcl2_m426=((rcl2_v427=rcl2_f427()),(rcl2_v427?rcl2_v427:rcl2_f753()));}}
static double rcl2_f334(){if (rcl2_p334) return rcl2_m334; else {rcl2_p334=T;return rcl2_m334=(rcl2_f426()?(rcl2_f386()?(rcl2_f394()?((rcl2_v440=rcl2_f440()),(rcl2_v408=rcl2_f408()),((rcl2_v440<rcl2_v408)?rcl2_v440:rcl2_v408)):rcl2_f645()):rcl2_f645()):rcl2_f645());}}
static double rcl2_f423(){if (rcl2_p423) return rcl2_m423; else {rcl2_p423=T;return rcl2_m423=(rcl2_f426()?rcl2_f440():rcl2_f875());}}
static double rcl2_f425(){if (rcl2_p425) return rcl2_m425; else {rcl2_p425=T;return rcl2_m425=(rcl2_f426()?rcl2_f440():rcl2_f880());}}
static int rcl2_f424(){if (rcl2_p424) return rcl2_m424; else {rcl2_p424=T;return rcl2_m424=(rcl2_f425()>(0.0));}}
static int rcl2_f418(){if (rcl2_p418) return rcl2_m418; else {rcl2_p418=T;return rcl2_m418=(rcl2_f426()?((rcl2_v424=rcl2_f424()),(rcl2_v424?rcl2_v424:(fabs((rcl2_f423()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f371(){if (rcl2_p371) return rcl2_m371; else {rcl2_p371=T;return rcl2_m371=(rcl2_f572()?(rcl2_f2311()?(rcl2_f1672()?(rcl2_f587()?(rcl2_f532()?rcl2_f542():rcl2_f531()):NIL):(rcl2_f508()?(rcl2_f478()?(rcl2_f516()?rcl2_f486():NIL):rcl2_f516()):rcl2_f486())):(rcl2_f469()?(rcl2_f587()?(rcl2_f457()?rcl2_f467():rcl2_f456()):NIL):(rcl2_f418()?(rcl2_f377()?(rcl2_f426()?rcl2_f385():NIL):rcl2_f426()):rcl2_f385()))):NIL);}}
static double rcl2_f314(){if (rcl2_p314) return rcl2_m314; else {rcl2_p314=T;return rcl2_m314=(rcl2_f572()?(rcl2_f2311()?(rcl2_f1672()?(rcl2_f587()?(rcl2_f532()?(rcl2_f363()?rcl2_f361():rcl2_f537()):rcl2_f368()):rcl2_f875()):(rcl2_f508()?(rcl2_f478()?rcl2_f355():rcl2_f513()):rcl2_f483())):(rcl2_f469()?(rcl2_f587()?(rcl2_f457()?(rcl2_f344()?rcl2_f342():rcl2_f462()):rcl2_f349()):rcl2_f875()):(rcl2_f418()?(rcl2_f377()?rcl2_f334():rcl2_f423()):rcl2_f382()))):rcl2_f875());}}
static double rcl2_f329(){if (rcl2_p329) return rcl2_m329; else {rcl2_p329=T;return rcl2_m329=(rcl2_f572()?(rcl2_f2311()?(rcl2_f1672()?(rcl2_f587()?(rcl2_f532()?(rcl2_f363()?rcl2_f361():rcl2_f540()):rcl2_f370()):rcl2_f880()):(rcl2_f508()?(rcl2_f478()?rcl2_f355():rcl2_f515()):rcl2_f485())):(rcl2_f469()?(rcl2_f587()?(rcl2_f457()?(rcl2_f344()?rcl2_f342():rcl2_f465()):rcl2_f351()):rcl2_f880()):(rcl2_f418()?(rcl2_f377()?rcl2_f334():rcl2_f425()):rcl2_f384()))):rcl2_f880());}}
static int rcl2_f328(){if (rcl2_p328) return rcl2_m328; else {rcl2_p328=T;return rcl2_m328=(rcl2_f329()>(0.0));}}
static int rcl2_f309(){if (rcl2_p309) return rcl2_m309; else {rcl2_p309=T;return rcl2_m309=(rcl2_f371()?((rcl2_v328=rcl2_f328()),(rcl2_v328?rcl2_v328:(fabs((rcl2_f314()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f306(){if (rcl2_p306) return rcl2_m306; else {rcl2_p306=T;return rcl2_m306=((rcl2_f309()?rcl2_f329():rcl2_f880())>(0.0));}}
static double rcl2_f804(){if (rcl2_p804) return rcl2_m804; else {rcl2_p804=T;return rcl2_m804=((rcl2_v808=rcl2_f808()),((rcl2_v808*rcl2_v808)-((4.0)*rcl2_f2325()*(rcl2_f2125()-rcl2_f2091()))));}}
static int rcl2_f803(){if (rcl2_p803) return rcl2_m803; else {rcl2_p803=T;return rcl2_m803=(rcl2_f804()<0.0);}}
static double rcl2_f734(){if (rcl2_p734) return rcl2_m734; else {rcl2_p734=T;return rcl2_m734=(sqrt(rcl2_f804())/rcl2_f2219());}}
static double rcl2_f700(){if (rcl2_p700) return rcl2_m700; else {rcl2_p700=T;return rcl2_m700=((rcl2_f736()-rcl2_f734())+rcl2_v2344);}}
static double rcl2_f692(){if (rcl2_p692) return rcl2_m692; else {rcl2_p692=T;return rcl2_m692=((rcl2_v700=rcl2_f700()),normalize_rotation((atan2((rcl2_v700-rcl2_v2344),(((rcl2_f2322()-(rcl2_v2350*rcl2_v700))/rcl2_v2352)-rcl2_v2346))-rcl2_f2050())));}}
static double rcl2_f691(){if (rcl2_p691) return rcl2_m691; else {rcl2_p691=T;return rcl2_m691=normalize_rotation(rcl2_f692());}}
static int rcl2_f679(){if (rcl2_p679) return rcl2_m679; else {rcl2_p679=T;return rcl2_m679=((rcl2_v691=rcl2_f691()),((fabs((rcl2_v691-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v691-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v691-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static int rcl2_f678(){if (rcl2_p678) return rcl2_m678; else {rcl2_p678=T;return rcl2_m678=((rcl2_v679=rcl2_f679()),(rcl2_v679?rcl2_v679:rcl2_f753()));}}
static double rcl2_f675(){if (rcl2_p675) return rcl2_m675; else {rcl2_p675=T;return rcl2_m675=(rcl2_f678()?rcl2_f692():rcl2_f875());}}
static double rcl2_f677(){if (rcl2_p677) return rcl2_m677; else {rcl2_p677=T;return rcl2_m677=(rcl2_f678()?rcl2_f692():rcl2_f880());}}
static int rcl2_f676(){if (rcl2_p676) return rcl2_m676; else {rcl2_p676=T;return rcl2_m676=(rcl2_f677()>(0.0));}}
static int rcl2_f670(){if (rcl2_p670) return rcl2_m670; else {rcl2_p670=T;return rcl2_m670=(rcl2_f678()?((rcl2_v676=rcl2_f676()),(rcl2_v676?rcl2_v676:(fabs((rcl2_f675()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f669(){if (rcl2_p669) return rcl2_m669; else {rcl2_p669=T;return rcl2_m669=(rcl2_f670()?rcl2_f678():NIL);}}
static double rcl2_f666(){if (rcl2_p666) return rcl2_m666; else {rcl2_p666=T;return rcl2_m666=(rcl2_f670()?rcl2_f675():rcl2_f875());}}
static double rcl2_f668(){if (rcl2_p668) return rcl2_m668; else {rcl2_p668=T;return rcl2_m668=(rcl2_f670()?rcl2_f677():rcl2_f880());}}
static int rcl2_f667(){if (rcl2_p667) return rcl2_m667; else {rcl2_p667=T;return rcl2_m667=(rcl2_f668()>(0.0));}}
static int rcl2_f661(){if (rcl2_p661) return rcl2_m661; else {rcl2_p661=T;return rcl2_m661=(rcl2_f669()?((rcl2_v667=rcl2_f667()),(rcl2_v667?rcl2_v667:(fabs((rcl2_f666()-(0.0)))<rcl2_v2340))):NIL);}}
static double rcl2_f732(){if (rcl2_p732) return rcl2_m732; else {rcl2_p732=T;return rcl2_m732=((rcl2_f736()+rcl2_f734())+rcl2_v2344);}}
static double rcl2_f724(){if (rcl2_p724) return rcl2_m724; else {rcl2_p724=T;return rcl2_m724=((rcl2_v732=rcl2_f732()),normalize_rotation((atan2((rcl2_v732-rcl2_v2344),(((rcl2_f2322()-(rcl2_v2350*rcl2_v732))/rcl2_v2352)-rcl2_v2346))-rcl2_f2050())));}}
static double rcl2_f723(){if (rcl2_p723) return rcl2_m723; else {rcl2_p723=T;return rcl2_m723=normalize_rotation(rcl2_f724());}}
static int rcl2_f711(){if (rcl2_p711) return rcl2_m711; else {rcl2_p711=T;return rcl2_m711=((rcl2_v723=rcl2_f723()),((fabs((rcl2_v723-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v723-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v723-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static int rcl2_f710(){if (rcl2_p710) return rcl2_m710; else {rcl2_p710=T;return rcl2_m710=((rcl2_v711=rcl2_f711()),(rcl2_v711?rcl2_v711:rcl2_f753()));}}
static double rcl2_f616(){if (rcl2_p616) return rcl2_m616; else {rcl2_p616=T;return rcl2_m616=(rcl2_f710()?(rcl2_f670()?(rcl2_f678()?((rcl2_v724=rcl2_f724()),(rcl2_v692=rcl2_f692()),((rcl2_v724<rcl2_v692)?rcl2_v724:rcl2_v692)):rcl2_f645()):rcl2_f645()):rcl2_f645());}}
static double rcl2_f707(){if (rcl2_p707) return rcl2_m707; else {rcl2_p707=T;return rcl2_m707=(rcl2_f710()?rcl2_f724():rcl2_f875());}}
static double rcl2_f709(){if (rcl2_p709) return rcl2_m709; else {rcl2_p709=T;return rcl2_m709=(rcl2_f710()?rcl2_f724():rcl2_f880());}}
static int rcl2_f708(){if (rcl2_p708) return rcl2_m708; else {rcl2_p708=T;return rcl2_m708=(rcl2_f709()>(0.0));}}
static int rcl2_f702(){if (rcl2_p702) return rcl2_m702; else {rcl2_p702=T;return rcl2_m702=(rcl2_f710()?((rcl2_v708=rcl2_f708()),(rcl2_v708?rcl2_v708:(fabs((rcl2_f707()-(0.0)))<rcl2_v2340))):NIL);}}
static double rcl2_f2123(){if (rcl2_p2123) return rcl2_m2123; else {rcl2_p2123=T;return rcl2_m2123=(rcl2_f2126()-(rcl2_f2125()/rcl2_f2326()));}}
static int rcl2_f2122(){if (rcl2_p2122) return rcl2_m2122; else {rcl2_p2122=T;return rcl2_m2122=(rcl2_f2123()<0.0);}}
static double rcl2_f2099(){if (rcl2_p2099) return rcl2_m2099; else {rcl2_p2099=T;return rcl2_m2099=sqrt(rcl2_f2123());}}
static double rcl2_f1918(){if (rcl2_p1918) return rcl2_m1918; else {rcl2_p1918=T;return rcl2_m1918=normalize_rotation((atan2(rcl2_f1943(),(((-rcl2_f2099())+rcl2_v2346)-rcl2_v2346))-rcl2_f2050()));}}
static double rcl2_f1917(){if (rcl2_p1917) return rcl2_m1917; else {rcl2_p1917=T;return rcl2_m1917=normalize_rotation(rcl2_f1918());}}
static int rcl2_f832(){if (rcl2_p832) return rcl2_m832; else {rcl2_p832=T;return rcl2_m832=((rcl2_v1917=rcl2_f1917()),((fabs((rcl2_v1917-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v1917-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v1917-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static int rcl2_f831(){if (rcl2_p831) return rcl2_m831; else {rcl2_p831=T;return rcl2_m831=((rcl2_v832=rcl2_f832()),(rcl2_v832?rcl2_v832:rcl2_f884()));}}
static double rcl2_f828(){if (rcl2_p828) return rcl2_m828; else {rcl2_p828=T;return rcl2_m828=(rcl2_f831()?rcl2_f1918():rcl2_f875());}}
static double rcl2_f830(){if (rcl2_p830) return rcl2_m830; else {rcl2_p830=T;return rcl2_m830=(rcl2_f831()?rcl2_f1918():rcl2_f880());}}
static int rcl2_f829(){if (rcl2_p829) return rcl2_m829; else {rcl2_p829=T;return rcl2_m829=(rcl2_f830()>(0.0));}}
static int rcl2_f823(){if (rcl2_p823) return rcl2_m823; else {rcl2_p823=T;return rcl2_m823=(rcl2_f831()?((rcl2_v829=rcl2_f829()),(rcl2_v829?rcl2_v829:(fabs((rcl2_f828()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f822(){if (rcl2_p822) return rcl2_m822; else {rcl2_p822=T;return rcl2_m822=(rcl2_f823()?rcl2_f831():NIL);}}
static double rcl2_f819(){if (rcl2_p819) return rcl2_m819; else {rcl2_p819=T;return rcl2_m819=(rcl2_f823()?rcl2_f828():rcl2_f875());}}
static double rcl2_f821(){if (rcl2_p821) return rcl2_m821; else {rcl2_p821=T;return rcl2_m821=(rcl2_f823()?rcl2_f830():rcl2_f880());}}
static int rcl2_f820(){if (rcl2_p820) return rcl2_m820; else {rcl2_p820=T;return rcl2_m820=(rcl2_f821()>(0.0));}}
static int rcl2_f814(){if (rcl2_p814) return rcl2_m814; else {rcl2_p814=T;return rcl2_m814=(rcl2_f822()?((rcl2_v820=rcl2_f820()),(rcl2_v820?rcl2_v820:(fabs((rcl2_f819()-(0.0)))<rcl2_v2340))):NIL);}}
static double rcl2_f1939(){if (rcl2_p1939) return rcl2_m1939; else {rcl2_p1939=T;return rcl2_m1939=normalize_rotation((atan2(rcl2_f1943(),((rcl2_f2099()+rcl2_v2346)-rcl2_v2346))-rcl2_f2050()));}}
static double rcl2_f1938(){if (rcl2_p1938) return rcl2_m1938; else {rcl2_p1938=T;return rcl2_m1938=normalize_rotation(rcl2_f1939());}}
static int rcl2_f853(){if (rcl2_p853) return rcl2_m853; else {rcl2_p853=T;return rcl2_m853=((rcl2_v1938=rcl2_f1938()),((fabs((rcl2_v1938-(0.0)))<rcl2_v2340)?NIL:((fabs((rcl2_v1938-(-6.283185307179586)))<rcl2_v2340)?NIL:((fabs((rcl2_v1938-(6.283185307179586)))<rcl2_v2340)?NIL:T))));}}
static int rcl2_f852(){if (rcl2_p852) return rcl2_m852; else {rcl2_p852=T;return rcl2_m852=((rcl2_v853=rcl2_f853()),(rcl2_v853?rcl2_v853:rcl2_f884()));}}
static double rcl2_f637(){if (rcl2_p637) return rcl2_m637; else {rcl2_p637=T;return rcl2_m637=(rcl2_f852()?(rcl2_f823()?(rcl2_f831()?((rcl2_v1939=rcl2_f1939()),(rcl2_v1918=rcl2_f1918()),((rcl2_v1939<rcl2_v1918)?rcl2_v1939:rcl2_v1918)):rcl2_f645()):rcl2_f645()):rcl2_f645());}}
static double rcl2_f849(){if (rcl2_p849) return rcl2_m849; else {rcl2_p849=T;return rcl2_m849=(rcl2_f852()?rcl2_f1939():rcl2_f875());}}
static double rcl2_f851(){if (rcl2_p851) return rcl2_m851; else {rcl2_p851=T;return rcl2_m851=(rcl2_f852()?rcl2_f1939():rcl2_f880());}}
static int rcl2_f850(){if (rcl2_p850) return rcl2_m850; else {rcl2_p850=T;return rcl2_m850=(rcl2_f851()>(0.0));}}
static int rcl2_f844(){if (rcl2_p844) return rcl2_m844; else {rcl2_p844=T;return rcl2_m844=(rcl2_f852()?((rcl2_v850=rcl2_f850()),(rcl2_v850?rcl2_v850:(fabs((rcl2_f849()-(0.0)))<rcl2_v2340))):NIL);}}
static int rcl2_f1005(){if (rcl2_p1005) return rcl2_m1005; else {rcl2_p1005=T;return rcl2_m1005=(fabs(((rcl2_f1011()?rcl2_f1009():((rcl2_v2171=rcl2_f2171()),(rcl2_v2169=rcl2_f2169()),sqrt(((rcl2_v2171*rcl2_v2171)+(rcl2_v2169*rcl2_v2169)))))-rcl2_f2159()))<rcl2_v2340);}}
static int rcl2_f984(){if (rcl2_p984) return rcl2_m984; else {rcl2_p984=T;return rcl2_m984=((rcl2_v1005=rcl2_f1005()),(rcl2_v1005?((fabs((rcl2_f2148()-(0.0)))<rcl2_v2340)?NIL:((rcl2_v996=rcl2_f996()),((fabs((rcl2_v996-(0.0)))<rcl2_v2340)?NIL:((rcl2_v996>(0.0))?rcl2_f991():(rcl2_f991()?NIL:T))))):(rcl2_v1005?NIL:T)));}}
static int rcl2_f610(){if (rcl2_p610) return rcl2_m610; else {rcl2_p610=T;return rcl2_m610=((rcl2_f984()?(rcl2_f2311()?(rcl2_f2122()?(rcl2_f1005()?(rcl2_f868()?(rcl2_f647()?rcl2_f643():rcl2_f878()):rcl2_f654()):rcl2_f880()):(rcl2_f844()?(rcl2_f814()?rcl2_f637():rcl2_f851()):rcl2_f821())):(rcl2_f803()?(rcl2_f1005()?(rcl2_f741()?(rcl2_f626()?rcl2_f624():rcl2_f749()):rcl2_f633()):rcl2_f880()):(rcl2_f702()?(rcl2_f661()?rcl2_f616():rcl2_f709()):rcl2_f668()))):rcl2_f880())>(0.0));}}
void rcl2(rcl2_a2360,rcl2_a2358,rcl2_a2356,rcl2_a2354,rcl2_a2352,rcl2_a2350,rcl2_a2348,rcl2_a2346,rcl2_a2344,rcl2_a2340)
double rcl2_a2360;
double rcl2_a2358;
double rcl2_a2356;
double rcl2_a2354;
double rcl2_a2352;
double rcl2_a2350;
double rcl2_a2348;
double rcl2_a2346;
double rcl2_a2344;
double rcl2_a2340;
{ rcl2_v2360=rcl2_a2360;
  rcl2_v2358=rcl2_a2358;
  rcl2_v2356=rcl2_a2356;
  rcl2_v2354=rcl2_a2354;
  rcl2_v2352=rcl2_a2352;
  rcl2_v2350=rcl2_a2350;
  rcl2_v2348=rcl2_a2348;
  rcl2_v2346=rcl2_a2346;
  rcl2_v2344=rcl2_a2344;
  rcl2_v2340=rcl2_a2340;
  rcl2_p645=NIL;
  rcl2_p2311=NIL;
  rcl2_p875=NIL;
  rcl2_p880=NIL;
  rcl2_p928=NIL;
  rcl2_p2314=NIL;
  rcl2_p2313=NIL;
  rcl2_p1999=NIL;
  rcl2_p911=NIL;
  rcl2_p891=NIL;
  rcl2_p890=NIL;
  rcl2_p2312=NIL;
  rcl2_p802=NIL;
  rcl2_p2309=NIL;
  rcl2_p2304=NIL;
  rcl2_p2303=NIL;
  rcl2_p2302=NIL;
  rcl2_p2050=NIL;
  rcl2_p971=NIL;
  rcl2_p967=NIL;
  rcl2_p2268=NIL;
  rcl2_p2256=NIL;
  rcl2_p2263=NIL;
  rcl2_p2254=NIL;
  rcl2_p2154=NIL;
  rcl2_p2232=NIL;
  rcl2_p997=NIL;
  rcl2_p2151=NIL;
  rcl2_p2150=NIL;
  rcl2_p2149=NIL;
  rcl2_p1009=NIL;
  rcl2_p2190=NIL;
  rcl2_p2189=NIL;
  rcl2_p2188=NIL;
  rcl2_p2117=NIL;
  rcl2_p2116=NIL;
  rcl2_p2114=NIL;
  rcl2_p2186=NIL;
  rcl2_p2184=NIL;
  rcl2_p2333=NIL;
  rcl2_p2331=NIL;
  rcl2_p2328=NIL;
  rcl2_p2310=NIL;
  rcl2_p2326=NIL;
  rcl2_p2307=NIL;
  rcl2_p2306=NIL;
  rcl2_p2327=NIL;
  rcl2_p2325=NIL;
  rcl2_p2219=NIL;
  rcl2_p799=NIL;
  rcl2_p790=NIL;
  rcl2_p798=NIL;
  rcl2_p2323=NIL;
  rcl2_p2321=NIL;
  rcl2_p1668=NIL;
  rcl2_p1563=NIL;
  rcl2_p1676=NIL;
  rcl2_p473=NIL;
  rcl2_p452=NIL;
  rcl2_p1675=NIL;
  rcl2_p583=NIL;
  rcl2_p1692=NIL;
  rcl2_p578=NIL;
  rcl2_p2322=NIL;
  rcl2_p1943=NIL;
  rcl2_p2115=NIL;
  rcl2_p2127=NIL;
  rcl2_p808=NIL;
  rcl2_p736=NIL;
  rcl2_p2125=NIL;
  rcl2_p996=NIL;
  rcl2_p2148=NIL;
  rcl2_p991=NIL;
  rcl2_p2305=NIL;
  rcl2_p2260=NIL;
  rcl2_p1666=NIL;
  rcl2_p2251=NIL;
  rcl2_p2258=NIL;
  rcl2_p981=NIL;
  rcl2_p564=NIL;
  rcl2_p557=NIL;
  rcl2_p556=NIL;
  rcl2_p544=NIL;
  rcl2_p2112=NIL;
  rcl2_p973=NIL;
  rcl2_p962=NIL;
  rcl2_p273=NIL;
  rcl2_p961=NIL;
  rcl2_p947=NIL;
  rcl2_p2300=NIL;
  rcl2_p1704=NIL;
  rcl2_p1702=NIL;
  rcl2_p2279=NIL;
  rcl2_p2277=NIL;
  rcl2_p1011=NIL;
  rcl2_p943=NIL;
  rcl2_p926=NIL;
  rcl2_p786=NIL;
  rcl2_p925=NIL;
  rcl2_p920=NIL;
  rcl2_p782=NIL;
  rcl2_p919=NIL;
  rcl2_p931=NIL;
  rcl2_p796=NIL;
  rcl2_p775=NIL;
  rcl2_p776=NIL;
  rcl2_p771=NIL;
  rcl2_p763=NIL;
  rcl2_p930=NIL;
  rcl2_p909=NIL;
  rcl2_p910=NIL;
  rcl2_p904=NIL;
  rcl2_p896=NIL;
  rcl2_p934=NIL;
  rcl2_p797=NIL;
  rcl2_p753=NIL;
  rcl2_p468=NIL;
  rcl2_p342=NIL;
  rcl2_p15=NIL;
  rcl2_p467=NIL;
  rcl2_p462=NIL;
  rcl2_p465=NIL;
  rcl2_p464=NIL;
  rcl2_p457=NIL;
  rcl2_p456=NIL;
  rcl2_p349=NIL;
  rcl2_p351=NIL;
  rcl2_p350=NIL;
  rcl2_p344=NIL;
  rcl2_p752=NIL;
  rcl2_p42=NIL;
  rcl2_p624=NIL;
  rcl2_p751=NIL;
  rcl2_p746=NIL;
  rcl2_p749=NIL;
  rcl2_p748=NIL;
  rcl2_p741=NIL;
  rcl2_p631=NIL;
  rcl2_p633=NIL;
  rcl2_p632=NIL;
  rcl2_p740=NIL;
  rcl2_p626=NIL;
  rcl2_p933=NIL;
  rcl2_p884=NIL;
  rcl2_p543=NIL;
  rcl2_p361=NIL;
  rcl2_p27=NIL;
  rcl2_p542=NIL;
  rcl2_p537=NIL;
  rcl2_p540=NIL;
  rcl2_p539=NIL;
  rcl2_p532=NIL;
  rcl2_p531=NIL;
  rcl2_p368=NIL;
  rcl2_p370=NIL;
  rcl2_p369=NIL;
  rcl2_p363=NIL;
  rcl2_p883=NIL;
  rcl2_p54=NIL;
  rcl2_p643=NIL;
  rcl2_p882=NIL;
  rcl2_p873=NIL;
  rcl2_p878=NIL;
  rcl2_p877=NIL;
  rcl2_p868=NIL;
  rcl2_p652=NIL;
  rcl2_p654=NIL;
  rcl2_p653=NIL;
  rcl2_p867=NIL;
  rcl2_p647=NIL;
  rcl2_p2171=NIL;
  rcl2_p2169=NIL;
  rcl2_p2337=NIL;
  rcl2_p2164=NIL;
  rcl2_p2162=NIL;
  rcl2_p2159=NIL;
  rcl2_p587=NIL;
  rcl2_p572=NIL;
  rcl2_p2126=NIL;
  rcl2_p1673=NIL;
  rcl2_p1672=NIL;
  rcl2_p1653=NIL;
  rcl2_p1538=NIL;
  rcl2_p1537=NIL;
  rcl2_p496=NIL;
  rcl2_p495=NIL;
  rcl2_p492=NIL;
  rcl2_p494=NIL;
  rcl2_p493=NIL;
  rcl2_p487=NIL;
  rcl2_p486=NIL;
  rcl2_p483=NIL;
  rcl2_p485=NIL;
  rcl2_p484=NIL;
  rcl2_p478=NIL;
  rcl2_p1559=NIL;
  rcl2_p1558=NIL;
  rcl2_p517=NIL;
  rcl2_p516=NIL;
  rcl2_p355=NIL;
  rcl2_p513=NIL;
  rcl2_p515=NIL;
  rcl2_p514=NIL;
  rcl2_p508=NIL;
  rcl2_p2091=NIL;
  rcl2_p470=NIL;
  rcl2_p469=NIL;
  rcl2_p450=NIL;
  rcl2_p416=NIL;
  rcl2_p408=NIL;
  rcl2_p407=NIL;
  rcl2_p395=NIL;
  rcl2_p394=NIL;
  rcl2_p391=NIL;
  rcl2_p393=NIL;
  rcl2_p392=NIL;
  rcl2_p386=NIL;
  rcl2_p385=NIL;
  rcl2_p382=NIL;
  rcl2_p384=NIL;
  rcl2_p383=NIL;
  rcl2_p377=NIL;
  rcl2_p448=NIL;
  rcl2_p440=NIL;
  rcl2_p439=NIL;
  rcl2_p427=NIL;
  rcl2_p426=NIL;
  rcl2_p334=NIL;
  rcl2_p423=NIL;
  rcl2_p425=NIL;
  rcl2_p424=NIL;
  rcl2_p418=NIL;
  rcl2_p371=NIL;
  rcl2_p314=NIL;
  rcl2_p329=NIL;
  rcl2_p328=NIL;
  rcl2_p309=NIL;
  rcl2_p306=NIL;
  rcl2_p804=NIL;
  rcl2_p803=NIL;
  rcl2_p734=NIL;
  rcl2_p700=NIL;
  rcl2_p692=NIL;
  rcl2_p691=NIL;
  rcl2_p679=NIL;
  rcl2_p678=NIL;
  rcl2_p675=NIL;
  rcl2_p677=NIL;
  rcl2_p676=NIL;
  rcl2_p670=NIL;
  rcl2_p669=NIL;
  rcl2_p666=NIL;
  rcl2_p668=NIL;
  rcl2_p667=NIL;
  rcl2_p661=NIL;
  rcl2_p732=NIL;
  rcl2_p724=NIL;
  rcl2_p723=NIL;
  rcl2_p711=NIL;
  rcl2_p710=NIL;
  rcl2_p616=NIL;
  rcl2_p707=NIL;
  rcl2_p709=NIL;
  rcl2_p708=NIL;
  rcl2_p702=NIL;
  rcl2_p2123=NIL;
  rcl2_p2122=NIL;
  rcl2_p2099=NIL;
  rcl2_p1918=NIL;
  rcl2_p1917=NIL;
  rcl2_p832=NIL;
  rcl2_p831=NIL;
  rcl2_p828=NIL;
  rcl2_p830=NIL;
  rcl2_p829=NIL;
  rcl2_p823=NIL;
  rcl2_p822=NIL;
  rcl2_p819=NIL;
  rcl2_p821=NIL;
  rcl2_p820=NIL;
  rcl2_p814=NIL;
  rcl2_p1939=NIL;
  rcl2_p1938=NIL;
  rcl2_p853=NIL;
  rcl2_p852=NIL;
  rcl2_p637=NIL;
  rcl2_p849=NIL;
  rcl2_p851=NIL;
  rcl2_p850=NIL;
  rcl2_p844=NIL;
  rcl2_p1005=NIL;
  rcl2_p984=NIL;
  rcl2_p610=NIL;
  double_or_symbol_result=((rcl2_v2342=(rcl2_v2346-rcl2_v2360)),(((fabs(rcl2_v2342)<rcl2_v2340)?(fabs(rcl2_f2337())<rcl2_v2340):NIL)?coerce_symbol_to_double_or_symbol(NIL):((rcl2_v984=rcl2_f984()),(((rcl2_v984?(rcl2_f2311()?(rcl2_f2122()?(rcl2_f1005()?(rcl2_f868()?rcl2_f882():rcl2_f867()):NIL):(rcl2_f844()?(rcl2_f814()?(rcl2_f852()?rcl2_f822():NIL):rcl2_f852()):rcl2_f822())):(rcl2_f803()?(rcl2_f1005()?(rcl2_f741()?rcl2_f751():rcl2_f740()):NIL):(rcl2_f702()?(rcl2_f661()?(rcl2_f710()?rcl2_f669():NIL):rcl2_f710()):rcl2_f669()))):NIL)?((rcl2_v610=rcl2_f610()),(rcl2_v610?rcl2_v610:(fabs(((rcl2_v984?(rcl2_f2311()?(rcl2_f2122()?(rcl2_f1005()?(rcl2_f868()?(rcl2_f647()?rcl2_f643():rcl2_f873()):rcl2_f652()):rcl2_f875()):(rcl2_f844()?(rcl2_f814()?rcl2_f637():rcl2_f849()):rcl2_f819())):(rcl2_f803()?(rcl2_f1005()?(rcl2_f741()?(rcl2_f626()?rcl2_f624():rcl2_f746()):rcl2_f631()):rcl2_f875()):(rcl2_f702()?(rcl2_f661()?rcl2_f616():rcl2_f707()):rcl2_f666()))):rcl2_f875())-(0.0)))<rcl2_v2340))):NIL)?((rcl2_v309=rcl2_f309()),(((rcl2_v309?rcl2_f371():NIL)?((rcl2_v306=rcl2_f306()),(rcl2_v306?rcl2_v306:(fabs(((rcl2_v309?rcl2_f314():rcl2_f875())-(0.0)))<rcl2_v2340))):NIL)?coerce_double_to_double_or_symbol((rcl2_v984?(rcl2_f2311()?(rcl2_f2122()?(rcl2_f1005()?(rcl2_f868()?(rcl2_f647()?(rcl2_v309?(rcl2_f572()?(rcl2_f1672()?(rcl2_f587()?(rcl2_f532()?(rcl2_f363()?((rcl2_v643=rcl2_f643()),(rcl2_v361=rcl2_f361()),((rcl2_v643<rcl2_v361)?rcl2_v643:rcl2_v361)):(rcl2_f564()?(rcl2_f543()?((rcl2_v643=rcl2_f643()),(rcl2_v557=rcl2_f557()),((rcl2_v643<rcl2_v557)?rcl2_v643:rcl2_v557)):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f508()?(rcl2_f478()?((rcl2_v643=rcl2_f643()),(rcl2_v355=rcl2_f355()),((rcl2_v643<rcl2_v355)?rcl2_v643:rcl2_v355)):(rcl2_f516()?((rcl2_v643=rcl2_f643()),(rcl2_v1559=rcl2_f1559()),((rcl2_v643<rcl2_v1559)?rcl2_v643:rcl2_v1559)):rcl2_f645())):(rcl2_f487()?(rcl2_f495()?((rcl2_v643=rcl2_f643()),(rcl2_v1538=rcl2_f1538()),((rcl2_v643<rcl2_v1538)?rcl2_v643:rcl2_v1538)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):(rcl2_f973()?(rcl2_f883()?(rcl2_v309?(rcl2_f572()?(rcl2_f1672()?(rcl2_f587()?(rcl2_f532()?(rcl2_f363()?((rcl2_v962=rcl2_f962()),(rcl2_v361=rcl2_f361()),((rcl2_v962<rcl2_v361)?rcl2_v962:rcl2_v361)):(rcl2_f564()?(rcl2_f543()?rcl2_f273():rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f508()?(rcl2_f478()?((rcl2_v962=rcl2_f962()),(rcl2_v355=rcl2_f355()),((rcl2_v962<rcl2_v355)?rcl2_v962:rcl2_v355)):(rcl2_f516()?((rcl2_v962=rcl2_f962()),(rcl2_v1559=rcl2_f1559()),((rcl2_v962<rcl2_v1559)?rcl2_v962:rcl2_v1559)):rcl2_f645())):(rcl2_f487()?(rcl2_f495()?((rcl2_v962=rcl2_f962()),(rcl2_v1538=rcl2_f1538()),((rcl2_v962<rcl2_v1538)?rcl2_v962:rcl2_v1538)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f844()?(rcl2_f814()?(rcl2_v309?(rcl2_f572()?(rcl2_f1672()?(rcl2_f587()?(rcl2_f532()?(rcl2_f363()?((rcl2_v637=rcl2_f637()),(rcl2_v361=rcl2_f361()),((rcl2_v637<rcl2_v361)?rcl2_v637:rcl2_v361)):(rcl2_f564()?(rcl2_f543()?((rcl2_v637=rcl2_f637()),(rcl2_v557=rcl2_f557()),((rcl2_v637<rcl2_v557)?rcl2_v637:rcl2_v557)):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f508()?(rcl2_f478()?((rcl2_v637=rcl2_f637()),(rcl2_v355=rcl2_f355()),((rcl2_v637<rcl2_v355)?rcl2_v637:rcl2_v355)):(rcl2_f516()?((rcl2_v637=rcl2_f637()),(rcl2_v1559=rcl2_f1559()),((rcl2_v637<rcl2_v1559)?rcl2_v637:rcl2_v1559)):rcl2_f645())):(rcl2_f487()?(rcl2_f495()?((rcl2_v637=rcl2_f637()),(rcl2_v1538=rcl2_f1538()),((rcl2_v637<rcl2_v1538)?rcl2_v637:rcl2_v1538)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):(rcl2_f852()?(rcl2_v309?(rcl2_f572()?(rcl2_f1672()?(rcl2_f587()?(rcl2_f532()?(rcl2_f363()?((rcl2_v1939=rcl2_f1939()),(rcl2_v361=rcl2_f361()),((rcl2_v1939<rcl2_v361)?rcl2_v1939:rcl2_v361)):(rcl2_f564()?(rcl2_f543()?((rcl2_v1939=rcl2_f1939()),(rcl2_v557=rcl2_f557()),((rcl2_v1939<rcl2_v557)?rcl2_v1939:rcl2_v557)):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f508()?(rcl2_f478()?((rcl2_v1939=rcl2_f1939()),(rcl2_v355=rcl2_f355()),((rcl2_v1939<rcl2_v355)?rcl2_v1939:rcl2_v355)):(rcl2_f516()?((rcl2_v1939=rcl2_f1939()),(rcl2_v1559=rcl2_f1559()),((rcl2_v1939<rcl2_v1559)?rcl2_v1939:rcl2_v1559)):rcl2_f645())):(rcl2_f487()?(rcl2_f495()?((rcl2_v1939=rcl2_f1939()),(rcl2_v1538=rcl2_f1538()),((rcl2_v1939<rcl2_v1538)?rcl2_v1939:rcl2_v1538)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):rcl2_f645())):(rcl2_f823()?(rcl2_f831()?(rcl2_v309?(rcl2_f572()?(rcl2_f1672()?(rcl2_f587()?(rcl2_f532()?(rcl2_f363()?((rcl2_v1918=rcl2_f1918()),(rcl2_v361=rcl2_f361()),((rcl2_v1918<rcl2_v361)?rcl2_v1918:rcl2_v361)):(rcl2_f564()?(rcl2_f543()?((rcl2_v1918=rcl2_f1918()),(rcl2_v557=rcl2_f557()),((rcl2_v1918<rcl2_v557)?rcl2_v1918:rcl2_v557)):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f508()?(rcl2_f478()?((rcl2_v1918=rcl2_f1918()),(rcl2_v355=rcl2_f355()),((rcl2_v1918<rcl2_v355)?rcl2_v1918:rcl2_v355)):(rcl2_f516()?((rcl2_v1918=rcl2_f1918()),(rcl2_v1559=rcl2_f1559()),((rcl2_v1918<rcl2_v1559)?rcl2_v1918:rcl2_v1559)):rcl2_f645())):(rcl2_f487()?(rcl2_f495()?((rcl2_v1918=rcl2_f1918()),(rcl2_v1538=rcl2_f1538()),((rcl2_v1918<rcl2_v1538)?rcl2_v1918:rcl2_v1538)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):rcl2_f645()):rcl2_f645()))):(rcl2_f803()?(rcl2_f1005()?(rcl2_f741()?(rcl2_f626()?(rcl2_v309?(rcl2_f572()?(rcl2_f469()?(rcl2_f587()?(rcl2_f457()?(rcl2_f344()?((rcl2_v624=rcl2_f624()),(rcl2_v342=rcl2_f342()),((rcl2_v624<rcl2_v342)?rcl2_v624:rcl2_v342)):(rcl2_f564()?(rcl2_f468()?((rcl2_v624=rcl2_f624()),(rcl2_v557=rcl2_f557()),((rcl2_v624<rcl2_v557)?rcl2_v624:rcl2_v557)):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f418()?(rcl2_f377()?((rcl2_v624=rcl2_f624()),(rcl2_v334=rcl2_f334()),((rcl2_v624<rcl2_v334)?rcl2_v624:rcl2_v334)):(rcl2_f426()?((rcl2_v624=rcl2_f624()),(rcl2_v440=rcl2_f440()),((rcl2_v624<rcl2_v440)?rcl2_v624:rcl2_v440)):rcl2_f645())):(rcl2_f386()?(rcl2_f394()?((rcl2_v624=rcl2_f624()),(rcl2_v408=rcl2_f408()),((rcl2_v624<rcl2_v408)?rcl2_v624:rcl2_v408)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):(rcl2_f973()?(rcl2_f752()?(rcl2_v309?(rcl2_f572()?(rcl2_f469()?(rcl2_f587()?(rcl2_f457()?(rcl2_f344()?((rcl2_v962=rcl2_f962()),(rcl2_v342=rcl2_f342()),((rcl2_v962<rcl2_v342)?rcl2_v962:rcl2_v342)):(rcl2_f564()?(rcl2_f468()?rcl2_f273():rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f418()?(rcl2_f377()?((rcl2_v962=rcl2_f962()),(rcl2_v334=rcl2_f334()),((rcl2_v962<rcl2_v334)?rcl2_v962:rcl2_v334)):(rcl2_f426()?((rcl2_v962=rcl2_f962()),(rcl2_v440=rcl2_f440()),((rcl2_v962<rcl2_v440)?rcl2_v962:rcl2_v440)):rcl2_f645())):(rcl2_f386()?(rcl2_f394()?((rcl2_v962=rcl2_f962()),(rcl2_v408=rcl2_f408()),((rcl2_v962<rcl2_v408)?rcl2_v962:rcl2_v408)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f702()?(rcl2_f661()?(rcl2_v309?(rcl2_f572()?(rcl2_f469()?(rcl2_f587()?(rcl2_f457()?(rcl2_f344()?((rcl2_v616=rcl2_f616()),(rcl2_v342=rcl2_f342()),((rcl2_v616<rcl2_v342)?rcl2_v616:rcl2_v342)):(rcl2_f564()?(rcl2_f468()?((rcl2_v616=rcl2_f616()),(rcl2_v557=rcl2_f557()),((rcl2_v616<rcl2_v557)?rcl2_v616:rcl2_v557)):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f418()?(rcl2_f377()?((rcl2_v616=rcl2_f616()),(rcl2_v334=rcl2_f334()),((rcl2_v616<rcl2_v334)?rcl2_v616:rcl2_v334)):(rcl2_f426()?((rcl2_v616=rcl2_f616()),(rcl2_v440=rcl2_f440()),((rcl2_v616<rcl2_v440)?rcl2_v616:rcl2_v440)):rcl2_f645())):(rcl2_f386()?(rcl2_f394()?((rcl2_v616=rcl2_f616()),(rcl2_v408=rcl2_f408()),((rcl2_v616<rcl2_v408)?rcl2_v616:rcl2_v408)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):(rcl2_f710()?(rcl2_v309?(rcl2_f572()?(rcl2_f469()?(rcl2_f587()?(rcl2_f457()?(rcl2_f344()?((rcl2_v724=rcl2_f724()),(rcl2_v342=rcl2_f342()),((rcl2_v724<rcl2_v342)?rcl2_v724:rcl2_v342)):(rcl2_f564()?(rcl2_f468()?((rcl2_v724=rcl2_f724()),(rcl2_v557=rcl2_f557()),((rcl2_v724<rcl2_v557)?rcl2_v724:rcl2_v557)):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f418()?(rcl2_f377()?((rcl2_v724=rcl2_f724()),(rcl2_v334=rcl2_f334()),((rcl2_v724<rcl2_v334)?rcl2_v724:rcl2_v334)):(rcl2_f426()?((rcl2_v724=rcl2_f724()),(rcl2_v440=rcl2_f440()),((rcl2_v724<rcl2_v440)?rcl2_v724:rcl2_v440)):rcl2_f645())):(rcl2_f386()?(rcl2_f394()?((rcl2_v724=rcl2_f724()),(rcl2_v408=rcl2_f408()),((rcl2_v724<rcl2_v408)?rcl2_v724:rcl2_v408)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):rcl2_f645())):(rcl2_f670()?(rcl2_f678()?(rcl2_v309?(rcl2_f572()?(rcl2_f469()?(rcl2_f587()?(rcl2_f457()?(rcl2_f344()?((rcl2_v692=rcl2_f692()),(rcl2_v342=rcl2_f342()),((rcl2_v692<rcl2_v342)?rcl2_v692:rcl2_v342)):(rcl2_f564()?(rcl2_f468()?((rcl2_v692=rcl2_f692()),(rcl2_v557=rcl2_f557()),((rcl2_v692<rcl2_v557)?rcl2_v692:rcl2_v557)):rcl2_f645()):rcl2_f645())):rcl2_f645()):rcl2_f645()):(rcl2_f418()?(rcl2_f377()?((rcl2_v692=rcl2_f692()),(rcl2_v334=rcl2_f334()),((rcl2_v692<rcl2_v334)?rcl2_v692:rcl2_v334)):(rcl2_f426()?((rcl2_v692=rcl2_f692()),(rcl2_v440=rcl2_f440()),((rcl2_v692<rcl2_v440)?rcl2_v692:rcl2_v440)):rcl2_f645())):(rcl2_f386()?(rcl2_f394()?((rcl2_v692=rcl2_f692()),(rcl2_v408=rcl2_f408()),((rcl2_v692<rcl2_v408)?rcl2_v692:rcl2_v408)):rcl2_f645()):rcl2_f645()))):rcl2_f645()):rcl2_f645()):rcl2_f645()):rcl2_f645())))):rcl2_f645())):(rcl2_v984?(rcl2_f2311()?(rcl2_f2122()?(rcl2_f1005()?((rcl2_v868=rcl2_f868()),(rcl2_v868?(rcl2_f647()?coerce_double_to_double_or_symbol(rcl2_f643()):rcl2_f54()):(rcl2_v868?rcl2_f54():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):(rcl2_f844()?(rcl2_f814()?coerce_double_to_double_or_symbol(rcl2_f637()):(rcl2_f852()?coerce_double_to_double_or_symbol(rcl2_f1939()):coerce_symbol_to_double_or_symbol(NIL))):(rcl2_f823()?(rcl2_f831()?coerce_double_to_double_or_symbol(rcl2_f1918()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(rcl2_f803()?(rcl2_f1005()?((rcl2_v741=rcl2_f741()),(rcl2_v741?(rcl2_f626()?coerce_double_to_double_or_symbol(rcl2_f624()):rcl2_f42()):(rcl2_v741?rcl2_f42():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):(rcl2_f702()?(rcl2_f661()?coerce_double_to_double_or_symbol(rcl2_f616()):(rcl2_f710()?coerce_double_to_double_or_symbol(rcl2_f724()):coerce_symbol_to_double_or_symbol(NIL))):(rcl2_f670()?(rcl2_f678()?coerce_double_to_double_or_symbol(rcl2_f692()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)))):(rcl2_f309()?(rcl2_f572()?(rcl2_f2311()?(rcl2_f1672()?(rcl2_f587()?((rcl2_v532=rcl2_f532()),(rcl2_v532?(rcl2_f363()?coerce_double_to_double_or_symbol(rcl2_f361()):rcl2_f27()):(rcl2_v532?rcl2_f27():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):(rcl2_f508()?(rcl2_f478()?coerce_double_to_double_or_symbol(rcl2_f355()):(rcl2_f516()?coerce_double_to_double_or_symbol(rcl2_f1559()):coerce_symbol_to_double_or_symbol(NIL))):(rcl2_f487()?(rcl2_f495()?coerce_double_to_double_or_symbol(rcl2_f1538()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))):(rcl2_f469()?(rcl2_f587()?((rcl2_v457=rcl2_f457()),(rcl2_v457?(rcl2_f344()?coerce_double_to_double_or_symbol(rcl2_f342()):rcl2_f15()):(rcl2_v457?rcl2_f15():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):(rcl2_f418()?(rcl2_f377()?coerce_double_to_double_or_symbol(rcl2_f334()):(rcl2_f426()?coerce_double_to_double_or_symbol(rcl2_f440()):coerce_symbol_to_double_or_symbol(NIL))):(rcl2_f386()?(rcl2_f394()?coerce_double_to_double_or_symbol(rcl2_f408()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))))); return;}
