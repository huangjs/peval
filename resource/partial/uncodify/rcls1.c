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
double rcls1_v6530;
double rcls1_v6528;
double rcls1_v6526;
double rcls1_v6524;
double rcls1_v6522;
double rcls1_v6520;
double rcls1_v6518;
double rcls1_v6516;
double rcls1_v6514;
double rcls1_v6512;
double rcls1_v6508;
double rcls1_v6510;
int rcls1_p3902;
double rcls1_m3902;
int rcls1_p4023;
double rcls1_m4023;
int rcls1_p4020;
double rcls1_m4020;
int rcls1_p781;
int rcls1_m781;
double rcls1_v4023;
double rcls1_v4020;
int rcls1_p4011;
double rcls1_m4011;
int rcls1_p832;
double rcls1_m832;
int rcls1_p834;
double rcls1_m834;
int rcls1_p792;
double rcls1_m792;
int rcls1_p4350;
double rcls1_m4350;
int rcls1_p1130;
double rcls1_m1130;
int rcls1_p4483;
double rcls1_m4483;
int rcls1_p4480;
double rcls1_m4480;
int rcls1_p1145;
int rcls1_m1145;
double rcls1_v4483;
double rcls1_v4480;
int rcls1_p4467;
double rcls1_m4467;
int rcls1_p2303;
double rcls1_m2303;
int rcls1_p2531;
double rcls1_m2531;
int rcls1_p2535;
double rcls1_m2535;
int rcls1_p2790;
double rcls1_m2790;
int rcls1_p2786;
double rcls1_m2786;
int rcls1_p2600;
double rcls1_m2600;
int rcls1_p6312;
double rcls1_m6312;
int rcls1_p6310;
double rcls1_m6310;
int rcls1_p6303;
double rcls1_m6303;
int rcls1_p6301;
double rcls1_m6301;
int rcls1_p6462;
int rcls1_m6462;
int rcls1_p6467;
double rcls1_m6467;
int rcls1_p6465;
int rcls1_m6465;
int rcls1_p5874;
double rcls1_m5874;
int rcls1_p5873;
double rcls1_m5873;
double rcls1_v5873;
double rcls1_v5874;
int rcls1_p4469;
double rcls1_m4469;
int rcls1_p4468;
int rcls1_m4468;
int rcls1_p4431;
double rcls1_m4431;
int rcls1_p4419;
double rcls1_m4419;
int rcls1_p4418;
double rcls1_m4418;
int rcls1_p1030;
double rcls1_m1030;
int rcls1_p5872;
double rcls1_m5872;
int rcls1_p2898;
double rcls1_m2898;
int rcls1_p2915;
double rcls1_m2915;
int rcls1_p2764;
double rcls1_m2764;
int rcls1_p2763;
int rcls1_m2763;
int rcls1_p2742;
double rcls1_m2742;
double rcls1_v2764;
int rcls1_p2750;
double rcls1_m2750;
int rcls1_p2760;
double rcls1_m2760;
int rcls1_p6501;
double rcls1_m6501;
int rcls1_p6499;
double rcls1_m6499;
double rcls1_v6501;
double rcls1_v6499;
int rcls1_p6496;
double rcls1_m6496;
double rcls1_v6496;
int rcls1_p6443;
double rcls1_m6443;
int rcls1_p6494;
double rcls1_m6494;
int rcls1_p6459;
double rcls1_m6459;
int rcls1_p2761;
double rcls1_m2761;
int rcls1_p2758;
double rcls1_m2758;
int rcls1_p2659;
double rcls1_m2659;
int rcls1_p2652;
int rcls1_m2652;
int rcls1_p2658;
double rcls1_m2658;
int rcls1_p2722;
int rcls1_m2722;
int rcls1_p2720;
double rcls1_m2720;
int rcls1_p2741;
double rcls1_m2741;
int rcls1_p2740;
double rcls1_m2740;
int rcls1_p2710;
double rcls1_m2710;
int rcls1_p2708;
double rcls1_m2708;
int rcls1_p2749;
double rcls1_m2749;
int rcls1_p2718;
double rcls1_m2718;
int rcls1_p2716;
double rcls1_m2716;
int rcls1_p2696;
double rcls1_m2696;
int rcls1_p2713;
int rcls1_m2713;
int rcls1_p2702;
double rcls1_m2702;
int rcls1_p2694;
double rcls1_m2694;
double rcls1_v2696;
double rcls1_v2694;
int rcls1_p2684;
int rcls1_m2684;
int rcls1_p2698;
int rcls1_m2698;
int rcls1_p2697;
int rcls1_m2697;
int rcls1_p2747;
double rcls1_m2747;
int rcls1_p2736;
double rcls1_m2736;
int rcls1_p2730;
double rcls1_m2730;
double rcls1_v2736;
double rcls1_v2730;
int rcls1_p2723;
int rcls1_m2723;
int rcls1_p2596;
double rcls1_m2596;
int rcls1_p2582;
double rcls1_m2582;
int rcls1_p2663;
int rcls1_m2663;
int rcls1_p2680;
int rcls1_m2680;
double rcls1_v2758;
int rcls1_p2754;
double rcls1_m2754;
int rcls1_p2674;
double rcls1_m2674;
double rcls1_v2674;
int rcls1_p2636;
double rcls1_m2636;
int rcls1_p2757;
double rcls1_m2757;
int rcls1_p2568;
double rcls1_m2568;
int rcls1_p2545;
int rcls1_m2545;
int rcls1_p2756;
double rcls1_m2756;
int rcls1_p2677;
double rcls1_m2677;
int rcls1_p2635;
double rcls1_m2635;
double rcls1_v2756;
int rcls1_p2755;
double rcls1_m2755;
double rcls1_v2677;
int rcls1_p2670;
double rcls1_m2670;
int rcls1_p2633;
double rcls1_m2633;
int rcls1_p2631;
double rcls1_m2631;
int rcls1_p2630;
double rcls1_m2630;
int rcls1_p2628;
double rcls1_m2628;
double rcls1_v2628;
int rcls1_p2619;
int rcls1_m2619;
int rcls1_p2617;
double rcls1_m2617;
int rcls1_p2616;
double rcls1_m2616;
int rcls1_p2614;
double rcls1_m2614;
double rcls1_v2614;
int rcls1_p2605;
int rcls1_m2605;
int rcls1_p2669;
int rcls1_m2669;
int rcls1_p2752;
double rcls1_m2752;
int rcls1_p2662;
double rcls1_m2662;
int rcls1_p2648;
double rcls1_m2648;
double rcls1_v2648;
int rcls1_p2640;
int rcls1_m2640;
int rcls1_p2661;
double rcls1_m2661;
double rcls1_v2661;
int rcls1_p2650;
int rcls1_m2650;
int rcls1_p2751;
int rcls1_m2751;
int rcls1_p2667;
int rcls1_m2667;
int rcls1_p2602;
int rcls1_m2602;
int rcls1_p2589;
double rcls1_m2589;
int rcls1_p2564;
double rcls1_m2564;
int rcls1_p2575;
double rcls1_m2575;
int rcls1_p2563;
double rcls1_m2563;
int rcls1_p2558;
double rcls1_m2558;
double rcls1_v2558;
int rcls1_p2550;
double rcls1_m2550;
int rcls1_v2667;
double rcls1_v2550;
int rcls1_p2538;
int rcls1_m2538;
int rcls1_p6493;
double rcls1_m6493;
int rcls1_p2242;
double rcls1_m2242;
int rcls1_p2233;
double rcls1_m2233;
int rcls1_p2231;
double rcls1_m2231;
int rcls1_p2232;
double rcls1_m2232;
double rcls1_v2232;
double rcls1_v2231;
int rcls1_p2124;
double rcls1_m2124;
double rcls1_v2232;
double rcls1_v2231;
int rcls1_p2121;
double rcls1_m2121;
int rcls1_p2228;
int rcls1_m2228;
int rcls1_p2240;
double rcls1_m2240;
int rcls1_p2239;
double rcls1_m2239;
int rcls1_p2238;
double rcls1_m2238;
double rcls1_v2239;
double rcls1_v2238;
int rcls1_p2117;
double rcls1_m2117;
double rcls1_v2239;
double rcls1_v2238;
int rcls1_p2114;
double rcls1_m2114;
int rcls1_p2237;
double rcls1_m2237;
int rcls1_p2235;
int rcls1_m2235;
int rcls1_p2226;
double rcls1_m2226;
int rcls1_p2167;
int rcls1_m2167;
int rcls1_p2189;
double rcls1_m2189;
int rcls1_p2209;
double rcls1_m2209;
double rcls1_v2226;
int rcls1_p2225;
double rcls1_m2225;
int rcls1_p2222;
double rcls1_m2222;
int rcls1_p2211;
double rcls1_m2211;
int rcls1_p2221;
double rcls1_m2221;
int rcls1_p2160;
int rcls1_m2160;
int rcls1_p2158;
double rcls1_m2158;
int rcls1_p2072;
double rcls1_m2072;
int rcls1_p2052;
double rcls1_m2052;
int rcls1_p2065;
int rcls1_m2065;
int rcls1_p2071;
double rcls1_m2071;
double rcls1_v2221;
int rcls1_p2164;
double rcls1_m2164;
int rcls1_p1980;
double rcls1_m1980;
double rcls1_v1980;
int rcls1_p1973;
double rcls1_m1973;
int rcls1_p2179;
double rcls1_m2179;
int rcls1_p2188;
double rcls1_m2188;
int rcls1_p2166;
double rcls1_m2166;
int rcls1_p1982;
double rcls1_m1982;
int rcls1_p1972;
double rcls1_m1972;
double rcls1_v2166;
int rcls1_p2165;
double rcls1_m2165;
int rcls1_p2186;
double rcls1_m2186;
int rcls1_p2174;
int rcls1_m2174;
int rcls1_p2208;
double rcls1_m2208;
int rcls1_p2207;
double rcls1_m2207;
int rcls1_p2148;
double rcls1_m2148;
int rcls1_p2146;
double rcls1_m2146;
int rcls1_p2220;
double rcls1_m2220;
int rcls1_p2156;
double rcls1_m2156;
int rcls1_p2140;
double rcls1_m2140;
int rcls1_p2154;
double rcls1_m2154;
int rcls1_p2134;
double rcls1_m2134;
int rcls1_p2132;
double rcls1_m2132;
int rcls1_p2151;
int rcls1_m2151;
int rcls1_p2135;
int rcls1_m2135;
double rcls1_v2134;
double rcls1_v2132;
int rcls1_p2110;
int rcls1_m2110;
int rcls1_v2151;
int rcls1_p2103;
double rcls1_m2103;
double rcls1_v2103;
double rcls1_v792;
int rcls1_p201;
double rcls1_m201;
int rcls1_p2102;
double rcls1_m2102;
double rcls1_v2102;
int rcls1_p2090;
int rcls1_m2090;
int rcls1_v2090;
int rcls1_p2089;
int rcls1_m2089;
int rcls1_p40;
double_or_symbol rcls1_m40;
int rcls1_p1860;
double rcls1_m1860;
double rcls1_v1860;
double rcls1_v792;
int rcls1_p216;
double rcls1_m216;
int rcls1_p2086;
double rcls1_m2086;
int rcls1_p2088;
double rcls1_m2088;
int rcls1_p2087;
int rcls1_m2087;
int rcls1_v2087;
int rcls1_p2081;
int rcls1_m2081;
int rcls1_p1866;
double rcls1_m1866;
int rcls1_p1868;
double rcls1_m1868;
int rcls1_p1867;
int rcls1_m1867;
int rcls1_p2080;
int rcls1_m2080;
int rcls1_v1867;
int rcls1_p1861;
int rcls1_m1861;
int rcls1_p2218;
double rcls1_m2218;
int rcls1_p2203;
double rcls1_m2203;
int rcls1_p2197;
double rcls1_m2197;
int rcls1_p2931;
double rcls1_m2931;
int rcls1_p2922;
double rcls1_m2922;
int rcls1_p2920;
double rcls1_m2920;
int rcls1_p2921;
double rcls1_m2921;
double rcls1_v2921;
double rcls1_v2920;
int rcls1_p2806;
double rcls1_m2806;
double rcls1_v2921;
double rcls1_v2920;
int rcls1_p2803;
double rcls1_m2803;
int rcls1_p2917;
int rcls1_m2917;
int rcls1_p2929;
double rcls1_m2929;
int rcls1_p2928;
double rcls1_m2928;
int rcls1_p2927;
double rcls1_m2927;
double rcls1_v2928;
double rcls1_v2927;
int rcls1_p2799;
double rcls1_m2799;
double rcls1_v2928;
double rcls1_v2927;
int rcls1_p2796;
double rcls1_m2796;
int rcls1_p2926;
double rcls1_m2926;
int rcls1_p2924;
int rcls1_m2924;
int rcls1_p2911;
double rcls1_m2911;
int rcls1_p2849;
int rcls1_m2849;
int rcls1_p2872;
double rcls1_m2872;
int rcls1_p2892;
double rcls1_m2892;
double rcls1_v2911;
int rcls1_p2910;
double rcls1_m2910;
int rcls1_p2907;
double rcls1_m2907;
int rcls1_p2894;
double rcls1_m2894;
int rcls1_p2906;
double rcls1_m2906;
int rcls1_p2842;
int rcls1_m2842;
int rcls1_p2840;
double rcls1_m2840;
int rcls1_p2516;
double rcls1_m2516;
int rcls1_p2496;
double rcls1_m2496;
int rcls1_p2509;
int rcls1_m2509;
int rcls1_p2515;
double rcls1_m2515;
double rcls1_v2906;
int rcls1_p2846;
double rcls1_m2846;
int rcls1_p2424;
double rcls1_m2424;
double rcls1_v2424;
int rcls1_p2417;
double rcls1_m2417;
int rcls1_p2862;
double rcls1_m2862;
int rcls1_p2871;
double rcls1_m2871;
int rcls1_p2848;
double rcls1_m2848;
int rcls1_p2426;
double rcls1_m2426;
int rcls1_p2416;
double rcls1_m2416;
double rcls1_v2848;
int rcls1_p2847;
double rcls1_m2847;
int rcls1_p2869;
double rcls1_m2869;
int rcls1_p2857;
int rcls1_m2857;
int rcls1_p2891;
double rcls1_m2891;
int rcls1_p2890;
double rcls1_m2890;
int rcls1_p2830;
double rcls1_m2830;
int rcls1_p2828;
double rcls1_m2828;
int rcls1_p2905;
double rcls1_m2905;
int rcls1_p2838;
double rcls1_m2838;
int rcls1_p2822;
double rcls1_m2822;
int rcls1_p2836;
double rcls1_m2836;
int rcls1_p2816;
double rcls1_m2816;
int rcls1_p2814;
double rcls1_m2814;
int rcls1_p2833;
int rcls1_m2833;
int rcls1_p2817;
int rcls1_m2817;
double rcls1_v2816;
double rcls1_v2814;
int rcls1_p2792;
int rcls1_m2792;
int rcls1_v2833;
int rcls1_p2781;
double rcls1_m2781;
double rcls1_v2781;
double rcls1_v792;
int rcls1_p350;
double rcls1_m350;
int rcls1_p1747;
int rcls1_m1747;
int rcls1_p2780;
double rcls1_m2780;
double rcls1_v2780;
int rcls1_p2766;
int rcls1_m2766;
int rcls1_v2766;
int rcls1_p2537;
int rcls1_m2537;
int rcls1_p70;
double_or_symbol rcls1_m70;
int rcls1_p2302;
double rcls1_m2302;
double rcls1_v2302;
double rcls1_v792;
int rcls1_p365;
double rcls1_m365;
int rcls1_p1792;
int rcls1_m1792;
int rcls1_p1790;
int rcls1_m1790;
int rcls1_p2530;
double rcls1_m2530;
int rcls1_p2534;
double rcls1_m2534;
int rcls1_p2533;
int rcls1_m2533;
int rcls1_v2533;
int rcls1_p2525;
int rcls1_m2525;
int rcls1_p2310;
double rcls1_m2310;
int rcls1_p2312;
double rcls1_m2312;
int rcls1_p2311;
int rcls1_m2311;
int rcls1_p2524;
int rcls1_m2524;
int rcls1_v2311;
int rcls1_p2305;
int rcls1_m2305;
int rcls1_p2903;
double rcls1_m2903;
int rcls1_p2886;
double rcls1_m2886;
int rcls1_p2880;
double rcls1_m2880;
int rcls1_p6505;
double rcls1_m6505;
int rcls1_v2934;
double rcls1_v6505;
int rcls1_p6469;
double rcls1_m6469;
int rcls1_p6127;
double rcls1_m6127;
int rcls1_p6125;
double rcls1_m6125;
double rcls1_v6125;
int rcls1_p6124;
double rcls1_m6124;
double rcls1_v4011;
int rcls1_p4008;
double rcls1_m4008;
double rcls1_v4008;
int rcls1_p3976;
double rcls1_m3976;
int rcls1_p670;
double rcls1_m670;
int rcls1_p660;
double rcls1_m660;
int rcls1_p666;
double rcls1_m666;
double rcls1_v670;
int rcls1_p668;
double rcls1_m668;
int rcls1_p667;
int rcls1_m667;
int rcls1_p665;
double rcls1_m665;
int rcls1_p659;
double rcls1_m659;
int rcls1_p568;
double rcls1_m568;
int rcls1_p540;
int rcls1_m540;
int rcls1_p658;
double rcls1_m658;
int rcls1_p657;
int rcls1_m657;
int rcls1_p664;
double rcls1_m664;
int rcls1_p566;
double rcls1_m566;
int rcls1_p541;
int rcls1_m541;
int rcls1_p538;
double rcls1_m538;
int rcls1_p533;
double rcls1_m533;
int rcls1_p526;
double rcls1_m526;
int rcls1_p532;
double rcls1_m532;
int rcls1_p525;
double rcls1_m525;
int rcls1_p508;
int rcls1_m508;
int rcls1_p564;
double rcls1_m564;
int rcls1_p521;
double rcls1_m521;
double rcls1_v521;
int rcls1_p513;
double rcls1_m513;
int rcls1_p562;
double rcls1_m562;
int rcls1_p561;
double rcls1_m561;
double rcls1_v561;
int rcls1_p549;
int rcls1_m549;
int rcls1_v549;
double rcls1_v513;
int rcls1_p501;
int rcls1_m501;
int rcls1_p498;
double rcls1_m498;
int rcls1_p500;
double rcls1_m500;
int rcls1_p499;
int rcls1_m499;
int rcls1_v499;
int rcls1_p493;
int rcls1_m493;
int rcls1_p492;
int rcls1_m492;
int rcls1_p490;
int rcls1_m490;
int rcls1_v490;
int rcls1_p484;
int rcls1_m484;
int rcls1_p662;
double rcls1_m662;
int rcls1_p619;
double rcls1_m619;
int rcls1_p596;
double rcls1_m596;
int rcls1_p617;
double rcls1_m617;
int rcls1_p616;
double rcls1_m616;
double rcls1_v616;
int rcls1_p604;
int rcls1_m604;
int rcls1_p661;
int rcls1_m661;
int rcls1_p655;
double rcls1_m655;
int rcls1_p650;
double rcls1_m650;
int rcls1_p643;
double rcls1_m643;
int rcls1_p649;
double rcls1_m649;
double rcls1_v596;
int rcls1_p588;
double rcls1_m588;
int rcls1_p635;
double rcls1_m635;
int rcls1_p642;
double rcls1_m642;
int rcls1_p639;
int rcls1_m639;
int rcls1_p630;
int rcls1_m630;
int rcls1_p629;
int rcls1_m629;
int rcls1_v604;
double rcls1_v588;
int rcls1_p578;
int rcls1_m578;
int rcls1_p576;
int rcls1_m576;
int rcls1_v578;
int rcls1_v576;
int rcls1_p570;
int rcls1_m570;
double rcls1_v635;
int rcls1_p626;
int rcls1_m626;
int rcls1_p3987;
double rcls1_m3987;
int rcls1_p4003;
double rcls1_m4003;
double rcls1_v4003;
int rcls1_p4001;
int rcls1_m4001;
int rcls1_p3993;
int rcls1_m3993;
int rcls1_p3950;
int rcls1_m3950;
int rcls1_v3950;
int rcls1_p3948;
int rcls1_m3948;
int rcls1_p4000;
double rcls1_m4000;
int rcls1_p3998;
int rcls1_m3998;
int rcls1_v3998;
int rcls1_p3994;
int rcls1_m3994;
int rcls1_v3994;
int rcls1_p622;
int rcls1_m622;
int rcls1_v3993;
int rcls1_p775;
double rcls1_m775;
int rcls1_p770;
double rcls1_m770;
int rcls1_p769;
int rcls1_m769;
int rcls1_p773;
double rcls1_m773;
int rcls1_p733;
double rcls1_m733;
int rcls1_p710;
double rcls1_m710;
int rcls1_p731;
double rcls1_m731;
int rcls1_p730;
double rcls1_m730;
double rcls1_v730;
int rcls1_p718;
int rcls1_m718;
int rcls1_p772;
int rcls1_m772;
int rcls1_p767;
double rcls1_m767;
int rcls1_p762;
double rcls1_m762;
int rcls1_p755;
double rcls1_m755;
int rcls1_p761;
double rcls1_m761;
double rcls1_v710;
int rcls1_p702;
double rcls1_m702;
int rcls1_p747;
double rcls1_m747;
int rcls1_p754;
double rcls1_m754;
int rcls1_p751;
int rcls1_m751;
int rcls1_p742;
int rcls1_m742;
int rcls1_p741;
int rcls1_m741;
int rcls1_v718;
double rcls1_v702;
int rcls1_p692;
int rcls1_m692;
int rcls1_p475;
double rcls1_m475;
int rcls1_p689;
double rcls1_m689;
int rcls1_p691;
double rcls1_m691;
int rcls1_p690;
int rcls1_m690;
int rcls1_v690;
int rcls1_p684;
int rcls1_m684;
int rcls1_p681;
int rcls1_m681;
int rcls1_v684;
int rcls1_v681;
int rcls1_p675;
int rcls1_m675;
double rcls1_v747;
int rcls1_p738;
int rcls1_m738;
int rcls1_p736;
int rcls1_m736;
int rcls1_v684;
int rcls1_p470;
double rcls1_m470;
double rcls1_v617;
double rcls1_v562;
int rcls1_p454;
double rcls1_m454;
int rcls1_p415;
int rcls1_m415;
int rcls1_p449;
int rcls1_m449;
int rcls1_p439;
int rcls1_m439;
int rcls1_p671;
int rcls1_m671;
int rcls1_p477;
int rcls1_m477;
int rcls1_p434;
double rcls1_m434;
int rcls1_p437;
double rcls1_m437;
int rcls1_p436;
int rcls1_m436;
int rcls1_v436;
int rcls1_p429;
int rcls1_m429;
int rcls1_p428;
int rcls1_m428;
int rcls1_p425;
double rcls1_m425;
int rcls1_p427;
double rcls1_m427;
int rcls1_p426;
int rcls1_m426;
int rcls1_v426;
int rcls1_p420;
int rcls1_m420;
double rcls1_v4467;
int rcls1_p4464;
double rcls1_m4464;
double rcls1_v4464;
int rcls1_p4430;
double rcls1_m4430;
int rcls1_p1029;
double rcls1_m1029;
int rcls1_p1019;
double rcls1_m1019;
int rcls1_p1025;
double rcls1_m1025;
double rcls1_v1029;
int rcls1_p1027;
double rcls1_m1027;
int rcls1_p1026;
int rcls1_m1026;
int rcls1_p1024;
double rcls1_m1024;
int rcls1_p1018;
double rcls1_m1018;
int rcls1_p927;
double rcls1_m927;
int rcls1_p899;
int rcls1_m899;
int rcls1_p1017;
double rcls1_m1017;
int rcls1_p1016;
int rcls1_m1016;
int rcls1_p1023;
double rcls1_m1023;
int rcls1_p925;
double rcls1_m925;
int rcls1_p900;
int rcls1_m900;
int rcls1_p897;
double rcls1_m897;
int rcls1_p892;
double rcls1_m892;
int rcls1_p885;
double rcls1_m885;
int rcls1_p891;
double rcls1_m891;
int rcls1_p884;
double rcls1_m884;
int rcls1_p867;
int rcls1_m867;
int rcls1_p923;
double rcls1_m923;
int rcls1_p880;
double rcls1_m880;
double rcls1_v880;
int rcls1_p872;
double rcls1_m872;
int rcls1_p921;
double rcls1_m921;
int rcls1_p920;
double rcls1_m920;
double rcls1_v920;
int rcls1_p908;
int rcls1_m908;
int rcls1_v908;
double rcls1_v872;
int rcls1_p860;
int rcls1_m860;
int rcls1_p857;
double rcls1_m857;
int rcls1_p859;
double rcls1_m859;
int rcls1_p858;
int rcls1_m858;
int rcls1_v858;
int rcls1_p852;
int rcls1_m852;
int rcls1_p851;
int rcls1_m851;
int rcls1_p849;
int rcls1_m849;
int rcls1_v849;
int rcls1_p843;
int rcls1_m843;
int rcls1_p1021;
double rcls1_m1021;
int rcls1_p978;
double rcls1_m978;
int rcls1_p955;
double rcls1_m955;
int rcls1_p976;
double rcls1_m976;
int rcls1_p975;
double rcls1_m975;
double rcls1_v975;
int rcls1_p963;
int rcls1_m963;
int rcls1_p1020;
int rcls1_m1020;
int rcls1_p1014;
double rcls1_m1014;
int rcls1_p1009;
double rcls1_m1009;
int rcls1_p1002;
double rcls1_m1002;
int rcls1_p1008;
double rcls1_m1008;
double rcls1_v955;
int rcls1_p947;
double rcls1_m947;
int rcls1_p994;
double rcls1_m994;
int rcls1_p1001;
double rcls1_m1001;
int rcls1_p998;
int rcls1_m998;
int rcls1_p989;
int rcls1_m989;
int rcls1_p988;
int rcls1_m988;
int rcls1_v963;
double rcls1_v947;
int rcls1_p937;
int rcls1_m937;
int rcls1_p935;
int rcls1_m935;
int rcls1_v937;
int rcls1_v935;
int rcls1_p929;
int rcls1_m929;
double rcls1_v994;
int rcls1_p985;
int rcls1_m985;
int rcls1_p4442;
double rcls1_m4442;
int rcls1_p4458;
double rcls1_m4458;
double rcls1_v4458;
int rcls1_p4456;
int rcls1_m4456;
int rcls1_p4448;
int rcls1_m4448;
int rcls1_p4401;
int rcls1_m4401;
int rcls1_v4401;
int rcls1_p4399;
int rcls1_m4399;
int rcls1_p4455;
double rcls1_m4455;
int rcls1_p4453;
int rcls1_m4453;
int rcls1_v4453;
int rcls1_p4449;
int rcls1_m4449;
int rcls1_v4449;
int rcls1_p981;
int rcls1_m981;
int rcls1_v4448;
int rcls1_p1138;
double rcls1_m1138;
int rcls1_p1133;
double rcls1_m1133;
int rcls1_p1132;
int rcls1_m1132;
int rcls1_p1136;
double rcls1_m1136;
int rcls1_p1094;
double rcls1_m1094;
int rcls1_p1071;
double rcls1_m1071;
int rcls1_p1092;
double rcls1_m1092;
int rcls1_p1091;
double rcls1_m1091;
double rcls1_v1091;
int rcls1_p1079;
int rcls1_m1079;
int rcls1_p1135;
int rcls1_m1135;
int rcls1_p1128;
double rcls1_m1128;
int rcls1_p1123;
double rcls1_m1123;
int rcls1_p1116;
double rcls1_m1116;
int rcls1_p1122;
double rcls1_m1122;
double rcls1_v1071;
int rcls1_p1063;
double rcls1_m1063;
int rcls1_p1108;
double rcls1_m1108;
int rcls1_p1115;
double rcls1_m1115;
int rcls1_p1112;
int rcls1_m1112;
int rcls1_p1103;
int rcls1_m1103;
int rcls1_p1102;
int rcls1_m1102;
int rcls1_v1079;
double rcls1_v1063;
int rcls1_p1053;
int rcls1_m1053;
int rcls1_p830;
double rcls1_m830;
int rcls1_p1050;
double rcls1_m1050;
int rcls1_p1052;
double rcls1_m1052;
int rcls1_p1051;
int rcls1_m1051;
int rcls1_v1051;
int rcls1_p1045;
int rcls1_m1045;
int rcls1_p1042;
int rcls1_m1042;
int rcls1_v1045;
int rcls1_v1042;
int rcls1_p1036;
int rcls1_m1036;
double rcls1_v1108;
int rcls1_p1099;
int rcls1_m1099;
int rcls1_p1097;
int rcls1_m1097;
int rcls1_v1045;
int rcls1_p825;
double rcls1_m825;
double rcls1_v976;
double rcls1_v921;
int rcls1_p809;
double rcls1_m809;
int rcls1_p419;
int rcls1_m419;
int rcls1_p804;
int rcls1_m804;
int rcls1_p794;
int rcls1_m794;
int rcls1_p1032;
int rcls1_m1032;
int rcls1_p836;
int rcls1_m836;
double rcls1_v809;
double rcls1_v454;
int rcls1_p396;
double rcls1_m396;
int rcls1_p787;
double rcls1_m787;
int rcls1_p790;
double rcls1_m790;
int rcls1_p789;
int rcls1_m789;
int rcls1_v789;
int rcls1_p782;
int rcls1_m782;
int rcls1_p393;
int rcls1_m393;
double rcls1_v6127;
int rcls1_p6122;
double rcls1_m6122;
double rcls1_v2203;
double rcls1_v2197;
int rcls1_p2190;
int rcls1_m2190;
double rcls1_v1860;
double rcls1_v396;
double rcls1_v1860;
double rcls1_v809;
double rcls1_v1860;
double rcls1_v454;
double rcls1_v2103;
double rcls1_v396;
double rcls1_v2103;
double rcls1_v809;
double rcls1_v2103;
double rcls1_v454;
int rcls1_p186;
double rcls1_m186;
int rcls1_v2081;
int rcls1_p34;
double_or_symbol rcls1_m34;
int rcls1_p1499;
double rcls1_m1499;
double rcls1_v2781;
double rcls1_v2103;
int rcls1_p1461;
double rcls1_m1461;
int rcls1_p1783;
int rcls1_m1783;
int rcls1_p1741;
int rcls1_m1741;
int rcls1_p1823;
double rcls1_m1823;
int rcls1_p1855;
double rcls1_m1855;
int rcls1_v2190;
double rcls1_v2179;
int rcls1_p2168;
int rcls1_m2168;
int rcls1_p2076;
int rcls1_m2076;
double rcls1_v6122;
int rcls1_p6089;
double rcls1_m6089;
double rcls1_v1982;
int rcls1_p1976;
double rcls1_m1976;
int rcls1_p1975;
int rcls1_m1975;
int rcls1_p1970;
double rcls1_m1970;
int rcls1_p1954;
double rcls1_m1954;
int rcls1_p1953;
double rcls1_m1953;
int rcls1_p1951;
double rcls1_m1951;
double rcls1_v1951;
int rcls1_p1942;
int rcls1_m1942;
int rcls1_p1910;
double rcls1_m1910;
double rcls1_v1910;
double rcls1_v792;
int rcls1_p93;
double rcls1_m93;
int rcls1_p1760;
int rcls1_m1760;
int rcls1_p1909;
double rcls1_m1909;
double rcls1_v1909;
int rcls1_p1897;
int rcls1_m1897;
int rcls1_v1897;
int rcls1_p1896;
int rcls1_m1896;
int rcls1_p1893;
double rcls1_m1893;
int rcls1_p1895;
double rcls1_m1895;
int rcls1_p1894;
int rcls1_m1894;
int rcls1_v1894;
int rcls1_p1888;
int rcls1_m1888;
double rcls1_v1910;
double rcls1_v396;
double rcls1_v1910;
double rcls1_v809;
double rcls1_v1910;
double rcls1_v454;
int rcls1_p82;
double rcls1_m82;
int rcls1_p20;
double_or_symbol rcls1_m20;
int rcls1_p1479;
double rcls1_m1479;
double rcls1_v2781;
double rcls1_v1910;
int rcls1_p1437;
double rcls1_m1437;
int rcls1_p1757;
int rcls1_m1757;
int rcls1_p1884;
double rcls1_m1884;
int rcls1_p1886;
double rcls1_m1886;
int rcls1_p1885;
int rcls1_m1885;
int rcls1_p1887;
int rcls1_m1887;
int rcls1_p1873;
int rcls1_m1873;
int rcls1_v1885;
int rcls1_p1879;
int rcls1_m1879;
int rcls1_p1968;
double rcls1_m1968;
int rcls1_p1967;
double rcls1_m1967;
int rcls1_p1965;
double rcls1_m1965;
double rcls1_v1965;
int rcls1_p1956;
int rcls1_m1956;
int rcls1_p1937;
double rcls1_m1937;
double rcls1_v1937;
double rcls1_v792;
int rcls1_p110;
double rcls1_m110;
int rcls1_p1764;
int rcls1_m1764;
int rcls1_p1936;
double rcls1_m1936;
double rcls1_v1936;
int rcls1_p1924;
int rcls1_m1924;
int rcls1_v1924;
int rcls1_p1923;
int rcls1_m1923;
double rcls1_v1937;
double rcls1_v396;
double rcls1_v1937;
double rcls1_v809;
double rcls1_v1937;
double rcls1_v454;
int rcls1_p100;
double rcls1_m100;
int rcls1_p23;
double_or_symbol rcls1_m23;
int rcls1_p1483;
double rcls1_m1483;
double rcls1_v2781;
double rcls1_v1937;
int rcls1_p1442;
double rcls1_m1442;
int rcls1_p1762;
int rcls1_m1762;
double rcls1_v1937;
double rcls1_v1910;
int rcls1_p1838;
double rcls1_m1838;
double rcls1_v1838;
double rcls1_v792;
int rcls1_p125;
double rcls1_m125;
int rcls1_p1766;
int rcls1_m1766;
int rcls1_p1733;
int rcls1_m1733;
int rcls1_p1878;
int rcls1_m1878;
int rcls1_p1920;
double rcls1_m1920;
int rcls1_p1922;
double rcls1_m1922;
int rcls1_p1921;
int rcls1_m1921;
int rcls1_v1921;
int rcls1_p1915;
int rcls1_m1915;
int rcls1_p1875;
int rcls1_m1875;
int rcls1_p2162;
double rcls1_m2162;
int rcls1_p2161;
int rcls1_m2161;
int rcls1_p2075;
double rcls1_m2075;
int rcls1_p2061;
double rcls1_m2061;
double rcls1_v2061;
int rcls1_p2053;
int rcls1_m2053;
int rcls1_p2022;
double rcls1_m2022;
double rcls1_v2022;
double rcls1_v792;
int rcls1_p148;
double rcls1_m148;
int rcls1_p1776;
int rcls1_m1776;
int rcls1_p2021;
double rcls1_m2021;
double rcls1_v2021;
int rcls1_p2009;
int rcls1_m2009;
int rcls1_v2009;
int rcls1_p2008;
int rcls1_m2008;
int rcls1_p2005;
double rcls1_m2005;
int rcls1_p2007;
double rcls1_m2007;
int rcls1_p2006;
int rcls1_m2006;
int rcls1_v2006;
int rcls1_p2000;
int rcls1_m2000;
double rcls1_v2022;
double rcls1_v396;
double rcls1_v2022;
double rcls1_v809;
double rcls1_v2022;
double rcls1_v454;
int rcls1_p137;
double rcls1_m137;
int rcls1_p30;
double_or_symbol rcls1_m30;
int rcls1_p1492;
double rcls1_m1492;
double rcls1_v2781;
double rcls1_v2022;
int rcls1_p1452;
double rcls1_m1452;
int rcls1_p1773;
int rcls1_m1773;
int rcls1_p1996;
double rcls1_m1996;
int rcls1_p1998;
double rcls1_m1998;
int rcls1_p1997;
int rcls1_m1997;
int rcls1_p1999;
int rcls1_m1999;
int rcls1_p1985;
int rcls1_m1985;
int rcls1_v1997;
int rcls1_p1991;
int rcls1_m1991;
int rcls1_p2074;
double rcls1_m2074;
double rcls1_v2074;
int rcls1_p2063;
int rcls1_m2063;
int rcls1_p2048;
double rcls1_m2048;
double rcls1_v2048;
double rcls1_v792;
int rcls1_p165;
double rcls1_m165;
int rcls1_p1780;
int rcls1_m1780;
int rcls1_p2047;
double rcls1_m2047;
double rcls1_v2047;
int rcls1_p2035;
int rcls1_m2035;
int rcls1_v2035;
int rcls1_p2034;
int rcls1_m2034;
double rcls1_v2048;
double rcls1_v396;
double rcls1_v2048;
double rcls1_v809;
double rcls1_v2048;
double rcls1_v454;
int rcls1_p155;
double rcls1_m155;
int rcls1_p33;
double_or_symbol rcls1_m33;
int rcls1_p1496;
double rcls1_m1496;
double rcls1_v2781;
double rcls1_v2048;
int rcls1_p1457;
double rcls1_m1457;
int rcls1_p1778;
int rcls1_m1778;
double rcls1_v2048;
double rcls1_v2022;
int rcls1_p1850;
double rcls1_m1850;
double rcls1_v1850;
double rcls1_v792;
int rcls1_p180;
double rcls1_m180;
int rcls1_p1782;
int rcls1_m1782;
int rcls1_p1740;
int rcls1_m1740;
int rcls1_p1990;
int rcls1_m1990;
int rcls1_p2031;
double rcls1_m2031;
int rcls1_p2033;
double rcls1_m2033;
int rcls1_p2032;
int rcls1_m2032;
int rcls1_v2032;
int rcls1_p2026;
int rcls1_m2026;
int rcls1_p1807;
double rcls1_m1807;
int rcls1_p1829;
double rcls1_m1829;
int rcls1_p1828;
int rcls1_m1828;
int rcls1_p1987;
int rcls1_m1987;
int rcls1_p1869;
int rcls1_m1869;
int rcls1_v1828;
int rcls1_p1802;
int rcls1_m1802;
int rcls1_p1801;
int rcls1_m1801;
int rcls1_p1798;
double rcls1_m1798;
int rcls1_p1800;
double rcls1_m1800;
int rcls1_p1799;
int rcls1_m1799;
int rcls1_v1799;
int rcls1_p1793;
int rcls1_m1793;
double rcls1_v2426;
int rcls1_p2420;
double rcls1_m2420;
int rcls1_p2419;
int rcls1_m2419;
int rcls1_p2414;
double rcls1_m2414;
int rcls1_p2398;
double rcls1_m2398;
int rcls1_p2397;
double rcls1_m2397;
int rcls1_p2395;
double rcls1_m2395;
double rcls1_v2395;
int rcls1_p2386;
int rcls1_m2386;
int rcls1_p2354;
double rcls1_m2354;
double rcls1_v2354;
double rcls1_v792;
int rcls1_p242;
double rcls1_m242;
double rcls1_v2354;
double rcls1_v1937;
int rcls1_p1182;
double rcls1_m1182;
double rcls1_v2354;
double rcls1_v1910;
int rcls1_p1177;
double rcls1_m1177;
double rcls1_v2354;
double rcls1_v2048;
int rcls1_p1197;
double rcls1_m1197;
double rcls1_v2354;
double rcls1_v2022;
int rcls1_p1192;
double rcls1_m1192;
int rcls1_p1529;
int rcls1_m1529;
int rcls1_p1543;
int rcls1_m1543;
double rcls1_v2354;
double rcls1_v2103;
int rcls1_p1201;
double rcls1_m1201;
int rcls1_p1537;
int rcls1_m1537;
int rcls1_p1536;
int rcls1_m1536;
int rcls1_p2353;
double rcls1_m2353;
double rcls1_v2353;
int rcls1_p2341;
int rcls1_m2341;
int rcls1_v2341;
int rcls1_p2340;
int rcls1_m2340;
int rcls1_p2337;
double rcls1_m2337;
int rcls1_p2339;
double rcls1_m2339;
int rcls1_p2338;
int rcls1_m2338;
int rcls1_v2338;
int rcls1_p2332;
int rcls1_m2332;
double rcls1_v2354;
double rcls1_v396;
double rcls1_v2354;
double rcls1_v809;
double rcls1_v2354;
double rcls1_v454;
int rcls1_p231;
double rcls1_m231;
int rcls1_p50;
double_or_symbol rcls1_m50;
int rcls1_p1166;
double rcls1_m1166;
int rcls1_p1518;
int rcls1_m1518;
int rcls1_p2328;
double rcls1_m2328;
int rcls1_p2330;
double rcls1_m2330;
int rcls1_p2329;
int rcls1_m2329;
int rcls1_p2331;
int rcls1_m2331;
int rcls1_v2329;
int rcls1_p2323;
int rcls1_m2323;
int rcls1_p2412;
double rcls1_m2412;
int rcls1_p2411;
double rcls1_m2411;
int rcls1_p2409;
double rcls1_m2409;
double rcls1_v2409;
int rcls1_p2400;
int rcls1_m2400;
int rcls1_p2381;
double rcls1_m2381;
double rcls1_v2381;
double rcls1_v792;
int rcls1_p259;
double rcls1_m259;
double rcls1_v2381;
double rcls1_v1937;
int rcls1_p1226;
double rcls1_m1226;
double rcls1_v2381;
double rcls1_v1910;
int rcls1_p1221;
double rcls1_m1221;
double rcls1_v2381;
double rcls1_v2048;
int rcls1_p1241;
double rcls1_m1241;
double rcls1_v2381;
double rcls1_v2022;
int rcls1_p1236;
double rcls1_m1236;
int rcls1_p1555;
int rcls1_m1555;
int rcls1_p1569;
int rcls1_m1569;
double rcls1_v2381;
double rcls1_v2103;
int rcls1_p1245;
double rcls1_m1245;
int rcls1_p1563;
int rcls1_m1563;
int rcls1_p1562;
int rcls1_m1562;
int rcls1_p2380;
double rcls1_m2380;
double rcls1_v2380;
int rcls1_p2368;
int rcls1_m2368;
int rcls1_v2368;
int rcls1_p2367;
int rcls1_m2367;
double rcls1_v2381;
double rcls1_v396;
double rcls1_v2381;
double rcls1_v809;
double rcls1_v2381;
double rcls1_v454;
int rcls1_p249;
double rcls1_m249;
int rcls1_p53;
double_or_symbol rcls1_m53;
int rcls1_p1211;
double rcls1_m1211;
int rcls1_p1545;
int rcls1_m1545;
double rcls1_v2381;
double rcls1_v2354;
int rcls1_p2280;
double rcls1_m2280;
double rcls1_v2280;
double rcls1_v792;
int rcls1_p274;
double rcls1_m274;
int rcls1_p1588;
int rcls1_m1588;
int rcls1_p1586;
int rcls1_m1586;
int rcls1_p1267;
double rcls1_m1267;
int rcls1_p1582;
int rcls1_m1582;
int rcls1_p1263;
double rcls1_m1263;
int rcls1_p1614;
int rcls1_m1614;
int rcls1_p1612;
int rcls1_m1612;
int rcls1_p1283;
double rcls1_m1283;
int rcls1_p1604;
int rcls1_m1604;
int rcls1_p1602;
int rcls1_m1602;
int rcls1_p1280;
double rcls1_m1280;
int rcls1_p1598;
int rcls1_m1598;
int rcls1_p1276;
double rcls1_m1276;
int rcls1_p2322;
int rcls1_m2322;
int rcls1_p1584;
int rcls1_m1584;
int rcls1_p1579;
int rcls1_m1579;
int rcls1_p1605;
int rcls1_m1605;
int rcls1_p1600;
int rcls1_m1600;
int rcls1_p1595;
int rcls1_m1595;
int rcls1_p2364;
double rcls1_m2364;
int rcls1_p2366;
double rcls1_m2366;
int rcls1_p2365;
int rcls1_m2365;
int rcls1_v2365;
int rcls1_p2359;
int rcls1_m2359;
int rcls1_p2844;
double rcls1_m2844;
int rcls1_p2843;
int rcls1_m2843;
int rcls1_p2519;
double rcls1_m2519;
int rcls1_p2505;
double rcls1_m2505;
double rcls1_v2505;
int rcls1_p2497;
int rcls1_m2497;
int rcls1_p2466;
double rcls1_m2466;
double rcls1_v2466;
double rcls1_v792;
int rcls1_p297;
double rcls1_m297;
double rcls1_v2466;
double rcls1_v1937;
int rcls1_p1313;
double rcls1_m1313;
double rcls1_v2466;
double rcls1_v1910;
int rcls1_p1308;
double rcls1_m1308;
double rcls1_v2466;
double rcls1_v2048;
int rcls1_p1328;
double rcls1_m1328;
double rcls1_v2466;
double rcls1_v2022;
int rcls1_p1323;
double rcls1_m1323;
int rcls1_p1632;
int rcls1_m1632;
int rcls1_p1646;
int rcls1_m1646;
double rcls1_v2466;
double rcls1_v2103;
int rcls1_p1332;
double rcls1_m1332;
int rcls1_p1640;
int rcls1_m1640;
int rcls1_p1639;
int rcls1_m1639;
int rcls1_p2465;
double rcls1_m2465;
double rcls1_v2465;
int rcls1_p2453;
int rcls1_m2453;
int rcls1_v2453;
int rcls1_p2452;
int rcls1_m2452;
int rcls1_p2449;
double rcls1_m2449;
int rcls1_p2451;
double rcls1_m2451;
int rcls1_p2450;
int rcls1_m2450;
int rcls1_v2450;
int rcls1_p2444;
int rcls1_m2444;
double rcls1_v2466;
double rcls1_v396;
double rcls1_v2466;
double rcls1_v809;
double rcls1_v2466;
double rcls1_v454;
int rcls1_p286;
double rcls1_m286;
int rcls1_p60;
double_or_symbol rcls1_m60;
int rcls1_p1297;
double rcls1_m1297;
int rcls1_p1621;
int rcls1_m1621;
int rcls1_p2440;
double rcls1_m2440;
int rcls1_p2442;
double rcls1_m2442;
int rcls1_p2441;
int rcls1_m2441;
int rcls1_p2443;
int rcls1_m2443;
int rcls1_v2441;
int rcls1_p2435;
int rcls1_m2435;
int rcls1_p2518;
double rcls1_m2518;
double rcls1_v2518;
int rcls1_p2507;
int rcls1_m2507;
int rcls1_p2492;
double rcls1_m2492;
double rcls1_v2492;
double rcls1_v792;
int rcls1_p314;
double rcls1_m314;
double rcls1_v2492;
double rcls1_v1937;
int rcls1_p1357;
double rcls1_m1357;
double rcls1_v2492;
double rcls1_v1910;
int rcls1_p1352;
double rcls1_m1352;
double rcls1_v2492;
double rcls1_v2048;
int rcls1_p1372;
double rcls1_m1372;
double rcls1_v2492;
double rcls1_v2022;
int rcls1_p1367;
double rcls1_m1367;
int rcls1_p1658;
int rcls1_m1658;
int rcls1_p1672;
int rcls1_m1672;
double rcls1_v2492;
double rcls1_v2103;
int rcls1_p1376;
double rcls1_m1376;
int rcls1_p1666;
int rcls1_m1666;
int rcls1_p1665;
int rcls1_m1665;
int rcls1_p2491;
double rcls1_m2491;
double rcls1_v2491;
int rcls1_p2479;
int rcls1_m2479;
int rcls1_v2479;
int rcls1_p2478;
int rcls1_m2478;
double rcls1_v2492;
double rcls1_v396;
double rcls1_v2492;
double rcls1_v809;
double rcls1_v2492;
double rcls1_v454;
int rcls1_p304;
double rcls1_m304;
int rcls1_p63;
double_or_symbol rcls1_m63;
int rcls1_p1342;
double rcls1_m1342;
int rcls1_p1648;
int rcls1_m1648;
double rcls1_v2492;
double rcls1_v2466;
int rcls1_p2292;
double rcls1_m2292;
double rcls1_v2292;
double rcls1_v792;
int rcls1_p329;
double rcls1_m329;
int rcls1_p1691;
int rcls1_m1691;
int rcls1_p1689;
int rcls1_m1689;
int rcls1_p1398;
double rcls1_m1398;
int rcls1_p1685;
int rcls1_m1685;
int rcls1_p1394;
double rcls1_m1394;
int rcls1_p1717;
int rcls1_m1717;
int rcls1_p1715;
int rcls1_m1715;
int rcls1_p1414;
double rcls1_m1414;
int rcls1_p1707;
int rcls1_m1707;
int rcls1_p1705;
int rcls1_m1705;
int rcls1_p1411;
double rcls1_m1411;
int rcls1_p1701;
int rcls1_m1701;
int rcls1_p1407;
double rcls1_m1407;
int rcls1_p2434;
int rcls1_m2434;
int rcls1_p1687;
int rcls1_m1687;
int rcls1_p1682;
int rcls1_m1682;
int rcls1_p1708;
int rcls1_m1708;
int rcls1_p1703;
int rcls1_m1703;
int rcls1_p1698;
int rcls1_m1698;
int rcls1_p2475;
double rcls1_m2475;
int rcls1_p2477;
double rcls1_m2477;
int rcls1_p2476;
int rcls1_m2476;
int rcls1_v2476;
int rcls1_p2470;
int rcls1_m2470;
double rcls1_v2886;
double rcls1_v2880;
int rcls1_p2873;
int rcls1_m2873;
double rcls1_v2302;
double rcls1_v396;
double rcls1_v2302;
double rcls1_v809;
double rcls1_v2302;
double rcls1_v454;
double rcls1_v2781;
double rcls1_v396;
double rcls1_v2781;
double rcls1_v809;
double rcls1_v2781;
double rcls1_v454;
int rcls1_p335;
double rcls1_m335;
int rcls1_v2525;
int rcls1_p64;
double_or_symbol rcls1_m64;
int rcls1_p1422;
double rcls1_m1422;
int rcls1_p1718;
int rcls1_m1718;
int rcls1_p2265;
double rcls1_m2265;
int rcls1_p2297;
double rcls1_m2297;
int rcls1_v2873;
double rcls1_v2862;
int rcls1_p2850;
int rcls1_m2850;
int rcls1_p1158;
double rcls1_m1158;
double rcls1_v1158;
double rcls1_v792;
int rcls1_p380;
double rcls1_m380;
int rcls1_p2249;
double rcls1_m2249;
int rcls1_p2271;
double rcls1_m2271;
int rcls1_p2270;
int rcls1_m2270;
int rcls1_p2520;
int rcls1_m2520;
int rcls1_p2313;
int rcls1_m2313;
int rcls1_v2270;
int rcls1_p2244;
int rcls1_m2244;
int rcls1_p1154;
int rcls1_m1154;
int rcls1_v1154;
int rcls1_v782;
int rcls1_v393;
double rcls1_v1158;
double rcls1_v396;
double rcls1_v1158;
double rcls1_v809;
double rcls1_v1158;
double rcls1_v454;
double rcls1_v2292;
double rcls1_v396;
double rcls1_v2292;
double rcls1_v809;
double rcls1_v2292;
double rcls1_v454;
double rcls1_v2280;
double rcls1_v396;
double rcls1_v2280;
double rcls1_v809;
double rcls1_v2280;
double rcls1_v454;
double rcls1_v1850;
double rcls1_v396;
double rcls1_v1850;
double rcls1_v809;
double rcls1_v1850;
double rcls1_v454;
double rcls1_v1838;
double rcls1_v396;
double rcls1_v1838;
double rcls1_v809;
double rcls1_v1838;
double rcls1_v454;
static double rcls1_f3902(){if (rcls1_p3902) return rcls1_m3902; else {rcls1_p3902=T;return rcls1_m3902=atan2((rcls1_v6516-rcls1_v6512),(rcls1_v6518-rcls1_v6514));}}
static double rcls1_f4023(){if (rcls1_p4023) return rcls1_m4023; else {rcls1_p4023=T;return rcls1_m4023=(rcls1_v6514-rcls1_v6518);}}
static double rcls1_f4020(){if (rcls1_p4020) return rcls1_m4020; else {rcls1_p4020=T;return rcls1_m4020=(rcls1_v6512-rcls1_v6516);}}
static int rcls1_f781(){if (rcls1_p781) return rcls1_m781; else {rcls1_p781=T;return rcls1_m781=((fabs(rcls1_f4023())<rcls1_v6508)?(fabs(rcls1_f4020())<rcls1_v6508):NIL);}}
static double rcls1_f4011(){if (rcls1_p4011) return rcls1_m4011; else {rcls1_p4011=T;return rcls1_m4011=((rcls1_v4023=rcls1_f4023()),(rcls1_v4020=rcls1_f4020()),(rcls1_v6514-(rcls1_v6514+sqrt(((rcls1_v4023*rcls1_v4023)+(rcls1_v4020*rcls1_v4020))))));}}
static double rcls1_f832(){if (rcls1_p832) return rcls1_m832; else {rcls1_p832=T;return rcls1_m832=error("Non-numeric argument to MIN");}}
static double rcls1_f834(){if (rcls1_p834) return rcls1_m834; else {rcls1_p834=T;return rcls1_m834=error("Argument DIRECTION not of type FLOAT");}}
static double rcls1_f792(){if (rcls1_p792) return rcls1_m792; else {rcls1_p792=T;return rcls1_m792=error("No applicable method for OPPOSITE with argument types ((OR NULL FLOAT))");}}
static double rcls1_f4350(){if (rcls1_p4350) return rcls1_m4350; else {rcls1_p4350=T;return rcls1_m4350=atan2((rcls1_v6520-rcls1_v6512),(rcls1_v6522-rcls1_v6514));}}
static double rcls1_f1130(){if (rcls1_p1130) return rcls1_m1130; else {rcls1_p1130=T;return rcls1_m1130=error("Can't form tangent when points are the same");}}
static double rcls1_f4483(){if (rcls1_p4483) return rcls1_m4483; else {rcls1_p4483=T;return rcls1_m4483=(rcls1_v6514-rcls1_v6522);}}
static double rcls1_f4480(){if (rcls1_p4480) return rcls1_m4480; else {rcls1_p4480=T;return rcls1_m4480=(rcls1_v6512-rcls1_v6520);}}
static int rcls1_f1145(){if (rcls1_p1145) return rcls1_m1145; else {rcls1_p1145=T;return rcls1_m1145=((fabs(rcls1_f4483())<rcls1_v6508)?(fabs(rcls1_f4480())<rcls1_v6508):NIL);}}
static double rcls1_f4467(){if (rcls1_p4467) return rcls1_m4467; else {rcls1_p4467=T;return rcls1_m4467=((rcls1_v4483=rcls1_f4483()),(rcls1_v4480=rcls1_f4480()),(rcls1_v6514-(rcls1_v6514+sqrt(((rcls1_v4483*rcls1_v4483)+(rcls1_v4480*rcls1_v4480))))));}}
static double rcls1_f2303(){if (rcls1_p2303) return rcls1_m2303; else {rcls1_p2303=T;return rcls1_m2303=error("Non-numeric argument to MAX");}}
static double rcls1_f2531(){if (rcls1_p2531) return rcls1_m2531; else {rcls1_p2531=T;return rcls1_m2531=error("Argument X not of type FLOAT");}}
static double rcls1_f2535(){if (rcls1_p2535) return rcls1_m2535; else {rcls1_p2535=T;return rcls1_m2535=error("Argument X not of type REAL");}}
static double rcls1_f2790(){if (rcls1_p2790) return rcls1_m2790; else {rcls1_p2790=T;return rcls1_m2790=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rcls1_f2786(){if (rcls1_p2786) return rcls1_m2786; else {rcls1_p2786=T;return rcls1_m2786=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double rcls1_f2600(){if (rcls1_p2600) return rcls1_m2600; else {rcls1_p2600=T;return rcls1_m2600=error("SLOT-VALUE called on non-instance");}}
static double rcls1_f6312(){if (rcls1_p6312) return rcls1_m6312; else {rcls1_p6312=T;return rcls1_m6312=(((rcls1_v6522<rcls1_v6518)?rcls1_v6522:rcls1_v6518)-rcls1_v6508);}}
static double rcls1_f6310(){if (rcls1_p6310) return rcls1_m6310; else {rcls1_p6310=T;return rcls1_m6310=(((rcls1_v6522>rcls1_v6518)?rcls1_v6522:rcls1_v6518)+rcls1_v6508);}}
static double rcls1_f6303(){if (rcls1_p6303) return rcls1_m6303; else {rcls1_p6303=T;return rcls1_m6303=(((rcls1_v6520<rcls1_v6516)?rcls1_v6520:rcls1_v6516)-rcls1_v6508);}}
static double rcls1_f6301(){if (rcls1_p6301) return rcls1_m6301; else {rcls1_p6301=T;return rcls1_m6301=(((rcls1_v6520>rcls1_v6516)?rcls1_v6520:rcls1_v6516)+rcls1_v6508);}}
static int rcls1_f6462(){if (rcls1_p6462) return rcls1_m6462; else {rcls1_p6462=T;return rcls1_m6462=(fabs((rcls1_v6522-rcls1_v6518))<rcls1_v6508);}}
static double rcls1_f6467(){if (rcls1_p6467) return rcls1_m6467; else {rcls1_p6467=T;return rcls1_m6467=(rcls1_v6520-rcls1_v6516);}}
static int rcls1_f6465(){if (rcls1_p6465) return rcls1_m6465; else {rcls1_p6465=T;return rcls1_m6465=(fabs(rcls1_f6467())<rcls1_v6508);}}
static double rcls1_f5874(){if (rcls1_p5874) return rcls1_m5874; else {rcls1_p5874=T;return rcls1_m5874=(rcls1_v6528-rcls1_v6512);}}
static double rcls1_f5873(){if (rcls1_p5873) return rcls1_m5873; else {rcls1_p5873=T;return rcls1_m5873=(rcls1_v6530-rcls1_v6514);}}
static double rcls1_f4469(){if (rcls1_p4469) return rcls1_m4469; else {rcls1_p4469=T;return rcls1_m4469=((rcls1_v5873=rcls1_f5873()),(rcls1_v5874=rcls1_f5874()),((rcls1_v5873*rcls1_v5873)+(rcls1_v5874*rcls1_v5874)));}}
static int rcls1_f4468(){if (rcls1_p4468) return rcls1_m4468; else {rcls1_p4468=T;return rcls1_m4468=(rcls1_f4469()==0.0);}}
static double rcls1_f4431(){if (rcls1_p4431) return rcls1_m4431; else {rcls1_p4431=T;return rcls1_m4431=sqrt(rcls1_f4469());}}
static double rcls1_f4419(){if (rcls1_p4419) return rcls1_m4419; else {rcls1_p4419=T;return rcls1_m4419=(rcls1_f5873()/rcls1_f4431());}}
static double rcls1_f4418(){if (rcls1_p4418) return rcls1_m4418; else {rcls1_p4418=T;return rcls1_m4418=(rcls1_f5874()/rcls1_f4431());}}
static double rcls1_f1030(){if (rcls1_p1030) return rcls1_m1030; else {rcls1_p1030=T;return rcls1_m1030=((2.0)*rcls1_f4431());}}
static double rcls1_f5872(){if (rcls1_p5872) return rcls1_m5872; else {rcls1_p5872=T;return rcls1_m5872=atan2(rcls1_f5874(),rcls1_f5873());}}
static double rcls1_f2898(){if (rcls1_p2898) return rcls1_m2898; else {rcls1_p2898=T;return rcls1_m2898=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static double rcls1_f2915(){if (rcls1_p2915) return rcls1_m2915; else {rcls1_p2915=T;return rcls1_m2915=error("Can't form a single line when the end points are the same");}}
static double rcls1_f2764(){if (rcls1_p2764) return rcls1_m2764; else {rcls1_p2764=T;return rcls1_m2764=(rcls1_f6465()?(rcls1_f6462()?rcls1_f2915():(0.0)):(1.0));}}
static int rcls1_f2763(){if (rcls1_p2763) return rcls1_m2763; else {rcls1_p2763=T;return rcls1_m2763=(rcls1_f2764()==0.0);}}
static double rcls1_f2742(){if (rcls1_p2742) return rcls1_m2742; else {rcls1_p2742=T;return rcls1_m2742=(rcls1_f2764()*rcls1_v6528);}}
static double rcls1_f2750(){if (rcls1_p2750) return rcls1_m2750; else {rcls1_p2750=T;return rcls1_m2750=((rcls1_v2764=rcls1_f2764()),(rcls1_v2764*rcls1_v2764));}}
static double rcls1_f2760(){if (rcls1_p2760) return rcls1_m2760; else {rcls1_p2760=T;return rcls1_m2760=(rcls1_f2764()*rcls1_v6530);}}
static double rcls1_f6501(){if (rcls1_p6501) return rcls1_m6501; else {rcls1_p6501=T;return rcls1_m6501=(rcls1_v6530-rcls1_v6526);}}
static double rcls1_f6499(){if (rcls1_p6499) return rcls1_m6499; else {rcls1_p6499=T;return rcls1_m6499=(rcls1_v6528-rcls1_v6524);}}
static double rcls1_f6496(){if (rcls1_p6496) return rcls1_m6496; else {rcls1_p6496=T;return rcls1_m6496=((rcls1_v6501=rcls1_f6501()),(rcls1_v6499=rcls1_f6499()),sqrt(((rcls1_v6501*rcls1_v6501)+(rcls1_v6499*rcls1_v6499))));}}
static double rcls1_f6443(){if (rcls1_p6443) return rcls1_m6443; else {rcls1_p6443=T;return rcls1_m6443=((rcls1_v6496=rcls1_f6496()),(rcls1_v6496*rcls1_v6496));}}
static double rcls1_f6494(){if (rcls1_p6494) return rcls1_m6494; else {rcls1_p6494=T;return rcls1_m6494=(rcls1_v6518-rcls1_v6522);}}
static double rcls1_f6459(){if (rcls1_p6459) return rcls1_m6459; else {rcls1_p6459=T;return rcls1_m6459=(rcls1_f6494()/rcls1_f6467());}}
static double rcls1_f2761(){if (rcls1_p2761) return rcls1_m2761; else {rcls1_p2761=T;return rcls1_m2761=(rcls1_f6465()?(rcls1_f6462()?rcls1_f2915():rcls1_v6520):(rcls1_v6522+(rcls1_f6459()*rcls1_v6520)));}}
static double rcls1_f2758(){if (rcls1_p2758) return rcls1_m2758; else {rcls1_p2758=T;return rcls1_m2758=(rcls1_f6465()?(rcls1_f6462()?rcls1_f2915():(1.0)):rcls1_f6459());}}
static double rcls1_f2659(){if (rcls1_p2659) return rcls1_m2659; else {rcls1_p2659=T;return rcls1_m2659=(rcls1_f2761()/rcls1_f2758());}}
static int rcls1_f2652(){if (rcls1_p2652) return rcls1_m2652; else {rcls1_p2652=T;return rcls1_m2652=((rcls1_f6303()<=rcls1_f2659())&&(rcls1_f2659()<=rcls1_f6301()));}}
static double rcls1_f2658(){if (rcls1_p2658) return rcls1_m2658; else {rcls1_p2658=T;return rcls1_m2658=(rcls1_f2758()*rcls1_f2659());}}
static int rcls1_f2722(){if (rcls1_p2722) return rcls1_m2722; else {rcls1_p2722=T;return rcls1_m2722=(rcls1_f2758()>0.0);}}
static double rcls1_f2720(){if (rcls1_p2720) return rcls1_m2720; else {rcls1_p2720=T;return rcls1_m2720=(rcls1_f2722()?(-rcls1_f2764()):rcls1_f2764());}}
static double rcls1_f2741(){if (rcls1_p2741) return rcls1_m2741; else {rcls1_p2741=T;return rcls1_m2741=(rcls1_f2758()*rcls1_v6530);}}
static double rcls1_f2740(){if (rcls1_p2740) return rcls1_m2740; else {rcls1_p2740=T;return rcls1_m2740=(rcls1_f2742()-rcls1_f2741());}}
static double rcls1_f2710(){if (rcls1_p2710) return rcls1_m2710; else {rcls1_p2710=T;return rcls1_m2710=(rcls1_f2722()?(rcls1_f2741()-rcls1_f2742()):rcls1_f2740());}}
static double rcls1_f2708(){if (rcls1_p2708) return rcls1_m2708; else {rcls1_p2708=T;return rcls1_m2708=((rcls1_f2761()*rcls1_f2720())-(rcls1_f2758()*rcls1_f2710()));}}
static double rcls1_f2749(){if (rcls1_p2749) return rcls1_m2749; else {rcls1_p2749=T;return rcls1_m2749=(-rcls1_f2758());}}
static double rcls1_f2718(){if (rcls1_p2718) return rcls1_m2718; else {rcls1_p2718=T;return rcls1_m2718=(rcls1_f2722()?rcls1_f2758():rcls1_f2749());}}
static double rcls1_f2716(){if (rcls1_p2716) return rcls1_m2716; else {rcls1_p2716=T;return rcls1_m2716=((rcls1_f2764()*rcls1_f2720())-(rcls1_f2758()*rcls1_f2718()));}}
static double rcls1_f2696(){if (rcls1_p2696) return rcls1_m2696; else {rcls1_p2696=T;return rcls1_m2696=(rcls1_f2708()/rcls1_f2716());}}
static int rcls1_f2713(){if (rcls1_p2713) return rcls1_m2713; else {rcls1_p2713=T;return rcls1_m2713=(fabs((rcls1_f2716()-(0.0)))<rcls1_v6508);}}
static double rcls1_f2702(){if (rcls1_p2702) return rcls1_m2702; else {rcls1_p2702=T;return rcls1_m2702=((rcls1_f2764()*rcls1_f2710())-(rcls1_f2761()*rcls1_f2718()));}}
static double rcls1_f2694(){if (rcls1_p2694) return rcls1_m2694; else {rcls1_p2694=T;return rcls1_m2694=(rcls1_f2702()/rcls1_f2716());}}
static int rcls1_f2684(){if (rcls1_p2684) return rcls1_m2684; else {rcls1_p2684=T;return rcls1_m2684=(rcls1_f2713()?NIL:((rcls1_v2696=rcls1_f2696()),(rcls1_v2694=rcls1_f2694()),((fabs((((rcls1_f2764()*rcls1_v2696)+(rcls1_f2758()*rcls1_v2694))-rcls1_f2761()))<rcls1_v6508)?(((rcls1_f6312()<=rcls1_v2696)&&(rcls1_v2696<=rcls1_f6310()))?((rcls1_f6303()<=rcls1_v2694)&&(rcls1_v2694<=rcls1_f6301())):NIL):NIL)));}}
static int rcls1_f2698(){if (rcls1_p2698) return rcls1_m2698; else {rcls1_p2698=T;return rcls1_m2698=((fabs((rcls1_f2708()-(0.0)))<rcls1_v6508)?(fabs((rcls1_f2702()-(0.0)))<rcls1_v6508):NIL);}}
static int rcls1_f2697(){if (rcls1_p2697) return rcls1_m2697; else {rcls1_p2697=T;return rcls1_m2697=(rcls1_f2713()?rcls1_f2698():T);}}
static double rcls1_f2747(){if (rcls1_p2747) return rcls1_m2747; else {rcls1_p2747=T;return rcls1_m2747=(rcls1_f2750()-(rcls1_f2758()*rcls1_f2749()));}}
static double rcls1_f2736(){if (rcls1_p2736) return rcls1_m2736; else {rcls1_p2736=T;return rcls1_m2736=((((rcls1_f2761()*rcls1_f2764())-(rcls1_f2758()*rcls1_f2740()))/rcls1_f2747())-rcls1_v6530);}}
static double rcls1_f2730(){if (rcls1_p2730) return rcls1_m2730; else {rcls1_p2730=T;return rcls1_m2730=((((rcls1_f2764()*rcls1_f2740())-(rcls1_f2761()*rcls1_f2749()))/rcls1_f2747())-rcls1_v6528);}}
static int rcls1_f2723(){if (rcls1_p2723) return rcls1_m2723; else {rcls1_p2723=T;return rcls1_m2723=(fabs((((fabs((rcls1_f2747()-(0.0)))<rcls1_v6508)?rcls1_f2898():((rcls1_v2736=rcls1_f2736()),(rcls1_v2730=rcls1_f2730()),sqrt(((rcls1_v2736*rcls1_v2736)+(rcls1_v2730*rcls1_v2730)))))-rcls1_f6496()))<rcls1_v6508);}}
static double rcls1_f2596(){if (rcls1_p2596) return rcls1_m2596; else {rcls1_p2596=T;return rcls1_m2596=(rcls1_f2723()?(rcls1_f2697()?(rcls1_f2684()?(rcls1_f2713()?rcls1_f2600():rcls1_f2696()):rcls1_f2600()):rcls1_f2600()):rcls1_f2600());}}
static double rcls1_f2582(){if (rcls1_p2582) return rcls1_m2582; else {rcls1_p2582=T;return rcls1_m2582=(rcls1_f2723()?(rcls1_f2697()?(rcls1_f2684()?(rcls1_f2713()?rcls1_f2600():rcls1_f2694()):rcls1_f2600()):rcls1_f2600()):rcls1_f2600());}}
static int rcls1_f2663(){if (rcls1_p2663) return rcls1_m2663; else {rcls1_p2663=T;return rcls1_m2663=(rcls1_f2723()?(rcls1_f2697()?(rcls1_f2684()?(rcls1_f2713()?NIL:T):NIL):NIL):NIL);}}
static int rcls1_f2680(){if (rcls1_p2680) return rcls1_m2680; else {rcls1_p2680=T;return rcls1_m2680=(rcls1_f2723()?(rcls1_f2697()?(rcls1_f2684()?(rcls1_f2713()?rcls1_f2698():NIL):NIL):NIL):NIL);}}
static double rcls1_f2754(){if (rcls1_p2754) return rcls1_m2754; else {rcls1_p2754=T;return rcls1_m2754=((rcls1_v2758=rcls1_f2758()),(rcls1_v2758*rcls1_v2758));}}
static double rcls1_f2674(){if (rcls1_p2674) return rcls1_m2674; else {rcls1_p2674=T;return rcls1_m2674=(rcls1_f2750()+rcls1_f2754());}}
static double rcls1_f2636(){if (rcls1_p2636) return rcls1_m2636; else {rcls1_p2636=T;return rcls1_m2636=((rcls1_v2674=rcls1_f2674()),(rcls1_v2674+rcls1_v2674));}}
static double rcls1_f2757(){if (rcls1_p2757) return rcls1_m2757; else {rcls1_p2757=T;return rcls1_m2757=(rcls1_f2758()*rcls1_v6528);}}
static double rcls1_f2568(){if (rcls1_p2568) return rcls1_m2568; else {rcls1_p2568=T;return rcls1_m2568=((rcls1_f2760()+rcls1_f2757())-rcls1_f2761());}}
static int rcls1_f2545(){if (rcls1_p2545) return rcls1_m2545; else {rcls1_p2545=T;return rcls1_m2545=(rcls1_f2568()>(0.0));}}
static double rcls1_f2756(){if (rcls1_p2756) return rcls1_m2756; else {rcls1_p2756=T;return rcls1_m2756=(rcls1_f2761()-rcls1_f2760()-rcls1_f2757());}}
static double rcls1_f2677(){if (rcls1_p2677) return rcls1_m2677; else {rcls1_p2677=T;return rcls1_m2677=((-2.0)*rcls1_f2758()*rcls1_f2756());}}
static double rcls1_f2635(){if (rcls1_p2635) return rcls1_m2635; else {rcls1_p2635=T;return rcls1_m2635=((-rcls1_f2677())/rcls1_f2636());}}
static double rcls1_f2755(){if (rcls1_p2755) return rcls1_m2755; else {rcls1_p2755=T;return rcls1_m2755=((rcls1_v2756=rcls1_f2756()),(rcls1_v2756*rcls1_v2756));}}
static double rcls1_f2670(){if (rcls1_p2670) return rcls1_m2670; else {rcls1_p2670=T;return rcls1_m2670=((rcls1_v2677=rcls1_f2677()),((rcls1_v2677*rcls1_v2677)-((4.0)*rcls1_f2674()*(rcls1_f2755()-(rcls1_f2750()*rcls1_f6443())))));}}
static double rcls1_f2633(){if (rcls1_p2633) return rcls1_m2633; else {rcls1_p2633=T;return rcls1_m2633=(sqrt(rcls1_f2670())/rcls1_f2636());}}
static double rcls1_f2631(){if (rcls1_p2631) return rcls1_m2631; else {rcls1_p2631=T;return rcls1_m2631=((rcls1_f2635()+rcls1_f2633())+rcls1_v6528);}}
static double rcls1_f2630(){if (rcls1_p2630) return rcls1_m2630; else {rcls1_p2630=T;return rcls1_m2630=(rcls1_f2758()*rcls1_f2631());}}
static double rcls1_f2628(){if (rcls1_p2628) return rcls1_m2628; else {rcls1_p2628=T;return rcls1_m2628=((rcls1_f2761()-rcls1_f2630())/rcls1_f2764());}}
static int rcls1_f2619(){if (rcls1_p2619) return rcls1_m2619; else {rcls1_p2619=T;return rcls1_m2619=((rcls1_v2628=rcls1_f2628()),((fabs((((rcls1_f2764()*rcls1_v2628)+rcls1_f2630())-rcls1_f2761()))<rcls1_v6508)?(((rcls1_f6312()<=rcls1_v2628)&&(rcls1_v2628<=rcls1_f6310()))?((rcls1_f6303()<=rcls1_f2631())&&(rcls1_f2631()<=rcls1_f6301())):NIL):NIL));}}
static double rcls1_f2617(){if (rcls1_p2617) return rcls1_m2617; else {rcls1_p2617=T;return rcls1_m2617=((rcls1_f2635()-rcls1_f2633())+rcls1_v6528);}}
static double rcls1_f2616(){if (rcls1_p2616) return rcls1_m2616; else {rcls1_p2616=T;return rcls1_m2616=(rcls1_f2758()*rcls1_f2617());}}
static double rcls1_f2614(){if (rcls1_p2614) return rcls1_m2614; else {rcls1_p2614=T;return rcls1_m2614=((rcls1_f2761()-rcls1_f2616())/rcls1_f2764());}}
static int rcls1_f2605(){if (rcls1_p2605) return rcls1_m2605; else {rcls1_p2605=T;return rcls1_m2605=((rcls1_v2614=rcls1_f2614()),((fabs((((rcls1_f2764()*rcls1_v2614)+rcls1_f2616())-rcls1_f2761()))<rcls1_v6508)?(((rcls1_f6312()<=rcls1_v2614)&&(rcls1_v2614<=rcls1_f6310()))?((rcls1_f6303()<=rcls1_f2617())&&(rcls1_f2617()<=rcls1_f6301())):NIL):NIL));}}
static int rcls1_f2669(){if (rcls1_p2669) return rcls1_m2669; else {rcls1_p2669=T;return rcls1_m2669=(rcls1_f2670()<0.0);}}
static double rcls1_f2752(){if (rcls1_p2752) return rcls1_m2752; else {rcls1_p2752=T;return rcls1_m2752=(rcls1_f6443()-(rcls1_f2755()/rcls1_f2754()));}}
static double rcls1_f2662(){if (rcls1_p2662) return rcls1_m2662; else {rcls1_p2662=T;return rcls1_m2662=sqrt(rcls1_f2752());}}
static double rcls1_f2648(){if (rcls1_p2648) return rcls1_m2648; else {rcls1_p2648=T;return rcls1_m2648=((-rcls1_f2662())+rcls1_v6530);}}
static int rcls1_f2640(){if (rcls1_p2640) return rcls1_m2640; else {rcls1_p2640=T;return rcls1_m2640=((rcls1_v2648=rcls1_f2648()),((fabs((((rcls1_f2764()*rcls1_v2648)+rcls1_f2658())-rcls1_f2761()))<rcls1_v6508)?(((rcls1_f6312()<=rcls1_v2648)&&(rcls1_v2648<=rcls1_f6310()))?rcls1_f2652():NIL):NIL));}}
static double rcls1_f2661(){if (rcls1_p2661) return rcls1_m2661; else {rcls1_p2661=T;return rcls1_m2661=(rcls1_f2662()+rcls1_v6530);}}
static int rcls1_f2650(){if (rcls1_p2650) return rcls1_m2650; else {rcls1_p2650=T;return rcls1_m2650=((rcls1_v2661=rcls1_f2661()),((fabs((((rcls1_f2764()*rcls1_v2661)+rcls1_f2658())-rcls1_f2761()))<rcls1_v6508)?(((rcls1_f6312()<=rcls1_v2661)&&(rcls1_v2661<=rcls1_f6310()))?rcls1_f2652():NIL):NIL));}}
static int rcls1_f2751(){if (rcls1_p2751) return rcls1_m2751; else {rcls1_p2751=T;return rcls1_m2751=(rcls1_f2752()<0.0);}}
static int rcls1_f2667(){if (rcls1_p2667) return rcls1_m2667; else {rcls1_p2667=T;return rcls1_m2667=(rcls1_f2763()?(rcls1_f2751()?rcls1_f2680():NIL):(rcls1_f2669()?rcls1_f2680():NIL));}}
static int rcls1_f2602(){if (rcls1_p2602) return rcls1_m2602; else {rcls1_p2602=T;return rcls1_m2602=(rcls1_f2763()?(rcls1_f2751()?rcls1_f2663():(rcls1_f2650()?T:rcls1_f2640())):(rcls1_f2669()?rcls1_f2663():(rcls1_f2619()?T:rcls1_f2605())));}}
static double rcls1_f2589(){if (rcls1_p2589) return rcls1_m2589; else {rcls1_p2589=T;return rcls1_m2589=(rcls1_f2763()?(rcls1_f2751()?rcls1_f2596():(rcls1_f2650()?rcls1_f2661():(rcls1_f2640()?rcls1_f2648():rcls1_f2600()))):(rcls1_f2669()?rcls1_f2596():(rcls1_f2619()?rcls1_f2628():(rcls1_f2605()?rcls1_f2614():rcls1_f2600()))));}}
static double rcls1_f2564(){if (rcls1_p2564) return rcls1_m2564; else {rcls1_p2564=T;return rcls1_m2564=(rcls1_f2602()?rcls1_f2589():rcls1_f2786());}}
static double rcls1_f2575(){if (rcls1_p2575) return rcls1_m2575; else {rcls1_p2575=T;return rcls1_m2575=(rcls1_f2763()?(rcls1_f2751()?rcls1_f2582():(rcls1_f2650()?rcls1_f2659():(rcls1_f2640()?rcls1_f2659():rcls1_f2600()))):(rcls1_f2669()?rcls1_f2582():(rcls1_f2619()?rcls1_f2631():(rcls1_f2605()?rcls1_f2617():rcls1_f2600()))));}}
static double rcls1_f2563(){if (rcls1_p2563) return rcls1_m2563; else {rcls1_p2563=T;return rcls1_m2563=(rcls1_f2602()?rcls1_f2575():rcls1_f2790());}}
static double rcls1_f2558(){if (rcls1_p2558) return rcls1_m2558; else {rcls1_p2558=T;return rcls1_m2558=(atan2((rcls1_f2563()-rcls1_v6512),(rcls1_f2564()-rcls1_v6514))+(-1.5707963267948966));}}
static double rcls1_f2550(){if (rcls1_p2550) return rcls1_m2550; else {rcls1_p2550=T;return rcls1_m2550=((rcls1_v2558=rcls1_f2558()),(((rcls1_f2764()*(rcls1_f2564()+cos(rcls1_v2558)))+(rcls1_f2758()*(rcls1_f2563()+sin(rcls1_v2558))))-rcls1_f2761()));}}
static int rcls1_f2538(){if (rcls1_p2538) return rcls1_m2538; else {rcls1_p2538=T;return rcls1_m2538=((rcls1_v2667=rcls1_f2667()),(rcls1_v2667?rcls1_v2667:((rcls1_f2602()?((fabs((rcls1_v6514-rcls1_f2589()))<rcls1_v6508)?(fabs((rcls1_v6512-rcls1_f2575()))<rcls1_v6508):NIL):NIL)?T:(((fabs((rcls1_f2568()-(0.0)))<rcls1_v6508)?T:((rcls1_v2550=rcls1_f2550()),((fabs((rcls1_v2550-(0.0)))<rcls1_v6508)?NIL:((rcls1_v2550>(0.0))?rcls1_f2545():(rcls1_f2545()?NIL:T)))))?NIL:T))));}}
static double rcls1_f6493(){if (rcls1_p6493) return rcls1_m6493; else {rcls1_p6493=T;return rcls1_m6493=atan2((rcls1_v6516-rcls1_v6520),rcls1_f6494());}}
static double rcls1_f2242(){if (rcls1_p2242) return rcls1_m2242; else {rcls1_p2242=T;return rcls1_m2242=normalize_rotation((rcls1_f6493()+(1.5707963267948966)));}}
static double rcls1_f2233(){if (rcls1_p2233) return rcls1_m2233; else {rcls1_p2233=T;return rcls1_m2233=(rcls1_f6496()*cos(rcls1_f2242()));}}
static double rcls1_f2231(){if (rcls1_p2231) return rcls1_m2231; else {rcls1_p2231=T;return rcls1_m2231=(rcls1_v6518+rcls1_f2233());}}
static double rcls1_f2232(){if (rcls1_p2232) return rcls1_m2232; else {rcls1_p2232=T;return rcls1_m2232=(rcls1_v6522+rcls1_f2233());}}
static double rcls1_f2124(){if (rcls1_p2124) return rcls1_m2124; else {rcls1_p2124=T;return rcls1_m2124=((rcls1_v2232=rcls1_f2232()),(rcls1_v2231=rcls1_f2231()),(((rcls1_v2232<rcls1_v2231)?rcls1_v2232:rcls1_v2231)-rcls1_v6508));}}
static double rcls1_f2121(){if (rcls1_p2121) return rcls1_m2121; else {rcls1_p2121=T;return rcls1_m2121=((rcls1_v2232=rcls1_f2232()),(rcls1_v2231=rcls1_f2231()),(((rcls1_v2232>rcls1_v2231)?rcls1_v2232:rcls1_v2231)+rcls1_v6508));}}
static int rcls1_f2228(){if (rcls1_p2228) return rcls1_m2228; else {rcls1_p2228=T;return rcls1_m2228=(fabs((rcls1_f2232()-rcls1_f2231()))<rcls1_v6508);}}
static double rcls1_f2240(){if (rcls1_p2240) return rcls1_m2240; else {rcls1_p2240=T;return rcls1_m2240=(rcls1_f6496()*sin(rcls1_f2242()));}}
static double rcls1_f2239(){if (rcls1_p2239) return rcls1_m2239; else {rcls1_p2239=T;return rcls1_m2239=(rcls1_v6520+rcls1_f2240());}}
static double rcls1_f2238(){if (rcls1_p2238) return rcls1_m2238; else {rcls1_p2238=T;return rcls1_m2238=(rcls1_v6516+rcls1_f2240());}}
static double rcls1_f2117(){if (rcls1_p2117) return rcls1_m2117; else {rcls1_p2117=T;return rcls1_m2117=((rcls1_v2239=rcls1_f2239()),(rcls1_v2238=rcls1_f2238()),(((rcls1_v2239<rcls1_v2238)?rcls1_v2239:rcls1_v2238)-rcls1_v6508));}}
static double rcls1_f2114(){if (rcls1_p2114) return rcls1_m2114; else {rcls1_p2114=T;return rcls1_m2114=((rcls1_v2239=rcls1_f2239()),(rcls1_v2238=rcls1_f2238()),(((rcls1_v2239>rcls1_v2238)?rcls1_v2239:rcls1_v2238)+rcls1_v6508));}}
static double rcls1_f2237(){if (rcls1_p2237) return rcls1_m2237; else {rcls1_p2237=T;return rcls1_m2237=(rcls1_f2239()-rcls1_f2238());}}
static int rcls1_f2235(){if (rcls1_p2235) return rcls1_m2235; else {rcls1_p2235=T;return rcls1_m2235=(fabs(rcls1_f2237())<rcls1_v6508);}}
static double rcls1_f2226(){if (rcls1_p2226) return rcls1_m2226; else {rcls1_p2226=T;return rcls1_m2226=(rcls1_f2235()?(rcls1_f2228()?rcls1_f2915():(0.0)):(1.0));}}
static int rcls1_f2167(){if (rcls1_p2167) return rcls1_m2167; else {rcls1_p2167=T;return rcls1_m2167=(rcls1_f2226()==0.0);}}
static double rcls1_f2189(){if (rcls1_p2189) return rcls1_m2189; else {rcls1_p2189=T;return rcls1_m2189=(rcls1_f2226()*rcls1_v6514);}}
static double rcls1_f2209(){if (rcls1_p2209) return rcls1_m2209; else {rcls1_p2209=T;return rcls1_m2209=(rcls1_f2226()*rcls1_v6512);}}
static double rcls1_f2225(){if (rcls1_p2225) return rcls1_m2225; else {rcls1_p2225=T;return rcls1_m2225=((rcls1_v2226=rcls1_f2226()),(rcls1_v2226*rcls1_v2226));}}
static double rcls1_f2222(){if (rcls1_p2222) return rcls1_m2222; else {rcls1_p2222=T;return rcls1_m2222=((rcls1_f2231()-rcls1_f2232())/rcls1_f2237());}}
static double rcls1_f2211(){if (rcls1_p2211) return rcls1_m2211; else {rcls1_p2211=T;return rcls1_m2211=(rcls1_f2235()?(rcls1_f2228()?rcls1_f2915():rcls1_f2239()):(rcls1_f2232()+(rcls1_f2222()*rcls1_f2239())));}}
static double rcls1_f2221(){if (rcls1_p2221) return rcls1_m2221; else {rcls1_p2221=T;return rcls1_m2221=(rcls1_f2235()?(rcls1_f2228()?rcls1_f2915():(1.0)):rcls1_f2222());}}
static int rcls1_f2160(){if (rcls1_p2160) return rcls1_m2160; else {rcls1_p2160=T;return rcls1_m2160=(rcls1_f2221()>0.0);}}
static double rcls1_f2158(){if (rcls1_p2158) return rcls1_m2158; else {rcls1_p2158=T;return rcls1_m2158=(rcls1_f2160()?(-rcls1_f2226()):rcls1_f2226());}}
static double rcls1_f2072(){if (rcls1_p2072) return rcls1_m2072; else {rcls1_p2072=T;return rcls1_m2072=(rcls1_f2211()/rcls1_f2221());}}
static double rcls1_f2052(){if (rcls1_p2052) return rcls1_m2052; else {rcls1_p2052=T;return rcls1_m2052=(rcls1_f2072()-rcls1_v6512);}}
static int rcls1_f2065(){if (rcls1_p2065) return rcls1_m2065; else {rcls1_p2065=T;return rcls1_m2065=((rcls1_f2117()<=rcls1_f2072())&&(rcls1_f2072()<=rcls1_f2114()));}}
static double rcls1_f2071(){if (rcls1_p2071) return rcls1_m2071; else {rcls1_p2071=T;return rcls1_m2071=(rcls1_f2221()*rcls1_f2072());}}
static double rcls1_f2164(){if (rcls1_p2164) return rcls1_m2164; else {rcls1_p2164=T;return rcls1_m2164=((rcls1_v2221=rcls1_f2221()),(rcls1_v2221*rcls1_v2221));}}
static double rcls1_f1980(){if (rcls1_p1980) return rcls1_m1980; else {rcls1_p1980=T;return rcls1_m1980=(rcls1_f2225()+rcls1_f2164());}}
static double rcls1_f1973(){if (rcls1_p1973) return rcls1_m1973; else {rcls1_p1973=T;return rcls1_m1973=((rcls1_v1980=rcls1_f1980()),(rcls1_v1980+rcls1_v1980));}}
static double rcls1_f2179(){if (rcls1_p2179) return rcls1_m2179; else {rcls1_p2179=T;return rcls1_m2179=(((rcls1_f2226()*rcls1_v6522)+(rcls1_f2221()*rcls1_v6520))-rcls1_f2211());}}
static double rcls1_f2188(){if (rcls1_p2188) return rcls1_m2188; else {rcls1_p2188=T;return rcls1_m2188=(rcls1_f2221()*rcls1_v6512);}}
static double rcls1_f2166(){if (rcls1_p2166) return rcls1_m2166; else {rcls1_p2166=T;return rcls1_m2166=(rcls1_f2211()-rcls1_f2189()-rcls1_f2188());}}
static double rcls1_f1982(){if (rcls1_p1982) return rcls1_m1982; else {rcls1_p1982=T;return rcls1_m1982=((-2.0)*rcls1_f2221()*rcls1_f2166());}}
static double rcls1_f1972(){if (rcls1_p1972) return rcls1_m1972; else {rcls1_p1972=T;return rcls1_m1972=((-rcls1_f1982())/rcls1_f1973());}}
static double rcls1_f2165(){if (rcls1_p2165) return rcls1_m2165; else {rcls1_p2165=T;return rcls1_m2165=((rcls1_v2166=rcls1_f2166()),(rcls1_v2166*rcls1_v2166));}}
static double rcls1_f2186(){if (rcls1_p2186) return rcls1_m2186; else {rcls1_p2186=T;return rcls1_m2186=((rcls1_f2189()+rcls1_f2188())-rcls1_f2211());}}
static int rcls1_f2174(){if (rcls1_p2174) return rcls1_m2174; else {rcls1_p2174=T;return rcls1_m2174=(rcls1_f2186()>(0.0));}}
static double rcls1_f2208(){if (rcls1_p2208) return rcls1_m2208; else {rcls1_p2208=T;return rcls1_m2208=(rcls1_f2221()*rcls1_v6514);}}
static double rcls1_f2207(){if (rcls1_p2207) return rcls1_m2207; else {rcls1_p2207=T;return rcls1_m2207=(rcls1_f2209()-rcls1_f2208());}}
static double rcls1_f2148(){if (rcls1_p2148) return rcls1_m2148; else {rcls1_p2148=T;return rcls1_m2148=(rcls1_f2160()?(rcls1_f2208()-rcls1_f2209()):rcls1_f2207());}}
static double rcls1_f2146(){if (rcls1_p2146) return rcls1_m2146; else {rcls1_p2146=T;return rcls1_m2146=((rcls1_f2211()*rcls1_f2158())-(rcls1_f2221()*rcls1_f2148()));}}
static double rcls1_f2220(){if (rcls1_p2220) return rcls1_m2220; else {rcls1_p2220=T;return rcls1_m2220=(-rcls1_f2221());}}
static double rcls1_f2156(){if (rcls1_p2156) return rcls1_m2156; else {rcls1_p2156=T;return rcls1_m2156=(rcls1_f2160()?rcls1_f2221():rcls1_f2220());}}
static double rcls1_f2140(){if (rcls1_p2140) return rcls1_m2140; else {rcls1_p2140=T;return rcls1_m2140=((rcls1_f2226()*rcls1_f2148())-(rcls1_f2211()*rcls1_f2156()));}}
static double rcls1_f2154(){if (rcls1_p2154) return rcls1_m2154; else {rcls1_p2154=T;return rcls1_m2154=((rcls1_f2226()*rcls1_f2158())-(rcls1_f2221()*rcls1_f2156()));}}
static double rcls1_f2134(){if (rcls1_p2134) return rcls1_m2134; else {rcls1_p2134=T;return rcls1_m2134=(rcls1_f2146()/rcls1_f2154());}}
static double rcls1_f2132(){if (rcls1_p2132) return rcls1_m2132; else {rcls1_p2132=T;return rcls1_m2132=(rcls1_f2140()/rcls1_f2154());}}
static int rcls1_f2151(){if (rcls1_p2151) return rcls1_m2151; else {rcls1_p2151=T;return rcls1_m2151=(fabs((rcls1_f2154()-(0.0)))<rcls1_v6508);}}
static int rcls1_f2135(){if (rcls1_p2135) return rcls1_m2135; else {rcls1_p2135=T;return rcls1_m2135=(rcls1_f2151()?((fabs((rcls1_f2146()-(0.0)))<rcls1_v6508)?(fabs((rcls1_f2140()-(0.0)))<rcls1_v6508):NIL):T);}}
static int rcls1_f2110(){if (rcls1_p2110) return rcls1_m2110; else {rcls1_p2110=T;return rcls1_m2110=(rcls1_f2151()?NIL:((rcls1_v2134=rcls1_f2134()),(rcls1_v2132=rcls1_f2132()),((fabs((((rcls1_f2226()*rcls1_v2134)+(rcls1_f2221()*rcls1_v2132))-rcls1_f2211()))<rcls1_v6508)?(((rcls1_f2124()<=rcls1_v2134)&&(rcls1_v2134<=rcls1_f2121()))?((rcls1_f2117()<=rcls1_v2132)&&(rcls1_v2132<=rcls1_f2114())):NIL):NIL)));}}
static double rcls1_f2103(){if (rcls1_p2103) return rcls1_m2103; else {rcls1_p2103=T;return rcls1_m2103=((rcls1_v2151=rcls1_f2151()),normalize_rotation((atan2(((rcls1_v2151?rcls1_f2790():rcls1_f2132())-rcls1_v6512),((rcls1_v2151?rcls1_f2786():rcls1_f2134())-rcls1_v6514))-rcls1_f5872())));}}
static double rcls1_f201(){if (rcls1_p201) return rcls1_m201; else {rcls1_p201=T;return rcls1_m201=((rcls1_v2103=rcls1_f2103()),(rcls1_v792=rcls1_f792()),((rcls1_v2103>rcls1_v792)?rcls1_v2103:rcls1_v792));}}
static double rcls1_f2102(){if (rcls1_p2102) return rcls1_m2102; else {rcls1_p2102=T;return rcls1_m2102=normalize_rotation(rcls1_f2103());}}
static int rcls1_f2090(){if (rcls1_p2090) return rcls1_m2090; else {rcls1_p2090=T;return rcls1_m2090=((rcls1_v2102=rcls1_f2102()),((fabs((rcls1_v2102-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v2102-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v2102-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f2089(){if (rcls1_p2089) return rcls1_m2089; else {rcls1_p2089=T;return rcls1_m2089=((rcls1_v2090=rcls1_f2090()),(rcls1_v2090?rcls1_v2090:rcls1_f2538()));}}
static double_or_symbol rcls1_f40(){if (rcls1_p40) return rcls1_m40; else {rcls1_p40=T;return rcls1_m40=(rcls1_f2089()?coerce_double_to_double_or_symbol(rcls1_f2103()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1860(){if (rcls1_p1860) return rcls1_m1860; else {rcls1_p1860=T;return rcls1_m1860=(rcls1_f2089()?rcls1_f2103():rcls1_f2303());}}
static double rcls1_f216(){if (rcls1_p216) return rcls1_m216; else {rcls1_p216=T;return rcls1_m216=((rcls1_v1860=rcls1_f1860()),(rcls1_v792=rcls1_f792()),((rcls1_v1860>rcls1_v792)?rcls1_v1860:rcls1_v792));}}
static double rcls1_f2086(){if (rcls1_p2086) return rcls1_m2086; else {rcls1_p2086=T;return rcls1_m2086=(rcls1_f2089()?rcls1_f2103():rcls1_f2531());}}
static double rcls1_f2088(){if (rcls1_p2088) return rcls1_m2088; else {rcls1_p2088=T;return rcls1_m2088=(rcls1_f2089()?rcls1_f2103():rcls1_f2535());}}
static int rcls1_f2087(){if (rcls1_p2087) return rcls1_m2087; else {rcls1_p2087=T;return rcls1_m2087=(rcls1_f2088()<(0.0));}}
static int rcls1_f2081(){if (rcls1_p2081) return rcls1_m2081; else {rcls1_p2081=T;return rcls1_m2081=(rcls1_f2089()?((rcls1_v2087=rcls1_f2087()),(rcls1_v2087?rcls1_v2087:(fabs((rcls1_f2086()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f1866(){if (rcls1_p1866) return rcls1_m1866; else {rcls1_p1866=T;return rcls1_m1866=(rcls1_f2081()?rcls1_f2086():rcls1_f2531());}}
static double rcls1_f1868(){if (rcls1_p1868) return rcls1_m1868; else {rcls1_p1868=T;return rcls1_m1868=(rcls1_f2081()?rcls1_f2088():rcls1_f2535());}}
static int rcls1_f1867(){if (rcls1_p1867) return rcls1_m1867; else {rcls1_p1867=T;return rcls1_m1867=(rcls1_f1868()<(0.0));}}
static int rcls1_f2080(){if (rcls1_p2080) return rcls1_m2080; else {rcls1_p2080=T;return rcls1_m2080=(rcls1_f2081()?rcls1_f2089():NIL);}}
static int rcls1_f1861(){if (rcls1_p1861) return rcls1_m1861; else {rcls1_p1861=T;return rcls1_m1861=(rcls1_f2080()?((rcls1_v1867=rcls1_f1867()),(rcls1_v1867?rcls1_v1867:(fabs((rcls1_f1866()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f2218(){if (rcls1_p2218) return rcls1_m2218; else {rcls1_p2218=T;return rcls1_m2218=(rcls1_f2225()-(rcls1_f2221()*rcls1_f2220()));}}
static double rcls1_f2203(){if (rcls1_p2203) return rcls1_m2203; else {rcls1_p2203=T;return rcls1_m2203=((((rcls1_f2211()*rcls1_f2226())-(rcls1_f2221()*rcls1_f2207()))/rcls1_f2218())-rcls1_v6514);}}
static double rcls1_f2197(){if (rcls1_p2197) return rcls1_m2197; else {rcls1_p2197=T;return rcls1_m2197=((((rcls1_f2226()*rcls1_f2207())-(rcls1_f2211()*rcls1_f2220()))/rcls1_f2218())-rcls1_v6512);}}
static double rcls1_f2931(){if (rcls1_p2931) return rcls1_m2931; else {rcls1_p2931=T;return rcls1_m2931=normalize_rotation((rcls1_f6493()-(1.5707963267948966)));}}
static double rcls1_f2922(){if (rcls1_p2922) return rcls1_m2922; else {rcls1_p2922=T;return rcls1_m2922=(rcls1_f6496()*cos(rcls1_f2931()));}}
static double rcls1_f2920(){if (rcls1_p2920) return rcls1_m2920; else {rcls1_p2920=T;return rcls1_m2920=(rcls1_v6518+rcls1_f2922());}}
static double rcls1_f2921(){if (rcls1_p2921) return rcls1_m2921; else {rcls1_p2921=T;return rcls1_m2921=(rcls1_v6522+rcls1_f2922());}}
static double rcls1_f2806(){if (rcls1_p2806) return rcls1_m2806; else {rcls1_p2806=T;return rcls1_m2806=((rcls1_v2921=rcls1_f2921()),(rcls1_v2920=rcls1_f2920()),(((rcls1_v2921<rcls1_v2920)?rcls1_v2921:rcls1_v2920)-rcls1_v6508));}}
static double rcls1_f2803(){if (rcls1_p2803) return rcls1_m2803; else {rcls1_p2803=T;return rcls1_m2803=((rcls1_v2921=rcls1_f2921()),(rcls1_v2920=rcls1_f2920()),(((rcls1_v2921>rcls1_v2920)?rcls1_v2921:rcls1_v2920)+rcls1_v6508));}}
static int rcls1_f2917(){if (rcls1_p2917) return rcls1_m2917; else {rcls1_p2917=T;return rcls1_m2917=(fabs((rcls1_f2921()-rcls1_f2920()))<rcls1_v6508);}}
static double rcls1_f2929(){if (rcls1_p2929) return rcls1_m2929; else {rcls1_p2929=T;return rcls1_m2929=(rcls1_f6496()*sin(rcls1_f2931()));}}
static double rcls1_f2928(){if (rcls1_p2928) return rcls1_m2928; else {rcls1_p2928=T;return rcls1_m2928=(rcls1_v6520+rcls1_f2929());}}
static double rcls1_f2927(){if (rcls1_p2927) return rcls1_m2927; else {rcls1_p2927=T;return rcls1_m2927=(rcls1_v6516+rcls1_f2929());}}
static double rcls1_f2799(){if (rcls1_p2799) return rcls1_m2799; else {rcls1_p2799=T;return rcls1_m2799=((rcls1_v2928=rcls1_f2928()),(rcls1_v2927=rcls1_f2927()),(((rcls1_v2928<rcls1_v2927)?rcls1_v2928:rcls1_v2927)-rcls1_v6508));}}
static double rcls1_f2796(){if (rcls1_p2796) return rcls1_m2796; else {rcls1_p2796=T;return rcls1_m2796=((rcls1_v2928=rcls1_f2928()),(rcls1_v2927=rcls1_f2927()),(((rcls1_v2928>rcls1_v2927)?rcls1_v2928:rcls1_v2927)+rcls1_v6508));}}
static double rcls1_f2926(){if (rcls1_p2926) return rcls1_m2926; else {rcls1_p2926=T;return rcls1_m2926=(rcls1_f2928()-rcls1_f2927());}}
static int rcls1_f2924(){if (rcls1_p2924) return rcls1_m2924; else {rcls1_p2924=T;return rcls1_m2924=(fabs(rcls1_f2926())<rcls1_v6508);}}
static double rcls1_f2911(){if (rcls1_p2911) return rcls1_m2911; else {rcls1_p2911=T;return rcls1_m2911=(rcls1_f2924()?(rcls1_f2917()?rcls1_f2915():(0.0)):(1.0));}}
static int rcls1_f2849(){if (rcls1_p2849) return rcls1_m2849; else {rcls1_p2849=T;return rcls1_m2849=(rcls1_f2911()==0.0);}}
static double rcls1_f2872(){if (rcls1_p2872) return rcls1_m2872; else {rcls1_p2872=T;return rcls1_m2872=(rcls1_f2911()*rcls1_v6514);}}
static double rcls1_f2892(){if (rcls1_p2892) return rcls1_m2892; else {rcls1_p2892=T;return rcls1_m2892=(rcls1_f2911()*rcls1_v6512);}}
static double rcls1_f2910(){if (rcls1_p2910) return rcls1_m2910; else {rcls1_p2910=T;return rcls1_m2910=((rcls1_v2911=rcls1_f2911()),(rcls1_v2911*rcls1_v2911));}}
static double rcls1_f2907(){if (rcls1_p2907) return rcls1_m2907; else {rcls1_p2907=T;return rcls1_m2907=((rcls1_f2920()-rcls1_f2921())/rcls1_f2926());}}
static double rcls1_f2894(){if (rcls1_p2894) return rcls1_m2894; else {rcls1_p2894=T;return rcls1_m2894=(rcls1_f2924()?(rcls1_f2917()?rcls1_f2915():rcls1_f2928()):(rcls1_f2921()+(rcls1_f2907()*rcls1_f2928())));}}
static double rcls1_f2906(){if (rcls1_p2906) return rcls1_m2906; else {rcls1_p2906=T;return rcls1_m2906=(rcls1_f2924()?(rcls1_f2917()?rcls1_f2915():(1.0)):rcls1_f2907());}}
static int rcls1_f2842(){if (rcls1_p2842) return rcls1_m2842; else {rcls1_p2842=T;return rcls1_m2842=(rcls1_f2906()>0.0);}}
static double rcls1_f2840(){if (rcls1_p2840) return rcls1_m2840; else {rcls1_p2840=T;return rcls1_m2840=(rcls1_f2842()?(-rcls1_f2911()):rcls1_f2911());}}
static double rcls1_f2516(){if (rcls1_p2516) return rcls1_m2516; else {rcls1_p2516=T;return rcls1_m2516=(rcls1_f2894()/rcls1_f2906());}}
static double rcls1_f2496(){if (rcls1_p2496) return rcls1_m2496; else {rcls1_p2496=T;return rcls1_m2496=(rcls1_f2516()-rcls1_v6512);}}
static int rcls1_f2509(){if (rcls1_p2509) return rcls1_m2509; else {rcls1_p2509=T;return rcls1_m2509=((rcls1_f2799()<=rcls1_f2516())&&(rcls1_f2516()<=rcls1_f2796()));}}
static double rcls1_f2515(){if (rcls1_p2515) return rcls1_m2515; else {rcls1_p2515=T;return rcls1_m2515=(rcls1_f2906()*rcls1_f2516());}}
static double rcls1_f2846(){if (rcls1_p2846) return rcls1_m2846; else {rcls1_p2846=T;return rcls1_m2846=((rcls1_v2906=rcls1_f2906()),(rcls1_v2906*rcls1_v2906));}}
static double rcls1_f2424(){if (rcls1_p2424) return rcls1_m2424; else {rcls1_p2424=T;return rcls1_m2424=(rcls1_f2910()+rcls1_f2846());}}
static double rcls1_f2417(){if (rcls1_p2417) return rcls1_m2417; else {rcls1_p2417=T;return rcls1_m2417=((rcls1_v2424=rcls1_f2424()),(rcls1_v2424+rcls1_v2424));}}
static double rcls1_f2862(){if (rcls1_p2862) return rcls1_m2862; else {rcls1_p2862=T;return rcls1_m2862=(((rcls1_f2911()*rcls1_v6522)+(rcls1_f2906()*rcls1_v6520))-rcls1_f2894());}}
static double rcls1_f2871(){if (rcls1_p2871) return rcls1_m2871; else {rcls1_p2871=T;return rcls1_m2871=(rcls1_f2906()*rcls1_v6512);}}
static double rcls1_f2848(){if (rcls1_p2848) return rcls1_m2848; else {rcls1_p2848=T;return rcls1_m2848=(rcls1_f2894()-rcls1_f2872()-rcls1_f2871());}}
static double rcls1_f2426(){if (rcls1_p2426) return rcls1_m2426; else {rcls1_p2426=T;return rcls1_m2426=((-2.0)*rcls1_f2906()*rcls1_f2848());}}
static double rcls1_f2416(){if (rcls1_p2416) return rcls1_m2416; else {rcls1_p2416=T;return rcls1_m2416=((-rcls1_f2426())/rcls1_f2417());}}
static double rcls1_f2847(){if (rcls1_p2847) return rcls1_m2847; else {rcls1_p2847=T;return rcls1_m2847=((rcls1_v2848=rcls1_f2848()),(rcls1_v2848*rcls1_v2848));}}
static double rcls1_f2869(){if (rcls1_p2869) return rcls1_m2869; else {rcls1_p2869=T;return rcls1_m2869=((rcls1_f2872()+rcls1_f2871())-rcls1_f2894());}}
static int rcls1_f2857(){if (rcls1_p2857) return rcls1_m2857; else {rcls1_p2857=T;return rcls1_m2857=(rcls1_f2869()>(0.0));}}
static double rcls1_f2891(){if (rcls1_p2891) return rcls1_m2891; else {rcls1_p2891=T;return rcls1_m2891=(rcls1_f2906()*rcls1_v6514);}}
static double rcls1_f2890(){if (rcls1_p2890) return rcls1_m2890; else {rcls1_p2890=T;return rcls1_m2890=(rcls1_f2892()-rcls1_f2891());}}
static double rcls1_f2830(){if (rcls1_p2830) return rcls1_m2830; else {rcls1_p2830=T;return rcls1_m2830=(rcls1_f2842()?(rcls1_f2891()-rcls1_f2892()):rcls1_f2890());}}
static double rcls1_f2828(){if (rcls1_p2828) return rcls1_m2828; else {rcls1_p2828=T;return rcls1_m2828=((rcls1_f2894()*rcls1_f2840())-(rcls1_f2906()*rcls1_f2830()));}}
static double rcls1_f2905(){if (rcls1_p2905) return rcls1_m2905; else {rcls1_p2905=T;return rcls1_m2905=(-rcls1_f2906());}}
static double rcls1_f2838(){if (rcls1_p2838) return rcls1_m2838; else {rcls1_p2838=T;return rcls1_m2838=(rcls1_f2842()?rcls1_f2906():rcls1_f2905());}}
static double rcls1_f2822(){if (rcls1_p2822) return rcls1_m2822; else {rcls1_p2822=T;return rcls1_m2822=((rcls1_f2911()*rcls1_f2830())-(rcls1_f2894()*rcls1_f2838()));}}
static double rcls1_f2836(){if (rcls1_p2836) return rcls1_m2836; else {rcls1_p2836=T;return rcls1_m2836=((rcls1_f2911()*rcls1_f2840())-(rcls1_f2906()*rcls1_f2838()));}}
static double rcls1_f2816(){if (rcls1_p2816) return rcls1_m2816; else {rcls1_p2816=T;return rcls1_m2816=(rcls1_f2828()/rcls1_f2836());}}
static double rcls1_f2814(){if (rcls1_p2814) return rcls1_m2814; else {rcls1_p2814=T;return rcls1_m2814=(rcls1_f2822()/rcls1_f2836());}}
static int rcls1_f2833(){if (rcls1_p2833) return rcls1_m2833; else {rcls1_p2833=T;return rcls1_m2833=(fabs((rcls1_f2836()-(0.0)))<rcls1_v6508);}}
static int rcls1_f2817(){if (rcls1_p2817) return rcls1_m2817; else {rcls1_p2817=T;return rcls1_m2817=(rcls1_f2833()?((fabs((rcls1_f2828()-(0.0)))<rcls1_v6508)?(fabs((rcls1_f2822()-(0.0)))<rcls1_v6508):NIL):T);}}
static int rcls1_f2792(){if (rcls1_p2792) return rcls1_m2792; else {rcls1_p2792=T;return rcls1_m2792=(rcls1_f2833()?NIL:((rcls1_v2816=rcls1_f2816()),(rcls1_v2814=rcls1_f2814()),((fabs((((rcls1_f2911()*rcls1_v2816)+(rcls1_f2906()*rcls1_v2814))-rcls1_f2894()))<rcls1_v6508)?(((rcls1_f2806()<=rcls1_v2816)&&(rcls1_v2816<=rcls1_f2803()))?((rcls1_f2799()<=rcls1_v2814)&&(rcls1_v2814<=rcls1_f2796())):NIL):NIL)));}}
static double rcls1_f2781(){if (rcls1_p2781) return rcls1_m2781; else {rcls1_p2781=T;return rcls1_m2781=((rcls1_v2833=rcls1_f2833()),normalize_rotation((atan2(((rcls1_v2833?rcls1_f2790():rcls1_f2814())-rcls1_v6512),((rcls1_v2833?rcls1_f2786():rcls1_f2816())-rcls1_v6514))-rcls1_f5872())));}}
static double rcls1_f350(){if (rcls1_p350) return rcls1_m350; else {rcls1_p350=T;return rcls1_m350=((rcls1_v2781=rcls1_f2781()),(rcls1_v792=rcls1_f792()),((rcls1_v2781>rcls1_v792)?rcls1_v2781:rcls1_v792));}}
static int rcls1_f1747(){if (rcls1_p1747) return rcls1_m1747; else {rcls1_p1747=T;return rcls1_m1747=(rcls1_f2781()>rcls1_f1860());}}
static double rcls1_f2780(){if (rcls1_p2780) return rcls1_m2780; else {rcls1_p2780=T;return rcls1_m2780=normalize_rotation(rcls1_f2781());}}
static int rcls1_f2766(){if (rcls1_p2766) return rcls1_m2766; else {rcls1_p2766=T;return rcls1_m2766=((rcls1_v2780=rcls1_f2780()),((fabs((rcls1_v2780-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v2780-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v2780-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f2537(){if (rcls1_p2537) return rcls1_m2537; else {rcls1_p2537=T;return rcls1_m2537=((rcls1_v2766=rcls1_f2766()),(rcls1_v2766?rcls1_v2766:rcls1_f2538()));}}
static double_or_symbol rcls1_f70(){if (rcls1_p70) return rcls1_m70; else {rcls1_p70=T;return rcls1_m70=(rcls1_f2537()?coerce_double_to_double_or_symbol(rcls1_f2781()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f2302(){if (rcls1_p2302) return rcls1_m2302; else {rcls1_p2302=T;return rcls1_m2302=(rcls1_f2537()?rcls1_f2781():rcls1_f2303());}}
static double rcls1_f365(){if (rcls1_p365) return rcls1_m365; else {rcls1_p365=T;return rcls1_m365=((rcls1_v2302=rcls1_f2302()),(rcls1_v792=rcls1_f792()),((rcls1_v2302>rcls1_v792)?rcls1_v2302:rcls1_v792));}}
static int rcls1_f1792(){if (rcls1_p1792) return rcls1_m1792; else {rcls1_p1792=T;return rcls1_m1792=(rcls1_f2302()>rcls1_f1860());}}
static int rcls1_f1790(){if (rcls1_p1790) return rcls1_m1790; else {rcls1_p1790=T;return rcls1_m1790=(rcls1_f2302()>rcls1_f2103());}}
static double rcls1_f2530(){if (rcls1_p2530) return rcls1_m2530; else {rcls1_p2530=T;return rcls1_m2530=(rcls1_f2537()?rcls1_f2781():rcls1_f2531());}}
static double rcls1_f2534(){if (rcls1_p2534) return rcls1_m2534; else {rcls1_p2534=T;return rcls1_m2534=(rcls1_f2537()?rcls1_f2781():rcls1_f2535());}}
static int rcls1_f2533(){if (rcls1_p2533) return rcls1_m2533; else {rcls1_p2533=T;return rcls1_m2533=(rcls1_f2534()<(0.0));}}
static int rcls1_f2525(){if (rcls1_p2525) return rcls1_m2525; else {rcls1_p2525=T;return rcls1_m2525=(rcls1_f2537()?((rcls1_v2533=rcls1_f2533()),(rcls1_v2533?rcls1_v2533:(fabs((rcls1_f2530()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f2310(){if (rcls1_p2310) return rcls1_m2310; else {rcls1_p2310=T;return rcls1_m2310=(rcls1_f2525()?rcls1_f2530():rcls1_f2531());}}
static double rcls1_f2312(){if (rcls1_p2312) return rcls1_m2312; else {rcls1_p2312=T;return rcls1_m2312=(rcls1_f2525()?rcls1_f2534():rcls1_f2535());}}
static int rcls1_f2311(){if (rcls1_p2311) return rcls1_m2311; else {rcls1_p2311=T;return rcls1_m2311=(rcls1_f2312()<(0.0));}}
static int rcls1_f2524(){if (rcls1_p2524) return rcls1_m2524; else {rcls1_p2524=T;return rcls1_m2524=(rcls1_f2525()?rcls1_f2537():NIL);}}
static int rcls1_f2305(){if (rcls1_p2305) return rcls1_m2305; else {rcls1_p2305=T;return rcls1_m2305=(rcls1_f2524()?((rcls1_v2311=rcls1_f2311()),(rcls1_v2311?rcls1_v2311:(fabs((rcls1_f2310()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f2903(){if (rcls1_p2903) return rcls1_m2903; else {rcls1_p2903=T;return rcls1_m2903=(rcls1_f2910()-(rcls1_f2906()*rcls1_f2905()));}}
static double rcls1_f2886(){if (rcls1_p2886) return rcls1_m2886; else {rcls1_p2886=T;return rcls1_m2886=((((rcls1_f2894()*rcls1_f2911())-(rcls1_f2906()*rcls1_f2890()))/rcls1_f2903())-rcls1_v6514);}}
static double rcls1_f2880(){if (rcls1_p2880) return rcls1_m2880; else {rcls1_p2880=T;return rcls1_m2880=((((rcls1_f2911()*rcls1_f2890())-(rcls1_f2894()*rcls1_f2905()))/rcls1_f2903())-rcls1_v6512);}}
static double rcls1_f6505(){if (rcls1_p6505) return rcls1_m6505; else {rcls1_p6505=T;return rcls1_m6505=(rcls1_v6512-rcls1_v6528);}}
static double rcls1_f6469(){if (rcls1_p6469) return rcls1_m6469; else {rcls1_p6469=T;return rcls1_m6469=((rcls1_v6505=rcls1_f6505()),sqrt(((rcls1_v6510*rcls1_v6510)+(rcls1_v6505*rcls1_v6505))));}}
static double rcls1_f6127(){if (rcls1_p6127) return rcls1_m6127; else {rcls1_p6127=T;return rcls1_m6127=(rcls1_v6514-(rcls1_v6514+rcls1_f6469()));}}
static double rcls1_f6125(){if (rcls1_p6125) return rcls1_m6125; else {rcls1_p6125=T;return rcls1_m6125=(rcls1_v6512-rcls1_v6512);}}
static double rcls1_f6124(){if (rcls1_p6124) return rcls1_m6124; else {rcls1_p6124=T;return rcls1_m6124=((rcls1_v6125=rcls1_f6125()),(rcls1_v6125*rcls1_v6125));}}
static double rcls1_f4008(){if (rcls1_p4008) return rcls1_m4008; else {rcls1_p4008=T;return rcls1_m4008=((rcls1_v4011=rcls1_f4011()),sqrt(((rcls1_v4011*rcls1_v4011)+rcls1_f6124())));}}
static double rcls1_f3976(){if (rcls1_p3976) return rcls1_m3976; else {rcls1_p3976=T;return rcls1_m3976=((rcls1_v4008=rcls1_f4008()),(rcls1_v4008*rcls1_v4008));}}
static double rcls1_f670(){if (rcls1_p670) return rcls1_m670; else {rcls1_p670=T;return rcls1_m670=(((rcls1_f4469()+rcls1_f3976())-rcls1_f6443())/rcls1_f1030());}}
static double rcls1_f660(){if (rcls1_p660) return rcls1_m660; else {rcls1_p660=T;return rcls1_m660=(rcls1_f670()*rcls1_f4418());}}
static double rcls1_f666(){if (rcls1_p666) return rcls1_m666; else {rcls1_p666=T;return rcls1_m666=(rcls1_f670()*rcls1_f4419());}}
static double rcls1_f668(){if (rcls1_p668) return rcls1_m668; else {rcls1_p668=T;return rcls1_m668=((rcls1_v670=rcls1_f670()),(rcls1_f3976()-(rcls1_v670*rcls1_v670)));}}
static int rcls1_f667(){if (rcls1_p667) return rcls1_m667; else {rcls1_p667=T;return rcls1_m667=(rcls1_f668()<0.0);}}
static double rcls1_f665(){if (rcls1_p665) return rcls1_m665; else {rcls1_p665=T;return rcls1_m665=sqrt(rcls1_f668());}}
static double rcls1_f659(){if (rcls1_p659) return rcls1_m659; else {rcls1_p659=T;return rcls1_m659=(rcls1_f665()*rcls1_f4419());}}
static double rcls1_f568(){if (rcls1_p568) return rcls1_m568; else {rcls1_p568=T;return rcls1_m568=(rcls1_v6512+(rcls1_f660()-rcls1_f659()));}}
static int rcls1_f540(){if (rcls1_p540) return rcls1_m540; else {rcls1_p540=T;return rcls1_m540=(rcls1_v6528==rcls1_f568());}}
static double rcls1_f658(){if (rcls1_p658) return rcls1_m658; else {rcls1_p658=T;return rcls1_m658=(rcls1_v6512+rcls1_f660()+rcls1_f659());}}
static int rcls1_f657(){if (rcls1_p657) return rcls1_m657; else {rcls1_p657=T;return rcls1_m657=(rcls1_v6528==rcls1_f658());}}
static double rcls1_f664(){if (rcls1_p664) return rcls1_m664; else {rcls1_p664=T;return rcls1_m664=(rcls1_f665()*rcls1_f4418());}}
static double rcls1_f566(){if (rcls1_p566) return rcls1_m566; else {rcls1_p566=T;return rcls1_m566=(rcls1_v6514+rcls1_f666()+rcls1_f664());}}
static int rcls1_f541(){if (rcls1_p541) return rcls1_m541; else {rcls1_p541=T;return rcls1_m541=(rcls1_v6530==rcls1_f566());}}
static double rcls1_f538(){if (rcls1_p538) return rcls1_m538; else {rcls1_p538=T;return rcls1_m538=(rcls1_f541()?(rcls1_f540()?rcls1_f1130():(0.0)):(1.0));}}
static double rcls1_f533(){if (rcls1_p533) return rcls1_m533; else {rcls1_p533=T;return rcls1_m533=((rcls1_f568()-rcls1_v6528)/(rcls1_f566()-rcls1_v6530));}}
static double rcls1_f526(){if (rcls1_p526) return rcls1_m526; else {rcls1_p526=T;return rcls1_m526=(rcls1_f541()?(rcls1_f540()?rcls1_f1130():rcls1_f568()):(rcls1_f566()+(rcls1_f533()*rcls1_f568())));}}
static double rcls1_f532(){if (rcls1_p532) return rcls1_m532; else {rcls1_p532=T;return rcls1_m532=(rcls1_f541()?(rcls1_f540()?rcls1_f1130():(1.0)):rcls1_f533());}}
static double rcls1_f525(){if (rcls1_p525) return rcls1_m525; else {rcls1_p525=T;return rcls1_m525=(((rcls1_f538()*rcls1_v6522)+(rcls1_f532()*rcls1_v6520))-rcls1_f526());}}
static int rcls1_f508(){if (rcls1_p508) return rcls1_m508; else {rcls1_p508=T;return rcls1_m508=(rcls1_f525()>(0.0));}}
static double rcls1_f564(){if (rcls1_p564) return rcls1_m564; else {rcls1_p564=T;return rcls1_m564=atan2((rcls1_f568()-rcls1_v6512),(rcls1_f566()-rcls1_v6514));}}
static double rcls1_f521(){if (rcls1_p521) return rcls1_m521; else {rcls1_p521=T;return rcls1_m521=(rcls1_f564()+(1.5707963267948966));}}
static double rcls1_f513(){if (rcls1_p513) return rcls1_m513; else {rcls1_p513=T;return rcls1_m513=((rcls1_v521=rcls1_f521()),(((rcls1_f538()*(rcls1_f566()+cos(rcls1_v521)))+(rcls1_f532()*(rcls1_f568()+sin(rcls1_v521))))-rcls1_f526()));}}
static double rcls1_f562(){if (rcls1_p562) return rcls1_m562; else {rcls1_p562=T;return rcls1_m562=normalize_rotation((rcls1_f564()-rcls1_f3902()));}}
static double rcls1_f561(){if (rcls1_p561) return rcls1_m561; else {rcls1_p561=T;return rcls1_m561=normalize_rotation(rcls1_f562());}}
static int rcls1_f549(){if (rcls1_p549) return rcls1_m549; else {rcls1_p549=T;return rcls1_m549=((rcls1_v561=rcls1_f561()),((fabs((rcls1_v561-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v561-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v561-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f501(){if (rcls1_p501) return rcls1_m501; else {rcls1_p501=T;return rcls1_m501=((rcls1_v549=rcls1_f549()),(rcls1_v549?rcls1_v549:(((fabs((rcls1_v6514-rcls1_f566()))<rcls1_v6508)?(fabs((rcls1_v6512-rcls1_f568()))<rcls1_v6508):NIL)?NIL:(((fabs((rcls1_f525()-(0.0)))<rcls1_v6508)?T:((rcls1_v513=rcls1_f513()),((fabs((rcls1_v513-(0.0)))<rcls1_v6508)?NIL:((rcls1_v513>(0.0))?rcls1_f508():(rcls1_f508()?NIL:T)))))?NIL:T))));}}
static double rcls1_f498(){if (rcls1_p498) return rcls1_m498; else {rcls1_p498=T;return rcls1_m498=(rcls1_f501()?rcls1_f562():rcls1_f2531());}}
static double rcls1_f500(){if (rcls1_p500) return rcls1_m500; else {rcls1_p500=T;return rcls1_m500=(rcls1_f501()?rcls1_f562():rcls1_f2535());}}
static int rcls1_f499(){if (rcls1_p499) return rcls1_m499; else {rcls1_p499=T;return rcls1_m499=(rcls1_f500()>(0.0));}}
static int rcls1_f493(){if (rcls1_p493) return rcls1_m493; else {rcls1_p493=T;return rcls1_m493=(rcls1_f501()?((rcls1_v499=rcls1_f499()),(rcls1_v499?rcls1_v499:(fabs((rcls1_f498()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f492(){if (rcls1_p492) return rcls1_m492; else {rcls1_p492=T;return rcls1_m492=(rcls1_f493()?rcls1_f501():NIL);}}
static int rcls1_f490(){if (rcls1_p490) return rcls1_m490; else {rcls1_p490=T;return rcls1_m490=((rcls1_f493()?rcls1_f500():rcls1_f2535())>(0.0));}}
static int rcls1_f484(){if (rcls1_p484) return rcls1_m484; else {rcls1_p484=T;return rcls1_m484=(rcls1_f492()?((rcls1_v490=rcls1_f490()),(rcls1_v490?rcls1_v490:(fabs(((rcls1_f493()?rcls1_f498():rcls1_f2531())-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f662(){if (rcls1_p662) return rcls1_m662; else {rcls1_p662=T;return rcls1_m662=(rcls1_v6514+(rcls1_f666()-rcls1_f664()));}}
static double rcls1_f619(){if (rcls1_p619) return rcls1_m619; else {rcls1_p619=T;return rcls1_m619=atan2((rcls1_f658()-rcls1_v6512),(rcls1_f662()-rcls1_v6514));}}
static double rcls1_f596(){if (rcls1_p596) return rcls1_m596; else {rcls1_p596=T;return rcls1_m596=(rcls1_f619()+(1.5707963267948966));}}
static double rcls1_f617(){if (rcls1_p617) return rcls1_m617; else {rcls1_p617=T;return rcls1_m617=normalize_rotation((rcls1_f619()-rcls1_f3902()));}}
static double rcls1_f616(){if (rcls1_p616) return rcls1_m616; else {rcls1_p616=T;return rcls1_m616=normalize_rotation(rcls1_f617());}}
static int rcls1_f604(){if (rcls1_p604) return rcls1_m604; else {rcls1_p604=T;return rcls1_m604=((rcls1_v616=rcls1_f616()),((fabs((rcls1_v616-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v616-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v616-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f661(){if (rcls1_p661) return rcls1_m661; else {rcls1_p661=T;return rcls1_m661=(rcls1_v6530==rcls1_f662());}}
static double rcls1_f655(){if (rcls1_p655) return rcls1_m655; else {rcls1_p655=T;return rcls1_m655=(rcls1_f661()?(rcls1_f657()?rcls1_f1130():(0.0)):(1.0));}}
static double rcls1_f650(){if (rcls1_p650) return rcls1_m650; else {rcls1_p650=T;return rcls1_m650=((rcls1_f658()-rcls1_v6528)/(rcls1_f662()-rcls1_v6530));}}
static double rcls1_f643(){if (rcls1_p643) return rcls1_m643; else {rcls1_p643=T;return rcls1_m643=(rcls1_f661()?(rcls1_f657()?rcls1_f1130():rcls1_f658()):(rcls1_f662()+(rcls1_f650()*rcls1_f658())));}}
static double rcls1_f649(){if (rcls1_p649) return rcls1_m649; else {rcls1_p649=T;return rcls1_m649=(rcls1_f661()?(rcls1_f657()?rcls1_f1130():(1.0)):rcls1_f650());}}
static double rcls1_f588(){if (rcls1_p588) return rcls1_m588; else {rcls1_p588=T;return rcls1_m588=((rcls1_v596=rcls1_f596()),(((rcls1_f655()*(rcls1_f662()+cos(rcls1_v596)))+(rcls1_f649()*(rcls1_f658()+sin(rcls1_v596))))-rcls1_f643()));}}
static double rcls1_f635(){if (rcls1_p635) return rcls1_m635; else {rcls1_p635=T;return rcls1_m635=(((rcls1_f655()*rcls1_v6530)+(rcls1_f649()*rcls1_v6528))-rcls1_f643());}}
static double rcls1_f642(){if (rcls1_p642) return rcls1_m642; else {rcls1_p642=T;return rcls1_m642=(((rcls1_f655()*rcls1_v6522)+(rcls1_f649()*rcls1_v6520))-rcls1_f643());}}
static int rcls1_f639(){if (rcls1_p639) return rcls1_m639; else {rcls1_p639=T;return rcls1_m639=(fabs((rcls1_f642()-(0.0)))<rcls1_v6508);}}
static int rcls1_f630(){if (rcls1_p630) return rcls1_m630; else {rcls1_p630=T;return rcls1_m630=(rcls1_f642()>(0.0));}}
static int rcls1_f629(){if (rcls1_p629) return rcls1_m629; else {rcls1_p629=T;return rcls1_m629=(rcls1_f630()?NIL:T);}}
static int rcls1_f578(){if (rcls1_p578) return rcls1_m578; else {rcls1_p578=T;return rcls1_m578=((rcls1_v604=rcls1_f604()),(rcls1_v604?rcls1_v604:(((fabs((rcls1_v6514-rcls1_f662()))<rcls1_v6508)?(fabs((rcls1_v6512-rcls1_f658()))<rcls1_v6508):NIL)?NIL:((rcls1_f639()?T:((rcls1_v588=rcls1_f588()),((fabs((rcls1_v588-(0.0)))<rcls1_v6508)?NIL:((rcls1_v588>(0.0))?rcls1_f630():rcls1_f629()))))?NIL:T))));}}
static int rcls1_f576(){if (rcls1_p576) return rcls1_m576; else {rcls1_p576=T;return rcls1_m576=((rcls1_f578()?rcls1_f617():rcls1_f2535())>(0.0));}}
static int rcls1_f570(){if (rcls1_p570) return rcls1_m570; else {rcls1_p570=T;return rcls1_m570=((rcls1_v578=rcls1_f578()),(rcls1_v578?((rcls1_v576=rcls1_f576()),(rcls1_v576?rcls1_v576:(fabs(((rcls1_v578?rcls1_f617():rcls1_f2531())-(0.0)))<rcls1_v6508))):NIL));}}
static int rcls1_f626(){if (rcls1_p626) return rcls1_m626; else {rcls1_p626=T;return rcls1_m626=(rcls1_f639()?NIL:((rcls1_v635=rcls1_f635()),((fabs((rcls1_v635-(0.0)))<rcls1_v6508)?NIL:((rcls1_v635>(0.0))?rcls1_f630():rcls1_f629()))));}}
static double rcls1_f3987(){if (rcls1_p3987) return rcls1_m3987; else {rcls1_p3987=T;return rcls1_m3987=(rcls1_f4008()/rcls1_f6469());}}
static double rcls1_f4003(){if (rcls1_p4003) return rcls1_m4003; else {rcls1_p4003=T;return rcls1_m4003=(rcls1_f4008()+rcls1_f6496());}}
static int rcls1_f4001(){if (rcls1_p4001) return rcls1_m4001; else {rcls1_p4001=T;return rcls1_m4001=((rcls1_v4003=rcls1_f4003()),(rcls1_f4469()>(rcls1_v4003*rcls1_v4003)));}}
static int rcls1_f3993(){if (rcls1_p3993) return rcls1_m3993; else {rcls1_p3993=T;return rcls1_m3993=(rcls1_f6469()>rcls1_f4003());}}
static int rcls1_f3950(){if (rcls1_p3950) return rcls1_m3950; else {rcls1_p3950=T;return rcls1_m3950=(rcls1_f4431()>rcls1_f4003());}}
static int rcls1_f3948(){if (rcls1_p3948) return rcls1_m3948; else {rcls1_p3948=T;return rcls1_m3948=((rcls1_v3950=rcls1_f3950()),(rcls1_v3950?rcls1_v3950:(rcls1_f4008()>rcls1_f6496())));}}
static double rcls1_f4000(){if (rcls1_p4000) return rcls1_m4000; else {rcls1_p4000=T;return rcls1_m4000=(rcls1_f6469()-rcls1_f4003());}}
static int rcls1_f3998(){if (rcls1_p3998) return rcls1_m3998; else {rcls1_p3998=T;return rcls1_m3998=(fabs(rcls1_f4000())<rcls1_v6508);}}
static int rcls1_f3994(){if (rcls1_p3994) return rcls1_m3994; else {rcls1_p3994=T;return rcls1_m3994=((rcls1_v3998=rcls1_f3998()),(rcls1_v3998?rcls1_v3998:(fabs((rcls1_f6469()-fabs((rcls1_f4008()-rcls1_f6496()))))<rcls1_v6508)));}}
static int rcls1_f622(){if (rcls1_p622) return rcls1_m622; else {rcls1_p622=T;return rcls1_m622=((rcls1_v3994=rcls1_f3994()),(rcls1_v3994?(rcls1_f3948()?rcls1_f626():(rcls1_f626()?NIL:T)):(rcls1_v3994?NIL:T)));}}
static double rcls1_f775(){if (rcls1_p775) return rcls1_m775; else {rcls1_p775=T;return rcls1_m775=((rcls1_v3993=rcls1_f3993()),((rcls1_v3993?rcls1_v3993:rcls1_f3998())?((rcls1_f4008()+((0.5)*rcls1_f4000()))/rcls1_f6469()):((rcls1_f4008()<rcls1_f6496())?(-rcls1_f3987()):(rcls1_f3987()+(1.0)))));}}
static double rcls1_f770(){if (rcls1_p770) return rcls1_m770; else {rcls1_p770=T;return rcls1_m770=(rcls1_v6512+(rcls1_f775()*rcls1_f5874()));}}
static int rcls1_f769(){if (rcls1_p769) return rcls1_m769; else {rcls1_p769=T;return rcls1_m769=(rcls1_v6528==rcls1_f770());}}
static double rcls1_f773(){if (rcls1_p773) return rcls1_m773; else {rcls1_p773=T;return rcls1_m773=(rcls1_v6514+(rcls1_f775()*rcls1_f5873()));}}
static double rcls1_f733(){if (rcls1_p733) return rcls1_m733; else {rcls1_p733=T;return rcls1_m733=atan2((rcls1_f770()-rcls1_v6512),(rcls1_f773()-rcls1_v6514));}}
static double rcls1_f710(){if (rcls1_p710) return rcls1_m710; else {rcls1_p710=T;return rcls1_m710=(rcls1_f733()+(1.5707963267948966));}}
static double rcls1_f731(){if (rcls1_p731) return rcls1_m731; else {rcls1_p731=T;return rcls1_m731=normalize_rotation((rcls1_f733()-rcls1_f3902()));}}
static double rcls1_f730(){if (rcls1_p730) return rcls1_m730; else {rcls1_p730=T;return rcls1_m730=normalize_rotation(rcls1_f731());}}
static int rcls1_f718(){if (rcls1_p718) return rcls1_m718; else {rcls1_p718=T;return rcls1_m718=((rcls1_v730=rcls1_f730()),((fabs((rcls1_v730-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v730-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v730-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f772(){if (rcls1_p772) return rcls1_m772; else {rcls1_p772=T;return rcls1_m772=(rcls1_v6530==rcls1_f773());}}
static double rcls1_f767(){if (rcls1_p767) return rcls1_m767; else {rcls1_p767=T;return rcls1_m767=(rcls1_f772()?(rcls1_f769()?rcls1_f1130():(0.0)):(1.0));}}
static double rcls1_f762(){if (rcls1_p762) return rcls1_m762; else {rcls1_p762=T;return rcls1_m762=((rcls1_f770()-rcls1_v6528)/(rcls1_f773()-rcls1_v6530));}}
static double rcls1_f755(){if (rcls1_p755) return rcls1_m755; else {rcls1_p755=T;return rcls1_m755=(rcls1_f772()?(rcls1_f769()?rcls1_f1130():rcls1_f770()):(rcls1_f773()+(rcls1_f762()*rcls1_f770())));}}
static double rcls1_f761(){if (rcls1_p761) return rcls1_m761; else {rcls1_p761=T;return rcls1_m761=(rcls1_f772()?(rcls1_f769()?rcls1_f1130():(1.0)):rcls1_f762());}}
static double rcls1_f702(){if (rcls1_p702) return rcls1_m702; else {rcls1_p702=T;return rcls1_m702=((rcls1_v710=rcls1_f710()),(((rcls1_f767()*(rcls1_f773()+cos(rcls1_v710)))+(rcls1_f761()*(rcls1_f770()+sin(rcls1_v710))))-rcls1_f755()));}}
static double rcls1_f747(){if (rcls1_p747) return rcls1_m747; else {rcls1_p747=T;return rcls1_m747=(((rcls1_f767()*rcls1_v6530)+(rcls1_f761()*rcls1_v6528))-rcls1_f755());}}
static double rcls1_f754(){if (rcls1_p754) return rcls1_m754; else {rcls1_p754=T;return rcls1_m754=(((rcls1_f767()*rcls1_v6522)+(rcls1_f761()*rcls1_v6520))-rcls1_f755());}}
static int rcls1_f751(){if (rcls1_p751) return rcls1_m751; else {rcls1_p751=T;return rcls1_m751=(fabs((rcls1_f754()-(0.0)))<rcls1_v6508);}}
static int rcls1_f742(){if (rcls1_p742) return rcls1_m742; else {rcls1_p742=T;return rcls1_m742=(rcls1_f754()>(0.0));}}
static int rcls1_f741(){if (rcls1_p741) return rcls1_m741; else {rcls1_p741=T;return rcls1_m741=(rcls1_f742()?NIL:T);}}
static int rcls1_f692(){if (rcls1_p692) return rcls1_m692; else {rcls1_p692=T;return rcls1_m692=((rcls1_v718=rcls1_f718()),(rcls1_v718?rcls1_v718:(((fabs((rcls1_v6514-rcls1_f773()))<rcls1_v6508)?(fabs((rcls1_v6512-rcls1_f770()))<rcls1_v6508):NIL)?NIL:((rcls1_f751()?T:((rcls1_v702=rcls1_f702()),((fabs((rcls1_v702-(0.0)))<rcls1_v6508)?NIL:((rcls1_v702>(0.0))?rcls1_f742():rcls1_f741()))))?NIL:T))));}}
static double rcls1_f475(){if (rcls1_p475) return rcls1_m475; else {rcls1_p475=T;return rcls1_m475=(rcls1_f692()?rcls1_f731():rcls1_f834());}}
static double rcls1_f689(){if (rcls1_p689) return rcls1_m689; else {rcls1_p689=T;return rcls1_m689=(rcls1_f692()?rcls1_f731():rcls1_f2531());}}
static double rcls1_f691(){if (rcls1_p691) return rcls1_m691; else {rcls1_p691=T;return rcls1_m691=(rcls1_f692()?rcls1_f731():rcls1_f2535());}}
static int rcls1_f690(){if (rcls1_p690) return rcls1_m690; else {rcls1_p690=T;return rcls1_m690=(rcls1_f691()>(0.0));}}
static int rcls1_f684(){if (rcls1_p684) return rcls1_m684; else {rcls1_p684=T;return rcls1_m684=(rcls1_f692()?((rcls1_v690=rcls1_f690()),(rcls1_v690?rcls1_v690:(fabs((rcls1_f689()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f681(){if (rcls1_p681) return rcls1_m681; else {rcls1_p681=T;return rcls1_m681=((rcls1_f684()?rcls1_f691():rcls1_f2535())>(0.0));}}
static int rcls1_f675(){if (rcls1_p675) return rcls1_m675; else {rcls1_p675=T;return rcls1_m675=((rcls1_v684=rcls1_f684()),((rcls1_v684?rcls1_f692():NIL)?((rcls1_v681=rcls1_f681()),(rcls1_v681?rcls1_v681:(fabs(((rcls1_v684?rcls1_f689():rcls1_f2531())-(0.0)))<rcls1_v6508))):NIL));}}
static int rcls1_f738(){if (rcls1_p738) return rcls1_m738; else {rcls1_p738=T;return rcls1_m738=(rcls1_f751()?NIL:((rcls1_v747=rcls1_f747()),((fabs((rcls1_v747-(0.0)))<rcls1_v6508)?NIL:((rcls1_v747>(0.0))?rcls1_f742():rcls1_f741()))));}}
static int rcls1_f736(){if (rcls1_p736) return rcls1_m736; else {rcls1_p736=T;return rcls1_m736=(rcls1_f3948()?rcls1_f738():(rcls1_f738()?NIL:T));}}
static double rcls1_f470(){if (rcls1_p470) return rcls1_m470; else {rcls1_p470=T;return rcls1_m470=(rcls1_f3994()?(rcls1_f736()?((rcls1_v684=rcls1_f684()),(rcls1_v684?(rcls1_f675()?(rcls1_f692()?rcls1_f731():rcls1_f832()):rcls1_f475()):(rcls1_v684?rcls1_f475():rcls1_f834()))):rcls1_f834()):rcls1_f834());}}
static double rcls1_f454(){if (rcls1_p454) return rcls1_m454; else {rcls1_p454=T;return rcls1_m454=(-(rcls1_f781()?rcls1_f834():(rcls1_f4468()?rcls1_f834():(rcls1_f4001()?rcls1_f470():(rcls1_f667()?rcls1_f470():(rcls1_f622()?(rcls1_f570()?(rcls1_f484()?(rcls1_f578()?(rcls1_f493()?(rcls1_f501()?((rcls1_v617=rcls1_f617()),(rcls1_v562=rcls1_f562()),((rcls1_v617<rcls1_v562)?rcls1_v617:rcls1_v562)):rcls1_f832()):rcls1_f832()):rcls1_f832()):(rcls1_f578()?rcls1_f617():rcls1_f834())):(rcls1_f493()?(rcls1_f501()?rcls1_f562():rcls1_f834()):rcls1_f834())):rcls1_f834()))))));}}
static int rcls1_f415(){if (rcls1_p415) return rcls1_m415; else {rcls1_p415=T;return rcls1_m415=(rcls1_f792()>rcls1_f454());}}
static int rcls1_f449(){if (rcls1_p449) return rcls1_m449; else {rcls1_p449=T;return rcls1_m449=(rcls1_f3994()?(rcls1_f736()?(rcls1_f684()?(rcls1_f675()?NIL:(rcls1_f692()?NIL:T)):T):T):T);}}
static int rcls1_f439(){if (rcls1_p439) return rcls1_m439; else {rcls1_p439=T;return rcls1_m439=(rcls1_f781()?T:(rcls1_f4468()?T:(rcls1_f4001()?rcls1_f449():(rcls1_f667()?rcls1_f449():(rcls1_f622()?(rcls1_f570()?(rcls1_f484()?NIL:(rcls1_f578()?NIL:T)):(rcls1_f493()?(rcls1_f501()?NIL:T):T)):T)))));}}
static int rcls1_f671(){if (rcls1_p671) return rcls1_m671; else {rcls1_p671=T;return rcls1_m671=(rcls1_f3994()?(rcls1_f736()?(rcls1_f684()?(rcls1_f675()?T:rcls1_f692()):NIL):NIL):NIL);}}
static int rcls1_f477(){if (rcls1_p477) return rcls1_m477; else {rcls1_p477=T;return rcls1_m477=(rcls1_f781()?NIL:(rcls1_f4468()?NIL:(rcls1_f4001()?rcls1_f671():(rcls1_f667()?rcls1_f671():(rcls1_f622()?(rcls1_f570()?(rcls1_f484()?T:rcls1_f578()):rcls1_f492()):NIL)))));}}
static double rcls1_f434(){if (rcls1_p434) return rcls1_m434; else {rcls1_p434=T;return rcls1_m434=(rcls1_f477()?rcls1_f454():(rcls1_f439()?rcls1_f2531():rcls1_f792()));}}
static double rcls1_f437(){if (rcls1_p437) return rcls1_m437; else {rcls1_p437=T;return rcls1_m437=(rcls1_f477()?rcls1_f454():(rcls1_f439()?rcls1_f2535():rcls1_f792()));}}
static int rcls1_f436(){if (rcls1_p436) return rcls1_m436; else {rcls1_p436=T;return rcls1_m436=(rcls1_f437()<(0.0));}}
static int rcls1_f429(){if (rcls1_p429) return rcls1_m429; else {rcls1_p429=T;return rcls1_m429=(rcls1_f477()?((rcls1_v436=rcls1_f436()),(rcls1_v436?rcls1_v436:(fabs((rcls1_f434()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f428(){if (rcls1_p428) return rcls1_m428; else {rcls1_p428=T;return rcls1_m428=(rcls1_f429()?rcls1_f477():NIL);}}
static double rcls1_f425(){if (rcls1_p425) return rcls1_m425; else {rcls1_p425=T;return rcls1_m425=(rcls1_f429()?rcls1_f434():rcls1_f2531());}}
static double rcls1_f427(){if (rcls1_p427) return rcls1_m427; else {rcls1_p427=T;return rcls1_m427=(rcls1_f429()?rcls1_f437():rcls1_f2535());}}
static int rcls1_f426(){if (rcls1_p426) return rcls1_m426; else {rcls1_p426=T;return rcls1_m426=(rcls1_f427()<(0.0));}}
static int rcls1_f420(){if (rcls1_p420) return rcls1_m420; else {rcls1_p420=T;return rcls1_m420=(rcls1_f428()?((rcls1_v426=rcls1_f426()),(rcls1_v426?rcls1_v426:(fabs((rcls1_f425()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f4464(){if (rcls1_p4464) return rcls1_m4464; else {rcls1_p4464=T;return rcls1_m4464=((rcls1_v4467=rcls1_f4467()),sqrt(((rcls1_v4467*rcls1_v4467)+rcls1_f6124())));}}
static double rcls1_f4430(){if (rcls1_p4430) return rcls1_m4430; else {rcls1_p4430=T;return rcls1_m4430=((rcls1_v4464=rcls1_f4464()),(rcls1_v4464*rcls1_v4464));}}
static double rcls1_f1029(){if (rcls1_p1029) return rcls1_m1029; else {rcls1_p1029=T;return rcls1_m1029=(((rcls1_f4469()+rcls1_f4430())-rcls1_f6443())/rcls1_f1030());}}
static double rcls1_f1019(){if (rcls1_p1019) return rcls1_m1019; else {rcls1_p1019=T;return rcls1_m1019=(rcls1_f1029()*rcls1_f4418());}}
static double rcls1_f1025(){if (rcls1_p1025) return rcls1_m1025; else {rcls1_p1025=T;return rcls1_m1025=(rcls1_f1029()*rcls1_f4419());}}
static double rcls1_f1027(){if (rcls1_p1027) return rcls1_m1027; else {rcls1_p1027=T;return rcls1_m1027=((rcls1_v1029=rcls1_f1029()),(rcls1_f4430()-(rcls1_v1029*rcls1_v1029)));}}
static int rcls1_f1026(){if (rcls1_p1026) return rcls1_m1026; else {rcls1_p1026=T;return rcls1_m1026=(rcls1_f1027()<0.0);}}
static double rcls1_f1024(){if (rcls1_p1024) return rcls1_m1024; else {rcls1_p1024=T;return rcls1_m1024=sqrt(rcls1_f1027());}}
static double rcls1_f1018(){if (rcls1_p1018) return rcls1_m1018; else {rcls1_p1018=T;return rcls1_m1018=(rcls1_f1024()*rcls1_f4419());}}
static double rcls1_f927(){if (rcls1_p927) return rcls1_m927; else {rcls1_p927=T;return rcls1_m927=(rcls1_v6512+(rcls1_f1019()-rcls1_f1018()));}}
static int rcls1_f899(){if (rcls1_p899) return rcls1_m899; else {rcls1_p899=T;return rcls1_m899=(rcls1_v6528==rcls1_f927());}}
static double rcls1_f1017(){if (rcls1_p1017) return rcls1_m1017; else {rcls1_p1017=T;return rcls1_m1017=(rcls1_v6512+rcls1_f1019()+rcls1_f1018());}}
static int rcls1_f1016(){if (rcls1_p1016) return rcls1_m1016; else {rcls1_p1016=T;return rcls1_m1016=(rcls1_v6528==rcls1_f1017());}}
static double rcls1_f1023(){if (rcls1_p1023) return rcls1_m1023; else {rcls1_p1023=T;return rcls1_m1023=(rcls1_f1024()*rcls1_f4418());}}
static double rcls1_f925(){if (rcls1_p925) return rcls1_m925; else {rcls1_p925=T;return rcls1_m925=(rcls1_v6514+rcls1_f1025()+rcls1_f1023());}}
static int rcls1_f900(){if (rcls1_p900) return rcls1_m900; else {rcls1_p900=T;return rcls1_m900=(rcls1_v6530==rcls1_f925());}}
static double rcls1_f897(){if (rcls1_p897) return rcls1_m897; else {rcls1_p897=T;return rcls1_m897=(rcls1_f900()?(rcls1_f899()?rcls1_f1130():(0.0)):(1.0));}}
static double rcls1_f892(){if (rcls1_p892) return rcls1_m892; else {rcls1_p892=T;return rcls1_m892=((rcls1_f927()-rcls1_v6528)/(rcls1_f925()-rcls1_v6530));}}
static double rcls1_f885(){if (rcls1_p885) return rcls1_m885; else {rcls1_p885=T;return rcls1_m885=(rcls1_f900()?(rcls1_f899()?rcls1_f1130():rcls1_f927()):(rcls1_f925()+(rcls1_f892()*rcls1_f927())));}}
static double rcls1_f891(){if (rcls1_p891) return rcls1_m891; else {rcls1_p891=T;return rcls1_m891=(rcls1_f900()?(rcls1_f899()?rcls1_f1130():(1.0)):rcls1_f892());}}
static double rcls1_f884(){if (rcls1_p884) return rcls1_m884; else {rcls1_p884=T;return rcls1_m884=(((rcls1_f897()*rcls1_v6518)+(rcls1_f891()*rcls1_v6516))-rcls1_f885());}}
static int rcls1_f867(){if (rcls1_p867) return rcls1_m867; else {rcls1_p867=T;return rcls1_m867=(rcls1_f884()>(0.0));}}
static double rcls1_f923(){if (rcls1_p923) return rcls1_m923; else {rcls1_p923=T;return rcls1_m923=atan2((rcls1_f927()-rcls1_v6512),(rcls1_f925()-rcls1_v6514));}}
static double rcls1_f880(){if (rcls1_p880) return rcls1_m880; else {rcls1_p880=T;return rcls1_m880=(rcls1_f923()+(1.5707963267948966));}}
static double rcls1_f872(){if (rcls1_p872) return rcls1_m872; else {rcls1_p872=T;return rcls1_m872=((rcls1_v880=rcls1_f880()),(((rcls1_f897()*(rcls1_f925()+cos(rcls1_v880)))+(rcls1_f891()*(rcls1_f927()+sin(rcls1_v880))))-rcls1_f885()));}}
static double rcls1_f921(){if (rcls1_p921) return rcls1_m921; else {rcls1_p921=T;return rcls1_m921=normalize_rotation((rcls1_f923()-rcls1_f4350()));}}
static double rcls1_f920(){if (rcls1_p920) return rcls1_m920; else {rcls1_p920=T;return rcls1_m920=normalize_rotation(rcls1_f921());}}
static int rcls1_f908(){if (rcls1_p908) return rcls1_m908; else {rcls1_p908=T;return rcls1_m908=((rcls1_v920=rcls1_f920()),((fabs((rcls1_v920-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v920-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v920-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f860(){if (rcls1_p860) return rcls1_m860; else {rcls1_p860=T;return rcls1_m860=((rcls1_v908=rcls1_f908()),(rcls1_v908?rcls1_v908:(((fabs((rcls1_v6514-rcls1_f925()))<rcls1_v6508)?(fabs((rcls1_v6512-rcls1_f927()))<rcls1_v6508):NIL)?NIL:(((fabs((rcls1_f884()-(0.0)))<rcls1_v6508)?T:((rcls1_v872=rcls1_f872()),((fabs((rcls1_v872-(0.0)))<rcls1_v6508)?NIL:((rcls1_v872>(0.0))?rcls1_f867():(rcls1_f867()?NIL:T)))))?NIL:T))));}}
static double rcls1_f857(){if (rcls1_p857) return rcls1_m857; else {rcls1_p857=T;return rcls1_m857=(rcls1_f860()?rcls1_f921():rcls1_f2531());}}
static double rcls1_f859(){if (rcls1_p859) return rcls1_m859; else {rcls1_p859=T;return rcls1_m859=(rcls1_f860()?rcls1_f921():rcls1_f2535());}}
static int rcls1_f858(){if (rcls1_p858) return rcls1_m858; else {rcls1_p858=T;return rcls1_m858=(rcls1_f859()>(0.0));}}
static int rcls1_f852(){if (rcls1_p852) return rcls1_m852; else {rcls1_p852=T;return rcls1_m852=(rcls1_f860()?((rcls1_v858=rcls1_f858()),(rcls1_v858?rcls1_v858:(fabs((rcls1_f857()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f851(){if (rcls1_p851) return rcls1_m851; else {rcls1_p851=T;return rcls1_m851=(rcls1_f852()?rcls1_f860():NIL);}}
static int rcls1_f849(){if (rcls1_p849) return rcls1_m849; else {rcls1_p849=T;return rcls1_m849=((rcls1_f852()?rcls1_f859():rcls1_f2535())>(0.0));}}
static int rcls1_f843(){if (rcls1_p843) return rcls1_m843; else {rcls1_p843=T;return rcls1_m843=(rcls1_f851()?((rcls1_v849=rcls1_f849()),(rcls1_v849?rcls1_v849:(fabs(((rcls1_f852()?rcls1_f857():rcls1_f2531())-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f1021(){if (rcls1_p1021) return rcls1_m1021; else {rcls1_p1021=T;return rcls1_m1021=(rcls1_v6514+(rcls1_f1025()-rcls1_f1023()));}}
static double rcls1_f978(){if (rcls1_p978) return rcls1_m978; else {rcls1_p978=T;return rcls1_m978=atan2((rcls1_f1017()-rcls1_v6512),(rcls1_f1021()-rcls1_v6514));}}
static double rcls1_f955(){if (rcls1_p955) return rcls1_m955; else {rcls1_p955=T;return rcls1_m955=(rcls1_f978()+(1.5707963267948966));}}
static double rcls1_f976(){if (rcls1_p976) return rcls1_m976; else {rcls1_p976=T;return rcls1_m976=normalize_rotation((rcls1_f978()-rcls1_f4350()));}}
static double rcls1_f975(){if (rcls1_p975) return rcls1_m975; else {rcls1_p975=T;return rcls1_m975=normalize_rotation(rcls1_f976());}}
static int rcls1_f963(){if (rcls1_p963) return rcls1_m963; else {rcls1_p963=T;return rcls1_m963=((rcls1_v975=rcls1_f975()),((fabs((rcls1_v975-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v975-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v975-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f1020(){if (rcls1_p1020) return rcls1_m1020; else {rcls1_p1020=T;return rcls1_m1020=(rcls1_v6530==rcls1_f1021());}}
static double rcls1_f1014(){if (rcls1_p1014) return rcls1_m1014; else {rcls1_p1014=T;return rcls1_m1014=(rcls1_f1020()?(rcls1_f1016()?rcls1_f1130():(0.0)):(1.0));}}
static double rcls1_f1009(){if (rcls1_p1009) return rcls1_m1009; else {rcls1_p1009=T;return rcls1_m1009=((rcls1_f1017()-rcls1_v6528)/(rcls1_f1021()-rcls1_v6530));}}
static double rcls1_f1002(){if (rcls1_p1002) return rcls1_m1002; else {rcls1_p1002=T;return rcls1_m1002=(rcls1_f1020()?(rcls1_f1016()?rcls1_f1130():rcls1_f1017()):(rcls1_f1021()+(rcls1_f1009()*rcls1_f1017())));}}
static double rcls1_f1008(){if (rcls1_p1008) return rcls1_m1008; else {rcls1_p1008=T;return rcls1_m1008=(rcls1_f1020()?(rcls1_f1016()?rcls1_f1130():(1.0)):rcls1_f1009());}}
static double rcls1_f947(){if (rcls1_p947) return rcls1_m947; else {rcls1_p947=T;return rcls1_m947=((rcls1_v955=rcls1_f955()),(((rcls1_f1014()*(rcls1_f1021()+cos(rcls1_v955)))+(rcls1_f1008()*(rcls1_f1017()+sin(rcls1_v955))))-rcls1_f1002()));}}
static double rcls1_f994(){if (rcls1_p994) return rcls1_m994; else {rcls1_p994=T;return rcls1_m994=(((rcls1_f1014()*rcls1_v6530)+(rcls1_f1008()*rcls1_v6528))-rcls1_f1002());}}
static double rcls1_f1001(){if (rcls1_p1001) return rcls1_m1001; else {rcls1_p1001=T;return rcls1_m1001=(((rcls1_f1014()*rcls1_v6518)+(rcls1_f1008()*rcls1_v6516))-rcls1_f1002());}}
static int rcls1_f998(){if (rcls1_p998) return rcls1_m998; else {rcls1_p998=T;return rcls1_m998=(fabs((rcls1_f1001()-(0.0)))<rcls1_v6508);}}
static int rcls1_f989(){if (rcls1_p989) return rcls1_m989; else {rcls1_p989=T;return rcls1_m989=(rcls1_f1001()>(0.0));}}
static int rcls1_f988(){if (rcls1_p988) return rcls1_m988; else {rcls1_p988=T;return rcls1_m988=(rcls1_f989()?NIL:T);}}
static int rcls1_f937(){if (rcls1_p937) return rcls1_m937; else {rcls1_p937=T;return rcls1_m937=((rcls1_v963=rcls1_f963()),(rcls1_v963?rcls1_v963:(((fabs((rcls1_v6514-rcls1_f1021()))<rcls1_v6508)?(fabs((rcls1_v6512-rcls1_f1017()))<rcls1_v6508):NIL)?NIL:((rcls1_f998()?T:((rcls1_v947=rcls1_f947()),((fabs((rcls1_v947-(0.0)))<rcls1_v6508)?NIL:((rcls1_v947>(0.0))?rcls1_f989():rcls1_f988()))))?NIL:T))));}}
static int rcls1_f935(){if (rcls1_p935) return rcls1_m935; else {rcls1_p935=T;return rcls1_m935=((rcls1_f937()?rcls1_f976():rcls1_f2535())>(0.0));}}
static int rcls1_f929(){if (rcls1_p929) return rcls1_m929; else {rcls1_p929=T;return rcls1_m929=((rcls1_v937=rcls1_f937()),(rcls1_v937?((rcls1_v935=rcls1_f935()),(rcls1_v935?rcls1_v935:(fabs(((rcls1_v937?rcls1_f976():rcls1_f2531())-(0.0)))<rcls1_v6508))):NIL));}}
static int rcls1_f985(){if (rcls1_p985) return rcls1_m985; else {rcls1_p985=T;return rcls1_m985=(rcls1_f998()?NIL:((rcls1_v994=rcls1_f994()),((fabs((rcls1_v994-(0.0)))<rcls1_v6508)?NIL:((rcls1_v994>(0.0))?rcls1_f989():rcls1_f988()))));}}
static double rcls1_f4442(){if (rcls1_p4442) return rcls1_m4442; else {rcls1_p4442=T;return rcls1_m4442=(rcls1_f4464()/rcls1_f6469());}}
static double rcls1_f4458(){if (rcls1_p4458) return rcls1_m4458; else {rcls1_p4458=T;return rcls1_m4458=(rcls1_f4464()+rcls1_f6496());}}
static int rcls1_f4456(){if (rcls1_p4456) return rcls1_m4456; else {rcls1_p4456=T;return rcls1_m4456=((rcls1_v4458=rcls1_f4458()),(rcls1_f4469()>(rcls1_v4458*rcls1_v4458)));}}
static int rcls1_f4448(){if (rcls1_p4448) return rcls1_m4448; else {rcls1_p4448=T;return rcls1_m4448=(rcls1_f6469()>rcls1_f4458());}}
static int rcls1_f4401(){if (rcls1_p4401) return rcls1_m4401; else {rcls1_p4401=T;return rcls1_m4401=(rcls1_f4431()>rcls1_f4458());}}
static int rcls1_f4399(){if (rcls1_p4399) return rcls1_m4399; else {rcls1_p4399=T;return rcls1_m4399=((rcls1_v4401=rcls1_f4401()),(rcls1_v4401?rcls1_v4401:(rcls1_f4464()>rcls1_f6496())));}}
static double rcls1_f4455(){if (rcls1_p4455) return rcls1_m4455; else {rcls1_p4455=T;return rcls1_m4455=(rcls1_f6469()-rcls1_f4458());}}
static int rcls1_f4453(){if (rcls1_p4453) return rcls1_m4453; else {rcls1_p4453=T;return rcls1_m4453=(fabs(rcls1_f4455())<rcls1_v6508);}}
static int rcls1_f4449(){if (rcls1_p4449) return rcls1_m4449; else {rcls1_p4449=T;return rcls1_m4449=((rcls1_v4453=rcls1_f4453()),(rcls1_v4453?rcls1_v4453:(fabs((rcls1_f6469()-fabs((rcls1_f4464()-rcls1_f6496()))))<rcls1_v6508)));}}
static int rcls1_f981(){if (rcls1_p981) return rcls1_m981; else {rcls1_p981=T;return rcls1_m981=((rcls1_v4449=rcls1_f4449()),(rcls1_v4449?(rcls1_f4399()?rcls1_f985():(rcls1_f985()?NIL:T)):(rcls1_v4449?NIL:T)));}}
static double rcls1_f1138(){if (rcls1_p1138) return rcls1_m1138; else {rcls1_p1138=T;return rcls1_m1138=((rcls1_v4448=rcls1_f4448()),((rcls1_v4448?rcls1_v4448:rcls1_f4453())?((rcls1_f4464()+((0.5)*rcls1_f4455()))/rcls1_f6469()):((rcls1_f4464()<rcls1_f6496())?(-rcls1_f4442()):(rcls1_f4442()+(1.0)))));}}
static double rcls1_f1133(){if (rcls1_p1133) return rcls1_m1133; else {rcls1_p1133=T;return rcls1_m1133=(rcls1_v6512+(rcls1_f1138()*rcls1_f5874()));}}
static int rcls1_f1132(){if (rcls1_p1132) return rcls1_m1132; else {rcls1_p1132=T;return rcls1_m1132=(rcls1_v6528==rcls1_f1133());}}
static double rcls1_f1136(){if (rcls1_p1136) return rcls1_m1136; else {rcls1_p1136=T;return rcls1_m1136=(rcls1_v6514+(rcls1_f1138()*rcls1_f5873()));}}
static double rcls1_f1094(){if (rcls1_p1094) return rcls1_m1094; else {rcls1_p1094=T;return rcls1_m1094=atan2((rcls1_f1133()-rcls1_v6512),(rcls1_f1136()-rcls1_v6514));}}
static double rcls1_f1071(){if (rcls1_p1071) return rcls1_m1071; else {rcls1_p1071=T;return rcls1_m1071=(rcls1_f1094()+(1.5707963267948966));}}
static double rcls1_f1092(){if (rcls1_p1092) return rcls1_m1092; else {rcls1_p1092=T;return rcls1_m1092=normalize_rotation((rcls1_f1094()-rcls1_f4350()));}}
static double rcls1_f1091(){if (rcls1_p1091) return rcls1_m1091; else {rcls1_p1091=T;return rcls1_m1091=normalize_rotation(rcls1_f1092());}}
static int rcls1_f1079(){if (rcls1_p1079) return rcls1_m1079; else {rcls1_p1079=T;return rcls1_m1079=((rcls1_v1091=rcls1_f1091()),((fabs((rcls1_v1091-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v1091-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v1091-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f1135(){if (rcls1_p1135) return rcls1_m1135; else {rcls1_p1135=T;return rcls1_m1135=(rcls1_v6530==rcls1_f1136());}}
static double rcls1_f1128(){if (rcls1_p1128) return rcls1_m1128; else {rcls1_p1128=T;return rcls1_m1128=(rcls1_f1135()?(rcls1_f1132()?rcls1_f1130():(0.0)):(1.0));}}
static double rcls1_f1123(){if (rcls1_p1123) return rcls1_m1123; else {rcls1_p1123=T;return rcls1_m1123=((rcls1_f1133()-rcls1_v6528)/(rcls1_f1136()-rcls1_v6530));}}
static double rcls1_f1116(){if (rcls1_p1116) return rcls1_m1116; else {rcls1_p1116=T;return rcls1_m1116=(rcls1_f1135()?(rcls1_f1132()?rcls1_f1130():rcls1_f1133()):(rcls1_f1136()+(rcls1_f1123()*rcls1_f1133())));}}
static double rcls1_f1122(){if (rcls1_p1122) return rcls1_m1122; else {rcls1_p1122=T;return rcls1_m1122=(rcls1_f1135()?(rcls1_f1132()?rcls1_f1130():(1.0)):rcls1_f1123());}}
static double rcls1_f1063(){if (rcls1_p1063) return rcls1_m1063; else {rcls1_p1063=T;return rcls1_m1063=((rcls1_v1071=rcls1_f1071()),(((rcls1_f1128()*(rcls1_f1136()+cos(rcls1_v1071)))+(rcls1_f1122()*(rcls1_f1133()+sin(rcls1_v1071))))-rcls1_f1116()));}}
static double rcls1_f1108(){if (rcls1_p1108) return rcls1_m1108; else {rcls1_p1108=T;return rcls1_m1108=(((rcls1_f1128()*rcls1_v6530)+(rcls1_f1122()*rcls1_v6528))-rcls1_f1116());}}
static double rcls1_f1115(){if (rcls1_p1115) return rcls1_m1115; else {rcls1_p1115=T;return rcls1_m1115=(((rcls1_f1128()*rcls1_v6518)+(rcls1_f1122()*rcls1_v6516))-rcls1_f1116());}}
static int rcls1_f1112(){if (rcls1_p1112) return rcls1_m1112; else {rcls1_p1112=T;return rcls1_m1112=(fabs((rcls1_f1115()-(0.0)))<rcls1_v6508);}}
static int rcls1_f1103(){if (rcls1_p1103) return rcls1_m1103; else {rcls1_p1103=T;return rcls1_m1103=(rcls1_f1115()>(0.0));}}
static int rcls1_f1102(){if (rcls1_p1102) return rcls1_m1102; else {rcls1_p1102=T;return rcls1_m1102=(rcls1_f1103()?NIL:T);}}
static int rcls1_f1053(){if (rcls1_p1053) return rcls1_m1053; else {rcls1_p1053=T;return rcls1_m1053=((rcls1_v1079=rcls1_f1079()),(rcls1_v1079?rcls1_v1079:(((fabs((rcls1_v6514-rcls1_f1136()))<rcls1_v6508)?(fabs((rcls1_v6512-rcls1_f1133()))<rcls1_v6508):NIL)?NIL:((rcls1_f1112()?T:((rcls1_v1063=rcls1_f1063()),((fabs((rcls1_v1063-(0.0)))<rcls1_v6508)?NIL:((rcls1_v1063>(0.0))?rcls1_f1103():rcls1_f1102()))))?NIL:T))));}}
static double rcls1_f830(){if (rcls1_p830) return rcls1_m830; else {rcls1_p830=T;return rcls1_m830=(rcls1_f1053()?rcls1_f1092():rcls1_f834());}}
static double rcls1_f1050(){if (rcls1_p1050) return rcls1_m1050; else {rcls1_p1050=T;return rcls1_m1050=(rcls1_f1053()?rcls1_f1092():rcls1_f2531());}}
static double rcls1_f1052(){if (rcls1_p1052) return rcls1_m1052; else {rcls1_p1052=T;return rcls1_m1052=(rcls1_f1053()?rcls1_f1092():rcls1_f2535());}}
static int rcls1_f1051(){if (rcls1_p1051) return rcls1_m1051; else {rcls1_p1051=T;return rcls1_m1051=(rcls1_f1052()>(0.0));}}
static int rcls1_f1045(){if (rcls1_p1045) return rcls1_m1045; else {rcls1_p1045=T;return rcls1_m1045=(rcls1_f1053()?((rcls1_v1051=rcls1_f1051()),(rcls1_v1051?rcls1_v1051:(fabs((rcls1_f1050()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f1042(){if (rcls1_p1042) return rcls1_m1042; else {rcls1_p1042=T;return rcls1_m1042=((rcls1_f1045()?rcls1_f1052():rcls1_f2535())>(0.0));}}
static int rcls1_f1036(){if (rcls1_p1036) return rcls1_m1036; else {rcls1_p1036=T;return rcls1_m1036=((rcls1_v1045=rcls1_f1045()),((rcls1_v1045?rcls1_f1053():NIL)?((rcls1_v1042=rcls1_f1042()),(rcls1_v1042?rcls1_v1042:(fabs(((rcls1_v1045?rcls1_f1050():rcls1_f2531())-(0.0)))<rcls1_v6508))):NIL));}}
static int rcls1_f1099(){if (rcls1_p1099) return rcls1_m1099; else {rcls1_p1099=T;return rcls1_m1099=(rcls1_f1112()?NIL:((rcls1_v1108=rcls1_f1108()),((fabs((rcls1_v1108-(0.0)))<rcls1_v6508)?NIL:((rcls1_v1108>(0.0))?rcls1_f1103():rcls1_f1102()))));}}
static int rcls1_f1097(){if (rcls1_p1097) return rcls1_m1097; else {rcls1_p1097=T;return rcls1_m1097=(rcls1_f4399()?rcls1_f1099():(rcls1_f1099()?NIL:T));}}
static double rcls1_f825(){if (rcls1_p825) return rcls1_m825; else {rcls1_p825=T;return rcls1_m825=(rcls1_f4449()?(rcls1_f1097()?((rcls1_v1045=rcls1_f1045()),(rcls1_v1045?(rcls1_f1036()?(rcls1_f1053()?rcls1_f1092():rcls1_f832()):rcls1_f830()):(rcls1_v1045?rcls1_f830():rcls1_f834()))):rcls1_f834()):rcls1_f834());}}
static double rcls1_f809(){if (rcls1_p809) return rcls1_m809; else {rcls1_p809=T;return rcls1_m809=(-(rcls1_f1145()?rcls1_f834():(rcls1_f4468()?rcls1_f834():(rcls1_f4456()?rcls1_f825():(rcls1_f1026()?rcls1_f825():(rcls1_f981()?(rcls1_f929()?(rcls1_f843()?(rcls1_f937()?(rcls1_f852()?(rcls1_f860()?((rcls1_v976=rcls1_f976()),(rcls1_v921=rcls1_f921()),((rcls1_v976<rcls1_v921)?rcls1_v976:rcls1_v921)):rcls1_f832()):rcls1_f832()):rcls1_f832()):(rcls1_f937()?rcls1_f976():rcls1_f834())):(rcls1_f852()?(rcls1_f860()?rcls1_f921():rcls1_f834()):rcls1_f834())):rcls1_f834()))))));}}
static int rcls1_f419(){if (rcls1_p419) return rcls1_m419; else {rcls1_p419=T;return rcls1_m419=(rcls1_f809()>rcls1_f792());}}
static int rcls1_f804(){if (rcls1_p804) return rcls1_m804; else {rcls1_p804=T;return rcls1_m804=(rcls1_f4449()?(rcls1_f1097()?(rcls1_f1045()?(rcls1_f1036()?NIL:(rcls1_f1053()?NIL:T)):T):T):T);}}
static int rcls1_f794(){if (rcls1_p794) return rcls1_m794; else {rcls1_p794=T;return rcls1_m794=(rcls1_f1145()?T:(rcls1_f4468()?T:(rcls1_f4456()?rcls1_f804():(rcls1_f1026()?rcls1_f804():(rcls1_f981()?(rcls1_f929()?(rcls1_f843()?NIL:(rcls1_f937()?NIL:T)):(rcls1_f852()?(rcls1_f860()?NIL:T):T)):T)))));}}
static int rcls1_f1032(){if (rcls1_p1032) return rcls1_m1032; else {rcls1_p1032=T;return rcls1_m1032=(rcls1_f4449()?(rcls1_f1097()?(rcls1_f1045()?(rcls1_f1036()?T:rcls1_f1053()):NIL):NIL):NIL);}}
static int rcls1_f836(){if (rcls1_p836) return rcls1_m836; else {rcls1_p836=T;return rcls1_m836=(rcls1_f1145()?NIL:(rcls1_f4468()?NIL:(rcls1_f4456()?rcls1_f1032():(rcls1_f1026()?rcls1_f1032():(rcls1_f981()?(rcls1_f929()?(rcls1_f843()?T:rcls1_f937()):rcls1_f851()):NIL)))));}}
static double rcls1_f396(){if (rcls1_p396) return rcls1_m396; else {rcls1_p396=T;return rcls1_m396=(rcls1_f836()?(rcls1_f429()?(rcls1_f477()?((rcls1_v809=rcls1_f809()),(rcls1_v454=rcls1_f454()),((rcls1_v809>rcls1_v454)?rcls1_v809:rcls1_v454)):(rcls1_f439()?rcls1_f2303():(rcls1_f419()?rcls1_f809():rcls1_f792()))):rcls1_f2303()):(rcls1_f794()?rcls1_f2303():(rcls1_f429()?(rcls1_f477()?(rcls1_f415()?rcls1_f792():rcls1_f454()):(rcls1_f439()?rcls1_f2303():rcls1_f792())):rcls1_f2303())));}}
static double rcls1_f787(){if (rcls1_p787) return rcls1_m787; else {rcls1_p787=T;return rcls1_m787=(rcls1_f836()?rcls1_f809():(rcls1_f794()?rcls1_f2531():rcls1_f792()));}}
static double rcls1_f790(){if (rcls1_p790) return rcls1_m790; else {rcls1_p790=T;return rcls1_m790=(rcls1_f836()?rcls1_f809():(rcls1_f794()?rcls1_f2535():rcls1_f792()));}}
static int rcls1_f789(){if (rcls1_p789) return rcls1_m789; else {rcls1_p789=T;return rcls1_m789=(rcls1_f790()<(0.0));}}
static int rcls1_f782(){if (rcls1_p782) return rcls1_m782; else {rcls1_p782=T;return rcls1_m782=(rcls1_f836()?((rcls1_v789=rcls1_f789()),(rcls1_v789?rcls1_v789:(fabs((rcls1_f787()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f393(){if (rcls1_p393) return rcls1_m393; else {rcls1_p393=T;return rcls1_m393=((rcls1_f782()?(rcls1_f420()?rcls1_f396():rcls1_f790()):rcls1_f427())<(0.0));}}
static double rcls1_f6122(){if (rcls1_p6122) return rcls1_m6122; else {rcls1_p6122=T;return rcls1_m6122=((rcls1_v6127=rcls1_f6127()),sqrt(((rcls1_v6127*rcls1_v6127)+rcls1_f6124())));}}
static int rcls1_f2190(){if (rcls1_p2190) return rcls1_m2190; else {rcls1_p2190=T;return rcls1_m2190=(fabs((((fabs((rcls1_f2218()-(0.0)))<rcls1_v6508)?rcls1_f2898():((rcls1_v2203=rcls1_f2203()),(rcls1_v2197=rcls1_f2197()),sqrt(((rcls1_v2203*rcls1_v2203)+(rcls1_v2197*rcls1_v2197)))))-rcls1_f6122()))<rcls1_v6508);}}
static double rcls1_f186(){if (rcls1_p186) return rcls1_m186; else {rcls1_p186=T;return rcls1_m186=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f782()?(rcls1_f420()?((rcls1_v1860=rcls1_f1860()),(rcls1_v396=rcls1_f396()),((rcls1_v1860>rcls1_v396)?rcls1_v1860:rcls1_v396)):(rcls1_f836()?((rcls1_v1860=rcls1_f1860()),(rcls1_v809=rcls1_f809()),((rcls1_v1860>rcls1_v809)?rcls1_v1860:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f216()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v1860=rcls1_f1860()),(rcls1_v454=rcls1_f454()),((rcls1_v1860>rcls1_v454)?rcls1_v1860:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f216())):rcls1_f2303())):(rcls1_f2089()?(rcls1_f782()?(rcls1_f420()?((rcls1_v2103=rcls1_f2103()),(rcls1_v396=rcls1_f396()),((rcls1_v2103>rcls1_v396)?rcls1_v2103:rcls1_v396)):(rcls1_f836()?((rcls1_v2103=rcls1_f2103()),(rcls1_v809=rcls1_f809()),((rcls1_v2103>rcls1_v809)?rcls1_v2103:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f201()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2103=rcls1_f2103()),(rcls1_v454=rcls1_f454()),((rcls1_v2103>rcls1_v454)?rcls1_v2103:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f201())):rcls1_f2303())):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static double_or_symbol rcls1_f34(){if (rcls1_p34) return rcls1_m34; else {rcls1_p34=T;return rcls1_m34=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?((rcls1_v2081=rcls1_f2081()),(rcls1_v2081?(rcls1_f1861()?coerce_double_to_double_or_symbol(rcls1_f1860()):rcls1_f40()):(rcls1_v2081?rcls1_f40():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1499(){if (rcls1_p1499) return rcls1_m1499; else {rcls1_p1499=T;return rcls1_m1499=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1792()?rcls1_f2302():rcls1_f1860()):(rcls1_f2089()?(rcls1_f1790()?rcls1_f2302():rcls1_f2103()):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f1461(){if (rcls1_p1461) return rcls1_m1461; else {rcls1_p1461=T;return rcls1_m1461=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1747()?rcls1_f2781():rcls1_f1860()):(rcls1_f2089()?((rcls1_v2781=rcls1_f2781()),(rcls1_v2103=rcls1_f2103()),((rcls1_v2781>rcls1_v2103)?rcls1_v2781:rcls1_v2103)):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1783(){if (rcls1_p1783) return rcls1_m1783; else {rcls1_p1783=T;return rcls1_m1783=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1792()?rcls1_f2537():rcls1_f2089()):(rcls1_f2089()?(rcls1_f1790()?rcls1_f2537():T):NIL)):NIL):NIL):NIL):NIL);}}
static int rcls1_f1741(){if (rcls1_p1741) return rcls1_m1741; else {rcls1_p1741=T;return rcls1_m1741=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1747()?T:rcls1_f2089()):rcls1_f2089()):NIL):NIL):NIL):NIL);}}
static double rcls1_f1823(){if (rcls1_p1823) return rcls1_m1823; else {rcls1_p1823=T;return rcls1_m1823=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?rcls1_f1860():rcls1_f2086()):rcls1_f1866()):rcls1_f2531()):rcls1_f2531()):rcls1_f2531());}}
static double rcls1_f1855(){if (rcls1_p1855) return rcls1_m1855; else {rcls1_p1855=T;return rcls1_m1855=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?rcls1_f1860():rcls1_f2088()):rcls1_f1868()):rcls1_f2535()):rcls1_f2535()):rcls1_f2535());}}
static int rcls1_f2168(){if (rcls1_p2168) return rcls1_m2168; else {rcls1_p2168=T;return rcls1_m2168=((rcls1_v2190=rcls1_f2190()),(rcls1_v2190?((fabs((rcls1_f2186()-(0.0)))<rcls1_v6508)?NIL:((rcls1_v2179=rcls1_f2179()),((fabs((rcls1_v2179-(0.0)))<rcls1_v6508)?NIL:((rcls1_v2179>(0.0))?rcls1_f2174():(rcls1_f2174()?NIL:T))))):(rcls1_v2190?NIL:T)));}}
static int rcls1_f2076(){if (rcls1_p2076) return rcls1_m2076; else {rcls1_p2076=T;return rcls1_m2076=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?rcls1_f2089():rcls1_f2080()):NIL):NIL):NIL);}}
static double rcls1_f6089(){if (rcls1_p6089) return rcls1_m6089; else {rcls1_p6089=T;return rcls1_m6089=((rcls1_v6122=rcls1_f6122()),(rcls1_v6122*rcls1_v6122));}}
static double rcls1_f1976(){if (rcls1_p1976) return rcls1_m1976; else {rcls1_p1976=T;return rcls1_m1976=((rcls1_v1982=rcls1_f1982()),((rcls1_v1982*rcls1_v1982)-((4.0)*rcls1_f1980()*(rcls1_f2165()-(rcls1_f2225()*rcls1_f6089())))));}}
static int rcls1_f1975(){if (rcls1_p1975) return rcls1_m1975; else {rcls1_p1975=T;return rcls1_m1975=(rcls1_f1976()<0.0);}}
static double rcls1_f1970(){if (rcls1_p1970) return rcls1_m1970; else {rcls1_p1970=T;return rcls1_m1970=(sqrt(rcls1_f1976())/rcls1_f1973());}}
static double rcls1_f1954(){if (rcls1_p1954) return rcls1_m1954; else {rcls1_p1954=T;return rcls1_m1954=((rcls1_f1972()-rcls1_f1970())+rcls1_v6512);}}
static double rcls1_f1953(){if (rcls1_p1953) return rcls1_m1953; else {rcls1_p1953=T;return rcls1_m1953=(rcls1_f2221()*rcls1_f1954());}}
static double rcls1_f1951(){if (rcls1_p1951) return rcls1_m1951; else {rcls1_p1951=T;return rcls1_m1951=((rcls1_f2211()-rcls1_f1953())/rcls1_f2226());}}
static int rcls1_f1942(){if (rcls1_p1942) return rcls1_m1942; else {rcls1_p1942=T;return rcls1_m1942=((rcls1_v1951=rcls1_f1951()),((fabs((((rcls1_f2226()*rcls1_v1951)+rcls1_f1953())-rcls1_f2211()))<rcls1_v6508)?(((rcls1_f2124()<=rcls1_v1951)&&(rcls1_v1951<=rcls1_f2121()))?((rcls1_f2117()<=rcls1_f1954())&&(rcls1_f1954()<=rcls1_f2114())):NIL):NIL));}}
static double rcls1_f1910(){if (rcls1_p1910) return rcls1_m1910; else {rcls1_p1910=T;return rcls1_m1910=normalize_rotation((atan2((rcls1_f1954()-rcls1_v6512),(rcls1_f1951()-rcls1_v6514))-rcls1_f5872()));}}
static double rcls1_f93(){if (rcls1_p93) return rcls1_m93; else {rcls1_p93=T;return rcls1_m93=((rcls1_v1910=rcls1_f1910()),(rcls1_v792=rcls1_f792()),((rcls1_v1910>rcls1_v792)?rcls1_v1910:rcls1_v792));}}
static int rcls1_f1760(){if (rcls1_p1760) return rcls1_m1760; else {rcls1_p1760=T;return rcls1_m1760=(rcls1_f2302()>rcls1_f1910());}}
static double rcls1_f1909(){if (rcls1_p1909) return rcls1_m1909; else {rcls1_p1909=T;return rcls1_m1909=normalize_rotation(rcls1_f1910());}}
static int rcls1_f1897(){if (rcls1_p1897) return rcls1_m1897; else {rcls1_p1897=T;return rcls1_m1897=((rcls1_v1909=rcls1_f1909()),((fabs((rcls1_v1909-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v1909-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v1909-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f1896(){if (rcls1_p1896) return rcls1_m1896; else {rcls1_p1896=T;return rcls1_m1896=((rcls1_v1897=rcls1_f1897()),(rcls1_v1897?rcls1_v1897:rcls1_f2538()));}}
static double rcls1_f1893(){if (rcls1_p1893) return rcls1_m1893; else {rcls1_p1893=T;return rcls1_m1893=(rcls1_f1896()?rcls1_f1910():rcls1_f2531());}}
static double rcls1_f1895(){if (rcls1_p1895) return rcls1_m1895; else {rcls1_p1895=T;return rcls1_m1895=(rcls1_f1896()?rcls1_f1910():rcls1_f2535());}}
static int rcls1_f1894(){if (rcls1_p1894) return rcls1_m1894; else {rcls1_p1894=T;return rcls1_m1894=(rcls1_f1895()<(0.0));}}
static int rcls1_f1888(){if (rcls1_p1888) return rcls1_m1888; else {rcls1_p1888=T;return rcls1_m1888=(rcls1_f1896()?((rcls1_v1894=rcls1_f1894()),(rcls1_v1894?rcls1_v1894:(fabs((rcls1_f1893()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f82(){if (rcls1_p82) return rcls1_m82; else {rcls1_p82=T;return rcls1_m82=(rcls1_f1888()?(rcls1_f1896()?(rcls1_f782()?(rcls1_f420()?((rcls1_v1910=rcls1_f1910()),(rcls1_v396=rcls1_f396()),((rcls1_v1910>rcls1_v396)?rcls1_v1910:rcls1_v396)):(rcls1_f836()?((rcls1_v1910=rcls1_f1910()),(rcls1_v809=rcls1_f809()),((rcls1_v1910>rcls1_v809)?rcls1_v1910:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f93()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v1910=rcls1_f1910()),(rcls1_v454=rcls1_f454()),((rcls1_v1910>rcls1_v454)?rcls1_v1910:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f93())):rcls1_f2303())):rcls1_f2303()):rcls1_f2303());}}
static double_or_symbol rcls1_f20(){if (rcls1_p20) return rcls1_m20; else {rcls1_p20=T;return rcls1_m20=(rcls1_f1888()?(rcls1_f1896()?coerce_double_to_double_or_symbol(rcls1_f1910()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1479(){if (rcls1_p1479) return rcls1_m1479; else {rcls1_p1479=T;return rcls1_m1479=(rcls1_f1888()?(rcls1_f1896()?(rcls1_f1760()?rcls1_f2302():rcls1_f1910()):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f1437(){if (rcls1_p1437) return rcls1_m1437; else {rcls1_p1437=T;return rcls1_m1437=(rcls1_f1888()?(rcls1_f1896()?((rcls1_v2781=rcls1_f2781()),(rcls1_v1910=rcls1_f1910()),((rcls1_v2781>rcls1_v1910)?rcls1_v2781:rcls1_v1910)):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1757(){if (rcls1_p1757) return rcls1_m1757; else {rcls1_p1757=T;return rcls1_m1757=(rcls1_f1888()?(rcls1_f1896()?(rcls1_f1760()?rcls1_f2537():T):NIL):NIL);}}
static double rcls1_f1884(){if (rcls1_p1884) return rcls1_m1884; else {rcls1_p1884=T;return rcls1_m1884=(rcls1_f1888()?rcls1_f1893():rcls1_f2531());}}
static double rcls1_f1886(){if (rcls1_p1886) return rcls1_m1886; else {rcls1_p1886=T;return rcls1_m1886=(rcls1_f1888()?rcls1_f1895():rcls1_f2535());}}
static int rcls1_f1885(){if (rcls1_p1885) return rcls1_m1885; else {rcls1_p1885=T;return rcls1_m1885=(rcls1_f1886()<(0.0));}}
static int rcls1_f1887(){if (rcls1_p1887) return rcls1_m1887; else {rcls1_p1887=T;return rcls1_m1887=(rcls1_f1888()?rcls1_f1896():NIL);}}
static int rcls1_f1873(){if (rcls1_p1873) return rcls1_m1873; else {rcls1_p1873=T;return rcls1_m1873=(rcls1_f1942()?rcls1_f1887():NIL);}}
static int rcls1_f1879(){if (rcls1_p1879) return rcls1_m1879; else {rcls1_p1879=T;return rcls1_m1879=(rcls1_f1887()?((rcls1_v1885=rcls1_f1885()),(rcls1_v1885?rcls1_v1885:(fabs((rcls1_f1884()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f1968(){if (rcls1_p1968) return rcls1_m1968; else {rcls1_p1968=T;return rcls1_m1968=((rcls1_f1972()+rcls1_f1970())+rcls1_v6512);}}
static double rcls1_f1967(){if (rcls1_p1967) return rcls1_m1967; else {rcls1_p1967=T;return rcls1_m1967=(rcls1_f2221()*rcls1_f1968());}}
static double rcls1_f1965(){if (rcls1_p1965) return rcls1_m1965; else {rcls1_p1965=T;return rcls1_m1965=((rcls1_f2211()-rcls1_f1967())/rcls1_f2226());}}
static int rcls1_f1956(){if (rcls1_p1956) return rcls1_m1956; else {rcls1_p1956=T;return rcls1_m1956=((rcls1_v1965=rcls1_f1965()),((fabs((((rcls1_f2226()*rcls1_v1965)+rcls1_f1967())-rcls1_f2211()))<rcls1_v6508)?(((rcls1_f2124()<=rcls1_v1965)&&(rcls1_v1965<=rcls1_f2121()))?((rcls1_f2117()<=rcls1_f1968())&&(rcls1_f1968()<=rcls1_f2114())):NIL):NIL));}}
static double rcls1_f1937(){if (rcls1_p1937) return rcls1_m1937; else {rcls1_p1937=T;return rcls1_m1937=normalize_rotation((atan2((rcls1_f1968()-rcls1_v6512),(rcls1_f1965()-rcls1_v6514))-rcls1_f5872()));}}
static double rcls1_f110(){if (rcls1_p110) return rcls1_m110; else {rcls1_p110=T;return rcls1_m110=((rcls1_v1937=rcls1_f1937()),(rcls1_v792=rcls1_f792()),((rcls1_v1937>rcls1_v792)?rcls1_v1937:rcls1_v792));}}
static int rcls1_f1764(){if (rcls1_p1764) return rcls1_m1764; else {rcls1_p1764=T;return rcls1_m1764=(rcls1_f2302()>rcls1_f1937());}}
static double rcls1_f1936(){if (rcls1_p1936) return rcls1_m1936; else {rcls1_p1936=T;return rcls1_m1936=normalize_rotation(rcls1_f1937());}}
static int rcls1_f1924(){if (rcls1_p1924) return rcls1_m1924; else {rcls1_p1924=T;return rcls1_m1924=((rcls1_v1936=rcls1_f1936()),((fabs((rcls1_v1936-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v1936-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v1936-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f1923(){if (rcls1_p1923) return rcls1_m1923; else {rcls1_p1923=T;return rcls1_m1923=((rcls1_v1924=rcls1_f1924()),(rcls1_v1924?rcls1_v1924:rcls1_f2538()));}}
static double rcls1_f100(){if (rcls1_p100) return rcls1_m100; else {rcls1_p100=T;return rcls1_m100=(rcls1_f1923()?(rcls1_f782()?(rcls1_f420()?((rcls1_v1937=rcls1_f1937()),(rcls1_v396=rcls1_f396()),((rcls1_v1937>rcls1_v396)?rcls1_v1937:rcls1_v396)):(rcls1_f836()?((rcls1_v1937=rcls1_f1937()),(rcls1_v809=rcls1_f809()),((rcls1_v1937>rcls1_v809)?rcls1_v1937:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f110()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v1937=rcls1_f1937()),(rcls1_v454=rcls1_f454()),((rcls1_v1937>rcls1_v454)?rcls1_v1937:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f110())):rcls1_f2303())):rcls1_f2303());}}
static double_or_symbol rcls1_f23(){if (rcls1_p23) return rcls1_m23; else {rcls1_p23=T;return rcls1_m23=(rcls1_f1923()?coerce_double_to_double_or_symbol(rcls1_f1937()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1483(){if (rcls1_p1483) return rcls1_m1483; else {rcls1_p1483=T;return rcls1_m1483=(rcls1_f1923()?(rcls1_f1764()?rcls1_f2302():rcls1_f1937()):rcls1_f2303());}}
static double rcls1_f1442(){if (rcls1_p1442) return rcls1_m1442; else {rcls1_p1442=T;return rcls1_m1442=(rcls1_f1923()?((rcls1_v2781=rcls1_f2781()),(rcls1_v1937=rcls1_f1937()),((rcls1_v2781>rcls1_v1937)?rcls1_v2781:rcls1_v1937)):rcls1_f2303());}}
static int rcls1_f1762(){if (rcls1_p1762) return rcls1_m1762; else {rcls1_p1762=T;return rcls1_m1762=(rcls1_f1923()?(rcls1_f1764()?rcls1_f2537():T):NIL);}}
static double rcls1_f1838(){if (rcls1_p1838) return rcls1_m1838; else {rcls1_p1838=T;return rcls1_m1838=(rcls1_f1923()?(rcls1_f1888()?(rcls1_f1896()?((rcls1_v1937=rcls1_f1937()),(rcls1_v1910=rcls1_f1910()),((rcls1_v1937>rcls1_v1910)?rcls1_v1937:rcls1_v1910)):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f125(){if (rcls1_p125) return rcls1_m125; else {rcls1_p125=T;return rcls1_m125=((rcls1_v1838=rcls1_f1838()),(rcls1_v792=rcls1_f792()),((rcls1_v1838>rcls1_v792)?rcls1_v1838:rcls1_v792));}}
static int rcls1_f1766(){if (rcls1_p1766) return rcls1_m1766; else {rcls1_p1766=T;return rcls1_m1766=(rcls1_f2302()>rcls1_f1838());}}
static int rcls1_f1733(){if (rcls1_p1733) return rcls1_m1733; else {rcls1_p1733=T;return rcls1_m1733=(rcls1_f2781()>rcls1_f1838());}}
static int rcls1_f1878(){if (rcls1_p1878) return rcls1_m1878; else {rcls1_p1878=T;return rcls1_m1878=(rcls1_f1923()?rcls1_f1887():NIL);}}
static double rcls1_f1920(){if (rcls1_p1920) return rcls1_m1920; else {rcls1_p1920=T;return rcls1_m1920=(rcls1_f1923()?rcls1_f1937():rcls1_f2531());}}
static double rcls1_f1922(){if (rcls1_p1922) return rcls1_m1922; else {rcls1_p1922=T;return rcls1_m1922=(rcls1_f1923()?rcls1_f1937():rcls1_f2535());}}
static int rcls1_f1921(){if (rcls1_p1921) return rcls1_m1921; else {rcls1_p1921=T;return rcls1_m1921=(rcls1_f1922()<(0.0));}}
static int rcls1_f1915(){if (rcls1_p1915) return rcls1_m1915; else {rcls1_p1915=T;return rcls1_m1915=(rcls1_f1923()?((rcls1_v1921=rcls1_f1921()),(rcls1_v1921?rcls1_v1921:(fabs((rcls1_f1920()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f1875(){if (rcls1_p1875) return rcls1_m1875; else {rcls1_p1875=T;return rcls1_m1875=(rcls1_f1915()?rcls1_f1923():NIL);}}
static double rcls1_f2162(){if (rcls1_p2162) return rcls1_m2162; else {rcls1_p2162=T;return rcls1_m2162=(rcls1_f6089()-(rcls1_f2165()/rcls1_f2164()));}}
static int rcls1_f2161(){if (rcls1_p2161) return rcls1_m2161; else {rcls1_p2161=T;return rcls1_m2161=(rcls1_f2162()<0.0);}}
static double rcls1_f2075(){if (rcls1_p2075) return rcls1_m2075; else {rcls1_p2075=T;return rcls1_m2075=sqrt(rcls1_f2162());}}
static double rcls1_f2061(){if (rcls1_p2061) return rcls1_m2061; else {rcls1_p2061=T;return rcls1_m2061=((-rcls1_f2075())+rcls1_v6514);}}
static int rcls1_f2053(){if (rcls1_p2053) return rcls1_m2053; else {rcls1_p2053=T;return rcls1_m2053=((rcls1_v2061=rcls1_f2061()),((fabs((((rcls1_f2226()*rcls1_v2061)+rcls1_f2071())-rcls1_f2211()))<rcls1_v6508)?(((rcls1_f2124()<=rcls1_v2061)&&(rcls1_v2061<=rcls1_f2121()))?rcls1_f2065():NIL):NIL));}}
static double rcls1_f2022(){if (rcls1_p2022) return rcls1_m2022; else {rcls1_p2022=T;return rcls1_m2022=normalize_rotation((atan2(rcls1_f2052(),(rcls1_f2061()-rcls1_v6514))-rcls1_f5872()));}}
static double rcls1_f148(){if (rcls1_p148) return rcls1_m148; else {rcls1_p148=T;return rcls1_m148=((rcls1_v2022=rcls1_f2022()),(rcls1_v792=rcls1_f792()),((rcls1_v2022>rcls1_v792)?rcls1_v2022:rcls1_v792));}}
static int rcls1_f1776(){if (rcls1_p1776) return rcls1_m1776; else {rcls1_p1776=T;return rcls1_m1776=(rcls1_f2302()>rcls1_f2022());}}
static double rcls1_f2021(){if (rcls1_p2021) return rcls1_m2021; else {rcls1_p2021=T;return rcls1_m2021=normalize_rotation(rcls1_f2022());}}
static int rcls1_f2009(){if (rcls1_p2009) return rcls1_m2009; else {rcls1_p2009=T;return rcls1_m2009=((rcls1_v2021=rcls1_f2021()),((fabs((rcls1_v2021-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v2021-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v2021-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f2008(){if (rcls1_p2008) return rcls1_m2008; else {rcls1_p2008=T;return rcls1_m2008=((rcls1_v2009=rcls1_f2009()),(rcls1_v2009?rcls1_v2009:rcls1_f2538()));}}
static double rcls1_f2005(){if (rcls1_p2005) return rcls1_m2005; else {rcls1_p2005=T;return rcls1_m2005=(rcls1_f2008()?rcls1_f2022():rcls1_f2531());}}
static double rcls1_f2007(){if (rcls1_p2007) return rcls1_m2007; else {rcls1_p2007=T;return rcls1_m2007=(rcls1_f2008()?rcls1_f2022():rcls1_f2535());}}
static int rcls1_f2006(){if (rcls1_p2006) return rcls1_m2006; else {rcls1_p2006=T;return rcls1_m2006=(rcls1_f2007()<(0.0));}}
static int rcls1_f2000(){if (rcls1_p2000) return rcls1_m2000; else {rcls1_p2000=T;return rcls1_m2000=(rcls1_f2008()?((rcls1_v2006=rcls1_f2006()),(rcls1_v2006?rcls1_v2006:(fabs((rcls1_f2005()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f137(){if (rcls1_p137) return rcls1_m137; else {rcls1_p137=T;return rcls1_m137=(rcls1_f2000()?(rcls1_f2008()?(rcls1_f782()?(rcls1_f420()?((rcls1_v2022=rcls1_f2022()),(rcls1_v396=rcls1_f396()),((rcls1_v2022>rcls1_v396)?rcls1_v2022:rcls1_v396)):(rcls1_f836()?((rcls1_v2022=rcls1_f2022()),(rcls1_v809=rcls1_f809()),((rcls1_v2022>rcls1_v809)?rcls1_v2022:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f148()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2022=rcls1_f2022()),(rcls1_v454=rcls1_f454()),((rcls1_v2022>rcls1_v454)?rcls1_v2022:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f148())):rcls1_f2303())):rcls1_f2303()):rcls1_f2303());}}
static double_or_symbol rcls1_f30(){if (rcls1_p30) return rcls1_m30; else {rcls1_p30=T;return rcls1_m30=(rcls1_f2000()?(rcls1_f2008()?coerce_double_to_double_or_symbol(rcls1_f2022()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1492(){if (rcls1_p1492) return rcls1_m1492; else {rcls1_p1492=T;return rcls1_m1492=(rcls1_f2000()?(rcls1_f2008()?(rcls1_f1776()?rcls1_f2302():rcls1_f2022()):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f1452(){if (rcls1_p1452) return rcls1_m1452; else {rcls1_p1452=T;return rcls1_m1452=(rcls1_f2000()?(rcls1_f2008()?((rcls1_v2781=rcls1_f2781()),(rcls1_v2022=rcls1_f2022()),((rcls1_v2781>rcls1_v2022)?rcls1_v2781:rcls1_v2022)):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1773(){if (rcls1_p1773) return rcls1_m1773; else {rcls1_p1773=T;return rcls1_m1773=(rcls1_f2000()?(rcls1_f2008()?(rcls1_f1776()?rcls1_f2537():T):NIL):NIL);}}
static double rcls1_f1996(){if (rcls1_p1996) return rcls1_m1996; else {rcls1_p1996=T;return rcls1_m1996=(rcls1_f2000()?rcls1_f2005():rcls1_f2531());}}
static double rcls1_f1998(){if (rcls1_p1998) return rcls1_m1998; else {rcls1_p1998=T;return rcls1_m1998=(rcls1_f2000()?rcls1_f2007():rcls1_f2535());}}
static int rcls1_f1997(){if (rcls1_p1997) return rcls1_m1997; else {rcls1_p1997=T;return rcls1_m1997=(rcls1_f1998()<(0.0));}}
static int rcls1_f1999(){if (rcls1_p1999) return rcls1_m1999; else {rcls1_p1999=T;return rcls1_m1999=(rcls1_f2000()?rcls1_f2008():NIL);}}
static int rcls1_f1985(){if (rcls1_p1985) return rcls1_m1985; else {rcls1_p1985=T;return rcls1_m1985=(rcls1_f2053()?rcls1_f1999():NIL);}}
static int rcls1_f1991(){if (rcls1_p1991) return rcls1_m1991; else {rcls1_p1991=T;return rcls1_m1991=(rcls1_f1999()?((rcls1_v1997=rcls1_f1997()),(rcls1_v1997?rcls1_v1997:(fabs((rcls1_f1996()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f2074(){if (rcls1_p2074) return rcls1_m2074; else {rcls1_p2074=T;return rcls1_m2074=(rcls1_f2075()+rcls1_v6514);}}
static int rcls1_f2063(){if (rcls1_p2063) return rcls1_m2063; else {rcls1_p2063=T;return rcls1_m2063=((rcls1_v2074=rcls1_f2074()),((fabs((((rcls1_f2226()*rcls1_v2074)+rcls1_f2071())-rcls1_f2211()))<rcls1_v6508)?(((rcls1_f2124()<=rcls1_v2074)&&(rcls1_v2074<=rcls1_f2121()))?rcls1_f2065():NIL):NIL));}}
static double rcls1_f2048(){if (rcls1_p2048) return rcls1_m2048; else {rcls1_p2048=T;return rcls1_m2048=normalize_rotation((atan2(rcls1_f2052(),(rcls1_f2074()-rcls1_v6514))-rcls1_f5872()));}}
static double rcls1_f165(){if (rcls1_p165) return rcls1_m165; else {rcls1_p165=T;return rcls1_m165=((rcls1_v2048=rcls1_f2048()),(rcls1_v792=rcls1_f792()),((rcls1_v2048>rcls1_v792)?rcls1_v2048:rcls1_v792));}}
static int rcls1_f1780(){if (rcls1_p1780) return rcls1_m1780; else {rcls1_p1780=T;return rcls1_m1780=(rcls1_f2302()>rcls1_f2048());}}
static double rcls1_f2047(){if (rcls1_p2047) return rcls1_m2047; else {rcls1_p2047=T;return rcls1_m2047=normalize_rotation(rcls1_f2048());}}
static int rcls1_f2035(){if (rcls1_p2035) return rcls1_m2035; else {rcls1_p2035=T;return rcls1_m2035=((rcls1_v2047=rcls1_f2047()),((fabs((rcls1_v2047-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v2047-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v2047-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f2034(){if (rcls1_p2034) return rcls1_m2034; else {rcls1_p2034=T;return rcls1_m2034=((rcls1_v2035=rcls1_f2035()),(rcls1_v2035?rcls1_v2035:rcls1_f2538()));}}
static double rcls1_f155(){if (rcls1_p155) return rcls1_m155; else {rcls1_p155=T;return rcls1_m155=(rcls1_f2034()?(rcls1_f782()?(rcls1_f420()?((rcls1_v2048=rcls1_f2048()),(rcls1_v396=rcls1_f396()),((rcls1_v2048>rcls1_v396)?rcls1_v2048:rcls1_v396)):(rcls1_f836()?((rcls1_v2048=rcls1_f2048()),(rcls1_v809=rcls1_f809()),((rcls1_v2048>rcls1_v809)?rcls1_v2048:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f165()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2048=rcls1_f2048()),(rcls1_v454=rcls1_f454()),((rcls1_v2048>rcls1_v454)?rcls1_v2048:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f165())):rcls1_f2303())):rcls1_f2303());}}
static double_or_symbol rcls1_f33(){if (rcls1_p33) return rcls1_m33; else {rcls1_p33=T;return rcls1_m33=(rcls1_f2034()?coerce_double_to_double_or_symbol(rcls1_f2048()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1496(){if (rcls1_p1496) return rcls1_m1496; else {rcls1_p1496=T;return rcls1_m1496=(rcls1_f2034()?(rcls1_f1780()?rcls1_f2302():rcls1_f2048()):rcls1_f2303());}}
static double rcls1_f1457(){if (rcls1_p1457) return rcls1_m1457; else {rcls1_p1457=T;return rcls1_m1457=(rcls1_f2034()?((rcls1_v2781=rcls1_f2781()),(rcls1_v2048=rcls1_f2048()),((rcls1_v2781>rcls1_v2048)?rcls1_v2781:rcls1_v2048)):rcls1_f2303());}}
static int rcls1_f1778(){if (rcls1_p1778) return rcls1_m1778; else {rcls1_p1778=T;return rcls1_m1778=(rcls1_f2034()?(rcls1_f1780()?rcls1_f2537():T):NIL);}}
static double rcls1_f1850(){if (rcls1_p1850) return rcls1_m1850; else {rcls1_p1850=T;return rcls1_m1850=(rcls1_f2034()?(rcls1_f2000()?(rcls1_f2008()?((rcls1_v2048=rcls1_f2048()),(rcls1_v2022=rcls1_f2022()),((rcls1_v2048>rcls1_v2022)?rcls1_v2048:rcls1_v2022)):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f180(){if (rcls1_p180) return rcls1_m180; else {rcls1_p180=T;return rcls1_m180=((rcls1_v1850=rcls1_f1850()),(rcls1_v792=rcls1_f792()),((rcls1_v1850>rcls1_v792)?rcls1_v1850:rcls1_v792));}}
static int rcls1_f1782(){if (rcls1_p1782) return rcls1_m1782; else {rcls1_p1782=T;return rcls1_m1782=(rcls1_f2302()>rcls1_f1850());}}
static int rcls1_f1740(){if (rcls1_p1740) return rcls1_m1740; else {rcls1_p1740=T;return rcls1_m1740=(rcls1_f2781()>rcls1_f1850());}}
static int rcls1_f1990(){if (rcls1_p1990) return rcls1_m1990; else {rcls1_p1990=T;return rcls1_m1990=(rcls1_f2034()?rcls1_f1999():NIL);}}
static double rcls1_f2031(){if (rcls1_p2031) return rcls1_m2031; else {rcls1_p2031=T;return rcls1_m2031=(rcls1_f2034()?rcls1_f2048():rcls1_f2531());}}
static double rcls1_f2033(){if (rcls1_p2033) return rcls1_m2033; else {rcls1_p2033=T;return rcls1_m2033=(rcls1_f2034()?rcls1_f2048():rcls1_f2535());}}
static int rcls1_f2032(){if (rcls1_p2032) return rcls1_m2032; else {rcls1_p2032=T;return rcls1_m2032=(rcls1_f2033()<(0.0));}}
static int rcls1_f2026(){if (rcls1_p2026) return rcls1_m2026; else {rcls1_p2026=T;return rcls1_m2026=(rcls1_f2034()?((rcls1_v2032=rcls1_f2032()),(rcls1_v2032?rcls1_v2032:(fabs((rcls1_f2031()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f1807(){if (rcls1_p1807) return rcls1_m1807; else {rcls1_p1807=T;return rcls1_m1807=(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1823():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?rcls1_f1850():rcls1_f2031()):rcls1_f1996()):(rcls1_f2026()?rcls1_f2031():rcls1_f2531())):(rcls1_f2053()?rcls1_f1996():rcls1_f2531()))):(rcls1_f1975()?rcls1_f1823():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?rcls1_f1838():rcls1_f1920()):rcls1_f1884()):(rcls1_f1915()?rcls1_f1920():rcls1_f2531())):(rcls1_f1942()?rcls1_f1884():rcls1_f2531())))):rcls1_f2531());}}
static double rcls1_f1829(){if (rcls1_p1829) return rcls1_m1829; else {rcls1_p1829=T;return rcls1_m1829=(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1855():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?rcls1_f1850():rcls1_f2033()):rcls1_f1998()):(rcls1_f2026()?rcls1_f2033():rcls1_f2535())):(rcls1_f2053()?rcls1_f1998():rcls1_f2535()))):(rcls1_f1975()?rcls1_f1855():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?rcls1_f1838():rcls1_f1922()):rcls1_f1886()):(rcls1_f1915()?rcls1_f1922():rcls1_f2535())):(rcls1_f1942()?rcls1_f1886():rcls1_f2535())))):rcls1_f2535());}}
static int rcls1_f1828(){if (rcls1_p1828) return rcls1_m1828; else {rcls1_p1828=T;return rcls1_m1828=(rcls1_f1829()<(0.0));}}
static int rcls1_f1987(){if (rcls1_p1987) return rcls1_m1987; else {rcls1_p1987=T;return rcls1_m1987=(rcls1_f2026()?rcls1_f2034():NIL);}}
static int rcls1_f1869(){if (rcls1_p1869) return rcls1_m1869; else {rcls1_p1869=T;return rcls1_m1869=(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f2076():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?rcls1_f1990():rcls1_f2034()):rcls1_f1999()):rcls1_f1987()):rcls1_f1985())):(rcls1_f1975()?rcls1_f2076():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?rcls1_f1878():rcls1_f1923()):rcls1_f1887()):rcls1_f1875()):rcls1_f1873()))):NIL);}}
static int rcls1_f1802(){if (rcls1_p1802) return rcls1_m1802; else {rcls1_p1802=T;return rcls1_m1802=(rcls1_f1869()?((rcls1_v1828=rcls1_f1828()),(rcls1_v1828?rcls1_v1828:(fabs((rcls1_f1807()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f1801(){if (rcls1_p1801) return rcls1_m1801; else {rcls1_p1801=T;return rcls1_m1801=(rcls1_f1802()?rcls1_f1869():NIL);}}
static double rcls1_f1798(){if (rcls1_p1798) return rcls1_m1798; else {rcls1_p1798=T;return rcls1_m1798=(rcls1_f1802()?rcls1_f1807():rcls1_f2531());}}
static double rcls1_f1800(){if (rcls1_p1800) return rcls1_m1800; else {rcls1_p1800=T;return rcls1_m1800=(rcls1_f1802()?rcls1_f1829():rcls1_f2535());}}
static int rcls1_f1799(){if (rcls1_p1799) return rcls1_m1799; else {rcls1_p1799=T;return rcls1_m1799=(rcls1_f1800()<(0.0));}}
static int rcls1_f1793(){if (rcls1_p1793) return rcls1_m1793; else {rcls1_p1793=T;return rcls1_m1793=(rcls1_f1801()?((rcls1_v1799=rcls1_f1799()),(rcls1_v1799?rcls1_v1799:(fabs((rcls1_f1798()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f2420(){if (rcls1_p2420) return rcls1_m2420; else {rcls1_p2420=T;return rcls1_m2420=((rcls1_v2426=rcls1_f2426()),((rcls1_v2426*rcls1_v2426)-((4.0)*rcls1_f2424()*(rcls1_f2847()-(rcls1_f2910()*rcls1_f6089())))));}}
static int rcls1_f2419(){if (rcls1_p2419) return rcls1_m2419; else {rcls1_p2419=T;return rcls1_m2419=(rcls1_f2420()<0.0);}}
static double rcls1_f2414(){if (rcls1_p2414) return rcls1_m2414; else {rcls1_p2414=T;return rcls1_m2414=(sqrt(rcls1_f2420())/rcls1_f2417());}}
static double rcls1_f2398(){if (rcls1_p2398) return rcls1_m2398; else {rcls1_p2398=T;return rcls1_m2398=((rcls1_f2416()-rcls1_f2414())+rcls1_v6512);}}
static double rcls1_f2397(){if (rcls1_p2397) return rcls1_m2397; else {rcls1_p2397=T;return rcls1_m2397=(rcls1_f2906()*rcls1_f2398());}}
static double rcls1_f2395(){if (rcls1_p2395) return rcls1_m2395; else {rcls1_p2395=T;return rcls1_m2395=((rcls1_f2894()-rcls1_f2397())/rcls1_f2911());}}
static int rcls1_f2386(){if (rcls1_p2386) return rcls1_m2386; else {rcls1_p2386=T;return rcls1_m2386=((rcls1_v2395=rcls1_f2395()),((fabs((((rcls1_f2911()*rcls1_v2395)+rcls1_f2397())-rcls1_f2894()))<rcls1_v6508)?(((rcls1_f2806()<=rcls1_v2395)&&(rcls1_v2395<=rcls1_f2803()))?((rcls1_f2799()<=rcls1_f2398())&&(rcls1_f2398()<=rcls1_f2796())):NIL):NIL));}}
static double rcls1_f2354(){if (rcls1_p2354) return rcls1_m2354; else {rcls1_p2354=T;return rcls1_m2354=normalize_rotation((atan2((rcls1_f2398()-rcls1_v6512),(rcls1_f2395()-rcls1_v6514))-rcls1_f5872()));}}
static double rcls1_f242(){if (rcls1_p242) return rcls1_m242; else {rcls1_p242=T;return rcls1_m242=((rcls1_v2354=rcls1_f2354()),(rcls1_v792=rcls1_f792()),((rcls1_v2354>rcls1_v792)?rcls1_v2354:rcls1_v792));}}
static double rcls1_f1182(){if (rcls1_p1182) return rcls1_m1182; else {rcls1_p1182=T;return rcls1_m1182=(rcls1_f1923()?((rcls1_v2354=rcls1_f2354()),(rcls1_v1937=rcls1_f1937()),((rcls1_v2354>rcls1_v1937)?rcls1_v2354:rcls1_v1937)):rcls1_f2303());}}
static double rcls1_f1177(){if (rcls1_p1177) return rcls1_m1177; else {rcls1_p1177=T;return rcls1_m1177=(rcls1_f1888()?(rcls1_f1896()?((rcls1_v2354=rcls1_f2354()),(rcls1_v1910=rcls1_f1910()),((rcls1_v2354>rcls1_v1910)?rcls1_v2354:rcls1_v1910)):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f1197(){if (rcls1_p1197) return rcls1_m1197; else {rcls1_p1197=T;return rcls1_m1197=(rcls1_f2034()?((rcls1_v2354=rcls1_f2354()),(rcls1_v2048=rcls1_f2048()),((rcls1_v2354>rcls1_v2048)?rcls1_v2354:rcls1_v2048)):rcls1_f2303());}}
static double rcls1_f1192(){if (rcls1_p1192) return rcls1_m1192; else {rcls1_p1192=T;return rcls1_m1192=(rcls1_f2000()?(rcls1_f2008()?((rcls1_v2354=rcls1_f2354()),(rcls1_v2022=rcls1_f2022()),((rcls1_v2354>rcls1_v2022)?rcls1_v2354:rcls1_v2022)):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1529(){if (rcls1_p1529) return rcls1_m1529; else {rcls1_p1529=T;return rcls1_m1529=(rcls1_f2354()>rcls1_f1838());}}
static int rcls1_f1543(){if (rcls1_p1543) return rcls1_m1543; else {rcls1_p1543=T;return rcls1_m1543=(rcls1_f2354()>rcls1_f1860());}}
static double rcls1_f1201(){if (rcls1_p1201) return rcls1_m1201; else {rcls1_p1201=T;return rcls1_m1201=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1543()?rcls1_f2354():rcls1_f1860()):(rcls1_f2089()?((rcls1_v2354=rcls1_f2354()),(rcls1_v2103=rcls1_f2103()),((rcls1_v2354>rcls1_v2103)?rcls1_v2354:rcls1_v2103)):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1537(){if (rcls1_p1537) return rcls1_m1537; else {rcls1_p1537=T;return rcls1_m1537=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1543()?T:rcls1_f2089()):rcls1_f2089()):NIL):NIL):NIL):NIL);}}
static int rcls1_f1536(){if (rcls1_p1536) return rcls1_m1536; else {rcls1_p1536=T;return rcls1_m1536=(rcls1_f2354()>rcls1_f1850());}}
static double rcls1_f2353(){if (rcls1_p2353) return rcls1_m2353; else {rcls1_p2353=T;return rcls1_m2353=normalize_rotation(rcls1_f2354());}}
static int rcls1_f2341(){if (rcls1_p2341) return rcls1_m2341; else {rcls1_p2341=T;return rcls1_m2341=((rcls1_v2353=rcls1_f2353()),((fabs((rcls1_v2353-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v2353-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v2353-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f2340(){if (rcls1_p2340) return rcls1_m2340; else {rcls1_p2340=T;return rcls1_m2340=((rcls1_v2341=rcls1_f2341()),(rcls1_v2341?rcls1_v2341:rcls1_f2538()));}}
static double rcls1_f2337(){if (rcls1_p2337) return rcls1_m2337; else {rcls1_p2337=T;return rcls1_m2337=(rcls1_f2340()?rcls1_f2354():rcls1_f2531());}}
static double rcls1_f2339(){if (rcls1_p2339) return rcls1_m2339; else {rcls1_p2339=T;return rcls1_m2339=(rcls1_f2340()?rcls1_f2354():rcls1_f2535());}}
static int rcls1_f2338(){if (rcls1_p2338) return rcls1_m2338; else {rcls1_p2338=T;return rcls1_m2338=(rcls1_f2339()<(0.0));}}
static int rcls1_f2332(){if (rcls1_p2332) return rcls1_m2332; else {rcls1_p2332=T;return rcls1_m2332=(rcls1_f2340()?((rcls1_v2338=rcls1_f2338()),(rcls1_v2338?rcls1_v2338:(fabs((rcls1_f2337()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f231(){if (rcls1_p231) return rcls1_m231; else {rcls1_p231=T;return rcls1_m231=(rcls1_f2332()?(rcls1_f2340()?(rcls1_f782()?(rcls1_f420()?((rcls1_v2354=rcls1_f2354()),(rcls1_v396=rcls1_f396()),((rcls1_v2354>rcls1_v396)?rcls1_v2354:rcls1_v396)):(rcls1_f836()?((rcls1_v2354=rcls1_f2354()),(rcls1_v809=rcls1_f809()),((rcls1_v2354>rcls1_v809)?rcls1_v2354:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f242()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2354=rcls1_f2354()),(rcls1_v454=rcls1_f454()),((rcls1_v2354>rcls1_v454)?rcls1_v2354:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f242())):rcls1_f2303())):rcls1_f2303()):rcls1_f2303());}}
static double_or_symbol rcls1_f50(){if (rcls1_p50) return rcls1_m50; else {rcls1_p50=T;return rcls1_m50=(rcls1_f2332()?(rcls1_f2340()?coerce_double_to_double_or_symbol(rcls1_f2354()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1166(){if (rcls1_p1166) return rcls1_m1166; else {rcls1_p1166=T;return rcls1_m1166=(rcls1_f2332()?(rcls1_f2340()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1201():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1536()?rcls1_f2354():rcls1_f1850()):rcls1_f1197()):rcls1_f1192()):(rcls1_f2026()?rcls1_f1197():rcls1_f2303())):(rcls1_f2053()?rcls1_f1192():rcls1_f2303()))):(rcls1_f1975()?rcls1_f1201():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1529()?rcls1_f2354():rcls1_f1838()):rcls1_f1182()):rcls1_f1177()):(rcls1_f1915()?rcls1_f1182():rcls1_f2303())):(rcls1_f1942()?rcls1_f1177():rcls1_f2303())))):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1518(){if (rcls1_p1518) return rcls1_m1518; else {rcls1_p1518=T;return rcls1_m1518=(rcls1_f2332()?(rcls1_f2340()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1537():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1536()?T:rcls1_f1990()):rcls1_f2034()):rcls1_f1999()):rcls1_f1987()):rcls1_f1985())):(rcls1_f1975()?rcls1_f1537():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1529()?T:rcls1_f1878()):rcls1_f1923()):rcls1_f1887()):rcls1_f1875()):rcls1_f1873()))):NIL):NIL):NIL):NIL);}}
static double rcls1_f2328(){if (rcls1_p2328) return rcls1_m2328; else {rcls1_p2328=T;return rcls1_m2328=(rcls1_f2332()?rcls1_f2337():rcls1_f2531());}}
static double rcls1_f2330(){if (rcls1_p2330) return rcls1_m2330; else {rcls1_p2330=T;return rcls1_m2330=(rcls1_f2332()?rcls1_f2339():rcls1_f2535());}}
static int rcls1_f2329(){if (rcls1_p2329) return rcls1_m2329; else {rcls1_p2329=T;return rcls1_m2329=(rcls1_f2330()<(0.0));}}
static int rcls1_f2331(){if (rcls1_p2331) return rcls1_m2331; else {rcls1_p2331=T;return rcls1_m2331=(rcls1_f2332()?rcls1_f2340():NIL);}}
static int rcls1_f2323(){if (rcls1_p2323) return rcls1_m2323; else {rcls1_p2323=T;return rcls1_m2323=(rcls1_f2331()?((rcls1_v2329=rcls1_f2329()),(rcls1_v2329?rcls1_v2329:(fabs((rcls1_f2328()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f2412(){if (rcls1_p2412) return rcls1_m2412; else {rcls1_p2412=T;return rcls1_m2412=((rcls1_f2416()+rcls1_f2414())+rcls1_v6512);}}
static double rcls1_f2411(){if (rcls1_p2411) return rcls1_m2411; else {rcls1_p2411=T;return rcls1_m2411=(rcls1_f2906()*rcls1_f2412());}}
static double rcls1_f2409(){if (rcls1_p2409) return rcls1_m2409; else {rcls1_p2409=T;return rcls1_m2409=((rcls1_f2894()-rcls1_f2411())/rcls1_f2911());}}
static int rcls1_f2400(){if (rcls1_p2400) return rcls1_m2400; else {rcls1_p2400=T;return rcls1_m2400=((rcls1_v2409=rcls1_f2409()),((fabs((((rcls1_f2911()*rcls1_v2409)+rcls1_f2411())-rcls1_f2894()))<rcls1_v6508)?(((rcls1_f2806()<=rcls1_v2409)&&(rcls1_v2409<=rcls1_f2803()))?((rcls1_f2799()<=rcls1_f2412())&&(rcls1_f2412()<=rcls1_f2796())):NIL):NIL));}}
static double rcls1_f2381(){if (rcls1_p2381) return rcls1_m2381; else {rcls1_p2381=T;return rcls1_m2381=normalize_rotation((atan2((rcls1_f2412()-rcls1_v6512),(rcls1_f2409()-rcls1_v6514))-rcls1_f5872()));}}
static double rcls1_f259(){if (rcls1_p259) return rcls1_m259; else {rcls1_p259=T;return rcls1_m259=((rcls1_v2381=rcls1_f2381()),(rcls1_v792=rcls1_f792()),((rcls1_v2381>rcls1_v792)?rcls1_v2381:rcls1_v792));}}
static double rcls1_f1226(){if (rcls1_p1226) return rcls1_m1226; else {rcls1_p1226=T;return rcls1_m1226=(rcls1_f1923()?((rcls1_v2381=rcls1_f2381()),(rcls1_v1937=rcls1_f1937()),((rcls1_v2381>rcls1_v1937)?rcls1_v2381:rcls1_v1937)):rcls1_f2303());}}
static double rcls1_f1221(){if (rcls1_p1221) return rcls1_m1221; else {rcls1_p1221=T;return rcls1_m1221=(rcls1_f1888()?(rcls1_f1896()?((rcls1_v2381=rcls1_f2381()),(rcls1_v1910=rcls1_f1910()),((rcls1_v2381>rcls1_v1910)?rcls1_v2381:rcls1_v1910)):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f1241(){if (rcls1_p1241) return rcls1_m1241; else {rcls1_p1241=T;return rcls1_m1241=(rcls1_f2034()?((rcls1_v2381=rcls1_f2381()),(rcls1_v2048=rcls1_f2048()),((rcls1_v2381>rcls1_v2048)?rcls1_v2381:rcls1_v2048)):rcls1_f2303());}}
static double rcls1_f1236(){if (rcls1_p1236) return rcls1_m1236; else {rcls1_p1236=T;return rcls1_m1236=(rcls1_f2000()?(rcls1_f2008()?((rcls1_v2381=rcls1_f2381()),(rcls1_v2022=rcls1_f2022()),((rcls1_v2381>rcls1_v2022)?rcls1_v2381:rcls1_v2022)):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1555(){if (rcls1_p1555) return rcls1_m1555; else {rcls1_p1555=T;return rcls1_m1555=(rcls1_f2381()>rcls1_f1838());}}
static int rcls1_f1569(){if (rcls1_p1569) return rcls1_m1569; else {rcls1_p1569=T;return rcls1_m1569=(rcls1_f2381()>rcls1_f1860());}}
static double rcls1_f1245(){if (rcls1_p1245) return rcls1_m1245; else {rcls1_p1245=T;return rcls1_m1245=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1569()?rcls1_f2381():rcls1_f1860()):(rcls1_f2089()?((rcls1_v2381=rcls1_f2381()),(rcls1_v2103=rcls1_f2103()),((rcls1_v2381>rcls1_v2103)?rcls1_v2381:rcls1_v2103)):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1563(){if (rcls1_p1563) return rcls1_m1563; else {rcls1_p1563=T;return rcls1_m1563=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1569()?T:rcls1_f2089()):rcls1_f2089()):NIL):NIL):NIL):NIL);}}
static int rcls1_f1562(){if (rcls1_p1562) return rcls1_m1562; else {rcls1_p1562=T;return rcls1_m1562=(rcls1_f2381()>rcls1_f1850());}}
static double rcls1_f2380(){if (rcls1_p2380) return rcls1_m2380; else {rcls1_p2380=T;return rcls1_m2380=normalize_rotation(rcls1_f2381());}}
static int rcls1_f2368(){if (rcls1_p2368) return rcls1_m2368; else {rcls1_p2368=T;return rcls1_m2368=((rcls1_v2380=rcls1_f2380()),((fabs((rcls1_v2380-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v2380-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v2380-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f2367(){if (rcls1_p2367) return rcls1_m2367; else {rcls1_p2367=T;return rcls1_m2367=((rcls1_v2368=rcls1_f2368()),(rcls1_v2368?rcls1_v2368:rcls1_f2538()));}}
static double rcls1_f249(){if (rcls1_p249) return rcls1_m249; else {rcls1_p249=T;return rcls1_m249=(rcls1_f2367()?(rcls1_f782()?(rcls1_f420()?((rcls1_v2381=rcls1_f2381()),(rcls1_v396=rcls1_f396()),((rcls1_v2381>rcls1_v396)?rcls1_v2381:rcls1_v396)):(rcls1_f836()?((rcls1_v2381=rcls1_f2381()),(rcls1_v809=rcls1_f809()),((rcls1_v2381>rcls1_v809)?rcls1_v2381:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f259()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2381=rcls1_f2381()),(rcls1_v454=rcls1_f454()),((rcls1_v2381>rcls1_v454)?rcls1_v2381:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f259())):rcls1_f2303())):rcls1_f2303());}}
static double_or_symbol rcls1_f53(){if (rcls1_p53) return rcls1_m53; else {rcls1_p53=T;return rcls1_m53=(rcls1_f2367()?coerce_double_to_double_or_symbol(rcls1_f2381()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1211(){if (rcls1_p1211) return rcls1_m1211; else {rcls1_p1211=T;return rcls1_m1211=(rcls1_f2367()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1245():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1562()?rcls1_f2381():rcls1_f1850()):rcls1_f1241()):rcls1_f1236()):(rcls1_f2026()?rcls1_f1241():rcls1_f2303())):(rcls1_f2053()?rcls1_f1236():rcls1_f2303()))):(rcls1_f1975()?rcls1_f1245():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1555()?rcls1_f2381():rcls1_f1838()):rcls1_f1226()):rcls1_f1221()):(rcls1_f1915()?rcls1_f1226():rcls1_f2303())):(rcls1_f1942()?rcls1_f1221():rcls1_f2303())))):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1545(){if (rcls1_p1545) return rcls1_m1545; else {rcls1_p1545=T;return rcls1_m1545=(rcls1_f2367()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1563():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1562()?T:rcls1_f1990()):rcls1_f2034()):rcls1_f1999()):rcls1_f1987()):rcls1_f1985())):(rcls1_f1975()?rcls1_f1563():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1555()?T:rcls1_f1878()):rcls1_f1923()):rcls1_f1887()):rcls1_f1875()):rcls1_f1873()))):NIL):NIL):NIL);}}
static double rcls1_f2280(){if (rcls1_p2280) return rcls1_m2280; else {rcls1_p2280=T;return rcls1_m2280=(rcls1_f2367()?(rcls1_f2332()?(rcls1_f2340()?((rcls1_v2381=rcls1_f2381()),(rcls1_v2354=rcls1_f2354()),((rcls1_v2381>rcls1_v2354)?rcls1_v2381:rcls1_v2354)):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f274(){if (rcls1_p274) return rcls1_m274; else {rcls1_p274=T;return rcls1_m274=((rcls1_v2280=rcls1_f2280()),(rcls1_v792=rcls1_f792()),((rcls1_v2280>rcls1_v792)?rcls1_v2280:rcls1_v792));}}
static int rcls1_f1588(){if (rcls1_p1588) return rcls1_m1588; else {rcls1_p1588=T;return rcls1_m1588=(rcls1_f2280()>rcls1_f1838());}}
static int rcls1_f1586(){if (rcls1_p1586) return rcls1_m1586; else {rcls1_p1586=T;return rcls1_m1586=(rcls1_f2280()>rcls1_f1937());}}
static double rcls1_f1267(){if (rcls1_p1267) return rcls1_m1267; else {rcls1_p1267=T;return rcls1_m1267=(rcls1_f1923()?(rcls1_f1586()?rcls1_f2280():rcls1_f1937()):rcls1_f2303());}}
static int rcls1_f1582(){if (rcls1_p1582) return rcls1_m1582; else {rcls1_p1582=T;return rcls1_m1582=(rcls1_f2280()>rcls1_f1910());}}
static double rcls1_f1263(){if (rcls1_p1263) return rcls1_m1263; else {rcls1_p1263=T;return rcls1_m1263=(rcls1_f1888()?(rcls1_f1896()?(rcls1_f1582()?rcls1_f2280():rcls1_f1910()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1614(){if (rcls1_p1614) return rcls1_m1614; else {rcls1_p1614=T;return rcls1_m1614=(rcls1_f2280()>rcls1_f1860());}}
static int rcls1_f1612(){if (rcls1_p1612) return rcls1_m1612; else {rcls1_p1612=T;return rcls1_m1612=(rcls1_f2280()>rcls1_f2103());}}
static double rcls1_f1283(){if (rcls1_p1283) return rcls1_m1283; else {rcls1_p1283=T;return rcls1_m1283=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1614()?rcls1_f2280():rcls1_f1860()):(rcls1_f2089()?(rcls1_f1612()?rcls1_f2280():rcls1_f2103()):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1604(){if (rcls1_p1604) return rcls1_m1604; else {rcls1_p1604=T;return rcls1_m1604=(rcls1_f2280()>rcls1_f1850());}}
static int rcls1_f1602(){if (rcls1_p1602) return rcls1_m1602; else {rcls1_p1602=T;return rcls1_m1602=(rcls1_f2280()>rcls1_f2048());}}
static double rcls1_f1280(){if (rcls1_p1280) return rcls1_m1280; else {rcls1_p1280=T;return rcls1_m1280=(rcls1_f2034()?(rcls1_f1602()?rcls1_f2280():rcls1_f2048()):rcls1_f2303());}}
static int rcls1_f1598(){if (rcls1_p1598) return rcls1_m1598; else {rcls1_p1598=T;return rcls1_m1598=(rcls1_f2280()>rcls1_f2022());}}
static double rcls1_f1276(){if (rcls1_p1276) return rcls1_m1276; else {rcls1_p1276=T;return rcls1_m1276=(rcls1_f2000()?(rcls1_f2008()?(rcls1_f1598()?rcls1_f2280():rcls1_f2022()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f2322(){if (rcls1_p2322) return rcls1_m2322; else {rcls1_p2322=T;return rcls1_m2322=(rcls1_f2367()?rcls1_f2331():NIL);}}
static int rcls1_f1584(){if (rcls1_p1584) return rcls1_m1584; else {rcls1_p1584=T;return rcls1_m1584=(rcls1_f1923()?(rcls1_f1586()?rcls1_f2322():T):NIL);}}
static int rcls1_f1579(){if (rcls1_p1579) return rcls1_m1579; else {rcls1_p1579=T;return rcls1_m1579=(rcls1_f1888()?(rcls1_f1896()?(rcls1_f1582()?rcls1_f2322():T):NIL):NIL);}}
static int rcls1_f1605(){if (rcls1_p1605) return rcls1_m1605; else {rcls1_p1605=T;return rcls1_m1605=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1614()?rcls1_f2322():rcls1_f2089()):(rcls1_f2089()?(rcls1_f1612()?rcls1_f2322():T):NIL)):NIL):NIL):NIL):NIL);}}
static int rcls1_f1600(){if (rcls1_p1600) return rcls1_m1600; else {rcls1_p1600=T;return rcls1_m1600=(rcls1_f2034()?(rcls1_f1602()?rcls1_f2322():T):NIL);}}
static int rcls1_f1595(){if (rcls1_p1595) return rcls1_m1595; else {rcls1_p1595=T;return rcls1_m1595=(rcls1_f2000()?(rcls1_f2008()?(rcls1_f1598()?rcls1_f2322():T):NIL):NIL);}}
static double rcls1_f2364(){if (rcls1_p2364) return rcls1_m2364; else {rcls1_p2364=T;return rcls1_m2364=(rcls1_f2367()?rcls1_f2381():rcls1_f2531());}}
static double rcls1_f2366(){if (rcls1_p2366) return rcls1_m2366; else {rcls1_p2366=T;return rcls1_m2366=(rcls1_f2367()?rcls1_f2381():rcls1_f2535());}}
static int rcls1_f2365(){if (rcls1_p2365) return rcls1_m2365; else {rcls1_p2365=T;return rcls1_m2365=(rcls1_f2366()<(0.0));}}
static int rcls1_f2359(){if (rcls1_p2359) return rcls1_m2359; else {rcls1_p2359=T;return rcls1_m2359=(rcls1_f2367()?((rcls1_v2365=rcls1_f2365()),(rcls1_v2365?rcls1_v2365:(fabs((rcls1_f2364()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f2844(){if (rcls1_p2844) return rcls1_m2844; else {rcls1_p2844=T;return rcls1_m2844=(rcls1_f6089()-(rcls1_f2847()/rcls1_f2846()));}}
static int rcls1_f2843(){if (rcls1_p2843) return rcls1_m2843; else {rcls1_p2843=T;return rcls1_m2843=(rcls1_f2844()<0.0);}}
static double rcls1_f2519(){if (rcls1_p2519) return rcls1_m2519; else {rcls1_p2519=T;return rcls1_m2519=sqrt(rcls1_f2844());}}
static double rcls1_f2505(){if (rcls1_p2505) return rcls1_m2505; else {rcls1_p2505=T;return rcls1_m2505=((-rcls1_f2519())+rcls1_v6514);}}
static int rcls1_f2497(){if (rcls1_p2497) return rcls1_m2497; else {rcls1_p2497=T;return rcls1_m2497=((rcls1_v2505=rcls1_f2505()),((fabs((((rcls1_f2911()*rcls1_v2505)+rcls1_f2515())-rcls1_f2894()))<rcls1_v6508)?(((rcls1_f2806()<=rcls1_v2505)&&(rcls1_v2505<=rcls1_f2803()))?rcls1_f2509():NIL):NIL));}}
static double rcls1_f2466(){if (rcls1_p2466) return rcls1_m2466; else {rcls1_p2466=T;return rcls1_m2466=normalize_rotation((atan2(rcls1_f2496(),(rcls1_f2505()-rcls1_v6514))-rcls1_f5872()));}}
static double rcls1_f297(){if (rcls1_p297) return rcls1_m297; else {rcls1_p297=T;return rcls1_m297=((rcls1_v2466=rcls1_f2466()),(rcls1_v792=rcls1_f792()),((rcls1_v2466>rcls1_v792)?rcls1_v2466:rcls1_v792));}}
static double rcls1_f1313(){if (rcls1_p1313) return rcls1_m1313; else {rcls1_p1313=T;return rcls1_m1313=(rcls1_f1923()?((rcls1_v2466=rcls1_f2466()),(rcls1_v1937=rcls1_f1937()),((rcls1_v2466>rcls1_v1937)?rcls1_v2466:rcls1_v1937)):rcls1_f2303());}}
static double rcls1_f1308(){if (rcls1_p1308) return rcls1_m1308; else {rcls1_p1308=T;return rcls1_m1308=(rcls1_f1888()?(rcls1_f1896()?((rcls1_v2466=rcls1_f2466()),(rcls1_v1910=rcls1_f1910()),((rcls1_v2466>rcls1_v1910)?rcls1_v2466:rcls1_v1910)):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f1328(){if (rcls1_p1328) return rcls1_m1328; else {rcls1_p1328=T;return rcls1_m1328=(rcls1_f2034()?((rcls1_v2466=rcls1_f2466()),(rcls1_v2048=rcls1_f2048()),((rcls1_v2466>rcls1_v2048)?rcls1_v2466:rcls1_v2048)):rcls1_f2303());}}
static double rcls1_f1323(){if (rcls1_p1323) return rcls1_m1323; else {rcls1_p1323=T;return rcls1_m1323=(rcls1_f2000()?(rcls1_f2008()?((rcls1_v2466=rcls1_f2466()),(rcls1_v2022=rcls1_f2022()),((rcls1_v2466>rcls1_v2022)?rcls1_v2466:rcls1_v2022)):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1632(){if (rcls1_p1632) return rcls1_m1632; else {rcls1_p1632=T;return rcls1_m1632=(rcls1_f2466()>rcls1_f1838());}}
static int rcls1_f1646(){if (rcls1_p1646) return rcls1_m1646; else {rcls1_p1646=T;return rcls1_m1646=(rcls1_f2466()>rcls1_f1860());}}
static double rcls1_f1332(){if (rcls1_p1332) return rcls1_m1332; else {rcls1_p1332=T;return rcls1_m1332=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1646()?rcls1_f2466():rcls1_f1860()):(rcls1_f2089()?((rcls1_v2466=rcls1_f2466()),(rcls1_v2103=rcls1_f2103()),((rcls1_v2466>rcls1_v2103)?rcls1_v2466:rcls1_v2103)):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1640(){if (rcls1_p1640) return rcls1_m1640; else {rcls1_p1640=T;return rcls1_m1640=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1646()?T:rcls1_f2089()):rcls1_f2089()):NIL):NIL):NIL):NIL);}}
static int rcls1_f1639(){if (rcls1_p1639) return rcls1_m1639; else {rcls1_p1639=T;return rcls1_m1639=(rcls1_f2466()>rcls1_f1850());}}
static double rcls1_f2465(){if (rcls1_p2465) return rcls1_m2465; else {rcls1_p2465=T;return rcls1_m2465=normalize_rotation(rcls1_f2466());}}
static int rcls1_f2453(){if (rcls1_p2453) return rcls1_m2453; else {rcls1_p2453=T;return rcls1_m2453=((rcls1_v2465=rcls1_f2465()),((fabs((rcls1_v2465-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v2465-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v2465-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f2452(){if (rcls1_p2452) return rcls1_m2452; else {rcls1_p2452=T;return rcls1_m2452=((rcls1_v2453=rcls1_f2453()),(rcls1_v2453?rcls1_v2453:rcls1_f2538()));}}
static double rcls1_f2449(){if (rcls1_p2449) return rcls1_m2449; else {rcls1_p2449=T;return rcls1_m2449=(rcls1_f2452()?rcls1_f2466():rcls1_f2531());}}
static double rcls1_f2451(){if (rcls1_p2451) return rcls1_m2451; else {rcls1_p2451=T;return rcls1_m2451=(rcls1_f2452()?rcls1_f2466():rcls1_f2535());}}
static int rcls1_f2450(){if (rcls1_p2450) return rcls1_m2450; else {rcls1_p2450=T;return rcls1_m2450=(rcls1_f2451()<(0.0));}}
static int rcls1_f2444(){if (rcls1_p2444) return rcls1_m2444; else {rcls1_p2444=T;return rcls1_m2444=(rcls1_f2452()?((rcls1_v2450=rcls1_f2450()),(rcls1_v2450?rcls1_v2450:(fabs((rcls1_f2449()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f286(){if (rcls1_p286) return rcls1_m286; else {rcls1_p286=T;return rcls1_m286=(rcls1_f2444()?(rcls1_f2452()?(rcls1_f782()?(rcls1_f420()?((rcls1_v2466=rcls1_f2466()),(rcls1_v396=rcls1_f396()),((rcls1_v2466>rcls1_v396)?rcls1_v2466:rcls1_v396)):(rcls1_f836()?((rcls1_v2466=rcls1_f2466()),(rcls1_v809=rcls1_f809()),((rcls1_v2466>rcls1_v809)?rcls1_v2466:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f297()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2466=rcls1_f2466()),(rcls1_v454=rcls1_f454()),((rcls1_v2466>rcls1_v454)?rcls1_v2466:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f297())):rcls1_f2303())):rcls1_f2303()):rcls1_f2303());}}
static double_or_symbol rcls1_f60(){if (rcls1_p60) return rcls1_m60; else {rcls1_p60=T;return rcls1_m60=(rcls1_f2444()?(rcls1_f2452()?coerce_double_to_double_or_symbol(rcls1_f2466()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1297(){if (rcls1_p1297) return rcls1_m1297; else {rcls1_p1297=T;return rcls1_m1297=(rcls1_f2444()?(rcls1_f2452()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1332():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1639()?rcls1_f2466():rcls1_f1850()):rcls1_f1328()):rcls1_f1323()):(rcls1_f2026()?rcls1_f1328():rcls1_f2303())):(rcls1_f2053()?rcls1_f1323():rcls1_f2303()))):(rcls1_f1975()?rcls1_f1332():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1632()?rcls1_f2466():rcls1_f1838()):rcls1_f1313()):rcls1_f1308()):(rcls1_f1915()?rcls1_f1313():rcls1_f2303())):(rcls1_f1942()?rcls1_f1308():rcls1_f2303())))):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1621(){if (rcls1_p1621) return rcls1_m1621; else {rcls1_p1621=T;return rcls1_m1621=(rcls1_f2444()?(rcls1_f2452()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1640():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1639()?T:rcls1_f1990()):rcls1_f2034()):rcls1_f1999()):rcls1_f1987()):rcls1_f1985())):(rcls1_f1975()?rcls1_f1640():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1632()?T:rcls1_f1878()):rcls1_f1923()):rcls1_f1887()):rcls1_f1875()):rcls1_f1873()))):NIL):NIL):NIL):NIL);}}
static double rcls1_f2440(){if (rcls1_p2440) return rcls1_m2440; else {rcls1_p2440=T;return rcls1_m2440=(rcls1_f2444()?rcls1_f2449():rcls1_f2531());}}
static double rcls1_f2442(){if (rcls1_p2442) return rcls1_m2442; else {rcls1_p2442=T;return rcls1_m2442=(rcls1_f2444()?rcls1_f2451():rcls1_f2535());}}
static int rcls1_f2441(){if (rcls1_p2441) return rcls1_m2441; else {rcls1_p2441=T;return rcls1_m2441=(rcls1_f2442()<(0.0));}}
static int rcls1_f2443(){if (rcls1_p2443) return rcls1_m2443; else {rcls1_p2443=T;return rcls1_m2443=(rcls1_f2444()?rcls1_f2452():NIL);}}
static int rcls1_f2435(){if (rcls1_p2435) return rcls1_m2435; else {rcls1_p2435=T;return rcls1_m2435=(rcls1_f2443()?((rcls1_v2441=rcls1_f2441()),(rcls1_v2441?rcls1_v2441:(fabs((rcls1_f2440()-(0.0)))<rcls1_v6508))):NIL);}}
static double rcls1_f2518(){if (rcls1_p2518) return rcls1_m2518; else {rcls1_p2518=T;return rcls1_m2518=(rcls1_f2519()+rcls1_v6514);}}
static int rcls1_f2507(){if (rcls1_p2507) return rcls1_m2507; else {rcls1_p2507=T;return rcls1_m2507=((rcls1_v2518=rcls1_f2518()),((fabs((((rcls1_f2911()*rcls1_v2518)+rcls1_f2515())-rcls1_f2894()))<rcls1_v6508)?(((rcls1_f2806()<=rcls1_v2518)&&(rcls1_v2518<=rcls1_f2803()))?rcls1_f2509():NIL):NIL));}}
static double rcls1_f2492(){if (rcls1_p2492) return rcls1_m2492; else {rcls1_p2492=T;return rcls1_m2492=normalize_rotation((atan2(rcls1_f2496(),(rcls1_f2518()-rcls1_v6514))-rcls1_f5872()));}}
static double rcls1_f314(){if (rcls1_p314) return rcls1_m314; else {rcls1_p314=T;return rcls1_m314=((rcls1_v2492=rcls1_f2492()),(rcls1_v792=rcls1_f792()),((rcls1_v2492>rcls1_v792)?rcls1_v2492:rcls1_v792));}}
static double rcls1_f1357(){if (rcls1_p1357) return rcls1_m1357; else {rcls1_p1357=T;return rcls1_m1357=(rcls1_f1923()?((rcls1_v2492=rcls1_f2492()),(rcls1_v1937=rcls1_f1937()),((rcls1_v2492>rcls1_v1937)?rcls1_v2492:rcls1_v1937)):rcls1_f2303());}}
static double rcls1_f1352(){if (rcls1_p1352) return rcls1_m1352; else {rcls1_p1352=T;return rcls1_m1352=(rcls1_f1888()?(rcls1_f1896()?((rcls1_v2492=rcls1_f2492()),(rcls1_v1910=rcls1_f1910()),((rcls1_v2492>rcls1_v1910)?rcls1_v2492:rcls1_v1910)):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f1372(){if (rcls1_p1372) return rcls1_m1372; else {rcls1_p1372=T;return rcls1_m1372=(rcls1_f2034()?((rcls1_v2492=rcls1_f2492()),(rcls1_v2048=rcls1_f2048()),((rcls1_v2492>rcls1_v2048)?rcls1_v2492:rcls1_v2048)):rcls1_f2303());}}
static double rcls1_f1367(){if (rcls1_p1367) return rcls1_m1367; else {rcls1_p1367=T;return rcls1_m1367=(rcls1_f2000()?(rcls1_f2008()?((rcls1_v2492=rcls1_f2492()),(rcls1_v2022=rcls1_f2022()),((rcls1_v2492>rcls1_v2022)?rcls1_v2492:rcls1_v2022)):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1658(){if (rcls1_p1658) return rcls1_m1658; else {rcls1_p1658=T;return rcls1_m1658=(rcls1_f2492()>rcls1_f1838());}}
static int rcls1_f1672(){if (rcls1_p1672) return rcls1_m1672; else {rcls1_p1672=T;return rcls1_m1672=(rcls1_f2492()>rcls1_f1860());}}
static double rcls1_f1376(){if (rcls1_p1376) return rcls1_m1376; else {rcls1_p1376=T;return rcls1_m1376=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1672()?rcls1_f2492():rcls1_f1860()):(rcls1_f2089()?((rcls1_v2492=rcls1_f2492()),(rcls1_v2103=rcls1_f2103()),((rcls1_v2492>rcls1_v2103)?rcls1_v2492:rcls1_v2103)):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1666(){if (rcls1_p1666) return rcls1_m1666; else {rcls1_p1666=T;return rcls1_m1666=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1672()?T:rcls1_f2089()):rcls1_f2089()):NIL):NIL):NIL):NIL);}}
static int rcls1_f1665(){if (rcls1_p1665) return rcls1_m1665; else {rcls1_p1665=T;return rcls1_m1665=(rcls1_f2492()>rcls1_f1850());}}
static double rcls1_f2491(){if (rcls1_p2491) return rcls1_m2491; else {rcls1_p2491=T;return rcls1_m2491=normalize_rotation(rcls1_f2492());}}
static int rcls1_f2479(){if (rcls1_p2479) return rcls1_m2479; else {rcls1_p2479=T;return rcls1_m2479=((rcls1_v2491=rcls1_f2491()),((fabs((rcls1_v2491-(0.0)))<rcls1_v6508)?NIL:((fabs((rcls1_v2491-(-6.283185307179586)))<rcls1_v6508)?NIL:((fabs((rcls1_v2491-(6.283185307179586)))<rcls1_v6508)?NIL:T))));}}
static int rcls1_f2478(){if (rcls1_p2478) return rcls1_m2478; else {rcls1_p2478=T;return rcls1_m2478=((rcls1_v2479=rcls1_f2479()),(rcls1_v2479?rcls1_v2479:rcls1_f2538()));}}
static double rcls1_f304(){if (rcls1_p304) return rcls1_m304; else {rcls1_p304=T;return rcls1_m304=(rcls1_f2478()?(rcls1_f782()?(rcls1_f420()?((rcls1_v2492=rcls1_f2492()),(rcls1_v396=rcls1_f396()),((rcls1_v2492>rcls1_v396)?rcls1_v2492:rcls1_v396)):(rcls1_f836()?((rcls1_v2492=rcls1_f2492()),(rcls1_v809=rcls1_f809()),((rcls1_v2492>rcls1_v809)?rcls1_v2492:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f314()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2492=rcls1_f2492()),(rcls1_v454=rcls1_f454()),((rcls1_v2492>rcls1_v454)?rcls1_v2492:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f314())):rcls1_f2303())):rcls1_f2303());}}
static double_or_symbol rcls1_f63(){if (rcls1_p63) return rcls1_m63; else {rcls1_p63=T;return rcls1_m63=(rcls1_f2478()?coerce_double_to_double_or_symbol(rcls1_f2492()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1342(){if (rcls1_p1342) return rcls1_m1342; else {rcls1_p1342=T;return rcls1_m1342=(rcls1_f2478()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1376():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1665()?rcls1_f2492():rcls1_f1850()):rcls1_f1372()):rcls1_f1367()):(rcls1_f2026()?rcls1_f1372():rcls1_f2303())):(rcls1_f2053()?rcls1_f1367():rcls1_f2303()))):(rcls1_f1975()?rcls1_f1376():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1658()?rcls1_f2492():rcls1_f1838()):rcls1_f1357()):rcls1_f1352()):(rcls1_f1915()?rcls1_f1357():rcls1_f2303())):(rcls1_f1942()?rcls1_f1352():rcls1_f2303())))):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1648(){if (rcls1_p1648) return rcls1_m1648; else {rcls1_p1648=T;return rcls1_m1648=(rcls1_f2478()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1666():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1665()?T:rcls1_f1990()):rcls1_f2034()):rcls1_f1999()):rcls1_f1987()):rcls1_f1985())):(rcls1_f1975()?rcls1_f1666():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1658()?T:rcls1_f1878()):rcls1_f1923()):rcls1_f1887()):rcls1_f1875()):rcls1_f1873()))):NIL):NIL):NIL);}}
static double rcls1_f2292(){if (rcls1_p2292) return rcls1_m2292; else {rcls1_p2292=T;return rcls1_m2292=(rcls1_f2478()?(rcls1_f2444()?(rcls1_f2452()?((rcls1_v2492=rcls1_f2492()),(rcls1_v2466=rcls1_f2466()),((rcls1_v2492>rcls1_v2466)?rcls1_v2492:rcls1_v2466)):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static double rcls1_f329(){if (rcls1_p329) return rcls1_m329; else {rcls1_p329=T;return rcls1_m329=((rcls1_v2292=rcls1_f2292()),(rcls1_v792=rcls1_f792()),((rcls1_v2292>rcls1_v792)?rcls1_v2292:rcls1_v792));}}
static int rcls1_f1691(){if (rcls1_p1691) return rcls1_m1691; else {rcls1_p1691=T;return rcls1_m1691=(rcls1_f2292()>rcls1_f1838());}}
static int rcls1_f1689(){if (rcls1_p1689) return rcls1_m1689; else {rcls1_p1689=T;return rcls1_m1689=(rcls1_f2292()>rcls1_f1937());}}
static double rcls1_f1398(){if (rcls1_p1398) return rcls1_m1398; else {rcls1_p1398=T;return rcls1_m1398=(rcls1_f1923()?(rcls1_f1689()?rcls1_f2292():rcls1_f1937()):rcls1_f2303());}}
static int rcls1_f1685(){if (rcls1_p1685) return rcls1_m1685; else {rcls1_p1685=T;return rcls1_m1685=(rcls1_f2292()>rcls1_f1910());}}
static double rcls1_f1394(){if (rcls1_p1394) return rcls1_m1394; else {rcls1_p1394=T;return rcls1_m1394=(rcls1_f1888()?(rcls1_f1896()?(rcls1_f1685()?rcls1_f2292():rcls1_f1910()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1717(){if (rcls1_p1717) return rcls1_m1717; else {rcls1_p1717=T;return rcls1_m1717=(rcls1_f2292()>rcls1_f1860());}}
static int rcls1_f1715(){if (rcls1_p1715) return rcls1_m1715; else {rcls1_p1715=T;return rcls1_m1715=(rcls1_f2292()>rcls1_f2103());}}
static double rcls1_f1414(){if (rcls1_p1414) return rcls1_m1414; else {rcls1_p1414=T;return rcls1_m1414=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1717()?rcls1_f2292():rcls1_f1860()):(rcls1_f2089()?(rcls1_f1715()?rcls1_f2292():rcls1_f2103()):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1707(){if (rcls1_p1707) return rcls1_m1707; else {rcls1_p1707=T;return rcls1_m1707=(rcls1_f2292()>rcls1_f1850());}}
static int rcls1_f1705(){if (rcls1_p1705) return rcls1_m1705; else {rcls1_p1705=T;return rcls1_m1705=(rcls1_f2292()>rcls1_f2048());}}
static double rcls1_f1411(){if (rcls1_p1411) return rcls1_m1411; else {rcls1_p1411=T;return rcls1_m1411=(rcls1_f2034()?(rcls1_f1705()?rcls1_f2292():rcls1_f2048()):rcls1_f2303());}}
static int rcls1_f1701(){if (rcls1_p1701) return rcls1_m1701; else {rcls1_p1701=T;return rcls1_m1701=(rcls1_f2292()>rcls1_f2022());}}
static double rcls1_f1407(){if (rcls1_p1407) return rcls1_m1407; else {rcls1_p1407=T;return rcls1_m1407=(rcls1_f2000()?(rcls1_f2008()?(rcls1_f1701()?rcls1_f2292():rcls1_f2022()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f2434(){if (rcls1_p2434) return rcls1_m2434; else {rcls1_p2434=T;return rcls1_m2434=(rcls1_f2478()?rcls1_f2443():NIL);}}
static int rcls1_f1687(){if (rcls1_p1687) return rcls1_m1687; else {rcls1_p1687=T;return rcls1_m1687=(rcls1_f1923()?(rcls1_f1689()?rcls1_f2434():T):NIL);}}
static int rcls1_f1682(){if (rcls1_p1682) return rcls1_m1682; else {rcls1_p1682=T;return rcls1_m1682=(rcls1_f1888()?(rcls1_f1896()?(rcls1_f1685()?rcls1_f2434():T):NIL):NIL);}}
static int rcls1_f1708(){if (rcls1_p1708) return rcls1_m1708; else {rcls1_p1708=T;return rcls1_m1708=(rcls1_f2190()?(rcls1_f2135()?(rcls1_f2110()?(rcls1_f2081()?(rcls1_f1861()?(rcls1_f1717()?rcls1_f2434():rcls1_f2089()):(rcls1_f2089()?(rcls1_f1715()?rcls1_f2434():T):NIL)):NIL):NIL):NIL):NIL);}}
static int rcls1_f1703(){if (rcls1_p1703) return rcls1_m1703; else {rcls1_p1703=T;return rcls1_m1703=(rcls1_f2034()?(rcls1_f1705()?rcls1_f2434():T):NIL);}}
static int rcls1_f1698(){if (rcls1_p1698) return rcls1_m1698; else {rcls1_p1698=T;return rcls1_m1698=(rcls1_f2000()?(rcls1_f2008()?(rcls1_f1701()?rcls1_f2434():T):NIL):NIL);}}
static double rcls1_f2475(){if (rcls1_p2475) return rcls1_m2475; else {rcls1_p2475=T;return rcls1_m2475=(rcls1_f2478()?rcls1_f2492():rcls1_f2531());}}
static double rcls1_f2477(){if (rcls1_p2477) return rcls1_m2477; else {rcls1_p2477=T;return rcls1_m2477=(rcls1_f2478()?rcls1_f2492():rcls1_f2535());}}
static int rcls1_f2476(){if (rcls1_p2476) return rcls1_m2476; else {rcls1_p2476=T;return rcls1_m2476=(rcls1_f2477()<(0.0));}}
static int rcls1_f2470(){if (rcls1_p2470) return rcls1_m2470; else {rcls1_p2470=T;return rcls1_m2470=(rcls1_f2478()?((rcls1_v2476=rcls1_f2476()),(rcls1_v2476?rcls1_v2476:(fabs((rcls1_f2475()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f2873(){if (rcls1_p2873) return rcls1_m2873; else {rcls1_p2873=T;return rcls1_m2873=(fabs((((fabs((rcls1_f2903()-(0.0)))<rcls1_v6508)?rcls1_f2898():((rcls1_v2886=rcls1_f2886()),(rcls1_v2880=rcls1_f2880()),sqrt(((rcls1_v2886*rcls1_v2886)+(rcls1_v2880*rcls1_v2880)))))-rcls1_f6122()))<rcls1_v6508);}}
static double rcls1_f335(){if (rcls1_p335) return rcls1_m335; else {rcls1_p335=T;return rcls1_m335=(rcls1_f2873()?(rcls1_f2817()?(rcls1_f2792()?(rcls1_f2525()?(rcls1_f2305()?(rcls1_f782()?(rcls1_f420()?((rcls1_v2302=rcls1_f2302()),(rcls1_v396=rcls1_f396()),((rcls1_v2302>rcls1_v396)?rcls1_v2302:rcls1_v396)):(rcls1_f836()?((rcls1_v2302=rcls1_f2302()),(rcls1_v809=rcls1_f809()),((rcls1_v2302>rcls1_v809)?rcls1_v2302:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f365()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2302=rcls1_f2302()),(rcls1_v454=rcls1_f454()),((rcls1_v2302>rcls1_v454)?rcls1_v2302:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f365())):rcls1_f2303())):(rcls1_f2537()?(rcls1_f782()?(rcls1_f420()?((rcls1_v2781=rcls1_f2781()),(rcls1_v396=rcls1_f396()),((rcls1_v2781>rcls1_v396)?rcls1_v2781:rcls1_v396)):(rcls1_f836()?((rcls1_v2781=rcls1_f2781()),(rcls1_v809=rcls1_f809()),((rcls1_v2781>rcls1_v809)?rcls1_v2781:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f350()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2781=rcls1_f2781()),(rcls1_v454=rcls1_f454()),((rcls1_v2781>rcls1_v454)?rcls1_v2781:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f350())):rcls1_f2303())):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static double_or_symbol rcls1_f64(){if (rcls1_p64) return rcls1_m64; else {rcls1_p64=T;return rcls1_m64=(rcls1_f2873()?(rcls1_f2817()?(rcls1_f2792()?((rcls1_v2525=rcls1_f2525()),(rcls1_v2525?(rcls1_f2305()?coerce_double_to_double_or_symbol(rcls1_f2302()):rcls1_f70()):(rcls1_v2525?rcls1_f70():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls1_f1422(){if (rcls1_p1422) return rcls1_m1422; else {rcls1_p1422=T;return rcls1_m1422=(rcls1_f2873()?(rcls1_f2817()?(rcls1_f2792()?(rcls1_f2525()?(rcls1_f2305()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1499():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1782()?rcls1_f2302():rcls1_f1850()):rcls1_f1496()):rcls1_f1492()):(rcls1_f2026()?rcls1_f1496():rcls1_f2303())):(rcls1_f2053()?rcls1_f1492():rcls1_f2303()))):(rcls1_f1975()?rcls1_f1499():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1766()?rcls1_f2302():rcls1_f1838()):rcls1_f1483()):rcls1_f1479()):(rcls1_f1915()?rcls1_f1483():rcls1_f2303())):(rcls1_f1942()?rcls1_f1479():rcls1_f2303())))):rcls1_f2303()):rcls1_f2303()):(rcls1_f2537()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1461():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1740()?rcls1_f2781():rcls1_f1850()):rcls1_f1457()):rcls1_f1452()):(rcls1_f2026()?rcls1_f1457():rcls1_f2303())):(rcls1_f2053()?rcls1_f1452():rcls1_f2303()))):(rcls1_f1975()?rcls1_f1461():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1733()?rcls1_f2781():rcls1_f1838()):rcls1_f1442()):rcls1_f1437()):(rcls1_f1915()?rcls1_f1442():rcls1_f2303())):(rcls1_f1942()?rcls1_f1437():rcls1_f2303())))):rcls1_f2303()):rcls1_f2303()):rcls1_f2303())):rcls1_f2303()):rcls1_f2303()):rcls1_f2303()):rcls1_f2303());}}
static int rcls1_f1718(){if (rcls1_p1718) return rcls1_m1718; else {rcls1_p1718=T;return rcls1_m1718=(rcls1_f2873()?(rcls1_f2817()?(rcls1_f2792()?(rcls1_f2525()?(rcls1_f2305()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1783():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1782()?rcls1_f2537():rcls1_f1990()):rcls1_f1778()):rcls1_f1773()):(rcls1_f2026()?rcls1_f1778():NIL)):(rcls1_f2053()?rcls1_f1773():NIL))):(rcls1_f1975()?rcls1_f1783():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1766()?rcls1_f2537():rcls1_f1878()):rcls1_f1762()):rcls1_f1757()):(rcls1_f1915()?rcls1_f1762():NIL)):(rcls1_f1942()?rcls1_f1757():NIL)))):NIL):NIL):(rcls1_f2537()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1741():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1740()?T:rcls1_f1990()):rcls1_f2034()):rcls1_f1999()):rcls1_f1987()):rcls1_f1985())):(rcls1_f1975()?rcls1_f1741():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1733()?T:rcls1_f1878()):rcls1_f1923()):rcls1_f1887()):rcls1_f1875()):rcls1_f1873()))):NIL):NIL):NIL)):NIL):NIL):NIL):NIL);}}
static double rcls1_f2265(){if (rcls1_p2265) return rcls1_m2265; else {rcls1_p2265=T;return rcls1_m2265=(rcls1_f2873()?(rcls1_f2817()?(rcls1_f2792()?(rcls1_f2525()?(rcls1_f2305()?rcls1_f2302():rcls1_f2530()):rcls1_f2310()):rcls1_f2531()):rcls1_f2531()):rcls1_f2531());}}
static double rcls1_f2297(){if (rcls1_p2297) return rcls1_m2297; else {rcls1_p2297=T;return rcls1_m2297=(rcls1_f2873()?(rcls1_f2817()?(rcls1_f2792()?(rcls1_f2525()?(rcls1_f2305()?rcls1_f2302():rcls1_f2534()):rcls1_f2312()):rcls1_f2535()):rcls1_f2535()):rcls1_f2535());}}
static int rcls1_f2850(){if (rcls1_p2850) return rcls1_m2850; else {rcls1_p2850=T;return rcls1_m2850=((rcls1_v2873=rcls1_f2873()),(rcls1_v2873?((fabs((rcls1_f2869()-(0.0)))<rcls1_v6508)?NIL:((rcls1_v2862=rcls1_f2862()),((fabs((rcls1_v2862-(0.0)))<rcls1_v6508)?NIL:((rcls1_v2862>(0.0))?rcls1_f2857():(rcls1_f2857()?NIL:T))))):(rcls1_v2873?NIL:T)));}}
static double rcls1_f1158(){if (rcls1_p1158) return rcls1_m1158; else {rcls1_p1158=T;return rcls1_m1158=(rcls1_f2850()?(rcls1_f2849()?(rcls1_f2843()?rcls1_f1422():(rcls1_f2507()?(rcls1_f2497()?(rcls1_f2470()?(rcls1_f2435()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1414():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1707()?rcls1_f2292():rcls1_f1850()):rcls1_f1411()):rcls1_f1407()):(rcls1_f2026()?rcls1_f1411():rcls1_f2303())):(rcls1_f2053()?rcls1_f1407():rcls1_f2303()))):(rcls1_f1975()?rcls1_f1414():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1691()?rcls1_f2292():rcls1_f1838()):rcls1_f1398()):rcls1_f1394()):(rcls1_f1915()?rcls1_f1398():rcls1_f2303())):(rcls1_f1942()?rcls1_f1394():rcls1_f2303())))):rcls1_f2303()):rcls1_f2303()):rcls1_f1342()):rcls1_f1297()):(rcls1_f2470()?rcls1_f1342():rcls1_f2303())):(rcls1_f2497()?rcls1_f1297():rcls1_f2303()))):(rcls1_f2419()?rcls1_f1422():(rcls1_f2400()?(rcls1_f2386()?(rcls1_f2359()?(rcls1_f2323()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1283():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1604()?rcls1_f2280():rcls1_f1850()):rcls1_f1280()):rcls1_f1276()):(rcls1_f2026()?rcls1_f1280():rcls1_f2303())):(rcls1_f2053()?rcls1_f1276():rcls1_f2303()))):(rcls1_f1975()?rcls1_f1283():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1588()?rcls1_f2280():rcls1_f1838()):rcls1_f1267()):rcls1_f1263()):(rcls1_f1915()?rcls1_f1267():rcls1_f2303())):(rcls1_f1942()?rcls1_f1263():rcls1_f2303())))):rcls1_f2303()):rcls1_f2303()):rcls1_f1211()):rcls1_f1166()):(rcls1_f2359()?rcls1_f1211():rcls1_f2303())):(rcls1_f2386()?rcls1_f1166():rcls1_f2303())))):rcls1_f2303());}}
static double rcls1_f380(){if (rcls1_p380) return rcls1_m380; else {rcls1_p380=T;return rcls1_m380=((rcls1_v1158=rcls1_f1158()),(rcls1_v792=rcls1_f792()),((rcls1_v1158>rcls1_v792)?rcls1_v1158:rcls1_v792));}}
static double rcls1_f2249(){if (rcls1_p2249) return rcls1_m2249; else {rcls1_p2249=T;return rcls1_m2249=(rcls1_f2850()?(rcls1_f2849()?(rcls1_f2843()?rcls1_f2265():(rcls1_f2507()?(rcls1_f2497()?(rcls1_f2470()?(rcls1_f2435()?rcls1_f2292():rcls1_f2475()):rcls1_f2440()):(rcls1_f2470()?rcls1_f2475():rcls1_f2531())):(rcls1_f2497()?rcls1_f2440():rcls1_f2531()))):(rcls1_f2419()?rcls1_f2265():(rcls1_f2400()?(rcls1_f2386()?(rcls1_f2359()?(rcls1_f2323()?rcls1_f2280():rcls1_f2364()):rcls1_f2328()):(rcls1_f2359()?rcls1_f2364():rcls1_f2531())):(rcls1_f2386()?rcls1_f2328():rcls1_f2531())))):rcls1_f2531());}}
static double rcls1_f2271(){if (rcls1_p2271) return rcls1_m2271; else {rcls1_p2271=T;return rcls1_m2271=(rcls1_f2850()?(rcls1_f2849()?(rcls1_f2843()?rcls1_f2297():(rcls1_f2507()?(rcls1_f2497()?(rcls1_f2470()?(rcls1_f2435()?rcls1_f2292():rcls1_f2477()):rcls1_f2442()):(rcls1_f2470()?rcls1_f2477():rcls1_f2535())):(rcls1_f2497()?rcls1_f2442():rcls1_f2535()))):(rcls1_f2419()?rcls1_f2297():(rcls1_f2400()?(rcls1_f2386()?(rcls1_f2359()?(rcls1_f2323()?rcls1_f2280():rcls1_f2366()):rcls1_f2330()):(rcls1_f2359()?rcls1_f2366():rcls1_f2535())):(rcls1_f2386()?rcls1_f2330():rcls1_f2535())))):rcls1_f2535());}}
static int rcls1_f2270(){if (rcls1_p2270) return rcls1_m2270; else {rcls1_p2270=T;return rcls1_m2270=(rcls1_f2271()<(0.0));}}
static int rcls1_f2520(){if (rcls1_p2520) return rcls1_m2520; else {rcls1_p2520=T;return rcls1_m2520=(rcls1_f2873()?(rcls1_f2817()?(rcls1_f2792()?(rcls1_f2525()?rcls1_f2537():rcls1_f2524()):NIL):NIL):NIL);}}
static int rcls1_f2313(){if (rcls1_p2313) return rcls1_m2313; else {rcls1_p2313=T;return rcls1_m2313=(rcls1_f2850()?(rcls1_f2849()?(rcls1_f2843()?rcls1_f2520():(rcls1_f2507()?(rcls1_f2497()?(rcls1_f2470()?(rcls1_f2435()?rcls1_f2434():rcls1_f2478()):rcls1_f2443()):(rcls1_f2470()?rcls1_f2478():NIL)):(rcls1_f2497()?rcls1_f2443():NIL))):(rcls1_f2419()?rcls1_f2520():(rcls1_f2400()?(rcls1_f2386()?(rcls1_f2359()?(rcls1_f2323()?rcls1_f2322():rcls1_f2367()):rcls1_f2331()):(rcls1_f2359()?rcls1_f2367():NIL)):(rcls1_f2386()?rcls1_f2331():NIL)))):NIL);}}
static int rcls1_f2244(){if (rcls1_p2244) return rcls1_m2244; else {rcls1_p2244=T;return rcls1_m2244=(rcls1_f2313()?((rcls1_v2270=rcls1_f2270()),(rcls1_v2270?rcls1_v2270:(fabs((rcls1_f2249()-(0.0)))<rcls1_v6508))):NIL);}}
static int rcls1_f1154(){if (rcls1_p1154) return rcls1_m1154; else {rcls1_p1154=T;return rcls1_m1154=((rcls1_v2934?rcls1_f2535():(rcls1_f2244()?(rcls1_f1793()?rcls1_f1158():rcls1_f2271()):rcls1_f1800()))<(0.0));}}
void rcls1(rcls1_a6530,rcls1_a6528,rcls1_a6526,rcls1_a6524,rcls1_a6522,rcls1_a6520,rcls1_a6518,rcls1_a6516,rcls1_a6514,rcls1_a6512,rcls1_a6508)
double rcls1_a6530;
double rcls1_a6528;
double rcls1_a6526;
double rcls1_a6524;
double rcls1_a6522;
double rcls1_a6520;
double rcls1_a6518;
double rcls1_a6516;
double rcls1_a6514;
double rcls1_a6512;
double rcls1_a6508;
{ rcls1_v6530=rcls1_a6530;
  rcls1_v6528=rcls1_a6528;
  rcls1_v6526=rcls1_a6526;
  rcls1_v6524=rcls1_a6524;
  rcls1_v6522=rcls1_a6522;
  rcls1_v6520=rcls1_a6520;
  rcls1_v6518=rcls1_a6518;
  rcls1_v6516=rcls1_a6516;
  rcls1_v6514=rcls1_a6514;
  rcls1_v6512=rcls1_a6512;
  rcls1_v6508=rcls1_a6508;
  rcls1_p3902=NIL;
  rcls1_p4023=NIL;
  rcls1_p4020=NIL;
  rcls1_p781=NIL;
  rcls1_p4011=NIL;
  rcls1_p832=NIL;
  rcls1_p834=NIL;
  rcls1_p792=NIL;
  rcls1_p4350=NIL;
  rcls1_p1130=NIL;
  rcls1_p4483=NIL;
  rcls1_p4480=NIL;
  rcls1_p1145=NIL;
  rcls1_p4467=NIL;
  rcls1_p2303=NIL;
  rcls1_p2531=NIL;
  rcls1_p2535=NIL;
  rcls1_p2790=NIL;
  rcls1_p2786=NIL;
  rcls1_p2600=NIL;
  rcls1_p6312=NIL;
  rcls1_p6310=NIL;
  rcls1_p6303=NIL;
  rcls1_p6301=NIL;
  rcls1_p6462=NIL;
  rcls1_p6467=NIL;
  rcls1_p6465=NIL;
  rcls1_p5874=NIL;
  rcls1_p5873=NIL;
  rcls1_p4469=NIL;
  rcls1_p4468=NIL;
  rcls1_p4431=NIL;
  rcls1_p4419=NIL;
  rcls1_p4418=NIL;
  rcls1_p1030=NIL;
  rcls1_p5872=NIL;
  rcls1_p2898=NIL;
  rcls1_p2915=NIL;
  rcls1_p2764=NIL;
  rcls1_p2763=NIL;
  rcls1_p2742=NIL;
  rcls1_p2750=NIL;
  rcls1_p2760=NIL;
  rcls1_p6501=NIL;
  rcls1_p6499=NIL;
  rcls1_p6496=NIL;
  rcls1_p6443=NIL;
  rcls1_p6494=NIL;
  rcls1_p6459=NIL;
  rcls1_p2761=NIL;
  rcls1_p2758=NIL;
  rcls1_p2659=NIL;
  rcls1_p2652=NIL;
  rcls1_p2658=NIL;
  rcls1_p2722=NIL;
  rcls1_p2720=NIL;
  rcls1_p2741=NIL;
  rcls1_p2740=NIL;
  rcls1_p2710=NIL;
  rcls1_p2708=NIL;
  rcls1_p2749=NIL;
  rcls1_p2718=NIL;
  rcls1_p2716=NIL;
  rcls1_p2696=NIL;
  rcls1_p2713=NIL;
  rcls1_p2702=NIL;
  rcls1_p2694=NIL;
  rcls1_p2684=NIL;
  rcls1_p2698=NIL;
  rcls1_p2697=NIL;
  rcls1_p2747=NIL;
  rcls1_p2736=NIL;
  rcls1_p2730=NIL;
  rcls1_p2723=NIL;
  rcls1_p2596=NIL;
  rcls1_p2582=NIL;
  rcls1_p2663=NIL;
  rcls1_p2680=NIL;
  rcls1_p2754=NIL;
  rcls1_p2674=NIL;
  rcls1_p2636=NIL;
  rcls1_p2757=NIL;
  rcls1_p2568=NIL;
  rcls1_p2545=NIL;
  rcls1_p2756=NIL;
  rcls1_p2677=NIL;
  rcls1_p2635=NIL;
  rcls1_p2755=NIL;
  rcls1_p2670=NIL;
  rcls1_p2633=NIL;
  rcls1_p2631=NIL;
  rcls1_p2630=NIL;
  rcls1_p2628=NIL;
  rcls1_p2619=NIL;
  rcls1_p2617=NIL;
  rcls1_p2616=NIL;
  rcls1_p2614=NIL;
  rcls1_p2605=NIL;
  rcls1_p2669=NIL;
  rcls1_p2752=NIL;
  rcls1_p2662=NIL;
  rcls1_p2648=NIL;
  rcls1_p2640=NIL;
  rcls1_p2661=NIL;
  rcls1_p2650=NIL;
  rcls1_p2751=NIL;
  rcls1_p2667=NIL;
  rcls1_p2602=NIL;
  rcls1_p2589=NIL;
  rcls1_p2564=NIL;
  rcls1_p2575=NIL;
  rcls1_p2563=NIL;
  rcls1_p2558=NIL;
  rcls1_p2550=NIL;
  rcls1_p2538=NIL;
  rcls1_p6493=NIL;
  rcls1_p2242=NIL;
  rcls1_p2233=NIL;
  rcls1_p2231=NIL;
  rcls1_p2232=NIL;
  rcls1_p2124=NIL;
  rcls1_p2121=NIL;
  rcls1_p2228=NIL;
  rcls1_p2240=NIL;
  rcls1_p2239=NIL;
  rcls1_p2238=NIL;
  rcls1_p2117=NIL;
  rcls1_p2114=NIL;
  rcls1_p2237=NIL;
  rcls1_p2235=NIL;
  rcls1_p2226=NIL;
  rcls1_p2167=NIL;
  rcls1_p2189=NIL;
  rcls1_p2209=NIL;
  rcls1_p2225=NIL;
  rcls1_p2222=NIL;
  rcls1_p2211=NIL;
  rcls1_p2221=NIL;
  rcls1_p2160=NIL;
  rcls1_p2158=NIL;
  rcls1_p2072=NIL;
  rcls1_p2052=NIL;
  rcls1_p2065=NIL;
  rcls1_p2071=NIL;
  rcls1_p2164=NIL;
  rcls1_p1980=NIL;
  rcls1_p1973=NIL;
  rcls1_p2179=NIL;
  rcls1_p2188=NIL;
  rcls1_p2166=NIL;
  rcls1_p1982=NIL;
  rcls1_p1972=NIL;
  rcls1_p2165=NIL;
  rcls1_p2186=NIL;
  rcls1_p2174=NIL;
  rcls1_p2208=NIL;
  rcls1_p2207=NIL;
  rcls1_p2148=NIL;
  rcls1_p2146=NIL;
  rcls1_p2220=NIL;
  rcls1_p2156=NIL;
  rcls1_p2140=NIL;
  rcls1_p2154=NIL;
  rcls1_p2134=NIL;
  rcls1_p2132=NIL;
  rcls1_p2151=NIL;
  rcls1_p2135=NIL;
  rcls1_p2110=NIL;
  rcls1_p2103=NIL;
  rcls1_p201=NIL;
  rcls1_p2102=NIL;
  rcls1_p2090=NIL;
  rcls1_p2089=NIL;
  rcls1_p40=NIL;
  rcls1_p1860=NIL;
  rcls1_p216=NIL;
  rcls1_p2086=NIL;
  rcls1_p2088=NIL;
  rcls1_p2087=NIL;
  rcls1_p2081=NIL;
  rcls1_p1866=NIL;
  rcls1_p1868=NIL;
  rcls1_p1867=NIL;
  rcls1_p2080=NIL;
  rcls1_p1861=NIL;
  rcls1_p2218=NIL;
  rcls1_p2203=NIL;
  rcls1_p2197=NIL;
  rcls1_p2931=NIL;
  rcls1_p2922=NIL;
  rcls1_p2920=NIL;
  rcls1_p2921=NIL;
  rcls1_p2806=NIL;
  rcls1_p2803=NIL;
  rcls1_p2917=NIL;
  rcls1_p2929=NIL;
  rcls1_p2928=NIL;
  rcls1_p2927=NIL;
  rcls1_p2799=NIL;
  rcls1_p2796=NIL;
  rcls1_p2926=NIL;
  rcls1_p2924=NIL;
  rcls1_p2911=NIL;
  rcls1_p2849=NIL;
  rcls1_p2872=NIL;
  rcls1_p2892=NIL;
  rcls1_p2910=NIL;
  rcls1_p2907=NIL;
  rcls1_p2894=NIL;
  rcls1_p2906=NIL;
  rcls1_p2842=NIL;
  rcls1_p2840=NIL;
  rcls1_p2516=NIL;
  rcls1_p2496=NIL;
  rcls1_p2509=NIL;
  rcls1_p2515=NIL;
  rcls1_p2846=NIL;
  rcls1_p2424=NIL;
  rcls1_p2417=NIL;
  rcls1_p2862=NIL;
  rcls1_p2871=NIL;
  rcls1_p2848=NIL;
  rcls1_p2426=NIL;
  rcls1_p2416=NIL;
  rcls1_p2847=NIL;
  rcls1_p2869=NIL;
  rcls1_p2857=NIL;
  rcls1_p2891=NIL;
  rcls1_p2890=NIL;
  rcls1_p2830=NIL;
  rcls1_p2828=NIL;
  rcls1_p2905=NIL;
  rcls1_p2838=NIL;
  rcls1_p2822=NIL;
  rcls1_p2836=NIL;
  rcls1_p2816=NIL;
  rcls1_p2814=NIL;
  rcls1_p2833=NIL;
  rcls1_p2817=NIL;
  rcls1_p2792=NIL;
  rcls1_p2781=NIL;
  rcls1_p350=NIL;
  rcls1_p1747=NIL;
  rcls1_p2780=NIL;
  rcls1_p2766=NIL;
  rcls1_p2537=NIL;
  rcls1_p70=NIL;
  rcls1_p2302=NIL;
  rcls1_p365=NIL;
  rcls1_p1792=NIL;
  rcls1_p1790=NIL;
  rcls1_p2530=NIL;
  rcls1_p2534=NIL;
  rcls1_p2533=NIL;
  rcls1_p2525=NIL;
  rcls1_p2310=NIL;
  rcls1_p2312=NIL;
  rcls1_p2311=NIL;
  rcls1_p2524=NIL;
  rcls1_p2305=NIL;
  rcls1_p2903=NIL;
  rcls1_p2886=NIL;
  rcls1_p2880=NIL;
  rcls1_p6505=NIL;
  rcls1_p6469=NIL;
  rcls1_p6127=NIL;
  rcls1_p6125=NIL;
  rcls1_p6124=NIL;
  rcls1_p4008=NIL;
  rcls1_p3976=NIL;
  rcls1_p670=NIL;
  rcls1_p660=NIL;
  rcls1_p666=NIL;
  rcls1_p668=NIL;
  rcls1_p667=NIL;
  rcls1_p665=NIL;
  rcls1_p659=NIL;
  rcls1_p568=NIL;
  rcls1_p540=NIL;
  rcls1_p658=NIL;
  rcls1_p657=NIL;
  rcls1_p664=NIL;
  rcls1_p566=NIL;
  rcls1_p541=NIL;
  rcls1_p538=NIL;
  rcls1_p533=NIL;
  rcls1_p526=NIL;
  rcls1_p532=NIL;
  rcls1_p525=NIL;
  rcls1_p508=NIL;
  rcls1_p564=NIL;
  rcls1_p521=NIL;
  rcls1_p513=NIL;
  rcls1_p562=NIL;
  rcls1_p561=NIL;
  rcls1_p549=NIL;
  rcls1_p501=NIL;
  rcls1_p498=NIL;
  rcls1_p500=NIL;
  rcls1_p499=NIL;
  rcls1_p493=NIL;
  rcls1_p492=NIL;
  rcls1_p490=NIL;
  rcls1_p484=NIL;
  rcls1_p662=NIL;
  rcls1_p619=NIL;
  rcls1_p596=NIL;
  rcls1_p617=NIL;
  rcls1_p616=NIL;
  rcls1_p604=NIL;
  rcls1_p661=NIL;
  rcls1_p655=NIL;
  rcls1_p650=NIL;
  rcls1_p643=NIL;
  rcls1_p649=NIL;
  rcls1_p588=NIL;
  rcls1_p635=NIL;
  rcls1_p642=NIL;
  rcls1_p639=NIL;
  rcls1_p630=NIL;
  rcls1_p629=NIL;
  rcls1_p578=NIL;
  rcls1_p576=NIL;
  rcls1_p570=NIL;
  rcls1_p626=NIL;
  rcls1_p3987=NIL;
  rcls1_p4003=NIL;
  rcls1_p4001=NIL;
  rcls1_p3993=NIL;
  rcls1_p3950=NIL;
  rcls1_p3948=NIL;
  rcls1_p4000=NIL;
  rcls1_p3998=NIL;
  rcls1_p3994=NIL;
  rcls1_p622=NIL;
  rcls1_p775=NIL;
  rcls1_p770=NIL;
  rcls1_p769=NIL;
  rcls1_p773=NIL;
  rcls1_p733=NIL;
  rcls1_p710=NIL;
  rcls1_p731=NIL;
  rcls1_p730=NIL;
  rcls1_p718=NIL;
  rcls1_p772=NIL;
  rcls1_p767=NIL;
  rcls1_p762=NIL;
  rcls1_p755=NIL;
  rcls1_p761=NIL;
  rcls1_p702=NIL;
  rcls1_p747=NIL;
  rcls1_p754=NIL;
  rcls1_p751=NIL;
  rcls1_p742=NIL;
  rcls1_p741=NIL;
  rcls1_p692=NIL;
  rcls1_p475=NIL;
  rcls1_p689=NIL;
  rcls1_p691=NIL;
  rcls1_p690=NIL;
  rcls1_p684=NIL;
  rcls1_p681=NIL;
  rcls1_p675=NIL;
  rcls1_p738=NIL;
  rcls1_p736=NIL;
  rcls1_p470=NIL;
  rcls1_p454=NIL;
  rcls1_p415=NIL;
  rcls1_p449=NIL;
  rcls1_p439=NIL;
  rcls1_p671=NIL;
  rcls1_p477=NIL;
  rcls1_p434=NIL;
  rcls1_p437=NIL;
  rcls1_p436=NIL;
  rcls1_p429=NIL;
  rcls1_p428=NIL;
  rcls1_p425=NIL;
  rcls1_p427=NIL;
  rcls1_p426=NIL;
  rcls1_p420=NIL;
  rcls1_p4464=NIL;
  rcls1_p4430=NIL;
  rcls1_p1029=NIL;
  rcls1_p1019=NIL;
  rcls1_p1025=NIL;
  rcls1_p1027=NIL;
  rcls1_p1026=NIL;
  rcls1_p1024=NIL;
  rcls1_p1018=NIL;
  rcls1_p927=NIL;
  rcls1_p899=NIL;
  rcls1_p1017=NIL;
  rcls1_p1016=NIL;
  rcls1_p1023=NIL;
  rcls1_p925=NIL;
  rcls1_p900=NIL;
  rcls1_p897=NIL;
  rcls1_p892=NIL;
  rcls1_p885=NIL;
  rcls1_p891=NIL;
  rcls1_p884=NIL;
  rcls1_p867=NIL;
  rcls1_p923=NIL;
  rcls1_p880=NIL;
  rcls1_p872=NIL;
  rcls1_p921=NIL;
  rcls1_p920=NIL;
  rcls1_p908=NIL;
  rcls1_p860=NIL;
  rcls1_p857=NIL;
  rcls1_p859=NIL;
  rcls1_p858=NIL;
  rcls1_p852=NIL;
  rcls1_p851=NIL;
  rcls1_p849=NIL;
  rcls1_p843=NIL;
  rcls1_p1021=NIL;
  rcls1_p978=NIL;
  rcls1_p955=NIL;
  rcls1_p976=NIL;
  rcls1_p975=NIL;
  rcls1_p963=NIL;
  rcls1_p1020=NIL;
  rcls1_p1014=NIL;
  rcls1_p1009=NIL;
  rcls1_p1002=NIL;
  rcls1_p1008=NIL;
  rcls1_p947=NIL;
  rcls1_p994=NIL;
  rcls1_p1001=NIL;
  rcls1_p998=NIL;
  rcls1_p989=NIL;
  rcls1_p988=NIL;
  rcls1_p937=NIL;
  rcls1_p935=NIL;
  rcls1_p929=NIL;
  rcls1_p985=NIL;
  rcls1_p4442=NIL;
  rcls1_p4458=NIL;
  rcls1_p4456=NIL;
  rcls1_p4448=NIL;
  rcls1_p4401=NIL;
  rcls1_p4399=NIL;
  rcls1_p4455=NIL;
  rcls1_p4453=NIL;
  rcls1_p4449=NIL;
  rcls1_p981=NIL;
  rcls1_p1138=NIL;
  rcls1_p1133=NIL;
  rcls1_p1132=NIL;
  rcls1_p1136=NIL;
  rcls1_p1094=NIL;
  rcls1_p1071=NIL;
  rcls1_p1092=NIL;
  rcls1_p1091=NIL;
  rcls1_p1079=NIL;
  rcls1_p1135=NIL;
  rcls1_p1128=NIL;
  rcls1_p1123=NIL;
  rcls1_p1116=NIL;
  rcls1_p1122=NIL;
  rcls1_p1063=NIL;
  rcls1_p1108=NIL;
  rcls1_p1115=NIL;
  rcls1_p1112=NIL;
  rcls1_p1103=NIL;
  rcls1_p1102=NIL;
  rcls1_p1053=NIL;
  rcls1_p830=NIL;
  rcls1_p1050=NIL;
  rcls1_p1052=NIL;
  rcls1_p1051=NIL;
  rcls1_p1045=NIL;
  rcls1_p1042=NIL;
  rcls1_p1036=NIL;
  rcls1_p1099=NIL;
  rcls1_p1097=NIL;
  rcls1_p825=NIL;
  rcls1_p809=NIL;
  rcls1_p419=NIL;
  rcls1_p804=NIL;
  rcls1_p794=NIL;
  rcls1_p1032=NIL;
  rcls1_p836=NIL;
  rcls1_p396=NIL;
  rcls1_p787=NIL;
  rcls1_p790=NIL;
  rcls1_p789=NIL;
  rcls1_p782=NIL;
  rcls1_p393=NIL;
  rcls1_p6122=NIL;
  rcls1_p2190=NIL;
  rcls1_p186=NIL;
  rcls1_p34=NIL;
  rcls1_p1499=NIL;
  rcls1_p1461=NIL;
  rcls1_p1783=NIL;
  rcls1_p1741=NIL;
  rcls1_p1823=NIL;
  rcls1_p1855=NIL;
  rcls1_p2168=NIL;
  rcls1_p2076=NIL;
  rcls1_p6089=NIL;
  rcls1_p1976=NIL;
  rcls1_p1975=NIL;
  rcls1_p1970=NIL;
  rcls1_p1954=NIL;
  rcls1_p1953=NIL;
  rcls1_p1951=NIL;
  rcls1_p1942=NIL;
  rcls1_p1910=NIL;
  rcls1_p93=NIL;
  rcls1_p1760=NIL;
  rcls1_p1909=NIL;
  rcls1_p1897=NIL;
  rcls1_p1896=NIL;
  rcls1_p1893=NIL;
  rcls1_p1895=NIL;
  rcls1_p1894=NIL;
  rcls1_p1888=NIL;
  rcls1_p82=NIL;
  rcls1_p20=NIL;
  rcls1_p1479=NIL;
  rcls1_p1437=NIL;
  rcls1_p1757=NIL;
  rcls1_p1884=NIL;
  rcls1_p1886=NIL;
  rcls1_p1885=NIL;
  rcls1_p1887=NIL;
  rcls1_p1873=NIL;
  rcls1_p1879=NIL;
  rcls1_p1968=NIL;
  rcls1_p1967=NIL;
  rcls1_p1965=NIL;
  rcls1_p1956=NIL;
  rcls1_p1937=NIL;
  rcls1_p110=NIL;
  rcls1_p1764=NIL;
  rcls1_p1936=NIL;
  rcls1_p1924=NIL;
  rcls1_p1923=NIL;
  rcls1_p100=NIL;
  rcls1_p23=NIL;
  rcls1_p1483=NIL;
  rcls1_p1442=NIL;
  rcls1_p1762=NIL;
  rcls1_p1838=NIL;
  rcls1_p125=NIL;
  rcls1_p1766=NIL;
  rcls1_p1733=NIL;
  rcls1_p1878=NIL;
  rcls1_p1920=NIL;
  rcls1_p1922=NIL;
  rcls1_p1921=NIL;
  rcls1_p1915=NIL;
  rcls1_p1875=NIL;
  rcls1_p2162=NIL;
  rcls1_p2161=NIL;
  rcls1_p2075=NIL;
  rcls1_p2061=NIL;
  rcls1_p2053=NIL;
  rcls1_p2022=NIL;
  rcls1_p148=NIL;
  rcls1_p1776=NIL;
  rcls1_p2021=NIL;
  rcls1_p2009=NIL;
  rcls1_p2008=NIL;
  rcls1_p2005=NIL;
  rcls1_p2007=NIL;
  rcls1_p2006=NIL;
  rcls1_p2000=NIL;
  rcls1_p137=NIL;
  rcls1_p30=NIL;
  rcls1_p1492=NIL;
  rcls1_p1452=NIL;
  rcls1_p1773=NIL;
  rcls1_p1996=NIL;
  rcls1_p1998=NIL;
  rcls1_p1997=NIL;
  rcls1_p1999=NIL;
  rcls1_p1985=NIL;
  rcls1_p1991=NIL;
  rcls1_p2074=NIL;
  rcls1_p2063=NIL;
  rcls1_p2048=NIL;
  rcls1_p165=NIL;
  rcls1_p1780=NIL;
  rcls1_p2047=NIL;
  rcls1_p2035=NIL;
  rcls1_p2034=NIL;
  rcls1_p155=NIL;
  rcls1_p33=NIL;
  rcls1_p1496=NIL;
  rcls1_p1457=NIL;
  rcls1_p1778=NIL;
  rcls1_p1850=NIL;
  rcls1_p180=NIL;
  rcls1_p1782=NIL;
  rcls1_p1740=NIL;
  rcls1_p1990=NIL;
  rcls1_p2031=NIL;
  rcls1_p2033=NIL;
  rcls1_p2032=NIL;
  rcls1_p2026=NIL;
  rcls1_p1807=NIL;
  rcls1_p1829=NIL;
  rcls1_p1828=NIL;
  rcls1_p1987=NIL;
  rcls1_p1869=NIL;
  rcls1_p1802=NIL;
  rcls1_p1801=NIL;
  rcls1_p1798=NIL;
  rcls1_p1800=NIL;
  rcls1_p1799=NIL;
  rcls1_p1793=NIL;
  rcls1_p2420=NIL;
  rcls1_p2419=NIL;
  rcls1_p2414=NIL;
  rcls1_p2398=NIL;
  rcls1_p2397=NIL;
  rcls1_p2395=NIL;
  rcls1_p2386=NIL;
  rcls1_p2354=NIL;
  rcls1_p242=NIL;
  rcls1_p1182=NIL;
  rcls1_p1177=NIL;
  rcls1_p1197=NIL;
  rcls1_p1192=NIL;
  rcls1_p1529=NIL;
  rcls1_p1543=NIL;
  rcls1_p1201=NIL;
  rcls1_p1537=NIL;
  rcls1_p1536=NIL;
  rcls1_p2353=NIL;
  rcls1_p2341=NIL;
  rcls1_p2340=NIL;
  rcls1_p2337=NIL;
  rcls1_p2339=NIL;
  rcls1_p2338=NIL;
  rcls1_p2332=NIL;
  rcls1_p231=NIL;
  rcls1_p50=NIL;
  rcls1_p1166=NIL;
  rcls1_p1518=NIL;
  rcls1_p2328=NIL;
  rcls1_p2330=NIL;
  rcls1_p2329=NIL;
  rcls1_p2331=NIL;
  rcls1_p2323=NIL;
  rcls1_p2412=NIL;
  rcls1_p2411=NIL;
  rcls1_p2409=NIL;
  rcls1_p2400=NIL;
  rcls1_p2381=NIL;
  rcls1_p259=NIL;
  rcls1_p1226=NIL;
  rcls1_p1221=NIL;
  rcls1_p1241=NIL;
  rcls1_p1236=NIL;
  rcls1_p1555=NIL;
  rcls1_p1569=NIL;
  rcls1_p1245=NIL;
  rcls1_p1563=NIL;
  rcls1_p1562=NIL;
  rcls1_p2380=NIL;
  rcls1_p2368=NIL;
  rcls1_p2367=NIL;
  rcls1_p249=NIL;
  rcls1_p53=NIL;
  rcls1_p1211=NIL;
  rcls1_p1545=NIL;
  rcls1_p2280=NIL;
  rcls1_p274=NIL;
  rcls1_p1588=NIL;
  rcls1_p1586=NIL;
  rcls1_p1267=NIL;
  rcls1_p1582=NIL;
  rcls1_p1263=NIL;
  rcls1_p1614=NIL;
  rcls1_p1612=NIL;
  rcls1_p1283=NIL;
  rcls1_p1604=NIL;
  rcls1_p1602=NIL;
  rcls1_p1280=NIL;
  rcls1_p1598=NIL;
  rcls1_p1276=NIL;
  rcls1_p2322=NIL;
  rcls1_p1584=NIL;
  rcls1_p1579=NIL;
  rcls1_p1605=NIL;
  rcls1_p1600=NIL;
  rcls1_p1595=NIL;
  rcls1_p2364=NIL;
  rcls1_p2366=NIL;
  rcls1_p2365=NIL;
  rcls1_p2359=NIL;
  rcls1_p2844=NIL;
  rcls1_p2843=NIL;
  rcls1_p2519=NIL;
  rcls1_p2505=NIL;
  rcls1_p2497=NIL;
  rcls1_p2466=NIL;
  rcls1_p297=NIL;
  rcls1_p1313=NIL;
  rcls1_p1308=NIL;
  rcls1_p1328=NIL;
  rcls1_p1323=NIL;
  rcls1_p1632=NIL;
  rcls1_p1646=NIL;
  rcls1_p1332=NIL;
  rcls1_p1640=NIL;
  rcls1_p1639=NIL;
  rcls1_p2465=NIL;
  rcls1_p2453=NIL;
  rcls1_p2452=NIL;
  rcls1_p2449=NIL;
  rcls1_p2451=NIL;
  rcls1_p2450=NIL;
  rcls1_p2444=NIL;
  rcls1_p286=NIL;
  rcls1_p60=NIL;
  rcls1_p1297=NIL;
  rcls1_p1621=NIL;
  rcls1_p2440=NIL;
  rcls1_p2442=NIL;
  rcls1_p2441=NIL;
  rcls1_p2443=NIL;
  rcls1_p2435=NIL;
  rcls1_p2518=NIL;
  rcls1_p2507=NIL;
  rcls1_p2492=NIL;
  rcls1_p314=NIL;
  rcls1_p1357=NIL;
  rcls1_p1352=NIL;
  rcls1_p1372=NIL;
  rcls1_p1367=NIL;
  rcls1_p1658=NIL;
  rcls1_p1672=NIL;
  rcls1_p1376=NIL;
  rcls1_p1666=NIL;
  rcls1_p1665=NIL;
  rcls1_p2491=NIL;
  rcls1_p2479=NIL;
  rcls1_p2478=NIL;
  rcls1_p304=NIL;
  rcls1_p63=NIL;
  rcls1_p1342=NIL;
  rcls1_p1648=NIL;
  rcls1_p2292=NIL;
  rcls1_p329=NIL;
  rcls1_p1691=NIL;
  rcls1_p1689=NIL;
  rcls1_p1398=NIL;
  rcls1_p1685=NIL;
  rcls1_p1394=NIL;
  rcls1_p1717=NIL;
  rcls1_p1715=NIL;
  rcls1_p1414=NIL;
  rcls1_p1707=NIL;
  rcls1_p1705=NIL;
  rcls1_p1411=NIL;
  rcls1_p1701=NIL;
  rcls1_p1407=NIL;
  rcls1_p2434=NIL;
  rcls1_p1687=NIL;
  rcls1_p1682=NIL;
  rcls1_p1708=NIL;
  rcls1_p1703=NIL;
  rcls1_p1698=NIL;
  rcls1_p2475=NIL;
  rcls1_p2477=NIL;
  rcls1_p2476=NIL;
  rcls1_p2470=NIL;
  rcls1_p2873=NIL;
  rcls1_p335=NIL;
  rcls1_p64=NIL;
  rcls1_p1422=NIL;
  rcls1_p1718=NIL;
  rcls1_p2265=NIL;
  rcls1_p2297=NIL;
  rcls1_p2850=NIL;
  rcls1_p1158=NIL;
  rcls1_p380=NIL;
  rcls1_p2249=NIL;
  rcls1_p2271=NIL;
  rcls1_p2270=NIL;
  rcls1_p2520=NIL;
  rcls1_p2313=NIL;
  rcls1_p2244=NIL;
  rcls1_p1154=NIL;
  double_or_symbol_result=((rcls1_v6510=(rcls1_v6514-rcls1_v6530)),(rcls1_v2934=((fabs(rcls1_v6510)<rcls1_v6508)?(fabs(rcls1_f6505())<rcls1_v6508):NIL)),(((rcls1_v2934?NIL:(rcls1_f2244()?(rcls1_f1793()?(rcls1_f2850()?(rcls1_f2849()?(rcls1_f2843()?rcls1_f1718():(rcls1_f2507()?(rcls1_f2497()?(rcls1_f2470()?(rcls1_f2435()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1708():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1707()?rcls1_f2434():rcls1_f1990()):rcls1_f1703()):rcls1_f1698()):(rcls1_f2026()?rcls1_f1703():NIL)):(rcls1_f2053()?rcls1_f1698():NIL))):(rcls1_f1975()?rcls1_f1708():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1691()?rcls1_f2434():rcls1_f1878()):rcls1_f1687()):rcls1_f1682()):(rcls1_f1915()?rcls1_f1687():NIL)):(rcls1_f1942()?rcls1_f1682():NIL)))):NIL):NIL):rcls1_f1648()):rcls1_f1621()):(rcls1_f2470()?rcls1_f1648():NIL)):(rcls1_f2497()?rcls1_f1621():NIL))):(rcls1_f2419()?rcls1_f1718():(rcls1_f2400()?(rcls1_f2386()?(rcls1_f2359()?(rcls1_f2323()?(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f1605():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_f1604()?rcls1_f2322():rcls1_f1990()):rcls1_f1600()):rcls1_f1595()):(rcls1_f2026()?rcls1_f1600():NIL)):(rcls1_f2053()?rcls1_f1595():NIL))):(rcls1_f1975()?rcls1_f1605():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_f1588()?rcls1_f2322():rcls1_f1878()):rcls1_f1584()):rcls1_f1579()):(rcls1_f1915()?rcls1_f1584():NIL)):(rcls1_f1942()?rcls1_f1579():NIL)))):NIL):NIL):rcls1_f1545()):rcls1_f1518()):(rcls1_f2359()?rcls1_f1545():NIL)):(rcls1_f2386()?rcls1_f1518():NIL)))):NIL):rcls1_f2313()):rcls1_f1801()))?((rcls1_v1154=rcls1_f1154()),(rcls1_v1154?rcls1_v1154:(fabs(((rcls1_v2934?rcls1_f2531():(rcls1_f2244()?(rcls1_f1793()?rcls1_f1158():rcls1_f2249()):rcls1_f1798()))-(0.0)))<rcls1_v6508))):NIL)?((rcls1_v782=rcls1_f782()),(((rcls1_v782?(rcls1_f420()?(rcls1_f836()?(rcls1_f429()?(rcls1_f477()?T:(rcls1_f439()?NIL:rcls1_f419())):NIL):(rcls1_f794()?NIL:(rcls1_f429()?(rcls1_f477()?(rcls1_f415()?NIL:T):NIL):NIL))):rcls1_f836()):rcls1_f428())?((rcls1_v393=rcls1_f393()),(rcls1_v393?rcls1_v393:(fabs(((rcls1_v782?(rcls1_f420()?rcls1_f396():rcls1_f787()):rcls1_f425())-(0.0)))<rcls1_v6508))):NIL)?coerce_double_to_double_or_symbol((rcls1_v2934?rcls1_f2303():(rcls1_f2244()?(rcls1_f1793()?(rcls1_v782?(rcls1_f420()?((rcls1_v1158=rcls1_f1158()),(rcls1_v396=rcls1_f396()),((rcls1_v1158>rcls1_v396)?rcls1_v1158:rcls1_v396)):(rcls1_f836()?((rcls1_v1158=rcls1_f1158()),(rcls1_v809=rcls1_f809()),((rcls1_v1158>rcls1_v809)?rcls1_v1158:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f380()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v1158=rcls1_f1158()),(rcls1_v454=rcls1_f454()),((rcls1_v1158>rcls1_v454)?rcls1_v1158:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f380())):rcls1_f2303())):(rcls1_f2850()?(rcls1_f2849()?(rcls1_f2843()?rcls1_f335():(rcls1_f2507()?(rcls1_f2497()?(rcls1_f2470()?(rcls1_f2435()?(rcls1_v782?(rcls1_f420()?((rcls1_v2292=rcls1_f2292()),(rcls1_v396=rcls1_f396()),((rcls1_v2292>rcls1_v396)?rcls1_v2292:rcls1_v396)):(rcls1_f836()?((rcls1_v2292=rcls1_f2292()),(rcls1_v809=rcls1_f809()),((rcls1_v2292>rcls1_v809)?rcls1_v2292:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f329()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2292=rcls1_f2292()),(rcls1_v454=rcls1_f454()),((rcls1_v2292>rcls1_v454)?rcls1_v2292:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f329())):rcls1_f2303())):rcls1_f304()):rcls1_f286()):(rcls1_f2470()?rcls1_f304():rcls1_f2303())):(rcls1_f2497()?rcls1_f286():rcls1_f2303()))):(rcls1_f2419()?rcls1_f335():(rcls1_f2400()?(rcls1_f2386()?(rcls1_f2359()?(rcls1_f2323()?(rcls1_v782?(rcls1_f420()?((rcls1_v2280=rcls1_f2280()),(rcls1_v396=rcls1_f396()),((rcls1_v2280>rcls1_v396)?rcls1_v2280:rcls1_v396)):(rcls1_f836()?((rcls1_v2280=rcls1_f2280()),(rcls1_v809=rcls1_f809()),((rcls1_v2280>rcls1_v809)?rcls1_v2280:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f274()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v2280=rcls1_f2280()),(rcls1_v454=rcls1_f454()),((rcls1_v2280>rcls1_v454)?rcls1_v2280:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f274())):rcls1_f2303())):rcls1_f249()):rcls1_f231()):(rcls1_f2359()?rcls1_f249():rcls1_f2303())):(rcls1_f2386()?rcls1_f231():rcls1_f2303())))):rcls1_f2303())):(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f186():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?(rcls1_v782?(rcls1_f420()?((rcls1_v1850=rcls1_f1850()),(rcls1_v396=rcls1_f396()),((rcls1_v1850>rcls1_v396)?rcls1_v1850:rcls1_v396)):(rcls1_f836()?((rcls1_v1850=rcls1_f1850()),(rcls1_v809=rcls1_f809()),((rcls1_v1850>rcls1_v809)?rcls1_v1850:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f180()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v1850=rcls1_f1850()),(rcls1_v454=rcls1_f454()),((rcls1_v1850>rcls1_v454)?rcls1_v1850:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f180())):rcls1_f2303())):rcls1_f155()):rcls1_f137()):(rcls1_f2026()?rcls1_f155():rcls1_f2303())):(rcls1_f2053()?rcls1_f137():rcls1_f2303()))):(rcls1_f1975()?rcls1_f186():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?(rcls1_v782?(rcls1_f420()?((rcls1_v1838=rcls1_f1838()),(rcls1_v396=rcls1_f396()),((rcls1_v1838>rcls1_v396)?rcls1_v1838:rcls1_v396)):(rcls1_f836()?((rcls1_v1838=rcls1_f1838()),(rcls1_v809=rcls1_f809()),((rcls1_v1838>rcls1_v809)?rcls1_v1838:rcls1_v809)):(rcls1_f794()?rcls1_f2303():rcls1_f125()))):(rcls1_f429()?(rcls1_f477()?((rcls1_v1838=rcls1_f1838()),(rcls1_v454=rcls1_f454()),((rcls1_v1838>rcls1_v454)?rcls1_v1838:rcls1_v454)):(rcls1_f439()?rcls1_f2303():rcls1_f125())):rcls1_f2303())):rcls1_f100()):rcls1_f82()):(rcls1_f1915()?rcls1_f100():rcls1_f2303())):(rcls1_f1942()?rcls1_f82():rcls1_f2303())))):rcls1_f2303()):rcls1_f2303())))):(rcls1_v2934?coerce_symbol_to_double_or_symbol(NIL):(rcls1_f2244()?(rcls1_f1793()?coerce_double_to_double_or_symbol(rcls1_f1158()):(rcls1_f2850()?(rcls1_f2849()?(rcls1_f2843()?rcls1_f64():(rcls1_f2507()?(rcls1_f2497()?(rcls1_f2470()?(rcls1_f2435()?coerce_double_to_double_or_symbol(rcls1_f2292()):rcls1_f63()):rcls1_f60()):(rcls1_f2470()?rcls1_f63():coerce_symbol_to_double_or_symbol(NIL))):(rcls1_f2497()?rcls1_f60():coerce_symbol_to_double_or_symbol(NIL)))):(rcls1_f2419()?rcls1_f64():(rcls1_f2400()?(rcls1_f2386()?(rcls1_f2359()?(rcls1_f2323()?coerce_double_to_double_or_symbol(rcls1_f2280()):rcls1_f53()):rcls1_f50()):(rcls1_f2359()?rcls1_f53():coerce_symbol_to_double_or_symbol(NIL))):(rcls1_f2386()?rcls1_f50():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))):(rcls1_f1802()?(rcls1_f2168()?(rcls1_f2167()?(rcls1_f2161()?rcls1_f34():(rcls1_f2063()?(rcls1_f2053()?(rcls1_f2026()?(rcls1_f1991()?coerce_double_to_double_or_symbol(rcls1_f1850()):rcls1_f33()):rcls1_f30()):(rcls1_f2026()?rcls1_f33():coerce_symbol_to_double_or_symbol(NIL))):(rcls1_f2053()?rcls1_f30():coerce_symbol_to_double_or_symbol(NIL)))):(rcls1_f1975()?rcls1_f34():(rcls1_f1956()?(rcls1_f1942()?(rcls1_f1915()?(rcls1_f1879()?coerce_double_to_double_or_symbol(rcls1_f1838()):rcls1_f23()):rcls1_f20()):(rcls1_f1915()?rcls1_f23():coerce_symbol_to_double_or_symbol(NIL))):(rcls1_f1942()?rcls1_f20():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))))):(rcls1_f782()?(rcls1_f420()?coerce_double_to_double_or_symbol(rcls1_f396()):(rcls1_f836()?coerce_double_to_double_or_symbol(rcls1_f809()):coerce_symbol_to_double_or_symbol((rcls1_f794()?NIL:rcls1_f792())))):(rcls1_f429()?(rcls1_f477()?coerce_double_to_double_or_symbol(rcls1_f454()):coerce_symbol_to_double_or_symbol((rcls1_f439()?NIL:rcls1_f792()))):coerce_symbol_to_double_or_symbol(NIL))))); return;}
