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
double rcls2_v6530;
double rcls2_v6528;
double rcls2_v6526;
double rcls2_v6524;
double rcls2_v6522;
double rcls2_v6520;
double rcls2_v6518;
double rcls2_v6516;
double rcls2_v6514;
double rcls2_v6512;
double rcls2_v6508;
double rcls2_v6510;
int rcls2_p3902;
double rcls2_m3902;
int rcls2_p4023;
double rcls2_m4023;
int rcls2_p4020;
double rcls2_m4020;
int rcls2_p781;
int rcls2_m781;
double rcls2_v4023;
double rcls2_v4020;
int rcls2_p4011;
double rcls2_m4011;
int rcls2_p832;
double rcls2_m832;
int rcls2_p834;
double rcls2_m834;
int rcls2_p792;
double rcls2_m792;
int rcls2_p4350;
double rcls2_m4350;
int rcls2_p1131;
double rcls2_m1131;
int rcls2_p4483;
double rcls2_m4483;
int rcls2_p4480;
double rcls2_m4480;
int rcls2_p1146;
int rcls2_m1146;
double rcls2_v4483;
double rcls2_v4480;
int rcls2_p4467;
double rcls2_m4467;
int rcls2_p2304;
double rcls2_m2304;
int rcls2_p2532;
double rcls2_m2532;
int rcls2_p2536;
double rcls2_m2536;
int rcls2_p2790;
double rcls2_m2790;
int rcls2_p2786;
double rcls2_m2786;
int rcls2_p2600;
double rcls2_m2600;
int rcls2_p6312;
double rcls2_m6312;
int rcls2_p6310;
double rcls2_m6310;
int rcls2_p6303;
double rcls2_m6303;
int rcls2_p6301;
double rcls2_m6301;
int rcls2_p6462;
int rcls2_m6462;
int rcls2_p6467;
double rcls2_m6467;
int rcls2_p6465;
int rcls2_m6465;
int rcls2_p5874;
double rcls2_m5874;
int rcls2_p5873;
double rcls2_m5873;
double rcls2_v5873;
double rcls2_v5874;
int rcls2_p4469;
double rcls2_m4469;
int rcls2_p4468;
int rcls2_m4468;
int rcls2_p4431;
double rcls2_m4431;
int rcls2_p4419;
double rcls2_m4419;
int rcls2_p4418;
double rcls2_m4418;
int rcls2_p1030;
double rcls2_m1030;
int rcls2_p5872;
double rcls2_m5872;
int rcls2_p2898;
double rcls2_m2898;
int rcls2_p2915;
double rcls2_m2915;
int rcls2_p2764;
double rcls2_m2764;
int rcls2_p2763;
int rcls2_m2763;
int rcls2_p2742;
double rcls2_m2742;
double rcls2_v2764;
int rcls2_p2750;
double rcls2_m2750;
int rcls2_p2760;
double rcls2_m2760;
int rcls2_p6501;
double rcls2_m6501;
int rcls2_p6499;
double rcls2_m6499;
double rcls2_v6501;
double rcls2_v6499;
int rcls2_p6496;
double rcls2_m6496;
double rcls2_v6496;
int rcls2_p6443;
double rcls2_m6443;
int rcls2_p6494;
double rcls2_m6494;
int rcls2_p6459;
double rcls2_m6459;
int rcls2_p2761;
double rcls2_m2761;
int rcls2_p2758;
double rcls2_m2758;
int rcls2_p2659;
double rcls2_m2659;
int rcls2_p2652;
int rcls2_m2652;
int rcls2_p2658;
double rcls2_m2658;
int rcls2_p2722;
int rcls2_m2722;
int rcls2_p2720;
double rcls2_m2720;
int rcls2_p2741;
double rcls2_m2741;
int rcls2_p2740;
double rcls2_m2740;
int rcls2_p2710;
double rcls2_m2710;
int rcls2_p2708;
double rcls2_m2708;
int rcls2_p2749;
double rcls2_m2749;
int rcls2_p2718;
double rcls2_m2718;
int rcls2_p2716;
double rcls2_m2716;
int rcls2_p2696;
double rcls2_m2696;
int rcls2_p2713;
int rcls2_m2713;
int rcls2_p2702;
double rcls2_m2702;
int rcls2_p2694;
double rcls2_m2694;
double rcls2_v2696;
double rcls2_v2694;
int rcls2_p2684;
int rcls2_m2684;
int rcls2_p2698;
int rcls2_m2698;
int rcls2_p2697;
int rcls2_m2697;
int rcls2_p2747;
double rcls2_m2747;
int rcls2_p2736;
double rcls2_m2736;
int rcls2_p2730;
double rcls2_m2730;
double rcls2_v2736;
double rcls2_v2730;
int rcls2_p2723;
int rcls2_m2723;
int rcls2_p2596;
double rcls2_m2596;
int rcls2_p2582;
double rcls2_m2582;
int rcls2_p2663;
int rcls2_m2663;
int rcls2_p2680;
int rcls2_m2680;
double rcls2_v2758;
int rcls2_p2754;
double rcls2_m2754;
int rcls2_p2674;
double rcls2_m2674;
double rcls2_v2674;
int rcls2_p2636;
double rcls2_m2636;
int rcls2_p2757;
double rcls2_m2757;
int rcls2_p2568;
double rcls2_m2568;
int rcls2_p2546;
int rcls2_m2546;
int rcls2_p2756;
double rcls2_m2756;
int rcls2_p2677;
double rcls2_m2677;
int rcls2_p2635;
double rcls2_m2635;
double rcls2_v2756;
int rcls2_p2755;
double rcls2_m2755;
double rcls2_v2677;
int rcls2_p2670;
double rcls2_m2670;
int rcls2_p2633;
double rcls2_m2633;
int rcls2_p2631;
double rcls2_m2631;
int rcls2_p2630;
double rcls2_m2630;
int rcls2_p2628;
double rcls2_m2628;
double rcls2_v2628;
int rcls2_p2619;
int rcls2_m2619;
int rcls2_p2617;
double rcls2_m2617;
int rcls2_p2616;
double rcls2_m2616;
int rcls2_p2614;
double rcls2_m2614;
double rcls2_v2614;
int rcls2_p2605;
int rcls2_m2605;
int rcls2_p2669;
int rcls2_m2669;
int rcls2_p2752;
double rcls2_m2752;
int rcls2_p2662;
double rcls2_m2662;
int rcls2_p2648;
double rcls2_m2648;
double rcls2_v2648;
int rcls2_p2640;
int rcls2_m2640;
int rcls2_p2661;
double rcls2_m2661;
double rcls2_v2661;
int rcls2_p2650;
int rcls2_m2650;
int rcls2_p2751;
int rcls2_m2751;
int rcls2_p2667;
int rcls2_m2667;
int rcls2_p2602;
int rcls2_m2602;
int rcls2_p2589;
double rcls2_m2589;
int rcls2_p2564;
double rcls2_m2564;
int rcls2_p2575;
double rcls2_m2575;
int rcls2_p2563;
double rcls2_m2563;
int rcls2_p2559;
double rcls2_m2559;
double rcls2_v2559;
int rcls2_p2551;
double rcls2_m2551;
int rcls2_v2667;
double rcls2_v2551;
int rcls2_p2539;
int rcls2_m2539;
int rcls2_p6493;
double rcls2_m6493;
int rcls2_p2243;
double rcls2_m2243;
int rcls2_p2234;
double rcls2_m2234;
int rcls2_p2232;
double rcls2_m2232;
int rcls2_p2233;
double rcls2_m2233;
double rcls2_v2233;
double rcls2_v2232;
int rcls2_p2125;
double rcls2_m2125;
double rcls2_v2233;
double rcls2_v2232;
int rcls2_p2122;
double rcls2_m2122;
int rcls2_p2229;
int rcls2_m2229;
int rcls2_p2241;
double rcls2_m2241;
int rcls2_p2240;
double rcls2_m2240;
int rcls2_p2239;
double rcls2_m2239;
double rcls2_v2240;
double rcls2_v2239;
int rcls2_p2118;
double rcls2_m2118;
double rcls2_v2240;
double rcls2_v2239;
int rcls2_p2115;
double rcls2_m2115;
int rcls2_p2238;
double rcls2_m2238;
int rcls2_p2236;
int rcls2_m2236;
int rcls2_p2227;
double rcls2_m2227;
int rcls2_p2168;
int rcls2_m2168;
int rcls2_p2190;
double rcls2_m2190;
int rcls2_p2210;
double rcls2_m2210;
double rcls2_v2227;
int rcls2_p2226;
double rcls2_m2226;
int rcls2_p2223;
double rcls2_m2223;
int rcls2_p2212;
double rcls2_m2212;
int rcls2_p2222;
double rcls2_m2222;
int rcls2_p2161;
int rcls2_m2161;
int rcls2_p2159;
double rcls2_m2159;
int rcls2_p2073;
double rcls2_m2073;
int rcls2_p2053;
double rcls2_m2053;
int rcls2_p2066;
int rcls2_m2066;
int rcls2_p2072;
double rcls2_m2072;
double rcls2_v2222;
int rcls2_p2165;
double rcls2_m2165;
int rcls2_p1981;
double rcls2_m1981;
double rcls2_v1981;
int rcls2_p1974;
double rcls2_m1974;
int rcls2_p2180;
double rcls2_m2180;
int rcls2_p2189;
double rcls2_m2189;
int rcls2_p2167;
double rcls2_m2167;
int rcls2_p1983;
double rcls2_m1983;
int rcls2_p1973;
double rcls2_m1973;
double rcls2_v2167;
int rcls2_p2166;
double rcls2_m2166;
int rcls2_p2187;
double rcls2_m2187;
int rcls2_p2175;
int rcls2_m2175;
int rcls2_p2209;
double rcls2_m2209;
int rcls2_p2208;
double rcls2_m2208;
int rcls2_p2149;
double rcls2_m2149;
int rcls2_p2147;
double rcls2_m2147;
int rcls2_p2221;
double rcls2_m2221;
int rcls2_p2157;
double rcls2_m2157;
int rcls2_p2141;
double rcls2_m2141;
int rcls2_p2155;
double rcls2_m2155;
int rcls2_p2135;
double rcls2_m2135;
int rcls2_p2133;
double rcls2_m2133;
int rcls2_p2152;
int rcls2_m2152;
int rcls2_p2136;
int rcls2_m2136;
double rcls2_v2135;
double rcls2_v2133;
int rcls2_p2111;
int rcls2_m2111;
int rcls2_v2152;
int rcls2_p2104;
double rcls2_m2104;
double rcls2_v2104;
double rcls2_v792;
int rcls2_p201;
double rcls2_m201;
int rcls2_p2103;
double rcls2_m2103;
double rcls2_v2103;
int rcls2_p2091;
int rcls2_m2091;
int rcls2_v2091;
int rcls2_p2090;
int rcls2_m2090;
int rcls2_p40;
double_or_symbol rcls2_m40;
int rcls2_p1861;
double rcls2_m1861;
double rcls2_v1861;
double rcls2_v792;
int rcls2_p216;
double rcls2_m216;
int rcls2_p2087;
double rcls2_m2087;
int rcls2_p2089;
double rcls2_m2089;
int rcls2_p2088;
int rcls2_m2088;
int rcls2_v2088;
int rcls2_p2082;
int rcls2_m2082;
int rcls2_p1867;
double rcls2_m1867;
int rcls2_p1869;
double rcls2_m1869;
int rcls2_p1868;
int rcls2_m1868;
int rcls2_p2081;
int rcls2_m2081;
int rcls2_v1868;
int rcls2_p1862;
int rcls2_m1862;
int rcls2_p2219;
double rcls2_m2219;
int rcls2_p2204;
double rcls2_m2204;
int rcls2_p2198;
double rcls2_m2198;
int rcls2_p2931;
double rcls2_m2931;
int rcls2_p2922;
double rcls2_m2922;
int rcls2_p2920;
double rcls2_m2920;
int rcls2_p2921;
double rcls2_m2921;
double rcls2_v2921;
double rcls2_v2920;
int rcls2_p2806;
double rcls2_m2806;
double rcls2_v2921;
double rcls2_v2920;
int rcls2_p2803;
double rcls2_m2803;
int rcls2_p2917;
int rcls2_m2917;
int rcls2_p2929;
double rcls2_m2929;
int rcls2_p2928;
double rcls2_m2928;
int rcls2_p2927;
double rcls2_m2927;
double rcls2_v2928;
double rcls2_v2927;
int rcls2_p2799;
double rcls2_m2799;
double rcls2_v2928;
double rcls2_v2927;
int rcls2_p2796;
double rcls2_m2796;
int rcls2_p2926;
double rcls2_m2926;
int rcls2_p2924;
int rcls2_m2924;
int rcls2_p2911;
double rcls2_m2911;
int rcls2_p2849;
int rcls2_m2849;
int rcls2_p2872;
double rcls2_m2872;
int rcls2_p2892;
double rcls2_m2892;
double rcls2_v2911;
int rcls2_p2910;
double rcls2_m2910;
int rcls2_p2907;
double rcls2_m2907;
int rcls2_p2894;
double rcls2_m2894;
int rcls2_p2906;
double rcls2_m2906;
int rcls2_p2842;
int rcls2_m2842;
int rcls2_p2840;
double rcls2_m2840;
int rcls2_p2517;
double rcls2_m2517;
int rcls2_p2497;
double rcls2_m2497;
int rcls2_p2510;
int rcls2_m2510;
int rcls2_p2516;
double rcls2_m2516;
double rcls2_v2906;
int rcls2_p2846;
double rcls2_m2846;
int rcls2_p2425;
double rcls2_m2425;
double rcls2_v2425;
int rcls2_p2418;
double rcls2_m2418;
int rcls2_p2862;
double rcls2_m2862;
int rcls2_p2871;
double rcls2_m2871;
int rcls2_p2848;
double rcls2_m2848;
int rcls2_p2427;
double rcls2_m2427;
int rcls2_p2417;
double rcls2_m2417;
double rcls2_v2848;
int rcls2_p2847;
double rcls2_m2847;
int rcls2_p2869;
double rcls2_m2869;
int rcls2_p2857;
int rcls2_m2857;
int rcls2_p2891;
double rcls2_m2891;
int rcls2_p2890;
double rcls2_m2890;
int rcls2_p2830;
double rcls2_m2830;
int rcls2_p2828;
double rcls2_m2828;
int rcls2_p2905;
double rcls2_m2905;
int rcls2_p2838;
double rcls2_m2838;
int rcls2_p2822;
double rcls2_m2822;
int rcls2_p2836;
double rcls2_m2836;
int rcls2_p2816;
double rcls2_m2816;
int rcls2_p2814;
double rcls2_m2814;
int rcls2_p2833;
int rcls2_m2833;
int rcls2_p2817;
int rcls2_m2817;
double rcls2_v2816;
double rcls2_v2814;
int rcls2_p2792;
int rcls2_m2792;
int rcls2_v2833;
int rcls2_p2781;
double rcls2_m2781;
double rcls2_v2781;
double rcls2_v792;
int rcls2_p350;
double rcls2_m350;
int rcls2_p1748;
int rcls2_m1748;
int rcls2_p2780;
double rcls2_m2780;
double rcls2_v2780;
int rcls2_p2766;
int rcls2_m2766;
int rcls2_v2766;
int rcls2_p2538;
int rcls2_m2538;
int rcls2_p70;
double_or_symbol rcls2_m70;
int rcls2_p2303;
double rcls2_m2303;
double rcls2_v2303;
double rcls2_v792;
int rcls2_p365;
double rcls2_m365;
int rcls2_p1793;
int rcls2_m1793;
int rcls2_p1791;
int rcls2_m1791;
int rcls2_p2531;
double rcls2_m2531;
int rcls2_p2535;
double rcls2_m2535;
int rcls2_p2534;
int rcls2_m2534;
int rcls2_v2534;
int rcls2_p2526;
int rcls2_m2526;
int rcls2_p2311;
double rcls2_m2311;
int rcls2_p2313;
double rcls2_m2313;
int rcls2_p2312;
int rcls2_m2312;
int rcls2_p2525;
int rcls2_m2525;
int rcls2_v2312;
int rcls2_p2306;
int rcls2_m2306;
int rcls2_p2903;
double rcls2_m2903;
int rcls2_p2886;
double rcls2_m2886;
int rcls2_p2880;
double rcls2_m2880;
int rcls2_p6505;
double rcls2_m6505;
int rcls2_v2934;
double rcls2_v6505;
int rcls2_p6469;
double rcls2_m6469;
int rcls2_p6127;
double rcls2_m6127;
int rcls2_p6125;
double rcls2_m6125;
double rcls2_v6125;
int rcls2_p6124;
double rcls2_m6124;
double rcls2_v4011;
int rcls2_p4008;
double rcls2_m4008;
double rcls2_v4008;
int rcls2_p3976;
double rcls2_m3976;
int rcls2_p670;
double rcls2_m670;
int rcls2_p660;
double rcls2_m660;
int rcls2_p666;
double rcls2_m666;
double rcls2_v670;
int rcls2_p668;
double rcls2_m668;
int rcls2_p667;
int rcls2_m667;
int rcls2_p665;
double rcls2_m665;
int rcls2_p659;
double rcls2_m659;
int rcls2_p568;
double rcls2_m568;
int rcls2_p540;
int rcls2_m540;
int rcls2_p658;
double rcls2_m658;
int rcls2_p657;
int rcls2_m657;
int rcls2_p664;
double rcls2_m664;
int rcls2_p566;
double rcls2_m566;
int rcls2_p541;
int rcls2_m541;
int rcls2_p538;
double rcls2_m538;
int rcls2_p533;
double rcls2_m533;
int rcls2_p526;
double rcls2_m526;
int rcls2_p532;
double rcls2_m532;
int rcls2_p525;
double rcls2_m525;
int rcls2_p508;
int rcls2_m508;
int rcls2_p564;
double rcls2_m564;
int rcls2_p521;
double rcls2_m521;
double rcls2_v521;
int rcls2_p513;
double rcls2_m513;
int rcls2_p562;
double rcls2_m562;
int rcls2_p561;
double rcls2_m561;
double rcls2_v561;
int rcls2_p549;
int rcls2_m549;
int rcls2_v549;
double rcls2_v513;
int rcls2_p501;
int rcls2_m501;
int rcls2_p498;
double rcls2_m498;
int rcls2_p500;
double rcls2_m500;
int rcls2_p499;
int rcls2_m499;
int rcls2_v499;
int rcls2_p493;
int rcls2_m493;
int rcls2_p492;
int rcls2_m492;
int rcls2_p490;
int rcls2_m490;
int rcls2_v490;
int rcls2_p484;
int rcls2_m484;
int rcls2_p662;
double rcls2_m662;
int rcls2_p619;
double rcls2_m619;
int rcls2_p596;
double rcls2_m596;
int rcls2_p617;
double rcls2_m617;
int rcls2_p616;
double rcls2_m616;
double rcls2_v616;
int rcls2_p604;
int rcls2_m604;
int rcls2_p661;
int rcls2_m661;
int rcls2_p655;
double rcls2_m655;
int rcls2_p650;
double rcls2_m650;
int rcls2_p643;
double rcls2_m643;
int rcls2_p649;
double rcls2_m649;
double rcls2_v596;
int rcls2_p588;
double rcls2_m588;
int rcls2_p635;
double rcls2_m635;
int rcls2_p642;
double rcls2_m642;
int rcls2_p639;
int rcls2_m639;
int rcls2_p630;
int rcls2_m630;
int rcls2_p629;
int rcls2_m629;
int rcls2_v604;
double rcls2_v588;
int rcls2_p578;
int rcls2_m578;
int rcls2_p576;
int rcls2_m576;
int rcls2_v578;
int rcls2_v576;
int rcls2_p570;
int rcls2_m570;
double rcls2_v635;
int rcls2_p626;
int rcls2_m626;
int rcls2_p3987;
double rcls2_m3987;
int rcls2_p4003;
double rcls2_m4003;
double rcls2_v4003;
int rcls2_p4001;
int rcls2_m4001;
int rcls2_p3993;
int rcls2_m3993;
int rcls2_p3950;
int rcls2_m3950;
int rcls2_v3950;
int rcls2_p3948;
int rcls2_m3948;
int rcls2_p4000;
double rcls2_m4000;
int rcls2_p3998;
int rcls2_m3998;
int rcls2_v3998;
int rcls2_p3994;
int rcls2_m3994;
int rcls2_v3994;
int rcls2_p622;
int rcls2_m622;
int rcls2_v3993;
int rcls2_p775;
double rcls2_m775;
int rcls2_p770;
double rcls2_m770;
int rcls2_p769;
int rcls2_m769;
int rcls2_p773;
double rcls2_m773;
int rcls2_p733;
double rcls2_m733;
int rcls2_p710;
double rcls2_m710;
int rcls2_p731;
double rcls2_m731;
int rcls2_p730;
double rcls2_m730;
double rcls2_v730;
int rcls2_p718;
int rcls2_m718;
int rcls2_p772;
int rcls2_m772;
int rcls2_p767;
double rcls2_m767;
int rcls2_p762;
double rcls2_m762;
int rcls2_p755;
double rcls2_m755;
int rcls2_p761;
double rcls2_m761;
double rcls2_v710;
int rcls2_p702;
double rcls2_m702;
int rcls2_p747;
double rcls2_m747;
int rcls2_p754;
double rcls2_m754;
int rcls2_p751;
int rcls2_m751;
int rcls2_p742;
int rcls2_m742;
int rcls2_p741;
int rcls2_m741;
int rcls2_v718;
double rcls2_v702;
int rcls2_p692;
int rcls2_m692;
int rcls2_p475;
double rcls2_m475;
int rcls2_p689;
double rcls2_m689;
int rcls2_p691;
double rcls2_m691;
int rcls2_p690;
int rcls2_m690;
int rcls2_v690;
int rcls2_p684;
int rcls2_m684;
int rcls2_p681;
int rcls2_m681;
int rcls2_v684;
int rcls2_v681;
int rcls2_p675;
int rcls2_m675;
double rcls2_v747;
int rcls2_p738;
int rcls2_m738;
int rcls2_p736;
int rcls2_m736;
int rcls2_v684;
int rcls2_p470;
double rcls2_m470;
double rcls2_v617;
double rcls2_v562;
int rcls2_p454;
double rcls2_m454;
int rcls2_p415;
int rcls2_m415;
int rcls2_p449;
int rcls2_m449;
int rcls2_p439;
int rcls2_m439;
int rcls2_p671;
int rcls2_m671;
int rcls2_p477;
int rcls2_m477;
int rcls2_p434;
double rcls2_m434;
int rcls2_p437;
double rcls2_m437;
int rcls2_p436;
int rcls2_m436;
int rcls2_v436;
int rcls2_p429;
int rcls2_m429;
int rcls2_p428;
int rcls2_m428;
int rcls2_p425;
double rcls2_m425;
int rcls2_p427;
double rcls2_m427;
int rcls2_p426;
int rcls2_m426;
int rcls2_v426;
int rcls2_p420;
int rcls2_m420;
double rcls2_v4467;
int rcls2_p4464;
double rcls2_m4464;
double rcls2_v4464;
int rcls2_p4430;
double rcls2_m4430;
int rcls2_p1029;
double rcls2_m1029;
int rcls2_p1019;
double rcls2_m1019;
int rcls2_p1025;
double rcls2_m1025;
double rcls2_v1029;
int rcls2_p1027;
double rcls2_m1027;
int rcls2_p1026;
int rcls2_m1026;
int rcls2_p1024;
double rcls2_m1024;
int rcls2_p1018;
double rcls2_m1018;
int rcls2_p927;
double rcls2_m927;
int rcls2_p899;
int rcls2_m899;
int rcls2_p1017;
double rcls2_m1017;
int rcls2_p1016;
int rcls2_m1016;
int rcls2_p1023;
double rcls2_m1023;
int rcls2_p925;
double rcls2_m925;
int rcls2_p900;
int rcls2_m900;
int rcls2_p897;
double rcls2_m897;
int rcls2_p892;
double rcls2_m892;
int rcls2_p885;
double rcls2_m885;
int rcls2_p891;
double rcls2_m891;
int rcls2_p884;
double rcls2_m884;
int rcls2_p867;
int rcls2_m867;
int rcls2_p923;
double rcls2_m923;
int rcls2_p880;
double rcls2_m880;
double rcls2_v880;
int rcls2_p872;
double rcls2_m872;
int rcls2_p921;
double rcls2_m921;
int rcls2_p920;
double rcls2_m920;
double rcls2_v920;
int rcls2_p908;
int rcls2_m908;
int rcls2_v908;
double rcls2_v872;
int rcls2_p860;
int rcls2_m860;
int rcls2_p857;
double rcls2_m857;
int rcls2_p859;
double rcls2_m859;
int rcls2_p858;
int rcls2_m858;
int rcls2_v858;
int rcls2_p852;
int rcls2_m852;
int rcls2_p851;
int rcls2_m851;
int rcls2_p849;
int rcls2_m849;
int rcls2_v849;
int rcls2_p843;
int rcls2_m843;
int rcls2_p1021;
double rcls2_m1021;
int rcls2_p978;
double rcls2_m978;
int rcls2_p955;
double rcls2_m955;
int rcls2_p976;
double rcls2_m976;
int rcls2_p975;
double rcls2_m975;
double rcls2_v975;
int rcls2_p963;
int rcls2_m963;
int rcls2_p1020;
int rcls2_m1020;
int rcls2_p1014;
double rcls2_m1014;
int rcls2_p1009;
double rcls2_m1009;
int rcls2_p1002;
double rcls2_m1002;
int rcls2_p1008;
double rcls2_m1008;
double rcls2_v955;
int rcls2_p947;
double rcls2_m947;
int rcls2_p994;
double rcls2_m994;
int rcls2_p1001;
double rcls2_m1001;
int rcls2_p998;
int rcls2_m998;
int rcls2_p989;
int rcls2_m989;
int rcls2_p988;
int rcls2_m988;
int rcls2_v963;
double rcls2_v947;
int rcls2_p937;
int rcls2_m937;
int rcls2_p935;
int rcls2_m935;
int rcls2_v937;
int rcls2_v935;
int rcls2_p929;
int rcls2_m929;
double rcls2_v994;
int rcls2_p985;
int rcls2_m985;
int rcls2_p4442;
double rcls2_m4442;
int rcls2_p4458;
double rcls2_m4458;
double rcls2_v4458;
int rcls2_p4456;
int rcls2_m4456;
int rcls2_p4448;
int rcls2_m4448;
int rcls2_p4401;
int rcls2_m4401;
int rcls2_v4401;
int rcls2_p4399;
int rcls2_m4399;
int rcls2_p4455;
double rcls2_m4455;
int rcls2_p4453;
int rcls2_m4453;
int rcls2_v4453;
int rcls2_p4449;
int rcls2_m4449;
int rcls2_v4449;
int rcls2_p981;
int rcls2_m981;
int rcls2_v4448;
int rcls2_p1139;
double rcls2_m1139;
int rcls2_p1134;
double rcls2_m1134;
int rcls2_p1133;
int rcls2_m1133;
int rcls2_p1137;
double rcls2_m1137;
int rcls2_p1095;
double rcls2_m1095;
int rcls2_p1071;
double rcls2_m1071;
int rcls2_p1093;
double rcls2_m1093;
int rcls2_p1092;
double rcls2_m1092;
double rcls2_v1092;
int rcls2_p1080;
int rcls2_m1080;
int rcls2_p1136;
int rcls2_m1136;
int rcls2_p1129;
double rcls2_m1129;
int rcls2_p1124;
double rcls2_m1124;
int rcls2_p1117;
double rcls2_m1117;
int rcls2_p1123;
double rcls2_m1123;
double rcls2_v1071;
int rcls2_p1063;
double rcls2_m1063;
int rcls2_p1109;
double rcls2_m1109;
int rcls2_p1116;
double rcls2_m1116;
int rcls2_p1113;
int rcls2_m1113;
int rcls2_p1104;
int rcls2_m1104;
int rcls2_p1103;
int rcls2_m1103;
int rcls2_v1080;
double rcls2_v1063;
int rcls2_p1053;
int rcls2_m1053;
int rcls2_p830;
double rcls2_m830;
int rcls2_p1050;
double rcls2_m1050;
int rcls2_p1052;
double rcls2_m1052;
int rcls2_p1051;
int rcls2_m1051;
int rcls2_v1051;
int rcls2_p1045;
int rcls2_m1045;
int rcls2_p1042;
int rcls2_m1042;
int rcls2_v1045;
int rcls2_v1042;
int rcls2_p1036;
int rcls2_m1036;
double rcls2_v1109;
int rcls2_p1100;
int rcls2_m1100;
int rcls2_p1098;
int rcls2_m1098;
int rcls2_v1045;
int rcls2_p825;
double rcls2_m825;
double rcls2_v976;
double rcls2_v921;
int rcls2_p809;
double rcls2_m809;
int rcls2_p419;
int rcls2_m419;
int rcls2_p804;
int rcls2_m804;
int rcls2_p794;
int rcls2_m794;
int rcls2_p1032;
int rcls2_m1032;
int rcls2_p836;
int rcls2_m836;
double rcls2_v809;
double rcls2_v454;
int rcls2_p396;
double rcls2_m396;
int rcls2_p787;
double rcls2_m787;
int rcls2_p790;
double rcls2_m790;
int rcls2_p789;
int rcls2_m789;
int rcls2_v789;
int rcls2_p782;
int rcls2_m782;
int rcls2_p393;
int rcls2_m393;
double rcls2_v6127;
int rcls2_p6122;
double rcls2_m6122;
double rcls2_v2204;
double rcls2_v2198;
int rcls2_p2191;
int rcls2_m2191;
double rcls2_v1861;
double rcls2_v396;
double rcls2_v1861;
double rcls2_v809;
double rcls2_v1861;
double rcls2_v454;
double rcls2_v2104;
double rcls2_v396;
double rcls2_v2104;
double rcls2_v809;
double rcls2_v2104;
double rcls2_v454;
int rcls2_p186;
double rcls2_m186;
int rcls2_v2082;
int rcls2_p34;
double_or_symbol rcls2_m34;
int rcls2_p1500;
double rcls2_m1500;
double rcls2_v2781;
double rcls2_v2104;
int rcls2_p1462;
double rcls2_m1462;
int rcls2_p1784;
int rcls2_m1784;
int rcls2_p1742;
int rcls2_m1742;
int rcls2_p1824;
double rcls2_m1824;
int rcls2_p1856;
double rcls2_m1856;
int rcls2_v2191;
double rcls2_v2180;
int rcls2_p2169;
int rcls2_m2169;
int rcls2_p2077;
int rcls2_m2077;
double rcls2_v6122;
int rcls2_p6089;
double rcls2_m6089;
double rcls2_v1983;
int rcls2_p1977;
double rcls2_m1977;
int rcls2_p1976;
int rcls2_m1976;
int rcls2_p1971;
double rcls2_m1971;
int rcls2_p1955;
double rcls2_m1955;
int rcls2_p1954;
double rcls2_m1954;
int rcls2_p1952;
double rcls2_m1952;
double rcls2_v1952;
int rcls2_p1943;
int rcls2_m1943;
int rcls2_p1911;
double rcls2_m1911;
double rcls2_v1911;
double rcls2_v792;
int rcls2_p93;
double rcls2_m93;
int rcls2_p1761;
int rcls2_m1761;
int rcls2_p1910;
double rcls2_m1910;
double rcls2_v1910;
int rcls2_p1898;
int rcls2_m1898;
int rcls2_v1898;
int rcls2_p1897;
int rcls2_m1897;
int rcls2_p1894;
double rcls2_m1894;
int rcls2_p1896;
double rcls2_m1896;
int rcls2_p1895;
int rcls2_m1895;
int rcls2_v1895;
int rcls2_p1889;
int rcls2_m1889;
double rcls2_v1911;
double rcls2_v396;
double rcls2_v1911;
double rcls2_v809;
double rcls2_v1911;
double rcls2_v454;
int rcls2_p82;
double rcls2_m82;
int rcls2_p20;
double_or_symbol rcls2_m20;
int rcls2_p1480;
double rcls2_m1480;
double rcls2_v2781;
double rcls2_v1911;
int rcls2_p1438;
double rcls2_m1438;
int rcls2_p1758;
int rcls2_m1758;
int rcls2_p1885;
double rcls2_m1885;
int rcls2_p1887;
double rcls2_m1887;
int rcls2_p1886;
int rcls2_m1886;
int rcls2_p1888;
int rcls2_m1888;
int rcls2_p1874;
int rcls2_m1874;
int rcls2_v1886;
int rcls2_p1880;
int rcls2_m1880;
int rcls2_p1969;
double rcls2_m1969;
int rcls2_p1968;
double rcls2_m1968;
int rcls2_p1966;
double rcls2_m1966;
double rcls2_v1966;
int rcls2_p1957;
int rcls2_m1957;
int rcls2_p1938;
double rcls2_m1938;
double rcls2_v1938;
double rcls2_v792;
int rcls2_p110;
double rcls2_m110;
int rcls2_p1765;
int rcls2_m1765;
int rcls2_p1937;
double rcls2_m1937;
double rcls2_v1937;
int rcls2_p1925;
int rcls2_m1925;
int rcls2_v1925;
int rcls2_p1924;
int rcls2_m1924;
double rcls2_v1938;
double rcls2_v396;
double rcls2_v1938;
double rcls2_v809;
double rcls2_v1938;
double rcls2_v454;
int rcls2_p100;
double rcls2_m100;
int rcls2_p23;
double_or_symbol rcls2_m23;
int rcls2_p1484;
double rcls2_m1484;
double rcls2_v2781;
double rcls2_v1938;
int rcls2_p1443;
double rcls2_m1443;
int rcls2_p1763;
int rcls2_m1763;
double rcls2_v1938;
double rcls2_v1911;
int rcls2_p1839;
double rcls2_m1839;
double rcls2_v1839;
double rcls2_v792;
int rcls2_p125;
double rcls2_m125;
int rcls2_p1767;
int rcls2_m1767;
int rcls2_p1734;
int rcls2_m1734;
int rcls2_p1879;
int rcls2_m1879;
int rcls2_p1921;
double rcls2_m1921;
int rcls2_p1923;
double rcls2_m1923;
int rcls2_p1922;
int rcls2_m1922;
int rcls2_v1922;
int rcls2_p1916;
int rcls2_m1916;
int rcls2_p1876;
int rcls2_m1876;
int rcls2_p2163;
double rcls2_m2163;
int rcls2_p2162;
int rcls2_m2162;
int rcls2_p2076;
double rcls2_m2076;
int rcls2_p2062;
double rcls2_m2062;
double rcls2_v2062;
int rcls2_p2054;
int rcls2_m2054;
int rcls2_p2023;
double rcls2_m2023;
double rcls2_v2023;
double rcls2_v792;
int rcls2_p148;
double rcls2_m148;
int rcls2_p1777;
int rcls2_m1777;
int rcls2_p2022;
double rcls2_m2022;
double rcls2_v2022;
int rcls2_p2010;
int rcls2_m2010;
int rcls2_v2010;
int rcls2_p2009;
int rcls2_m2009;
int rcls2_p2006;
double rcls2_m2006;
int rcls2_p2008;
double rcls2_m2008;
int rcls2_p2007;
int rcls2_m2007;
int rcls2_v2007;
int rcls2_p2001;
int rcls2_m2001;
double rcls2_v2023;
double rcls2_v396;
double rcls2_v2023;
double rcls2_v809;
double rcls2_v2023;
double rcls2_v454;
int rcls2_p137;
double rcls2_m137;
int rcls2_p30;
double_or_symbol rcls2_m30;
int rcls2_p1493;
double rcls2_m1493;
double rcls2_v2781;
double rcls2_v2023;
int rcls2_p1453;
double rcls2_m1453;
int rcls2_p1774;
int rcls2_m1774;
int rcls2_p1997;
double rcls2_m1997;
int rcls2_p1999;
double rcls2_m1999;
int rcls2_p1998;
int rcls2_m1998;
int rcls2_p2000;
int rcls2_m2000;
int rcls2_p1986;
int rcls2_m1986;
int rcls2_v1998;
int rcls2_p1992;
int rcls2_m1992;
int rcls2_p2075;
double rcls2_m2075;
double rcls2_v2075;
int rcls2_p2064;
int rcls2_m2064;
int rcls2_p2049;
double rcls2_m2049;
double rcls2_v2049;
double rcls2_v792;
int rcls2_p165;
double rcls2_m165;
int rcls2_p1781;
int rcls2_m1781;
int rcls2_p2048;
double rcls2_m2048;
double rcls2_v2048;
int rcls2_p2036;
int rcls2_m2036;
int rcls2_v2036;
int rcls2_p2035;
int rcls2_m2035;
double rcls2_v2049;
double rcls2_v396;
double rcls2_v2049;
double rcls2_v809;
double rcls2_v2049;
double rcls2_v454;
int rcls2_p155;
double rcls2_m155;
int rcls2_p33;
double_or_symbol rcls2_m33;
int rcls2_p1497;
double rcls2_m1497;
double rcls2_v2781;
double rcls2_v2049;
int rcls2_p1458;
double rcls2_m1458;
int rcls2_p1779;
int rcls2_m1779;
double rcls2_v2049;
double rcls2_v2023;
int rcls2_p1851;
double rcls2_m1851;
double rcls2_v1851;
double rcls2_v792;
int rcls2_p180;
double rcls2_m180;
int rcls2_p1783;
int rcls2_m1783;
int rcls2_p1741;
int rcls2_m1741;
int rcls2_p1991;
int rcls2_m1991;
int rcls2_p2032;
double rcls2_m2032;
int rcls2_p2034;
double rcls2_m2034;
int rcls2_p2033;
int rcls2_m2033;
int rcls2_v2033;
int rcls2_p2027;
int rcls2_m2027;
int rcls2_p1808;
double rcls2_m1808;
int rcls2_p1830;
double rcls2_m1830;
int rcls2_p1829;
int rcls2_m1829;
int rcls2_p1988;
int rcls2_m1988;
int rcls2_p1870;
int rcls2_m1870;
int rcls2_v1829;
int rcls2_p1803;
int rcls2_m1803;
int rcls2_p1802;
int rcls2_m1802;
int rcls2_p1799;
double rcls2_m1799;
int rcls2_p1801;
double rcls2_m1801;
int rcls2_p1800;
int rcls2_m1800;
int rcls2_v1800;
int rcls2_p1794;
int rcls2_m1794;
double rcls2_v2427;
int rcls2_p2421;
double rcls2_m2421;
int rcls2_p2420;
int rcls2_m2420;
int rcls2_p2415;
double rcls2_m2415;
int rcls2_p2399;
double rcls2_m2399;
int rcls2_p2398;
double rcls2_m2398;
int rcls2_p2396;
double rcls2_m2396;
double rcls2_v2396;
int rcls2_p2387;
int rcls2_m2387;
int rcls2_p2355;
double rcls2_m2355;
double rcls2_v2355;
double rcls2_v792;
int rcls2_p242;
double rcls2_m242;
double rcls2_v2355;
double rcls2_v1938;
int rcls2_p1183;
double rcls2_m1183;
double rcls2_v2355;
double rcls2_v1911;
int rcls2_p1178;
double rcls2_m1178;
double rcls2_v2355;
double rcls2_v2049;
int rcls2_p1198;
double rcls2_m1198;
double rcls2_v2355;
double rcls2_v2023;
int rcls2_p1193;
double rcls2_m1193;
int rcls2_p1530;
int rcls2_m1530;
int rcls2_p1544;
int rcls2_m1544;
double rcls2_v2355;
double rcls2_v2104;
int rcls2_p1202;
double rcls2_m1202;
int rcls2_p1538;
int rcls2_m1538;
int rcls2_p1537;
int rcls2_m1537;
int rcls2_p2354;
double rcls2_m2354;
double rcls2_v2354;
int rcls2_p2342;
int rcls2_m2342;
int rcls2_v2342;
int rcls2_p2341;
int rcls2_m2341;
int rcls2_p2338;
double rcls2_m2338;
int rcls2_p2340;
double rcls2_m2340;
int rcls2_p2339;
int rcls2_m2339;
int rcls2_v2339;
int rcls2_p2333;
int rcls2_m2333;
double rcls2_v2355;
double rcls2_v396;
double rcls2_v2355;
double rcls2_v809;
double rcls2_v2355;
double rcls2_v454;
int rcls2_p231;
double rcls2_m231;
int rcls2_p50;
double_or_symbol rcls2_m50;
int rcls2_p1167;
double rcls2_m1167;
int rcls2_p1519;
int rcls2_m1519;
int rcls2_p2329;
double rcls2_m2329;
int rcls2_p2331;
double rcls2_m2331;
int rcls2_p2330;
int rcls2_m2330;
int rcls2_p2332;
int rcls2_m2332;
int rcls2_v2330;
int rcls2_p2324;
int rcls2_m2324;
int rcls2_p2413;
double rcls2_m2413;
int rcls2_p2412;
double rcls2_m2412;
int rcls2_p2410;
double rcls2_m2410;
double rcls2_v2410;
int rcls2_p2401;
int rcls2_m2401;
int rcls2_p2382;
double rcls2_m2382;
double rcls2_v2382;
double rcls2_v792;
int rcls2_p259;
double rcls2_m259;
double rcls2_v2382;
double rcls2_v1938;
int rcls2_p1227;
double rcls2_m1227;
double rcls2_v2382;
double rcls2_v1911;
int rcls2_p1222;
double rcls2_m1222;
double rcls2_v2382;
double rcls2_v2049;
int rcls2_p1242;
double rcls2_m1242;
double rcls2_v2382;
double rcls2_v2023;
int rcls2_p1237;
double rcls2_m1237;
int rcls2_p1556;
int rcls2_m1556;
int rcls2_p1570;
int rcls2_m1570;
double rcls2_v2382;
double rcls2_v2104;
int rcls2_p1246;
double rcls2_m1246;
int rcls2_p1564;
int rcls2_m1564;
int rcls2_p1563;
int rcls2_m1563;
int rcls2_p2381;
double rcls2_m2381;
double rcls2_v2381;
int rcls2_p2369;
int rcls2_m2369;
int rcls2_v2369;
int rcls2_p2368;
int rcls2_m2368;
double rcls2_v2382;
double rcls2_v396;
double rcls2_v2382;
double rcls2_v809;
double rcls2_v2382;
double rcls2_v454;
int rcls2_p249;
double rcls2_m249;
int rcls2_p53;
double_or_symbol rcls2_m53;
int rcls2_p1212;
double rcls2_m1212;
int rcls2_p1546;
int rcls2_m1546;
double rcls2_v2382;
double rcls2_v2355;
int rcls2_p2281;
double rcls2_m2281;
double rcls2_v2281;
double rcls2_v792;
int rcls2_p274;
double rcls2_m274;
int rcls2_p1589;
int rcls2_m1589;
int rcls2_p1587;
int rcls2_m1587;
int rcls2_p1268;
double rcls2_m1268;
int rcls2_p1583;
int rcls2_m1583;
int rcls2_p1264;
double rcls2_m1264;
int rcls2_p1615;
int rcls2_m1615;
int rcls2_p1613;
int rcls2_m1613;
int rcls2_p1284;
double rcls2_m1284;
int rcls2_p1605;
int rcls2_m1605;
int rcls2_p1603;
int rcls2_m1603;
int rcls2_p1281;
double rcls2_m1281;
int rcls2_p1599;
int rcls2_m1599;
int rcls2_p1277;
double rcls2_m1277;
int rcls2_p2323;
int rcls2_m2323;
int rcls2_p1585;
int rcls2_m1585;
int rcls2_p1580;
int rcls2_m1580;
int rcls2_p1606;
int rcls2_m1606;
int rcls2_p1601;
int rcls2_m1601;
int rcls2_p1596;
int rcls2_m1596;
int rcls2_p2365;
double rcls2_m2365;
int rcls2_p2367;
double rcls2_m2367;
int rcls2_p2366;
int rcls2_m2366;
int rcls2_v2366;
int rcls2_p2360;
int rcls2_m2360;
int rcls2_p2844;
double rcls2_m2844;
int rcls2_p2843;
int rcls2_m2843;
int rcls2_p2520;
double rcls2_m2520;
int rcls2_p2506;
double rcls2_m2506;
double rcls2_v2506;
int rcls2_p2498;
int rcls2_m2498;
int rcls2_p2467;
double rcls2_m2467;
double rcls2_v2467;
double rcls2_v792;
int rcls2_p297;
double rcls2_m297;
double rcls2_v2467;
double rcls2_v1938;
int rcls2_p1314;
double rcls2_m1314;
double rcls2_v2467;
double rcls2_v1911;
int rcls2_p1309;
double rcls2_m1309;
double rcls2_v2467;
double rcls2_v2049;
int rcls2_p1329;
double rcls2_m1329;
double rcls2_v2467;
double rcls2_v2023;
int rcls2_p1324;
double rcls2_m1324;
int rcls2_p1633;
int rcls2_m1633;
int rcls2_p1647;
int rcls2_m1647;
double rcls2_v2467;
double rcls2_v2104;
int rcls2_p1333;
double rcls2_m1333;
int rcls2_p1641;
int rcls2_m1641;
int rcls2_p1640;
int rcls2_m1640;
int rcls2_p2466;
double rcls2_m2466;
double rcls2_v2466;
int rcls2_p2454;
int rcls2_m2454;
int rcls2_v2454;
int rcls2_p2453;
int rcls2_m2453;
int rcls2_p2450;
double rcls2_m2450;
int rcls2_p2452;
double rcls2_m2452;
int rcls2_p2451;
int rcls2_m2451;
int rcls2_v2451;
int rcls2_p2445;
int rcls2_m2445;
double rcls2_v2467;
double rcls2_v396;
double rcls2_v2467;
double rcls2_v809;
double rcls2_v2467;
double rcls2_v454;
int rcls2_p286;
double rcls2_m286;
int rcls2_p60;
double_or_symbol rcls2_m60;
int rcls2_p1298;
double rcls2_m1298;
int rcls2_p1622;
int rcls2_m1622;
int rcls2_p2441;
double rcls2_m2441;
int rcls2_p2443;
double rcls2_m2443;
int rcls2_p2442;
int rcls2_m2442;
int rcls2_p2444;
int rcls2_m2444;
int rcls2_v2442;
int rcls2_p2436;
int rcls2_m2436;
int rcls2_p2519;
double rcls2_m2519;
double rcls2_v2519;
int rcls2_p2508;
int rcls2_m2508;
int rcls2_p2493;
double rcls2_m2493;
double rcls2_v2493;
double rcls2_v792;
int rcls2_p314;
double rcls2_m314;
double rcls2_v2493;
double rcls2_v1938;
int rcls2_p1358;
double rcls2_m1358;
double rcls2_v2493;
double rcls2_v1911;
int rcls2_p1353;
double rcls2_m1353;
double rcls2_v2493;
double rcls2_v2049;
int rcls2_p1373;
double rcls2_m1373;
double rcls2_v2493;
double rcls2_v2023;
int rcls2_p1368;
double rcls2_m1368;
int rcls2_p1659;
int rcls2_m1659;
int rcls2_p1673;
int rcls2_m1673;
double rcls2_v2493;
double rcls2_v2104;
int rcls2_p1377;
double rcls2_m1377;
int rcls2_p1667;
int rcls2_m1667;
int rcls2_p1666;
int rcls2_m1666;
int rcls2_p2492;
double rcls2_m2492;
double rcls2_v2492;
int rcls2_p2480;
int rcls2_m2480;
int rcls2_v2480;
int rcls2_p2479;
int rcls2_m2479;
double rcls2_v2493;
double rcls2_v396;
double rcls2_v2493;
double rcls2_v809;
double rcls2_v2493;
double rcls2_v454;
int rcls2_p304;
double rcls2_m304;
int rcls2_p63;
double_or_symbol rcls2_m63;
int rcls2_p1343;
double rcls2_m1343;
int rcls2_p1649;
int rcls2_m1649;
double rcls2_v2493;
double rcls2_v2467;
int rcls2_p2293;
double rcls2_m2293;
double rcls2_v2293;
double rcls2_v792;
int rcls2_p329;
double rcls2_m329;
int rcls2_p1692;
int rcls2_m1692;
int rcls2_p1690;
int rcls2_m1690;
int rcls2_p1399;
double rcls2_m1399;
int rcls2_p1686;
int rcls2_m1686;
int rcls2_p1395;
double rcls2_m1395;
int rcls2_p1718;
int rcls2_m1718;
int rcls2_p1716;
int rcls2_m1716;
int rcls2_p1415;
double rcls2_m1415;
int rcls2_p1708;
int rcls2_m1708;
int rcls2_p1706;
int rcls2_m1706;
int rcls2_p1412;
double rcls2_m1412;
int rcls2_p1702;
int rcls2_m1702;
int rcls2_p1408;
double rcls2_m1408;
int rcls2_p2435;
int rcls2_m2435;
int rcls2_p1688;
int rcls2_m1688;
int rcls2_p1683;
int rcls2_m1683;
int rcls2_p1709;
int rcls2_m1709;
int rcls2_p1704;
int rcls2_m1704;
int rcls2_p1699;
int rcls2_m1699;
int rcls2_p2476;
double rcls2_m2476;
int rcls2_p2478;
double rcls2_m2478;
int rcls2_p2477;
int rcls2_m2477;
int rcls2_v2477;
int rcls2_p2471;
int rcls2_m2471;
double rcls2_v2886;
double rcls2_v2880;
int rcls2_p2873;
int rcls2_m2873;
double rcls2_v2303;
double rcls2_v396;
double rcls2_v2303;
double rcls2_v809;
double rcls2_v2303;
double rcls2_v454;
double rcls2_v2781;
double rcls2_v396;
double rcls2_v2781;
double rcls2_v809;
double rcls2_v2781;
double rcls2_v454;
int rcls2_p335;
double rcls2_m335;
int rcls2_v2526;
int rcls2_p64;
double_or_symbol rcls2_m64;
int rcls2_p1423;
double rcls2_m1423;
int rcls2_p1719;
int rcls2_m1719;
int rcls2_p2266;
double rcls2_m2266;
int rcls2_p2298;
double rcls2_m2298;
int rcls2_v2873;
double rcls2_v2862;
int rcls2_p2850;
int rcls2_m2850;
int rcls2_p1159;
double rcls2_m1159;
double rcls2_v1159;
double rcls2_v792;
int rcls2_p380;
double rcls2_m380;
int rcls2_p2250;
double rcls2_m2250;
int rcls2_p2272;
double rcls2_m2272;
int rcls2_p2271;
int rcls2_m2271;
int rcls2_p2521;
int rcls2_m2521;
int rcls2_p2314;
int rcls2_m2314;
int rcls2_v2271;
int rcls2_p2245;
int rcls2_m2245;
int rcls2_p1155;
int rcls2_m1155;
int rcls2_v1155;
int rcls2_v782;
int rcls2_v393;
double rcls2_v1159;
double rcls2_v396;
double rcls2_v1159;
double rcls2_v809;
double rcls2_v1159;
double rcls2_v454;
double rcls2_v2293;
double rcls2_v396;
double rcls2_v2293;
double rcls2_v809;
double rcls2_v2293;
double rcls2_v454;
double rcls2_v2281;
double rcls2_v396;
double rcls2_v2281;
double rcls2_v809;
double rcls2_v2281;
double rcls2_v454;
double rcls2_v1851;
double rcls2_v396;
double rcls2_v1851;
double rcls2_v809;
double rcls2_v1851;
double rcls2_v454;
double rcls2_v1839;
double rcls2_v396;
double rcls2_v1839;
double rcls2_v809;
double rcls2_v1839;
double rcls2_v454;
static double rcls2_f3902(){if (rcls2_p3902) return rcls2_m3902; else {rcls2_p3902=T;return rcls2_m3902=atan2((rcls2_v6516-rcls2_v6512),(rcls2_v6518-rcls2_v6514));}}
static double rcls2_f4023(){if (rcls2_p4023) return rcls2_m4023; else {rcls2_p4023=T;return rcls2_m4023=(rcls2_v6514-rcls2_v6518);}}
static double rcls2_f4020(){if (rcls2_p4020) return rcls2_m4020; else {rcls2_p4020=T;return rcls2_m4020=(rcls2_v6512-rcls2_v6516);}}
static int rcls2_f781(){if (rcls2_p781) return rcls2_m781; else {rcls2_p781=T;return rcls2_m781=((fabs(rcls2_f4023())<rcls2_v6508)?(fabs(rcls2_f4020())<rcls2_v6508):NIL);}}
static double rcls2_f4011(){if (rcls2_p4011) return rcls2_m4011; else {rcls2_p4011=T;return rcls2_m4011=((rcls2_v4023=rcls2_f4023()),(rcls2_v4020=rcls2_f4020()),(rcls2_v6514-(rcls2_v6514+sqrt(((rcls2_v4023*rcls2_v4023)+(rcls2_v4020*rcls2_v4020))))));}}
static double rcls2_f832(){if (rcls2_p832) return rcls2_m832; else {rcls2_p832=T;return rcls2_m832=error("Non-numeric argument to MAX");}}
static double rcls2_f834(){if (rcls2_p834) return rcls2_m834; else {rcls2_p834=T;return rcls2_m834=error("Argument DIRECTION not of type FLOAT");}}
static double rcls2_f792(){if (rcls2_p792) return rcls2_m792; else {rcls2_p792=T;return rcls2_m792=error("No applicable method for OPPOSITE with argument types ((OR NULL FLOAT))");}}
static double rcls2_f4350(){if (rcls2_p4350) return rcls2_m4350; else {rcls2_p4350=T;return rcls2_m4350=atan2((rcls2_v6520-rcls2_v6512),(rcls2_v6522-rcls2_v6514));}}
static double rcls2_f1131(){if (rcls2_p1131) return rcls2_m1131; else {rcls2_p1131=T;return rcls2_m1131=error("Can't form tangent when points are the same");}}
static double rcls2_f4483(){if (rcls2_p4483) return rcls2_m4483; else {rcls2_p4483=T;return rcls2_m4483=(rcls2_v6514-rcls2_v6522);}}
static double rcls2_f4480(){if (rcls2_p4480) return rcls2_m4480; else {rcls2_p4480=T;return rcls2_m4480=(rcls2_v6512-rcls2_v6520);}}
static int rcls2_f1146(){if (rcls2_p1146) return rcls2_m1146; else {rcls2_p1146=T;return rcls2_m1146=((fabs(rcls2_f4483())<rcls2_v6508)?(fabs(rcls2_f4480())<rcls2_v6508):NIL);}}
static double rcls2_f4467(){if (rcls2_p4467) return rcls2_m4467; else {rcls2_p4467=T;return rcls2_m4467=((rcls2_v4483=rcls2_f4483()),(rcls2_v4480=rcls2_f4480()),(rcls2_v6514-(rcls2_v6514+sqrt(((rcls2_v4483*rcls2_v4483)+(rcls2_v4480*rcls2_v4480))))));}}
static double rcls2_f2304(){if (rcls2_p2304) return rcls2_m2304; else {rcls2_p2304=T;return rcls2_m2304=error("Non-numeric argument to MIN");}}
static double rcls2_f2532(){if (rcls2_p2532) return rcls2_m2532; else {rcls2_p2532=T;return rcls2_m2532=error("Argument X not of type FLOAT");}}
static double rcls2_f2536(){if (rcls2_p2536) return rcls2_m2536; else {rcls2_p2536=T;return rcls2_m2536=error("Argument X not of type REAL");}}
static double rcls2_f2790(){if (rcls2_p2790) return rcls2_m2790; else {rcls2_p2790=T;return rcls2_m2790=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rcls2_f2786(){if (rcls2_p2786) return rcls2_m2786; else {rcls2_p2786=T;return rcls2_m2786=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double rcls2_f2600(){if (rcls2_p2600) return rcls2_m2600; else {rcls2_p2600=T;return rcls2_m2600=error("SLOT-VALUE called on non-instance");}}
static double rcls2_f6312(){if (rcls2_p6312) return rcls2_m6312; else {rcls2_p6312=T;return rcls2_m6312=(((rcls2_v6522<rcls2_v6518)?rcls2_v6522:rcls2_v6518)-rcls2_v6508);}}
static double rcls2_f6310(){if (rcls2_p6310) return rcls2_m6310; else {rcls2_p6310=T;return rcls2_m6310=(((rcls2_v6522>rcls2_v6518)?rcls2_v6522:rcls2_v6518)+rcls2_v6508);}}
static double rcls2_f6303(){if (rcls2_p6303) return rcls2_m6303; else {rcls2_p6303=T;return rcls2_m6303=(((rcls2_v6520<rcls2_v6516)?rcls2_v6520:rcls2_v6516)-rcls2_v6508);}}
static double rcls2_f6301(){if (rcls2_p6301) return rcls2_m6301; else {rcls2_p6301=T;return rcls2_m6301=(((rcls2_v6520>rcls2_v6516)?rcls2_v6520:rcls2_v6516)+rcls2_v6508);}}
static int rcls2_f6462(){if (rcls2_p6462) return rcls2_m6462; else {rcls2_p6462=T;return rcls2_m6462=(fabs((rcls2_v6522-rcls2_v6518))<rcls2_v6508);}}
static double rcls2_f6467(){if (rcls2_p6467) return rcls2_m6467; else {rcls2_p6467=T;return rcls2_m6467=(rcls2_v6520-rcls2_v6516);}}
static int rcls2_f6465(){if (rcls2_p6465) return rcls2_m6465; else {rcls2_p6465=T;return rcls2_m6465=(fabs(rcls2_f6467())<rcls2_v6508);}}
static double rcls2_f5874(){if (rcls2_p5874) return rcls2_m5874; else {rcls2_p5874=T;return rcls2_m5874=(rcls2_v6528-rcls2_v6512);}}
static double rcls2_f5873(){if (rcls2_p5873) return rcls2_m5873; else {rcls2_p5873=T;return rcls2_m5873=(rcls2_v6530-rcls2_v6514);}}
static double rcls2_f4469(){if (rcls2_p4469) return rcls2_m4469; else {rcls2_p4469=T;return rcls2_m4469=((rcls2_v5873=rcls2_f5873()),(rcls2_v5874=rcls2_f5874()),((rcls2_v5873*rcls2_v5873)+(rcls2_v5874*rcls2_v5874)));}}
static int rcls2_f4468(){if (rcls2_p4468) return rcls2_m4468; else {rcls2_p4468=T;return rcls2_m4468=(rcls2_f4469()==0.0);}}
static double rcls2_f4431(){if (rcls2_p4431) return rcls2_m4431; else {rcls2_p4431=T;return rcls2_m4431=sqrt(rcls2_f4469());}}
static double rcls2_f4419(){if (rcls2_p4419) return rcls2_m4419; else {rcls2_p4419=T;return rcls2_m4419=(rcls2_f5873()/rcls2_f4431());}}
static double rcls2_f4418(){if (rcls2_p4418) return rcls2_m4418; else {rcls2_p4418=T;return rcls2_m4418=(rcls2_f5874()/rcls2_f4431());}}
static double rcls2_f1030(){if (rcls2_p1030) return rcls2_m1030; else {rcls2_p1030=T;return rcls2_m1030=((2.0)*rcls2_f4431());}}
static double rcls2_f5872(){if (rcls2_p5872) return rcls2_m5872; else {rcls2_p5872=T;return rcls2_m5872=atan2(rcls2_f5874(),rcls2_f5873());}}
static double rcls2_f2898(){if (rcls2_p2898) return rcls2_m2898; else {rcls2_p2898=T;return rcls2_m2898=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static double rcls2_f2915(){if (rcls2_p2915) return rcls2_m2915; else {rcls2_p2915=T;return rcls2_m2915=error("Can't form a single line when the end points are the same");}}
static double rcls2_f2764(){if (rcls2_p2764) return rcls2_m2764; else {rcls2_p2764=T;return rcls2_m2764=(rcls2_f6465()?(rcls2_f6462()?rcls2_f2915():(0.0)):(1.0));}}
static int rcls2_f2763(){if (rcls2_p2763) return rcls2_m2763; else {rcls2_p2763=T;return rcls2_m2763=(rcls2_f2764()==0.0);}}
static double rcls2_f2742(){if (rcls2_p2742) return rcls2_m2742; else {rcls2_p2742=T;return rcls2_m2742=(rcls2_f2764()*rcls2_v6528);}}
static double rcls2_f2750(){if (rcls2_p2750) return rcls2_m2750; else {rcls2_p2750=T;return rcls2_m2750=((rcls2_v2764=rcls2_f2764()),(rcls2_v2764*rcls2_v2764));}}
static double rcls2_f2760(){if (rcls2_p2760) return rcls2_m2760; else {rcls2_p2760=T;return rcls2_m2760=(rcls2_f2764()*rcls2_v6530);}}
static double rcls2_f6501(){if (rcls2_p6501) return rcls2_m6501; else {rcls2_p6501=T;return rcls2_m6501=(rcls2_v6530-rcls2_v6526);}}
static double rcls2_f6499(){if (rcls2_p6499) return rcls2_m6499; else {rcls2_p6499=T;return rcls2_m6499=(rcls2_v6528-rcls2_v6524);}}
static double rcls2_f6496(){if (rcls2_p6496) return rcls2_m6496; else {rcls2_p6496=T;return rcls2_m6496=((rcls2_v6501=rcls2_f6501()),(rcls2_v6499=rcls2_f6499()),sqrt(((rcls2_v6501*rcls2_v6501)+(rcls2_v6499*rcls2_v6499))));}}
static double rcls2_f6443(){if (rcls2_p6443) return rcls2_m6443; else {rcls2_p6443=T;return rcls2_m6443=((rcls2_v6496=rcls2_f6496()),(rcls2_v6496*rcls2_v6496));}}
static double rcls2_f6494(){if (rcls2_p6494) return rcls2_m6494; else {rcls2_p6494=T;return rcls2_m6494=(rcls2_v6518-rcls2_v6522);}}
static double rcls2_f6459(){if (rcls2_p6459) return rcls2_m6459; else {rcls2_p6459=T;return rcls2_m6459=(rcls2_f6494()/rcls2_f6467());}}
static double rcls2_f2761(){if (rcls2_p2761) return rcls2_m2761; else {rcls2_p2761=T;return rcls2_m2761=(rcls2_f6465()?(rcls2_f6462()?rcls2_f2915():rcls2_v6520):(rcls2_v6522+(rcls2_f6459()*rcls2_v6520)));}}
static double rcls2_f2758(){if (rcls2_p2758) return rcls2_m2758; else {rcls2_p2758=T;return rcls2_m2758=(rcls2_f6465()?(rcls2_f6462()?rcls2_f2915():(1.0)):rcls2_f6459());}}
static double rcls2_f2659(){if (rcls2_p2659) return rcls2_m2659; else {rcls2_p2659=T;return rcls2_m2659=(rcls2_f2761()/rcls2_f2758());}}
static int rcls2_f2652(){if (rcls2_p2652) return rcls2_m2652; else {rcls2_p2652=T;return rcls2_m2652=((rcls2_f6303()<=rcls2_f2659())&&(rcls2_f2659()<=rcls2_f6301()));}}
static double rcls2_f2658(){if (rcls2_p2658) return rcls2_m2658; else {rcls2_p2658=T;return rcls2_m2658=(rcls2_f2758()*rcls2_f2659());}}
static int rcls2_f2722(){if (rcls2_p2722) return rcls2_m2722; else {rcls2_p2722=T;return rcls2_m2722=(rcls2_f2758()>0.0);}}
static double rcls2_f2720(){if (rcls2_p2720) return rcls2_m2720; else {rcls2_p2720=T;return rcls2_m2720=(rcls2_f2722()?(-rcls2_f2764()):rcls2_f2764());}}
static double rcls2_f2741(){if (rcls2_p2741) return rcls2_m2741; else {rcls2_p2741=T;return rcls2_m2741=(rcls2_f2758()*rcls2_v6530);}}
static double rcls2_f2740(){if (rcls2_p2740) return rcls2_m2740; else {rcls2_p2740=T;return rcls2_m2740=(rcls2_f2742()-rcls2_f2741());}}
static double rcls2_f2710(){if (rcls2_p2710) return rcls2_m2710; else {rcls2_p2710=T;return rcls2_m2710=(rcls2_f2722()?(rcls2_f2741()-rcls2_f2742()):rcls2_f2740());}}
static double rcls2_f2708(){if (rcls2_p2708) return rcls2_m2708; else {rcls2_p2708=T;return rcls2_m2708=((rcls2_f2761()*rcls2_f2720())-(rcls2_f2758()*rcls2_f2710()));}}
static double rcls2_f2749(){if (rcls2_p2749) return rcls2_m2749; else {rcls2_p2749=T;return rcls2_m2749=(-rcls2_f2758());}}
static double rcls2_f2718(){if (rcls2_p2718) return rcls2_m2718; else {rcls2_p2718=T;return rcls2_m2718=(rcls2_f2722()?rcls2_f2758():rcls2_f2749());}}
static double rcls2_f2716(){if (rcls2_p2716) return rcls2_m2716; else {rcls2_p2716=T;return rcls2_m2716=((rcls2_f2764()*rcls2_f2720())-(rcls2_f2758()*rcls2_f2718()));}}
static double rcls2_f2696(){if (rcls2_p2696) return rcls2_m2696; else {rcls2_p2696=T;return rcls2_m2696=(rcls2_f2708()/rcls2_f2716());}}
static int rcls2_f2713(){if (rcls2_p2713) return rcls2_m2713; else {rcls2_p2713=T;return rcls2_m2713=(fabs((rcls2_f2716()-(0.0)))<rcls2_v6508);}}
static double rcls2_f2702(){if (rcls2_p2702) return rcls2_m2702; else {rcls2_p2702=T;return rcls2_m2702=((rcls2_f2764()*rcls2_f2710())-(rcls2_f2761()*rcls2_f2718()));}}
static double rcls2_f2694(){if (rcls2_p2694) return rcls2_m2694; else {rcls2_p2694=T;return rcls2_m2694=(rcls2_f2702()/rcls2_f2716());}}
static int rcls2_f2684(){if (rcls2_p2684) return rcls2_m2684; else {rcls2_p2684=T;return rcls2_m2684=(rcls2_f2713()?NIL:((rcls2_v2696=rcls2_f2696()),(rcls2_v2694=rcls2_f2694()),((fabs((((rcls2_f2764()*rcls2_v2696)+(rcls2_f2758()*rcls2_v2694))-rcls2_f2761()))<rcls2_v6508)?(((rcls2_f6312()<=rcls2_v2696)&&(rcls2_v2696<=rcls2_f6310()))?((rcls2_f6303()<=rcls2_v2694)&&(rcls2_v2694<=rcls2_f6301())):NIL):NIL)));}}
static int rcls2_f2698(){if (rcls2_p2698) return rcls2_m2698; else {rcls2_p2698=T;return rcls2_m2698=((fabs((rcls2_f2708()-(0.0)))<rcls2_v6508)?(fabs((rcls2_f2702()-(0.0)))<rcls2_v6508):NIL);}}
static int rcls2_f2697(){if (rcls2_p2697) return rcls2_m2697; else {rcls2_p2697=T;return rcls2_m2697=(rcls2_f2713()?rcls2_f2698():T);}}
static double rcls2_f2747(){if (rcls2_p2747) return rcls2_m2747; else {rcls2_p2747=T;return rcls2_m2747=(rcls2_f2750()-(rcls2_f2758()*rcls2_f2749()));}}
static double rcls2_f2736(){if (rcls2_p2736) return rcls2_m2736; else {rcls2_p2736=T;return rcls2_m2736=((((rcls2_f2761()*rcls2_f2764())-(rcls2_f2758()*rcls2_f2740()))/rcls2_f2747())-rcls2_v6530);}}
static double rcls2_f2730(){if (rcls2_p2730) return rcls2_m2730; else {rcls2_p2730=T;return rcls2_m2730=((((rcls2_f2764()*rcls2_f2740())-(rcls2_f2761()*rcls2_f2749()))/rcls2_f2747())-rcls2_v6528);}}
static int rcls2_f2723(){if (rcls2_p2723) return rcls2_m2723; else {rcls2_p2723=T;return rcls2_m2723=(fabs((((fabs((rcls2_f2747()-(0.0)))<rcls2_v6508)?rcls2_f2898():((rcls2_v2736=rcls2_f2736()),(rcls2_v2730=rcls2_f2730()),sqrt(((rcls2_v2736*rcls2_v2736)+(rcls2_v2730*rcls2_v2730)))))-rcls2_f6496()))<rcls2_v6508);}}
static double rcls2_f2596(){if (rcls2_p2596) return rcls2_m2596; else {rcls2_p2596=T;return rcls2_m2596=(rcls2_f2723()?(rcls2_f2697()?(rcls2_f2684()?(rcls2_f2713()?rcls2_f2600():rcls2_f2696()):rcls2_f2600()):rcls2_f2600()):rcls2_f2600());}}
static double rcls2_f2582(){if (rcls2_p2582) return rcls2_m2582; else {rcls2_p2582=T;return rcls2_m2582=(rcls2_f2723()?(rcls2_f2697()?(rcls2_f2684()?(rcls2_f2713()?rcls2_f2600():rcls2_f2694()):rcls2_f2600()):rcls2_f2600()):rcls2_f2600());}}
static int rcls2_f2663(){if (rcls2_p2663) return rcls2_m2663; else {rcls2_p2663=T;return rcls2_m2663=(rcls2_f2723()?(rcls2_f2697()?(rcls2_f2684()?(rcls2_f2713()?NIL:T):NIL):NIL):NIL);}}
static int rcls2_f2680(){if (rcls2_p2680) return rcls2_m2680; else {rcls2_p2680=T;return rcls2_m2680=(rcls2_f2723()?(rcls2_f2697()?(rcls2_f2684()?(rcls2_f2713()?rcls2_f2698():NIL):NIL):NIL):NIL);}}
static double rcls2_f2754(){if (rcls2_p2754) return rcls2_m2754; else {rcls2_p2754=T;return rcls2_m2754=((rcls2_v2758=rcls2_f2758()),(rcls2_v2758*rcls2_v2758));}}
static double rcls2_f2674(){if (rcls2_p2674) return rcls2_m2674; else {rcls2_p2674=T;return rcls2_m2674=(rcls2_f2750()+rcls2_f2754());}}
static double rcls2_f2636(){if (rcls2_p2636) return rcls2_m2636; else {rcls2_p2636=T;return rcls2_m2636=((rcls2_v2674=rcls2_f2674()),(rcls2_v2674+rcls2_v2674));}}
static double rcls2_f2757(){if (rcls2_p2757) return rcls2_m2757; else {rcls2_p2757=T;return rcls2_m2757=(rcls2_f2758()*rcls2_v6528);}}
static double rcls2_f2568(){if (rcls2_p2568) return rcls2_m2568; else {rcls2_p2568=T;return rcls2_m2568=((rcls2_f2760()+rcls2_f2757())-rcls2_f2761());}}
static int rcls2_f2546(){if (rcls2_p2546) return rcls2_m2546; else {rcls2_p2546=T;return rcls2_m2546=(rcls2_f2568()>(0.0));}}
static double rcls2_f2756(){if (rcls2_p2756) return rcls2_m2756; else {rcls2_p2756=T;return rcls2_m2756=(rcls2_f2761()-rcls2_f2760()-rcls2_f2757());}}
static double rcls2_f2677(){if (rcls2_p2677) return rcls2_m2677; else {rcls2_p2677=T;return rcls2_m2677=((-2.0)*rcls2_f2758()*rcls2_f2756());}}
static double rcls2_f2635(){if (rcls2_p2635) return rcls2_m2635; else {rcls2_p2635=T;return rcls2_m2635=((-rcls2_f2677())/rcls2_f2636());}}
static double rcls2_f2755(){if (rcls2_p2755) return rcls2_m2755; else {rcls2_p2755=T;return rcls2_m2755=((rcls2_v2756=rcls2_f2756()),(rcls2_v2756*rcls2_v2756));}}
static double rcls2_f2670(){if (rcls2_p2670) return rcls2_m2670; else {rcls2_p2670=T;return rcls2_m2670=((rcls2_v2677=rcls2_f2677()),((rcls2_v2677*rcls2_v2677)-((4.0)*rcls2_f2674()*(rcls2_f2755()-(rcls2_f2750()*rcls2_f6443())))));}}
static double rcls2_f2633(){if (rcls2_p2633) return rcls2_m2633; else {rcls2_p2633=T;return rcls2_m2633=(sqrt(rcls2_f2670())/rcls2_f2636());}}
static double rcls2_f2631(){if (rcls2_p2631) return rcls2_m2631; else {rcls2_p2631=T;return rcls2_m2631=((rcls2_f2635()+rcls2_f2633())+rcls2_v6528);}}
static double rcls2_f2630(){if (rcls2_p2630) return rcls2_m2630; else {rcls2_p2630=T;return rcls2_m2630=(rcls2_f2758()*rcls2_f2631());}}
static double rcls2_f2628(){if (rcls2_p2628) return rcls2_m2628; else {rcls2_p2628=T;return rcls2_m2628=((rcls2_f2761()-rcls2_f2630())/rcls2_f2764());}}
static int rcls2_f2619(){if (rcls2_p2619) return rcls2_m2619; else {rcls2_p2619=T;return rcls2_m2619=((rcls2_v2628=rcls2_f2628()),((fabs((((rcls2_f2764()*rcls2_v2628)+rcls2_f2630())-rcls2_f2761()))<rcls2_v6508)?(((rcls2_f6312()<=rcls2_v2628)&&(rcls2_v2628<=rcls2_f6310()))?((rcls2_f6303()<=rcls2_f2631())&&(rcls2_f2631()<=rcls2_f6301())):NIL):NIL));}}
static double rcls2_f2617(){if (rcls2_p2617) return rcls2_m2617; else {rcls2_p2617=T;return rcls2_m2617=((rcls2_f2635()-rcls2_f2633())+rcls2_v6528);}}
static double rcls2_f2616(){if (rcls2_p2616) return rcls2_m2616; else {rcls2_p2616=T;return rcls2_m2616=(rcls2_f2758()*rcls2_f2617());}}
static double rcls2_f2614(){if (rcls2_p2614) return rcls2_m2614; else {rcls2_p2614=T;return rcls2_m2614=((rcls2_f2761()-rcls2_f2616())/rcls2_f2764());}}
static int rcls2_f2605(){if (rcls2_p2605) return rcls2_m2605; else {rcls2_p2605=T;return rcls2_m2605=((rcls2_v2614=rcls2_f2614()),((fabs((((rcls2_f2764()*rcls2_v2614)+rcls2_f2616())-rcls2_f2761()))<rcls2_v6508)?(((rcls2_f6312()<=rcls2_v2614)&&(rcls2_v2614<=rcls2_f6310()))?((rcls2_f6303()<=rcls2_f2617())&&(rcls2_f2617()<=rcls2_f6301())):NIL):NIL));}}
static int rcls2_f2669(){if (rcls2_p2669) return rcls2_m2669; else {rcls2_p2669=T;return rcls2_m2669=(rcls2_f2670()<0.0);}}
static double rcls2_f2752(){if (rcls2_p2752) return rcls2_m2752; else {rcls2_p2752=T;return rcls2_m2752=(rcls2_f6443()-(rcls2_f2755()/rcls2_f2754()));}}
static double rcls2_f2662(){if (rcls2_p2662) return rcls2_m2662; else {rcls2_p2662=T;return rcls2_m2662=sqrt(rcls2_f2752());}}
static double rcls2_f2648(){if (rcls2_p2648) return rcls2_m2648; else {rcls2_p2648=T;return rcls2_m2648=((-rcls2_f2662())+rcls2_v6530);}}
static int rcls2_f2640(){if (rcls2_p2640) return rcls2_m2640; else {rcls2_p2640=T;return rcls2_m2640=((rcls2_v2648=rcls2_f2648()),((fabs((((rcls2_f2764()*rcls2_v2648)+rcls2_f2658())-rcls2_f2761()))<rcls2_v6508)?(((rcls2_f6312()<=rcls2_v2648)&&(rcls2_v2648<=rcls2_f6310()))?rcls2_f2652():NIL):NIL));}}
static double rcls2_f2661(){if (rcls2_p2661) return rcls2_m2661; else {rcls2_p2661=T;return rcls2_m2661=(rcls2_f2662()+rcls2_v6530);}}
static int rcls2_f2650(){if (rcls2_p2650) return rcls2_m2650; else {rcls2_p2650=T;return rcls2_m2650=((rcls2_v2661=rcls2_f2661()),((fabs((((rcls2_f2764()*rcls2_v2661)+rcls2_f2658())-rcls2_f2761()))<rcls2_v6508)?(((rcls2_f6312()<=rcls2_v2661)&&(rcls2_v2661<=rcls2_f6310()))?rcls2_f2652():NIL):NIL));}}
static int rcls2_f2751(){if (rcls2_p2751) return rcls2_m2751; else {rcls2_p2751=T;return rcls2_m2751=(rcls2_f2752()<0.0);}}
static int rcls2_f2667(){if (rcls2_p2667) return rcls2_m2667; else {rcls2_p2667=T;return rcls2_m2667=(rcls2_f2763()?(rcls2_f2751()?rcls2_f2680():NIL):(rcls2_f2669()?rcls2_f2680():NIL));}}
static int rcls2_f2602(){if (rcls2_p2602) return rcls2_m2602; else {rcls2_p2602=T;return rcls2_m2602=(rcls2_f2763()?(rcls2_f2751()?rcls2_f2663():(rcls2_f2650()?T:rcls2_f2640())):(rcls2_f2669()?rcls2_f2663():(rcls2_f2619()?T:rcls2_f2605())));}}
static double rcls2_f2589(){if (rcls2_p2589) return rcls2_m2589; else {rcls2_p2589=T;return rcls2_m2589=(rcls2_f2763()?(rcls2_f2751()?rcls2_f2596():(rcls2_f2650()?rcls2_f2661():(rcls2_f2640()?rcls2_f2648():rcls2_f2600()))):(rcls2_f2669()?rcls2_f2596():(rcls2_f2619()?rcls2_f2628():(rcls2_f2605()?rcls2_f2614():rcls2_f2600()))));}}
static double rcls2_f2564(){if (rcls2_p2564) return rcls2_m2564; else {rcls2_p2564=T;return rcls2_m2564=(rcls2_f2602()?rcls2_f2589():rcls2_f2786());}}
static double rcls2_f2575(){if (rcls2_p2575) return rcls2_m2575; else {rcls2_p2575=T;return rcls2_m2575=(rcls2_f2763()?(rcls2_f2751()?rcls2_f2582():(rcls2_f2650()?rcls2_f2659():(rcls2_f2640()?rcls2_f2659():rcls2_f2600()))):(rcls2_f2669()?rcls2_f2582():(rcls2_f2619()?rcls2_f2631():(rcls2_f2605()?rcls2_f2617():rcls2_f2600()))));}}
static double rcls2_f2563(){if (rcls2_p2563) return rcls2_m2563; else {rcls2_p2563=T;return rcls2_m2563=(rcls2_f2602()?rcls2_f2575():rcls2_f2790());}}
static double rcls2_f2559(){if (rcls2_p2559) return rcls2_m2559; else {rcls2_p2559=T;return rcls2_m2559=(atan2((rcls2_f2563()-rcls2_v6512),(rcls2_f2564()-rcls2_v6514))+(1.5707963267948966));}}
static double rcls2_f2551(){if (rcls2_p2551) return rcls2_m2551; else {rcls2_p2551=T;return rcls2_m2551=((rcls2_v2559=rcls2_f2559()),(((rcls2_f2764()*(rcls2_f2564()+cos(rcls2_v2559)))+(rcls2_f2758()*(rcls2_f2563()+sin(rcls2_v2559))))-rcls2_f2761()));}}
static int rcls2_f2539(){if (rcls2_p2539) return rcls2_m2539; else {rcls2_p2539=T;return rcls2_m2539=((rcls2_v2667=rcls2_f2667()),(rcls2_v2667?rcls2_v2667:((rcls2_f2602()?((fabs((rcls2_v6514-rcls2_f2589()))<rcls2_v6508)?(fabs((rcls2_v6512-rcls2_f2575()))<rcls2_v6508):NIL):NIL)?T:(((fabs((rcls2_f2568()-(0.0)))<rcls2_v6508)?T:((rcls2_v2551=rcls2_f2551()),((fabs((rcls2_v2551-(0.0)))<rcls2_v6508)?NIL:((rcls2_v2551>(0.0))?rcls2_f2546():(rcls2_f2546()?NIL:T)))))?NIL:T))));}}
static double rcls2_f6493(){if (rcls2_p6493) return rcls2_m6493; else {rcls2_p6493=T;return rcls2_m6493=atan2((rcls2_v6516-rcls2_v6520),rcls2_f6494());}}
static double rcls2_f2243(){if (rcls2_p2243) return rcls2_m2243; else {rcls2_p2243=T;return rcls2_m2243=normalize_rotation((rcls2_f6493()+(1.5707963267948966)));}}
static double rcls2_f2234(){if (rcls2_p2234) return rcls2_m2234; else {rcls2_p2234=T;return rcls2_m2234=(rcls2_f6496()*cos(rcls2_f2243()));}}
static double rcls2_f2232(){if (rcls2_p2232) return rcls2_m2232; else {rcls2_p2232=T;return rcls2_m2232=(rcls2_v6518+rcls2_f2234());}}
static double rcls2_f2233(){if (rcls2_p2233) return rcls2_m2233; else {rcls2_p2233=T;return rcls2_m2233=(rcls2_v6522+rcls2_f2234());}}
static double rcls2_f2125(){if (rcls2_p2125) return rcls2_m2125; else {rcls2_p2125=T;return rcls2_m2125=((rcls2_v2233=rcls2_f2233()),(rcls2_v2232=rcls2_f2232()),(((rcls2_v2233<rcls2_v2232)?rcls2_v2233:rcls2_v2232)-rcls2_v6508));}}
static double rcls2_f2122(){if (rcls2_p2122) return rcls2_m2122; else {rcls2_p2122=T;return rcls2_m2122=((rcls2_v2233=rcls2_f2233()),(rcls2_v2232=rcls2_f2232()),(((rcls2_v2233>rcls2_v2232)?rcls2_v2233:rcls2_v2232)+rcls2_v6508));}}
static int rcls2_f2229(){if (rcls2_p2229) return rcls2_m2229; else {rcls2_p2229=T;return rcls2_m2229=(fabs((rcls2_f2233()-rcls2_f2232()))<rcls2_v6508);}}
static double rcls2_f2241(){if (rcls2_p2241) return rcls2_m2241; else {rcls2_p2241=T;return rcls2_m2241=(rcls2_f6496()*sin(rcls2_f2243()));}}
static double rcls2_f2240(){if (rcls2_p2240) return rcls2_m2240; else {rcls2_p2240=T;return rcls2_m2240=(rcls2_v6520+rcls2_f2241());}}
static double rcls2_f2239(){if (rcls2_p2239) return rcls2_m2239; else {rcls2_p2239=T;return rcls2_m2239=(rcls2_v6516+rcls2_f2241());}}
static double rcls2_f2118(){if (rcls2_p2118) return rcls2_m2118; else {rcls2_p2118=T;return rcls2_m2118=((rcls2_v2240=rcls2_f2240()),(rcls2_v2239=rcls2_f2239()),(((rcls2_v2240<rcls2_v2239)?rcls2_v2240:rcls2_v2239)-rcls2_v6508));}}
static double rcls2_f2115(){if (rcls2_p2115) return rcls2_m2115; else {rcls2_p2115=T;return rcls2_m2115=((rcls2_v2240=rcls2_f2240()),(rcls2_v2239=rcls2_f2239()),(((rcls2_v2240>rcls2_v2239)?rcls2_v2240:rcls2_v2239)+rcls2_v6508));}}
static double rcls2_f2238(){if (rcls2_p2238) return rcls2_m2238; else {rcls2_p2238=T;return rcls2_m2238=(rcls2_f2240()-rcls2_f2239());}}
static int rcls2_f2236(){if (rcls2_p2236) return rcls2_m2236; else {rcls2_p2236=T;return rcls2_m2236=(fabs(rcls2_f2238())<rcls2_v6508);}}
static double rcls2_f2227(){if (rcls2_p2227) return rcls2_m2227; else {rcls2_p2227=T;return rcls2_m2227=(rcls2_f2236()?(rcls2_f2229()?rcls2_f2915():(0.0)):(1.0));}}
static int rcls2_f2168(){if (rcls2_p2168) return rcls2_m2168; else {rcls2_p2168=T;return rcls2_m2168=(rcls2_f2227()==0.0);}}
static double rcls2_f2190(){if (rcls2_p2190) return rcls2_m2190; else {rcls2_p2190=T;return rcls2_m2190=(rcls2_f2227()*rcls2_v6514);}}
static double rcls2_f2210(){if (rcls2_p2210) return rcls2_m2210; else {rcls2_p2210=T;return rcls2_m2210=(rcls2_f2227()*rcls2_v6512);}}
static double rcls2_f2226(){if (rcls2_p2226) return rcls2_m2226; else {rcls2_p2226=T;return rcls2_m2226=((rcls2_v2227=rcls2_f2227()),(rcls2_v2227*rcls2_v2227));}}
static double rcls2_f2223(){if (rcls2_p2223) return rcls2_m2223; else {rcls2_p2223=T;return rcls2_m2223=((rcls2_f2232()-rcls2_f2233())/rcls2_f2238());}}
static double rcls2_f2212(){if (rcls2_p2212) return rcls2_m2212; else {rcls2_p2212=T;return rcls2_m2212=(rcls2_f2236()?(rcls2_f2229()?rcls2_f2915():rcls2_f2240()):(rcls2_f2233()+(rcls2_f2223()*rcls2_f2240())));}}
static double rcls2_f2222(){if (rcls2_p2222) return rcls2_m2222; else {rcls2_p2222=T;return rcls2_m2222=(rcls2_f2236()?(rcls2_f2229()?rcls2_f2915():(1.0)):rcls2_f2223());}}
static int rcls2_f2161(){if (rcls2_p2161) return rcls2_m2161; else {rcls2_p2161=T;return rcls2_m2161=(rcls2_f2222()>0.0);}}
static double rcls2_f2159(){if (rcls2_p2159) return rcls2_m2159; else {rcls2_p2159=T;return rcls2_m2159=(rcls2_f2161()?(-rcls2_f2227()):rcls2_f2227());}}
static double rcls2_f2073(){if (rcls2_p2073) return rcls2_m2073; else {rcls2_p2073=T;return rcls2_m2073=(rcls2_f2212()/rcls2_f2222());}}
static double rcls2_f2053(){if (rcls2_p2053) return rcls2_m2053; else {rcls2_p2053=T;return rcls2_m2053=(rcls2_f2073()-rcls2_v6512);}}
static int rcls2_f2066(){if (rcls2_p2066) return rcls2_m2066; else {rcls2_p2066=T;return rcls2_m2066=((rcls2_f2118()<=rcls2_f2073())&&(rcls2_f2073()<=rcls2_f2115()));}}
static double rcls2_f2072(){if (rcls2_p2072) return rcls2_m2072; else {rcls2_p2072=T;return rcls2_m2072=(rcls2_f2222()*rcls2_f2073());}}
static double rcls2_f2165(){if (rcls2_p2165) return rcls2_m2165; else {rcls2_p2165=T;return rcls2_m2165=((rcls2_v2222=rcls2_f2222()),(rcls2_v2222*rcls2_v2222));}}
static double rcls2_f1981(){if (rcls2_p1981) return rcls2_m1981; else {rcls2_p1981=T;return rcls2_m1981=(rcls2_f2226()+rcls2_f2165());}}
static double rcls2_f1974(){if (rcls2_p1974) return rcls2_m1974; else {rcls2_p1974=T;return rcls2_m1974=((rcls2_v1981=rcls2_f1981()),(rcls2_v1981+rcls2_v1981));}}
static double rcls2_f2180(){if (rcls2_p2180) return rcls2_m2180; else {rcls2_p2180=T;return rcls2_m2180=(((rcls2_f2227()*rcls2_v6522)+(rcls2_f2222()*rcls2_v6520))-rcls2_f2212());}}
static double rcls2_f2189(){if (rcls2_p2189) return rcls2_m2189; else {rcls2_p2189=T;return rcls2_m2189=(rcls2_f2222()*rcls2_v6512);}}
static double rcls2_f2167(){if (rcls2_p2167) return rcls2_m2167; else {rcls2_p2167=T;return rcls2_m2167=(rcls2_f2212()-rcls2_f2190()-rcls2_f2189());}}
static double rcls2_f1983(){if (rcls2_p1983) return rcls2_m1983; else {rcls2_p1983=T;return rcls2_m1983=((-2.0)*rcls2_f2222()*rcls2_f2167());}}
static double rcls2_f1973(){if (rcls2_p1973) return rcls2_m1973; else {rcls2_p1973=T;return rcls2_m1973=((-rcls2_f1983())/rcls2_f1974());}}
static double rcls2_f2166(){if (rcls2_p2166) return rcls2_m2166; else {rcls2_p2166=T;return rcls2_m2166=((rcls2_v2167=rcls2_f2167()),(rcls2_v2167*rcls2_v2167));}}
static double rcls2_f2187(){if (rcls2_p2187) return rcls2_m2187; else {rcls2_p2187=T;return rcls2_m2187=((rcls2_f2190()+rcls2_f2189())-rcls2_f2212());}}
static int rcls2_f2175(){if (rcls2_p2175) return rcls2_m2175; else {rcls2_p2175=T;return rcls2_m2175=(rcls2_f2187()>(0.0));}}
static double rcls2_f2209(){if (rcls2_p2209) return rcls2_m2209; else {rcls2_p2209=T;return rcls2_m2209=(rcls2_f2222()*rcls2_v6514);}}
static double rcls2_f2208(){if (rcls2_p2208) return rcls2_m2208; else {rcls2_p2208=T;return rcls2_m2208=(rcls2_f2210()-rcls2_f2209());}}
static double rcls2_f2149(){if (rcls2_p2149) return rcls2_m2149; else {rcls2_p2149=T;return rcls2_m2149=(rcls2_f2161()?(rcls2_f2209()-rcls2_f2210()):rcls2_f2208());}}
static double rcls2_f2147(){if (rcls2_p2147) return rcls2_m2147; else {rcls2_p2147=T;return rcls2_m2147=((rcls2_f2212()*rcls2_f2159())-(rcls2_f2222()*rcls2_f2149()));}}
static double rcls2_f2221(){if (rcls2_p2221) return rcls2_m2221; else {rcls2_p2221=T;return rcls2_m2221=(-rcls2_f2222());}}
static double rcls2_f2157(){if (rcls2_p2157) return rcls2_m2157; else {rcls2_p2157=T;return rcls2_m2157=(rcls2_f2161()?rcls2_f2222():rcls2_f2221());}}
static double rcls2_f2141(){if (rcls2_p2141) return rcls2_m2141; else {rcls2_p2141=T;return rcls2_m2141=((rcls2_f2227()*rcls2_f2149())-(rcls2_f2212()*rcls2_f2157()));}}
static double rcls2_f2155(){if (rcls2_p2155) return rcls2_m2155; else {rcls2_p2155=T;return rcls2_m2155=((rcls2_f2227()*rcls2_f2159())-(rcls2_f2222()*rcls2_f2157()));}}
static double rcls2_f2135(){if (rcls2_p2135) return rcls2_m2135; else {rcls2_p2135=T;return rcls2_m2135=(rcls2_f2147()/rcls2_f2155());}}
static double rcls2_f2133(){if (rcls2_p2133) return rcls2_m2133; else {rcls2_p2133=T;return rcls2_m2133=(rcls2_f2141()/rcls2_f2155());}}
static int rcls2_f2152(){if (rcls2_p2152) return rcls2_m2152; else {rcls2_p2152=T;return rcls2_m2152=(fabs((rcls2_f2155()-(0.0)))<rcls2_v6508);}}
static int rcls2_f2136(){if (rcls2_p2136) return rcls2_m2136; else {rcls2_p2136=T;return rcls2_m2136=(rcls2_f2152()?((fabs((rcls2_f2147()-(0.0)))<rcls2_v6508)?(fabs((rcls2_f2141()-(0.0)))<rcls2_v6508):NIL):T);}}
static int rcls2_f2111(){if (rcls2_p2111) return rcls2_m2111; else {rcls2_p2111=T;return rcls2_m2111=(rcls2_f2152()?NIL:((rcls2_v2135=rcls2_f2135()),(rcls2_v2133=rcls2_f2133()),((fabs((((rcls2_f2227()*rcls2_v2135)+(rcls2_f2222()*rcls2_v2133))-rcls2_f2212()))<rcls2_v6508)?(((rcls2_f2125()<=rcls2_v2135)&&(rcls2_v2135<=rcls2_f2122()))?((rcls2_f2118()<=rcls2_v2133)&&(rcls2_v2133<=rcls2_f2115())):NIL):NIL)));}}
static double rcls2_f2104(){if (rcls2_p2104) return rcls2_m2104; else {rcls2_p2104=T;return rcls2_m2104=((rcls2_v2152=rcls2_f2152()),normalize_rotation((atan2(((rcls2_v2152?rcls2_f2790():rcls2_f2133())-rcls2_v6512),((rcls2_v2152?rcls2_f2786():rcls2_f2135())-rcls2_v6514))-rcls2_f5872())));}}
static double rcls2_f201(){if (rcls2_p201) return rcls2_m201; else {rcls2_p201=T;return rcls2_m201=((rcls2_v2104=rcls2_f2104()),(rcls2_v792=rcls2_f792()),((rcls2_v2104<rcls2_v792)?rcls2_v2104:rcls2_v792));}}
static double rcls2_f2103(){if (rcls2_p2103) return rcls2_m2103; else {rcls2_p2103=T;return rcls2_m2103=normalize_rotation(rcls2_f2104());}}
static int rcls2_f2091(){if (rcls2_p2091) return rcls2_m2091; else {rcls2_p2091=T;return rcls2_m2091=((rcls2_v2103=rcls2_f2103()),((fabs((rcls2_v2103-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v2103-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v2103-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f2090(){if (rcls2_p2090) return rcls2_m2090; else {rcls2_p2090=T;return rcls2_m2090=((rcls2_v2091=rcls2_f2091()),(rcls2_v2091?rcls2_v2091:rcls2_f2539()));}}
static double_or_symbol rcls2_f40(){if (rcls2_p40) return rcls2_m40; else {rcls2_p40=T;return rcls2_m40=(rcls2_f2090()?coerce_double_to_double_or_symbol(rcls2_f2104()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1861(){if (rcls2_p1861) return rcls2_m1861; else {rcls2_p1861=T;return rcls2_m1861=(rcls2_f2090()?rcls2_f2104():rcls2_f2304());}}
static double rcls2_f216(){if (rcls2_p216) return rcls2_m216; else {rcls2_p216=T;return rcls2_m216=((rcls2_v1861=rcls2_f1861()),(rcls2_v792=rcls2_f792()),((rcls2_v1861<rcls2_v792)?rcls2_v1861:rcls2_v792));}}
static double rcls2_f2087(){if (rcls2_p2087) return rcls2_m2087; else {rcls2_p2087=T;return rcls2_m2087=(rcls2_f2090()?rcls2_f2104():rcls2_f2532());}}
static double rcls2_f2089(){if (rcls2_p2089) return rcls2_m2089; else {rcls2_p2089=T;return rcls2_m2089=(rcls2_f2090()?rcls2_f2104():rcls2_f2536());}}
static int rcls2_f2088(){if (rcls2_p2088) return rcls2_m2088; else {rcls2_p2088=T;return rcls2_m2088=(rcls2_f2089()>(0.0));}}
static int rcls2_f2082(){if (rcls2_p2082) return rcls2_m2082; else {rcls2_p2082=T;return rcls2_m2082=(rcls2_f2090()?((rcls2_v2088=rcls2_f2088()),(rcls2_v2088?rcls2_v2088:(fabs((rcls2_f2087()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f1867(){if (rcls2_p1867) return rcls2_m1867; else {rcls2_p1867=T;return rcls2_m1867=(rcls2_f2082()?rcls2_f2087():rcls2_f2532());}}
static double rcls2_f1869(){if (rcls2_p1869) return rcls2_m1869; else {rcls2_p1869=T;return rcls2_m1869=(rcls2_f2082()?rcls2_f2089():rcls2_f2536());}}
static int rcls2_f1868(){if (rcls2_p1868) return rcls2_m1868; else {rcls2_p1868=T;return rcls2_m1868=(rcls2_f1869()>(0.0));}}
static int rcls2_f2081(){if (rcls2_p2081) return rcls2_m2081; else {rcls2_p2081=T;return rcls2_m2081=(rcls2_f2082()?rcls2_f2090():NIL);}}
static int rcls2_f1862(){if (rcls2_p1862) return rcls2_m1862; else {rcls2_p1862=T;return rcls2_m1862=(rcls2_f2081()?((rcls2_v1868=rcls2_f1868()),(rcls2_v1868?rcls2_v1868:(fabs((rcls2_f1867()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f2219(){if (rcls2_p2219) return rcls2_m2219; else {rcls2_p2219=T;return rcls2_m2219=(rcls2_f2226()-(rcls2_f2222()*rcls2_f2221()));}}
static double rcls2_f2204(){if (rcls2_p2204) return rcls2_m2204; else {rcls2_p2204=T;return rcls2_m2204=((((rcls2_f2212()*rcls2_f2227())-(rcls2_f2222()*rcls2_f2208()))/rcls2_f2219())-rcls2_v6514);}}
static double rcls2_f2198(){if (rcls2_p2198) return rcls2_m2198; else {rcls2_p2198=T;return rcls2_m2198=((((rcls2_f2227()*rcls2_f2208())-(rcls2_f2212()*rcls2_f2221()))/rcls2_f2219())-rcls2_v6512);}}
static double rcls2_f2931(){if (rcls2_p2931) return rcls2_m2931; else {rcls2_p2931=T;return rcls2_m2931=normalize_rotation((rcls2_f6493()-(1.5707963267948966)));}}
static double rcls2_f2922(){if (rcls2_p2922) return rcls2_m2922; else {rcls2_p2922=T;return rcls2_m2922=(rcls2_f6496()*cos(rcls2_f2931()));}}
static double rcls2_f2920(){if (rcls2_p2920) return rcls2_m2920; else {rcls2_p2920=T;return rcls2_m2920=(rcls2_v6518+rcls2_f2922());}}
static double rcls2_f2921(){if (rcls2_p2921) return rcls2_m2921; else {rcls2_p2921=T;return rcls2_m2921=(rcls2_v6522+rcls2_f2922());}}
static double rcls2_f2806(){if (rcls2_p2806) return rcls2_m2806; else {rcls2_p2806=T;return rcls2_m2806=((rcls2_v2921=rcls2_f2921()),(rcls2_v2920=rcls2_f2920()),(((rcls2_v2921<rcls2_v2920)?rcls2_v2921:rcls2_v2920)-rcls2_v6508));}}
static double rcls2_f2803(){if (rcls2_p2803) return rcls2_m2803; else {rcls2_p2803=T;return rcls2_m2803=((rcls2_v2921=rcls2_f2921()),(rcls2_v2920=rcls2_f2920()),(((rcls2_v2921>rcls2_v2920)?rcls2_v2921:rcls2_v2920)+rcls2_v6508));}}
static int rcls2_f2917(){if (rcls2_p2917) return rcls2_m2917; else {rcls2_p2917=T;return rcls2_m2917=(fabs((rcls2_f2921()-rcls2_f2920()))<rcls2_v6508);}}
static double rcls2_f2929(){if (rcls2_p2929) return rcls2_m2929; else {rcls2_p2929=T;return rcls2_m2929=(rcls2_f6496()*sin(rcls2_f2931()));}}
static double rcls2_f2928(){if (rcls2_p2928) return rcls2_m2928; else {rcls2_p2928=T;return rcls2_m2928=(rcls2_v6520+rcls2_f2929());}}
static double rcls2_f2927(){if (rcls2_p2927) return rcls2_m2927; else {rcls2_p2927=T;return rcls2_m2927=(rcls2_v6516+rcls2_f2929());}}
static double rcls2_f2799(){if (rcls2_p2799) return rcls2_m2799; else {rcls2_p2799=T;return rcls2_m2799=((rcls2_v2928=rcls2_f2928()),(rcls2_v2927=rcls2_f2927()),(((rcls2_v2928<rcls2_v2927)?rcls2_v2928:rcls2_v2927)-rcls2_v6508));}}
static double rcls2_f2796(){if (rcls2_p2796) return rcls2_m2796; else {rcls2_p2796=T;return rcls2_m2796=((rcls2_v2928=rcls2_f2928()),(rcls2_v2927=rcls2_f2927()),(((rcls2_v2928>rcls2_v2927)?rcls2_v2928:rcls2_v2927)+rcls2_v6508));}}
static double rcls2_f2926(){if (rcls2_p2926) return rcls2_m2926; else {rcls2_p2926=T;return rcls2_m2926=(rcls2_f2928()-rcls2_f2927());}}
static int rcls2_f2924(){if (rcls2_p2924) return rcls2_m2924; else {rcls2_p2924=T;return rcls2_m2924=(fabs(rcls2_f2926())<rcls2_v6508);}}
static double rcls2_f2911(){if (rcls2_p2911) return rcls2_m2911; else {rcls2_p2911=T;return rcls2_m2911=(rcls2_f2924()?(rcls2_f2917()?rcls2_f2915():(0.0)):(1.0));}}
static int rcls2_f2849(){if (rcls2_p2849) return rcls2_m2849; else {rcls2_p2849=T;return rcls2_m2849=(rcls2_f2911()==0.0);}}
static double rcls2_f2872(){if (rcls2_p2872) return rcls2_m2872; else {rcls2_p2872=T;return rcls2_m2872=(rcls2_f2911()*rcls2_v6514);}}
static double rcls2_f2892(){if (rcls2_p2892) return rcls2_m2892; else {rcls2_p2892=T;return rcls2_m2892=(rcls2_f2911()*rcls2_v6512);}}
static double rcls2_f2910(){if (rcls2_p2910) return rcls2_m2910; else {rcls2_p2910=T;return rcls2_m2910=((rcls2_v2911=rcls2_f2911()),(rcls2_v2911*rcls2_v2911));}}
static double rcls2_f2907(){if (rcls2_p2907) return rcls2_m2907; else {rcls2_p2907=T;return rcls2_m2907=((rcls2_f2920()-rcls2_f2921())/rcls2_f2926());}}
static double rcls2_f2894(){if (rcls2_p2894) return rcls2_m2894; else {rcls2_p2894=T;return rcls2_m2894=(rcls2_f2924()?(rcls2_f2917()?rcls2_f2915():rcls2_f2928()):(rcls2_f2921()+(rcls2_f2907()*rcls2_f2928())));}}
static double rcls2_f2906(){if (rcls2_p2906) return rcls2_m2906; else {rcls2_p2906=T;return rcls2_m2906=(rcls2_f2924()?(rcls2_f2917()?rcls2_f2915():(1.0)):rcls2_f2907());}}
static int rcls2_f2842(){if (rcls2_p2842) return rcls2_m2842; else {rcls2_p2842=T;return rcls2_m2842=(rcls2_f2906()>0.0);}}
static double rcls2_f2840(){if (rcls2_p2840) return rcls2_m2840; else {rcls2_p2840=T;return rcls2_m2840=(rcls2_f2842()?(-rcls2_f2911()):rcls2_f2911());}}
static double rcls2_f2517(){if (rcls2_p2517) return rcls2_m2517; else {rcls2_p2517=T;return rcls2_m2517=(rcls2_f2894()/rcls2_f2906());}}
static double rcls2_f2497(){if (rcls2_p2497) return rcls2_m2497; else {rcls2_p2497=T;return rcls2_m2497=(rcls2_f2517()-rcls2_v6512);}}
static int rcls2_f2510(){if (rcls2_p2510) return rcls2_m2510; else {rcls2_p2510=T;return rcls2_m2510=((rcls2_f2799()<=rcls2_f2517())&&(rcls2_f2517()<=rcls2_f2796()));}}
static double rcls2_f2516(){if (rcls2_p2516) return rcls2_m2516; else {rcls2_p2516=T;return rcls2_m2516=(rcls2_f2906()*rcls2_f2517());}}
static double rcls2_f2846(){if (rcls2_p2846) return rcls2_m2846; else {rcls2_p2846=T;return rcls2_m2846=((rcls2_v2906=rcls2_f2906()),(rcls2_v2906*rcls2_v2906));}}
static double rcls2_f2425(){if (rcls2_p2425) return rcls2_m2425; else {rcls2_p2425=T;return rcls2_m2425=(rcls2_f2910()+rcls2_f2846());}}
static double rcls2_f2418(){if (rcls2_p2418) return rcls2_m2418; else {rcls2_p2418=T;return rcls2_m2418=((rcls2_v2425=rcls2_f2425()),(rcls2_v2425+rcls2_v2425));}}
static double rcls2_f2862(){if (rcls2_p2862) return rcls2_m2862; else {rcls2_p2862=T;return rcls2_m2862=(((rcls2_f2911()*rcls2_v6522)+(rcls2_f2906()*rcls2_v6520))-rcls2_f2894());}}
static double rcls2_f2871(){if (rcls2_p2871) return rcls2_m2871; else {rcls2_p2871=T;return rcls2_m2871=(rcls2_f2906()*rcls2_v6512);}}
static double rcls2_f2848(){if (rcls2_p2848) return rcls2_m2848; else {rcls2_p2848=T;return rcls2_m2848=(rcls2_f2894()-rcls2_f2872()-rcls2_f2871());}}
static double rcls2_f2427(){if (rcls2_p2427) return rcls2_m2427; else {rcls2_p2427=T;return rcls2_m2427=((-2.0)*rcls2_f2906()*rcls2_f2848());}}
static double rcls2_f2417(){if (rcls2_p2417) return rcls2_m2417; else {rcls2_p2417=T;return rcls2_m2417=((-rcls2_f2427())/rcls2_f2418());}}
static double rcls2_f2847(){if (rcls2_p2847) return rcls2_m2847; else {rcls2_p2847=T;return rcls2_m2847=((rcls2_v2848=rcls2_f2848()),(rcls2_v2848*rcls2_v2848));}}
static double rcls2_f2869(){if (rcls2_p2869) return rcls2_m2869; else {rcls2_p2869=T;return rcls2_m2869=((rcls2_f2872()+rcls2_f2871())-rcls2_f2894());}}
static int rcls2_f2857(){if (rcls2_p2857) return rcls2_m2857; else {rcls2_p2857=T;return rcls2_m2857=(rcls2_f2869()>(0.0));}}
static double rcls2_f2891(){if (rcls2_p2891) return rcls2_m2891; else {rcls2_p2891=T;return rcls2_m2891=(rcls2_f2906()*rcls2_v6514);}}
static double rcls2_f2890(){if (rcls2_p2890) return rcls2_m2890; else {rcls2_p2890=T;return rcls2_m2890=(rcls2_f2892()-rcls2_f2891());}}
static double rcls2_f2830(){if (rcls2_p2830) return rcls2_m2830; else {rcls2_p2830=T;return rcls2_m2830=(rcls2_f2842()?(rcls2_f2891()-rcls2_f2892()):rcls2_f2890());}}
static double rcls2_f2828(){if (rcls2_p2828) return rcls2_m2828; else {rcls2_p2828=T;return rcls2_m2828=((rcls2_f2894()*rcls2_f2840())-(rcls2_f2906()*rcls2_f2830()));}}
static double rcls2_f2905(){if (rcls2_p2905) return rcls2_m2905; else {rcls2_p2905=T;return rcls2_m2905=(-rcls2_f2906());}}
static double rcls2_f2838(){if (rcls2_p2838) return rcls2_m2838; else {rcls2_p2838=T;return rcls2_m2838=(rcls2_f2842()?rcls2_f2906():rcls2_f2905());}}
static double rcls2_f2822(){if (rcls2_p2822) return rcls2_m2822; else {rcls2_p2822=T;return rcls2_m2822=((rcls2_f2911()*rcls2_f2830())-(rcls2_f2894()*rcls2_f2838()));}}
static double rcls2_f2836(){if (rcls2_p2836) return rcls2_m2836; else {rcls2_p2836=T;return rcls2_m2836=((rcls2_f2911()*rcls2_f2840())-(rcls2_f2906()*rcls2_f2838()));}}
static double rcls2_f2816(){if (rcls2_p2816) return rcls2_m2816; else {rcls2_p2816=T;return rcls2_m2816=(rcls2_f2828()/rcls2_f2836());}}
static double rcls2_f2814(){if (rcls2_p2814) return rcls2_m2814; else {rcls2_p2814=T;return rcls2_m2814=(rcls2_f2822()/rcls2_f2836());}}
static int rcls2_f2833(){if (rcls2_p2833) return rcls2_m2833; else {rcls2_p2833=T;return rcls2_m2833=(fabs((rcls2_f2836()-(0.0)))<rcls2_v6508);}}
static int rcls2_f2817(){if (rcls2_p2817) return rcls2_m2817; else {rcls2_p2817=T;return rcls2_m2817=(rcls2_f2833()?((fabs((rcls2_f2828()-(0.0)))<rcls2_v6508)?(fabs((rcls2_f2822()-(0.0)))<rcls2_v6508):NIL):T);}}
static int rcls2_f2792(){if (rcls2_p2792) return rcls2_m2792; else {rcls2_p2792=T;return rcls2_m2792=(rcls2_f2833()?NIL:((rcls2_v2816=rcls2_f2816()),(rcls2_v2814=rcls2_f2814()),((fabs((((rcls2_f2911()*rcls2_v2816)+(rcls2_f2906()*rcls2_v2814))-rcls2_f2894()))<rcls2_v6508)?(((rcls2_f2806()<=rcls2_v2816)&&(rcls2_v2816<=rcls2_f2803()))?((rcls2_f2799()<=rcls2_v2814)&&(rcls2_v2814<=rcls2_f2796())):NIL):NIL)));}}
static double rcls2_f2781(){if (rcls2_p2781) return rcls2_m2781; else {rcls2_p2781=T;return rcls2_m2781=((rcls2_v2833=rcls2_f2833()),normalize_rotation((atan2(((rcls2_v2833?rcls2_f2790():rcls2_f2814())-rcls2_v6512),((rcls2_v2833?rcls2_f2786():rcls2_f2816())-rcls2_v6514))-rcls2_f5872())));}}
static double rcls2_f350(){if (rcls2_p350) return rcls2_m350; else {rcls2_p350=T;return rcls2_m350=((rcls2_v2781=rcls2_f2781()),(rcls2_v792=rcls2_f792()),((rcls2_v2781<rcls2_v792)?rcls2_v2781:rcls2_v792));}}
static int rcls2_f1748(){if (rcls2_p1748) return rcls2_m1748; else {rcls2_p1748=T;return rcls2_m1748=(rcls2_f2781()<rcls2_f1861());}}
static double rcls2_f2780(){if (rcls2_p2780) return rcls2_m2780; else {rcls2_p2780=T;return rcls2_m2780=normalize_rotation(rcls2_f2781());}}
static int rcls2_f2766(){if (rcls2_p2766) return rcls2_m2766; else {rcls2_p2766=T;return rcls2_m2766=((rcls2_v2780=rcls2_f2780()),((fabs((rcls2_v2780-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v2780-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v2780-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f2538(){if (rcls2_p2538) return rcls2_m2538; else {rcls2_p2538=T;return rcls2_m2538=((rcls2_v2766=rcls2_f2766()),(rcls2_v2766?rcls2_v2766:rcls2_f2539()));}}
static double_or_symbol rcls2_f70(){if (rcls2_p70) return rcls2_m70; else {rcls2_p70=T;return rcls2_m70=(rcls2_f2538()?coerce_double_to_double_or_symbol(rcls2_f2781()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f2303(){if (rcls2_p2303) return rcls2_m2303; else {rcls2_p2303=T;return rcls2_m2303=(rcls2_f2538()?rcls2_f2781():rcls2_f2304());}}
static double rcls2_f365(){if (rcls2_p365) return rcls2_m365; else {rcls2_p365=T;return rcls2_m365=((rcls2_v2303=rcls2_f2303()),(rcls2_v792=rcls2_f792()),((rcls2_v2303<rcls2_v792)?rcls2_v2303:rcls2_v792));}}
static int rcls2_f1793(){if (rcls2_p1793) return rcls2_m1793; else {rcls2_p1793=T;return rcls2_m1793=(rcls2_f2303()<rcls2_f1861());}}
static int rcls2_f1791(){if (rcls2_p1791) return rcls2_m1791; else {rcls2_p1791=T;return rcls2_m1791=(rcls2_f2303()<rcls2_f2104());}}
static double rcls2_f2531(){if (rcls2_p2531) return rcls2_m2531; else {rcls2_p2531=T;return rcls2_m2531=(rcls2_f2538()?rcls2_f2781():rcls2_f2532());}}
static double rcls2_f2535(){if (rcls2_p2535) return rcls2_m2535; else {rcls2_p2535=T;return rcls2_m2535=(rcls2_f2538()?rcls2_f2781():rcls2_f2536());}}
static int rcls2_f2534(){if (rcls2_p2534) return rcls2_m2534; else {rcls2_p2534=T;return rcls2_m2534=(rcls2_f2535()>(0.0));}}
static int rcls2_f2526(){if (rcls2_p2526) return rcls2_m2526; else {rcls2_p2526=T;return rcls2_m2526=(rcls2_f2538()?((rcls2_v2534=rcls2_f2534()),(rcls2_v2534?rcls2_v2534:(fabs((rcls2_f2531()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f2311(){if (rcls2_p2311) return rcls2_m2311; else {rcls2_p2311=T;return rcls2_m2311=(rcls2_f2526()?rcls2_f2531():rcls2_f2532());}}
static double rcls2_f2313(){if (rcls2_p2313) return rcls2_m2313; else {rcls2_p2313=T;return rcls2_m2313=(rcls2_f2526()?rcls2_f2535():rcls2_f2536());}}
static int rcls2_f2312(){if (rcls2_p2312) return rcls2_m2312; else {rcls2_p2312=T;return rcls2_m2312=(rcls2_f2313()>(0.0));}}
static int rcls2_f2525(){if (rcls2_p2525) return rcls2_m2525; else {rcls2_p2525=T;return rcls2_m2525=(rcls2_f2526()?rcls2_f2538():NIL);}}
static int rcls2_f2306(){if (rcls2_p2306) return rcls2_m2306; else {rcls2_p2306=T;return rcls2_m2306=(rcls2_f2525()?((rcls2_v2312=rcls2_f2312()),(rcls2_v2312?rcls2_v2312:(fabs((rcls2_f2311()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f2903(){if (rcls2_p2903) return rcls2_m2903; else {rcls2_p2903=T;return rcls2_m2903=(rcls2_f2910()-(rcls2_f2906()*rcls2_f2905()));}}
static double rcls2_f2886(){if (rcls2_p2886) return rcls2_m2886; else {rcls2_p2886=T;return rcls2_m2886=((((rcls2_f2894()*rcls2_f2911())-(rcls2_f2906()*rcls2_f2890()))/rcls2_f2903())-rcls2_v6514);}}
static double rcls2_f2880(){if (rcls2_p2880) return rcls2_m2880; else {rcls2_p2880=T;return rcls2_m2880=((((rcls2_f2911()*rcls2_f2890())-(rcls2_f2894()*rcls2_f2905()))/rcls2_f2903())-rcls2_v6512);}}
static double rcls2_f6505(){if (rcls2_p6505) return rcls2_m6505; else {rcls2_p6505=T;return rcls2_m6505=(rcls2_v6512-rcls2_v6528);}}
static double rcls2_f6469(){if (rcls2_p6469) return rcls2_m6469; else {rcls2_p6469=T;return rcls2_m6469=((rcls2_v6505=rcls2_f6505()),sqrt(((rcls2_v6510*rcls2_v6510)+(rcls2_v6505*rcls2_v6505))));}}
static double rcls2_f6127(){if (rcls2_p6127) return rcls2_m6127; else {rcls2_p6127=T;return rcls2_m6127=(rcls2_v6514-(rcls2_v6514+rcls2_f6469()));}}
static double rcls2_f6125(){if (rcls2_p6125) return rcls2_m6125; else {rcls2_p6125=T;return rcls2_m6125=(rcls2_v6512-rcls2_v6512);}}
static double rcls2_f6124(){if (rcls2_p6124) return rcls2_m6124; else {rcls2_p6124=T;return rcls2_m6124=((rcls2_v6125=rcls2_f6125()),(rcls2_v6125*rcls2_v6125));}}
static double rcls2_f4008(){if (rcls2_p4008) return rcls2_m4008; else {rcls2_p4008=T;return rcls2_m4008=((rcls2_v4011=rcls2_f4011()),sqrt(((rcls2_v4011*rcls2_v4011)+rcls2_f6124())));}}
static double rcls2_f3976(){if (rcls2_p3976) return rcls2_m3976; else {rcls2_p3976=T;return rcls2_m3976=((rcls2_v4008=rcls2_f4008()),(rcls2_v4008*rcls2_v4008));}}
static double rcls2_f670(){if (rcls2_p670) return rcls2_m670; else {rcls2_p670=T;return rcls2_m670=(((rcls2_f4469()+rcls2_f3976())-rcls2_f6443())/rcls2_f1030());}}
static double rcls2_f660(){if (rcls2_p660) return rcls2_m660; else {rcls2_p660=T;return rcls2_m660=(rcls2_f670()*rcls2_f4418());}}
static double rcls2_f666(){if (rcls2_p666) return rcls2_m666; else {rcls2_p666=T;return rcls2_m666=(rcls2_f670()*rcls2_f4419());}}
static double rcls2_f668(){if (rcls2_p668) return rcls2_m668; else {rcls2_p668=T;return rcls2_m668=((rcls2_v670=rcls2_f670()),(rcls2_f3976()-(rcls2_v670*rcls2_v670)));}}
static int rcls2_f667(){if (rcls2_p667) return rcls2_m667; else {rcls2_p667=T;return rcls2_m667=(rcls2_f668()<0.0);}}
static double rcls2_f665(){if (rcls2_p665) return rcls2_m665; else {rcls2_p665=T;return rcls2_m665=sqrt(rcls2_f668());}}
static double rcls2_f659(){if (rcls2_p659) return rcls2_m659; else {rcls2_p659=T;return rcls2_m659=(rcls2_f665()*rcls2_f4419());}}
static double rcls2_f568(){if (rcls2_p568) return rcls2_m568; else {rcls2_p568=T;return rcls2_m568=(rcls2_v6512+(rcls2_f660()-rcls2_f659()));}}
static int rcls2_f540(){if (rcls2_p540) return rcls2_m540; else {rcls2_p540=T;return rcls2_m540=(rcls2_v6528==rcls2_f568());}}
static double rcls2_f658(){if (rcls2_p658) return rcls2_m658; else {rcls2_p658=T;return rcls2_m658=(rcls2_v6512+rcls2_f660()+rcls2_f659());}}
static int rcls2_f657(){if (rcls2_p657) return rcls2_m657; else {rcls2_p657=T;return rcls2_m657=(rcls2_v6528==rcls2_f658());}}
static double rcls2_f664(){if (rcls2_p664) return rcls2_m664; else {rcls2_p664=T;return rcls2_m664=(rcls2_f665()*rcls2_f4418());}}
static double rcls2_f566(){if (rcls2_p566) return rcls2_m566; else {rcls2_p566=T;return rcls2_m566=(rcls2_v6514+rcls2_f666()+rcls2_f664());}}
static int rcls2_f541(){if (rcls2_p541) return rcls2_m541; else {rcls2_p541=T;return rcls2_m541=(rcls2_v6530==rcls2_f566());}}
static double rcls2_f538(){if (rcls2_p538) return rcls2_m538; else {rcls2_p538=T;return rcls2_m538=(rcls2_f541()?(rcls2_f540()?rcls2_f1131():(0.0)):(1.0));}}
static double rcls2_f533(){if (rcls2_p533) return rcls2_m533; else {rcls2_p533=T;return rcls2_m533=((rcls2_f568()-rcls2_v6528)/(rcls2_f566()-rcls2_v6530));}}
static double rcls2_f526(){if (rcls2_p526) return rcls2_m526; else {rcls2_p526=T;return rcls2_m526=(rcls2_f541()?(rcls2_f540()?rcls2_f1131():rcls2_f568()):(rcls2_f566()+(rcls2_f533()*rcls2_f568())));}}
static double rcls2_f532(){if (rcls2_p532) return rcls2_m532; else {rcls2_p532=T;return rcls2_m532=(rcls2_f541()?(rcls2_f540()?rcls2_f1131():(1.0)):rcls2_f533());}}
static double rcls2_f525(){if (rcls2_p525) return rcls2_m525; else {rcls2_p525=T;return rcls2_m525=(((rcls2_f538()*rcls2_v6522)+(rcls2_f532()*rcls2_v6520))-rcls2_f526());}}
static int rcls2_f508(){if (rcls2_p508) return rcls2_m508; else {rcls2_p508=T;return rcls2_m508=(rcls2_f525()>(0.0));}}
static double rcls2_f564(){if (rcls2_p564) return rcls2_m564; else {rcls2_p564=T;return rcls2_m564=atan2((rcls2_f568()-rcls2_v6512),(rcls2_f566()-rcls2_v6514));}}
static double rcls2_f521(){if (rcls2_p521) return rcls2_m521; else {rcls2_p521=T;return rcls2_m521=(rcls2_f564()+(-1.5707963267948966));}}
static double rcls2_f513(){if (rcls2_p513) return rcls2_m513; else {rcls2_p513=T;return rcls2_m513=((rcls2_v521=rcls2_f521()),(((rcls2_f538()*(rcls2_f566()+cos(rcls2_v521)))+(rcls2_f532()*(rcls2_f568()+sin(rcls2_v521))))-rcls2_f526()));}}
static double rcls2_f562(){if (rcls2_p562) return rcls2_m562; else {rcls2_p562=T;return rcls2_m562=normalize_rotation((rcls2_f564()-rcls2_f3902()));}}
static double rcls2_f561(){if (rcls2_p561) return rcls2_m561; else {rcls2_p561=T;return rcls2_m561=normalize_rotation(rcls2_f562());}}
static int rcls2_f549(){if (rcls2_p549) return rcls2_m549; else {rcls2_p549=T;return rcls2_m549=((rcls2_v561=rcls2_f561()),((fabs((rcls2_v561-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v561-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v561-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f501(){if (rcls2_p501) return rcls2_m501; else {rcls2_p501=T;return rcls2_m501=((rcls2_v549=rcls2_f549()),(rcls2_v549?rcls2_v549:(((fabs((rcls2_v6514-rcls2_f566()))<rcls2_v6508)?(fabs((rcls2_v6512-rcls2_f568()))<rcls2_v6508):NIL)?NIL:(((fabs((rcls2_f525()-(0.0)))<rcls2_v6508)?T:((rcls2_v513=rcls2_f513()),((fabs((rcls2_v513-(0.0)))<rcls2_v6508)?NIL:((rcls2_v513>(0.0))?rcls2_f508():(rcls2_f508()?NIL:T)))))?NIL:T))));}}
static double rcls2_f498(){if (rcls2_p498) return rcls2_m498; else {rcls2_p498=T;return rcls2_m498=(rcls2_f501()?rcls2_f562():rcls2_f2532());}}
static double rcls2_f500(){if (rcls2_p500) return rcls2_m500; else {rcls2_p500=T;return rcls2_m500=(rcls2_f501()?rcls2_f562():rcls2_f2536());}}
static int rcls2_f499(){if (rcls2_p499) return rcls2_m499; else {rcls2_p499=T;return rcls2_m499=(rcls2_f500()<(0.0));}}
static int rcls2_f493(){if (rcls2_p493) return rcls2_m493; else {rcls2_p493=T;return rcls2_m493=(rcls2_f501()?((rcls2_v499=rcls2_f499()),(rcls2_v499?rcls2_v499:(fabs((rcls2_f498()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f492(){if (rcls2_p492) return rcls2_m492; else {rcls2_p492=T;return rcls2_m492=(rcls2_f493()?rcls2_f501():NIL);}}
static int rcls2_f490(){if (rcls2_p490) return rcls2_m490; else {rcls2_p490=T;return rcls2_m490=((rcls2_f493()?rcls2_f500():rcls2_f2536())<(0.0));}}
static int rcls2_f484(){if (rcls2_p484) return rcls2_m484; else {rcls2_p484=T;return rcls2_m484=(rcls2_f492()?((rcls2_v490=rcls2_f490()),(rcls2_v490?rcls2_v490:(fabs(((rcls2_f493()?rcls2_f498():rcls2_f2532())-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f662(){if (rcls2_p662) return rcls2_m662; else {rcls2_p662=T;return rcls2_m662=(rcls2_v6514+(rcls2_f666()-rcls2_f664()));}}
static double rcls2_f619(){if (rcls2_p619) return rcls2_m619; else {rcls2_p619=T;return rcls2_m619=atan2((rcls2_f658()-rcls2_v6512),(rcls2_f662()-rcls2_v6514));}}
static double rcls2_f596(){if (rcls2_p596) return rcls2_m596; else {rcls2_p596=T;return rcls2_m596=(rcls2_f619()+(-1.5707963267948966));}}
static double rcls2_f617(){if (rcls2_p617) return rcls2_m617; else {rcls2_p617=T;return rcls2_m617=normalize_rotation((rcls2_f619()-rcls2_f3902()));}}
static double rcls2_f616(){if (rcls2_p616) return rcls2_m616; else {rcls2_p616=T;return rcls2_m616=normalize_rotation(rcls2_f617());}}
static int rcls2_f604(){if (rcls2_p604) return rcls2_m604; else {rcls2_p604=T;return rcls2_m604=((rcls2_v616=rcls2_f616()),((fabs((rcls2_v616-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v616-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v616-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f661(){if (rcls2_p661) return rcls2_m661; else {rcls2_p661=T;return rcls2_m661=(rcls2_v6530==rcls2_f662());}}
static double rcls2_f655(){if (rcls2_p655) return rcls2_m655; else {rcls2_p655=T;return rcls2_m655=(rcls2_f661()?(rcls2_f657()?rcls2_f1131():(0.0)):(1.0));}}
static double rcls2_f650(){if (rcls2_p650) return rcls2_m650; else {rcls2_p650=T;return rcls2_m650=((rcls2_f658()-rcls2_v6528)/(rcls2_f662()-rcls2_v6530));}}
static double rcls2_f643(){if (rcls2_p643) return rcls2_m643; else {rcls2_p643=T;return rcls2_m643=(rcls2_f661()?(rcls2_f657()?rcls2_f1131():rcls2_f658()):(rcls2_f662()+(rcls2_f650()*rcls2_f658())));}}
static double rcls2_f649(){if (rcls2_p649) return rcls2_m649; else {rcls2_p649=T;return rcls2_m649=(rcls2_f661()?(rcls2_f657()?rcls2_f1131():(1.0)):rcls2_f650());}}
static double rcls2_f588(){if (rcls2_p588) return rcls2_m588; else {rcls2_p588=T;return rcls2_m588=((rcls2_v596=rcls2_f596()),(((rcls2_f655()*(rcls2_f662()+cos(rcls2_v596)))+(rcls2_f649()*(rcls2_f658()+sin(rcls2_v596))))-rcls2_f643()));}}
static double rcls2_f635(){if (rcls2_p635) return rcls2_m635; else {rcls2_p635=T;return rcls2_m635=(((rcls2_f655()*rcls2_v6530)+(rcls2_f649()*rcls2_v6528))-rcls2_f643());}}
static double rcls2_f642(){if (rcls2_p642) return rcls2_m642; else {rcls2_p642=T;return rcls2_m642=(((rcls2_f655()*rcls2_v6522)+(rcls2_f649()*rcls2_v6520))-rcls2_f643());}}
static int rcls2_f639(){if (rcls2_p639) return rcls2_m639; else {rcls2_p639=T;return rcls2_m639=(fabs((rcls2_f642()-(0.0)))<rcls2_v6508);}}
static int rcls2_f630(){if (rcls2_p630) return rcls2_m630; else {rcls2_p630=T;return rcls2_m630=(rcls2_f642()>(0.0));}}
static int rcls2_f629(){if (rcls2_p629) return rcls2_m629; else {rcls2_p629=T;return rcls2_m629=(rcls2_f630()?NIL:T);}}
static int rcls2_f578(){if (rcls2_p578) return rcls2_m578; else {rcls2_p578=T;return rcls2_m578=((rcls2_v604=rcls2_f604()),(rcls2_v604?rcls2_v604:(((fabs((rcls2_v6514-rcls2_f662()))<rcls2_v6508)?(fabs((rcls2_v6512-rcls2_f658()))<rcls2_v6508):NIL)?NIL:((rcls2_f639()?T:((rcls2_v588=rcls2_f588()),((fabs((rcls2_v588-(0.0)))<rcls2_v6508)?NIL:((rcls2_v588>(0.0))?rcls2_f630():rcls2_f629()))))?NIL:T))));}}
static int rcls2_f576(){if (rcls2_p576) return rcls2_m576; else {rcls2_p576=T;return rcls2_m576=((rcls2_f578()?rcls2_f617():rcls2_f2536())<(0.0));}}
static int rcls2_f570(){if (rcls2_p570) return rcls2_m570; else {rcls2_p570=T;return rcls2_m570=((rcls2_v578=rcls2_f578()),(rcls2_v578?((rcls2_v576=rcls2_f576()),(rcls2_v576?rcls2_v576:(fabs(((rcls2_v578?rcls2_f617():rcls2_f2532())-(0.0)))<rcls2_v6508))):NIL));}}
static int rcls2_f626(){if (rcls2_p626) return rcls2_m626; else {rcls2_p626=T;return rcls2_m626=(rcls2_f639()?NIL:((rcls2_v635=rcls2_f635()),((fabs((rcls2_v635-(0.0)))<rcls2_v6508)?NIL:((rcls2_v635>(0.0))?rcls2_f630():rcls2_f629()))));}}
static double rcls2_f3987(){if (rcls2_p3987) return rcls2_m3987; else {rcls2_p3987=T;return rcls2_m3987=(rcls2_f4008()/rcls2_f6469());}}
static double rcls2_f4003(){if (rcls2_p4003) return rcls2_m4003; else {rcls2_p4003=T;return rcls2_m4003=(rcls2_f4008()+rcls2_f6496());}}
static int rcls2_f4001(){if (rcls2_p4001) return rcls2_m4001; else {rcls2_p4001=T;return rcls2_m4001=((rcls2_v4003=rcls2_f4003()),(rcls2_f4469()>(rcls2_v4003*rcls2_v4003)));}}
static int rcls2_f3993(){if (rcls2_p3993) return rcls2_m3993; else {rcls2_p3993=T;return rcls2_m3993=(rcls2_f6469()>rcls2_f4003());}}
static int rcls2_f3950(){if (rcls2_p3950) return rcls2_m3950; else {rcls2_p3950=T;return rcls2_m3950=(rcls2_f4431()>rcls2_f4003());}}
static int rcls2_f3948(){if (rcls2_p3948) return rcls2_m3948; else {rcls2_p3948=T;return rcls2_m3948=((rcls2_v3950=rcls2_f3950()),(rcls2_v3950?rcls2_v3950:(rcls2_f4008()>rcls2_f6496())));}}
static double rcls2_f4000(){if (rcls2_p4000) return rcls2_m4000; else {rcls2_p4000=T;return rcls2_m4000=(rcls2_f6469()-rcls2_f4003());}}
static int rcls2_f3998(){if (rcls2_p3998) return rcls2_m3998; else {rcls2_p3998=T;return rcls2_m3998=(fabs(rcls2_f4000())<rcls2_v6508);}}
static int rcls2_f3994(){if (rcls2_p3994) return rcls2_m3994; else {rcls2_p3994=T;return rcls2_m3994=((rcls2_v3998=rcls2_f3998()),(rcls2_v3998?rcls2_v3998:(fabs((rcls2_f6469()-fabs((rcls2_f4008()-rcls2_f6496()))))<rcls2_v6508)));}}
static int rcls2_f622(){if (rcls2_p622) return rcls2_m622; else {rcls2_p622=T;return rcls2_m622=((rcls2_v3994=rcls2_f3994()),(rcls2_v3994?(rcls2_f3948()?rcls2_f626():(rcls2_f626()?NIL:T)):(rcls2_v3994?NIL:T)));}}
static double rcls2_f775(){if (rcls2_p775) return rcls2_m775; else {rcls2_p775=T;return rcls2_m775=((rcls2_v3993=rcls2_f3993()),((rcls2_v3993?rcls2_v3993:rcls2_f3998())?((rcls2_f4008()+((0.5)*rcls2_f4000()))/rcls2_f6469()):((rcls2_f4008()<rcls2_f6496())?(-rcls2_f3987()):(rcls2_f3987()+(1.0)))));}}
static double rcls2_f770(){if (rcls2_p770) return rcls2_m770; else {rcls2_p770=T;return rcls2_m770=(rcls2_v6512+(rcls2_f775()*rcls2_f5874()));}}
static int rcls2_f769(){if (rcls2_p769) return rcls2_m769; else {rcls2_p769=T;return rcls2_m769=(rcls2_v6528==rcls2_f770());}}
static double rcls2_f773(){if (rcls2_p773) return rcls2_m773; else {rcls2_p773=T;return rcls2_m773=(rcls2_v6514+(rcls2_f775()*rcls2_f5873()));}}
static double rcls2_f733(){if (rcls2_p733) return rcls2_m733; else {rcls2_p733=T;return rcls2_m733=atan2((rcls2_f770()-rcls2_v6512),(rcls2_f773()-rcls2_v6514));}}
static double rcls2_f710(){if (rcls2_p710) return rcls2_m710; else {rcls2_p710=T;return rcls2_m710=(rcls2_f733()+(-1.5707963267948966));}}
static double rcls2_f731(){if (rcls2_p731) return rcls2_m731; else {rcls2_p731=T;return rcls2_m731=normalize_rotation((rcls2_f733()-rcls2_f3902()));}}
static double rcls2_f730(){if (rcls2_p730) return rcls2_m730; else {rcls2_p730=T;return rcls2_m730=normalize_rotation(rcls2_f731());}}
static int rcls2_f718(){if (rcls2_p718) return rcls2_m718; else {rcls2_p718=T;return rcls2_m718=((rcls2_v730=rcls2_f730()),((fabs((rcls2_v730-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v730-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v730-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f772(){if (rcls2_p772) return rcls2_m772; else {rcls2_p772=T;return rcls2_m772=(rcls2_v6530==rcls2_f773());}}
static double rcls2_f767(){if (rcls2_p767) return rcls2_m767; else {rcls2_p767=T;return rcls2_m767=(rcls2_f772()?(rcls2_f769()?rcls2_f1131():(0.0)):(1.0));}}
static double rcls2_f762(){if (rcls2_p762) return rcls2_m762; else {rcls2_p762=T;return rcls2_m762=((rcls2_f770()-rcls2_v6528)/(rcls2_f773()-rcls2_v6530));}}
static double rcls2_f755(){if (rcls2_p755) return rcls2_m755; else {rcls2_p755=T;return rcls2_m755=(rcls2_f772()?(rcls2_f769()?rcls2_f1131():rcls2_f770()):(rcls2_f773()+(rcls2_f762()*rcls2_f770())));}}
static double rcls2_f761(){if (rcls2_p761) return rcls2_m761; else {rcls2_p761=T;return rcls2_m761=(rcls2_f772()?(rcls2_f769()?rcls2_f1131():(1.0)):rcls2_f762());}}
static double rcls2_f702(){if (rcls2_p702) return rcls2_m702; else {rcls2_p702=T;return rcls2_m702=((rcls2_v710=rcls2_f710()),(((rcls2_f767()*(rcls2_f773()+cos(rcls2_v710)))+(rcls2_f761()*(rcls2_f770()+sin(rcls2_v710))))-rcls2_f755()));}}
static double rcls2_f747(){if (rcls2_p747) return rcls2_m747; else {rcls2_p747=T;return rcls2_m747=(((rcls2_f767()*rcls2_v6530)+(rcls2_f761()*rcls2_v6528))-rcls2_f755());}}
static double rcls2_f754(){if (rcls2_p754) return rcls2_m754; else {rcls2_p754=T;return rcls2_m754=(((rcls2_f767()*rcls2_v6522)+(rcls2_f761()*rcls2_v6520))-rcls2_f755());}}
static int rcls2_f751(){if (rcls2_p751) return rcls2_m751; else {rcls2_p751=T;return rcls2_m751=(fabs((rcls2_f754()-(0.0)))<rcls2_v6508);}}
static int rcls2_f742(){if (rcls2_p742) return rcls2_m742; else {rcls2_p742=T;return rcls2_m742=(rcls2_f754()>(0.0));}}
static int rcls2_f741(){if (rcls2_p741) return rcls2_m741; else {rcls2_p741=T;return rcls2_m741=(rcls2_f742()?NIL:T);}}
static int rcls2_f692(){if (rcls2_p692) return rcls2_m692; else {rcls2_p692=T;return rcls2_m692=((rcls2_v718=rcls2_f718()),(rcls2_v718?rcls2_v718:(((fabs((rcls2_v6514-rcls2_f773()))<rcls2_v6508)?(fabs((rcls2_v6512-rcls2_f770()))<rcls2_v6508):NIL)?NIL:((rcls2_f751()?T:((rcls2_v702=rcls2_f702()),((fabs((rcls2_v702-(0.0)))<rcls2_v6508)?NIL:((rcls2_v702>(0.0))?rcls2_f742():rcls2_f741()))))?NIL:T))));}}
static double rcls2_f475(){if (rcls2_p475) return rcls2_m475; else {rcls2_p475=T;return rcls2_m475=(rcls2_f692()?rcls2_f731():rcls2_f834());}}
static double rcls2_f689(){if (rcls2_p689) return rcls2_m689; else {rcls2_p689=T;return rcls2_m689=(rcls2_f692()?rcls2_f731():rcls2_f2532());}}
static double rcls2_f691(){if (rcls2_p691) return rcls2_m691; else {rcls2_p691=T;return rcls2_m691=(rcls2_f692()?rcls2_f731():rcls2_f2536());}}
static int rcls2_f690(){if (rcls2_p690) return rcls2_m690; else {rcls2_p690=T;return rcls2_m690=(rcls2_f691()<(0.0));}}
static int rcls2_f684(){if (rcls2_p684) return rcls2_m684; else {rcls2_p684=T;return rcls2_m684=(rcls2_f692()?((rcls2_v690=rcls2_f690()),(rcls2_v690?rcls2_v690:(fabs((rcls2_f689()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f681(){if (rcls2_p681) return rcls2_m681; else {rcls2_p681=T;return rcls2_m681=((rcls2_f684()?rcls2_f691():rcls2_f2536())<(0.0));}}
static int rcls2_f675(){if (rcls2_p675) return rcls2_m675; else {rcls2_p675=T;return rcls2_m675=((rcls2_v684=rcls2_f684()),((rcls2_v684?rcls2_f692():NIL)?((rcls2_v681=rcls2_f681()),(rcls2_v681?rcls2_v681:(fabs(((rcls2_v684?rcls2_f689():rcls2_f2532())-(0.0)))<rcls2_v6508))):NIL));}}
static int rcls2_f738(){if (rcls2_p738) return rcls2_m738; else {rcls2_p738=T;return rcls2_m738=(rcls2_f751()?NIL:((rcls2_v747=rcls2_f747()),((fabs((rcls2_v747-(0.0)))<rcls2_v6508)?NIL:((rcls2_v747>(0.0))?rcls2_f742():rcls2_f741()))));}}
static int rcls2_f736(){if (rcls2_p736) return rcls2_m736; else {rcls2_p736=T;return rcls2_m736=(rcls2_f3948()?rcls2_f738():(rcls2_f738()?NIL:T));}}
static double rcls2_f470(){if (rcls2_p470) return rcls2_m470; else {rcls2_p470=T;return rcls2_m470=(rcls2_f3994()?(rcls2_f736()?((rcls2_v684=rcls2_f684()),(rcls2_v684?(rcls2_f675()?(rcls2_f692()?rcls2_f731():rcls2_f832()):rcls2_f475()):(rcls2_v684?rcls2_f475():rcls2_f834()))):rcls2_f834()):rcls2_f834());}}
static double rcls2_f454(){if (rcls2_p454) return rcls2_m454; else {rcls2_p454=T;return rcls2_m454=(-(rcls2_f781()?rcls2_f834():(rcls2_f4468()?rcls2_f834():(rcls2_f4001()?rcls2_f470():(rcls2_f667()?rcls2_f470():(rcls2_f622()?(rcls2_f570()?(rcls2_f484()?(rcls2_f578()?(rcls2_f493()?(rcls2_f501()?((rcls2_v617=rcls2_f617()),(rcls2_v562=rcls2_f562()),((rcls2_v617>rcls2_v562)?rcls2_v617:rcls2_v562)):rcls2_f832()):rcls2_f832()):rcls2_f832()):(rcls2_f578()?rcls2_f617():rcls2_f834())):(rcls2_f493()?(rcls2_f501()?rcls2_f562():rcls2_f834()):rcls2_f834())):rcls2_f834()))))));}}
static int rcls2_f415(){if (rcls2_p415) return rcls2_m415; else {rcls2_p415=T;return rcls2_m415=(rcls2_f792()<rcls2_f454());}}
static int rcls2_f449(){if (rcls2_p449) return rcls2_m449; else {rcls2_p449=T;return rcls2_m449=(rcls2_f3994()?(rcls2_f736()?(rcls2_f684()?(rcls2_f675()?NIL:(rcls2_f692()?NIL:T)):T):T):T);}}
static int rcls2_f439(){if (rcls2_p439) return rcls2_m439; else {rcls2_p439=T;return rcls2_m439=(rcls2_f781()?T:(rcls2_f4468()?T:(rcls2_f4001()?rcls2_f449():(rcls2_f667()?rcls2_f449():(rcls2_f622()?(rcls2_f570()?(rcls2_f484()?NIL:(rcls2_f578()?NIL:T)):(rcls2_f493()?(rcls2_f501()?NIL:T):T)):T)))));}}
static int rcls2_f671(){if (rcls2_p671) return rcls2_m671; else {rcls2_p671=T;return rcls2_m671=(rcls2_f3994()?(rcls2_f736()?(rcls2_f684()?(rcls2_f675()?T:rcls2_f692()):NIL):NIL):NIL);}}
static int rcls2_f477(){if (rcls2_p477) return rcls2_m477; else {rcls2_p477=T;return rcls2_m477=(rcls2_f781()?NIL:(rcls2_f4468()?NIL:(rcls2_f4001()?rcls2_f671():(rcls2_f667()?rcls2_f671():(rcls2_f622()?(rcls2_f570()?(rcls2_f484()?T:rcls2_f578()):rcls2_f492()):NIL)))));}}
static double rcls2_f434(){if (rcls2_p434) return rcls2_m434; else {rcls2_p434=T;return rcls2_m434=(rcls2_f477()?rcls2_f454():(rcls2_f439()?rcls2_f2532():rcls2_f792()));}}
static double rcls2_f437(){if (rcls2_p437) return rcls2_m437; else {rcls2_p437=T;return rcls2_m437=(rcls2_f477()?rcls2_f454():(rcls2_f439()?rcls2_f2536():rcls2_f792()));}}
static int rcls2_f436(){if (rcls2_p436) return rcls2_m436; else {rcls2_p436=T;return rcls2_m436=(rcls2_f437()>(0.0));}}
static int rcls2_f429(){if (rcls2_p429) return rcls2_m429; else {rcls2_p429=T;return rcls2_m429=(rcls2_f477()?((rcls2_v436=rcls2_f436()),(rcls2_v436?rcls2_v436:(fabs((rcls2_f434()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f428(){if (rcls2_p428) return rcls2_m428; else {rcls2_p428=T;return rcls2_m428=(rcls2_f429()?rcls2_f477():NIL);}}
static double rcls2_f425(){if (rcls2_p425) return rcls2_m425; else {rcls2_p425=T;return rcls2_m425=(rcls2_f429()?rcls2_f434():rcls2_f2532());}}
static double rcls2_f427(){if (rcls2_p427) return rcls2_m427; else {rcls2_p427=T;return rcls2_m427=(rcls2_f429()?rcls2_f437():rcls2_f2536());}}
static int rcls2_f426(){if (rcls2_p426) return rcls2_m426; else {rcls2_p426=T;return rcls2_m426=(rcls2_f427()>(0.0));}}
static int rcls2_f420(){if (rcls2_p420) return rcls2_m420; else {rcls2_p420=T;return rcls2_m420=(rcls2_f428()?((rcls2_v426=rcls2_f426()),(rcls2_v426?rcls2_v426:(fabs((rcls2_f425()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f4464(){if (rcls2_p4464) return rcls2_m4464; else {rcls2_p4464=T;return rcls2_m4464=((rcls2_v4467=rcls2_f4467()),sqrt(((rcls2_v4467*rcls2_v4467)+rcls2_f6124())));}}
static double rcls2_f4430(){if (rcls2_p4430) return rcls2_m4430; else {rcls2_p4430=T;return rcls2_m4430=((rcls2_v4464=rcls2_f4464()),(rcls2_v4464*rcls2_v4464));}}
static double rcls2_f1029(){if (rcls2_p1029) return rcls2_m1029; else {rcls2_p1029=T;return rcls2_m1029=(((rcls2_f4469()+rcls2_f4430())-rcls2_f6443())/rcls2_f1030());}}
static double rcls2_f1019(){if (rcls2_p1019) return rcls2_m1019; else {rcls2_p1019=T;return rcls2_m1019=(rcls2_f1029()*rcls2_f4418());}}
static double rcls2_f1025(){if (rcls2_p1025) return rcls2_m1025; else {rcls2_p1025=T;return rcls2_m1025=(rcls2_f1029()*rcls2_f4419());}}
static double rcls2_f1027(){if (rcls2_p1027) return rcls2_m1027; else {rcls2_p1027=T;return rcls2_m1027=((rcls2_v1029=rcls2_f1029()),(rcls2_f4430()-(rcls2_v1029*rcls2_v1029)));}}
static int rcls2_f1026(){if (rcls2_p1026) return rcls2_m1026; else {rcls2_p1026=T;return rcls2_m1026=(rcls2_f1027()<0.0);}}
static double rcls2_f1024(){if (rcls2_p1024) return rcls2_m1024; else {rcls2_p1024=T;return rcls2_m1024=sqrt(rcls2_f1027());}}
static double rcls2_f1018(){if (rcls2_p1018) return rcls2_m1018; else {rcls2_p1018=T;return rcls2_m1018=(rcls2_f1024()*rcls2_f4419());}}
static double rcls2_f927(){if (rcls2_p927) return rcls2_m927; else {rcls2_p927=T;return rcls2_m927=(rcls2_v6512+(rcls2_f1019()-rcls2_f1018()));}}
static int rcls2_f899(){if (rcls2_p899) return rcls2_m899; else {rcls2_p899=T;return rcls2_m899=(rcls2_v6528==rcls2_f927());}}
static double rcls2_f1017(){if (rcls2_p1017) return rcls2_m1017; else {rcls2_p1017=T;return rcls2_m1017=(rcls2_v6512+rcls2_f1019()+rcls2_f1018());}}
static int rcls2_f1016(){if (rcls2_p1016) return rcls2_m1016; else {rcls2_p1016=T;return rcls2_m1016=(rcls2_v6528==rcls2_f1017());}}
static double rcls2_f1023(){if (rcls2_p1023) return rcls2_m1023; else {rcls2_p1023=T;return rcls2_m1023=(rcls2_f1024()*rcls2_f4418());}}
static double rcls2_f925(){if (rcls2_p925) return rcls2_m925; else {rcls2_p925=T;return rcls2_m925=(rcls2_v6514+rcls2_f1025()+rcls2_f1023());}}
static int rcls2_f900(){if (rcls2_p900) return rcls2_m900; else {rcls2_p900=T;return rcls2_m900=(rcls2_v6530==rcls2_f925());}}
static double rcls2_f897(){if (rcls2_p897) return rcls2_m897; else {rcls2_p897=T;return rcls2_m897=(rcls2_f900()?(rcls2_f899()?rcls2_f1131():(0.0)):(1.0));}}
static double rcls2_f892(){if (rcls2_p892) return rcls2_m892; else {rcls2_p892=T;return rcls2_m892=((rcls2_f927()-rcls2_v6528)/(rcls2_f925()-rcls2_v6530));}}
static double rcls2_f885(){if (rcls2_p885) return rcls2_m885; else {rcls2_p885=T;return rcls2_m885=(rcls2_f900()?(rcls2_f899()?rcls2_f1131():rcls2_f927()):(rcls2_f925()+(rcls2_f892()*rcls2_f927())));}}
static double rcls2_f891(){if (rcls2_p891) return rcls2_m891; else {rcls2_p891=T;return rcls2_m891=(rcls2_f900()?(rcls2_f899()?rcls2_f1131():(1.0)):rcls2_f892());}}
static double rcls2_f884(){if (rcls2_p884) return rcls2_m884; else {rcls2_p884=T;return rcls2_m884=(((rcls2_f897()*rcls2_v6518)+(rcls2_f891()*rcls2_v6516))-rcls2_f885());}}
static int rcls2_f867(){if (rcls2_p867) return rcls2_m867; else {rcls2_p867=T;return rcls2_m867=(rcls2_f884()>(0.0));}}
static double rcls2_f923(){if (rcls2_p923) return rcls2_m923; else {rcls2_p923=T;return rcls2_m923=atan2((rcls2_f927()-rcls2_v6512),(rcls2_f925()-rcls2_v6514));}}
static double rcls2_f880(){if (rcls2_p880) return rcls2_m880; else {rcls2_p880=T;return rcls2_m880=(rcls2_f923()+(-1.5707963267948966));}}
static double rcls2_f872(){if (rcls2_p872) return rcls2_m872; else {rcls2_p872=T;return rcls2_m872=((rcls2_v880=rcls2_f880()),(((rcls2_f897()*(rcls2_f925()+cos(rcls2_v880)))+(rcls2_f891()*(rcls2_f927()+sin(rcls2_v880))))-rcls2_f885()));}}
static double rcls2_f921(){if (rcls2_p921) return rcls2_m921; else {rcls2_p921=T;return rcls2_m921=normalize_rotation((rcls2_f923()-rcls2_f4350()));}}
static double rcls2_f920(){if (rcls2_p920) return rcls2_m920; else {rcls2_p920=T;return rcls2_m920=normalize_rotation(rcls2_f921());}}
static int rcls2_f908(){if (rcls2_p908) return rcls2_m908; else {rcls2_p908=T;return rcls2_m908=((rcls2_v920=rcls2_f920()),((fabs((rcls2_v920-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v920-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v920-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f860(){if (rcls2_p860) return rcls2_m860; else {rcls2_p860=T;return rcls2_m860=((rcls2_v908=rcls2_f908()),(rcls2_v908?rcls2_v908:(((fabs((rcls2_v6514-rcls2_f925()))<rcls2_v6508)?(fabs((rcls2_v6512-rcls2_f927()))<rcls2_v6508):NIL)?NIL:(((fabs((rcls2_f884()-(0.0)))<rcls2_v6508)?T:((rcls2_v872=rcls2_f872()),((fabs((rcls2_v872-(0.0)))<rcls2_v6508)?NIL:((rcls2_v872>(0.0))?rcls2_f867():(rcls2_f867()?NIL:T)))))?NIL:T))));}}
static double rcls2_f857(){if (rcls2_p857) return rcls2_m857; else {rcls2_p857=T;return rcls2_m857=(rcls2_f860()?rcls2_f921():rcls2_f2532());}}
static double rcls2_f859(){if (rcls2_p859) return rcls2_m859; else {rcls2_p859=T;return rcls2_m859=(rcls2_f860()?rcls2_f921():rcls2_f2536());}}
static int rcls2_f858(){if (rcls2_p858) return rcls2_m858; else {rcls2_p858=T;return rcls2_m858=(rcls2_f859()<(0.0));}}
static int rcls2_f852(){if (rcls2_p852) return rcls2_m852; else {rcls2_p852=T;return rcls2_m852=(rcls2_f860()?((rcls2_v858=rcls2_f858()),(rcls2_v858?rcls2_v858:(fabs((rcls2_f857()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f851(){if (rcls2_p851) return rcls2_m851; else {rcls2_p851=T;return rcls2_m851=(rcls2_f852()?rcls2_f860():NIL);}}
static int rcls2_f849(){if (rcls2_p849) return rcls2_m849; else {rcls2_p849=T;return rcls2_m849=((rcls2_f852()?rcls2_f859():rcls2_f2536())<(0.0));}}
static int rcls2_f843(){if (rcls2_p843) return rcls2_m843; else {rcls2_p843=T;return rcls2_m843=(rcls2_f851()?((rcls2_v849=rcls2_f849()),(rcls2_v849?rcls2_v849:(fabs(((rcls2_f852()?rcls2_f857():rcls2_f2532())-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f1021(){if (rcls2_p1021) return rcls2_m1021; else {rcls2_p1021=T;return rcls2_m1021=(rcls2_v6514+(rcls2_f1025()-rcls2_f1023()));}}
static double rcls2_f978(){if (rcls2_p978) return rcls2_m978; else {rcls2_p978=T;return rcls2_m978=atan2((rcls2_f1017()-rcls2_v6512),(rcls2_f1021()-rcls2_v6514));}}
static double rcls2_f955(){if (rcls2_p955) return rcls2_m955; else {rcls2_p955=T;return rcls2_m955=(rcls2_f978()+(-1.5707963267948966));}}
static double rcls2_f976(){if (rcls2_p976) return rcls2_m976; else {rcls2_p976=T;return rcls2_m976=normalize_rotation((rcls2_f978()-rcls2_f4350()));}}
static double rcls2_f975(){if (rcls2_p975) return rcls2_m975; else {rcls2_p975=T;return rcls2_m975=normalize_rotation(rcls2_f976());}}
static int rcls2_f963(){if (rcls2_p963) return rcls2_m963; else {rcls2_p963=T;return rcls2_m963=((rcls2_v975=rcls2_f975()),((fabs((rcls2_v975-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v975-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v975-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f1020(){if (rcls2_p1020) return rcls2_m1020; else {rcls2_p1020=T;return rcls2_m1020=(rcls2_v6530==rcls2_f1021());}}
static double rcls2_f1014(){if (rcls2_p1014) return rcls2_m1014; else {rcls2_p1014=T;return rcls2_m1014=(rcls2_f1020()?(rcls2_f1016()?rcls2_f1131():(0.0)):(1.0));}}
static double rcls2_f1009(){if (rcls2_p1009) return rcls2_m1009; else {rcls2_p1009=T;return rcls2_m1009=((rcls2_f1017()-rcls2_v6528)/(rcls2_f1021()-rcls2_v6530));}}
static double rcls2_f1002(){if (rcls2_p1002) return rcls2_m1002; else {rcls2_p1002=T;return rcls2_m1002=(rcls2_f1020()?(rcls2_f1016()?rcls2_f1131():rcls2_f1017()):(rcls2_f1021()+(rcls2_f1009()*rcls2_f1017())));}}
static double rcls2_f1008(){if (rcls2_p1008) return rcls2_m1008; else {rcls2_p1008=T;return rcls2_m1008=(rcls2_f1020()?(rcls2_f1016()?rcls2_f1131():(1.0)):rcls2_f1009());}}
static double rcls2_f947(){if (rcls2_p947) return rcls2_m947; else {rcls2_p947=T;return rcls2_m947=((rcls2_v955=rcls2_f955()),(((rcls2_f1014()*(rcls2_f1021()+cos(rcls2_v955)))+(rcls2_f1008()*(rcls2_f1017()+sin(rcls2_v955))))-rcls2_f1002()));}}
static double rcls2_f994(){if (rcls2_p994) return rcls2_m994; else {rcls2_p994=T;return rcls2_m994=(((rcls2_f1014()*rcls2_v6530)+(rcls2_f1008()*rcls2_v6528))-rcls2_f1002());}}
static double rcls2_f1001(){if (rcls2_p1001) return rcls2_m1001; else {rcls2_p1001=T;return rcls2_m1001=(((rcls2_f1014()*rcls2_v6518)+(rcls2_f1008()*rcls2_v6516))-rcls2_f1002());}}
static int rcls2_f998(){if (rcls2_p998) return rcls2_m998; else {rcls2_p998=T;return rcls2_m998=(fabs((rcls2_f1001()-(0.0)))<rcls2_v6508);}}
static int rcls2_f989(){if (rcls2_p989) return rcls2_m989; else {rcls2_p989=T;return rcls2_m989=(rcls2_f1001()>(0.0));}}
static int rcls2_f988(){if (rcls2_p988) return rcls2_m988; else {rcls2_p988=T;return rcls2_m988=(rcls2_f989()?NIL:T);}}
static int rcls2_f937(){if (rcls2_p937) return rcls2_m937; else {rcls2_p937=T;return rcls2_m937=((rcls2_v963=rcls2_f963()),(rcls2_v963?rcls2_v963:(((fabs((rcls2_v6514-rcls2_f1021()))<rcls2_v6508)?(fabs((rcls2_v6512-rcls2_f1017()))<rcls2_v6508):NIL)?NIL:((rcls2_f998()?T:((rcls2_v947=rcls2_f947()),((fabs((rcls2_v947-(0.0)))<rcls2_v6508)?NIL:((rcls2_v947>(0.0))?rcls2_f989():rcls2_f988()))))?NIL:T))));}}
static int rcls2_f935(){if (rcls2_p935) return rcls2_m935; else {rcls2_p935=T;return rcls2_m935=((rcls2_f937()?rcls2_f976():rcls2_f2536())<(0.0));}}
static int rcls2_f929(){if (rcls2_p929) return rcls2_m929; else {rcls2_p929=T;return rcls2_m929=((rcls2_v937=rcls2_f937()),(rcls2_v937?((rcls2_v935=rcls2_f935()),(rcls2_v935?rcls2_v935:(fabs(((rcls2_v937?rcls2_f976():rcls2_f2532())-(0.0)))<rcls2_v6508))):NIL));}}
static int rcls2_f985(){if (rcls2_p985) return rcls2_m985; else {rcls2_p985=T;return rcls2_m985=(rcls2_f998()?NIL:((rcls2_v994=rcls2_f994()),((fabs((rcls2_v994-(0.0)))<rcls2_v6508)?NIL:((rcls2_v994>(0.0))?rcls2_f989():rcls2_f988()))));}}
static double rcls2_f4442(){if (rcls2_p4442) return rcls2_m4442; else {rcls2_p4442=T;return rcls2_m4442=(rcls2_f4464()/rcls2_f6469());}}
static double rcls2_f4458(){if (rcls2_p4458) return rcls2_m4458; else {rcls2_p4458=T;return rcls2_m4458=(rcls2_f4464()+rcls2_f6496());}}
static int rcls2_f4456(){if (rcls2_p4456) return rcls2_m4456; else {rcls2_p4456=T;return rcls2_m4456=((rcls2_v4458=rcls2_f4458()),(rcls2_f4469()>(rcls2_v4458*rcls2_v4458)));}}
static int rcls2_f4448(){if (rcls2_p4448) return rcls2_m4448; else {rcls2_p4448=T;return rcls2_m4448=(rcls2_f6469()>rcls2_f4458());}}
static int rcls2_f4401(){if (rcls2_p4401) return rcls2_m4401; else {rcls2_p4401=T;return rcls2_m4401=(rcls2_f4431()>rcls2_f4458());}}
static int rcls2_f4399(){if (rcls2_p4399) return rcls2_m4399; else {rcls2_p4399=T;return rcls2_m4399=((rcls2_v4401=rcls2_f4401()),(rcls2_v4401?rcls2_v4401:(rcls2_f4464()>rcls2_f6496())));}}
static double rcls2_f4455(){if (rcls2_p4455) return rcls2_m4455; else {rcls2_p4455=T;return rcls2_m4455=(rcls2_f6469()-rcls2_f4458());}}
static int rcls2_f4453(){if (rcls2_p4453) return rcls2_m4453; else {rcls2_p4453=T;return rcls2_m4453=(fabs(rcls2_f4455())<rcls2_v6508);}}
static int rcls2_f4449(){if (rcls2_p4449) return rcls2_m4449; else {rcls2_p4449=T;return rcls2_m4449=((rcls2_v4453=rcls2_f4453()),(rcls2_v4453?rcls2_v4453:(fabs((rcls2_f6469()-fabs((rcls2_f4464()-rcls2_f6496()))))<rcls2_v6508)));}}
static int rcls2_f981(){if (rcls2_p981) return rcls2_m981; else {rcls2_p981=T;return rcls2_m981=((rcls2_v4449=rcls2_f4449()),(rcls2_v4449?(rcls2_f4399()?rcls2_f985():(rcls2_f985()?NIL:T)):(rcls2_v4449?NIL:T)));}}
static double rcls2_f1139(){if (rcls2_p1139) return rcls2_m1139; else {rcls2_p1139=T;return rcls2_m1139=((rcls2_v4448=rcls2_f4448()),((rcls2_v4448?rcls2_v4448:rcls2_f4453())?((rcls2_f4464()+((0.5)*rcls2_f4455()))/rcls2_f6469()):((rcls2_f4464()<rcls2_f6496())?(-rcls2_f4442()):(rcls2_f4442()+(1.0)))));}}
static double rcls2_f1134(){if (rcls2_p1134) return rcls2_m1134; else {rcls2_p1134=T;return rcls2_m1134=(rcls2_v6512+(rcls2_f1139()*rcls2_f5874()));}}
static int rcls2_f1133(){if (rcls2_p1133) return rcls2_m1133; else {rcls2_p1133=T;return rcls2_m1133=(rcls2_v6528==rcls2_f1134());}}
static double rcls2_f1137(){if (rcls2_p1137) return rcls2_m1137; else {rcls2_p1137=T;return rcls2_m1137=(rcls2_v6514+(rcls2_f1139()*rcls2_f5873()));}}
static double rcls2_f1095(){if (rcls2_p1095) return rcls2_m1095; else {rcls2_p1095=T;return rcls2_m1095=atan2((rcls2_f1134()-rcls2_v6512),(rcls2_f1137()-rcls2_v6514));}}
static double rcls2_f1071(){if (rcls2_p1071) return rcls2_m1071; else {rcls2_p1071=T;return rcls2_m1071=(rcls2_f1095()+(-1.5707963267948966));}}
static double rcls2_f1093(){if (rcls2_p1093) return rcls2_m1093; else {rcls2_p1093=T;return rcls2_m1093=normalize_rotation((rcls2_f1095()-rcls2_f4350()));}}
static double rcls2_f1092(){if (rcls2_p1092) return rcls2_m1092; else {rcls2_p1092=T;return rcls2_m1092=normalize_rotation(rcls2_f1093());}}
static int rcls2_f1080(){if (rcls2_p1080) return rcls2_m1080; else {rcls2_p1080=T;return rcls2_m1080=((rcls2_v1092=rcls2_f1092()),((fabs((rcls2_v1092-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v1092-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v1092-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f1136(){if (rcls2_p1136) return rcls2_m1136; else {rcls2_p1136=T;return rcls2_m1136=(rcls2_v6530==rcls2_f1137());}}
static double rcls2_f1129(){if (rcls2_p1129) return rcls2_m1129; else {rcls2_p1129=T;return rcls2_m1129=(rcls2_f1136()?(rcls2_f1133()?rcls2_f1131():(0.0)):(1.0));}}
static double rcls2_f1124(){if (rcls2_p1124) return rcls2_m1124; else {rcls2_p1124=T;return rcls2_m1124=((rcls2_f1134()-rcls2_v6528)/(rcls2_f1137()-rcls2_v6530));}}
static double rcls2_f1117(){if (rcls2_p1117) return rcls2_m1117; else {rcls2_p1117=T;return rcls2_m1117=(rcls2_f1136()?(rcls2_f1133()?rcls2_f1131():rcls2_f1134()):(rcls2_f1137()+(rcls2_f1124()*rcls2_f1134())));}}
static double rcls2_f1123(){if (rcls2_p1123) return rcls2_m1123; else {rcls2_p1123=T;return rcls2_m1123=(rcls2_f1136()?(rcls2_f1133()?rcls2_f1131():(1.0)):rcls2_f1124());}}
static double rcls2_f1063(){if (rcls2_p1063) return rcls2_m1063; else {rcls2_p1063=T;return rcls2_m1063=((rcls2_v1071=rcls2_f1071()),(((rcls2_f1129()*(rcls2_f1137()+cos(rcls2_v1071)))+(rcls2_f1123()*(rcls2_f1134()+sin(rcls2_v1071))))-rcls2_f1117()));}}
static double rcls2_f1109(){if (rcls2_p1109) return rcls2_m1109; else {rcls2_p1109=T;return rcls2_m1109=(((rcls2_f1129()*rcls2_v6530)+(rcls2_f1123()*rcls2_v6528))-rcls2_f1117());}}
static double rcls2_f1116(){if (rcls2_p1116) return rcls2_m1116; else {rcls2_p1116=T;return rcls2_m1116=(((rcls2_f1129()*rcls2_v6518)+(rcls2_f1123()*rcls2_v6516))-rcls2_f1117());}}
static int rcls2_f1113(){if (rcls2_p1113) return rcls2_m1113; else {rcls2_p1113=T;return rcls2_m1113=(fabs((rcls2_f1116()-(0.0)))<rcls2_v6508);}}
static int rcls2_f1104(){if (rcls2_p1104) return rcls2_m1104; else {rcls2_p1104=T;return rcls2_m1104=(rcls2_f1116()>(0.0));}}
static int rcls2_f1103(){if (rcls2_p1103) return rcls2_m1103; else {rcls2_p1103=T;return rcls2_m1103=(rcls2_f1104()?NIL:T);}}
static int rcls2_f1053(){if (rcls2_p1053) return rcls2_m1053; else {rcls2_p1053=T;return rcls2_m1053=((rcls2_v1080=rcls2_f1080()),(rcls2_v1080?rcls2_v1080:(((fabs((rcls2_v6514-rcls2_f1137()))<rcls2_v6508)?(fabs((rcls2_v6512-rcls2_f1134()))<rcls2_v6508):NIL)?NIL:((rcls2_f1113()?T:((rcls2_v1063=rcls2_f1063()),((fabs((rcls2_v1063-(0.0)))<rcls2_v6508)?NIL:((rcls2_v1063>(0.0))?rcls2_f1104():rcls2_f1103()))))?NIL:T))));}}
static double rcls2_f830(){if (rcls2_p830) return rcls2_m830; else {rcls2_p830=T;return rcls2_m830=(rcls2_f1053()?rcls2_f1093():rcls2_f834());}}
static double rcls2_f1050(){if (rcls2_p1050) return rcls2_m1050; else {rcls2_p1050=T;return rcls2_m1050=(rcls2_f1053()?rcls2_f1093():rcls2_f2532());}}
static double rcls2_f1052(){if (rcls2_p1052) return rcls2_m1052; else {rcls2_p1052=T;return rcls2_m1052=(rcls2_f1053()?rcls2_f1093():rcls2_f2536());}}
static int rcls2_f1051(){if (rcls2_p1051) return rcls2_m1051; else {rcls2_p1051=T;return rcls2_m1051=(rcls2_f1052()<(0.0));}}
static int rcls2_f1045(){if (rcls2_p1045) return rcls2_m1045; else {rcls2_p1045=T;return rcls2_m1045=(rcls2_f1053()?((rcls2_v1051=rcls2_f1051()),(rcls2_v1051?rcls2_v1051:(fabs((rcls2_f1050()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f1042(){if (rcls2_p1042) return rcls2_m1042; else {rcls2_p1042=T;return rcls2_m1042=((rcls2_f1045()?rcls2_f1052():rcls2_f2536())<(0.0));}}
static int rcls2_f1036(){if (rcls2_p1036) return rcls2_m1036; else {rcls2_p1036=T;return rcls2_m1036=((rcls2_v1045=rcls2_f1045()),((rcls2_v1045?rcls2_f1053():NIL)?((rcls2_v1042=rcls2_f1042()),(rcls2_v1042?rcls2_v1042:(fabs(((rcls2_v1045?rcls2_f1050():rcls2_f2532())-(0.0)))<rcls2_v6508))):NIL));}}
static int rcls2_f1100(){if (rcls2_p1100) return rcls2_m1100; else {rcls2_p1100=T;return rcls2_m1100=(rcls2_f1113()?NIL:((rcls2_v1109=rcls2_f1109()),((fabs((rcls2_v1109-(0.0)))<rcls2_v6508)?NIL:((rcls2_v1109>(0.0))?rcls2_f1104():rcls2_f1103()))));}}
static int rcls2_f1098(){if (rcls2_p1098) return rcls2_m1098; else {rcls2_p1098=T;return rcls2_m1098=(rcls2_f4399()?rcls2_f1100():(rcls2_f1100()?NIL:T));}}
static double rcls2_f825(){if (rcls2_p825) return rcls2_m825; else {rcls2_p825=T;return rcls2_m825=(rcls2_f4449()?(rcls2_f1098()?((rcls2_v1045=rcls2_f1045()),(rcls2_v1045?(rcls2_f1036()?(rcls2_f1053()?rcls2_f1093():rcls2_f832()):rcls2_f830()):(rcls2_v1045?rcls2_f830():rcls2_f834()))):rcls2_f834()):rcls2_f834());}}
static double rcls2_f809(){if (rcls2_p809) return rcls2_m809; else {rcls2_p809=T;return rcls2_m809=(-(rcls2_f1146()?rcls2_f834():(rcls2_f4468()?rcls2_f834():(rcls2_f4456()?rcls2_f825():(rcls2_f1026()?rcls2_f825():(rcls2_f981()?(rcls2_f929()?(rcls2_f843()?(rcls2_f937()?(rcls2_f852()?(rcls2_f860()?((rcls2_v976=rcls2_f976()),(rcls2_v921=rcls2_f921()),((rcls2_v976>rcls2_v921)?rcls2_v976:rcls2_v921)):rcls2_f832()):rcls2_f832()):rcls2_f832()):(rcls2_f937()?rcls2_f976():rcls2_f834())):(rcls2_f852()?(rcls2_f860()?rcls2_f921():rcls2_f834()):rcls2_f834())):rcls2_f834()))))));}}
static int rcls2_f419(){if (rcls2_p419) return rcls2_m419; else {rcls2_p419=T;return rcls2_m419=(rcls2_f809()<rcls2_f792());}}
static int rcls2_f804(){if (rcls2_p804) return rcls2_m804; else {rcls2_p804=T;return rcls2_m804=(rcls2_f4449()?(rcls2_f1098()?(rcls2_f1045()?(rcls2_f1036()?NIL:(rcls2_f1053()?NIL:T)):T):T):T);}}
static int rcls2_f794(){if (rcls2_p794) return rcls2_m794; else {rcls2_p794=T;return rcls2_m794=(rcls2_f1146()?T:(rcls2_f4468()?T:(rcls2_f4456()?rcls2_f804():(rcls2_f1026()?rcls2_f804():(rcls2_f981()?(rcls2_f929()?(rcls2_f843()?NIL:(rcls2_f937()?NIL:T)):(rcls2_f852()?(rcls2_f860()?NIL:T):T)):T)))));}}
static int rcls2_f1032(){if (rcls2_p1032) return rcls2_m1032; else {rcls2_p1032=T;return rcls2_m1032=(rcls2_f4449()?(rcls2_f1098()?(rcls2_f1045()?(rcls2_f1036()?T:rcls2_f1053()):NIL):NIL):NIL);}}
static int rcls2_f836(){if (rcls2_p836) return rcls2_m836; else {rcls2_p836=T;return rcls2_m836=(rcls2_f1146()?NIL:(rcls2_f4468()?NIL:(rcls2_f4456()?rcls2_f1032():(rcls2_f1026()?rcls2_f1032():(rcls2_f981()?(rcls2_f929()?(rcls2_f843()?T:rcls2_f937()):rcls2_f851()):NIL)))));}}
static double rcls2_f396(){if (rcls2_p396) return rcls2_m396; else {rcls2_p396=T;return rcls2_m396=(rcls2_f836()?(rcls2_f429()?(rcls2_f477()?((rcls2_v809=rcls2_f809()),(rcls2_v454=rcls2_f454()),((rcls2_v809<rcls2_v454)?rcls2_v809:rcls2_v454)):(rcls2_f439()?rcls2_f2304():(rcls2_f419()?rcls2_f809():rcls2_f792()))):rcls2_f2304()):(rcls2_f794()?rcls2_f2304():(rcls2_f429()?(rcls2_f477()?(rcls2_f415()?rcls2_f792():rcls2_f454()):(rcls2_f439()?rcls2_f2304():rcls2_f792())):rcls2_f2304())));}}
static double rcls2_f787(){if (rcls2_p787) return rcls2_m787; else {rcls2_p787=T;return rcls2_m787=(rcls2_f836()?rcls2_f809():(rcls2_f794()?rcls2_f2532():rcls2_f792()));}}
static double rcls2_f790(){if (rcls2_p790) return rcls2_m790; else {rcls2_p790=T;return rcls2_m790=(rcls2_f836()?rcls2_f809():(rcls2_f794()?rcls2_f2536():rcls2_f792()));}}
static int rcls2_f789(){if (rcls2_p789) return rcls2_m789; else {rcls2_p789=T;return rcls2_m789=(rcls2_f790()>(0.0));}}
static int rcls2_f782(){if (rcls2_p782) return rcls2_m782; else {rcls2_p782=T;return rcls2_m782=(rcls2_f836()?((rcls2_v789=rcls2_f789()),(rcls2_v789?rcls2_v789:(fabs((rcls2_f787()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f393(){if (rcls2_p393) return rcls2_m393; else {rcls2_p393=T;return rcls2_m393=((rcls2_f782()?(rcls2_f420()?rcls2_f396():rcls2_f790()):rcls2_f427())>(0.0));}}
static double rcls2_f6122(){if (rcls2_p6122) return rcls2_m6122; else {rcls2_p6122=T;return rcls2_m6122=((rcls2_v6127=rcls2_f6127()),sqrt(((rcls2_v6127*rcls2_v6127)+rcls2_f6124())));}}
static int rcls2_f2191(){if (rcls2_p2191) return rcls2_m2191; else {rcls2_p2191=T;return rcls2_m2191=(fabs((((fabs((rcls2_f2219()-(0.0)))<rcls2_v6508)?rcls2_f2898():((rcls2_v2204=rcls2_f2204()),(rcls2_v2198=rcls2_f2198()),sqrt(((rcls2_v2204*rcls2_v2204)+(rcls2_v2198*rcls2_v2198)))))-rcls2_f6122()))<rcls2_v6508);}}
static double rcls2_f186(){if (rcls2_p186) return rcls2_m186; else {rcls2_p186=T;return rcls2_m186=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f782()?(rcls2_f420()?((rcls2_v1861=rcls2_f1861()),(rcls2_v396=rcls2_f396()),((rcls2_v1861<rcls2_v396)?rcls2_v1861:rcls2_v396)):(rcls2_f836()?((rcls2_v1861=rcls2_f1861()),(rcls2_v809=rcls2_f809()),((rcls2_v1861<rcls2_v809)?rcls2_v1861:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f216()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v1861=rcls2_f1861()),(rcls2_v454=rcls2_f454()),((rcls2_v1861<rcls2_v454)?rcls2_v1861:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f216())):rcls2_f2304())):(rcls2_f2090()?(rcls2_f782()?(rcls2_f420()?((rcls2_v2104=rcls2_f2104()),(rcls2_v396=rcls2_f396()),((rcls2_v2104<rcls2_v396)?rcls2_v2104:rcls2_v396)):(rcls2_f836()?((rcls2_v2104=rcls2_f2104()),(rcls2_v809=rcls2_f809()),((rcls2_v2104<rcls2_v809)?rcls2_v2104:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f201()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2104=rcls2_f2104()),(rcls2_v454=rcls2_f454()),((rcls2_v2104<rcls2_v454)?rcls2_v2104:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f201())):rcls2_f2304())):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static double_or_symbol rcls2_f34(){if (rcls2_p34) return rcls2_m34; else {rcls2_p34=T;return rcls2_m34=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?((rcls2_v2082=rcls2_f2082()),(rcls2_v2082?(rcls2_f1862()?coerce_double_to_double_or_symbol(rcls2_f1861()):rcls2_f40()):(rcls2_v2082?rcls2_f40():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1500(){if (rcls2_p1500) return rcls2_m1500; else {rcls2_p1500=T;return rcls2_m1500=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1793()?rcls2_f2303():rcls2_f1861()):(rcls2_f2090()?(rcls2_f1791()?rcls2_f2303():rcls2_f2104()):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f1462(){if (rcls2_p1462) return rcls2_m1462; else {rcls2_p1462=T;return rcls2_m1462=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1748()?rcls2_f2781():rcls2_f1861()):(rcls2_f2090()?((rcls2_v2781=rcls2_f2781()),(rcls2_v2104=rcls2_f2104()),((rcls2_v2781<rcls2_v2104)?rcls2_v2781:rcls2_v2104)):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1784(){if (rcls2_p1784) return rcls2_m1784; else {rcls2_p1784=T;return rcls2_m1784=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1793()?rcls2_f2538():rcls2_f2090()):(rcls2_f2090()?(rcls2_f1791()?rcls2_f2538():T):NIL)):NIL):NIL):NIL):NIL);}}
static int rcls2_f1742(){if (rcls2_p1742) return rcls2_m1742; else {rcls2_p1742=T;return rcls2_m1742=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1748()?T:rcls2_f2090()):rcls2_f2090()):NIL):NIL):NIL):NIL);}}
static double rcls2_f1824(){if (rcls2_p1824) return rcls2_m1824; else {rcls2_p1824=T;return rcls2_m1824=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?rcls2_f1861():rcls2_f2087()):rcls2_f1867()):rcls2_f2532()):rcls2_f2532()):rcls2_f2532());}}
static double rcls2_f1856(){if (rcls2_p1856) return rcls2_m1856; else {rcls2_p1856=T;return rcls2_m1856=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?rcls2_f1861():rcls2_f2089()):rcls2_f1869()):rcls2_f2536()):rcls2_f2536()):rcls2_f2536());}}
static int rcls2_f2169(){if (rcls2_p2169) return rcls2_m2169; else {rcls2_p2169=T;return rcls2_m2169=((rcls2_v2191=rcls2_f2191()),(rcls2_v2191?((fabs((rcls2_f2187()-(0.0)))<rcls2_v6508)?NIL:((rcls2_v2180=rcls2_f2180()),((fabs((rcls2_v2180-(0.0)))<rcls2_v6508)?NIL:((rcls2_v2180>(0.0))?rcls2_f2175():(rcls2_f2175()?NIL:T))))):(rcls2_v2191?NIL:T)));}}
static int rcls2_f2077(){if (rcls2_p2077) return rcls2_m2077; else {rcls2_p2077=T;return rcls2_m2077=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?rcls2_f2090():rcls2_f2081()):NIL):NIL):NIL);}}
static double rcls2_f6089(){if (rcls2_p6089) return rcls2_m6089; else {rcls2_p6089=T;return rcls2_m6089=((rcls2_v6122=rcls2_f6122()),(rcls2_v6122*rcls2_v6122));}}
static double rcls2_f1977(){if (rcls2_p1977) return rcls2_m1977; else {rcls2_p1977=T;return rcls2_m1977=((rcls2_v1983=rcls2_f1983()),((rcls2_v1983*rcls2_v1983)-((4.0)*rcls2_f1981()*(rcls2_f2166()-(rcls2_f2226()*rcls2_f6089())))));}}
static int rcls2_f1976(){if (rcls2_p1976) return rcls2_m1976; else {rcls2_p1976=T;return rcls2_m1976=(rcls2_f1977()<0.0);}}
static double rcls2_f1971(){if (rcls2_p1971) return rcls2_m1971; else {rcls2_p1971=T;return rcls2_m1971=(sqrt(rcls2_f1977())/rcls2_f1974());}}
static double rcls2_f1955(){if (rcls2_p1955) return rcls2_m1955; else {rcls2_p1955=T;return rcls2_m1955=((rcls2_f1973()-rcls2_f1971())+rcls2_v6512);}}
static double rcls2_f1954(){if (rcls2_p1954) return rcls2_m1954; else {rcls2_p1954=T;return rcls2_m1954=(rcls2_f2222()*rcls2_f1955());}}
static double rcls2_f1952(){if (rcls2_p1952) return rcls2_m1952; else {rcls2_p1952=T;return rcls2_m1952=((rcls2_f2212()-rcls2_f1954())/rcls2_f2227());}}
static int rcls2_f1943(){if (rcls2_p1943) return rcls2_m1943; else {rcls2_p1943=T;return rcls2_m1943=((rcls2_v1952=rcls2_f1952()),((fabs((((rcls2_f2227()*rcls2_v1952)+rcls2_f1954())-rcls2_f2212()))<rcls2_v6508)?(((rcls2_f2125()<=rcls2_v1952)&&(rcls2_v1952<=rcls2_f2122()))?((rcls2_f2118()<=rcls2_f1955())&&(rcls2_f1955()<=rcls2_f2115())):NIL):NIL));}}
static double rcls2_f1911(){if (rcls2_p1911) return rcls2_m1911; else {rcls2_p1911=T;return rcls2_m1911=normalize_rotation((atan2((rcls2_f1955()-rcls2_v6512),(rcls2_f1952()-rcls2_v6514))-rcls2_f5872()));}}
static double rcls2_f93(){if (rcls2_p93) return rcls2_m93; else {rcls2_p93=T;return rcls2_m93=((rcls2_v1911=rcls2_f1911()),(rcls2_v792=rcls2_f792()),((rcls2_v1911<rcls2_v792)?rcls2_v1911:rcls2_v792));}}
static int rcls2_f1761(){if (rcls2_p1761) return rcls2_m1761; else {rcls2_p1761=T;return rcls2_m1761=(rcls2_f2303()<rcls2_f1911());}}
static double rcls2_f1910(){if (rcls2_p1910) return rcls2_m1910; else {rcls2_p1910=T;return rcls2_m1910=normalize_rotation(rcls2_f1911());}}
static int rcls2_f1898(){if (rcls2_p1898) return rcls2_m1898; else {rcls2_p1898=T;return rcls2_m1898=((rcls2_v1910=rcls2_f1910()),((fabs((rcls2_v1910-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v1910-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v1910-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f1897(){if (rcls2_p1897) return rcls2_m1897; else {rcls2_p1897=T;return rcls2_m1897=((rcls2_v1898=rcls2_f1898()),(rcls2_v1898?rcls2_v1898:rcls2_f2539()));}}
static double rcls2_f1894(){if (rcls2_p1894) return rcls2_m1894; else {rcls2_p1894=T;return rcls2_m1894=(rcls2_f1897()?rcls2_f1911():rcls2_f2532());}}
static double rcls2_f1896(){if (rcls2_p1896) return rcls2_m1896; else {rcls2_p1896=T;return rcls2_m1896=(rcls2_f1897()?rcls2_f1911():rcls2_f2536());}}
static int rcls2_f1895(){if (rcls2_p1895) return rcls2_m1895; else {rcls2_p1895=T;return rcls2_m1895=(rcls2_f1896()>(0.0));}}
static int rcls2_f1889(){if (rcls2_p1889) return rcls2_m1889; else {rcls2_p1889=T;return rcls2_m1889=(rcls2_f1897()?((rcls2_v1895=rcls2_f1895()),(rcls2_v1895?rcls2_v1895:(fabs((rcls2_f1894()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f82(){if (rcls2_p82) return rcls2_m82; else {rcls2_p82=T;return rcls2_m82=(rcls2_f1889()?(rcls2_f1897()?(rcls2_f782()?(rcls2_f420()?((rcls2_v1911=rcls2_f1911()),(rcls2_v396=rcls2_f396()),((rcls2_v1911<rcls2_v396)?rcls2_v1911:rcls2_v396)):(rcls2_f836()?((rcls2_v1911=rcls2_f1911()),(rcls2_v809=rcls2_f809()),((rcls2_v1911<rcls2_v809)?rcls2_v1911:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f93()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v1911=rcls2_f1911()),(rcls2_v454=rcls2_f454()),((rcls2_v1911<rcls2_v454)?rcls2_v1911:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f93())):rcls2_f2304())):rcls2_f2304()):rcls2_f2304());}}
static double_or_symbol rcls2_f20(){if (rcls2_p20) return rcls2_m20; else {rcls2_p20=T;return rcls2_m20=(rcls2_f1889()?(rcls2_f1897()?coerce_double_to_double_or_symbol(rcls2_f1911()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1480(){if (rcls2_p1480) return rcls2_m1480; else {rcls2_p1480=T;return rcls2_m1480=(rcls2_f1889()?(rcls2_f1897()?(rcls2_f1761()?rcls2_f2303():rcls2_f1911()):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f1438(){if (rcls2_p1438) return rcls2_m1438; else {rcls2_p1438=T;return rcls2_m1438=(rcls2_f1889()?(rcls2_f1897()?((rcls2_v2781=rcls2_f2781()),(rcls2_v1911=rcls2_f1911()),((rcls2_v2781<rcls2_v1911)?rcls2_v2781:rcls2_v1911)):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1758(){if (rcls2_p1758) return rcls2_m1758; else {rcls2_p1758=T;return rcls2_m1758=(rcls2_f1889()?(rcls2_f1897()?(rcls2_f1761()?rcls2_f2538():T):NIL):NIL);}}
static double rcls2_f1885(){if (rcls2_p1885) return rcls2_m1885; else {rcls2_p1885=T;return rcls2_m1885=(rcls2_f1889()?rcls2_f1894():rcls2_f2532());}}
static double rcls2_f1887(){if (rcls2_p1887) return rcls2_m1887; else {rcls2_p1887=T;return rcls2_m1887=(rcls2_f1889()?rcls2_f1896():rcls2_f2536());}}
static int rcls2_f1886(){if (rcls2_p1886) return rcls2_m1886; else {rcls2_p1886=T;return rcls2_m1886=(rcls2_f1887()>(0.0));}}
static int rcls2_f1888(){if (rcls2_p1888) return rcls2_m1888; else {rcls2_p1888=T;return rcls2_m1888=(rcls2_f1889()?rcls2_f1897():NIL);}}
static int rcls2_f1874(){if (rcls2_p1874) return rcls2_m1874; else {rcls2_p1874=T;return rcls2_m1874=(rcls2_f1943()?rcls2_f1888():NIL);}}
static int rcls2_f1880(){if (rcls2_p1880) return rcls2_m1880; else {rcls2_p1880=T;return rcls2_m1880=(rcls2_f1888()?((rcls2_v1886=rcls2_f1886()),(rcls2_v1886?rcls2_v1886:(fabs((rcls2_f1885()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f1969(){if (rcls2_p1969) return rcls2_m1969; else {rcls2_p1969=T;return rcls2_m1969=((rcls2_f1973()+rcls2_f1971())+rcls2_v6512);}}
static double rcls2_f1968(){if (rcls2_p1968) return rcls2_m1968; else {rcls2_p1968=T;return rcls2_m1968=(rcls2_f2222()*rcls2_f1969());}}
static double rcls2_f1966(){if (rcls2_p1966) return rcls2_m1966; else {rcls2_p1966=T;return rcls2_m1966=((rcls2_f2212()-rcls2_f1968())/rcls2_f2227());}}
static int rcls2_f1957(){if (rcls2_p1957) return rcls2_m1957; else {rcls2_p1957=T;return rcls2_m1957=((rcls2_v1966=rcls2_f1966()),((fabs((((rcls2_f2227()*rcls2_v1966)+rcls2_f1968())-rcls2_f2212()))<rcls2_v6508)?(((rcls2_f2125()<=rcls2_v1966)&&(rcls2_v1966<=rcls2_f2122()))?((rcls2_f2118()<=rcls2_f1969())&&(rcls2_f1969()<=rcls2_f2115())):NIL):NIL));}}
static double rcls2_f1938(){if (rcls2_p1938) return rcls2_m1938; else {rcls2_p1938=T;return rcls2_m1938=normalize_rotation((atan2((rcls2_f1969()-rcls2_v6512),(rcls2_f1966()-rcls2_v6514))-rcls2_f5872()));}}
static double rcls2_f110(){if (rcls2_p110) return rcls2_m110; else {rcls2_p110=T;return rcls2_m110=((rcls2_v1938=rcls2_f1938()),(rcls2_v792=rcls2_f792()),((rcls2_v1938<rcls2_v792)?rcls2_v1938:rcls2_v792));}}
static int rcls2_f1765(){if (rcls2_p1765) return rcls2_m1765; else {rcls2_p1765=T;return rcls2_m1765=(rcls2_f2303()<rcls2_f1938());}}
static double rcls2_f1937(){if (rcls2_p1937) return rcls2_m1937; else {rcls2_p1937=T;return rcls2_m1937=normalize_rotation(rcls2_f1938());}}
static int rcls2_f1925(){if (rcls2_p1925) return rcls2_m1925; else {rcls2_p1925=T;return rcls2_m1925=((rcls2_v1937=rcls2_f1937()),((fabs((rcls2_v1937-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v1937-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v1937-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f1924(){if (rcls2_p1924) return rcls2_m1924; else {rcls2_p1924=T;return rcls2_m1924=((rcls2_v1925=rcls2_f1925()),(rcls2_v1925?rcls2_v1925:rcls2_f2539()));}}
static double rcls2_f100(){if (rcls2_p100) return rcls2_m100; else {rcls2_p100=T;return rcls2_m100=(rcls2_f1924()?(rcls2_f782()?(rcls2_f420()?((rcls2_v1938=rcls2_f1938()),(rcls2_v396=rcls2_f396()),((rcls2_v1938<rcls2_v396)?rcls2_v1938:rcls2_v396)):(rcls2_f836()?((rcls2_v1938=rcls2_f1938()),(rcls2_v809=rcls2_f809()),((rcls2_v1938<rcls2_v809)?rcls2_v1938:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f110()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v1938=rcls2_f1938()),(rcls2_v454=rcls2_f454()),((rcls2_v1938<rcls2_v454)?rcls2_v1938:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f110())):rcls2_f2304())):rcls2_f2304());}}
static double_or_symbol rcls2_f23(){if (rcls2_p23) return rcls2_m23; else {rcls2_p23=T;return rcls2_m23=(rcls2_f1924()?coerce_double_to_double_or_symbol(rcls2_f1938()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1484(){if (rcls2_p1484) return rcls2_m1484; else {rcls2_p1484=T;return rcls2_m1484=(rcls2_f1924()?(rcls2_f1765()?rcls2_f2303():rcls2_f1938()):rcls2_f2304());}}
static double rcls2_f1443(){if (rcls2_p1443) return rcls2_m1443; else {rcls2_p1443=T;return rcls2_m1443=(rcls2_f1924()?((rcls2_v2781=rcls2_f2781()),(rcls2_v1938=rcls2_f1938()),((rcls2_v2781<rcls2_v1938)?rcls2_v2781:rcls2_v1938)):rcls2_f2304());}}
static int rcls2_f1763(){if (rcls2_p1763) return rcls2_m1763; else {rcls2_p1763=T;return rcls2_m1763=(rcls2_f1924()?(rcls2_f1765()?rcls2_f2538():T):NIL);}}
static double rcls2_f1839(){if (rcls2_p1839) return rcls2_m1839; else {rcls2_p1839=T;return rcls2_m1839=(rcls2_f1924()?(rcls2_f1889()?(rcls2_f1897()?((rcls2_v1938=rcls2_f1938()),(rcls2_v1911=rcls2_f1911()),((rcls2_v1938<rcls2_v1911)?rcls2_v1938:rcls2_v1911)):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f125(){if (rcls2_p125) return rcls2_m125; else {rcls2_p125=T;return rcls2_m125=((rcls2_v1839=rcls2_f1839()),(rcls2_v792=rcls2_f792()),((rcls2_v1839<rcls2_v792)?rcls2_v1839:rcls2_v792));}}
static int rcls2_f1767(){if (rcls2_p1767) return rcls2_m1767; else {rcls2_p1767=T;return rcls2_m1767=(rcls2_f2303()<rcls2_f1839());}}
static int rcls2_f1734(){if (rcls2_p1734) return rcls2_m1734; else {rcls2_p1734=T;return rcls2_m1734=(rcls2_f2781()<rcls2_f1839());}}
static int rcls2_f1879(){if (rcls2_p1879) return rcls2_m1879; else {rcls2_p1879=T;return rcls2_m1879=(rcls2_f1924()?rcls2_f1888():NIL);}}
static double rcls2_f1921(){if (rcls2_p1921) return rcls2_m1921; else {rcls2_p1921=T;return rcls2_m1921=(rcls2_f1924()?rcls2_f1938():rcls2_f2532());}}
static double rcls2_f1923(){if (rcls2_p1923) return rcls2_m1923; else {rcls2_p1923=T;return rcls2_m1923=(rcls2_f1924()?rcls2_f1938():rcls2_f2536());}}
static int rcls2_f1922(){if (rcls2_p1922) return rcls2_m1922; else {rcls2_p1922=T;return rcls2_m1922=(rcls2_f1923()>(0.0));}}
static int rcls2_f1916(){if (rcls2_p1916) return rcls2_m1916; else {rcls2_p1916=T;return rcls2_m1916=(rcls2_f1924()?((rcls2_v1922=rcls2_f1922()),(rcls2_v1922?rcls2_v1922:(fabs((rcls2_f1921()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f1876(){if (rcls2_p1876) return rcls2_m1876; else {rcls2_p1876=T;return rcls2_m1876=(rcls2_f1916()?rcls2_f1924():NIL);}}
static double rcls2_f2163(){if (rcls2_p2163) return rcls2_m2163; else {rcls2_p2163=T;return rcls2_m2163=(rcls2_f6089()-(rcls2_f2166()/rcls2_f2165()));}}
static int rcls2_f2162(){if (rcls2_p2162) return rcls2_m2162; else {rcls2_p2162=T;return rcls2_m2162=(rcls2_f2163()<0.0);}}
static double rcls2_f2076(){if (rcls2_p2076) return rcls2_m2076; else {rcls2_p2076=T;return rcls2_m2076=sqrt(rcls2_f2163());}}
static double rcls2_f2062(){if (rcls2_p2062) return rcls2_m2062; else {rcls2_p2062=T;return rcls2_m2062=((-rcls2_f2076())+rcls2_v6514);}}
static int rcls2_f2054(){if (rcls2_p2054) return rcls2_m2054; else {rcls2_p2054=T;return rcls2_m2054=((rcls2_v2062=rcls2_f2062()),((fabs((((rcls2_f2227()*rcls2_v2062)+rcls2_f2072())-rcls2_f2212()))<rcls2_v6508)?(((rcls2_f2125()<=rcls2_v2062)&&(rcls2_v2062<=rcls2_f2122()))?rcls2_f2066():NIL):NIL));}}
static double rcls2_f2023(){if (rcls2_p2023) return rcls2_m2023; else {rcls2_p2023=T;return rcls2_m2023=normalize_rotation((atan2(rcls2_f2053(),(rcls2_f2062()-rcls2_v6514))-rcls2_f5872()));}}
static double rcls2_f148(){if (rcls2_p148) return rcls2_m148; else {rcls2_p148=T;return rcls2_m148=((rcls2_v2023=rcls2_f2023()),(rcls2_v792=rcls2_f792()),((rcls2_v2023<rcls2_v792)?rcls2_v2023:rcls2_v792));}}
static int rcls2_f1777(){if (rcls2_p1777) return rcls2_m1777; else {rcls2_p1777=T;return rcls2_m1777=(rcls2_f2303()<rcls2_f2023());}}
static double rcls2_f2022(){if (rcls2_p2022) return rcls2_m2022; else {rcls2_p2022=T;return rcls2_m2022=normalize_rotation(rcls2_f2023());}}
static int rcls2_f2010(){if (rcls2_p2010) return rcls2_m2010; else {rcls2_p2010=T;return rcls2_m2010=((rcls2_v2022=rcls2_f2022()),((fabs((rcls2_v2022-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v2022-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v2022-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f2009(){if (rcls2_p2009) return rcls2_m2009; else {rcls2_p2009=T;return rcls2_m2009=((rcls2_v2010=rcls2_f2010()),(rcls2_v2010?rcls2_v2010:rcls2_f2539()));}}
static double rcls2_f2006(){if (rcls2_p2006) return rcls2_m2006; else {rcls2_p2006=T;return rcls2_m2006=(rcls2_f2009()?rcls2_f2023():rcls2_f2532());}}
static double rcls2_f2008(){if (rcls2_p2008) return rcls2_m2008; else {rcls2_p2008=T;return rcls2_m2008=(rcls2_f2009()?rcls2_f2023():rcls2_f2536());}}
static int rcls2_f2007(){if (rcls2_p2007) return rcls2_m2007; else {rcls2_p2007=T;return rcls2_m2007=(rcls2_f2008()>(0.0));}}
static int rcls2_f2001(){if (rcls2_p2001) return rcls2_m2001; else {rcls2_p2001=T;return rcls2_m2001=(rcls2_f2009()?((rcls2_v2007=rcls2_f2007()),(rcls2_v2007?rcls2_v2007:(fabs((rcls2_f2006()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f137(){if (rcls2_p137) return rcls2_m137; else {rcls2_p137=T;return rcls2_m137=(rcls2_f2001()?(rcls2_f2009()?(rcls2_f782()?(rcls2_f420()?((rcls2_v2023=rcls2_f2023()),(rcls2_v396=rcls2_f396()),((rcls2_v2023<rcls2_v396)?rcls2_v2023:rcls2_v396)):(rcls2_f836()?((rcls2_v2023=rcls2_f2023()),(rcls2_v809=rcls2_f809()),((rcls2_v2023<rcls2_v809)?rcls2_v2023:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f148()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2023=rcls2_f2023()),(rcls2_v454=rcls2_f454()),((rcls2_v2023<rcls2_v454)?rcls2_v2023:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f148())):rcls2_f2304())):rcls2_f2304()):rcls2_f2304());}}
static double_or_symbol rcls2_f30(){if (rcls2_p30) return rcls2_m30; else {rcls2_p30=T;return rcls2_m30=(rcls2_f2001()?(rcls2_f2009()?coerce_double_to_double_or_symbol(rcls2_f2023()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1493(){if (rcls2_p1493) return rcls2_m1493; else {rcls2_p1493=T;return rcls2_m1493=(rcls2_f2001()?(rcls2_f2009()?(rcls2_f1777()?rcls2_f2303():rcls2_f2023()):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f1453(){if (rcls2_p1453) return rcls2_m1453; else {rcls2_p1453=T;return rcls2_m1453=(rcls2_f2001()?(rcls2_f2009()?((rcls2_v2781=rcls2_f2781()),(rcls2_v2023=rcls2_f2023()),((rcls2_v2781<rcls2_v2023)?rcls2_v2781:rcls2_v2023)):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1774(){if (rcls2_p1774) return rcls2_m1774; else {rcls2_p1774=T;return rcls2_m1774=(rcls2_f2001()?(rcls2_f2009()?(rcls2_f1777()?rcls2_f2538():T):NIL):NIL);}}
static double rcls2_f1997(){if (rcls2_p1997) return rcls2_m1997; else {rcls2_p1997=T;return rcls2_m1997=(rcls2_f2001()?rcls2_f2006():rcls2_f2532());}}
static double rcls2_f1999(){if (rcls2_p1999) return rcls2_m1999; else {rcls2_p1999=T;return rcls2_m1999=(rcls2_f2001()?rcls2_f2008():rcls2_f2536());}}
static int rcls2_f1998(){if (rcls2_p1998) return rcls2_m1998; else {rcls2_p1998=T;return rcls2_m1998=(rcls2_f1999()>(0.0));}}
static int rcls2_f2000(){if (rcls2_p2000) return rcls2_m2000; else {rcls2_p2000=T;return rcls2_m2000=(rcls2_f2001()?rcls2_f2009():NIL);}}
static int rcls2_f1986(){if (rcls2_p1986) return rcls2_m1986; else {rcls2_p1986=T;return rcls2_m1986=(rcls2_f2054()?rcls2_f2000():NIL);}}
static int rcls2_f1992(){if (rcls2_p1992) return rcls2_m1992; else {rcls2_p1992=T;return rcls2_m1992=(rcls2_f2000()?((rcls2_v1998=rcls2_f1998()),(rcls2_v1998?rcls2_v1998:(fabs((rcls2_f1997()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f2075(){if (rcls2_p2075) return rcls2_m2075; else {rcls2_p2075=T;return rcls2_m2075=(rcls2_f2076()+rcls2_v6514);}}
static int rcls2_f2064(){if (rcls2_p2064) return rcls2_m2064; else {rcls2_p2064=T;return rcls2_m2064=((rcls2_v2075=rcls2_f2075()),((fabs((((rcls2_f2227()*rcls2_v2075)+rcls2_f2072())-rcls2_f2212()))<rcls2_v6508)?(((rcls2_f2125()<=rcls2_v2075)&&(rcls2_v2075<=rcls2_f2122()))?rcls2_f2066():NIL):NIL));}}
static double rcls2_f2049(){if (rcls2_p2049) return rcls2_m2049; else {rcls2_p2049=T;return rcls2_m2049=normalize_rotation((atan2(rcls2_f2053(),(rcls2_f2075()-rcls2_v6514))-rcls2_f5872()));}}
static double rcls2_f165(){if (rcls2_p165) return rcls2_m165; else {rcls2_p165=T;return rcls2_m165=((rcls2_v2049=rcls2_f2049()),(rcls2_v792=rcls2_f792()),((rcls2_v2049<rcls2_v792)?rcls2_v2049:rcls2_v792));}}
static int rcls2_f1781(){if (rcls2_p1781) return rcls2_m1781; else {rcls2_p1781=T;return rcls2_m1781=(rcls2_f2303()<rcls2_f2049());}}
static double rcls2_f2048(){if (rcls2_p2048) return rcls2_m2048; else {rcls2_p2048=T;return rcls2_m2048=normalize_rotation(rcls2_f2049());}}
static int rcls2_f2036(){if (rcls2_p2036) return rcls2_m2036; else {rcls2_p2036=T;return rcls2_m2036=((rcls2_v2048=rcls2_f2048()),((fabs((rcls2_v2048-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v2048-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v2048-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f2035(){if (rcls2_p2035) return rcls2_m2035; else {rcls2_p2035=T;return rcls2_m2035=((rcls2_v2036=rcls2_f2036()),(rcls2_v2036?rcls2_v2036:rcls2_f2539()));}}
static double rcls2_f155(){if (rcls2_p155) return rcls2_m155; else {rcls2_p155=T;return rcls2_m155=(rcls2_f2035()?(rcls2_f782()?(rcls2_f420()?((rcls2_v2049=rcls2_f2049()),(rcls2_v396=rcls2_f396()),((rcls2_v2049<rcls2_v396)?rcls2_v2049:rcls2_v396)):(rcls2_f836()?((rcls2_v2049=rcls2_f2049()),(rcls2_v809=rcls2_f809()),((rcls2_v2049<rcls2_v809)?rcls2_v2049:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f165()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2049=rcls2_f2049()),(rcls2_v454=rcls2_f454()),((rcls2_v2049<rcls2_v454)?rcls2_v2049:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f165())):rcls2_f2304())):rcls2_f2304());}}
static double_or_symbol rcls2_f33(){if (rcls2_p33) return rcls2_m33; else {rcls2_p33=T;return rcls2_m33=(rcls2_f2035()?coerce_double_to_double_or_symbol(rcls2_f2049()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1497(){if (rcls2_p1497) return rcls2_m1497; else {rcls2_p1497=T;return rcls2_m1497=(rcls2_f2035()?(rcls2_f1781()?rcls2_f2303():rcls2_f2049()):rcls2_f2304());}}
static double rcls2_f1458(){if (rcls2_p1458) return rcls2_m1458; else {rcls2_p1458=T;return rcls2_m1458=(rcls2_f2035()?((rcls2_v2781=rcls2_f2781()),(rcls2_v2049=rcls2_f2049()),((rcls2_v2781<rcls2_v2049)?rcls2_v2781:rcls2_v2049)):rcls2_f2304());}}
static int rcls2_f1779(){if (rcls2_p1779) return rcls2_m1779; else {rcls2_p1779=T;return rcls2_m1779=(rcls2_f2035()?(rcls2_f1781()?rcls2_f2538():T):NIL);}}
static double rcls2_f1851(){if (rcls2_p1851) return rcls2_m1851; else {rcls2_p1851=T;return rcls2_m1851=(rcls2_f2035()?(rcls2_f2001()?(rcls2_f2009()?((rcls2_v2049=rcls2_f2049()),(rcls2_v2023=rcls2_f2023()),((rcls2_v2049<rcls2_v2023)?rcls2_v2049:rcls2_v2023)):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f180(){if (rcls2_p180) return rcls2_m180; else {rcls2_p180=T;return rcls2_m180=((rcls2_v1851=rcls2_f1851()),(rcls2_v792=rcls2_f792()),((rcls2_v1851<rcls2_v792)?rcls2_v1851:rcls2_v792));}}
static int rcls2_f1783(){if (rcls2_p1783) return rcls2_m1783; else {rcls2_p1783=T;return rcls2_m1783=(rcls2_f2303()<rcls2_f1851());}}
static int rcls2_f1741(){if (rcls2_p1741) return rcls2_m1741; else {rcls2_p1741=T;return rcls2_m1741=(rcls2_f2781()<rcls2_f1851());}}
static int rcls2_f1991(){if (rcls2_p1991) return rcls2_m1991; else {rcls2_p1991=T;return rcls2_m1991=(rcls2_f2035()?rcls2_f2000():NIL);}}
static double rcls2_f2032(){if (rcls2_p2032) return rcls2_m2032; else {rcls2_p2032=T;return rcls2_m2032=(rcls2_f2035()?rcls2_f2049():rcls2_f2532());}}
static double rcls2_f2034(){if (rcls2_p2034) return rcls2_m2034; else {rcls2_p2034=T;return rcls2_m2034=(rcls2_f2035()?rcls2_f2049():rcls2_f2536());}}
static int rcls2_f2033(){if (rcls2_p2033) return rcls2_m2033; else {rcls2_p2033=T;return rcls2_m2033=(rcls2_f2034()>(0.0));}}
static int rcls2_f2027(){if (rcls2_p2027) return rcls2_m2027; else {rcls2_p2027=T;return rcls2_m2027=(rcls2_f2035()?((rcls2_v2033=rcls2_f2033()),(rcls2_v2033?rcls2_v2033:(fabs((rcls2_f2032()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f1808(){if (rcls2_p1808) return rcls2_m1808; else {rcls2_p1808=T;return rcls2_m1808=(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1824():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?rcls2_f1851():rcls2_f2032()):rcls2_f1997()):(rcls2_f2027()?rcls2_f2032():rcls2_f2532())):(rcls2_f2054()?rcls2_f1997():rcls2_f2532()))):(rcls2_f1976()?rcls2_f1824():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?rcls2_f1839():rcls2_f1921()):rcls2_f1885()):(rcls2_f1916()?rcls2_f1921():rcls2_f2532())):(rcls2_f1943()?rcls2_f1885():rcls2_f2532())))):rcls2_f2532());}}
static double rcls2_f1830(){if (rcls2_p1830) return rcls2_m1830; else {rcls2_p1830=T;return rcls2_m1830=(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1856():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?rcls2_f1851():rcls2_f2034()):rcls2_f1999()):(rcls2_f2027()?rcls2_f2034():rcls2_f2536())):(rcls2_f2054()?rcls2_f1999():rcls2_f2536()))):(rcls2_f1976()?rcls2_f1856():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?rcls2_f1839():rcls2_f1923()):rcls2_f1887()):(rcls2_f1916()?rcls2_f1923():rcls2_f2536())):(rcls2_f1943()?rcls2_f1887():rcls2_f2536())))):rcls2_f2536());}}
static int rcls2_f1829(){if (rcls2_p1829) return rcls2_m1829; else {rcls2_p1829=T;return rcls2_m1829=(rcls2_f1830()>(0.0));}}
static int rcls2_f1988(){if (rcls2_p1988) return rcls2_m1988; else {rcls2_p1988=T;return rcls2_m1988=(rcls2_f2027()?rcls2_f2035():NIL);}}
static int rcls2_f1870(){if (rcls2_p1870) return rcls2_m1870; else {rcls2_p1870=T;return rcls2_m1870=(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f2077():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?rcls2_f1991():rcls2_f2035()):rcls2_f2000()):rcls2_f1988()):rcls2_f1986())):(rcls2_f1976()?rcls2_f2077():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?rcls2_f1879():rcls2_f1924()):rcls2_f1888()):rcls2_f1876()):rcls2_f1874()))):NIL);}}
static int rcls2_f1803(){if (rcls2_p1803) return rcls2_m1803; else {rcls2_p1803=T;return rcls2_m1803=(rcls2_f1870()?((rcls2_v1829=rcls2_f1829()),(rcls2_v1829?rcls2_v1829:(fabs((rcls2_f1808()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f1802(){if (rcls2_p1802) return rcls2_m1802; else {rcls2_p1802=T;return rcls2_m1802=(rcls2_f1803()?rcls2_f1870():NIL);}}
static double rcls2_f1799(){if (rcls2_p1799) return rcls2_m1799; else {rcls2_p1799=T;return rcls2_m1799=(rcls2_f1803()?rcls2_f1808():rcls2_f2532());}}
static double rcls2_f1801(){if (rcls2_p1801) return rcls2_m1801; else {rcls2_p1801=T;return rcls2_m1801=(rcls2_f1803()?rcls2_f1830():rcls2_f2536());}}
static int rcls2_f1800(){if (rcls2_p1800) return rcls2_m1800; else {rcls2_p1800=T;return rcls2_m1800=(rcls2_f1801()>(0.0));}}
static int rcls2_f1794(){if (rcls2_p1794) return rcls2_m1794; else {rcls2_p1794=T;return rcls2_m1794=(rcls2_f1802()?((rcls2_v1800=rcls2_f1800()),(rcls2_v1800?rcls2_v1800:(fabs((rcls2_f1799()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f2421(){if (rcls2_p2421) return rcls2_m2421; else {rcls2_p2421=T;return rcls2_m2421=((rcls2_v2427=rcls2_f2427()),((rcls2_v2427*rcls2_v2427)-((4.0)*rcls2_f2425()*(rcls2_f2847()-(rcls2_f2910()*rcls2_f6089())))));}}
static int rcls2_f2420(){if (rcls2_p2420) return rcls2_m2420; else {rcls2_p2420=T;return rcls2_m2420=(rcls2_f2421()<0.0);}}
static double rcls2_f2415(){if (rcls2_p2415) return rcls2_m2415; else {rcls2_p2415=T;return rcls2_m2415=(sqrt(rcls2_f2421())/rcls2_f2418());}}
static double rcls2_f2399(){if (rcls2_p2399) return rcls2_m2399; else {rcls2_p2399=T;return rcls2_m2399=((rcls2_f2417()-rcls2_f2415())+rcls2_v6512);}}
static double rcls2_f2398(){if (rcls2_p2398) return rcls2_m2398; else {rcls2_p2398=T;return rcls2_m2398=(rcls2_f2906()*rcls2_f2399());}}
static double rcls2_f2396(){if (rcls2_p2396) return rcls2_m2396; else {rcls2_p2396=T;return rcls2_m2396=((rcls2_f2894()-rcls2_f2398())/rcls2_f2911());}}
static int rcls2_f2387(){if (rcls2_p2387) return rcls2_m2387; else {rcls2_p2387=T;return rcls2_m2387=((rcls2_v2396=rcls2_f2396()),((fabs((((rcls2_f2911()*rcls2_v2396)+rcls2_f2398())-rcls2_f2894()))<rcls2_v6508)?(((rcls2_f2806()<=rcls2_v2396)&&(rcls2_v2396<=rcls2_f2803()))?((rcls2_f2799()<=rcls2_f2399())&&(rcls2_f2399()<=rcls2_f2796())):NIL):NIL));}}
static double rcls2_f2355(){if (rcls2_p2355) return rcls2_m2355; else {rcls2_p2355=T;return rcls2_m2355=normalize_rotation((atan2((rcls2_f2399()-rcls2_v6512),(rcls2_f2396()-rcls2_v6514))-rcls2_f5872()));}}
static double rcls2_f242(){if (rcls2_p242) return rcls2_m242; else {rcls2_p242=T;return rcls2_m242=((rcls2_v2355=rcls2_f2355()),(rcls2_v792=rcls2_f792()),((rcls2_v2355<rcls2_v792)?rcls2_v2355:rcls2_v792));}}
static double rcls2_f1183(){if (rcls2_p1183) return rcls2_m1183; else {rcls2_p1183=T;return rcls2_m1183=(rcls2_f1924()?((rcls2_v2355=rcls2_f2355()),(rcls2_v1938=rcls2_f1938()),((rcls2_v2355<rcls2_v1938)?rcls2_v2355:rcls2_v1938)):rcls2_f2304());}}
static double rcls2_f1178(){if (rcls2_p1178) return rcls2_m1178; else {rcls2_p1178=T;return rcls2_m1178=(rcls2_f1889()?(rcls2_f1897()?((rcls2_v2355=rcls2_f2355()),(rcls2_v1911=rcls2_f1911()),((rcls2_v2355<rcls2_v1911)?rcls2_v2355:rcls2_v1911)):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f1198(){if (rcls2_p1198) return rcls2_m1198; else {rcls2_p1198=T;return rcls2_m1198=(rcls2_f2035()?((rcls2_v2355=rcls2_f2355()),(rcls2_v2049=rcls2_f2049()),((rcls2_v2355<rcls2_v2049)?rcls2_v2355:rcls2_v2049)):rcls2_f2304());}}
static double rcls2_f1193(){if (rcls2_p1193) return rcls2_m1193; else {rcls2_p1193=T;return rcls2_m1193=(rcls2_f2001()?(rcls2_f2009()?((rcls2_v2355=rcls2_f2355()),(rcls2_v2023=rcls2_f2023()),((rcls2_v2355<rcls2_v2023)?rcls2_v2355:rcls2_v2023)):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1530(){if (rcls2_p1530) return rcls2_m1530; else {rcls2_p1530=T;return rcls2_m1530=(rcls2_f2355()<rcls2_f1839());}}
static int rcls2_f1544(){if (rcls2_p1544) return rcls2_m1544; else {rcls2_p1544=T;return rcls2_m1544=(rcls2_f2355()<rcls2_f1861());}}
static double rcls2_f1202(){if (rcls2_p1202) return rcls2_m1202; else {rcls2_p1202=T;return rcls2_m1202=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1544()?rcls2_f2355():rcls2_f1861()):(rcls2_f2090()?((rcls2_v2355=rcls2_f2355()),(rcls2_v2104=rcls2_f2104()),((rcls2_v2355<rcls2_v2104)?rcls2_v2355:rcls2_v2104)):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1538(){if (rcls2_p1538) return rcls2_m1538; else {rcls2_p1538=T;return rcls2_m1538=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1544()?T:rcls2_f2090()):rcls2_f2090()):NIL):NIL):NIL):NIL);}}
static int rcls2_f1537(){if (rcls2_p1537) return rcls2_m1537; else {rcls2_p1537=T;return rcls2_m1537=(rcls2_f2355()<rcls2_f1851());}}
static double rcls2_f2354(){if (rcls2_p2354) return rcls2_m2354; else {rcls2_p2354=T;return rcls2_m2354=normalize_rotation(rcls2_f2355());}}
static int rcls2_f2342(){if (rcls2_p2342) return rcls2_m2342; else {rcls2_p2342=T;return rcls2_m2342=((rcls2_v2354=rcls2_f2354()),((fabs((rcls2_v2354-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v2354-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v2354-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f2341(){if (rcls2_p2341) return rcls2_m2341; else {rcls2_p2341=T;return rcls2_m2341=((rcls2_v2342=rcls2_f2342()),(rcls2_v2342?rcls2_v2342:rcls2_f2539()));}}
static double rcls2_f2338(){if (rcls2_p2338) return rcls2_m2338; else {rcls2_p2338=T;return rcls2_m2338=(rcls2_f2341()?rcls2_f2355():rcls2_f2532());}}
static double rcls2_f2340(){if (rcls2_p2340) return rcls2_m2340; else {rcls2_p2340=T;return rcls2_m2340=(rcls2_f2341()?rcls2_f2355():rcls2_f2536());}}
static int rcls2_f2339(){if (rcls2_p2339) return rcls2_m2339; else {rcls2_p2339=T;return rcls2_m2339=(rcls2_f2340()>(0.0));}}
static int rcls2_f2333(){if (rcls2_p2333) return rcls2_m2333; else {rcls2_p2333=T;return rcls2_m2333=(rcls2_f2341()?((rcls2_v2339=rcls2_f2339()),(rcls2_v2339?rcls2_v2339:(fabs((rcls2_f2338()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f231(){if (rcls2_p231) return rcls2_m231; else {rcls2_p231=T;return rcls2_m231=(rcls2_f2333()?(rcls2_f2341()?(rcls2_f782()?(rcls2_f420()?((rcls2_v2355=rcls2_f2355()),(rcls2_v396=rcls2_f396()),((rcls2_v2355<rcls2_v396)?rcls2_v2355:rcls2_v396)):(rcls2_f836()?((rcls2_v2355=rcls2_f2355()),(rcls2_v809=rcls2_f809()),((rcls2_v2355<rcls2_v809)?rcls2_v2355:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f242()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2355=rcls2_f2355()),(rcls2_v454=rcls2_f454()),((rcls2_v2355<rcls2_v454)?rcls2_v2355:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f242())):rcls2_f2304())):rcls2_f2304()):rcls2_f2304());}}
static double_or_symbol rcls2_f50(){if (rcls2_p50) return rcls2_m50; else {rcls2_p50=T;return rcls2_m50=(rcls2_f2333()?(rcls2_f2341()?coerce_double_to_double_or_symbol(rcls2_f2355()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1167(){if (rcls2_p1167) return rcls2_m1167; else {rcls2_p1167=T;return rcls2_m1167=(rcls2_f2333()?(rcls2_f2341()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1202():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1537()?rcls2_f2355():rcls2_f1851()):rcls2_f1198()):rcls2_f1193()):(rcls2_f2027()?rcls2_f1198():rcls2_f2304())):(rcls2_f2054()?rcls2_f1193():rcls2_f2304()))):(rcls2_f1976()?rcls2_f1202():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1530()?rcls2_f2355():rcls2_f1839()):rcls2_f1183()):rcls2_f1178()):(rcls2_f1916()?rcls2_f1183():rcls2_f2304())):(rcls2_f1943()?rcls2_f1178():rcls2_f2304())))):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1519(){if (rcls2_p1519) return rcls2_m1519; else {rcls2_p1519=T;return rcls2_m1519=(rcls2_f2333()?(rcls2_f2341()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1538():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1537()?T:rcls2_f1991()):rcls2_f2035()):rcls2_f2000()):rcls2_f1988()):rcls2_f1986())):(rcls2_f1976()?rcls2_f1538():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1530()?T:rcls2_f1879()):rcls2_f1924()):rcls2_f1888()):rcls2_f1876()):rcls2_f1874()))):NIL):NIL):NIL):NIL);}}
static double rcls2_f2329(){if (rcls2_p2329) return rcls2_m2329; else {rcls2_p2329=T;return rcls2_m2329=(rcls2_f2333()?rcls2_f2338():rcls2_f2532());}}
static double rcls2_f2331(){if (rcls2_p2331) return rcls2_m2331; else {rcls2_p2331=T;return rcls2_m2331=(rcls2_f2333()?rcls2_f2340():rcls2_f2536());}}
static int rcls2_f2330(){if (rcls2_p2330) return rcls2_m2330; else {rcls2_p2330=T;return rcls2_m2330=(rcls2_f2331()>(0.0));}}
static int rcls2_f2332(){if (rcls2_p2332) return rcls2_m2332; else {rcls2_p2332=T;return rcls2_m2332=(rcls2_f2333()?rcls2_f2341():NIL);}}
static int rcls2_f2324(){if (rcls2_p2324) return rcls2_m2324; else {rcls2_p2324=T;return rcls2_m2324=(rcls2_f2332()?((rcls2_v2330=rcls2_f2330()),(rcls2_v2330?rcls2_v2330:(fabs((rcls2_f2329()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f2413(){if (rcls2_p2413) return rcls2_m2413; else {rcls2_p2413=T;return rcls2_m2413=((rcls2_f2417()+rcls2_f2415())+rcls2_v6512);}}
static double rcls2_f2412(){if (rcls2_p2412) return rcls2_m2412; else {rcls2_p2412=T;return rcls2_m2412=(rcls2_f2906()*rcls2_f2413());}}
static double rcls2_f2410(){if (rcls2_p2410) return rcls2_m2410; else {rcls2_p2410=T;return rcls2_m2410=((rcls2_f2894()-rcls2_f2412())/rcls2_f2911());}}
static int rcls2_f2401(){if (rcls2_p2401) return rcls2_m2401; else {rcls2_p2401=T;return rcls2_m2401=((rcls2_v2410=rcls2_f2410()),((fabs((((rcls2_f2911()*rcls2_v2410)+rcls2_f2412())-rcls2_f2894()))<rcls2_v6508)?(((rcls2_f2806()<=rcls2_v2410)&&(rcls2_v2410<=rcls2_f2803()))?((rcls2_f2799()<=rcls2_f2413())&&(rcls2_f2413()<=rcls2_f2796())):NIL):NIL));}}
static double rcls2_f2382(){if (rcls2_p2382) return rcls2_m2382; else {rcls2_p2382=T;return rcls2_m2382=normalize_rotation((atan2((rcls2_f2413()-rcls2_v6512),(rcls2_f2410()-rcls2_v6514))-rcls2_f5872()));}}
static double rcls2_f259(){if (rcls2_p259) return rcls2_m259; else {rcls2_p259=T;return rcls2_m259=((rcls2_v2382=rcls2_f2382()),(rcls2_v792=rcls2_f792()),((rcls2_v2382<rcls2_v792)?rcls2_v2382:rcls2_v792));}}
static double rcls2_f1227(){if (rcls2_p1227) return rcls2_m1227; else {rcls2_p1227=T;return rcls2_m1227=(rcls2_f1924()?((rcls2_v2382=rcls2_f2382()),(rcls2_v1938=rcls2_f1938()),((rcls2_v2382<rcls2_v1938)?rcls2_v2382:rcls2_v1938)):rcls2_f2304());}}
static double rcls2_f1222(){if (rcls2_p1222) return rcls2_m1222; else {rcls2_p1222=T;return rcls2_m1222=(rcls2_f1889()?(rcls2_f1897()?((rcls2_v2382=rcls2_f2382()),(rcls2_v1911=rcls2_f1911()),((rcls2_v2382<rcls2_v1911)?rcls2_v2382:rcls2_v1911)):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f1242(){if (rcls2_p1242) return rcls2_m1242; else {rcls2_p1242=T;return rcls2_m1242=(rcls2_f2035()?((rcls2_v2382=rcls2_f2382()),(rcls2_v2049=rcls2_f2049()),((rcls2_v2382<rcls2_v2049)?rcls2_v2382:rcls2_v2049)):rcls2_f2304());}}
static double rcls2_f1237(){if (rcls2_p1237) return rcls2_m1237; else {rcls2_p1237=T;return rcls2_m1237=(rcls2_f2001()?(rcls2_f2009()?((rcls2_v2382=rcls2_f2382()),(rcls2_v2023=rcls2_f2023()),((rcls2_v2382<rcls2_v2023)?rcls2_v2382:rcls2_v2023)):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1556(){if (rcls2_p1556) return rcls2_m1556; else {rcls2_p1556=T;return rcls2_m1556=(rcls2_f2382()<rcls2_f1839());}}
static int rcls2_f1570(){if (rcls2_p1570) return rcls2_m1570; else {rcls2_p1570=T;return rcls2_m1570=(rcls2_f2382()<rcls2_f1861());}}
static double rcls2_f1246(){if (rcls2_p1246) return rcls2_m1246; else {rcls2_p1246=T;return rcls2_m1246=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1570()?rcls2_f2382():rcls2_f1861()):(rcls2_f2090()?((rcls2_v2382=rcls2_f2382()),(rcls2_v2104=rcls2_f2104()),((rcls2_v2382<rcls2_v2104)?rcls2_v2382:rcls2_v2104)):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1564(){if (rcls2_p1564) return rcls2_m1564; else {rcls2_p1564=T;return rcls2_m1564=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1570()?T:rcls2_f2090()):rcls2_f2090()):NIL):NIL):NIL):NIL);}}
static int rcls2_f1563(){if (rcls2_p1563) return rcls2_m1563; else {rcls2_p1563=T;return rcls2_m1563=(rcls2_f2382()<rcls2_f1851());}}
static double rcls2_f2381(){if (rcls2_p2381) return rcls2_m2381; else {rcls2_p2381=T;return rcls2_m2381=normalize_rotation(rcls2_f2382());}}
static int rcls2_f2369(){if (rcls2_p2369) return rcls2_m2369; else {rcls2_p2369=T;return rcls2_m2369=((rcls2_v2381=rcls2_f2381()),((fabs((rcls2_v2381-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v2381-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v2381-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f2368(){if (rcls2_p2368) return rcls2_m2368; else {rcls2_p2368=T;return rcls2_m2368=((rcls2_v2369=rcls2_f2369()),(rcls2_v2369?rcls2_v2369:rcls2_f2539()));}}
static double rcls2_f249(){if (rcls2_p249) return rcls2_m249; else {rcls2_p249=T;return rcls2_m249=(rcls2_f2368()?(rcls2_f782()?(rcls2_f420()?((rcls2_v2382=rcls2_f2382()),(rcls2_v396=rcls2_f396()),((rcls2_v2382<rcls2_v396)?rcls2_v2382:rcls2_v396)):(rcls2_f836()?((rcls2_v2382=rcls2_f2382()),(rcls2_v809=rcls2_f809()),((rcls2_v2382<rcls2_v809)?rcls2_v2382:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f259()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2382=rcls2_f2382()),(rcls2_v454=rcls2_f454()),((rcls2_v2382<rcls2_v454)?rcls2_v2382:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f259())):rcls2_f2304())):rcls2_f2304());}}
static double_or_symbol rcls2_f53(){if (rcls2_p53) return rcls2_m53; else {rcls2_p53=T;return rcls2_m53=(rcls2_f2368()?coerce_double_to_double_or_symbol(rcls2_f2382()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1212(){if (rcls2_p1212) return rcls2_m1212; else {rcls2_p1212=T;return rcls2_m1212=(rcls2_f2368()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1246():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1563()?rcls2_f2382():rcls2_f1851()):rcls2_f1242()):rcls2_f1237()):(rcls2_f2027()?rcls2_f1242():rcls2_f2304())):(rcls2_f2054()?rcls2_f1237():rcls2_f2304()))):(rcls2_f1976()?rcls2_f1246():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1556()?rcls2_f2382():rcls2_f1839()):rcls2_f1227()):rcls2_f1222()):(rcls2_f1916()?rcls2_f1227():rcls2_f2304())):(rcls2_f1943()?rcls2_f1222():rcls2_f2304())))):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1546(){if (rcls2_p1546) return rcls2_m1546; else {rcls2_p1546=T;return rcls2_m1546=(rcls2_f2368()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1564():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1563()?T:rcls2_f1991()):rcls2_f2035()):rcls2_f2000()):rcls2_f1988()):rcls2_f1986())):(rcls2_f1976()?rcls2_f1564():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1556()?T:rcls2_f1879()):rcls2_f1924()):rcls2_f1888()):rcls2_f1876()):rcls2_f1874()))):NIL):NIL):NIL);}}
static double rcls2_f2281(){if (rcls2_p2281) return rcls2_m2281; else {rcls2_p2281=T;return rcls2_m2281=(rcls2_f2368()?(rcls2_f2333()?(rcls2_f2341()?((rcls2_v2382=rcls2_f2382()),(rcls2_v2355=rcls2_f2355()),((rcls2_v2382<rcls2_v2355)?rcls2_v2382:rcls2_v2355)):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f274(){if (rcls2_p274) return rcls2_m274; else {rcls2_p274=T;return rcls2_m274=((rcls2_v2281=rcls2_f2281()),(rcls2_v792=rcls2_f792()),((rcls2_v2281<rcls2_v792)?rcls2_v2281:rcls2_v792));}}
static int rcls2_f1589(){if (rcls2_p1589) return rcls2_m1589; else {rcls2_p1589=T;return rcls2_m1589=(rcls2_f2281()<rcls2_f1839());}}
static int rcls2_f1587(){if (rcls2_p1587) return rcls2_m1587; else {rcls2_p1587=T;return rcls2_m1587=(rcls2_f2281()<rcls2_f1938());}}
static double rcls2_f1268(){if (rcls2_p1268) return rcls2_m1268; else {rcls2_p1268=T;return rcls2_m1268=(rcls2_f1924()?(rcls2_f1587()?rcls2_f2281():rcls2_f1938()):rcls2_f2304());}}
static int rcls2_f1583(){if (rcls2_p1583) return rcls2_m1583; else {rcls2_p1583=T;return rcls2_m1583=(rcls2_f2281()<rcls2_f1911());}}
static double rcls2_f1264(){if (rcls2_p1264) return rcls2_m1264; else {rcls2_p1264=T;return rcls2_m1264=(rcls2_f1889()?(rcls2_f1897()?(rcls2_f1583()?rcls2_f2281():rcls2_f1911()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1615(){if (rcls2_p1615) return rcls2_m1615; else {rcls2_p1615=T;return rcls2_m1615=(rcls2_f2281()<rcls2_f1861());}}
static int rcls2_f1613(){if (rcls2_p1613) return rcls2_m1613; else {rcls2_p1613=T;return rcls2_m1613=(rcls2_f2281()<rcls2_f2104());}}
static double rcls2_f1284(){if (rcls2_p1284) return rcls2_m1284; else {rcls2_p1284=T;return rcls2_m1284=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1615()?rcls2_f2281():rcls2_f1861()):(rcls2_f2090()?(rcls2_f1613()?rcls2_f2281():rcls2_f2104()):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1605(){if (rcls2_p1605) return rcls2_m1605; else {rcls2_p1605=T;return rcls2_m1605=(rcls2_f2281()<rcls2_f1851());}}
static int rcls2_f1603(){if (rcls2_p1603) return rcls2_m1603; else {rcls2_p1603=T;return rcls2_m1603=(rcls2_f2281()<rcls2_f2049());}}
static double rcls2_f1281(){if (rcls2_p1281) return rcls2_m1281; else {rcls2_p1281=T;return rcls2_m1281=(rcls2_f2035()?(rcls2_f1603()?rcls2_f2281():rcls2_f2049()):rcls2_f2304());}}
static int rcls2_f1599(){if (rcls2_p1599) return rcls2_m1599; else {rcls2_p1599=T;return rcls2_m1599=(rcls2_f2281()<rcls2_f2023());}}
static double rcls2_f1277(){if (rcls2_p1277) return rcls2_m1277; else {rcls2_p1277=T;return rcls2_m1277=(rcls2_f2001()?(rcls2_f2009()?(rcls2_f1599()?rcls2_f2281():rcls2_f2023()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f2323(){if (rcls2_p2323) return rcls2_m2323; else {rcls2_p2323=T;return rcls2_m2323=(rcls2_f2368()?rcls2_f2332():NIL);}}
static int rcls2_f1585(){if (rcls2_p1585) return rcls2_m1585; else {rcls2_p1585=T;return rcls2_m1585=(rcls2_f1924()?(rcls2_f1587()?rcls2_f2323():T):NIL);}}
static int rcls2_f1580(){if (rcls2_p1580) return rcls2_m1580; else {rcls2_p1580=T;return rcls2_m1580=(rcls2_f1889()?(rcls2_f1897()?(rcls2_f1583()?rcls2_f2323():T):NIL):NIL);}}
static int rcls2_f1606(){if (rcls2_p1606) return rcls2_m1606; else {rcls2_p1606=T;return rcls2_m1606=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1615()?rcls2_f2323():rcls2_f2090()):(rcls2_f2090()?(rcls2_f1613()?rcls2_f2323():T):NIL)):NIL):NIL):NIL):NIL);}}
static int rcls2_f1601(){if (rcls2_p1601) return rcls2_m1601; else {rcls2_p1601=T;return rcls2_m1601=(rcls2_f2035()?(rcls2_f1603()?rcls2_f2323():T):NIL);}}
static int rcls2_f1596(){if (rcls2_p1596) return rcls2_m1596; else {rcls2_p1596=T;return rcls2_m1596=(rcls2_f2001()?(rcls2_f2009()?(rcls2_f1599()?rcls2_f2323():T):NIL):NIL);}}
static double rcls2_f2365(){if (rcls2_p2365) return rcls2_m2365; else {rcls2_p2365=T;return rcls2_m2365=(rcls2_f2368()?rcls2_f2382():rcls2_f2532());}}
static double rcls2_f2367(){if (rcls2_p2367) return rcls2_m2367; else {rcls2_p2367=T;return rcls2_m2367=(rcls2_f2368()?rcls2_f2382():rcls2_f2536());}}
static int rcls2_f2366(){if (rcls2_p2366) return rcls2_m2366; else {rcls2_p2366=T;return rcls2_m2366=(rcls2_f2367()>(0.0));}}
static int rcls2_f2360(){if (rcls2_p2360) return rcls2_m2360; else {rcls2_p2360=T;return rcls2_m2360=(rcls2_f2368()?((rcls2_v2366=rcls2_f2366()),(rcls2_v2366?rcls2_v2366:(fabs((rcls2_f2365()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f2844(){if (rcls2_p2844) return rcls2_m2844; else {rcls2_p2844=T;return rcls2_m2844=(rcls2_f6089()-(rcls2_f2847()/rcls2_f2846()));}}
static int rcls2_f2843(){if (rcls2_p2843) return rcls2_m2843; else {rcls2_p2843=T;return rcls2_m2843=(rcls2_f2844()<0.0);}}
static double rcls2_f2520(){if (rcls2_p2520) return rcls2_m2520; else {rcls2_p2520=T;return rcls2_m2520=sqrt(rcls2_f2844());}}
static double rcls2_f2506(){if (rcls2_p2506) return rcls2_m2506; else {rcls2_p2506=T;return rcls2_m2506=((-rcls2_f2520())+rcls2_v6514);}}
static int rcls2_f2498(){if (rcls2_p2498) return rcls2_m2498; else {rcls2_p2498=T;return rcls2_m2498=((rcls2_v2506=rcls2_f2506()),((fabs((((rcls2_f2911()*rcls2_v2506)+rcls2_f2516())-rcls2_f2894()))<rcls2_v6508)?(((rcls2_f2806()<=rcls2_v2506)&&(rcls2_v2506<=rcls2_f2803()))?rcls2_f2510():NIL):NIL));}}
static double rcls2_f2467(){if (rcls2_p2467) return rcls2_m2467; else {rcls2_p2467=T;return rcls2_m2467=normalize_rotation((atan2(rcls2_f2497(),(rcls2_f2506()-rcls2_v6514))-rcls2_f5872()));}}
static double rcls2_f297(){if (rcls2_p297) return rcls2_m297; else {rcls2_p297=T;return rcls2_m297=((rcls2_v2467=rcls2_f2467()),(rcls2_v792=rcls2_f792()),((rcls2_v2467<rcls2_v792)?rcls2_v2467:rcls2_v792));}}
static double rcls2_f1314(){if (rcls2_p1314) return rcls2_m1314; else {rcls2_p1314=T;return rcls2_m1314=(rcls2_f1924()?((rcls2_v2467=rcls2_f2467()),(rcls2_v1938=rcls2_f1938()),((rcls2_v2467<rcls2_v1938)?rcls2_v2467:rcls2_v1938)):rcls2_f2304());}}
static double rcls2_f1309(){if (rcls2_p1309) return rcls2_m1309; else {rcls2_p1309=T;return rcls2_m1309=(rcls2_f1889()?(rcls2_f1897()?((rcls2_v2467=rcls2_f2467()),(rcls2_v1911=rcls2_f1911()),((rcls2_v2467<rcls2_v1911)?rcls2_v2467:rcls2_v1911)):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f1329(){if (rcls2_p1329) return rcls2_m1329; else {rcls2_p1329=T;return rcls2_m1329=(rcls2_f2035()?((rcls2_v2467=rcls2_f2467()),(rcls2_v2049=rcls2_f2049()),((rcls2_v2467<rcls2_v2049)?rcls2_v2467:rcls2_v2049)):rcls2_f2304());}}
static double rcls2_f1324(){if (rcls2_p1324) return rcls2_m1324; else {rcls2_p1324=T;return rcls2_m1324=(rcls2_f2001()?(rcls2_f2009()?((rcls2_v2467=rcls2_f2467()),(rcls2_v2023=rcls2_f2023()),((rcls2_v2467<rcls2_v2023)?rcls2_v2467:rcls2_v2023)):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1633(){if (rcls2_p1633) return rcls2_m1633; else {rcls2_p1633=T;return rcls2_m1633=(rcls2_f2467()<rcls2_f1839());}}
static int rcls2_f1647(){if (rcls2_p1647) return rcls2_m1647; else {rcls2_p1647=T;return rcls2_m1647=(rcls2_f2467()<rcls2_f1861());}}
static double rcls2_f1333(){if (rcls2_p1333) return rcls2_m1333; else {rcls2_p1333=T;return rcls2_m1333=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1647()?rcls2_f2467():rcls2_f1861()):(rcls2_f2090()?((rcls2_v2467=rcls2_f2467()),(rcls2_v2104=rcls2_f2104()),((rcls2_v2467<rcls2_v2104)?rcls2_v2467:rcls2_v2104)):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1641(){if (rcls2_p1641) return rcls2_m1641; else {rcls2_p1641=T;return rcls2_m1641=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1647()?T:rcls2_f2090()):rcls2_f2090()):NIL):NIL):NIL):NIL);}}
static int rcls2_f1640(){if (rcls2_p1640) return rcls2_m1640; else {rcls2_p1640=T;return rcls2_m1640=(rcls2_f2467()<rcls2_f1851());}}
static double rcls2_f2466(){if (rcls2_p2466) return rcls2_m2466; else {rcls2_p2466=T;return rcls2_m2466=normalize_rotation(rcls2_f2467());}}
static int rcls2_f2454(){if (rcls2_p2454) return rcls2_m2454; else {rcls2_p2454=T;return rcls2_m2454=((rcls2_v2466=rcls2_f2466()),((fabs((rcls2_v2466-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v2466-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v2466-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f2453(){if (rcls2_p2453) return rcls2_m2453; else {rcls2_p2453=T;return rcls2_m2453=((rcls2_v2454=rcls2_f2454()),(rcls2_v2454?rcls2_v2454:rcls2_f2539()));}}
static double rcls2_f2450(){if (rcls2_p2450) return rcls2_m2450; else {rcls2_p2450=T;return rcls2_m2450=(rcls2_f2453()?rcls2_f2467():rcls2_f2532());}}
static double rcls2_f2452(){if (rcls2_p2452) return rcls2_m2452; else {rcls2_p2452=T;return rcls2_m2452=(rcls2_f2453()?rcls2_f2467():rcls2_f2536());}}
static int rcls2_f2451(){if (rcls2_p2451) return rcls2_m2451; else {rcls2_p2451=T;return rcls2_m2451=(rcls2_f2452()>(0.0));}}
static int rcls2_f2445(){if (rcls2_p2445) return rcls2_m2445; else {rcls2_p2445=T;return rcls2_m2445=(rcls2_f2453()?((rcls2_v2451=rcls2_f2451()),(rcls2_v2451?rcls2_v2451:(fabs((rcls2_f2450()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f286(){if (rcls2_p286) return rcls2_m286; else {rcls2_p286=T;return rcls2_m286=(rcls2_f2445()?(rcls2_f2453()?(rcls2_f782()?(rcls2_f420()?((rcls2_v2467=rcls2_f2467()),(rcls2_v396=rcls2_f396()),((rcls2_v2467<rcls2_v396)?rcls2_v2467:rcls2_v396)):(rcls2_f836()?((rcls2_v2467=rcls2_f2467()),(rcls2_v809=rcls2_f809()),((rcls2_v2467<rcls2_v809)?rcls2_v2467:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f297()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2467=rcls2_f2467()),(rcls2_v454=rcls2_f454()),((rcls2_v2467<rcls2_v454)?rcls2_v2467:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f297())):rcls2_f2304())):rcls2_f2304()):rcls2_f2304());}}
static double_or_symbol rcls2_f60(){if (rcls2_p60) return rcls2_m60; else {rcls2_p60=T;return rcls2_m60=(rcls2_f2445()?(rcls2_f2453()?coerce_double_to_double_or_symbol(rcls2_f2467()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1298(){if (rcls2_p1298) return rcls2_m1298; else {rcls2_p1298=T;return rcls2_m1298=(rcls2_f2445()?(rcls2_f2453()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1333():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1640()?rcls2_f2467():rcls2_f1851()):rcls2_f1329()):rcls2_f1324()):(rcls2_f2027()?rcls2_f1329():rcls2_f2304())):(rcls2_f2054()?rcls2_f1324():rcls2_f2304()))):(rcls2_f1976()?rcls2_f1333():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1633()?rcls2_f2467():rcls2_f1839()):rcls2_f1314()):rcls2_f1309()):(rcls2_f1916()?rcls2_f1314():rcls2_f2304())):(rcls2_f1943()?rcls2_f1309():rcls2_f2304())))):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1622(){if (rcls2_p1622) return rcls2_m1622; else {rcls2_p1622=T;return rcls2_m1622=(rcls2_f2445()?(rcls2_f2453()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1641():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1640()?T:rcls2_f1991()):rcls2_f2035()):rcls2_f2000()):rcls2_f1988()):rcls2_f1986())):(rcls2_f1976()?rcls2_f1641():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1633()?T:rcls2_f1879()):rcls2_f1924()):rcls2_f1888()):rcls2_f1876()):rcls2_f1874()))):NIL):NIL):NIL):NIL);}}
static double rcls2_f2441(){if (rcls2_p2441) return rcls2_m2441; else {rcls2_p2441=T;return rcls2_m2441=(rcls2_f2445()?rcls2_f2450():rcls2_f2532());}}
static double rcls2_f2443(){if (rcls2_p2443) return rcls2_m2443; else {rcls2_p2443=T;return rcls2_m2443=(rcls2_f2445()?rcls2_f2452():rcls2_f2536());}}
static int rcls2_f2442(){if (rcls2_p2442) return rcls2_m2442; else {rcls2_p2442=T;return rcls2_m2442=(rcls2_f2443()>(0.0));}}
static int rcls2_f2444(){if (rcls2_p2444) return rcls2_m2444; else {rcls2_p2444=T;return rcls2_m2444=(rcls2_f2445()?rcls2_f2453():NIL);}}
static int rcls2_f2436(){if (rcls2_p2436) return rcls2_m2436; else {rcls2_p2436=T;return rcls2_m2436=(rcls2_f2444()?((rcls2_v2442=rcls2_f2442()),(rcls2_v2442?rcls2_v2442:(fabs((rcls2_f2441()-(0.0)))<rcls2_v6508))):NIL);}}
static double rcls2_f2519(){if (rcls2_p2519) return rcls2_m2519; else {rcls2_p2519=T;return rcls2_m2519=(rcls2_f2520()+rcls2_v6514);}}
static int rcls2_f2508(){if (rcls2_p2508) return rcls2_m2508; else {rcls2_p2508=T;return rcls2_m2508=((rcls2_v2519=rcls2_f2519()),((fabs((((rcls2_f2911()*rcls2_v2519)+rcls2_f2516())-rcls2_f2894()))<rcls2_v6508)?(((rcls2_f2806()<=rcls2_v2519)&&(rcls2_v2519<=rcls2_f2803()))?rcls2_f2510():NIL):NIL));}}
static double rcls2_f2493(){if (rcls2_p2493) return rcls2_m2493; else {rcls2_p2493=T;return rcls2_m2493=normalize_rotation((atan2(rcls2_f2497(),(rcls2_f2519()-rcls2_v6514))-rcls2_f5872()));}}
static double rcls2_f314(){if (rcls2_p314) return rcls2_m314; else {rcls2_p314=T;return rcls2_m314=((rcls2_v2493=rcls2_f2493()),(rcls2_v792=rcls2_f792()),((rcls2_v2493<rcls2_v792)?rcls2_v2493:rcls2_v792));}}
static double rcls2_f1358(){if (rcls2_p1358) return rcls2_m1358; else {rcls2_p1358=T;return rcls2_m1358=(rcls2_f1924()?((rcls2_v2493=rcls2_f2493()),(rcls2_v1938=rcls2_f1938()),((rcls2_v2493<rcls2_v1938)?rcls2_v2493:rcls2_v1938)):rcls2_f2304());}}
static double rcls2_f1353(){if (rcls2_p1353) return rcls2_m1353; else {rcls2_p1353=T;return rcls2_m1353=(rcls2_f1889()?(rcls2_f1897()?((rcls2_v2493=rcls2_f2493()),(rcls2_v1911=rcls2_f1911()),((rcls2_v2493<rcls2_v1911)?rcls2_v2493:rcls2_v1911)):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f1373(){if (rcls2_p1373) return rcls2_m1373; else {rcls2_p1373=T;return rcls2_m1373=(rcls2_f2035()?((rcls2_v2493=rcls2_f2493()),(rcls2_v2049=rcls2_f2049()),((rcls2_v2493<rcls2_v2049)?rcls2_v2493:rcls2_v2049)):rcls2_f2304());}}
static double rcls2_f1368(){if (rcls2_p1368) return rcls2_m1368; else {rcls2_p1368=T;return rcls2_m1368=(rcls2_f2001()?(rcls2_f2009()?((rcls2_v2493=rcls2_f2493()),(rcls2_v2023=rcls2_f2023()),((rcls2_v2493<rcls2_v2023)?rcls2_v2493:rcls2_v2023)):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1659(){if (rcls2_p1659) return rcls2_m1659; else {rcls2_p1659=T;return rcls2_m1659=(rcls2_f2493()<rcls2_f1839());}}
static int rcls2_f1673(){if (rcls2_p1673) return rcls2_m1673; else {rcls2_p1673=T;return rcls2_m1673=(rcls2_f2493()<rcls2_f1861());}}
static double rcls2_f1377(){if (rcls2_p1377) return rcls2_m1377; else {rcls2_p1377=T;return rcls2_m1377=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1673()?rcls2_f2493():rcls2_f1861()):(rcls2_f2090()?((rcls2_v2493=rcls2_f2493()),(rcls2_v2104=rcls2_f2104()),((rcls2_v2493<rcls2_v2104)?rcls2_v2493:rcls2_v2104)):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1667(){if (rcls2_p1667) return rcls2_m1667; else {rcls2_p1667=T;return rcls2_m1667=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1673()?T:rcls2_f2090()):rcls2_f2090()):NIL):NIL):NIL):NIL);}}
static int rcls2_f1666(){if (rcls2_p1666) return rcls2_m1666; else {rcls2_p1666=T;return rcls2_m1666=(rcls2_f2493()<rcls2_f1851());}}
static double rcls2_f2492(){if (rcls2_p2492) return rcls2_m2492; else {rcls2_p2492=T;return rcls2_m2492=normalize_rotation(rcls2_f2493());}}
static int rcls2_f2480(){if (rcls2_p2480) return rcls2_m2480; else {rcls2_p2480=T;return rcls2_m2480=((rcls2_v2492=rcls2_f2492()),((fabs((rcls2_v2492-(0.0)))<rcls2_v6508)?NIL:((fabs((rcls2_v2492-(-6.283185307179586)))<rcls2_v6508)?NIL:((fabs((rcls2_v2492-(6.283185307179586)))<rcls2_v6508)?NIL:T))));}}
static int rcls2_f2479(){if (rcls2_p2479) return rcls2_m2479; else {rcls2_p2479=T;return rcls2_m2479=((rcls2_v2480=rcls2_f2480()),(rcls2_v2480?rcls2_v2480:rcls2_f2539()));}}
static double rcls2_f304(){if (rcls2_p304) return rcls2_m304; else {rcls2_p304=T;return rcls2_m304=(rcls2_f2479()?(rcls2_f782()?(rcls2_f420()?((rcls2_v2493=rcls2_f2493()),(rcls2_v396=rcls2_f396()),((rcls2_v2493<rcls2_v396)?rcls2_v2493:rcls2_v396)):(rcls2_f836()?((rcls2_v2493=rcls2_f2493()),(rcls2_v809=rcls2_f809()),((rcls2_v2493<rcls2_v809)?rcls2_v2493:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f314()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2493=rcls2_f2493()),(rcls2_v454=rcls2_f454()),((rcls2_v2493<rcls2_v454)?rcls2_v2493:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f314())):rcls2_f2304())):rcls2_f2304());}}
static double_or_symbol rcls2_f63(){if (rcls2_p63) return rcls2_m63; else {rcls2_p63=T;return rcls2_m63=(rcls2_f2479()?coerce_double_to_double_or_symbol(rcls2_f2493()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1343(){if (rcls2_p1343) return rcls2_m1343; else {rcls2_p1343=T;return rcls2_m1343=(rcls2_f2479()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1377():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1666()?rcls2_f2493():rcls2_f1851()):rcls2_f1373()):rcls2_f1368()):(rcls2_f2027()?rcls2_f1373():rcls2_f2304())):(rcls2_f2054()?rcls2_f1368():rcls2_f2304()))):(rcls2_f1976()?rcls2_f1377():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1659()?rcls2_f2493():rcls2_f1839()):rcls2_f1358()):rcls2_f1353()):(rcls2_f1916()?rcls2_f1358():rcls2_f2304())):(rcls2_f1943()?rcls2_f1353():rcls2_f2304())))):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1649(){if (rcls2_p1649) return rcls2_m1649; else {rcls2_p1649=T;return rcls2_m1649=(rcls2_f2479()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1667():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1666()?T:rcls2_f1991()):rcls2_f2035()):rcls2_f2000()):rcls2_f1988()):rcls2_f1986())):(rcls2_f1976()?rcls2_f1667():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1659()?T:rcls2_f1879()):rcls2_f1924()):rcls2_f1888()):rcls2_f1876()):rcls2_f1874()))):NIL):NIL):NIL);}}
static double rcls2_f2293(){if (rcls2_p2293) return rcls2_m2293; else {rcls2_p2293=T;return rcls2_m2293=(rcls2_f2479()?(rcls2_f2445()?(rcls2_f2453()?((rcls2_v2493=rcls2_f2493()),(rcls2_v2467=rcls2_f2467()),((rcls2_v2493<rcls2_v2467)?rcls2_v2493:rcls2_v2467)):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static double rcls2_f329(){if (rcls2_p329) return rcls2_m329; else {rcls2_p329=T;return rcls2_m329=((rcls2_v2293=rcls2_f2293()),(rcls2_v792=rcls2_f792()),((rcls2_v2293<rcls2_v792)?rcls2_v2293:rcls2_v792));}}
static int rcls2_f1692(){if (rcls2_p1692) return rcls2_m1692; else {rcls2_p1692=T;return rcls2_m1692=(rcls2_f2293()<rcls2_f1839());}}
static int rcls2_f1690(){if (rcls2_p1690) return rcls2_m1690; else {rcls2_p1690=T;return rcls2_m1690=(rcls2_f2293()<rcls2_f1938());}}
static double rcls2_f1399(){if (rcls2_p1399) return rcls2_m1399; else {rcls2_p1399=T;return rcls2_m1399=(rcls2_f1924()?(rcls2_f1690()?rcls2_f2293():rcls2_f1938()):rcls2_f2304());}}
static int rcls2_f1686(){if (rcls2_p1686) return rcls2_m1686; else {rcls2_p1686=T;return rcls2_m1686=(rcls2_f2293()<rcls2_f1911());}}
static double rcls2_f1395(){if (rcls2_p1395) return rcls2_m1395; else {rcls2_p1395=T;return rcls2_m1395=(rcls2_f1889()?(rcls2_f1897()?(rcls2_f1686()?rcls2_f2293():rcls2_f1911()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1718(){if (rcls2_p1718) return rcls2_m1718; else {rcls2_p1718=T;return rcls2_m1718=(rcls2_f2293()<rcls2_f1861());}}
static int rcls2_f1716(){if (rcls2_p1716) return rcls2_m1716; else {rcls2_p1716=T;return rcls2_m1716=(rcls2_f2293()<rcls2_f2104());}}
static double rcls2_f1415(){if (rcls2_p1415) return rcls2_m1415; else {rcls2_p1415=T;return rcls2_m1415=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1718()?rcls2_f2293():rcls2_f1861()):(rcls2_f2090()?(rcls2_f1716()?rcls2_f2293():rcls2_f2104()):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1708(){if (rcls2_p1708) return rcls2_m1708; else {rcls2_p1708=T;return rcls2_m1708=(rcls2_f2293()<rcls2_f1851());}}
static int rcls2_f1706(){if (rcls2_p1706) return rcls2_m1706; else {rcls2_p1706=T;return rcls2_m1706=(rcls2_f2293()<rcls2_f2049());}}
static double rcls2_f1412(){if (rcls2_p1412) return rcls2_m1412; else {rcls2_p1412=T;return rcls2_m1412=(rcls2_f2035()?(rcls2_f1706()?rcls2_f2293():rcls2_f2049()):rcls2_f2304());}}
static int rcls2_f1702(){if (rcls2_p1702) return rcls2_m1702; else {rcls2_p1702=T;return rcls2_m1702=(rcls2_f2293()<rcls2_f2023());}}
static double rcls2_f1408(){if (rcls2_p1408) return rcls2_m1408; else {rcls2_p1408=T;return rcls2_m1408=(rcls2_f2001()?(rcls2_f2009()?(rcls2_f1702()?rcls2_f2293():rcls2_f2023()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f2435(){if (rcls2_p2435) return rcls2_m2435; else {rcls2_p2435=T;return rcls2_m2435=(rcls2_f2479()?rcls2_f2444():NIL);}}
static int rcls2_f1688(){if (rcls2_p1688) return rcls2_m1688; else {rcls2_p1688=T;return rcls2_m1688=(rcls2_f1924()?(rcls2_f1690()?rcls2_f2435():T):NIL);}}
static int rcls2_f1683(){if (rcls2_p1683) return rcls2_m1683; else {rcls2_p1683=T;return rcls2_m1683=(rcls2_f1889()?(rcls2_f1897()?(rcls2_f1686()?rcls2_f2435():T):NIL):NIL);}}
static int rcls2_f1709(){if (rcls2_p1709) return rcls2_m1709; else {rcls2_p1709=T;return rcls2_m1709=(rcls2_f2191()?(rcls2_f2136()?(rcls2_f2111()?(rcls2_f2082()?(rcls2_f1862()?(rcls2_f1718()?rcls2_f2435():rcls2_f2090()):(rcls2_f2090()?(rcls2_f1716()?rcls2_f2435():T):NIL)):NIL):NIL):NIL):NIL);}}
static int rcls2_f1704(){if (rcls2_p1704) return rcls2_m1704; else {rcls2_p1704=T;return rcls2_m1704=(rcls2_f2035()?(rcls2_f1706()?rcls2_f2435():T):NIL);}}
static int rcls2_f1699(){if (rcls2_p1699) return rcls2_m1699; else {rcls2_p1699=T;return rcls2_m1699=(rcls2_f2001()?(rcls2_f2009()?(rcls2_f1702()?rcls2_f2435():T):NIL):NIL);}}
static double rcls2_f2476(){if (rcls2_p2476) return rcls2_m2476; else {rcls2_p2476=T;return rcls2_m2476=(rcls2_f2479()?rcls2_f2493():rcls2_f2532());}}
static double rcls2_f2478(){if (rcls2_p2478) return rcls2_m2478; else {rcls2_p2478=T;return rcls2_m2478=(rcls2_f2479()?rcls2_f2493():rcls2_f2536());}}
static int rcls2_f2477(){if (rcls2_p2477) return rcls2_m2477; else {rcls2_p2477=T;return rcls2_m2477=(rcls2_f2478()>(0.0));}}
static int rcls2_f2471(){if (rcls2_p2471) return rcls2_m2471; else {rcls2_p2471=T;return rcls2_m2471=(rcls2_f2479()?((rcls2_v2477=rcls2_f2477()),(rcls2_v2477?rcls2_v2477:(fabs((rcls2_f2476()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f2873(){if (rcls2_p2873) return rcls2_m2873; else {rcls2_p2873=T;return rcls2_m2873=(fabs((((fabs((rcls2_f2903()-(0.0)))<rcls2_v6508)?rcls2_f2898():((rcls2_v2886=rcls2_f2886()),(rcls2_v2880=rcls2_f2880()),sqrt(((rcls2_v2886*rcls2_v2886)+(rcls2_v2880*rcls2_v2880)))))-rcls2_f6122()))<rcls2_v6508);}}
static double rcls2_f335(){if (rcls2_p335) return rcls2_m335; else {rcls2_p335=T;return rcls2_m335=(rcls2_f2873()?(rcls2_f2817()?(rcls2_f2792()?(rcls2_f2526()?(rcls2_f2306()?(rcls2_f782()?(rcls2_f420()?((rcls2_v2303=rcls2_f2303()),(rcls2_v396=rcls2_f396()),((rcls2_v2303<rcls2_v396)?rcls2_v2303:rcls2_v396)):(rcls2_f836()?((rcls2_v2303=rcls2_f2303()),(rcls2_v809=rcls2_f809()),((rcls2_v2303<rcls2_v809)?rcls2_v2303:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f365()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2303=rcls2_f2303()),(rcls2_v454=rcls2_f454()),((rcls2_v2303<rcls2_v454)?rcls2_v2303:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f365())):rcls2_f2304())):(rcls2_f2538()?(rcls2_f782()?(rcls2_f420()?((rcls2_v2781=rcls2_f2781()),(rcls2_v396=rcls2_f396()),((rcls2_v2781<rcls2_v396)?rcls2_v2781:rcls2_v396)):(rcls2_f836()?((rcls2_v2781=rcls2_f2781()),(rcls2_v809=rcls2_f809()),((rcls2_v2781<rcls2_v809)?rcls2_v2781:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f350()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2781=rcls2_f2781()),(rcls2_v454=rcls2_f454()),((rcls2_v2781<rcls2_v454)?rcls2_v2781:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f350())):rcls2_f2304())):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static double_or_symbol rcls2_f64(){if (rcls2_p64) return rcls2_m64; else {rcls2_p64=T;return rcls2_m64=(rcls2_f2873()?(rcls2_f2817()?(rcls2_f2792()?((rcls2_v2526=rcls2_f2526()),(rcls2_v2526?(rcls2_f2306()?coerce_double_to_double_or_symbol(rcls2_f2303()):rcls2_f70()):(rcls2_v2526?rcls2_f70():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcls2_f1423(){if (rcls2_p1423) return rcls2_m1423; else {rcls2_p1423=T;return rcls2_m1423=(rcls2_f2873()?(rcls2_f2817()?(rcls2_f2792()?(rcls2_f2526()?(rcls2_f2306()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1500():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1783()?rcls2_f2303():rcls2_f1851()):rcls2_f1497()):rcls2_f1493()):(rcls2_f2027()?rcls2_f1497():rcls2_f2304())):(rcls2_f2054()?rcls2_f1493():rcls2_f2304()))):(rcls2_f1976()?rcls2_f1500():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1767()?rcls2_f2303():rcls2_f1839()):rcls2_f1484()):rcls2_f1480()):(rcls2_f1916()?rcls2_f1484():rcls2_f2304())):(rcls2_f1943()?rcls2_f1480():rcls2_f2304())))):rcls2_f2304()):rcls2_f2304()):(rcls2_f2538()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1462():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1741()?rcls2_f2781():rcls2_f1851()):rcls2_f1458()):rcls2_f1453()):(rcls2_f2027()?rcls2_f1458():rcls2_f2304())):(rcls2_f2054()?rcls2_f1453():rcls2_f2304()))):(rcls2_f1976()?rcls2_f1462():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1734()?rcls2_f2781():rcls2_f1839()):rcls2_f1443()):rcls2_f1438()):(rcls2_f1916()?rcls2_f1443():rcls2_f2304())):(rcls2_f1943()?rcls2_f1438():rcls2_f2304())))):rcls2_f2304()):rcls2_f2304()):rcls2_f2304())):rcls2_f2304()):rcls2_f2304()):rcls2_f2304()):rcls2_f2304());}}
static int rcls2_f1719(){if (rcls2_p1719) return rcls2_m1719; else {rcls2_p1719=T;return rcls2_m1719=(rcls2_f2873()?(rcls2_f2817()?(rcls2_f2792()?(rcls2_f2526()?(rcls2_f2306()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1784():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1783()?rcls2_f2538():rcls2_f1991()):rcls2_f1779()):rcls2_f1774()):(rcls2_f2027()?rcls2_f1779():NIL)):(rcls2_f2054()?rcls2_f1774():NIL))):(rcls2_f1976()?rcls2_f1784():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1767()?rcls2_f2538():rcls2_f1879()):rcls2_f1763()):rcls2_f1758()):(rcls2_f1916()?rcls2_f1763():NIL)):(rcls2_f1943()?rcls2_f1758():NIL)))):NIL):NIL):(rcls2_f2538()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1742():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1741()?T:rcls2_f1991()):rcls2_f2035()):rcls2_f2000()):rcls2_f1988()):rcls2_f1986())):(rcls2_f1976()?rcls2_f1742():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1734()?T:rcls2_f1879()):rcls2_f1924()):rcls2_f1888()):rcls2_f1876()):rcls2_f1874()))):NIL):NIL):NIL)):NIL):NIL):NIL):NIL);}}
static double rcls2_f2266(){if (rcls2_p2266) return rcls2_m2266; else {rcls2_p2266=T;return rcls2_m2266=(rcls2_f2873()?(rcls2_f2817()?(rcls2_f2792()?(rcls2_f2526()?(rcls2_f2306()?rcls2_f2303():rcls2_f2531()):rcls2_f2311()):rcls2_f2532()):rcls2_f2532()):rcls2_f2532());}}
static double rcls2_f2298(){if (rcls2_p2298) return rcls2_m2298; else {rcls2_p2298=T;return rcls2_m2298=(rcls2_f2873()?(rcls2_f2817()?(rcls2_f2792()?(rcls2_f2526()?(rcls2_f2306()?rcls2_f2303():rcls2_f2535()):rcls2_f2313()):rcls2_f2536()):rcls2_f2536()):rcls2_f2536());}}
static int rcls2_f2850(){if (rcls2_p2850) return rcls2_m2850; else {rcls2_p2850=T;return rcls2_m2850=((rcls2_v2873=rcls2_f2873()),(rcls2_v2873?((fabs((rcls2_f2869()-(0.0)))<rcls2_v6508)?NIL:((rcls2_v2862=rcls2_f2862()),((fabs((rcls2_v2862-(0.0)))<rcls2_v6508)?NIL:((rcls2_v2862>(0.0))?rcls2_f2857():(rcls2_f2857()?NIL:T))))):(rcls2_v2873?NIL:T)));}}
static double rcls2_f1159(){if (rcls2_p1159) return rcls2_m1159; else {rcls2_p1159=T;return rcls2_m1159=(rcls2_f2850()?(rcls2_f2849()?(rcls2_f2843()?rcls2_f1423():(rcls2_f2508()?(rcls2_f2498()?(rcls2_f2471()?(rcls2_f2436()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1415():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1708()?rcls2_f2293():rcls2_f1851()):rcls2_f1412()):rcls2_f1408()):(rcls2_f2027()?rcls2_f1412():rcls2_f2304())):(rcls2_f2054()?rcls2_f1408():rcls2_f2304()))):(rcls2_f1976()?rcls2_f1415():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1692()?rcls2_f2293():rcls2_f1839()):rcls2_f1399()):rcls2_f1395()):(rcls2_f1916()?rcls2_f1399():rcls2_f2304())):(rcls2_f1943()?rcls2_f1395():rcls2_f2304())))):rcls2_f2304()):rcls2_f2304()):rcls2_f1343()):rcls2_f1298()):(rcls2_f2471()?rcls2_f1343():rcls2_f2304())):(rcls2_f2498()?rcls2_f1298():rcls2_f2304()))):(rcls2_f2420()?rcls2_f1423():(rcls2_f2401()?(rcls2_f2387()?(rcls2_f2360()?(rcls2_f2324()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1284():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1605()?rcls2_f2281():rcls2_f1851()):rcls2_f1281()):rcls2_f1277()):(rcls2_f2027()?rcls2_f1281():rcls2_f2304())):(rcls2_f2054()?rcls2_f1277():rcls2_f2304()))):(rcls2_f1976()?rcls2_f1284():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1589()?rcls2_f2281():rcls2_f1839()):rcls2_f1268()):rcls2_f1264()):(rcls2_f1916()?rcls2_f1268():rcls2_f2304())):(rcls2_f1943()?rcls2_f1264():rcls2_f2304())))):rcls2_f2304()):rcls2_f2304()):rcls2_f1212()):rcls2_f1167()):(rcls2_f2360()?rcls2_f1212():rcls2_f2304())):(rcls2_f2387()?rcls2_f1167():rcls2_f2304())))):rcls2_f2304());}}
static double rcls2_f380(){if (rcls2_p380) return rcls2_m380; else {rcls2_p380=T;return rcls2_m380=((rcls2_v1159=rcls2_f1159()),(rcls2_v792=rcls2_f792()),((rcls2_v1159<rcls2_v792)?rcls2_v1159:rcls2_v792));}}
static double rcls2_f2250(){if (rcls2_p2250) return rcls2_m2250; else {rcls2_p2250=T;return rcls2_m2250=(rcls2_f2850()?(rcls2_f2849()?(rcls2_f2843()?rcls2_f2266():(rcls2_f2508()?(rcls2_f2498()?(rcls2_f2471()?(rcls2_f2436()?rcls2_f2293():rcls2_f2476()):rcls2_f2441()):(rcls2_f2471()?rcls2_f2476():rcls2_f2532())):(rcls2_f2498()?rcls2_f2441():rcls2_f2532()))):(rcls2_f2420()?rcls2_f2266():(rcls2_f2401()?(rcls2_f2387()?(rcls2_f2360()?(rcls2_f2324()?rcls2_f2281():rcls2_f2365()):rcls2_f2329()):(rcls2_f2360()?rcls2_f2365():rcls2_f2532())):(rcls2_f2387()?rcls2_f2329():rcls2_f2532())))):rcls2_f2532());}}
static double rcls2_f2272(){if (rcls2_p2272) return rcls2_m2272; else {rcls2_p2272=T;return rcls2_m2272=(rcls2_f2850()?(rcls2_f2849()?(rcls2_f2843()?rcls2_f2298():(rcls2_f2508()?(rcls2_f2498()?(rcls2_f2471()?(rcls2_f2436()?rcls2_f2293():rcls2_f2478()):rcls2_f2443()):(rcls2_f2471()?rcls2_f2478():rcls2_f2536())):(rcls2_f2498()?rcls2_f2443():rcls2_f2536()))):(rcls2_f2420()?rcls2_f2298():(rcls2_f2401()?(rcls2_f2387()?(rcls2_f2360()?(rcls2_f2324()?rcls2_f2281():rcls2_f2367()):rcls2_f2331()):(rcls2_f2360()?rcls2_f2367():rcls2_f2536())):(rcls2_f2387()?rcls2_f2331():rcls2_f2536())))):rcls2_f2536());}}
static int rcls2_f2271(){if (rcls2_p2271) return rcls2_m2271; else {rcls2_p2271=T;return rcls2_m2271=(rcls2_f2272()>(0.0));}}
static int rcls2_f2521(){if (rcls2_p2521) return rcls2_m2521; else {rcls2_p2521=T;return rcls2_m2521=(rcls2_f2873()?(rcls2_f2817()?(rcls2_f2792()?(rcls2_f2526()?rcls2_f2538():rcls2_f2525()):NIL):NIL):NIL);}}
static int rcls2_f2314(){if (rcls2_p2314) return rcls2_m2314; else {rcls2_p2314=T;return rcls2_m2314=(rcls2_f2850()?(rcls2_f2849()?(rcls2_f2843()?rcls2_f2521():(rcls2_f2508()?(rcls2_f2498()?(rcls2_f2471()?(rcls2_f2436()?rcls2_f2435():rcls2_f2479()):rcls2_f2444()):(rcls2_f2471()?rcls2_f2479():NIL)):(rcls2_f2498()?rcls2_f2444():NIL))):(rcls2_f2420()?rcls2_f2521():(rcls2_f2401()?(rcls2_f2387()?(rcls2_f2360()?(rcls2_f2324()?rcls2_f2323():rcls2_f2368()):rcls2_f2332()):(rcls2_f2360()?rcls2_f2368():NIL)):(rcls2_f2387()?rcls2_f2332():NIL)))):NIL);}}
static int rcls2_f2245(){if (rcls2_p2245) return rcls2_m2245; else {rcls2_p2245=T;return rcls2_m2245=(rcls2_f2314()?((rcls2_v2271=rcls2_f2271()),(rcls2_v2271?rcls2_v2271:(fabs((rcls2_f2250()-(0.0)))<rcls2_v6508))):NIL);}}
static int rcls2_f1155(){if (rcls2_p1155) return rcls2_m1155; else {rcls2_p1155=T;return rcls2_m1155=((rcls2_v2934?rcls2_f2536():(rcls2_f2245()?(rcls2_f1794()?rcls2_f1159():rcls2_f2272()):rcls2_f1801()))>(0.0));}}
void rcls2(rcls2_a6530,rcls2_a6528,rcls2_a6526,rcls2_a6524,rcls2_a6522,rcls2_a6520,rcls2_a6518,rcls2_a6516,rcls2_a6514,rcls2_a6512,rcls2_a6508)
double rcls2_a6530;
double rcls2_a6528;
double rcls2_a6526;
double rcls2_a6524;
double rcls2_a6522;
double rcls2_a6520;
double rcls2_a6518;
double rcls2_a6516;
double rcls2_a6514;
double rcls2_a6512;
double rcls2_a6508;
{ rcls2_v6530=rcls2_a6530;
  rcls2_v6528=rcls2_a6528;
  rcls2_v6526=rcls2_a6526;
  rcls2_v6524=rcls2_a6524;
  rcls2_v6522=rcls2_a6522;
  rcls2_v6520=rcls2_a6520;
  rcls2_v6518=rcls2_a6518;
  rcls2_v6516=rcls2_a6516;
  rcls2_v6514=rcls2_a6514;
  rcls2_v6512=rcls2_a6512;
  rcls2_v6508=rcls2_a6508;
  rcls2_p3902=NIL;
  rcls2_p4023=NIL;
  rcls2_p4020=NIL;
  rcls2_p781=NIL;
  rcls2_p4011=NIL;
  rcls2_p832=NIL;
  rcls2_p834=NIL;
  rcls2_p792=NIL;
  rcls2_p4350=NIL;
  rcls2_p1131=NIL;
  rcls2_p4483=NIL;
  rcls2_p4480=NIL;
  rcls2_p1146=NIL;
  rcls2_p4467=NIL;
  rcls2_p2304=NIL;
  rcls2_p2532=NIL;
  rcls2_p2536=NIL;
  rcls2_p2790=NIL;
  rcls2_p2786=NIL;
  rcls2_p2600=NIL;
  rcls2_p6312=NIL;
  rcls2_p6310=NIL;
  rcls2_p6303=NIL;
  rcls2_p6301=NIL;
  rcls2_p6462=NIL;
  rcls2_p6467=NIL;
  rcls2_p6465=NIL;
  rcls2_p5874=NIL;
  rcls2_p5873=NIL;
  rcls2_p4469=NIL;
  rcls2_p4468=NIL;
  rcls2_p4431=NIL;
  rcls2_p4419=NIL;
  rcls2_p4418=NIL;
  rcls2_p1030=NIL;
  rcls2_p5872=NIL;
  rcls2_p2898=NIL;
  rcls2_p2915=NIL;
  rcls2_p2764=NIL;
  rcls2_p2763=NIL;
  rcls2_p2742=NIL;
  rcls2_p2750=NIL;
  rcls2_p2760=NIL;
  rcls2_p6501=NIL;
  rcls2_p6499=NIL;
  rcls2_p6496=NIL;
  rcls2_p6443=NIL;
  rcls2_p6494=NIL;
  rcls2_p6459=NIL;
  rcls2_p2761=NIL;
  rcls2_p2758=NIL;
  rcls2_p2659=NIL;
  rcls2_p2652=NIL;
  rcls2_p2658=NIL;
  rcls2_p2722=NIL;
  rcls2_p2720=NIL;
  rcls2_p2741=NIL;
  rcls2_p2740=NIL;
  rcls2_p2710=NIL;
  rcls2_p2708=NIL;
  rcls2_p2749=NIL;
  rcls2_p2718=NIL;
  rcls2_p2716=NIL;
  rcls2_p2696=NIL;
  rcls2_p2713=NIL;
  rcls2_p2702=NIL;
  rcls2_p2694=NIL;
  rcls2_p2684=NIL;
  rcls2_p2698=NIL;
  rcls2_p2697=NIL;
  rcls2_p2747=NIL;
  rcls2_p2736=NIL;
  rcls2_p2730=NIL;
  rcls2_p2723=NIL;
  rcls2_p2596=NIL;
  rcls2_p2582=NIL;
  rcls2_p2663=NIL;
  rcls2_p2680=NIL;
  rcls2_p2754=NIL;
  rcls2_p2674=NIL;
  rcls2_p2636=NIL;
  rcls2_p2757=NIL;
  rcls2_p2568=NIL;
  rcls2_p2546=NIL;
  rcls2_p2756=NIL;
  rcls2_p2677=NIL;
  rcls2_p2635=NIL;
  rcls2_p2755=NIL;
  rcls2_p2670=NIL;
  rcls2_p2633=NIL;
  rcls2_p2631=NIL;
  rcls2_p2630=NIL;
  rcls2_p2628=NIL;
  rcls2_p2619=NIL;
  rcls2_p2617=NIL;
  rcls2_p2616=NIL;
  rcls2_p2614=NIL;
  rcls2_p2605=NIL;
  rcls2_p2669=NIL;
  rcls2_p2752=NIL;
  rcls2_p2662=NIL;
  rcls2_p2648=NIL;
  rcls2_p2640=NIL;
  rcls2_p2661=NIL;
  rcls2_p2650=NIL;
  rcls2_p2751=NIL;
  rcls2_p2667=NIL;
  rcls2_p2602=NIL;
  rcls2_p2589=NIL;
  rcls2_p2564=NIL;
  rcls2_p2575=NIL;
  rcls2_p2563=NIL;
  rcls2_p2559=NIL;
  rcls2_p2551=NIL;
  rcls2_p2539=NIL;
  rcls2_p6493=NIL;
  rcls2_p2243=NIL;
  rcls2_p2234=NIL;
  rcls2_p2232=NIL;
  rcls2_p2233=NIL;
  rcls2_p2125=NIL;
  rcls2_p2122=NIL;
  rcls2_p2229=NIL;
  rcls2_p2241=NIL;
  rcls2_p2240=NIL;
  rcls2_p2239=NIL;
  rcls2_p2118=NIL;
  rcls2_p2115=NIL;
  rcls2_p2238=NIL;
  rcls2_p2236=NIL;
  rcls2_p2227=NIL;
  rcls2_p2168=NIL;
  rcls2_p2190=NIL;
  rcls2_p2210=NIL;
  rcls2_p2226=NIL;
  rcls2_p2223=NIL;
  rcls2_p2212=NIL;
  rcls2_p2222=NIL;
  rcls2_p2161=NIL;
  rcls2_p2159=NIL;
  rcls2_p2073=NIL;
  rcls2_p2053=NIL;
  rcls2_p2066=NIL;
  rcls2_p2072=NIL;
  rcls2_p2165=NIL;
  rcls2_p1981=NIL;
  rcls2_p1974=NIL;
  rcls2_p2180=NIL;
  rcls2_p2189=NIL;
  rcls2_p2167=NIL;
  rcls2_p1983=NIL;
  rcls2_p1973=NIL;
  rcls2_p2166=NIL;
  rcls2_p2187=NIL;
  rcls2_p2175=NIL;
  rcls2_p2209=NIL;
  rcls2_p2208=NIL;
  rcls2_p2149=NIL;
  rcls2_p2147=NIL;
  rcls2_p2221=NIL;
  rcls2_p2157=NIL;
  rcls2_p2141=NIL;
  rcls2_p2155=NIL;
  rcls2_p2135=NIL;
  rcls2_p2133=NIL;
  rcls2_p2152=NIL;
  rcls2_p2136=NIL;
  rcls2_p2111=NIL;
  rcls2_p2104=NIL;
  rcls2_p201=NIL;
  rcls2_p2103=NIL;
  rcls2_p2091=NIL;
  rcls2_p2090=NIL;
  rcls2_p40=NIL;
  rcls2_p1861=NIL;
  rcls2_p216=NIL;
  rcls2_p2087=NIL;
  rcls2_p2089=NIL;
  rcls2_p2088=NIL;
  rcls2_p2082=NIL;
  rcls2_p1867=NIL;
  rcls2_p1869=NIL;
  rcls2_p1868=NIL;
  rcls2_p2081=NIL;
  rcls2_p1862=NIL;
  rcls2_p2219=NIL;
  rcls2_p2204=NIL;
  rcls2_p2198=NIL;
  rcls2_p2931=NIL;
  rcls2_p2922=NIL;
  rcls2_p2920=NIL;
  rcls2_p2921=NIL;
  rcls2_p2806=NIL;
  rcls2_p2803=NIL;
  rcls2_p2917=NIL;
  rcls2_p2929=NIL;
  rcls2_p2928=NIL;
  rcls2_p2927=NIL;
  rcls2_p2799=NIL;
  rcls2_p2796=NIL;
  rcls2_p2926=NIL;
  rcls2_p2924=NIL;
  rcls2_p2911=NIL;
  rcls2_p2849=NIL;
  rcls2_p2872=NIL;
  rcls2_p2892=NIL;
  rcls2_p2910=NIL;
  rcls2_p2907=NIL;
  rcls2_p2894=NIL;
  rcls2_p2906=NIL;
  rcls2_p2842=NIL;
  rcls2_p2840=NIL;
  rcls2_p2517=NIL;
  rcls2_p2497=NIL;
  rcls2_p2510=NIL;
  rcls2_p2516=NIL;
  rcls2_p2846=NIL;
  rcls2_p2425=NIL;
  rcls2_p2418=NIL;
  rcls2_p2862=NIL;
  rcls2_p2871=NIL;
  rcls2_p2848=NIL;
  rcls2_p2427=NIL;
  rcls2_p2417=NIL;
  rcls2_p2847=NIL;
  rcls2_p2869=NIL;
  rcls2_p2857=NIL;
  rcls2_p2891=NIL;
  rcls2_p2890=NIL;
  rcls2_p2830=NIL;
  rcls2_p2828=NIL;
  rcls2_p2905=NIL;
  rcls2_p2838=NIL;
  rcls2_p2822=NIL;
  rcls2_p2836=NIL;
  rcls2_p2816=NIL;
  rcls2_p2814=NIL;
  rcls2_p2833=NIL;
  rcls2_p2817=NIL;
  rcls2_p2792=NIL;
  rcls2_p2781=NIL;
  rcls2_p350=NIL;
  rcls2_p1748=NIL;
  rcls2_p2780=NIL;
  rcls2_p2766=NIL;
  rcls2_p2538=NIL;
  rcls2_p70=NIL;
  rcls2_p2303=NIL;
  rcls2_p365=NIL;
  rcls2_p1793=NIL;
  rcls2_p1791=NIL;
  rcls2_p2531=NIL;
  rcls2_p2535=NIL;
  rcls2_p2534=NIL;
  rcls2_p2526=NIL;
  rcls2_p2311=NIL;
  rcls2_p2313=NIL;
  rcls2_p2312=NIL;
  rcls2_p2525=NIL;
  rcls2_p2306=NIL;
  rcls2_p2903=NIL;
  rcls2_p2886=NIL;
  rcls2_p2880=NIL;
  rcls2_p6505=NIL;
  rcls2_p6469=NIL;
  rcls2_p6127=NIL;
  rcls2_p6125=NIL;
  rcls2_p6124=NIL;
  rcls2_p4008=NIL;
  rcls2_p3976=NIL;
  rcls2_p670=NIL;
  rcls2_p660=NIL;
  rcls2_p666=NIL;
  rcls2_p668=NIL;
  rcls2_p667=NIL;
  rcls2_p665=NIL;
  rcls2_p659=NIL;
  rcls2_p568=NIL;
  rcls2_p540=NIL;
  rcls2_p658=NIL;
  rcls2_p657=NIL;
  rcls2_p664=NIL;
  rcls2_p566=NIL;
  rcls2_p541=NIL;
  rcls2_p538=NIL;
  rcls2_p533=NIL;
  rcls2_p526=NIL;
  rcls2_p532=NIL;
  rcls2_p525=NIL;
  rcls2_p508=NIL;
  rcls2_p564=NIL;
  rcls2_p521=NIL;
  rcls2_p513=NIL;
  rcls2_p562=NIL;
  rcls2_p561=NIL;
  rcls2_p549=NIL;
  rcls2_p501=NIL;
  rcls2_p498=NIL;
  rcls2_p500=NIL;
  rcls2_p499=NIL;
  rcls2_p493=NIL;
  rcls2_p492=NIL;
  rcls2_p490=NIL;
  rcls2_p484=NIL;
  rcls2_p662=NIL;
  rcls2_p619=NIL;
  rcls2_p596=NIL;
  rcls2_p617=NIL;
  rcls2_p616=NIL;
  rcls2_p604=NIL;
  rcls2_p661=NIL;
  rcls2_p655=NIL;
  rcls2_p650=NIL;
  rcls2_p643=NIL;
  rcls2_p649=NIL;
  rcls2_p588=NIL;
  rcls2_p635=NIL;
  rcls2_p642=NIL;
  rcls2_p639=NIL;
  rcls2_p630=NIL;
  rcls2_p629=NIL;
  rcls2_p578=NIL;
  rcls2_p576=NIL;
  rcls2_p570=NIL;
  rcls2_p626=NIL;
  rcls2_p3987=NIL;
  rcls2_p4003=NIL;
  rcls2_p4001=NIL;
  rcls2_p3993=NIL;
  rcls2_p3950=NIL;
  rcls2_p3948=NIL;
  rcls2_p4000=NIL;
  rcls2_p3998=NIL;
  rcls2_p3994=NIL;
  rcls2_p622=NIL;
  rcls2_p775=NIL;
  rcls2_p770=NIL;
  rcls2_p769=NIL;
  rcls2_p773=NIL;
  rcls2_p733=NIL;
  rcls2_p710=NIL;
  rcls2_p731=NIL;
  rcls2_p730=NIL;
  rcls2_p718=NIL;
  rcls2_p772=NIL;
  rcls2_p767=NIL;
  rcls2_p762=NIL;
  rcls2_p755=NIL;
  rcls2_p761=NIL;
  rcls2_p702=NIL;
  rcls2_p747=NIL;
  rcls2_p754=NIL;
  rcls2_p751=NIL;
  rcls2_p742=NIL;
  rcls2_p741=NIL;
  rcls2_p692=NIL;
  rcls2_p475=NIL;
  rcls2_p689=NIL;
  rcls2_p691=NIL;
  rcls2_p690=NIL;
  rcls2_p684=NIL;
  rcls2_p681=NIL;
  rcls2_p675=NIL;
  rcls2_p738=NIL;
  rcls2_p736=NIL;
  rcls2_p470=NIL;
  rcls2_p454=NIL;
  rcls2_p415=NIL;
  rcls2_p449=NIL;
  rcls2_p439=NIL;
  rcls2_p671=NIL;
  rcls2_p477=NIL;
  rcls2_p434=NIL;
  rcls2_p437=NIL;
  rcls2_p436=NIL;
  rcls2_p429=NIL;
  rcls2_p428=NIL;
  rcls2_p425=NIL;
  rcls2_p427=NIL;
  rcls2_p426=NIL;
  rcls2_p420=NIL;
  rcls2_p4464=NIL;
  rcls2_p4430=NIL;
  rcls2_p1029=NIL;
  rcls2_p1019=NIL;
  rcls2_p1025=NIL;
  rcls2_p1027=NIL;
  rcls2_p1026=NIL;
  rcls2_p1024=NIL;
  rcls2_p1018=NIL;
  rcls2_p927=NIL;
  rcls2_p899=NIL;
  rcls2_p1017=NIL;
  rcls2_p1016=NIL;
  rcls2_p1023=NIL;
  rcls2_p925=NIL;
  rcls2_p900=NIL;
  rcls2_p897=NIL;
  rcls2_p892=NIL;
  rcls2_p885=NIL;
  rcls2_p891=NIL;
  rcls2_p884=NIL;
  rcls2_p867=NIL;
  rcls2_p923=NIL;
  rcls2_p880=NIL;
  rcls2_p872=NIL;
  rcls2_p921=NIL;
  rcls2_p920=NIL;
  rcls2_p908=NIL;
  rcls2_p860=NIL;
  rcls2_p857=NIL;
  rcls2_p859=NIL;
  rcls2_p858=NIL;
  rcls2_p852=NIL;
  rcls2_p851=NIL;
  rcls2_p849=NIL;
  rcls2_p843=NIL;
  rcls2_p1021=NIL;
  rcls2_p978=NIL;
  rcls2_p955=NIL;
  rcls2_p976=NIL;
  rcls2_p975=NIL;
  rcls2_p963=NIL;
  rcls2_p1020=NIL;
  rcls2_p1014=NIL;
  rcls2_p1009=NIL;
  rcls2_p1002=NIL;
  rcls2_p1008=NIL;
  rcls2_p947=NIL;
  rcls2_p994=NIL;
  rcls2_p1001=NIL;
  rcls2_p998=NIL;
  rcls2_p989=NIL;
  rcls2_p988=NIL;
  rcls2_p937=NIL;
  rcls2_p935=NIL;
  rcls2_p929=NIL;
  rcls2_p985=NIL;
  rcls2_p4442=NIL;
  rcls2_p4458=NIL;
  rcls2_p4456=NIL;
  rcls2_p4448=NIL;
  rcls2_p4401=NIL;
  rcls2_p4399=NIL;
  rcls2_p4455=NIL;
  rcls2_p4453=NIL;
  rcls2_p4449=NIL;
  rcls2_p981=NIL;
  rcls2_p1139=NIL;
  rcls2_p1134=NIL;
  rcls2_p1133=NIL;
  rcls2_p1137=NIL;
  rcls2_p1095=NIL;
  rcls2_p1071=NIL;
  rcls2_p1093=NIL;
  rcls2_p1092=NIL;
  rcls2_p1080=NIL;
  rcls2_p1136=NIL;
  rcls2_p1129=NIL;
  rcls2_p1124=NIL;
  rcls2_p1117=NIL;
  rcls2_p1123=NIL;
  rcls2_p1063=NIL;
  rcls2_p1109=NIL;
  rcls2_p1116=NIL;
  rcls2_p1113=NIL;
  rcls2_p1104=NIL;
  rcls2_p1103=NIL;
  rcls2_p1053=NIL;
  rcls2_p830=NIL;
  rcls2_p1050=NIL;
  rcls2_p1052=NIL;
  rcls2_p1051=NIL;
  rcls2_p1045=NIL;
  rcls2_p1042=NIL;
  rcls2_p1036=NIL;
  rcls2_p1100=NIL;
  rcls2_p1098=NIL;
  rcls2_p825=NIL;
  rcls2_p809=NIL;
  rcls2_p419=NIL;
  rcls2_p804=NIL;
  rcls2_p794=NIL;
  rcls2_p1032=NIL;
  rcls2_p836=NIL;
  rcls2_p396=NIL;
  rcls2_p787=NIL;
  rcls2_p790=NIL;
  rcls2_p789=NIL;
  rcls2_p782=NIL;
  rcls2_p393=NIL;
  rcls2_p6122=NIL;
  rcls2_p2191=NIL;
  rcls2_p186=NIL;
  rcls2_p34=NIL;
  rcls2_p1500=NIL;
  rcls2_p1462=NIL;
  rcls2_p1784=NIL;
  rcls2_p1742=NIL;
  rcls2_p1824=NIL;
  rcls2_p1856=NIL;
  rcls2_p2169=NIL;
  rcls2_p2077=NIL;
  rcls2_p6089=NIL;
  rcls2_p1977=NIL;
  rcls2_p1976=NIL;
  rcls2_p1971=NIL;
  rcls2_p1955=NIL;
  rcls2_p1954=NIL;
  rcls2_p1952=NIL;
  rcls2_p1943=NIL;
  rcls2_p1911=NIL;
  rcls2_p93=NIL;
  rcls2_p1761=NIL;
  rcls2_p1910=NIL;
  rcls2_p1898=NIL;
  rcls2_p1897=NIL;
  rcls2_p1894=NIL;
  rcls2_p1896=NIL;
  rcls2_p1895=NIL;
  rcls2_p1889=NIL;
  rcls2_p82=NIL;
  rcls2_p20=NIL;
  rcls2_p1480=NIL;
  rcls2_p1438=NIL;
  rcls2_p1758=NIL;
  rcls2_p1885=NIL;
  rcls2_p1887=NIL;
  rcls2_p1886=NIL;
  rcls2_p1888=NIL;
  rcls2_p1874=NIL;
  rcls2_p1880=NIL;
  rcls2_p1969=NIL;
  rcls2_p1968=NIL;
  rcls2_p1966=NIL;
  rcls2_p1957=NIL;
  rcls2_p1938=NIL;
  rcls2_p110=NIL;
  rcls2_p1765=NIL;
  rcls2_p1937=NIL;
  rcls2_p1925=NIL;
  rcls2_p1924=NIL;
  rcls2_p100=NIL;
  rcls2_p23=NIL;
  rcls2_p1484=NIL;
  rcls2_p1443=NIL;
  rcls2_p1763=NIL;
  rcls2_p1839=NIL;
  rcls2_p125=NIL;
  rcls2_p1767=NIL;
  rcls2_p1734=NIL;
  rcls2_p1879=NIL;
  rcls2_p1921=NIL;
  rcls2_p1923=NIL;
  rcls2_p1922=NIL;
  rcls2_p1916=NIL;
  rcls2_p1876=NIL;
  rcls2_p2163=NIL;
  rcls2_p2162=NIL;
  rcls2_p2076=NIL;
  rcls2_p2062=NIL;
  rcls2_p2054=NIL;
  rcls2_p2023=NIL;
  rcls2_p148=NIL;
  rcls2_p1777=NIL;
  rcls2_p2022=NIL;
  rcls2_p2010=NIL;
  rcls2_p2009=NIL;
  rcls2_p2006=NIL;
  rcls2_p2008=NIL;
  rcls2_p2007=NIL;
  rcls2_p2001=NIL;
  rcls2_p137=NIL;
  rcls2_p30=NIL;
  rcls2_p1493=NIL;
  rcls2_p1453=NIL;
  rcls2_p1774=NIL;
  rcls2_p1997=NIL;
  rcls2_p1999=NIL;
  rcls2_p1998=NIL;
  rcls2_p2000=NIL;
  rcls2_p1986=NIL;
  rcls2_p1992=NIL;
  rcls2_p2075=NIL;
  rcls2_p2064=NIL;
  rcls2_p2049=NIL;
  rcls2_p165=NIL;
  rcls2_p1781=NIL;
  rcls2_p2048=NIL;
  rcls2_p2036=NIL;
  rcls2_p2035=NIL;
  rcls2_p155=NIL;
  rcls2_p33=NIL;
  rcls2_p1497=NIL;
  rcls2_p1458=NIL;
  rcls2_p1779=NIL;
  rcls2_p1851=NIL;
  rcls2_p180=NIL;
  rcls2_p1783=NIL;
  rcls2_p1741=NIL;
  rcls2_p1991=NIL;
  rcls2_p2032=NIL;
  rcls2_p2034=NIL;
  rcls2_p2033=NIL;
  rcls2_p2027=NIL;
  rcls2_p1808=NIL;
  rcls2_p1830=NIL;
  rcls2_p1829=NIL;
  rcls2_p1988=NIL;
  rcls2_p1870=NIL;
  rcls2_p1803=NIL;
  rcls2_p1802=NIL;
  rcls2_p1799=NIL;
  rcls2_p1801=NIL;
  rcls2_p1800=NIL;
  rcls2_p1794=NIL;
  rcls2_p2421=NIL;
  rcls2_p2420=NIL;
  rcls2_p2415=NIL;
  rcls2_p2399=NIL;
  rcls2_p2398=NIL;
  rcls2_p2396=NIL;
  rcls2_p2387=NIL;
  rcls2_p2355=NIL;
  rcls2_p242=NIL;
  rcls2_p1183=NIL;
  rcls2_p1178=NIL;
  rcls2_p1198=NIL;
  rcls2_p1193=NIL;
  rcls2_p1530=NIL;
  rcls2_p1544=NIL;
  rcls2_p1202=NIL;
  rcls2_p1538=NIL;
  rcls2_p1537=NIL;
  rcls2_p2354=NIL;
  rcls2_p2342=NIL;
  rcls2_p2341=NIL;
  rcls2_p2338=NIL;
  rcls2_p2340=NIL;
  rcls2_p2339=NIL;
  rcls2_p2333=NIL;
  rcls2_p231=NIL;
  rcls2_p50=NIL;
  rcls2_p1167=NIL;
  rcls2_p1519=NIL;
  rcls2_p2329=NIL;
  rcls2_p2331=NIL;
  rcls2_p2330=NIL;
  rcls2_p2332=NIL;
  rcls2_p2324=NIL;
  rcls2_p2413=NIL;
  rcls2_p2412=NIL;
  rcls2_p2410=NIL;
  rcls2_p2401=NIL;
  rcls2_p2382=NIL;
  rcls2_p259=NIL;
  rcls2_p1227=NIL;
  rcls2_p1222=NIL;
  rcls2_p1242=NIL;
  rcls2_p1237=NIL;
  rcls2_p1556=NIL;
  rcls2_p1570=NIL;
  rcls2_p1246=NIL;
  rcls2_p1564=NIL;
  rcls2_p1563=NIL;
  rcls2_p2381=NIL;
  rcls2_p2369=NIL;
  rcls2_p2368=NIL;
  rcls2_p249=NIL;
  rcls2_p53=NIL;
  rcls2_p1212=NIL;
  rcls2_p1546=NIL;
  rcls2_p2281=NIL;
  rcls2_p274=NIL;
  rcls2_p1589=NIL;
  rcls2_p1587=NIL;
  rcls2_p1268=NIL;
  rcls2_p1583=NIL;
  rcls2_p1264=NIL;
  rcls2_p1615=NIL;
  rcls2_p1613=NIL;
  rcls2_p1284=NIL;
  rcls2_p1605=NIL;
  rcls2_p1603=NIL;
  rcls2_p1281=NIL;
  rcls2_p1599=NIL;
  rcls2_p1277=NIL;
  rcls2_p2323=NIL;
  rcls2_p1585=NIL;
  rcls2_p1580=NIL;
  rcls2_p1606=NIL;
  rcls2_p1601=NIL;
  rcls2_p1596=NIL;
  rcls2_p2365=NIL;
  rcls2_p2367=NIL;
  rcls2_p2366=NIL;
  rcls2_p2360=NIL;
  rcls2_p2844=NIL;
  rcls2_p2843=NIL;
  rcls2_p2520=NIL;
  rcls2_p2506=NIL;
  rcls2_p2498=NIL;
  rcls2_p2467=NIL;
  rcls2_p297=NIL;
  rcls2_p1314=NIL;
  rcls2_p1309=NIL;
  rcls2_p1329=NIL;
  rcls2_p1324=NIL;
  rcls2_p1633=NIL;
  rcls2_p1647=NIL;
  rcls2_p1333=NIL;
  rcls2_p1641=NIL;
  rcls2_p1640=NIL;
  rcls2_p2466=NIL;
  rcls2_p2454=NIL;
  rcls2_p2453=NIL;
  rcls2_p2450=NIL;
  rcls2_p2452=NIL;
  rcls2_p2451=NIL;
  rcls2_p2445=NIL;
  rcls2_p286=NIL;
  rcls2_p60=NIL;
  rcls2_p1298=NIL;
  rcls2_p1622=NIL;
  rcls2_p2441=NIL;
  rcls2_p2443=NIL;
  rcls2_p2442=NIL;
  rcls2_p2444=NIL;
  rcls2_p2436=NIL;
  rcls2_p2519=NIL;
  rcls2_p2508=NIL;
  rcls2_p2493=NIL;
  rcls2_p314=NIL;
  rcls2_p1358=NIL;
  rcls2_p1353=NIL;
  rcls2_p1373=NIL;
  rcls2_p1368=NIL;
  rcls2_p1659=NIL;
  rcls2_p1673=NIL;
  rcls2_p1377=NIL;
  rcls2_p1667=NIL;
  rcls2_p1666=NIL;
  rcls2_p2492=NIL;
  rcls2_p2480=NIL;
  rcls2_p2479=NIL;
  rcls2_p304=NIL;
  rcls2_p63=NIL;
  rcls2_p1343=NIL;
  rcls2_p1649=NIL;
  rcls2_p2293=NIL;
  rcls2_p329=NIL;
  rcls2_p1692=NIL;
  rcls2_p1690=NIL;
  rcls2_p1399=NIL;
  rcls2_p1686=NIL;
  rcls2_p1395=NIL;
  rcls2_p1718=NIL;
  rcls2_p1716=NIL;
  rcls2_p1415=NIL;
  rcls2_p1708=NIL;
  rcls2_p1706=NIL;
  rcls2_p1412=NIL;
  rcls2_p1702=NIL;
  rcls2_p1408=NIL;
  rcls2_p2435=NIL;
  rcls2_p1688=NIL;
  rcls2_p1683=NIL;
  rcls2_p1709=NIL;
  rcls2_p1704=NIL;
  rcls2_p1699=NIL;
  rcls2_p2476=NIL;
  rcls2_p2478=NIL;
  rcls2_p2477=NIL;
  rcls2_p2471=NIL;
  rcls2_p2873=NIL;
  rcls2_p335=NIL;
  rcls2_p64=NIL;
  rcls2_p1423=NIL;
  rcls2_p1719=NIL;
  rcls2_p2266=NIL;
  rcls2_p2298=NIL;
  rcls2_p2850=NIL;
  rcls2_p1159=NIL;
  rcls2_p380=NIL;
  rcls2_p2250=NIL;
  rcls2_p2272=NIL;
  rcls2_p2271=NIL;
  rcls2_p2521=NIL;
  rcls2_p2314=NIL;
  rcls2_p2245=NIL;
  rcls2_p1155=NIL;
  double_or_symbol_result=((rcls2_v6510=(rcls2_v6514-rcls2_v6530)),(rcls2_v2934=((fabs(rcls2_v6510)<rcls2_v6508)?(fabs(rcls2_f6505())<rcls2_v6508):NIL)),(((rcls2_v2934?NIL:(rcls2_f2245()?(rcls2_f1794()?(rcls2_f2850()?(rcls2_f2849()?(rcls2_f2843()?rcls2_f1719():(rcls2_f2508()?(rcls2_f2498()?(rcls2_f2471()?(rcls2_f2436()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1709():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1708()?rcls2_f2435():rcls2_f1991()):rcls2_f1704()):rcls2_f1699()):(rcls2_f2027()?rcls2_f1704():NIL)):(rcls2_f2054()?rcls2_f1699():NIL))):(rcls2_f1976()?rcls2_f1709():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1692()?rcls2_f2435():rcls2_f1879()):rcls2_f1688()):rcls2_f1683()):(rcls2_f1916()?rcls2_f1688():NIL)):(rcls2_f1943()?rcls2_f1683():NIL)))):NIL):NIL):rcls2_f1649()):rcls2_f1622()):(rcls2_f2471()?rcls2_f1649():NIL)):(rcls2_f2498()?rcls2_f1622():NIL))):(rcls2_f2420()?rcls2_f1719():(rcls2_f2401()?(rcls2_f2387()?(rcls2_f2360()?(rcls2_f2324()?(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f1606():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_f1605()?rcls2_f2323():rcls2_f1991()):rcls2_f1601()):rcls2_f1596()):(rcls2_f2027()?rcls2_f1601():NIL)):(rcls2_f2054()?rcls2_f1596():NIL))):(rcls2_f1976()?rcls2_f1606():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_f1589()?rcls2_f2323():rcls2_f1879()):rcls2_f1585()):rcls2_f1580()):(rcls2_f1916()?rcls2_f1585():NIL)):(rcls2_f1943()?rcls2_f1580():NIL)))):NIL):NIL):rcls2_f1546()):rcls2_f1519()):(rcls2_f2360()?rcls2_f1546():NIL)):(rcls2_f2387()?rcls2_f1519():NIL)))):NIL):rcls2_f2314()):rcls2_f1802()))?((rcls2_v1155=rcls2_f1155()),(rcls2_v1155?rcls2_v1155:(fabs(((rcls2_v2934?rcls2_f2532():(rcls2_f2245()?(rcls2_f1794()?rcls2_f1159():rcls2_f2250()):rcls2_f1799()))-(0.0)))<rcls2_v6508))):NIL)?((rcls2_v782=rcls2_f782()),(((rcls2_v782?(rcls2_f420()?(rcls2_f836()?(rcls2_f429()?(rcls2_f477()?T:(rcls2_f439()?NIL:rcls2_f419())):NIL):(rcls2_f794()?NIL:(rcls2_f429()?(rcls2_f477()?(rcls2_f415()?NIL:T):NIL):NIL))):rcls2_f836()):rcls2_f428())?((rcls2_v393=rcls2_f393()),(rcls2_v393?rcls2_v393:(fabs(((rcls2_v782?(rcls2_f420()?rcls2_f396():rcls2_f787()):rcls2_f425())-(0.0)))<rcls2_v6508))):NIL)?coerce_double_to_double_or_symbol((rcls2_v2934?rcls2_f2304():(rcls2_f2245()?(rcls2_f1794()?(rcls2_v782?(rcls2_f420()?((rcls2_v1159=rcls2_f1159()),(rcls2_v396=rcls2_f396()),((rcls2_v1159<rcls2_v396)?rcls2_v1159:rcls2_v396)):(rcls2_f836()?((rcls2_v1159=rcls2_f1159()),(rcls2_v809=rcls2_f809()),((rcls2_v1159<rcls2_v809)?rcls2_v1159:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f380()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v1159=rcls2_f1159()),(rcls2_v454=rcls2_f454()),((rcls2_v1159<rcls2_v454)?rcls2_v1159:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f380())):rcls2_f2304())):(rcls2_f2850()?(rcls2_f2849()?(rcls2_f2843()?rcls2_f335():(rcls2_f2508()?(rcls2_f2498()?(rcls2_f2471()?(rcls2_f2436()?(rcls2_v782?(rcls2_f420()?((rcls2_v2293=rcls2_f2293()),(rcls2_v396=rcls2_f396()),((rcls2_v2293<rcls2_v396)?rcls2_v2293:rcls2_v396)):(rcls2_f836()?((rcls2_v2293=rcls2_f2293()),(rcls2_v809=rcls2_f809()),((rcls2_v2293<rcls2_v809)?rcls2_v2293:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f329()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2293=rcls2_f2293()),(rcls2_v454=rcls2_f454()),((rcls2_v2293<rcls2_v454)?rcls2_v2293:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f329())):rcls2_f2304())):rcls2_f304()):rcls2_f286()):(rcls2_f2471()?rcls2_f304():rcls2_f2304())):(rcls2_f2498()?rcls2_f286():rcls2_f2304()))):(rcls2_f2420()?rcls2_f335():(rcls2_f2401()?(rcls2_f2387()?(rcls2_f2360()?(rcls2_f2324()?(rcls2_v782?(rcls2_f420()?((rcls2_v2281=rcls2_f2281()),(rcls2_v396=rcls2_f396()),((rcls2_v2281<rcls2_v396)?rcls2_v2281:rcls2_v396)):(rcls2_f836()?((rcls2_v2281=rcls2_f2281()),(rcls2_v809=rcls2_f809()),((rcls2_v2281<rcls2_v809)?rcls2_v2281:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f274()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v2281=rcls2_f2281()),(rcls2_v454=rcls2_f454()),((rcls2_v2281<rcls2_v454)?rcls2_v2281:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f274())):rcls2_f2304())):rcls2_f249()):rcls2_f231()):(rcls2_f2360()?rcls2_f249():rcls2_f2304())):(rcls2_f2387()?rcls2_f231():rcls2_f2304())))):rcls2_f2304())):(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f186():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?(rcls2_v782?(rcls2_f420()?((rcls2_v1851=rcls2_f1851()),(rcls2_v396=rcls2_f396()),((rcls2_v1851<rcls2_v396)?rcls2_v1851:rcls2_v396)):(rcls2_f836()?((rcls2_v1851=rcls2_f1851()),(rcls2_v809=rcls2_f809()),((rcls2_v1851<rcls2_v809)?rcls2_v1851:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f180()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v1851=rcls2_f1851()),(rcls2_v454=rcls2_f454()),((rcls2_v1851<rcls2_v454)?rcls2_v1851:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f180())):rcls2_f2304())):rcls2_f155()):rcls2_f137()):(rcls2_f2027()?rcls2_f155():rcls2_f2304())):(rcls2_f2054()?rcls2_f137():rcls2_f2304()))):(rcls2_f1976()?rcls2_f186():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?(rcls2_v782?(rcls2_f420()?((rcls2_v1839=rcls2_f1839()),(rcls2_v396=rcls2_f396()),((rcls2_v1839<rcls2_v396)?rcls2_v1839:rcls2_v396)):(rcls2_f836()?((rcls2_v1839=rcls2_f1839()),(rcls2_v809=rcls2_f809()),((rcls2_v1839<rcls2_v809)?rcls2_v1839:rcls2_v809)):(rcls2_f794()?rcls2_f2304():rcls2_f125()))):(rcls2_f429()?(rcls2_f477()?((rcls2_v1839=rcls2_f1839()),(rcls2_v454=rcls2_f454()),((rcls2_v1839<rcls2_v454)?rcls2_v1839:rcls2_v454)):(rcls2_f439()?rcls2_f2304():rcls2_f125())):rcls2_f2304())):rcls2_f100()):rcls2_f82()):(rcls2_f1916()?rcls2_f100():rcls2_f2304())):(rcls2_f1943()?rcls2_f82():rcls2_f2304())))):rcls2_f2304()):rcls2_f2304())))):(rcls2_v2934?coerce_symbol_to_double_or_symbol(NIL):(rcls2_f2245()?(rcls2_f1794()?coerce_double_to_double_or_symbol(rcls2_f1159()):(rcls2_f2850()?(rcls2_f2849()?(rcls2_f2843()?rcls2_f64():(rcls2_f2508()?(rcls2_f2498()?(rcls2_f2471()?(rcls2_f2436()?coerce_double_to_double_or_symbol(rcls2_f2293()):rcls2_f63()):rcls2_f60()):(rcls2_f2471()?rcls2_f63():coerce_symbol_to_double_or_symbol(NIL))):(rcls2_f2498()?rcls2_f60():coerce_symbol_to_double_or_symbol(NIL)))):(rcls2_f2420()?rcls2_f64():(rcls2_f2401()?(rcls2_f2387()?(rcls2_f2360()?(rcls2_f2324()?coerce_double_to_double_or_symbol(rcls2_f2281()):rcls2_f53()):rcls2_f50()):(rcls2_f2360()?rcls2_f53():coerce_symbol_to_double_or_symbol(NIL))):(rcls2_f2387()?rcls2_f50():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))):(rcls2_f1803()?(rcls2_f2169()?(rcls2_f2168()?(rcls2_f2162()?rcls2_f34():(rcls2_f2064()?(rcls2_f2054()?(rcls2_f2027()?(rcls2_f1992()?coerce_double_to_double_or_symbol(rcls2_f1851()):rcls2_f33()):rcls2_f30()):(rcls2_f2027()?rcls2_f33():coerce_symbol_to_double_or_symbol(NIL))):(rcls2_f2054()?rcls2_f30():coerce_symbol_to_double_or_symbol(NIL)))):(rcls2_f1976()?rcls2_f34():(rcls2_f1957()?(rcls2_f1943()?(rcls2_f1916()?(rcls2_f1880()?coerce_double_to_double_or_symbol(rcls2_f1839()):rcls2_f23()):rcls2_f20()):(rcls2_f1916()?rcls2_f23():coerce_symbol_to_double_or_symbol(NIL))):(rcls2_f1943()?rcls2_f20():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))))):(rcls2_f782()?(rcls2_f420()?coerce_double_to_double_or_symbol(rcls2_f396()):(rcls2_f836()?coerce_double_to_double_or_symbol(rcls2_f809()):coerce_symbol_to_double_or_symbol((rcls2_f794()?NIL:rcls2_f792())))):(rcls2_f429()?(rcls2_f477()?coerce_double_to_double_or_symbol(rcls2_f454()):coerce_symbol_to_double_or_symbol((rcls2_f439()?NIL:rcls2_f792()))):coerce_symbol_to_double_or_symbol(NIL))))); return;}
