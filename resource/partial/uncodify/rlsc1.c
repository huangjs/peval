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
double rlsc1_v6281;
double rlsc1_v6279;
double rlsc1_v6277;
double rlsc1_v6275;
double rlsc1_v6273;
double rlsc1_v6271;
double rlsc1_v6269;
double rlsc1_v6267;
double rlsc1_v6265;
double rlsc1_v6263;
double rlsc1_v6259;
double rlsc1_v6261;
int rlsc1_p3535;
double rlsc1_m3535;
int rlsc1_p3656;
double rlsc1_m3656;
int rlsc1_p3653;
double rlsc1_m3653;
int rlsc1_p744;
int rlsc1_m744;
double rlsc1_v3656;
double rlsc1_v3653;
int rlsc1_p3644;
double rlsc1_m3644;
int rlsc1_p779;
double rlsc1_m779;
int rlsc1_p3936;
double rlsc1_m3936;
int rlsc1_p1076;
double rlsc1_m1076;
int rlsc1_p4069;
double rlsc1_m4069;
int rlsc1_p4066;
double rlsc1_m4066;
int rlsc1_p1091;
int rlsc1_m1091;
double rlsc1_v4069;
double rlsc1_v4066;
int rlsc1_p4053;
double rlsc1_m4053;
int rlsc1_p1615;
double rlsc1_m1615;
int rlsc1_p1102;
double rlsc1_m1102;
int rlsc1_p2165;
double rlsc1_m2165;
int rlsc1_p2393;
double rlsc1_m2393;
int rlsc1_p2397;
double rlsc1_m2397;
int rlsc1_p2651;
double rlsc1_m2651;
int rlsc1_p2647;
double rlsc1_m2647;
int rlsc1_p2461;
double rlsc1_m2461;
int rlsc1_p6063;
double rlsc1_m6063;
int rlsc1_p6061;
double rlsc1_m6061;
int rlsc1_p6054;
double rlsc1_m6054;
int rlsc1_p6052;
double rlsc1_m6052;
int rlsc1_p6213;
int rlsc1_m6213;
int rlsc1_p6218;
double rlsc1_m6218;
int rlsc1_p6216;
int rlsc1_m6216;
int rlsc1_p5625;
double rlsc1_m5625;
int rlsc1_p5624;
double rlsc1_m5624;
double rlsc1_v5624;
double rlsc1_v5625;
int rlsc1_p4055;
double rlsc1_m4055;
int rlsc1_p4054;
int rlsc1_m4054;
int rlsc1_p4017;
double rlsc1_m4017;
int rlsc1_p4005;
double rlsc1_m4005;
int rlsc1_p4004;
double rlsc1_m4004;
int rlsc1_p984;
double rlsc1_m984;
int rlsc1_p5623;
double rlsc1_m5623;
int rlsc1_p2759;
double rlsc1_m2759;
int rlsc1_p2776;
double rlsc1_m2776;
int rlsc1_p2625;
double rlsc1_m2625;
int rlsc1_p2624;
int rlsc1_m2624;
int rlsc1_p2603;
double rlsc1_m2603;
double rlsc1_v2625;
int rlsc1_p2611;
double rlsc1_m2611;
int rlsc1_p2621;
double rlsc1_m2621;
int rlsc1_p6252;
double rlsc1_m6252;
int rlsc1_p6250;
double rlsc1_m6250;
double rlsc1_v6252;
double rlsc1_v6250;
int rlsc1_p6247;
double rlsc1_m6247;
double rlsc1_v6247;
int rlsc1_p6194;
double rlsc1_m6194;
int rlsc1_p6245;
double rlsc1_m6245;
int rlsc1_p6210;
double rlsc1_m6210;
int rlsc1_p2622;
double rlsc1_m2622;
int rlsc1_p2619;
double rlsc1_m2619;
int rlsc1_p2520;
double rlsc1_m2520;
int rlsc1_p2513;
int rlsc1_m2513;
int rlsc1_p2519;
double rlsc1_m2519;
int rlsc1_p2583;
int rlsc1_m2583;
int rlsc1_p2581;
double rlsc1_m2581;
int rlsc1_p2602;
double rlsc1_m2602;
int rlsc1_p2601;
double rlsc1_m2601;
int rlsc1_p2571;
double rlsc1_m2571;
int rlsc1_p2569;
double rlsc1_m2569;
int rlsc1_p2610;
double rlsc1_m2610;
int rlsc1_p2579;
double rlsc1_m2579;
int rlsc1_p2577;
double rlsc1_m2577;
int rlsc1_p2557;
double rlsc1_m2557;
int rlsc1_p2574;
int rlsc1_m2574;
int rlsc1_p2563;
double rlsc1_m2563;
int rlsc1_p2555;
double rlsc1_m2555;
double rlsc1_v2557;
double rlsc1_v2555;
int rlsc1_p2545;
int rlsc1_m2545;
int rlsc1_p2559;
int rlsc1_m2559;
int rlsc1_p2558;
int rlsc1_m2558;
int rlsc1_p2608;
double rlsc1_m2608;
int rlsc1_p2597;
double rlsc1_m2597;
int rlsc1_p2591;
double rlsc1_m2591;
double rlsc1_v2597;
double rlsc1_v2591;
int rlsc1_p2584;
int rlsc1_m2584;
int rlsc1_p2457;
double rlsc1_m2457;
int rlsc1_p2443;
double rlsc1_m2443;
int rlsc1_p2524;
int rlsc1_m2524;
int rlsc1_p2541;
int rlsc1_m2541;
double rlsc1_v2619;
int rlsc1_p2615;
double rlsc1_m2615;
int rlsc1_p2535;
double rlsc1_m2535;
double rlsc1_v2535;
int rlsc1_p2497;
double rlsc1_m2497;
int rlsc1_p2618;
double rlsc1_m2618;
int rlsc1_p2429;
double rlsc1_m2429;
int rlsc1_p2407;
int rlsc1_m2407;
int rlsc1_p2617;
double rlsc1_m2617;
int rlsc1_p2538;
double rlsc1_m2538;
int rlsc1_p2496;
double rlsc1_m2496;
double rlsc1_v2617;
int rlsc1_p2616;
double rlsc1_m2616;
double rlsc1_v2538;
int rlsc1_p2531;
double rlsc1_m2531;
int rlsc1_p2494;
double rlsc1_m2494;
int rlsc1_p2492;
double rlsc1_m2492;
int rlsc1_p2491;
double rlsc1_m2491;
int rlsc1_p2489;
double rlsc1_m2489;
double rlsc1_v2489;
int rlsc1_p2480;
int rlsc1_m2480;
int rlsc1_p2478;
double rlsc1_m2478;
int rlsc1_p2477;
double rlsc1_m2477;
int rlsc1_p2475;
double rlsc1_m2475;
double rlsc1_v2475;
int rlsc1_p2466;
int rlsc1_m2466;
int rlsc1_p2530;
int rlsc1_m2530;
int rlsc1_p2613;
double rlsc1_m2613;
int rlsc1_p2523;
double rlsc1_m2523;
int rlsc1_p2509;
double rlsc1_m2509;
double rlsc1_v2509;
int rlsc1_p2501;
int rlsc1_m2501;
int rlsc1_p2522;
double rlsc1_m2522;
double rlsc1_v2522;
int rlsc1_p2511;
int rlsc1_m2511;
int rlsc1_p2612;
int rlsc1_m2612;
int rlsc1_p2528;
int rlsc1_m2528;
int rlsc1_p2463;
int rlsc1_m2463;
int rlsc1_p2450;
double rlsc1_m2450;
int rlsc1_p2425;
double rlsc1_m2425;
int rlsc1_p2436;
double rlsc1_m2436;
int rlsc1_p2424;
double rlsc1_m2424;
int rlsc1_p2420;
double rlsc1_m2420;
double rlsc1_v2420;
int rlsc1_p2412;
double rlsc1_m2412;
int rlsc1_v2528;
double rlsc1_v2412;
int rlsc1_p2400;
int rlsc1_m2400;
int rlsc1_p6244;
double rlsc1_m6244;
int rlsc1_p2104;
double rlsc1_m2104;
int rlsc1_p2095;
double rlsc1_m2095;
int rlsc1_p2093;
double rlsc1_m2093;
int rlsc1_p2094;
double rlsc1_m2094;
double rlsc1_v2094;
double rlsc1_v2093;
int rlsc1_p1986;
double rlsc1_m1986;
double rlsc1_v2094;
double rlsc1_v2093;
int rlsc1_p1983;
double rlsc1_m1983;
int rlsc1_p2090;
int rlsc1_m2090;
int rlsc1_p2102;
double rlsc1_m2102;
int rlsc1_p2101;
double rlsc1_m2101;
int rlsc1_p2100;
double rlsc1_m2100;
double rlsc1_v2101;
double rlsc1_v2100;
int rlsc1_p1979;
double rlsc1_m1979;
double rlsc1_v2101;
double rlsc1_v2100;
int rlsc1_p1976;
double rlsc1_m1976;
int rlsc1_p2099;
double rlsc1_m2099;
int rlsc1_p2097;
int rlsc1_m2097;
int rlsc1_p2088;
double rlsc1_m2088;
int rlsc1_p2029;
int rlsc1_m2029;
int rlsc1_p2051;
double rlsc1_m2051;
int rlsc1_p2071;
double rlsc1_m2071;
double rlsc1_v2088;
int rlsc1_p2087;
double rlsc1_m2087;
int rlsc1_p2084;
double rlsc1_m2084;
int rlsc1_p2073;
double rlsc1_m2073;
int rlsc1_p2083;
double rlsc1_m2083;
int rlsc1_p2022;
int rlsc1_m2022;
int rlsc1_p2020;
double rlsc1_m2020;
int rlsc1_p1934;
double rlsc1_m1934;
int rlsc1_p1914;
double rlsc1_m1914;
int rlsc1_p1927;
int rlsc1_m1927;
int rlsc1_p1933;
double rlsc1_m1933;
double rlsc1_v2083;
int rlsc1_p2026;
double rlsc1_m2026;
int rlsc1_p1842;
double rlsc1_m1842;
double rlsc1_v1842;
int rlsc1_p1835;
double rlsc1_m1835;
int rlsc1_p2041;
double rlsc1_m2041;
int rlsc1_p2050;
double rlsc1_m2050;
int rlsc1_p2028;
double rlsc1_m2028;
int rlsc1_p1844;
double rlsc1_m1844;
int rlsc1_p1834;
double rlsc1_m1834;
double rlsc1_v2028;
int rlsc1_p2027;
double rlsc1_m2027;
int rlsc1_p2048;
double rlsc1_m2048;
int rlsc1_p2036;
int rlsc1_m2036;
int rlsc1_p2070;
double rlsc1_m2070;
int rlsc1_p2069;
double rlsc1_m2069;
int rlsc1_p2010;
double rlsc1_m2010;
int rlsc1_p2008;
double rlsc1_m2008;
int rlsc1_p2082;
double rlsc1_m2082;
int rlsc1_p2018;
double rlsc1_m2018;
int rlsc1_p2002;
double rlsc1_m2002;
int rlsc1_p2016;
double rlsc1_m2016;
int rlsc1_p1996;
double rlsc1_m1996;
int rlsc1_p1994;
double rlsc1_m1994;
int rlsc1_p2013;
int rlsc1_m2013;
int rlsc1_p1997;
int rlsc1_m1997;
double rlsc1_v1996;
double rlsc1_v1994;
int rlsc1_p1972;
int rlsc1_m1972;
int rlsc1_v2013;
int rlsc1_p1965;
double rlsc1_m1965;
int rlsc1_p1964;
double rlsc1_m1964;
double rlsc1_v1964;
int rlsc1_p1952;
int rlsc1_m1952;
int rlsc1_v1952;
int rlsc1_p1951;
int rlsc1_m1951;
int rlsc1_p1196;
double rlsc1_m1196;
int rlsc1_p1722;
double rlsc1_m1722;
int rlsc1_p1948;
double rlsc1_m1948;
int rlsc1_p1950;
double rlsc1_m1950;
int rlsc1_p1949;
int rlsc1_m1949;
int rlsc1_v1949;
int rlsc1_p1943;
int rlsc1_m1943;
int rlsc1_p1942;
int rlsc1_m1942;
int rlsc1_p1728;
double rlsc1_m1728;
int rlsc1_p1730;
double rlsc1_m1730;
int rlsc1_p1729;
int rlsc1_m1729;
int rlsc1_v1729;
int rlsc1_p1723;
int rlsc1_m1723;
int rlsc1_p2080;
double rlsc1_m2080;
int rlsc1_p2065;
double rlsc1_m2065;
int rlsc1_p2059;
double rlsc1_m2059;
int rlsc1_p2792;
double rlsc1_m2792;
int rlsc1_p2783;
double rlsc1_m2783;
int rlsc1_p2781;
double rlsc1_m2781;
int rlsc1_p2782;
double rlsc1_m2782;
double rlsc1_v2782;
double rlsc1_v2781;
int rlsc1_p2667;
double rlsc1_m2667;
double rlsc1_v2782;
double rlsc1_v2781;
int rlsc1_p2664;
double rlsc1_m2664;
int rlsc1_p2778;
int rlsc1_m2778;
int rlsc1_p2790;
double rlsc1_m2790;
int rlsc1_p2789;
double rlsc1_m2789;
int rlsc1_p2788;
double rlsc1_m2788;
double rlsc1_v2789;
double rlsc1_v2788;
int rlsc1_p2660;
double rlsc1_m2660;
double rlsc1_v2789;
double rlsc1_v2788;
int rlsc1_p2657;
double rlsc1_m2657;
int rlsc1_p2787;
double rlsc1_m2787;
int rlsc1_p2785;
int rlsc1_m2785;
int rlsc1_p2772;
double rlsc1_m2772;
int rlsc1_p2710;
int rlsc1_m2710;
int rlsc1_p2733;
double rlsc1_m2733;
int rlsc1_p2753;
double rlsc1_m2753;
double rlsc1_v2772;
int rlsc1_p2771;
double rlsc1_m2771;
int rlsc1_p2768;
double rlsc1_m2768;
int rlsc1_p2755;
double rlsc1_m2755;
int rlsc1_p2767;
double rlsc1_m2767;
int rlsc1_p2703;
int rlsc1_m2703;
int rlsc1_p2701;
double rlsc1_m2701;
int rlsc1_p2378;
double rlsc1_m2378;
int rlsc1_p2358;
double rlsc1_m2358;
int rlsc1_p2371;
int rlsc1_m2371;
int rlsc1_p2377;
double rlsc1_m2377;
double rlsc1_v2767;
int rlsc1_p2707;
double rlsc1_m2707;
int rlsc1_p2286;
double rlsc1_m2286;
double rlsc1_v2286;
int rlsc1_p2279;
double rlsc1_m2279;
int rlsc1_p2723;
double rlsc1_m2723;
int rlsc1_p2732;
double rlsc1_m2732;
int rlsc1_p2709;
double rlsc1_m2709;
int rlsc1_p2288;
double rlsc1_m2288;
int rlsc1_p2278;
double rlsc1_m2278;
double rlsc1_v2709;
int rlsc1_p2708;
double rlsc1_m2708;
int rlsc1_p2730;
double rlsc1_m2730;
int rlsc1_p2718;
int rlsc1_m2718;
int rlsc1_p2752;
double rlsc1_m2752;
int rlsc1_p2751;
double rlsc1_m2751;
int rlsc1_p2691;
double rlsc1_m2691;
int rlsc1_p2689;
double rlsc1_m2689;
int rlsc1_p2766;
double rlsc1_m2766;
int rlsc1_p2699;
double rlsc1_m2699;
int rlsc1_p2683;
double rlsc1_m2683;
int rlsc1_p2697;
double rlsc1_m2697;
int rlsc1_p2677;
double rlsc1_m2677;
int rlsc1_p2675;
double rlsc1_m2675;
int rlsc1_p2694;
int rlsc1_m2694;
int rlsc1_p2678;
int rlsc1_m2678;
double rlsc1_v2677;
double rlsc1_v2675;
int rlsc1_p2653;
int rlsc1_m2653;
int rlsc1_v2694;
int rlsc1_p2642;
double rlsc1_m2642;
int rlsc1_p2641;
double rlsc1_m2641;
double rlsc1_v2641;
int rlsc1_p2627;
int rlsc1_m2627;
int rlsc1_v2627;
int rlsc1_p2399;
int rlsc1_m2399;
int rlsc1_p1226;
double rlsc1_m1226;
int rlsc1_p2164;
double rlsc1_m2164;
int rlsc1_p2392;
double rlsc1_m2392;
int rlsc1_p2396;
double rlsc1_m2396;
int rlsc1_p2395;
int rlsc1_m2395;
int rlsc1_v2395;
int rlsc1_p2387;
int rlsc1_m2387;
int rlsc1_p2172;
double rlsc1_m2172;
int rlsc1_p2174;
double rlsc1_m2174;
int rlsc1_p2173;
int rlsc1_m2173;
int rlsc1_p2386;
int rlsc1_m2386;
int rlsc1_v2173;
int rlsc1_p2167;
int rlsc1_m2167;
int rlsc1_p2764;
double rlsc1_m2764;
int rlsc1_p2747;
double rlsc1_m2747;
int rlsc1_p2741;
double rlsc1_m2741;
int rlsc1_p6256;
double rlsc1_m6256;
int rlsc1_v2795;
double rlsc1_v6256;
int rlsc1_p6220;
double rlsc1_m6220;
int rlsc1_p5878;
double rlsc1_m5878;
int rlsc1_p5876;
double rlsc1_m5876;
double rlsc1_v5876;
int rlsc1_p5875;
double rlsc1_m5875;
double rlsc1_v3644;
int rlsc1_p3641;
double rlsc1_m3641;
double rlsc1_v3641;
int rlsc1_p3609;
double rlsc1_m3609;
int rlsc1_p642;
double rlsc1_m642;
int rlsc1_p632;
double rlsc1_m632;
int rlsc1_p638;
double rlsc1_m638;
double rlsc1_v642;
int rlsc1_p640;
double rlsc1_m640;
int rlsc1_p639;
int rlsc1_m639;
int rlsc1_p637;
double rlsc1_m637;
int rlsc1_p631;
double rlsc1_m631;
int rlsc1_p540;
double rlsc1_m540;
int rlsc1_p512;
int rlsc1_m512;
int rlsc1_p630;
double rlsc1_m630;
int rlsc1_p629;
int rlsc1_m629;
int rlsc1_p636;
double rlsc1_m636;
int rlsc1_p538;
double rlsc1_m538;
int rlsc1_p513;
int rlsc1_m513;
int rlsc1_p510;
double rlsc1_m510;
int rlsc1_p505;
double rlsc1_m505;
int rlsc1_p498;
double rlsc1_m498;
int rlsc1_p504;
double rlsc1_m504;
int rlsc1_p497;
double rlsc1_m497;
int rlsc1_p480;
int rlsc1_m480;
int rlsc1_p536;
double rlsc1_m536;
int rlsc1_p493;
double rlsc1_m493;
double rlsc1_v493;
int rlsc1_p485;
double rlsc1_m485;
int rlsc1_p534;
double rlsc1_m534;
int rlsc1_p533;
double rlsc1_m533;
double rlsc1_v533;
int rlsc1_p521;
int rlsc1_m521;
int rlsc1_v521;
double rlsc1_v485;
int rlsc1_p473;
int rlsc1_m473;
int rlsc1_p470;
double rlsc1_m470;
int rlsc1_p472;
double rlsc1_m472;
int rlsc1_p471;
int rlsc1_m471;
int rlsc1_v471;
int rlsc1_p465;
int rlsc1_m465;
int rlsc1_p464;
int rlsc1_m464;
int rlsc1_p461;
double rlsc1_m461;
int rlsc1_p463;
double rlsc1_m463;
int rlsc1_p462;
int rlsc1_m462;
int rlsc1_v462;
int rlsc1_p456;
int rlsc1_m456;
int rlsc1_p634;
double rlsc1_m634;
int rlsc1_p591;
double rlsc1_m591;
int rlsc1_p568;
double rlsc1_m568;
int rlsc1_p589;
double rlsc1_m589;
int rlsc1_p588;
double rlsc1_m588;
double rlsc1_v588;
int rlsc1_p576;
int rlsc1_m576;
int rlsc1_p633;
int rlsc1_m633;
int rlsc1_p627;
double rlsc1_m627;
int rlsc1_p622;
double rlsc1_m622;
int rlsc1_p615;
double rlsc1_m615;
int rlsc1_p621;
double rlsc1_m621;
double rlsc1_v568;
int rlsc1_p560;
double rlsc1_m560;
int rlsc1_p607;
double rlsc1_m607;
int rlsc1_p614;
double rlsc1_m614;
int rlsc1_p611;
int rlsc1_m611;
int rlsc1_p602;
int rlsc1_m602;
int rlsc1_p601;
int rlsc1_m601;
int rlsc1_v576;
double rlsc1_v560;
int rlsc1_p550;
int rlsc1_m550;
int rlsc1_p455;
int rlsc1_m455;
double rlsc1_v589;
double rlsc1_v534;
int rlsc1_p430;
double rlsc1_m430;
int rlsc1_p547;
double rlsc1_m547;
int rlsc1_p549;
double rlsc1_m549;
int rlsc1_p548;
int rlsc1_m548;
int rlsc1_v548;
int rlsc1_p542;
int rlsc1_m542;
double rlsc1_v607;
int rlsc1_p598;
int rlsc1_m598;
int rlsc1_p3620;
double rlsc1_m3620;
int rlsc1_p3636;
double rlsc1_m3636;
double rlsc1_v3636;
int rlsc1_p3634;
int rlsc1_m3634;
int rlsc1_p3626;
int rlsc1_m3626;
int rlsc1_p3583;
int rlsc1_m3583;
int rlsc1_v3583;
int rlsc1_p3581;
int rlsc1_m3581;
int rlsc1_p3633;
double rlsc1_m3633;
int rlsc1_p3631;
int rlsc1_m3631;
int rlsc1_v3631;
int rlsc1_p3627;
int rlsc1_m3627;
int rlsc1_v3627;
int rlsc1_p594;
int rlsc1_m594;
int rlsc1_v3626;
int rlsc1_p738;
double rlsc1_m738;
int rlsc1_p733;
double rlsc1_m733;
int rlsc1_p732;
int rlsc1_m732;
int rlsc1_p736;
double rlsc1_m736;
int rlsc1_p696;
double rlsc1_m696;
int rlsc1_p673;
double rlsc1_m673;
int rlsc1_p694;
double rlsc1_m694;
int rlsc1_p693;
double rlsc1_m693;
double rlsc1_v693;
int rlsc1_p681;
int rlsc1_m681;
int rlsc1_p735;
int rlsc1_m735;
int rlsc1_p730;
double rlsc1_m730;
int rlsc1_p725;
double rlsc1_m725;
int rlsc1_p718;
double rlsc1_m718;
int rlsc1_p724;
double rlsc1_m724;
double rlsc1_v673;
int rlsc1_p665;
double rlsc1_m665;
int rlsc1_p710;
double rlsc1_m710;
int rlsc1_p717;
double rlsc1_m717;
int rlsc1_p714;
int rlsc1_m714;
int rlsc1_p705;
int rlsc1_m705;
int rlsc1_p704;
int rlsc1_m704;
int rlsc1_v681;
double rlsc1_v665;
int rlsc1_p655;
int rlsc1_m655;
int rlsc1_p439;
double rlsc1_m439;
int rlsc1_p18;
double_or_symbol rlsc1_m18;
int rlsc1_p652;
double rlsc1_m652;
int rlsc1_p654;
double rlsc1_m654;
int rlsc1_p653;
int rlsc1_m653;
int rlsc1_v653;
int rlsc1_p647;
int rlsc1_m647;
int rlsc1_p646;
int rlsc1_m646;
int rlsc1_p445;
double rlsc1_m445;
int rlsc1_p447;
double rlsc1_m447;
int rlsc1_p446;
int rlsc1_m446;
int rlsc1_v446;
int rlsc1_p440;
int rlsc1_m440;
double rlsc1_v710;
int rlsc1_p701;
int rlsc1_m701;
int rlsc1_p699;
int rlsc1_m699;
double rlsc1_v1102;
double rlsc1_v439;
double rlsc1_v1102;
double rlsc1_v694;
int rlsc1_p59;
double rlsc1_m59;
int rlsc1_p418;
double rlsc1_m418;
int rlsc1_p411;
double rlsc1_m411;
int rlsc1_p435;
double rlsc1_m435;
int rlsc1_p423;
double rlsc1_m423;
int rlsc1_p422;
int rlsc1_m422;
int rlsc1_p643;
int rlsc1_m643;
int rlsc1_p448;
int rlsc1_m448;
int rlsc1_v422;
int rlsc1_p406;
int rlsc1_m406;
int rlsc1_p405;
int rlsc1_m405;
int rlsc1_p402;
double rlsc1_m402;
int rlsc1_p404;
double rlsc1_m404;
int rlsc1_p403;
int rlsc1_m403;
int rlsc1_v403;
int rlsc1_p397;
int rlsc1_m397;
int rlsc1_v647;
int rlsc1_p13;
double_or_symbol rlsc1_m13;
double rlsc1_v4053;
int rlsc1_p4050;
double rlsc1_m4050;
double rlsc1_v4050;
int rlsc1_p4016;
double rlsc1_m4016;
int rlsc1_p983;
double rlsc1_m983;
int rlsc1_p973;
double rlsc1_m973;
int rlsc1_p979;
double rlsc1_m979;
double rlsc1_v983;
int rlsc1_p981;
double rlsc1_m981;
int rlsc1_p980;
int rlsc1_m980;
int rlsc1_p978;
double rlsc1_m978;
int rlsc1_p972;
double rlsc1_m972;
int rlsc1_p881;
double rlsc1_m881;
int rlsc1_p853;
int rlsc1_m853;
int rlsc1_p971;
double rlsc1_m971;
int rlsc1_p970;
int rlsc1_m970;
int rlsc1_p977;
double rlsc1_m977;
int rlsc1_p879;
double rlsc1_m879;
int rlsc1_p854;
int rlsc1_m854;
int rlsc1_p851;
double rlsc1_m851;
int rlsc1_p846;
double rlsc1_m846;
int rlsc1_p839;
double rlsc1_m839;
int rlsc1_p845;
double rlsc1_m845;
int rlsc1_p838;
double rlsc1_m838;
int rlsc1_p821;
int rlsc1_m821;
int rlsc1_p877;
double rlsc1_m877;
int rlsc1_p834;
double rlsc1_m834;
double rlsc1_v834;
int rlsc1_p826;
double rlsc1_m826;
int rlsc1_p875;
double rlsc1_m875;
int rlsc1_p303;
int rlsc1_m303;
int rlsc1_p309;
int rlsc1_m309;
int rlsc1_p304;
int rlsc1_m304;
double rlsc1_v875;
double rlsc1_v694;
int rlsc1_p184;
double rlsc1_m184;
int rlsc1_p874;
double rlsc1_m874;
double rlsc1_v874;
int rlsc1_p862;
int rlsc1_m862;
int rlsc1_v862;
double rlsc1_v826;
int rlsc1_p814;
int rlsc1_m814;
int rlsc1_p811;
double rlsc1_m811;
int rlsc1_p813;
double rlsc1_m813;
int rlsc1_p812;
int rlsc1_m812;
int rlsc1_v812;
int rlsc1_p806;
int rlsc1_m806;
int rlsc1_p805;
int rlsc1_m805;
int rlsc1_p802;
double rlsc1_m802;
int rlsc1_p804;
double rlsc1_m804;
int rlsc1_p803;
int rlsc1_m803;
int rlsc1_v803;
int rlsc1_p797;
int rlsc1_m797;
int rlsc1_p975;
double rlsc1_m975;
int rlsc1_p932;
double rlsc1_m932;
int rlsc1_p909;
double rlsc1_m909;
int rlsc1_p930;
double rlsc1_m930;
int rlsc1_p320;
int rlsc1_m320;
int rlsc1_p326;
int rlsc1_m326;
int rlsc1_p321;
int rlsc1_m321;
double rlsc1_v930;
double rlsc1_v694;
int rlsc1_p209;
double rlsc1_m209;
int rlsc1_p929;
double rlsc1_m929;
double rlsc1_v929;
int rlsc1_p917;
int rlsc1_m917;
int rlsc1_p974;
int rlsc1_m974;
int rlsc1_p968;
double rlsc1_m968;
int rlsc1_p963;
double rlsc1_m963;
int rlsc1_p956;
double rlsc1_m956;
int rlsc1_p962;
double rlsc1_m962;
double rlsc1_v909;
int rlsc1_p901;
double rlsc1_m901;
int rlsc1_p948;
double rlsc1_m948;
int rlsc1_p955;
double rlsc1_m955;
int rlsc1_p952;
int rlsc1_m952;
int rlsc1_p943;
int rlsc1_m943;
int rlsc1_p942;
int rlsc1_m942;
int rlsc1_v917;
double rlsc1_v901;
int rlsc1_p891;
int rlsc1_m891;
double rlsc1_v930;
double rlsc1_v875;
int rlsc1_p769;
double rlsc1_m769;
int rlsc1_p342;
int rlsc1_m342;
int rlsc1_p340;
int rlsc1_m340;
int rlsc1_p336;
int rlsc1_m336;
int rlsc1_p351;
int rlsc1_m351;
int rlsc1_p349;
int rlsc1_m349;
int rlsc1_p230;
double rlsc1_m230;
int rlsc1_p796;
int rlsc1_m796;
int rlsc1_p343;
int rlsc1_m343;
int rlsc1_p888;
double rlsc1_m888;
int rlsc1_p890;
double rlsc1_m890;
int rlsc1_p889;
int rlsc1_m889;
int rlsc1_v889;
int rlsc1_p883;
int rlsc1_m883;
double rlsc1_v948;
int rlsc1_p939;
int rlsc1_m939;
int rlsc1_p4028;
double rlsc1_m4028;
int rlsc1_p4044;
double rlsc1_m4044;
double rlsc1_v4044;
int rlsc1_p4042;
int rlsc1_m4042;
int rlsc1_p4034;
int rlsc1_m4034;
int rlsc1_p3987;
int rlsc1_m3987;
int rlsc1_v3987;
int rlsc1_p3985;
int rlsc1_m3985;
int rlsc1_p4041;
double rlsc1_m4041;
int rlsc1_p4039;
int rlsc1_m4039;
int rlsc1_v4039;
int rlsc1_p4035;
int rlsc1_m4035;
int rlsc1_v4035;
int rlsc1_p935;
int rlsc1_m935;
int rlsc1_v4034;
int rlsc1_p1084;
double rlsc1_m1084;
int rlsc1_p1079;
double rlsc1_m1079;
int rlsc1_p1078;
int rlsc1_m1078;
int rlsc1_p1082;
double rlsc1_m1082;
int rlsc1_p1040;
double rlsc1_m1040;
int rlsc1_p1016;
double rlsc1_m1016;
int rlsc1_p1038;
double rlsc1_m1038;
int rlsc1_p365;
int rlsc1_m365;
int rlsc1_p371;
int rlsc1_m371;
int rlsc1_p366;
int rlsc1_m366;
double rlsc1_v1038;
double rlsc1_v694;
int rlsc1_p257;
double rlsc1_m257;
int rlsc1_p1037;
double rlsc1_m1037;
double rlsc1_v1037;
int rlsc1_p1025;
int rlsc1_m1025;
int rlsc1_p1081;
int rlsc1_m1081;
int rlsc1_p1074;
double rlsc1_m1074;
int rlsc1_p1069;
double rlsc1_m1069;
int rlsc1_p1062;
double rlsc1_m1062;
int rlsc1_p1068;
double rlsc1_m1068;
double rlsc1_v1016;
int rlsc1_p1008;
double rlsc1_m1008;
int rlsc1_p1054;
double rlsc1_m1054;
int rlsc1_p1061;
double rlsc1_m1061;
int rlsc1_p1058;
int rlsc1_m1058;
int rlsc1_p1049;
int rlsc1_m1049;
int rlsc1_p1048;
int rlsc1_m1048;
int rlsc1_v1025;
double rlsc1_v1008;
int rlsc1_p998;
int rlsc1_m998;
int rlsc1_p35;
double_or_symbol rlsc1_m35;
int rlsc1_p778;
double rlsc1_m778;
int rlsc1_p387;
int rlsc1_m387;
int rlsc1_p385;
int rlsc1_m385;
int rlsc1_p381;
int rlsc1_m381;
int rlsc1_p396;
int rlsc1_m396;
int rlsc1_p394;
int rlsc1_m394;
int rlsc1_p388;
int rlsc1_m388;
int rlsc1_p278;
double rlsc1_m278;
int rlsc1_p995;
double rlsc1_m995;
int rlsc1_p997;
double rlsc1_m997;
int rlsc1_p996;
int rlsc1_m996;
int rlsc1_v996;
int rlsc1_p990;
int rlsc1_m990;
int rlsc1_p786;
double rlsc1_m786;
int rlsc1_p788;
double rlsc1_m788;
int rlsc1_p787;
int rlsc1_m787;
int rlsc1_p989;
int rlsc1_m989;
int rlsc1_v787;
int rlsc1_p781;
int rlsc1_m781;
double rlsc1_v1054;
int rlsc1_p1045;
int rlsc1_m1045;
int rlsc1_p1043;
int rlsc1_m1043;
double rlsc1_v1102;
double rlsc1_v778;
double rlsc1_v1102;
double rlsc1_v1038;
int rlsc1_p85;
double rlsc1_m85;
int rlsc1_p352;
int rlsc1_m352;
double rlsc1_v1038;
double rlsc1_v589;
double rlsc1_v1038;
double rlsc1_v534;
int rlsc1_p237;
double rlsc1_m237;
double rlsc1_v930;
double rlsc1_v589;
double rlsc1_v930;
double rlsc1_v534;
double rlsc1_v875;
double rlsc1_v589;
double rlsc1_v875;
double rlsc1_v534;
int rlsc1_p161;
double rlsc1_m161;
int rlsc1_v990;
int rlsc1_p30;
double_or_symbol rlsc1_m30;
int rlsc1_p757;
double rlsc1_m757;
int rlsc1_p750;
double rlsc1_m750;
int rlsc1_p774;
double rlsc1_m774;
int rlsc1_p762;
double rlsc1_m762;
int rlsc1_p761;
int rlsc1_m761;
int rlsc1_p986;
int rlsc1_m986;
int rlsc1_p789;
int rlsc1_m789;
int rlsc1_v761;
int rlsc1_p745;
int rlsc1_m745;
int rlsc1_p158;
int rlsc1_m158;
double rlsc1_v5878;
int rlsc1_p5873;
double rlsc1_m5873;
double rlsc1_v2065;
double rlsc1_v2059;
int rlsc1_p2052;
int rlsc1_m2052;
double rlsc1_v2164;
double rlsc1_v1722;
double rlsc1_v2164;
double rlsc1_v1965;
int rlsc1_p1605;
double rlsc1_m1605;
double rlsc1_v2642;
double rlsc1_v1722;
double rlsc1_v2642;
double rlsc1_v1965;
int rlsc1_p1560;
double rlsc1_m1560;
int rlsc1_v1943;
int rlsc1_p1190;
double rlsc1_m1190;
int rlsc1_p1129;
int rlsc1_m1129;
int rlsc1_p1685;
double rlsc1_m1685;
int rlsc1_p1717;
double rlsc1_m1717;
int rlsc1_p1938;
int rlsc1_m1938;
int rlsc1_v2052;
double rlsc1_v2041;
int rlsc1_p2030;
int rlsc1_m2030;
int rlsc1_p1632;
int rlsc1_m1632;
double rlsc1_v5873;
int rlsc1_p5840;
double rlsc1_m5840;
double rlsc1_v1844;
int rlsc1_p1838;
double rlsc1_m1838;
int rlsc1_p1837;
int rlsc1_m1837;
int rlsc1_p1832;
double rlsc1_m1832;
int rlsc1_p1816;
double rlsc1_m1816;
int rlsc1_p1815;
double rlsc1_m1815;
int rlsc1_p1813;
double rlsc1_m1813;
double rlsc1_v1813;
int rlsc1_p1804;
int rlsc1_m1804;
int rlsc1_p1772;
double rlsc1_m1772;
int rlsc1_p1771;
double rlsc1_m1771;
double rlsc1_v1771;
int rlsc1_p1759;
int rlsc1_m1759;
int rlsc1_v1759;
int rlsc1_p1758;
int rlsc1_m1758;
int rlsc1_p1755;
double rlsc1_m1755;
int rlsc1_p1757;
double rlsc1_m1757;
int rlsc1_p1756;
int rlsc1_m1756;
int rlsc1_v1756;
int rlsc1_p1750;
int rlsc1_m1750;
double rlsc1_v2164;
double rlsc1_v1772;
int rlsc1_p1579;
double rlsc1_m1579;
double rlsc1_v2642;
double rlsc1_v1772;
int rlsc1_p1534;
double rlsc1_m1534;
int rlsc1_p1176;
double rlsc1_m1176;
int rlsc1_p1115;
int rlsc1_m1115;
int rlsc1_p1746;
double rlsc1_m1746;
int rlsc1_p1748;
double rlsc1_m1748;
int rlsc1_p1747;
int rlsc1_m1747;
int rlsc1_p1749;
int rlsc1_m1749;
int rlsc1_p1735;
int rlsc1_m1735;
int rlsc1_v1747;
int rlsc1_p1741;
int rlsc1_m1741;
int rlsc1_p1830;
double rlsc1_m1830;
int rlsc1_p1829;
double rlsc1_m1829;
int rlsc1_p1827;
double rlsc1_m1827;
double rlsc1_v1827;
int rlsc1_p1818;
int rlsc1_m1818;
int rlsc1_p1799;
double rlsc1_m1799;
int rlsc1_p1798;
double rlsc1_m1798;
double rlsc1_v1798;
int rlsc1_p1786;
int rlsc1_m1786;
int rlsc1_v1786;
int rlsc1_p1785;
int rlsc1_m1785;
double rlsc1_v2164;
double rlsc1_v1799;
int rlsc1_p1584;
double rlsc1_m1584;
double rlsc1_v2642;
double rlsc1_v1799;
int rlsc1_p1539;
double rlsc1_m1539;
int rlsc1_p1179;
double rlsc1_m1179;
int rlsc1_p1118;
int rlsc1_m1118;
double rlsc1_v1799;
double rlsc1_v1772;
int rlsc1_p1700;
double rlsc1_m1700;
int rlsc1_p1782;
double rlsc1_m1782;
int rlsc1_p1784;
double rlsc1_m1784;
int rlsc1_p1783;
int rlsc1_m1783;
int rlsc1_v1783;
int rlsc1_p1777;
int rlsc1_m1777;
int rlsc1_p1737;
int rlsc1_m1737;
int rlsc1_p2024;
double rlsc1_m2024;
int rlsc1_p2023;
int rlsc1_m2023;
int rlsc1_p1937;
double rlsc1_m1937;
int rlsc1_p1923;
double rlsc1_m1923;
double rlsc1_v1923;
int rlsc1_p1915;
int rlsc1_m1915;
int rlsc1_p1884;
double rlsc1_m1884;
int rlsc1_p1883;
double rlsc1_m1883;
double rlsc1_v1883;
int rlsc1_p1871;
int rlsc1_m1871;
int rlsc1_v1871;
int rlsc1_p1870;
int rlsc1_m1870;
int rlsc1_p1867;
double rlsc1_m1867;
int rlsc1_p1869;
double rlsc1_m1869;
int rlsc1_p1868;
int rlsc1_m1868;
int rlsc1_v1868;
int rlsc1_p1862;
int rlsc1_m1862;
double rlsc1_v2164;
double rlsc1_v1884;
int rlsc1_p1595;
double rlsc1_m1595;
double rlsc1_v2642;
double rlsc1_v1884;
int rlsc1_p1550;
double rlsc1_m1550;
int rlsc1_p1186;
double rlsc1_m1186;
int rlsc1_p1125;
int rlsc1_m1125;
int rlsc1_p1858;
double rlsc1_m1858;
int rlsc1_p1860;
double rlsc1_m1860;
int rlsc1_p1859;
int rlsc1_m1859;
int rlsc1_p1861;
int rlsc1_m1861;
int rlsc1_p1847;
int rlsc1_m1847;
int rlsc1_v1859;
int rlsc1_p1853;
int rlsc1_m1853;
int rlsc1_p1936;
double rlsc1_m1936;
double rlsc1_v1936;
int rlsc1_p1925;
int rlsc1_m1925;
int rlsc1_p1910;
double rlsc1_m1910;
int rlsc1_p1909;
double rlsc1_m1909;
double rlsc1_v1909;
int rlsc1_p1897;
int rlsc1_m1897;
int rlsc1_v1897;
int rlsc1_p1896;
int rlsc1_m1896;
double rlsc1_v2164;
double rlsc1_v1910;
int rlsc1_p1600;
double rlsc1_m1600;
double rlsc1_v2642;
double rlsc1_v1910;
int rlsc1_p1555;
double rlsc1_m1555;
int rlsc1_p1189;
double rlsc1_m1189;
int rlsc1_p1128;
int rlsc1_m1128;
double rlsc1_v1910;
double rlsc1_v1884;
int rlsc1_p1712;
double rlsc1_m1712;
int rlsc1_p1893;
double rlsc1_m1893;
int rlsc1_p1895;
double rlsc1_m1895;
int rlsc1_p1894;
int rlsc1_m1894;
int rlsc1_v1894;
int rlsc1_p1888;
int rlsc1_m1888;
int rlsc1_p1669;
double rlsc1_m1669;
int rlsc1_p1691;
double rlsc1_m1691;
int rlsc1_p1690;
int rlsc1_m1690;
int rlsc1_p1849;
int rlsc1_m1849;
int rlsc1_p1731;
int rlsc1_m1731;
int rlsc1_v1690;
int rlsc1_p1664;
int rlsc1_m1664;
int rlsc1_p1661;
int rlsc1_m1661;
int rlsc1_v1664;
int rlsc1_v1661;
int rlsc1_p1655;
int rlsc1_m1655;
double rlsc1_v2288;
int rlsc1_p2282;
double rlsc1_m2282;
int rlsc1_p2281;
int rlsc1_m2281;
int rlsc1_p2276;
double rlsc1_m2276;
int rlsc1_p2260;
double rlsc1_m2260;
int rlsc1_p2259;
double rlsc1_m2259;
int rlsc1_p2257;
double rlsc1_m2257;
double rlsc1_v2257;
int rlsc1_p2248;
int rlsc1_m2248;
int rlsc1_p2216;
double rlsc1_m2216;
double rlsc1_v2216;
double rlsc1_v1799;
int rlsc1_p1251;
double rlsc1_m1251;
double rlsc1_v2216;
double rlsc1_v1772;
int rlsc1_p1246;
double rlsc1_m1246;
double rlsc1_v2216;
double rlsc1_v1722;
double rlsc1_v2216;
double rlsc1_v1965;
int rlsc1_p1272;
double rlsc1_m1272;
double rlsc1_v2216;
double rlsc1_v1910;
int rlsc1_p1267;
double rlsc1_m1267;
double rlsc1_v2216;
double rlsc1_v1884;
int rlsc1_p1262;
double rlsc1_m1262;
int rlsc1_p2215;
double rlsc1_m2215;
double rlsc1_v2215;
int rlsc1_p2203;
int rlsc1_m2203;
int rlsc1_v2203;
int rlsc1_p2202;
int rlsc1_m2202;
int rlsc1_p2199;
double rlsc1_m2199;
int rlsc1_p2201;
double rlsc1_m2201;
int rlsc1_p2200;
int rlsc1_m2200;
int rlsc1_v2200;
int rlsc1_p2194;
int rlsc1_m2194;
double rlsc1_v2216;
double rlsc1_v1712;
double rlsc1_v2216;
double rlsc1_v1700;
int rlsc1_p1235;
double rlsc1_m1235;
int rlsc1_p1206;
double rlsc1_m1206;
int rlsc1_p1144;
int rlsc1_m1144;
int rlsc1_p2190;
double rlsc1_m2190;
int rlsc1_p2192;
double rlsc1_m2192;
int rlsc1_p2191;
int rlsc1_m2191;
int rlsc1_p2193;
int rlsc1_m2193;
int rlsc1_p2179;
int rlsc1_m2179;
int rlsc1_v2191;
int rlsc1_p2185;
int rlsc1_m2185;
int rlsc1_p2274;
double rlsc1_m2274;
int rlsc1_p2273;
double rlsc1_m2273;
int rlsc1_p2271;
double rlsc1_m2271;
double rlsc1_v2271;
int rlsc1_p2262;
int rlsc1_m2262;
int rlsc1_p2243;
double rlsc1_m2243;
double rlsc1_v2243;
double rlsc1_v1799;
int rlsc1_p1298;
double rlsc1_m1298;
double rlsc1_v2243;
double rlsc1_v1772;
int rlsc1_p1293;
double rlsc1_m1293;
double rlsc1_v2243;
double rlsc1_v1722;
double rlsc1_v2243;
double rlsc1_v1965;
int rlsc1_p1319;
double rlsc1_m1319;
double rlsc1_v2243;
double rlsc1_v1910;
int rlsc1_p1314;
double rlsc1_m1314;
double rlsc1_v2243;
double rlsc1_v1884;
int rlsc1_p1309;
double rlsc1_m1309;
int rlsc1_p2242;
double rlsc1_m2242;
double rlsc1_v2242;
int rlsc1_p2230;
int rlsc1_m2230;
int rlsc1_v2230;
int rlsc1_p2229;
int rlsc1_m2229;
double rlsc1_v2243;
double rlsc1_v1712;
double rlsc1_v2243;
double rlsc1_v1700;
int rlsc1_p1283;
double rlsc1_m1283;
int rlsc1_p1209;
double rlsc1_m1209;
int rlsc1_p1147;
int rlsc1_m1147;
double rlsc1_v2243;
double rlsc1_v2216;
int rlsc1_p2142;
double rlsc1_m2142;
double rlsc1_v2142;
double rlsc1_v1799;
int rlsc1_p1343;
double rlsc1_m1343;
double rlsc1_v2142;
double rlsc1_v1772;
int rlsc1_p1338;
double rlsc1_m1338;
double rlsc1_v2142;
double rlsc1_v1722;
double rlsc1_v2142;
double rlsc1_v1965;
int rlsc1_p1364;
double rlsc1_m1364;
double rlsc1_v2142;
double rlsc1_v1910;
int rlsc1_p1359;
double rlsc1_m1359;
double rlsc1_v2142;
double rlsc1_v1884;
int rlsc1_p1354;
double rlsc1_m1354;
int rlsc1_p2226;
double rlsc1_m2226;
int rlsc1_p2228;
double rlsc1_m2228;
int rlsc1_p2227;
int rlsc1_m2227;
int rlsc1_v2227;
int rlsc1_p2221;
int rlsc1_m2221;
int rlsc1_p2181;
int rlsc1_m2181;
int rlsc1_p2705;
double rlsc1_m2705;
int rlsc1_p2704;
int rlsc1_m2704;
int rlsc1_p2381;
double rlsc1_m2381;
int rlsc1_p2367;
double rlsc1_m2367;
double rlsc1_v2367;
int rlsc1_p2359;
int rlsc1_m2359;
int rlsc1_p2328;
double rlsc1_m2328;
double rlsc1_v2328;
double rlsc1_v1799;
int rlsc1_p1396;
double rlsc1_m1396;
double rlsc1_v2328;
double rlsc1_v1772;
int rlsc1_p1391;
double rlsc1_m1391;
double rlsc1_v2328;
double rlsc1_v1722;
double rlsc1_v2328;
double rlsc1_v1965;
int rlsc1_p1417;
double rlsc1_m1417;
double rlsc1_v2328;
double rlsc1_v1910;
int rlsc1_p1412;
double rlsc1_m1412;
double rlsc1_v2328;
double rlsc1_v1884;
int rlsc1_p1407;
double rlsc1_m1407;
int rlsc1_p2327;
double rlsc1_m2327;
double rlsc1_v2327;
int rlsc1_p2315;
int rlsc1_m2315;
int rlsc1_v2315;
int rlsc1_p2314;
int rlsc1_m2314;
int rlsc1_p2311;
double rlsc1_m2311;
int rlsc1_p2313;
double rlsc1_m2313;
int rlsc1_p2312;
int rlsc1_m2312;
int rlsc1_v2312;
int rlsc1_p2306;
int rlsc1_m2306;
double rlsc1_v2328;
double rlsc1_v1712;
double rlsc1_v2328;
double rlsc1_v1700;
int rlsc1_p1380;
double rlsc1_m1380;
int rlsc1_p1216;
double rlsc1_m1216;
int rlsc1_p1154;
int rlsc1_m1154;
int rlsc1_p2302;
double rlsc1_m2302;
int rlsc1_p2304;
double rlsc1_m2304;
int rlsc1_p2303;
int rlsc1_m2303;
int rlsc1_p2305;
int rlsc1_m2305;
int rlsc1_p2291;
int rlsc1_m2291;
int rlsc1_v2303;
int rlsc1_p2297;
int rlsc1_m2297;
int rlsc1_p2380;
double rlsc1_m2380;
double rlsc1_v2380;
int rlsc1_p2369;
int rlsc1_m2369;
int rlsc1_p2354;
double rlsc1_m2354;
double rlsc1_v2354;
double rlsc1_v1799;
int rlsc1_p1443;
double rlsc1_m1443;
double rlsc1_v2354;
double rlsc1_v1772;
int rlsc1_p1438;
double rlsc1_m1438;
double rlsc1_v2354;
double rlsc1_v1722;
double rlsc1_v2354;
double rlsc1_v1965;
int rlsc1_p1464;
double rlsc1_m1464;
double rlsc1_v2354;
double rlsc1_v1910;
int rlsc1_p1459;
double rlsc1_m1459;
double rlsc1_v2354;
double rlsc1_v1884;
int rlsc1_p1454;
double rlsc1_m1454;
int rlsc1_p2353;
double rlsc1_m2353;
double rlsc1_v2353;
int rlsc1_p2341;
int rlsc1_m2341;
int rlsc1_v2341;
int rlsc1_p2340;
int rlsc1_m2340;
double rlsc1_v2354;
double rlsc1_v1712;
double rlsc1_v2354;
double rlsc1_v1700;
int rlsc1_p1428;
double rlsc1_m1428;
int rlsc1_p1219;
double rlsc1_m1219;
int rlsc1_p1157;
int rlsc1_m1157;
double rlsc1_v2354;
double rlsc1_v2328;
int rlsc1_p2154;
double rlsc1_m2154;
double rlsc1_v2154;
double rlsc1_v1799;
int rlsc1_p1488;
double rlsc1_m1488;
double rlsc1_v2154;
double rlsc1_v1772;
int rlsc1_p1483;
double rlsc1_m1483;
double rlsc1_v2154;
double rlsc1_v1722;
double rlsc1_v2154;
double rlsc1_v1965;
int rlsc1_p1509;
double rlsc1_m1509;
double rlsc1_v2154;
double rlsc1_v1910;
int rlsc1_p1504;
double rlsc1_m1504;
double rlsc1_v2154;
double rlsc1_v1884;
int rlsc1_p1499;
double rlsc1_m1499;
int rlsc1_p2337;
double rlsc1_m2337;
int rlsc1_p2339;
double rlsc1_m2339;
int rlsc1_p2338;
int rlsc1_m2338;
int rlsc1_v2338;
int rlsc1_p2332;
int rlsc1_m2332;
int rlsc1_p2293;
int rlsc1_m2293;
double rlsc1_v2747;
double rlsc1_v2741;
int rlsc1_p2734;
int rlsc1_m2734;
double rlsc1_v2164;
double rlsc1_v1712;
double rlsc1_v2164;
double rlsc1_v1700;
double rlsc1_v2642;
double rlsc1_v1712;
double rlsc1_v2642;
double rlsc1_v1700;
int rlsc1_p1519;
double rlsc1_m1519;
int rlsc1_v2387;
int rlsc1_p1220;
double rlsc1_m1220;
int rlsc1_p1158;
int rlsc1_m1158;
int rlsc1_p1650;
int rlsc1_m1650;
int rlsc1_p2127;
double rlsc1_m2127;
int rlsc1_p2159;
double rlsc1_m2159;
int rlsc1_v2734;
double rlsc1_v2723;
int rlsc1_p2711;
int rlsc1_m2711;
int rlsc1_p2132;
int rlsc1_m2132;
int rlsc1_p2382;
int rlsc1_m2382;
int rlsc1_v2711;
int rlsc1_v2132;
int rlsc1_p2106;
int rlsc1_m2106;
int rlsc1_v1617;
double rlsc1_v2154;
double rlsc1_v1712;
double rlsc1_v2154;
double rlsc1_v1700;
double rlsc1_v2142;
double rlsc1_v1712;
double rlsc1_v2142;
double rlsc1_v1700;
int rlsc1_p1164;
double rlsc1_m1164;
double rlsc1_v1164;
double rlsc1_v778;
double rlsc1_v1164;
double rlsc1_v1038;
int rlsc1_p140;
double rlsc1_m140;
double rlsc1_v1164;
double rlsc1_v439;
double rlsc1_v1164;
double rlsc1_v694;
int rlsc1_p114;
double rlsc1_m114;
int rlsc1_p1104;
int rlsc1_m1104;
int rlsc1_p1099;
int rlsc1_m1099;
int rlsc1_v1099;
int rlsc1_v745;
int rlsc1_v158;
double rlsc1_v1164;
double rlsc1_v161;
double rlsc1_v1164;
double rlsc1_v769;
double rlsc1_v1164;
double rlsc1_v930;
double rlsc1_v1164;
double rlsc1_v875;
double rlsc1_v1164;
double rlsc1_v430;
double rlsc1_v1164;
double rlsc1_v589;
double rlsc1_v1164;
double rlsc1_v534;
double rlsc1_v1102;
double rlsc1_v161;
double rlsc1_v1102;
double rlsc1_v769;
double rlsc1_v1102;
double rlsc1_v930;
double rlsc1_v1102;
double rlsc1_v875;
double rlsc1_v1102;
double rlsc1_v430;
double rlsc1_v1102;
double rlsc1_v589;
double rlsc1_v1102;
double rlsc1_v534;
static double rlsc1_f3535(){if (rlsc1_p3535) return rlsc1_m3535; else {rlsc1_p3535=T;return rlsc1_m3535=atan2((rlsc1_v6275-rlsc1_v6263),(rlsc1_v6277-rlsc1_v6265));}}
static double rlsc1_f3656(){if (rlsc1_p3656) return rlsc1_m3656; else {rlsc1_p3656=T;return rlsc1_m3656=(rlsc1_v6265-rlsc1_v6277);}}
static double rlsc1_f3653(){if (rlsc1_p3653) return rlsc1_m3653; else {rlsc1_p3653=T;return rlsc1_m3653=(rlsc1_v6263-rlsc1_v6275);}}
static int rlsc1_f744(){if (rlsc1_p744) return rlsc1_m744; else {rlsc1_p744=T;return rlsc1_m744=((fabs(rlsc1_f3656())<rlsc1_v6259)?(fabs(rlsc1_f3653())<rlsc1_v6259):NIL);}}
static double rlsc1_f3644(){if (rlsc1_p3644) return rlsc1_m3644; else {rlsc1_p3644=T;return rlsc1_m3644=((rlsc1_v3656=rlsc1_f3656()),(rlsc1_v3653=rlsc1_f3653()),(rlsc1_v6265-(rlsc1_v6265+sqrt(((rlsc1_v3656*rlsc1_v3656)+(rlsc1_v3653*rlsc1_v3653))))));}}
static double rlsc1_f779(){if (rlsc1_p779) return rlsc1_m779; else {rlsc1_p779=T;return rlsc1_m779=error("Non-numeric argument to MAX");}}
static double rlsc1_f3936(){if (rlsc1_p3936) return rlsc1_m3936; else {rlsc1_p3936=T;return rlsc1_m3936=atan2((rlsc1_v6279-rlsc1_v6263),(rlsc1_v6281-rlsc1_v6265));}}
static double rlsc1_f1076(){if (rlsc1_p1076) return rlsc1_m1076; else {rlsc1_p1076=T;return rlsc1_m1076=error("Can't form tangent when points are the same");}}
static double rlsc1_f4069(){if (rlsc1_p4069) return rlsc1_m4069; else {rlsc1_p4069=T;return rlsc1_m4069=(rlsc1_v6265-rlsc1_v6281);}}
static double rlsc1_f4066(){if (rlsc1_p4066) return rlsc1_m4066; else {rlsc1_p4066=T;return rlsc1_m4066=(rlsc1_v6263-rlsc1_v6279);}}
static int rlsc1_f1091(){if (rlsc1_p1091) return rlsc1_m1091; else {rlsc1_p1091=T;return rlsc1_m1091=((fabs(rlsc1_f4069())<rlsc1_v6259)?(fabs(rlsc1_f4066())<rlsc1_v6259):NIL);}}
static double rlsc1_f4053(){if (rlsc1_p4053) return rlsc1_m4053; else {rlsc1_p4053=T;return rlsc1_m4053=((rlsc1_v4069=rlsc1_f4069()),(rlsc1_v4066=rlsc1_f4066()),(rlsc1_v6265-(rlsc1_v6265+sqrt(((rlsc1_v4069*rlsc1_v4069)+(rlsc1_v4066*rlsc1_v4066))))));}}
static double rlsc1_f1615(){if (rlsc1_p1615) return rlsc1_m1615; else {rlsc1_p1615=T;return rlsc1_m1615=error("Argument DIRECTION not of type FLOAT");}}
static double rlsc1_f1102(){if (rlsc1_p1102) return rlsc1_m1102; else {rlsc1_p1102=T;return rlsc1_m1102=error("No applicable method for OPPOSITE with argument types ((OR NULL FLOAT))");}}
static double rlsc1_f2165(){if (rlsc1_p2165) return rlsc1_m2165; else {rlsc1_p2165=T;return rlsc1_m2165=error("Non-numeric argument to MIN");}}
static double rlsc1_f2393(){if (rlsc1_p2393) return rlsc1_m2393; else {rlsc1_p2393=T;return rlsc1_m2393=error("Argument X not of type FLOAT");}}
static double rlsc1_f2397(){if (rlsc1_p2397) return rlsc1_m2397; else {rlsc1_p2397=T;return rlsc1_m2397=error("Argument X not of type REAL");}}
static double rlsc1_f2651(){if (rlsc1_p2651) return rlsc1_m2651; else {rlsc1_p2651=T;return rlsc1_m2651=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rlsc1_f2647(){if (rlsc1_p2647) return rlsc1_m2647; else {rlsc1_p2647=T;return rlsc1_m2647=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double rlsc1_f2461(){if (rlsc1_p2461) return rlsc1_m2461; else {rlsc1_p2461=T;return rlsc1_m2461=error("SLOT-VALUE called on non-instance");}}
static double rlsc1_f6063(){if (rlsc1_p6063) return rlsc1_m6063; else {rlsc1_p6063=T;return rlsc1_m6063=(((rlsc1_v6281<rlsc1_v6277)?rlsc1_v6281:rlsc1_v6277)-rlsc1_v6259);}}
static double rlsc1_f6061(){if (rlsc1_p6061) return rlsc1_m6061; else {rlsc1_p6061=T;return rlsc1_m6061=(((rlsc1_v6281>rlsc1_v6277)?rlsc1_v6281:rlsc1_v6277)+rlsc1_v6259);}}
static double rlsc1_f6054(){if (rlsc1_p6054) return rlsc1_m6054; else {rlsc1_p6054=T;return rlsc1_m6054=(((rlsc1_v6279<rlsc1_v6275)?rlsc1_v6279:rlsc1_v6275)-rlsc1_v6259);}}
static double rlsc1_f6052(){if (rlsc1_p6052) return rlsc1_m6052; else {rlsc1_p6052=T;return rlsc1_m6052=(((rlsc1_v6279>rlsc1_v6275)?rlsc1_v6279:rlsc1_v6275)+rlsc1_v6259);}}
static int rlsc1_f6213(){if (rlsc1_p6213) return rlsc1_m6213; else {rlsc1_p6213=T;return rlsc1_m6213=(fabs((rlsc1_v6281-rlsc1_v6277))<rlsc1_v6259);}}
static double rlsc1_f6218(){if (rlsc1_p6218) return rlsc1_m6218; else {rlsc1_p6218=T;return rlsc1_m6218=(rlsc1_v6279-rlsc1_v6275);}}
static int rlsc1_f6216(){if (rlsc1_p6216) return rlsc1_m6216; else {rlsc1_p6216=T;return rlsc1_m6216=(fabs(rlsc1_f6218())<rlsc1_v6259);}}
static double rlsc1_f5625(){if (rlsc1_p5625) return rlsc1_m5625; else {rlsc1_p5625=T;return rlsc1_m5625=(rlsc1_v6271-rlsc1_v6263);}}
static double rlsc1_f5624(){if (rlsc1_p5624) return rlsc1_m5624; else {rlsc1_p5624=T;return rlsc1_m5624=(rlsc1_v6273-rlsc1_v6265);}}
static double rlsc1_f4055(){if (rlsc1_p4055) return rlsc1_m4055; else {rlsc1_p4055=T;return rlsc1_m4055=((rlsc1_v5624=rlsc1_f5624()),(rlsc1_v5625=rlsc1_f5625()),((rlsc1_v5624*rlsc1_v5624)+(rlsc1_v5625*rlsc1_v5625)));}}
static int rlsc1_f4054(){if (rlsc1_p4054) return rlsc1_m4054; else {rlsc1_p4054=T;return rlsc1_m4054=(rlsc1_f4055()==0.0);}}
static double rlsc1_f4017(){if (rlsc1_p4017) return rlsc1_m4017; else {rlsc1_p4017=T;return rlsc1_m4017=sqrt(rlsc1_f4055());}}
static double rlsc1_f4005(){if (rlsc1_p4005) return rlsc1_m4005; else {rlsc1_p4005=T;return rlsc1_m4005=(rlsc1_f5624()/rlsc1_f4017());}}
static double rlsc1_f4004(){if (rlsc1_p4004) return rlsc1_m4004; else {rlsc1_p4004=T;return rlsc1_m4004=(rlsc1_f5625()/rlsc1_f4017());}}
static double rlsc1_f984(){if (rlsc1_p984) return rlsc1_m984; else {rlsc1_p984=T;return rlsc1_m984=((2.0)*rlsc1_f4017());}}
static double rlsc1_f5623(){if (rlsc1_p5623) return rlsc1_m5623; else {rlsc1_p5623=T;return rlsc1_m5623=atan2(rlsc1_f5625(),rlsc1_f5624());}}
static double rlsc1_f2759(){if (rlsc1_p2759) return rlsc1_m2759; else {rlsc1_p2759=T;return rlsc1_m2759=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static double rlsc1_f2776(){if (rlsc1_p2776) return rlsc1_m2776; else {rlsc1_p2776=T;return rlsc1_m2776=error("Can't form a single line when the end points are the same");}}
static double rlsc1_f2625(){if (rlsc1_p2625) return rlsc1_m2625; else {rlsc1_p2625=T;return rlsc1_m2625=(rlsc1_f6216()?(rlsc1_f6213()?rlsc1_f2776():(0.0)):(1.0));}}
static int rlsc1_f2624(){if (rlsc1_p2624) return rlsc1_m2624; else {rlsc1_p2624=T;return rlsc1_m2624=(rlsc1_f2625()==0.0);}}
static double rlsc1_f2603(){if (rlsc1_p2603) return rlsc1_m2603; else {rlsc1_p2603=T;return rlsc1_m2603=(rlsc1_f2625()*rlsc1_v6271);}}
static double rlsc1_f2611(){if (rlsc1_p2611) return rlsc1_m2611; else {rlsc1_p2611=T;return rlsc1_m2611=((rlsc1_v2625=rlsc1_f2625()),(rlsc1_v2625*rlsc1_v2625));}}
static double rlsc1_f2621(){if (rlsc1_p2621) return rlsc1_m2621; else {rlsc1_p2621=T;return rlsc1_m2621=(rlsc1_f2625()*rlsc1_v6273);}}
static double rlsc1_f6252(){if (rlsc1_p6252) return rlsc1_m6252; else {rlsc1_p6252=T;return rlsc1_m6252=(rlsc1_v6273-rlsc1_v6269);}}
static double rlsc1_f6250(){if (rlsc1_p6250) return rlsc1_m6250; else {rlsc1_p6250=T;return rlsc1_m6250=(rlsc1_v6271-rlsc1_v6267);}}
static double rlsc1_f6247(){if (rlsc1_p6247) return rlsc1_m6247; else {rlsc1_p6247=T;return rlsc1_m6247=((rlsc1_v6252=rlsc1_f6252()),(rlsc1_v6250=rlsc1_f6250()),sqrt(((rlsc1_v6252*rlsc1_v6252)+(rlsc1_v6250*rlsc1_v6250))));}}
static double rlsc1_f6194(){if (rlsc1_p6194) return rlsc1_m6194; else {rlsc1_p6194=T;return rlsc1_m6194=((rlsc1_v6247=rlsc1_f6247()),(rlsc1_v6247*rlsc1_v6247));}}
static double rlsc1_f6245(){if (rlsc1_p6245) return rlsc1_m6245; else {rlsc1_p6245=T;return rlsc1_m6245=(rlsc1_v6277-rlsc1_v6281);}}
static double rlsc1_f6210(){if (rlsc1_p6210) return rlsc1_m6210; else {rlsc1_p6210=T;return rlsc1_m6210=(rlsc1_f6245()/rlsc1_f6218());}}
static double rlsc1_f2622(){if (rlsc1_p2622) return rlsc1_m2622; else {rlsc1_p2622=T;return rlsc1_m2622=(rlsc1_f6216()?(rlsc1_f6213()?rlsc1_f2776():rlsc1_v6279):(rlsc1_v6281+(rlsc1_f6210()*rlsc1_v6279)));}}
static double rlsc1_f2619(){if (rlsc1_p2619) return rlsc1_m2619; else {rlsc1_p2619=T;return rlsc1_m2619=(rlsc1_f6216()?(rlsc1_f6213()?rlsc1_f2776():(1.0)):rlsc1_f6210());}}
static double rlsc1_f2520(){if (rlsc1_p2520) return rlsc1_m2520; else {rlsc1_p2520=T;return rlsc1_m2520=(rlsc1_f2622()/rlsc1_f2619());}}
static int rlsc1_f2513(){if (rlsc1_p2513) return rlsc1_m2513; else {rlsc1_p2513=T;return rlsc1_m2513=((rlsc1_f6054()<=rlsc1_f2520())&&(rlsc1_f2520()<=rlsc1_f6052()));}}
static double rlsc1_f2519(){if (rlsc1_p2519) return rlsc1_m2519; else {rlsc1_p2519=T;return rlsc1_m2519=(rlsc1_f2619()*rlsc1_f2520());}}
static int rlsc1_f2583(){if (rlsc1_p2583) return rlsc1_m2583; else {rlsc1_p2583=T;return rlsc1_m2583=(rlsc1_f2619()>0.0);}}
static double rlsc1_f2581(){if (rlsc1_p2581) return rlsc1_m2581; else {rlsc1_p2581=T;return rlsc1_m2581=(rlsc1_f2583()?(-rlsc1_f2625()):rlsc1_f2625());}}
static double rlsc1_f2602(){if (rlsc1_p2602) return rlsc1_m2602; else {rlsc1_p2602=T;return rlsc1_m2602=(rlsc1_f2619()*rlsc1_v6273);}}
static double rlsc1_f2601(){if (rlsc1_p2601) return rlsc1_m2601; else {rlsc1_p2601=T;return rlsc1_m2601=(rlsc1_f2603()-rlsc1_f2602());}}
static double rlsc1_f2571(){if (rlsc1_p2571) return rlsc1_m2571; else {rlsc1_p2571=T;return rlsc1_m2571=(rlsc1_f2583()?(rlsc1_f2602()-rlsc1_f2603()):rlsc1_f2601());}}
static double rlsc1_f2569(){if (rlsc1_p2569) return rlsc1_m2569; else {rlsc1_p2569=T;return rlsc1_m2569=((rlsc1_f2622()*rlsc1_f2581())-(rlsc1_f2619()*rlsc1_f2571()));}}
static double rlsc1_f2610(){if (rlsc1_p2610) return rlsc1_m2610; else {rlsc1_p2610=T;return rlsc1_m2610=(-rlsc1_f2619());}}
static double rlsc1_f2579(){if (rlsc1_p2579) return rlsc1_m2579; else {rlsc1_p2579=T;return rlsc1_m2579=(rlsc1_f2583()?rlsc1_f2619():rlsc1_f2610());}}
static double rlsc1_f2577(){if (rlsc1_p2577) return rlsc1_m2577; else {rlsc1_p2577=T;return rlsc1_m2577=((rlsc1_f2625()*rlsc1_f2581())-(rlsc1_f2619()*rlsc1_f2579()));}}
static double rlsc1_f2557(){if (rlsc1_p2557) return rlsc1_m2557; else {rlsc1_p2557=T;return rlsc1_m2557=(rlsc1_f2569()/rlsc1_f2577());}}
static int rlsc1_f2574(){if (rlsc1_p2574) return rlsc1_m2574; else {rlsc1_p2574=T;return rlsc1_m2574=(fabs((rlsc1_f2577()-(0.0)))<rlsc1_v6259);}}
static double rlsc1_f2563(){if (rlsc1_p2563) return rlsc1_m2563; else {rlsc1_p2563=T;return rlsc1_m2563=((rlsc1_f2625()*rlsc1_f2571())-(rlsc1_f2622()*rlsc1_f2579()));}}
static double rlsc1_f2555(){if (rlsc1_p2555) return rlsc1_m2555; else {rlsc1_p2555=T;return rlsc1_m2555=(rlsc1_f2563()/rlsc1_f2577());}}
static int rlsc1_f2545(){if (rlsc1_p2545) return rlsc1_m2545; else {rlsc1_p2545=T;return rlsc1_m2545=(rlsc1_f2574()?NIL:((rlsc1_v2557=rlsc1_f2557()),(rlsc1_v2555=rlsc1_f2555()),((fabs((((rlsc1_f2625()*rlsc1_v2557)+(rlsc1_f2619()*rlsc1_v2555))-rlsc1_f2622()))<rlsc1_v6259)?(((rlsc1_f6063()<=rlsc1_v2557)&&(rlsc1_v2557<=rlsc1_f6061()))?((rlsc1_f6054()<=rlsc1_v2555)&&(rlsc1_v2555<=rlsc1_f6052())):NIL):NIL)));}}
static int rlsc1_f2559(){if (rlsc1_p2559) return rlsc1_m2559; else {rlsc1_p2559=T;return rlsc1_m2559=((fabs((rlsc1_f2569()-(0.0)))<rlsc1_v6259)?(fabs((rlsc1_f2563()-(0.0)))<rlsc1_v6259):NIL);}}
static int rlsc1_f2558(){if (rlsc1_p2558) return rlsc1_m2558; else {rlsc1_p2558=T;return rlsc1_m2558=(rlsc1_f2574()?rlsc1_f2559():T);}}
static double rlsc1_f2608(){if (rlsc1_p2608) return rlsc1_m2608; else {rlsc1_p2608=T;return rlsc1_m2608=(rlsc1_f2611()-(rlsc1_f2619()*rlsc1_f2610()));}}
static double rlsc1_f2597(){if (rlsc1_p2597) return rlsc1_m2597; else {rlsc1_p2597=T;return rlsc1_m2597=((((rlsc1_f2622()*rlsc1_f2625())-(rlsc1_f2619()*rlsc1_f2601()))/rlsc1_f2608())-rlsc1_v6273);}}
static double rlsc1_f2591(){if (rlsc1_p2591) return rlsc1_m2591; else {rlsc1_p2591=T;return rlsc1_m2591=((((rlsc1_f2625()*rlsc1_f2601())-(rlsc1_f2622()*rlsc1_f2610()))/rlsc1_f2608())-rlsc1_v6271);}}
static int rlsc1_f2584(){if (rlsc1_p2584) return rlsc1_m2584; else {rlsc1_p2584=T;return rlsc1_m2584=(fabs((((fabs((rlsc1_f2608()-(0.0)))<rlsc1_v6259)?rlsc1_f2759():((rlsc1_v2597=rlsc1_f2597()),(rlsc1_v2591=rlsc1_f2591()),sqrt(((rlsc1_v2597*rlsc1_v2597)+(rlsc1_v2591*rlsc1_v2591)))))-rlsc1_f6247()))<rlsc1_v6259);}}
static double rlsc1_f2457(){if (rlsc1_p2457) return rlsc1_m2457; else {rlsc1_p2457=T;return rlsc1_m2457=(rlsc1_f2584()?(rlsc1_f2558()?(rlsc1_f2545()?(rlsc1_f2574()?rlsc1_f2461():rlsc1_f2557()):rlsc1_f2461()):rlsc1_f2461()):rlsc1_f2461());}}
static double rlsc1_f2443(){if (rlsc1_p2443) return rlsc1_m2443; else {rlsc1_p2443=T;return rlsc1_m2443=(rlsc1_f2584()?(rlsc1_f2558()?(rlsc1_f2545()?(rlsc1_f2574()?rlsc1_f2461():rlsc1_f2555()):rlsc1_f2461()):rlsc1_f2461()):rlsc1_f2461());}}
static int rlsc1_f2524(){if (rlsc1_p2524) return rlsc1_m2524; else {rlsc1_p2524=T;return rlsc1_m2524=(rlsc1_f2584()?(rlsc1_f2558()?(rlsc1_f2545()?(rlsc1_f2574()?NIL:T):NIL):NIL):NIL);}}
static int rlsc1_f2541(){if (rlsc1_p2541) return rlsc1_m2541; else {rlsc1_p2541=T;return rlsc1_m2541=(rlsc1_f2584()?(rlsc1_f2558()?(rlsc1_f2545()?(rlsc1_f2574()?rlsc1_f2559():NIL):NIL):NIL):NIL);}}
static double rlsc1_f2615(){if (rlsc1_p2615) return rlsc1_m2615; else {rlsc1_p2615=T;return rlsc1_m2615=((rlsc1_v2619=rlsc1_f2619()),(rlsc1_v2619*rlsc1_v2619));}}
static double rlsc1_f2535(){if (rlsc1_p2535) return rlsc1_m2535; else {rlsc1_p2535=T;return rlsc1_m2535=(rlsc1_f2611()+rlsc1_f2615());}}
static double rlsc1_f2497(){if (rlsc1_p2497) return rlsc1_m2497; else {rlsc1_p2497=T;return rlsc1_m2497=((rlsc1_v2535=rlsc1_f2535()),(rlsc1_v2535+rlsc1_v2535));}}
static double rlsc1_f2618(){if (rlsc1_p2618) return rlsc1_m2618; else {rlsc1_p2618=T;return rlsc1_m2618=(rlsc1_f2619()*rlsc1_v6271);}}
static double rlsc1_f2429(){if (rlsc1_p2429) return rlsc1_m2429; else {rlsc1_p2429=T;return rlsc1_m2429=((rlsc1_f2621()+rlsc1_f2618())-rlsc1_f2622());}}
static int rlsc1_f2407(){if (rlsc1_p2407) return rlsc1_m2407; else {rlsc1_p2407=T;return rlsc1_m2407=(rlsc1_f2429()>(0.0));}}
static double rlsc1_f2617(){if (rlsc1_p2617) return rlsc1_m2617; else {rlsc1_p2617=T;return rlsc1_m2617=(rlsc1_f2622()-rlsc1_f2621()-rlsc1_f2618());}}
static double rlsc1_f2538(){if (rlsc1_p2538) return rlsc1_m2538; else {rlsc1_p2538=T;return rlsc1_m2538=((-2.0)*rlsc1_f2619()*rlsc1_f2617());}}
static double rlsc1_f2496(){if (rlsc1_p2496) return rlsc1_m2496; else {rlsc1_p2496=T;return rlsc1_m2496=((-rlsc1_f2538())/rlsc1_f2497());}}
static double rlsc1_f2616(){if (rlsc1_p2616) return rlsc1_m2616; else {rlsc1_p2616=T;return rlsc1_m2616=((rlsc1_v2617=rlsc1_f2617()),(rlsc1_v2617*rlsc1_v2617));}}
static double rlsc1_f2531(){if (rlsc1_p2531) return rlsc1_m2531; else {rlsc1_p2531=T;return rlsc1_m2531=((rlsc1_v2538=rlsc1_f2538()),((rlsc1_v2538*rlsc1_v2538)-((4.0)*rlsc1_f2535()*(rlsc1_f2616()-(rlsc1_f2611()*rlsc1_f6194())))));}}
static double rlsc1_f2494(){if (rlsc1_p2494) return rlsc1_m2494; else {rlsc1_p2494=T;return rlsc1_m2494=(sqrt(rlsc1_f2531())/rlsc1_f2497());}}
static double rlsc1_f2492(){if (rlsc1_p2492) return rlsc1_m2492; else {rlsc1_p2492=T;return rlsc1_m2492=((rlsc1_f2496()+rlsc1_f2494())+rlsc1_v6271);}}
static double rlsc1_f2491(){if (rlsc1_p2491) return rlsc1_m2491; else {rlsc1_p2491=T;return rlsc1_m2491=(rlsc1_f2619()*rlsc1_f2492());}}
static double rlsc1_f2489(){if (rlsc1_p2489) return rlsc1_m2489; else {rlsc1_p2489=T;return rlsc1_m2489=((rlsc1_f2622()-rlsc1_f2491())/rlsc1_f2625());}}
static int rlsc1_f2480(){if (rlsc1_p2480) return rlsc1_m2480; else {rlsc1_p2480=T;return rlsc1_m2480=((rlsc1_v2489=rlsc1_f2489()),((fabs((((rlsc1_f2625()*rlsc1_v2489)+rlsc1_f2491())-rlsc1_f2622()))<rlsc1_v6259)?(((rlsc1_f6063()<=rlsc1_v2489)&&(rlsc1_v2489<=rlsc1_f6061()))?((rlsc1_f6054()<=rlsc1_f2492())&&(rlsc1_f2492()<=rlsc1_f6052())):NIL):NIL));}}
static double rlsc1_f2478(){if (rlsc1_p2478) return rlsc1_m2478; else {rlsc1_p2478=T;return rlsc1_m2478=((rlsc1_f2496()-rlsc1_f2494())+rlsc1_v6271);}}
static double rlsc1_f2477(){if (rlsc1_p2477) return rlsc1_m2477; else {rlsc1_p2477=T;return rlsc1_m2477=(rlsc1_f2619()*rlsc1_f2478());}}
static double rlsc1_f2475(){if (rlsc1_p2475) return rlsc1_m2475; else {rlsc1_p2475=T;return rlsc1_m2475=((rlsc1_f2622()-rlsc1_f2477())/rlsc1_f2625());}}
static int rlsc1_f2466(){if (rlsc1_p2466) return rlsc1_m2466; else {rlsc1_p2466=T;return rlsc1_m2466=((rlsc1_v2475=rlsc1_f2475()),((fabs((((rlsc1_f2625()*rlsc1_v2475)+rlsc1_f2477())-rlsc1_f2622()))<rlsc1_v6259)?(((rlsc1_f6063()<=rlsc1_v2475)&&(rlsc1_v2475<=rlsc1_f6061()))?((rlsc1_f6054()<=rlsc1_f2478())&&(rlsc1_f2478()<=rlsc1_f6052())):NIL):NIL));}}
static int rlsc1_f2530(){if (rlsc1_p2530) return rlsc1_m2530; else {rlsc1_p2530=T;return rlsc1_m2530=(rlsc1_f2531()<0.0);}}
static double rlsc1_f2613(){if (rlsc1_p2613) return rlsc1_m2613; else {rlsc1_p2613=T;return rlsc1_m2613=(rlsc1_f6194()-(rlsc1_f2616()/rlsc1_f2615()));}}
static double rlsc1_f2523(){if (rlsc1_p2523) return rlsc1_m2523; else {rlsc1_p2523=T;return rlsc1_m2523=sqrt(rlsc1_f2613());}}
static double rlsc1_f2509(){if (rlsc1_p2509) return rlsc1_m2509; else {rlsc1_p2509=T;return rlsc1_m2509=((-rlsc1_f2523())+rlsc1_v6273);}}
static int rlsc1_f2501(){if (rlsc1_p2501) return rlsc1_m2501; else {rlsc1_p2501=T;return rlsc1_m2501=((rlsc1_v2509=rlsc1_f2509()),((fabs((((rlsc1_f2625()*rlsc1_v2509)+rlsc1_f2519())-rlsc1_f2622()))<rlsc1_v6259)?(((rlsc1_f6063()<=rlsc1_v2509)&&(rlsc1_v2509<=rlsc1_f6061()))?rlsc1_f2513():NIL):NIL));}}
static double rlsc1_f2522(){if (rlsc1_p2522) return rlsc1_m2522; else {rlsc1_p2522=T;return rlsc1_m2522=(rlsc1_f2523()+rlsc1_v6273);}}
static int rlsc1_f2511(){if (rlsc1_p2511) return rlsc1_m2511; else {rlsc1_p2511=T;return rlsc1_m2511=((rlsc1_v2522=rlsc1_f2522()),((fabs((((rlsc1_f2625()*rlsc1_v2522)+rlsc1_f2519())-rlsc1_f2622()))<rlsc1_v6259)?(((rlsc1_f6063()<=rlsc1_v2522)&&(rlsc1_v2522<=rlsc1_f6061()))?rlsc1_f2513():NIL):NIL));}}
static int rlsc1_f2612(){if (rlsc1_p2612) return rlsc1_m2612; else {rlsc1_p2612=T;return rlsc1_m2612=(rlsc1_f2613()<0.0);}}
static int rlsc1_f2528(){if (rlsc1_p2528) return rlsc1_m2528; else {rlsc1_p2528=T;return rlsc1_m2528=(rlsc1_f2624()?(rlsc1_f2612()?rlsc1_f2541():NIL):(rlsc1_f2530()?rlsc1_f2541():NIL));}}
static int rlsc1_f2463(){if (rlsc1_p2463) return rlsc1_m2463; else {rlsc1_p2463=T;return rlsc1_m2463=(rlsc1_f2624()?(rlsc1_f2612()?rlsc1_f2524():(rlsc1_f2511()?T:rlsc1_f2501())):(rlsc1_f2530()?rlsc1_f2524():(rlsc1_f2480()?T:rlsc1_f2466())));}}
static double rlsc1_f2450(){if (rlsc1_p2450) return rlsc1_m2450; else {rlsc1_p2450=T;return rlsc1_m2450=(rlsc1_f2624()?(rlsc1_f2612()?rlsc1_f2457():(rlsc1_f2511()?rlsc1_f2522():(rlsc1_f2501()?rlsc1_f2509():rlsc1_f2461()))):(rlsc1_f2530()?rlsc1_f2457():(rlsc1_f2480()?rlsc1_f2489():(rlsc1_f2466()?rlsc1_f2475():rlsc1_f2461()))));}}
static double rlsc1_f2425(){if (rlsc1_p2425) return rlsc1_m2425; else {rlsc1_p2425=T;return rlsc1_m2425=(rlsc1_f2463()?rlsc1_f2450():rlsc1_f2647());}}
static double rlsc1_f2436(){if (rlsc1_p2436) return rlsc1_m2436; else {rlsc1_p2436=T;return rlsc1_m2436=(rlsc1_f2624()?(rlsc1_f2612()?rlsc1_f2443():(rlsc1_f2511()?rlsc1_f2520():(rlsc1_f2501()?rlsc1_f2520():rlsc1_f2461()))):(rlsc1_f2530()?rlsc1_f2443():(rlsc1_f2480()?rlsc1_f2492():(rlsc1_f2466()?rlsc1_f2478():rlsc1_f2461()))));}}
static double rlsc1_f2424(){if (rlsc1_p2424) return rlsc1_m2424; else {rlsc1_p2424=T;return rlsc1_m2424=(rlsc1_f2463()?rlsc1_f2436():rlsc1_f2651());}}
static double rlsc1_f2420(){if (rlsc1_p2420) return rlsc1_m2420; else {rlsc1_p2420=T;return rlsc1_m2420=(atan2((rlsc1_f2424()-rlsc1_v6263),(rlsc1_f2425()-rlsc1_v6265))+(1.5707963267948966));}}
static double rlsc1_f2412(){if (rlsc1_p2412) return rlsc1_m2412; else {rlsc1_p2412=T;return rlsc1_m2412=((rlsc1_v2420=rlsc1_f2420()),(((rlsc1_f2625()*(rlsc1_f2425()+cos(rlsc1_v2420)))+(rlsc1_f2619()*(rlsc1_f2424()+sin(rlsc1_v2420))))-rlsc1_f2622()));}}
static int rlsc1_f2400(){if (rlsc1_p2400) return rlsc1_m2400; else {rlsc1_p2400=T;return rlsc1_m2400=((rlsc1_v2528=rlsc1_f2528()),(rlsc1_v2528?rlsc1_v2528:((rlsc1_f2463()?((fabs((rlsc1_v6265-rlsc1_f2450()))<rlsc1_v6259)?(fabs((rlsc1_v6263-rlsc1_f2436()))<rlsc1_v6259):NIL):NIL)?T:(((fabs((rlsc1_f2429()-(0.0)))<rlsc1_v6259)?T:((rlsc1_v2412=rlsc1_f2412()),((fabs((rlsc1_v2412-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v2412>(0.0))?rlsc1_f2407():(rlsc1_f2407()?NIL:T)))))?NIL:T))));}}
static double rlsc1_f6244(){if (rlsc1_p6244) return rlsc1_m6244; else {rlsc1_p6244=T;return rlsc1_m6244=atan2((rlsc1_v6275-rlsc1_v6279),rlsc1_f6245());}}
static double rlsc1_f2104(){if (rlsc1_p2104) return rlsc1_m2104; else {rlsc1_p2104=T;return rlsc1_m2104=normalize_rotation((rlsc1_f6244()+(1.5707963267948966)));}}
static double rlsc1_f2095(){if (rlsc1_p2095) return rlsc1_m2095; else {rlsc1_p2095=T;return rlsc1_m2095=(rlsc1_f6247()*cos(rlsc1_f2104()));}}
static double rlsc1_f2093(){if (rlsc1_p2093) return rlsc1_m2093; else {rlsc1_p2093=T;return rlsc1_m2093=(rlsc1_v6277+rlsc1_f2095());}}
static double rlsc1_f2094(){if (rlsc1_p2094) return rlsc1_m2094; else {rlsc1_p2094=T;return rlsc1_m2094=(rlsc1_v6281+rlsc1_f2095());}}
static double rlsc1_f1986(){if (rlsc1_p1986) return rlsc1_m1986; else {rlsc1_p1986=T;return rlsc1_m1986=((rlsc1_v2094=rlsc1_f2094()),(rlsc1_v2093=rlsc1_f2093()),(((rlsc1_v2094<rlsc1_v2093)?rlsc1_v2094:rlsc1_v2093)-rlsc1_v6259));}}
static double rlsc1_f1983(){if (rlsc1_p1983) return rlsc1_m1983; else {rlsc1_p1983=T;return rlsc1_m1983=((rlsc1_v2094=rlsc1_f2094()),(rlsc1_v2093=rlsc1_f2093()),(((rlsc1_v2094>rlsc1_v2093)?rlsc1_v2094:rlsc1_v2093)+rlsc1_v6259));}}
static int rlsc1_f2090(){if (rlsc1_p2090) return rlsc1_m2090; else {rlsc1_p2090=T;return rlsc1_m2090=(fabs((rlsc1_f2094()-rlsc1_f2093()))<rlsc1_v6259);}}
static double rlsc1_f2102(){if (rlsc1_p2102) return rlsc1_m2102; else {rlsc1_p2102=T;return rlsc1_m2102=(rlsc1_f6247()*sin(rlsc1_f2104()));}}
static double rlsc1_f2101(){if (rlsc1_p2101) return rlsc1_m2101; else {rlsc1_p2101=T;return rlsc1_m2101=(rlsc1_v6279+rlsc1_f2102());}}
static double rlsc1_f2100(){if (rlsc1_p2100) return rlsc1_m2100; else {rlsc1_p2100=T;return rlsc1_m2100=(rlsc1_v6275+rlsc1_f2102());}}
static double rlsc1_f1979(){if (rlsc1_p1979) return rlsc1_m1979; else {rlsc1_p1979=T;return rlsc1_m1979=((rlsc1_v2101=rlsc1_f2101()),(rlsc1_v2100=rlsc1_f2100()),(((rlsc1_v2101<rlsc1_v2100)?rlsc1_v2101:rlsc1_v2100)-rlsc1_v6259));}}
static double rlsc1_f1976(){if (rlsc1_p1976) return rlsc1_m1976; else {rlsc1_p1976=T;return rlsc1_m1976=((rlsc1_v2101=rlsc1_f2101()),(rlsc1_v2100=rlsc1_f2100()),(((rlsc1_v2101>rlsc1_v2100)?rlsc1_v2101:rlsc1_v2100)+rlsc1_v6259));}}
static double rlsc1_f2099(){if (rlsc1_p2099) return rlsc1_m2099; else {rlsc1_p2099=T;return rlsc1_m2099=(rlsc1_f2101()-rlsc1_f2100());}}
static int rlsc1_f2097(){if (rlsc1_p2097) return rlsc1_m2097; else {rlsc1_p2097=T;return rlsc1_m2097=(fabs(rlsc1_f2099())<rlsc1_v6259);}}
static double rlsc1_f2088(){if (rlsc1_p2088) return rlsc1_m2088; else {rlsc1_p2088=T;return rlsc1_m2088=(rlsc1_f2097()?(rlsc1_f2090()?rlsc1_f2776():(0.0)):(1.0));}}
static int rlsc1_f2029(){if (rlsc1_p2029) return rlsc1_m2029; else {rlsc1_p2029=T;return rlsc1_m2029=(rlsc1_f2088()==0.0);}}
static double rlsc1_f2051(){if (rlsc1_p2051) return rlsc1_m2051; else {rlsc1_p2051=T;return rlsc1_m2051=(rlsc1_f2088()*rlsc1_v6265);}}
static double rlsc1_f2071(){if (rlsc1_p2071) return rlsc1_m2071; else {rlsc1_p2071=T;return rlsc1_m2071=(rlsc1_f2088()*rlsc1_v6263);}}
static double rlsc1_f2087(){if (rlsc1_p2087) return rlsc1_m2087; else {rlsc1_p2087=T;return rlsc1_m2087=((rlsc1_v2088=rlsc1_f2088()),(rlsc1_v2088*rlsc1_v2088));}}
static double rlsc1_f2084(){if (rlsc1_p2084) return rlsc1_m2084; else {rlsc1_p2084=T;return rlsc1_m2084=((rlsc1_f2093()-rlsc1_f2094())/rlsc1_f2099());}}
static double rlsc1_f2073(){if (rlsc1_p2073) return rlsc1_m2073; else {rlsc1_p2073=T;return rlsc1_m2073=(rlsc1_f2097()?(rlsc1_f2090()?rlsc1_f2776():rlsc1_f2101()):(rlsc1_f2094()+(rlsc1_f2084()*rlsc1_f2101())));}}
static double rlsc1_f2083(){if (rlsc1_p2083) return rlsc1_m2083; else {rlsc1_p2083=T;return rlsc1_m2083=(rlsc1_f2097()?(rlsc1_f2090()?rlsc1_f2776():(1.0)):rlsc1_f2084());}}
static int rlsc1_f2022(){if (rlsc1_p2022) return rlsc1_m2022; else {rlsc1_p2022=T;return rlsc1_m2022=(rlsc1_f2083()>0.0);}}
static double rlsc1_f2020(){if (rlsc1_p2020) return rlsc1_m2020; else {rlsc1_p2020=T;return rlsc1_m2020=(rlsc1_f2022()?(-rlsc1_f2088()):rlsc1_f2088());}}
static double rlsc1_f1934(){if (rlsc1_p1934) return rlsc1_m1934; else {rlsc1_p1934=T;return rlsc1_m1934=(rlsc1_f2073()/rlsc1_f2083());}}
static double rlsc1_f1914(){if (rlsc1_p1914) return rlsc1_m1914; else {rlsc1_p1914=T;return rlsc1_m1914=(rlsc1_f1934()-rlsc1_v6263);}}
static int rlsc1_f1927(){if (rlsc1_p1927) return rlsc1_m1927; else {rlsc1_p1927=T;return rlsc1_m1927=((rlsc1_f1979()<=rlsc1_f1934())&&(rlsc1_f1934()<=rlsc1_f1976()));}}
static double rlsc1_f1933(){if (rlsc1_p1933) return rlsc1_m1933; else {rlsc1_p1933=T;return rlsc1_m1933=(rlsc1_f2083()*rlsc1_f1934());}}
static double rlsc1_f2026(){if (rlsc1_p2026) return rlsc1_m2026; else {rlsc1_p2026=T;return rlsc1_m2026=((rlsc1_v2083=rlsc1_f2083()),(rlsc1_v2083*rlsc1_v2083));}}
static double rlsc1_f1842(){if (rlsc1_p1842) return rlsc1_m1842; else {rlsc1_p1842=T;return rlsc1_m1842=(rlsc1_f2087()+rlsc1_f2026());}}
static double rlsc1_f1835(){if (rlsc1_p1835) return rlsc1_m1835; else {rlsc1_p1835=T;return rlsc1_m1835=((rlsc1_v1842=rlsc1_f1842()),(rlsc1_v1842+rlsc1_v1842));}}
static double rlsc1_f2041(){if (rlsc1_p2041) return rlsc1_m2041; else {rlsc1_p2041=T;return rlsc1_m2041=(((rlsc1_f2088()*rlsc1_v6281)+(rlsc1_f2083()*rlsc1_v6279))-rlsc1_f2073());}}
static double rlsc1_f2050(){if (rlsc1_p2050) return rlsc1_m2050; else {rlsc1_p2050=T;return rlsc1_m2050=(rlsc1_f2083()*rlsc1_v6263);}}
static double rlsc1_f2028(){if (rlsc1_p2028) return rlsc1_m2028; else {rlsc1_p2028=T;return rlsc1_m2028=(rlsc1_f2073()-rlsc1_f2051()-rlsc1_f2050());}}
static double rlsc1_f1844(){if (rlsc1_p1844) return rlsc1_m1844; else {rlsc1_p1844=T;return rlsc1_m1844=((-2.0)*rlsc1_f2083()*rlsc1_f2028());}}
static double rlsc1_f1834(){if (rlsc1_p1834) return rlsc1_m1834; else {rlsc1_p1834=T;return rlsc1_m1834=((-rlsc1_f1844())/rlsc1_f1835());}}
static double rlsc1_f2027(){if (rlsc1_p2027) return rlsc1_m2027; else {rlsc1_p2027=T;return rlsc1_m2027=((rlsc1_v2028=rlsc1_f2028()),(rlsc1_v2028*rlsc1_v2028));}}
static double rlsc1_f2048(){if (rlsc1_p2048) return rlsc1_m2048; else {rlsc1_p2048=T;return rlsc1_m2048=((rlsc1_f2051()+rlsc1_f2050())-rlsc1_f2073());}}
static int rlsc1_f2036(){if (rlsc1_p2036) return rlsc1_m2036; else {rlsc1_p2036=T;return rlsc1_m2036=(rlsc1_f2048()>(0.0));}}
static double rlsc1_f2070(){if (rlsc1_p2070) return rlsc1_m2070; else {rlsc1_p2070=T;return rlsc1_m2070=(rlsc1_f2083()*rlsc1_v6265);}}
static double rlsc1_f2069(){if (rlsc1_p2069) return rlsc1_m2069; else {rlsc1_p2069=T;return rlsc1_m2069=(rlsc1_f2071()-rlsc1_f2070());}}
static double rlsc1_f2010(){if (rlsc1_p2010) return rlsc1_m2010; else {rlsc1_p2010=T;return rlsc1_m2010=(rlsc1_f2022()?(rlsc1_f2070()-rlsc1_f2071()):rlsc1_f2069());}}
static double rlsc1_f2008(){if (rlsc1_p2008) return rlsc1_m2008; else {rlsc1_p2008=T;return rlsc1_m2008=((rlsc1_f2073()*rlsc1_f2020())-(rlsc1_f2083()*rlsc1_f2010()));}}
static double rlsc1_f2082(){if (rlsc1_p2082) return rlsc1_m2082; else {rlsc1_p2082=T;return rlsc1_m2082=(-rlsc1_f2083());}}
static double rlsc1_f2018(){if (rlsc1_p2018) return rlsc1_m2018; else {rlsc1_p2018=T;return rlsc1_m2018=(rlsc1_f2022()?rlsc1_f2083():rlsc1_f2082());}}
static double rlsc1_f2002(){if (rlsc1_p2002) return rlsc1_m2002; else {rlsc1_p2002=T;return rlsc1_m2002=((rlsc1_f2088()*rlsc1_f2010())-(rlsc1_f2073()*rlsc1_f2018()));}}
static double rlsc1_f2016(){if (rlsc1_p2016) return rlsc1_m2016; else {rlsc1_p2016=T;return rlsc1_m2016=((rlsc1_f2088()*rlsc1_f2020())-(rlsc1_f2083()*rlsc1_f2018()));}}
static double rlsc1_f1996(){if (rlsc1_p1996) return rlsc1_m1996; else {rlsc1_p1996=T;return rlsc1_m1996=(rlsc1_f2008()/rlsc1_f2016());}}
static double rlsc1_f1994(){if (rlsc1_p1994) return rlsc1_m1994; else {rlsc1_p1994=T;return rlsc1_m1994=(rlsc1_f2002()/rlsc1_f2016());}}
static int rlsc1_f2013(){if (rlsc1_p2013) return rlsc1_m2013; else {rlsc1_p2013=T;return rlsc1_m2013=(fabs((rlsc1_f2016()-(0.0)))<rlsc1_v6259);}}
static int rlsc1_f1997(){if (rlsc1_p1997) return rlsc1_m1997; else {rlsc1_p1997=T;return rlsc1_m1997=(rlsc1_f2013()?((fabs((rlsc1_f2008()-(0.0)))<rlsc1_v6259)?(fabs((rlsc1_f2002()-(0.0)))<rlsc1_v6259):NIL):T);}}
static int rlsc1_f1972(){if (rlsc1_p1972) return rlsc1_m1972; else {rlsc1_p1972=T;return rlsc1_m1972=(rlsc1_f2013()?NIL:((rlsc1_v1996=rlsc1_f1996()),(rlsc1_v1994=rlsc1_f1994()),((fabs((((rlsc1_f2088()*rlsc1_v1996)+(rlsc1_f2083()*rlsc1_v1994))-rlsc1_f2073()))<rlsc1_v6259)?(((rlsc1_f1986()<=rlsc1_v1996)&&(rlsc1_v1996<=rlsc1_f1983()))?((rlsc1_f1979()<=rlsc1_v1994)&&(rlsc1_v1994<=rlsc1_f1976())):NIL):NIL)));}}
static double rlsc1_f1965(){if (rlsc1_p1965) return rlsc1_m1965; else {rlsc1_p1965=T;return rlsc1_m1965=((rlsc1_v2013=rlsc1_f2013()),normalize_rotation((atan2(((rlsc1_v2013?rlsc1_f2651():rlsc1_f1994())-rlsc1_v6263),((rlsc1_v2013?rlsc1_f2647():rlsc1_f1996())-rlsc1_v6265))-rlsc1_f5623())));}}
static double rlsc1_f1964(){if (rlsc1_p1964) return rlsc1_m1964; else {rlsc1_p1964=T;return rlsc1_m1964=normalize_rotation(rlsc1_f1965());}}
static int rlsc1_f1952(){if (rlsc1_p1952) return rlsc1_m1952; else {rlsc1_p1952=T;return rlsc1_m1952=((rlsc1_v1964=rlsc1_f1964()),((fabs((rlsc1_v1964-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1964-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1964-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f1951(){if (rlsc1_p1951) return rlsc1_m1951; else {rlsc1_p1951=T;return rlsc1_m1951=((rlsc1_v1952=rlsc1_f1952()),(rlsc1_v1952?rlsc1_v1952:rlsc1_f2400()));}}
static double rlsc1_f1196(){if (rlsc1_p1196) return rlsc1_m1196; else {rlsc1_p1196=T;return rlsc1_m1196=(rlsc1_f1951()?rlsc1_f1965():rlsc1_f1615());}}
static double rlsc1_f1722(){if (rlsc1_p1722) return rlsc1_m1722; else {rlsc1_p1722=T;return rlsc1_m1722=(rlsc1_f1951()?rlsc1_f1965():rlsc1_f2165());}}
static double rlsc1_f1948(){if (rlsc1_p1948) return rlsc1_m1948; else {rlsc1_p1948=T;return rlsc1_m1948=(rlsc1_f1951()?rlsc1_f1965():rlsc1_f2393());}}
static double rlsc1_f1950(){if (rlsc1_p1950) return rlsc1_m1950; else {rlsc1_p1950=T;return rlsc1_m1950=(rlsc1_f1951()?rlsc1_f1965():rlsc1_f2397());}}
static int rlsc1_f1949(){if (rlsc1_p1949) return rlsc1_m1949; else {rlsc1_p1949=T;return rlsc1_m1949=(rlsc1_f1950()>(0.0));}}
static int rlsc1_f1943(){if (rlsc1_p1943) return rlsc1_m1943; else {rlsc1_p1943=T;return rlsc1_m1943=(rlsc1_f1951()?((rlsc1_v1949=rlsc1_f1949()),(rlsc1_v1949?rlsc1_v1949:(fabs((rlsc1_f1948()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f1942(){if (rlsc1_p1942) return rlsc1_m1942; else {rlsc1_p1942=T;return rlsc1_m1942=(rlsc1_f1943()?rlsc1_f1951():NIL);}}
static double rlsc1_f1728(){if (rlsc1_p1728) return rlsc1_m1728; else {rlsc1_p1728=T;return rlsc1_m1728=(rlsc1_f1943()?rlsc1_f1948():rlsc1_f2393());}}
static double rlsc1_f1730(){if (rlsc1_p1730) return rlsc1_m1730; else {rlsc1_p1730=T;return rlsc1_m1730=(rlsc1_f1943()?rlsc1_f1950():rlsc1_f2397());}}
static int rlsc1_f1729(){if (rlsc1_p1729) return rlsc1_m1729; else {rlsc1_p1729=T;return rlsc1_m1729=(rlsc1_f1730()>(0.0));}}
static int rlsc1_f1723(){if (rlsc1_p1723) return rlsc1_m1723; else {rlsc1_p1723=T;return rlsc1_m1723=(rlsc1_f1942()?((rlsc1_v1729=rlsc1_f1729()),(rlsc1_v1729?rlsc1_v1729:(fabs((rlsc1_f1728()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f2080(){if (rlsc1_p2080) return rlsc1_m2080; else {rlsc1_p2080=T;return rlsc1_m2080=(rlsc1_f2087()-(rlsc1_f2083()*rlsc1_f2082()));}}
static double rlsc1_f2065(){if (rlsc1_p2065) return rlsc1_m2065; else {rlsc1_p2065=T;return rlsc1_m2065=((((rlsc1_f2073()*rlsc1_f2088())-(rlsc1_f2083()*rlsc1_f2069()))/rlsc1_f2080())-rlsc1_v6265);}}
static double rlsc1_f2059(){if (rlsc1_p2059) return rlsc1_m2059; else {rlsc1_p2059=T;return rlsc1_m2059=((((rlsc1_f2088()*rlsc1_f2069())-(rlsc1_f2073()*rlsc1_f2082()))/rlsc1_f2080())-rlsc1_v6263);}}
static double rlsc1_f2792(){if (rlsc1_p2792) return rlsc1_m2792; else {rlsc1_p2792=T;return rlsc1_m2792=normalize_rotation((rlsc1_f6244()-(1.5707963267948966)));}}
static double rlsc1_f2783(){if (rlsc1_p2783) return rlsc1_m2783; else {rlsc1_p2783=T;return rlsc1_m2783=(rlsc1_f6247()*cos(rlsc1_f2792()));}}
static double rlsc1_f2781(){if (rlsc1_p2781) return rlsc1_m2781; else {rlsc1_p2781=T;return rlsc1_m2781=(rlsc1_v6277+rlsc1_f2783());}}
static double rlsc1_f2782(){if (rlsc1_p2782) return rlsc1_m2782; else {rlsc1_p2782=T;return rlsc1_m2782=(rlsc1_v6281+rlsc1_f2783());}}
static double rlsc1_f2667(){if (rlsc1_p2667) return rlsc1_m2667; else {rlsc1_p2667=T;return rlsc1_m2667=((rlsc1_v2782=rlsc1_f2782()),(rlsc1_v2781=rlsc1_f2781()),(((rlsc1_v2782<rlsc1_v2781)?rlsc1_v2782:rlsc1_v2781)-rlsc1_v6259));}}
static double rlsc1_f2664(){if (rlsc1_p2664) return rlsc1_m2664; else {rlsc1_p2664=T;return rlsc1_m2664=((rlsc1_v2782=rlsc1_f2782()),(rlsc1_v2781=rlsc1_f2781()),(((rlsc1_v2782>rlsc1_v2781)?rlsc1_v2782:rlsc1_v2781)+rlsc1_v6259));}}
static int rlsc1_f2778(){if (rlsc1_p2778) return rlsc1_m2778; else {rlsc1_p2778=T;return rlsc1_m2778=(fabs((rlsc1_f2782()-rlsc1_f2781()))<rlsc1_v6259);}}
static double rlsc1_f2790(){if (rlsc1_p2790) return rlsc1_m2790; else {rlsc1_p2790=T;return rlsc1_m2790=(rlsc1_f6247()*sin(rlsc1_f2792()));}}
static double rlsc1_f2789(){if (rlsc1_p2789) return rlsc1_m2789; else {rlsc1_p2789=T;return rlsc1_m2789=(rlsc1_v6279+rlsc1_f2790());}}
static double rlsc1_f2788(){if (rlsc1_p2788) return rlsc1_m2788; else {rlsc1_p2788=T;return rlsc1_m2788=(rlsc1_v6275+rlsc1_f2790());}}
static double rlsc1_f2660(){if (rlsc1_p2660) return rlsc1_m2660; else {rlsc1_p2660=T;return rlsc1_m2660=((rlsc1_v2789=rlsc1_f2789()),(rlsc1_v2788=rlsc1_f2788()),(((rlsc1_v2789<rlsc1_v2788)?rlsc1_v2789:rlsc1_v2788)-rlsc1_v6259));}}
static double rlsc1_f2657(){if (rlsc1_p2657) return rlsc1_m2657; else {rlsc1_p2657=T;return rlsc1_m2657=((rlsc1_v2789=rlsc1_f2789()),(rlsc1_v2788=rlsc1_f2788()),(((rlsc1_v2789>rlsc1_v2788)?rlsc1_v2789:rlsc1_v2788)+rlsc1_v6259));}}
static double rlsc1_f2787(){if (rlsc1_p2787) return rlsc1_m2787; else {rlsc1_p2787=T;return rlsc1_m2787=(rlsc1_f2789()-rlsc1_f2788());}}
static int rlsc1_f2785(){if (rlsc1_p2785) return rlsc1_m2785; else {rlsc1_p2785=T;return rlsc1_m2785=(fabs(rlsc1_f2787())<rlsc1_v6259);}}
static double rlsc1_f2772(){if (rlsc1_p2772) return rlsc1_m2772; else {rlsc1_p2772=T;return rlsc1_m2772=(rlsc1_f2785()?(rlsc1_f2778()?rlsc1_f2776():(0.0)):(1.0));}}
static int rlsc1_f2710(){if (rlsc1_p2710) return rlsc1_m2710; else {rlsc1_p2710=T;return rlsc1_m2710=(rlsc1_f2772()==0.0);}}
static double rlsc1_f2733(){if (rlsc1_p2733) return rlsc1_m2733; else {rlsc1_p2733=T;return rlsc1_m2733=(rlsc1_f2772()*rlsc1_v6265);}}
static double rlsc1_f2753(){if (rlsc1_p2753) return rlsc1_m2753; else {rlsc1_p2753=T;return rlsc1_m2753=(rlsc1_f2772()*rlsc1_v6263);}}
static double rlsc1_f2771(){if (rlsc1_p2771) return rlsc1_m2771; else {rlsc1_p2771=T;return rlsc1_m2771=((rlsc1_v2772=rlsc1_f2772()),(rlsc1_v2772*rlsc1_v2772));}}
static double rlsc1_f2768(){if (rlsc1_p2768) return rlsc1_m2768; else {rlsc1_p2768=T;return rlsc1_m2768=((rlsc1_f2781()-rlsc1_f2782())/rlsc1_f2787());}}
static double rlsc1_f2755(){if (rlsc1_p2755) return rlsc1_m2755; else {rlsc1_p2755=T;return rlsc1_m2755=(rlsc1_f2785()?(rlsc1_f2778()?rlsc1_f2776():rlsc1_f2789()):(rlsc1_f2782()+(rlsc1_f2768()*rlsc1_f2789())));}}
static double rlsc1_f2767(){if (rlsc1_p2767) return rlsc1_m2767; else {rlsc1_p2767=T;return rlsc1_m2767=(rlsc1_f2785()?(rlsc1_f2778()?rlsc1_f2776():(1.0)):rlsc1_f2768());}}
static int rlsc1_f2703(){if (rlsc1_p2703) return rlsc1_m2703; else {rlsc1_p2703=T;return rlsc1_m2703=(rlsc1_f2767()>0.0);}}
static double rlsc1_f2701(){if (rlsc1_p2701) return rlsc1_m2701; else {rlsc1_p2701=T;return rlsc1_m2701=(rlsc1_f2703()?(-rlsc1_f2772()):rlsc1_f2772());}}
static double rlsc1_f2378(){if (rlsc1_p2378) return rlsc1_m2378; else {rlsc1_p2378=T;return rlsc1_m2378=(rlsc1_f2755()/rlsc1_f2767());}}
static double rlsc1_f2358(){if (rlsc1_p2358) return rlsc1_m2358; else {rlsc1_p2358=T;return rlsc1_m2358=(rlsc1_f2378()-rlsc1_v6263);}}
static int rlsc1_f2371(){if (rlsc1_p2371) return rlsc1_m2371; else {rlsc1_p2371=T;return rlsc1_m2371=((rlsc1_f2660()<=rlsc1_f2378())&&(rlsc1_f2378()<=rlsc1_f2657()));}}
static double rlsc1_f2377(){if (rlsc1_p2377) return rlsc1_m2377; else {rlsc1_p2377=T;return rlsc1_m2377=(rlsc1_f2767()*rlsc1_f2378());}}
static double rlsc1_f2707(){if (rlsc1_p2707) return rlsc1_m2707; else {rlsc1_p2707=T;return rlsc1_m2707=((rlsc1_v2767=rlsc1_f2767()),(rlsc1_v2767*rlsc1_v2767));}}
static double rlsc1_f2286(){if (rlsc1_p2286) return rlsc1_m2286; else {rlsc1_p2286=T;return rlsc1_m2286=(rlsc1_f2771()+rlsc1_f2707());}}
static double rlsc1_f2279(){if (rlsc1_p2279) return rlsc1_m2279; else {rlsc1_p2279=T;return rlsc1_m2279=((rlsc1_v2286=rlsc1_f2286()),(rlsc1_v2286+rlsc1_v2286));}}
static double rlsc1_f2723(){if (rlsc1_p2723) return rlsc1_m2723; else {rlsc1_p2723=T;return rlsc1_m2723=(((rlsc1_f2772()*rlsc1_v6281)+(rlsc1_f2767()*rlsc1_v6279))-rlsc1_f2755());}}
static double rlsc1_f2732(){if (rlsc1_p2732) return rlsc1_m2732; else {rlsc1_p2732=T;return rlsc1_m2732=(rlsc1_f2767()*rlsc1_v6263);}}
static double rlsc1_f2709(){if (rlsc1_p2709) return rlsc1_m2709; else {rlsc1_p2709=T;return rlsc1_m2709=(rlsc1_f2755()-rlsc1_f2733()-rlsc1_f2732());}}
static double rlsc1_f2288(){if (rlsc1_p2288) return rlsc1_m2288; else {rlsc1_p2288=T;return rlsc1_m2288=((-2.0)*rlsc1_f2767()*rlsc1_f2709());}}
static double rlsc1_f2278(){if (rlsc1_p2278) return rlsc1_m2278; else {rlsc1_p2278=T;return rlsc1_m2278=((-rlsc1_f2288())/rlsc1_f2279());}}
static double rlsc1_f2708(){if (rlsc1_p2708) return rlsc1_m2708; else {rlsc1_p2708=T;return rlsc1_m2708=((rlsc1_v2709=rlsc1_f2709()),(rlsc1_v2709*rlsc1_v2709));}}
static double rlsc1_f2730(){if (rlsc1_p2730) return rlsc1_m2730; else {rlsc1_p2730=T;return rlsc1_m2730=((rlsc1_f2733()+rlsc1_f2732())-rlsc1_f2755());}}
static int rlsc1_f2718(){if (rlsc1_p2718) return rlsc1_m2718; else {rlsc1_p2718=T;return rlsc1_m2718=(rlsc1_f2730()>(0.0));}}
static double rlsc1_f2752(){if (rlsc1_p2752) return rlsc1_m2752; else {rlsc1_p2752=T;return rlsc1_m2752=(rlsc1_f2767()*rlsc1_v6265);}}
static double rlsc1_f2751(){if (rlsc1_p2751) return rlsc1_m2751; else {rlsc1_p2751=T;return rlsc1_m2751=(rlsc1_f2753()-rlsc1_f2752());}}
static double rlsc1_f2691(){if (rlsc1_p2691) return rlsc1_m2691; else {rlsc1_p2691=T;return rlsc1_m2691=(rlsc1_f2703()?(rlsc1_f2752()-rlsc1_f2753()):rlsc1_f2751());}}
static double rlsc1_f2689(){if (rlsc1_p2689) return rlsc1_m2689; else {rlsc1_p2689=T;return rlsc1_m2689=((rlsc1_f2755()*rlsc1_f2701())-(rlsc1_f2767()*rlsc1_f2691()));}}
static double rlsc1_f2766(){if (rlsc1_p2766) return rlsc1_m2766; else {rlsc1_p2766=T;return rlsc1_m2766=(-rlsc1_f2767());}}
static double rlsc1_f2699(){if (rlsc1_p2699) return rlsc1_m2699; else {rlsc1_p2699=T;return rlsc1_m2699=(rlsc1_f2703()?rlsc1_f2767():rlsc1_f2766());}}
static double rlsc1_f2683(){if (rlsc1_p2683) return rlsc1_m2683; else {rlsc1_p2683=T;return rlsc1_m2683=((rlsc1_f2772()*rlsc1_f2691())-(rlsc1_f2755()*rlsc1_f2699()));}}
static double rlsc1_f2697(){if (rlsc1_p2697) return rlsc1_m2697; else {rlsc1_p2697=T;return rlsc1_m2697=((rlsc1_f2772()*rlsc1_f2701())-(rlsc1_f2767()*rlsc1_f2699()));}}
static double rlsc1_f2677(){if (rlsc1_p2677) return rlsc1_m2677; else {rlsc1_p2677=T;return rlsc1_m2677=(rlsc1_f2689()/rlsc1_f2697());}}
static double rlsc1_f2675(){if (rlsc1_p2675) return rlsc1_m2675; else {rlsc1_p2675=T;return rlsc1_m2675=(rlsc1_f2683()/rlsc1_f2697());}}
static int rlsc1_f2694(){if (rlsc1_p2694) return rlsc1_m2694; else {rlsc1_p2694=T;return rlsc1_m2694=(fabs((rlsc1_f2697()-(0.0)))<rlsc1_v6259);}}
static int rlsc1_f2678(){if (rlsc1_p2678) return rlsc1_m2678; else {rlsc1_p2678=T;return rlsc1_m2678=(rlsc1_f2694()?((fabs((rlsc1_f2689()-(0.0)))<rlsc1_v6259)?(fabs((rlsc1_f2683()-(0.0)))<rlsc1_v6259):NIL):T);}}
static int rlsc1_f2653(){if (rlsc1_p2653) return rlsc1_m2653; else {rlsc1_p2653=T;return rlsc1_m2653=(rlsc1_f2694()?NIL:((rlsc1_v2677=rlsc1_f2677()),(rlsc1_v2675=rlsc1_f2675()),((fabs((((rlsc1_f2772()*rlsc1_v2677)+(rlsc1_f2767()*rlsc1_v2675))-rlsc1_f2755()))<rlsc1_v6259)?(((rlsc1_f2667()<=rlsc1_v2677)&&(rlsc1_v2677<=rlsc1_f2664()))?((rlsc1_f2660()<=rlsc1_v2675)&&(rlsc1_v2675<=rlsc1_f2657())):NIL):NIL)));}}
static double rlsc1_f2642(){if (rlsc1_p2642) return rlsc1_m2642; else {rlsc1_p2642=T;return rlsc1_m2642=((rlsc1_v2694=rlsc1_f2694()),normalize_rotation((atan2(((rlsc1_v2694?rlsc1_f2651():rlsc1_f2675())-rlsc1_v6263),((rlsc1_v2694?rlsc1_f2647():rlsc1_f2677())-rlsc1_v6265))-rlsc1_f5623())));}}
static double rlsc1_f2641(){if (rlsc1_p2641) return rlsc1_m2641; else {rlsc1_p2641=T;return rlsc1_m2641=normalize_rotation(rlsc1_f2642());}}
static int rlsc1_f2627(){if (rlsc1_p2627) return rlsc1_m2627; else {rlsc1_p2627=T;return rlsc1_m2627=((rlsc1_v2641=rlsc1_f2641()),((fabs((rlsc1_v2641-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2641-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2641-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f2399(){if (rlsc1_p2399) return rlsc1_m2399; else {rlsc1_p2399=T;return rlsc1_m2399=((rlsc1_v2627=rlsc1_f2627()),(rlsc1_v2627?rlsc1_v2627:rlsc1_f2400()));}}
static double rlsc1_f1226(){if (rlsc1_p1226) return rlsc1_m1226; else {rlsc1_p1226=T;return rlsc1_m1226=(rlsc1_f2399()?rlsc1_f2642():rlsc1_f1615());}}
static double rlsc1_f2164(){if (rlsc1_p2164) return rlsc1_m2164; else {rlsc1_p2164=T;return rlsc1_m2164=(rlsc1_f2399()?rlsc1_f2642():rlsc1_f2165());}}
static double rlsc1_f2392(){if (rlsc1_p2392) return rlsc1_m2392; else {rlsc1_p2392=T;return rlsc1_m2392=(rlsc1_f2399()?rlsc1_f2642():rlsc1_f2393());}}
static double rlsc1_f2396(){if (rlsc1_p2396) return rlsc1_m2396; else {rlsc1_p2396=T;return rlsc1_m2396=(rlsc1_f2399()?rlsc1_f2642():rlsc1_f2397());}}
static int rlsc1_f2395(){if (rlsc1_p2395) return rlsc1_m2395; else {rlsc1_p2395=T;return rlsc1_m2395=(rlsc1_f2396()>(0.0));}}
static int rlsc1_f2387(){if (rlsc1_p2387) return rlsc1_m2387; else {rlsc1_p2387=T;return rlsc1_m2387=(rlsc1_f2399()?((rlsc1_v2395=rlsc1_f2395()),(rlsc1_v2395?rlsc1_v2395:(fabs((rlsc1_f2392()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f2172(){if (rlsc1_p2172) return rlsc1_m2172; else {rlsc1_p2172=T;return rlsc1_m2172=(rlsc1_f2387()?rlsc1_f2392():rlsc1_f2393());}}
static double rlsc1_f2174(){if (rlsc1_p2174) return rlsc1_m2174; else {rlsc1_p2174=T;return rlsc1_m2174=(rlsc1_f2387()?rlsc1_f2396():rlsc1_f2397());}}
static int rlsc1_f2173(){if (rlsc1_p2173) return rlsc1_m2173; else {rlsc1_p2173=T;return rlsc1_m2173=(rlsc1_f2174()>(0.0));}}
static int rlsc1_f2386(){if (rlsc1_p2386) return rlsc1_m2386; else {rlsc1_p2386=T;return rlsc1_m2386=(rlsc1_f2387()?rlsc1_f2399():NIL);}}
static int rlsc1_f2167(){if (rlsc1_p2167) return rlsc1_m2167; else {rlsc1_p2167=T;return rlsc1_m2167=(rlsc1_f2386()?((rlsc1_v2173=rlsc1_f2173()),(rlsc1_v2173?rlsc1_v2173:(fabs((rlsc1_f2172()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f2764(){if (rlsc1_p2764) return rlsc1_m2764; else {rlsc1_p2764=T;return rlsc1_m2764=(rlsc1_f2771()-(rlsc1_f2767()*rlsc1_f2766()));}}
static double rlsc1_f2747(){if (rlsc1_p2747) return rlsc1_m2747; else {rlsc1_p2747=T;return rlsc1_m2747=((((rlsc1_f2755()*rlsc1_f2772())-(rlsc1_f2767()*rlsc1_f2751()))/rlsc1_f2764())-rlsc1_v6265);}}
static double rlsc1_f2741(){if (rlsc1_p2741) return rlsc1_m2741; else {rlsc1_p2741=T;return rlsc1_m2741=((((rlsc1_f2772()*rlsc1_f2751())-(rlsc1_f2755()*rlsc1_f2766()))/rlsc1_f2764())-rlsc1_v6263);}}
static double rlsc1_f6256(){if (rlsc1_p6256) return rlsc1_m6256; else {rlsc1_p6256=T;return rlsc1_m6256=(rlsc1_v6263-rlsc1_v6271);}}
static double rlsc1_f6220(){if (rlsc1_p6220) return rlsc1_m6220; else {rlsc1_p6220=T;return rlsc1_m6220=((rlsc1_v6256=rlsc1_f6256()),sqrt(((rlsc1_v6261*rlsc1_v6261)+(rlsc1_v6256*rlsc1_v6256))));}}
static double rlsc1_f5878(){if (rlsc1_p5878) return rlsc1_m5878; else {rlsc1_p5878=T;return rlsc1_m5878=(rlsc1_v6265-(rlsc1_v6265+rlsc1_f6220()));}}
static double rlsc1_f5876(){if (rlsc1_p5876) return rlsc1_m5876; else {rlsc1_p5876=T;return rlsc1_m5876=(rlsc1_v6263-rlsc1_v6263);}}
static double rlsc1_f5875(){if (rlsc1_p5875) return rlsc1_m5875; else {rlsc1_p5875=T;return rlsc1_m5875=((rlsc1_v5876=rlsc1_f5876()),(rlsc1_v5876*rlsc1_v5876));}}
static double rlsc1_f3641(){if (rlsc1_p3641) return rlsc1_m3641; else {rlsc1_p3641=T;return rlsc1_m3641=((rlsc1_v3644=rlsc1_f3644()),sqrt(((rlsc1_v3644*rlsc1_v3644)+rlsc1_f5875())));}}
static double rlsc1_f3609(){if (rlsc1_p3609) return rlsc1_m3609; else {rlsc1_p3609=T;return rlsc1_m3609=((rlsc1_v3641=rlsc1_f3641()),(rlsc1_v3641*rlsc1_v3641));}}
static double rlsc1_f642(){if (rlsc1_p642) return rlsc1_m642; else {rlsc1_p642=T;return rlsc1_m642=(((rlsc1_f4055()+rlsc1_f3609())-rlsc1_f6194())/rlsc1_f984());}}
static double rlsc1_f632(){if (rlsc1_p632) return rlsc1_m632; else {rlsc1_p632=T;return rlsc1_m632=(rlsc1_f642()*rlsc1_f4004());}}
static double rlsc1_f638(){if (rlsc1_p638) return rlsc1_m638; else {rlsc1_p638=T;return rlsc1_m638=(rlsc1_f642()*rlsc1_f4005());}}
static double rlsc1_f640(){if (rlsc1_p640) return rlsc1_m640; else {rlsc1_p640=T;return rlsc1_m640=((rlsc1_v642=rlsc1_f642()),(rlsc1_f3609()-(rlsc1_v642*rlsc1_v642)));}}
static int rlsc1_f639(){if (rlsc1_p639) return rlsc1_m639; else {rlsc1_p639=T;return rlsc1_m639=(rlsc1_f640()<0.0);}}
static double rlsc1_f637(){if (rlsc1_p637) return rlsc1_m637; else {rlsc1_p637=T;return rlsc1_m637=sqrt(rlsc1_f640());}}
static double rlsc1_f631(){if (rlsc1_p631) return rlsc1_m631; else {rlsc1_p631=T;return rlsc1_m631=(rlsc1_f637()*rlsc1_f4005());}}
static double rlsc1_f540(){if (rlsc1_p540) return rlsc1_m540; else {rlsc1_p540=T;return rlsc1_m540=(rlsc1_v6263+(rlsc1_f632()-rlsc1_f631()));}}
static int rlsc1_f512(){if (rlsc1_p512) return rlsc1_m512; else {rlsc1_p512=T;return rlsc1_m512=(rlsc1_v6271==rlsc1_f540());}}
static double rlsc1_f630(){if (rlsc1_p630) return rlsc1_m630; else {rlsc1_p630=T;return rlsc1_m630=(rlsc1_v6263+rlsc1_f632()+rlsc1_f631());}}
static int rlsc1_f629(){if (rlsc1_p629) return rlsc1_m629; else {rlsc1_p629=T;return rlsc1_m629=(rlsc1_v6271==rlsc1_f630());}}
static double rlsc1_f636(){if (rlsc1_p636) return rlsc1_m636; else {rlsc1_p636=T;return rlsc1_m636=(rlsc1_f637()*rlsc1_f4004());}}
static double rlsc1_f538(){if (rlsc1_p538) return rlsc1_m538; else {rlsc1_p538=T;return rlsc1_m538=(rlsc1_v6265+rlsc1_f638()+rlsc1_f636());}}
static int rlsc1_f513(){if (rlsc1_p513) return rlsc1_m513; else {rlsc1_p513=T;return rlsc1_m513=(rlsc1_v6273==rlsc1_f538());}}
static double rlsc1_f510(){if (rlsc1_p510) return rlsc1_m510; else {rlsc1_p510=T;return rlsc1_m510=(rlsc1_f513()?(rlsc1_f512()?rlsc1_f1076():(0.0)):(1.0));}}
static double rlsc1_f505(){if (rlsc1_p505) return rlsc1_m505; else {rlsc1_p505=T;return rlsc1_m505=((rlsc1_f540()-rlsc1_v6271)/(rlsc1_f538()-rlsc1_v6273));}}
static double rlsc1_f498(){if (rlsc1_p498) return rlsc1_m498; else {rlsc1_p498=T;return rlsc1_m498=(rlsc1_f513()?(rlsc1_f512()?rlsc1_f1076():rlsc1_f540()):(rlsc1_f538()+(rlsc1_f505()*rlsc1_f540())));}}
static double rlsc1_f504(){if (rlsc1_p504) return rlsc1_m504; else {rlsc1_p504=T;return rlsc1_m504=(rlsc1_f513()?(rlsc1_f512()?rlsc1_f1076():(1.0)):rlsc1_f505());}}
static double rlsc1_f497(){if (rlsc1_p497) return rlsc1_m497; else {rlsc1_p497=T;return rlsc1_m497=(((rlsc1_f510()*rlsc1_v6281)+(rlsc1_f504()*rlsc1_v6279))-rlsc1_f498());}}
static int rlsc1_f480(){if (rlsc1_p480) return rlsc1_m480; else {rlsc1_p480=T;return rlsc1_m480=(rlsc1_f497()>(0.0));}}
static double rlsc1_f536(){if (rlsc1_p536) return rlsc1_m536; else {rlsc1_p536=T;return rlsc1_m536=atan2((rlsc1_f540()-rlsc1_v6263),(rlsc1_f538()-rlsc1_v6265));}}
static double rlsc1_f493(){if (rlsc1_p493) return rlsc1_m493; else {rlsc1_p493=T;return rlsc1_m493=(rlsc1_f536()+(-1.5707963267948966));}}
static double rlsc1_f485(){if (rlsc1_p485) return rlsc1_m485; else {rlsc1_p485=T;return rlsc1_m485=((rlsc1_v493=rlsc1_f493()),(((rlsc1_f510()*(rlsc1_f538()+cos(rlsc1_v493)))+(rlsc1_f504()*(rlsc1_f540()+sin(rlsc1_v493))))-rlsc1_f498()));}}
static double rlsc1_f534(){if (rlsc1_p534) return rlsc1_m534; else {rlsc1_p534=T;return rlsc1_m534=normalize_rotation((rlsc1_f536()-rlsc1_f3535()));}}
static double rlsc1_f533(){if (rlsc1_p533) return rlsc1_m533; else {rlsc1_p533=T;return rlsc1_m533=normalize_rotation(rlsc1_f534());}}
static int rlsc1_f521(){if (rlsc1_p521) return rlsc1_m521; else {rlsc1_p521=T;return rlsc1_m521=((rlsc1_v533=rlsc1_f533()),((fabs((rlsc1_v533-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v533-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v533-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f473(){if (rlsc1_p473) return rlsc1_m473; else {rlsc1_p473=T;return rlsc1_m473=((rlsc1_v521=rlsc1_f521()),(rlsc1_v521?rlsc1_v521:(((fabs((rlsc1_v6265-rlsc1_f538()))<rlsc1_v6259)?(fabs((rlsc1_v6263-rlsc1_f540()))<rlsc1_v6259):NIL)?NIL:(((fabs((rlsc1_f497()-(0.0)))<rlsc1_v6259)?T:((rlsc1_v485=rlsc1_f485()),((fabs((rlsc1_v485-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v485>(0.0))?rlsc1_f480():(rlsc1_f480()?NIL:T)))))?NIL:T))));}}
static double rlsc1_f470(){if (rlsc1_p470) return rlsc1_m470; else {rlsc1_p470=T;return rlsc1_m470=(rlsc1_f473()?rlsc1_f534():rlsc1_f2393());}}
static double rlsc1_f472(){if (rlsc1_p472) return rlsc1_m472; else {rlsc1_p472=T;return rlsc1_m472=(rlsc1_f473()?rlsc1_f534():rlsc1_f2397());}}
static int rlsc1_f471(){if (rlsc1_p471) return rlsc1_m471; else {rlsc1_p471=T;return rlsc1_m471=(rlsc1_f472()<(0.0));}}
static int rlsc1_f465(){if (rlsc1_p465) return rlsc1_m465; else {rlsc1_p465=T;return rlsc1_m465=(rlsc1_f473()?((rlsc1_v471=rlsc1_f471()),(rlsc1_v471?rlsc1_v471:(fabs((rlsc1_f470()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f464(){if (rlsc1_p464) return rlsc1_m464; else {rlsc1_p464=T;return rlsc1_m464=(rlsc1_f465()?rlsc1_f473():NIL);}}
static double rlsc1_f461(){if (rlsc1_p461) return rlsc1_m461; else {rlsc1_p461=T;return rlsc1_m461=(rlsc1_f465()?rlsc1_f470():rlsc1_f2393());}}
static double rlsc1_f463(){if (rlsc1_p463) return rlsc1_m463; else {rlsc1_p463=T;return rlsc1_m463=(rlsc1_f465()?rlsc1_f472():rlsc1_f2397());}}
static int rlsc1_f462(){if (rlsc1_p462) return rlsc1_m462; else {rlsc1_p462=T;return rlsc1_m462=(rlsc1_f463()<(0.0));}}
static int rlsc1_f456(){if (rlsc1_p456) return rlsc1_m456; else {rlsc1_p456=T;return rlsc1_m456=(rlsc1_f464()?((rlsc1_v462=rlsc1_f462()),(rlsc1_v462?rlsc1_v462:(fabs((rlsc1_f461()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f634(){if (rlsc1_p634) return rlsc1_m634; else {rlsc1_p634=T;return rlsc1_m634=(rlsc1_v6265+(rlsc1_f638()-rlsc1_f636()));}}
static double rlsc1_f591(){if (rlsc1_p591) return rlsc1_m591; else {rlsc1_p591=T;return rlsc1_m591=atan2((rlsc1_f630()-rlsc1_v6263),(rlsc1_f634()-rlsc1_v6265));}}
static double rlsc1_f568(){if (rlsc1_p568) return rlsc1_m568; else {rlsc1_p568=T;return rlsc1_m568=(rlsc1_f591()+(-1.5707963267948966));}}
static double rlsc1_f589(){if (rlsc1_p589) return rlsc1_m589; else {rlsc1_p589=T;return rlsc1_m589=normalize_rotation((rlsc1_f591()-rlsc1_f3535()));}}
static double rlsc1_f588(){if (rlsc1_p588) return rlsc1_m588; else {rlsc1_p588=T;return rlsc1_m588=normalize_rotation(rlsc1_f589());}}
static int rlsc1_f576(){if (rlsc1_p576) return rlsc1_m576; else {rlsc1_p576=T;return rlsc1_m576=((rlsc1_v588=rlsc1_f588()),((fabs((rlsc1_v588-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v588-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v588-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f633(){if (rlsc1_p633) return rlsc1_m633; else {rlsc1_p633=T;return rlsc1_m633=(rlsc1_v6273==rlsc1_f634());}}
static double rlsc1_f627(){if (rlsc1_p627) return rlsc1_m627; else {rlsc1_p627=T;return rlsc1_m627=(rlsc1_f633()?(rlsc1_f629()?rlsc1_f1076():(0.0)):(1.0));}}
static double rlsc1_f622(){if (rlsc1_p622) return rlsc1_m622; else {rlsc1_p622=T;return rlsc1_m622=((rlsc1_f630()-rlsc1_v6271)/(rlsc1_f634()-rlsc1_v6273));}}
static double rlsc1_f615(){if (rlsc1_p615) return rlsc1_m615; else {rlsc1_p615=T;return rlsc1_m615=(rlsc1_f633()?(rlsc1_f629()?rlsc1_f1076():rlsc1_f630()):(rlsc1_f634()+(rlsc1_f622()*rlsc1_f630())));}}
static double rlsc1_f621(){if (rlsc1_p621) return rlsc1_m621; else {rlsc1_p621=T;return rlsc1_m621=(rlsc1_f633()?(rlsc1_f629()?rlsc1_f1076():(1.0)):rlsc1_f622());}}
static double rlsc1_f560(){if (rlsc1_p560) return rlsc1_m560; else {rlsc1_p560=T;return rlsc1_m560=((rlsc1_v568=rlsc1_f568()),(((rlsc1_f627()*(rlsc1_f634()+cos(rlsc1_v568)))+(rlsc1_f621()*(rlsc1_f630()+sin(rlsc1_v568))))-rlsc1_f615()));}}
static double rlsc1_f607(){if (rlsc1_p607) return rlsc1_m607; else {rlsc1_p607=T;return rlsc1_m607=(((rlsc1_f627()*rlsc1_v6273)+(rlsc1_f621()*rlsc1_v6271))-rlsc1_f615());}}
static double rlsc1_f614(){if (rlsc1_p614) return rlsc1_m614; else {rlsc1_p614=T;return rlsc1_m614=(((rlsc1_f627()*rlsc1_v6281)+(rlsc1_f621()*rlsc1_v6279))-rlsc1_f615());}}
static int rlsc1_f611(){if (rlsc1_p611) return rlsc1_m611; else {rlsc1_p611=T;return rlsc1_m611=(fabs((rlsc1_f614()-(0.0)))<rlsc1_v6259);}}
static int rlsc1_f602(){if (rlsc1_p602) return rlsc1_m602; else {rlsc1_p602=T;return rlsc1_m602=(rlsc1_f614()>(0.0));}}
static int rlsc1_f601(){if (rlsc1_p601) return rlsc1_m601; else {rlsc1_p601=T;return rlsc1_m601=(rlsc1_f602()?NIL:T);}}
static int rlsc1_f550(){if (rlsc1_p550) return rlsc1_m550; else {rlsc1_p550=T;return rlsc1_m550=((rlsc1_v576=rlsc1_f576()),(rlsc1_v576?rlsc1_v576:(((fabs((rlsc1_v6265-rlsc1_f634()))<rlsc1_v6259)?(fabs((rlsc1_v6263-rlsc1_f630()))<rlsc1_v6259):NIL)?NIL:((rlsc1_f611()?T:((rlsc1_v560=rlsc1_f560()),((fabs((rlsc1_v560-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v560>(0.0))?rlsc1_f602():rlsc1_f601()))))?NIL:T))));}}
static int rlsc1_f455(){if (rlsc1_p455) return rlsc1_m455; else {rlsc1_p455=T;return rlsc1_m455=(rlsc1_f550()?rlsc1_f464():NIL);}}
static double rlsc1_f430(){if (rlsc1_p430) return rlsc1_m430; else {rlsc1_p430=T;return rlsc1_m430=(rlsc1_f550()?(rlsc1_f465()?(rlsc1_f473()?((rlsc1_v589=rlsc1_f589()),(rlsc1_v534=rlsc1_f534()),((rlsc1_v589>rlsc1_v534)?rlsc1_v589:rlsc1_v534)):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static double rlsc1_f547(){if (rlsc1_p547) return rlsc1_m547; else {rlsc1_p547=T;return rlsc1_m547=(rlsc1_f550()?rlsc1_f589():rlsc1_f2393());}}
static double rlsc1_f549(){if (rlsc1_p549) return rlsc1_m549; else {rlsc1_p549=T;return rlsc1_m549=(rlsc1_f550()?rlsc1_f589():rlsc1_f2397());}}
static int rlsc1_f548(){if (rlsc1_p548) return rlsc1_m548; else {rlsc1_p548=T;return rlsc1_m548=(rlsc1_f549()<(0.0));}}
static int rlsc1_f542(){if (rlsc1_p542) return rlsc1_m542; else {rlsc1_p542=T;return rlsc1_m542=(rlsc1_f550()?((rlsc1_v548=rlsc1_f548()),(rlsc1_v548?rlsc1_v548:(fabs((rlsc1_f547()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f598(){if (rlsc1_p598) return rlsc1_m598; else {rlsc1_p598=T;return rlsc1_m598=(rlsc1_f611()?NIL:((rlsc1_v607=rlsc1_f607()),((fabs((rlsc1_v607-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v607>(0.0))?rlsc1_f602():rlsc1_f601()))));}}
static double rlsc1_f3620(){if (rlsc1_p3620) return rlsc1_m3620; else {rlsc1_p3620=T;return rlsc1_m3620=(rlsc1_f3641()/rlsc1_f6220());}}
static double rlsc1_f3636(){if (rlsc1_p3636) return rlsc1_m3636; else {rlsc1_p3636=T;return rlsc1_m3636=(rlsc1_f3641()+rlsc1_f6247());}}
static int rlsc1_f3634(){if (rlsc1_p3634) return rlsc1_m3634; else {rlsc1_p3634=T;return rlsc1_m3634=((rlsc1_v3636=rlsc1_f3636()),(rlsc1_f4055()>(rlsc1_v3636*rlsc1_v3636)));}}
static int rlsc1_f3626(){if (rlsc1_p3626) return rlsc1_m3626; else {rlsc1_p3626=T;return rlsc1_m3626=(rlsc1_f6220()>rlsc1_f3636());}}
static int rlsc1_f3583(){if (rlsc1_p3583) return rlsc1_m3583; else {rlsc1_p3583=T;return rlsc1_m3583=(rlsc1_f4017()>rlsc1_f3636());}}
static int rlsc1_f3581(){if (rlsc1_p3581) return rlsc1_m3581; else {rlsc1_p3581=T;return rlsc1_m3581=((rlsc1_v3583=rlsc1_f3583()),(rlsc1_v3583?rlsc1_v3583:(rlsc1_f3641()>rlsc1_f6247())));}}
static double rlsc1_f3633(){if (rlsc1_p3633) return rlsc1_m3633; else {rlsc1_p3633=T;return rlsc1_m3633=(rlsc1_f6220()-rlsc1_f3636());}}
static int rlsc1_f3631(){if (rlsc1_p3631) return rlsc1_m3631; else {rlsc1_p3631=T;return rlsc1_m3631=(fabs(rlsc1_f3633())<rlsc1_v6259);}}
static int rlsc1_f3627(){if (rlsc1_p3627) return rlsc1_m3627; else {rlsc1_p3627=T;return rlsc1_m3627=((rlsc1_v3631=rlsc1_f3631()),(rlsc1_v3631?rlsc1_v3631:(fabs((rlsc1_f6220()-fabs((rlsc1_f3641()-rlsc1_f6247()))))<rlsc1_v6259)));}}
static int rlsc1_f594(){if (rlsc1_p594) return rlsc1_m594; else {rlsc1_p594=T;return rlsc1_m594=((rlsc1_v3627=rlsc1_f3627()),(rlsc1_v3627?(rlsc1_f3581()?rlsc1_f598():(rlsc1_f598()?NIL:T)):(rlsc1_v3627?NIL:T)));}}
static double rlsc1_f738(){if (rlsc1_p738) return rlsc1_m738; else {rlsc1_p738=T;return rlsc1_m738=((rlsc1_v3626=rlsc1_f3626()),((rlsc1_v3626?rlsc1_v3626:rlsc1_f3631())?((rlsc1_f3641()+((0.5)*rlsc1_f3633()))/rlsc1_f6220()):((rlsc1_f3641()<rlsc1_f6247())?(-rlsc1_f3620()):(rlsc1_f3620()+(1.0)))));}}
static double rlsc1_f733(){if (rlsc1_p733) return rlsc1_m733; else {rlsc1_p733=T;return rlsc1_m733=(rlsc1_v6263+(rlsc1_f738()*rlsc1_f5625()));}}
static int rlsc1_f732(){if (rlsc1_p732) return rlsc1_m732; else {rlsc1_p732=T;return rlsc1_m732=(rlsc1_v6271==rlsc1_f733());}}
static double rlsc1_f736(){if (rlsc1_p736) return rlsc1_m736; else {rlsc1_p736=T;return rlsc1_m736=(rlsc1_v6265+(rlsc1_f738()*rlsc1_f5624()));}}
static double rlsc1_f696(){if (rlsc1_p696) return rlsc1_m696; else {rlsc1_p696=T;return rlsc1_m696=atan2((rlsc1_f733()-rlsc1_v6263),(rlsc1_f736()-rlsc1_v6265));}}
static double rlsc1_f673(){if (rlsc1_p673) return rlsc1_m673; else {rlsc1_p673=T;return rlsc1_m673=(rlsc1_f696()+(-1.5707963267948966));}}
static double rlsc1_f694(){if (rlsc1_p694) return rlsc1_m694; else {rlsc1_p694=T;return rlsc1_m694=normalize_rotation((rlsc1_f696()-rlsc1_f3535()));}}
static double rlsc1_f693(){if (rlsc1_p693) return rlsc1_m693; else {rlsc1_p693=T;return rlsc1_m693=normalize_rotation(rlsc1_f694());}}
static int rlsc1_f681(){if (rlsc1_p681) return rlsc1_m681; else {rlsc1_p681=T;return rlsc1_m681=((rlsc1_v693=rlsc1_f693()),((fabs((rlsc1_v693-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v693-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v693-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f735(){if (rlsc1_p735) return rlsc1_m735; else {rlsc1_p735=T;return rlsc1_m735=(rlsc1_v6273==rlsc1_f736());}}
static double rlsc1_f730(){if (rlsc1_p730) return rlsc1_m730; else {rlsc1_p730=T;return rlsc1_m730=(rlsc1_f735()?(rlsc1_f732()?rlsc1_f1076():(0.0)):(1.0));}}
static double rlsc1_f725(){if (rlsc1_p725) return rlsc1_m725; else {rlsc1_p725=T;return rlsc1_m725=((rlsc1_f733()-rlsc1_v6271)/(rlsc1_f736()-rlsc1_v6273));}}
static double rlsc1_f718(){if (rlsc1_p718) return rlsc1_m718; else {rlsc1_p718=T;return rlsc1_m718=(rlsc1_f735()?(rlsc1_f732()?rlsc1_f1076():rlsc1_f733()):(rlsc1_f736()+(rlsc1_f725()*rlsc1_f733())));}}
static double rlsc1_f724(){if (rlsc1_p724) return rlsc1_m724; else {rlsc1_p724=T;return rlsc1_m724=(rlsc1_f735()?(rlsc1_f732()?rlsc1_f1076():(1.0)):rlsc1_f725());}}
static double rlsc1_f665(){if (rlsc1_p665) return rlsc1_m665; else {rlsc1_p665=T;return rlsc1_m665=((rlsc1_v673=rlsc1_f673()),(((rlsc1_f730()*(rlsc1_f736()+cos(rlsc1_v673)))+(rlsc1_f724()*(rlsc1_f733()+sin(rlsc1_v673))))-rlsc1_f718()));}}
static double rlsc1_f710(){if (rlsc1_p710) return rlsc1_m710; else {rlsc1_p710=T;return rlsc1_m710=(((rlsc1_f730()*rlsc1_v6273)+(rlsc1_f724()*rlsc1_v6271))-rlsc1_f718());}}
static double rlsc1_f717(){if (rlsc1_p717) return rlsc1_m717; else {rlsc1_p717=T;return rlsc1_m717=(((rlsc1_f730()*rlsc1_v6281)+(rlsc1_f724()*rlsc1_v6279))-rlsc1_f718());}}
static int rlsc1_f714(){if (rlsc1_p714) return rlsc1_m714; else {rlsc1_p714=T;return rlsc1_m714=(fabs((rlsc1_f717()-(0.0)))<rlsc1_v6259);}}
static int rlsc1_f705(){if (rlsc1_p705) return rlsc1_m705; else {rlsc1_p705=T;return rlsc1_m705=(rlsc1_f717()>(0.0));}}
static int rlsc1_f704(){if (rlsc1_p704) return rlsc1_m704; else {rlsc1_p704=T;return rlsc1_m704=(rlsc1_f705()?NIL:T);}}
static int rlsc1_f655(){if (rlsc1_p655) return rlsc1_m655; else {rlsc1_p655=T;return rlsc1_m655=((rlsc1_v681=rlsc1_f681()),(rlsc1_v681?rlsc1_v681:(((fabs((rlsc1_v6265-rlsc1_f736()))<rlsc1_v6259)?(fabs((rlsc1_v6263-rlsc1_f733()))<rlsc1_v6259):NIL)?NIL:((rlsc1_f714()?T:((rlsc1_v665=rlsc1_f665()),((fabs((rlsc1_v665-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v665>(0.0))?rlsc1_f705():rlsc1_f704()))))?NIL:T))));}}
static double rlsc1_f439(){if (rlsc1_p439) return rlsc1_m439; else {rlsc1_p439=T;return rlsc1_m439=(rlsc1_f655()?rlsc1_f694():rlsc1_f779());}}
static double_or_symbol rlsc1_f18(){if (rlsc1_p18) return rlsc1_m18; else {rlsc1_p18=T;return rlsc1_m18=(rlsc1_f655()?coerce_double_to_double_or_symbol(rlsc1_f694()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsc1_f652(){if (rlsc1_p652) return rlsc1_m652; else {rlsc1_p652=T;return rlsc1_m652=(rlsc1_f655()?rlsc1_f694():rlsc1_f2393());}}
static double rlsc1_f654(){if (rlsc1_p654) return rlsc1_m654; else {rlsc1_p654=T;return rlsc1_m654=(rlsc1_f655()?rlsc1_f694():rlsc1_f2397());}}
static int rlsc1_f653(){if (rlsc1_p653) return rlsc1_m653; else {rlsc1_p653=T;return rlsc1_m653=(rlsc1_f654()<(0.0));}}
static int rlsc1_f647(){if (rlsc1_p647) return rlsc1_m647; else {rlsc1_p647=T;return rlsc1_m647=(rlsc1_f655()?((rlsc1_v653=rlsc1_f653()),(rlsc1_v653?rlsc1_v653:(fabs((rlsc1_f652()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f646(){if (rlsc1_p646) return rlsc1_m646; else {rlsc1_p646=T;return rlsc1_m646=(rlsc1_f647()?rlsc1_f655():NIL);}}
static double rlsc1_f445(){if (rlsc1_p445) return rlsc1_m445; else {rlsc1_p445=T;return rlsc1_m445=(rlsc1_f647()?rlsc1_f652():rlsc1_f2393());}}
static double rlsc1_f447(){if (rlsc1_p447) return rlsc1_m447; else {rlsc1_p447=T;return rlsc1_m447=(rlsc1_f647()?rlsc1_f654():rlsc1_f2397());}}
static int rlsc1_f446(){if (rlsc1_p446) return rlsc1_m446; else {rlsc1_p446=T;return rlsc1_m446=(rlsc1_f447()<(0.0));}}
static int rlsc1_f440(){if (rlsc1_p440) return rlsc1_m440; else {rlsc1_p440=T;return rlsc1_m440=(rlsc1_f646()?((rlsc1_v446=rlsc1_f446()),(rlsc1_v446?rlsc1_v446:(fabs((rlsc1_f445()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f701(){if (rlsc1_p701) return rlsc1_m701; else {rlsc1_p701=T;return rlsc1_m701=(rlsc1_f714()?NIL:((rlsc1_v710=rlsc1_f710()),((fabs((rlsc1_v710-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v710>(0.0))?rlsc1_f705():rlsc1_f704()))));}}
static int rlsc1_f699(){if (rlsc1_p699) return rlsc1_m699; else {rlsc1_p699=T;return rlsc1_m699=(rlsc1_f3581()?rlsc1_f701():(rlsc1_f701()?NIL:T));}}
static double rlsc1_f59(){if (rlsc1_p59) return rlsc1_m59; else {rlsc1_p59=T;return rlsc1_m59=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v439=rlsc1_f439()),((rlsc1_v1102>rlsc1_v439)?rlsc1_v1102:rlsc1_v439)):(rlsc1_f655()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v694=rlsc1_f694()),((rlsc1_v1102>rlsc1_v694)?rlsc1_v1102:rlsc1_v694)):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static double rlsc1_f418(){if (rlsc1_p418) return rlsc1_m418; else {rlsc1_p418=T;return rlsc1_m418=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?rlsc1_f439():rlsc1_f652()):rlsc1_f445()):rlsc1_f2393()):rlsc1_f2393());}}
static double rlsc1_f411(){if (rlsc1_p411) return rlsc1_m411; else {rlsc1_p411=T;return rlsc1_m411=(rlsc1_f744()?rlsc1_f2393():(rlsc1_f4054()?rlsc1_f2393():(rlsc1_f3634()?rlsc1_f418():(rlsc1_f639()?rlsc1_f418():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?rlsc1_f430():rlsc1_f547()):rlsc1_f461()):rlsc1_f2393())))));}}
static double rlsc1_f435(){if (rlsc1_p435) return rlsc1_m435; else {rlsc1_p435=T;return rlsc1_m435=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?rlsc1_f439():rlsc1_f654()):rlsc1_f447()):rlsc1_f2397()):rlsc1_f2397());}}
static double rlsc1_f423(){if (rlsc1_p423) return rlsc1_m423; else {rlsc1_p423=T;return rlsc1_m423=(rlsc1_f744()?rlsc1_f2397():(rlsc1_f4054()?rlsc1_f2397():(rlsc1_f3634()?rlsc1_f435():(rlsc1_f639()?rlsc1_f435():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?rlsc1_f430():rlsc1_f549()):rlsc1_f463()):rlsc1_f2397())))));}}
static int rlsc1_f422(){if (rlsc1_p422) return rlsc1_m422; else {rlsc1_p422=T;return rlsc1_m422=(rlsc1_f423()<(0.0));}}
static int rlsc1_f643(){if (rlsc1_p643) return rlsc1_m643; else {rlsc1_p643=T;return rlsc1_m643=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?rlsc1_f655():rlsc1_f646()):NIL):NIL);}}
static int rlsc1_f448(){if (rlsc1_p448) return rlsc1_m448; else {rlsc1_p448=T;return rlsc1_m448=(rlsc1_f744()?NIL:(rlsc1_f4054()?NIL:(rlsc1_f3634()?rlsc1_f643():(rlsc1_f639()?rlsc1_f643():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?rlsc1_f455():rlsc1_f550()):rlsc1_f464()):NIL)))));}}
static int rlsc1_f406(){if (rlsc1_p406) return rlsc1_m406; else {rlsc1_p406=T;return rlsc1_m406=(rlsc1_f448()?((rlsc1_v422=rlsc1_f422()),(rlsc1_v422?rlsc1_v422:(fabs((rlsc1_f411()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f405(){if (rlsc1_p405) return rlsc1_m405; else {rlsc1_p405=T;return rlsc1_m405=(rlsc1_f406()?rlsc1_f448():NIL);}}
static double rlsc1_f402(){if (rlsc1_p402) return rlsc1_m402; else {rlsc1_p402=T;return rlsc1_m402=(rlsc1_f406()?rlsc1_f411():rlsc1_f2393());}}
static double rlsc1_f404(){if (rlsc1_p404) return rlsc1_m404; else {rlsc1_p404=T;return rlsc1_m404=(rlsc1_f406()?rlsc1_f423():rlsc1_f2397());}}
static int rlsc1_f403(){if (rlsc1_p403) return rlsc1_m403; else {rlsc1_p403=T;return rlsc1_m403=(rlsc1_f404()<(0.0));}}
static int rlsc1_f397(){if (rlsc1_p397) return rlsc1_m397; else {rlsc1_p397=T;return rlsc1_m397=(rlsc1_f405()?((rlsc1_v403=rlsc1_f403()),(rlsc1_v403?rlsc1_v403:(fabs((rlsc1_f402()-(0.0)))<rlsc1_v6259))):NIL);}}
static double_or_symbol rlsc1_f13(){if (rlsc1_p13) return rlsc1_m13; else {rlsc1_p13=T;return rlsc1_m13=(rlsc1_f3627()?(rlsc1_f699()?((rlsc1_v647=rlsc1_f647()),(rlsc1_v647?(rlsc1_f440()?coerce_double_to_double_or_symbol(rlsc1_f439()):rlsc1_f18()):(rlsc1_v647?rlsc1_f18():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsc1_f4050(){if (rlsc1_p4050) return rlsc1_m4050; else {rlsc1_p4050=T;return rlsc1_m4050=((rlsc1_v4053=rlsc1_f4053()),sqrt(((rlsc1_v4053*rlsc1_v4053)+rlsc1_f5875())));}}
static double rlsc1_f4016(){if (rlsc1_p4016) return rlsc1_m4016; else {rlsc1_p4016=T;return rlsc1_m4016=((rlsc1_v4050=rlsc1_f4050()),(rlsc1_v4050*rlsc1_v4050));}}
static double rlsc1_f983(){if (rlsc1_p983) return rlsc1_m983; else {rlsc1_p983=T;return rlsc1_m983=(((rlsc1_f4055()+rlsc1_f4016())-rlsc1_f6194())/rlsc1_f984());}}
static double rlsc1_f973(){if (rlsc1_p973) return rlsc1_m973; else {rlsc1_p973=T;return rlsc1_m973=(rlsc1_f983()*rlsc1_f4004());}}
static double rlsc1_f979(){if (rlsc1_p979) return rlsc1_m979; else {rlsc1_p979=T;return rlsc1_m979=(rlsc1_f983()*rlsc1_f4005());}}
static double rlsc1_f981(){if (rlsc1_p981) return rlsc1_m981; else {rlsc1_p981=T;return rlsc1_m981=((rlsc1_v983=rlsc1_f983()),(rlsc1_f4016()-(rlsc1_v983*rlsc1_v983)));}}
static int rlsc1_f980(){if (rlsc1_p980) return rlsc1_m980; else {rlsc1_p980=T;return rlsc1_m980=(rlsc1_f981()<0.0);}}
static double rlsc1_f978(){if (rlsc1_p978) return rlsc1_m978; else {rlsc1_p978=T;return rlsc1_m978=sqrt(rlsc1_f981());}}
static double rlsc1_f972(){if (rlsc1_p972) return rlsc1_m972; else {rlsc1_p972=T;return rlsc1_m972=(rlsc1_f978()*rlsc1_f4005());}}
static double rlsc1_f881(){if (rlsc1_p881) return rlsc1_m881; else {rlsc1_p881=T;return rlsc1_m881=(rlsc1_v6263+(rlsc1_f973()-rlsc1_f972()));}}
static int rlsc1_f853(){if (rlsc1_p853) return rlsc1_m853; else {rlsc1_p853=T;return rlsc1_m853=(rlsc1_v6271==rlsc1_f881());}}
static double rlsc1_f971(){if (rlsc1_p971) return rlsc1_m971; else {rlsc1_p971=T;return rlsc1_m971=(rlsc1_v6263+rlsc1_f973()+rlsc1_f972());}}
static int rlsc1_f970(){if (rlsc1_p970) return rlsc1_m970; else {rlsc1_p970=T;return rlsc1_m970=(rlsc1_v6271==rlsc1_f971());}}
static double rlsc1_f977(){if (rlsc1_p977) return rlsc1_m977; else {rlsc1_p977=T;return rlsc1_m977=(rlsc1_f978()*rlsc1_f4004());}}
static double rlsc1_f879(){if (rlsc1_p879) return rlsc1_m879; else {rlsc1_p879=T;return rlsc1_m879=(rlsc1_v6265+rlsc1_f979()+rlsc1_f977());}}
static int rlsc1_f854(){if (rlsc1_p854) return rlsc1_m854; else {rlsc1_p854=T;return rlsc1_m854=(rlsc1_v6273==rlsc1_f879());}}
static double rlsc1_f851(){if (rlsc1_p851) return rlsc1_m851; else {rlsc1_p851=T;return rlsc1_m851=(rlsc1_f854()?(rlsc1_f853()?rlsc1_f1076():(0.0)):(1.0));}}
static double rlsc1_f846(){if (rlsc1_p846) return rlsc1_m846; else {rlsc1_p846=T;return rlsc1_m846=((rlsc1_f881()-rlsc1_v6271)/(rlsc1_f879()-rlsc1_v6273));}}
static double rlsc1_f839(){if (rlsc1_p839) return rlsc1_m839; else {rlsc1_p839=T;return rlsc1_m839=(rlsc1_f854()?(rlsc1_f853()?rlsc1_f1076():rlsc1_f881()):(rlsc1_f879()+(rlsc1_f846()*rlsc1_f881())));}}
static double rlsc1_f845(){if (rlsc1_p845) return rlsc1_m845; else {rlsc1_p845=T;return rlsc1_m845=(rlsc1_f854()?(rlsc1_f853()?rlsc1_f1076():(1.0)):rlsc1_f846());}}
static double rlsc1_f838(){if (rlsc1_p838) return rlsc1_m838; else {rlsc1_p838=T;return rlsc1_m838=(((rlsc1_f851()*rlsc1_v6277)+(rlsc1_f845()*rlsc1_v6275))-rlsc1_f839());}}
static int rlsc1_f821(){if (rlsc1_p821) return rlsc1_m821; else {rlsc1_p821=T;return rlsc1_m821=(rlsc1_f838()>(0.0));}}
static double rlsc1_f877(){if (rlsc1_p877) return rlsc1_m877; else {rlsc1_p877=T;return rlsc1_m877=atan2((rlsc1_f881()-rlsc1_v6263),(rlsc1_f879()-rlsc1_v6265));}}
static double rlsc1_f834(){if (rlsc1_p834) return rlsc1_m834; else {rlsc1_p834=T;return rlsc1_m834=(rlsc1_f877()+(-1.5707963267948966));}}
static double rlsc1_f826(){if (rlsc1_p826) return rlsc1_m826; else {rlsc1_p826=T;return rlsc1_m826=((rlsc1_v834=rlsc1_f834()),(((rlsc1_f851()*(rlsc1_f879()+cos(rlsc1_v834)))+(rlsc1_f845()*(rlsc1_f881()+sin(rlsc1_v834))))-rlsc1_f839()));}}
static double rlsc1_f875(){if (rlsc1_p875) return rlsc1_m875; else {rlsc1_p875=T;return rlsc1_m875=normalize_rotation((rlsc1_f877()-rlsc1_f3936()));}}
static int rlsc1_f303(){if (rlsc1_p303) return rlsc1_m303; else {rlsc1_p303=T;return rlsc1_m303=(rlsc1_f875()>rlsc1_f430());}}
static int rlsc1_f309(){if (rlsc1_p309) return rlsc1_m309; else {rlsc1_p309=T;return rlsc1_m309=(rlsc1_f875()>rlsc1_f439());}}
static int rlsc1_f304(){if (rlsc1_p304) return rlsc1_m304; else {rlsc1_p304=T;return rlsc1_m304=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f309()?T:rlsc1_f655()):rlsc1_f655()):NIL):NIL):NIL);}}
static double rlsc1_f184(){if (rlsc1_p184) return rlsc1_m184; else {rlsc1_p184=T;return rlsc1_m184=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f309()?rlsc1_f875():rlsc1_f439()):(rlsc1_f655()?((rlsc1_v875=rlsc1_f875()),(rlsc1_v694=rlsc1_f694()),((rlsc1_v875>rlsc1_v694)?rlsc1_v875:rlsc1_v694)):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static double rlsc1_f874(){if (rlsc1_p874) return rlsc1_m874; else {rlsc1_p874=T;return rlsc1_m874=normalize_rotation(rlsc1_f875());}}
static int rlsc1_f862(){if (rlsc1_p862) return rlsc1_m862; else {rlsc1_p862=T;return rlsc1_m862=((rlsc1_v874=rlsc1_f874()),((fabs((rlsc1_v874-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v874-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v874-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f814(){if (rlsc1_p814) return rlsc1_m814; else {rlsc1_p814=T;return rlsc1_m814=((rlsc1_v862=rlsc1_f862()),(rlsc1_v862?rlsc1_v862:(((fabs((rlsc1_v6265-rlsc1_f879()))<rlsc1_v6259)?(fabs((rlsc1_v6263-rlsc1_f881()))<rlsc1_v6259):NIL)?NIL:(((fabs((rlsc1_f838()-(0.0)))<rlsc1_v6259)?T:((rlsc1_v826=rlsc1_f826()),((fabs((rlsc1_v826-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v826>(0.0))?rlsc1_f821():(rlsc1_f821()?NIL:T)))))?NIL:T))));}}
static double rlsc1_f811(){if (rlsc1_p811) return rlsc1_m811; else {rlsc1_p811=T;return rlsc1_m811=(rlsc1_f814()?rlsc1_f875():rlsc1_f2393());}}
static double rlsc1_f813(){if (rlsc1_p813) return rlsc1_m813; else {rlsc1_p813=T;return rlsc1_m813=(rlsc1_f814()?rlsc1_f875():rlsc1_f2397());}}
static int rlsc1_f812(){if (rlsc1_p812) return rlsc1_m812; else {rlsc1_p812=T;return rlsc1_m812=(rlsc1_f813()<(0.0));}}
static int rlsc1_f806(){if (rlsc1_p806) return rlsc1_m806; else {rlsc1_p806=T;return rlsc1_m806=(rlsc1_f814()?((rlsc1_v812=rlsc1_f812()),(rlsc1_v812?rlsc1_v812:(fabs((rlsc1_f811()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f805(){if (rlsc1_p805) return rlsc1_m805; else {rlsc1_p805=T;return rlsc1_m805=(rlsc1_f806()?rlsc1_f814():NIL);}}
static double rlsc1_f802(){if (rlsc1_p802) return rlsc1_m802; else {rlsc1_p802=T;return rlsc1_m802=(rlsc1_f806()?rlsc1_f811():rlsc1_f2393());}}
static double rlsc1_f804(){if (rlsc1_p804) return rlsc1_m804; else {rlsc1_p804=T;return rlsc1_m804=(rlsc1_f806()?rlsc1_f813():rlsc1_f2397());}}
static int rlsc1_f803(){if (rlsc1_p803) return rlsc1_m803; else {rlsc1_p803=T;return rlsc1_m803=(rlsc1_f804()<(0.0));}}
static int rlsc1_f797(){if (rlsc1_p797) return rlsc1_m797; else {rlsc1_p797=T;return rlsc1_m797=(rlsc1_f805()?((rlsc1_v803=rlsc1_f803()),(rlsc1_v803?rlsc1_v803:(fabs((rlsc1_f802()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f975(){if (rlsc1_p975) return rlsc1_m975; else {rlsc1_p975=T;return rlsc1_m975=(rlsc1_v6265+(rlsc1_f979()-rlsc1_f977()));}}
static double rlsc1_f932(){if (rlsc1_p932) return rlsc1_m932; else {rlsc1_p932=T;return rlsc1_m932=atan2((rlsc1_f971()-rlsc1_v6263),(rlsc1_f975()-rlsc1_v6265));}}
static double rlsc1_f909(){if (rlsc1_p909) return rlsc1_m909; else {rlsc1_p909=T;return rlsc1_m909=(rlsc1_f932()+(-1.5707963267948966));}}
static double rlsc1_f930(){if (rlsc1_p930) return rlsc1_m930; else {rlsc1_p930=T;return rlsc1_m930=normalize_rotation((rlsc1_f932()-rlsc1_f3936()));}}
static int rlsc1_f320(){if (rlsc1_p320) return rlsc1_m320; else {rlsc1_p320=T;return rlsc1_m320=(rlsc1_f930()>rlsc1_f430());}}
static int rlsc1_f326(){if (rlsc1_p326) return rlsc1_m326; else {rlsc1_p326=T;return rlsc1_m326=(rlsc1_f930()>rlsc1_f439());}}
static int rlsc1_f321(){if (rlsc1_p321) return rlsc1_m321; else {rlsc1_p321=T;return rlsc1_m321=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f326()?T:rlsc1_f655()):rlsc1_f655()):NIL):NIL):NIL);}}
static double rlsc1_f209(){if (rlsc1_p209) return rlsc1_m209; else {rlsc1_p209=T;return rlsc1_m209=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f326()?rlsc1_f930():rlsc1_f439()):(rlsc1_f655()?((rlsc1_v930=rlsc1_f930()),(rlsc1_v694=rlsc1_f694()),((rlsc1_v930>rlsc1_v694)?rlsc1_v930:rlsc1_v694)):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static double rlsc1_f929(){if (rlsc1_p929) return rlsc1_m929; else {rlsc1_p929=T;return rlsc1_m929=normalize_rotation(rlsc1_f930());}}
static int rlsc1_f917(){if (rlsc1_p917) return rlsc1_m917; else {rlsc1_p917=T;return rlsc1_m917=((rlsc1_v929=rlsc1_f929()),((fabs((rlsc1_v929-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v929-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v929-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f974(){if (rlsc1_p974) return rlsc1_m974; else {rlsc1_p974=T;return rlsc1_m974=(rlsc1_v6273==rlsc1_f975());}}
static double rlsc1_f968(){if (rlsc1_p968) return rlsc1_m968; else {rlsc1_p968=T;return rlsc1_m968=(rlsc1_f974()?(rlsc1_f970()?rlsc1_f1076():(0.0)):(1.0));}}
static double rlsc1_f963(){if (rlsc1_p963) return rlsc1_m963; else {rlsc1_p963=T;return rlsc1_m963=((rlsc1_f971()-rlsc1_v6271)/(rlsc1_f975()-rlsc1_v6273));}}
static double rlsc1_f956(){if (rlsc1_p956) return rlsc1_m956; else {rlsc1_p956=T;return rlsc1_m956=(rlsc1_f974()?(rlsc1_f970()?rlsc1_f1076():rlsc1_f971()):(rlsc1_f975()+(rlsc1_f963()*rlsc1_f971())));}}
static double rlsc1_f962(){if (rlsc1_p962) return rlsc1_m962; else {rlsc1_p962=T;return rlsc1_m962=(rlsc1_f974()?(rlsc1_f970()?rlsc1_f1076():(1.0)):rlsc1_f963());}}
static double rlsc1_f901(){if (rlsc1_p901) return rlsc1_m901; else {rlsc1_p901=T;return rlsc1_m901=((rlsc1_v909=rlsc1_f909()),(((rlsc1_f968()*(rlsc1_f975()+cos(rlsc1_v909)))+(rlsc1_f962()*(rlsc1_f971()+sin(rlsc1_v909))))-rlsc1_f956()));}}
static double rlsc1_f948(){if (rlsc1_p948) return rlsc1_m948; else {rlsc1_p948=T;return rlsc1_m948=(((rlsc1_f968()*rlsc1_v6273)+(rlsc1_f962()*rlsc1_v6271))-rlsc1_f956());}}
static double rlsc1_f955(){if (rlsc1_p955) return rlsc1_m955; else {rlsc1_p955=T;return rlsc1_m955=(((rlsc1_f968()*rlsc1_v6277)+(rlsc1_f962()*rlsc1_v6275))-rlsc1_f956());}}
static int rlsc1_f952(){if (rlsc1_p952) return rlsc1_m952; else {rlsc1_p952=T;return rlsc1_m952=(fabs((rlsc1_f955()-(0.0)))<rlsc1_v6259);}}
static int rlsc1_f943(){if (rlsc1_p943) return rlsc1_m943; else {rlsc1_p943=T;return rlsc1_m943=(rlsc1_f955()>(0.0));}}
static int rlsc1_f942(){if (rlsc1_p942) return rlsc1_m942; else {rlsc1_p942=T;return rlsc1_m942=(rlsc1_f943()?NIL:T);}}
static int rlsc1_f891(){if (rlsc1_p891) return rlsc1_m891; else {rlsc1_p891=T;return rlsc1_m891=((rlsc1_v917=rlsc1_f917()),(rlsc1_v917?rlsc1_v917:(((fabs((rlsc1_v6265-rlsc1_f975()))<rlsc1_v6259)?(fabs((rlsc1_v6263-rlsc1_f971()))<rlsc1_v6259):NIL)?NIL:((rlsc1_f952()?T:((rlsc1_v901=rlsc1_f901()),((fabs((rlsc1_v901-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v901>(0.0))?rlsc1_f943():rlsc1_f942()))))?NIL:T))));}}
static double rlsc1_f769(){if (rlsc1_p769) return rlsc1_m769; else {rlsc1_p769=T;return rlsc1_m769=(rlsc1_f891()?(rlsc1_f806()?(rlsc1_f814()?((rlsc1_v930=rlsc1_f930()),(rlsc1_v875=rlsc1_f875()),((rlsc1_v930>rlsc1_v875)?rlsc1_v930:rlsc1_v875)):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static int rlsc1_f342(){if (rlsc1_p342) return rlsc1_m342; else {rlsc1_p342=T;return rlsc1_m342=(rlsc1_f769()>rlsc1_f430());}}
static int rlsc1_f340(){if (rlsc1_p340) return rlsc1_m340; else {rlsc1_p340=T;return rlsc1_m340=(rlsc1_f769()>rlsc1_f589());}}
static int rlsc1_f336(){if (rlsc1_p336) return rlsc1_m336; else {rlsc1_p336=T;return rlsc1_m336=(rlsc1_f769()>rlsc1_f534());}}
static int rlsc1_f351(){if (rlsc1_p351) return rlsc1_m351; else {rlsc1_p351=T;return rlsc1_m351=(rlsc1_f769()>rlsc1_f439());}}
static int rlsc1_f349(){if (rlsc1_p349) return rlsc1_m349; else {rlsc1_p349=T;return rlsc1_m349=(rlsc1_f769()>rlsc1_f694());}}
static double rlsc1_f230(){if (rlsc1_p230) return rlsc1_m230; else {rlsc1_p230=T;return rlsc1_m230=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f351()?rlsc1_f769():rlsc1_f439()):(rlsc1_f655()?(rlsc1_f349()?rlsc1_f769():rlsc1_f694()):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static int rlsc1_f796(){if (rlsc1_p796) return rlsc1_m796; else {rlsc1_p796=T;return rlsc1_m796=(rlsc1_f891()?rlsc1_f805():NIL);}}
static int rlsc1_f343(){if (rlsc1_p343) return rlsc1_m343; else {rlsc1_p343=T;return rlsc1_m343=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f351()?rlsc1_f796():rlsc1_f655()):(rlsc1_f655()?(rlsc1_f349()?rlsc1_f796():T):NIL)):NIL):NIL):NIL);}}
static double rlsc1_f888(){if (rlsc1_p888) return rlsc1_m888; else {rlsc1_p888=T;return rlsc1_m888=(rlsc1_f891()?rlsc1_f930():rlsc1_f2393());}}
static double rlsc1_f890(){if (rlsc1_p890) return rlsc1_m890; else {rlsc1_p890=T;return rlsc1_m890=(rlsc1_f891()?rlsc1_f930():rlsc1_f2397());}}
static int rlsc1_f889(){if (rlsc1_p889) return rlsc1_m889; else {rlsc1_p889=T;return rlsc1_m889=(rlsc1_f890()<(0.0));}}
static int rlsc1_f883(){if (rlsc1_p883) return rlsc1_m883; else {rlsc1_p883=T;return rlsc1_m883=(rlsc1_f891()?((rlsc1_v889=rlsc1_f889()),(rlsc1_v889?rlsc1_v889:(fabs((rlsc1_f888()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f939(){if (rlsc1_p939) return rlsc1_m939; else {rlsc1_p939=T;return rlsc1_m939=(rlsc1_f952()?NIL:((rlsc1_v948=rlsc1_f948()),((fabs((rlsc1_v948-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v948>(0.0))?rlsc1_f943():rlsc1_f942()))));}}
static double rlsc1_f4028(){if (rlsc1_p4028) return rlsc1_m4028; else {rlsc1_p4028=T;return rlsc1_m4028=(rlsc1_f4050()/rlsc1_f6220());}}
static double rlsc1_f4044(){if (rlsc1_p4044) return rlsc1_m4044; else {rlsc1_p4044=T;return rlsc1_m4044=(rlsc1_f4050()+rlsc1_f6247());}}
static int rlsc1_f4042(){if (rlsc1_p4042) return rlsc1_m4042; else {rlsc1_p4042=T;return rlsc1_m4042=((rlsc1_v4044=rlsc1_f4044()),(rlsc1_f4055()>(rlsc1_v4044*rlsc1_v4044)));}}
static int rlsc1_f4034(){if (rlsc1_p4034) return rlsc1_m4034; else {rlsc1_p4034=T;return rlsc1_m4034=(rlsc1_f6220()>rlsc1_f4044());}}
static int rlsc1_f3987(){if (rlsc1_p3987) return rlsc1_m3987; else {rlsc1_p3987=T;return rlsc1_m3987=(rlsc1_f4017()>rlsc1_f4044());}}
static int rlsc1_f3985(){if (rlsc1_p3985) return rlsc1_m3985; else {rlsc1_p3985=T;return rlsc1_m3985=((rlsc1_v3987=rlsc1_f3987()),(rlsc1_v3987?rlsc1_v3987:(rlsc1_f4050()>rlsc1_f6247())));}}
static double rlsc1_f4041(){if (rlsc1_p4041) return rlsc1_m4041; else {rlsc1_p4041=T;return rlsc1_m4041=(rlsc1_f6220()-rlsc1_f4044());}}
static int rlsc1_f4039(){if (rlsc1_p4039) return rlsc1_m4039; else {rlsc1_p4039=T;return rlsc1_m4039=(fabs(rlsc1_f4041())<rlsc1_v6259);}}
static int rlsc1_f4035(){if (rlsc1_p4035) return rlsc1_m4035; else {rlsc1_p4035=T;return rlsc1_m4035=((rlsc1_v4039=rlsc1_f4039()),(rlsc1_v4039?rlsc1_v4039:(fabs((rlsc1_f6220()-fabs((rlsc1_f4050()-rlsc1_f6247()))))<rlsc1_v6259)));}}
static int rlsc1_f935(){if (rlsc1_p935) return rlsc1_m935; else {rlsc1_p935=T;return rlsc1_m935=((rlsc1_v4035=rlsc1_f4035()),(rlsc1_v4035?(rlsc1_f3985()?rlsc1_f939():(rlsc1_f939()?NIL:T)):(rlsc1_v4035?NIL:T)));}}
static double rlsc1_f1084(){if (rlsc1_p1084) return rlsc1_m1084; else {rlsc1_p1084=T;return rlsc1_m1084=((rlsc1_v4034=rlsc1_f4034()),((rlsc1_v4034?rlsc1_v4034:rlsc1_f4039())?((rlsc1_f4050()+((0.5)*rlsc1_f4041()))/rlsc1_f6220()):((rlsc1_f4050()<rlsc1_f6247())?(-rlsc1_f4028()):(rlsc1_f4028()+(1.0)))));}}
static double rlsc1_f1079(){if (rlsc1_p1079) return rlsc1_m1079; else {rlsc1_p1079=T;return rlsc1_m1079=(rlsc1_v6263+(rlsc1_f1084()*rlsc1_f5625()));}}
static int rlsc1_f1078(){if (rlsc1_p1078) return rlsc1_m1078; else {rlsc1_p1078=T;return rlsc1_m1078=(rlsc1_v6271==rlsc1_f1079());}}
static double rlsc1_f1082(){if (rlsc1_p1082) return rlsc1_m1082; else {rlsc1_p1082=T;return rlsc1_m1082=(rlsc1_v6265+(rlsc1_f1084()*rlsc1_f5624()));}}
static double rlsc1_f1040(){if (rlsc1_p1040) return rlsc1_m1040; else {rlsc1_p1040=T;return rlsc1_m1040=atan2((rlsc1_f1079()-rlsc1_v6263),(rlsc1_f1082()-rlsc1_v6265));}}
static double rlsc1_f1016(){if (rlsc1_p1016) return rlsc1_m1016; else {rlsc1_p1016=T;return rlsc1_m1016=(rlsc1_f1040()+(-1.5707963267948966));}}
static double rlsc1_f1038(){if (rlsc1_p1038) return rlsc1_m1038; else {rlsc1_p1038=T;return rlsc1_m1038=normalize_rotation((rlsc1_f1040()-rlsc1_f3936()));}}
static int rlsc1_f365(){if (rlsc1_p365) return rlsc1_m365; else {rlsc1_p365=T;return rlsc1_m365=(rlsc1_f1038()>rlsc1_f430());}}
static int rlsc1_f371(){if (rlsc1_p371) return rlsc1_m371; else {rlsc1_p371=T;return rlsc1_m371=(rlsc1_f1038()>rlsc1_f439());}}
static int rlsc1_f366(){if (rlsc1_p366) return rlsc1_m366; else {rlsc1_p366=T;return rlsc1_m366=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f371()?T:rlsc1_f655()):rlsc1_f655()):NIL):NIL):NIL);}}
static double rlsc1_f257(){if (rlsc1_p257) return rlsc1_m257; else {rlsc1_p257=T;return rlsc1_m257=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f371()?rlsc1_f1038():rlsc1_f439()):(rlsc1_f655()?((rlsc1_v1038=rlsc1_f1038()),(rlsc1_v694=rlsc1_f694()),((rlsc1_v1038>rlsc1_v694)?rlsc1_v1038:rlsc1_v694)):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static double rlsc1_f1037(){if (rlsc1_p1037) return rlsc1_m1037; else {rlsc1_p1037=T;return rlsc1_m1037=normalize_rotation(rlsc1_f1038());}}
static int rlsc1_f1025(){if (rlsc1_p1025) return rlsc1_m1025; else {rlsc1_p1025=T;return rlsc1_m1025=((rlsc1_v1037=rlsc1_f1037()),((fabs((rlsc1_v1037-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1037-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1037-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f1081(){if (rlsc1_p1081) return rlsc1_m1081; else {rlsc1_p1081=T;return rlsc1_m1081=(rlsc1_v6273==rlsc1_f1082());}}
static double rlsc1_f1074(){if (rlsc1_p1074) return rlsc1_m1074; else {rlsc1_p1074=T;return rlsc1_m1074=(rlsc1_f1081()?(rlsc1_f1078()?rlsc1_f1076():(0.0)):(1.0));}}
static double rlsc1_f1069(){if (rlsc1_p1069) return rlsc1_m1069; else {rlsc1_p1069=T;return rlsc1_m1069=((rlsc1_f1079()-rlsc1_v6271)/(rlsc1_f1082()-rlsc1_v6273));}}
static double rlsc1_f1062(){if (rlsc1_p1062) return rlsc1_m1062; else {rlsc1_p1062=T;return rlsc1_m1062=(rlsc1_f1081()?(rlsc1_f1078()?rlsc1_f1076():rlsc1_f1079()):(rlsc1_f1082()+(rlsc1_f1069()*rlsc1_f1079())));}}
static double rlsc1_f1068(){if (rlsc1_p1068) return rlsc1_m1068; else {rlsc1_p1068=T;return rlsc1_m1068=(rlsc1_f1081()?(rlsc1_f1078()?rlsc1_f1076():(1.0)):rlsc1_f1069());}}
static double rlsc1_f1008(){if (rlsc1_p1008) return rlsc1_m1008; else {rlsc1_p1008=T;return rlsc1_m1008=((rlsc1_v1016=rlsc1_f1016()),(((rlsc1_f1074()*(rlsc1_f1082()+cos(rlsc1_v1016)))+(rlsc1_f1068()*(rlsc1_f1079()+sin(rlsc1_v1016))))-rlsc1_f1062()));}}
static double rlsc1_f1054(){if (rlsc1_p1054) return rlsc1_m1054; else {rlsc1_p1054=T;return rlsc1_m1054=(((rlsc1_f1074()*rlsc1_v6273)+(rlsc1_f1068()*rlsc1_v6271))-rlsc1_f1062());}}
static double rlsc1_f1061(){if (rlsc1_p1061) return rlsc1_m1061; else {rlsc1_p1061=T;return rlsc1_m1061=(((rlsc1_f1074()*rlsc1_v6277)+(rlsc1_f1068()*rlsc1_v6275))-rlsc1_f1062());}}
static int rlsc1_f1058(){if (rlsc1_p1058) return rlsc1_m1058; else {rlsc1_p1058=T;return rlsc1_m1058=(fabs((rlsc1_f1061()-(0.0)))<rlsc1_v6259);}}
static int rlsc1_f1049(){if (rlsc1_p1049) return rlsc1_m1049; else {rlsc1_p1049=T;return rlsc1_m1049=(rlsc1_f1061()>(0.0));}}
static int rlsc1_f1048(){if (rlsc1_p1048) return rlsc1_m1048; else {rlsc1_p1048=T;return rlsc1_m1048=(rlsc1_f1049()?NIL:T);}}
static int rlsc1_f998(){if (rlsc1_p998) return rlsc1_m998; else {rlsc1_p998=T;return rlsc1_m998=((rlsc1_v1025=rlsc1_f1025()),(rlsc1_v1025?rlsc1_v1025:(((fabs((rlsc1_v6265-rlsc1_f1082()))<rlsc1_v6259)?(fabs((rlsc1_v6263-rlsc1_f1079()))<rlsc1_v6259):NIL)?NIL:((rlsc1_f1058()?T:((rlsc1_v1008=rlsc1_f1008()),((fabs((rlsc1_v1008-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v1008>(0.0))?rlsc1_f1049():rlsc1_f1048()))))?NIL:T))));}}
static double_or_symbol rlsc1_f35(){if (rlsc1_p35) return rlsc1_m35; else {rlsc1_p35=T;return rlsc1_m35=(rlsc1_f998()?coerce_double_to_double_or_symbol(rlsc1_f1038()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsc1_f778(){if (rlsc1_p778) return rlsc1_m778; else {rlsc1_p778=T;return rlsc1_m778=(rlsc1_f998()?rlsc1_f1038():rlsc1_f779());}}
static int rlsc1_f387(){if (rlsc1_p387) return rlsc1_m387; else {rlsc1_p387=T;return rlsc1_m387=(rlsc1_f778()>rlsc1_f430());}}
static int rlsc1_f385(){if (rlsc1_p385) return rlsc1_m385; else {rlsc1_p385=T;return rlsc1_m385=(rlsc1_f778()>rlsc1_f589());}}
static int rlsc1_f381(){if (rlsc1_p381) return rlsc1_m381; else {rlsc1_p381=T;return rlsc1_m381=(rlsc1_f778()>rlsc1_f534());}}
static int rlsc1_f396(){if (rlsc1_p396) return rlsc1_m396; else {rlsc1_p396=T;return rlsc1_m396=(rlsc1_f778()>rlsc1_f439());}}
static int rlsc1_f394(){if (rlsc1_p394) return rlsc1_m394; else {rlsc1_p394=T;return rlsc1_m394=(rlsc1_f778()>rlsc1_f694());}}
static int rlsc1_f388(){if (rlsc1_p388) return rlsc1_m388; else {rlsc1_p388=T;return rlsc1_m388=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f396()?rlsc1_f998():rlsc1_f655()):(rlsc1_f655()?(rlsc1_f394()?rlsc1_f998():T):NIL)):NIL):NIL):NIL);}}
static double rlsc1_f278(){if (rlsc1_p278) return rlsc1_m278; else {rlsc1_p278=T;return rlsc1_m278=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?(rlsc1_f396()?rlsc1_f778():rlsc1_f439()):(rlsc1_f655()?(rlsc1_f394()?rlsc1_f778():rlsc1_f694()):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static double rlsc1_f995(){if (rlsc1_p995) return rlsc1_m995; else {rlsc1_p995=T;return rlsc1_m995=(rlsc1_f998()?rlsc1_f1038():rlsc1_f2393());}}
static double rlsc1_f997(){if (rlsc1_p997) return rlsc1_m997; else {rlsc1_p997=T;return rlsc1_m997=(rlsc1_f998()?rlsc1_f1038():rlsc1_f2397());}}
static int rlsc1_f996(){if (rlsc1_p996) return rlsc1_m996; else {rlsc1_p996=T;return rlsc1_m996=(rlsc1_f997()<(0.0));}}
static int rlsc1_f990(){if (rlsc1_p990) return rlsc1_m990; else {rlsc1_p990=T;return rlsc1_m990=(rlsc1_f998()?((rlsc1_v996=rlsc1_f996()),(rlsc1_v996?rlsc1_v996:(fabs((rlsc1_f995()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f786(){if (rlsc1_p786) return rlsc1_m786; else {rlsc1_p786=T;return rlsc1_m786=(rlsc1_f990()?rlsc1_f995():rlsc1_f2393());}}
static double rlsc1_f788(){if (rlsc1_p788) return rlsc1_m788; else {rlsc1_p788=T;return rlsc1_m788=(rlsc1_f990()?rlsc1_f997():rlsc1_f2397());}}
static int rlsc1_f787(){if (rlsc1_p787) return rlsc1_m787; else {rlsc1_p787=T;return rlsc1_m787=(rlsc1_f788()<(0.0));}}
static int rlsc1_f989(){if (rlsc1_p989) return rlsc1_m989; else {rlsc1_p989=T;return rlsc1_m989=(rlsc1_f990()?rlsc1_f998():NIL);}}
static int rlsc1_f781(){if (rlsc1_p781) return rlsc1_m781; else {rlsc1_p781=T;return rlsc1_m781=(rlsc1_f989()?((rlsc1_v787=rlsc1_f787()),(rlsc1_v787?rlsc1_v787:(fabs((rlsc1_f786()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f1045(){if (rlsc1_p1045) return rlsc1_m1045; else {rlsc1_p1045=T;return rlsc1_m1045=(rlsc1_f1058()?NIL:((rlsc1_v1054=rlsc1_f1054()),((fabs((rlsc1_v1054-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v1054>(0.0))?rlsc1_f1049():rlsc1_f1048()))));}}
static int rlsc1_f1043(){if (rlsc1_p1043) return rlsc1_m1043; else {rlsc1_p1043=T;return rlsc1_m1043=(rlsc1_f3985()?rlsc1_f1045():(rlsc1_f1045()?NIL:T));}}
static double rlsc1_f85(){if (rlsc1_p85) return rlsc1_m85; else {rlsc1_p85=T;return rlsc1_m85=(rlsc1_f4035()?(rlsc1_f1043()?(rlsc1_f990()?(rlsc1_f781()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v778=rlsc1_f778()),((rlsc1_v1102>rlsc1_v778)?rlsc1_v1102:rlsc1_v778)):(rlsc1_f998()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v1038=rlsc1_f1038()),((rlsc1_v1102>rlsc1_v1038)?rlsc1_v1102:rlsc1_v1038)):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static int rlsc1_f352(){if (rlsc1_p352) return rlsc1_m352; else {rlsc1_p352=T;return rlsc1_m352=(rlsc1_f4035()?(rlsc1_f1043()?(rlsc1_f990()?(rlsc1_f781()?(rlsc1_f406()?(rlsc1_f744()?NIL:(rlsc1_f3634()?rlsc1_f388():(rlsc1_f639()?rlsc1_f388():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f387()?rlsc1_f998():rlsc1_f455()):(rlsc1_f550()?(rlsc1_f385()?rlsc1_f998():T):NIL)):(rlsc1_f465()?(rlsc1_f473()?(rlsc1_f381()?rlsc1_f998():T):NIL):NIL)):NIL)))):NIL):(rlsc1_f998()?(rlsc1_f406()?(rlsc1_f744()?NIL:(rlsc1_f3634()?rlsc1_f366():(rlsc1_f639()?rlsc1_f366():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f365()?T:rlsc1_f455()):rlsc1_f550()):rlsc1_f464()):NIL)))):NIL):NIL)):NIL):NIL):NIL);}}
static double rlsc1_f237(){if (rlsc1_p237) return rlsc1_m237; else {rlsc1_p237=T;return rlsc1_m237=(rlsc1_f4035()?(rlsc1_f1043()?(rlsc1_f990()?(rlsc1_f781()?(rlsc1_f406()?(rlsc1_f744()?rlsc1_f779():(rlsc1_f3634()?rlsc1_f278():(rlsc1_f639()?rlsc1_f278():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f387()?rlsc1_f778():rlsc1_f430()):(rlsc1_f550()?(rlsc1_f385()?rlsc1_f778():rlsc1_f589()):rlsc1_f779())):(rlsc1_f465()?(rlsc1_f473()?(rlsc1_f381()?rlsc1_f778():rlsc1_f534()):rlsc1_f779()):rlsc1_f779())):rlsc1_f779())))):rlsc1_f779()):(rlsc1_f998()?(rlsc1_f406()?(rlsc1_f744()?rlsc1_f779():(rlsc1_f3634()?rlsc1_f257():(rlsc1_f639()?rlsc1_f257():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f365()?rlsc1_f1038():rlsc1_f430()):(rlsc1_f550()?((rlsc1_v1038=rlsc1_f1038()),(rlsc1_v589=rlsc1_f589()),((rlsc1_v1038>rlsc1_v589)?rlsc1_v1038:rlsc1_v589)):rlsc1_f779())):(rlsc1_f465()?(rlsc1_f473()?((rlsc1_v1038=rlsc1_f1038()),(rlsc1_v534=rlsc1_f534()),((rlsc1_v1038>rlsc1_v534)?rlsc1_v1038:rlsc1_v534)):rlsc1_f779()):rlsc1_f779())):rlsc1_f779())))):rlsc1_f779()):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static double rlsc1_f161(){if (rlsc1_p161) return rlsc1_m161; else {rlsc1_p161=T;return rlsc1_m161=(rlsc1_f1091()?rlsc1_f779():(rlsc1_f4054()?rlsc1_f779():(rlsc1_f4042()?rlsc1_f237():(rlsc1_f980()?rlsc1_f237():(rlsc1_f935()?(rlsc1_f883()?(rlsc1_f797()?(rlsc1_f406()?(rlsc1_f744()?rlsc1_f779():(rlsc1_f3634()?rlsc1_f230():(rlsc1_f639()?rlsc1_f230():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f342()?rlsc1_f769():rlsc1_f430()):(rlsc1_f550()?(rlsc1_f340()?rlsc1_f769():rlsc1_f589()):rlsc1_f779())):(rlsc1_f465()?(rlsc1_f473()?(rlsc1_f336()?rlsc1_f769():rlsc1_f534()):rlsc1_f779()):rlsc1_f779())):rlsc1_f779())))):rlsc1_f779()):(rlsc1_f891()?(rlsc1_f406()?(rlsc1_f744()?rlsc1_f779():(rlsc1_f3634()?rlsc1_f209():(rlsc1_f639()?rlsc1_f209():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f320()?rlsc1_f930():rlsc1_f430()):(rlsc1_f550()?((rlsc1_v930=rlsc1_f930()),(rlsc1_v589=rlsc1_f589()),((rlsc1_v930>rlsc1_v589)?rlsc1_v930:rlsc1_v589)):rlsc1_f779())):(rlsc1_f465()?(rlsc1_f473()?((rlsc1_v930=rlsc1_f930()),(rlsc1_v534=rlsc1_f534()),((rlsc1_v930>rlsc1_v534)?rlsc1_v930:rlsc1_v534)):rlsc1_f779()):rlsc1_f779())):rlsc1_f779())))):rlsc1_f779()):rlsc1_f779())):(rlsc1_f806()?(rlsc1_f814()?(rlsc1_f406()?(rlsc1_f744()?rlsc1_f779():(rlsc1_f3634()?rlsc1_f184():(rlsc1_f639()?rlsc1_f184():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f303()?rlsc1_f875():rlsc1_f430()):(rlsc1_f550()?((rlsc1_v875=rlsc1_f875()),(rlsc1_v589=rlsc1_f589()),((rlsc1_v875>rlsc1_v589)?rlsc1_v875:rlsc1_v589)):rlsc1_f779())):(rlsc1_f465()?(rlsc1_f473()?((rlsc1_v875=rlsc1_f875()),(rlsc1_v534=rlsc1_f534()),((rlsc1_v875>rlsc1_v534)?rlsc1_v875:rlsc1_v534)):rlsc1_f779()):rlsc1_f779())):rlsc1_f779())))):rlsc1_f779()):rlsc1_f779()):rlsc1_f779())):rlsc1_f779())))));}}
static double_or_symbol rlsc1_f30(){if (rlsc1_p30) return rlsc1_m30; else {rlsc1_p30=T;return rlsc1_m30=(rlsc1_f4035()?(rlsc1_f1043()?((rlsc1_v990=rlsc1_f990()),(rlsc1_v990?(rlsc1_f781()?coerce_double_to_double_or_symbol(rlsc1_f778()):rlsc1_f35()):(rlsc1_v990?rlsc1_f35():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsc1_f757(){if (rlsc1_p757) return rlsc1_m757; else {rlsc1_p757=T;return rlsc1_m757=(rlsc1_f4035()?(rlsc1_f1043()?(rlsc1_f990()?(rlsc1_f781()?rlsc1_f778():rlsc1_f995()):rlsc1_f786()):rlsc1_f2393()):rlsc1_f2393());}}
static double rlsc1_f750(){if (rlsc1_p750) return rlsc1_m750; else {rlsc1_p750=T;return rlsc1_m750=(rlsc1_f1091()?rlsc1_f2393():(rlsc1_f4054()?rlsc1_f2393():(rlsc1_f4042()?rlsc1_f757():(rlsc1_f980()?rlsc1_f757():(rlsc1_f935()?(rlsc1_f883()?(rlsc1_f797()?rlsc1_f769():rlsc1_f888()):rlsc1_f802()):rlsc1_f2393())))));}}
static double rlsc1_f774(){if (rlsc1_p774) return rlsc1_m774; else {rlsc1_p774=T;return rlsc1_m774=(rlsc1_f4035()?(rlsc1_f1043()?(rlsc1_f990()?(rlsc1_f781()?rlsc1_f778():rlsc1_f997()):rlsc1_f788()):rlsc1_f2397()):rlsc1_f2397());}}
static double rlsc1_f762(){if (rlsc1_p762) return rlsc1_m762; else {rlsc1_p762=T;return rlsc1_m762=(rlsc1_f1091()?rlsc1_f2397():(rlsc1_f4054()?rlsc1_f2397():(rlsc1_f4042()?rlsc1_f774():(rlsc1_f980()?rlsc1_f774():(rlsc1_f935()?(rlsc1_f883()?(rlsc1_f797()?rlsc1_f769():rlsc1_f890()):rlsc1_f804()):rlsc1_f2397())))));}}
static int rlsc1_f761(){if (rlsc1_p761) return rlsc1_m761; else {rlsc1_p761=T;return rlsc1_m761=(rlsc1_f762()<(0.0));}}
static int rlsc1_f986(){if (rlsc1_p986) return rlsc1_m986; else {rlsc1_p986=T;return rlsc1_m986=(rlsc1_f4035()?(rlsc1_f1043()?(rlsc1_f990()?rlsc1_f998():rlsc1_f989()):NIL):NIL);}}
static int rlsc1_f789(){if (rlsc1_p789) return rlsc1_m789; else {rlsc1_p789=T;return rlsc1_m789=(rlsc1_f1091()?NIL:(rlsc1_f4054()?NIL:(rlsc1_f4042()?rlsc1_f986():(rlsc1_f980()?rlsc1_f986():(rlsc1_f935()?(rlsc1_f883()?(rlsc1_f797()?rlsc1_f796():rlsc1_f891()):rlsc1_f805()):NIL)))));}}
static int rlsc1_f745(){if (rlsc1_p745) return rlsc1_m745; else {rlsc1_p745=T;return rlsc1_m745=(rlsc1_f789()?((rlsc1_v761=rlsc1_f761()),(rlsc1_v761?rlsc1_v761:(fabs((rlsc1_f750()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f158(){if (rlsc1_p158) return rlsc1_m158; else {rlsc1_p158=T;return rlsc1_m158=((rlsc1_f745()?(rlsc1_f397()?rlsc1_f161():rlsc1_f762()):rlsc1_f404())<(0.0));}}
static double rlsc1_f5873(){if (rlsc1_p5873) return rlsc1_m5873; else {rlsc1_p5873=T;return rlsc1_m5873=((rlsc1_v5878=rlsc1_f5878()),sqrt(((rlsc1_v5878*rlsc1_v5878)+rlsc1_f5875())));}}
static int rlsc1_f2052(){if (rlsc1_p2052) return rlsc1_m2052; else {rlsc1_p2052=T;return rlsc1_m2052=(fabs((((fabs((rlsc1_f2080()-(0.0)))<rlsc1_v6259)?rlsc1_f2759():((rlsc1_v2065=rlsc1_f2065()),(rlsc1_v2059=rlsc1_f2059()),sqrt(((rlsc1_v2065*rlsc1_v2065)+(rlsc1_v2059*rlsc1_v2059)))))-rlsc1_f5873()))<rlsc1_v6259);}}
static double rlsc1_f1605(){if (rlsc1_p1605) return rlsc1_m1605; else {rlsc1_p1605=T;return rlsc1_m1605=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?((rlsc1_v2164=rlsc1_f2164()),(rlsc1_v1722=rlsc1_f1722()),((rlsc1_v2164<rlsc1_v1722)?rlsc1_v2164:rlsc1_v1722)):(rlsc1_f1951()?((rlsc1_v2164=rlsc1_f2164()),(rlsc1_v1965=rlsc1_f1965()),((rlsc1_v2164<rlsc1_v1965)?rlsc1_v2164:rlsc1_v1965)):rlsc1_f2165())):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1560(){if (rlsc1_p1560) return rlsc1_m1560; else {rlsc1_p1560=T;return rlsc1_m1560=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?((rlsc1_v2642=rlsc1_f2642()),(rlsc1_v1722=rlsc1_f1722()),((rlsc1_v2642<rlsc1_v1722)?rlsc1_v2642:rlsc1_v1722)):(rlsc1_f1951()?((rlsc1_v2642=rlsc1_f2642()),(rlsc1_v1965=rlsc1_f1965()),((rlsc1_v2642<rlsc1_v1965)?rlsc1_v2642:rlsc1_v1965)):rlsc1_f2165())):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1190(){if (rlsc1_p1190) return rlsc1_m1190; else {rlsc1_p1190=T;return rlsc1_m1190=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?((rlsc1_v1943=rlsc1_f1943()),(rlsc1_v1943?(rlsc1_f1723()?rlsc1_f1722():rlsc1_f1196()):(rlsc1_v1943?rlsc1_f1196():rlsc1_f1615()))):rlsc1_f1615()):rlsc1_f1615()):rlsc1_f1615());}}
static int rlsc1_f1129(){if (rlsc1_p1129) return rlsc1_m1129; else {rlsc1_p1129=T;return rlsc1_m1129=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?NIL:(rlsc1_f1951()?NIL:T)):T):T):T):T);}}
static double rlsc1_f1685(){if (rlsc1_p1685) return rlsc1_m1685; else {rlsc1_p1685=T;return rlsc1_m1685=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?rlsc1_f1722():rlsc1_f1948()):rlsc1_f1728()):rlsc1_f2393()):rlsc1_f2393()):rlsc1_f2393());}}
static double rlsc1_f1717(){if (rlsc1_p1717) return rlsc1_m1717; else {rlsc1_p1717=T;return rlsc1_m1717=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?rlsc1_f1722():rlsc1_f1950()):rlsc1_f1730()):rlsc1_f2397()):rlsc1_f2397()):rlsc1_f2397());}}
static int rlsc1_f1938(){if (rlsc1_p1938) return rlsc1_m1938; else {rlsc1_p1938=T;return rlsc1_m1938=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?rlsc1_f1951():rlsc1_f1942()):NIL):NIL):NIL);}}
static int rlsc1_f2030(){if (rlsc1_p2030) return rlsc1_m2030; else {rlsc1_p2030=T;return rlsc1_m2030=((rlsc1_v2052=rlsc1_f2052()),(rlsc1_v2052?((fabs((rlsc1_f2048()-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v2041=rlsc1_f2041()),((fabs((rlsc1_v2041-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v2041>(0.0))?rlsc1_f2036():(rlsc1_f2036()?NIL:T))))):(rlsc1_v2052?NIL:T)));}}
static int rlsc1_f1632(){if (rlsc1_p1632) return rlsc1_m1632; else {rlsc1_p1632=T;return rlsc1_m1632=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?T:rlsc1_f1951()):NIL):NIL):NIL):NIL);}}
static double rlsc1_f5840(){if (rlsc1_p5840) return rlsc1_m5840; else {rlsc1_p5840=T;return rlsc1_m5840=((rlsc1_v5873=rlsc1_f5873()),(rlsc1_v5873*rlsc1_v5873));}}
static double rlsc1_f1838(){if (rlsc1_p1838) return rlsc1_m1838; else {rlsc1_p1838=T;return rlsc1_m1838=((rlsc1_v1844=rlsc1_f1844()),((rlsc1_v1844*rlsc1_v1844)-((4.0)*rlsc1_f1842()*(rlsc1_f2027()-(rlsc1_f2087()*rlsc1_f5840())))));}}
static int rlsc1_f1837(){if (rlsc1_p1837) return rlsc1_m1837; else {rlsc1_p1837=T;return rlsc1_m1837=(rlsc1_f1838()<0.0);}}
static double rlsc1_f1832(){if (rlsc1_p1832) return rlsc1_m1832; else {rlsc1_p1832=T;return rlsc1_m1832=(sqrt(rlsc1_f1838())/rlsc1_f1835());}}
static double rlsc1_f1816(){if (rlsc1_p1816) return rlsc1_m1816; else {rlsc1_p1816=T;return rlsc1_m1816=((rlsc1_f1834()-rlsc1_f1832())+rlsc1_v6263);}}
static double rlsc1_f1815(){if (rlsc1_p1815) return rlsc1_m1815; else {rlsc1_p1815=T;return rlsc1_m1815=(rlsc1_f2083()*rlsc1_f1816());}}
static double rlsc1_f1813(){if (rlsc1_p1813) return rlsc1_m1813; else {rlsc1_p1813=T;return rlsc1_m1813=((rlsc1_f2073()-rlsc1_f1815())/rlsc1_f2088());}}
static int rlsc1_f1804(){if (rlsc1_p1804) return rlsc1_m1804; else {rlsc1_p1804=T;return rlsc1_m1804=((rlsc1_v1813=rlsc1_f1813()),((fabs((((rlsc1_f2088()*rlsc1_v1813)+rlsc1_f1815())-rlsc1_f2073()))<rlsc1_v6259)?(((rlsc1_f1986()<=rlsc1_v1813)&&(rlsc1_v1813<=rlsc1_f1983()))?((rlsc1_f1979()<=rlsc1_f1816())&&(rlsc1_f1816()<=rlsc1_f1976())):NIL):NIL));}}
static double rlsc1_f1772(){if (rlsc1_p1772) return rlsc1_m1772; else {rlsc1_p1772=T;return rlsc1_m1772=normalize_rotation((atan2((rlsc1_f1816()-rlsc1_v6263),(rlsc1_f1813()-rlsc1_v6265))-rlsc1_f5623()));}}
static double rlsc1_f1771(){if (rlsc1_p1771) return rlsc1_m1771; else {rlsc1_p1771=T;return rlsc1_m1771=normalize_rotation(rlsc1_f1772());}}
static int rlsc1_f1759(){if (rlsc1_p1759) return rlsc1_m1759; else {rlsc1_p1759=T;return rlsc1_m1759=((rlsc1_v1771=rlsc1_f1771()),((fabs((rlsc1_v1771-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1771-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1771-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f1758(){if (rlsc1_p1758) return rlsc1_m1758; else {rlsc1_p1758=T;return rlsc1_m1758=((rlsc1_v1759=rlsc1_f1759()),(rlsc1_v1759?rlsc1_v1759:rlsc1_f2400()));}}
static double rlsc1_f1755(){if (rlsc1_p1755) return rlsc1_m1755; else {rlsc1_p1755=T;return rlsc1_m1755=(rlsc1_f1758()?rlsc1_f1772():rlsc1_f2393());}}
static double rlsc1_f1757(){if (rlsc1_p1757) return rlsc1_m1757; else {rlsc1_p1757=T;return rlsc1_m1757=(rlsc1_f1758()?rlsc1_f1772():rlsc1_f2397());}}
static int rlsc1_f1756(){if (rlsc1_p1756) return rlsc1_m1756; else {rlsc1_p1756=T;return rlsc1_m1756=(rlsc1_f1757()>(0.0));}}
static int rlsc1_f1750(){if (rlsc1_p1750) return rlsc1_m1750; else {rlsc1_p1750=T;return rlsc1_m1750=(rlsc1_f1758()?((rlsc1_v1756=rlsc1_f1756()),(rlsc1_v1756?rlsc1_v1756:(fabs((rlsc1_f1755()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f1579(){if (rlsc1_p1579) return rlsc1_m1579; else {rlsc1_p1579=T;return rlsc1_m1579=(rlsc1_f1750()?(rlsc1_f1758()?((rlsc1_v2164=rlsc1_f2164()),(rlsc1_v1772=rlsc1_f1772()),((rlsc1_v2164<rlsc1_v1772)?rlsc1_v2164:rlsc1_v1772)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1534(){if (rlsc1_p1534) return rlsc1_m1534; else {rlsc1_p1534=T;return rlsc1_m1534=(rlsc1_f1750()?(rlsc1_f1758()?((rlsc1_v2642=rlsc1_f2642()),(rlsc1_v1772=rlsc1_f1772()),((rlsc1_v2642<rlsc1_v1772)?rlsc1_v2642:rlsc1_v1772)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1176(){if (rlsc1_p1176) return rlsc1_m1176; else {rlsc1_p1176=T;return rlsc1_m1176=(rlsc1_f1750()?(rlsc1_f1758()?rlsc1_f1772():rlsc1_f1615()):rlsc1_f1615());}}
static int rlsc1_f1115(){if (rlsc1_p1115) return rlsc1_m1115; else {rlsc1_p1115=T;return rlsc1_m1115=(rlsc1_f1750()?(rlsc1_f1758()?NIL:T):T);}}
static double rlsc1_f1746(){if (rlsc1_p1746) return rlsc1_m1746; else {rlsc1_p1746=T;return rlsc1_m1746=(rlsc1_f1750()?rlsc1_f1755():rlsc1_f2393());}}
static double rlsc1_f1748(){if (rlsc1_p1748) return rlsc1_m1748; else {rlsc1_p1748=T;return rlsc1_m1748=(rlsc1_f1750()?rlsc1_f1757():rlsc1_f2397());}}
static int rlsc1_f1747(){if (rlsc1_p1747) return rlsc1_m1747; else {rlsc1_p1747=T;return rlsc1_m1747=(rlsc1_f1748()>(0.0));}}
static int rlsc1_f1749(){if (rlsc1_p1749) return rlsc1_m1749; else {rlsc1_p1749=T;return rlsc1_m1749=(rlsc1_f1750()?rlsc1_f1758():NIL);}}
static int rlsc1_f1735(){if (rlsc1_p1735) return rlsc1_m1735; else {rlsc1_p1735=T;return rlsc1_m1735=(rlsc1_f1804()?rlsc1_f1749():NIL);}}
static int rlsc1_f1741(){if (rlsc1_p1741) return rlsc1_m1741; else {rlsc1_p1741=T;return rlsc1_m1741=(rlsc1_f1749()?((rlsc1_v1747=rlsc1_f1747()),(rlsc1_v1747?rlsc1_v1747:(fabs((rlsc1_f1746()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f1830(){if (rlsc1_p1830) return rlsc1_m1830; else {rlsc1_p1830=T;return rlsc1_m1830=((rlsc1_f1834()+rlsc1_f1832())+rlsc1_v6263);}}
static double rlsc1_f1829(){if (rlsc1_p1829) return rlsc1_m1829; else {rlsc1_p1829=T;return rlsc1_m1829=(rlsc1_f2083()*rlsc1_f1830());}}
static double rlsc1_f1827(){if (rlsc1_p1827) return rlsc1_m1827; else {rlsc1_p1827=T;return rlsc1_m1827=((rlsc1_f2073()-rlsc1_f1829())/rlsc1_f2088());}}
static int rlsc1_f1818(){if (rlsc1_p1818) return rlsc1_m1818; else {rlsc1_p1818=T;return rlsc1_m1818=((rlsc1_v1827=rlsc1_f1827()),((fabs((((rlsc1_f2088()*rlsc1_v1827)+rlsc1_f1829())-rlsc1_f2073()))<rlsc1_v6259)?(((rlsc1_f1986()<=rlsc1_v1827)&&(rlsc1_v1827<=rlsc1_f1983()))?((rlsc1_f1979()<=rlsc1_f1830())&&(rlsc1_f1830()<=rlsc1_f1976())):NIL):NIL));}}
static double rlsc1_f1799(){if (rlsc1_p1799) return rlsc1_m1799; else {rlsc1_p1799=T;return rlsc1_m1799=normalize_rotation((atan2((rlsc1_f1830()-rlsc1_v6263),(rlsc1_f1827()-rlsc1_v6265))-rlsc1_f5623()));}}
static double rlsc1_f1798(){if (rlsc1_p1798) return rlsc1_m1798; else {rlsc1_p1798=T;return rlsc1_m1798=normalize_rotation(rlsc1_f1799());}}
static int rlsc1_f1786(){if (rlsc1_p1786) return rlsc1_m1786; else {rlsc1_p1786=T;return rlsc1_m1786=((rlsc1_v1798=rlsc1_f1798()),((fabs((rlsc1_v1798-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1798-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1798-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f1785(){if (rlsc1_p1785) return rlsc1_m1785; else {rlsc1_p1785=T;return rlsc1_m1785=((rlsc1_v1786=rlsc1_f1786()),(rlsc1_v1786?rlsc1_v1786:rlsc1_f2400()));}}
static double rlsc1_f1584(){if (rlsc1_p1584) return rlsc1_m1584; else {rlsc1_p1584=T;return rlsc1_m1584=(rlsc1_f1785()?((rlsc1_v2164=rlsc1_f2164()),(rlsc1_v1799=rlsc1_f1799()),((rlsc1_v2164<rlsc1_v1799)?rlsc1_v2164:rlsc1_v1799)):rlsc1_f2165());}}
static double rlsc1_f1539(){if (rlsc1_p1539) return rlsc1_m1539; else {rlsc1_p1539=T;return rlsc1_m1539=(rlsc1_f1785()?((rlsc1_v2642=rlsc1_f2642()),(rlsc1_v1799=rlsc1_f1799()),((rlsc1_v2642<rlsc1_v1799)?rlsc1_v2642:rlsc1_v1799)):rlsc1_f2165());}}
static double rlsc1_f1179(){if (rlsc1_p1179) return rlsc1_m1179; else {rlsc1_p1179=T;return rlsc1_m1179=(rlsc1_f1785()?rlsc1_f1799():rlsc1_f1615());}}
static int rlsc1_f1118(){if (rlsc1_p1118) return rlsc1_m1118; else {rlsc1_p1118=T;return rlsc1_m1118=(rlsc1_f1785()?NIL:T);}}
static double rlsc1_f1700(){if (rlsc1_p1700) return rlsc1_m1700; else {rlsc1_p1700=T;return rlsc1_m1700=(rlsc1_f1785()?(rlsc1_f1750()?(rlsc1_f1758()?((rlsc1_v1799=rlsc1_f1799()),(rlsc1_v1772=rlsc1_f1772()),((rlsc1_v1799<rlsc1_v1772)?rlsc1_v1799:rlsc1_v1772)):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1782(){if (rlsc1_p1782) return rlsc1_m1782; else {rlsc1_p1782=T;return rlsc1_m1782=(rlsc1_f1785()?rlsc1_f1799():rlsc1_f2393());}}
static double rlsc1_f1784(){if (rlsc1_p1784) return rlsc1_m1784; else {rlsc1_p1784=T;return rlsc1_m1784=(rlsc1_f1785()?rlsc1_f1799():rlsc1_f2397());}}
static int rlsc1_f1783(){if (rlsc1_p1783) return rlsc1_m1783; else {rlsc1_p1783=T;return rlsc1_m1783=(rlsc1_f1784()>(0.0));}}
static int rlsc1_f1777(){if (rlsc1_p1777) return rlsc1_m1777; else {rlsc1_p1777=T;return rlsc1_m1777=(rlsc1_f1785()?((rlsc1_v1783=rlsc1_f1783()),(rlsc1_v1783?rlsc1_v1783:(fabs((rlsc1_f1782()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f1737(){if (rlsc1_p1737) return rlsc1_m1737; else {rlsc1_p1737=T;return rlsc1_m1737=(rlsc1_f1777()?rlsc1_f1785():NIL);}}
static double rlsc1_f2024(){if (rlsc1_p2024) return rlsc1_m2024; else {rlsc1_p2024=T;return rlsc1_m2024=(rlsc1_f5840()-(rlsc1_f2027()/rlsc1_f2026()));}}
static int rlsc1_f2023(){if (rlsc1_p2023) return rlsc1_m2023; else {rlsc1_p2023=T;return rlsc1_m2023=(rlsc1_f2024()<0.0);}}
static double rlsc1_f1937(){if (rlsc1_p1937) return rlsc1_m1937; else {rlsc1_p1937=T;return rlsc1_m1937=sqrt(rlsc1_f2024());}}
static double rlsc1_f1923(){if (rlsc1_p1923) return rlsc1_m1923; else {rlsc1_p1923=T;return rlsc1_m1923=((-rlsc1_f1937())+rlsc1_v6265);}}
static int rlsc1_f1915(){if (rlsc1_p1915) return rlsc1_m1915; else {rlsc1_p1915=T;return rlsc1_m1915=((rlsc1_v1923=rlsc1_f1923()),((fabs((((rlsc1_f2088()*rlsc1_v1923)+rlsc1_f1933())-rlsc1_f2073()))<rlsc1_v6259)?(((rlsc1_f1986()<=rlsc1_v1923)&&(rlsc1_v1923<=rlsc1_f1983()))?rlsc1_f1927():NIL):NIL));}}
static double rlsc1_f1884(){if (rlsc1_p1884) return rlsc1_m1884; else {rlsc1_p1884=T;return rlsc1_m1884=normalize_rotation((atan2(rlsc1_f1914(),(rlsc1_f1923()-rlsc1_v6265))-rlsc1_f5623()));}}
static double rlsc1_f1883(){if (rlsc1_p1883) return rlsc1_m1883; else {rlsc1_p1883=T;return rlsc1_m1883=normalize_rotation(rlsc1_f1884());}}
static int rlsc1_f1871(){if (rlsc1_p1871) return rlsc1_m1871; else {rlsc1_p1871=T;return rlsc1_m1871=((rlsc1_v1883=rlsc1_f1883()),((fabs((rlsc1_v1883-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1883-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1883-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f1870(){if (rlsc1_p1870) return rlsc1_m1870; else {rlsc1_p1870=T;return rlsc1_m1870=((rlsc1_v1871=rlsc1_f1871()),(rlsc1_v1871?rlsc1_v1871:rlsc1_f2400()));}}
static double rlsc1_f1867(){if (rlsc1_p1867) return rlsc1_m1867; else {rlsc1_p1867=T;return rlsc1_m1867=(rlsc1_f1870()?rlsc1_f1884():rlsc1_f2393());}}
static double rlsc1_f1869(){if (rlsc1_p1869) return rlsc1_m1869; else {rlsc1_p1869=T;return rlsc1_m1869=(rlsc1_f1870()?rlsc1_f1884():rlsc1_f2397());}}
static int rlsc1_f1868(){if (rlsc1_p1868) return rlsc1_m1868; else {rlsc1_p1868=T;return rlsc1_m1868=(rlsc1_f1869()>(0.0));}}
static int rlsc1_f1862(){if (rlsc1_p1862) return rlsc1_m1862; else {rlsc1_p1862=T;return rlsc1_m1862=(rlsc1_f1870()?((rlsc1_v1868=rlsc1_f1868()),(rlsc1_v1868?rlsc1_v1868:(fabs((rlsc1_f1867()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f1595(){if (rlsc1_p1595) return rlsc1_m1595; else {rlsc1_p1595=T;return rlsc1_m1595=(rlsc1_f1862()?(rlsc1_f1870()?((rlsc1_v2164=rlsc1_f2164()),(rlsc1_v1884=rlsc1_f1884()),((rlsc1_v2164<rlsc1_v1884)?rlsc1_v2164:rlsc1_v1884)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1550(){if (rlsc1_p1550) return rlsc1_m1550; else {rlsc1_p1550=T;return rlsc1_m1550=(rlsc1_f1862()?(rlsc1_f1870()?((rlsc1_v2642=rlsc1_f2642()),(rlsc1_v1884=rlsc1_f1884()),((rlsc1_v2642<rlsc1_v1884)?rlsc1_v2642:rlsc1_v1884)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1186(){if (rlsc1_p1186) return rlsc1_m1186; else {rlsc1_p1186=T;return rlsc1_m1186=(rlsc1_f1862()?(rlsc1_f1870()?rlsc1_f1884():rlsc1_f1615()):rlsc1_f1615());}}
static int rlsc1_f1125(){if (rlsc1_p1125) return rlsc1_m1125; else {rlsc1_p1125=T;return rlsc1_m1125=(rlsc1_f1862()?(rlsc1_f1870()?NIL:T):T);}}
static double rlsc1_f1858(){if (rlsc1_p1858) return rlsc1_m1858; else {rlsc1_p1858=T;return rlsc1_m1858=(rlsc1_f1862()?rlsc1_f1867():rlsc1_f2393());}}
static double rlsc1_f1860(){if (rlsc1_p1860) return rlsc1_m1860; else {rlsc1_p1860=T;return rlsc1_m1860=(rlsc1_f1862()?rlsc1_f1869():rlsc1_f2397());}}
static int rlsc1_f1859(){if (rlsc1_p1859) return rlsc1_m1859; else {rlsc1_p1859=T;return rlsc1_m1859=(rlsc1_f1860()>(0.0));}}
static int rlsc1_f1861(){if (rlsc1_p1861) return rlsc1_m1861; else {rlsc1_p1861=T;return rlsc1_m1861=(rlsc1_f1862()?rlsc1_f1870():NIL);}}
static int rlsc1_f1847(){if (rlsc1_p1847) return rlsc1_m1847; else {rlsc1_p1847=T;return rlsc1_m1847=(rlsc1_f1915()?rlsc1_f1861():NIL);}}
static int rlsc1_f1853(){if (rlsc1_p1853) return rlsc1_m1853; else {rlsc1_p1853=T;return rlsc1_m1853=(rlsc1_f1861()?((rlsc1_v1859=rlsc1_f1859()),(rlsc1_v1859?rlsc1_v1859:(fabs((rlsc1_f1858()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f1936(){if (rlsc1_p1936) return rlsc1_m1936; else {rlsc1_p1936=T;return rlsc1_m1936=(rlsc1_f1937()+rlsc1_v6265);}}
static int rlsc1_f1925(){if (rlsc1_p1925) return rlsc1_m1925; else {rlsc1_p1925=T;return rlsc1_m1925=((rlsc1_v1936=rlsc1_f1936()),((fabs((((rlsc1_f2088()*rlsc1_v1936)+rlsc1_f1933())-rlsc1_f2073()))<rlsc1_v6259)?(((rlsc1_f1986()<=rlsc1_v1936)&&(rlsc1_v1936<=rlsc1_f1983()))?rlsc1_f1927():NIL):NIL));}}
static double rlsc1_f1910(){if (rlsc1_p1910) return rlsc1_m1910; else {rlsc1_p1910=T;return rlsc1_m1910=normalize_rotation((atan2(rlsc1_f1914(),(rlsc1_f1936()-rlsc1_v6265))-rlsc1_f5623()));}}
static double rlsc1_f1909(){if (rlsc1_p1909) return rlsc1_m1909; else {rlsc1_p1909=T;return rlsc1_m1909=normalize_rotation(rlsc1_f1910());}}
static int rlsc1_f1897(){if (rlsc1_p1897) return rlsc1_m1897; else {rlsc1_p1897=T;return rlsc1_m1897=((rlsc1_v1909=rlsc1_f1909()),((fabs((rlsc1_v1909-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1909-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v1909-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f1896(){if (rlsc1_p1896) return rlsc1_m1896; else {rlsc1_p1896=T;return rlsc1_m1896=((rlsc1_v1897=rlsc1_f1897()),(rlsc1_v1897?rlsc1_v1897:rlsc1_f2400()));}}
static double rlsc1_f1600(){if (rlsc1_p1600) return rlsc1_m1600; else {rlsc1_p1600=T;return rlsc1_m1600=(rlsc1_f1896()?((rlsc1_v2164=rlsc1_f2164()),(rlsc1_v1910=rlsc1_f1910()),((rlsc1_v2164<rlsc1_v1910)?rlsc1_v2164:rlsc1_v1910)):rlsc1_f2165());}}
static double rlsc1_f1555(){if (rlsc1_p1555) return rlsc1_m1555; else {rlsc1_p1555=T;return rlsc1_m1555=(rlsc1_f1896()?((rlsc1_v2642=rlsc1_f2642()),(rlsc1_v1910=rlsc1_f1910()),((rlsc1_v2642<rlsc1_v1910)?rlsc1_v2642:rlsc1_v1910)):rlsc1_f2165());}}
static double rlsc1_f1189(){if (rlsc1_p1189) return rlsc1_m1189; else {rlsc1_p1189=T;return rlsc1_m1189=(rlsc1_f1896()?rlsc1_f1910():rlsc1_f1615());}}
static int rlsc1_f1128(){if (rlsc1_p1128) return rlsc1_m1128; else {rlsc1_p1128=T;return rlsc1_m1128=(rlsc1_f1896()?NIL:T);}}
static double rlsc1_f1712(){if (rlsc1_p1712) return rlsc1_m1712; else {rlsc1_p1712=T;return rlsc1_m1712=(rlsc1_f1896()?(rlsc1_f1862()?(rlsc1_f1870()?((rlsc1_v1910=rlsc1_f1910()),(rlsc1_v1884=rlsc1_f1884()),((rlsc1_v1910<rlsc1_v1884)?rlsc1_v1910:rlsc1_v1884)):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1893(){if (rlsc1_p1893) return rlsc1_m1893; else {rlsc1_p1893=T;return rlsc1_m1893=(rlsc1_f1896()?rlsc1_f1910():rlsc1_f2393());}}
static double rlsc1_f1895(){if (rlsc1_p1895) return rlsc1_m1895; else {rlsc1_p1895=T;return rlsc1_m1895=(rlsc1_f1896()?rlsc1_f1910():rlsc1_f2397());}}
static int rlsc1_f1894(){if (rlsc1_p1894) return rlsc1_m1894; else {rlsc1_p1894=T;return rlsc1_m1894=(rlsc1_f1895()>(0.0));}}
static int rlsc1_f1888(){if (rlsc1_p1888) return rlsc1_m1888; else {rlsc1_p1888=T;return rlsc1_m1888=(rlsc1_f1896()?((rlsc1_v1894=rlsc1_f1894()),(rlsc1_v1894?rlsc1_v1894:(fabs((rlsc1_f1893()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f1669(){if (rlsc1_p1669) return rlsc1_m1669; else {rlsc1_p1669=T;return rlsc1_m1669=(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1685():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?rlsc1_f1712():rlsc1_f1893()):rlsc1_f1858()):(rlsc1_f1888()?rlsc1_f1893():rlsc1_f2393())):(rlsc1_f1915()?rlsc1_f1858():rlsc1_f2393()))):(rlsc1_f1837()?rlsc1_f1685():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?rlsc1_f1700():rlsc1_f1782()):rlsc1_f1746()):(rlsc1_f1777()?rlsc1_f1782():rlsc1_f2393())):(rlsc1_f1804()?rlsc1_f1746():rlsc1_f2393())))):rlsc1_f2393());}}
static double rlsc1_f1691(){if (rlsc1_p1691) return rlsc1_m1691; else {rlsc1_p1691=T;return rlsc1_m1691=(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1717():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?rlsc1_f1712():rlsc1_f1895()):rlsc1_f1860()):(rlsc1_f1888()?rlsc1_f1895():rlsc1_f2397())):(rlsc1_f1915()?rlsc1_f1860():rlsc1_f2397()))):(rlsc1_f1837()?rlsc1_f1717():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?rlsc1_f1700():rlsc1_f1784()):rlsc1_f1748()):(rlsc1_f1777()?rlsc1_f1784():rlsc1_f2397())):(rlsc1_f1804()?rlsc1_f1748():rlsc1_f2397())))):rlsc1_f2397());}}
static int rlsc1_f1690(){if (rlsc1_p1690) return rlsc1_m1690; else {rlsc1_p1690=T;return rlsc1_m1690=(rlsc1_f1691()>(0.0));}}
static int rlsc1_f1849(){if (rlsc1_p1849) return rlsc1_m1849; else {rlsc1_p1849=T;return rlsc1_m1849=(rlsc1_f1888()?rlsc1_f1896():NIL);}}
static int rlsc1_f1731(){if (rlsc1_p1731) return rlsc1_m1731; else {rlsc1_p1731=T;return rlsc1_m1731=(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1938():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?(rlsc1_f1896()?rlsc1_f1861():NIL):rlsc1_f1896()):rlsc1_f1861()):rlsc1_f1849()):rlsc1_f1847())):(rlsc1_f1837()?rlsc1_f1938():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?(rlsc1_f1785()?rlsc1_f1749():NIL):rlsc1_f1785()):rlsc1_f1749()):rlsc1_f1737()):rlsc1_f1735()))):NIL);}}
static int rlsc1_f1664(){if (rlsc1_p1664) return rlsc1_m1664; else {rlsc1_p1664=T;return rlsc1_m1664=(rlsc1_f1731()?((rlsc1_v1690=rlsc1_f1690()),(rlsc1_v1690?rlsc1_v1690:(fabs((rlsc1_f1669()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f1661(){if (rlsc1_p1661) return rlsc1_m1661; else {rlsc1_p1661=T;return rlsc1_m1661=((rlsc1_f1664()?rlsc1_f1691():rlsc1_f2397())>(0.0));}}
static int rlsc1_f1655(){if (rlsc1_p1655) return rlsc1_m1655; else {rlsc1_p1655=T;return rlsc1_m1655=((rlsc1_v1664=rlsc1_f1664()),((rlsc1_v1664?rlsc1_f1731():NIL)?((rlsc1_v1661=rlsc1_f1661()),(rlsc1_v1661?rlsc1_v1661:(fabs(((rlsc1_v1664?rlsc1_f1669():rlsc1_f2393())-(0.0)))<rlsc1_v6259))):NIL));}}
static double rlsc1_f2282(){if (rlsc1_p2282) return rlsc1_m2282; else {rlsc1_p2282=T;return rlsc1_m2282=((rlsc1_v2288=rlsc1_f2288()),((rlsc1_v2288*rlsc1_v2288)-((4.0)*rlsc1_f2286()*(rlsc1_f2708()-(rlsc1_f2771()*rlsc1_f5840())))));}}
static int rlsc1_f2281(){if (rlsc1_p2281) return rlsc1_m2281; else {rlsc1_p2281=T;return rlsc1_m2281=(rlsc1_f2282()<0.0);}}
static double rlsc1_f2276(){if (rlsc1_p2276) return rlsc1_m2276; else {rlsc1_p2276=T;return rlsc1_m2276=(sqrt(rlsc1_f2282())/rlsc1_f2279());}}
static double rlsc1_f2260(){if (rlsc1_p2260) return rlsc1_m2260; else {rlsc1_p2260=T;return rlsc1_m2260=((rlsc1_f2278()-rlsc1_f2276())+rlsc1_v6263);}}
static double rlsc1_f2259(){if (rlsc1_p2259) return rlsc1_m2259; else {rlsc1_p2259=T;return rlsc1_m2259=(rlsc1_f2767()*rlsc1_f2260());}}
static double rlsc1_f2257(){if (rlsc1_p2257) return rlsc1_m2257; else {rlsc1_p2257=T;return rlsc1_m2257=((rlsc1_f2755()-rlsc1_f2259())/rlsc1_f2772());}}
static int rlsc1_f2248(){if (rlsc1_p2248) return rlsc1_m2248; else {rlsc1_p2248=T;return rlsc1_m2248=((rlsc1_v2257=rlsc1_f2257()),((fabs((((rlsc1_f2772()*rlsc1_v2257)+rlsc1_f2259())-rlsc1_f2755()))<rlsc1_v6259)?(((rlsc1_f2667()<=rlsc1_v2257)&&(rlsc1_v2257<=rlsc1_f2664()))?((rlsc1_f2660()<=rlsc1_f2260())&&(rlsc1_f2260()<=rlsc1_f2657())):NIL):NIL));}}
static double rlsc1_f2216(){if (rlsc1_p2216) return rlsc1_m2216; else {rlsc1_p2216=T;return rlsc1_m2216=normalize_rotation((atan2((rlsc1_f2260()-rlsc1_v6263),(rlsc1_f2257()-rlsc1_v6265))-rlsc1_f5623()));}}
static double rlsc1_f1251(){if (rlsc1_p1251) return rlsc1_m1251; else {rlsc1_p1251=T;return rlsc1_m1251=(rlsc1_f1785()?((rlsc1_v2216=rlsc1_f2216()),(rlsc1_v1799=rlsc1_f1799()),((rlsc1_v2216<rlsc1_v1799)?rlsc1_v2216:rlsc1_v1799)):rlsc1_f2165());}}
static double rlsc1_f1246(){if (rlsc1_p1246) return rlsc1_m1246; else {rlsc1_p1246=T;return rlsc1_m1246=(rlsc1_f1750()?(rlsc1_f1758()?((rlsc1_v2216=rlsc1_f2216()),(rlsc1_v1772=rlsc1_f1772()),((rlsc1_v2216<rlsc1_v1772)?rlsc1_v2216:rlsc1_v1772)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1272(){if (rlsc1_p1272) return rlsc1_m1272; else {rlsc1_p1272=T;return rlsc1_m1272=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?((rlsc1_v2216=rlsc1_f2216()),(rlsc1_v1722=rlsc1_f1722()),((rlsc1_v2216<rlsc1_v1722)?rlsc1_v2216:rlsc1_v1722)):(rlsc1_f1951()?((rlsc1_v2216=rlsc1_f2216()),(rlsc1_v1965=rlsc1_f1965()),((rlsc1_v2216<rlsc1_v1965)?rlsc1_v2216:rlsc1_v1965)):rlsc1_f2165())):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1267(){if (rlsc1_p1267) return rlsc1_m1267; else {rlsc1_p1267=T;return rlsc1_m1267=(rlsc1_f1896()?((rlsc1_v2216=rlsc1_f2216()),(rlsc1_v1910=rlsc1_f1910()),((rlsc1_v2216<rlsc1_v1910)?rlsc1_v2216:rlsc1_v1910)):rlsc1_f2165());}}
static double rlsc1_f1262(){if (rlsc1_p1262) return rlsc1_m1262; else {rlsc1_p1262=T;return rlsc1_m1262=(rlsc1_f1862()?(rlsc1_f1870()?((rlsc1_v2216=rlsc1_f2216()),(rlsc1_v1884=rlsc1_f1884()),((rlsc1_v2216<rlsc1_v1884)?rlsc1_v2216:rlsc1_v1884)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f2215(){if (rlsc1_p2215) return rlsc1_m2215; else {rlsc1_p2215=T;return rlsc1_m2215=normalize_rotation(rlsc1_f2216());}}
static int rlsc1_f2203(){if (rlsc1_p2203) return rlsc1_m2203; else {rlsc1_p2203=T;return rlsc1_m2203=((rlsc1_v2215=rlsc1_f2215()),((fabs((rlsc1_v2215-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2215-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2215-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f2202(){if (rlsc1_p2202) return rlsc1_m2202; else {rlsc1_p2202=T;return rlsc1_m2202=((rlsc1_v2203=rlsc1_f2203()),(rlsc1_v2203?rlsc1_v2203:rlsc1_f2400()));}}
static double rlsc1_f2199(){if (rlsc1_p2199) return rlsc1_m2199; else {rlsc1_p2199=T;return rlsc1_m2199=(rlsc1_f2202()?rlsc1_f2216():rlsc1_f2393());}}
static double rlsc1_f2201(){if (rlsc1_p2201) return rlsc1_m2201; else {rlsc1_p2201=T;return rlsc1_m2201=(rlsc1_f2202()?rlsc1_f2216():rlsc1_f2397());}}
static int rlsc1_f2200(){if (rlsc1_p2200) return rlsc1_m2200; else {rlsc1_p2200=T;return rlsc1_m2200=(rlsc1_f2201()>(0.0));}}
static int rlsc1_f2194(){if (rlsc1_p2194) return rlsc1_m2194; else {rlsc1_p2194=T;return rlsc1_m2194=(rlsc1_f2202()?((rlsc1_v2200=rlsc1_f2200()),(rlsc1_v2200?rlsc1_v2200:(fabs((rlsc1_f2199()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f1235(){if (rlsc1_p1235) return rlsc1_m1235; else {rlsc1_p1235=T;return rlsc1_m1235=(rlsc1_f2194()?(rlsc1_f2202()?(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1272():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?((rlsc1_v2216=rlsc1_f2216()),(rlsc1_v1712=rlsc1_f1712()),((rlsc1_v2216<rlsc1_v1712)?rlsc1_v2216:rlsc1_v1712)):rlsc1_f1267()):rlsc1_f1262()):(rlsc1_f1888()?rlsc1_f1267():rlsc1_f2165())):(rlsc1_f1915()?rlsc1_f1262():rlsc1_f2165()))):(rlsc1_f1837()?rlsc1_f1272():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?((rlsc1_v2216=rlsc1_f2216()),(rlsc1_v1700=rlsc1_f1700()),((rlsc1_v2216<rlsc1_v1700)?rlsc1_v2216:rlsc1_v1700)):rlsc1_f1251()):rlsc1_f1246()):(rlsc1_f1777()?rlsc1_f1251():rlsc1_f2165())):(rlsc1_f1804()?rlsc1_f1246():rlsc1_f2165())))):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1206(){if (rlsc1_p1206) return rlsc1_m1206; else {rlsc1_p1206=T;return rlsc1_m1206=(rlsc1_f2194()?(rlsc1_f2202()?rlsc1_f2216():rlsc1_f1615()):rlsc1_f1615());}}
static int rlsc1_f1144(){if (rlsc1_p1144) return rlsc1_m1144; else {rlsc1_p1144=T;return rlsc1_m1144=(rlsc1_f2194()?(rlsc1_f2202()?NIL:T):T);}}
static double rlsc1_f2190(){if (rlsc1_p2190) return rlsc1_m2190; else {rlsc1_p2190=T;return rlsc1_m2190=(rlsc1_f2194()?rlsc1_f2199():rlsc1_f2393());}}
static double rlsc1_f2192(){if (rlsc1_p2192) return rlsc1_m2192; else {rlsc1_p2192=T;return rlsc1_m2192=(rlsc1_f2194()?rlsc1_f2201():rlsc1_f2397());}}
static int rlsc1_f2191(){if (rlsc1_p2191) return rlsc1_m2191; else {rlsc1_p2191=T;return rlsc1_m2191=(rlsc1_f2192()>(0.0));}}
static int rlsc1_f2193(){if (rlsc1_p2193) return rlsc1_m2193; else {rlsc1_p2193=T;return rlsc1_m2193=(rlsc1_f2194()?rlsc1_f2202():NIL);}}
static int rlsc1_f2179(){if (rlsc1_p2179) return rlsc1_m2179; else {rlsc1_p2179=T;return rlsc1_m2179=(rlsc1_f2248()?rlsc1_f2193():NIL);}}
static int rlsc1_f2185(){if (rlsc1_p2185) return rlsc1_m2185; else {rlsc1_p2185=T;return rlsc1_m2185=(rlsc1_f2193()?((rlsc1_v2191=rlsc1_f2191()),(rlsc1_v2191?rlsc1_v2191:(fabs((rlsc1_f2190()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f2274(){if (rlsc1_p2274) return rlsc1_m2274; else {rlsc1_p2274=T;return rlsc1_m2274=((rlsc1_f2278()+rlsc1_f2276())+rlsc1_v6263);}}
static double rlsc1_f2273(){if (rlsc1_p2273) return rlsc1_m2273; else {rlsc1_p2273=T;return rlsc1_m2273=(rlsc1_f2767()*rlsc1_f2274());}}
static double rlsc1_f2271(){if (rlsc1_p2271) return rlsc1_m2271; else {rlsc1_p2271=T;return rlsc1_m2271=((rlsc1_f2755()-rlsc1_f2273())/rlsc1_f2772());}}
static int rlsc1_f2262(){if (rlsc1_p2262) return rlsc1_m2262; else {rlsc1_p2262=T;return rlsc1_m2262=((rlsc1_v2271=rlsc1_f2271()),((fabs((((rlsc1_f2772()*rlsc1_v2271)+rlsc1_f2273())-rlsc1_f2755()))<rlsc1_v6259)?(((rlsc1_f2667()<=rlsc1_v2271)&&(rlsc1_v2271<=rlsc1_f2664()))?((rlsc1_f2660()<=rlsc1_f2274())&&(rlsc1_f2274()<=rlsc1_f2657())):NIL):NIL));}}
static double rlsc1_f2243(){if (rlsc1_p2243) return rlsc1_m2243; else {rlsc1_p2243=T;return rlsc1_m2243=normalize_rotation((atan2((rlsc1_f2274()-rlsc1_v6263),(rlsc1_f2271()-rlsc1_v6265))-rlsc1_f5623()));}}
static double rlsc1_f1298(){if (rlsc1_p1298) return rlsc1_m1298; else {rlsc1_p1298=T;return rlsc1_m1298=(rlsc1_f1785()?((rlsc1_v2243=rlsc1_f2243()),(rlsc1_v1799=rlsc1_f1799()),((rlsc1_v2243<rlsc1_v1799)?rlsc1_v2243:rlsc1_v1799)):rlsc1_f2165());}}
static double rlsc1_f1293(){if (rlsc1_p1293) return rlsc1_m1293; else {rlsc1_p1293=T;return rlsc1_m1293=(rlsc1_f1750()?(rlsc1_f1758()?((rlsc1_v2243=rlsc1_f2243()),(rlsc1_v1772=rlsc1_f1772()),((rlsc1_v2243<rlsc1_v1772)?rlsc1_v2243:rlsc1_v1772)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1319(){if (rlsc1_p1319) return rlsc1_m1319; else {rlsc1_p1319=T;return rlsc1_m1319=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?((rlsc1_v2243=rlsc1_f2243()),(rlsc1_v1722=rlsc1_f1722()),((rlsc1_v2243<rlsc1_v1722)?rlsc1_v2243:rlsc1_v1722)):(rlsc1_f1951()?((rlsc1_v2243=rlsc1_f2243()),(rlsc1_v1965=rlsc1_f1965()),((rlsc1_v2243<rlsc1_v1965)?rlsc1_v2243:rlsc1_v1965)):rlsc1_f2165())):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1314(){if (rlsc1_p1314) return rlsc1_m1314; else {rlsc1_p1314=T;return rlsc1_m1314=(rlsc1_f1896()?((rlsc1_v2243=rlsc1_f2243()),(rlsc1_v1910=rlsc1_f1910()),((rlsc1_v2243<rlsc1_v1910)?rlsc1_v2243:rlsc1_v1910)):rlsc1_f2165());}}
static double rlsc1_f1309(){if (rlsc1_p1309) return rlsc1_m1309; else {rlsc1_p1309=T;return rlsc1_m1309=(rlsc1_f1862()?(rlsc1_f1870()?((rlsc1_v2243=rlsc1_f2243()),(rlsc1_v1884=rlsc1_f1884()),((rlsc1_v2243<rlsc1_v1884)?rlsc1_v2243:rlsc1_v1884)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f2242(){if (rlsc1_p2242) return rlsc1_m2242; else {rlsc1_p2242=T;return rlsc1_m2242=normalize_rotation(rlsc1_f2243());}}
static int rlsc1_f2230(){if (rlsc1_p2230) return rlsc1_m2230; else {rlsc1_p2230=T;return rlsc1_m2230=((rlsc1_v2242=rlsc1_f2242()),((fabs((rlsc1_v2242-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2242-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2242-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f2229(){if (rlsc1_p2229) return rlsc1_m2229; else {rlsc1_p2229=T;return rlsc1_m2229=((rlsc1_v2230=rlsc1_f2230()),(rlsc1_v2230?rlsc1_v2230:rlsc1_f2400()));}}
static double rlsc1_f1283(){if (rlsc1_p1283) return rlsc1_m1283; else {rlsc1_p1283=T;return rlsc1_m1283=(rlsc1_f2229()?(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1319():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?((rlsc1_v2243=rlsc1_f2243()),(rlsc1_v1712=rlsc1_f1712()),((rlsc1_v2243<rlsc1_v1712)?rlsc1_v2243:rlsc1_v1712)):rlsc1_f1314()):rlsc1_f1309()):(rlsc1_f1888()?rlsc1_f1314():rlsc1_f2165())):(rlsc1_f1915()?rlsc1_f1309():rlsc1_f2165()))):(rlsc1_f1837()?rlsc1_f1319():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?((rlsc1_v2243=rlsc1_f2243()),(rlsc1_v1700=rlsc1_f1700()),((rlsc1_v2243<rlsc1_v1700)?rlsc1_v2243:rlsc1_v1700)):rlsc1_f1298()):rlsc1_f1293()):(rlsc1_f1777()?rlsc1_f1298():rlsc1_f2165())):(rlsc1_f1804()?rlsc1_f1293():rlsc1_f2165())))):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1209(){if (rlsc1_p1209) return rlsc1_m1209; else {rlsc1_p1209=T;return rlsc1_m1209=(rlsc1_f2229()?rlsc1_f2243():rlsc1_f1615());}}
static int rlsc1_f1147(){if (rlsc1_p1147) return rlsc1_m1147; else {rlsc1_p1147=T;return rlsc1_m1147=(rlsc1_f2229()?NIL:T);}}
static double rlsc1_f2142(){if (rlsc1_p2142) return rlsc1_m2142; else {rlsc1_p2142=T;return rlsc1_m2142=(rlsc1_f2229()?(rlsc1_f2194()?(rlsc1_f2202()?((rlsc1_v2243=rlsc1_f2243()),(rlsc1_v2216=rlsc1_f2216()),((rlsc1_v2243<rlsc1_v2216)?rlsc1_v2243:rlsc1_v2216)):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1343(){if (rlsc1_p1343) return rlsc1_m1343; else {rlsc1_p1343=T;return rlsc1_m1343=(rlsc1_f1785()?((rlsc1_v2142=rlsc1_f2142()),(rlsc1_v1799=rlsc1_f1799()),((rlsc1_v2142<rlsc1_v1799)?rlsc1_v2142:rlsc1_v1799)):rlsc1_f2165());}}
static double rlsc1_f1338(){if (rlsc1_p1338) return rlsc1_m1338; else {rlsc1_p1338=T;return rlsc1_m1338=(rlsc1_f1750()?(rlsc1_f1758()?((rlsc1_v2142=rlsc1_f2142()),(rlsc1_v1772=rlsc1_f1772()),((rlsc1_v2142<rlsc1_v1772)?rlsc1_v2142:rlsc1_v1772)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1364(){if (rlsc1_p1364) return rlsc1_m1364; else {rlsc1_p1364=T;return rlsc1_m1364=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?((rlsc1_v2142=rlsc1_f2142()),(rlsc1_v1722=rlsc1_f1722()),((rlsc1_v2142<rlsc1_v1722)?rlsc1_v2142:rlsc1_v1722)):(rlsc1_f1951()?((rlsc1_v2142=rlsc1_f2142()),(rlsc1_v1965=rlsc1_f1965()),((rlsc1_v2142<rlsc1_v1965)?rlsc1_v2142:rlsc1_v1965)):rlsc1_f2165())):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1359(){if (rlsc1_p1359) return rlsc1_m1359; else {rlsc1_p1359=T;return rlsc1_m1359=(rlsc1_f1896()?((rlsc1_v2142=rlsc1_f2142()),(rlsc1_v1910=rlsc1_f1910()),((rlsc1_v2142<rlsc1_v1910)?rlsc1_v2142:rlsc1_v1910)):rlsc1_f2165());}}
static double rlsc1_f1354(){if (rlsc1_p1354) return rlsc1_m1354; else {rlsc1_p1354=T;return rlsc1_m1354=(rlsc1_f1862()?(rlsc1_f1870()?((rlsc1_v2142=rlsc1_f2142()),(rlsc1_v1884=rlsc1_f1884()),((rlsc1_v2142<rlsc1_v1884)?rlsc1_v2142:rlsc1_v1884)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f2226(){if (rlsc1_p2226) return rlsc1_m2226; else {rlsc1_p2226=T;return rlsc1_m2226=(rlsc1_f2229()?rlsc1_f2243():rlsc1_f2393());}}
static double rlsc1_f2228(){if (rlsc1_p2228) return rlsc1_m2228; else {rlsc1_p2228=T;return rlsc1_m2228=(rlsc1_f2229()?rlsc1_f2243():rlsc1_f2397());}}
static int rlsc1_f2227(){if (rlsc1_p2227) return rlsc1_m2227; else {rlsc1_p2227=T;return rlsc1_m2227=(rlsc1_f2228()>(0.0));}}
static int rlsc1_f2221(){if (rlsc1_p2221) return rlsc1_m2221; else {rlsc1_p2221=T;return rlsc1_m2221=(rlsc1_f2229()?((rlsc1_v2227=rlsc1_f2227()),(rlsc1_v2227?rlsc1_v2227:(fabs((rlsc1_f2226()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f2181(){if (rlsc1_p2181) return rlsc1_m2181; else {rlsc1_p2181=T;return rlsc1_m2181=(rlsc1_f2221()?rlsc1_f2229():NIL);}}
static double rlsc1_f2705(){if (rlsc1_p2705) return rlsc1_m2705; else {rlsc1_p2705=T;return rlsc1_m2705=(rlsc1_f5840()-(rlsc1_f2708()/rlsc1_f2707()));}}
static int rlsc1_f2704(){if (rlsc1_p2704) return rlsc1_m2704; else {rlsc1_p2704=T;return rlsc1_m2704=(rlsc1_f2705()<0.0);}}
static double rlsc1_f2381(){if (rlsc1_p2381) return rlsc1_m2381; else {rlsc1_p2381=T;return rlsc1_m2381=sqrt(rlsc1_f2705());}}
static double rlsc1_f2367(){if (rlsc1_p2367) return rlsc1_m2367; else {rlsc1_p2367=T;return rlsc1_m2367=((-rlsc1_f2381())+rlsc1_v6265);}}
static int rlsc1_f2359(){if (rlsc1_p2359) return rlsc1_m2359; else {rlsc1_p2359=T;return rlsc1_m2359=((rlsc1_v2367=rlsc1_f2367()),((fabs((((rlsc1_f2772()*rlsc1_v2367)+rlsc1_f2377())-rlsc1_f2755()))<rlsc1_v6259)?(((rlsc1_f2667()<=rlsc1_v2367)&&(rlsc1_v2367<=rlsc1_f2664()))?rlsc1_f2371():NIL):NIL));}}
static double rlsc1_f2328(){if (rlsc1_p2328) return rlsc1_m2328; else {rlsc1_p2328=T;return rlsc1_m2328=normalize_rotation((atan2(rlsc1_f2358(),(rlsc1_f2367()-rlsc1_v6265))-rlsc1_f5623()));}}
static double rlsc1_f1396(){if (rlsc1_p1396) return rlsc1_m1396; else {rlsc1_p1396=T;return rlsc1_m1396=(rlsc1_f1785()?((rlsc1_v2328=rlsc1_f2328()),(rlsc1_v1799=rlsc1_f1799()),((rlsc1_v2328<rlsc1_v1799)?rlsc1_v2328:rlsc1_v1799)):rlsc1_f2165());}}
static double rlsc1_f1391(){if (rlsc1_p1391) return rlsc1_m1391; else {rlsc1_p1391=T;return rlsc1_m1391=(rlsc1_f1750()?(rlsc1_f1758()?((rlsc1_v2328=rlsc1_f2328()),(rlsc1_v1772=rlsc1_f1772()),((rlsc1_v2328<rlsc1_v1772)?rlsc1_v2328:rlsc1_v1772)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1417(){if (rlsc1_p1417) return rlsc1_m1417; else {rlsc1_p1417=T;return rlsc1_m1417=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?((rlsc1_v2328=rlsc1_f2328()),(rlsc1_v1722=rlsc1_f1722()),((rlsc1_v2328<rlsc1_v1722)?rlsc1_v2328:rlsc1_v1722)):(rlsc1_f1951()?((rlsc1_v2328=rlsc1_f2328()),(rlsc1_v1965=rlsc1_f1965()),((rlsc1_v2328<rlsc1_v1965)?rlsc1_v2328:rlsc1_v1965)):rlsc1_f2165())):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1412(){if (rlsc1_p1412) return rlsc1_m1412; else {rlsc1_p1412=T;return rlsc1_m1412=(rlsc1_f1896()?((rlsc1_v2328=rlsc1_f2328()),(rlsc1_v1910=rlsc1_f1910()),((rlsc1_v2328<rlsc1_v1910)?rlsc1_v2328:rlsc1_v1910)):rlsc1_f2165());}}
static double rlsc1_f1407(){if (rlsc1_p1407) return rlsc1_m1407; else {rlsc1_p1407=T;return rlsc1_m1407=(rlsc1_f1862()?(rlsc1_f1870()?((rlsc1_v2328=rlsc1_f2328()),(rlsc1_v1884=rlsc1_f1884()),((rlsc1_v2328<rlsc1_v1884)?rlsc1_v2328:rlsc1_v1884)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f2327(){if (rlsc1_p2327) return rlsc1_m2327; else {rlsc1_p2327=T;return rlsc1_m2327=normalize_rotation(rlsc1_f2328());}}
static int rlsc1_f2315(){if (rlsc1_p2315) return rlsc1_m2315; else {rlsc1_p2315=T;return rlsc1_m2315=((rlsc1_v2327=rlsc1_f2327()),((fabs((rlsc1_v2327-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2327-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2327-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f2314(){if (rlsc1_p2314) return rlsc1_m2314; else {rlsc1_p2314=T;return rlsc1_m2314=((rlsc1_v2315=rlsc1_f2315()),(rlsc1_v2315?rlsc1_v2315:rlsc1_f2400()));}}
static double rlsc1_f2311(){if (rlsc1_p2311) return rlsc1_m2311; else {rlsc1_p2311=T;return rlsc1_m2311=(rlsc1_f2314()?rlsc1_f2328():rlsc1_f2393());}}
static double rlsc1_f2313(){if (rlsc1_p2313) return rlsc1_m2313; else {rlsc1_p2313=T;return rlsc1_m2313=(rlsc1_f2314()?rlsc1_f2328():rlsc1_f2397());}}
static int rlsc1_f2312(){if (rlsc1_p2312) return rlsc1_m2312; else {rlsc1_p2312=T;return rlsc1_m2312=(rlsc1_f2313()>(0.0));}}
static int rlsc1_f2306(){if (rlsc1_p2306) return rlsc1_m2306; else {rlsc1_p2306=T;return rlsc1_m2306=(rlsc1_f2314()?((rlsc1_v2312=rlsc1_f2312()),(rlsc1_v2312?rlsc1_v2312:(fabs((rlsc1_f2311()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f1380(){if (rlsc1_p1380) return rlsc1_m1380; else {rlsc1_p1380=T;return rlsc1_m1380=(rlsc1_f2306()?(rlsc1_f2314()?(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1417():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?((rlsc1_v2328=rlsc1_f2328()),(rlsc1_v1712=rlsc1_f1712()),((rlsc1_v2328<rlsc1_v1712)?rlsc1_v2328:rlsc1_v1712)):rlsc1_f1412()):rlsc1_f1407()):(rlsc1_f1888()?rlsc1_f1412():rlsc1_f2165())):(rlsc1_f1915()?rlsc1_f1407():rlsc1_f2165()))):(rlsc1_f1837()?rlsc1_f1417():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?((rlsc1_v2328=rlsc1_f2328()),(rlsc1_v1700=rlsc1_f1700()),((rlsc1_v2328<rlsc1_v1700)?rlsc1_v2328:rlsc1_v1700)):rlsc1_f1396()):rlsc1_f1391()):(rlsc1_f1777()?rlsc1_f1396():rlsc1_f2165())):(rlsc1_f1804()?rlsc1_f1391():rlsc1_f2165())))):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1216(){if (rlsc1_p1216) return rlsc1_m1216; else {rlsc1_p1216=T;return rlsc1_m1216=(rlsc1_f2306()?(rlsc1_f2314()?rlsc1_f2328():rlsc1_f1615()):rlsc1_f1615());}}
static int rlsc1_f1154(){if (rlsc1_p1154) return rlsc1_m1154; else {rlsc1_p1154=T;return rlsc1_m1154=(rlsc1_f2306()?(rlsc1_f2314()?NIL:T):T);}}
static double rlsc1_f2302(){if (rlsc1_p2302) return rlsc1_m2302; else {rlsc1_p2302=T;return rlsc1_m2302=(rlsc1_f2306()?rlsc1_f2311():rlsc1_f2393());}}
static double rlsc1_f2304(){if (rlsc1_p2304) return rlsc1_m2304; else {rlsc1_p2304=T;return rlsc1_m2304=(rlsc1_f2306()?rlsc1_f2313():rlsc1_f2397());}}
static int rlsc1_f2303(){if (rlsc1_p2303) return rlsc1_m2303; else {rlsc1_p2303=T;return rlsc1_m2303=(rlsc1_f2304()>(0.0));}}
static int rlsc1_f2305(){if (rlsc1_p2305) return rlsc1_m2305; else {rlsc1_p2305=T;return rlsc1_m2305=(rlsc1_f2306()?rlsc1_f2314():NIL);}}
static int rlsc1_f2291(){if (rlsc1_p2291) return rlsc1_m2291; else {rlsc1_p2291=T;return rlsc1_m2291=(rlsc1_f2359()?rlsc1_f2305():NIL);}}
static int rlsc1_f2297(){if (rlsc1_p2297) return rlsc1_m2297; else {rlsc1_p2297=T;return rlsc1_m2297=(rlsc1_f2305()?((rlsc1_v2303=rlsc1_f2303()),(rlsc1_v2303?rlsc1_v2303:(fabs((rlsc1_f2302()-(0.0)))<rlsc1_v6259))):NIL);}}
static double rlsc1_f2380(){if (rlsc1_p2380) return rlsc1_m2380; else {rlsc1_p2380=T;return rlsc1_m2380=(rlsc1_f2381()+rlsc1_v6265);}}
static int rlsc1_f2369(){if (rlsc1_p2369) return rlsc1_m2369; else {rlsc1_p2369=T;return rlsc1_m2369=((rlsc1_v2380=rlsc1_f2380()),((fabs((((rlsc1_f2772()*rlsc1_v2380)+rlsc1_f2377())-rlsc1_f2755()))<rlsc1_v6259)?(((rlsc1_f2667()<=rlsc1_v2380)&&(rlsc1_v2380<=rlsc1_f2664()))?rlsc1_f2371():NIL):NIL));}}
static double rlsc1_f2354(){if (rlsc1_p2354) return rlsc1_m2354; else {rlsc1_p2354=T;return rlsc1_m2354=normalize_rotation((atan2(rlsc1_f2358(),(rlsc1_f2380()-rlsc1_v6265))-rlsc1_f5623()));}}
static double rlsc1_f1443(){if (rlsc1_p1443) return rlsc1_m1443; else {rlsc1_p1443=T;return rlsc1_m1443=(rlsc1_f1785()?((rlsc1_v2354=rlsc1_f2354()),(rlsc1_v1799=rlsc1_f1799()),((rlsc1_v2354<rlsc1_v1799)?rlsc1_v2354:rlsc1_v1799)):rlsc1_f2165());}}
static double rlsc1_f1438(){if (rlsc1_p1438) return rlsc1_m1438; else {rlsc1_p1438=T;return rlsc1_m1438=(rlsc1_f1750()?(rlsc1_f1758()?((rlsc1_v2354=rlsc1_f2354()),(rlsc1_v1772=rlsc1_f1772()),((rlsc1_v2354<rlsc1_v1772)?rlsc1_v2354:rlsc1_v1772)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1464(){if (rlsc1_p1464) return rlsc1_m1464; else {rlsc1_p1464=T;return rlsc1_m1464=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?((rlsc1_v2354=rlsc1_f2354()),(rlsc1_v1722=rlsc1_f1722()),((rlsc1_v2354<rlsc1_v1722)?rlsc1_v2354:rlsc1_v1722)):(rlsc1_f1951()?((rlsc1_v2354=rlsc1_f2354()),(rlsc1_v1965=rlsc1_f1965()),((rlsc1_v2354<rlsc1_v1965)?rlsc1_v2354:rlsc1_v1965)):rlsc1_f2165())):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1459(){if (rlsc1_p1459) return rlsc1_m1459; else {rlsc1_p1459=T;return rlsc1_m1459=(rlsc1_f1896()?((rlsc1_v2354=rlsc1_f2354()),(rlsc1_v1910=rlsc1_f1910()),((rlsc1_v2354<rlsc1_v1910)?rlsc1_v2354:rlsc1_v1910)):rlsc1_f2165());}}
static double rlsc1_f1454(){if (rlsc1_p1454) return rlsc1_m1454; else {rlsc1_p1454=T;return rlsc1_m1454=(rlsc1_f1862()?(rlsc1_f1870()?((rlsc1_v2354=rlsc1_f2354()),(rlsc1_v1884=rlsc1_f1884()),((rlsc1_v2354<rlsc1_v1884)?rlsc1_v2354:rlsc1_v1884)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f2353(){if (rlsc1_p2353) return rlsc1_m2353; else {rlsc1_p2353=T;return rlsc1_m2353=normalize_rotation(rlsc1_f2354());}}
static int rlsc1_f2341(){if (rlsc1_p2341) return rlsc1_m2341; else {rlsc1_p2341=T;return rlsc1_m2341=((rlsc1_v2353=rlsc1_f2353()),((fabs((rlsc1_v2353-(0.0)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2353-(-6.283185307179586)))<rlsc1_v6259)?NIL:((fabs((rlsc1_v2353-(6.283185307179586)))<rlsc1_v6259)?NIL:T))));}}
static int rlsc1_f2340(){if (rlsc1_p2340) return rlsc1_m2340; else {rlsc1_p2340=T;return rlsc1_m2340=((rlsc1_v2341=rlsc1_f2341()),(rlsc1_v2341?rlsc1_v2341:rlsc1_f2400()));}}
static double rlsc1_f1428(){if (rlsc1_p1428) return rlsc1_m1428; else {rlsc1_p1428=T;return rlsc1_m1428=(rlsc1_f2340()?(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1464():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?((rlsc1_v2354=rlsc1_f2354()),(rlsc1_v1712=rlsc1_f1712()),((rlsc1_v2354<rlsc1_v1712)?rlsc1_v2354:rlsc1_v1712)):rlsc1_f1459()):rlsc1_f1454()):(rlsc1_f1888()?rlsc1_f1459():rlsc1_f2165())):(rlsc1_f1915()?rlsc1_f1454():rlsc1_f2165()))):(rlsc1_f1837()?rlsc1_f1464():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?((rlsc1_v2354=rlsc1_f2354()),(rlsc1_v1700=rlsc1_f1700()),((rlsc1_v2354<rlsc1_v1700)?rlsc1_v2354:rlsc1_v1700)):rlsc1_f1443()):rlsc1_f1438()):(rlsc1_f1777()?rlsc1_f1443():rlsc1_f2165())):(rlsc1_f1804()?rlsc1_f1438():rlsc1_f2165())))):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1219(){if (rlsc1_p1219) return rlsc1_m1219; else {rlsc1_p1219=T;return rlsc1_m1219=(rlsc1_f2340()?rlsc1_f2354():rlsc1_f1615());}}
static int rlsc1_f1157(){if (rlsc1_p1157) return rlsc1_m1157; else {rlsc1_p1157=T;return rlsc1_m1157=(rlsc1_f2340()?NIL:T);}}
static double rlsc1_f2154(){if (rlsc1_p2154) return rlsc1_m2154; else {rlsc1_p2154=T;return rlsc1_m2154=(rlsc1_f2340()?(rlsc1_f2306()?(rlsc1_f2314()?((rlsc1_v2354=rlsc1_f2354()),(rlsc1_v2328=rlsc1_f2328()),((rlsc1_v2354<rlsc1_v2328)?rlsc1_v2354:rlsc1_v2328)):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1488(){if (rlsc1_p1488) return rlsc1_m1488; else {rlsc1_p1488=T;return rlsc1_m1488=(rlsc1_f1785()?((rlsc1_v2154=rlsc1_f2154()),(rlsc1_v1799=rlsc1_f1799()),((rlsc1_v2154<rlsc1_v1799)?rlsc1_v2154:rlsc1_v1799)):rlsc1_f2165());}}
static double rlsc1_f1483(){if (rlsc1_p1483) return rlsc1_m1483; else {rlsc1_p1483=T;return rlsc1_m1483=(rlsc1_f1750()?(rlsc1_f1758()?((rlsc1_v2154=rlsc1_f2154()),(rlsc1_v1772=rlsc1_f1772()),((rlsc1_v2154<rlsc1_v1772)?rlsc1_v2154:rlsc1_v1772)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1509(){if (rlsc1_p1509) return rlsc1_m1509; else {rlsc1_p1509=T;return rlsc1_m1509=(rlsc1_f2052()?(rlsc1_f1997()?(rlsc1_f1972()?(rlsc1_f1943()?(rlsc1_f1723()?((rlsc1_v2154=rlsc1_f2154()),(rlsc1_v1722=rlsc1_f1722()),((rlsc1_v2154<rlsc1_v1722)?rlsc1_v2154:rlsc1_v1722)):(rlsc1_f1951()?((rlsc1_v2154=rlsc1_f2154()),(rlsc1_v1965=rlsc1_f1965()),((rlsc1_v2154<rlsc1_v1965)?rlsc1_v2154:rlsc1_v1965)):rlsc1_f2165())):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1504(){if (rlsc1_p1504) return rlsc1_m1504; else {rlsc1_p1504=T;return rlsc1_m1504=(rlsc1_f1896()?((rlsc1_v2154=rlsc1_f2154()),(rlsc1_v1910=rlsc1_f1910()),((rlsc1_v2154<rlsc1_v1910)?rlsc1_v2154:rlsc1_v1910)):rlsc1_f2165());}}
static double rlsc1_f1499(){if (rlsc1_p1499) return rlsc1_m1499; else {rlsc1_p1499=T;return rlsc1_m1499=(rlsc1_f1862()?(rlsc1_f1870()?((rlsc1_v2154=rlsc1_f2154()),(rlsc1_v1884=rlsc1_f1884()),((rlsc1_v2154<rlsc1_v1884)?rlsc1_v2154:rlsc1_v1884)):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f2337(){if (rlsc1_p2337) return rlsc1_m2337; else {rlsc1_p2337=T;return rlsc1_m2337=(rlsc1_f2340()?rlsc1_f2354():rlsc1_f2393());}}
static double rlsc1_f2339(){if (rlsc1_p2339) return rlsc1_m2339; else {rlsc1_p2339=T;return rlsc1_m2339=(rlsc1_f2340()?rlsc1_f2354():rlsc1_f2397());}}
static int rlsc1_f2338(){if (rlsc1_p2338) return rlsc1_m2338; else {rlsc1_p2338=T;return rlsc1_m2338=(rlsc1_f2339()>(0.0));}}
static int rlsc1_f2332(){if (rlsc1_p2332) return rlsc1_m2332; else {rlsc1_p2332=T;return rlsc1_m2332=(rlsc1_f2340()?((rlsc1_v2338=rlsc1_f2338()),(rlsc1_v2338?rlsc1_v2338:(fabs((rlsc1_f2337()-(0.0)))<rlsc1_v6259))):NIL);}}
static int rlsc1_f2293(){if (rlsc1_p2293) return rlsc1_m2293; else {rlsc1_p2293=T;return rlsc1_m2293=(rlsc1_f2332()?rlsc1_f2340():NIL);}}
static int rlsc1_f2734(){if (rlsc1_p2734) return rlsc1_m2734; else {rlsc1_p2734=T;return rlsc1_m2734=(fabs((((fabs((rlsc1_f2764()-(0.0)))<rlsc1_v6259)?rlsc1_f2759():((rlsc1_v2747=rlsc1_f2747()),(rlsc1_v2741=rlsc1_f2741()),sqrt(((rlsc1_v2747*rlsc1_v2747)+(rlsc1_v2741*rlsc1_v2741)))))-rlsc1_f5873()))<rlsc1_v6259);}}
static double rlsc1_f1519(){if (rlsc1_p1519) return rlsc1_m1519; else {rlsc1_p1519=T;return rlsc1_m1519=(rlsc1_f2734()?(rlsc1_f2678()?(rlsc1_f2653()?(rlsc1_f2387()?(rlsc1_f2167()?(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1605():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?((rlsc1_v2164=rlsc1_f2164()),(rlsc1_v1712=rlsc1_f1712()),((rlsc1_v2164<rlsc1_v1712)?rlsc1_v2164:rlsc1_v1712)):rlsc1_f1600()):rlsc1_f1595()):(rlsc1_f1888()?rlsc1_f1600():rlsc1_f2165())):(rlsc1_f1915()?rlsc1_f1595():rlsc1_f2165()))):(rlsc1_f1837()?rlsc1_f1605():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?((rlsc1_v2164=rlsc1_f2164()),(rlsc1_v1700=rlsc1_f1700()),((rlsc1_v2164<rlsc1_v1700)?rlsc1_v2164:rlsc1_v1700)):rlsc1_f1584()):rlsc1_f1579()):(rlsc1_f1777()?rlsc1_f1584():rlsc1_f2165())):(rlsc1_f1804()?rlsc1_f1579():rlsc1_f2165())))):rlsc1_f2165()):rlsc1_f2165()):(rlsc1_f2399()?(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1560():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?((rlsc1_v2642=rlsc1_f2642()),(rlsc1_v1712=rlsc1_f1712()),((rlsc1_v2642<rlsc1_v1712)?rlsc1_v2642:rlsc1_v1712)):rlsc1_f1555()):rlsc1_f1550()):(rlsc1_f1888()?rlsc1_f1555():rlsc1_f2165())):(rlsc1_f1915()?rlsc1_f1550():rlsc1_f2165()))):(rlsc1_f1837()?rlsc1_f1560():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?((rlsc1_v2642=rlsc1_f2642()),(rlsc1_v1700=rlsc1_f1700()),((rlsc1_v2642<rlsc1_v1700)?rlsc1_v2642:rlsc1_v1700)):rlsc1_f1539()):rlsc1_f1534()):(rlsc1_f1777()?rlsc1_f1539():rlsc1_f2165())):(rlsc1_f1804()?rlsc1_f1534():rlsc1_f2165())))):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165())):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f2165());}}
static double rlsc1_f1220(){if (rlsc1_p1220) return rlsc1_m1220; else {rlsc1_p1220=T;return rlsc1_m1220=(rlsc1_f2734()?(rlsc1_f2678()?(rlsc1_f2653()?((rlsc1_v2387=rlsc1_f2387()),(rlsc1_v2387?(rlsc1_f2167()?rlsc1_f2164():rlsc1_f1226()):(rlsc1_v2387?rlsc1_f1226():rlsc1_f1615()))):rlsc1_f1615()):rlsc1_f1615()):rlsc1_f1615());}}
static int rlsc1_f1158(){if (rlsc1_p1158) return rlsc1_m1158; else {rlsc1_p1158=T;return rlsc1_m1158=(rlsc1_f2734()?(rlsc1_f2678()?(rlsc1_f2653()?(rlsc1_f2387()?(rlsc1_f2167()?NIL:(rlsc1_f2399()?NIL:T)):T):T):T):T);}}
static int rlsc1_f1650(){if (rlsc1_p1650) return rlsc1_m1650; else {rlsc1_p1650=T;return rlsc1_m1650=(rlsc1_f2734()?(rlsc1_f2678()?(rlsc1_f2653()?(rlsc1_f2387()?(rlsc1_f2167()?T:rlsc1_f2399()):NIL):NIL):NIL):NIL);}}
static double rlsc1_f2127(){if (rlsc1_p2127) return rlsc1_m2127; else {rlsc1_p2127=T;return rlsc1_m2127=(rlsc1_f2734()?(rlsc1_f2678()?(rlsc1_f2653()?(rlsc1_f2387()?(rlsc1_f2167()?rlsc1_f2164():rlsc1_f2392()):rlsc1_f2172()):rlsc1_f2393()):rlsc1_f2393()):rlsc1_f2393());}}
static double rlsc1_f2159(){if (rlsc1_p2159) return rlsc1_m2159; else {rlsc1_p2159=T;return rlsc1_m2159=(rlsc1_f2734()?(rlsc1_f2678()?(rlsc1_f2653()?(rlsc1_f2387()?(rlsc1_f2167()?rlsc1_f2164():rlsc1_f2396()):rlsc1_f2174()):rlsc1_f2397()):rlsc1_f2397()):rlsc1_f2397());}}
static int rlsc1_f2711(){if (rlsc1_p2711) return rlsc1_m2711; else {rlsc1_p2711=T;return rlsc1_m2711=((rlsc1_v2734=rlsc1_f2734()),(rlsc1_v2734?((fabs((rlsc1_f2730()-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v2723=rlsc1_f2723()),((fabs((rlsc1_v2723-(0.0)))<rlsc1_v6259)?NIL:((rlsc1_v2723>(0.0))?rlsc1_f2718():(rlsc1_f2718()?NIL:T))))):(rlsc1_v2734?NIL:T)));}}
static int rlsc1_f2132(){if (rlsc1_p2132) return rlsc1_m2132; else {rlsc1_p2132=T;return rlsc1_m2132=((rlsc1_f2711()?(rlsc1_f2710()?(rlsc1_f2704()?rlsc1_f2159():(rlsc1_f2369()?(rlsc1_f2359()?(rlsc1_f2332()?(rlsc1_f2297()?rlsc1_f2154():rlsc1_f2339()):rlsc1_f2304()):(rlsc1_f2332()?rlsc1_f2339():rlsc1_f2397())):(rlsc1_f2359()?rlsc1_f2304():rlsc1_f2397()))):(rlsc1_f2281()?rlsc1_f2159():(rlsc1_f2262()?(rlsc1_f2248()?(rlsc1_f2221()?(rlsc1_f2185()?rlsc1_f2142():rlsc1_f2228()):rlsc1_f2192()):(rlsc1_f2221()?rlsc1_f2228():rlsc1_f2397())):(rlsc1_f2248()?rlsc1_f2192():rlsc1_f2397())))):rlsc1_f2397())>(0.0));}}
static int rlsc1_f2382(){if (rlsc1_p2382) return rlsc1_m2382; else {rlsc1_p2382=T;return rlsc1_m2382=(rlsc1_f2734()?(rlsc1_f2678()?(rlsc1_f2653()?(rlsc1_f2387()?rlsc1_f2399():rlsc1_f2386()):NIL):NIL):NIL);}}
static int rlsc1_f2106(){if (rlsc1_p2106) return rlsc1_m2106; else {rlsc1_p2106=T;return rlsc1_m2106=((rlsc1_v2711=rlsc1_f2711()),((rlsc1_v2711?(rlsc1_f2710()?(rlsc1_f2704()?rlsc1_f2382():(rlsc1_f2369()?(rlsc1_f2359()?(rlsc1_f2332()?(rlsc1_f2297()?(rlsc1_f2340()?rlsc1_f2305():NIL):rlsc1_f2340()):rlsc1_f2305()):rlsc1_f2293()):rlsc1_f2291())):(rlsc1_f2281()?rlsc1_f2382():(rlsc1_f2262()?(rlsc1_f2248()?(rlsc1_f2221()?(rlsc1_f2185()?(rlsc1_f2229()?rlsc1_f2193():NIL):rlsc1_f2229()):rlsc1_f2193()):rlsc1_f2181()):rlsc1_f2179()))):NIL)?((rlsc1_v2132=rlsc1_f2132()),(rlsc1_v2132?rlsc1_v2132:(fabs(((rlsc1_v2711?(rlsc1_f2710()?(rlsc1_f2704()?rlsc1_f2127():(rlsc1_f2369()?(rlsc1_f2359()?(rlsc1_f2332()?(rlsc1_f2297()?rlsc1_f2154():rlsc1_f2337()):rlsc1_f2302()):(rlsc1_f2332()?rlsc1_f2337():rlsc1_f2393())):(rlsc1_f2359()?rlsc1_f2302():rlsc1_f2393()))):(rlsc1_f2281()?rlsc1_f2127():(rlsc1_f2262()?(rlsc1_f2248()?(rlsc1_f2221()?(rlsc1_f2185()?rlsc1_f2142():rlsc1_f2226()):rlsc1_f2190()):(rlsc1_f2221()?rlsc1_f2226():rlsc1_f2393())):(rlsc1_f2248()?rlsc1_f2190():rlsc1_f2393())))):rlsc1_f2393())-(0.0)))<rlsc1_v6259))):NIL));}}
static double rlsc1_f1164(){if (rlsc1_p1164) return rlsc1_m1164; else {rlsc1_p1164=T;return rlsc1_m1164=(-(rlsc1_v2795?rlsc1_f1615():(rlsc1_f2106()?(rlsc1_f1655()?(rlsc1_f2711()?(rlsc1_f2710()?(rlsc1_f2704()?rlsc1_f1519():(rlsc1_f2369()?(rlsc1_f2359()?(rlsc1_f2332()?(rlsc1_f2297()?(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1509():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?((rlsc1_v2154=rlsc1_f2154()),(rlsc1_v1712=rlsc1_f1712()),((rlsc1_v2154<rlsc1_v1712)?rlsc1_v2154:rlsc1_v1712)):rlsc1_f1504()):rlsc1_f1499()):(rlsc1_f1888()?rlsc1_f1504():rlsc1_f2165())):(rlsc1_f1915()?rlsc1_f1499():rlsc1_f2165()))):(rlsc1_f1837()?rlsc1_f1509():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?((rlsc1_v2154=rlsc1_f2154()),(rlsc1_v1700=rlsc1_f1700()),((rlsc1_v2154<rlsc1_v1700)?rlsc1_v2154:rlsc1_v1700)):rlsc1_f1488()):rlsc1_f1483()):(rlsc1_f1777()?rlsc1_f1488():rlsc1_f2165())):(rlsc1_f1804()?rlsc1_f1483():rlsc1_f2165())))):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f1428()):rlsc1_f1380()):(rlsc1_f2332()?rlsc1_f1428():rlsc1_f2165())):(rlsc1_f2359()?rlsc1_f1380():rlsc1_f2165()))):(rlsc1_f2281()?rlsc1_f1519():(rlsc1_f2262()?(rlsc1_f2248()?(rlsc1_f2221()?(rlsc1_f2185()?(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1364():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?((rlsc1_v2142=rlsc1_f2142()),(rlsc1_v1712=rlsc1_f1712()),((rlsc1_v2142<rlsc1_v1712)?rlsc1_v2142:rlsc1_v1712)):rlsc1_f1359()):rlsc1_f1354()):(rlsc1_f1888()?rlsc1_f1359():rlsc1_f2165())):(rlsc1_f1915()?rlsc1_f1354():rlsc1_f2165()))):(rlsc1_f1837()?rlsc1_f1364():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?((rlsc1_v2142=rlsc1_f2142()),(rlsc1_v1700=rlsc1_f1700()),((rlsc1_v2142<rlsc1_v1700)?rlsc1_v2142:rlsc1_v1700)):rlsc1_f1343()):rlsc1_f1338()):(rlsc1_f1777()?rlsc1_f1343():rlsc1_f2165())):(rlsc1_f1804()?rlsc1_f1338():rlsc1_f2165())))):rlsc1_f2165()):rlsc1_f2165()):rlsc1_f1283()):rlsc1_f1235()):(rlsc1_f2221()?rlsc1_f1283():rlsc1_f2165())):(rlsc1_f2248()?rlsc1_f1235():rlsc1_f2165())))):rlsc1_f2165()):(rlsc1_f2711()?(rlsc1_f2710()?(rlsc1_f2704()?rlsc1_f1220():(rlsc1_f2369()?(rlsc1_f2359()?(rlsc1_f2332()?(rlsc1_f2297()?rlsc1_f2154():rlsc1_f1219()):rlsc1_f1216()):(rlsc1_f2332()?rlsc1_f1219():rlsc1_f1615())):(rlsc1_f2359()?rlsc1_f1216():rlsc1_f1615()))):(rlsc1_f2281()?rlsc1_f1220():(rlsc1_f2262()?(rlsc1_f2248()?(rlsc1_f2221()?(rlsc1_f2185()?rlsc1_f2142():rlsc1_f1209()):rlsc1_f1206()):(rlsc1_f2221()?rlsc1_f1209():rlsc1_f1615())):(rlsc1_f2248()?rlsc1_f1206():rlsc1_f1615())))):rlsc1_f1615())):(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1190():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?rlsc1_f1712():rlsc1_f1189()):rlsc1_f1186()):(rlsc1_f1888()?rlsc1_f1189():rlsc1_f1615())):(rlsc1_f1915()?rlsc1_f1186():rlsc1_f1615()))):(rlsc1_f1837()?rlsc1_f1190():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?rlsc1_f1700():rlsc1_f1179()):rlsc1_f1176()):(rlsc1_f1777()?rlsc1_f1179():rlsc1_f1615())):(rlsc1_f1804()?rlsc1_f1176():rlsc1_f1615())))):rlsc1_f1615()):rlsc1_f1615()))));}}
static double rlsc1_f140(){if (rlsc1_p140) return rlsc1_m140; else {rlsc1_p140=T;return rlsc1_m140=(rlsc1_f4035()?(rlsc1_f1043()?(rlsc1_f990()?(rlsc1_f781()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v778=rlsc1_f778()),((rlsc1_v1164>rlsc1_v778)?rlsc1_v1164:rlsc1_v778)):(rlsc1_f998()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v1038=rlsc1_f1038()),((rlsc1_v1164>rlsc1_v1038)?rlsc1_v1164:rlsc1_v1038)):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static double rlsc1_f114(){if (rlsc1_p114) return rlsc1_m114; else {rlsc1_p114=T;return rlsc1_m114=(rlsc1_f3627()?(rlsc1_f699()?(rlsc1_f647()?(rlsc1_f440()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v439=rlsc1_f439()),((rlsc1_v1164>rlsc1_v439)?rlsc1_v1164:rlsc1_v439)):(rlsc1_f655()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v694=rlsc1_f694()),((rlsc1_v1164>rlsc1_v694)?rlsc1_v1164:rlsc1_v694)):rlsc1_f779())):rlsc1_f779()):rlsc1_f779()):rlsc1_f779());}}
static int rlsc1_f1104(){if (rlsc1_p1104) return rlsc1_m1104; else {rlsc1_p1104=T;return rlsc1_m1104=(rlsc1_v2795?T:(rlsc1_f2106()?(rlsc1_f1655()?NIL:(rlsc1_f2711()?(rlsc1_f2710()?(rlsc1_f2704()?rlsc1_f1158():(rlsc1_f2369()?(rlsc1_f2359()?(rlsc1_f2332()?(rlsc1_f2297()?NIL:rlsc1_f1157()):rlsc1_f1154()):(rlsc1_f2332()?rlsc1_f1157():T)):(rlsc1_f2359()?rlsc1_f1154():T))):(rlsc1_f2281()?rlsc1_f1158():(rlsc1_f2262()?(rlsc1_f2248()?(rlsc1_f2221()?(rlsc1_f2185()?NIL:rlsc1_f1147()):rlsc1_f1144()):(rlsc1_f2221()?rlsc1_f1147():T)):(rlsc1_f2248()?rlsc1_f1144():T)))):T)):(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1129():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?NIL:rlsc1_f1128()):rlsc1_f1125()):(rlsc1_f1888()?rlsc1_f1128():T)):(rlsc1_f1915()?rlsc1_f1125():T))):(rlsc1_f1837()?rlsc1_f1129():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?NIL:rlsc1_f1118()):rlsc1_f1115()):(rlsc1_f1777()?rlsc1_f1118():T)):(rlsc1_f1804()?rlsc1_f1115():T)))):T):T)));}}
static int rlsc1_f1099(){if (rlsc1_p1099) return rlsc1_m1099; else {rlsc1_p1099=T;return rlsc1_m1099=((rlsc1_v1617?rlsc1_f1164():(rlsc1_f1104()?rlsc1_f2397():rlsc1_f1102()))<(0.0));}}
void rlsc1(rlsc1_a6281,rlsc1_a6279,rlsc1_a6277,rlsc1_a6275,rlsc1_a6273,rlsc1_a6271,rlsc1_a6269,rlsc1_a6267,rlsc1_a6265,rlsc1_a6263,rlsc1_a6259)
double rlsc1_a6281;
double rlsc1_a6279;
double rlsc1_a6277;
double rlsc1_a6275;
double rlsc1_a6273;
double rlsc1_a6271;
double rlsc1_a6269;
double rlsc1_a6267;
double rlsc1_a6265;
double rlsc1_a6263;
double rlsc1_a6259;
{ rlsc1_v6281=rlsc1_a6281;
  rlsc1_v6279=rlsc1_a6279;
  rlsc1_v6277=rlsc1_a6277;
  rlsc1_v6275=rlsc1_a6275;
  rlsc1_v6273=rlsc1_a6273;
  rlsc1_v6271=rlsc1_a6271;
  rlsc1_v6269=rlsc1_a6269;
  rlsc1_v6267=rlsc1_a6267;
  rlsc1_v6265=rlsc1_a6265;
  rlsc1_v6263=rlsc1_a6263;
  rlsc1_v6259=rlsc1_a6259;
  rlsc1_p3535=NIL;
  rlsc1_p3656=NIL;
  rlsc1_p3653=NIL;
  rlsc1_p744=NIL;
  rlsc1_p3644=NIL;
  rlsc1_p779=NIL;
  rlsc1_p3936=NIL;
  rlsc1_p1076=NIL;
  rlsc1_p4069=NIL;
  rlsc1_p4066=NIL;
  rlsc1_p1091=NIL;
  rlsc1_p4053=NIL;
  rlsc1_p1615=NIL;
  rlsc1_p1102=NIL;
  rlsc1_p2165=NIL;
  rlsc1_p2393=NIL;
  rlsc1_p2397=NIL;
  rlsc1_p2651=NIL;
  rlsc1_p2647=NIL;
  rlsc1_p2461=NIL;
  rlsc1_p6063=NIL;
  rlsc1_p6061=NIL;
  rlsc1_p6054=NIL;
  rlsc1_p6052=NIL;
  rlsc1_p6213=NIL;
  rlsc1_p6218=NIL;
  rlsc1_p6216=NIL;
  rlsc1_p5625=NIL;
  rlsc1_p5624=NIL;
  rlsc1_p4055=NIL;
  rlsc1_p4054=NIL;
  rlsc1_p4017=NIL;
  rlsc1_p4005=NIL;
  rlsc1_p4004=NIL;
  rlsc1_p984=NIL;
  rlsc1_p5623=NIL;
  rlsc1_p2759=NIL;
  rlsc1_p2776=NIL;
  rlsc1_p2625=NIL;
  rlsc1_p2624=NIL;
  rlsc1_p2603=NIL;
  rlsc1_p2611=NIL;
  rlsc1_p2621=NIL;
  rlsc1_p6252=NIL;
  rlsc1_p6250=NIL;
  rlsc1_p6247=NIL;
  rlsc1_p6194=NIL;
  rlsc1_p6245=NIL;
  rlsc1_p6210=NIL;
  rlsc1_p2622=NIL;
  rlsc1_p2619=NIL;
  rlsc1_p2520=NIL;
  rlsc1_p2513=NIL;
  rlsc1_p2519=NIL;
  rlsc1_p2583=NIL;
  rlsc1_p2581=NIL;
  rlsc1_p2602=NIL;
  rlsc1_p2601=NIL;
  rlsc1_p2571=NIL;
  rlsc1_p2569=NIL;
  rlsc1_p2610=NIL;
  rlsc1_p2579=NIL;
  rlsc1_p2577=NIL;
  rlsc1_p2557=NIL;
  rlsc1_p2574=NIL;
  rlsc1_p2563=NIL;
  rlsc1_p2555=NIL;
  rlsc1_p2545=NIL;
  rlsc1_p2559=NIL;
  rlsc1_p2558=NIL;
  rlsc1_p2608=NIL;
  rlsc1_p2597=NIL;
  rlsc1_p2591=NIL;
  rlsc1_p2584=NIL;
  rlsc1_p2457=NIL;
  rlsc1_p2443=NIL;
  rlsc1_p2524=NIL;
  rlsc1_p2541=NIL;
  rlsc1_p2615=NIL;
  rlsc1_p2535=NIL;
  rlsc1_p2497=NIL;
  rlsc1_p2618=NIL;
  rlsc1_p2429=NIL;
  rlsc1_p2407=NIL;
  rlsc1_p2617=NIL;
  rlsc1_p2538=NIL;
  rlsc1_p2496=NIL;
  rlsc1_p2616=NIL;
  rlsc1_p2531=NIL;
  rlsc1_p2494=NIL;
  rlsc1_p2492=NIL;
  rlsc1_p2491=NIL;
  rlsc1_p2489=NIL;
  rlsc1_p2480=NIL;
  rlsc1_p2478=NIL;
  rlsc1_p2477=NIL;
  rlsc1_p2475=NIL;
  rlsc1_p2466=NIL;
  rlsc1_p2530=NIL;
  rlsc1_p2613=NIL;
  rlsc1_p2523=NIL;
  rlsc1_p2509=NIL;
  rlsc1_p2501=NIL;
  rlsc1_p2522=NIL;
  rlsc1_p2511=NIL;
  rlsc1_p2612=NIL;
  rlsc1_p2528=NIL;
  rlsc1_p2463=NIL;
  rlsc1_p2450=NIL;
  rlsc1_p2425=NIL;
  rlsc1_p2436=NIL;
  rlsc1_p2424=NIL;
  rlsc1_p2420=NIL;
  rlsc1_p2412=NIL;
  rlsc1_p2400=NIL;
  rlsc1_p6244=NIL;
  rlsc1_p2104=NIL;
  rlsc1_p2095=NIL;
  rlsc1_p2093=NIL;
  rlsc1_p2094=NIL;
  rlsc1_p1986=NIL;
  rlsc1_p1983=NIL;
  rlsc1_p2090=NIL;
  rlsc1_p2102=NIL;
  rlsc1_p2101=NIL;
  rlsc1_p2100=NIL;
  rlsc1_p1979=NIL;
  rlsc1_p1976=NIL;
  rlsc1_p2099=NIL;
  rlsc1_p2097=NIL;
  rlsc1_p2088=NIL;
  rlsc1_p2029=NIL;
  rlsc1_p2051=NIL;
  rlsc1_p2071=NIL;
  rlsc1_p2087=NIL;
  rlsc1_p2084=NIL;
  rlsc1_p2073=NIL;
  rlsc1_p2083=NIL;
  rlsc1_p2022=NIL;
  rlsc1_p2020=NIL;
  rlsc1_p1934=NIL;
  rlsc1_p1914=NIL;
  rlsc1_p1927=NIL;
  rlsc1_p1933=NIL;
  rlsc1_p2026=NIL;
  rlsc1_p1842=NIL;
  rlsc1_p1835=NIL;
  rlsc1_p2041=NIL;
  rlsc1_p2050=NIL;
  rlsc1_p2028=NIL;
  rlsc1_p1844=NIL;
  rlsc1_p1834=NIL;
  rlsc1_p2027=NIL;
  rlsc1_p2048=NIL;
  rlsc1_p2036=NIL;
  rlsc1_p2070=NIL;
  rlsc1_p2069=NIL;
  rlsc1_p2010=NIL;
  rlsc1_p2008=NIL;
  rlsc1_p2082=NIL;
  rlsc1_p2018=NIL;
  rlsc1_p2002=NIL;
  rlsc1_p2016=NIL;
  rlsc1_p1996=NIL;
  rlsc1_p1994=NIL;
  rlsc1_p2013=NIL;
  rlsc1_p1997=NIL;
  rlsc1_p1972=NIL;
  rlsc1_p1965=NIL;
  rlsc1_p1964=NIL;
  rlsc1_p1952=NIL;
  rlsc1_p1951=NIL;
  rlsc1_p1196=NIL;
  rlsc1_p1722=NIL;
  rlsc1_p1948=NIL;
  rlsc1_p1950=NIL;
  rlsc1_p1949=NIL;
  rlsc1_p1943=NIL;
  rlsc1_p1942=NIL;
  rlsc1_p1728=NIL;
  rlsc1_p1730=NIL;
  rlsc1_p1729=NIL;
  rlsc1_p1723=NIL;
  rlsc1_p2080=NIL;
  rlsc1_p2065=NIL;
  rlsc1_p2059=NIL;
  rlsc1_p2792=NIL;
  rlsc1_p2783=NIL;
  rlsc1_p2781=NIL;
  rlsc1_p2782=NIL;
  rlsc1_p2667=NIL;
  rlsc1_p2664=NIL;
  rlsc1_p2778=NIL;
  rlsc1_p2790=NIL;
  rlsc1_p2789=NIL;
  rlsc1_p2788=NIL;
  rlsc1_p2660=NIL;
  rlsc1_p2657=NIL;
  rlsc1_p2787=NIL;
  rlsc1_p2785=NIL;
  rlsc1_p2772=NIL;
  rlsc1_p2710=NIL;
  rlsc1_p2733=NIL;
  rlsc1_p2753=NIL;
  rlsc1_p2771=NIL;
  rlsc1_p2768=NIL;
  rlsc1_p2755=NIL;
  rlsc1_p2767=NIL;
  rlsc1_p2703=NIL;
  rlsc1_p2701=NIL;
  rlsc1_p2378=NIL;
  rlsc1_p2358=NIL;
  rlsc1_p2371=NIL;
  rlsc1_p2377=NIL;
  rlsc1_p2707=NIL;
  rlsc1_p2286=NIL;
  rlsc1_p2279=NIL;
  rlsc1_p2723=NIL;
  rlsc1_p2732=NIL;
  rlsc1_p2709=NIL;
  rlsc1_p2288=NIL;
  rlsc1_p2278=NIL;
  rlsc1_p2708=NIL;
  rlsc1_p2730=NIL;
  rlsc1_p2718=NIL;
  rlsc1_p2752=NIL;
  rlsc1_p2751=NIL;
  rlsc1_p2691=NIL;
  rlsc1_p2689=NIL;
  rlsc1_p2766=NIL;
  rlsc1_p2699=NIL;
  rlsc1_p2683=NIL;
  rlsc1_p2697=NIL;
  rlsc1_p2677=NIL;
  rlsc1_p2675=NIL;
  rlsc1_p2694=NIL;
  rlsc1_p2678=NIL;
  rlsc1_p2653=NIL;
  rlsc1_p2642=NIL;
  rlsc1_p2641=NIL;
  rlsc1_p2627=NIL;
  rlsc1_p2399=NIL;
  rlsc1_p1226=NIL;
  rlsc1_p2164=NIL;
  rlsc1_p2392=NIL;
  rlsc1_p2396=NIL;
  rlsc1_p2395=NIL;
  rlsc1_p2387=NIL;
  rlsc1_p2172=NIL;
  rlsc1_p2174=NIL;
  rlsc1_p2173=NIL;
  rlsc1_p2386=NIL;
  rlsc1_p2167=NIL;
  rlsc1_p2764=NIL;
  rlsc1_p2747=NIL;
  rlsc1_p2741=NIL;
  rlsc1_p6256=NIL;
  rlsc1_p6220=NIL;
  rlsc1_p5878=NIL;
  rlsc1_p5876=NIL;
  rlsc1_p5875=NIL;
  rlsc1_p3641=NIL;
  rlsc1_p3609=NIL;
  rlsc1_p642=NIL;
  rlsc1_p632=NIL;
  rlsc1_p638=NIL;
  rlsc1_p640=NIL;
  rlsc1_p639=NIL;
  rlsc1_p637=NIL;
  rlsc1_p631=NIL;
  rlsc1_p540=NIL;
  rlsc1_p512=NIL;
  rlsc1_p630=NIL;
  rlsc1_p629=NIL;
  rlsc1_p636=NIL;
  rlsc1_p538=NIL;
  rlsc1_p513=NIL;
  rlsc1_p510=NIL;
  rlsc1_p505=NIL;
  rlsc1_p498=NIL;
  rlsc1_p504=NIL;
  rlsc1_p497=NIL;
  rlsc1_p480=NIL;
  rlsc1_p536=NIL;
  rlsc1_p493=NIL;
  rlsc1_p485=NIL;
  rlsc1_p534=NIL;
  rlsc1_p533=NIL;
  rlsc1_p521=NIL;
  rlsc1_p473=NIL;
  rlsc1_p470=NIL;
  rlsc1_p472=NIL;
  rlsc1_p471=NIL;
  rlsc1_p465=NIL;
  rlsc1_p464=NIL;
  rlsc1_p461=NIL;
  rlsc1_p463=NIL;
  rlsc1_p462=NIL;
  rlsc1_p456=NIL;
  rlsc1_p634=NIL;
  rlsc1_p591=NIL;
  rlsc1_p568=NIL;
  rlsc1_p589=NIL;
  rlsc1_p588=NIL;
  rlsc1_p576=NIL;
  rlsc1_p633=NIL;
  rlsc1_p627=NIL;
  rlsc1_p622=NIL;
  rlsc1_p615=NIL;
  rlsc1_p621=NIL;
  rlsc1_p560=NIL;
  rlsc1_p607=NIL;
  rlsc1_p614=NIL;
  rlsc1_p611=NIL;
  rlsc1_p602=NIL;
  rlsc1_p601=NIL;
  rlsc1_p550=NIL;
  rlsc1_p455=NIL;
  rlsc1_p430=NIL;
  rlsc1_p547=NIL;
  rlsc1_p549=NIL;
  rlsc1_p548=NIL;
  rlsc1_p542=NIL;
  rlsc1_p598=NIL;
  rlsc1_p3620=NIL;
  rlsc1_p3636=NIL;
  rlsc1_p3634=NIL;
  rlsc1_p3626=NIL;
  rlsc1_p3583=NIL;
  rlsc1_p3581=NIL;
  rlsc1_p3633=NIL;
  rlsc1_p3631=NIL;
  rlsc1_p3627=NIL;
  rlsc1_p594=NIL;
  rlsc1_p738=NIL;
  rlsc1_p733=NIL;
  rlsc1_p732=NIL;
  rlsc1_p736=NIL;
  rlsc1_p696=NIL;
  rlsc1_p673=NIL;
  rlsc1_p694=NIL;
  rlsc1_p693=NIL;
  rlsc1_p681=NIL;
  rlsc1_p735=NIL;
  rlsc1_p730=NIL;
  rlsc1_p725=NIL;
  rlsc1_p718=NIL;
  rlsc1_p724=NIL;
  rlsc1_p665=NIL;
  rlsc1_p710=NIL;
  rlsc1_p717=NIL;
  rlsc1_p714=NIL;
  rlsc1_p705=NIL;
  rlsc1_p704=NIL;
  rlsc1_p655=NIL;
  rlsc1_p439=NIL;
  rlsc1_p18=NIL;
  rlsc1_p652=NIL;
  rlsc1_p654=NIL;
  rlsc1_p653=NIL;
  rlsc1_p647=NIL;
  rlsc1_p646=NIL;
  rlsc1_p445=NIL;
  rlsc1_p447=NIL;
  rlsc1_p446=NIL;
  rlsc1_p440=NIL;
  rlsc1_p701=NIL;
  rlsc1_p699=NIL;
  rlsc1_p59=NIL;
  rlsc1_p418=NIL;
  rlsc1_p411=NIL;
  rlsc1_p435=NIL;
  rlsc1_p423=NIL;
  rlsc1_p422=NIL;
  rlsc1_p643=NIL;
  rlsc1_p448=NIL;
  rlsc1_p406=NIL;
  rlsc1_p405=NIL;
  rlsc1_p402=NIL;
  rlsc1_p404=NIL;
  rlsc1_p403=NIL;
  rlsc1_p397=NIL;
  rlsc1_p13=NIL;
  rlsc1_p4050=NIL;
  rlsc1_p4016=NIL;
  rlsc1_p983=NIL;
  rlsc1_p973=NIL;
  rlsc1_p979=NIL;
  rlsc1_p981=NIL;
  rlsc1_p980=NIL;
  rlsc1_p978=NIL;
  rlsc1_p972=NIL;
  rlsc1_p881=NIL;
  rlsc1_p853=NIL;
  rlsc1_p971=NIL;
  rlsc1_p970=NIL;
  rlsc1_p977=NIL;
  rlsc1_p879=NIL;
  rlsc1_p854=NIL;
  rlsc1_p851=NIL;
  rlsc1_p846=NIL;
  rlsc1_p839=NIL;
  rlsc1_p845=NIL;
  rlsc1_p838=NIL;
  rlsc1_p821=NIL;
  rlsc1_p877=NIL;
  rlsc1_p834=NIL;
  rlsc1_p826=NIL;
  rlsc1_p875=NIL;
  rlsc1_p303=NIL;
  rlsc1_p309=NIL;
  rlsc1_p304=NIL;
  rlsc1_p184=NIL;
  rlsc1_p874=NIL;
  rlsc1_p862=NIL;
  rlsc1_p814=NIL;
  rlsc1_p811=NIL;
  rlsc1_p813=NIL;
  rlsc1_p812=NIL;
  rlsc1_p806=NIL;
  rlsc1_p805=NIL;
  rlsc1_p802=NIL;
  rlsc1_p804=NIL;
  rlsc1_p803=NIL;
  rlsc1_p797=NIL;
  rlsc1_p975=NIL;
  rlsc1_p932=NIL;
  rlsc1_p909=NIL;
  rlsc1_p930=NIL;
  rlsc1_p320=NIL;
  rlsc1_p326=NIL;
  rlsc1_p321=NIL;
  rlsc1_p209=NIL;
  rlsc1_p929=NIL;
  rlsc1_p917=NIL;
  rlsc1_p974=NIL;
  rlsc1_p968=NIL;
  rlsc1_p963=NIL;
  rlsc1_p956=NIL;
  rlsc1_p962=NIL;
  rlsc1_p901=NIL;
  rlsc1_p948=NIL;
  rlsc1_p955=NIL;
  rlsc1_p952=NIL;
  rlsc1_p943=NIL;
  rlsc1_p942=NIL;
  rlsc1_p891=NIL;
  rlsc1_p769=NIL;
  rlsc1_p342=NIL;
  rlsc1_p340=NIL;
  rlsc1_p336=NIL;
  rlsc1_p351=NIL;
  rlsc1_p349=NIL;
  rlsc1_p230=NIL;
  rlsc1_p796=NIL;
  rlsc1_p343=NIL;
  rlsc1_p888=NIL;
  rlsc1_p890=NIL;
  rlsc1_p889=NIL;
  rlsc1_p883=NIL;
  rlsc1_p939=NIL;
  rlsc1_p4028=NIL;
  rlsc1_p4044=NIL;
  rlsc1_p4042=NIL;
  rlsc1_p4034=NIL;
  rlsc1_p3987=NIL;
  rlsc1_p3985=NIL;
  rlsc1_p4041=NIL;
  rlsc1_p4039=NIL;
  rlsc1_p4035=NIL;
  rlsc1_p935=NIL;
  rlsc1_p1084=NIL;
  rlsc1_p1079=NIL;
  rlsc1_p1078=NIL;
  rlsc1_p1082=NIL;
  rlsc1_p1040=NIL;
  rlsc1_p1016=NIL;
  rlsc1_p1038=NIL;
  rlsc1_p365=NIL;
  rlsc1_p371=NIL;
  rlsc1_p366=NIL;
  rlsc1_p257=NIL;
  rlsc1_p1037=NIL;
  rlsc1_p1025=NIL;
  rlsc1_p1081=NIL;
  rlsc1_p1074=NIL;
  rlsc1_p1069=NIL;
  rlsc1_p1062=NIL;
  rlsc1_p1068=NIL;
  rlsc1_p1008=NIL;
  rlsc1_p1054=NIL;
  rlsc1_p1061=NIL;
  rlsc1_p1058=NIL;
  rlsc1_p1049=NIL;
  rlsc1_p1048=NIL;
  rlsc1_p998=NIL;
  rlsc1_p35=NIL;
  rlsc1_p778=NIL;
  rlsc1_p387=NIL;
  rlsc1_p385=NIL;
  rlsc1_p381=NIL;
  rlsc1_p396=NIL;
  rlsc1_p394=NIL;
  rlsc1_p388=NIL;
  rlsc1_p278=NIL;
  rlsc1_p995=NIL;
  rlsc1_p997=NIL;
  rlsc1_p996=NIL;
  rlsc1_p990=NIL;
  rlsc1_p786=NIL;
  rlsc1_p788=NIL;
  rlsc1_p787=NIL;
  rlsc1_p989=NIL;
  rlsc1_p781=NIL;
  rlsc1_p1045=NIL;
  rlsc1_p1043=NIL;
  rlsc1_p85=NIL;
  rlsc1_p352=NIL;
  rlsc1_p237=NIL;
  rlsc1_p161=NIL;
  rlsc1_p30=NIL;
  rlsc1_p757=NIL;
  rlsc1_p750=NIL;
  rlsc1_p774=NIL;
  rlsc1_p762=NIL;
  rlsc1_p761=NIL;
  rlsc1_p986=NIL;
  rlsc1_p789=NIL;
  rlsc1_p745=NIL;
  rlsc1_p158=NIL;
  rlsc1_p5873=NIL;
  rlsc1_p2052=NIL;
  rlsc1_p1605=NIL;
  rlsc1_p1560=NIL;
  rlsc1_p1190=NIL;
  rlsc1_p1129=NIL;
  rlsc1_p1685=NIL;
  rlsc1_p1717=NIL;
  rlsc1_p1938=NIL;
  rlsc1_p2030=NIL;
  rlsc1_p1632=NIL;
  rlsc1_p5840=NIL;
  rlsc1_p1838=NIL;
  rlsc1_p1837=NIL;
  rlsc1_p1832=NIL;
  rlsc1_p1816=NIL;
  rlsc1_p1815=NIL;
  rlsc1_p1813=NIL;
  rlsc1_p1804=NIL;
  rlsc1_p1772=NIL;
  rlsc1_p1771=NIL;
  rlsc1_p1759=NIL;
  rlsc1_p1758=NIL;
  rlsc1_p1755=NIL;
  rlsc1_p1757=NIL;
  rlsc1_p1756=NIL;
  rlsc1_p1750=NIL;
  rlsc1_p1579=NIL;
  rlsc1_p1534=NIL;
  rlsc1_p1176=NIL;
  rlsc1_p1115=NIL;
  rlsc1_p1746=NIL;
  rlsc1_p1748=NIL;
  rlsc1_p1747=NIL;
  rlsc1_p1749=NIL;
  rlsc1_p1735=NIL;
  rlsc1_p1741=NIL;
  rlsc1_p1830=NIL;
  rlsc1_p1829=NIL;
  rlsc1_p1827=NIL;
  rlsc1_p1818=NIL;
  rlsc1_p1799=NIL;
  rlsc1_p1798=NIL;
  rlsc1_p1786=NIL;
  rlsc1_p1785=NIL;
  rlsc1_p1584=NIL;
  rlsc1_p1539=NIL;
  rlsc1_p1179=NIL;
  rlsc1_p1118=NIL;
  rlsc1_p1700=NIL;
  rlsc1_p1782=NIL;
  rlsc1_p1784=NIL;
  rlsc1_p1783=NIL;
  rlsc1_p1777=NIL;
  rlsc1_p1737=NIL;
  rlsc1_p2024=NIL;
  rlsc1_p2023=NIL;
  rlsc1_p1937=NIL;
  rlsc1_p1923=NIL;
  rlsc1_p1915=NIL;
  rlsc1_p1884=NIL;
  rlsc1_p1883=NIL;
  rlsc1_p1871=NIL;
  rlsc1_p1870=NIL;
  rlsc1_p1867=NIL;
  rlsc1_p1869=NIL;
  rlsc1_p1868=NIL;
  rlsc1_p1862=NIL;
  rlsc1_p1595=NIL;
  rlsc1_p1550=NIL;
  rlsc1_p1186=NIL;
  rlsc1_p1125=NIL;
  rlsc1_p1858=NIL;
  rlsc1_p1860=NIL;
  rlsc1_p1859=NIL;
  rlsc1_p1861=NIL;
  rlsc1_p1847=NIL;
  rlsc1_p1853=NIL;
  rlsc1_p1936=NIL;
  rlsc1_p1925=NIL;
  rlsc1_p1910=NIL;
  rlsc1_p1909=NIL;
  rlsc1_p1897=NIL;
  rlsc1_p1896=NIL;
  rlsc1_p1600=NIL;
  rlsc1_p1555=NIL;
  rlsc1_p1189=NIL;
  rlsc1_p1128=NIL;
  rlsc1_p1712=NIL;
  rlsc1_p1893=NIL;
  rlsc1_p1895=NIL;
  rlsc1_p1894=NIL;
  rlsc1_p1888=NIL;
  rlsc1_p1669=NIL;
  rlsc1_p1691=NIL;
  rlsc1_p1690=NIL;
  rlsc1_p1849=NIL;
  rlsc1_p1731=NIL;
  rlsc1_p1664=NIL;
  rlsc1_p1661=NIL;
  rlsc1_p1655=NIL;
  rlsc1_p2282=NIL;
  rlsc1_p2281=NIL;
  rlsc1_p2276=NIL;
  rlsc1_p2260=NIL;
  rlsc1_p2259=NIL;
  rlsc1_p2257=NIL;
  rlsc1_p2248=NIL;
  rlsc1_p2216=NIL;
  rlsc1_p1251=NIL;
  rlsc1_p1246=NIL;
  rlsc1_p1272=NIL;
  rlsc1_p1267=NIL;
  rlsc1_p1262=NIL;
  rlsc1_p2215=NIL;
  rlsc1_p2203=NIL;
  rlsc1_p2202=NIL;
  rlsc1_p2199=NIL;
  rlsc1_p2201=NIL;
  rlsc1_p2200=NIL;
  rlsc1_p2194=NIL;
  rlsc1_p1235=NIL;
  rlsc1_p1206=NIL;
  rlsc1_p1144=NIL;
  rlsc1_p2190=NIL;
  rlsc1_p2192=NIL;
  rlsc1_p2191=NIL;
  rlsc1_p2193=NIL;
  rlsc1_p2179=NIL;
  rlsc1_p2185=NIL;
  rlsc1_p2274=NIL;
  rlsc1_p2273=NIL;
  rlsc1_p2271=NIL;
  rlsc1_p2262=NIL;
  rlsc1_p2243=NIL;
  rlsc1_p1298=NIL;
  rlsc1_p1293=NIL;
  rlsc1_p1319=NIL;
  rlsc1_p1314=NIL;
  rlsc1_p1309=NIL;
  rlsc1_p2242=NIL;
  rlsc1_p2230=NIL;
  rlsc1_p2229=NIL;
  rlsc1_p1283=NIL;
  rlsc1_p1209=NIL;
  rlsc1_p1147=NIL;
  rlsc1_p2142=NIL;
  rlsc1_p1343=NIL;
  rlsc1_p1338=NIL;
  rlsc1_p1364=NIL;
  rlsc1_p1359=NIL;
  rlsc1_p1354=NIL;
  rlsc1_p2226=NIL;
  rlsc1_p2228=NIL;
  rlsc1_p2227=NIL;
  rlsc1_p2221=NIL;
  rlsc1_p2181=NIL;
  rlsc1_p2705=NIL;
  rlsc1_p2704=NIL;
  rlsc1_p2381=NIL;
  rlsc1_p2367=NIL;
  rlsc1_p2359=NIL;
  rlsc1_p2328=NIL;
  rlsc1_p1396=NIL;
  rlsc1_p1391=NIL;
  rlsc1_p1417=NIL;
  rlsc1_p1412=NIL;
  rlsc1_p1407=NIL;
  rlsc1_p2327=NIL;
  rlsc1_p2315=NIL;
  rlsc1_p2314=NIL;
  rlsc1_p2311=NIL;
  rlsc1_p2313=NIL;
  rlsc1_p2312=NIL;
  rlsc1_p2306=NIL;
  rlsc1_p1380=NIL;
  rlsc1_p1216=NIL;
  rlsc1_p1154=NIL;
  rlsc1_p2302=NIL;
  rlsc1_p2304=NIL;
  rlsc1_p2303=NIL;
  rlsc1_p2305=NIL;
  rlsc1_p2291=NIL;
  rlsc1_p2297=NIL;
  rlsc1_p2380=NIL;
  rlsc1_p2369=NIL;
  rlsc1_p2354=NIL;
  rlsc1_p1443=NIL;
  rlsc1_p1438=NIL;
  rlsc1_p1464=NIL;
  rlsc1_p1459=NIL;
  rlsc1_p1454=NIL;
  rlsc1_p2353=NIL;
  rlsc1_p2341=NIL;
  rlsc1_p2340=NIL;
  rlsc1_p1428=NIL;
  rlsc1_p1219=NIL;
  rlsc1_p1157=NIL;
  rlsc1_p2154=NIL;
  rlsc1_p1488=NIL;
  rlsc1_p1483=NIL;
  rlsc1_p1509=NIL;
  rlsc1_p1504=NIL;
  rlsc1_p1499=NIL;
  rlsc1_p2337=NIL;
  rlsc1_p2339=NIL;
  rlsc1_p2338=NIL;
  rlsc1_p2332=NIL;
  rlsc1_p2293=NIL;
  rlsc1_p2734=NIL;
  rlsc1_p1519=NIL;
  rlsc1_p1220=NIL;
  rlsc1_p1158=NIL;
  rlsc1_p1650=NIL;
  rlsc1_p2127=NIL;
  rlsc1_p2159=NIL;
  rlsc1_p2711=NIL;
  rlsc1_p2132=NIL;
  rlsc1_p2382=NIL;
  rlsc1_p2106=NIL;
  rlsc1_p1164=NIL;
  rlsc1_p140=NIL;
  rlsc1_p114=NIL;
  rlsc1_p1104=NIL;
  rlsc1_p1099=NIL;
  double_or_symbol_result=((rlsc1_v6261=(rlsc1_v6265-rlsc1_v6273)),(rlsc1_v2795=((fabs(rlsc1_v6261)<rlsc1_v6259)?(fabs(rlsc1_f6256())<rlsc1_v6259):NIL)),(rlsc1_v1617=(rlsc1_v2795?NIL:(rlsc1_f2106()?(rlsc1_f1655()?T:(rlsc1_f2711()?(rlsc1_f2710()?(rlsc1_f2704()?rlsc1_f1650():(rlsc1_f2369()?(rlsc1_f2359()?(rlsc1_f2332()?(rlsc1_f2297()?T:rlsc1_f2340()):rlsc1_f2305()):rlsc1_f2293()):rlsc1_f2291())):(rlsc1_f2281()?rlsc1_f1650():(rlsc1_f2262()?(rlsc1_f2248()?(rlsc1_f2221()?(rlsc1_f2185()?T:rlsc1_f2229()):rlsc1_f2193()):rlsc1_f2181()):rlsc1_f2179()))):NIL)):(rlsc1_f1664()?(rlsc1_f2030()?(rlsc1_f2029()?(rlsc1_f2023()?rlsc1_f1632():(rlsc1_f1925()?(rlsc1_f1915()?(rlsc1_f1888()?(rlsc1_f1853()?T:rlsc1_f1896()):rlsc1_f1861()):rlsc1_f1849()):rlsc1_f1847())):(rlsc1_f1837()?rlsc1_f1632():(rlsc1_f1818()?(rlsc1_f1804()?(rlsc1_f1777()?(rlsc1_f1741()?T:rlsc1_f1785()):rlsc1_f1749()):rlsc1_f1737()):rlsc1_f1735()))):NIL):NIL)))),((rlsc1_v1617?((rlsc1_v1099=rlsc1_f1099()),(rlsc1_v1099?rlsc1_v1099:(fabs(((rlsc1_v1617?rlsc1_f1164():(rlsc1_f1104()?rlsc1_f2393():rlsc1_f1102()))-(0.0)))<rlsc1_v6259))):NIL)?((rlsc1_v745=rlsc1_f745()),(((rlsc1_v745?(rlsc1_f397()?(rlsc1_f1091()?NIL:(rlsc1_f4054()?NIL:(rlsc1_f4042()?rlsc1_f352():(rlsc1_f980()?rlsc1_f352():(rlsc1_f935()?(rlsc1_f883()?(rlsc1_f797()?(rlsc1_f406()?(rlsc1_f744()?NIL:(rlsc1_f3634()?rlsc1_f343():(rlsc1_f639()?rlsc1_f343():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f342()?rlsc1_f796():rlsc1_f455()):(rlsc1_f550()?(rlsc1_f340()?rlsc1_f796():T):NIL)):(rlsc1_f465()?(rlsc1_f473()?(rlsc1_f336()?rlsc1_f796():T):NIL):NIL)):NIL)))):NIL):(rlsc1_f891()?(rlsc1_f406()?(rlsc1_f744()?NIL:(rlsc1_f3634()?rlsc1_f321():(rlsc1_f639()?rlsc1_f321():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f320()?T:rlsc1_f455()):rlsc1_f550()):rlsc1_f464()):NIL)))):NIL):NIL)):(rlsc1_f806()?(rlsc1_f814()?(rlsc1_f406()?(rlsc1_f744()?NIL:(rlsc1_f3634()?rlsc1_f304():(rlsc1_f639()?rlsc1_f304():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?(rlsc1_f303()?T:rlsc1_f455()):rlsc1_f550()):rlsc1_f464()):NIL)))):NIL):NIL):NIL)):NIL))))):rlsc1_f789()):rlsc1_f405())?((rlsc1_v158=rlsc1_f158()),(rlsc1_v158?rlsc1_v158:(fabs(((rlsc1_v745?(rlsc1_f397()?rlsc1_f161():rlsc1_f750()):rlsc1_f402())-(0.0)))<rlsc1_v6259))):NIL)?coerce_double_to_double_or_symbol((rlsc1_v1617?(rlsc1_v745?(rlsc1_f397()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v161=rlsc1_f161()),((rlsc1_v1164>rlsc1_v161)?rlsc1_v1164:rlsc1_v161)):(rlsc1_f1091()?rlsc1_f779():(rlsc1_f4054()?rlsc1_f779():(rlsc1_f4042()?rlsc1_f140():(rlsc1_f980()?rlsc1_f140():(rlsc1_f935()?(rlsc1_f883()?(rlsc1_f797()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v769=rlsc1_f769()),((rlsc1_v1164>rlsc1_v769)?rlsc1_v1164:rlsc1_v769)):(rlsc1_f891()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v930=rlsc1_f930()),((rlsc1_v1164>rlsc1_v930)?rlsc1_v1164:rlsc1_v930)):rlsc1_f779())):(rlsc1_f806()?(rlsc1_f814()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v875=rlsc1_f875()),((rlsc1_v1164>rlsc1_v875)?rlsc1_v1164:rlsc1_v875)):rlsc1_f779()):rlsc1_f779())):rlsc1_f779())))))):(rlsc1_f406()?(rlsc1_f744()?rlsc1_f779():(rlsc1_f4054()?rlsc1_f779():(rlsc1_f3634()?rlsc1_f114():(rlsc1_f639()?rlsc1_f114():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v430=rlsc1_f430()),((rlsc1_v1164>rlsc1_v430)?rlsc1_v1164:rlsc1_v430)):(rlsc1_f550()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v589=rlsc1_f589()),((rlsc1_v1164>rlsc1_v589)?rlsc1_v1164:rlsc1_v589)):rlsc1_f779())):(rlsc1_f465()?(rlsc1_f473()?((rlsc1_v1164=rlsc1_f1164()),(rlsc1_v534=rlsc1_f534()),((rlsc1_v1164>rlsc1_v534)?rlsc1_v1164:rlsc1_v534)):rlsc1_f779()):rlsc1_f779())):rlsc1_f779()))))):rlsc1_f779())):(rlsc1_f1104()?rlsc1_f779():(rlsc1_v745?(rlsc1_f397()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v161=rlsc1_f161()),((rlsc1_v1102>rlsc1_v161)?rlsc1_v1102:rlsc1_v161)):(rlsc1_f1091()?rlsc1_f779():(rlsc1_f4054()?rlsc1_f779():(rlsc1_f4042()?rlsc1_f85():(rlsc1_f980()?rlsc1_f85():(rlsc1_f935()?(rlsc1_f883()?(rlsc1_f797()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v769=rlsc1_f769()),((rlsc1_v1102>rlsc1_v769)?rlsc1_v1102:rlsc1_v769)):(rlsc1_f891()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v930=rlsc1_f930()),((rlsc1_v1102>rlsc1_v930)?rlsc1_v1102:rlsc1_v930)):rlsc1_f779())):(rlsc1_f806()?(rlsc1_f814()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v875=rlsc1_f875()),((rlsc1_v1102>rlsc1_v875)?rlsc1_v1102:rlsc1_v875)):rlsc1_f779()):rlsc1_f779())):rlsc1_f779())))))):(rlsc1_f406()?(rlsc1_f744()?rlsc1_f779():(rlsc1_f4054()?rlsc1_f779():(rlsc1_f3634()?rlsc1_f59():(rlsc1_f639()?rlsc1_f59():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v430=rlsc1_f430()),((rlsc1_v1102>rlsc1_v430)?rlsc1_v1102:rlsc1_v430)):(rlsc1_f550()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v589=rlsc1_f589()),((rlsc1_v1102>rlsc1_v589)?rlsc1_v1102:rlsc1_v589)):rlsc1_f779())):(rlsc1_f465()?(rlsc1_f473()?((rlsc1_v1102=rlsc1_f1102()),(rlsc1_v534=rlsc1_f534()),((rlsc1_v1102>rlsc1_v534)?rlsc1_v1102:rlsc1_v534)):rlsc1_f779()):rlsc1_f779())):rlsc1_f779()))))):rlsc1_f779()))))):(rlsc1_v1617?coerce_double_to_double_or_symbol(rlsc1_f1164()):coerce_symbol_to_double_or_symbol((rlsc1_f1104()?NIL:rlsc1_f1102()))))):(rlsc1_f745()?(rlsc1_f397()?coerce_double_to_double_or_symbol(rlsc1_f161()):(rlsc1_f1091()?coerce_symbol_to_double_or_symbol(NIL):(rlsc1_f4054()?coerce_symbol_to_double_or_symbol(NIL):(rlsc1_f4042()?rlsc1_f30():(rlsc1_f980()?rlsc1_f30():(rlsc1_f935()?(rlsc1_f883()?(rlsc1_f797()?coerce_double_to_double_or_symbol(rlsc1_f769()):(rlsc1_f891()?coerce_double_to_double_or_symbol(rlsc1_f930()):coerce_symbol_to_double_or_symbol(NIL))):(rlsc1_f806()?(rlsc1_f814()?coerce_double_to_double_or_symbol(rlsc1_f875()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))):coerce_symbol_to_double_or_symbol(NIL))))))):(rlsc1_f406()?(rlsc1_f744()?coerce_symbol_to_double_or_symbol(NIL):(rlsc1_f4054()?coerce_symbol_to_double_or_symbol(NIL):(rlsc1_f3634()?rlsc1_f13():(rlsc1_f639()?rlsc1_f13():(rlsc1_f594()?(rlsc1_f542()?(rlsc1_f456()?coerce_double_to_double_or_symbol(rlsc1_f430()):(rlsc1_f550()?coerce_double_to_double_or_symbol(rlsc1_f589()):coerce_symbol_to_double_or_symbol(NIL))):(rlsc1_f465()?(rlsc1_f473()?coerce_double_to_double_or_symbol(rlsc1_f534()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))):coerce_symbol_to_double_or_symbol(NIL)))))):coerce_symbol_to_double_or_symbol(NIL))))); return;}
