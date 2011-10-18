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
double rlsc2_v6281;
double rlsc2_v6279;
double rlsc2_v6277;
double rlsc2_v6275;
double rlsc2_v6273;
double rlsc2_v6271;
double rlsc2_v6269;
double rlsc2_v6267;
double rlsc2_v6265;
double rlsc2_v6263;
double rlsc2_v6259;
double rlsc2_v6261;
int rlsc2_p3535;
double rlsc2_m3535;
int rlsc2_p3656;
double rlsc2_m3656;
int rlsc2_p3653;
double rlsc2_m3653;
int rlsc2_p744;
int rlsc2_m744;
double rlsc2_v3656;
double rlsc2_v3653;
int rlsc2_p3644;
double rlsc2_m3644;
int rlsc2_p779;
double rlsc2_m779;
int rlsc2_p3936;
double rlsc2_m3936;
int rlsc2_p1075;
double rlsc2_m1075;
int rlsc2_p4069;
double rlsc2_m4069;
int rlsc2_p4066;
double rlsc2_m4066;
int rlsc2_p1090;
int rlsc2_m1090;
double rlsc2_v4069;
double rlsc2_v4066;
int rlsc2_p4053;
double rlsc2_m4053;
int rlsc2_p1614;
double rlsc2_m1614;
int rlsc2_p1101;
double rlsc2_m1101;
int rlsc2_p2164;
double rlsc2_m2164;
int rlsc2_p2392;
double rlsc2_m2392;
int rlsc2_p2396;
double rlsc2_m2396;
int rlsc2_p2651;
double rlsc2_m2651;
int rlsc2_p2647;
double rlsc2_m2647;
int rlsc2_p2461;
double rlsc2_m2461;
int rlsc2_p6063;
double rlsc2_m6063;
int rlsc2_p6061;
double rlsc2_m6061;
int rlsc2_p6054;
double rlsc2_m6054;
int rlsc2_p6052;
double rlsc2_m6052;
int rlsc2_p6213;
int rlsc2_m6213;
int rlsc2_p6218;
double rlsc2_m6218;
int rlsc2_p6216;
int rlsc2_m6216;
int rlsc2_p5625;
double rlsc2_m5625;
int rlsc2_p5624;
double rlsc2_m5624;
double rlsc2_v5624;
double rlsc2_v5625;
int rlsc2_p4055;
double rlsc2_m4055;
int rlsc2_p4054;
int rlsc2_m4054;
int rlsc2_p4017;
double rlsc2_m4017;
int rlsc2_p4005;
double rlsc2_m4005;
int rlsc2_p4004;
double rlsc2_m4004;
int rlsc2_p984;
double rlsc2_m984;
int rlsc2_p5623;
double rlsc2_m5623;
int rlsc2_p2759;
double rlsc2_m2759;
int rlsc2_p2776;
double rlsc2_m2776;
int rlsc2_p2625;
double rlsc2_m2625;
int rlsc2_p2624;
int rlsc2_m2624;
int rlsc2_p2603;
double rlsc2_m2603;
double rlsc2_v2625;
int rlsc2_p2611;
double rlsc2_m2611;
int rlsc2_p2621;
double rlsc2_m2621;
int rlsc2_p6252;
double rlsc2_m6252;
int rlsc2_p6250;
double rlsc2_m6250;
double rlsc2_v6252;
double rlsc2_v6250;
int rlsc2_p6247;
double rlsc2_m6247;
double rlsc2_v6247;
int rlsc2_p6194;
double rlsc2_m6194;
int rlsc2_p6245;
double rlsc2_m6245;
int rlsc2_p6210;
double rlsc2_m6210;
int rlsc2_p2622;
double rlsc2_m2622;
int rlsc2_p2619;
double rlsc2_m2619;
int rlsc2_p2520;
double rlsc2_m2520;
int rlsc2_p2513;
int rlsc2_m2513;
int rlsc2_p2519;
double rlsc2_m2519;
int rlsc2_p2583;
int rlsc2_m2583;
int rlsc2_p2581;
double rlsc2_m2581;
int rlsc2_p2602;
double rlsc2_m2602;
int rlsc2_p2601;
double rlsc2_m2601;
int rlsc2_p2571;
double rlsc2_m2571;
int rlsc2_p2569;
double rlsc2_m2569;
int rlsc2_p2610;
double rlsc2_m2610;
int rlsc2_p2579;
double rlsc2_m2579;
int rlsc2_p2577;
double rlsc2_m2577;
int rlsc2_p2557;
double rlsc2_m2557;
int rlsc2_p2574;
int rlsc2_m2574;
int rlsc2_p2563;
double rlsc2_m2563;
int rlsc2_p2555;
double rlsc2_m2555;
double rlsc2_v2557;
double rlsc2_v2555;
int rlsc2_p2545;
int rlsc2_m2545;
int rlsc2_p2559;
int rlsc2_m2559;
int rlsc2_p2558;
int rlsc2_m2558;
int rlsc2_p2608;
double rlsc2_m2608;
int rlsc2_p2597;
double rlsc2_m2597;
int rlsc2_p2591;
double rlsc2_m2591;
double rlsc2_v2597;
double rlsc2_v2591;
int rlsc2_p2584;
int rlsc2_m2584;
int rlsc2_p2457;
double rlsc2_m2457;
int rlsc2_p2443;
double rlsc2_m2443;
int rlsc2_p2524;
int rlsc2_m2524;
int rlsc2_p2541;
int rlsc2_m2541;
double rlsc2_v2619;
int rlsc2_p2615;
double rlsc2_m2615;
int rlsc2_p2535;
double rlsc2_m2535;
double rlsc2_v2535;
int rlsc2_p2497;
double rlsc2_m2497;
int rlsc2_p2618;
double rlsc2_m2618;
int rlsc2_p2429;
double rlsc2_m2429;
int rlsc2_p2406;
int rlsc2_m2406;
int rlsc2_p2617;
double rlsc2_m2617;
int rlsc2_p2538;
double rlsc2_m2538;
int rlsc2_p2496;
double rlsc2_m2496;
double rlsc2_v2617;
int rlsc2_p2616;
double rlsc2_m2616;
double rlsc2_v2538;
int rlsc2_p2531;
double rlsc2_m2531;
int rlsc2_p2494;
double rlsc2_m2494;
int rlsc2_p2492;
double rlsc2_m2492;
int rlsc2_p2491;
double rlsc2_m2491;
int rlsc2_p2489;
double rlsc2_m2489;
double rlsc2_v2489;
int rlsc2_p2480;
int rlsc2_m2480;
int rlsc2_p2478;
double rlsc2_m2478;
int rlsc2_p2477;
double rlsc2_m2477;
int rlsc2_p2475;
double rlsc2_m2475;
double rlsc2_v2475;
int rlsc2_p2466;
int rlsc2_m2466;
int rlsc2_p2530;
int rlsc2_m2530;
int rlsc2_p2613;
double rlsc2_m2613;
int rlsc2_p2523;
double rlsc2_m2523;
int rlsc2_p2509;
double rlsc2_m2509;
double rlsc2_v2509;
int rlsc2_p2501;
int rlsc2_m2501;
int rlsc2_p2522;
double rlsc2_m2522;
double rlsc2_v2522;
int rlsc2_p2511;
int rlsc2_m2511;
int rlsc2_p2612;
int rlsc2_m2612;
int rlsc2_p2528;
int rlsc2_m2528;
int rlsc2_p2463;
int rlsc2_m2463;
int rlsc2_p2450;
double rlsc2_m2450;
int rlsc2_p2425;
double rlsc2_m2425;
int rlsc2_p2436;
double rlsc2_m2436;
int rlsc2_p2424;
double rlsc2_m2424;
int rlsc2_p2419;
double rlsc2_m2419;
double rlsc2_v2419;
int rlsc2_p2411;
double rlsc2_m2411;
int rlsc2_v2528;
double rlsc2_v2411;
int rlsc2_p2399;
int rlsc2_m2399;
int rlsc2_p6244;
double rlsc2_m6244;
int rlsc2_p2103;
double rlsc2_m2103;
int rlsc2_p2094;
double rlsc2_m2094;
int rlsc2_p2092;
double rlsc2_m2092;
int rlsc2_p2093;
double rlsc2_m2093;
double rlsc2_v2093;
double rlsc2_v2092;
int rlsc2_p1985;
double rlsc2_m1985;
double rlsc2_v2093;
double rlsc2_v2092;
int rlsc2_p1982;
double rlsc2_m1982;
int rlsc2_p2089;
int rlsc2_m2089;
int rlsc2_p2101;
double rlsc2_m2101;
int rlsc2_p2100;
double rlsc2_m2100;
int rlsc2_p2099;
double rlsc2_m2099;
double rlsc2_v2100;
double rlsc2_v2099;
int rlsc2_p1978;
double rlsc2_m1978;
double rlsc2_v2100;
double rlsc2_v2099;
int rlsc2_p1975;
double rlsc2_m1975;
int rlsc2_p2098;
double rlsc2_m2098;
int rlsc2_p2096;
int rlsc2_m2096;
int rlsc2_p2087;
double rlsc2_m2087;
int rlsc2_p2028;
int rlsc2_m2028;
int rlsc2_p2050;
double rlsc2_m2050;
int rlsc2_p2070;
double rlsc2_m2070;
double rlsc2_v2087;
int rlsc2_p2086;
double rlsc2_m2086;
int rlsc2_p2083;
double rlsc2_m2083;
int rlsc2_p2072;
double rlsc2_m2072;
int rlsc2_p2082;
double rlsc2_m2082;
int rlsc2_p2021;
int rlsc2_m2021;
int rlsc2_p2019;
double rlsc2_m2019;
int rlsc2_p1933;
double rlsc2_m1933;
int rlsc2_p1913;
double rlsc2_m1913;
int rlsc2_p1926;
int rlsc2_m1926;
int rlsc2_p1932;
double rlsc2_m1932;
double rlsc2_v2082;
int rlsc2_p2025;
double rlsc2_m2025;
int rlsc2_p1841;
double rlsc2_m1841;
double rlsc2_v1841;
int rlsc2_p1834;
double rlsc2_m1834;
int rlsc2_p2040;
double rlsc2_m2040;
int rlsc2_p2049;
double rlsc2_m2049;
int rlsc2_p2027;
double rlsc2_m2027;
int rlsc2_p1843;
double rlsc2_m1843;
int rlsc2_p1833;
double rlsc2_m1833;
double rlsc2_v2027;
int rlsc2_p2026;
double rlsc2_m2026;
int rlsc2_p2047;
double rlsc2_m2047;
int rlsc2_p2035;
int rlsc2_m2035;
int rlsc2_p2069;
double rlsc2_m2069;
int rlsc2_p2068;
double rlsc2_m2068;
int rlsc2_p2009;
double rlsc2_m2009;
int rlsc2_p2007;
double rlsc2_m2007;
int rlsc2_p2081;
double rlsc2_m2081;
int rlsc2_p2017;
double rlsc2_m2017;
int rlsc2_p2001;
double rlsc2_m2001;
int rlsc2_p2015;
double rlsc2_m2015;
int rlsc2_p1995;
double rlsc2_m1995;
int rlsc2_p1993;
double rlsc2_m1993;
int rlsc2_p2012;
int rlsc2_m2012;
int rlsc2_p1996;
int rlsc2_m1996;
double rlsc2_v1995;
double rlsc2_v1993;
int rlsc2_p1971;
int rlsc2_m1971;
int rlsc2_v2012;
int rlsc2_p1964;
double rlsc2_m1964;
int rlsc2_p1963;
double rlsc2_m1963;
double rlsc2_v1963;
int rlsc2_p1951;
int rlsc2_m1951;
int rlsc2_v1951;
int rlsc2_p1950;
int rlsc2_m1950;
int rlsc2_p1195;
double rlsc2_m1195;
int rlsc2_p1721;
double rlsc2_m1721;
int rlsc2_p1947;
double rlsc2_m1947;
int rlsc2_p1949;
double rlsc2_m1949;
int rlsc2_p1948;
int rlsc2_m1948;
int rlsc2_v1948;
int rlsc2_p1942;
int rlsc2_m1942;
int rlsc2_p1941;
int rlsc2_m1941;
int rlsc2_p1727;
double rlsc2_m1727;
int rlsc2_p1729;
double rlsc2_m1729;
int rlsc2_p1728;
int rlsc2_m1728;
int rlsc2_v1728;
int rlsc2_p1722;
int rlsc2_m1722;
int rlsc2_p2079;
double rlsc2_m2079;
int rlsc2_p2064;
double rlsc2_m2064;
int rlsc2_p2058;
double rlsc2_m2058;
int rlsc2_p2792;
double rlsc2_m2792;
int rlsc2_p2783;
double rlsc2_m2783;
int rlsc2_p2781;
double rlsc2_m2781;
int rlsc2_p2782;
double rlsc2_m2782;
double rlsc2_v2782;
double rlsc2_v2781;
int rlsc2_p2667;
double rlsc2_m2667;
double rlsc2_v2782;
double rlsc2_v2781;
int rlsc2_p2664;
double rlsc2_m2664;
int rlsc2_p2778;
int rlsc2_m2778;
int rlsc2_p2790;
double rlsc2_m2790;
int rlsc2_p2789;
double rlsc2_m2789;
int rlsc2_p2788;
double rlsc2_m2788;
double rlsc2_v2789;
double rlsc2_v2788;
int rlsc2_p2660;
double rlsc2_m2660;
double rlsc2_v2789;
double rlsc2_v2788;
int rlsc2_p2657;
double rlsc2_m2657;
int rlsc2_p2787;
double rlsc2_m2787;
int rlsc2_p2785;
int rlsc2_m2785;
int rlsc2_p2772;
double rlsc2_m2772;
int rlsc2_p2710;
int rlsc2_m2710;
int rlsc2_p2733;
double rlsc2_m2733;
int rlsc2_p2753;
double rlsc2_m2753;
double rlsc2_v2772;
int rlsc2_p2771;
double rlsc2_m2771;
int rlsc2_p2768;
double rlsc2_m2768;
int rlsc2_p2755;
double rlsc2_m2755;
int rlsc2_p2767;
double rlsc2_m2767;
int rlsc2_p2703;
int rlsc2_m2703;
int rlsc2_p2701;
double rlsc2_m2701;
int rlsc2_p2377;
double rlsc2_m2377;
int rlsc2_p2357;
double rlsc2_m2357;
int rlsc2_p2370;
int rlsc2_m2370;
int rlsc2_p2376;
double rlsc2_m2376;
double rlsc2_v2767;
int rlsc2_p2707;
double rlsc2_m2707;
int rlsc2_p2285;
double rlsc2_m2285;
double rlsc2_v2285;
int rlsc2_p2278;
double rlsc2_m2278;
int rlsc2_p2723;
double rlsc2_m2723;
int rlsc2_p2732;
double rlsc2_m2732;
int rlsc2_p2709;
double rlsc2_m2709;
int rlsc2_p2287;
double rlsc2_m2287;
int rlsc2_p2277;
double rlsc2_m2277;
double rlsc2_v2709;
int rlsc2_p2708;
double rlsc2_m2708;
int rlsc2_p2730;
double rlsc2_m2730;
int rlsc2_p2718;
int rlsc2_m2718;
int rlsc2_p2752;
double rlsc2_m2752;
int rlsc2_p2751;
double rlsc2_m2751;
int rlsc2_p2691;
double rlsc2_m2691;
int rlsc2_p2689;
double rlsc2_m2689;
int rlsc2_p2766;
double rlsc2_m2766;
int rlsc2_p2699;
double rlsc2_m2699;
int rlsc2_p2683;
double rlsc2_m2683;
int rlsc2_p2697;
double rlsc2_m2697;
int rlsc2_p2677;
double rlsc2_m2677;
int rlsc2_p2675;
double rlsc2_m2675;
int rlsc2_p2694;
int rlsc2_m2694;
int rlsc2_p2678;
int rlsc2_m2678;
double rlsc2_v2677;
double rlsc2_v2675;
int rlsc2_p2653;
int rlsc2_m2653;
int rlsc2_v2694;
int rlsc2_p2642;
double rlsc2_m2642;
int rlsc2_p2641;
double rlsc2_m2641;
double rlsc2_v2641;
int rlsc2_p2627;
int rlsc2_m2627;
int rlsc2_v2627;
int rlsc2_p2398;
int rlsc2_m2398;
int rlsc2_p1225;
double rlsc2_m1225;
int rlsc2_p2163;
double rlsc2_m2163;
int rlsc2_p2391;
double rlsc2_m2391;
int rlsc2_p2395;
double rlsc2_m2395;
int rlsc2_p2394;
int rlsc2_m2394;
int rlsc2_v2394;
int rlsc2_p2386;
int rlsc2_m2386;
int rlsc2_p2171;
double rlsc2_m2171;
int rlsc2_p2173;
double rlsc2_m2173;
int rlsc2_p2172;
int rlsc2_m2172;
int rlsc2_p2385;
int rlsc2_m2385;
int rlsc2_v2172;
int rlsc2_p2166;
int rlsc2_m2166;
int rlsc2_p2764;
double rlsc2_m2764;
int rlsc2_p2747;
double rlsc2_m2747;
int rlsc2_p2741;
double rlsc2_m2741;
int rlsc2_p6256;
double rlsc2_m6256;
int rlsc2_v2795;
double rlsc2_v6256;
int rlsc2_p6220;
double rlsc2_m6220;
int rlsc2_p5878;
double rlsc2_m5878;
int rlsc2_p5876;
double rlsc2_m5876;
double rlsc2_v5876;
int rlsc2_p5875;
double rlsc2_m5875;
double rlsc2_v3644;
int rlsc2_p3641;
double rlsc2_m3641;
double rlsc2_v3641;
int rlsc2_p3609;
double rlsc2_m3609;
int rlsc2_p642;
double rlsc2_m642;
int rlsc2_p632;
double rlsc2_m632;
int rlsc2_p638;
double rlsc2_m638;
double rlsc2_v642;
int rlsc2_p640;
double rlsc2_m640;
int rlsc2_p639;
int rlsc2_m639;
int rlsc2_p637;
double rlsc2_m637;
int rlsc2_p631;
double rlsc2_m631;
int rlsc2_p540;
double rlsc2_m540;
int rlsc2_p512;
int rlsc2_m512;
int rlsc2_p630;
double rlsc2_m630;
int rlsc2_p629;
int rlsc2_m629;
int rlsc2_p636;
double rlsc2_m636;
int rlsc2_p538;
double rlsc2_m538;
int rlsc2_p513;
int rlsc2_m513;
int rlsc2_p510;
double rlsc2_m510;
int rlsc2_p505;
double rlsc2_m505;
int rlsc2_p498;
double rlsc2_m498;
int rlsc2_p504;
double rlsc2_m504;
int rlsc2_p497;
double rlsc2_m497;
int rlsc2_p480;
int rlsc2_m480;
int rlsc2_p536;
double rlsc2_m536;
int rlsc2_p493;
double rlsc2_m493;
double rlsc2_v493;
int rlsc2_p485;
double rlsc2_m485;
int rlsc2_p534;
double rlsc2_m534;
int rlsc2_p533;
double rlsc2_m533;
double rlsc2_v533;
int rlsc2_p521;
int rlsc2_m521;
int rlsc2_v521;
double rlsc2_v485;
int rlsc2_p473;
int rlsc2_m473;
int rlsc2_p470;
double rlsc2_m470;
int rlsc2_p472;
double rlsc2_m472;
int rlsc2_p471;
int rlsc2_m471;
int rlsc2_v471;
int rlsc2_p465;
int rlsc2_m465;
int rlsc2_p464;
int rlsc2_m464;
int rlsc2_p461;
double rlsc2_m461;
int rlsc2_p463;
double rlsc2_m463;
int rlsc2_p462;
int rlsc2_m462;
int rlsc2_v462;
int rlsc2_p456;
int rlsc2_m456;
int rlsc2_p634;
double rlsc2_m634;
int rlsc2_p591;
double rlsc2_m591;
int rlsc2_p568;
double rlsc2_m568;
int rlsc2_p589;
double rlsc2_m589;
int rlsc2_p588;
double rlsc2_m588;
double rlsc2_v588;
int rlsc2_p576;
int rlsc2_m576;
int rlsc2_p633;
int rlsc2_m633;
int rlsc2_p627;
double rlsc2_m627;
int rlsc2_p622;
double rlsc2_m622;
int rlsc2_p615;
double rlsc2_m615;
int rlsc2_p621;
double rlsc2_m621;
double rlsc2_v568;
int rlsc2_p560;
double rlsc2_m560;
int rlsc2_p607;
double rlsc2_m607;
int rlsc2_p614;
double rlsc2_m614;
int rlsc2_p611;
int rlsc2_m611;
int rlsc2_p602;
int rlsc2_m602;
int rlsc2_p601;
int rlsc2_m601;
int rlsc2_v576;
double rlsc2_v560;
int rlsc2_p550;
int rlsc2_m550;
int rlsc2_p455;
int rlsc2_m455;
double rlsc2_v589;
double rlsc2_v534;
int rlsc2_p430;
double rlsc2_m430;
int rlsc2_p547;
double rlsc2_m547;
int rlsc2_p549;
double rlsc2_m549;
int rlsc2_p548;
int rlsc2_m548;
int rlsc2_v548;
int rlsc2_p542;
int rlsc2_m542;
double rlsc2_v607;
int rlsc2_p598;
int rlsc2_m598;
int rlsc2_p3620;
double rlsc2_m3620;
int rlsc2_p3636;
double rlsc2_m3636;
double rlsc2_v3636;
int rlsc2_p3634;
int rlsc2_m3634;
int rlsc2_p3626;
int rlsc2_m3626;
int rlsc2_p3583;
int rlsc2_m3583;
int rlsc2_v3583;
int rlsc2_p3581;
int rlsc2_m3581;
int rlsc2_p3633;
double rlsc2_m3633;
int rlsc2_p3631;
int rlsc2_m3631;
int rlsc2_v3631;
int rlsc2_p3627;
int rlsc2_m3627;
int rlsc2_v3627;
int rlsc2_p594;
int rlsc2_m594;
int rlsc2_v3626;
int rlsc2_p738;
double rlsc2_m738;
int rlsc2_p733;
double rlsc2_m733;
int rlsc2_p732;
int rlsc2_m732;
int rlsc2_p736;
double rlsc2_m736;
int rlsc2_p696;
double rlsc2_m696;
int rlsc2_p673;
double rlsc2_m673;
int rlsc2_p694;
double rlsc2_m694;
int rlsc2_p693;
double rlsc2_m693;
double rlsc2_v693;
int rlsc2_p681;
int rlsc2_m681;
int rlsc2_p735;
int rlsc2_m735;
int rlsc2_p730;
double rlsc2_m730;
int rlsc2_p725;
double rlsc2_m725;
int rlsc2_p718;
double rlsc2_m718;
int rlsc2_p724;
double rlsc2_m724;
double rlsc2_v673;
int rlsc2_p665;
double rlsc2_m665;
int rlsc2_p710;
double rlsc2_m710;
int rlsc2_p717;
double rlsc2_m717;
int rlsc2_p714;
int rlsc2_m714;
int rlsc2_p705;
int rlsc2_m705;
int rlsc2_p704;
int rlsc2_m704;
int rlsc2_v681;
double rlsc2_v665;
int rlsc2_p655;
int rlsc2_m655;
int rlsc2_p439;
double rlsc2_m439;
int rlsc2_p18;
double_or_symbol rlsc2_m18;
int rlsc2_p652;
double rlsc2_m652;
int rlsc2_p654;
double rlsc2_m654;
int rlsc2_p653;
int rlsc2_m653;
int rlsc2_v653;
int rlsc2_p647;
int rlsc2_m647;
int rlsc2_p646;
int rlsc2_m646;
int rlsc2_p445;
double rlsc2_m445;
int rlsc2_p447;
double rlsc2_m447;
int rlsc2_p446;
int rlsc2_m446;
int rlsc2_v446;
int rlsc2_p440;
int rlsc2_m440;
double rlsc2_v710;
int rlsc2_p701;
int rlsc2_m701;
int rlsc2_p699;
int rlsc2_m699;
double rlsc2_v1101;
double rlsc2_v439;
double rlsc2_v1101;
double rlsc2_v694;
int rlsc2_p59;
double rlsc2_m59;
int rlsc2_p418;
double rlsc2_m418;
int rlsc2_p411;
double rlsc2_m411;
int rlsc2_p435;
double rlsc2_m435;
int rlsc2_p423;
double rlsc2_m423;
int rlsc2_p422;
int rlsc2_m422;
int rlsc2_p643;
int rlsc2_m643;
int rlsc2_p448;
int rlsc2_m448;
int rlsc2_v422;
int rlsc2_p406;
int rlsc2_m406;
int rlsc2_p405;
int rlsc2_m405;
int rlsc2_p402;
double rlsc2_m402;
int rlsc2_p404;
double rlsc2_m404;
int rlsc2_p403;
int rlsc2_m403;
int rlsc2_v403;
int rlsc2_p397;
int rlsc2_m397;
int rlsc2_v647;
int rlsc2_p13;
double_or_symbol rlsc2_m13;
double rlsc2_v4053;
int rlsc2_p4050;
double rlsc2_m4050;
double rlsc2_v4050;
int rlsc2_p4016;
double rlsc2_m4016;
int rlsc2_p983;
double rlsc2_m983;
int rlsc2_p973;
double rlsc2_m973;
int rlsc2_p979;
double rlsc2_m979;
double rlsc2_v983;
int rlsc2_p981;
double rlsc2_m981;
int rlsc2_p980;
int rlsc2_m980;
int rlsc2_p978;
double rlsc2_m978;
int rlsc2_p972;
double rlsc2_m972;
int rlsc2_p881;
double rlsc2_m881;
int rlsc2_p853;
int rlsc2_m853;
int rlsc2_p971;
double rlsc2_m971;
int rlsc2_p970;
int rlsc2_m970;
int rlsc2_p977;
double rlsc2_m977;
int rlsc2_p879;
double rlsc2_m879;
int rlsc2_p854;
int rlsc2_m854;
int rlsc2_p851;
double rlsc2_m851;
int rlsc2_p846;
double rlsc2_m846;
int rlsc2_p839;
double rlsc2_m839;
int rlsc2_p845;
double rlsc2_m845;
int rlsc2_p838;
double rlsc2_m838;
int rlsc2_p821;
int rlsc2_m821;
int rlsc2_p877;
double rlsc2_m877;
int rlsc2_p834;
double rlsc2_m834;
double rlsc2_v834;
int rlsc2_p826;
double rlsc2_m826;
int rlsc2_p875;
double rlsc2_m875;
int rlsc2_p303;
int rlsc2_m303;
int rlsc2_p309;
int rlsc2_m309;
int rlsc2_p304;
int rlsc2_m304;
double rlsc2_v875;
double rlsc2_v694;
int rlsc2_p184;
double rlsc2_m184;
int rlsc2_p874;
double rlsc2_m874;
double rlsc2_v874;
int rlsc2_p862;
int rlsc2_m862;
int rlsc2_v862;
double rlsc2_v826;
int rlsc2_p814;
int rlsc2_m814;
int rlsc2_p811;
double rlsc2_m811;
int rlsc2_p813;
double rlsc2_m813;
int rlsc2_p812;
int rlsc2_m812;
int rlsc2_v812;
int rlsc2_p806;
int rlsc2_m806;
int rlsc2_p805;
int rlsc2_m805;
int rlsc2_p802;
double rlsc2_m802;
int rlsc2_p804;
double rlsc2_m804;
int rlsc2_p803;
int rlsc2_m803;
int rlsc2_v803;
int rlsc2_p797;
int rlsc2_m797;
int rlsc2_p975;
double rlsc2_m975;
int rlsc2_p932;
double rlsc2_m932;
int rlsc2_p909;
double rlsc2_m909;
int rlsc2_p930;
double rlsc2_m930;
int rlsc2_p320;
int rlsc2_m320;
int rlsc2_p326;
int rlsc2_m326;
int rlsc2_p321;
int rlsc2_m321;
double rlsc2_v930;
double rlsc2_v694;
int rlsc2_p209;
double rlsc2_m209;
int rlsc2_p929;
double rlsc2_m929;
double rlsc2_v929;
int rlsc2_p917;
int rlsc2_m917;
int rlsc2_p974;
int rlsc2_m974;
int rlsc2_p968;
double rlsc2_m968;
int rlsc2_p963;
double rlsc2_m963;
int rlsc2_p956;
double rlsc2_m956;
int rlsc2_p962;
double rlsc2_m962;
double rlsc2_v909;
int rlsc2_p901;
double rlsc2_m901;
int rlsc2_p948;
double rlsc2_m948;
int rlsc2_p955;
double rlsc2_m955;
int rlsc2_p952;
int rlsc2_m952;
int rlsc2_p943;
int rlsc2_m943;
int rlsc2_p942;
int rlsc2_m942;
int rlsc2_v917;
double rlsc2_v901;
int rlsc2_p891;
int rlsc2_m891;
double rlsc2_v930;
double rlsc2_v875;
int rlsc2_p769;
double rlsc2_m769;
int rlsc2_p342;
int rlsc2_m342;
int rlsc2_p340;
int rlsc2_m340;
int rlsc2_p336;
int rlsc2_m336;
int rlsc2_p351;
int rlsc2_m351;
int rlsc2_p349;
int rlsc2_m349;
int rlsc2_p230;
double rlsc2_m230;
int rlsc2_p796;
int rlsc2_m796;
int rlsc2_p343;
int rlsc2_m343;
int rlsc2_p888;
double rlsc2_m888;
int rlsc2_p890;
double rlsc2_m890;
int rlsc2_p889;
int rlsc2_m889;
int rlsc2_v889;
int rlsc2_p883;
int rlsc2_m883;
double rlsc2_v948;
int rlsc2_p939;
int rlsc2_m939;
int rlsc2_p4028;
double rlsc2_m4028;
int rlsc2_p4044;
double rlsc2_m4044;
double rlsc2_v4044;
int rlsc2_p4042;
int rlsc2_m4042;
int rlsc2_p4034;
int rlsc2_m4034;
int rlsc2_p3987;
int rlsc2_m3987;
int rlsc2_v3987;
int rlsc2_p3985;
int rlsc2_m3985;
int rlsc2_p4041;
double rlsc2_m4041;
int rlsc2_p4039;
int rlsc2_m4039;
int rlsc2_v4039;
int rlsc2_p4035;
int rlsc2_m4035;
int rlsc2_v4035;
int rlsc2_p935;
int rlsc2_m935;
int rlsc2_v4034;
int rlsc2_p1083;
double rlsc2_m1083;
int rlsc2_p1078;
double rlsc2_m1078;
int rlsc2_p1077;
int rlsc2_m1077;
int rlsc2_p1081;
double rlsc2_m1081;
int rlsc2_p1039;
double rlsc2_m1039;
int rlsc2_p1016;
double rlsc2_m1016;
int rlsc2_p1037;
double rlsc2_m1037;
int rlsc2_p365;
int rlsc2_m365;
int rlsc2_p371;
int rlsc2_m371;
int rlsc2_p366;
int rlsc2_m366;
double rlsc2_v1037;
double rlsc2_v694;
int rlsc2_p257;
double rlsc2_m257;
int rlsc2_p1036;
double rlsc2_m1036;
double rlsc2_v1036;
int rlsc2_p1024;
int rlsc2_m1024;
int rlsc2_p1080;
int rlsc2_m1080;
int rlsc2_p1073;
double rlsc2_m1073;
int rlsc2_p1068;
double rlsc2_m1068;
int rlsc2_p1061;
double rlsc2_m1061;
int rlsc2_p1067;
double rlsc2_m1067;
double rlsc2_v1016;
int rlsc2_p1008;
double rlsc2_m1008;
int rlsc2_p1053;
double rlsc2_m1053;
int rlsc2_p1060;
double rlsc2_m1060;
int rlsc2_p1057;
int rlsc2_m1057;
int rlsc2_p1048;
int rlsc2_m1048;
int rlsc2_p1047;
int rlsc2_m1047;
int rlsc2_v1024;
double rlsc2_v1008;
int rlsc2_p998;
int rlsc2_m998;
int rlsc2_p35;
double_or_symbol rlsc2_m35;
int rlsc2_p778;
double rlsc2_m778;
int rlsc2_p387;
int rlsc2_m387;
int rlsc2_p385;
int rlsc2_m385;
int rlsc2_p381;
int rlsc2_m381;
int rlsc2_p396;
int rlsc2_m396;
int rlsc2_p394;
int rlsc2_m394;
int rlsc2_p388;
int rlsc2_m388;
int rlsc2_p278;
double rlsc2_m278;
int rlsc2_p995;
double rlsc2_m995;
int rlsc2_p997;
double rlsc2_m997;
int rlsc2_p996;
int rlsc2_m996;
int rlsc2_v996;
int rlsc2_p990;
int rlsc2_m990;
int rlsc2_p786;
double rlsc2_m786;
int rlsc2_p788;
double rlsc2_m788;
int rlsc2_p787;
int rlsc2_m787;
int rlsc2_p989;
int rlsc2_m989;
int rlsc2_v787;
int rlsc2_p781;
int rlsc2_m781;
double rlsc2_v1053;
int rlsc2_p1044;
int rlsc2_m1044;
int rlsc2_p1042;
int rlsc2_m1042;
double rlsc2_v1101;
double rlsc2_v778;
double rlsc2_v1101;
double rlsc2_v1037;
int rlsc2_p85;
double rlsc2_m85;
int rlsc2_p352;
int rlsc2_m352;
double rlsc2_v1037;
double rlsc2_v589;
double rlsc2_v1037;
double rlsc2_v534;
int rlsc2_p237;
double rlsc2_m237;
double rlsc2_v930;
double rlsc2_v589;
double rlsc2_v930;
double rlsc2_v534;
double rlsc2_v875;
double rlsc2_v589;
double rlsc2_v875;
double rlsc2_v534;
int rlsc2_p161;
double rlsc2_m161;
int rlsc2_v990;
int rlsc2_p30;
double_or_symbol rlsc2_m30;
int rlsc2_p757;
double rlsc2_m757;
int rlsc2_p750;
double rlsc2_m750;
int rlsc2_p774;
double rlsc2_m774;
int rlsc2_p762;
double rlsc2_m762;
int rlsc2_p761;
int rlsc2_m761;
int rlsc2_p986;
int rlsc2_m986;
int rlsc2_p789;
int rlsc2_m789;
int rlsc2_v761;
int rlsc2_p745;
int rlsc2_m745;
int rlsc2_p158;
int rlsc2_m158;
double rlsc2_v5878;
int rlsc2_p5873;
double rlsc2_m5873;
double rlsc2_v2064;
double rlsc2_v2058;
int rlsc2_p2051;
int rlsc2_m2051;
double rlsc2_v2163;
double rlsc2_v1721;
double rlsc2_v2163;
double rlsc2_v1964;
int rlsc2_p1604;
double rlsc2_m1604;
double rlsc2_v2642;
double rlsc2_v1721;
double rlsc2_v2642;
double rlsc2_v1964;
int rlsc2_p1559;
double rlsc2_m1559;
int rlsc2_v1942;
int rlsc2_p1189;
double rlsc2_m1189;
int rlsc2_p1128;
int rlsc2_m1128;
int rlsc2_p1684;
double rlsc2_m1684;
int rlsc2_p1716;
double rlsc2_m1716;
int rlsc2_p1937;
int rlsc2_m1937;
int rlsc2_v2051;
double rlsc2_v2040;
int rlsc2_p2029;
int rlsc2_m2029;
int rlsc2_p1631;
int rlsc2_m1631;
double rlsc2_v5873;
int rlsc2_p5840;
double rlsc2_m5840;
double rlsc2_v1843;
int rlsc2_p1837;
double rlsc2_m1837;
int rlsc2_p1836;
int rlsc2_m1836;
int rlsc2_p1831;
double rlsc2_m1831;
int rlsc2_p1815;
double rlsc2_m1815;
int rlsc2_p1814;
double rlsc2_m1814;
int rlsc2_p1812;
double rlsc2_m1812;
double rlsc2_v1812;
int rlsc2_p1803;
int rlsc2_m1803;
int rlsc2_p1771;
double rlsc2_m1771;
int rlsc2_p1770;
double rlsc2_m1770;
double rlsc2_v1770;
int rlsc2_p1758;
int rlsc2_m1758;
int rlsc2_v1758;
int rlsc2_p1757;
int rlsc2_m1757;
int rlsc2_p1754;
double rlsc2_m1754;
int rlsc2_p1756;
double rlsc2_m1756;
int rlsc2_p1755;
int rlsc2_m1755;
int rlsc2_v1755;
int rlsc2_p1749;
int rlsc2_m1749;
double rlsc2_v2163;
double rlsc2_v1771;
int rlsc2_p1578;
double rlsc2_m1578;
double rlsc2_v2642;
double rlsc2_v1771;
int rlsc2_p1533;
double rlsc2_m1533;
int rlsc2_p1175;
double rlsc2_m1175;
int rlsc2_p1114;
int rlsc2_m1114;
int rlsc2_p1745;
double rlsc2_m1745;
int rlsc2_p1747;
double rlsc2_m1747;
int rlsc2_p1746;
int rlsc2_m1746;
int rlsc2_p1748;
int rlsc2_m1748;
int rlsc2_p1734;
int rlsc2_m1734;
int rlsc2_v1746;
int rlsc2_p1740;
int rlsc2_m1740;
int rlsc2_p1829;
double rlsc2_m1829;
int rlsc2_p1828;
double rlsc2_m1828;
int rlsc2_p1826;
double rlsc2_m1826;
double rlsc2_v1826;
int rlsc2_p1817;
int rlsc2_m1817;
int rlsc2_p1798;
double rlsc2_m1798;
int rlsc2_p1797;
double rlsc2_m1797;
double rlsc2_v1797;
int rlsc2_p1785;
int rlsc2_m1785;
int rlsc2_v1785;
int rlsc2_p1784;
int rlsc2_m1784;
double rlsc2_v2163;
double rlsc2_v1798;
int rlsc2_p1583;
double rlsc2_m1583;
double rlsc2_v2642;
double rlsc2_v1798;
int rlsc2_p1538;
double rlsc2_m1538;
int rlsc2_p1178;
double rlsc2_m1178;
int rlsc2_p1117;
int rlsc2_m1117;
double rlsc2_v1798;
double rlsc2_v1771;
int rlsc2_p1699;
double rlsc2_m1699;
int rlsc2_p1781;
double rlsc2_m1781;
int rlsc2_p1783;
double rlsc2_m1783;
int rlsc2_p1782;
int rlsc2_m1782;
int rlsc2_v1782;
int rlsc2_p1776;
int rlsc2_m1776;
int rlsc2_p1736;
int rlsc2_m1736;
int rlsc2_p2023;
double rlsc2_m2023;
int rlsc2_p2022;
int rlsc2_m2022;
int rlsc2_p1936;
double rlsc2_m1936;
int rlsc2_p1922;
double rlsc2_m1922;
double rlsc2_v1922;
int rlsc2_p1914;
int rlsc2_m1914;
int rlsc2_p1883;
double rlsc2_m1883;
int rlsc2_p1882;
double rlsc2_m1882;
double rlsc2_v1882;
int rlsc2_p1870;
int rlsc2_m1870;
int rlsc2_v1870;
int rlsc2_p1869;
int rlsc2_m1869;
int rlsc2_p1866;
double rlsc2_m1866;
int rlsc2_p1868;
double rlsc2_m1868;
int rlsc2_p1867;
int rlsc2_m1867;
int rlsc2_v1867;
int rlsc2_p1861;
int rlsc2_m1861;
double rlsc2_v2163;
double rlsc2_v1883;
int rlsc2_p1594;
double rlsc2_m1594;
double rlsc2_v2642;
double rlsc2_v1883;
int rlsc2_p1549;
double rlsc2_m1549;
int rlsc2_p1185;
double rlsc2_m1185;
int rlsc2_p1124;
int rlsc2_m1124;
int rlsc2_p1857;
double rlsc2_m1857;
int rlsc2_p1859;
double rlsc2_m1859;
int rlsc2_p1858;
int rlsc2_m1858;
int rlsc2_p1860;
int rlsc2_m1860;
int rlsc2_p1846;
int rlsc2_m1846;
int rlsc2_v1858;
int rlsc2_p1852;
int rlsc2_m1852;
int rlsc2_p1935;
double rlsc2_m1935;
double rlsc2_v1935;
int rlsc2_p1924;
int rlsc2_m1924;
int rlsc2_p1909;
double rlsc2_m1909;
int rlsc2_p1908;
double rlsc2_m1908;
double rlsc2_v1908;
int rlsc2_p1896;
int rlsc2_m1896;
int rlsc2_v1896;
int rlsc2_p1895;
int rlsc2_m1895;
double rlsc2_v2163;
double rlsc2_v1909;
int rlsc2_p1599;
double rlsc2_m1599;
double rlsc2_v2642;
double rlsc2_v1909;
int rlsc2_p1554;
double rlsc2_m1554;
int rlsc2_p1188;
double rlsc2_m1188;
int rlsc2_p1127;
int rlsc2_m1127;
double rlsc2_v1909;
double rlsc2_v1883;
int rlsc2_p1711;
double rlsc2_m1711;
int rlsc2_p1892;
double rlsc2_m1892;
int rlsc2_p1894;
double rlsc2_m1894;
int rlsc2_p1893;
int rlsc2_m1893;
int rlsc2_v1893;
int rlsc2_p1887;
int rlsc2_m1887;
int rlsc2_p1668;
double rlsc2_m1668;
int rlsc2_p1690;
double rlsc2_m1690;
int rlsc2_p1689;
int rlsc2_m1689;
int rlsc2_p1848;
int rlsc2_m1848;
int rlsc2_p1730;
int rlsc2_m1730;
int rlsc2_v1689;
int rlsc2_p1663;
int rlsc2_m1663;
int rlsc2_p1660;
int rlsc2_m1660;
int rlsc2_v1663;
int rlsc2_v1660;
int rlsc2_p1654;
int rlsc2_m1654;
double rlsc2_v2287;
int rlsc2_p2281;
double rlsc2_m2281;
int rlsc2_p2280;
int rlsc2_m2280;
int rlsc2_p2275;
double rlsc2_m2275;
int rlsc2_p2259;
double rlsc2_m2259;
int rlsc2_p2258;
double rlsc2_m2258;
int rlsc2_p2256;
double rlsc2_m2256;
double rlsc2_v2256;
int rlsc2_p2247;
int rlsc2_m2247;
int rlsc2_p2215;
double rlsc2_m2215;
double rlsc2_v2215;
double rlsc2_v1798;
int rlsc2_p1250;
double rlsc2_m1250;
double rlsc2_v2215;
double rlsc2_v1771;
int rlsc2_p1245;
double rlsc2_m1245;
double rlsc2_v2215;
double rlsc2_v1721;
double rlsc2_v2215;
double rlsc2_v1964;
int rlsc2_p1271;
double rlsc2_m1271;
double rlsc2_v2215;
double rlsc2_v1909;
int rlsc2_p1266;
double rlsc2_m1266;
double rlsc2_v2215;
double rlsc2_v1883;
int rlsc2_p1261;
double rlsc2_m1261;
int rlsc2_p2214;
double rlsc2_m2214;
double rlsc2_v2214;
int rlsc2_p2202;
int rlsc2_m2202;
int rlsc2_v2202;
int rlsc2_p2201;
int rlsc2_m2201;
int rlsc2_p2198;
double rlsc2_m2198;
int rlsc2_p2200;
double rlsc2_m2200;
int rlsc2_p2199;
int rlsc2_m2199;
int rlsc2_v2199;
int rlsc2_p2193;
int rlsc2_m2193;
double rlsc2_v2215;
double rlsc2_v1711;
double rlsc2_v2215;
double rlsc2_v1699;
int rlsc2_p1234;
double rlsc2_m1234;
int rlsc2_p1205;
double rlsc2_m1205;
int rlsc2_p1143;
int rlsc2_m1143;
int rlsc2_p2189;
double rlsc2_m2189;
int rlsc2_p2191;
double rlsc2_m2191;
int rlsc2_p2190;
int rlsc2_m2190;
int rlsc2_p2192;
int rlsc2_m2192;
int rlsc2_p2178;
int rlsc2_m2178;
int rlsc2_v2190;
int rlsc2_p2184;
int rlsc2_m2184;
int rlsc2_p2273;
double rlsc2_m2273;
int rlsc2_p2272;
double rlsc2_m2272;
int rlsc2_p2270;
double rlsc2_m2270;
double rlsc2_v2270;
int rlsc2_p2261;
int rlsc2_m2261;
int rlsc2_p2242;
double rlsc2_m2242;
double rlsc2_v2242;
double rlsc2_v1798;
int rlsc2_p1297;
double rlsc2_m1297;
double rlsc2_v2242;
double rlsc2_v1771;
int rlsc2_p1292;
double rlsc2_m1292;
double rlsc2_v2242;
double rlsc2_v1721;
double rlsc2_v2242;
double rlsc2_v1964;
int rlsc2_p1318;
double rlsc2_m1318;
double rlsc2_v2242;
double rlsc2_v1909;
int rlsc2_p1313;
double rlsc2_m1313;
double rlsc2_v2242;
double rlsc2_v1883;
int rlsc2_p1308;
double rlsc2_m1308;
int rlsc2_p2241;
double rlsc2_m2241;
double rlsc2_v2241;
int rlsc2_p2229;
int rlsc2_m2229;
int rlsc2_v2229;
int rlsc2_p2228;
int rlsc2_m2228;
double rlsc2_v2242;
double rlsc2_v1711;
double rlsc2_v2242;
double rlsc2_v1699;
int rlsc2_p1282;
double rlsc2_m1282;
int rlsc2_p1208;
double rlsc2_m1208;
int rlsc2_p1146;
int rlsc2_m1146;
double rlsc2_v2242;
double rlsc2_v2215;
int rlsc2_p2141;
double rlsc2_m2141;
double rlsc2_v2141;
double rlsc2_v1798;
int rlsc2_p1342;
double rlsc2_m1342;
double rlsc2_v2141;
double rlsc2_v1771;
int rlsc2_p1337;
double rlsc2_m1337;
double rlsc2_v2141;
double rlsc2_v1721;
double rlsc2_v2141;
double rlsc2_v1964;
int rlsc2_p1363;
double rlsc2_m1363;
double rlsc2_v2141;
double rlsc2_v1909;
int rlsc2_p1358;
double rlsc2_m1358;
double rlsc2_v2141;
double rlsc2_v1883;
int rlsc2_p1353;
double rlsc2_m1353;
int rlsc2_p2225;
double rlsc2_m2225;
int rlsc2_p2227;
double rlsc2_m2227;
int rlsc2_p2226;
int rlsc2_m2226;
int rlsc2_v2226;
int rlsc2_p2220;
int rlsc2_m2220;
int rlsc2_p2180;
int rlsc2_m2180;
int rlsc2_p2705;
double rlsc2_m2705;
int rlsc2_p2704;
int rlsc2_m2704;
int rlsc2_p2380;
double rlsc2_m2380;
int rlsc2_p2366;
double rlsc2_m2366;
double rlsc2_v2366;
int rlsc2_p2358;
int rlsc2_m2358;
int rlsc2_p2327;
double rlsc2_m2327;
double rlsc2_v2327;
double rlsc2_v1798;
int rlsc2_p1395;
double rlsc2_m1395;
double rlsc2_v2327;
double rlsc2_v1771;
int rlsc2_p1390;
double rlsc2_m1390;
double rlsc2_v2327;
double rlsc2_v1721;
double rlsc2_v2327;
double rlsc2_v1964;
int rlsc2_p1416;
double rlsc2_m1416;
double rlsc2_v2327;
double rlsc2_v1909;
int rlsc2_p1411;
double rlsc2_m1411;
double rlsc2_v2327;
double rlsc2_v1883;
int rlsc2_p1406;
double rlsc2_m1406;
int rlsc2_p2326;
double rlsc2_m2326;
double rlsc2_v2326;
int rlsc2_p2314;
int rlsc2_m2314;
int rlsc2_v2314;
int rlsc2_p2313;
int rlsc2_m2313;
int rlsc2_p2310;
double rlsc2_m2310;
int rlsc2_p2312;
double rlsc2_m2312;
int rlsc2_p2311;
int rlsc2_m2311;
int rlsc2_v2311;
int rlsc2_p2305;
int rlsc2_m2305;
double rlsc2_v2327;
double rlsc2_v1711;
double rlsc2_v2327;
double rlsc2_v1699;
int rlsc2_p1379;
double rlsc2_m1379;
int rlsc2_p1215;
double rlsc2_m1215;
int rlsc2_p1153;
int rlsc2_m1153;
int rlsc2_p2301;
double rlsc2_m2301;
int rlsc2_p2303;
double rlsc2_m2303;
int rlsc2_p2302;
int rlsc2_m2302;
int rlsc2_p2304;
int rlsc2_m2304;
int rlsc2_p2290;
int rlsc2_m2290;
int rlsc2_v2302;
int rlsc2_p2296;
int rlsc2_m2296;
int rlsc2_p2379;
double rlsc2_m2379;
double rlsc2_v2379;
int rlsc2_p2368;
int rlsc2_m2368;
int rlsc2_p2353;
double rlsc2_m2353;
double rlsc2_v2353;
double rlsc2_v1798;
int rlsc2_p1442;
double rlsc2_m1442;
double rlsc2_v2353;
double rlsc2_v1771;
int rlsc2_p1437;
double rlsc2_m1437;
double rlsc2_v2353;
double rlsc2_v1721;
double rlsc2_v2353;
double rlsc2_v1964;
int rlsc2_p1463;
double rlsc2_m1463;
double rlsc2_v2353;
double rlsc2_v1909;
int rlsc2_p1458;
double rlsc2_m1458;
double rlsc2_v2353;
double rlsc2_v1883;
int rlsc2_p1453;
double rlsc2_m1453;
int rlsc2_p2352;
double rlsc2_m2352;
double rlsc2_v2352;
int rlsc2_p2340;
int rlsc2_m2340;
int rlsc2_v2340;
int rlsc2_p2339;
int rlsc2_m2339;
double rlsc2_v2353;
double rlsc2_v1711;
double rlsc2_v2353;
double rlsc2_v1699;
int rlsc2_p1427;
double rlsc2_m1427;
int rlsc2_p1218;
double rlsc2_m1218;
int rlsc2_p1156;
int rlsc2_m1156;
double rlsc2_v2353;
double rlsc2_v2327;
int rlsc2_p2153;
double rlsc2_m2153;
double rlsc2_v2153;
double rlsc2_v1798;
int rlsc2_p1487;
double rlsc2_m1487;
double rlsc2_v2153;
double rlsc2_v1771;
int rlsc2_p1482;
double rlsc2_m1482;
double rlsc2_v2153;
double rlsc2_v1721;
double rlsc2_v2153;
double rlsc2_v1964;
int rlsc2_p1508;
double rlsc2_m1508;
double rlsc2_v2153;
double rlsc2_v1909;
int rlsc2_p1503;
double rlsc2_m1503;
double rlsc2_v2153;
double rlsc2_v1883;
int rlsc2_p1498;
double rlsc2_m1498;
int rlsc2_p2336;
double rlsc2_m2336;
int rlsc2_p2338;
double rlsc2_m2338;
int rlsc2_p2337;
int rlsc2_m2337;
int rlsc2_v2337;
int rlsc2_p2331;
int rlsc2_m2331;
int rlsc2_p2292;
int rlsc2_m2292;
double rlsc2_v2747;
double rlsc2_v2741;
int rlsc2_p2734;
int rlsc2_m2734;
double rlsc2_v2163;
double rlsc2_v1711;
double rlsc2_v2163;
double rlsc2_v1699;
double rlsc2_v2642;
double rlsc2_v1711;
double rlsc2_v2642;
double rlsc2_v1699;
int rlsc2_p1518;
double rlsc2_m1518;
int rlsc2_v2386;
int rlsc2_p1219;
double rlsc2_m1219;
int rlsc2_p1157;
int rlsc2_m1157;
int rlsc2_p1649;
int rlsc2_m1649;
int rlsc2_p2126;
double rlsc2_m2126;
int rlsc2_p2158;
double rlsc2_m2158;
int rlsc2_v2734;
double rlsc2_v2723;
int rlsc2_p2711;
int rlsc2_m2711;
int rlsc2_p2131;
int rlsc2_m2131;
int rlsc2_p2381;
int rlsc2_m2381;
int rlsc2_v2711;
int rlsc2_v2131;
int rlsc2_p2105;
int rlsc2_m2105;
int rlsc2_v1616;
double rlsc2_v2153;
double rlsc2_v1711;
double rlsc2_v2153;
double rlsc2_v1699;
double rlsc2_v2141;
double rlsc2_v1711;
double rlsc2_v2141;
double rlsc2_v1699;
int rlsc2_p1163;
double rlsc2_m1163;
double rlsc2_v1163;
double rlsc2_v778;
double rlsc2_v1163;
double rlsc2_v1037;
int rlsc2_p140;
double rlsc2_m140;
double rlsc2_v1163;
double rlsc2_v439;
double rlsc2_v1163;
double rlsc2_v694;
int rlsc2_p114;
double rlsc2_m114;
int rlsc2_p1103;
int rlsc2_m1103;
int rlsc2_p1098;
int rlsc2_m1098;
int rlsc2_v1098;
int rlsc2_v745;
int rlsc2_v158;
double rlsc2_v1163;
double rlsc2_v161;
double rlsc2_v1163;
double rlsc2_v769;
double rlsc2_v1163;
double rlsc2_v930;
double rlsc2_v1163;
double rlsc2_v875;
double rlsc2_v1163;
double rlsc2_v430;
double rlsc2_v1163;
double rlsc2_v589;
double rlsc2_v1163;
double rlsc2_v534;
double rlsc2_v1101;
double rlsc2_v161;
double rlsc2_v1101;
double rlsc2_v769;
double rlsc2_v1101;
double rlsc2_v930;
double rlsc2_v1101;
double rlsc2_v875;
double rlsc2_v1101;
double rlsc2_v430;
double rlsc2_v1101;
double rlsc2_v589;
double rlsc2_v1101;
double rlsc2_v534;
static double rlsc2_f3535(){if (rlsc2_p3535) return rlsc2_m3535; else {rlsc2_p3535=T;return rlsc2_m3535=atan2((rlsc2_v6275-rlsc2_v6263),(rlsc2_v6277-rlsc2_v6265));}}
static double rlsc2_f3656(){if (rlsc2_p3656) return rlsc2_m3656; else {rlsc2_p3656=T;return rlsc2_m3656=(rlsc2_v6265-rlsc2_v6277);}}
static double rlsc2_f3653(){if (rlsc2_p3653) return rlsc2_m3653; else {rlsc2_p3653=T;return rlsc2_m3653=(rlsc2_v6263-rlsc2_v6275);}}
static int rlsc2_f744(){if (rlsc2_p744) return rlsc2_m744; else {rlsc2_p744=T;return rlsc2_m744=((fabs(rlsc2_f3656())<rlsc2_v6259)?(fabs(rlsc2_f3653())<rlsc2_v6259):NIL);}}
static double rlsc2_f3644(){if (rlsc2_p3644) return rlsc2_m3644; else {rlsc2_p3644=T;return rlsc2_m3644=((rlsc2_v3656=rlsc2_f3656()),(rlsc2_v3653=rlsc2_f3653()),(rlsc2_v6265-(rlsc2_v6265+sqrt(((rlsc2_v3656*rlsc2_v3656)+(rlsc2_v3653*rlsc2_v3653))))));}}
static double rlsc2_f779(){if (rlsc2_p779) return rlsc2_m779; else {rlsc2_p779=T;return rlsc2_m779=error("Non-numeric argument to MIN");}}
static double rlsc2_f3936(){if (rlsc2_p3936) return rlsc2_m3936; else {rlsc2_p3936=T;return rlsc2_m3936=atan2((rlsc2_v6279-rlsc2_v6263),(rlsc2_v6281-rlsc2_v6265));}}
static double rlsc2_f1075(){if (rlsc2_p1075) return rlsc2_m1075; else {rlsc2_p1075=T;return rlsc2_m1075=error("Can't form tangent when points are the same");}}
static double rlsc2_f4069(){if (rlsc2_p4069) return rlsc2_m4069; else {rlsc2_p4069=T;return rlsc2_m4069=(rlsc2_v6265-rlsc2_v6281);}}
static double rlsc2_f4066(){if (rlsc2_p4066) return rlsc2_m4066; else {rlsc2_p4066=T;return rlsc2_m4066=(rlsc2_v6263-rlsc2_v6279);}}
static int rlsc2_f1090(){if (rlsc2_p1090) return rlsc2_m1090; else {rlsc2_p1090=T;return rlsc2_m1090=((fabs(rlsc2_f4069())<rlsc2_v6259)?(fabs(rlsc2_f4066())<rlsc2_v6259):NIL);}}
static double rlsc2_f4053(){if (rlsc2_p4053) return rlsc2_m4053; else {rlsc2_p4053=T;return rlsc2_m4053=((rlsc2_v4069=rlsc2_f4069()),(rlsc2_v4066=rlsc2_f4066()),(rlsc2_v6265-(rlsc2_v6265+sqrt(((rlsc2_v4069*rlsc2_v4069)+(rlsc2_v4066*rlsc2_v4066))))));}}
static double rlsc2_f1614(){if (rlsc2_p1614) return rlsc2_m1614; else {rlsc2_p1614=T;return rlsc2_m1614=error("Argument DIRECTION not of type FLOAT");}}
static double rlsc2_f1101(){if (rlsc2_p1101) return rlsc2_m1101; else {rlsc2_p1101=T;return rlsc2_m1101=error("No applicable method for OPPOSITE with argument types ((OR NULL FLOAT))");}}
static double rlsc2_f2164(){if (rlsc2_p2164) return rlsc2_m2164; else {rlsc2_p2164=T;return rlsc2_m2164=error("Non-numeric argument to MAX");}}
static double rlsc2_f2392(){if (rlsc2_p2392) return rlsc2_m2392; else {rlsc2_p2392=T;return rlsc2_m2392=error("Argument X not of type FLOAT");}}
static double rlsc2_f2396(){if (rlsc2_p2396) return rlsc2_m2396; else {rlsc2_p2396=T;return rlsc2_m2396=error("Argument X not of type REAL");}}
static double rlsc2_f2651(){if (rlsc2_p2651) return rlsc2_m2651; else {rlsc2_p2651=T;return rlsc2_m2651=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rlsc2_f2647(){if (rlsc2_p2647) return rlsc2_m2647; else {rlsc2_p2647=T;return rlsc2_m2647=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double rlsc2_f2461(){if (rlsc2_p2461) return rlsc2_m2461; else {rlsc2_p2461=T;return rlsc2_m2461=error("SLOT-VALUE called on non-instance");}}
static double rlsc2_f6063(){if (rlsc2_p6063) return rlsc2_m6063; else {rlsc2_p6063=T;return rlsc2_m6063=(((rlsc2_v6281<rlsc2_v6277)?rlsc2_v6281:rlsc2_v6277)-rlsc2_v6259);}}
static double rlsc2_f6061(){if (rlsc2_p6061) return rlsc2_m6061; else {rlsc2_p6061=T;return rlsc2_m6061=(((rlsc2_v6281>rlsc2_v6277)?rlsc2_v6281:rlsc2_v6277)+rlsc2_v6259);}}
static double rlsc2_f6054(){if (rlsc2_p6054) return rlsc2_m6054; else {rlsc2_p6054=T;return rlsc2_m6054=(((rlsc2_v6279<rlsc2_v6275)?rlsc2_v6279:rlsc2_v6275)-rlsc2_v6259);}}
static double rlsc2_f6052(){if (rlsc2_p6052) return rlsc2_m6052; else {rlsc2_p6052=T;return rlsc2_m6052=(((rlsc2_v6279>rlsc2_v6275)?rlsc2_v6279:rlsc2_v6275)+rlsc2_v6259);}}
static int rlsc2_f6213(){if (rlsc2_p6213) return rlsc2_m6213; else {rlsc2_p6213=T;return rlsc2_m6213=(fabs((rlsc2_v6281-rlsc2_v6277))<rlsc2_v6259);}}
static double rlsc2_f6218(){if (rlsc2_p6218) return rlsc2_m6218; else {rlsc2_p6218=T;return rlsc2_m6218=(rlsc2_v6279-rlsc2_v6275);}}
static int rlsc2_f6216(){if (rlsc2_p6216) return rlsc2_m6216; else {rlsc2_p6216=T;return rlsc2_m6216=(fabs(rlsc2_f6218())<rlsc2_v6259);}}
static double rlsc2_f5625(){if (rlsc2_p5625) return rlsc2_m5625; else {rlsc2_p5625=T;return rlsc2_m5625=(rlsc2_v6271-rlsc2_v6263);}}
static double rlsc2_f5624(){if (rlsc2_p5624) return rlsc2_m5624; else {rlsc2_p5624=T;return rlsc2_m5624=(rlsc2_v6273-rlsc2_v6265);}}
static double rlsc2_f4055(){if (rlsc2_p4055) return rlsc2_m4055; else {rlsc2_p4055=T;return rlsc2_m4055=((rlsc2_v5624=rlsc2_f5624()),(rlsc2_v5625=rlsc2_f5625()),((rlsc2_v5624*rlsc2_v5624)+(rlsc2_v5625*rlsc2_v5625)));}}
static int rlsc2_f4054(){if (rlsc2_p4054) return rlsc2_m4054; else {rlsc2_p4054=T;return rlsc2_m4054=(rlsc2_f4055()==0.0);}}
static double rlsc2_f4017(){if (rlsc2_p4017) return rlsc2_m4017; else {rlsc2_p4017=T;return rlsc2_m4017=sqrt(rlsc2_f4055());}}
static double rlsc2_f4005(){if (rlsc2_p4005) return rlsc2_m4005; else {rlsc2_p4005=T;return rlsc2_m4005=(rlsc2_f5624()/rlsc2_f4017());}}
static double rlsc2_f4004(){if (rlsc2_p4004) return rlsc2_m4004; else {rlsc2_p4004=T;return rlsc2_m4004=(rlsc2_f5625()/rlsc2_f4017());}}
static double rlsc2_f984(){if (rlsc2_p984) return rlsc2_m984; else {rlsc2_p984=T;return rlsc2_m984=((2.0)*rlsc2_f4017());}}
static double rlsc2_f5623(){if (rlsc2_p5623) return rlsc2_m5623; else {rlsc2_p5623=T;return rlsc2_m5623=atan2(rlsc2_f5625(),rlsc2_f5624());}}
static double rlsc2_f2759(){if (rlsc2_p2759) return rlsc2_m2759; else {rlsc2_p2759=T;return rlsc2_m2759=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static double rlsc2_f2776(){if (rlsc2_p2776) return rlsc2_m2776; else {rlsc2_p2776=T;return rlsc2_m2776=error("Can't form a single line when the end points are the same");}}
static double rlsc2_f2625(){if (rlsc2_p2625) return rlsc2_m2625; else {rlsc2_p2625=T;return rlsc2_m2625=(rlsc2_f6216()?(rlsc2_f6213()?rlsc2_f2776():(0.0)):(1.0));}}
static int rlsc2_f2624(){if (rlsc2_p2624) return rlsc2_m2624; else {rlsc2_p2624=T;return rlsc2_m2624=(rlsc2_f2625()==0.0);}}
static double rlsc2_f2603(){if (rlsc2_p2603) return rlsc2_m2603; else {rlsc2_p2603=T;return rlsc2_m2603=(rlsc2_f2625()*rlsc2_v6271);}}
static double rlsc2_f2611(){if (rlsc2_p2611) return rlsc2_m2611; else {rlsc2_p2611=T;return rlsc2_m2611=((rlsc2_v2625=rlsc2_f2625()),(rlsc2_v2625*rlsc2_v2625));}}
static double rlsc2_f2621(){if (rlsc2_p2621) return rlsc2_m2621; else {rlsc2_p2621=T;return rlsc2_m2621=(rlsc2_f2625()*rlsc2_v6273);}}
static double rlsc2_f6252(){if (rlsc2_p6252) return rlsc2_m6252; else {rlsc2_p6252=T;return rlsc2_m6252=(rlsc2_v6273-rlsc2_v6269);}}
static double rlsc2_f6250(){if (rlsc2_p6250) return rlsc2_m6250; else {rlsc2_p6250=T;return rlsc2_m6250=(rlsc2_v6271-rlsc2_v6267);}}
static double rlsc2_f6247(){if (rlsc2_p6247) return rlsc2_m6247; else {rlsc2_p6247=T;return rlsc2_m6247=((rlsc2_v6252=rlsc2_f6252()),(rlsc2_v6250=rlsc2_f6250()),sqrt(((rlsc2_v6252*rlsc2_v6252)+(rlsc2_v6250*rlsc2_v6250))));}}
static double rlsc2_f6194(){if (rlsc2_p6194) return rlsc2_m6194; else {rlsc2_p6194=T;return rlsc2_m6194=((rlsc2_v6247=rlsc2_f6247()),(rlsc2_v6247*rlsc2_v6247));}}
static double rlsc2_f6245(){if (rlsc2_p6245) return rlsc2_m6245; else {rlsc2_p6245=T;return rlsc2_m6245=(rlsc2_v6277-rlsc2_v6281);}}
static double rlsc2_f6210(){if (rlsc2_p6210) return rlsc2_m6210; else {rlsc2_p6210=T;return rlsc2_m6210=(rlsc2_f6245()/rlsc2_f6218());}}
static double rlsc2_f2622(){if (rlsc2_p2622) return rlsc2_m2622; else {rlsc2_p2622=T;return rlsc2_m2622=(rlsc2_f6216()?(rlsc2_f6213()?rlsc2_f2776():rlsc2_v6279):(rlsc2_v6281+(rlsc2_f6210()*rlsc2_v6279)));}}
static double rlsc2_f2619(){if (rlsc2_p2619) return rlsc2_m2619; else {rlsc2_p2619=T;return rlsc2_m2619=(rlsc2_f6216()?(rlsc2_f6213()?rlsc2_f2776():(1.0)):rlsc2_f6210());}}
static double rlsc2_f2520(){if (rlsc2_p2520) return rlsc2_m2520; else {rlsc2_p2520=T;return rlsc2_m2520=(rlsc2_f2622()/rlsc2_f2619());}}
static int rlsc2_f2513(){if (rlsc2_p2513) return rlsc2_m2513; else {rlsc2_p2513=T;return rlsc2_m2513=((rlsc2_f6054()<=rlsc2_f2520())&&(rlsc2_f2520()<=rlsc2_f6052()));}}
static double rlsc2_f2519(){if (rlsc2_p2519) return rlsc2_m2519; else {rlsc2_p2519=T;return rlsc2_m2519=(rlsc2_f2619()*rlsc2_f2520());}}
static int rlsc2_f2583(){if (rlsc2_p2583) return rlsc2_m2583; else {rlsc2_p2583=T;return rlsc2_m2583=(rlsc2_f2619()>0.0);}}
static double rlsc2_f2581(){if (rlsc2_p2581) return rlsc2_m2581; else {rlsc2_p2581=T;return rlsc2_m2581=(rlsc2_f2583()?(-rlsc2_f2625()):rlsc2_f2625());}}
static double rlsc2_f2602(){if (rlsc2_p2602) return rlsc2_m2602; else {rlsc2_p2602=T;return rlsc2_m2602=(rlsc2_f2619()*rlsc2_v6273);}}
static double rlsc2_f2601(){if (rlsc2_p2601) return rlsc2_m2601; else {rlsc2_p2601=T;return rlsc2_m2601=(rlsc2_f2603()-rlsc2_f2602());}}
static double rlsc2_f2571(){if (rlsc2_p2571) return rlsc2_m2571; else {rlsc2_p2571=T;return rlsc2_m2571=(rlsc2_f2583()?(rlsc2_f2602()-rlsc2_f2603()):rlsc2_f2601());}}
static double rlsc2_f2569(){if (rlsc2_p2569) return rlsc2_m2569; else {rlsc2_p2569=T;return rlsc2_m2569=((rlsc2_f2622()*rlsc2_f2581())-(rlsc2_f2619()*rlsc2_f2571()));}}
static double rlsc2_f2610(){if (rlsc2_p2610) return rlsc2_m2610; else {rlsc2_p2610=T;return rlsc2_m2610=(-rlsc2_f2619());}}
static double rlsc2_f2579(){if (rlsc2_p2579) return rlsc2_m2579; else {rlsc2_p2579=T;return rlsc2_m2579=(rlsc2_f2583()?rlsc2_f2619():rlsc2_f2610());}}
static double rlsc2_f2577(){if (rlsc2_p2577) return rlsc2_m2577; else {rlsc2_p2577=T;return rlsc2_m2577=((rlsc2_f2625()*rlsc2_f2581())-(rlsc2_f2619()*rlsc2_f2579()));}}
static double rlsc2_f2557(){if (rlsc2_p2557) return rlsc2_m2557; else {rlsc2_p2557=T;return rlsc2_m2557=(rlsc2_f2569()/rlsc2_f2577());}}
static int rlsc2_f2574(){if (rlsc2_p2574) return rlsc2_m2574; else {rlsc2_p2574=T;return rlsc2_m2574=(fabs((rlsc2_f2577()-(0.0)))<rlsc2_v6259);}}
static double rlsc2_f2563(){if (rlsc2_p2563) return rlsc2_m2563; else {rlsc2_p2563=T;return rlsc2_m2563=((rlsc2_f2625()*rlsc2_f2571())-(rlsc2_f2622()*rlsc2_f2579()));}}
static double rlsc2_f2555(){if (rlsc2_p2555) return rlsc2_m2555; else {rlsc2_p2555=T;return rlsc2_m2555=(rlsc2_f2563()/rlsc2_f2577());}}
static int rlsc2_f2545(){if (rlsc2_p2545) return rlsc2_m2545; else {rlsc2_p2545=T;return rlsc2_m2545=(rlsc2_f2574()?NIL:((rlsc2_v2557=rlsc2_f2557()),(rlsc2_v2555=rlsc2_f2555()),((fabs((((rlsc2_f2625()*rlsc2_v2557)+(rlsc2_f2619()*rlsc2_v2555))-rlsc2_f2622()))<rlsc2_v6259)?(((rlsc2_f6063()<=rlsc2_v2557)&&(rlsc2_v2557<=rlsc2_f6061()))?((rlsc2_f6054()<=rlsc2_v2555)&&(rlsc2_v2555<=rlsc2_f6052())):NIL):NIL)));}}
static int rlsc2_f2559(){if (rlsc2_p2559) return rlsc2_m2559; else {rlsc2_p2559=T;return rlsc2_m2559=((fabs((rlsc2_f2569()-(0.0)))<rlsc2_v6259)?(fabs((rlsc2_f2563()-(0.0)))<rlsc2_v6259):NIL);}}
static int rlsc2_f2558(){if (rlsc2_p2558) return rlsc2_m2558; else {rlsc2_p2558=T;return rlsc2_m2558=(rlsc2_f2574()?rlsc2_f2559():T);}}
static double rlsc2_f2608(){if (rlsc2_p2608) return rlsc2_m2608; else {rlsc2_p2608=T;return rlsc2_m2608=(rlsc2_f2611()-(rlsc2_f2619()*rlsc2_f2610()));}}
static double rlsc2_f2597(){if (rlsc2_p2597) return rlsc2_m2597; else {rlsc2_p2597=T;return rlsc2_m2597=((((rlsc2_f2622()*rlsc2_f2625())-(rlsc2_f2619()*rlsc2_f2601()))/rlsc2_f2608())-rlsc2_v6273);}}
static double rlsc2_f2591(){if (rlsc2_p2591) return rlsc2_m2591; else {rlsc2_p2591=T;return rlsc2_m2591=((((rlsc2_f2625()*rlsc2_f2601())-(rlsc2_f2622()*rlsc2_f2610()))/rlsc2_f2608())-rlsc2_v6271);}}
static int rlsc2_f2584(){if (rlsc2_p2584) return rlsc2_m2584; else {rlsc2_p2584=T;return rlsc2_m2584=(fabs((((fabs((rlsc2_f2608()-(0.0)))<rlsc2_v6259)?rlsc2_f2759():((rlsc2_v2597=rlsc2_f2597()),(rlsc2_v2591=rlsc2_f2591()),sqrt(((rlsc2_v2597*rlsc2_v2597)+(rlsc2_v2591*rlsc2_v2591)))))-rlsc2_f6247()))<rlsc2_v6259);}}
static double rlsc2_f2457(){if (rlsc2_p2457) return rlsc2_m2457; else {rlsc2_p2457=T;return rlsc2_m2457=(rlsc2_f2584()?(rlsc2_f2558()?(rlsc2_f2545()?(rlsc2_f2574()?rlsc2_f2461():rlsc2_f2557()):rlsc2_f2461()):rlsc2_f2461()):rlsc2_f2461());}}
static double rlsc2_f2443(){if (rlsc2_p2443) return rlsc2_m2443; else {rlsc2_p2443=T;return rlsc2_m2443=(rlsc2_f2584()?(rlsc2_f2558()?(rlsc2_f2545()?(rlsc2_f2574()?rlsc2_f2461():rlsc2_f2555()):rlsc2_f2461()):rlsc2_f2461()):rlsc2_f2461());}}
static int rlsc2_f2524(){if (rlsc2_p2524) return rlsc2_m2524; else {rlsc2_p2524=T;return rlsc2_m2524=(rlsc2_f2584()?(rlsc2_f2558()?(rlsc2_f2545()?(rlsc2_f2574()?NIL:T):NIL):NIL):NIL);}}
static int rlsc2_f2541(){if (rlsc2_p2541) return rlsc2_m2541; else {rlsc2_p2541=T;return rlsc2_m2541=(rlsc2_f2584()?(rlsc2_f2558()?(rlsc2_f2545()?(rlsc2_f2574()?rlsc2_f2559():NIL):NIL):NIL):NIL);}}
static double rlsc2_f2615(){if (rlsc2_p2615) return rlsc2_m2615; else {rlsc2_p2615=T;return rlsc2_m2615=((rlsc2_v2619=rlsc2_f2619()),(rlsc2_v2619*rlsc2_v2619));}}
static double rlsc2_f2535(){if (rlsc2_p2535) return rlsc2_m2535; else {rlsc2_p2535=T;return rlsc2_m2535=(rlsc2_f2611()+rlsc2_f2615());}}
static double rlsc2_f2497(){if (rlsc2_p2497) return rlsc2_m2497; else {rlsc2_p2497=T;return rlsc2_m2497=((rlsc2_v2535=rlsc2_f2535()),(rlsc2_v2535+rlsc2_v2535));}}
static double rlsc2_f2618(){if (rlsc2_p2618) return rlsc2_m2618; else {rlsc2_p2618=T;return rlsc2_m2618=(rlsc2_f2619()*rlsc2_v6271);}}
static double rlsc2_f2429(){if (rlsc2_p2429) return rlsc2_m2429; else {rlsc2_p2429=T;return rlsc2_m2429=((rlsc2_f2621()+rlsc2_f2618())-rlsc2_f2622());}}
static int rlsc2_f2406(){if (rlsc2_p2406) return rlsc2_m2406; else {rlsc2_p2406=T;return rlsc2_m2406=(rlsc2_f2429()>(0.0));}}
static double rlsc2_f2617(){if (rlsc2_p2617) return rlsc2_m2617; else {rlsc2_p2617=T;return rlsc2_m2617=(rlsc2_f2622()-rlsc2_f2621()-rlsc2_f2618());}}
static double rlsc2_f2538(){if (rlsc2_p2538) return rlsc2_m2538; else {rlsc2_p2538=T;return rlsc2_m2538=((-2.0)*rlsc2_f2619()*rlsc2_f2617());}}
static double rlsc2_f2496(){if (rlsc2_p2496) return rlsc2_m2496; else {rlsc2_p2496=T;return rlsc2_m2496=((-rlsc2_f2538())/rlsc2_f2497());}}
static double rlsc2_f2616(){if (rlsc2_p2616) return rlsc2_m2616; else {rlsc2_p2616=T;return rlsc2_m2616=((rlsc2_v2617=rlsc2_f2617()),(rlsc2_v2617*rlsc2_v2617));}}
static double rlsc2_f2531(){if (rlsc2_p2531) return rlsc2_m2531; else {rlsc2_p2531=T;return rlsc2_m2531=((rlsc2_v2538=rlsc2_f2538()),((rlsc2_v2538*rlsc2_v2538)-((4.0)*rlsc2_f2535()*(rlsc2_f2616()-(rlsc2_f2611()*rlsc2_f6194())))));}}
static double rlsc2_f2494(){if (rlsc2_p2494) return rlsc2_m2494; else {rlsc2_p2494=T;return rlsc2_m2494=(sqrt(rlsc2_f2531())/rlsc2_f2497());}}
static double rlsc2_f2492(){if (rlsc2_p2492) return rlsc2_m2492; else {rlsc2_p2492=T;return rlsc2_m2492=((rlsc2_f2496()+rlsc2_f2494())+rlsc2_v6271);}}
static double rlsc2_f2491(){if (rlsc2_p2491) return rlsc2_m2491; else {rlsc2_p2491=T;return rlsc2_m2491=(rlsc2_f2619()*rlsc2_f2492());}}
static double rlsc2_f2489(){if (rlsc2_p2489) return rlsc2_m2489; else {rlsc2_p2489=T;return rlsc2_m2489=((rlsc2_f2622()-rlsc2_f2491())/rlsc2_f2625());}}
static int rlsc2_f2480(){if (rlsc2_p2480) return rlsc2_m2480; else {rlsc2_p2480=T;return rlsc2_m2480=((rlsc2_v2489=rlsc2_f2489()),((fabs((((rlsc2_f2625()*rlsc2_v2489)+rlsc2_f2491())-rlsc2_f2622()))<rlsc2_v6259)?(((rlsc2_f6063()<=rlsc2_v2489)&&(rlsc2_v2489<=rlsc2_f6061()))?((rlsc2_f6054()<=rlsc2_f2492())&&(rlsc2_f2492()<=rlsc2_f6052())):NIL):NIL));}}
static double rlsc2_f2478(){if (rlsc2_p2478) return rlsc2_m2478; else {rlsc2_p2478=T;return rlsc2_m2478=((rlsc2_f2496()-rlsc2_f2494())+rlsc2_v6271);}}
static double rlsc2_f2477(){if (rlsc2_p2477) return rlsc2_m2477; else {rlsc2_p2477=T;return rlsc2_m2477=(rlsc2_f2619()*rlsc2_f2478());}}
static double rlsc2_f2475(){if (rlsc2_p2475) return rlsc2_m2475; else {rlsc2_p2475=T;return rlsc2_m2475=((rlsc2_f2622()-rlsc2_f2477())/rlsc2_f2625());}}
static int rlsc2_f2466(){if (rlsc2_p2466) return rlsc2_m2466; else {rlsc2_p2466=T;return rlsc2_m2466=((rlsc2_v2475=rlsc2_f2475()),((fabs((((rlsc2_f2625()*rlsc2_v2475)+rlsc2_f2477())-rlsc2_f2622()))<rlsc2_v6259)?(((rlsc2_f6063()<=rlsc2_v2475)&&(rlsc2_v2475<=rlsc2_f6061()))?((rlsc2_f6054()<=rlsc2_f2478())&&(rlsc2_f2478()<=rlsc2_f6052())):NIL):NIL));}}
static int rlsc2_f2530(){if (rlsc2_p2530) return rlsc2_m2530; else {rlsc2_p2530=T;return rlsc2_m2530=(rlsc2_f2531()<0.0);}}
static double rlsc2_f2613(){if (rlsc2_p2613) return rlsc2_m2613; else {rlsc2_p2613=T;return rlsc2_m2613=(rlsc2_f6194()-(rlsc2_f2616()/rlsc2_f2615()));}}
static double rlsc2_f2523(){if (rlsc2_p2523) return rlsc2_m2523; else {rlsc2_p2523=T;return rlsc2_m2523=sqrt(rlsc2_f2613());}}
static double rlsc2_f2509(){if (rlsc2_p2509) return rlsc2_m2509; else {rlsc2_p2509=T;return rlsc2_m2509=((-rlsc2_f2523())+rlsc2_v6273);}}
static int rlsc2_f2501(){if (rlsc2_p2501) return rlsc2_m2501; else {rlsc2_p2501=T;return rlsc2_m2501=((rlsc2_v2509=rlsc2_f2509()),((fabs((((rlsc2_f2625()*rlsc2_v2509)+rlsc2_f2519())-rlsc2_f2622()))<rlsc2_v6259)?(((rlsc2_f6063()<=rlsc2_v2509)&&(rlsc2_v2509<=rlsc2_f6061()))?rlsc2_f2513():NIL):NIL));}}
static double rlsc2_f2522(){if (rlsc2_p2522) return rlsc2_m2522; else {rlsc2_p2522=T;return rlsc2_m2522=(rlsc2_f2523()+rlsc2_v6273);}}
static int rlsc2_f2511(){if (rlsc2_p2511) return rlsc2_m2511; else {rlsc2_p2511=T;return rlsc2_m2511=((rlsc2_v2522=rlsc2_f2522()),((fabs((((rlsc2_f2625()*rlsc2_v2522)+rlsc2_f2519())-rlsc2_f2622()))<rlsc2_v6259)?(((rlsc2_f6063()<=rlsc2_v2522)&&(rlsc2_v2522<=rlsc2_f6061()))?rlsc2_f2513():NIL):NIL));}}
static int rlsc2_f2612(){if (rlsc2_p2612) return rlsc2_m2612; else {rlsc2_p2612=T;return rlsc2_m2612=(rlsc2_f2613()<0.0);}}
static int rlsc2_f2528(){if (rlsc2_p2528) return rlsc2_m2528; else {rlsc2_p2528=T;return rlsc2_m2528=(rlsc2_f2624()?(rlsc2_f2612()?rlsc2_f2541():NIL):(rlsc2_f2530()?rlsc2_f2541():NIL));}}
static int rlsc2_f2463(){if (rlsc2_p2463) return rlsc2_m2463; else {rlsc2_p2463=T;return rlsc2_m2463=(rlsc2_f2624()?(rlsc2_f2612()?rlsc2_f2524():(rlsc2_f2511()?T:rlsc2_f2501())):(rlsc2_f2530()?rlsc2_f2524():(rlsc2_f2480()?T:rlsc2_f2466())));}}
static double rlsc2_f2450(){if (rlsc2_p2450) return rlsc2_m2450; else {rlsc2_p2450=T;return rlsc2_m2450=(rlsc2_f2624()?(rlsc2_f2612()?rlsc2_f2457():(rlsc2_f2511()?rlsc2_f2522():(rlsc2_f2501()?rlsc2_f2509():rlsc2_f2461()))):(rlsc2_f2530()?rlsc2_f2457():(rlsc2_f2480()?rlsc2_f2489():(rlsc2_f2466()?rlsc2_f2475():rlsc2_f2461()))));}}
static double rlsc2_f2425(){if (rlsc2_p2425) return rlsc2_m2425; else {rlsc2_p2425=T;return rlsc2_m2425=(rlsc2_f2463()?rlsc2_f2450():rlsc2_f2647());}}
static double rlsc2_f2436(){if (rlsc2_p2436) return rlsc2_m2436; else {rlsc2_p2436=T;return rlsc2_m2436=(rlsc2_f2624()?(rlsc2_f2612()?rlsc2_f2443():(rlsc2_f2511()?rlsc2_f2520():(rlsc2_f2501()?rlsc2_f2520():rlsc2_f2461()))):(rlsc2_f2530()?rlsc2_f2443():(rlsc2_f2480()?rlsc2_f2492():(rlsc2_f2466()?rlsc2_f2478():rlsc2_f2461()))));}}
static double rlsc2_f2424(){if (rlsc2_p2424) return rlsc2_m2424; else {rlsc2_p2424=T;return rlsc2_m2424=(rlsc2_f2463()?rlsc2_f2436():rlsc2_f2651());}}
static double rlsc2_f2419(){if (rlsc2_p2419) return rlsc2_m2419; else {rlsc2_p2419=T;return rlsc2_m2419=(atan2((rlsc2_f2424()-rlsc2_v6263),(rlsc2_f2425()-rlsc2_v6265))+(-1.5707963267948966));}}
static double rlsc2_f2411(){if (rlsc2_p2411) return rlsc2_m2411; else {rlsc2_p2411=T;return rlsc2_m2411=((rlsc2_v2419=rlsc2_f2419()),(((rlsc2_f2625()*(rlsc2_f2425()+cos(rlsc2_v2419)))+(rlsc2_f2619()*(rlsc2_f2424()+sin(rlsc2_v2419))))-rlsc2_f2622()));}}
static int rlsc2_f2399(){if (rlsc2_p2399) return rlsc2_m2399; else {rlsc2_p2399=T;return rlsc2_m2399=((rlsc2_v2528=rlsc2_f2528()),(rlsc2_v2528?rlsc2_v2528:((rlsc2_f2463()?((fabs((rlsc2_v6265-rlsc2_f2450()))<rlsc2_v6259)?(fabs((rlsc2_v6263-rlsc2_f2436()))<rlsc2_v6259):NIL):NIL)?T:(((fabs((rlsc2_f2429()-(0.0)))<rlsc2_v6259)?T:((rlsc2_v2411=rlsc2_f2411()),((fabs((rlsc2_v2411-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v2411>(0.0))?rlsc2_f2406():(rlsc2_f2406()?NIL:T)))))?NIL:T))));}}
static double rlsc2_f6244(){if (rlsc2_p6244) return rlsc2_m6244; else {rlsc2_p6244=T;return rlsc2_m6244=atan2((rlsc2_v6275-rlsc2_v6279),rlsc2_f6245());}}
static double rlsc2_f2103(){if (rlsc2_p2103) return rlsc2_m2103; else {rlsc2_p2103=T;return rlsc2_m2103=normalize_rotation((rlsc2_f6244()+(1.5707963267948966)));}}
static double rlsc2_f2094(){if (rlsc2_p2094) return rlsc2_m2094; else {rlsc2_p2094=T;return rlsc2_m2094=(rlsc2_f6247()*cos(rlsc2_f2103()));}}
static double rlsc2_f2092(){if (rlsc2_p2092) return rlsc2_m2092; else {rlsc2_p2092=T;return rlsc2_m2092=(rlsc2_v6277+rlsc2_f2094());}}
static double rlsc2_f2093(){if (rlsc2_p2093) return rlsc2_m2093; else {rlsc2_p2093=T;return rlsc2_m2093=(rlsc2_v6281+rlsc2_f2094());}}
static double rlsc2_f1985(){if (rlsc2_p1985) return rlsc2_m1985; else {rlsc2_p1985=T;return rlsc2_m1985=((rlsc2_v2093=rlsc2_f2093()),(rlsc2_v2092=rlsc2_f2092()),(((rlsc2_v2093<rlsc2_v2092)?rlsc2_v2093:rlsc2_v2092)-rlsc2_v6259));}}
static double rlsc2_f1982(){if (rlsc2_p1982) return rlsc2_m1982; else {rlsc2_p1982=T;return rlsc2_m1982=((rlsc2_v2093=rlsc2_f2093()),(rlsc2_v2092=rlsc2_f2092()),(((rlsc2_v2093>rlsc2_v2092)?rlsc2_v2093:rlsc2_v2092)+rlsc2_v6259));}}
static int rlsc2_f2089(){if (rlsc2_p2089) return rlsc2_m2089; else {rlsc2_p2089=T;return rlsc2_m2089=(fabs((rlsc2_f2093()-rlsc2_f2092()))<rlsc2_v6259);}}
static double rlsc2_f2101(){if (rlsc2_p2101) return rlsc2_m2101; else {rlsc2_p2101=T;return rlsc2_m2101=(rlsc2_f6247()*sin(rlsc2_f2103()));}}
static double rlsc2_f2100(){if (rlsc2_p2100) return rlsc2_m2100; else {rlsc2_p2100=T;return rlsc2_m2100=(rlsc2_v6279+rlsc2_f2101());}}
static double rlsc2_f2099(){if (rlsc2_p2099) return rlsc2_m2099; else {rlsc2_p2099=T;return rlsc2_m2099=(rlsc2_v6275+rlsc2_f2101());}}
static double rlsc2_f1978(){if (rlsc2_p1978) return rlsc2_m1978; else {rlsc2_p1978=T;return rlsc2_m1978=((rlsc2_v2100=rlsc2_f2100()),(rlsc2_v2099=rlsc2_f2099()),(((rlsc2_v2100<rlsc2_v2099)?rlsc2_v2100:rlsc2_v2099)-rlsc2_v6259));}}
static double rlsc2_f1975(){if (rlsc2_p1975) return rlsc2_m1975; else {rlsc2_p1975=T;return rlsc2_m1975=((rlsc2_v2100=rlsc2_f2100()),(rlsc2_v2099=rlsc2_f2099()),(((rlsc2_v2100>rlsc2_v2099)?rlsc2_v2100:rlsc2_v2099)+rlsc2_v6259));}}
static double rlsc2_f2098(){if (rlsc2_p2098) return rlsc2_m2098; else {rlsc2_p2098=T;return rlsc2_m2098=(rlsc2_f2100()-rlsc2_f2099());}}
static int rlsc2_f2096(){if (rlsc2_p2096) return rlsc2_m2096; else {rlsc2_p2096=T;return rlsc2_m2096=(fabs(rlsc2_f2098())<rlsc2_v6259);}}
static double rlsc2_f2087(){if (rlsc2_p2087) return rlsc2_m2087; else {rlsc2_p2087=T;return rlsc2_m2087=(rlsc2_f2096()?(rlsc2_f2089()?rlsc2_f2776():(0.0)):(1.0));}}
static int rlsc2_f2028(){if (rlsc2_p2028) return rlsc2_m2028; else {rlsc2_p2028=T;return rlsc2_m2028=(rlsc2_f2087()==0.0);}}
static double rlsc2_f2050(){if (rlsc2_p2050) return rlsc2_m2050; else {rlsc2_p2050=T;return rlsc2_m2050=(rlsc2_f2087()*rlsc2_v6265);}}
static double rlsc2_f2070(){if (rlsc2_p2070) return rlsc2_m2070; else {rlsc2_p2070=T;return rlsc2_m2070=(rlsc2_f2087()*rlsc2_v6263);}}
static double rlsc2_f2086(){if (rlsc2_p2086) return rlsc2_m2086; else {rlsc2_p2086=T;return rlsc2_m2086=((rlsc2_v2087=rlsc2_f2087()),(rlsc2_v2087*rlsc2_v2087));}}
static double rlsc2_f2083(){if (rlsc2_p2083) return rlsc2_m2083; else {rlsc2_p2083=T;return rlsc2_m2083=((rlsc2_f2092()-rlsc2_f2093())/rlsc2_f2098());}}
static double rlsc2_f2072(){if (rlsc2_p2072) return rlsc2_m2072; else {rlsc2_p2072=T;return rlsc2_m2072=(rlsc2_f2096()?(rlsc2_f2089()?rlsc2_f2776():rlsc2_f2100()):(rlsc2_f2093()+(rlsc2_f2083()*rlsc2_f2100())));}}
static double rlsc2_f2082(){if (rlsc2_p2082) return rlsc2_m2082; else {rlsc2_p2082=T;return rlsc2_m2082=(rlsc2_f2096()?(rlsc2_f2089()?rlsc2_f2776():(1.0)):rlsc2_f2083());}}
static int rlsc2_f2021(){if (rlsc2_p2021) return rlsc2_m2021; else {rlsc2_p2021=T;return rlsc2_m2021=(rlsc2_f2082()>0.0);}}
static double rlsc2_f2019(){if (rlsc2_p2019) return rlsc2_m2019; else {rlsc2_p2019=T;return rlsc2_m2019=(rlsc2_f2021()?(-rlsc2_f2087()):rlsc2_f2087());}}
static double rlsc2_f1933(){if (rlsc2_p1933) return rlsc2_m1933; else {rlsc2_p1933=T;return rlsc2_m1933=(rlsc2_f2072()/rlsc2_f2082());}}
static double rlsc2_f1913(){if (rlsc2_p1913) return rlsc2_m1913; else {rlsc2_p1913=T;return rlsc2_m1913=(rlsc2_f1933()-rlsc2_v6263);}}
static int rlsc2_f1926(){if (rlsc2_p1926) return rlsc2_m1926; else {rlsc2_p1926=T;return rlsc2_m1926=((rlsc2_f1978()<=rlsc2_f1933())&&(rlsc2_f1933()<=rlsc2_f1975()));}}
static double rlsc2_f1932(){if (rlsc2_p1932) return rlsc2_m1932; else {rlsc2_p1932=T;return rlsc2_m1932=(rlsc2_f2082()*rlsc2_f1933());}}
static double rlsc2_f2025(){if (rlsc2_p2025) return rlsc2_m2025; else {rlsc2_p2025=T;return rlsc2_m2025=((rlsc2_v2082=rlsc2_f2082()),(rlsc2_v2082*rlsc2_v2082));}}
static double rlsc2_f1841(){if (rlsc2_p1841) return rlsc2_m1841; else {rlsc2_p1841=T;return rlsc2_m1841=(rlsc2_f2086()+rlsc2_f2025());}}
static double rlsc2_f1834(){if (rlsc2_p1834) return rlsc2_m1834; else {rlsc2_p1834=T;return rlsc2_m1834=((rlsc2_v1841=rlsc2_f1841()),(rlsc2_v1841+rlsc2_v1841));}}
static double rlsc2_f2040(){if (rlsc2_p2040) return rlsc2_m2040; else {rlsc2_p2040=T;return rlsc2_m2040=(((rlsc2_f2087()*rlsc2_v6281)+(rlsc2_f2082()*rlsc2_v6279))-rlsc2_f2072());}}
static double rlsc2_f2049(){if (rlsc2_p2049) return rlsc2_m2049; else {rlsc2_p2049=T;return rlsc2_m2049=(rlsc2_f2082()*rlsc2_v6263);}}
static double rlsc2_f2027(){if (rlsc2_p2027) return rlsc2_m2027; else {rlsc2_p2027=T;return rlsc2_m2027=(rlsc2_f2072()-rlsc2_f2050()-rlsc2_f2049());}}
static double rlsc2_f1843(){if (rlsc2_p1843) return rlsc2_m1843; else {rlsc2_p1843=T;return rlsc2_m1843=((-2.0)*rlsc2_f2082()*rlsc2_f2027());}}
static double rlsc2_f1833(){if (rlsc2_p1833) return rlsc2_m1833; else {rlsc2_p1833=T;return rlsc2_m1833=((-rlsc2_f1843())/rlsc2_f1834());}}
static double rlsc2_f2026(){if (rlsc2_p2026) return rlsc2_m2026; else {rlsc2_p2026=T;return rlsc2_m2026=((rlsc2_v2027=rlsc2_f2027()),(rlsc2_v2027*rlsc2_v2027));}}
static double rlsc2_f2047(){if (rlsc2_p2047) return rlsc2_m2047; else {rlsc2_p2047=T;return rlsc2_m2047=((rlsc2_f2050()+rlsc2_f2049())-rlsc2_f2072());}}
static int rlsc2_f2035(){if (rlsc2_p2035) return rlsc2_m2035; else {rlsc2_p2035=T;return rlsc2_m2035=(rlsc2_f2047()>(0.0));}}
static double rlsc2_f2069(){if (rlsc2_p2069) return rlsc2_m2069; else {rlsc2_p2069=T;return rlsc2_m2069=(rlsc2_f2082()*rlsc2_v6265);}}
static double rlsc2_f2068(){if (rlsc2_p2068) return rlsc2_m2068; else {rlsc2_p2068=T;return rlsc2_m2068=(rlsc2_f2070()-rlsc2_f2069());}}
static double rlsc2_f2009(){if (rlsc2_p2009) return rlsc2_m2009; else {rlsc2_p2009=T;return rlsc2_m2009=(rlsc2_f2021()?(rlsc2_f2069()-rlsc2_f2070()):rlsc2_f2068());}}
static double rlsc2_f2007(){if (rlsc2_p2007) return rlsc2_m2007; else {rlsc2_p2007=T;return rlsc2_m2007=((rlsc2_f2072()*rlsc2_f2019())-(rlsc2_f2082()*rlsc2_f2009()));}}
static double rlsc2_f2081(){if (rlsc2_p2081) return rlsc2_m2081; else {rlsc2_p2081=T;return rlsc2_m2081=(-rlsc2_f2082());}}
static double rlsc2_f2017(){if (rlsc2_p2017) return rlsc2_m2017; else {rlsc2_p2017=T;return rlsc2_m2017=(rlsc2_f2021()?rlsc2_f2082():rlsc2_f2081());}}
static double rlsc2_f2001(){if (rlsc2_p2001) return rlsc2_m2001; else {rlsc2_p2001=T;return rlsc2_m2001=((rlsc2_f2087()*rlsc2_f2009())-(rlsc2_f2072()*rlsc2_f2017()));}}
static double rlsc2_f2015(){if (rlsc2_p2015) return rlsc2_m2015; else {rlsc2_p2015=T;return rlsc2_m2015=((rlsc2_f2087()*rlsc2_f2019())-(rlsc2_f2082()*rlsc2_f2017()));}}
static double rlsc2_f1995(){if (rlsc2_p1995) return rlsc2_m1995; else {rlsc2_p1995=T;return rlsc2_m1995=(rlsc2_f2007()/rlsc2_f2015());}}
static double rlsc2_f1993(){if (rlsc2_p1993) return rlsc2_m1993; else {rlsc2_p1993=T;return rlsc2_m1993=(rlsc2_f2001()/rlsc2_f2015());}}
static int rlsc2_f2012(){if (rlsc2_p2012) return rlsc2_m2012; else {rlsc2_p2012=T;return rlsc2_m2012=(fabs((rlsc2_f2015()-(0.0)))<rlsc2_v6259);}}
static int rlsc2_f1996(){if (rlsc2_p1996) return rlsc2_m1996; else {rlsc2_p1996=T;return rlsc2_m1996=(rlsc2_f2012()?((fabs((rlsc2_f2007()-(0.0)))<rlsc2_v6259)?(fabs((rlsc2_f2001()-(0.0)))<rlsc2_v6259):NIL):T);}}
static int rlsc2_f1971(){if (rlsc2_p1971) return rlsc2_m1971; else {rlsc2_p1971=T;return rlsc2_m1971=(rlsc2_f2012()?NIL:((rlsc2_v1995=rlsc2_f1995()),(rlsc2_v1993=rlsc2_f1993()),((fabs((((rlsc2_f2087()*rlsc2_v1995)+(rlsc2_f2082()*rlsc2_v1993))-rlsc2_f2072()))<rlsc2_v6259)?(((rlsc2_f1985()<=rlsc2_v1995)&&(rlsc2_v1995<=rlsc2_f1982()))?((rlsc2_f1978()<=rlsc2_v1993)&&(rlsc2_v1993<=rlsc2_f1975())):NIL):NIL)));}}
static double rlsc2_f1964(){if (rlsc2_p1964) return rlsc2_m1964; else {rlsc2_p1964=T;return rlsc2_m1964=((rlsc2_v2012=rlsc2_f2012()),normalize_rotation((atan2(((rlsc2_v2012?rlsc2_f2651():rlsc2_f1993())-rlsc2_v6263),((rlsc2_v2012?rlsc2_f2647():rlsc2_f1995())-rlsc2_v6265))-rlsc2_f5623())));}}
static double rlsc2_f1963(){if (rlsc2_p1963) return rlsc2_m1963; else {rlsc2_p1963=T;return rlsc2_m1963=normalize_rotation(rlsc2_f1964());}}
static int rlsc2_f1951(){if (rlsc2_p1951) return rlsc2_m1951; else {rlsc2_p1951=T;return rlsc2_m1951=((rlsc2_v1963=rlsc2_f1963()),((fabs((rlsc2_v1963-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1963-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1963-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f1950(){if (rlsc2_p1950) return rlsc2_m1950; else {rlsc2_p1950=T;return rlsc2_m1950=((rlsc2_v1951=rlsc2_f1951()),(rlsc2_v1951?rlsc2_v1951:rlsc2_f2399()));}}
static double rlsc2_f1195(){if (rlsc2_p1195) return rlsc2_m1195; else {rlsc2_p1195=T;return rlsc2_m1195=(rlsc2_f1950()?rlsc2_f1964():rlsc2_f1614());}}
static double rlsc2_f1721(){if (rlsc2_p1721) return rlsc2_m1721; else {rlsc2_p1721=T;return rlsc2_m1721=(rlsc2_f1950()?rlsc2_f1964():rlsc2_f2164());}}
static double rlsc2_f1947(){if (rlsc2_p1947) return rlsc2_m1947; else {rlsc2_p1947=T;return rlsc2_m1947=(rlsc2_f1950()?rlsc2_f1964():rlsc2_f2392());}}
static double rlsc2_f1949(){if (rlsc2_p1949) return rlsc2_m1949; else {rlsc2_p1949=T;return rlsc2_m1949=(rlsc2_f1950()?rlsc2_f1964():rlsc2_f2396());}}
static int rlsc2_f1948(){if (rlsc2_p1948) return rlsc2_m1948; else {rlsc2_p1948=T;return rlsc2_m1948=(rlsc2_f1949()<(0.0));}}
static int rlsc2_f1942(){if (rlsc2_p1942) return rlsc2_m1942; else {rlsc2_p1942=T;return rlsc2_m1942=(rlsc2_f1950()?((rlsc2_v1948=rlsc2_f1948()),(rlsc2_v1948?rlsc2_v1948:(fabs((rlsc2_f1947()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f1941(){if (rlsc2_p1941) return rlsc2_m1941; else {rlsc2_p1941=T;return rlsc2_m1941=(rlsc2_f1942()?rlsc2_f1950():NIL);}}
static double rlsc2_f1727(){if (rlsc2_p1727) return rlsc2_m1727; else {rlsc2_p1727=T;return rlsc2_m1727=(rlsc2_f1942()?rlsc2_f1947():rlsc2_f2392());}}
static double rlsc2_f1729(){if (rlsc2_p1729) return rlsc2_m1729; else {rlsc2_p1729=T;return rlsc2_m1729=(rlsc2_f1942()?rlsc2_f1949():rlsc2_f2396());}}
static int rlsc2_f1728(){if (rlsc2_p1728) return rlsc2_m1728; else {rlsc2_p1728=T;return rlsc2_m1728=(rlsc2_f1729()<(0.0));}}
static int rlsc2_f1722(){if (rlsc2_p1722) return rlsc2_m1722; else {rlsc2_p1722=T;return rlsc2_m1722=(rlsc2_f1941()?((rlsc2_v1728=rlsc2_f1728()),(rlsc2_v1728?rlsc2_v1728:(fabs((rlsc2_f1727()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f2079(){if (rlsc2_p2079) return rlsc2_m2079; else {rlsc2_p2079=T;return rlsc2_m2079=(rlsc2_f2086()-(rlsc2_f2082()*rlsc2_f2081()));}}
static double rlsc2_f2064(){if (rlsc2_p2064) return rlsc2_m2064; else {rlsc2_p2064=T;return rlsc2_m2064=((((rlsc2_f2072()*rlsc2_f2087())-(rlsc2_f2082()*rlsc2_f2068()))/rlsc2_f2079())-rlsc2_v6265);}}
static double rlsc2_f2058(){if (rlsc2_p2058) return rlsc2_m2058; else {rlsc2_p2058=T;return rlsc2_m2058=((((rlsc2_f2087()*rlsc2_f2068())-(rlsc2_f2072()*rlsc2_f2081()))/rlsc2_f2079())-rlsc2_v6263);}}
static double rlsc2_f2792(){if (rlsc2_p2792) return rlsc2_m2792; else {rlsc2_p2792=T;return rlsc2_m2792=normalize_rotation((rlsc2_f6244()-(1.5707963267948966)));}}
static double rlsc2_f2783(){if (rlsc2_p2783) return rlsc2_m2783; else {rlsc2_p2783=T;return rlsc2_m2783=(rlsc2_f6247()*cos(rlsc2_f2792()));}}
static double rlsc2_f2781(){if (rlsc2_p2781) return rlsc2_m2781; else {rlsc2_p2781=T;return rlsc2_m2781=(rlsc2_v6277+rlsc2_f2783());}}
static double rlsc2_f2782(){if (rlsc2_p2782) return rlsc2_m2782; else {rlsc2_p2782=T;return rlsc2_m2782=(rlsc2_v6281+rlsc2_f2783());}}
static double rlsc2_f2667(){if (rlsc2_p2667) return rlsc2_m2667; else {rlsc2_p2667=T;return rlsc2_m2667=((rlsc2_v2782=rlsc2_f2782()),(rlsc2_v2781=rlsc2_f2781()),(((rlsc2_v2782<rlsc2_v2781)?rlsc2_v2782:rlsc2_v2781)-rlsc2_v6259));}}
static double rlsc2_f2664(){if (rlsc2_p2664) return rlsc2_m2664; else {rlsc2_p2664=T;return rlsc2_m2664=((rlsc2_v2782=rlsc2_f2782()),(rlsc2_v2781=rlsc2_f2781()),(((rlsc2_v2782>rlsc2_v2781)?rlsc2_v2782:rlsc2_v2781)+rlsc2_v6259));}}
static int rlsc2_f2778(){if (rlsc2_p2778) return rlsc2_m2778; else {rlsc2_p2778=T;return rlsc2_m2778=(fabs((rlsc2_f2782()-rlsc2_f2781()))<rlsc2_v6259);}}
static double rlsc2_f2790(){if (rlsc2_p2790) return rlsc2_m2790; else {rlsc2_p2790=T;return rlsc2_m2790=(rlsc2_f6247()*sin(rlsc2_f2792()));}}
static double rlsc2_f2789(){if (rlsc2_p2789) return rlsc2_m2789; else {rlsc2_p2789=T;return rlsc2_m2789=(rlsc2_v6279+rlsc2_f2790());}}
static double rlsc2_f2788(){if (rlsc2_p2788) return rlsc2_m2788; else {rlsc2_p2788=T;return rlsc2_m2788=(rlsc2_v6275+rlsc2_f2790());}}
static double rlsc2_f2660(){if (rlsc2_p2660) return rlsc2_m2660; else {rlsc2_p2660=T;return rlsc2_m2660=((rlsc2_v2789=rlsc2_f2789()),(rlsc2_v2788=rlsc2_f2788()),(((rlsc2_v2789<rlsc2_v2788)?rlsc2_v2789:rlsc2_v2788)-rlsc2_v6259));}}
static double rlsc2_f2657(){if (rlsc2_p2657) return rlsc2_m2657; else {rlsc2_p2657=T;return rlsc2_m2657=((rlsc2_v2789=rlsc2_f2789()),(rlsc2_v2788=rlsc2_f2788()),(((rlsc2_v2789>rlsc2_v2788)?rlsc2_v2789:rlsc2_v2788)+rlsc2_v6259));}}
static double rlsc2_f2787(){if (rlsc2_p2787) return rlsc2_m2787; else {rlsc2_p2787=T;return rlsc2_m2787=(rlsc2_f2789()-rlsc2_f2788());}}
static int rlsc2_f2785(){if (rlsc2_p2785) return rlsc2_m2785; else {rlsc2_p2785=T;return rlsc2_m2785=(fabs(rlsc2_f2787())<rlsc2_v6259);}}
static double rlsc2_f2772(){if (rlsc2_p2772) return rlsc2_m2772; else {rlsc2_p2772=T;return rlsc2_m2772=(rlsc2_f2785()?(rlsc2_f2778()?rlsc2_f2776():(0.0)):(1.0));}}
static int rlsc2_f2710(){if (rlsc2_p2710) return rlsc2_m2710; else {rlsc2_p2710=T;return rlsc2_m2710=(rlsc2_f2772()==0.0);}}
static double rlsc2_f2733(){if (rlsc2_p2733) return rlsc2_m2733; else {rlsc2_p2733=T;return rlsc2_m2733=(rlsc2_f2772()*rlsc2_v6265);}}
static double rlsc2_f2753(){if (rlsc2_p2753) return rlsc2_m2753; else {rlsc2_p2753=T;return rlsc2_m2753=(rlsc2_f2772()*rlsc2_v6263);}}
static double rlsc2_f2771(){if (rlsc2_p2771) return rlsc2_m2771; else {rlsc2_p2771=T;return rlsc2_m2771=((rlsc2_v2772=rlsc2_f2772()),(rlsc2_v2772*rlsc2_v2772));}}
static double rlsc2_f2768(){if (rlsc2_p2768) return rlsc2_m2768; else {rlsc2_p2768=T;return rlsc2_m2768=((rlsc2_f2781()-rlsc2_f2782())/rlsc2_f2787());}}
static double rlsc2_f2755(){if (rlsc2_p2755) return rlsc2_m2755; else {rlsc2_p2755=T;return rlsc2_m2755=(rlsc2_f2785()?(rlsc2_f2778()?rlsc2_f2776():rlsc2_f2789()):(rlsc2_f2782()+(rlsc2_f2768()*rlsc2_f2789())));}}
static double rlsc2_f2767(){if (rlsc2_p2767) return rlsc2_m2767; else {rlsc2_p2767=T;return rlsc2_m2767=(rlsc2_f2785()?(rlsc2_f2778()?rlsc2_f2776():(1.0)):rlsc2_f2768());}}
static int rlsc2_f2703(){if (rlsc2_p2703) return rlsc2_m2703; else {rlsc2_p2703=T;return rlsc2_m2703=(rlsc2_f2767()>0.0);}}
static double rlsc2_f2701(){if (rlsc2_p2701) return rlsc2_m2701; else {rlsc2_p2701=T;return rlsc2_m2701=(rlsc2_f2703()?(-rlsc2_f2772()):rlsc2_f2772());}}
static double rlsc2_f2377(){if (rlsc2_p2377) return rlsc2_m2377; else {rlsc2_p2377=T;return rlsc2_m2377=(rlsc2_f2755()/rlsc2_f2767());}}
static double rlsc2_f2357(){if (rlsc2_p2357) return rlsc2_m2357; else {rlsc2_p2357=T;return rlsc2_m2357=(rlsc2_f2377()-rlsc2_v6263);}}
static int rlsc2_f2370(){if (rlsc2_p2370) return rlsc2_m2370; else {rlsc2_p2370=T;return rlsc2_m2370=((rlsc2_f2660()<=rlsc2_f2377())&&(rlsc2_f2377()<=rlsc2_f2657()));}}
static double rlsc2_f2376(){if (rlsc2_p2376) return rlsc2_m2376; else {rlsc2_p2376=T;return rlsc2_m2376=(rlsc2_f2767()*rlsc2_f2377());}}
static double rlsc2_f2707(){if (rlsc2_p2707) return rlsc2_m2707; else {rlsc2_p2707=T;return rlsc2_m2707=((rlsc2_v2767=rlsc2_f2767()),(rlsc2_v2767*rlsc2_v2767));}}
static double rlsc2_f2285(){if (rlsc2_p2285) return rlsc2_m2285; else {rlsc2_p2285=T;return rlsc2_m2285=(rlsc2_f2771()+rlsc2_f2707());}}
static double rlsc2_f2278(){if (rlsc2_p2278) return rlsc2_m2278; else {rlsc2_p2278=T;return rlsc2_m2278=((rlsc2_v2285=rlsc2_f2285()),(rlsc2_v2285+rlsc2_v2285));}}
static double rlsc2_f2723(){if (rlsc2_p2723) return rlsc2_m2723; else {rlsc2_p2723=T;return rlsc2_m2723=(((rlsc2_f2772()*rlsc2_v6281)+(rlsc2_f2767()*rlsc2_v6279))-rlsc2_f2755());}}
static double rlsc2_f2732(){if (rlsc2_p2732) return rlsc2_m2732; else {rlsc2_p2732=T;return rlsc2_m2732=(rlsc2_f2767()*rlsc2_v6263);}}
static double rlsc2_f2709(){if (rlsc2_p2709) return rlsc2_m2709; else {rlsc2_p2709=T;return rlsc2_m2709=(rlsc2_f2755()-rlsc2_f2733()-rlsc2_f2732());}}
static double rlsc2_f2287(){if (rlsc2_p2287) return rlsc2_m2287; else {rlsc2_p2287=T;return rlsc2_m2287=((-2.0)*rlsc2_f2767()*rlsc2_f2709());}}
static double rlsc2_f2277(){if (rlsc2_p2277) return rlsc2_m2277; else {rlsc2_p2277=T;return rlsc2_m2277=((-rlsc2_f2287())/rlsc2_f2278());}}
static double rlsc2_f2708(){if (rlsc2_p2708) return rlsc2_m2708; else {rlsc2_p2708=T;return rlsc2_m2708=((rlsc2_v2709=rlsc2_f2709()),(rlsc2_v2709*rlsc2_v2709));}}
static double rlsc2_f2730(){if (rlsc2_p2730) return rlsc2_m2730; else {rlsc2_p2730=T;return rlsc2_m2730=((rlsc2_f2733()+rlsc2_f2732())-rlsc2_f2755());}}
static int rlsc2_f2718(){if (rlsc2_p2718) return rlsc2_m2718; else {rlsc2_p2718=T;return rlsc2_m2718=(rlsc2_f2730()>(0.0));}}
static double rlsc2_f2752(){if (rlsc2_p2752) return rlsc2_m2752; else {rlsc2_p2752=T;return rlsc2_m2752=(rlsc2_f2767()*rlsc2_v6265);}}
static double rlsc2_f2751(){if (rlsc2_p2751) return rlsc2_m2751; else {rlsc2_p2751=T;return rlsc2_m2751=(rlsc2_f2753()-rlsc2_f2752());}}
static double rlsc2_f2691(){if (rlsc2_p2691) return rlsc2_m2691; else {rlsc2_p2691=T;return rlsc2_m2691=(rlsc2_f2703()?(rlsc2_f2752()-rlsc2_f2753()):rlsc2_f2751());}}
static double rlsc2_f2689(){if (rlsc2_p2689) return rlsc2_m2689; else {rlsc2_p2689=T;return rlsc2_m2689=((rlsc2_f2755()*rlsc2_f2701())-(rlsc2_f2767()*rlsc2_f2691()));}}
static double rlsc2_f2766(){if (rlsc2_p2766) return rlsc2_m2766; else {rlsc2_p2766=T;return rlsc2_m2766=(-rlsc2_f2767());}}
static double rlsc2_f2699(){if (rlsc2_p2699) return rlsc2_m2699; else {rlsc2_p2699=T;return rlsc2_m2699=(rlsc2_f2703()?rlsc2_f2767():rlsc2_f2766());}}
static double rlsc2_f2683(){if (rlsc2_p2683) return rlsc2_m2683; else {rlsc2_p2683=T;return rlsc2_m2683=((rlsc2_f2772()*rlsc2_f2691())-(rlsc2_f2755()*rlsc2_f2699()));}}
static double rlsc2_f2697(){if (rlsc2_p2697) return rlsc2_m2697; else {rlsc2_p2697=T;return rlsc2_m2697=((rlsc2_f2772()*rlsc2_f2701())-(rlsc2_f2767()*rlsc2_f2699()));}}
static double rlsc2_f2677(){if (rlsc2_p2677) return rlsc2_m2677; else {rlsc2_p2677=T;return rlsc2_m2677=(rlsc2_f2689()/rlsc2_f2697());}}
static double rlsc2_f2675(){if (rlsc2_p2675) return rlsc2_m2675; else {rlsc2_p2675=T;return rlsc2_m2675=(rlsc2_f2683()/rlsc2_f2697());}}
static int rlsc2_f2694(){if (rlsc2_p2694) return rlsc2_m2694; else {rlsc2_p2694=T;return rlsc2_m2694=(fabs((rlsc2_f2697()-(0.0)))<rlsc2_v6259);}}
static int rlsc2_f2678(){if (rlsc2_p2678) return rlsc2_m2678; else {rlsc2_p2678=T;return rlsc2_m2678=(rlsc2_f2694()?((fabs((rlsc2_f2689()-(0.0)))<rlsc2_v6259)?(fabs((rlsc2_f2683()-(0.0)))<rlsc2_v6259):NIL):T);}}
static int rlsc2_f2653(){if (rlsc2_p2653) return rlsc2_m2653; else {rlsc2_p2653=T;return rlsc2_m2653=(rlsc2_f2694()?NIL:((rlsc2_v2677=rlsc2_f2677()),(rlsc2_v2675=rlsc2_f2675()),((fabs((((rlsc2_f2772()*rlsc2_v2677)+(rlsc2_f2767()*rlsc2_v2675))-rlsc2_f2755()))<rlsc2_v6259)?(((rlsc2_f2667()<=rlsc2_v2677)&&(rlsc2_v2677<=rlsc2_f2664()))?((rlsc2_f2660()<=rlsc2_v2675)&&(rlsc2_v2675<=rlsc2_f2657())):NIL):NIL)));}}
static double rlsc2_f2642(){if (rlsc2_p2642) return rlsc2_m2642; else {rlsc2_p2642=T;return rlsc2_m2642=((rlsc2_v2694=rlsc2_f2694()),normalize_rotation((atan2(((rlsc2_v2694?rlsc2_f2651():rlsc2_f2675())-rlsc2_v6263),((rlsc2_v2694?rlsc2_f2647():rlsc2_f2677())-rlsc2_v6265))-rlsc2_f5623())));}}
static double rlsc2_f2641(){if (rlsc2_p2641) return rlsc2_m2641; else {rlsc2_p2641=T;return rlsc2_m2641=normalize_rotation(rlsc2_f2642());}}
static int rlsc2_f2627(){if (rlsc2_p2627) return rlsc2_m2627; else {rlsc2_p2627=T;return rlsc2_m2627=((rlsc2_v2641=rlsc2_f2641()),((fabs((rlsc2_v2641-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2641-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2641-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f2398(){if (rlsc2_p2398) return rlsc2_m2398; else {rlsc2_p2398=T;return rlsc2_m2398=((rlsc2_v2627=rlsc2_f2627()),(rlsc2_v2627?rlsc2_v2627:rlsc2_f2399()));}}
static double rlsc2_f1225(){if (rlsc2_p1225) return rlsc2_m1225; else {rlsc2_p1225=T;return rlsc2_m1225=(rlsc2_f2398()?rlsc2_f2642():rlsc2_f1614());}}
static double rlsc2_f2163(){if (rlsc2_p2163) return rlsc2_m2163; else {rlsc2_p2163=T;return rlsc2_m2163=(rlsc2_f2398()?rlsc2_f2642():rlsc2_f2164());}}
static double rlsc2_f2391(){if (rlsc2_p2391) return rlsc2_m2391; else {rlsc2_p2391=T;return rlsc2_m2391=(rlsc2_f2398()?rlsc2_f2642():rlsc2_f2392());}}
static double rlsc2_f2395(){if (rlsc2_p2395) return rlsc2_m2395; else {rlsc2_p2395=T;return rlsc2_m2395=(rlsc2_f2398()?rlsc2_f2642():rlsc2_f2396());}}
static int rlsc2_f2394(){if (rlsc2_p2394) return rlsc2_m2394; else {rlsc2_p2394=T;return rlsc2_m2394=(rlsc2_f2395()<(0.0));}}
static int rlsc2_f2386(){if (rlsc2_p2386) return rlsc2_m2386; else {rlsc2_p2386=T;return rlsc2_m2386=(rlsc2_f2398()?((rlsc2_v2394=rlsc2_f2394()),(rlsc2_v2394?rlsc2_v2394:(fabs((rlsc2_f2391()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f2171(){if (rlsc2_p2171) return rlsc2_m2171; else {rlsc2_p2171=T;return rlsc2_m2171=(rlsc2_f2386()?rlsc2_f2391():rlsc2_f2392());}}
static double rlsc2_f2173(){if (rlsc2_p2173) return rlsc2_m2173; else {rlsc2_p2173=T;return rlsc2_m2173=(rlsc2_f2386()?rlsc2_f2395():rlsc2_f2396());}}
static int rlsc2_f2172(){if (rlsc2_p2172) return rlsc2_m2172; else {rlsc2_p2172=T;return rlsc2_m2172=(rlsc2_f2173()<(0.0));}}
static int rlsc2_f2385(){if (rlsc2_p2385) return rlsc2_m2385; else {rlsc2_p2385=T;return rlsc2_m2385=(rlsc2_f2386()?rlsc2_f2398():NIL);}}
static int rlsc2_f2166(){if (rlsc2_p2166) return rlsc2_m2166; else {rlsc2_p2166=T;return rlsc2_m2166=(rlsc2_f2385()?((rlsc2_v2172=rlsc2_f2172()),(rlsc2_v2172?rlsc2_v2172:(fabs((rlsc2_f2171()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f2764(){if (rlsc2_p2764) return rlsc2_m2764; else {rlsc2_p2764=T;return rlsc2_m2764=(rlsc2_f2771()-(rlsc2_f2767()*rlsc2_f2766()));}}
static double rlsc2_f2747(){if (rlsc2_p2747) return rlsc2_m2747; else {rlsc2_p2747=T;return rlsc2_m2747=((((rlsc2_f2755()*rlsc2_f2772())-(rlsc2_f2767()*rlsc2_f2751()))/rlsc2_f2764())-rlsc2_v6265);}}
static double rlsc2_f2741(){if (rlsc2_p2741) return rlsc2_m2741; else {rlsc2_p2741=T;return rlsc2_m2741=((((rlsc2_f2772()*rlsc2_f2751())-(rlsc2_f2755()*rlsc2_f2766()))/rlsc2_f2764())-rlsc2_v6263);}}
static double rlsc2_f6256(){if (rlsc2_p6256) return rlsc2_m6256; else {rlsc2_p6256=T;return rlsc2_m6256=(rlsc2_v6263-rlsc2_v6271);}}
static double rlsc2_f6220(){if (rlsc2_p6220) return rlsc2_m6220; else {rlsc2_p6220=T;return rlsc2_m6220=((rlsc2_v6256=rlsc2_f6256()),sqrt(((rlsc2_v6261*rlsc2_v6261)+(rlsc2_v6256*rlsc2_v6256))));}}
static double rlsc2_f5878(){if (rlsc2_p5878) return rlsc2_m5878; else {rlsc2_p5878=T;return rlsc2_m5878=(rlsc2_v6265-(rlsc2_v6265+rlsc2_f6220()));}}
static double rlsc2_f5876(){if (rlsc2_p5876) return rlsc2_m5876; else {rlsc2_p5876=T;return rlsc2_m5876=(rlsc2_v6263-rlsc2_v6263);}}
static double rlsc2_f5875(){if (rlsc2_p5875) return rlsc2_m5875; else {rlsc2_p5875=T;return rlsc2_m5875=((rlsc2_v5876=rlsc2_f5876()),(rlsc2_v5876*rlsc2_v5876));}}
static double rlsc2_f3641(){if (rlsc2_p3641) return rlsc2_m3641; else {rlsc2_p3641=T;return rlsc2_m3641=((rlsc2_v3644=rlsc2_f3644()),sqrt(((rlsc2_v3644*rlsc2_v3644)+rlsc2_f5875())));}}
static double rlsc2_f3609(){if (rlsc2_p3609) return rlsc2_m3609; else {rlsc2_p3609=T;return rlsc2_m3609=((rlsc2_v3641=rlsc2_f3641()),(rlsc2_v3641*rlsc2_v3641));}}
static double rlsc2_f642(){if (rlsc2_p642) return rlsc2_m642; else {rlsc2_p642=T;return rlsc2_m642=(((rlsc2_f4055()+rlsc2_f3609())-rlsc2_f6194())/rlsc2_f984());}}
static double rlsc2_f632(){if (rlsc2_p632) return rlsc2_m632; else {rlsc2_p632=T;return rlsc2_m632=(rlsc2_f642()*rlsc2_f4004());}}
static double rlsc2_f638(){if (rlsc2_p638) return rlsc2_m638; else {rlsc2_p638=T;return rlsc2_m638=(rlsc2_f642()*rlsc2_f4005());}}
static double rlsc2_f640(){if (rlsc2_p640) return rlsc2_m640; else {rlsc2_p640=T;return rlsc2_m640=((rlsc2_v642=rlsc2_f642()),(rlsc2_f3609()-(rlsc2_v642*rlsc2_v642)));}}
static int rlsc2_f639(){if (rlsc2_p639) return rlsc2_m639; else {rlsc2_p639=T;return rlsc2_m639=(rlsc2_f640()<0.0);}}
static double rlsc2_f637(){if (rlsc2_p637) return rlsc2_m637; else {rlsc2_p637=T;return rlsc2_m637=sqrt(rlsc2_f640());}}
static double rlsc2_f631(){if (rlsc2_p631) return rlsc2_m631; else {rlsc2_p631=T;return rlsc2_m631=(rlsc2_f637()*rlsc2_f4005());}}
static double rlsc2_f540(){if (rlsc2_p540) return rlsc2_m540; else {rlsc2_p540=T;return rlsc2_m540=(rlsc2_v6263+(rlsc2_f632()-rlsc2_f631()));}}
static int rlsc2_f512(){if (rlsc2_p512) return rlsc2_m512; else {rlsc2_p512=T;return rlsc2_m512=(rlsc2_v6271==rlsc2_f540());}}
static double rlsc2_f630(){if (rlsc2_p630) return rlsc2_m630; else {rlsc2_p630=T;return rlsc2_m630=(rlsc2_v6263+rlsc2_f632()+rlsc2_f631());}}
static int rlsc2_f629(){if (rlsc2_p629) return rlsc2_m629; else {rlsc2_p629=T;return rlsc2_m629=(rlsc2_v6271==rlsc2_f630());}}
static double rlsc2_f636(){if (rlsc2_p636) return rlsc2_m636; else {rlsc2_p636=T;return rlsc2_m636=(rlsc2_f637()*rlsc2_f4004());}}
static double rlsc2_f538(){if (rlsc2_p538) return rlsc2_m538; else {rlsc2_p538=T;return rlsc2_m538=(rlsc2_v6265+rlsc2_f638()+rlsc2_f636());}}
static int rlsc2_f513(){if (rlsc2_p513) return rlsc2_m513; else {rlsc2_p513=T;return rlsc2_m513=(rlsc2_v6273==rlsc2_f538());}}
static double rlsc2_f510(){if (rlsc2_p510) return rlsc2_m510; else {rlsc2_p510=T;return rlsc2_m510=(rlsc2_f513()?(rlsc2_f512()?rlsc2_f1075():(0.0)):(1.0));}}
static double rlsc2_f505(){if (rlsc2_p505) return rlsc2_m505; else {rlsc2_p505=T;return rlsc2_m505=((rlsc2_f540()-rlsc2_v6271)/(rlsc2_f538()-rlsc2_v6273));}}
static double rlsc2_f498(){if (rlsc2_p498) return rlsc2_m498; else {rlsc2_p498=T;return rlsc2_m498=(rlsc2_f513()?(rlsc2_f512()?rlsc2_f1075():rlsc2_f540()):(rlsc2_f538()+(rlsc2_f505()*rlsc2_f540())));}}
static double rlsc2_f504(){if (rlsc2_p504) return rlsc2_m504; else {rlsc2_p504=T;return rlsc2_m504=(rlsc2_f513()?(rlsc2_f512()?rlsc2_f1075():(1.0)):rlsc2_f505());}}
static double rlsc2_f497(){if (rlsc2_p497) return rlsc2_m497; else {rlsc2_p497=T;return rlsc2_m497=(((rlsc2_f510()*rlsc2_v6281)+(rlsc2_f504()*rlsc2_v6279))-rlsc2_f498());}}
static int rlsc2_f480(){if (rlsc2_p480) return rlsc2_m480; else {rlsc2_p480=T;return rlsc2_m480=(rlsc2_f497()>(0.0));}}
static double rlsc2_f536(){if (rlsc2_p536) return rlsc2_m536; else {rlsc2_p536=T;return rlsc2_m536=atan2((rlsc2_f540()-rlsc2_v6263),(rlsc2_f538()-rlsc2_v6265));}}
static double rlsc2_f493(){if (rlsc2_p493) return rlsc2_m493; else {rlsc2_p493=T;return rlsc2_m493=(rlsc2_f536()+(1.5707963267948966));}}
static double rlsc2_f485(){if (rlsc2_p485) return rlsc2_m485; else {rlsc2_p485=T;return rlsc2_m485=((rlsc2_v493=rlsc2_f493()),(((rlsc2_f510()*(rlsc2_f538()+cos(rlsc2_v493)))+(rlsc2_f504()*(rlsc2_f540()+sin(rlsc2_v493))))-rlsc2_f498()));}}
static double rlsc2_f534(){if (rlsc2_p534) return rlsc2_m534; else {rlsc2_p534=T;return rlsc2_m534=normalize_rotation((rlsc2_f536()-rlsc2_f3535()));}}
static double rlsc2_f533(){if (rlsc2_p533) return rlsc2_m533; else {rlsc2_p533=T;return rlsc2_m533=normalize_rotation(rlsc2_f534());}}
static int rlsc2_f521(){if (rlsc2_p521) return rlsc2_m521; else {rlsc2_p521=T;return rlsc2_m521=((rlsc2_v533=rlsc2_f533()),((fabs((rlsc2_v533-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v533-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v533-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f473(){if (rlsc2_p473) return rlsc2_m473; else {rlsc2_p473=T;return rlsc2_m473=((rlsc2_v521=rlsc2_f521()),(rlsc2_v521?rlsc2_v521:(((fabs((rlsc2_v6265-rlsc2_f538()))<rlsc2_v6259)?(fabs((rlsc2_v6263-rlsc2_f540()))<rlsc2_v6259):NIL)?NIL:(((fabs((rlsc2_f497()-(0.0)))<rlsc2_v6259)?T:((rlsc2_v485=rlsc2_f485()),((fabs((rlsc2_v485-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v485>(0.0))?rlsc2_f480():(rlsc2_f480()?NIL:T)))))?NIL:T))));}}
static double rlsc2_f470(){if (rlsc2_p470) return rlsc2_m470; else {rlsc2_p470=T;return rlsc2_m470=(rlsc2_f473()?rlsc2_f534():rlsc2_f2392());}}
static double rlsc2_f472(){if (rlsc2_p472) return rlsc2_m472; else {rlsc2_p472=T;return rlsc2_m472=(rlsc2_f473()?rlsc2_f534():rlsc2_f2396());}}
static int rlsc2_f471(){if (rlsc2_p471) return rlsc2_m471; else {rlsc2_p471=T;return rlsc2_m471=(rlsc2_f472()>(0.0));}}
static int rlsc2_f465(){if (rlsc2_p465) return rlsc2_m465; else {rlsc2_p465=T;return rlsc2_m465=(rlsc2_f473()?((rlsc2_v471=rlsc2_f471()),(rlsc2_v471?rlsc2_v471:(fabs((rlsc2_f470()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f464(){if (rlsc2_p464) return rlsc2_m464; else {rlsc2_p464=T;return rlsc2_m464=(rlsc2_f465()?rlsc2_f473():NIL);}}
static double rlsc2_f461(){if (rlsc2_p461) return rlsc2_m461; else {rlsc2_p461=T;return rlsc2_m461=(rlsc2_f465()?rlsc2_f470():rlsc2_f2392());}}
static double rlsc2_f463(){if (rlsc2_p463) return rlsc2_m463; else {rlsc2_p463=T;return rlsc2_m463=(rlsc2_f465()?rlsc2_f472():rlsc2_f2396());}}
static int rlsc2_f462(){if (rlsc2_p462) return rlsc2_m462; else {rlsc2_p462=T;return rlsc2_m462=(rlsc2_f463()>(0.0));}}
static int rlsc2_f456(){if (rlsc2_p456) return rlsc2_m456; else {rlsc2_p456=T;return rlsc2_m456=(rlsc2_f464()?((rlsc2_v462=rlsc2_f462()),(rlsc2_v462?rlsc2_v462:(fabs((rlsc2_f461()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f634(){if (rlsc2_p634) return rlsc2_m634; else {rlsc2_p634=T;return rlsc2_m634=(rlsc2_v6265+(rlsc2_f638()-rlsc2_f636()));}}
static double rlsc2_f591(){if (rlsc2_p591) return rlsc2_m591; else {rlsc2_p591=T;return rlsc2_m591=atan2((rlsc2_f630()-rlsc2_v6263),(rlsc2_f634()-rlsc2_v6265));}}
static double rlsc2_f568(){if (rlsc2_p568) return rlsc2_m568; else {rlsc2_p568=T;return rlsc2_m568=(rlsc2_f591()+(1.5707963267948966));}}
static double rlsc2_f589(){if (rlsc2_p589) return rlsc2_m589; else {rlsc2_p589=T;return rlsc2_m589=normalize_rotation((rlsc2_f591()-rlsc2_f3535()));}}
static double rlsc2_f588(){if (rlsc2_p588) return rlsc2_m588; else {rlsc2_p588=T;return rlsc2_m588=normalize_rotation(rlsc2_f589());}}
static int rlsc2_f576(){if (rlsc2_p576) return rlsc2_m576; else {rlsc2_p576=T;return rlsc2_m576=((rlsc2_v588=rlsc2_f588()),((fabs((rlsc2_v588-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v588-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v588-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f633(){if (rlsc2_p633) return rlsc2_m633; else {rlsc2_p633=T;return rlsc2_m633=(rlsc2_v6273==rlsc2_f634());}}
static double rlsc2_f627(){if (rlsc2_p627) return rlsc2_m627; else {rlsc2_p627=T;return rlsc2_m627=(rlsc2_f633()?(rlsc2_f629()?rlsc2_f1075():(0.0)):(1.0));}}
static double rlsc2_f622(){if (rlsc2_p622) return rlsc2_m622; else {rlsc2_p622=T;return rlsc2_m622=((rlsc2_f630()-rlsc2_v6271)/(rlsc2_f634()-rlsc2_v6273));}}
static double rlsc2_f615(){if (rlsc2_p615) return rlsc2_m615; else {rlsc2_p615=T;return rlsc2_m615=(rlsc2_f633()?(rlsc2_f629()?rlsc2_f1075():rlsc2_f630()):(rlsc2_f634()+(rlsc2_f622()*rlsc2_f630())));}}
static double rlsc2_f621(){if (rlsc2_p621) return rlsc2_m621; else {rlsc2_p621=T;return rlsc2_m621=(rlsc2_f633()?(rlsc2_f629()?rlsc2_f1075():(1.0)):rlsc2_f622());}}
static double rlsc2_f560(){if (rlsc2_p560) return rlsc2_m560; else {rlsc2_p560=T;return rlsc2_m560=((rlsc2_v568=rlsc2_f568()),(((rlsc2_f627()*(rlsc2_f634()+cos(rlsc2_v568)))+(rlsc2_f621()*(rlsc2_f630()+sin(rlsc2_v568))))-rlsc2_f615()));}}
static double rlsc2_f607(){if (rlsc2_p607) return rlsc2_m607; else {rlsc2_p607=T;return rlsc2_m607=(((rlsc2_f627()*rlsc2_v6273)+(rlsc2_f621()*rlsc2_v6271))-rlsc2_f615());}}
static double rlsc2_f614(){if (rlsc2_p614) return rlsc2_m614; else {rlsc2_p614=T;return rlsc2_m614=(((rlsc2_f627()*rlsc2_v6281)+(rlsc2_f621()*rlsc2_v6279))-rlsc2_f615());}}
static int rlsc2_f611(){if (rlsc2_p611) return rlsc2_m611; else {rlsc2_p611=T;return rlsc2_m611=(fabs((rlsc2_f614()-(0.0)))<rlsc2_v6259);}}
static int rlsc2_f602(){if (rlsc2_p602) return rlsc2_m602; else {rlsc2_p602=T;return rlsc2_m602=(rlsc2_f614()>(0.0));}}
static int rlsc2_f601(){if (rlsc2_p601) return rlsc2_m601; else {rlsc2_p601=T;return rlsc2_m601=(rlsc2_f602()?NIL:T);}}
static int rlsc2_f550(){if (rlsc2_p550) return rlsc2_m550; else {rlsc2_p550=T;return rlsc2_m550=((rlsc2_v576=rlsc2_f576()),(rlsc2_v576?rlsc2_v576:(((fabs((rlsc2_v6265-rlsc2_f634()))<rlsc2_v6259)?(fabs((rlsc2_v6263-rlsc2_f630()))<rlsc2_v6259):NIL)?NIL:((rlsc2_f611()?T:((rlsc2_v560=rlsc2_f560()),((fabs((rlsc2_v560-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v560>(0.0))?rlsc2_f602():rlsc2_f601()))))?NIL:T))));}}
static int rlsc2_f455(){if (rlsc2_p455) return rlsc2_m455; else {rlsc2_p455=T;return rlsc2_m455=(rlsc2_f550()?rlsc2_f464():NIL);}}
static double rlsc2_f430(){if (rlsc2_p430) return rlsc2_m430; else {rlsc2_p430=T;return rlsc2_m430=(rlsc2_f550()?(rlsc2_f465()?(rlsc2_f473()?((rlsc2_v589=rlsc2_f589()),(rlsc2_v534=rlsc2_f534()),((rlsc2_v589<rlsc2_v534)?rlsc2_v589:rlsc2_v534)):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static double rlsc2_f547(){if (rlsc2_p547) return rlsc2_m547; else {rlsc2_p547=T;return rlsc2_m547=(rlsc2_f550()?rlsc2_f589():rlsc2_f2392());}}
static double rlsc2_f549(){if (rlsc2_p549) return rlsc2_m549; else {rlsc2_p549=T;return rlsc2_m549=(rlsc2_f550()?rlsc2_f589():rlsc2_f2396());}}
static int rlsc2_f548(){if (rlsc2_p548) return rlsc2_m548; else {rlsc2_p548=T;return rlsc2_m548=(rlsc2_f549()>(0.0));}}
static int rlsc2_f542(){if (rlsc2_p542) return rlsc2_m542; else {rlsc2_p542=T;return rlsc2_m542=(rlsc2_f550()?((rlsc2_v548=rlsc2_f548()),(rlsc2_v548?rlsc2_v548:(fabs((rlsc2_f547()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f598(){if (rlsc2_p598) return rlsc2_m598; else {rlsc2_p598=T;return rlsc2_m598=(rlsc2_f611()?NIL:((rlsc2_v607=rlsc2_f607()),((fabs((rlsc2_v607-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v607>(0.0))?rlsc2_f602():rlsc2_f601()))));}}
static double rlsc2_f3620(){if (rlsc2_p3620) return rlsc2_m3620; else {rlsc2_p3620=T;return rlsc2_m3620=(rlsc2_f3641()/rlsc2_f6220());}}
static double rlsc2_f3636(){if (rlsc2_p3636) return rlsc2_m3636; else {rlsc2_p3636=T;return rlsc2_m3636=(rlsc2_f3641()+rlsc2_f6247());}}
static int rlsc2_f3634(){if (rlsc2_p3634) return rlsc2_m3634; else {rlsc2_p3634=T;return rlsc2_m3634=((rlsc2_v3636=rlsc2_f3636()),(rlsc2_f4055()>(rlsc2_v3636*rlsc2_v3636)));}}
static int rlsc2_f3626(){if (rlsc2_p3626) return rlsc2_m3626; else {rlsc2_p3626=T;return rlsc2_m3626=(rlsc2_f6220()>rlsc2_f3636());}}
static int rlsc2_f3583(){if (rlsc2_p3583) return rlsc2_m3583; else {rlsc2_p3583=T;return rlsc2_m3583=(rlsc2_f4017()>rlsc2_f3636());}}
static int rlsc2_f3581(){if (rlsc2_p3581) return rlsc2_m3581; else {rlsc2_p3581=T;return rlsc2_m3581=((rlsc2_v3583=rlsc2_f3583()),(rlsc2_v3583?rlsc2_v3583:(rlsc2_f3641()>rlsc2_f6247())));}}
static double rlsc2_f3633(){if (rlsc2_p3633) return rlsc2_m3633; else {rlsc2_p3633=T;return rlsc2_m3633=(rlsc2_f6220()-rlsc2_f3636());}}
static int rlsc2_f3631(){if (rlsc2_p3631) return rlsc2_m3631; else {rlsc2_p3631=T;return rlsc2_m3631=(fabs(rlsc2_f3633())<rlsc2_v6259);}}
static int rlsc2_f3627(){if (rlsc2_p3627) return rlsc2_m3627; else {rlsc2_p3627=T;return rlsc2_m3627=((rlsc2_v3631=rlsc2_f3631()),(rlsc2_v3631?rlsc2_v3631:(fabs((rlsc2_f6220()-fabs((rlsc2_f3641()-rlsc2_f6247()))))<rlsc2_v6259)));}}
static int rlsc2_f594(){if (rlsc2_p594) return rlsc2_m594; else {rlsc2_p594=T;return rlsc2_m594=((rlsc2_v3627=rlsc2_f3627()),(rlsc2_v3627?(rlsc2_f3581()?rlsc2_f598():(rlsc2_f598()?NIL:T)):(rlsc2_v3627?NIL:T)));}}
static double rlsc2_f738(){if (rlsc2_p738) return rlsc2_m738; else {rlsc2_p738=T;return rlsc2_m738=((rlsc2_v3626=rlsc2_f3626()),((rlsc2_v3626?rlsc2_v3626:rlsc2_f3631())?((rlsc2_f3641()+((0.5)*rlsc2_f3633()))/rlsc2_f6220()):((rlsc2_f3641()<rlsc2_f6247())?(-rlsc2_f3620()):(rlsc2_f3620()+(1.0)))));}}
static double rlsc2_f733(){if (rlsc2_p733) return rlsc2_m733; else {rlsc2_p733=T;return rlsc2_m733=(rlsc2_v6263+(rlsc2_f738()*rlsc2_f5625()));}}
static int rlsc2_f732(){if (rlsc2_p732) return rlsc2_m732; else {rlsc2_p732=T;return rlsc2_m732=(rlsc2_v6271==rlsc2_f733());}}
static double rlsc2_f736(){if (rlsc2_p736) return rlsc2_m736; else {rlsc2_p736=T;return rlsc2_m736=(rlsc2_v6265+(rlsc2_f738()*rlsc2_f5624()));}}
static double rlsc2_f696(){if (rlsc2_p696) return rlsc2_m696; else {rlsc2_p696=T;return rlsc2_m696=atan2((rlsc2_f733()-rlsc2_v6263),(rlsc2_f736()-rlsc2_v6265));}}
static double rlsc2_f673(){if (rlsc2_p673) return rlsc2_m673; else {rlsc2_p673=T;return rlsc2_m673=(rlsc2_f696()+(1.5707963267948966));}}
static double rlsc2_f694(){if (rlsc2_p694) return rlsc2_m694; else {rlsc2_p694=T;return rlsc2_m694=normalize_rotation((rlsc2_f696()-rlsc2_f3535()));}}
static double rlsc2_f693(){if (rlsc2_p693) return rlsc2_m693; else {rlsc2_p693=T;return rlsc2_m693=normalize_rotation(rlsc2_f694());}}
static int rlsc2_f681(){if (rlsc2_p681) return rlsc2_m681; else {rlsc2_p681=T;return rlsc2_m681=((rlsc2_v693=rlsc2_f693()),((fabs((rlsc2_v693-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v693-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v693-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f735(){if (rlsc2_p735) return rlsc2_m735; else {rlsc2_p735=T;return rlsc2_m735=(rlsc2_v6273==rlsc2_f736());}}
static double rlsc2_f730(){if (rlsc2_p730) return rlsc2_m730; else {rlsc2_p730=T;return rlsc2_m730=(rlsc2_f735()?(rlsc2_f732()?rlsc2_f1075():(0.0)):(1.0));}}
static double rlsc2_f725(){if (rlsc2_p725) return rlsc2_m725; else {rlsc2_p725=T;return rlsc2_m725=((rlsc2_f733()-rlsc2_v6271)/(rlsc2_f736()-rlsc2_v6273));}}
static double rlsc2_f718(){if (rlsc2_p718) return rlsc2_m718; else {rlsc2_p718=T;return rlsc2_m718=(rlsc2_f735()?(rlsc2_f732()?rlsc2_f1075():rlsc2_f733()):(rlsc2_f736()+(rlsc2_f725()*rlsc2_f733())));}}
static double rlsc2_f724(){if (rlsc2_p724) return rlsc2_m724; else {rlsc2_p724=T;return rlsc2_m724=(rlsc2_f735()?(rlsc2_f732()?rlsc2_f1075():(1.0)):rlsc2_f725());}}
static double rlsc2_f665(){if (rlsc2_p665) return rlsc2_m665; else {rlsc2_p665=T;return rlsc2_m665=((rlsc2_v673=rlsc2_f673()),(((rlsc2_f730()*(rlsc2_f736()+cos(rlsc2_v673)))+(rlsc2_f724()*(rlsc2_f733()+sin(rlsc2_v673))))-rlsc2_f718()));}}
static double rlsc2_f710(){if (rlsc2_p710) return rlsc2_m710; else {rlsc2_p710=T;return rlsc2_m710=(((rlsc2_f730()*rlsc2_v6273)+(rlsc2_f724()*rlsc2_v6271))-rlsc2_f718());}}
static double rlsc2_f717(){if (rlsc2_p717) return rlsc2_m717; else {rlsc2_p717=T;return rlsc2_m717=(((rlsc2_f730()*rlsc2_v6281)+(rlsc2_f724()*rlsc2_v6279))-rlsc2_f718());}}
static int rlsc2_f714(){if (rlsc2_p714) return rlsc2_m714; else {rlsc2_p714=T;return rlsc2_m714=(fabs((rlsc2_f717()-(0.0)))<rlsc2_v6259);}}
static int rlsc2_f705(){if (rlsc2_p705) return rlsc2_m705; else {rlsc2_p705=T;return rlsc2_m705=(rlsc2_f717()>(0.0));}}
static int rlsc2_f704(){if (rlsc2_p704) return rlsc2_m704; else {rlsc2_p704=T;return rlsc2_m704=(rlsc2_f705()?NIL:T);}}
static int rlsc2_f655(){if (rlsc2_p655) return rlsc2_m655; else {rlsc2_p655=T;return rlsc2_m655=((rlsc2_v681=rlsc2_f681()),(rlsc2_v681?rlsc2_v681:(((fabs((rlsc2_v6265-rlsc2_f736()))<rlsc2_v6259)?(fabs((rlsc2_v6263-rlsc2_f733()))<rlsc2_v6259):NIL)?NIL:((rlsc2_f714()?T:((rlsc2_v665=rlsc2_f665()),((fabs((rlsc2_v665-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v665>(0.0))?rlsc2_f705():rlsc2_f704()))))?NIL:T))));}}
static double rlsc2_f439(){if (rlsc2_p439) return rlsc2_m439; else {rlsc2_p439=T;return rlsc2_m439=(rlsc2_f655()?rlsc2_f694():rlsc2_f779());}}
static double_or_symbol rlsc2_f18(){if (rlsc2_p18) return rlsc2_m18; else {rlsc2_p18=T;return rlsc2_m18=(rlsc2_f655()?coerce_double_to_double_or_symbol(rlsc2_f694()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsc2_f652(){if (rlsc2_p652) return rlsc2_m652; else {rlsc2_p652=T;return rlsc2_m652=(rlsc2_f655()?rlsc2_f694():rlsc2_f2392());}}
static double rlsc2_f654(){if (rlsc2_p654) return rlsc2_m654; else {rlsc2_p654=T;return rlsc2_m654=(rlsc2_f655()?rlsc2_f694():rlsc2_f2396());}}
static int rlsc2_f653(){if (rlsc2_p653) return rlsc2_m653; else {rlsc2_p653=T;return rlsc2_m653=(rlsc2_f654()>(0.0));}}
static int rlsc2_f647(){if (rlsc2_p647) return rlsc2_m647; else {rlsc2_p647=T;return rlsc2_m647=(rlsc2_f655()?((rlsc2_v653=rlsc2_f653()),(rlsc2_v653?rlsc2_v653:(fabs((rlsc2_f652()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f646(){if (rlsc2_p646) return rlsc2_m646; else {rlsc2_p646=T;return rlsc2_m646=(rlsc2_f647()?rlsc2_f655():NIL);}}
static double rlsc2_f445(){if (rlsc2_p445) return rlsc2_m445; else {rlsc2_p445=T;return rlsc2_m445=(rlsc2_f647()?rlsc2_f652():rlsc2_f2392());}}
static double rlsc2_f447(){if (rlsc2_p447) return rlsc2_m447; else {rlsc2_p447=T;return rlsc2_m447=(rlsc2_f647()?rlsc2_f654():rlsc2_f2396());}}
static int rlsc2_f446(){if (rlsc2_p446) return rlsc2_m446; else {rlsc2_p446=T;return rlsc2_m446=(rlsc2_f447()>(0.0));}}
static int rlsc2_f440(){if (rlsc2_p440) return rlsc2_m440; else {rlsc2_p440=T;return rlsc2_m440=(rlsc2_f646()?((rlsc2_v446=rlsc2_f446()),(rlsc2_v446?rlsc2_v446:(fabs((rlsc2_f445()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f701(){if (rlsc2_p701) return rlsc2_m701; else {rlsc2_p701=T;return rlsc2_m701=(rlsc2_f714()?NIL:((rlsc2_v710=rlsc2_f710()),((fabs((rlsc2_v710-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v710>(0.0))?rlsc2_f705():rlsc2_f704()))));}}
static int rlsc2_f699(){if (rlsc2_p699) return rlsc2_m699; else {rlsc2_p699=T;return rlsc2_m699=(rlsc2_f3581()?rlsc2_f701():(rlsc2_f701()?NIL:T));}}
static double rlsc2_f59(){if (rlsc2_p59) return rlsc2_m59; else {rlsc2_p59=T;return rlsc2_m59=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v439=rlsc2_f439()),((rlsc2_v1101<rlsc2_v439)?rlsc2_v1101:rlsc2_v439)):(rlsc2_f655()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v694=rlsc2_f694()),((rlsc2_v1101<rlsc2_v694)?rlsc2_v1101:rlsc2_v694)):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static double rlsc2_f418(){if (rlsc2_p418) return rlsc2_m418; else {rlsc2_p418=T;return rlsc2_m418=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?rlsc2_f439():rlsc2_f652()):rlsc2_f445()):rlsc2_f2392()):rlsc2_f2392());}}
static double rlsc2_f411(){if (rlsc2_p411) return rlsc2_m411; else {rlsc2_p411=T;return rlsc2_m411=(rlsc2_f744()?rlsc2_f2392():(rlsc2_f4054()?rlsc2_f2392():(rlsc2_f3634()?rlsc2_f418():(rlsc2_f639()?rlsc2_f418():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?rlsc2_f430():rlsc2_f547()):rlsc2_f461()):rlsc2_f2392())))));}}
static double rlsc2_f435(){if (rlsc2_p435) return rlsc2_m435; else {rlsc2_p435=T;return rlsc2_m435=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?rlsc2_f439():rlsc2_f654()):rlsc2_f447()):rlsc2_f2396()):rlsc2_f2396());}}
static double rlsc2_f423(){if (rlsc2_p423) return rlsc2_m423; else {rlsc2_p423=T;return rlsc2_m423=(rlsc2_f744()?rlsc2_f2396():(rlsc2_f4054()?rlsc2_f2396():(rlsc2_f3634()?rlsc2_f435():(rlsc2_f639()?rlsc2_f435():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?rlsc2_f430():rlsc2_f549()):rlsc2_f463()):rlsc2_f2396())))));}}
static int rlsc2_f422(){if (rlsc2_p422) return rlsc2_m422; else {rlsc2_p422=T;return rlsc2_m422=(rlsc2_f423()>(0.0));}}
static int rlsc2_f643(){if (rlsc2_p643) return rlsc2_m643; else {rlsc2_p643=T;return rlsc2_m643=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?rlsc2_f655():rlsc2_f646()):NIL):NIL);}}
static int rlsc2_f448(){if (rlsc2_p448) return rlsc2_m448; else {rlsc2_p448=T;return rlsc2_m448=(rlsc2_f744()?NIL:(rlsc2_f4054()?NIL:(rlsc2_f3634()?rlsc2_f643():(rlsc2_f639()?rlsc2_f643():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?rlsc2_f455():rlsc2_f550()):rlsc2_f464()):NIL)))));}}
static int rlsc2_f406(){if (rlsc2_p406) return rlsc2_m406; else {rlsc2_p406=T;return rlsc2_m406=(rlsc2_f448()?((rlsc2_v422=rlsc2_f422()),(rlsc2_v422?rlsc2_v422:(fabs((rlsc2_f411()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f405(){if (rlsc2_p405) return rlsc2_m405; else {rlsc2_p405=T;return rlsc2_m405=(rlsc2_f406()?rlsc2_f448():NIL);}}
static double rlsc2_f402(){if (rlsc2_p402) return rlsc2_m402; else {rlsc2_p402=T;return rlsc2_m402=(rlsc2_f406()?rlsc2_f411():rlsc2_f2392());}}
static double rlsc2_f404(){if (rlsc2_p404) return rlsc2_m404; else {rlsc2_p404=T;return rlsc2_m404=(rlsc2_f406()?rlsc2_f423():rlsc2_f2396());}}
static int rlsc2_f403(){if (rlsc2_p403) return rlsc2_m403; else {rlsc2_p403=T;return rlsc2_m403=(rlsc2_f404()>(0.0));}}
static int rlsc2_f397(){if (rlsc2_p397) return rlsc2_m397; else {rlsc2_p397=T;return rlsc2_m397=(rlsc2_f405()?((rlsc2_v403=rlsc2_f403()),(rlsc2_v403?rlsc2_v403:(fabs((rlsc2_f402()-(0.0)))<rlsc2_v6259))):NIL);}}
static double_or_symbol rlsc2_f13(){if (rlsc2_p13) return rlsc2_m13; else {rlsc2_p13=T;return rlsc2_m13=(rlsc2_f3627()?(rlsc2_f699()?((rlsc2_v647=rlsc2_f647()),(rlsc2_v647?(rlsc2_f440()?coerce_double_to_double_or_symbol(rlsc2_f439()):rlsc2_f18()):(rlsc2_v647?rlsc2_f18():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsc2_f4050(){if (rlsc2_p4050) return rlsc2_m4050; else {rlsc2_p4050=T;return rlsc2_m4050=((rlsc2_v4053=rlsc2_f4053()),sqrt(((rlsc2_v4053*rlsc2_v4053)+rlsc2_f5875())));}}
static double rlsc2_f4016(){if (rlsc2_p4016) return rlsc2_m4016; else {rlsc2_p4016=T;return rlsc2_m4016=((rlsc2_v4050=rlsc2_f4050()),(rlsc2_v4050*rlsc2_v4050));}}
static double rlsc2_f983(){if (rlsc2_p983) return rlsc2_m983; else {rlsc2_p983=T;return rlsc2_m983=(((rlsc2_f4055()+rlsc2_f4016())-rlsc2_f6194())/rlsc2_f984());}}
static double rlsc2_f973(){if (rlsc2_p973) return rlsc2_m973; else {rlsc2_p973=T;return rlsc2_m973=(rlsc2_f983()*rlsc2_f4004());}}
static double rlsc2_f979(){if (rlsc2_p979) return rlsc2_m979; else {rlsc2_p979=T;return rlsc2_m979=(rlsc2_f983()*rlsc2_f4005());}}
static double rlsc2_f981(){if (rlsc2_p981) return rlsc2_m981; else {rlsc2_p981=T;return rlsc2_m981=((rlsc2_v983=rlsc2_f983()),(rlsc2_f4016()-(rlsc2_v983*rlsc2_v983)));}}
static int rlsc2_f980(){if (rlsc2_p980) return rlsc2_m980; else {rlsc2_p980=T;return rlsc2_m980=(rlsc2_f981()<0.0);}}
static double rlsc2_f978(){if (rlsc2_p978) return rlsc2_m978; else {rlsc2_p978=T;return rlsc2_m978=sqrt(rlsc2_f981());}}
static double rlsc2_f972(){if (rlsc2_p972) return rlsc2_m972; else {rlsc2_p972=T;return rlsc2_m972=(rlsc2_f978()*rlsc2_f4005());}}
static double rlsc2_f881(){if (rlsc2_p881) return rlsc2_m881; else {rlsc2_p881=T;return rlsc2_m881=(rlsc2_v6263+(rlsc2_f973()-rlsc2_f972()));}}
static int rlsc2_f853(){if (rlsc2_p853) return rlsc2_m853; else {rlsc2_p853=T;return rlsc2_m853=(rlsc2_v6271==rlsc2_f881());}}
static double rlsc2_f971(){if (rlsc2_p971) return rlsc2_m971; else {rlsc2_p971=T;return rlsc2_m971=(rlsc2_v6263+rlsc2_f973()+rlsc2_f972());}}
static int rlsc2_f970(){if (rlsc2_p970) return rlsc2_m970; else {rlsc2_p970=T;return rlsc2_m970=(rlsc2_v6271==rlsc2_f971());}}
static double rlsc2_f977(){if (rlsc2_p977) return rlsc2_m977; else {rlsc2_p977=T;return rlsc2_m977=(rlsc2_f978()*rlsc2_f4004());}}
static double rlsc2_f879(){if (rlsc2_p879) return rlsc2_m879; else {rlsc2_p879=T;return rlsc2_m879=(rlsc2_v6265+rlsc2_f979()+rlsc2_f977());}}
static int rlsc2_f854(){if (rlsc2_p854) return rlsc2_m854; else {rlsc2_p854=T;return rlsc2_m854=(rlsc2_v6273==rlsc2_f879());}}
static double rlsc2_f851(){if (rlsc2_p851) return rlsc2_m851; else {rlsc2_p851=T;return rlsc2_m851=(rlsc2_f854()?(rlsc2_f853()?rlsc2_f1075():(0.0)):(1.0));}}
static double rlsc2_f846(){if (rlsc2_p846) return rlsc2_m846; else {rlsc2_p846=T;return rlsc2_m846=((rlsc2_f881()-rlsc2_v6271)/(rlsc2_f879()-rlsc2_v6273));}}
static double rlsc2_f839(){if (rlsc2_p839) return rlsc2_m839; else {rlsc2_p839=T;return rlsc2_m839=(rlsc2_f854()?(rlsc2_f853()?rlsc2_f1075():rlsc2_f881()):(rlsc2_f879()+(rlsc2_f846()*rlsc2_f881())));}}
static double rlsc2_f845(){if (rlsc2_p845) return rlsc2_m845; else {rlsc2_p845=T;return rlsc2_m845=(rlsc2_f854()?(rlsc2_f853()?rlsc2_f1075():(1.0)):rlsc2_f846());}}
static double rlsc2_f838(){if (rlsc2_p838) return rlsc2_m838; else {rlsc2_p838=T;return rlsc2_m838=(((rlsc2_f851()*rlsc2_v6277)+(rlsc2_f845()*rlsc2_v6275))-rlsc2_f839());}}
static int rlsc2_f821(){if (rlsc2_p821) return rlsc2_m821; else {rlsc2_p821=T;return rlsc2_m821=(rlsc2_f838()>(0.0));}}
static double rlsc2_f877(){if (rlsc2_p877) return rlsc2_m877; else {rlsc2_p877=T;return rlsc2_m877=atan2((rlsc2_f881()-rlsc2_v6263),(rlsc2_f879()-rlsc2_v6265));}}
static double rlsc2_f834(){if (rlsc2_p834) return rlsc2_m834; else {rlsc2_p834=T;return rlsc2_m834=(rlsc2_f877()+(1.5707963267948966));}}
static double rlsc2_f826(){if (rlsc2_p826) return rlsc2_m826; else {rlsc2_p826=T;return rlsc2_m826=((rlsc2_v834=rlsc2_f834()),(((rlsc2_f851()*(rlsc2_f879()+cos(rlsc2_v834)))+(rlsc2_f845()*(rlsc2_f881()+sin(rlsc2_v834))))-rlsc2_f839()));}}
static double rlsc2_f875(){if (rlsc2_p875) return rlsc2_m875; else {rlsc2_p875=T;return rlsc2_m875=normalize_rotation((rlsc2_f877()-rlsc2_f3936()));}}
static int rlsc2_f303(){if (rlsc2_p303) return rlsc2_m303; else {rlsc2_p303=T;return rlsc2_m303=(rlsc2_f875()<rlsc2_f430());}}
static int rlsc2_f309(){if (rlsc2_p309) return rlsc2_m309; else {rlsc2_p309=T;return rlsc2_m309=(rlsc2_f875()<rlsc2_f439());}}
static int rlsc2_f304(){if (rlsc2_p304) return rlsc2_m304; else {rlsc2_p304=T;return rlsc2_m304=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f309()?T:rlsc2_f655()):rlsc2_f655()):NIL):NIL):NIL);}}
static double rlsc2_f184(){if (rlsc2_p184) return rlsc2_m184; else {rlsc2_p184=T;return rlsc2_m184=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f309()?rlsc2_f875():rlsc2_f439()):(rlsc2_f655()?((rlsc2_v875=rlsc2_f875()),(rlsc2_v694=rlsc2_f694()),((rlsc2_v875<rlsc2_v694)?rlsc2_v875:rlsc2_v694)):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static double rlsc2_f874(){if (rlsc2_p874) return rlsc2_m874; else {rlsc2_p874=T;return rlsc2_m874=normalize_rotation(rlsc2_f875());}}
static int rlsc2_f862(){if (rlsc2_p862) return rlsc2_m862; else {rlsc2_p862=T;return rlsc2_m862=((rlsc2_v874=rlsc2_f874()),((fabs((rlsc2_v874-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v874-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v874-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f814(){if (rlsc2_p814) return rlsc2_m814; else {rlsc2_p814=T;return rlsc2_m814=((rlsc2_v862=rlsc2_f862()),(rlsc2_v862?rlsc2_v862:(((fabs((rlsc2_v6265-rlsc2_f879()))<rlsc2_v6259)?(fabs((rlsc2_v6263-rlsc2_f881()))<rlsc2_v6259):NIL)?NIL:(((fabs((rlsc2_f838()-(0.0)))<rlsc2_v6259)?T:((rlsc2_v826=rlsc2_f826()),((fabs((rlsc2_v826-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v826>(0.0))?rlsc2_f821():(rlsc2_f821()?NIL:T)))))?NIL:T))));}}
static double rlsc2_f811(){if (rlsc2_p811) return rlsc2_m811; else {rlsc2_p811=T;return rlsc2_m811=(rlsc2_f814()?rlsc2_f875():rlsc2_f2392());}}
static double rlsc2_f813(){if (rlsc2_p813) return rlsc2_m813; else {rlsc2_p813=T;return rlsc2_m813=(rlsc2_f814()?rlsc2_f875():rlsc2_f2396());}}
static int rlsc2_f812(){if (rlsc2_p812) return rlsc2_m812; else {rlsc2_p812=T;return rlsc2_m812=(rlsc2_f813()>(0.0));}}
static int rlsc2_f806(){if (rlsc2_p806) return rlsc2_m806; else {rlsc2_p806=T;return rlsc2_m806=(rlsc2_f814()?((rlsc2_v812=rlsc2_f812()),(rlsc2_v812?rlsc2_v812:(fabs((rlsc2_f811()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f805(){if (rlsc2_p805) return rlsc2_m805; else {rlsc2_p805=T;return rlsc2_m805=(rlsc2_f806()?rlsc2_f814():NIL);}}
static double rlsc2_f802(){if (rlsc2_p802) return rlsc2_m802; else {rlsc2_p802=T;return rlsc2_m802=(rlsc2_f806()?rlsc2_f811():rlsc2_f2392());}}
static double rlsc2_f804(){if (rlsc2_p804) return rlsc2_m804; else {rlsc2_p804=T;return rlsc2_m804=(rlsc2_f806()?rlsc2_f813():rlsc2_f2396());}}
static int rlsc2_f803(){if (rlsc2_p803) return rlsc2_m803; else {rlsc2_p803=T;return rlsc2_m803=(rlsc2_f804()>(0.0));}}
static int rlsc2_f797(){if (rlsc2_p797) return rlsc2_m797; else {rlsc2_p797=T;return rlsc2_m797=(rlsc2_f805()?((rlsc2_v803=rlsc2_f803()),(rlsc2_v803?rlsc2_v803:(fabs((rlsc2_f802()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f975(){if (rlsc2_p975) return rlsc2_m975; else {rlsc2_p975=T;return rlsc2_m975=(rlsc2_v6265+(rlsc2_f979()-rlsc2_f977()));}}
static double rlsc2_f932(){if (rlsc2_p932) return rlsc2_m932; else {rlsc2_p932=T;return rlsc2_m932=atan2((rlsc2_f971()-rlsc2_v6263),(rlsc2_f975()-rlsc2_v6265));}}
static double rlsc2_f909(){if (rlsc2_p909) return rlsc2_m909; else {rlsc2_p909=T;return rlsc2_m909=(rlsc2_f932()+(1.5707963267948966));}}
static double rlsc2_f930(){if (rlsc2_p930) return rlsc2_m930; else {rlsc2_p930=T;return rlsc2_m930=normalize_rotation((rlsc2_f932()-rlsc2_f3936()));}}
static int rlsc2_f320(){if (rlsc2_p320) return rlsc2_m320; else {rlsc2_p320=T;return rlsc2_m320=(rlsc2_f930()<rlsc2_f430());}}
static int rlsc2_f326(){if (rlsc2_p326) return rlsc2_m326; else {rlsc2_p326=T;return rlsc2_m326=(rlsc2_f930()<rlsc2_f439());}}
static int rlsc2_f321(){if (rlsc2_p321) return rlsc2_m321; else {rlsc2_p321=T;return rlsc2_m321=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f326()?T:rlsc2_f655()):rlsc2_f655()):NIL):NIL):NIL);}}
static double rlsc2_f209(){if (rlsc2_p209) return rlsc2_m209; else {rlsc2_p209=T;return rlsc2_m209=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f326()?rlsc2_f930():rlsc2_f439()):(rlsc2_f655()?((rlsc2_v930=rlsc2_f930()),(rlsc2_v694=rlsc2_f694()),((rlsc2_v930<rlsc2_v694)?rlsc2_v930:rlsc2_v694)):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static double rlsc2_f929(){if (rlsc2_p929) return rlsc2_m929; else {rlsc2_p929=T;return rlsc2_m929=normalize_rotation(rlsc2_f930());}}
static int rlsc2_f917(){if (rlsc2_p917) return rlsc2_m917; else {rlsc2_p917=T;return rlsc2_m917=((rlsc2_v929=rlsc2_f929()),((fabs((rlsc2_v929-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v929-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v929-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f974(){if (rlsc2_p974) return rlsc2_m974; else {rlsc2_p974=T;return rlsc2_m974=(rlsc2_v6273==rlsc2_f975());}}
static double rlsc2_f968(){if (rlsc2_p968) return rlsc2_m968; else {rlsc2_p968=T;return rlsc2_m968=(rlsc2_f974()?(rlsc2_f970()?rlsc2_f1075():(0.0)):(1.0));}}
static double rlsc2_f963(){if (rlsc2_p963) return rlsc2_m963; else {rlsc2_p963=T;return rlsc2_m963=((rlsc2_f971()-rlsc2_v6271)/(rlsc2_f975()-rlsc2_v6273));}}
static double rlsc2_f956(){if (rlsc2_p956) return rlsc2_m956; else {rlsc2_p956=T;return rlsc2_m956=(rlsc2_f974()?(rlsc2_f970()?rlsc2_f1075():rlsc2_f971()):(rlsc2_f975()+(rlsc2_f963()*rlsc2_f971())));}}
static double rlsc2_f962(){if (rlsc2_p962) return rlsc2_m962; else {rlsc2_p962=T;return rlsc2_m962=(rlsc2_f974()?(rlsc2_f970()?rlsc2_f1075():(1.0)):rlsc2_f963());}}
static double rlsc2_f901(){if (rlsc2_p901) return rlsc2_m901; else {rlsc2_p901=T;return rlsc2_m901=((rlsc2_v909=rlsc2_f909()),(((rlsc2_f968()*(rlsc2_f975()+cos(rlsc2_v909)))+(rlsc2_f962()*(rlsc2_f971()+sin(rlsc2_v909))))-rlsc2_f956()));}}
static double rlsc2_f948(){if (rlsc2_p948) return rlsc2_m948; else {rlsc2_p948=T;return rlsc2_m948=(((rlsc2_f968()*rlsc2_v6273)+(rlsc2_f962()*rlsc2_v6271))-rlsc2_f956());}}
static double rlsc2_f955(){if (rlsc2_p955) return rlsc2_m955; else {rlsc2_p955=T;return rlsc2_m955=(((rlsc2_f968()*rlsc2_v6277)+(rlsc2_f962()*rlsc2_v6275))-rlsc2_f956());}}
static int rlsc2_f952(){if (rlsc2_p952) return rlsc2_m952; else {rlsc2_p952=T;return rlsc2_m952=(fabs((rlsc2_f955()-(0.0)))<rlsc2_v6259);}}
static int rlsc2_f943(){if (rlsc2_p943) return rlsc2_m943; else {rlsc2_p943=T;return rlsc2_m943=(rlsc2_f955()>(0.0));}}
static int rlsc2_f942(){if (rlsc2_p942) return rlsc2_m942; else {rlsc2_p942=T;return rlsc2_m942=(rlsc2_f943()?NIL:T);}}
static int rlsc2_f891(){if (rlsc2_p891) return rlsc2_m891; else {rlsc2_p891=T;return rlsc2_m891=((rlsc2_v917=rlsc2_f917()),(rlsc2_v917?rlsc2_v917:(((fabs((rlsc2_v6265-rlsc2_f975()))<rlsc2_v6259)?(fabs((rlsc2_v6263-rlsc2_f971()))<rlsc2_v6259):NIL)?NIL:((rlsc2_f952()?T:((rlsc2_v901=rlsc2_f901()),((fabs((rlsc2_v901-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v901>(0.0))?rlsc2_f943():rlsc2_f942()))))?NIL:T))));}}
static double rlsc2_f769(){if (rlsc2_p769) return rlsc2_m769; else {rlsc2_p769=T;return rlsc2_m769=(rlsc2_f891()?(rlsc2_f806()?(rlsc2_f814()?((rlsc2_v930=rlsc2_f930()),(rlsc2_v875=rlsc2_f875()),((rlsc2_v930<rlsc2_v875)?rlsc2_v930:rlsc2_v875)):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static int rlsc2_f342(){if (rlsc2_p342) return rlsc2_m342; else {rlsc2_p342=T;return rlsc2_m342=(rlsc2_f769()<rlsc2_f430());}}
static int rlsc2_f340(){if (rlsc2_p340) return rlsc2_m340; else {rlsc2_p340=T;return rlsc2_m340=(rlsc2_f769()<rlsc2_f589());}}
static int rlsc2_f336(){if (rlsc2_p336) return rlsc2_m336; else {rlsc2_p336=T;return rlsc2_m336=(rlsc2_f769()<rlsc2_f534());}}
static int rlsc2_f351(){if (rlsc2_p351) return rlsc2_m351; else {rlsc2_p351=T;return rlsc2_m351=(rlsc2_f769()<rlsc2_f439());}}
static int rlsc2_f349(){if (rlsc2_p349) return rlsc2_m349; else {rlsc2_p349=T;return rlsc2_m349=(rlsc2_f769()<rlsc2_f694());}}
static double rlsc2_f230(){if (rlsc2_p230) return rlsc2_m230; else {rlsc2_p230=T;return rlsc2_m230=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f351()?rlsc2_f769():rlsc2_f439()):(rlsc2_f655()?(rlsc2_f349()?rlsc2_f769():rlsc2_f694()):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static int rlsc2_f796(){if (rlsc2_p796) return rlsc2_m796; else {rlsc2_p796=T;return rlsc2_m796=(rlsc2_f891()?rlsc2_f805():NIL);}}
static int rlsc2_f343(){if (rlsc2_p343) return rlsc2_m343; else {rlsc2_p343=T;return rlsc2_m343=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f351()?rlsc2_f796():rlsc2_f655()):(rlsc2_f655()?(rlsc2_f349()?rlsc2_f796():T):NIL)):NIL):NIL):NIL);}}
static double rlsc2_f888(){if (rlsc2_p888) return rlsc2_m888; else {rlsc2_p888=T;return rlsc2_m888=(rlsc2_f891()?rlsc2_f930():rlsc2_f2392());}}
static double rlsc2_f890(){if (rlsc2_p890) return rlsc2_m890; else {rlsc2_p890=T;return rlsc2_m890=(rlsc2_f891()?rlsc2_f930():rlsc2_f2396());}}
static int rlsc2_f889(){if (rlsc2_p889) return rlsc2_m889; else {rlsc2_p889=T;return rlsc2_m889=(rlsc2_f890()>(0.0));}}
static int rlsc2_f883(){if (rlsc2_p883) return rlsc2_m883; else {rlsc2_p883=T;return rlsc2_m883=(rlsc2_f891()?((rlsc2_v889=rlsc2_f889()),(rlsc2_v889?rlsc2_v889:(fabs((rlsc2_f888()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f939(){if (rlsc2_p939) return rlsc2_m939; else {rlsc2_p939=T;return rlsc2_m939=(rlsc2_f952()?NIL:((rlsc2_v948=rlsc2_f948()),((fabs((rlsc2_v948-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v948>(0.0))?rlsc2_f943():rlsc2_f942()))));}}
static double rlsc2_f4028(){if (rlsc2_p4028) return rlsc2_m4028; else {rlsc2_p4028=T;return rlsc2_m4028=(rlsc2_f4050()/rlsc2_f6220());}}
static double rlsc2_f4044(){if (rlsc2_p4044) return rlsc2_m4044; else {rlsc2_p4044=T;return rlsc2_m4044=(rlsc2_f4050()+rlsc2_f6247());}}
static int rlsc2_f4042(){if (rlsc2_p4042) return rlsc2_m4042; else {rlsc2_p4042=T;return rlsc2_m4042=((rlsc2_v4044=rlsc2_f4044()),(rlsc2_f4055()>(rlsc2_v4044*rlsc2_v4044)));}}
static int rlsc2_f4034(){if (rlsc2_p4034) return rlsc2_m4034; else {rlsc2_p4034=T;return rlsc2_m4034=(rlsc2_f6220()>rlsc2_f4044());}}
static int rlsc2_f3987(){if (rlsc2_p3987) return rlsc2_m3987; else {rlsc2_p3987=T;return rlsc2_m3987=(rlsc2_f4017()>rlsc2_f4044());}}
static int rlsc2_f3985(){if (rlsc2_p3985) return rlsc2_m3985; else {rlsc2_p3985=T;return rlsc2_m3985=((rlsc2_v3987=rlsc2_f3987()),(rlsc2_v3987?rlsc2_v3987:(rlsc2_f4050()>rlsc2_f6247())));}}
static double rlsc2_f4041(){if (rlsc2_p4041) return rlsc2_m4041; else {rlsc2_p4041=T;return rlsc2_m4041=(rlsc2_f6220()-rlsc2_f4044());}}
static int rlsc2_f4039(){if (rlsc2_p4039) return rlsc2_m4039; else {rlsc2_p4039=T;return rlsc2_m4039=(fabs(rlsc2_f4041())<rlsc2_v6259);}}
static int rlsc2_f4035(){if (rlsc2_p4035) return rlsc2_m4035; else {rlsc2_p4035=T;return rlsc2_m4035=((rlsc2_v4039=rlsc2_f4039()),(rlsc2_v4039?rlsc2_v4039:(fabs((rlsc2_f6220()-fabs((rlsc2_f4050()-rlsc2_f6247()))))<rlsc2_v6259)));}}
static int rlsc2_f935(){if (rlsc2_p935) return rlsc2_m935; else {rlsc2_p935=T;return rlsc2_m935=((rlsc2_v4035=rlsc2_f4035()),(rlsc2_v4035?(rlsc2_f3985()?rlsc2_f939():(rlsc2_f939()?NIL:T)):(rlsc2_v4035?NIL:T)));}}
static double rlsc2_f1083(){if (rlsc2_p1083) return rlsc2_m1083; else {rlsc2_p1083=T;return rlsc2_m1083=((rlsc2_v4034=rlsc2_f4034()),((rlsc2_v4034?rlsc2_v4034:rlsc2_f4039())?((rlsc2_f4050()+((0.5)*rlsc2_f4041()))/rlsc2_f6220()):((rlsc2_f4050()<rlsc2_f6247())?(-rlsc2_f4028()):(rlsc2_f4028()+(1.0)))));}}
static double rlsc2_f1078(){if (rlsc2_p1078) return rlsc2_m1078; else {rlsc2_p1078=T;return rlsc2_m1078=(rlsc2_v6263+(rlsc2_f1083()*rlsc2_f5625()));}}
static int rlsc2_f1077(){if (rlsc2_p1077) return rlsc2_m1077; else {rlsc2_p1077=T;return rlsc2_m1077=(rlsc2_v6271==rlsc2_f1078());}}
static double rlsc2_f1081(){if (rlsc2_p1081) return rlsc2_m1081; else {rlsc2_p1081=T;return rlsc2_m1081=(rlsc2_v6265+(rlsc2_f1083()*rlsc2_f5624()));}}
static double rlsc2_f1039(){if (rlsc2_p1039) return rlsc2_m1039; else {rlsc2_p1039=T;return rlsc2_m1039=atan2((rlsc2_f1078()-rlsc2_v6263),(rlsc2_f1081()-rlsc2_v6265));}}
static double rlsc2_f1016(){if (rlsc2_p1016) return rlsc2_m1016; else {rlsc2_p1016=T;return rlsc2_m1016=(rlsc2_f1039()+(1.5707963267948966));}}
static double rlsc2_f1037(){if (rlsc2_p1037) return rlsc2_m1037; else {rlsc2_p1037=T;return rlsc2_m1037=normalize_rotation((rlsc2_f1039()-rlsc2_f3936()));}}
static int rlsc2_f365(){if (rlsc2_p365) return rlsc2_m365; else {rlsc2_p365=T;return rlsc2_m365=(rlsc2_f1037()<rlsc2_f430());}}
static int rlsc2_f371(){if (rlsc2_p371) return rlsc2_m371; else {rlsc2_p371=T;return rlsc2_m371=(rlsc2_f1037()<rlsc2_f439());}}
static int rlsc2_f366(){if (rlsc2_p366) return rlsc2_m366; else {rlsc2_p366=T;return rlsc2_m366=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f371()?T:rlsc2_f655()):rlsc2_f655()):NIL):NIL):NIL);}}
static double rlsc2_f257(){if (rlsc2_p257) return rlsc2_m257; else {rlsc2_p257=T;return rlsc2_m257=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f371()?rlsc2_f1037():rlsc2_f439()):(rlsc2_f655()?((rlsc2_v1037=rlsc2_f1037()),(rlsc2_v694=rlsc2_f694()),((rlsc2_v1037<rlsc2_v694)?rlsc2_v1037:rlsc2_v694)):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static double rlsc2_f1036(){if (rlsc2_p1036) return rlsc2_m1036; else {rlsc2_p1036=T;return rlsc2_m1036=normalize_rotation(rlsc2_f1037());}}
static int rlsc2_f1024(){if (rlsc2_p1024) return rlsc2_m1024; else {rlsc2_p1024=T;return rlsc2_m1024=((rlsc2_v1036=rlsc2_f1036()),((fabs((rlsc2_v1036-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1036-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1036-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f1080(){if (rlsc2_p1080) return rlsc2_m1080; else {rlsc2_p1080=T;return rlsc2_m1080=(rlsc2_v6273==rlsc2_f1081());}}
static double rlsc2_f1073(){if (rlsc2_p1073) return rlsc2_m1073; else {rlsc2_p1073=T;return rlsc2_m1073=(rlsc2_f1080()?(rlsc2_f1077()?rlsc2_f1075():(0.0)):(1.0));}}
static double rlsc2_f1068(){if (rlsc2_p1068) return rlsc2_m1068; else {rlsc2_p1068=T;return rlsc2_m1068=((rlsc2_f1078()-rlsc2_v6271)/(rlsc2_f1081()-rlsc2_v6273));}}
static double rlsc2_f1061(){if (rlsc2_p1061) return rlsc2_m1061; else {rlsc2_p1061=T;return rlsc2_m1061=(rlsc2_f1080()?(rlsc2_f1077()?rlsc2_f1075():rlsc2_f1078()):(rlsc2_f1081()+(rlsc2_f1068()*rlsc2_f1078())));}}
static double rlsc2_f1067(){if (rlsc2_p1067) return rlsc2_m1067; else {rlsc2_p1067=T;return rlsc2_m1067=(rlsc2_f1080()?(rlsc2_f1077()?rlsc2_f1075():(1.0)):rlsc2_f1068());}}
static double rlsc2_f1008(){if (rlsc2_p1008) return rlsc2_m1008; else {rlsc2_p1008=T;return rlsc2_m1008=((rlsc2_v1016=rlsc2_f1016()),(((rlsc2_f1073()*(rlsc2_f1081()+cos(rlsc2_v1016)))+(rlsc2_f1067()*(rlsc2_f1078()+sin(rlsc2_v1016))))-rlsc2_f1061()));}}
static double rlsc2_f1053(){if (rlsc2_p1053) return rlsc2_m1053; else {rlsc2_p1053=T;return rlsc2_m1053=(((rlsc2_f1073()*rlsc2_v6273)+(rlsc2_f1067()*rlsc2_v6271))-rlsc2_f1061());}}
static double rlsc2_f1060(){if (rlsc2_p1060) return rlsc2_m1060; else {rlsc2_p1060=T;return rlsc2_m1060=(((rlsc2_f1073()*rlsc2_v6277)+(rlsc2_f1067()*rlsc2_v6275))-rlsc2_f1061());}}
static int rlsc2_f1057(){if (rlsc2_p1057) return rlsc2_m1057; else {rlsc2_p1057=T;return rlsc2_m1057=(fabs((rlsc2_f1060()-(0.0)))<rlsc2_v6259);}}
static int rlsc2_f1048(){if (rlsc2_p1048) return rlsc2_m1048; else {rlsc2_p1048=T;return rlsc2_m1048=(rlsc2_f1060()>(0.0));}}
static int rlsc2_f1047(){if (rlsc2_p1047) return rlsc2_m1047; else {rlsc2_p1047=T;return rlsc2_m1047=(rlsc2_f1048()?NIL:T);}}
static int rlsc2_f998(){if (rlsc2_p998) return rlsc2_m998; else {rlsc2_p998=T;return rlsc2_m998=((rlsc2_v1024=rlsc2_f1024()),(rlsc2_v1024?rlsc2_v1024:(((fabs((rlsc2_v6265-rlsc2_f1081()))<rlsc2_v6259)?(fabs((rlsc2_v6263-rlsc2_f1078()))<rlsc2_v6259):NIL)?NIL:((rlsc2_f1057()?T:((rlsc2_v1008=rlsc2_f1008()),((fabs((rlsc2_v1008-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v1008>(0.0))?rlsc2_f1048():rlsc2_f1047()))))?NIL:T))));}}
static double_or_symbol rlsc2_f35(){if (rlsc2_p35) return rlsc2_m35; else {rlsc2_p35=T;return rlsc2_m35=(rlsc2_f998()?coerce_double_to_double_or_symbol(rlsc2_f1037()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsc2_f778(){if (rlsc2_p778) return rlsc2_m778; else {rlsc2_p778=T;return rlsc2_m778=(rlsc2_f998()?rlsc2_f1037():rlsc2_f779());}}
static int rlsc2_f387(){if (rlsc2_p387) return rlsc2_m387; else {rlsc2_p387=T;return rlsc2_m387=(rlsc2_f778()<rlsc2_f430());}}
static int rlsc2_f385(){if (rlsc2_p385) return rlsc2_m385; else {rlsc2_p385=T;return rlsc2_m385=(rlsc2_f778()<rlsc2_f589());}}
static int rlsc2_f381(){if (rlsc2_p381) return rlsc2_m381; else {rlsc2_p381=T;return rlsc2_m381=(rlsc2_f778()<rlsc2_f534());}}
static int rlsc2_f396(){if (rlsc2_p396) return rlsc2_m396; else {rlsc2_p396=T;return rlsc2_m396=(rlsc2_f778()<rlsc2_f439());}}
static int rlsc2_f394(){if (rlsc2_p394) return rlsc2_m394; else {rlsc2_p394=T;return rlsc2_m394=(rlsc2_f778()<rlsc2_f694());}}
static int rlsc2_f388(){if (rlsc2_p388) return rlsc2_m388; else {rlsc2_p388=T;return rlsc2_m388=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f396()?rlsc2_f998():rlsc2_f655()):(rlsc2_f655()?(rlsc2_f394()?rlsc2_f998():T):NIL)):NIL):NIL):NIL);}}
static double rlsc2_f278(){if (rlsc2_p278) return rlsc2_m278; else {rlsc2_p278=T;return rlsc2_m278=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?(rlsc2_f396()?rlsc2_f778():rlsc2_f439()):(rlsc2_f655()?(rlsc2_f394()?rlsc2_f778():rlsc2_f694()):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static double rlsc2_f995(){if (rlsc2_p995) return rlsc2_m995; else {rlsc2_p995=T;return rlsc2_m995=(rlsc2_f998()?rlsc2_f1037():rlsc2_f2392());}}
static double rlsc2_f997(){if (rlsc2_p997) return rlsc2_m997; else {rlsc2_p997=T;return rlsc2_m997=(rlsc2_f998()?rlsc2_f1037():rlsc2_f2396());}}
static int rlsc2_f996(){if (rlsc2_p996) return rlsc2_m996; else {rlsc2_p996=T;return rlsc2_m996=(rlsc2_f997()>(0.0));}}
static int rlsc2_f990(){if (rlsc2_p990) return rlsc2_m990; else {rlsc2_p990=T;return rlsc2_m990=(rlsc2_f998()?((rlsc2_v996=rlsc2_f996()),(rlsc2_v996?rlsc2_v996:(fabs((rlsc2_f995()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f786(){if (rlsc2_p786) return rlsc2_m786; else {rlsc2_p786=T;return rlsc2_m786=(rlsc2_f990()?rlsc2_f995():rlsc2_f2392());}}
static double rlsc2_f788(){if (rlsc2_p788) return rlsc2_m788; else {rlsc2_p788=T;return rlsc2_m788=(rlsc2_f990()?rlsc2_f997():rlsc2_f2396());}}
static int rlsc2_f787(){if (rlsc2_p787) return rlsc2_m787; else {rlsc2_p787=T;return rlsc2_m787=(rlsc2_f788()>(0.0));}}
static int rlsc2_f989(){if (rlsc2_p989) return rlsc2_m989; else {rlsc2_p989=T;return rlsc2_m989=(rlsc2_f990()?rlsc2_f998():NIL);}}
static int rlsc2_f781(){if (rlsc2_p781) return rlsc2_m781; else {rlsc2_p781=T;return rlsc2_m781=(rlsc2_f989()?((rlsc2_v787=rlsc2_f787()),(rlsc2_v787?rlsc2_v787:(fabs((rlsc2_f786()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f1044(){if (rlsc2_p1044) return rlsc2_m1044; else {rlsc2_p1044=T;return rlsc2_m1044=(rlsc2_f1057()?NIL:((rlsc2_v1053=rlsc2_f1053()),((fabs((rlsc2_v1053-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v1053>(0.0))?rlsc2_f1048():rlsc2_f1047()))));}}
static int rlsc2_f1042(){if (rlsc2_p1042) return rlsc2_m1042; else {rlsc2_p1042=T;return rlsc2_m1042=(rlsc2_f3985()?rlsc2_f1044():(rlsc2_f1044()?NIL:T));}}
static double rlsc2_f85(){if (rlsc2_p85) return rlsc2_m85; else {rlsc2_p85=T;return rlsc2_m85=(rlsc2_f4035()?(rlsc2_f1042()?(rlsc2_f990()?(rlsc2_f781()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v778=rlsc2_f778()),((rlsc2_v1101<rlsc2_v778)?rlsc2_v1101:rlsc2_v778)):(rlsc2_f998()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v1037=rlsc2_f1037()),((rlsc2_v1101<rlsc2_v1037)?rlsc2_v1101:rlsc2_v1037)):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static int rlsc2_f352(){if (rlsc2_p352) return rlsc2_m352; else {rlsc2_p352=T;return rlsc2_m352=(rlsc2_f4035()?(rlsc2_f1042()?(rlsc2_f990()?(rlsc2_f781()?(rlsc2_f406()?(rlsc2_f744()?NIL:(rlsc2_f3634()?rlsc2_f388():(rlsc2_f639()?rlsc2_f388():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f387()?rlsc2_f998():rlsc2_f455()):(rlsc2_f550()?(rlsc2_f385()?rlsc2_f998():T):NIL)):(rlsc2_f465()?(rlsc2_f473()?(rlsc2_f381()?rlsc2_f998():T):NIL):NIL)):NIL)))):NIL):(rlsc2_f998()?(rlsc2_f406()?(rlsc2_f744()?NIL:(rlsc2_f3634()?rlsc2_f366():(rlsc2_f639()?rlsc2_f366():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f365()?T:rlsc2_f455()):rlsc2_f550()):rlsc2_f464()):NIL)))):NIL):NIL)):NIL):NIL):NIL);}}
static double rlsc2_f237(){if (rlsc2_p237) return rlsc2_m237; else {rlsc2_p237=T;return rlsc2_m237=(rlsc2_f4035()?(rlsc2_f1042()?(rlsc2_f990()?(rlsc2_f781()?(rlsc2_f406()?(rlsc2_f744()?rlsc2_f779():(rlsc2_f3634()?rlsc2_f278():(rlsc2_f639()?rlsc2_f278():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f387()?rlsc2_f778():rlsc2_f430()):(rlsc2_f550()?(rlsc2_f385()?rlsc2_f778():rlsc2_f589()):rlsc2_f779())):(rlsc2_f465()?(rlsc2_f473()?(rlsc2_f381()?rlsc2_f778():rlsc2_f534()):rlsc2_f779()):rlsc2_f779())):rlsc2_f779())))):rlsc2_f779()):(rlsc2_f998()?(rlsc2_f406()?(rlsc2_f744()?rlsc2_f779():(rlsc2_f3634()?rlsc2_f257():(rlsc2_f639()?rlsc2_f257():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f365()?rlsc2_f1037():rlsc2_f430()):(rlsc2_f550()?((rlsc2_v1037=rlsc2_f1037()),(rlsc2_v589=rlsc2_f589()),((rlsc2_v1037<rlsc2_v589)?rlsc2_v1037:rlsc2_v589)):rlsc2_f779())):(rlsc2_f465()?(rlsc2_f473()?((rlsc2_v1037=rlsc2_f1037()),(rlsc2_v534=rlsc2_f534()),((rlsc2_v1037<rlsc2_v534)?rlsc2_v1037:rlsc2_v534)):rlsc2_f779()):rlsc2_f779())):rlsc2_f779())))):rlsc2_f779()):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static double rlsc2_f161(){if (rlsc2_p161) return rlsc2_m161; else {rlsc2_p161=T;return rlsc2_m161=(rlsc2_f1090()?rlsc2_f779():(rlsc2_f4054()?rlsc2_f779():(rlsc2_f4042()?rlsc2_f237():(rlsc2_f980()?rlsc2_f237():(rlsc2_f935()?(rlsc2_f883()?(rlsc2_f797()?(rlsc2_f406()?(rlsc2_f744()?rlsc2_f779():(rlsc2_f3634()?rlsc2_f230():(rlsc2_f639()?rlsc2_f230():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f342()?rlsc2_f769():rlsc2_f430()):(rlsc2_f550()?(rlsc2_f340()?rlsc2_f769():rlsc2_f589()):rlsc2_f779())):(rlsc2_f465()?(rlsc2_f473()?(rlsc2_f336()?rlsc2_f769():rlsc2_f534()):rlsc2_f779()):rlsc2_f779())):rlsc2_f779())))):rlsc2_f779()):(rlsc2_f891()?(rlsc2_f406()?(rlsc2_f744()?rlsc2_f779():(rlsc2_f3634()?rlsc2_f209():(rlsc2_f639()?rlsc2_f209():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f320()?rlsc2_f930():rlsc2_f430()):(rlsc2_f550()?((rlsc2_v930=rlsc2_f930()),(rlsc2_v589=rlsc2_f589()),((rlsc2_v930<rlsc2_v589)?rlsc2_v930:rlsc2_v589)):rlsc2_f779())):(rlsc2_f465()?(rlsc2_f473()?((rlsc2_v930=rlsc2_f930()),(rlsc2_v534=rlsc2_f534()),((rlsc2_v930<rlsc2_v534)?rlsc2_v930:rlsc2_v534)):rlsc2_f779()):rlsc2_f779())):rlsc2_f779())))):rlsc2_f779()):rlsc2_f779())):(rlsc2_f806()?(rlsc2_f814()?(rlsc2_f406()?(rlsc2_f744()?rlsc2_f779():(rlsc2_f3634()?rlsc2_f184():(rlsc2_f639()?rlsc2_f184():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f303()?rlsc2_f875():rlsc2_f430()):(rlsc2_f550()?((rlsc2_v875=rlsc2_f875()),(rlsc2_v589=rlsc2_f589()),((rlsc2_v875<rlsc2_v589)?rlsc2_v875:rlsc2_v589)):rlsc2_f779())):(rlsc2_f465()?(rlsc2_f473()?((rlsc2_v875=rlsc2_f875()),(rlsc2_v534=rlsc2_f534()),((rlsc2_v875<rlsc2_v534)?rlsc2_v875:rlsc2_v534)):rlsc2_f779()):rlsc2_f779())):rlsc2_f779())))):rlsc2_f779()):rlsc2_f779()):rlsc2_f779())):rlsc2_f779())))));}}
static double_or_symbol rlsc2_f30(){if (rlsc2_p30) return rlsc2_m30; else {rlsc2_p30=T;return rlsc2_m30=(rlsc2_f4035()?(rlsc2_f1042()?((rlsc2_v990=rlsc2_f990()),(rlsc2_v990?(rlsc2_f781()?coerce_double_to_double_or_symbol(rlsc2_f778()):rlsc2_f35()):(rlsc2_v990?rlsc2_f35():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsc2_f757(){if (rlsc2_p757) return rlsc2_m757; else {rlsc2_p757=T;return rlsc2_m757=(rlsc2_f4035()?(rlsc2_f1042()?(rlsc2_f990()?(rlsc2_f781()?rlsc2_f778():rlsc2_f995()):rlsc2_f786()):rlsc2_f2392()):rlsc2_f2392());}}
static double rlsc2_f750(){if (rlsc2_p750) return rlsc2_m750; else {rlsc2_p750=T;return rlsc2_m750=(rlsc2_f1090()?rlsc2_f2392():(rlsc2_f4054()?rlsc2_f2392():(rlsc2_f4042()?rlsc2_f757():(rlsc2_f980()?rlsc2_f757():(rlsc2_f935()?(rlsc2_f883()?(rlsc2_f797()?rlsc2_f769():rlsc2_f888()):rlsc2_f802()):rlsc2_f2392())))));}}
static double rlsc2_f774(){if (rlsc2_p774) return rlsc2_m774; else {rlsc2_p774=T;return rlsc2_m774=(rlsc2_f4035()?(rlsc2_f1042()?(rlsc2_f990()?(rlsc2_f781()?rlsc2_f778():rlsc2_f997()):rlsc2_f788()):rlsc2_f2396()):rlsc2_f2396());}}
static double rlsc2_f762(){if (rlsc2_p762) return rlsc2_m762; else {rlsc2_p762=T;return rlsc2_m762=(rlsc2_f1090()?rlsc2_f2396():(rlsc2_f4054()?rlsc2_f2396():(rlsc2_f4042()?rlsc2_f774():(rlsc2_f980()?rlsc2_f774():(rlsc2_f935()?(rlsc2_f883()?(rlsc2_f797()?rlsc2_f769():rlsc2_f890()):rlsc2_f804()):rlsc2_f2396())))));}}
static int rlsc2_f761(){if (rlsc2_p761) return rlsc2_m761; else {rlsc2_p761=T;return rlsc2_m761=(rlsc2_f762()>(0.0));}}
static int rlsc2_f986(){if (rlsc2_p986) return rlsc2_m986; else {rlsc2_p986=T;return rlsc2_m986=(rlsc2_f4035()?(rlsc2_f1042()?(rlsc2_f990()?rlsc2_f998():rlsc2_f989()):NIL):NIL);}}
static int rlsc2_f789(){if (rlsc2_p789) return rlsc2_m789; else {rlsc2_p789=T;return rlsc2_m789=(rlsc2_f1090()?NIL:(rlsc2_f4054()?NIL:(rlsc2_f4042()?rlsc2_f986():(rlsc2_f980()?rlsc2_f986():(rlsc2_f935()?(rlsc2_f883()?(rlsc2_f797()?rlsc2_f796():rlsc2_f891()):rlsc2_f805()):NIL)))));}}
static int rlsc2_f745(){if (rlsc2_p745) return rlsc2_m745; else {rlsc2_p745=T;return rlsc2_m745=(rlsc2_f789()?((rlsc2_v761=rlsc2_f761()),(rlsc2_v761?rlsc2_v761:(fabs((rlsc2_f750()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f158(){if (rlsc2_p158) return rlsc2_m158; else {rlsc2_p158=T;return rlsc2_m158=((rlsc2_f745()?(rlsc2_f397()?rlsc2_f161():rlsc2_f762()):rlsc2_f404())>(0.0));}}
static double rlsc2_f5873(){if (rlsc2_p5873) return rlsc2_m5873; else {rlsc2_p5873=T;return rlsc2_m5873=((rlsc2_v5878=rlsc2_f5878()),sqrt(((rlsc2_v5878*rlsc2_v5878)+rlsc2_f5875())));}}
static int rlsc2_f2051(){if (rlsc2_p2051) return rlsc2_m2051; else {rlsc2_p2051=T;return rlsc2_m2051=(fabs((((fabs((rlsc2_f2079()-(0.0)))<rlsc2_v6259)?rlsc2_f2759():((rlsc2_v2064=rlsc2_f2064()),(rlsc2_v2058=rlsc2_f2058()),sqrt(((rlsc2_v2064*rlsc2_v2064)+(rlsc2_v2058*rlsc2_v2058)))))-rlsc2_f5873()))<rlsc2_v6259);}}
static double rlsc2_f1604(){if (rlsc2_p1604) return rlsc2_m1604; else {rlsc2_p1604=T;return rlsc2_m1604=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?((rlsc2_v2163=rlsc2_f2163()),(rlsc2_v1721=rlsc2_f1721()),((rlsc2_v2163>rlsc2_v1721)?rlsc2_v2163:rlsc2_v1721)):(rlsc2_f1950()?((rlsc2_v2163=rlsc2_f2163()),(rlsc2_v1964=rlsc2_f1964()),((rlsc2_v2163>rlsc2_v1964)?rlsc2_v2163:rlsc2_v1964)):rlsc2_f2164())):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1559(){if (rlsc2_p1559) return rlsc2_m1559; else {rlsc2_p1559=T;return rlsc2_m1559=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?((rlsc2_v2642=rlsc2_f2642()),(rlsc2_v1721=rlsc2_f1721()),((rlsc2_v2642>rlsc2_v1721)?rlsc2_v2642:rlsc2_v1721)):(rlsc2_f1950()?((rlsc2_v2642=rlsc2_f2642()),(rlsc2_v1964=rlsc2_f1964()),((rlsc2_v2642>rlsc2_v1964)?rlsc2_v2642:rlsc2_v1964)):rlsc2_f2164())):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1189(){if (rlsc2_p1189) return rlsc2_m1189; else {rlsc2_p1189=T;return rlsc2_m1189=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?((rlsc2_v1942=rlsc2_f1942()),(rlsc2_v1942?(rlsc2_f1722()?rlsc2_f1721():rlsc2_f1195()):(rlsc2_v1942?rlsc2_f1195():rlsc2_f1614()))):rlsc2_f1614()):rlsc2_f1614()):rlsc2_f1614());}}
static int rlsc2_f1128(){if (rlsc2_p1128) return rlsc2_m1128; else {rlsc2_p1128=T;return rlsc2_m1128=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?NIL:(rlsc2_f1950()?NIL:T)):T):T):T):T);}}
static double rlsc2_f1684(){if (rlsc2_p1684) return rlsc2_m1684; else {rlsc2_p1684=T;return rlsc2_m1684=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?rlsc2_f1721():rlsc2_f1947()):rlsc2_f1727()):rlsc2_f2392()):rlsc2_f2392()):rlsc2_f2392());}}
static double rlsc2_f1716(){if (rlsc2_p1716) return rlsc2_m1716; else {rlsc2_p1716=T;return rlsc2_m1716=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?rlsc2_f1721():rlsc2_f1949()):rlsc2_f1729()):rlsc2_f2396()):rlsc2_f2396()):rlsc2_f2396());}}
static int rlsc2_f1937(){if (rlsc2_p1937) return rlsc2_m1937; else {rlsc2_p1937=T;return rlsc2_m1937=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?rlsc2_f1950():rlsc2_f1941()):NIL):NIL):NIL);}}
static int rlsc2_f2029(){if (rlsc2_p2029) return rlsc2_m2029; else {rlsc2_p2029=T;return rlsc2_m2029=((rlsc2_v2051=rlsc2_f2051()),(rlsc2_v2051?((fabs((rlsc2_f2047()-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v2040=rlsc2_f2040()),((fabs((rlsc2_v2040-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v2040>(0.0))?rlsc2_f2035():(rlsc2_f2035()?NIL:T))))):(rlsc2_v2051?NIL:T)));}}
static int rlsc2_f1631(){if (rlsc2_p1631) return rlsc2_m1631; else {rlsc2_p1631=T;return rlsc2_m1631=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?T:rlsc2_f1950()):NIL):NIL):NIL):NIL);}}
static double rlsc2_f5840(){if (rlsc2_p5840) return rlsc2_m5840; else {rlsc2_p5840=T;return rlsc2_m5840=((rlsc2_v5873=rlsc2_f5873()),(rlsc2_v5873*rlsc2_v5873));}}
static double rlsc2_f1837(){if (rlsc2_p1837) return rlsc2_m1837; else {rlsc2_p1837=T;return rlsc2_m1837=((rlsc2_v1843=rlsc2_f1843()),((rlsc2_v1843*rlsc2_v1843)-((4.0)*rlsc2_f1841()*(rlsc2_f2026()-(rlsc2_f2086()*rlsc2_f5840())))));}}
static int rlsc2_f1836(){if (rlsc2_p1836) return rlsc2_m1836; else {rlsc2_p1836=T;return rlsc2_m1836=(rlsc2_f1837()<0.0);}}
static double rlsc2_f1831(){if (rlsc2_p1831) return rlsc2_m1831; else {rlsc2_p1831=T;return rlsc2_m1831=(sqrt(rlsc2_f1837())/rlsc2_f1834());}}
static double rlsc2_f1815(){if (rlsc2_p1815) return rlsc2_m1815; else {rlsc2_p1815=T;return rlsc2_m1815=((rlsc2_f1833()-rlsc2_f1831())+rlsc2_v6263);}}
static double rlsc2_f1814(){if (rlsc2_p1814) return rlsc2_m1814; else {rlsc2_p1814=T;return rlsc2_m1814=(rlsc2_f2082()*rlsc2_f1815());}}
static double rlsc2_f1812(){if (rlsc2_p1812) return rlsc2_m1812; else {rlsc2_p1812=T;return rlsc2_m1812=((rlsc2_f2072()-rlsc2_f1814())/rlsc2_f2087());}}
static int rlsc2_f1803(){if (rlsc2_p1803) return rlsc2_m1803; else {rlsc2_p1803=T;return rlsc2_m1803=((rlsc2_v1812=rlsc2_f1812()),((fabs((((rlsc2_f2087()*rlsc2_v1812)+rlsc2_f1814())-rlsc2_f2072()))<rlsc2_v6259)?(((rlsc2_f1985()<=rlsc2_v1812)&&(rlsc2_v1812<=rlsc2_f1982()))?((rlsc2_f1978()<=rlsc2_f1815())&&(rlsc2_f1815()<=rlsc2_f1975())):NIL):NIL));}}
static double rlsc2_f1771(){if (rlsc2_p1771) return rlsc2_m1771; else {rlsc2_p1771=T;return rlsc2_m1771=normalize_rotation((atan2((rlsc2_f1815()-rlsc2_v6263),(rlsc2_f1812()-rlsc2_v6265))-rlsc2_f5623()));}}
static double rlsc2_f1770(){if (rlsc2_p1770) return rlsc2_m1770; else {rlsc2_p1770=T;return rlsc2_m1770=normalize_rotation(rlsc2_f1771());}}
static int rlsc2_f1758(){if (rlsc2_p1758) return rlsc2_m1758; else {rlsc2_p1758=T;return rlsc2_m1758=((rlsc2_v1770=rlsc2_f1770()),((fabs((rlsc2_v1770-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1770-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1770-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f1757(){if (rlsc2_p1757) return rlsc2_m1757; else {rlsc2_p1757=T;return rlsc2_m1757=((rlsc2_v1758=rlsc2_f1758()),(rlsc2_v1758?rlsc2_v1758:rlsc2_f2399()));}}
static double rlsc2_f1754(){if (rlsc2_p1754) return rlsc2_m1754; else {rlsc2_p1754=T;return rlsc2_m1754=(rlsc2_f1757()?rlsc2_f1771():rlsc2_f2392());}}
static double rlsc2_f1756(){if (rlsc2_p1756) return rlsc2_m1756; else {rlsc2_p1756=T;return rlsc2_m1756=(rlsc2_f1757()?rlsc2_f1771():rlsc2_f2396());}}
static int rlsc2_f1755(){if (rlsc2_p1755) return rlsc2_m1755; else {rlsc2_p1755=T;return rlsc2_m1755=(rlsc2_f1756()<(0.0));}}
static int rlsc2_f1749(){if (rlsc2_p1749) return rlsc2_m1749; else {rlsc2_p1749=T;return rlsc2_m1749=(rlsc2_f1757()?((rlsc2_v1755=rlsc2_f1755()),(rlsc2_v1755?rlsc2_v1755:(fabs((rlsc2_f1754()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f1578(){if (rlsc2_p1578) return rlsc2_m1578; else {rlsc2_p1578=T;return rlsc2_m1578=(rlsc2_f1749()?(rlsc2_f1757()?((rlsc2_v2163=rlsc2_f2163()),(rlsc2_v1771=rlsc2_f1771()),((rlsc2_v2163>rlsc2_v1771)?rlsc2_v2163:rlsc2_v1771)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1533(){if (rlsc2_p1533) return rlsc2_m1533; else {rlsc2_p1533=T;return rlsc2_m1533=(rlsc2_f1749()?(rlsc2_f1757()?((rlsc2_v2642=rlsc2_f2642()),(rlsc2_v1771=rlsc2_f1771()),((rlsc2_v2642>rlsc2_v1771)?rlsc2_v2642:rlsc2_v1771)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1175(){if (rlsc2_p1175) return rlsc2_m1175; else {rlsc2_p1175=T;return rlsc2_m1175=(rlsc2_f1749()?(rlsc2_f1757()?rlsc2_f1771():rlsc2_f1614()):rlsc2_f1614());}}
static int rlsc2_f1114(){if (rlsc2_p1114) return rlsc2_m1114; else {rlsc2_p1114=T;return rlsc2_m1114=(rlsc2_f1749()?(rlsc2_f1757()?NIL:T):T);}}
static double rlsc2_f1745(){if (rlsc2_p1745) return rlsc2_m1745; else {rlsc2_p1745=T;return rlsc2_m1745=(rlsc2_f1749()?rlsc2_f1754():rlsc2_f2392());}}
static double rlsc2_f1747(){if (rlsc2_p1747) return rlsc2_m1747; else {rlsc2_p1747=T;return rlsc2_m1747=(rlsc2_f1749()?rlsc2_f1756():rlsc2_f2396());}}
static int rlsc2_f1746(){if (rlsc2_p1746) return rlsc2_m1746; else {rlsc2_p1746=T;return rlsc2_m1746=(rlsc2_f1747()<(0.0));}}
static int rlsc2_f1748(){if (rlsc2_p1748) return rlsc2_m1748; else {rlsc2_p1748=T;return rlsc2_m1748=(rlsc2_f1749()?rlsc2_f1757():NIL);}}
static int rlsc2_f1734(){if (rlsc2_p1734) return rlsc2_m1734; else {rlsc2_p1734=T;return rlsc2_m1734=(rlsc2_f1803()?rlsc2_f1748():NIL);}}
static int rlsc2_f1740(){if (rlsc2_p1740) return rlsc2_m1740; else {rlsc2_p1740=T;return rlsc2_m1740=(rlsc2_f1748()?((rlsc2_v1746=rlsc2_f1746()),(rlsc2_v1746?rlsc2_v1746:(fabs((rlsc2_f1745()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f1829(){if (rlsc2_p1829) return rlsc2_m1829; else {rlsc2_p1829=T;return rlsc2_m1829=((rlsc2_f1833()+rlsc2_f1831())+rlsc2_v6263);}}
static double rlsc2_f1828(){if (rlsc2_p1828) return rlsc2_m1828; else {rlsc2_p1828=T;return rlsc2_m1828=(rlsc2_f2082()*rlsc2_f1829());}}
static double rlsc2_f1826(){if (rlsc2_p1826) return rlsc2_m1826; else {rlsc2_p1826=T;return rlsc2_m1826=((rlsc2_f2072()-rlsc2_f1828())/rlsc2_f2087());}}
static int rlsc2_f1817(){if (rlsc2_p1817) return rlsc2_m1817; else {rlsc2_p1817=T;return rlsc2_m1817=((rlsc2_v1826=rlsc2_f1826()),((fabs((((rlsc2_f2087()*rlsc2_v1826)+rlsc2_f1828())-rlsc2_f2072()))<rlsc2_v6259)?(((rlsc2_f1985()<=rlsc2_v1826)&&(rlsc2_v1826<=rlsc2_f1982()))?((rlsc2_f1978()<=rlsc2_f1829())&&(rlsc2_f1829()<=rlsc2_f1975())):NIL):NIL));}}
static double rlsc2_f1798(){if (rlsc2_p1798) return rlsc2_m1798; else {rlsc2_p1798=T;return rlsc2_m1798=normalize_rotation((atan2((rlsc2_f1829()-rlsc2_v6263),(rlsc2_f1826()-rlsc2_v6265))-rlsc2_f5623()));}}
static double rlsc2_f1797(){if (rlsc2_p1797) return rlsc2_m1797; else {rlsc2_p1797=T;return rlsc2_m1797=normalize_rotation(rlsc2_f1798());}}
static int rlsc2_f1785(){if (rlsc2_p1785) return rlsc2_m1785; else {rlsc2_p1785=T;return rlsc2_m1785=((rlsc2_v1797=rlsc2_f1797()),((fabs((rlsc2_v1797-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1797-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1797-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f1784(){if (rlsc2_p1784) return rlsc2_m1784; else {rlsc2_p1784=T;return rlsc2_m1784=((rlsc2_v1785=rlsc2_f1785()),(rlsc2_v1785?rlsc2_v1785:rlsc2_f2399()));}}
static double rlsc2_f1583(){if (rlsc2_p1583) return rlsc2_m1583; else {rlsc2_p1583=T;return rlsc2_m1583=(rlsc2_f1784()?((rlsc2_v2163=rlsc2_f2163()),(rlsc2_v1798=rlsc2_f1798()),((rlsc2_v2163>rlsc2_v1798)?rlsc2_v2163:rlsc2_v1798)):rlsc2_f2164());}}
static double rlsc2_f1538(){if (rlsc2_p1538) return rlsc2_m1538; else {rlsc2_p1538=T;return rlsc2_m1538=(rlsc2_f1784()?((rlsc2_v2642=rlsc2_f2642()),(rlsc2_v1798=rlsc2_f1798()),((rlsc2_v2642>rlsc2_v1798)?rlsc2_v2642:rlsc2_v1798)):rlsc2_f2164());}}
static double rlsc2_f1178(){if (rlsc2_p1178) return rlsc2_m1178; else {rlsc2_p1178=T;return rlsc2_m1178=(rlsc2_f1784()?rlsc2_f1798():rlsc2_f1614());}}
static int rlsc2_f1117(){if (rlsc2_p1117) return rlsc2_m1117; else {rlsc2_p1117=T;return rlsc2_m1117=(rlsc2_f1784()?NIL:T);}}
static double rlsc2_f1699(){if (rlsc2_p1699) return rlsc2_m1699; else {rlsc2_p1699=T;return rlsc2_m1699=(rlsc2_f1784()?(rlsc2_f1749()?(rlsc2_f1757()?((rlsc2_v1798=rlsc2_f1798()),(rlsc2_v1771=rlsc2_f1771()),((rlsc2_v1798>rlsc2_v1771)?rlsc2_v1798:rlsc2_v1771)):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1781(){if (rlsc2_p1781) return rlsc2_m1781; else {rlsc2_p1781=T;return rlsc2_m1781=(rlsc2_f1784()?rlsc2_f1798():rlsc2_f2392());}}
static double rlsc2_f1783(){if (rlsc2_p1783) return rlsc2_m1783; else {rlsc2_p1783=T;return rlsc2_m1783=(rlsc2_f1784()?rlsc2_f1798():rlsc2_f2396());}}
static int rlsc2_f1782(){if (rlsc2_p1782) return rlsc2_m1782; else {rlsc2_p1782=T;return rlsc2_m1782=(rlsc2_f1783()<(0.0));}}
static int rlsc2_f1776(){if (rlsc2_p1776) return rlsc2_m1776; else {rlsc2_p1776=T;return rlsc2_m1776=(rlsc2_f1784()?((rlsc2_v1782=rlsc2_f1782()),(rlsc2_v1782?rlsc2_v1782:(fabs((rlsc2_f1781()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f1736(){if (rlsc2_p1736) return rlsc2_m1736; else {rlsc2_p1736=T;return rlsc2_m1736=(rlsc2_f1776()?rlsc2_f1784():NIL);}}
static double rlsc2_f2023(){if (rlsc2_p2023) return rlsc2_m2023; else {rlsc2_p2023=T;return rlsc2_m2023=(rlsc2_f5840()-(rlsc2_f2026()/rlsc2_f2025()));}}
static int rlsc2_f2022(){if (rlsc2_p2022) return rlsc2_m2022; else {rlsc2_p2022=T;return rlsc2_m2022=(rlsc2_f2023()<0.0);}}
static double rlsc2_f1936(){if (rlsc2_p1936) return rlsc2_m1936; else {rlsc2_p1936=T;return rlsc2_m1936=sqrt(rlsc2_f2023());}}
static double rlsc2_f1922(){if (rlsc2_p1922) return rlsc2_m1922; else {rlsc2_p1922=T;return rlsc2_m1922=((-rlsc2_f1936())+rlsc2_v6265);}}
static int rlsc2_f1914(){if (rlsc2_p1914) return rlsc2_m1914; else {rlsc2_p1914=T;return rlsc2_m1914=((rlsc2_v1922=rlsc2_f1922()),((fabs((((rlsc2_f2087()*rlsc2_v1922)+rlsc2_f1932())-rlsc2_f2072()))<rlsc2_v6259)?(((rlsc2_f1985()<=rlsc2_v1922)&&(rlsc2_v1922<=rlsc2_f1982()))?rlsc2_f1926():NIL):NIL));}}
static double rlsc2_f1883(){if (rlsc2_p1883) return rlsc2_m1883; else {rlsc2_p1883=T;return rlsc2_m1883=normalize_rotation((atan2(rlsc2_f1913(),(rlsc2_f1922()-rlsc2_v6265))-rlsc2_f5623()));}}
static double rlsc2_f1882(){if (rlsc2_p1882) return rlsc2_m1882; else {rlsc2_p1882=T;return rlsc2_m1882=normalize_rotation(rlsc2_f1883());}}
static int rlsc2_f1870(){if (rlsc2_p1870) return rlsc2_m1870; else {rlsc2_p1870=T;return rlsc2_m1870=((rlsc2_v1882=rlsc2_f1882()),((fabs((rlsc2_v1882-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1882-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1882-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f1869(){if (rlsc2_p1869) return rlsc2_m1869; else {rlsc2_p1869=T;return rlsc2_m1869=((rlsc2_v1870=rlsc2_f1870()),(rlsc2_v1870?rlsc2_v1870:rlsc2_f2399()));}}
static double rlsc2_f1866(){if (rlsc2_p1866) return rlsc2_m1866; else {rlsc2_p1866=T;return rlsc2_m1866=(rlsc2_f1869()?rlsc2_f1883():rlsc2_f2392());}}
static double rlsc2_f1868(){if (rlsc2_p1868) return rlsc2_m1868; else {rlsc2_p1868=T;return rlsc2_m1868=(rlsc2_f1869()?rlsc2_f1883():rlsc2_f2396());}}
static int rlsc2_f1867(){if (rlsc2_p1867) return rlsc2_m1867; else {rlsc2_p1867=T;return rlsc2_m1867=(rlsc2_f1868()<(0.0));}}
static int rlsc2_f1861(){if (rlsc2_p1861) return rlsc2_m1861; else {rlsc2_p1861=T;return rlsc2_m1861=(rlsc2_f1869()?((rlsc2_v1867=rlsc2_f1867()),(rlsc2_v1867?rlsc2_v1867:(fabs((rlsc2_f1866()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f1594(){if (rlsc2_p1594) return rlsc2_m1594; else {rlsc2_p1594=T;return rlsc2_m1594=(rlsc2_f1861()?(rlsc2_f1869()?((rlsc2_v2163=rlsc2_f2163()),(rlsc2_v1883=rlsc2_f1883()),((rlsc2_v2163>rlsc2_v1883)?rlsc2_v2163:rlsc2_v1883)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1549(){if (rlsc2_p1549) return rlsc2_m1549; else {rlsc2_p1549=T;return rlsc2_m1549=(rlsc2_f1861()?(rlsc2_f1869()?((rlsc2_v2642=rlsc2_f2642()),(rlsc2_v1883=rlsc2_f1883()),((rlsc2_v2642>rlsc2_v1883)?rlsc2_v2642:rlsc2_v1883)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1185(){if (rlsc2_p1185) return rlsc2_m1185; else {rlsc2_p1185=T;return rlsc2_m1185=(rlsc2_f1861()?(rlsc2_f1869()?rlsc2_f1883():rlsc2_f1614()):rlsc2_f1614());}}
static int rlsc2_f1124(){if (rlsc2_p1124) return rlsc2_m1124; else {rlsc2_p1124=T;return rlsc2_m1124=(rlsc2_f1861()?(rlsc2_f1869()?NIL:T):T);}}
static double rlsc2_f1857(){if (rlsc2_p1857) return rlsc2_m1857; else {rlsc2_p1857=T;return rlsc2_m1857=(rlsc2_f1861()?rlsc2_f1866():rlsc2_f2392());}}
static double rlsc2_f1859(){if (rlsc2_p1859) return rlsc2_m1859; else {rlsc2_p1859=T;return rlsc2_m1859=(rlsc2_f1861()?rlsc2_f1868():rlsc2_f2396());}}
static int rlsc2_f1858(){if (rlsc2_p1858) return rlsc2_m1858; else {rlsc2_p1858=T;return rlsc2_m1858=(rlsc2_f1859()<(0.0));}}
static int rlsc2_f1860(){if (rlsc2_p1860) return rlsc2_m1860; else {rlsc2_p1860=T;return rlsc2_m1860=(rlsc2_f1861()?rlsc2_f1869():NIL);}}
static int rlsc2_f1846(){if (rlsc2_p1846) return rlsc2_m1846; else {rlsc2_p1846=T;return rlsc2_m1846=(rlsc2_f1914()?rlsc2_f1860():NIL);}}
static int rlsc2_f1852(){if (rlsc2_p1852) return rlsc2_m1852; else {rlsc2_p1852=T;return rlsc2_m1852=(rlsc2_f1860()?((rlsc2_v1858=rlsc2_f1858()),(rlsc2_v1858?rlsc2_v1858:(fabs((rlsc2_f1857()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f1935(){if (rlsc2_p1935) return rlsc2_m1935; else {rlsc2_p1935=T;return rlsc2_m1935=(rlsc2_f1936()+rlsc2_v6265);}}
static int rlsc2_f1924(){if (rlsc2_p1924) return rlsc2_m1924; else {rlsc2_p1924=T;return rlsc2_m1924=((rlsc2_v1935=rlsc2_f1935()),((fabs((((rlsc2_f2087()*rlsc2_v1935)+rlsc2_f1932())-rlsc2_f2072()))<rlsc2_v6259)?(((rlsc2_f1985()<=rlsc2_v1935)&&(rlsc2_v1935<=rlsc2_f1982()))?rlsc2_f1926():NIL):NIL));}}
static double rlsc2_f1909(){if (rlsc2_p1909) return rlsc2_m1909; else {rlsc2_p1909=T;return rlsc2_m1909=normalize_rotation((atan2(rlsc2_f1913(),(rlsc2_f1935()-rlsc2_v6265))-rlsc2_f5623()));}}
static double rlsc2_f1908(){if (rlsc2_p1908) return rlsc2_m1908; else {rlsc2_p1908=T;return rlsc2_m1908=normalize_rotation(rlsc2_f1909());}}
static int rlsc2_f1896(){if (rlsc2_p1896) return rlsc2_m1896; else {rlsc2_p1896=T;return rlsc2_m1896=((rlsc2_v1908=rlsc2_f1908()),((fabs((rlsc2_v1908-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1908-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v1908-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f1895(){if (rlsc2_p1895) return rlsc2_m1895; else {rlsc2_p1895=T;return rlsc2_m1895=((rlsc2_v1896=rlsc2_f1896()),(rlsc2_v1896?rlsc2_v1896:rlsc2_f2399()));}}
static double rlsc2_f1599(){if (rlsc2_p1599) return rlsc2_m1599; else {rlsc2_p1599=T;return rlsc2_m1599=(rlsc2_f1895()?((rlsc2_v2163=rlsc2_f2163()),(rlsc2_v1909=rlsc2_f1909()),((rlsc2_v2163>rlsc2_v1909)?rlsc2_v2163:rlsc2_v1909)):rlsc2_f2164());}}
static double rlsc2_f1554(){if (rlsc2_p1554) return rlsc2_m1554; else {rlsc2_p1554=T;return rlsc2_m1554=(rlsc2_f1895()?((rlsc2_v2642=rlsc2_f2642()),(rlsc2_v1909=rlsc2_f1909()),((rlsc2_v2642>rlsc2_v1909)?rlsc2_v2642:rlsc2_v1909)):rlsc2_f2164());}}
static double rlsc2_f1188(){if (rlsc2_p1188) return rlsc2_m1188; else {rlsc2_p1188=T;return rlsc2_m1188=(rlsc2_f1895()?rlsc2_f1909():rlsc2_f1614());}}
static int rlsc2_f1127(){if (rlsc2_p1127) return rlsc2_m1127; else {rlsc2_p1127=T;return rlsc2_m1127=(rlsc2_f1895()?NIL:T);}}
static double rlsc2_f1711(){if (rlsc2_p1711) return rlsc2_m1711; else {rlsc2_p1711=T;return rlsc2_m1711=(rlsc2_f1895()?(rlsc2_f1861()?(rlsc2_f1869()?((rlsc2_v1909=rlsc2_f1909()),(rlsc2_v1883=rlsc2_f1883()),((rlsc2_v1909>rlsc2_v1883)?rlsc2_v1909:rlsc2_v1883)):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1892(){if (rlsc2_p1892) return rlsc2_m1892; else {rlsc2_p1892=T;return rlsc2_m1892=(rlsc2_f1895()?rlsc2_f1909():rlsc2_f2392());}}
static double rlsc2_f1894(){if (rlsc2_p1894) return rlsc2_m1894; else {rlsc2_p1894=T;return rlsc2_m1894=(rlsc2_f1895()?rlsc2_f1909():rlsc2_f2396());}}
static int rlsc2_f1893(){if (rlsc2_p1893) return rlsc2_m1893; else {rlsc2_p1893=T;return rlsc2_m1893=(rlsc2_f1894()<(0.0));}}
static int rlsc2_f1887(){if (rlsc2_p1887) return rlsc2_m1887; else {rlsc2_p1887=T;return rlsc2_m1887=(rlsc2_f1895()?((rlsc2_v1893=rlsc2_f1893()),(rlsc2_v1893?rlsc2_v1893:(fabs((rlsc2_f1892()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f1668(){if (rlsc2_p1668) return rlsc2_m1668; else {rlsc2_p1668=T;return rlsc2_m1668=(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1684():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?rlsc2_f1711():rlsc2_f1892()):rlsc2_f1857()):(rlsc2_f1887()?rlsc2_f1892():rlsc2_f2392())):(rlsc2_f1914()?rlsc2_f1857():rlsc2_f2392()))):(rlsc2_f1836()?rlsc2_f1684():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?rlsc2_f1699():rlsc2_f1781()):rlsc2_f1745()):(rlsc2_f1776()?rlsc2_f1781():rlsc2_f2392())):(rlsc2_f1803()?rlsc2_f1745():rlsc2_f2392())))):rlsc2_f2392());}}
static double rlsc2_f1690(){if (rlsc2_p1690) return rlsc2_m1690; else {rlsc2_p1690=T;return rlsc2_m1690=(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1716():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?rlsc2_f1711():rlsc2_f1894()):rlsc2_f1859()):(rlsc2_f1887()?rlsc2_f1894():rlsc2_f2396())):(rlsc2_f1914()?rlsc2_f1859():rlsc2_f2396()))):(rlsc2_f1836()?rlsc2_f1716():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?rlsc2_f1699():rlsc2_f1783()):rlsc2_f1747()):(rlsc2_f1776()?rlsc2_f1783():rlsc2_f2396())):(rlsc2_f1803()?rlsc2_f1747():rlsc2_f2396())))):rlsc2_f2396());}}
static int rlsc2_f1689(){if (rlsc2_p1689) return rlsc2_m1689; else {rlsc2_p1689=T;return rlsc2_m1689=(rlsc2_f1690()<(0.0));}}
static int rlsc2_f1848(){if (rlsc2_p1848) return rlsc2_m1848; else {rlsc2_p1848=T;return rlsc2_m1848=(rlsc2_f1887()?rlsc2_f1895():NIL);}}
static int rlsc2_f1730(){if (rlsc2_p1730) return rlsc2_m1730; else {rlsc2_p1730=T;return rlsc2_m1730=(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1937():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?(rlsc2_f1895()?rlsc2_f1860():NIL):rlsc2_f1895()):rlsc2_f1860()):rlsc2_f1848()):rlsc2_f1846())):(rlsc2_f1836()?rlsc2_f1937():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?(rlsc2_f1784()?rlsc2_f1748():NIL):rlsc2_f1784()):rlsc2_f1748()):rlsc2_f1736()):rlsc2_f1734()))):NIL);}}
static int rlsc2_f1663(){if (rlsc2_p1663) return rlsc2_m1663; else {rlsc2_p1663=T;return rlsc2_m1663=(rlsc2_f1730()?((rlsc2_v1689=rlsc2_f1689()),(rlsc2_v1689?rlsc2_v1689:(fabs((rlsc2_f1668()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f1660(){if (rlsc2_p1660) return rlsc2_m1660; else {rlsc2_p1660=T;return rlsc2_m1660=((rlsc2_f1663()?rlsc2_f1690():rlsc2_f2396())<(0.0));}}
static int rlsc2_f1654(){if (rlsc2_p1654) return rlsc2_m1654; else {rlsc2_p1654=T;return rlsc2_m1654=((rlsc2_v1663=rlsc2_f1663()),((rlsc2_v1663?rlsc2_f1730():NIL)?((rlsc2_v1660=rlsc2_f1660()),(rlsc2_v1660?rlsc2_v1660:(fabs(((rlsc2_v1663?rlsc2_f1668():rlsc2_f2392())-(0.0)))<rlsc2_v6259))):NIL));}}
static double rlsc2_f2281(){if (rlsc2_p2281) return rlsc2_m2281; else {rlsc2_p2281=T;return rlsc2_m2281=((rlsc2_v2287=rlsc2_f2287()),((rlsc2_v2287*rlsc2_v2287)-((4.0)*rlsc2_f2285()*(rlsc2_f2708()-(rlsc2_f2771()*rlsc2_f5840())))));}}
static int rlsc2_f2280(){if (rlsc2_p2280) return rlsc2_m2280; else {rlsc2_p2280=T;return rlsc2_m2280=(rlsc2_f2281()<0.0);}}
static double rlsc2_f2275(){if (rlsc2_p2275) return rlsc2_m2275; else {rlsc2_p2275=T;return rlsc2_m2275=(sqrt(rlsc2_f2281())/rlsc2_f2278());}}
static double rlsc2_f2259(){if (rlsc2_p2259) return rlsc2_m2259; else {rlsc2_p2259=T;return rlsc2_m2259=((rlsc2_f2277()-rlsc2_f2275())+rlsc2_v6263);}}
static double rlsc2_f2258(){if (rlsc2_p2258) return rlsc2_m2258; else {rlsc2_p2258=T;return rlsc2_m2258=(rlsc2_f2767()*rlsc2_f2259());}}
static double rlsc2_f2256(){if (rlsc2_p2256) return rlsc2_m2256; else {rlsc2_p2256=T;return rlsc2_m2256=((rlsc2_f2755()-rlsc2_f2258())/rlsc2_f2772());}}
static int rlsc2_f2247(){if (rlsc2_p2247) return rlsc2_m2247; else {rlsc2_p2247=T;return rlsc2_m2247=((rlsc2_v2256=rlsc2_f2256()),((fabs((((rlsc2_f2772()*rlsc2_v2256)+rlsc2_f2258())-rlsc2_f2755()))<rlsc2_v6259)?(((rlsc2_f2667()<=rlsc2_v2256)&&(rlsc2_v2256<=rlsc2_f2664()))?((rlsc2_f2660()<=rlsc2_f2259())&&(rlsc2_f2259()<=rlsc2_f2657())):NIL):NIL));}}
static double rlsc2_f2215(){if (rlsc2_p2215) return rlsc2_m2215; else {rlsc2_p2215=T;return rlsc2_m2215=normalize_rotation((atan2((rlsc2_f2259()-rlsc2_v6263),(rlsc2_f2256()-rlsc2_v6265))-rlsc2_f5623()));}}
static double rlsc2_f1250(){if (rlsc2_p1250) return rlsc2_m1250; else {rlsc2_p1250=T;return rlsc2_m1250=(rlsc2_f1784()?((rlsc2_v2215=rlsc2_f2215()),(rlsc2_v1798=rlsc2_f1798()),((rlsc2_v2215>rlsc2_v1798)?rlsc2_v2215:rlsc2_v1798)):rlsc2_f2164());}}
static double rlsc2_f1245(){if (rlsc2_p1245) return rlsc2_m1245; else {rlsc2_p1245=T;return rlsc2_m1245=(rlsc2_f1749()?(rlsc2_f1757()?((rlsc2_v2215=rlsc2_f2215()),(rlsc2_v1771=rlsc2_f1771()),((rlsc2_v2215>rlsc2_v1771)?rlsc2_v2215:rlsc2_v1771)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1271(){if (rlsc2_p1271) return rlsc2_m1271; else {rlsc2_p1271=T;return rlsc2_m1271=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?((rlsc2_v2215=rlsc2_f2215()),(rlsc2_v1721=rlsc2_f1721()),((rlsc2_v2215>rlsc2_v1721)?rlsc2_v2215:rlsc2_v1721)):(rlsc2_f1950()?((rlsc2_v2215=rlsc2_f2215()),(rlsc2_v1964=rlsc2_f1964()),((rlsc2_v2215>rlsc2_v1964)?rlsc2_v2215:rlsc2_v1964)):rlsc2_f2164())):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1266(){if (rlsc2_p1266) return rlsc2_m1266; else {rlsc2_p1266=T;return rlsc2_m1266=(rlsc2_f1895()?((rlsc2_v2215=rlsc2_f2215()),(rlsc2_v1909=rlsc2_f1909()),((rlsc2_v2215>rlsc2_v1909)?rlsc2_v2215:rlsc2_v1909)):rlsc2_f2164());}}
static double rlsc2_f1261(){if (rlsc2_p1261) return rlsc2_m1261; else {rlsc2_p1261=T;return rlsc2_m1261=(rlsc2_f1861()?(rlsc2_f1869()?((rlsc2_v2215=rlsc2_f2215()),(rlsc2_v1883=rlsc2_f1883()),((rlsc2_v2215>rlsc2_v1883)?rlsc2_v2215:rlsc2_v1883)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f2214(){if (rlsc2_p2214) return rlsc2_m2214; else {rlsc2_p2214=T;return rlsc2_m2214=normalize_rotation(rlsc2_f2215());}}
static int rlsc2_f2202(){if (rlsc2_p2202) return rlsc2_m2202; else {rlsc2_p2202=T;return rlsc2_m2202=((rlsc2_v2214=rlsc2_f2214()),((fabs((rlsc2_v2214-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2214-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2214-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f2201(){if (rlsc2_p2201) return rlsc2_m2201; else {rlsc2_p2201=T;return rlsc2_m2201=((rlsc2_v2202=rlsc2_f2202()),(rlsc2_v2202?rlsc2_v2202:rlsc2_f2399()));}}
static double rlsc2_f2198(){if (rlsc2_p2198) return rlsc2_m2198; else {rlsc2_p2198=T;return rlsc2_m2198=(rlsc2_f2201()?rlsc2_f2215():rlsc2_f2392());}}
static double rlsc2_f2200(){if (rlsc2_p2200) return rlsc2_m2200; else {rlsc2_p2200=T;return rlsc2_m2200=(rlsc2_f2201()?rlsc2_f2215():rlsc2_f2396());}}
static int rlsc2_f2199(){if (rlsc2_p2199) return rlsc2_m2199; else {rlsc2_p2199=T;return rlsc2_m2199=(rlsc2_f2200()<(0.0));}}
static int rlsc2_f2193(){if (rlsc2_p2193) return rlsc2_m2193; else {rlsc2_p2193=T;return rlsc2_m2193=(rlsc2_f2201()?((rlsc2_v2199=rlsc2_f2199()),(rlsc2_v2199?rlsc2_v2199:(fabs((rlsc2_f2198()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f1234(){if (rlsc2_p1234) return rlsc2_m1234; else {rlsc2_p1234=T;return rlsc2_m1234=(rlsc2_f2193()?(rlsc2_f2201()?(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1271():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?((rlsc2_v2215=rlsc2_f2215()),(rlsc2_v1711=rlsc2_f1711()),((rlsc2_v2215>rlsc2_v1711)?rlsc2_v2215:rlsc2_v1711)):rlsc2_f1266()):rlsc2_f1261()):(rlsc2_f1887()?rlsc2_f1266():rlsc2_f2164())):(rlsc2_f1914()?rlsc2_f1261():rlsc2_f2164()))):(rlsc2_f1836()?rlsc2_f1271():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?((rlsc2_v2215=rlsc2_f2215()),(rlsc2_v1699=rlsc2_f1699()),((rlsc2_v2215>rlsc2_v1699)?rlsc2_v2215:rlsc2_v1699)):rlsc2_f1250()):rlsc2_f1245()):(rlsc2_f1776()?rlsc2_f1250():rlsc2_f2164())):(rlsc2_f1803()?rlsc2_f1245():rlsc2_f2164())))):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1205(){if (rlsc2_p1205) return rlsc2_m1205; else {rlsc2_p1205=T;return rlsc2_m1205=(rlsc2_f2193()?(rlsc2_f2201()?rlsc2_f2215():rlsc2_f1614()):rlsc2_f1614());}}
static int rlsc2_f1143(){if (rlsc2_p1143) return rlsc2_m1143; else {rlsc2_p1143=T;return rlsc2_m1143=(rlsc2_f2193()?(rlsc2_f2201()?NIL:T):T);}}
static double rlsc2_f2189(){if (rlsc2_p2189) return rlsc2_m2189; else {rlsc2_p2189=T;return rlsc2_m2189=(rlsc2_f2193()?rlsc2_f2198():rlsc2_f2392());}}
static double rlsc2_f2191(){if (rlsc2_p2191) return rlsc2_m2191; else {rlsc2_p2191=T;return rlsc2_m2191=(rlsc2_f2193()?rlsc2_f2200():rlsc2_f2396());}}
static int rlsc2_f2190(){if (rlsc2_p2190) return rlsc2_m2190; else {rlsc2_p2190=T;return rlsc2_m2190=(rlsc2_f2191()<(0.0));}}
static int rlsc2_f2192(){if (rlsc2_p2192) return rlsc2_m2192; else {rlsc2_p2192=T;return rlsc2_m2192=(rlsc2_f2193()?rlsc2_f2201():NIL);}}
static int rlsc2_f2178(){if (rlsc2_p2178) return rlsc2_m2178; else {rlsc2_p2178=T;return rlsc2_m2178=(rlsc2_f2247()?rlsc2_f2192():NIL);}}
static int rlsc2_f2184(){if (rlsc2_p2184) return rlsc2_m2184; else {rlsc2_p2184=T;return rlsc2_m2184=(rlsc2_f2192()?((rlsc2_v2190=rlsc2_f2190()),(rlsc2_v2190?rlsc2_v2190:(fabs((rlsc2_f2189()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f2273(){if (rlsc2_p2273) return rlsc2_m2273; else {rlsc2_p2273=T;return rlsc2_m2273=((rlsc2_f2277()+rlsc2_f2275())+rlsc2_v6263);}}
static double rlsc2_f2272(){if (rlsc2_p2272) return rlsc2_m2272; else {rlsc2_p2272=T;return rlsc2_m2272=(rlsc2_f2767()*rlsc2_f2273());}}
static double rlsc2_f2270(){if (rlsc2_p2270) return rlsc2_m2270; else {rlsc2_p2270=T;return rlsc2_m2270=((rlsc2_f2755()-rlsc2_f2272())/rlsc2_f2772());}}
static int rlsc2_f2261(){if (rlsc2_p2261) return rlsc2_m2261; else {rlsc2_p2261=T;return rlsc2_m2261=((rlsc2_v2270=rlsc2_f2270()),((fabs((((rlsc2_f2772()*rlsc2_v2270)+rlsc2_f2272())-rlsc2_f2755()))<rlsc2_v6259)?(((rlsc2_f2667()<=rlsc2_v2270)&&(rlsc2_v2270<=rlsc2_f2664()))?((rlsc2_f2660()<=rlsc2_f2273())&&(rlsc2_f2273()<=rlsc2_f2657())):NIL):NIL));}}
static double rlsc2_f2242(){if (rlsc2_p2242) return rlsc2_m2242; else {rlsc2_p2242=T;return rlsc2_m2242=normalize_rotation((atan2((rlsc2_f2273()-rlsc2_v6263),(rlsc2_f2270()-rlsc2_v6265))-rlsc2_f5623()));}}
static double rlsc2_f1297(){if (rlsc2_p1297) return rlsc2_m1297; else {rlsc2_p1297=T;return rlsc2_m1297=(rlsc2_f1784()?((rlsc2_v2242=rlsc2_f2242()),(rlsc2_v1798=rlsc2_f1798()),((rlsc2_v2242>rlsc2_v1798)?rlsc2_v2242:rlsc2_v1798)):rlsc2_f2164());}}
static double rlsc2_f1292(){if (rlsc2_p1292) return rlsc2_m1292; else {rlsc2_p1292=T;return rlsc2_m1292=(rlsc2_f1749()?(rlsc2_f1757()?((rlsc2_v2242=rlsc2_f2242()),(rlsc2_v1771=rlsc2_f1771()),((rlsc2_v2242>rlsc2_v1771)?rlsc2_v2242:rlsc2_v1771)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1318(){if (rlsc2_p1318) return rlsc2_m1318; else {rlsc2_p1318=T;return rlsc2_m1318=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?((rlsc2_v2242=rlsc2_f2242()),(rlsc2_v1721=rlsc2_f1721()),((rlsc2_v2242>rlsc2_v1721)?rlsc2_v2242:rlsc2_v1721)):(rlsc2_f1950()?((rlsc2_v2242=rlsc2_f2242()),(rlsc2_v1964=rlsc2_f1964()),((rlsc2_v2242>rlsc2_v1964)?rlsc2_v2242:rlsc2_v1964)):rlsc2_f2164())):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1313(){if (rlsc2_p1313) return rlsc2_m1313; else {rlsc2_p1313=T;return rlsc2_m1313=(rlsc2_f1895()?((rlsc2_v2242=rlsc2_f2242()),(rlsc2_v1909=rlsc2_f1909()),((rlsc2_v2242>rlsc2_v1909)?rlsc2_v2242:rlsc2_v1909)):rlsc2_f2164());}}
static double rlsc2_f1308(){if (rlsc2_p1308) return rlsc2_m1308; else {rlsc2_p1308=T;return rlsc2_m1308=(rlsc2_f1861()?(rlsc2_f1869()?((rlsc2_v2242=rlsc2_f2242()),(rlsc2_v1883=rlsc2_f1883()),((rlsc2_v2242>rlsc2_v1883)?rlsc2_v2242:rlsc2_v1883)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f2241(){if (rlsc2_p2241) return rlsc2_m2241; else {rlsc2_p2241=T;return rlsc2_m2241=normalize_rotation(rlsc2_f2242());}}
static int rlsc2_f2229(){if (rlsc2_p2229) return rlsc2_m2229; else {rlsc2_p2229=T;return rlsc2_m2229=((rlsc2_v2241=rlsc2_f2241()),((fabs((rlsc2_v2241-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2241-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2241-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f2228(){if (rlsc2_p2228) return rlsc2_m2228; else {rlsc2_p2228=T;return rlsc2_m2228=((rlsc2_v2229=rlsc2_f2229()),(rlsc2_v2229?rlsc2_v2229:rlsc2_f2399()));}}
static double rlsc2_f1282(){if (rlsc2_p1282) return rlsc2_m1282; else {rlsc2_p1282=T;return rlsc2_m1282=(rlsc2_f2228()?(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1318():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?((rlsc2_v2242=rlsc2_f2242()),(rlsc2_v1711=rlsc2_f1711()),((rlsc2_v2242>rlsc2_v1711)?rlsc2_v2242:rlsc2_v1711)):rlsc2_f1313()):rlsc2_f1308()):(rlsc2_f1887()?rlsc2_f1313():rlsc2_f2164())):(rlsc2_f1914()?rlsc2_f1308():rlsc2_f2164()))):(rlsc2_f1836()?rlsc2_f1318():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?((rlsc2_v2242=rlsc2_f2242()),(rlsc2_v1699=rlsc2_f1699()),((rlsc2_v2242>rlsc2_v1699)?rlsc2_v2242:rlsc2_v1699)):rlsc2_f1297()):rlsc2_f1292()):(rlsc2_f1776()?rlsc2_f1297():rlsc2_f2164())):(rlsc2_f1803()?rlsc2_f1292():rlsc2_f2164())))):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1208(){if (rlsc2_p1208) return rlsc2_m1208; else {rlsc2_p1208=T;return rlsc2_m1208=(rlsc2_f2228()?rlsc2_f2242():rlsc2_f1614());}}
static int rlsc2_f1146(){if (rlsc2_p1146) return rlsc2_m1146; else {rlsc2_p1146=T;return rlsc2_m1146=(rlsc2_f2228()?NIL:T);}}
static double rlsc2_f2141(){if (rlsc2_p2141) return rlsc2_m2141; else {rlsc2_p2141=T;return rlsc2_m2141=(rlsc2_f2228()?(rlsc2_f2193()?(rlsc2_f2201()?((rlsc2_v2242=rlsc2_f2242()),(rlsc2_v2215=rlsc2_f2215()),((rlsc2_v2242>rlsc2_v2215)?rlsc2_v2242:rlsc2_v2215)):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1342(){if (rlsc2_p1342) return rlsc2_m1342; else {rlsc2_p1342=T;return rlsc2_m1342=(rlsc2_f1784()?((rlsc2_v2141=rlsc2_f2141()),(rlsc2_v1798=rlsc2_f1798()),((rlsc2_v2141>rlsc2_v1798)?rlsc2_v2141:rlsc2_v1798)):rlsc2_f2164());}}
static double rlsc2_f1337(){if (rlsc2_p1337) return rlsc2_m1337; else {rlsc2_p1337=T;return rlsc2_m1337=(rlsc2_f1749()?(rlsc2_f1757()?((rlsc2_v2141=rlsc2_f2141()),(rlsc2_v1771=rlsc2_f1771()),((rlsc2_v2141>rlsc2_v1771)?rlsc2_v2141:rlsc2_v1771)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1363(){if (rlsc2_p1363) return rlsc2_m1363; else {rlsc2_p1363=T;return rlsc2_m1363=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?((rlsc2_v2141=rlsc2_f2141()),(rlsc2_v1721=rlsc2_f1721()),((rlsc2_v2141>rlsc2_v1721)?rlsc2_v2141:rlsc2_v1721)):(rlsc2_f1950()?((rlsc2_v2141=rlsc2_f2141()),(rlsc2_v1964=rlsc2_f1964()),((rlsc2_v2141>rlsc2_v1964)?rlsc2_v2141:rlsc2_v1964)):rlsc2_f2164())):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1358(){if (rlsc2_p1358) return rlsc2_m1358; else {rlsc2_p1358=T;return rlsc2_m1358=(rlsc2_f1895()?((rlsc2_v2141=rlsc2_f2141()),(rlsc2_v1909=rlsc2_f1909()),((rlsc2_v2141>rlsc2_v1909)?rlsc2_v2141:rlsc2_v1909)):rlsc2_f2164());}}
static double rlsc2_f1353(){if (rlsc2_p1353) return rlsc2_m1353; else {rlsc2_p1353=T;return rlsc2_m1353=(rlsc2_f1861()?(rlsc2_f1869()?((rlsc2_v2141=rlsc2_f2141()),(rlsc2_v1883=rlsc2_f1883()),((rlsc2_v2141>rlsc2_v1883)?rlsc2_v2141:rlsc2_v1883)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f2225(){if (rlsc2_p2225) return rlsc2_m2225; else {rlsc2_p2225=T;return rlsc2_m2225=(rlsc2_f2228()?rlsc2_f2242():rlsc2_f2392());}}
static double rlsc2_f2227(){if (rlsc2_p2227) return rlsc2_m2227; else {rlsc2_p2227=T;return rlsc2_m2227=(rlsc2_f2228()?rlsc2_f2242():rlsc2_f2396());}}
static int rlsc2_f2226(){if (rlsc2_p2226) return rlsc2_m2226; else {rlsc2_p2226=T;return rlsc2_m2226=(rlsc2_f2227()<(0.0));}}
static int rlsc2_f2220(){if (rlsc2_p2220) return rlsc2_m2220; else {rlsc2_p2220=T;return rlsc2_m2220=(rlsc2_f2228()?((rlsc2_v2226=rlsc2_f2226()),(rlsc2_v2226?rlsc2_v2226:(fabs((rlsc2_f2225()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f2180(){if (rlsc2_p2180) return rlsc2_m2180; else {rlsc2_p2180=T;return rlsc2_m2180=(rlsc2_f2220()?rlsc2_f2228():NIL);}}
static double rlsc2_f2705(){if (rlsc2_p2705) return rlsc2_m2705; else {rlsc2_p2705=T;return rlsc2_m2705=(rlsc2_f5840()-(rlsc2_f2708()/rlsc2_f2707()));}}
static int rlsc2_f2704(){if (rlsc2_p2704) return rlsc2_m2704; else {rlsc2_p2704=T;return rlsc2_m2704=(rlsc2_f2705()<0.0);}}
static double rlsc2_f2380(){if (rlsc2_p2380) return rlsc2_m2380; else {rlsc2_p2380=T;return rlsc2_m2380=sqrt(rlsc2_f2705());}}
static double rlsc2_f2366(){if (rlsc2_p2366) return rlsc2_m2366; else {rlsc2_p2366=T;return rlsc2_m2366=((-rlsc2_f2380())+rlsc2_v6265);}}
static int rlsc2_f2358(){if (rlsc2_p2358) return rlsc2_m2358; else {rlsc2_p2358=T;return rlsc2_m2358=((rlsc2_v2366=rlsc2_f2366()),((fabs((((rlsc2_f2772()*rlsc2_v2366)+rlsc2_f2376())-rlsc2_f2755()))<rlsc2_v6259)?(((rlsc2_f2667()<=rlsc2_v2366)&&(rlsc2_v2366<=rlsc2_f2664()))?rlsc2_f2370():NIL):NIL));}}
static double rlsc2_f2327(){if (rlsc2_p2327) return rlsc2_m2327; else {rlsc2_p2327=T;return rlsc2_m2327=normalize_rotation((atan2(rlsc2_f2357(),(rlsc2_f2366()-rlsc2_v6265))-rlsc2_f5623()));}}
static double rlsc2_f1395(){if (rlsc2_p1395) return rlsc2_m1395; else {rlsc2_p1395=T;return rlsc2_m1395=(rlsc2_f1784()?((rlsc2_v2327=rlsc2_f2327()),(rlsc2_v1798=rlsc2_f1798()),((rlsc2_v2327>rlsc2_v1798)?rlsc2_v2327:rlsc2_v1798)):rlsc2_f2164());}}
static double rlsc2_f1390(){if (rlsc2_p1390) return rlsc2_m1390; else {rlsc2_p1390=T;return rlsc2_m1390=(rlsc2_f1749()?(rlsc2_f1757()?((rlsc2_v2327=rlsc2_f2327()),(rlsc2_v1771=rlsc2_f1771()),((rlsc2_v2327>rlsc2_v1771)?rlsc2_v2327:rlsc2_v1771)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1416(){if (rlsc2_p1416) return rlsc2_m1416; else {rlsc2_p1416=T;return rlsc2_m1416=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?((rlsc2_v2327=rlsc2_f2327()),(rlsc2_v1721=rlsc2_f1721()),((rlsc2_v2327>rlsc2_v1721)?rlsc2_v2327:rlsc2_v1721)):(rlsc2_f1950()?((rlsc2_v2327=rlsc2_f2327()),(rlsc2_v1964=rlsc2_f1964()),((rlsc2_v2327>rlsc2_v1964)?rlsc2_v2327:rlsc2_v1964)):rlsc2_f2164())):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1411(){if (rlsc2_p1411) return rlsc2_m1411; else {rlsc2_p1411=T;return rlsc2_m1411=(rlsc2_f1895()?((rlsc2_v2327=rlsc2_f2327()),(rlsc2_v1909=rlsc2_f1909()),((rlsc2_v2327>rlsc2_v1909)?rlsc2_v2327:rlsc2_v1909)):rlsc2_f2164());}}
static double rlsc2_f1406(){if (rlsc2_p1406) return rlsc2_m1406; else {rlsc2_p1406=T;return rlsc2_m1406=(rlsc2_f1861()?(rlsc2_f1869()?((rlsc2_v2327=rlsc2_f2327()),(rlsc2_v1883=rlsc2_f1883()),((rlsc2_v2327>rlsc2_v1883)?rlsc2_v2327:rlsc2_v1883)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f2326(){if (rlsc2_p2326) return rlsc2_m2326; else {rlsc2_p2326=T;return rlsc2_m2326=normalize_rotation(rlsc2_f2327());}}
static int rlsc2_f2314(){if (rlsc2_p2314) return rlsc2_m2314; else {rlsc2_p2314=T;return rlsc2_m2314=((rlsc2_v2326=rlsc2_f2326()),((fabs((rlsc2_v2326-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2326-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2326-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f2313(){if (rlsc2_p2313) return rlsc2_m2313; else {rlsc2_p2313=T;return rlsc2_m2313=((rlsc2_v2314=rlsc2_f2314()),(rlsc2_v2314?rlsc2_v2314:rlsc2_f2399()));}}
static double rlsc2_f2310(){if (rlsc2_p2310) return rlsc2_m2310; else {rlsc2_p2310=T;return rlsc2_m2310=(rlsc2_f2313()?rlsc2_f2327():rlsc2_f2392());}}
static double rlsc2_f2312(){if (rlsc2_p2312) return rlsc2_m2312; else {rlsc2_p2312=T;return rlsc2_m2312=(rlsc2_f2313()?rlsc2_f2327():rlsc2_f2396());}}
static int rlsc2_f2311(){if (rlsc2_p2311) return rlsc2_m2311; else {rlsc2_p2311=T;return rlsc2_m2311=(rlsc2_f2312()<(0.0));}}
static int rlsc2_f2305(){if (rlsc2_p2305) return rlsc2_m2305; else {rlsc2_p2305=T;return rlsc2_m2305=(rlsc2_f2313()?((rlsc2_v2311=rlsc2_f2311()),(rlsc2_v2311?rlsc2_v2311:(fabs((rlsc2_f2310()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f1379(){if (rlsc2_p1379) return rlsc2_m1379; else {rlsc2_p1379=T;return rlsc2_m1379=(rlsc2_f2305()?(rlsc2_f2313()?(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1416():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?((rlsc2_v2327=rlsc2_f2327()),(rlsc2_v1711=rlsc2_f1711()),((rlsc2_v2327>rlsc2_v1711)?rlsc2_v2327:rlsc2_v1711)):rlsc2_f1411()):rlsc2_f1406()):(rlsc2_f1887()?rlsc2_f1411():rlsc2_f2164())):(rlsc2_f1914()?rlsc2_f1406():rlsc2_f2164()))):(rlsc2_f1836()?rlsc2_f1416():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?((rlsc2_v2327=rlsc2_f2327()),(rlsc2_v1699=rlsc2_f1699()),((rlsc2_v2327>rlsc2_v1699)?rlsc2_v2327:rlsc2_v1699)):rlsc2_f1395()):rlsc2_f1390()):(rlsc2_f1776()?rlsc2_f1395():rlsc2_f2164())):(rlsc2_f1803()?rlsc2_f1390():rlsc2_f2164())))):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1215(){if (rlsc2_p1215) return rlsc2_m1215; else {rlsc2_p1215=T;return rlsc2_m1215=(rlsc2_f2305()?(rlsc2_f2313()?rlsc2_f2327():rlsc2_f1614()):rlsc2_f1614());}}
static int rlsc2_f1153(){if (rlsc2_p1153) return rlsc2_m1153; else {rlsc2_p1153=T;return rlsc2_m1153=(rlsc2_f2305()?(rlsc2_f2313()?NIL:T):T);}}
static double rlsc2_f2301(){if (rlsc2_p2301) return rlsc2_m2301; else {rlsc2_p2301=T;return rlsc2_m2301=(rlsc2_f2305()?rlsc2_f2310():rlsc2_f2392());}}
static double rlsc2_f2303(){if (rlsc2_p2303) return rlsc2_m2303; else {rlsc2_p2303=T;return rlsc2_m2303=(rlsc2_f2305()?rlsc2_f2312():rlsc2_f2396());}}
static int rlsc2_f2302(){if (rlsc2_p2302) return rlsc2_m2302; else {rlsc2_p2302=T;return rlsc2_m2302=(rlsc2_f2303()<(0.0));}}
static int rlsc2_f2304(){if (rlsc2_p2304) return rlsc2_m2304; else {rlsc2_p2304=T;return rlsc2_m2304=(rlsc2_f2305()?rlsc2_f2313():NIL);}}
static int rlsc2_f2290(){if (rlsc2_p2290) return rlsc2_m2290; else {rlsc2_p2290=T;return rlsc2_m2290=(rlsc2_f2358()?rlsc2_f2304():NIL);}}
static int rlsc2_f2296(){if (rlsc2_p2296) return rlsc2_m2296; else {rlsc2_p2296=T;return rlsc2_m2296=(rlsc2_f2304()?((rlsc2_v2302=rlsc2_f2302()),(rlsc2_v2302?rlsc2_v2302:(fabs((rlsc2_f2301()-(0.0)))<rlsc2_v6259))):NIL);}}
static double rlsc2_f2379(){if (rlsc2_p2379) return rlsc2_m2379; else {rlsc2_p2379=T;return rlsc2_m2379=(rlsc2_f2380()+rlsc2_v6265);}}
static int rlsc2_f2368(){if (rlsc2_p2368) return rlsc2_m2368; else {rlsc2_p2368=T;return rlsc2_m2368=((rlsc2_v2379=rlsc2_f2379()),((fabs((((rlsc2_f2772()*rlsc2_v2379)+rlsc2_f2376())-rlsc2_f2755()))<rlsc2_v6259)?(((rlsc2_f2667()<=rlsc2_v2379)&&(rlsc2_v2379<=rlsc2_f2664()))?rlsc2_f2370():NIL):NIL));}}
static double rlsc2_f2353(){if (rlsc2_p2353) return rlsc2_m2353; else {rlsc2_p2353=T;return rlsc2_m2353=normalize_rotation((atan2(rlsc2_f2357(),(rlsc2_f2379()-rlsc2_v6265))-rlsc2_f5623()));}}
static double rlsc2_f1442(){if (rlsc2_p1442) return rlsc2_m1442; else {rlsc2_p1442=T;return rlsc2_m1442=(rlsc2_f1784()?((rlsc2_v2353=rlsc2_f2353()),(rlsc2_v1798=rlsc2_f1798()),((rlsc2_v2353>rlsc2_v1798)?rlsc2_v2353:rlsc2_v1798)):rlsc2_f2164());}}
static double rlsc2_f1437(){if (rlsc2_p1437) return rlsc2_m1437; else {rlsc2_p1437=T;return rlsc2_m1437=(rlsc2_f1749()?(rlsc2_f1757()?((rlsc2_v2353=rlsc2_f2353()),(rlsc2_v1771=rlsc2_f1771()),((rlsc2_v2353>rlsc2_v1771)?rlsc2_v2353:rlsc2_v1771)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1463(){if (rlsc2_p1463) return rlsc2_m1463; else {rlsc2_p1463=T;return rlsc2_m1463=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?((rlsc2_v2353=rlsc2_f2353()),(rlsc2_v1721=rlsc2_f1721()),((rlsc2_v2353>rlsc2_v1721)?rlsc2_v2353:rlsc2_v1721)):(rlsc2_f1950()?((rlsc2_v2353=rlsc2_f2353()),(rlsc2_v1964=rlsc2_f1964()),((rlsc2_v2353>rlsc2_v1964)?rlsc2_v2353:rlsc2_v1964)):rlsc2_f2164())):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1458(){if (rlsc2_p1458) return rlsc2_m1458; else {rlsc2_p1458=T;return rlsc2_m1458=(rlsc2_f1895()?((rlsc2_v2353=rlsc2_f2353()),(rlsc2_v1909=rlsc2_f1909()),((rlsc2_v2353>rlsc2_v1909)?rlsc2_v2353:rlsc2_v1909)):rlsc2_f2164());}}
static double rlsc2_f1453(){if (rlsc2_p1453) return rlsc2_m1453; else {rlsc2_p1453=T;return rlsc2_m1453=(rlsc2_f1861()?(rlsc2_f1869()?((rlsc2_v2353=rlsc2_f2353()),(rlsc2_v1883=rlsc2_f1883()),((rlsc2_v2353>rlsc2_v1883)?rlsc2_v2353:rlsc2_v1883)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f2352(){if (rlsc2_p2352) return rlsc2_m2352; else {rlsc2_p2352=T;return rlsc2_m2352=normalize_rotation(rlsc2_f2353());}}
static int rlsc2_f2340(){if (rlsc2_p2340) return rlsc2_m2340; else {rlsc2_p2340=T;return rlsc2_m2340=((rlsc2_v2352=rlsc2_f2352()),((fabs((rlsc2_v2352-(0.0)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2352-(-6.283185307179586)))<rlsc2_v6259)?NIL:((fabs((rlsc2_v2352-(6.283185307179586)))<rlsc2_v6259)?NIL:T))));}}
static int rlsc2_f2339(){if (rlsc2_p2339) return rlsc2_m2339; else {rlsc2_p2339=T;return rlsc2_m2339=((rlsc2_v2340=rlsc2_f2340()),(rlsc2_v2340?rlsc2_v2340:rlsc2_f2399()));}}
static double rlsc2_f1427(){if (rlsc2_p1427) return rlsc2_m1427; else {rlsc2_p1427=T;return rlsc2_m1427=(rlsc2_f2339()?(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1463():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?((rlsc2_v2353=rlsc2_f2353()),(rlsc2_v1711=rlsc2_f1711()),((rlsc2_v2353>rlsc2_v1711)?rlsc2_v2353:rlsc2_v1711)):rlsc2_f1458()):rlsc2_f1453()):(rlsc2_f1887()?rlsc2_f1458():rlsc2_f2164())):(rlsc2_f1914()?rlsc2_f1453():rlsc2_f2164()))):(rlsc2_f1836()?rlsc2_f1463():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?((rlsc2_v2353=rlsc2_f2353()),(rlsc2_v1699=rlsc2_f1699()),((rlsc2_v2353>rlsc2_v1699)?rlsc2_v2353:rlsc2_v1699)):rlsc2_f1442()):rlsc2_f1437()):(rlsc2_f1776()?rlsc2_f1442():rlsc2_f2164())):(rlsc2_f1803()?rlsc2_f1437():rlsc2_f2164())))):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1218(){if (rlsc2_p1218) return rlsc2_m1218; else {rlsc2_p1218=T;return rlsc2_m1218=(rlsc2_f2339()?rlsc2_f2353():rlsc2_f1614());}}
static int rlsc2_f1156(){if (rlsc2_p1156) return rlsc2_m1156; else {rlsc2_p1156=T;return rlsc2_m1156=(rlsc2_f2339()?NIL:T);}}
static double rlsc2_f2153(){if (rlsc2_p2153) return rlsc2_m2153; else {rlsc2_p2153=T;return rlsc2_m2153=(rlsc2_f2339()?(rlsc2_f2305()?(rlsc2_f2313()?((rlsc2_v2353=rlsc2_f2353()),(rlsc2_v2327=rlsc2_f2327()),((rlsc2_v2353>rlsc2_v2327)?rlsc2_v2353:rlsc2_v2327)):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1487(){if (rlsc2_p1487) return rlsc2_m1487; else {rlsc2_p1487=T;return rlsc2_m1487=(rlsc2_f1784()?((rlsc2_v2153=rlsc2_f2153()),(rlsc2_v1798=rlsc2_f1798()),((rlsc2_v2153>rlsc2_v1798)?rlsc2_v2153:rlsc2_v1798)):rlsc2_f2164());}}
static double rlsc2_f1482(){if (rlsc2_p1482) return rlsc2_m1482; else {rlsc2_p1482=T;return rlsc2_m1482=(rlsc2_f1749()?(rlsc2_f1757()?((rlsc2_v2153=rlsc2_f2153()),(rlsc2_v1771=rlsc2_f1771()),((rlsc2_v2153>rlsc2_v1771)?rlsc2_v2153:rlsc2_v1771)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1508(){if (rlsc2_p1508) return rlsc2_m1508; else {rlsc2_p1508=T;return rlsc2_m1508=(rlsc2_f2051()?(rlsc2_f1996()?(rlsc2_f1971()?(rlsc2_f1942()?(rlsc2_f1722()?((rlsc2_v2153=rlsc2_f2153()),(rlsc2_v1721=rlsc2_f1721()),((rlsc2_v2153>rlsc2_v1721)?rlsc2_v2153:rlsc2_v1721)):(rlsc2_f1950()?((rlsc2_v2153=rlsc2_f2153()),(rlsc2_v1964=rlsc2_f1964()),((rlsc2_v2153>rlsc2_v1964)?rlsc2_v2153:rlsc2_v1964)):rlsc2_f2164())):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1503(){if (rlsc2_p1503) return rlsc2_m1503; else {rlsc2_p1503=T;return rlsc2_m1503=(rlsc2_f1895()?((rlsc2_v2153=rlsc2_f2153()),(rlsc2_v1909=rlsc2_f1909()),((rlsc2_v2153>rlsc2_v1909)?rlsc2_v2153:rlsc2_v1909)):rlsc2_f2164());}}
static double rlsc2_f1498(){if (rlsc2_p1498) return rlsc2_m1498; else {rlsc2_p1498=T;return rlsc2_m1498=(rlsc2_f1861()?(rlsc2_f1869()?((rlsc2_v2153=rlsc2_f2153()),(rlsc2_v1883=rlsc2_f1883()),((rlsc2_v2153>rlsc2_v1883)?rlsc2_v2153:rlsc2_v1883)):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f2336(){if (rlsc2_p2336) return rlsc2_m2336; else {rlsc2_p2336=T;return rlsc2_m2336=(rlsc2_f2339()?rlsc2_f2353():rlsc2_f2392());}}
static double rlsc2_f2338(){if (rlsc2_p2338) return rlsc2_m2338; else {rlsc2_p2338=T;return rlsc2_m2338=(rlsc2_f2339()?rlsc2_f2353():rlsc2_f2396());}}
static int rlsc2_f2337(){if (rlsc2_p2337) return rlsc2_m2337; else {rlsc2_p2337=T;return rlsc2_m2337=(rlsc2_f2338()<(0.0));}}
static int rlsc2_f2331(){if (rlsc2_p2331) return rlsc2_m2331; else {rlsc2_p2331=T;return rlsc2_m2331=(rlsc2_f2339()?((rlsc2_v2337=rlsc2_f2337()),(rlsc2_v2337?rlsc2_v2337:(fabs((rlsc2_f2336()-(0.0)))<rlsc2_v6259))):NIL);}}
static int rlsc2_f2292(){if (rlsc2_p2292) return rlsc2_m2292; else {rlsc2_p2292=T;return rlsc2_m2292=(rlsc2_f2331()?rlsc2_f2339():NIL);}}
static int rlsc2_f2734(){if (rlsc2_p2734) return rlsc2_m2734; else {rlsc2_p2734=T;return rlsc2_m2734=(fabs((((fabs((rlsc2_f2764()-(0.0)))<rlsc2_v6259)?rlsc2_f2759():((rlsc2_v2747=rlsc2_f2747()),(rlsc2_v2741=rlsc2_f2741()),sqrt(((rlsc2_v2747*rlsc2_v2747)+(rlsc2_v2741*rlsc2_v2741)))))-rlsc2_f5873()))<rlsc2_v6259);}}
static double rlsc2_f1518(){if (rlsc2_p1518) return rlsc2_m1518; else {rlsc2_p1518=T;return rlsc2_m1518=(rlsc2_f2734()?(rlsc2_f2678()?(rlsc2_f2653()?(rlsc2_f2386()?(rlsc2_f2166()?(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1604():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?((rlsc2_v2163=rlsc2_f2163()),(rlsc2_v1711=rlsc2_f1711()),((rlsc2_v2163>rlsc2_v1711)?rlsc2_v2163:rlsc2_v1711)):rlsc2_f1599()):rlsc2_f1594()):(rlsc2_f1887()?rlsc2_f1599():rlsc2_f2164())):(rlsc2_f1914()?rlsc2_f1594():rlsc2_f2164()))):(rlsc2_f1836()?rlsc2_f1604():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?((rlsc2_v2163=rlsc2_f2163()),(rlsc2_v1699=rlsc2_f1699()),((rlsc2_v2163>rlsc2_v1699)?rlsc2_v2163:rlsc2_v1699)):rlsc2_f1583()):rlsc2_f1578()):(rlsc2_f1776()?rlsc2_f1583():rlsc2_f2164())):(rlsc2_f1803()?rlsc2_f1578():rlsc2_f2164())))):rlsc2_f2164()):rlsc2_f2164()):(rlsc2_f2398()?(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1559():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?((rlsc2_v2642=rlsc2_f2642()),(rlsc2_v1711=rlsc2_f1711()),((rlsc2_v2642>rlsc2_v1711)?rlsc2_v2642:rlsc2_v1711)):rlsc2_f1554()):rlsc2_f1549()):(rlsc2_f1887()?rlsc2_f1554():rlsc2_f2164())):(rlsc2_f1914()?rlsc2_f1549():rlsc2_f2164()))):(rlsc2_f1836()?rlsc2_f1559():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?((rlsc2_v2642=rlsc2_f2642()),(rlsc2_v1699=rlsc2_f1699()),((rlsc2_v2642>rlsc2_v1699)?rlsc2_v2642:rlsc2_v1699)):rlsc2_f1538()):rlsc2_f1533()):(rlsc2_f1776()?rlsc2_f1538():rlsc2_f2164())):(rlsc2_f1803()?rlsc2_f1533():rlsc2_f2164())))):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164())):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f2164());}}
static double rlsc2_f1219(){if (rlsc2_p1219) return rlsc2_m1219; else {rlsc2_p1219=T;return rlsc2_m1219=(rlsc2_f2734()?(rlsc2_f2678()?(rlsc2_f2653()?((rlsc2_v2386=rlsc2_f2386()),(rlsc2_v2386?(rlsc2_f2166()?rlsc2_f2163():rlsc2_f1225()):(rlsc2_v2386?rlsc2_f1225():rlsc2_f1614()))):rlsc2_f1614()):rlsc2_f1614()):rlsc2_f1614());}}
static int rlsc2_f1157(){if (rlsc2_p1157) return rlsc2_m1157; else {rlsc2_p1157=T;return rlsc2_m1157=(rlsc2_f2734()?(rlsc2_f2678()?(rlsc2_f2653()?(rlsc2_f2386()?(rlsc2_f2166()?NIL:(rlsc2_f2398()?NIL:T)):T):T):T):T);}}
static int rlsc2_f1649(){if (rlsc2_p1649) return rlsc2_m1649; else {rlsc2_p1649=T;return rlsc2_m1649=(rlsc2_f2734()?(rlsc2_f2678()?(rlsc2_f2653()?(rlsc2_f2386()?(rlsc2_f2166()?T:rlsc2_f2398()):NIL):NIL):NIL):NIL);}}
static double rlsc2_f2126(){if (rlsc2_p2126) return rlsc2_m2126; else {rlsc2_p2126=T;return rlsc2_m2126=(rlsc2_f2734()?(rlsc2_f2678()?(rlsc2_f2653()?(rlsc2_f2386()?(rlsc2_f2166()?rlsc2_f2163():rlsc2_f2391()):rlsc2_f2171()):rlsc2_f2392()):rlsc2_f2392()):rlsc2_f2392());}}
static double rlsc2_f2158(){if (rlsc2_p2158) return rlsc2_m2158; else {rlsc2_p2158=T;return rlsc2_m2158=(rlsc2_f2734()?(rlsc2_f2678()?(rlsc2_f2653()?(rlsc2_f2386()?(rlsc2_f2166()?rlsc2_f2163():rlsc2_f2395()):rlsc2_f2173()):rlsc2_f2396()):rlsc2_f2396()):rlsc2_f2396());}}
static int rlsc2_f2711(){if (rlsc2_p2711) return rlsc2_m2711; else {rlsc2_p2711=T;return rlsc2_m2711=((rlsc2_v2734=rlsc2_f2734()),(rlsc2_v2734?((fabs((rlsc2_f2730()-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v2723=rlsc2_f2723()),((fabs((rlsc2_v2723-(0.0)))<rlsc2_v6259)?NIL:((rlsc2_v2723>(0.0))?rlsc2_f2718():(rlsc2_f2718()?NIL:T))))):(rlsc2_v2734?NIL:T)));}}
static int rlsc2_f2131(){if (rlsc2_p2131) return rlsc2_m2131; else {rlsc2_p2131=T;return rlsc2_m2131=((rlsc2_f2711()?(rlsc2_f2710()?(rlsc2_f2704()?rlsc2_f2158():(rlsc2_f2368()?(rlsc2_f2358()?(rlsc2_f2331()?(rlsc2_f2296()?rlsc2_f2153():rlsc2_f2338()):rlsc2_f2303()):(rlsc2_f2331()?rlsc2_f2338():rlsc2_f2396())):(rlsc2_f2358()?rlsc2_f2303():rlsc2_f2396()))):(rlsc2_f2280()?rlsc2_f2158():(rlsc2_f2261()?(rlsc2_f2247()?(rlsc2_f2220()?(rlsc2_f2184()?rlsc2_f2141():rlsc2_f2227()):rlsc2_f2191()):(rlsc2_f2220()?rlsc2_f2227():rlsc2_f2396())):(rlsc2_f2247()?rlsc2_f2191():rlsc2_f2396())))):rlsc2_f2396())<(0.0));}}
static int rlsc2_f2381(){if (rlsc2_p2381) return rlsc2_m2381; else {rlsc2_p2381=T;return rlsc2_m2381=(rlsc2_f2734()?(rlsc2_f2678()?(rlsc2_f2653()?(rlsc2_f2386()?rlsc2_f2398():rlsc2_f2385()):NIL):NIL):NIL);}}
static int rlsc2_f2105(){if (rlsc2_p2105) return rlsc2_m2105; else {rlsc2_p2105=T;return rlsc2_m2105=((rlsc2_v2711=rlsc2_f2711()),((rlsc2_v2711?(rlsc2_f2710()?(rlsc2_f2704()?rlsc2_f2381():(rlsc2_f2368()?(rlsc2_f2358()?(rlsc2_f2331()?(rlsc2_f2296()?(rlsc2_f2339()?rlsc2_f2304():NIL):rlsc2_f2339()):rlsc2_f2304()):rlsc2_f2292()):rlsc2_f2290())):(rlsc2_f2280()?rlsc2_f2381():(rlsc2_f2261()?(rlsc2_f2247()?(rlsc2_f2220()?(rlsc2_f2184()?(rlsc2_f2228()?rlsc2_f2192():NIL):rlsc2_f2228()):rlsc2_f2192()):rlsc2_f2180()):rlsc2_f2178()))):NIL)?((rlsc2_v2131=rlsc2_f2131()),(rlsc2_v2131?rlsc2_v2131:(fabs(((rlsc2_v2711?(rlsc2_f2710()?(rlsc2_f2704()?rlsc2_f2126():(rlsc2_f2368()?(rlsc2_f2358()?(rlsc2_f2331()?(rlsc2_f2296()?rlsc2_f2153():rlsc2_f2336()):rlsc2_f2301()):(rlsc2_f2331()?rlsc2_f2336():rlsc2_f2392())):(rlsc2_f2358()?rlsc2_f2301():rlsc2_f2392()))):(rlsc2_f2280()?rlsc2_f2126():(rlsc2_f2261()?(rlsc2_f2247()?(rlsc2_f2220()?(rlsc2_f2184()?rlsc2_f2141():rlsc2_f2225()):rlsc2_f2189()):(rlsc2_f2220()?rlsc2_f2225():rlsc2_f2392())):(rlsc2_f2247()?rlsc2_f2189():rlsc2_f2392())))):rlsc2_f2392())-(0.0)))<rlsc2_v6259))):NIL));}}
static double rlsc2_f1163(){if (rlsc2_p1163) return rlsc2_m1163; else {rlsc2_p1163=T;return rlsc2_m1163=(-(rlsc2_v2795?rlsc2_f1614():(rlsc2_f2105()?(rlsc2_f1654()?(rlsc2_f2711()?(rlsc2_f2710()?(rlsc2_f2704()?rlsc2_f1518():(rlsc2_f2368()?(rlsc2_f2358()?(rlsc2_f2331()?(rlsc2_f2296()?(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1508():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?((rlsc2_v2153=rlsc2_f2153()),(rlsc2_v1711=rlsc2_f1711()),((rlsc2_v2153>rlsc2_v1711)?rlsc2_v2153:rlsc2_v1711)):rlsc2_f1503()):rlsc2_f1498()):(rlsc2_f1887()?rlsc2_f1503():rlsc2_f2164())):(rlsc2_f1914()?rlsc2_f1498():rlsc2_f2164()))):(rlsc2_f1836()?rlsc2_f1508():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?((rlsc2_v2153=rlsc2_f2153()),(rlsc2_v1699=rlsc2_f1699()),((rlsc2_v2153>rlsc2_v1699)?rlsc2_v2153:rlsc2_v1699)):rlsc2_f1487()):rlsc2_f1482()):(rlsc2_f1776()?rlsc2_f1487():rlsc2_f2164())):(rlsc2_f1803()?rlsc2_f1482():rlsc2_f2164())))):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f1427()):rlsc2_f1379()):(rlsc2_f2331()?rlsc2_f1427():rlsc2_f2164())):(rlsc2_f2358()?rlsc2_f1379():rlsc2_f2164()))):(rlsc2_f2280()?rlsc2_f1518():(rlsc2_f2261()?(rlsc2_f2247()?(rlsc2_f2220()?(rlsc2_f2184()?(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1363():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?((rlsc2_v2141=rlsc2_f2141()),(rlsc2_v1711=rlsc2_f1711()),((rlsc2_v2141>rlsc2_v1711)?rlsc2_v2141:rlsc2_v1711)):rlsc2_f1358()):rlsc2_f1353()):(rlsc2_f1887()?rlsc2_f1358():rlsc2_f2164())):(rlsc2_f1914()?rlsc2_f1353():rlsc2_f2164()))):(rlsc2_f1836()?rlsc2_f1363():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?((rlsc2_v2141=rlsc2_f2141()),(rlsc2_v1699=rlsc2_f1699()),((rlsc2_v2141>rlsc2_v1699)?rlsc2_v2141:rlsc2_v1699)):rlsc2_f1342()):rlsc2_f1337()):(rlsc2_f1776()?rlsc2_f1342():rlsc2_f2164())):(rlsc2_f1803()?rlsc2_f1337():rlsc2_f2164())))):rlsc2_f2164()):rlsc2_f2164()):rlsc2_f1282()):rlsc2_f1234()):(rlsc2_f2220()?rlsc2_f1282():rlsc2_f2164())):(rlsc2_f2247()?rlsc2_f1234():rlsc2_f2164())))):rlsc2_f2164()):(rlsc2_f2711()?(rlsc2_f2710()?(rlsc2_f2704()?rlsc2_f1219():(rlsc2_f2368()?(rlsc2_f2358()?(rlsc2_f2331()?(rlsc2_f2296()?rlsc2_f2153():rlsc2_f1218()):rlsc2_f1215()):(rlsc2_f2331()?rlsc2_f1218():rlsc2_f1614())):(rlsc2_f2358()?rlsc2_f1215():rlsc2_f1614()))):(rlsc2_f2280()?rlsc2_f1219():(rlsc2_f2261()?(rlsc2_f2247()?(rlsc2_f2220()?(rlsc2_f2184()?rlsc2_f2141():rlsc2_f1208()):rlsc2_f1205()):(rlsc2_f2220()?rlsc2_f1208():rlsc2_f1614())):(rlsc2_f2247()?rlsc2_f1205():rlsc2_f1614())))):rlsc2_f1614())):(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1189():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?rlsc2_f1711():rlsc2_f1188()):rlsc2_f1185()):(rlsc2_f1887()?rlsc2_f1188():rlsc2_f1614())):(rlsc2_f1914()?rlsc2_f1185():rlsc2_f1614()))):(rlsc2_f1836()?rlsc2_f1189():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?rlsc2_f1699():rlsc2_f1178()):rlsc2_f1175()):(rlsc2_f1776()?rlsc2_f1178():rlsc2_f1614())):(rlsc2_f1803()?rlsc2_f1175():rlsc2_f1614())))):rlsc2_f1614()):rlsc2_f1614()))));}}
static double rlsc2_f140(){if (rlsc2_p140) return rlsc2_m140; else {rlsc2_p140=T;return rlsc2_m140=(rlsc2_f4035()?(rlsc2_f1042()?(rlsc2_f990()?(rlsc2_f781()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v778=rlsc2_f778()),((rlsc2_v1163<rlsc2_v778)?rlsc2_v1163:rlsc2_v778)):(rlsc2_f998()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v1037=rlsc2_f1037()),((rlsc2_v1163<rlsc2_v1037)?rlsc2_v1163:rlsc2_v1037)):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static double rlsc2_f114(){if (rlsc2_p114) return rlsc2_m114; else {rlsc2_p114=T;return rlsc2_m114=(rlsc2_f3627()?(rlsc2_f699()?(rlsc2_f647()?(rlsc2_f440()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v439=rlsc2_f439()),((rlsc2_v1163<rlsc2_v439)?rlsc2_v1163:rlsc2_v439)):(rlsc2_f655()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v694=rlsc2_f694()),((rlsc2_v1163<rlsc2_v694)?rlsc2_v1163:rlsc2_v694)):rlsc2_f779())):rlsc2_f779()):rlsc2_f779()):rlsc2_f779());}}
static int rlsc2_f1103(){if (rlsc2_p1103) return rlsc2_m1103; else {rlsc2_p1103=T;return rlsc2_m1103=(rlsc2_v2795?T:(rlsc2_f2105()?(rlsc2_f1654()?NIL:(rlsc2_f2711()?(rlsc2_f2710()?(rlsc2_f2704()?rlsc2_f1157():(rlsc2_f2368()?(rlsc2_f2358()?(rlsc2_f2331()?(rlsc2_f2296()?NIL:rlsc2_f1156()):rlsc2_f1153()):(rlsc2_f2331()?rlsc2_f1156():T)):(rlsc2_f2358()?rlsc2_f1153():T))):(rlsc2_f2280()?rlsc2_f1157():(rlsc2_f2261()?(rlsc2_f2247()?(rlsc2_f2220()?(rlsc2_f2184()?NIL:rlsc2_f1146()):rlsc2_f1143()):(rlsc2_f2220()?rlsc2_f1146():T)):(rlsc2_f2247()?rlsc2_f1143():T)))):T)):(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1128():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?NIL:rlsc2_f1127()):rlsc2_f1124()):(rlsc2_f1887()?rlsc2_f1127():T)):(rlsc2_f1914()?rlsc2_f1124():T))):(rlsc2_f1836()?rlsc2_f1128():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?NIL:rlsc2_f1117()):rlsc2_f1114()):(rlsc2_f1776()?rlsc2_f1117():T)):(rlsc2_f1803()?rlsc2_f1114():T)))):T):T)));}}
static int rlsc2_f1098(){if (rlsc2_p1098) return rlsc2_m1098; else {rlsc2_p1098=T;return rlsc2_m1098=((rlsc2_v1616?rlsc2_f1163():(rlsc2_f1103()?rlsc2_f2396():rlsc2_f1101()))>(0.0));}}
void rlsc2(rlsc2_a6281,rlsc2_a6279,rlsc2_a6277,rlsc2_a6275,rlsc2_a6273,rlsc2_a6271,rlsc2_a6269,rlsc2_a6267,rlsc2_a6265,rlsc2_a6263,rlsc2_a6259)
double rlsc2_a6281;
double rlsc2_a6279;
double rlsc2_a6277;
double rlsc2_a6275;
double rlsc2_a6273;
double rlsc2_a6271;
double rlsc2_a6269;
double rlsc2_a6267;
double rlsc2_a6265;
double rlsc2_a6263;
double rlsc2_a6259;
{ rlsc2_v6281=rlsc2_a6281;
  rlsc2_v6279=rlsc2_a6279;
  rlsc2_v6277=rlsc2_a6277;
  rlsc2_v6275=rlsc2_a6275;
  rlsc2_v6273=rlsc2_a6273;
  rlsc2_v6271=rlsc2_a6271;
  rlsc2_v6269=rlsc2_a6269;
  rlsc2_v6267=rlsc2_a6267;
  rlsc2_v6265=rlsc2_a6265;
  rlsc2_v6263=rlsc2_a6263;
  rlsc2_v6259=rlsc2_a6259;
  rlsc2_p3535=NIL;
  rlsc2_p3656=NIL;
  rlsc2_p3653=NIL;
  rlsc2_p744=NIL;
  rlsc2_p3644=NIL;
  rlsc2_p779=NIL;
  rlsc2_p3936=NIL;
  rlsc2_p1075=NIL;
  rlsc2_p4069=NIL;
  rlsc2_p4066=NIL;
  rlsc2_p1090=NIL;
  rlsc2_p4053=NIL;
  rlsc2_p1614=NIL;
  rlsc2_p1101=NIL;
  rlsc2_p2164=NIL;
  rlsc2_p2392=NIL;
  rlsc2_p2396=NIL;
  rlsc2_p2651=NIL;
  rlsc2_p2647=NIL;
  rlsc2_p2461=NIL;
  rlsc2_p6063=NIL;
  rlsc2_p6061=NIL;
  rlsc2_p6054=NIL;
  rlsc2_p6052=NIL;
  rlsc2_p6213=NIL;
  rlsc2_p6218=NIL;
  rlsc2_p6216=NIL;
  rlsc2_p5625=NIL;
  rlsc2_p5624=NIL;
  rlsc2_p4055=NIL;
  rlsc2_p4054=NIL;
  rlsc2_p4017=NIL;
  rlsc2_p4005=NIL;
  rlsc2_p4004=NIL;
  rlsc2_p984=NIL;
  rlsc2_p5623=NIL;
  rlsc2_p2759=NIL;
  rlsc2_p2776=NIL;
  rlsc2_p2625=NIL;
  rlsc2_p2624=NIL;
  rlsc2_p2603=NIL;
  rlsc2_p2611=NIL;
  rlsc2_p2621=NIL;
  rlsc2_p6252=NIL;
  rlsc2_p6250=NIL;
  rlsc2_p6247=NIL;
  rlsc2_p6194=NIL;
  rlsc2_p6245=NIL;
  rlsc2_p6210=NIL;
  rlsc2_p2622=NIL;
  rlsc2_p2619=NIL;
  rlsc2_p2520=NIL;
  rlsc2_p2513=NIL;
  rlsc2_p2519=NIL;
  rlsc2_p2583=NIL;
  rlsc2_p2581=NIL;
  rlsc2_p2602=NIL;
  rlsc2_p2601=NIL;
  rlsc2_p2571=NIL;
  rlsc2_p2569=NIL;
  rlsc2_p2610=NIL;
  rlsc2_p2579=NIL;
  rlsc2_p2577=NIL;
  rlsc2_p2557=NIL;
  rlsc2_p2574=NIL;
  rlsc2_p2563=NIL;
  rlsc2_p2555=NIL;
  rlsc2_p2545=NIL;
  rlsc2_p2559=NIL;
  rlsc2_p2558=NIL;
  rlsc2_p2608=NIL;
  rlsc2_p2597=NIL;
  rlsc2_p2591=NIL;
  rlsc2_p2584=NIL;
  rlsc2_p2457=NIL;
  rlsc2_p2443=NIL;
  rlsc2_p2524=NIL;
  rlsc2_p2541=NIL;
  rlsc2_p2615=NIL;
  rlsc2_p2535=NIL;
  rlsc2_p2497=NIL;
  rlsc2_p2618=NIL;
  rlsc2_p2429=NIL;
  rlsc2_p2406=NIL;
  rlsc2_p2617=NIL;
  rlsc2_p2538=NIL;
  rlsc2_p2496=NIL;
  rlsc2_p2616=NIL;
  rlsc2_p2531=NIL;
  rlsc2_p2494=NIL;
  rlsc2_p2492=NIL;
  rlsc2_p2491=NIL;
  rlsc2_p2489=NIL;
  rlsc2_p2480=NIL;
  rlsc2_p2478=NIL;
  rlsc2_p2477=NIL;
  rlsc2_p2475=NIL;
  rlsc2_p2466=NIL;
  rlsc2_p2530=NIL;
  rlsc2_p2613=NIL;
  rlsc2_p2523=NIL;
  rlsc2_p2509=NIL;
  rlsc2_p2501=NIL;
  rlsc2_p2522=NIL;
  rlsc2_p2511=NIL;
  rlsc2_p2612=NIL;
  rlsc2_p2528=NIL;
  rlsc2_p2463=NIL;
  rlsc2_p2450=NIL;
  rlsc2_p2425=NIL;
  rlsc2_p2436=NIL;
  rlsc2_p2424=NIL;
  rlsc2_p2419=NIL;
  rlsc2_p2411=NIL;
  rlsc2_p2399=NIL;
  rlsc2_p6244=NIL;
  rlsc2_p2103=NIL;
  rlsc2_p2094=NIL;
  rlsc2_p2092=NIL;
  rlsc2_p2093=NIL;
  rlsc2_p1985=NIL;
  rlsc2_p1982=NIL;
  rlsc2_p2089=NIL;
  rlsc2_p2101=NIL;
  rlsc2_p2100=NIL;
  rlsc2_p2099=NIL;
  rlsc2_p1978=NIL;
  rlsc2_p1975=NIL;
  rlsc2_p2098=NIL;
  rlsc2_p2096=NIL;
  rlsc2_p2087=NIL;
  rlsc2_p2028=NIL;
  rlsc2_p2050=NIL;
  rlsc2_p2070=NIL;
  rlsc2_p2086=NIL;
  rlsc2_p2083=NIL;
  rlsc2_p2072=NIL;
  rlsc2_p2082=NIL;
  rlsc2_p2021=NIL;
  rlsc2_p2019=NIL;
  rlsc2_p1933=NIL;
  rlsc2_p1913=NIL;
  rlsc2_p1926=NIL;
  rlsc2_p1932=NIL;
  rlsc2_p2025=NIL;
  rlsc2_p1841=NIL;
  rlsc2_p1834=NIL;
  rlsc2_p2040=NIL;
  rlsc2_p2049=NIL;
  rlsc2_p2027=NIL;
  rlsc2_p1843=NIL;
  rlsc2_p1833=NIL;
  rlsc2_p2026=NIL;
  rlsc2_p2047=NIL;
  rlsc2_p2035=NIL;
  rlsc2_p2069=NIL;
  rlsc2_p2068=NIL;
  rlsc2_p2009=NIL;
  rlsc2_p2007=NIL;
  rlsc2_p2081=NIL;
  rlsc2_p2017=NIL;
  rlsc2_p2001=NIL;
  rlsc2_p2015=NIL;
  rlsc2_p1995=NIL;
  rlsc2_p1993=NIL;
  rlsc2_p2012=NIL;
  rlsc2_p1996=NIL;
  rlsc2_p1971=NIL;
  rlsc2_p1964=NIL;
  rlsc2_p1963=NIL;
  rlsc2_p1951=NIL;
  rlsc2_p1950=NIL;
  rlsc2_p1195=NIL;
  rlsc2_p1721=NIL;
  rlsc2_p1947=NIL;
  rlsc2_p1949=NIL;
  rlsc2_p1948=NIL;
  rlsc2_p1942=NIL;
  rlsc2_p1941=NIL;
  rlsc2_p1727=NIL;
  rlsc2_p1729=NIL;
  rlsc2_p1728=NIL;
  rlsc2_p1722=NIL;
  rlsc2_p2079=NIL;
  rlsc2_p2064=NIL;
  rlsc2_p2058=NIL;
  rlsc2_p2792=NIL;
  rlsc2_p2783=NIL;
  rlsc2_p2781=NIL;
  rlsc2_p2782=NIL;
  rlsc2_p2667=NIL;
  rlsc2_p2664=NIL;
  rlsc2_p2778=NIL;
  rlsc2_p2790=NIL;
  rlsc2_p2789=NIL;
  rlsc2_p2788=NIL;
  rlsc2_p2660=NIL;
  rlsc2_p2657=NIL;
  rlsc2_p2787=NIL;
  rlsc2_p2785=NIL;
  rlsc2_p2772=NIL;
  rlsc2_p2710=NIL;
  rlsc2_p2733=NIL;
  rlsc2_p2753=NIL;
  rlsc2_p2771=NIL;
  rlsc2_p2768=NIL;
  rlsc2_p2755=NIL;
  rlsc2_p2767=NIL;
  rlsc2_p2703=NIL;
  rlsc2_p2701=NIL;
  rlsc2_p2377=NIL;
  rlsc2_p2357=NIL;
  rlsc2_p2370=NIL;
  rlsc2_p2376=NIL;
  rlsc2_p2707=NIL;
  rlsc2_p2285=NIL;
  rlsc2_p2278=NIL;
  rlsc2_p2723=NIL;
  rlsc2_p2732=NIL;
  rlsc2_p2709=NIL;
  rlsc2_p2287=NIL;
  rlsc2_p2277=NIL;
  rlsc2_p2708=NIL;
  rlsc2_p2730=NIL;
  rlsc2_p2718=NIL;
  rlsc2_p2752=NIL;
  rlsc2_p2751=NIL;
  rlsc2_p2691=NIL;
  rlsc2_p2689=NIL;
  rlsc2_p2766=NIL;
  rlsc2_p2699=NIL;
  rlsc2_p2683=NIL;
  rlsc2_p2697=NIL;
  rlsc2_p2677=NIL;
  rlsc2_p2675=NIL;
  rlsc2_p2694=NIL;
  rlsc2_p2678=NIL;
  rlsc2_p2653=NIL;
  rlsc2_p2642=NIL;
  rlsc2_p2641=NIL;
  rlsc2_p2627=NIL;
  rlsc2_p2398=NIL;
  rlsc2_p1225=NIL;
  rlsc2_p2163=NIL;
  rlsc2_p2391=NIL;
  rlsc2_p2395=NIL;
  rlsc2_p2394=NIL;
  rlsc2_p2386=NIL;
  rlsc2_p2171=NIL;
  rlsc2_p2173=NIL;
  rlsc2_p2172=NIL;
  rlsc2_p2385=NIL;
  rlsc2_p2166=NIL;
  rlsc2_p2764=NIL;
  rlsc2_p2747=NIL;
  rlsc2_p2741=NIL;
  rlsc2_p6256=NIL;
  rlsc2_p6220=NIL;
  rlsc2_p5878=NIL;
  rlsc2_p5876=NIL;
  rlsc2_p5875=NIL;
  rlsc2_p3641=NIL;
  rlsc2_p3609=NIL;
  rlsc2_p642=NIL;
  rlsc2_p632=NIL;
  rlsc2_p638=NIL;
  rlsc2_p640=NIL;
  rlsc2_p639=NIL;
  rlsc2_p637=NIL;
  rlsc2_p631=NIL;
  rlsc2_p540=NIL;
  rlsc2_p512=NIL;
  rlsc2_p630=NIL;
  rlsc2_p629=NIL;
  rlsc2_p636=NIL;
  rlsc2_p538=NIL;
  rlsc2_p513=NIL;
  rlsc2_p510=NIL;
  rlsc2_p505=NIL;
  rlsc2_p498=NIL;
  rlsc2_p504=NIL;
  rlsc2_p497=NIL;
  rlsc2_p480=NIL;
  rlsc2_p536=NIL;
  rlsc2_p493=NIL;
  rlsc2_p485=NIL;
  rlsc2_p534=NIL;
  rlsc2_p533=NIL;
  rlsc2_p521=NIL;
  rlsc2_p473=NIL;
  rlsc2_p470=NIL;
  rlsc2_p472=NIL;
  rlsc2_p471=NIL;
  rlsc2_p465=NIL;
  rlsc2_p464=NIL;
  rlsc2_p461=NIL;
  rlsc2_p463=NIL;
  rlsc2_p462=NIL;
  rlsc2_p456=NIL;
  rlsc2_p634=NIL;
  rlsc2_p591=NIL;
  rlsc2_p568=NIL;
  rlsc2_p589=NIL;
  rlsc2_p588=NIL;
  rlsc2_p576=NIL;
  rlsc2_p633=NIL;
  rlsc2_p627=NIL;
  rlsc2_p622=NIL;
  rlsc2_p615=NIL;
  rlsc2_p621=NIL;
  rlsc2_p560=NIL;
  rlsc2_p607=NIL;
  rlsc2_p614=NIL;
  rlsc2_p611=NIL;
  rlsc2_p602=NIL;
  rlsc2_p601=NIL;
  rlsc2_p550=NIL;
  rlsc2_p455=NIL;
  rlsc2_p430=NIL;
  rlsc2_p547=NIL;
  rlsc2_p549=NIL;
  rlsc2_p548=NIL;
  rlsc2_p542=NIL;
  rlsc2_p598=NIL;
  rlsc2_p3620=NIL;
  rlsc2_p3636=NIL;
  rlsc2_p3634=NIL;
  rlsc2_p3626=NIL;
  rlsc2_p3583=NIL;
  rlsc2_p3581=NIL;
  rlsc2_p3633=NIL;
  rlsc2_p3631=NIL;
  rlsc2_p3627=NIL;
  rlsc2_p594=NIL;
  rlsc2_p738=NIL;
  rlsc2_p733=NIL;
  rlsc2_p732=NIL;
  rlsc2_p736=NIL;
  rlsc2_p696=NIL;
  rlsc2_p673=NIL;
  rlsc2_p694=NIL;
  rlsc2_p693=NIL;
  rlsc2_p681=NIL;
  rlsc2_p735=NIL;
  rlsc2_p730=NIL;
  rlsc2_p725=NIL;
  rlsc2_p718=NIL;
  rlsc2_p724=NIL;
  rlsc2_p665=NIL;
  rlsc2_p710=NIL;
  rlsc2_p717=NIL;
  rlsc2_p714=NIL;
  rlsc2_p705=NIL;
  rlsc2_p704=NIL;
  rlsc2_p655=NIL;
  rlsc2_p439=NIL;
  rlsc2_p18=NIL;
  rlsc2_p652=NIL;
  rlsc2_p654=NIL;
  rlsc2_p653=NIL;
  rlsc2_p647=NIL;
  rlsc2_p646=NIL;
  rlsc2_p445=NIL;
  rlsc2_p447=NIL;
  rlsc2_p446=NIL;
  rlsc2_p440=NIL;
  rlsc2_p701=NIL;
  rlsc2_p699=NIL;
  rlsc2_p59=NIL;
  rlsc2_p418=NIL;
  rlsc2_p411=NIL;
  rlsc2_p435=NIL;
  rlsc2_p423=NIL;
  rlsc2_p422=NIL;
  rlsc2_p643=NIL;
  rlsc2_p448=NIL;
  rlsc2_p406=NIL;
  rlsc2_p405=NIL;
  rlsc2_p402=NIL;
  rlsc2_p404=NIL;
  rlsc2_p403=NIL;
  rlsc2_p397=NIL;
  rlsc2_p13=NIL;
  rlsc2_p4050=NIL;
  rlsc2_p4016=NIL;
  rlsc2_p983=NIL;
  rlsc2_p973=NIL;
  rlsc2_p979=NIL;
  rlsc2_p981=NIL;
  rlsc2_p980=NIL;
  rlsc2_p978=NIL;
  rlsc2_p972=NIL;
  rlsc2_p881=NIL;
  rlsc2_p853=NIL;
  rlsc2_p971=NIL;
  rlsc2_p970=NIL;
  rlsc2_p977=NIL;
  rlsc2_p879=NIL;
  rlsc2_p854=NIL;
  rlsc2_p851=NIL;
  rlsc2_p846=NIL;
  rlsc2_p839=NIL;
  rlsc2_p845=NIL;
  rlsc2_p838=NIL;
  rlsc2_p821=NIL;
  rlsc2_p877=NIL;
  rlsc2_p834=NIL;
  rlsc2_p826=NIL;
  rlsc2_p875=NIL;
  rlsc2_p303=NIL;
  rlsc2_p309=NIL;
  rlsc2_p304=NIL;
  rlsc2_p184=NIL;
  rlsc2_p874=NIL;
  rlsc2_p862=NIL;
  rlsc2_p814=NIL;
  rlsc2_p811=NIL;
  rlsc2_p813=NIL;
  rlsc2_p812=NIL;
  rlsc2_p806=NIL;
  rlsc2_p805=NIL;
  rlsc2_p802=NIL;
  rlsc2_p804=NIL;
  rlsc2_p803=NIL;
  rlsc2_p797=NIL;
  rlsc2_p975=NIL;
  rlsc2_p932=NIL;
  rlsc2_p909=NIL;
  rlsc2_p930=NIL;
  rlsc2_p320=NIL;
  rlsc2_p326=NIL;
  rlsc2_p321=NIL;
  rlsc2_p209=NIL;
  rlsc2_p929=NIL;
  rlsc2_p917=NIL;
  rlsc2_p974=NIL;
  rlsc2_p968=NIL;
  rlsc2_p963=NIL;
  rlsc2_p956=NIL;
  rlsc2_p962=NIL;
  rlsc2_p901=NIL;
  rlsc2_p948=NIL;
  rlsc2_p955=NIL;
  rlsc2_p952=NIL;
  rlsc2_p943=NIL;
  rlsc2_p942=NIL;
  rlsc2_p891=NIL;
  rlsc2_p769=NIL;
  rlsc2_p342=NIL;
  rlsc2_p340=NIL;
  rlsc2_p336=NIL;
  rlsc2_p351=NIL;
  rlsc2_p349=NIL;
  rlsc2_p230=NIL;
  rlsc2_p796=NIL;
  rlsc2_p343=NIL;
  rlsc2_p888=NIL;
  rlsc2_p890=NIL;
  rlsc2_p889=NIL;
  rlsc2_p883=NIL;
  rlsc2_p939=NIL;
  rlsc2_p4028=NIL;
  rlsc2_p4044=NIL;
  rlsc2_p4042=NIL;
  rlsc2_p4034=NIL;
  rlsc2_p3987=NIL;
  rlsc2_p3985=NIL;
  rlsc2_p4041=NIL;
  rlsc2_p4039=NIL;
  rlsc2_p4035=NIL;
  rlsc2_p935=NIL;
  rlsc2_p1083=NIL;
  rlsc2_p1078=NIL;
  rlsc2_p1077=NIL;
  rlsc2_p1081=NIL;
  rlsc2_p1039=NIL;
  rlsc2_p1016=NIL;
  rlsc2_p1037=NIL;
  rlsc2_p365=NIL;
  rlsc2_p371=NIL;
  rlsc2_p366=NIL;
  rlsc2_p257=NIL;
  rlsc2_p1036=NIL;
  rlsc2_p1024=NIL;
  rlsc2_p1080=NIL;
  rlsc2_p1073=NIL;
  rlsc2_p1068=NIL;
  rlsc2_p1061=NIL;
  rlsc2_p1067=NIL;
  rlsc2_p1008=NIL;
  rlsc2_p1053=NIL;
  rlsc2_p1060=NIL;
  rlsc2_p1057=NIL;
  rlsc2_p1048=NIL;
  rlsc2_p1047=NIL;
  rlsc2_p998=NIL;
  rlsc2_p35=NIL;
  rlsc2_p778=NIL;
  rlsc2_p387=NIL;
  rlsc2_p385=NIL;
  rlsc2_p381=NIL;
  rlsc2_p396=NIL;
  rlsc2_p394=NIL;
  rlsc2_p388=NIL;
  rlsc2_p278=NIL;
  rlsc2_p995=NIL;
  rlsc2_p997=NIL;
  rlsc2_p996=NIL;
  rlsc2_p990=NIL;
  rlsc2_p786=NIL;
  rlsc2_p788=NIL;
  rlsc2_p787=NIL;
  rlsc2_p989=NIL;
  rlsc2_p781=NIL;
  rlsc2_p1044=NIL;
  rlsc2_p1042=NIL;
  rlsc2_p85=NIL;
  rlsc2_p352=NIL;
  rlsc2_p237=NIL;
  rlsc2_p161=NIL;
  rlsc2_p30=NIL;
  rlsc2_p757=NIL;
  rlsc2_p750=NIL;
  rlsc2_p774=NIL;
  rlsc2_p762=NIL;
  rlsc2_p761=NIL;
  rlsc2_p986=NIL;
  rlsc2_p789=NIL;
  rlsc2_p745=NIL;
  rlsc2_p158=NIL;
  rlsc2_p5873=NIL;
  rlsc2_p2051=NIL;
  rlsc2_p1604=NIL;
  rlsc2_p1559=NIL;
  rlsc2_p1189=NIL;
  rlsc2_p1128=NIL;
  rlsc2_p1684=NIL;
  rlsc2_p1716=NIL;
  rlsc2_p1937=NIL;
  rlsc2_p2029=NIL;
  rlsc2_p1631=NIL;
  rlsc2_p5840=NIL;
  rlsc2_p1837=NIL;
  rlsc2_p1836=NIL;
  rlsc2_p1831=NIL;
  rlsc2_p1815=NIL;
  rlsc2_p1814=NIL;
  rlsc2_p1812=NIL;
  rlsc2_p1803=NIL;
  rlsc2_p1771=NIL;
  rlsc2_p1770=NIL;
  rlsc2_p1758=NIL;
  rlsc2_p1757=NIL;
  rlsc2_p1754=NIL;
  rlsc2_p1756=NIL;
  rlsc2_p1755=NIL;
  rlsc2_p1749=NIL;
  rlsc2_p1578=NIL;
  rlsc2_p1533=NIL;
  rlsc2_p1175=NIL;
  rlsc2_p1114=NIL;
  rlsc2_p1745=NIL;
  rlsc2_p1747=NIL;
  rlsc2_p1746=NIL;
  rlsc2_p1748=NIL;
  rlsc2_p1734=NIL;
  rlsc2_p1740=NIL;
  rlsc2_p1829=NIL;
  rlsc2_p1828=NIL;
  rlsc2_p1826=NIL;
  rlsc2_p1817=NIL;
  rlsc2_p1798=NIL;
  rlsc2_p1797=NIL;
  rlsc2_p1785=NIL;
  rlsc2_p1784=NIL;
  rlsc2_p1583=NIL;
  rlsc2_p1538=NIL;
  rlsc2_p1178=NIL;
  rlsc2_p1117=NIL;
  rlsc2_p1699=NIL;
  rlsc2_p1781=NIL;
  rlsc2_p1783=NIL;
  rlsc2_p1782=NIL;
  rlsc2_p1776=NIL;
  rlsc2_p1736=NIL;
  rlsc2_p2023=NIL;
  rlsc2_p2022=NIL;
  rlsc2_p1936=NIL;
  rlsc2_p1922=NIL;
  rlsc2_p1914=NIL;
  rlsc2_p1883=NIL;
  rlsc2_p1882=NIL;
  rlsc2_p1870=NIL;
  rlsc2_p1869=NIL;
  rlsc2_p1866=NIL;
  rlsc2_p1868=NIL;
  rlsc2_p1867=NIL;
  rlsc2_p1861=NIL;
  rlsc2_p1594=NIL;
  rlsc2_p1549=NIL;
  rlsc2_p1185=NIL;
  rlsc2_p1124=NIL;
  rlsc2_p1857=NIL;
  rlsc2_p1859=NIL;
  rlsc2_p1858=NIL;
  rlsc2_p1860=NIL;
  rlsc2_p1846=NIL;
  rlsc2_p1852=NIL;
  rlsc2_p1935=NIL;
  rlsc2_p1924=NIL;
  rlsc2_p1909=NIL;
  rlsc2_p1908=NIL;
  rlsc2_p1896=NIL;
  rlsc2_p1895=NIL;
  rlsc2_p1599=NIL;
  rlsc2_p1554=NIL;
  rlsc2_p1188=NIL;
  rlsc2_p1127=NIL;
  rlsc2_p1711=NIL;
  rlsc2_p1892=NIL;
  rlsc2_p1894=NIL;
  rlsc2_p1893=NIL;
  rlsc2_p1887=NIL;
  rlsc2_p1668=NIL;
  rlsc2_p1690=NIL;
  rlsc2_p1689=NIL;
  rlsc2_p1848=NIL;
  rlsc2_p1730=NIL;
  rlsc2_p1663=NIL;
  rlsc2_p1660=NIL;
  rlsc2_p1654=NIL;
  rlsc2_p2281=NIL;
  rlsc2_p2280=NIL;
  rlsc2_p2275=NIL;
  rlsc2_p2259=NIL;
  rlsc2_p2258=NIL;
  rlsc2_p2256=NIL;
  rlsc2_p2247=NIL;
  rlsc2_p2215=NIL;
  rlsc2_p1250=NIL;
  rlsc2_p1245=NIL;
  rlsc2_p1271=NIL;
  rlsc2_p1266=NIL;
  rlsc2_p1261=NIL;
  rlsc2_p2214=NIL;
  rlsc2_p2202=NIL;
  rlsc2_p2201=NIL;
  rlsc2_p2198=NIL;
  rlsc2_p2200=NIL;
  rlsc2_p2199=NIL;
  rlsc2_p2193=NIL;
  rlsc2_p1234=NIL;
  rlsc2_p1205=NIL;
  rlsc2_p1143=NIL;
  rlsc2_p2189=NIL;
  rlsc2_p2191=NIL;
  rlsc2_p2190=NIL;
  rlsc2_p2192=NIL;
  rlsc2_p2178=NIL;
  rlsc2_p2184=NIL;
  rlsc2_p2273=NIL;
  rlsc2_p2272=NIL;
  rlsc2_p2270=NIL;
  rlsc2_p2261=NIL;
  rlsc2_p2242=NIL;
  rlsc2_p1297=NIL;
  rlsc2_p1292=NIL;
  rlsc2_p1318=NIL;
  rlsc2_p1313=NIL;
  rlsc2_p1308=NIL;
  rlsc2_p2241=NIL;
  rlsc2_p2229=NIL;
  rlsc2_p2228=NIL;
  rlsc2_p1282=NIL;
  rlsc2_p1208=NIL;
  rlsc2_p1146=NIL;
  rlsc2_p2141=NIL;
  rlsc2_p1342=NIL;
  rlsc2_p1337=NIL;
  rlsc2_p1363=NIL;
  rlsc2_p1358=NIL;
  rlsc2_p1353=NIL;
  rlsc2_p2225=NIL;
  rlsc2_p2227=NIL;
  rlsc2_p2226=NIL;
  rlsc2_p2220=NIL;
  rlsc2_p2180=NIL;
  rlsc2_p2705=NIL;
  rlsc2_p2704=NIL;
  rlsc2_p2380=NIL;
  rlsc2_p2366=NIL;
  rlsc2_p2358=NIL;
  rlsc2_p2327=NIL;
  rlsc2_p1395=NIL;
  rlsc2_p1390=NIL;
  rlsc2_p1416=NIL;
  rlsc2_p1411=NIL;
  rlsc2_p1406=NIL;
  rlsc2_p2326=NIL;
  rlsc2_p2314=NIL;
  rlsc2_p2313=NIL;
  rlsc2_p2310=NIL;
  rlsc2_p2312=NIL;
  rlsc2_p2311=NIL;
  rlsc2_p2305=NIL;
  rlsc2_p1379=NIL;
  rlsc2_p1215=NIL;
  rlsc2_p1153=NIL;
  rlsc2_p2301=NIL;
  rlsc2_p2303=NIL;
  rlsc2_p2302=NIL;
  rlsc2_p2304=NIL;
  rlsc2_p2290=NIL;
  rlsc2_p2296=NIL;
  rlsc2_p2379=NIL;
  rlsc2_p2368=NIL;
  rlsc2_p2353=NIL;
  rlsc2_p1442=NIL;
  rlsc2_p1437=NIL;
  rlsc2_p1463=NIL;
  rlsc2_p1458=NIL;
  rlsc2_p1453=NIL;
  rlsc2_p2352=NIL;
  rlsc2_p2340=NIL;
  rlsc2_p2339=NIL;
  rlsc2_p1427=NIL;
  rlsc2_p1218=NIL;
  rlsc2_p1156=NIL;
  rlsc2_p2153=NIL;
  rlsc2_p1487=NIL;
  rlsc2_p1482=NIL;
  rlsc2_p1508=NIL;
  rlsc2_p1503=NIL;
  rlsc2_p1498=NIL;
  rlsc2_p2336=NIL;
  rlsc2_p2338=NIL;
  rlsc2_p2337=NIL;
  rlsc2_p2331=NIL;
  rlsc2_p2292=NIL;
  rlsc2_p2734=NIL;
  rlsc2_p1518=NIL;
  rlsc2_p1219=NIL;
  rlsc2_p1157=NIL;
  rlsc2_p1649=NIL;
  rlsc2_p2126=NIL;
  rlsc2_p2158=NIL;
  rlsc2_p2711=NIL;
  rlsc2_p2131=NIL;
  rlsc2_p2381=NIL;
  rlsc2_p2105=NIL;
  rlsc2_p1163=NIL;
  rlsc2_p140=NIL;
  rlsc2_p114=NIL;
  rlsc2_p1103=NIL;
  rlsc2_p1098=NIL;
  double_or_symbol_result=((rlsc2_v6261=(rlsc2_v6265-rlsc2_v6273)),(rlsc2_v2795=((fabs(rlsc2_v6261)<rlsc2_v6259)?(fabs(rlsc2_f6256())<rlsc2_v6259):NIL)),(rlsc2_v1616=(rlsc2_v2795?NIL:(rlsc2_f2105()?(rlsc2_f1654()?T:(rlsc2_f2711()?(rlsc2_f2710()?(rlsc2_f2704()?rlsc2_f1649():(rlsc2_f2368()?(rlsc2_f2358()?(rlsc2_f2331()?(rlsc2_f2296()?T:rlsc2_f2339()):rlsc2_f2304()):rlsc2_f2292()):rlsc2_f2290())):(rlsc2_f2280()?rlsc2_f1649():(rlsc2_f2261()?(rlsc2_f2247()?(rlsc2_f2220()?(rlsc2_f2184()?T:rlsc2_f2228()):rlsc2_f2192()):rlsc2_f2180()):rlsc2_f2178()))):NIL)):(rlsc2_f1663()?(rlsc2_f2029()?(rlsc2_f2028()?(rlsc2_f2022()?rlsc2_f1631():(rlsc2_f1924()?(rlsc2_f1914()?(rlsc2_f1887()?(rlsc2_f1852()?T:rlsc2_f1895()):rlsc2_f1860()):rlsc2_f1848()):rlsc2_f1846())):(rlsc2_f1836()?rlsc2_f1631():(rlsc2_f1817()?(rlsc2_f1803()?(rlsc2_f1776()?(rlsc2_f1740()?T:rlsc2_f1784()):rlsc2_f1748()):rlsc2_f1736()):rlsc2_f1734()))):NIL):NIL)))),((rlsc2_v1616?((rlsc2_v1098=rlsc2_f1098()),(rlsc2_v1098?rlsc2_v1098:(fabs(((rlsc2_v1616?rlsc2_f1163():(rlsc2_f1103()?rlsc2_f2392():rlsc2_f1101()))-(0.0)))<rlsc2_v6259))):NIL)?((rlsc2_v745=rlsc2_f745()),(((rlsc2_v745?(rlsc2_f397()?(rlsc2_f1090()?NIL:(rlsc2_f4054()?NIL:(rlsc2_f4042()?rlsc2_f352():(rlsc2_f980()?rlsc2_f352():(rlsc2_f935()?(rlsc2_f883()?(rlsc2_f797()?(rlsc2_f406()?(rlsc2_f744()?NIL:(rlsc2_f3634()?rlsc2_f343():(rlsc2_f639()?rlsc2_f343():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f342()?rlsc2_f796():rlsc2_f455()):(rlsc2_f550()?(rlsc2_f340()?rlsc2_f796():T):NIL)):(rlsc2_f465()?(rlsc2_f473()?(rlsc2_f336()?rlsc2_f796():T):NIL):NIL)):NIL)))):NIL):(rlsc2_f891()?(rlsc2_f406()?(rlsc2_f744()?NIL:(rlsc2_f3634()?rlsc2_f321():(rlsc2_f639()?rlsc2_f321():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f320()?T:rlsc2_f455()):rlsc2_f550()):rlsc2_f464()):NIL)))):NIL):NIL)):(rlsc2_f806()?(rlsc2_f814()?(rlsc2_f406()?(rlsc2_f744()?NIL:(rlsc2_f3634()?rlsc2_f304():(rlsc2_f639()?rlsc2_f304():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?(rlsc2_f303()?T:rlsc2_f455()):rlsc2_f550()):rlsc2_f464()):NIL)))):NIL):NIL):NIL)):NIL))))):rlsc2_f789()):rlsc2_f405())?((rlsc2_v158=rlsc2_f158()),(rlsc2_v158?rlsc2_v158:(fabs(((rlsc2_v745?(rlsc2_f397()?rlsc2_f161():rlsc2_f750()):rlsc2_f402())-(0.0)))<rlsc2_v6259))):NIL)?coerce_double_to_double_or_symbol((rlsc2_v1616?(rlsc2_v745?(rlsc2_f397()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v161=rlsc2_f161()),((rlsc2_v1163<rlsc2_v161)?rlsc2_v1163:rlsc2_v161)):(rlsc2_f1090()?rlsc2_f779():(rlsc2_f4054()?rlsc2_f779():(rlsc2_f4042()?rlsc2_f140():(rlsc2_f980()?rlsc2_f140():(rlsc2_f935()?(rlsc2_f883()?(rlsc2_f797()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v769=rlsc2_f769()),((rlsc2_v1163<rlsc2_v769)?rlsc2_v1163:rlsc2_v769)):(rlsc2_f891()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v930=rlsc2_f930()),((rlsc2_v1163<rlsc2_v930)?rlsc2_v1163:rlsc2_v930)):rlsc2_f779())):(rlsc2_f806()?(rlsc2_f814()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v875=rlsc2_f875()),((rlsc2_v1163<rlsc2_v875)?rlsc2_v1163:rlsc2_v875)):rlsc2_f779()):rlsc2_f779())):rlsc2_f779())))))):(rlsc2_f406()?(rlsc2_f744()?rlsc2_f779():(rlsc2_f4054()?rlsc2_f779():(rlsc2_f3634()?rlsc2_f114():(rlsc2_f639()?rlsc2_f114():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v430=rlsc2_f430()),((rlsc2_v1163<rlsc2_v430)?rlsc2_v1163:rlsc2_v430)):(rlsc2_f550()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v589=rlsc2_f589()),((rlsc2_v1163<rlsc2_v589)?rlsc2_v1163:rlsc2_v589)):rlsc2_f779())):(rlsc2_f465()?(rlsc2_f473()?((rlsc2_v1163=rlsc2_f1163()),(rlsc2_v534=rlsc2_f534()),((rlsc2_v1163<rlsc2_v534)?rlsc2_v1163:rlsc2_v534)):rlsc2_f779()):rlsc2_f779())):rlsc2_f779()))))):rlsc2_f779())):(rlsc2_f1103()?rlsc2_f779():(rlsc2_v745?(rlsc2_f397()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v161=rlsc2_f161()),((rlsc2_v1101<rlsc2_v161)?rlsc2_v1101:rlsc2_v161)):(rlsc2_f1090()?rlsc2_f779():(rlsc2_f4054()?rlsc2_f779():(rlsc2_f4042()?rlsc2_f85():(rlsc2_f980()?rlsc2_f85():(rlsc2_f935()?(rlsc2_f883()?(rlsc2_f797()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v769=rlsc2_f769()),((rlsc2_v1101<rlsc2_v769)?rlsc2_v1101:rlsc2_v769)):(rlsc2_f891()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v930=rlsc2_f930()),((rlsc2_v1101<rlsc2_v930)?rlsc2_v1101:rlsc2_v930)):rlsc2_f779())):(rlsc2_f806()?(rlsc2_f814()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v875=rlsc2_f875()),((rlsc2_v1101<rlsc2_v875)?rlsc2_v1101:rlsc2_v875)):rlsc2_f779()):rlsc2_f779())):rlsc2_f779())))))):(rlsc2_f406()?(rlsc2_f744()?rlsc2_f779():(rlsc2_f4054()?rlsc2_f779():(rlsc2_f3634()?rlsc2_f59():(rlsc2_f639()?rlsc2_f59():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v430=rlsc2_f430()),((rlsc2_v1101<rlsc2_v430)?rlsc2_v1101:rlsc2_v430)):(rlsc2_f550()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v589=rlsc2_f589()),((rlsc2_v1101<rlsc2_v589)?rlsc2_v1101:rlsc2_v589)):rlsc2_f779())):(rlsc2_f465()?(rlsc2_f473()?((rlsc2_v1101=rlsc2_f1101()),(rlsc2_v534=rlsc2_f534()),((rlsc2_v1101<rlsc2_v534)?rlsc2_v1101:rlsc2_v534)):rlsc2_f779()):rlsc2_f779())):rlsc2_f779()))))):rlsc2_f779()))))):(rlsc2_v1616?coerce_double_to_double_or_symbol(rlsc2_f1163()):coerce_symbol_to_double_or_symbol((rlsc2_f1103()?NIL:rlsc2_f1101()))))):(rlsc2_f745()?(rlsc2_f397()?coerce_double_to_double_or_symbol(rlsc2_f161()):(rlsc2_f1090()?coerce_symbol_to_double_or_symbol(NIL):(rlsc2_f4054()?coerce_symbol_to_double_or_symbol(NIL):(rlsc2_f4042()?rlsc2_f30():(rlsc2_f980()?rlsc2_f30():(rlsc2_f935()?(rlsc2_f883()?(rlsc2_f797()?coerce_double_to_double_or_symbol(rlsc2_f769()):(rlsc2_f891()?coerce_double_to_double_or_symbol(rlsc2_f930()):coerce_symbol_to_double_or_symbol(NIL))):(rlsc2_f806()?(rlsc2_f814()?coerce_double_to_double_or_symbol(rlsc2_f875()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))):coerce_symbol_to_double_or_symbol(NIL))))))):(rlsc2_f406()?(rlsc2_f744()?coerce_symbol_to_double_or_symbol(NIL):(rlsc2_f4054()?coerce_symbol_to_double_or_symbol(NIL):(rlsc2_f3634()?rlsc2_f13():(rlsc2_f639()?rlsc2_f13():(rlsc2_f594()?(rlsc2_f542()?(rlsc2_f456()?coerce_double_to_double_or_symbol(rlsc2_f430()):(rlsc2_f550()?coerce_double_to_double_or_symbol(rlsc2_f589()):coerce_symbol_to_double_or_symbol(NIL))):(rlsc2_f465()?(rlsc2_f473()?coerce_double_to_double_or_symbol(rlsc2_f534()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))):coerce_symbol_to_double_or_symbol(NIL)))))):coerce_symbol_to_double_or_symbol(NIL))))); return;}
