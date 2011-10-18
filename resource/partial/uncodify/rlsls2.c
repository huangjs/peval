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
double rlsls2_v7330;
double rlsls2_v7328;
double rlsls2_v7326;
double rlsls2_v7324;
double rlsls2_v7322;
double rlsls2_v7320;
double rlsls2_v7318;
double rlsls2_v7316;
double rlsls2_v7314;
double rlsls2_v7312;
double rlsls2_v7308;
double rlsls2_v7310;
int rlsls2_p4788;
double rlsls2_m4788;
int rlsls2_p1507;
double rlsls2_m1507;
int rlsls2_p1509;
double rlsls2_m1509;
int rlsls2_p1419;
double rlsls2_m1419;
int rlsls2_p5522;
double rlsls2_m5522;
int rlsls2_p5675;
double rlsls2_m5675;
int rlsls2_p5673;
double rlsls2_m5673;
int rlsls2_p5666;
double rlsls2_m5666;
int rlsls2_p5664;
double rlsls2_m5664;
int rlsls2_p6280;
double rlsls2_m6280;
int rlsls2_p6438;
double rlsls2_m6438;
int rlsls2_p5833;
int rlsls2_m5833;
int rlsls2_p6437;
double rlsls2_m6437;
int rlsls2_p5831;
int rlsls2_m5831;
int rlsls2_p6461;
double rlsls2_m6461;
int rlsls2_p6458;
double rlsls2_m6458;
int rlsls2_p2598;
int rlsls2_m2598;
int rlsls2_p6432;
double rlsls2_m6432;
int rlsls2_p2594;
int rlsls2_m2594;
int rlsls2_v2594;
int rlsls2_p2590;
int rlsls2_m2590;
int rlsls2_p1984;
int rlsls2_m1984;
double rlsls2_v6461;
double rlsls2_v6458;
int rlsls2_p6446;
double rlsls2_m6446;
int rlsls2_p2665;
double rlsls2_m2665;
int rlsls2_p3078;
double rlsls2_m3078;
int rlsls2_p3083;
double rlsls2_m3083;
int rlsls2_p6935;
double rlsls2_m6935;
int rlsls2_p3148;
double rlsls2_m3148;
int rlsls2_p3144;
double rlsls2_m3144;
int rlsls2_p6984;
double rlsls2_m6984;
int rlsls2_p6983;
double rlsls2_m6983;
int rlsls2_p2089;
int rlsls2_m2089;
double rlsls2_v6983;
double rlsls2_v6984;
int rlsls2_p5783;
double rlsls2_m5783;
int rlsls2_p6959;
double rlsls2_m6959;
int rlsls2_p6958;
double rlsls2_m6958;
int rlsls2_p1408;
int rlsls2_m1408;
double rlsls2_v6958;
double rlsls2_v6959;
int rlsls2_p4942;
double rlsls2_m4942;
int rlsls2_p7117;
double rlsls2_m7117;
int rlsls2_p7115;
double rlsls2_m7115;
int rlsls2_p7108;
double rlsls2_m7108;
int rlsls2_p7106;
double rlsls2_m7106;
int rlsls2_p7229;
double rlsls2_m7229;
int rlsls2_p5829;
double rlsls2_m5829;
int rlsls2_p3265;
double rlsls2_m3265;
int rlsls2_p3280;
double rlsls2_m3280;
int rlsls2_p2076;
double rlsls2_m2076;
int rlsls2_p2087;
double rlsls2_m2087;
int rlsls2_p2052;
int rlsls2_m2052;
int rlsls2_p2074;
double rlsls2_m2074;
double rlsls2_v2087;
int rlsls2_p2086;
double rlsls2_m2086;
int rlsls2_p2084;
double rlsls2_m2084;
int rlsls2_p1377;
double rlsls2_m1377;
int rlsls2_p1374;
int rlsls2_m1374;
int rlsls2_p1373;
int rlsls2_m1373;
int rlsls2_p1372;
int rlsls2_m1372;
int rlsls2_p1892;
double rlsls2_m1892;
int rlsls2_p1867;
int rlsls2_m1867;
int rlsls2_p1858;
int rlsls2_m1858;
int rlsls2_p1830;
int rlsls2_m1830;
int rlsls2_p1853;
double rlsls2_m1853;
int rlsls2_p1885;
int rlsls2_m1885;
int rlsls2_p1891;
double rlsls2_m1891;
int rlsls2_p1947;
double rlsls2_m1947;
int rlsls2_p1944;
int rlsls2_m1944;
int rlsls2_p1929;
int rlsls2_m1929;
int rlsls2_p1928;
int rlsls2_m1928;
int rlsls2_p2043;
int rlsls2_m2043;
int rlsls2_p2041;
double rlsls2_m2041;
double rlsls2_v2084;
int rlsls2_p2047;
double rlsls2_m2047;
int rlsls2_p1716;
double rlsls2_m1716;
double rlsls2_v1716;
int rlsls2_p1709;
double rlsls2_m1709;
int rlsls2_p2049;
double rlsls2_m2049;
int rlsls2_p1718;
double rlsls2_m1718;
int rlsls2_p1708;
double rlsls2_m1708;
double rlsls2_v1718;
int rlsls2_p1717;
double rlsls2_m1717;
double rlsls2_v2049;
int rlsls2_p2048;
double rlsls2_m2048;
int rlsls2_p2046;
double rlsls2_m2046;
int rlsls2_p2073;
double rlsls2_m2073;
int rlsls2_p2072;
double rlsls2_m2072;
int rlsls2_p2031;
double rlsls2_m2031;
int rlsls2_p2029;
double rlsls2_m2029;
int rlsls2_p2083;
double rlsls2_m2083;
int rlsls2_p2039;
double rlsls2_m2039;
int rlsls2_p2037;
double rlsls2_m2037;
int rlsls2_p2017;
double rlsls2_m2017;
int rlsls2_p2034;
int rlsls2_m2034;
int rlsls2_p1977;
double rlsls2_m1977;
int rlsls2_p2023;
double rlsls2_m2023;
int rlsls2_p2015;
double rlsls2_m2015;
double rlsls2_v2017;
double rlsls2_v2015;
int rlsls2_p2005;
int rlsls2_m2005;
int rlsls2_p1951;
int rlsls2_m1951;
int rlsls2_p1979;
double rlsls2_m1979;
int rlsls2_p1975;
double rlsls2_m1975;
int rlsls2_p1394;
double rlsls2_m1394;
int rlsls2_p1393;
double rlsls2_m1393;
double rlsls2_v1393;
int rlsls2_p1381;
int rlsls2_m1381;
int rlsls2_p1942;
double rlsls2_m1942;
double rlsls2_v1942;
int rlsls2_p1934;
double rlsls2_m1934;
int rlsls2_p1931;
int rlsls2_m1931;
int rlsls2_p1930;
int rlsls2_m1930;
int rlsls2_p1973;
double rlsls2_m1973;
int rlsls2_p1972;
double rlsls2_m1972;
double rlsls2_v1972;
int rlsls2_p1960;
int rlsls2_m1960;
int rlsls2_p1997;
int rlsls2_m1997;
int rlsls2_p1994;
int rlsls2_m1994;
int rlsls2_p1985;
int rlsls2_m1985;
int rlsls2_p1982;
int rlsls2_m1982;
int rlsls2_p2019;
int rlsls2_m2019;
int rlsls2_p2018;
int rlsls2_m2018;
int rlsls2_p1959;
int rlsls2_m1959;
int rlsls2_v1381;
int rlsls2_v1959;
int rlsls2_p1365;
int rlsls2_m1365;
int rlsls2_v1960;
int rlsls2_v1959;
int rlsls2_p1921;
int rlsls2_m1921;
int rlsls2_p2081;
double rlsls2_m2081;
int rlsls2_p2068;
double rlsls2_m2068;
int rlsls2_p2062;
double rlsls2_m2062;
double rlsls2_v2068;
double rlsls2_v2062;
int rlsls2_p2058;
double rlsls2_m2058;
int rlsls2_p7293;
double rlsls2_m7293;
int rlsls2_p7291;
int rlsls2_m7291;
int rlsls2_p7288;
double rlsls2_m7288;
int rlsls2_p6979;
double rlsls2_m6979;
int rlsls2_p3176;
int rlsls2_m3176;
int rlsls2_v3176;
int rlsls2_p3172;
int rlsls2_m3172;
int rlsls2_p1983;
int rlsls2_m1983;
int rlsls2_p3171;
int rlsls2_m3171;
int rlsls2_p2585;
int rlsls2_m2585;
int rlsls2_p7296;
double rlsls2_m7296;
int rlsls2_p6954;
double rlsls2_m6954;
int rlsls2_p3159;
int rlsls2_m3159;
int rlsls2_v3159;
int rlsls2_p3155;
int rlsls2_m3155;
int rlsls2_p1398;
int rlsls2_m1398;
int rlsls2_p3154;
int rlsls2_m3154;
int rlsls2_p2583;
int rlsls2_m2583;
int rlsls2_p7294;
int rlsls2_m7294;
int rlsls2_p3276;
double rlsls2_m3276;
int rlsls2_p3232;
int rlsls2_m3232;
int rlsls2_p3261;
double rlsls2_m3261;
double rlsls2_v3276;
int rlsls2_p3275;
double rlsls2_m3275;
int rlsls2_p7287;
double rlsls2_m7287;
int rlsls2_p3263;
double rlsls2_m3263;
int rlsls2_p3273;
double rlsls2_m3273;
int rlsls2_p2562;
double rlsls2_m2562;
int rlsls2_p2559;
int rlsls2_m2559;
int rlsls2_p2558;
int rlsls2_m2558;
int rlsls2_p2557;
int rlsls2_m2557;
int rlsls2_p3062;
double rlsls2_m3062;
int rlsls2_p3037;
int rlsls2_m3037;
int rlsls2_p3028;
int rlsls2_m3028;
int rlsls2_p3000;
int rlsls2_m3000;
int rlsls2_p3023;
double rlsls2_m3023;
int rlsls2_p3055;
int rlsls2_m3055;
int rlsls2_p3061;
double rlsls2_m3061;
int rlsls2_p3111;
double rlsls2_m3111;
int rlsls2_p3108;
int rlsls2_m3108;
int rlsls2_p3094;
int rlsls2_m3094;
int rlsls2_p3093;
int rlsls2_m3093;
int rlsls2_p3223;
int rlsls2_m3223;
int rlsls2_p3221;
double rlsls2_m3221;
double rlsls2_v3273;
int rlsls2_p3227;
double rlsls2_m3227;
int rlsls2_p2882;
double rlsls2_m2882;
double rlsls2_v2882;
int rlsls2_p2875;
double rlsls2_m2875;
int rlsls2_p3229;
double rlsls2_m3229;
int rlsls2_p2885;
double rlsls2_m2885;
int rlsls2_p2874;
double rlsls2_m2874;
double rlsls2_v2885;
int rlsls2_p2884;
double rlsls2_m2884;
double rlsls2_v3229;
int rlsls2_p3228;
double rlsls2_m3228;
int rlsls2_p3226;
double rlsls2_m3226;
int rlsls2_p3260;
double rlsls2_m3260;
int rlsls2_p3259;
double rlsls2_m3259;
int rlsls2_p3211;
double rlsls2_m3211;
int rlsls2_p3209;
double rlsls2_m3209;
int rlsls2_p3272;
double rlsls2_m3272;
int rlsls2_p3219;
double rlsls2_m3219;
int rlsls2_p3217;
double rlsls2_m3217;
int rlsls2_p3197;
double rlsls2_m3197;
int rlsls2_p3214;
int rlsls2_m3214;
int rlsls2_p3143;
double rlsls2_m3143;
int rlsls2_p3203;
double rlsls2_m3203;
int rlsls2_p3195;
double rlsls2_m3195;
double rlsls2_v3197;
double rlsls2_v3195;
int rlsls2_p3185;
int rlsls2_m3185;
int rlsls2_p3115;
int rlsls2_m3115;
int rlsls2_p3147;
double rlsls2_m3147;
int rlsls2_p3141;
double rlsls2_m3141;
int rlsls2_p2579;
double rlsls2_m2579;
int rlsls2_p817;
int rlsls2_m817;
int rlsls2_p689;
double rlsls2_m689;
int rlsls2_p2578;
double rlsls2_m2578;
double rlsls2_v2578;
int rlsls2_p2566;
int rlsls2_m2566;
int rlsls2_p3107;
double rlsls2_m3107;
double rlsls2_v3107;
int rlsls2_p3099;
double rlsls2_m3099;
int rlsls2_p3096;
int rlsls2_m3096;
int rlsls2_p3095;
int rlsls2_m3095;
int rlsls2_p3139;
double rlsls2_m3139;
double rlsls2_v3139;
double rlsls2_v1419;
int rlsls2_p476;
double rlsls2_m476;
int rlsls2_p3138;
double rlsls2_m3138;
double rlsls2_v3138;
int rlsls2_p3124;
int rlsls2_m3124;
int rlsls2_p3177;
int rlsls2_m3177;
int rlsls2_p3169;
int rlsls2_m3169;
int rlsls2_p3160;
int rlsls2_m3160;
int rlsls2_p3152;
int rlsls2_m3152;
int rlsls2_p2581;
int rlsls2_m2581;
int rlsls2_p3199;
int rlsls2_m3199;
int rlsls2_p3198;
int rlsls2_m3198;
int rlsls2_p3123;
int rlsls2_m3123;
int rlsls2_v2566;
int rlsls2_v3123;
int rlsls2_p2550;
int rlsls2_m2550;
int rlsls2_p43;
double_or_symbol rlsls2_m43;
int rlsls2_p2154;
double rlsls2_m2154;
int rlsls2_p830;
int rlsls2_m830;
int rlsls2_p701;
double rlsls2_m701;
int rlsls2_p2549;
int rlsls2_m2549;
int rlsls2_p829;
int rlsls2_m829;
int rlsls2_p2544;
double rlsls2_m2544;
int rlsls2_p2547;
double rlsls2_m2547;
int rlsls2_p2546;
int rlsls2_m2546;
int rlsls2_v2546;
int rlsls2_p2539;
int rlsls2_m2539;
int rlsls2_p2161;
double rlsls2_m2161;
int rlsls2_p2163;
double rlsls2_m2163;
int rlsls2_p2162;
int rlsls2_m2162;
int rlsls2_p2538;
int rlsls2_m2538;
int rlsls2_v2162;
int rlsls2_p2156;
int rlsls2_m2156;
int rlsls2_v3124;
int rlsls2_v3123;
int rlsls2_p3086;
int rlsls2_m3086;
int rlsls2_p3270;
double rlsls2_m3270;
int rlsls2_p3255;
double rlsls2_m3255;
int rlsls2_p3249;
double rlsls2_m3249;
double rlsls2_v3255;
double rlsls2_v3249;
int rlsls2_p3245;
double rlsls2_m3245;
int rlsls2_p7305;
double rlsls2_m7305;
int rlsls2_v3282;
int rlsls2_p7224;
double rlsls2_m7224;
int rlsls2_p3240;
int rlsls2_m3240;
int rlsls2_v3240;
int rlsls2_p3236;
int rlsls2_m3236;
int rlsls2_p1996;
int rlsls2_m1996;
int rlsls2_p1400;
int rlsls2_m1400;
int rlsls2_p1396;
int rlsls2_m1396;
int rlsls2_p970;
double rlsls2_m970;
int rlsls2_p1364;
int rlsls2_m1364;
int rlsls2_p1359;
double rlsls2_m1359;
int rlsls2_p1362;
double rlsls2_m1362;
int rlsls2_p1361;
int rlsls2_m1361;
int rlsls2_v1361;
int rlsls2_p1354;
int rlsls2_m1354;
int rlsls2_p1351;
int rlsls2_m1351;
int rlsls2_v1354;
int rlsls2_v1351;
int rlsls2_p1345;
int rlsls2_m1345;
int rlsls2_p1995;
int rlsls2_m1995;
int rlsls2_p1980;
int rlsls2_m1980;
int rlsls2_p1503;
double rlsls2_m1503;
int rlsls2_p1920;
int rlsls2_m1920;
int rlsls2_p1915;
double rlsls2_m1915;
int rlsls2_p1918;
double rlsls2_m1918;
int rlsls2_p1917;
int rlsls2_m1917;
int rlsls2_v1917;
int rlsls2_p1910;
int rlsls2_m1910;
int rlsls2_p1907;
int rlsls2_m1907;
int rlsls2_v1910;
int rlsls2_v1907;
int rlsls2_p1901;
int rlsls2_m1901;
int rlsls2_p3170;
int rlsls2_m3170;
int rlsls2_p3153;
int rlsls2_m3153;
int rlsls2_p3150;
int rlsls2_m3150;
int rlsls2_p79;
double_or_symbol rlsls2_m79;
int rlsls2_p2663;
double rlsls2_m2663;
double rlsls2_v2663;
double rlsls2_v1419;
int rlsls2_p524;
double rlsls2_m524;
int rlsls2_p3085;
int rlsls2_m3085;
int rlsls2_p3076;
double rlsls2_m3076;
int rlsls2_p3081;
double rlsls2_m3081;
int rlsls2_p3080;
int rlsls2_m3080;
int rlsls2_v3080;
int rlsls2_p3071;
int rlsls2_m3071;
int rlsls2_p2672;
double rlsls2_m2672;
int rlsls2_p2674;
double rlsls2_m2674;
int rlsls2_p2673;
int rlsls2_m2673;
int rlsls2_p3070;
int rlsls2_m3070;
int rlsls2_v2673;
int rlsls2_p2667;
int rlsls2_m2667;
double rlsls2_v7305;
int rlsls2_p7240;
double rlsls2_m7240;
int rlsls2_p7238;
double rlsls2_m7238;
double rlsls2_v7238;
int rlsls2_p7237;
double rlsls2_m7237;
double rlsls2_v4942;
int rlsls2_p4939;
double rlsls2_m4939;
double rlsls2_v4939;
int rlsls2_p4931;
double rlsls2_m4931;
int rlsls2_p1172;
double rlsls2_m1172;
int rlsls2_p1171;
int rlsls2_m1171;
int rlsls2_p1169;
double rlsls2_m1169;
int rlsls2_p1153;
double rlsls2_m1153;
int rlsls2_p1152;
double rlsls2_m1152;
int rlsls2_p1150;
double rlsls2_m1150;
double rlsls2_v1150;
int rlsls2_p1141;
int rlsls2_m1141;
int rlsls2_p1060;
int rlsls2_m1060;
int rlsls2_p1051;
int rlsls2_m1051;
int rlsls2_v1060;
int rlsls2_v1051;
int rlsls2_p1048;
int rlsls2_m1048;
int rlsls2_p1045;
double rlsls2_m1045;
int rlsls2_p1022;
double rlsls2_m1022;
double rlsls2_v1022;
int rlsls2_p1014;
double rlsls2_m1014;
int rlsls2_p1043;
double rlsls2_m1043;
int rlsls2_p1042;
double rlsls2_m1042;
double rlsls2_v1042;
int rlsls2_p1030;
int rlsls2_m1030;
int rlsls2_v1030;
double rlsls2_v1014;
int rlsls2_p1004;
int rlsls2_m1004;
int rlsls2_p1003;
int rlsls2_m1003;
int rlsls2_p998;
double rlsls2_m998;
int rlsls2_p1001;
double rlsls2_m1001;
int rlsls2_p1000;
int rlsls2_m1000;
int rlsls2_v1000;
int rlsls2_p993;
int rlsls2_m993;
int rlsls2_p932;
double rlsls2_m932;
int rlsls2_p897;
int rlsls2_m897;
int rlsls2_p990;
int rlsls2_m990;
int rlsls2_p992;
int rlsls2_m992;
int rlsls2_v990;
int rlsls2_p984;
int rlsls2_m984;
int rlsls2_p1167;
double rlsls2_m1167;
int rlsls2_p1166;
double rlsls2_m1166;
int rlsls2_p1164;
double rlsls2_m1164;
double rlsls2_v1164;
int rlsls2_p1155;
int rlsls2_m1155;
int rlsls2_p1134;
int rlsls2_m1134;
int rlsls2_p1125;
int rlsls2_m1125;
int rlsls2_v1134;
int rlsls2_v1125;
int rlsls2_p1122;
int rlsls2_m1122;
int rlsls2_p1119;
double rlsls2_m1119;
int rlsls2_p1096;
double rlsls2_m1096;
double rlsls2_v1096;
int rlsls2_p1088;
double rlsls2_m1088;
int rlsls2_p1117;
double rlsls2_m1117;
int rlsls2_p1116;
double rlsls2_m1116;
double rlsls2_v1116;
int rlsls2_p1104;
int rlsls2_m1104;
int rlsls2_v1104;
double rlsls2_v1088;
int rlsls2_p1078;
int rlsls2_m1078;
int rlsls2_p936;
double rlsls2_m936;
int rlsls2_p901;
int rlsls2_m901;
int rlsls2_p1077;
int rlsls2_m1077;
int rlsls2_p1074;
int rlsls2_m1074;
int rlsls2_v1074;
int rlsls2_p1067;
int rlsls2_m1067;
int rlsls2_p1402;
double rlsls2_m1402;
int rlsls2_p1401;
int rlsls2_m1401;
int rlsls2_p1339;
double rlsls2_m1339;
int rlsls2_p1328;
double rlsls2_m1328;
double rlsls2_v1328;
int rlsls2_p1320;
int rlsls2_m1320;
int rlsls2_p1252;
int rlsls2_m1252;
int rlsls2_p1246;
int rlsls2_m1246;
int rlsls2_v1252;
int rlsls2_v1246;
int rlsls2_p1243;
int rlsls2_m1243;
int rlsls2_p1241;
double rlsls2_m1241;
int rlsls2_p1221;
double rlsls2_m1221;
double rlsls2_v1221;
int rlsls2_p1213;
double rlsls2_m1213;
int rlsls2_p1239;
double rlsls2_m1239;
int rlsls2_p1238;
double rlsls2_m1238;
double rlsls2_v1238;
int rlsls2_p1226;
int rlsls2_m1226;
int rlsls2_v1226;
double rlsls2_v1213;
int rlsls2_p1203;
int rlsls2_m1203;
int rlsls2_p1202;
int rlsls2_m1202;
int rlsls2_p1197;
double rlsls2_m1197;
int rlsls2_p1200;
double rlsls2_m1200;
int rlsls2_p1199;
int rlsls2_m1199;
int rlsls2_v1199;
int rlsls2_p1192;
int rlsls2_m1192;
int rlsls2_p951;
double rlsls2_m951;
int rlsls2_p909;
int rlsls2_m909;
int rlsls2_p1189;
int rlsls2_m1189;
int rlsls2_p1191;
int rlsls2_m1191;
int rlsls2_v1189;
int rlsls2_p1183;
int rlsls2_m1183;
int rlsls2_p1338;
double rlsls2_m1338;
double rlsls2_v1338;
int rlsls2_p1330;
int rlsls2_m1330;
int rlsls2_p1316;
int rlsls2_m1316;
int rlsls2_p1310;
int rlsls2_m1310;
int rlsls2_v1316;
int rlsls2_v1310;
int rlsls2_p1307;
int rlsls2_m1307;
int rlsls2_p1305;
double rlsls2_m1305;
int rlsls2_p1285;
double rlsls2_m1285;
double rlsls2_v1285;
int rlsls2_p1277;
double rlsls2_m1277;
int rlsls2_p1303;
double rlsls2_m1303;
int rlsls2_p1302;
double rlsls2_m1302;
double rlsls2_v1302;
int rlsls2_p1290;
int rlsls2_m1290;
int rlsls2_v1290;
double rlsls2_v1277;
int rlsls2_p1267;
int rlsls2_m1267;
int rlsls2_p955;
double rlsls2_m955;
int rlsls2_p913;
int rlsls2_m913;
int rlsls2_p1266;
int rlsls2_m1266;
int rlsls2_p1263;
int rlsls2_m1263;
int rlsls2_v1263;
int rlsls2_p1256;
int rlsls2_m1256;
int rlsls2_p1405;
int rlsls2_m1405;
int rlsls2_v1354;
int rlsls2_p964;
double rlsls2_m964;
int rlsls2_p915;
int rlsls2_m915;
int rlsls2_v1405;
int rlsls2_p1403;
int rlsls2_m1403;
double rlsls2_v1303;
double rlsls2_v1239;
double rlsls2_v1117;
double rlsls2_v1043;
int rlsls2_p922;
double rlsls2_m922;
int rlsls2_p825;
int rlsls2_m825;
int rlsls2_p864;
int rlsls2_m864;
int rlsls2_p888;
int rlsls2_m888;
int rlsls2_p1340;
int rlsls2_m1340;
int rlsls2_p974;
int rlsls2_m974;
int rlsls2_p883;
double rlsls2_m883;
int rlsls2_p886;
double rlsls2_m886;
int rlsls2_p885;
int rlsls2_m885;
int rlsls2_v885;
int rlsls2_p878;
int rlsls2_m878;
int rlsls2_p877;
int rlsls2_m877;
int rlsls2_p874;
double rlsls2_m874;
int rlsls2_p876;
double rlsls2_m876;
int rlsls2_p875;
int rlsls2_m875;
int rlsls2_v875;
int rlsls2_p869;
int rlsls2_m869;
double rlsls2_v5783;
int rlsls2_p5780;
double rlsls2_m5780;
double rlsls2_v5780;
int rlsls2_p5768;
double rlsls2_m5768;
int rlsls2_p1712;
double rlsls2_m1712;
int rlsls2_p1711;
int rlsls2_m1711;
int rlsls2_p1706;
double rlsls2_m1706;
int rlsls2_p1690;
double rlsls2_m1690;
int rlsls2_p1689;
double rlsls2_m1689;
int rlsls2_p1687;
double rlsls2_m1687;
double rlsls2_v1687;
int rlsls2_p1678;
int rlsls2_m1678;
int rlsls2_p1597;
int rlsls2_m1597;
int rlsls2_p1588;
int rlsls2_m1588;
int rlsls2_v1597;
int rlsls2_v1588;
int rlsls2_p1585;
int rlsls2_m1585;
int rlsls2_p1582;
double rlsls2_m1582;
int rlsls2_p1559;
double rlsls2_m1559;
double rlsls2_v1559;
int rlsls2_p1551;
double rlsls2_m1551;
int rlsls2_p1580;
double rlsls2_m1580;
int rlsls2_p1579;
double rlsls2_m1579;
double rlsls2_v1579;
int rlsls2_p1567;
int rlsls2_m1567;
int rlsls2_v1567;
double rlsls2_v1551;
int rlsls2_p1541;
int rlsls2_m1541;
int rlsls2_p1540;
int rlsls2_m1540;
int rlsls2_p1535;
double rlsls2_m1535;
int rlsls2_p1538;
double rlsls2_m1538;
int rlsls2_p1537;
int rlsls2_m1537;
int rlsls2_v1537;
int rlsls2_p1530;
int rlsls2_m1530;
int rlsls2_p1465;
double rlsls2_m1465;
int rlsls2_p1430;
int rlsls2_m1430;
int rlsls2_p1527;
int rlsls2_m1527;
int rlsls2_p1529;
int rlsls2_m1529;
int rlsls2_v1527;
int rlsls2_p1521;
int rlsls2_m1521;
int rlsls2_p1704;
double rlsls2_m1704;
int rlsls2_p1703;
double rlsls2_m1703;
int rlsls2_p1701;
double rlsls2_m1701;
double rlsls2_v1701;
int rlsls2_p1692;
int rlsls2_m1692;
int rlsls2_p1671;
int rlsls2_m1671;
int rlsls2_p1662;
int rlsls2_m1662;
int rlsls2_v1671;
int rlsls2_v1662;
int rlsls2_p1659;
int rlsls2_m1659;
int rlsls2_p1656;
double rlsls2_m1656;
int rlsls2_p1633;
double rlsls2_m1633;
double rlsls2_v1633;
int rlsls2_p1625;
double rlsls2_m1625;
int rlsls2_p1654;
double rlsls2_m1654;
int rlsls2_p1653;
double rlsls2_m1653;
double rlsls2_v1653;
int rlsls2_p1641;
int rlsls2_m1641;
int rlsls2_v1641;
double rlsls2_v1625;
int rlsls2_p1615;
int rlsls2_m1615;
int rlsls2_p1469;
double rlsls2_m1469;
int rlsls2_p1434;
int rlsls2_m1434;
int rlsls2_p1614;
int rlsls2_m1614;
int rlsls2_p1611;
int rlsls2_m1611;
int rlsls2_v1611;
int rlsls2_p1604;
int rlsls2_m1604;
int rlsls2_p2045;
double rlsls2_m2045;
int rlsls2_p2044;
int rlsls2_m2044;
int rlsls2_p1895;
double rlsls2_m1895;
int rlsls2_p1881;
double rlsls2_m1881;
double rlsls2_v1881;
int rlsls2_p1873;
int rlsls2_m1873;
int rlsls2_p1795;
int rlsls2_m1795;
int rlsls2_p1789;
int rlsls2_m1789;
int rlsls2_v1795;
int rlsls2_v1789;
int rlsls2_p1786;
int rlsls2_m1786;
int rlsls2_p1784;
double rlsls2_m1784;
int rlsls2_p1764;
double rlsls2_m1764;
double rlsls2_v1764;
int rlsls2_p1756;
double rlsls2_m1756;
int rlsls2_p1782;
double rlsls2_m1782;
int rlsls2_p1781;
double rlsls2_m1781;
double rlsls2_v1781;
int rlsls2_p1769;
int rlsls2_m1769;
int rlsls2_v1769;
double rlsls2_v1756;
int rlsls2_p1746;
int rlsls2_m1746;
int rlsls2_p1745;
int rlsls2_m1745;
int rlsls2_p1740;
double rlsls2_m1740;
int rlsls2_p1743;
double rlsls2_m1743;
int rlsls2_p1742;
int rlsls2_m1742;
int rlsls2_v1742;
int rlsls2_p1735;
int rlsls2_m1735;
int rlsls2_p1484;
double rlsls2_m1484;
int rlsls2_p1442;
int rlsls2_m1442;
int rlsls2_p1732;
int rlsls2_m1732;
int rlsls2_p1734;
int rlsls2_m1734;
int rlsls2_v1732;
int rlsls2_p1726;
int rlsls2_m1726;
int rlsls2_p1894;
double rlsls2_m1894;
double rlsls2_v1894;
int rlsls2_p1883;
int rlsls2_m1883;
int rlsls2_p1866;
int rlsls2_m1866;
int rlsls2_p1857;
int rlsls2_m1857;
int rlsls2_v1866;
int rlsls2_v1857;
int rlsls2_p1854;
int rlsls2_m1854;
int rlsls2_p1851;
double rlsls2_m1851;
int rlsls2_p1828;
double rlsls2_m1828;
double rlsls2_v1828;
int rlsls2_p1820;
double rlsls2_m1820;
int rlsls2_p1849;
double rlsls2_m1849;
int rlsls2_p1848;
double rlsls2_m1848;
double rlsls2_v1848;
int rlsls2_p1836;
int rlsls2_m1836;
int rlsls2_v1836;
double rlsls2_v1820;
int rlsls2_p1810;
int rlsls2_m1810;
int rlsls2_p1488;
double rlsls2_m1488;
int rlsls2_p1446;
int rlsls2_m1446;
int rlsls2_p1809;
int rlsls2_m1809;
int rlsls2_p1806;
int rlsls2_m1806;
int rlsls2_v1806;
int rlsls2_p1799;
int rlsls2_m1799;
int rlsls2_p2055;
int rlsls2_m2055;
int rlsls2_v1910;
int rlsls2_p1497;
double rlsls2_m1497;
int rlsls2_p1448;
int rlsls2_m1448;
int rlsls2_v2055;
int rlsls2_p2053;
int rlsls2_m2053;
double rlsls2_v1849;
double rlsls2_v1782;
double rlsls2_v1654;
double rlsls2_v1580;
int rlsls2_p1455;
double rlsls2_m1455;
int rlsls2_p832;
int rlsls2_m832;
int rlsls2_p868;
int rlsls2_m868;
int rlsls2_p1421;
int rlsls2_m1421;
int rlsls2_p1896;
int rlsls2_m1896;
int rlsls2_p1511;
int rlsls2_m1511;
int rlsls2_p859;
int rlsls2_m859;
double rlsls2_v1455;
double rlsls2_v922;
int rlsls2_p845;
double rlsls2_m845;
int rlsls2_p834;
int rlsls2_m834;
int rlsls2_p819;
int rlsls2_m819;
int rlsls2_p1414;
double rlsls2_m1414;
int rlsls2_p1417;
double rlsls2_m1417;
int rlsls2_p1416;
int rlsls2_m1416;
int rlsls2_v1416;
int rlsls2_p1409;
int rlsls2_m1409;
double rlsls2_v2663;
double rlsls2_v845;
double rlsls2_v2663;
double rlsls2_v1455;
double rlsls2_v2663;
double rlsls2_v922;
int rlsls2_p515;
double rlsls2_m515;
double rlsls2_v3139;
double rlsls2_v845;
double rlsls2_v3139;
double rlsls2_v1455;
double rlsls2_v3139;
double rlsls2_v922;
int rlsls2_p467;
double rlsls2_m467;
int rlsls2_p857;
int rlsls2_m857;
int rlsls2_p840;
double rlsls2_m840;
int rlsls2_p843;
double rlsls2_m843;
int rlsls2_p842;
int rlsls2_m842;
int rlsls2_v842;
int rlsls2_p835;
int rlsls2_m835;
double rlsls2_v6446;
int rlsls2_p6443;
double rlsls2_m6443;
double rlsls2_v6443;
int rlsls2_p6423;
double rlsls2_m6423;
int rlsls2_p2364;
double rlsls2_m2364;
int rlsls2_p2363;
int rlsls2_m2363;
int rlsls2_p2361;
double rlsls2_m2361;
int rlsls2_p2345;
double rlsls2_m2345;
int rlsls2_p2344;
double rlsls2_m2344;
int rlsls2_p2342;
double rlsls2_m2342;
double rlsls2_v2342;
int rlsls2_p2333;
int rlsls2_m2333;
int rlsls2_p2252;
int rlsls2_m2252;
int rlsls2_p2243;
int rlsls2_m2243;
int rlsls2_v2252;
int rlsls2_v2243;
int rlsls2_p2240;
int rlsls2_m2240;
int rlsls2_p2237;
double rlsls2_m2237;
int rlsls2_p2214;
double rlsls2_m2214;
double rlsls2_v2214;
int rlsls2_p2206;
double rlsls2_m2206;
int rlsls2_p2235;
double rlsls2_m2235;
int rlsls2_p727;
int rlsls2_m727;
int rlsls2_p725;
int rlsls2_m725;
int rlsls2_p593;
double rlsls2_m593;
int rlsls2_p2234;
double rlsls2_m2234;
double rlsls2_v2234;
int rlsls2_p2222;
int rlsls2_m2222;
int rlsls2_v2222;
double rlsls2_v2206;
int rlsls2_p2196;
int rlsls2_m2196;
int rlsls2_p2195;
int rlsls2_m2195;
int rlsls2_p2190;
double rlsls2_m2190;
int rlsls2_p2193;
double rlsls2_m2193;
int rlsls2_p2192;
int rlsls2_m2192;
int rlsls2_v2192;
int rlsls2_p2185;
int rlsls2_m2185;
double rlsls2_v2663;
double rlsls2_v2235;
int rlsls2_p285;
double rlsls2_m285;
double rlsls2_v3139;
double rlsls2_v2235;
int rlsls2_p263;
double rlsls2_m263;
int rlsls2_p715;
int rlsls2_m715;
double rlsls2_v2235;
double rlsls2_v1455;
double rlsls2_v2235;
double rlsls2_v922;
int rlsls2_p581;
double rlsls2_m581;
int rlsls2_p19;
double_or_symbol rlsls2_m19;
int rlsls2_p2181;
double rlsls2_m2181;
int rlsls2_p2183;
double rlsls2_m2183;
int rlsls2_p2182;
int rlsls2_m2182;
int rlsls2_p2184;
int rlsls2_m2184;
int rlsls2_v2182;
int rlsls2_p2176;
int rlsls2_m2176;
int rlsls2_p2359;
double rlsls2_m2359;
int rlsls2_p2358;
double rlsls2_m2358;
int rlsls2_p2356;
double rlsls2_m2356;
double rlsls2_v2356;
int rlsls2_p2347;
int rlsls2_m2347;
int rlsls2_p2326;
int rlsls2_m2326;
int rlsls2_p2317;
int rlsls2_m2317;
int rlsls2_v2326;
int rlsls2_v2317;
int rlsls2_p2314;
int rlsls2_m2314;
int rlsls2_p2311;
double rlsls2_m2311;
int rlsls2_p2288;
double rlsls2_m2288;
double rlsls2_v2288;
int rlsls2_p2280;
double rlsls2_m2280;
int rlsls2_p2309;
double rlsls2_m2309;
int rlsls2_p740;
int rlsls2_m740;
int rlsls2_p738;
int rlsls2_m738;
int rlsls2_p609;
double rlsls2_m609;
int rlsls2_p2308;
double rlsls2_m2308;
double rlsls2_v2308;
int rlsls2_p2296;
int rlsls2_m2296;
int rlsls2_v2296;
double rlsls2_v2280;
int rlsls2_p2270;
int rlsls2_m2270;
double rlsls2_v2663;
double rlsls2_v2309;
int rlsls2_p291;
double rlsls2_m291;
double rlsls2_v3139;
double rlsls2_v2309;
int rlsls2_p269;
double rlsls2_m269;
int rlsls2_p729;
int rlsls2_m729;
double rlsls2_v2309;
double rlsls2_v1455;
double rlsls2_v2309;
double rlsls2_v922;
int rlsls2_p598;
double rlsls2_m598;
int rlsls2_p23;
double_or_symbol rlsls2_m23;
double rlsls2_v2309;
double rlsls2_v2235;
int rlsls2_p2128;
double rlsls2_m2128;
int rlsls2_p755;
int rlsls2_m755;
int rlsls2_p753;
int rlsls2_m753;
int rlsls2_p746;
int rlsls2_m746;
int rlsls2_p751;
int rlsls2_m751;
int rlsls2_p621;
double rlsls2_m621;
int rlsls2_p2174;
int rlsls2_m2174;
int rlsls2_p750;
int rlsls2_m750;
int rlsls2_p2269;
int rlsls2_m2269;
int rlsls2_p2264;
double rlsls2_m2264;
int rlsls2_p2267;
double rlsls2_m2267;
int rlsls2_p2266;
int rlsls2_m2266;
int rlsls2_v2266;
int rlsls2_p2259;
int rlsls2_m2259;
int rlsls2_p2587;
double rlsls2_m2587;
int rlsls2_p2586;
int rlsls2_m2586;
int rlsls2_p2533;
double rlsls2_m2533;
int rlsls2_p2522;
double rlsls2_m2522;
double rlsls2_v2522;
int rlsls2_p2514;
int rlsls2_m2514;
int rlsls2_p2446;
int rlsls2_m2446;
int rlsls2_p2440;
int rlsls2_m2440;
int rlsls2_v2446;
int rlsls2_v2440;
int rlsls2_p2437;
int rlsls2_m2437;
int rlsls2_p2435;
double rlsls2_m2435;
int rlsls2_p2415;
double rlsls2_m2415;
double rlsls2_v2415;
int rlsls2_p2407;
double rlsls2_m2407;
int rlsls2_p2433;
double rlsls2_m2433;
int rlsls2_p774;
int rlsls2_m774;
int rlsls2_p772;
int rlsls2_m772;
int rlsls2_p642;
double rlsls2_m642;
int rlsls2_p2432;
double rlsls2_m2432;
double rlsls2_v2432;
int rlsls2_p2420;
int rlsls2_m2420;
int rlsls2_v2420;
double rlsls2_v2407;
int rlsls2_p2397;
int rlsls2_m2397;
int rlsls2_p2396;
int rlsls2_m2396;
int rlsls2_p2391;
double rlsls2_m2391;
int rlsls2_p2394;
double rlsls2_m2394;
int rlsls2_p2393;
int rlsls2_m2393;
int rlsls2_v2393;
int rlsls2_p2386;
int rlsls2_m2386;
double rlsls2_v2663;
double rlsls2_v2433;
int rlsls2_p539;
double rlsls2_m539;
double rlsls2_v3139;
double rlsls2_v2433;
int rlsls2_p491;
double rlsls2_m491;
int rlsls2_p762;
int rlsls2_m762;
double rlsls2_v2433;
double rlsls2_v1455;
double rlsls2_v2433;
double rlsls2_v922;
int rlsls2_p630;
double rlsls2_m630;
int rlsls2_p31;
double_or_symbol rlsls2_m31;
int rlsls2_p2382;
double rlsls2_m2382;
int rlsls2_p2384;
double rlsls2_m2384;
int rlsls2_p2383;
int rlsls2_m2383;
int rlsls2_p2385;
int rlsls2_m2385;
int rlsls2_v2383;
int rlsls2_p2377;
int rlsls2_m2377;
int rlsls2_p2532;
double rlsls2_m2532;
double rlsls2_v2532;
int rlsls2_p2524;
int rlsls2_m2524;
int rlsls2_p2510;
int rlsls2_m2510;
int rlsls2_p2504;
int rlsls2_m2504;
int rlsls2_v2510;
int rlsls2_v2504;
int rlsls2_p2501;
int rlsls2_m2501;
int rlsls2_p2499;
double rlsls2_m2499;
int rlsls2_p2479;
double rlsls2_m2479;
double rlsls2_v2479;
int rlsls2_p2471;
double rlsls2_m2471;
int rlsls2_p2497;
double rlsls2_m2497;
int rlsls2_p787;
int rlsls2_m787;
int rlsls2_p785;
int rlsls2_m785;
int rlsls2_p658;
double rlsls2_m658;
int rlsls2_p2496;
double rlsls2_m2496;
double rlsls2_v2496;
int rlsls2_p2484;
int rlsls2_m2484;
int rlsls2_v2484;
double rlsls2_v2471;
int rlsls2_p2461;
int rlsls2_m2461;
double rlsls2_v2663;
double rlsls2_v2497;
int rlsls2_p545;
double rlsls2_m545;
double rlsls2_v3139;
double rlsls2_v2497;
int rlsls2_p497;
double rlsls2_m497;
int rlsls2_p776;
int rlsls2_m776;
double rlsls2_v2497;
double rlsls2_v1455;
double rlsls2_v2497;
double rlsls2_v922;
int rlsls2_p647;
double rlsls2_m647;
int rlsls2_p35;
double_or_symbol rlsls2_m35;
double rlsls2_v2497;
double rlsls2_v2433;
int rlsls2_p2142;
double rlsls2_m2142;
int rlsls2_p802;
int rlsls2_m802;
int rlsls2_p800;
int rlsls2_m800;
int rlsls2_p793;
int rlsls2_m793;
int rlsls2_p798;
int rlsls2_m798;
int rlsls2_p670;
double rlsls2_m670;
int rlsls2_p2375;
int rlsls2_m2375;
int rlsls2_p797;
int rlsls2_m797;
int rlsls2_p2460;
int rlsls2_m2460;
int rlsls2_p2455;
double rlsls2_m2455;
int rlsls2_p2458;
double rlsls2_m2458;
int rlsls2_p2457;
int rlsls2_m2457;
int rlsls2_v2457;
int rlsls2_p2450;
int rlsls2_m2450;
int rlsls2_p2595;
int rlsls2_m2595;
double rlsls2_v2663;
double rlsls2_v2154;
double rlsls2_v2663;
double rlsls2_v2579;
int rlsls2_p551;
double rlsls2_m551;
double rlsls2_v3139;
double rlsls2_v2154;
double rlsls2_v3139;
double rlsls2_v2579;
int rlsls2_p503;
double rlsls2_m503;
int rlsls2_p803;
int rlsls2_m803;
double rlsls2_v2579;
double rlsls2_v1455;
double rlsls2_v2579;
double rlsls2_v922;
int rlsls2_p673;
double rlsls2_m673;
int rlsls2_v2539;
int rlsls2_p37;
double_or_symbol rlsls2_m37;
int rlsls2_p2112;
double rlsls2_m2112;
int rlsls2_p2149;
double rlsls2_m2149;
int rlsls2_v2595;
int rlsls2_p2588;
int rlsls2_m2588;
int rlsls2_p572;
double rlsls2_m572;
double rlsls2_v2663;
double rlsls2_v572;
int rlsls2_p560;
double rlsls2_m560;
double rlsls2_v3139;
double rlsls2_v572;
int rlsls2_p512;
double rlsls2_m512;
int rlsls2_p2095;
double rlsls2_m2095;
int rlsls2_p2118;
double rlsls2_m2118;
int rlsls2_p2117;
int rlsls2_m2117;
int rlsls2_p2534;
int rlsls2_m2534;
int rlsls2_p2164;
int rlsls2_m2164;
int rlsls2_v2117;
int rlsls2_p2090;
int rlsls2_m2090;
int rlsls2_p569;
int rlsls2_m569;
double rlsls2_v7240;
int rlsls2_p7235;
double rlsls2_m7235;
double rlsls2_v7235;
int rlsls2_p7211;
double rlsls2_m7211;
int rlsls2_p2878;
double rlsls2_m2878;
int rlsls2_p2877;
int rlsls2_m2877;
int rlsls2_p2872;
double rlsls2_m2872;
int rlsls2_p2856;
double rlsls2_m2856;
int rlsls2_p2855;
double rlsls2_m2855;
int rlsls2_p2853;
double rlsls2_m2853;
double rlsls2_v2853;
int rlsls2_p2844;
int rlsls2_m2844;
int rlsls2_p2763;
int rlsls2_m2763;
int rlsls2_p2754;
int rlsls2_m2754;
int rlsls2_v2763;
int rlsls2_v2754;
int rlsls2_p2751;
int rlsls2_m2751;
int rlsls2_p2748;
double rlsls2_m2748;
int rlsls2_p2725;
double rlsls2_m2725;
double rlsls2_v2725;
int rlsls2_p2717;
double rlsls2_m2717;
int rlsls2_p2746;
double rlsls2_m2746;
double rlsls2_v2746;
double rlsls2_v2309;
int rlsls2_p124;
double rlsls2_m124;
double rlsls2_v2746;
double rlsls2_v2235;
int rlsls2_p118;
double rlsls2_m118;
double rlsls2_v2746;
double rlsls2_v1419;
int rlsls2_p103;
double rlsls2_m103;
int rlsls2_p2745;
double rlsls2_m2745;
double rlsls2_v2745;
int rlsls2_p2733;
int rlsls2_m2733;
int rlsls2_v2733;
double rlsls2_v2717;
int rlsls2_p2707;
int rlsls2_m2707;
int rlsls2_p2706;
int rlsls2_m2706;
int rlsls2_p2701;
double rlsls2_m2701;
int rlsls2_p2704;
double rlsls2_m2704;
int rlsls2_p2703;
int rlsls2_m2703;
int rlsls2_v2703;
int rlsls2_p2696;
int rlsls2_m2696;
double rlsls2_v2746;
double rlsls2_v572;
double rlsls2_v2746;
double rlsls2_v2154;
double rlsls2_v2746;
double rlsls2_v2579;
double rlsls2_v2746;
double rlsls2_v2128;
double rlsls2_v2746;
double rlsls2_v845;
double rlsls2_v2746;
double rlsls2_v1455;
double rlsls2_v2746;
double rlsls2_v922;
int rlsls2_p90;
double rlsls2_m90;
int rlsls2_p55;
double_or_symbol rlsls2_m55;
int rlsls2_p2692;
double rlsls2_m2692;
int rlsls2_p2694;
double rlsls2_m2694;
int rlsls2_p2693;
int rlsls2_m2693;
int rlsls2_p2695;
int rlsls2_m2695;
int rlsls2_v2693;
int rlsls2_p2687;
int rlsls2_m2687;
int rlsls2_p2870;
double rlsls2_m2870;
int rlsls2_p2869;
double rlsls2_m2869;
int rlsls2_p2867;
double rlsls2_m2867;
double rlsls2_v2867;
int rlsls2_p2858;
int rlsls2_m2858;
int rlsls2_p2837;
int rlsls2_m2837;
int rlsls2_p2828;
int rlsls2_m2828;
int rlsls2_v2837;
int rlsls2_v2828;
int rlsls2_p2825;
int rlsls2_m2825;
int rlsls2_p2822;
double rlsls2_m2822;
int rlsls2_p2799;
double rlsls2_m2799;
double rlsls2_v2799;
int rlsls2_p2791;
double rlsls2_m2791;
int rlsls2_p2820;
double rlsls2_m2820;
double rlsls2_v2820;
double rlsls2_v2309;
int rlsls2_p177;
double rlsls2_m177;
double rlsls2_v2820;
double rlsls2_v2235;
int rlsls2_p171;
double rlsls2_m171;
double rlsls2_v2820;
double rlsls2_v1419;
int rlsls2_p156;
double rlsls2_m156;
int rlsls2_p2819;
double rlsls2_m2819;
double rlsls2_v2819;
int rlsls2_p2807;
int rlsls2_m2807;
int rlsls2_v2807;
double rlsls2_v2791;
int rlsls2_p2781;
int rlsls2_m2781;
double rlsls2_v2820;
double rlsls2_v572;
double rlsls2_v2820;
double rlsls2_v2154;
double rlsls2_v2820;
double rlsls2_v2579;
double rlsls2_v2820;
double rlsls2_v2128;
double rlsls2_v2820;
double rlsls2_v845;
double rlsls2_v2820;
double rlsls2_v1455;
double rlsls2_v2820;
double rlsls2_v922;
int rlsls2_p144;
double rlsls2_m144;
int rlsls2_p59;
double_or_symbol rlsls2_m59;
double rlsls2_v2820;
double rlsls2_v2746;
int rlsls2_p2637;
double rlsls2_m2637;
double rlsls2_v2637;
double rlsls2_v2309;
int rlsls2_p227;
double rlsls2_m227;
double rlsls2_v2637;
double rlsls2_v2235;
int rlsls2_p221;
double rlsls2_m221;
double rlsls2_v2637;
double rlsls2_v1419;
int rlsls2_p206;
double rlsls2_m206;
int rlsls2_p2780;
int rlsls2_m2780;
int rlsls2_p2775;
double rlsls2_m2775;
int rlsls2_p2778;
double rlsls2_m2778;
int rlsls2_p2777;
int rlsls2_m2777;
int rlsls2_v2777;
int rlsls2_p2770;
int rlsls2_m2770;
int rlsls2_p3225;
double rlsls2_m3225;
int rlsls2_p3224;
int rlsls2_m3224;
int rlsls2_p3065;
double rlsls2_m3065;
int rlsls2_p3051;
double rlsls2_m3051;
double rlsls2_v3051;
int rlsls2_p3043;
int rlsls2_m3043;
int rlsls2_p2965;
int rlsls2_m2965;
int rlsls2_p2959;
int rlsls2_m2959;
int rlsls2_v2965;
int rlsls2_v2959;
int rlsls2_p2956;
int rlsls2_m2956;
int rlsls2_p2954;
double rlsls2_m2954;
int rlsls2_p2934;
double rlsls2_m2934;
double rlsls2_v2934;
int rlsls2_p2926;
double rlsls2_m2926;
int rlsls2_p2952;
double rlsls2_m2952;
double rlsls2_v2952;
double rlsls2_v2497;
int rlsls2_p337;
double rlsls2_m337;
double rlsls2_v2952;
double rlsls2_v2433;
int rlsls2_p331;
double rlsls2_m331;
double rlsls2_v2952;
double rlsls2_v1419;
int rlsls2_p316;
double rlsls2_m316;
int rlsls2_p2951;
double rlsls2_m2951;
double rlsls2_v2951;
int rlsls2_p2939;
int rlsls2_m2939;
int rlsls2_v2939;
double rlsls2_v2926;
int rlsls2_p2916;
int rlsls2_m2916;
int rlsls2_p2915;
int rlsls2_m2915;
int rlsls2_p2910;
double rlsls2_m2910;
int rlsls2_p2913;
double rlsls2_m2913;
int rlsls2_p2912;
int rlsls2_m2912;
int rlsls2_v2912;
int rlsls2_p2905;
int rlsls2_m2905;
double rlsls2_v2952;
double rlsls2_v572;
double rlsls2_v2952;
double rlsls2_v2154;
double rlsls2_v2952;
double rlsls2_v2579;
double rlsls2_v2952;
double rlsls2_v2142;
double rlsls2_v2952;
double rlsls2_v845;
double rlsls2_v2952;
double rlsls2_v1455;
double rlsls2_v2952;
double rlsls2_v922;
int rlsls2_p303;
double rlsls2_m303;
int rlsls2_p67;
double_or_symbol rlsls2_m67;
int rlsls2_p2901;
double rlsls2_m2901;
int rlsls2_p2903;
double rlsls2_m2903;
int rlsls2_p2902;
int rlsls2_m2902;
int rlsls2_p2904;
int rlsls2_m2904;
int rlsls2_v2902;
int rlsls2_p2896;
int rlsls2_m2896;
int rlsls2_p3064;
double rlsls2_m3064;
double rlsls2_v3064;
int rlsls2_p3053;
int rlsls2_m3053;
int rlsls2_p3036;
int rlsls2_m3036;
int rlsls2_p3027;
int rlsls2_m3027;
int rlsls2_v3036;
int rlsls2_v3027;
int rlsls2_p3024;
int rlsls2_m3024;
int rlsls2_p3021;
double rlsls2_m3021;
int rlsls2_p2998;
double rlsls2_m2998;
double rlsls2_v2998;
int rlsls2_p2990;
double rlsls2_m2990;
int rlsls2_p3019;
double rlsls2_m3019;
double rlsls2_v3019;
double rlsls2_v2497;
int rlsls2_p390;
double rlsls2_m390;
double rlsls2_v3019;
double rlsls2_v2433;
int rlsls2_p384;
double rlsls2_m384;
double rlsls2_v3019;
double rlsls2_v1419;
int rlsls2_p369;
double rlsls2_m369;
int rlsls2_p3018;
double rlsls2_m3018;
double rlsls2_v3018;
int rlsls2_p3006;
int rlsls2_m3006;
int rlsls2_v3006;
double rlsls2_v2990;
int rlsls2_p2980;
int rlsls2_m2980;
double rlsls2_v3019;
double rlsls2_v572;
double rlsls2_v3019;
double rlsls2_v2154;
double rlsls2_v3019;
double rlsls2_v2579;
double rlsls2_v3019;
double rlsls2_v2142;
double rlsls2_v3019;
double rlsls2_v845;
double rlsls2_v3019;
double rlsls2_v1455;
double rlsls2_v3019;
double rlsls2_v922;
int rlsls2_p357;
double rlsls2_m357;
int rlsls2_p71;
double_or_symbol rlsls2_m71;
double rlsls2_v3019;
double rlsls2_v2952;
int rlsls2_p2651;
double rlsls2_m2651;
double rlsls2_v2651;
double rlsls2_v2497;
int rlsls2_p440;
double rlsls2_m440;
double rlsls2_v2651;
double rlsls2_v2433;
int rlsls2_p434;
double rlsls2_m434;
double rlsls2_v2651;
double rlsls2_v1419;
int rlsls2_p419;
double rlsls2_m419;
int rlsls2_p2979;
int rlsls2_m2979;
int rlsls2_p2974;
double rlsls2_m2974;
int rlsls2_p2977;
double rlsls2_m2977;
int rlsls2_p2976;
int rlsls2_m2976;
int rlsls2_v2976;
int rlsls2_p2969;
int rlsls2_m2969;
int rlsls2_p3242;
int rlsls2_m3242;
int rlsls2_v3071;
int rlsls2_p73;
double_or_symbol rlsls2_m73;
int rlsls2_p2621;
double rlsls2_m2621;
int rlsls2_p2658;
double rlsls2_m2658;
int rlsls2_v3242;
int rlsls2_p3233;
int rlsls2_m3233;
int rlsls2_p2626;
int rlsls2_m2626;
int rlsls2_p3066;
int rlsls2_m3066;
int rlsls2_v2626;
int rlsls2_v2090;
int rlsls2_v569;
double rlsls2_v2663;
double rlsls2_v2142;
double rlsls2_v3139;
double rlsls2_v2142;
double rlsls2_v2651;
double rlsls2_v572;
double rlsls2_v2651;
double rlsls2_v2154;
double rlsls2_v2651;
double rlsls2_v2579;
double rlsls2_v2651;
double rlsls2_v2142;
double rlsls2_v2651;
double rlsls2_v845;
double rlsls2_v2651;
double rlsls2_v1455;
double rlsls2_v2651;
double rlsls2_v922;
double rlsls2_v2663;
double rlsls2_v2128;
double rlsls2_v3139;
double rlsls2_v2128;
double rlsls2_v2637;
double rlsls2_v572;
double rlsls2_v2637;
double rlsls2_v2154;
double rlsls2_v2637;
double rlsls2_v2579;
double rlsls2_v2637;
double rlsls2_v2128;
double rlsls2_v2637;
double rlsls2_v845;
double rlsls2_v2637;
double rlsls2_v1455;
double rlsls2_v2637;
double rlsls2_v922;
static double rlsls2_f4788(){if (rlsls2_p4788) return rlsls2_m4788; else {rlsls2_p4788=T;return rlsls2_m4788=atan2((rlsls2_v7316-rlsls2_v7312),(rlsls2_v7318-rlsls2_v7314));}}
static double rlsls2_f1507(){if (rlsls2_p1507) return rlsls2_m1507; else {rlsls2_p1507=T;return rlsls2_m1507=error("Non-numeric argument to MAX");}}
static double rlsls2_f1509(){if (rlsls2_p1509) return rlsls2_m1509; else {rlsls2_p1509=T;return rlsls2_m1509=error("Argument DIRECTION not of type FLOAT");}}
static double rlsls2_f1419(){if (rlsls2_p1419) return rlsls2_m1419; else {rlsls2_p1419=T;return rlsls2_m1419=error("No applicable method for OPPOSITE with argument types ((OR NULL FLOAT))");}}
static double rlsls2_f5522(){if (rlsls2_p5522) return rlsls2_m5522; else {rlsls2_p5522=T;return rlsls2_m5522=atan2((rlsls2_v7320-rlsls2_v7312),(rlsls2_v7322-rlsls2_v7314));}}
static double rlsls2_f5675(){if (rlsls2_p5675) return rlsls2_m5675; else {rlsls2_p5675=T;return rlsls2_m5675=(((rlsls2_v7330<rlsls2_v7326)?rlsls2_v7330:rlsls2_v7326)-rlsls2_v7308);}}
static double rlsls2_f5673(){if (rlsls2_p5673) return rlsls2_m5673; else {rlsls2_p5673=T;return rlsls2_m5673=(((rlsls2_v7330>rlsls2_v7326)?rlsls2_v7330:rlsls2_v7326)+rlsls2_v7308);}}
static double rlsls2_f5666(){if (rlsls2_p5666) return rlsls2_m5666; else {rlsls2_p5666=T;return rlsls2_m5666=(((rlsls2_v7328<rlsls2_v7324)?rlsls2_v7328:rlsls2_v7324)-rlsls2_v7308);}}
static double rlsls2_f5664(){if (rlsls2_p5664) return rlsls2_m5664; else {rlsls2_p5664=T;return rlsls2_m5664=(((rlsls2_v7328>rlsls2_v7324)?rlsls2_v7328:rlsls2_v7324)+rlsls2_v7308);}}
static double rlsls2_f6280(){if (rlsls2_p6280) return rlsls2_m6280; else {rlsls2_p6280=T;return rlsls2_m6280=atan2((rlsls2_v7324-rlsls2_v7312),(rlsls2_v7326-rlsls2_v7314));}}
static double rlsls2_f6438(){if (rlsls2_p6438) return rlsls2_m6438; else {rlsls2_p6438=T;return rlsls2_m6438=(rlsls2_v7328-rlsls2_v7324);}}
static int rlsls2_f5833(){if (rlsls2_p5833) return rlsls2_m5833; else {rlsls2_p5833=T;return rlsls2_m5833=(fabs(rlsls2_f6438())<rlsls2_v7308);}}
static double rlsls2_f6437(){if (rlsls2_p6437) return rlsls2_m6437; else {rlsls2_p6437=T;return rlsls2_m6437=(rlsls2_v7330-rlsls2_v7326);}}
static int rlsls2_f5831(){if (rlsls2_p5831) return rlsls2_m5831; else {rlsls2_p5831=T;return rlsls2_m5831=(fabs(rlsls2_f6437())<rlsls2_v7308);}}
static double rlsls2_f6461(){if (rlsls2_p6461) return rlsls2_m6461; else {rlsls2_p6461=T;return rlsls2_m6461=(rlsls2_v7314-rlsls2_v7326);}}
static double rlsls2_f6458(){if (rlsls2_p6458) return rlsls2_m6458; else {rlsls2_p6458=T;return rlsls2_m6458=(rlsls2_v7312-rlsls2_v7324);}}
static int rlsls2_f2598(){if (rlsls2_p2598) return rlsls2_m2598; else {rlsls2_p2598=T;return rlsls2_m2598=((fabs(rlsls2_f6461())<rlsls2_v7308)?(fabs(rlsls2_f6458())<rlsls2_v7308):NIL);}}
static double rlsls2_f6432(){if (rlsls2_p6432) return rlsls2_m6432; else {rlsls2_p6432=T;return rlsls2_m6432=fabs(normalize_rotation((atan2(rlsls2_f6438(),rlsls2_f6437())-atan2(rlsls2_f6458(),rlsls2_f6461()))));}}
static int rlsls2_f2594(){if (rlsls2_p2594) return rlsls2_m2594; else {rlsls2_p2594=T;return rlsls2_m2594=(rlsls2_f6432()>(1.5707963267948966));}}
static int rlsls2_f2590(){if (rlsls2_p2590) return rlsls2_m2590; else {rlsls2_p2590=T;return rlsls2_m2590=((rlsls2_v2594=rlsls2_f2594()),(rlsls2_v2594?rlsls2_v2594:(fabs((rlsls2_f6432()-(1.5707963267948966)))<rlsls2_v7308)));}}
static int rlsls2_f1984(){if (rlsls2_p1984) return rlsls2_m1984; else {rlsls2_p1984=T;return rlsls2_m1984=(rlsls2_f2590()?NIL:T);}}
static double rlsls2_f6446(){if (rlsls2_p6446) return rlsls2_m6446; else {rlsls2_p6446=T;return rlsls2_m6446=((rlsls2_v6461=rlsls2_f6461()),(rlsls2_v6458=rlsls2_f6458()),(rlsls2_v7314-(rlsls2_v7314+sqrt(((rlsls2_v6461*rlsls2_v6461)+(rlsls2_v6458*rlsls2_v6458))))));}}
static double rlsls2_f2665(){if (rlsls2_p2665) return rlsls2_m2665; else {rlsls2_p2665=T;return rlsls2_m2665=error("Non-numeric argument to MIN");}}
static double rlsls2_f3078(){if (rlsls2_p3078) return rlsls2_m3078; else {rlsls2_p3078=T;return rlsls2_m3078=error("Argument X not of type FLOAT");}}
static double rlsls2_f3083(){if (rlsls2_p3083) return rlsls2_m3083; else {rlsls2_p3083=T;return rlsls2_m3083=error("Argument X not of type REAL");}}
static double rlsls2_f6935(){if (rlsls2_p6935) return rlsls2_m6935; else {rlsls2_p6935=T;return rlsls2_m6935=atan2((rlsls2_v7328-rlsls2_v7312),(rlsls2_v7330-rlsls2_v7314));}}
static double rlsls2_f3148(){if (rlsls2_p3148) return rlsls2_m3148; else {rlsls2_p3148=T;return rlsls2_m3148=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rlsls2_f3144(){if (rlsls2_p3144) return rlsls2_m3144; else {rlsls2_p3144=T;return rlsls2_m3144=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double rlsls2_f6984(){if (rlsls2_p6984) return rlsls2_m6984; else {rlsls2_p6984=T;return rlsls2_m6984=(rlsls2_v7312-rlsls2_v7320);}}
static double rlsls2_f6983(){if (rlsls2_p6983) return rlsls2_m6983; else {rlsls2_p6983=T;return rlsls2_m6983=(rlsls2_v7314-rlsls2_v7322);}}
static int rlsls2_f2089(){if (rlsls2_p2089) return rlsls2_m2089; else {rlsls2_p2089=T;return rlsls2_m2089=((fabs(rlsls2_f6983())<rlsls2_v7308)?(fabs(rlsls2_f6984())<rlsls2_v7308):NIL);}}
static double rlsls2_f5783(){if (rlsls2_p5783) return rlsls2_m5783; else {rlsls2_p5783=T;return rlsls2_m5783=((rlsls2_v6983=rlsls2_f6983()),(rlsls2_v6984=rlsls2_f6984()),(rlsls2_v7314-(rlsls2_v7314+sqrt(((rlsls2_v6983*rlsls2_v6983)+(rlsls2_v6984*rlsls2_v6984))))));}}
static double rlsls2_f6959(){if (rlsls2_p6959) return rlsls2_m6959; else {rlsls2_p6959=T;return rlsls2_m6959=(rlsls2_v7312-rlsls2_v7316);}}
static double rlsls2_f6958(){if (rlsls2_p6958) return rlsls2_m6958; else {rlsls2_p6958=T;return rlsls2_m6958=(rlsls2_v7314-rlsls2_v7318);}}
static int rlsls2_f1408(){if (rlsls2_p1408) return rlsls2_m1408; else {rlsls2_p1408=T;return rlsls2_m1408=((fabs(rlsls2_f6958())<rlsls2_v7308)?(fabs(rlsls2_f6959())<rlsls2_v7308):NIL);}}
static double rlsls2_f4942(){if (rlsls2_p4942) return rlsls2_m4942; else {rlsls2_p4942=T;return rlsls2_m4942=((rlsls2_v6958=rlsls2_f6958()),(rlsls2_v6959=rlsls2_f6959()),(rlsls2_v7314-(rlsls2_v7314+sqrt(((rlsls2_v6958*rlsls2_v6958)+(rlsls2_v6959*rlsls2_v6959))))));}}
static double rlsls2_f7117(){if (rlsls2_p7117) return rlsls2_m7117; else {rlsls2_p7117=T;return rlsls2_m7117=(((rlsls2_v7322<rlsls2_v7318)?rlsls2_v7322:rlsls2_v7318)-rlsls2_v7308);}}
static double rlsls2_f7115(){if (rlsls2_p7115) return rlsls2_m7115; else {rlsls2_p7115=T;return rlsls2_m7115=(((rlsls2_v7322>rlsls2_v7318)?rlsls2_v7322:rlsls2_v7318)+rlsls2_v7308);}}
static double rlsls2_f7108(){if (rlsls2_p7108) return rlsls2_m7108; else {rlsls2_p7108=T;return rlsls2_m7108=(((rlsls2_v7320<rlsls2_v7316)?rlsls2_v7320:rlsls2_v7316)-rlsls2_v7308);}}
static double rlsls2_f7106(){if (rlsls2_p7106) return rlsls2_m7106; else {rlsls2_p7106=T;return rlsls2_m7106=(((rlsls2_v7320>rlsls2_v7316)?rlsls2_v7320:rlsls2_v7316)+rlsls2_v7308);}}
static double rlsls2_f7229(){if (rlsls2_p7229) return rlsls2_m7229; else {rlsls2_p7229=T;return rlsls2_m7229=(rlsls2_v7326-rlsls2_v7330);}}
static double rlsls2_f5829(){if (rlsls2_p5829) return rlsls2_m5829; else {rlsls2_p5829=T;return rlsls2_m5829=(rlsls2_f7229()/rlsls2_f6438());}}
static double rlsls2_f3265(){if (rlsls2_p3265) return rlsls2_m3265; else {rlsls2_p3265=T;return rlsls2_m3265=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static double rlsls2_f3280(){if (rlsls2_p3280) return rlsls2_m3280; else {rlsls2_p3280=T;return rlsls2_m3280=error("Can't form a single line when the end points are the same");}}
static double rlsls2_f2076(){if (rlsls2_p2076) return rlsls2_m2076; else {rlsls2_p2076=T;return rlsls2_m2076=(rlsls2_f5833()?(rlsls2_f5831()?rlsls2_f3280():rlsls2_v7328):(rlsls2_v7330+(rlsls2_f5829()*rlsls2_v7328)));}}
static double rlsls2_f2087(){if (rlsls2_p2087) return rlsls2_m2087; else {rlsls2_p2087=T;return rlsls2_m2087=(rlsls2_f5833()?(rlsls2_f5831()?rlsls2_f3280():(0.0)):(1.0));}}
static int rlsls2_f2052(){if (rlsls2_p2052) return rlsls2_m2052; else {rlsls2_p2052=T;return rlsls2_m2052=(rlsls2_f2087()==0.0);}}
static double rlsls2_f2074(){if (rlsls2_p2074) return rlsls2_m2074; else {rlsls2_p2074=T;return rlsls2_m2074=(rlsls2_f2087()*rlsls2_v7312);}}
static double rlsls2_f2086(){if (rlsls2_p2086) return rlsls2_m2086; else {rlsls2_p2086=T;return rlsls2_m2086=((rlsls2_v2087=rlsls2_f2087()),(rlsls2_v2087*rlsls2_v2087));}}
static double rlsls2_f2084(){if (rlsls2_p2084) return rlsls2_m2084; else {rlsls2_p2084=T;return rlsls2_m2084=(rlsls2_f5833()?(rlsls2_f5831()?rlsls2_f3280():(1.0)):rlsls2_f5829());}}
static double rlsls2_f1377(){if (rlsls2_p1377) return rlsls2_m1377; else {rlsls2_p1377=T;return rlsls2_m1377=(((rlsls2_f2087()*rlsls2_v7322)+(rlsls2_f2084()*rlsls2_v7320))-rlsls2_f2076());}}
static int rlsls2_f1374(){if (rlsls2_p1374) return rlsls2_m1374; else {rlsls2_p1374=T;return rlsls2_m1374=(fabs((rlsls2_f1377()-(0.0)))<rlsls2_v7308);}}
static int rlsls2_f1373(){if (rlsls2_p1373) return rlsls2_m1373; else {rlsls2_p1373=T;return rlsls2_m1373=(rlsls2_f1377()>(0.0));}}
static int rlsls2_f1372(){if (rlsls2_p1372) return rlsls2_m1372; else {rlsls2_p1372=T;return rlsls2_m1372=(rlsls2_f1373()?NIL:T);}}
static double rlsls2_f1892(){if (rlsls2_p1892) return rlsls2_m1892; else {rlsls2_p1892=T;return rlsls2_m1892=(rlsls2_f2076()/rlsls2_f2084());}}
static int rlsls2_f1867(){if (rlsls2_p1867) return rlsls2_m1867; else {rlsls2_p1867=T;return rlsls2_m1867=(fabs((rlsls2_f1892()-rlsls2_v7328))<rlsls2_v7308);}}
static int rlsls2_f1858(){if (rlsls2_p1858) return rlsls2_m1858; else {rlsls2_p1858=T;return rlsls2_m1858=(fabs((rlsls2_f1892()-rlsls2_v7324))<rlsls2_v7308);}}
static int rlsls2_f1830(){if (rlsls2_p1830) return rlsls2_m1830; else {rlsls2_p1830=T;return rlsls2_m1830=(fabs((rlsls2_v7312-rlsls2_f1892()))<rlsls2_v7308);}}
static double rlsls2_f1853(){if (rlsls2_p1853) return rlsls2_m1853; else {rlsls2_p1853=T;return rlsls2_m1853=(rlsls2_f1892()-rlsls2_v7312);}}
static int rlsls2_f1885(){if (rlsls2_p1885) return rlsls2_m1885; else {rlsls2_p1885=T;return rlsls2_m1885=((rlsls2_f5666()<=rlsls2_f1892())&&(rlsls2_f1892()<=rlsls2_f5664()));}}
static double rlsls2_f1891(){if (rlsls2_p1891) return rlsls2_m1891; else {rlsls2_p1891=T;return rlsls2_m1891=(rlsls2_f2084()*rlsls2_f1892());}}
static double rlsls2_f1947(){if (rlsls2_p1947) return rlsls2_m1947; else {rlsls2_p1947=T;return rlsls2_m1947=(((rlsls2_f2087()*rlsls2_v7318)+(rlsls2_f2084()*rlsls2_v7316))-rlsls2_f2076());}}
static int rlsls2_f1944(){if (rlsls2_p1944) return rlsls2_m1944; else {rlsls2_p1944=T;return rlsls2_m1944=(fabs((rlsls2_f1947()-(0.0)))<rlsls2_v7308);}}
static int rlsls2_f1929(){if (rlsls2_p1929) return rlsls2_m1929; else {rlsls2_p1929=T;return rlsls2_m1929=(rlsls2_f1947()>(0.0));}}
static int rlsls2_f1928(){if (rlsls2_p1928) return rlsls2_m1928; else {rlsls2_p1928=T;return rlsls2_m1928=(rlsls2_f1929()?NIL:T);}}
static int rlsls2_f2043(){if (rlsls2_p2043) return rlsls2_m2043; else {rlsls2_p2043=T;return rlsls2_m2043=(rlsls2_f2084()>0.0);}}
static double rlsls2_f2041(){if (rlsls2_p2041) return rlsls2_m2041; else {rlsls2_p2041=T;return rlsls2_m2041=(rlsls2_f2043()?(-rlsls2_f2087()):rlsls2_f2087());}}
static double rlsls2_f2047(){if (rlsls2_p2047) return rlsls2_m2047; else {rlsls2_p2047=T;return rlsls2_m2047=((rlsls2_v2084=rlsls2_f2084()),(rlsls2_v2084*rlsls2_v2084));}}
static double rlsls2_f1716(){if (rlsls2_p1716) return rlsls2_m1716; else {rlsls2_p1716=T;return rlsls2_m1716=(rlsls2_f2086()+rlsls2_f2047());}}
static double rlsls2_f1709(){if (rlsls2_p1709) return rlsls2_m1709; else {rlsls2_p1709=T;return rlsls2_m1709=((rlsls2_v1716=rlsls2_f1716()),(rlsls2_v1716+rlsls2_v1716));}}
static double rlsls2_f2049(){if (rlsls2_p2049) return rlsls2_m2049; else {rlsls2_p2049=T;return rlsls2_m2049=(rlsls2_f2076()-(rlsls2_f2087()*rlsls2_v7314)-(rlsls2_f2084()*rlsls2_v7312));}}
static double rlsls2_f1718(){if (rlsls2_p1718) return rlsls2_m1718; else {rlsls2_p1718=T;return rlsls2_m1718=((-2.0)*rlsls2_f2084()*rlsls2_f2049());}}
static double rlsls2_f1708(){if (rlsls2_p1708) return rlsls2_m1708; else {rlsls2_p1708=T;return rlsls2_m1708=((-rlsls2_f1718())/rlsls2_f1709());}}
static double rlsls2_f1717(){if (rlsls2_p1717) return rlsls2_m1717; else {rlsls2_p1717=T;return rlsls2_m1717=((rlsls2_v1718=rlsls2_f1718()),(rlsls2_v1718*rlsls2_v1718));}}
static double rlsls2_f2048(){if (rlsls2_p2048) return rlsls2_m2048; else {rlsls2_p2048=T;return rlsls2_m2048=((rlsls2_v2049=rlsls2_f2049()),(rlsls2_v2049*rlsls2_v2049));}}
static double rlsls2_f2046(){if (rlsls2_p2046) return rlsls2_m2046; else {rlsls2_p2046=T;return rlsls2_m2046=(rlsls2_f2048()/rlsls2_f2047());}}
static double rlsls2_f2073(){if (rlsls2_p2073) return rlsls2_m2073; else {rlsls2_p2073=T;return rlsls2_m2073=(rlsls2_f2084()*rlsls2_v7314);}}
static double rlsls2_f2072(){if (rlsls2_p2072) return rlsls2_m2072; else {rlsls2_p2072=T;return rlsls2_m2072=(rlsls2_f2074()-rlsls2_f2073());}}
static double rlsls2_f2031(){if (rlsls2_p2031) return rlsls2_m2031; else {rlsls2_p2031=T;return rlsls2_m2031=(rlsls2_f2043()?(rlsls2_f2073()-rlsls2_f2074()):rlsls2_f2072());}}
static double rlsls2_f2029(){if (rlsls2_p2029) return rlsls2_m2029; else {rlsls2_p2029=T;return rlsls2_m2029=((rlsls2_f2076()*rlsls2_f2041())-(rlsls2_f2084()*rlsls2_f2031()));}}
static double rlsls2_f2083(){if (rlsls2_p2083) return rlsls2_m2083; else {rlsls2_p2083=T;return rlsls2_m2083=(-rlsls2_f2084());}}
static double rlsls2_f2039(){if (rlsls2_p2039) return rlsls2_m2039; else {rlsls2_p2039=T;return rlsls2_m2039=(rlsls2_f2043()?rlsls2_f2084():rlsls2_f2083());}}
static double rlsls2_f2037(){if (rlsls2_p2037) return rlsls2_m2037; else {rlsls2_p2037=T;return rlsls2_m2037=((rlsls2_f2087()*rlsls2_f2041())-(rlsls2_f2084()*rlsls2_f2039()));}}
static double rlsls2_f2017(){if (rlsls2_p2017) return rlsls2_m2017; else {rlsls2_p2017=T;return rlsls2_m2017=(rlsls2_f2029()/rlsls2_f2037());}}
static int rlsls2_f2034(){if (rlsls2_p2034) return rlsls2_m2034; else {rlsls2_p2034=T;return rlsls2_m2034=(fabs((rlsls2_f2037()-(0.0)))<rlsls2_v7308);}}
static double rlsls2_f1977(){if (rlsls2_p1977) return rlsls2_m1977; else {rlsls2_p1977=T;return rlsls2_m1977=(rlsls2_f2034()?rlsls2_f3144():rlsls2_f2017());}}
static double rlsls2_f2023(){if (rlsls2_p2023) return rlsls2_m2023; else {rlsls2_p2023=T;return rlsls2_m2023=((rlsls2_f2087()*rlsls2_f2031())-(rlsls2_f2076()*rlsls2_f2039()));}}
static double rlsls2_f2015(){if (rlsls2_p2015) return rlsls2_m2015; else {rlsls2_p2015=T;return rlsls2_m2015=(rlsls2_f2023()/rlsls2_f2037());}}
static int rlsls2_f2005(){if (rlsls2_p2005) return rlsls2_m2005; else {rlsls2_p2005=T;return rlsls2_m2005=(rlsls2_f2034()?NIL:((rlsls2_v2017=rlsls2_f2017()),(rlsls2_v2015=rlsls2_f2015()),((fabs((((rlsls2_f2087()*rlsls2_v2017)+(rlsls2_f2084()*rlsls2_v2015))-rlsls2_f2076()))<rlsls2_v7308)?(((rlsls2_f5675()<=rlsls2_v2017)&&(rlsls2_v2017<=rlsls2_f5673()))?((rlsls2_f5666()<=rlsls2_v2015)&&(rlsls2_v2015<=rlsls2_f5664())):NIL):NIL)));}}
static int rlsls2_f1951(){if (rlsls2_p1951) return rlsls2_m1951; else {rlsls2_p1951=T;return rlsls2_m1951=(rlsls2_f2034()?NIL:((fabs((rlsls2_v7314-rlsls2_f2017()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f2015()))<rlsls2_v7308):NIL));}}
static double rlsls2_f1979(){if (rlsls2_p1979) return rlsls2_m1979; else {rlsls2_p1979=T;return rlsls2_m1979=(rlsls2_f2034()?rlsls2_f3148():rlsls2_f2015());}}
static double rlsls2_f1975(){if (rlsls2_p1975) return rlsls2_m1975; else {rlsls2_p1975=T;return rlsls2_m1975=atan2((rlsls2_f1979()-rlsls2_v7312),(rlsls2_f1977()-rlsls2_v7314));}}
static double rlsls2_f1394(){if (rlsls2_p1394) return rlsls2_m1394; else {rlsls2_p1394=T;return rlsls2_m1394=normalize_rotation((rlsls2_f1975()-rlsls2_f4788()));}}
static double rlsls2_f1393(){if (rlsls2_p1393) return rlsls2_m1393; else {rlsls2_p1393=T;return rlsls2_m1393=normalize_rotation(rlsls2_f1394());}}
static int rlsls2_f1381(){if (rlsls2_p1381) return rlsls2_m1381; else {rlsls2_p1381=T;return rlsls2_m1381=((rlsls2_v1393=rlsls2_f1393()),((fabs((rlsls2_v1393-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1393-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1393-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static double rlsls2_f1942(){if (rlsls2_p1942) return rlsls2_m1942; else {rlsls2_p1942=T;return rlsls2_m1942=(rlsls2_f1975()+(-1.5707963267948966));}}
static double rlsls2_f1934(){if (rlsls2_p1934) return rlsls2_m1934; else {rlsls2_p1934=T;return rlsls2_m1934=((rlsls2_v1942=rlsls2_f1942()),(((rlsls2_f2087()*(rlsls2_f1977()+cos(rlsls2_v1942)))+(rlsls2_f2084()*(rlsls2_f1979()+sin(rlsls2_v1942))))-rlsls2_f2076()));}}
static int rlsls2_f1931(){if (rlsls2_p1931) return rlsls2_m1931; else {rlsls2_p1931=T;return rlsls2_m1931=(fabs((rlsls2_f1934()-(0.0)))<rlsls2_v7308);}}
static int rlsls2_f1930(){if (rlsls2_p1930) return rlsls2_m1930; else {rlsls2_p1930=T;return rlsls2_m1930=(rlsls2_f1934()>(0.0));}}
static double rlsls2_f1973(){if (rlsls2_p1973) return rlsls2_m1973; else {rlsls2_p1973=T;return rlsls2_m1973=normalize_rotation((rlsls2_f1975()-rlsls2_f5522()));}}
static double rlsls2_f1972(){if (rlsls2_p1972) return rlsls2_m1972; else {rlsls2_p1972=T;return rlsls2_m1972=normalize_rotation(rlsls2_f1973());}}
static int rlsls2_f1960(){if (rlsls2_p1960) return rlsls2_m1960; else {rlsls2_p1960=T;return rlsls2_m1960=((rlsls2_v1972=rlsls2_f1972()),((fabs((rlsls2_v1972-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1972-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1972-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f1997(){if (rlsls2_p1997) return rlsls2_m1997; else {rlsls2_p1997=T;return rlsls2_m1997=(rlsls2_f2034()?NIL:((fabs((rlsls2_f2017()-rlsls2_v7330))<rlsls2_v7308)?(fabs((rlsls2_f2015()-rlsls2_v7328))<rlsls2_v7308):NIL));}}
static int rlsls2_f1994(){if (rlsls2_p1994) return rlsls2_m1994; else {rlsls2_p1994=T;return rlsls2_m1994=(rlsls2_f1997()?NIL:T);}}
static int rlsls2_f1985(){if (rlsls2_p1985) return rlsls2_m1985; else {rlsls2_p1985=T;return rlsls2_m1985=(rlsls2_f2034()?NIL:((fabs((rlsls2_f2017()-rlsls2_v7326))<rlsls2_v7308)?(fabs((rlsls2_f2015()-rlsls2_v7324))<rlsls2_v7308):NIL));}}
static int rlsls2_f1982(){if (rlsls2_p1982) return rlsls2_m1982; else {rlsls2_p1982=T;return rlsls2_m1982=(rlsls2_f1985()?NIL:T);}}
static int rlsls2_f2019(){if (rlsls2_p2019) return rlsls2_m2019; else {rlsls2_p2019=T;return rlsls2_m2019=((fabs((rlsls2_f2029()-(0.0)))<rlsls2_v7308)?(fabs((rlsls2_f2023()-(0.0)))<rlsls2_v7308):NIL);}}
static int rlsls2_f2018(){if (rlsls2_p2018) return rlsls2_m2018; else {rlsls2_p2018=T;return rlsls2_m2018=(rlsls2_f2034()?rlsls2_f2019():T);}}
static int rlsls2_f1959(){if (rlsls2_p1959) return rlsls2_m1959; else {rlsls2_p1959=T;return rlsls2_m1959=(rlsls2_f2034()?rlsls2_f2019():NIL);}}
static int rlsls2_f1365(){if (rlsls2_p1365) return rlsls2_m1365; else {rlsls2_p1365=T;return rlsls2_m1365=((rlsls2_v1381=rlsls2_f1381()),(rlsls2_v1381?rlsls2_v1381:((rlsls2_v1959=rlsls2_f1959()),(rlsls2_v1959?rlsls2_v1959:(rlsls2_f1951()?NIL:((rlsls2_f1374()?NIL:(rlsls2_f1931()?NIL:(rlsls2_f1930()?rlsls2_f1373():rlsls2_f1372())))?NIL:T))))));}}
static int rlsls2_f1921(){if (rlsls2_p1921) return rlsls2_m1921; else {rlsls2_p1921=T;return rlsls2_m1921=((rlsls2_v1960=rlsls2_f1960()),(rlsls2_v1960?rlsls2_v1960:((rlsls2_v1959=rlsls2_f1959()),(rlsls2_v1959?rlsls2_v1959:(rlsls2_f1951()?NIL:((rlsls2_f1944()?NIL:(rlsls2_f1931()?NIL:(rlsls2_f1930()?rlsls2_f1929():rlsls2_f1928())))?NIL:T))))));}}
static double rlsls2_f2081(){if (rlsls2_p2081) return rlsls2_m2081; else {rlsls2_p2081=T;return rlsls2_m2081=(rlsls2_f2086()-(rlsls2_f2084()*rlsls2_f2083()));}}
static double rlsls2_f2068(){if (rlsls2_p2068) return rlsls2_m2068; else {rlsls2_p2068=T;return rlsls2_m2068=((((rlsls2_f2076()*rlsls2_f2087())-(rlsls2_f2084()*rlsls2_f2072()))/rlsls2_f2081())-rlsls2_v7314);}}
static double rlsls2_f2062(){if (rlsls2_p2062) return rlsls2_m2062; else {rlsls2_p2062=T;return rlsls2_m2062=((((rlsls2_f2087()*rlsls2_f2072())-(rlsls2_f2076()*rlsls2_f2083()))/rlsls2_f2081())-rlsls2_v7312);}}
static double rlsls2_f2058(){if (rlsls2_p2058) return rlsls2_m2058; else {rlsls2_p2058=T;return rlsls2_m2058=((fabs((rlsls2_f2081()-(0.0)))<rlsls2_v7308)?rlsls2_f3265():((rlsls2_v2068=rlsls2_f2068()),(rlsls2_v2062=rlsls2_f2062()),sqrt(((rlsls2_v2068*rlsls2_v2068)+(rlsls2_v2062*rlsls2_v2062)))));}}
static double rlsls2_f7293(){if (rlsls2_p7293) return rlsls2_m7293; else {rlsls2_p7293=T;return rlsls2_m7293=(rlsls2_v7322-rlsls2_v7318);}}
static int rlsls2_f7291(){if (rlsls2_p7291) return rlsls2_m7291; else {rlsls2_p7291=T;return rlsls2_m7291=(fabs(rlsls2_f7293())<rlsls2_v7308);}}
static double rlsls2_f7288(){if (rlsls2_p7288) return rlsls2_m7288; else {rlsls2_p7288=T;return rlsls2_m7288=(rlsls2_v7318-rlsls2_v7322);}}
static double rlsls2_f6979(){if (rlsls2_p6979) return rlsls2_m6979; else {rlsls2_p6979=T;return rlsls2_m6979=fabs(normalize_rotation((atan2((rlsls2_v7316-rlsls2_v7320),rlsls2_f7288())-atan2(rlsls2_f6984(),rlsls2_f6983()))));}}
static int rlsls2_f3176(){if (rlsls2_p3176) return rlsls2_m3176; else {rlsls2_p3176=T;return rlsls2_m3176=(rlsls2_f6979()>(1.5707963267948966));}}
static int rlsls2_f3172(){if (rlsls2_p3172) return rlsls2_m3172; else {rlsls2_p3172=T;return rlsls2_m3172=((rlsls2_v3176=rlsls2_f3176()),(rlsls2_v3176?rlsls2_v3176:(fabs((rlsls2_f6979()-(1.5707963267948966)))<rlsls2_v7308)));}}
static int rlsls2_f1983(){if (rlsls2_p1983) return rlsls2_m1983; else {rlsls2_p1983=T;return rlsls2_m1983=(rlsls2_f3172()?rlsls2_f2590():rlsls2_f1984());}}
static int rlsls2_f3171(){if (rlsls2_p3171) return rlsls2_m3171; else {rlsls2_p3171=T;return rlsls2_m3171=(rlsls2_f3172()?NIL:T);}}
static int rlsls2_f2585(){if (rlsls2_p2585) return rlsls2_m2585; else {rlsls2_p2585=T;return rlsls2_m2585=(rlsls2_f2590()?rlsls2_f3172():rlsls2_f3171());}}
static double rlsls2_f7296(){if (rlsls2_p7296) return rlsls2_m7296; else {rlsls2_p7296=T;return rlsls2_m7296=(rlsls2_v7320-rlsls2_v7316);}}
static double rlsls2_f6954(){if (rlsls2_p6954) return rlsls2_m6954; else {rlsls2_p6954=T;return rlsls2_m6954=fabs(normalize_rotation((atan2(rlsls2_f7296(),rlsls2_f7293())-atan2(rlsls2_f6959(),rlsls2_f6958()))));}}
static int rlsls2_f3159(){if (rlsls2_p3159) return rlsls2_m3159; else {rlsls2_p3159=T;return rlsls2_m3159=(rlsls2_f6954()>(1.5707963267948966));}}
static int rlsls2_f3155(){if (rlsls2_p3155) return rlsls2_m3155; else {rlsls2_p3155=T;return rlsls2_m3155=((rlsls2_v3159=rlsls2_f3159()),(rlsls2_v3159?rlsls2_v3159:(fabs((rlsls2_f6954()-(1.5707963267948966)))<rlsls2_v7308)));}}
static int rlsls2_f1398(){if (rlsls2_p1398) return rlsls2_m1398; else {rlsls2_p1398=T;return rlsls2_m1398=(rlsls2_f3155()?rlsls2_f2590():rlsls2_f1984());}}
static int rlsls2_f3154(){if (rlsls2_p3154) return rlsls2_m3154; else {rlsls2_p3154=T;return rlsls2_m3154=(rlsls2_f3155()?NIL:T);}}
static int rlsls2_f2583(){if (rlsls2_p2583) return rlsls2_m2583; else {rlsls2_p2583=T;return rlsls2_m2583=(rlsls2_f2590()?rlsls2_f3155():rlsls2_f3154());}}
static int rlsls2_f7294(){if (rlsls2_p7294) return rlsls2_m7294; else {rlsls2_p7294=T;return rlsls2_m7294=(fabs(rlsls2_f7296())<rlsls2_v7308);}}
static double rlsls2_f3276(){if (rlsls2_p3276) return rlsls2_m3276; else {rlsls2_p3276=T;return rlsls2_m3276=(rlsls2_f7294()?(rlsls2_f7291()?rlsls2_f3280():(0.0)):(1.0));}}
static int rlsls2_f3232(){if (rlsls2_p3232) return rlsls2_m3232; else {rlsls2_p3232=T;return rlsls2_m3232=(rlsls2_f3276()==0.0);}}
static double rlsls2_f3261(){if (rlsls2_p3261) return rlsls2_m3261; else {rlsls2_p3261=T;return rlsls2_m3261=(rlsls2_f3276()*rlsls2_v7312);}}
static double rlsls2_f3275(){if (rlsls2_p3275) return rlsls2_m3275; else {rlsls2_p3275=T;return rlsls2_m3275=((rlsls2_v3276=rlsls2_f3276()),(rlsls2_v3276*rlsls2_v3276));}}
static double rlsls2_f7287(){if (rlsls2_p7287) return rlsls2_m7287; else {rlsls2_p7287=T;return rlsls2_m7287=(rlsls2_f7288()/rlsls2_f7296());}}
static double rlsls2_f3263(){if (rlsls2_p3263) return rlsls2_m3263; else {rlsls2_p3263=T;return rlsls2_m3263=(rlsls2_f7294()?(rlsls2_f7291()?rlsls2_f3280():rlsls2_v7320):(rlsls2_v7322+(rlsls2_f7287()*rlsls2_v7320)));}}
static double rlsls2_f3273(){if (rlsls2_p3273) return rlsls2_m3273; else {rlsls2_p3273=T;return rlsls2_m3273=(rlsls2_f7294()?(rlsls2_f7291()?rlsls2_f3280():(1.0)):rlsls2_f7287());}}
static double rlsls2_f2562(){if (rlsls2_p2562) return rlsls2_m2562; else {rlsls2_p2562=T;return rlsls2_m2562=(((rlsls2_f3276()*rlsls2_v7330)+(rlsls2_f3273()*rlsls2_v7328))-rlsls2_f3263());}}
static int rlsls2_f2559(){if (rlsls2_p2559) return rlsls2_m2559; else {rlsls2_p2559=T;return rlsls2_m2559=(fabs((rlsls2_f2562()-(0.0)))<rlsls2_v7308);}}
static int rlsls2_f2558(){if (rlsls2_p2558) return rlsls2_m2558; else {rlsls2_p2558=T;return rlsls2_m2558=(rlsls2_f2562()>(0.0));}}
static int rlsls2_f2557(){if (rlsls2_p2557) return rlsls2_m2557; else {rlsls2_p2557=T;return rlsls2_m2557=(rlsls2_f2558()?NIL:T);}}
static double rlsls2_f3062(){if (rlsls2_p3062) return rlsls2_m3062; else {rlsls2_p3062=T;return rlsls2_m3062=(rlsls2_f3263()/rlsls2_f3273());}}
static int rlsls2_f3037(){if (rlsls2_p3037) return rlsls2_m3037; else {rlsls2_p3037=T;return rlsls2_m3037=(fabs((rlsls2_f3062()-rlsls2_v7320))<rlsls2_v7308);}}
static int rlsls2_f3028(){if (rlsls2_p3028) return rlsls2_m3028; else {rlsls2_p3028=T;return rlsls2_m3028=(fabs((rlsls2_f3062()-rlsls2_v7316))<rlsls2_v7308);}}
static int rlsls2_f3000(){if (rlsls2_p3000) return rlsls2_m3000; else {rlsls2_p3000=T;return rlsls2_m3000=(fabs((rlsls2_v7312-rlsls2_f3062()))<rlsls2_v7308);}}
static double rlsls2_f3023(){if (rlsls2_p3023) return rlsls2_m3023; else {rlsls2_p3023=T;return rlsls2_m3023=(rlsls2_f3062()-rlsls2_v7312);}}
static int rlsls2_f3055(){if (rlsls2_p3055) return rlsls2_m3055; else {rlsls2_p3055=T;return rlsls2_m3055=((rlsls2_f7108()<=rlsls2_f3062())&&(rlsls2_f3062()<=rlsls2_f7106()));}}
static double rlsls2_f3061(){if (rlsls2_p3061) return rlsls2_m3061; else {rlsls2_p3061=T;return rlsls2_m3061=(rlsls2_f3273()*rlsls2_f3062());}}
static double rlsls2_f3111(){if (rlsls2_p3111) return rlsls2_m3111; else {rlsls2_p3111=T;return rlsls2_m3111=(((rlsls2_f3276()*rlsls2_v7326)+(rlsls2_f3273()*rlsls2_v7324))-rlsls2_f3263());}}
static int rlsls2_f3108(){if (rlsls2_p3108) return rlsls2_m3108; else {rlsls2_p3108=T;return rlsls2_m3108=(fabs((rlsls2_f3111()-(0.0)))<rlsls2_v7308);}}
static int rlsls2_f3094(){if (rlsls2_p3094) return rlsls2_m3094; else {rlsls2_p3094=T;return rlsls2_m3094=(rlsls2_f3111()>(0.0));}}
static int rlsls2_f3093(){if (rlsls2_p3093) return rlsls2_m3093; else {rlsls2_p3093=T;return rlsls2_m3093=(rlsls2_f3094()?NIL:T);}}
static int rlsls2_f3223(){if (rlsls2_p3223) return rlsls2_m3223; else {rlsls2_p3223=T;return rlsls2_m3223=(rlsls2_f3273()>0.0);}}
static double rlsls2_f3221(){if (rlsls2_p3221) return rlsls2_m3221; else {rlsls2_p3221=T;return rlsls2_m3221=(rlsls2_f3223()?(-rlsls2_f3276()):rlsls2_f3276());}}
static double rlsls2_f3227(){if (rlsls2_p3227) return rlsls2_m3227; else {rlsls2_p3227=T;return rlsls2_m3227=((rlsls2_v3273=rlsls2_f3273()),(rlsls2_v3273*rlsls2_v3273));}}
static double rlsls2_f2882(){if (rlsls2_p2882) return rlsls2_m2882; else {rlsls2_p2882=T;return rlsls2_m2882=(rlsls2_f3275()+rlsls2_f3227());}}
static double rlsls2_f2875(){if (rlsls2_p2875) return rlsls2_m2875; else {rlsls2_p2875=T;return rlsls2_m2875=((rlsls2_v2882=rlsls2_f2882()),(rlsls2_v2882+rlsls2_v2882));}}
static double rlsls2_f3229(){if (rlsls2_p3229) return rlsls2_m3229; else {rlsls2_p3229=T;return rlsls2_m3229=(rlsls2_f3263()-(rlsls2_f3276()*rlsls2_v7314)-(rlsls2_f3273()*rlsls2_v7312));}}
static double rlsls2_f2885(){if (rlsls2_p2885) return rlsls2_m2885; else {rlsls2_p2885=T;return rlsls2_m2885=((-2.0)*rlsls2_f3273()*rlsls2_f3229());}}
static double rlsls2_f2874(){if (rlsls2_p2874) return rlsls2_m2874; else {rlsls2_p2874=T;return rlsls2_m2874=((-rlsls2_f2885())/rlsls2_f2875());}}
static double rlsls2_f2884(){if (rlsls2_p2884) return rlsls2_m2884; else {rlsls2_p2884=T;return rlsls2_m2884=((rlsls2_v2885=rlsls2_f2885()),(rlsls2_v2885*rlsls2_v2885));}}
static double rlsls2_f3228(){if (rlsls2_p3228) return rlsls2_m3228; else {rlsls2_p3228=T;return rlsls2_m3228=((rlsls2_v3229=rlsls2_f3229()),(rlsls2_v3229*rlsls2_v3229));}}
static double rlsls2_f3226(){if (rlsls2_p3226) return rlsls2_m3226; else {rlsls2_p3226=T;return rlsls2_m3226=(rlsls2_f3228()/rlsls2_f3227());}}
static double rlsls2_f3260(){if (rlsls2_p3260) return rlsls2_m3260; else {rlsls2_p3260=T;return rlsls2_m3260=(rlsls2_f3273()*rlsls2_v7314);}}
static double rlsls2_f3259(){if (rlsls2_p3259) return rlsls2_m3259; else {rlsls2_p3259=T;return rlsls2_m3259=(rlsls2_f3261()-rlsls2_f3260());}}
static double rlsls2_f3211(){if (rlsls2_p3211) return rlsls2_m3211; else {rlsls2_p3211=T;return rlsls2_m3211=(rlsls2_f3223()?(rlsls2_f3260()-rlsls2_f3261()):rlsls2_f3259());}}
static double rlsls2_f3209(){if (rlsls2_p3209) return rlsls2_m3209; else {rlsls2_p3209=T;return rlsls2_m3209=((rlsls2_f3263()*rlsls2_f3221())-(rlsls2_f3273()*rlsls2_f3211()));}}
static double rlsls2_f3272(){if (rlsls2_p3272) return rlsls2_m3272; else {rlsls2_p3272=T;return rlsls2_m3272=(-rlsls2_f3273());}}
static double rlsls2_f3219(){if (rlsls2_p3219) return rlsls2_m3219; else {rlsls2_p3219=T;return rlsls2_m3219=(rlsls2_f3223()?rlsls2_f3273():rlsls2_f3272());}}
static double rlsls2_f3217(){if (rlsls2_p3217) return rlsls2_m3217; else {rlsls2_p3217=T;return rlsls2_m3217=((rlsls2_f3276()*rlsls2_f3221())-(rlsls2_f3273()*rlsls2_f3219()));}}
static double rlsls2_f3197(){if (rlsls2_p3197) return rlsls2_m3197; else {rlsls2_p3197=T;return rlsls2_m3197=(rlsls2_f3209()/rlsls2_f3217());}}
static int rlsls2_f3214(){if (rlsls2_p3214) return rlsls2_m3214; else {rlsls2_p3214=T;return rlsls2_m3214=(fabs((rlsls2_f3217()-(0.0)))<rlsls2_v7308);}}
static double rlsls2_f3143(){if (rlsls2_p3143) return rlsls2_m3143; else {rlsls2_p3143=T;return rlsls2_m3143=(rlsls2_f3214()?rlsls2_f3144():rlsls2_f3197());}}
static double rlsls2_f3203(){if (rlsls2_p3203) return rlsls2_m3203; else {rlsls2_p3203=T;return rlsls2_m3203=((rlsls2_f3276()*rlsls2_f3211())-(rlsls2_f3263()*rlsls2_f3219()));}}
static double rlsls2_f3195(){if (rlsls2_p3195) return rlsls2_m3195; else {rlsls2_p3195=T;return rlsls2_m3195=(rlsls2_f3203()/rlsls2_f3217());}}
static int rlsls2_f3185(){if (rlsls2_p3185) return rlsls2_m3185; else {rlsls2_p3185=T;return rlsls2_m3185=(rlsls2_f3214()?NIL:((rlsls2_v3197=rlsls2_f3197()),(rlsls2_v3195=rlsls2_f3195()),((fabs((((rlsls2_f3276()*rlsls2_v3197)+(rlsls2_f3273()*rlsls2_v3195))-rlsls2_f3263()))<rlsls2_v7308)?(((rlsls2_f7117()<=rlsls2_v3197)&&(rlsls2_v3197<=rlsls2_f7115()))?((rlsls2_f7108()<=rlsls2_v3195)&&(rlsls2_v3195<=rlsls2_f7106())):NIL):NIL)));}}
static int rlsls2_f3115(){if (rlsls2_p3115) return rlsls2_m3115; else {rlsls2_p3115=T;return rlsls2_m3115=(rlsls2_f3214()?NIL:((fabs((rlsls2_v7314-rlsls2_f3197()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f3195()))<rlsls2_v7308):NIL));}}
static double rlsls2_f3147(){if (rlsls2_p3147) return rlsls2_m3147; else {rlsls2_p3147=T;return rlsls2_m3147=(rlsls2_f3214()?rlsls2_f3148():rlsls2_f3195());}}
static double rlsls2_f3141(){if (rlsls2_p3141) return rlsls2_m3141; else {rlsls2_p3141=T;return rlsls2_m3141=atan2((rlsls2_f3147()-rlsls2_v7312),(rlsls2_f3143()-rlsls2_v7314));}}
static double rlsls2_f2579(){if (rlsls2_p2579) return rlsls2_m2579; else {rlsls2_p2579=T;return rlsls2_m2579=normalize_rotation((rlsls2_f3141()-rlsls2_f6280()));}}
static int rlsls2_f817(){if (rlsls2_p817) return rlsls2_m817; else {rlsls2_p817=T;return rlsls2_m817=(rlsls2_f2579()<rlsls2_f1419());}}
static double rlsls2_f689(){if (rlsls2_p689) return rlsls2_m689; else {rlsls2_p689=T;return rlsls2_m689=(rlsls2_f817()?rlsls2_f2579():rlsls2_f1419());}}
static double rlsls2_f2578(){if (rlsls2_p2578) return rlsls2_m2578; else {rlsls2_p2578=T;return rlsls2_m2578=normalize_rotation(rlsls2_f2579());}}
static int rlsls2_f2566(){if (rlsls2_p2566) return rlsls2_m2566; else {rlsls2_p2566=T;return rlsls2_m2566=((rlsls2_v2578=rlsls2_f2578()),((fabs((rlsls2_v2578-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2578-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2578-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static double rlsls2_f3107(){if (rlsls2_p3107) return rlsls2_m3107; else {rlsls2_p3107=T;return rlsls2_m3107=(rlsls2_f3141()+(1.5707963267948966));}}
static double rlsls2_f3099(){if (rlsls2_p3099) return rlsls2_m3099; else {rlsls2_p3099=T;return rlsls2_m3099=((rlsls2_v3107=rlsls2_f3107()),(((rlsls2_f3276()*(rlsls2_f3143()+cos(rlsls2_v3107)))+(rlsls2_f3273()*(rlsls2_f3147()+sin(rlsls2_v3107))))-rlsls2_f3263()));}}
static int rlsls2_f3096(){if (rlsls2_p3096) return rlsls2_m3096; else {rlsls2_p3096=T;return rlsls2_m3096=(fabs((rlsls2_f3099()-(0.0)))<rlsls2_v7308);}}
static int rlsls2_f3095(){if (rlsls2_p3095) return rlsls2_m3095; else {rlsls2_p3095=T;return rlsls2_m3095=(rlsls2_f3099()>(0.0));}}
static double rlsls2_f3139(){if (rlsls2_p3139) return rlsls2_m3139; else {rlsls2_p3139=T;return rlsls2_m3139=normalize_rotation((rlsls2_f3141()-rlsls2_f6935()));}}
static double rlsls2_f476(){if (rlsls2_p476) return rlsls2_m476; else {rlsls2_p476=T;return rlsls2_m476=((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v1419=rlsls2_f1419()),((rlsls2_v3139<rlsls2_v1419)?rlsls2_v3139:rlsls2_v1419));}}
static double rlsls2_f3138(){if (rlsls2_p3138) return rlsls2_m3138; else {rlsls2_p3138=T;return rlsls2_m3138=normalize_rotation(rlsls2_f3139());}}
static int rlsls2_f3124(){if (rlsls2_p3124) return rlsls2_m3124; else {rlsls2_p3124=T;return rlsls2_m3124=((rlsls2_v3138=rlsls2_f3138()),((fabs((rlsls2_v3138-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v3138-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v3138-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f3177(){if (rlsls2_p3177) return rlsls2_m3177; else {rlsls2_p3177=T;return rlsls2_m3177=(rlsls2_f3214()?NIL:((fabs((rlsls2_f3197()-rlsls2_v7322))<rlsls2_v7308)?(fabs((rlsls2_f3195()-rlsls2_v7320))<rlsls2_v7308):NIL));}}
static int rlsls2_f3169(){if (rlsls2_p3169) return rlsls2_m3169; else {rlsls2_p3169=T;return rlsls2_m3169=(rlsls2_f3177()?NIL:T);}}
static int rlsls2_f3160(){if (rlsls2_p3160) return rlsls2_m3160; else {rlsls2_p3160=T;return rlsls2_m3160=(rlsls2_f3214()?NIL:((fabs((rlsls2_f3197()-rlsls2_v7318))<rlsls2_v7308)?(fabs((rlsls2_f3195()-rlsls2_v7316))<rlsls2_v7308):NIL));}}
static int rlsls2_f3152(){if (rlsls2_p3152) return rlsls2_m3152; else {rlsls2_p3152=T;return rlsls2_m3152=(rlsls2_f3160()?NIL:T);}}
static int rlsls2_f2581(){if (rlsls2_p2581) return rlsls2_m2581; else {rlsls2_p2581=T;return rlsls2_m2581=((rlsls2_f3177()?rlsls2_f2585():rlsls2_f3169())?(rlsls2_f3160()?rlsls2_f2583():rlsls2_f3152()):NIL);}}
static int rlsls2_f3199(){if (rlsls2_p3199) return rlsls2_m3199; else {rlsls2_p3199=T;return rlsls2_m3199=((fabs((rlsls2_f3209()-(0.0)))<rlsls2_v7308)?(fabs((rlsls2_f3203()-(0.0)))<rlsls2_v7308):NIL);}}
static int rlsls2_f3198(){if (rlsls2_p3198) return rlsls2_m3198; else {rlsls2_p3198=T;return rlsls2_m3198=(rlsls2_f3214()?rlsls2_f3199():T);}}
static int rlsls2_f3123(){if (rlsls2_p3123) return rlsls2_m3123; else {rlsls2_p3123=T;return rlsls2_m3123=(rlsls2_f3214()?rlsls2_f3199():NIL);}}
static int rlsls2_f2550(){if (rlsls2_p2550) return rlsls2_m2550; else {rlsls2_p2550=T;return rlsls2_m2550=((rlsls2_v2566=rlsls2_f2566()),(rlsls2_v2566?rlsls2_v2566:((rlsls2_v3123=rlsls2_f3123()),(rlsls2_v3123?rlsls2_v3123:(rlsls2_f3115()?NIL:((rlsls2_f2559()?NIL:(rlsls2_f3096()?NIL:(rlsls2_f3095()?rlsls2_f2558():rlsls2_f2557())))?NIL:T))))));}}
static double_or_symbol rlsls2_f43(){if (rlsls2_p43) return rlsls2_m43; else {rlsls2_p43=T;return rlsls2_m43=(rlsls2_f2581()?(rlsls2_f2550()?coerce_double_to_double_or_symbol(rlsls2_f2579()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2154(){if (rlsls2_p2154) return rlsls2_m2154; else {rlsls2_p2154=T;return rlsls2_m2154=(rlsls2_f2581()?(rlsls2_f2550()?rlsls2_f2579():rlsls2_f2665()):rlsls2_f2665());}}
static int rlsls2_f830(){if (rlsls2_p830) return rlsls2_m830; else {rlsls2_p830=T;return rlsls2_m830=(rlsls2_f2154()<rlsls2_f1419());}}
static double rlsls2_f701(){if (rlsls2_p701) return rlsls2_m701; else {rlsls2_p701=T;return rlsls2_m701=(rlsls2_f830()?rlsls2_f2154():rlsls2_f1419());}}
static int rlsls2_f2549(){if (rlsls2_p2549) return rlsls2_m2549; else {rlsls2_p2549=T;return rlsls2_m2549=(rlsls2_f2581()?rlsls2_f2550():NIL);}}
static int rlsls2_f829(){if (rlsls2_p829) return rlsls2_m829; else {rlsls2_p829=T;return rlsls2_m829=(rlsls2_f830()?rlsls2_f2549():NIL);}}
static double rlsls2_f2544(){if (rlsls2_p2544) return rlsls2_m2544; else {rlsls2_p2544=T;return rlsls2_m2544=(rlsls2_f2581()?(rlsls2_f2550()?rlsls2_f2579():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2547(){if (rlsls2_p2547) return rlsls2_m2547; else {rlsls2_p2547=T;return rlsls2_m2547=(rlsls2_f2581()?(rlsls2_f2550()?rlsls2_f2579():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2546(){if (rlsls2_p2546) return rlsls2_m2546; else {rlsls2_p2546=T;return rlsls2_m2546=(rlsls2_f2547()>(0.0));}}
static int rlsls2_f2539(){if (rlsls2_p2539) return rlsls2_m2539; else {rlsls2_p2539=T;return rlsls2_m2539=(rlsls2_f2549()?((rlsls2_v2546=rlsls2_f2546()),(rlsls2_v2546?rlsls2_v2546:(fabs((rlsls2_f2544()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f2161(){if (rlsls2_p2161) return rlsls2_m2161; else {rlsls2_p2161=T;return rlsls2_m2161=(rlsls2_f2539()?rlsls2_f2544():rlsls2_f3078());}}
static double rlsls2_f2163(){if (rlsls2_p2163) return rlsls2_m2163; else {rlsls2_p2163=T;return rlsls2_m2163=(rlsls2_f2539()?rlsls2_f2547():rlsls2_f3083());}}
static int rlsls2_f2162(){if (rlsls2_p2162) return rlsls2_m2162; else {rlsls2_p2162=T;return rlsls2_m2162=(rlsls2_f2163()>(0.0));}}
static int rlsls2_f2538(){if (rlsls2_p2538) return rlsls2_m2538; else {rlsls2_p2538=T;return rlsls2_m2538=(rlsls2_f2539()?rlsls2_f2549():NIL);}}
static int rlsls2_f2156(){if (rlsls2_p2156) return rlsls2_m2156; else {rlsls2_p2156=T;return rlsls2_m2156=(rlsls2_f2538()?((rlsls2_v2162=rlsls2_f2162()),(rlsls2_v2162?rlsls2_v2162:(fabs((rlsls2_f2161()-(0.0)))<rlsls2_v7308))):NIL);}}
static int rlsls2_f3086(){if (rlsls2_p3086) return rlsls2_m3086; else {rlsls2_p3086=T;return rlsls2_m3086=((rlsls2_v3124=rlsls2_f3124()),(rlsls2_v3124?rlsls2_v3124:((rlsls2_v3123=rlsls2_f3123()),(rlsls2_v3123?rlsls2_v3123:(rlsls2_f3115()?NIL:((rlsls2_f3108()?NIL:(rlsls2_f3096()?NIL:(rlsls2_f3095()?rlsls2_f3094():rlsls2_f3093())))?NIL:T))))));}}
static double rlsls2_f3270(){if (rlsls2_p3270) return rlsls2_m3270; else {rlsls2_p3270=T;return rlsls2_m3270=(rlsls2_f3275()-(rlsls2_f3273()*rlsls2_f3272()));}}
static double rlsls2_f3255(){if (rlsls2_p3255) return rlsls2_m3255; else {rlsls2_p3255=T;return rlsls2_m3255=((((rlsls2_f3263()*rlsls2_f3276())-(rlsls2_f3273()*rlsls2_f3259()))/rlsls2_f3270())-rlsls2_v7314);}}
static double rlsls2_f3249(){if (rlsls2_p3249) return rlsls2_m3249; else {rlsls2_p3249=T;return rlsls2_m3249=((((rlsls2_f3276()*rlsls2_f3259())-(rlsls2_f3263()*rlsls2_f3272()))/rlsls2_f3270())-rlsls2_v7312);}}
static double rlsls2_f3245(){if (rlsls2_p3245) return rlsls2_m3245; else {rlsls2_p3245=T;return rlsls2_m3245=((fabs((rlsls2_f3270()-(0.0)))<rlsls2_v7308)?rlsls2_f3265():((rlsls2_v3255=rlsls2_f3255()),(rlsls2_v3249=rlsls2_f3249()),sqrt(((rlsls2_v3255*rlsls2_v3255)+(rlsls2_v3249*rlsls2_v3249)))));}}
static double rlsls2_f7305(){if (rlsls2_p7305) return rlsls2_m7305; else {rlsls2_p7305=T;return rlsls2_m7305=(rlsls2_v7312-rlsls2_v7328);}}
static double rlsls2_f7224(){if (rlsls2_p7224) return rlsls2_m7224; else {rlsls2_p7224=T;return rlsls2_m7224=fabs(normalize_rotation((atan2((rlsls2_v7324-rlsls2_v7328),rlsls2_f7229())-atan2(rlsls2_f7305(),rlsls2_v7310))));}}
static int rlsls2_f3240(){if (rlsls2_p3240) return rlsls2_m3240; else {rlsls2_p3240=T;return rlsls2_m3240=(rlsls2_f7224()>(1.5707963267948966));}}
static int rlsls2_f3236(){if (rlsls2_p3236) return rlsls2_m3236; else {rlsls2_p3236=T;return rlsls2_m3236=((rlsls2_v3240=rlsls2_f3240()),(rlsls2_v3240?rlsls2_v3240:(fabs((rlsls2_f7224()-(1.5707963267948966)))<rlsls2_v7308)));}}
static int rlsls2_f1996(){if (rlsls2_p1996) return rlsls2_m1996; else {rlsls2_p1996=T;return rlsls2_m1996=(rlsls2_f3236()?NIL:T);}}
static int rlsls2_f1400(){if (rlsls2_p1400) return rlsls2_m1400; else {rlsls2_p1400=T;return rlsls2_m1400=(rlsls2_f3155()?rlsls2_f3236():rlsls2_f1996());}}
static int rlsls2_f1396(){if (rlsls2_p1396) return rlsls2_m1396; else {rlsls2_p1396=T;return rlsls2_m1396=((rlsls2_f1997()?rlsls2_f1400():rlsls2_f1994())?(rlsls2_f1985()?rlsls2_f1398():rlsls2_f1982()):NIL);}}
static double rlsls2_f970(){if (rlsls2_p970) return rlsls2_m970; else {rlsls2_p970=T;return rlsls2_m970=(rlsls2_f1396()?(rlsls2_f1365()?rlsls2_f1394():rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f1364(){if (rlsls2_p1364) return rlsls2_m1364; else {rlsls2_p1364=T;return rlsls2_m1364=(rlsls2_f1396()?rlsls2_f1365():NIL);}}
static double rlsls2_f1359(){if (rlsls2_p1359) return rlsls2_m1359; else {rlsls2_p1359=T;return rlsls2_m1359=(rlsls2_f1396()?(rlsls2_f1365()?rlsls2_f1394():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f1362(){if (rlsls2_p1362) return rlsls2_m1362; else {rlsls2_p1362=T;return rlsls2_m1362=(rlsls2_f1396()?(rlsls2_f1365()?rlsls2_f1394():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f1361(){if (rlsls2_p1361) return rlsls2_m1361; else {rlsls2_p1361=T;return rlsls2_m1361=(rlsls2_f1362()<(0.0));}}
static int rlsls2_f1354(){if (rlsls2_p1354) return rlsls2_m1354; else {rlsls2_p1354=T;return rlsls2_m1354=(rlsls2_f1364()?((rlsls2_v1361=rlsls2_f1361()),(rlsls2_v1361?rlsls2_v1361:(fabs((rlsls2_f1359()-(0.0)))<rlsls2_v7308))):NIL);}}
static int rlsls2_f1351(){if (rlsls2_p1351) return rlsls2_m1351; else {rlsls2_p1351=T;return rlsls2_m1351=((rlsls2_f1354()?rlsls2_f1362():rlsls2_f3083())<(0.0));}}
static int rlsls2_f1345(){if (rlsls2_p1345) return rlsls2_m1345; else {rlsls2_p1345=T;return rlsls2_m1345=((rlsls2_v1354=rlsls2_f1354()),((rlsls2_v1354?rlsls2_f1364():NIL)?((rlsls2_v1351=rlsls2_f1351()),(rlsls2_v1351?rlsls2_v1351:(fabs(((rlsls2_v1354?rlsls2_f1359():rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL));}}
static int rlsls2_f1995(){if (rlsls2_p1995) return rlsls2_m1995; else {rlsls2_p1995=T;return rlsls2_m1995=(rlsls2_f3172()?rlsls2_f3236():rlsls2_f1996());}}
static int rlsls2_f1980(){if (rlsls2_p1980) return rlsls2_m1980; else {rlsls2_p1980=T;return rlsls2_m1980=((rlsls2_f1997()?rlsls2_f1995():rlsls2_f1994())?(rlsls2_f1985()?rlsls2_f1983():rlsls2_f1982()):NIL);}}
static double rlsls2_f1503(){if (rlsls2_p1503) return rlsls2_m1503; else {rlsls2_p1503=T;return rlsls2_m1503=(rlsls2_f1980()?(rlsls2_f1921()?rlsls2_f1973():rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f1920(){if (rlsls2_p1920) return rlsls2_m1920; else {rlsls2_p1920=T;return rlsls2_m1920=(rlsls2_f1980()?rlsls2_f1921():NIL);}}
static double rlsls2_f1915(){if (rlsls2_p1915) return rlsls2_m1915; else {rlsls2_p1915=T;return rlsls2_m1915=(rlsls2_f1980()?(rlsls2_f1921()?rlsls2_f1973():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f1918(){if (rlsls2_p1918) return rlsls2_m1918; else {rlsls2_p1918=T;return rlsls2_m1918=(rlsls2_f1980()?(rlsls2_f1921()?rlsls2_f1973():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f1917(){if (rlsls2_p1917) return rlsls2_m1917; else {rlsls2_p1917=T;return rlsls2_m1917=(rlsls2_f1918()<(0.0));}}
static int rlsls2_f1910(){if (rlsls2_p1910) return rlsls2_m1910; else {rlsls2_p1910=T;return rlsls2_m1910=(rlsls2_f1920()?((rlsls2_v1917=rlsls2_f1917()),(rlsls2_v1917?rlsls2_v1917:(fabs((rlsls2_f1915()-(0.0)))<rlsls2_v7308))):NIL);}}
static int rlsls2_f1907(){if (rlsls2_p1907) return rlsls2_m1907; else {rlsls2_p1907=T;return rlsls2_m1907=((rlsls2_f1910()?rlsls2_f1918():rlsls2_f3083())<(0.0));}}
static int rlsls2_f1901(){if (rlsls2_p1901) return rlsls2_m1901; else {rlsls2_p1901=T;return rlsls2_m1901=((rlsls2_v1910=rlsls2_f1910()),((rlsls2_v1910?rlsls2_f1920():NIL)?((rlsls2_v1907=rlsls2_f1907()),(rlsls2_v1907?rlsls2_v1907:(fabs(((rlsls2_v1910?rlsls2_f1915():rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL));}}
static int rlsls2_f3170(){if (rlsls2_p3170) return rlsls2_m3170; else {rlsls2_p3170=T;return rlsls2_m3170=(rlsls2_f3236()?rlsls2_f3172():rlsls2_f3171());}}
static int rlsls2_f3153(){if (rlsls2_p3153) return rlsls2_m3153; else {rlsls2_p3153=T;return rlsls2_m3153=(rlsls2_f3236()?rlsls2_f3155():rlsls2_f3154());}}
static int rlsls2_f3150(){if (rlsls2_p3150) return rlsls2_m3150; else {rlsls2_p3150=T;return rlsls2_m3150=((rlsls2_f3177()?rlsls2_f3170():rlsls2_f3169())?(rlsls2_f3160()?rlsls2_f3153():rlsls2_f3152()):NIL);}}
static double_or_symbol rlsls2_f79(){if (rlsls2_p79) return rlsls2_m79; else {rlsls2_p79=T;return rlsls2_m79=(rlsls2_f3150()?(rlsls2_f3086()?coerce_double_to_double_or_symbol(rlsls2_f3139()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2663(){if (rlsls2_p2663) return rlsls2_m2663; else {rlsls2_p2663=T;return rlsls2_m2663=(rlsls2_f3150()?(rlsls2_f3086()?rlsls2_f3139():rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f524(){if (rlsls2_p524) return rlsls2_m524; else {rlsls2_p524=T;return rlsls2_m524=((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v1419=rlsls2_f1419()),((rlsls2_v2663<rlsls2_v1419)?rlsls2_v2663:rlsls2_v1419));}}
static int rlsls2_f3085(){if (rlsls2_p3085) return rlsls2_m3085; else {rlsls2_p3085=T;return rlsls2_m3085=(rlsls2_f3150()?rlsls2_f3086():NIL);}}
static double rlsls2_f3076(){if (rlsls2_p3076) return rlsls2_m3076; else {rlsls2_p3076=T;return rlsls2_m3076=(rlsls2_f3150()?(rlsls2_f3086()?rlsls2_f3139():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f3081(){if (rlsls2_p3081) return rlsls2_m3081; else {rlsls2_p3081=T;return rlsls2_m3081=(rlsls2_f3150()?(rlsls2_f3086()?rlsls2_f3139():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f3080(){if (rlsls2_p3080) return rlsls2_m3080; else {rlsls2_p3080=T;return rlsls2_m3080=(rlsls2_f3081()>(0.0));}}
static int rlsls2_f3071(){if (rlsls2_p3071) return rlsls2_m3071; else {rlsls2_p3071=T;return rlsls2_m3071=(rlsls2_f3085()?((rlsls2_v3080=rlsls2_f3080()),(rlsls2_v3080?rlsls2_v3080:(fabs((rlsls2_f3076()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f2672(){if (rlsls2_p2672) return rlsls2_m2672; else {rlsls2_p2672=T;return rlsls2_m2672=(rlsls2_f3071()?rlsls2_f3076():rlsls2_f3078());}}
static double rlsls2_f2674(){if (rlsls2_p2674) return rlsls2_m2674; else {rlsls2_p2674=T;return rlsls2_m2674=(rlsls2_f3071()?rlsls2_f3081():rlsls2_f3083());}}
static int rlsls2_f2673(){if (rlsls2_p2673) return rlsls2_m2673; else {rlsls2_p2673=T;return rlsls2_m2673=(rlsls2_f2674()>(0.0));}}
static int rlsls2_f3070(){if (rlsls2_p3070) return rlsls2_m3070; else {rlsls2_p3070=T;return rlsls2_m3070=(rlsls2_f3071()?rlsls2_f3085():NIL);}}
static int rlsls2_f2667(){if (rlsls2_p2667) return rlsls2_m2667; else {rlsls2_p2667=T;return rlsls2_m2667=(rlsls2_f3070()?((rlsls2_v2673=rlsls2_f2673()),(rlsls2_v2673?rlsls2_v2673:(fabs((rlsls2_f2672()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f7240(){if (rlsls2_p7240) return rlsls2_m7240; else {rlsls2_p7240=T;return rlsls2_m7240=((rlsls2_v7305=rlsls2_f7305()),(rlsls2_v7314-(rlsls2_v7314+sqrt(((rlsls2_v7310*rlsls2_v7310)+(rlsls2_v7305*rlsls2_v7305))))));}}
static double rlsls2_f7238(){if (rlsls2_p7238) return rlsls2_m7238; else {rlsls2_p7238=T;return rlsls2_m7238=(rlsls2_v7312-rlsls2_v7312);}}
static double rlsls2_f7237(){if (rlsls2_p7237) return rlsls2_m7237; else {rlsls2_p7237=T;return rlsls2_m7237=((rlsls2_v7238=rlsls2_f7238()),(rlsls2_v7238*rlsls2_v7238));}}
static double rlsls2_f4939(){if (rlsls2_p4939) return rlsls2_m4939; else {rlsls2_p4939=T;return rlsls2_m4939=((rlsls2_v4942=rlsls2_f4942()),sqrt(((rlsls2_v4942*rlsls2_v4942)+rlsls2_f7237())));}}
static double rlsls2_f4931(){if (rlsls2_p4931) return rlsls2_m4931; else {rlsls2_p4931=T;return rlsls2_m4931=((rlsls2_v4939=rlsls2_f4939()),(rlsls2_v4939*rlsls2_v4939));}}
static double rlsls2_f1172(){if (rlsls2_p1172) return rlsls2_m1172; else {rlsls2_p1172=T;return rlsls2_m1172=(rlsls2_f1717()-((4.0)*rlsls2_f1716()*(rlsls2_f2048()-(rlsls2_f2086()*rlsls2_f4931()))));}}
static int rlsls2_f1171(){if (rlsls2_p1171) return rlsls2_m1171; else {rlsls2_p1171=T;return rlsls2_m1171=(rlsls2_f1172()<0.0);}}
static double rlsls2_f1169(){if (rlsls2_p1169) return rlsls2_m1169; else {rlsls2_p1169=T;return rlsls2_m1169=(sqrt(rlsls2_f1172())/rlsls2_f1709());}}
static double rlsls2_f1153(){if (rlsls2_p1153) return rlsls2_m1153; else {rlsls2_p1153=T;return rlsls2_m1153=((rlsls2_f1708()-rlsls2_f1169())+rlsls2_v7312);}}
static double rlsls2_f1152(){if (rlsls2_p1152) return rlsls2_m1152; else {rlsls2_p1152=T;return rlsls2_m1152=(rlsls2_f2084()*rlsls2_f1153());}}
static double rlsls2_f1150(){if (rlsls2_p1150) return rlsls2_m1150; else {rlsls2_p1150=T;return rlsls2_m1150=((rlsls2_f2076()-rlsls2_f1152())/rlsls2_f2087());}}
static int rlsls2_f1141(){if (rlsls2_p1141) return rlsls2_m1141; else {rlsls2_p1141=T;return rlsls2_m1141=((rlsls2_v1150=rlsls2_f1150()),((fabs((((rlsls2_f2087()*rlsls2_v1150)+rlsls2_f1152())-rlsls2_f2076()))<rlsls2_v7308)?(((rlsls2_f5675()<=rlsls2_v1150)&&(rlsls2_v1150<=rlsls2_f5673()))?((rlsls2_f5666()<=rlsls2_f1153())&&(rlsls2_f1153()<=rlsls2_f5664())):NIL):NIL));}}
static int rlsls2_f1060(){if (rlsls2_p1060) return rlsls2_m1060; else {rlsls2_p1060=T;return rlsls2_m1060=((fabs((rlsls2_f1150()-rlsls2_v7330))<rlsls2_v7308)?(fabs((rlsls2_f1153()-rlsls2_v7328))<rlsls2_v7308):NIL);}}
static int rlsls2_f1051(){if (rlsls2_p1051) return rlsls2_m1051; else {rlsls2_p1051=T;return rlsls2_m1051=((fabs((rlsls2_f1150()-rlsls2_v7326))<rlsls2_v7308)?(fabs((rlsls2_f1153()-rlsls2_v7324))<rlsls2_v7308):NIL);}}
static int rlsls2_f1048(){if (rlsls2_p1048) return rlsls2_m1048; else {rlsls2_p1048=T;return rlsls2_m1048=((rlsls2_v1060=rlsls2_f1060()),((rlsls2_v1060?rlsls2_f1400():(rlsls2_v1060?NIL:T))?((rlsls2_v1051=rlsls2_f1051()),(rlsls2_v1051?rlsls2_f1398():(rlsls2_v1051?NIL:T))):NIL));}}
static double rlsls2_f1045(){if (rlsls2_p1045) return rlsls2_m1045; else {rlsls2_p1045=T;return rlsls2_m1045=atan2((rlsls2_f1153()-rlsls2_v7312),(rlsls2_f1150()-rlsls2_v7314));}}
static double rlsls2_f1022(){if (rlsls2_p1022) return rlsls2_m1022; else {rlsls2_p1022=T;return rlsls2_m1022=(rlsls2_f1045()+(-1.5707963267948966));}}
static double rlsls2_f1014(){if (rlsls2_p1014) return rlsls2_m1014; else {rlsls2_p1014=T;return rlsls2_m1014=((rlsls2_v1022=rlsls2_f1022()),(((rlsls2_f2087()*(rlsls2_f1150()+cos(rlsls2_v1022)))+(rlsls2_f2084()*(rlsls2_f1153()+sin(rlsls2_v1022))))-rlsls2_f2076()));}}
static double rlsls2_f1043(){if (rlsls2_p1043) return rlsls2_m1043; else {rlsls2_p1043=T;return rlsls2_m1043=normalize_rotation((rlsls2_f1045()-rlsls2_f4788()));}}
static double rlsls2_f1042(){if (rlsls2_p1042) return rlsls2_m1042; else {rlsls2_p1042=T;return rlsls2_m1042=normalize_rotation(rlsls2_f1043());}}
static int rlsls2_f1030(){if (rlsls2_p1030) return rlsls2_m1030; else {rlsls2_p1030=T;return rlsls2_m1030=((rlsls2_v1042=rlsls2_f1042()),((fabs((rlsls2_v1042-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1042-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1042-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f1004(){if (rlsls2_p1004) return rlsls2_m1004; else {rlsls2_p1004=T;return rlsls2_m1004=((rlsls2_v1030=rlsls2_f1030()),(rlsls2_v1030?rlsls2_v1030:(((fabs((rlsls2_v7314-rlsls2_f1150()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f1153()))<rlsls2_v7308):NIL)?NIL:((rlsls2_f1374()?NIL:((rlsls2_v1014=rlsls2_f1014()),((fabs((rlsls2_v1014-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v1014>(0.0))?rlsls2_f1373():rlsls2_f1372()))))?NIL:T))));}}
static int rlsls2_f1003(){if (rlsls2_p1003) return rlsls2_m1003; else {rlsls2_p1003=T;return rlsls2_m1003=(rlsls2_f1048()?rlsls2_f1004():NIL);}}
static double rlsls2_f998(){if (rlsls2_p998) return rlsls2_m998; else {rlsls2_p998=T;return rlsls2_m998=(rlsls2_f1048()?(rlsls2_f1004()?rlsls2_f1043():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f1001(){if (rlsls2_p1001) return rlsls2_m1001; else {rlsls2_p1001=T;return rlsls2_m1001=(rlsls2_f1048()?(rlsls2_f1004()?rlsls2_f1043():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f1000(){if (rlsls2_p1000) return rlsls2_m1000; else {rlsls2_p1000=T;return rlsls2_m1000=(rlsls2_f1001()<(0.0));}}
static int rlsls2_f993(){if (rlsls2_p993) return rlsls2_m993; else {rlsls2_p993=T;return rlsls2_m993=(rlsls2_f1003()?((rlsls2_v1000=rlsls2_f1000()),(rlsls2_v1000?rlsls2_v1000:(fabs((rlsls2_f998()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f932(){if (rlsls2_p932) return rlsls2_m932; else {rlsls2_p932=T;return rlsls2_m932=(rlsls2_f993()?(rlsls2_f1048()?(rlsls2_f1004()?rlsls2_f1043():rlsls2_f1509()):rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f897(){if (rlsls2_p897) return rlsls2_m897; else {rlsls2_p897=T;return rlsls2_m897=(rlsls2_f993()?(rlsls2_f1048()?(rlsls2_f1004()?NIL:T):T):T);}}
static int rlsls2_f990(){if (rlsls2_p990) return rlsls2_m990; else {rlsls2_p990=T;return rlsls2_m990=((rlsls2_f993()?rlsls2_f1001():rlsls2_f3083())<(0.0));}}
static int rlsls2_f992(){if (rlsls2_p992) return rlsls2_m992; else {rlsls2_p992=T;return rlsls2_m992=(rlsls2_f993()?rlsls2_f1003():NIL);}}
static int rlsls2_f984(){if (rlsls2_p984) return rlsls2_m984; else {rlsls2_p984=T;return rlsls2_m984=(rlsls2_f992()?((rlsls2_v990=rlsls2_f990()),(rlsls2_v990?rlsls2_v990:(fabs(((rlsls2_f993()?rlsls2_f998():rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f1167(){if (rlsls2_p1167) return rlsls2_m1167; else {rlsls2_p1167=T;return rlsls2_m1167=((rlsls2_f1708()+rlsls2_f1169())+rlsls2_v7312);}}
static double rlsls2_f1166(){if (rlsls2_p1166) return rlsls2_m1166; else {rlsls2_p1166=T;return rlsls2_m1166=(rlsls2_f2084()*rlsls2_f1167());}}
static double rlsls2_f1164(){if (rlsls2_p1164) return rlsls2_m1164; else {rlsls2_p1164=T;return rlsls2_m1164=((rlsls2_f2076()-rlsls2_f1166())/rlsls2_f2087());}}
static int rlsls2_f1155(){if (rlsls2_p1155) return rlsls2_m1155; else {rlsls2_p1155=T;return rlsls2_m1155=((rlsls2_v1164=rlsls2_f1164()),((fabs((((rlsls2_f2087()*rlsls2_v1164)+rlsls2_f1166())-rlsls2_f2076()))<rlsls2_v7308)?(((rlsls2_f5675()<=rlsls2_v1164)&&(rlsls2_v1164<=rlsls2_f5673()))?((rlsls2_f5666()<=rlsls2_f1167())&&(rlsls2_f1167()<=rlsls2_f5664())):NIL):NIL));}}
static int rlsls2_f1134(){if (rlsls2_p1134) return rlsls2_m1134; else {rlsls2_p1134=T;return rlsls2_m1134=((fabs((rlsls2_f1164()-rlsls2_v7330))<rlsls2_v7308)?(fabs((rlsls2_f1167()-rlsls2_v7328))<rlsls2_v7308):NIL);}}
static int rlsls2_f1125(){if (rlsls2_p1125) return rlsls2_m1125; else {rlsls2_p1125=T;return rlsls2_m1125=((fabs((rlsls2_f1164()-rlsls2_v7326))<rlsls2_v7308)?(fabs((rlsls2_f1167()-rlsls2_v7324))<rlsls2_v7308):NIL);}}
static int rlsls2_f1122(){if (rlsls2_p1122) return rlsls2_m1122; else {rlsls2_p1122=T;return rlsls2_m1122=((rlsls2_v1134=rlsls2_f1134()),((rlsls2_v1134?rlsls2_f1400():(rlsls2_v1134?NIL:T))?((rlsls2_v1125=rlsls2_f1125()),(rlsls2_v1125?rlsls2_f1398():(rlsls2_v1125?NIL:T))):NIL));}}
static double rlsls2_f1119(){if (rlsls2_p1119) return rlsls2_m1119; else {rlsls2_p1119=T;return rlsls2_m1119=atan2((rlsls2_f1167()-rlsls2_v7312),(rlsls2_f1164()-rlsls2_v7314));}}
static double rlsls2_f1096(){if (rlsls2_p1096) return rlsls2_m1096; else {rlsls2_p1096=T;return rlsls2_m1096=(rlsls2_f1119()+(-1.5707963267948966));}}
static double rlsls2_f1088(){if (rlsls2_p1088) return rlsls2_m1088; else {rlsls2_p1088=T;return rlsls2_m1088=((rlsls2_v1096=rlsls2_f1096()),(((rlsls2_f2087()*(rlsls2_f1164()+cos(rlsls2_v1096)))+(rlsls2_f2084()*(rlsls2_f1167()+sin(rlsls2_v1096))))-rlsls2_f2076()));}}
static double rlsls2_f1117(){if (rlsls2_p1117) return rlsls2_m1117; else {rlsls2_p1117=T;return rlsls2_m1117=normalize_rotation((rlsls2_f1119()-rlsls2_f4788()));}}
static double rlsls2_f1116(){if (rlsls2_p1116) return rlsls2_m1116; else {rlsls2_p1116=T;return rlsls2_m1116=normalize_rotation(rlsls2_f1117());}}
static int rlsls2_f1104(){if (rlsls2_p1104) return rlsls2_m1104; else {rlsls2_p1104=T;return rlsls2_m1104=((rlsls2_v1116=rlsls2_f1116()),((fabs((rlsls2_v1116-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1116-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1116-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f1078(){if (rlsls2_p1078) return rlsls2_m1078; else {rlsls2_p1078=T;return rlsls2_m1078=((rlsls2_v1104=rlsls2_f1104()),(rlsls2_v1104?rlsls2_v1104:(((fabs((rlsls2_v7314-rlsls2_f1164()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f1167()))<rlsls2_v7308):NIL)?NIL:((rlsls2_f1374()?NIL:((rlsls2_v1088=rlsls2_f1088()),((fabs((rlsls2_v1088-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v1088>(0.0))?rlsls2_f1373():rlsls2_f1372()))))?NIL:T))));}}
static double rlsls2_f936(){if (rlsls2_p936) return rlsls2_m936; else {rlsls2_p936=T;return rlsls2_m936=(rlsls2_f1122()?(rlsls2_f1078()?rlsls2_f1117():rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f901(){if (rlsls2_p901) return rlsls2_m901; else {rlsls2_p901=T;return rlsls2_m901=(rlsls2_f1122()?(rlsls2_f1078()?NIL:T):T);}}
static int rlsls2_f1077(){if (rlsls2_p1077) return rlsls2_m1077; else {rlsls2_p1077=T;return rlsls2_m1077=(rlsls2_f1122()?rlsls2_f1078():NIL);}}
static int rlsls2_f1074(){if (rlsls2_p1074) return rlsls2_m1074; else {rlsls2_p1074=T;return rlsls2_m1074=((rlsls2_f1122()?(rlsls2_f1078()?rlsls2_f1117():rlsls2_f3083()):rlsls2_f3083())<(0.0));}}
static int rlsls2_f1067(){if (rlsls2_p1067) return rlsls2_m1067; else {rlsls2_p1067=T;return rlsls2_m1067=(rlsls2_f1077()?((rlsls2_v1074=rlsls2_f1074()),(rlsls2_v1074?rlsls2_v1074:(fabs(((rlsls2_f1122()?(rlsls2_f1078()?rlsls2_f1117():rlsls2_f3078()):rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f1402(){if (rlsls2_p1402) return rlsls2_m1402; else {rlsls2_p1402=T;return rlsls2_m1402=(rlsls2_f4931()-rlsls2_f2046());}}
static int rlsls2_f1401(){if (rlsls2_p1401) return rlsls2_m1401; else {rlsls2_p1401=T;return rlsls2_m1401=(rlsls2_f1402()<0.0);}}
static double rlsls2_f1339(){if (rlsls2_p1339) return rlsls2_m1339; else {rlsls2_p1339=T;return rlsls2_m1339=sqrt(rlsls2_f1402());}}
static double rlsls2_f1328(){if (rlsls2_p1328) return rlsls2_m1328; else {rlsls2_p1328=T;return rlsls2_m1328=((-rlsls2_f1339())+rlsls2_v7314);}}
static int rlsls2_f1320(){if (rlsls2_p1320) return rlsls2_m1320; else {rlsls2_p1320=T;return rlsls2_m1320=((rlsls2_v1328=rlsls2_f1328()),((fabs((((rlsls2_f2087()*rlsls2_v1328)+rlsls2_f1891())-rlsls2_f2076()))<rlsls2_v7308)?(((rlsls2_f5675()<=rlsls2_v1328)&&(rlsls2_v1328<=rlsls2_f5673()))?rlsls2_f1885():NIL):NIL));}}
static int rlsls2_f1252(){if (rlsls2_p1252) return rlsls2_m1252; else {rlsls2_p1252=T;return rlsls2_m1252=((fabs((rlsls2_f1328()-rlsls2_v7330))<rlsls2_v7308)?rlsls2_f1867():NIL);}}
static int rlsls2_f1246(){if (rlsls2_p1246) return rlsls2_m1246; else {rlsls2_p1246=T;return rlsls2_m1246=((fabs((rlsls2_f1328()-rlsls2_v7326))<rlsls2_v7308)?rlsls2_f1858():NIL);}}
static int rlsls2_f1243(){if (rlsls2_p1243) return rlsls2_m1243; else {rlsls2_p1243=T;return rlsls2_m1243=((rlsls2_v1252=rlsls2_f1252()),((rlsls2_v1252?rlsls2_f1400():(rlsls2_v1252?NIL:T))?((rlsls2_v1246=rlsls2_f1246()),(rlsls2_v1246?rlsls2_f1398():(rlsls2_v1246?NIL:T))):NIL));}}
static double rlsls2_f1241(){if (rlsls2_p1241) return rlsls2_m1241; else {rlsls2_p1241=T;return rlsls2_m1241=atan2(rlsls2_f1853(),(rlsls2_f1328()-rlsls2_v7314));}}
static double rlsls2_f1221(){if (rlsls2_p1221) return rlsls2_m1221; else {rlsls2_p1221=T;return rlsls2_m1221=(rlsls2_f1241()+(-1.5707963267948966));}}
static double rlsls2_f1213(){if (rlsls2_p1213) return rlsls2_m1213; else {rlsls2_p1213=T;return rlsls2_m1213=((rlsls2_v1221=rlsls2_f1221()),(((rlsls2_f2087()*(rlsls2_f1328()+cos(rlsls2_v1221)))+(rlsls2_f2084()*(rlsls2_f1892()+sin(rlsls2_v1221))))-rlsls2_f2076()));}}
static double rlsls2_f1239(){if (rlsls2_p1239) return rlsls2_m1239; else {rlsls2_p1239=T;return rlsls2_m1239=normalize_rotation((rlsls2_f1241()-rlsls2_f4788()));}}
static double rlsls2_f1238(){if (rlsls2_p1238) return rlsls2_m1238; else {rlsls2_p1238=T;return rlsls2_m1238=normalize_rotation(rlsls2_f1239());}}
static int rlsls2_f1226(){if (rlsls2_p1226) return rlsls2_m1226; else {rlsls2_p1226=T;return rlsls2_m1226=((rlsls2_v1238=rlsls2_f1238()),((fabs((rlsls2_v1238-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1238-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1238-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f1203(){if (rlsls2_p1203) return rlsls2_m1203; else {rlsls2_p1203=T;return rlsls2_m1203=((rlsls2_v1226=rlsls2_f1226()),(rlsls2_v1226?rlsls2_v1226:(((fabs((rlsls2_v7314-rlsls2_f1328()))<rlsls2_v7308)?rlsls2_f1830():NIL)?NIL:((rlsls2_f1374()?NIL:((rlsls2_v1213=rlsls2_f1213()),((fabs((rlsls2_v1213-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v1213>(0.0))?rlsls2_f1373():rlsls2_f1372()))))?NIL:T))));}}
static int rlsls2_f1202(){if (rlsls2_p1202) return rlsls2_m1202; else {rlsls2_p1202=T;return rlsls2_m1202=(rlsls2_f1243()?rlsls2_f1203():NIL);}}
static double rlsls2_f1197(){if (rlsls2_p1197) return rlsls2_m1197; else {rlsls2_p1197=T;return rlsls2_m1197=(rlsls2_f1243()?(rlsls2_f1203()?rlsls2_f1239():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f1200(){if (rlsls2_p1200) return rlsls2_m1200; else {rlsls2_p1200=T;return rlsls2_m1200=(rlsls2_f1243()?(rlsls2_f1203()?rlsls2_f1239():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f1199(){if (rlsls2_p1199) return rlsls2_m1199; else {rlsls2_p1199=T;return rlsls2_m1199=(rlsls2_f1200()<(0.0));}}
static int rlsls2_f1192(){if (rlsls2_p1192) return rlsls2_m1192; else {rlsls2_p1192=T;return rlsls2_m1192=(rlsls2_f1202()?((rlsls2_v1199=rlsls2_f1199()),(rlsls2_v1199?rlsls2_v1199:(fabs((rlsls2_f1197()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f951(){if (rlsls2_p951) return rlsls2_m951; else {rlsls2_p951=T;return rlsls2_m951=(rlsls2_f1192()?(rlsls2_f1243()?(rlsls2_f1203()?rlsls2_f1239():rlsls2_f1509()):rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f909(){if (rlsls2_p909) return rlsls2_m909; else {rlsls2_p909=T;return rlsls2_m909=(rlsls2_f1192()?(rlsls2_f1243()?(rlsls2_f1203()?NIL:T):T):T);}}
static int rlsls2_f1189(){if (rlsls2_p1189) return rlsls2_m1189; else {rlsls2_p1189=T;return rlsls2_m1189=((rlsls2_f1192()?rlsls2_f1200():rlsls2_f3083())<(0.0));}}
static int rlsls2_f1191(){if (rlsls2_p1191) return rlsls2_m1191; else {rlsls2_p1191=T;return rlsls2_m1191=(rlsls2_f1192()?rlsls2_f1202():NIL);}}
static int rlsls2_f1183(){if (rlsls2_p1183) return rlsls2_m1183; else {rlsls2_p1183=T;return rlsls2_m1183=(rlsls2_f1191()?((rlsls2_v1189=rlsls2_f1189()),(rlsls2_v1189?rlsls2_v1189:(fabs(((rlsls2_f1192()?rlsls2_f1197():rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f1338(){if (rlsls2_p1338) return rlsls2_m1338; else {rlsls2_p1338=T;return rlsls2_m1338=(rlsls2_f1339()+rlsls2_v7314);}}
static int rlsls2_f1330(){if (rlsls2_p1330) return rlsls2_m1330; else {rlsls2_p1330=T;return rlsls2_m1330=((rlsls2_v1338=rlsls2_f1338()),((fabs((((rlsls2_f2087()*rlsls2_v1338)+rlsls2_f1891())-rlsls2_f2076()))<rlsls2_v7308)?(((rlsls2_f5675()<=rlsls2_v1338)&&(rlsls2_v1338<=rlsls2_f5673()))?rlsls2_f1885():NIL):NIL));}}
static int rlsls2_f1316(){if (rlsls2_p1316) return rlsls2_m1316; else {rlsls2_p1316=T;return rlsls2_m1316=((fabs((rlsls2_f1338()-rlsls2_v7330))<rlsls2_v7308)?rlsls2_f1867():NIL);}}
static int rlsls2_f1310(){if (rlsls2_p1310) return rlsls2_m1310; else {rlsls2_p1310=T;return rlsls2_m1310=((fabs((rlsls2_f1338()-rlsls2_v7326))<rlsls2_v7308)?rlsls2_f1858():NIL);}}
static int rlsls2_f1307(){if (rlsls2_p1307) return rlsls2_m1307; else {rlsls2_p1307=T;return rlsls2_m1307=((rlsls2_v1316=rlsls2_f1316()),((rlsls2_v1316?rlsls2_f1400():(rlsls2_v1316?NIL:T))?((rlsls2_v1310=rlsls2_f1310()),(rlsls2_v1310?rlsls2_f1398():(rlsls2_v1310?NIL:T))):NIL));}}
static double rlsls2_f1305(){if (rlsls2_p1305) return rlsls2_m1305; else {rlsls2_p1305=T;return rlsls2_m1305=atan2(rlsls2_f1853(),(rlsls2_f1338()-rlsls2_v7314));}}
static double rlsls2_f1285(){if (rlsls2_p1285) return rlsls2_m1285; else {rlsls2_p1285=T;return rlsls2_m1285=(rlsls2_f1305()+(-1.5707963267948966));}}
static double rlsls2_f1277(){if (rlsls2_p1277) return rlsls2_m1277; else {rlsls2_p1277=T;return rlsls2_m1277=((rlsls2_v1285=rlsls2_f1285()),(((rlsls2_f2087()*(rlsls2_f1338()+cos(rlsls2_v1285)))+(rlsls2_f2084()*(rlsls2_f1892()+sin(rlsls2_v1285))))-rlsls2_f2076()));}}
static double rlsls2_f1303(){if (rlsls2_p1303) return rlsls2_m1303; else {rlsls2_p1303=T;return rlsls2_m1303=normalize_rotation((rlsls2_f1305()-rlsls2_f4788()));}}
static double rlsls2_f1302(){if (rlsls2_p1302) return rlsls2_m1302; else {rlsls2_p1302=T;return rlsls2_m1302=normalize_rotation(rlsls2_f1303());}}
static int rlsls2_f1290(){if (rlsls2_p1290) return rlsls2_m1290; else {rlsls2_p1290=T;return rlsls2_m1290=((rlsls2_v1302=rlsls2_f1302()),((fabs((rlsls2_v1302-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1302-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1302-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f1267(){if (rlsls2_p1267) return rlsls2_m1267; else {rlsls2_p1267=T;return rlsls2_m1267=((rlsls2_v1290=rlsls2_f1290()),(rlsls2_v1290?rlsls2_v1290:(((fabs((rlsls2_v7314-rlsls2_f1338()))<rlsls2_v7308)?rlsls2_f1830():NIL)?NIL:((rlsls2_f1374()?NIL:((rlsls2_v1277=rlsls2_f1277()),((fabs((rlsls2_v1277-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v1277>(0.0))?rlsls2_f1373():rlsls2_f1372()))))?NIL:T))));}}
static double rlsls2_f955(){if (rlsls2_p955) return rlsls2_m955; else {rlsls2_p955=T;return rlsls2_m955=(rlsls2_f1307()?(rlsls2_f1267()?rlsls2_f1303():rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f913(){if (rlsls2_p913) return rlsls2_m913; else {rlsls2_p913=T;return rlsls2_m913=(rlsls2_f1307()?(rlsls2_f1267()?NIL:T):T);}}
static int rlsls2_f1266(){if (rlsls2_p1266) return rlsls2_m1266; else {rlsls2_p1266=T;return rlsls2_m1266=(rlsls2_f1307()?rlsls2_f1267():NIL);}}
static int rlsls2_f1263(){if (rlsls2_p1263) return rlsls2_m1263; else {rlsls2_p1263=T;return rlsls2_m1263=((rlsls2_f1307()?(rlsls2_f1267()?rlsls2_f1303():rlsls2_f3083()):rlsls2_f3083())<(0.0));}}
static int rlsls2_f1256(){if (rlsls2_p1256) return rlsls2_m1256; else {rlsls2_p1256=T;return rlsls2_m1256=(rlsls2_f1266()?((rlsls2_v1263=rlsls2_f1263()),(rlsls2_v1263?rlsls2_v1263:(fabs(((rlsls2_f1307()?(rlsls2_f1267()?rlsls2_f1303():rlsls2_f3078()):rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL);}}
static int rlsls2_f1405(){if (rlsls2_p1405) return rlsls2_m1405; else {rlsls2_p1405=T;return rlsls2_m1405=(fabs((rlsls2_f2058()-rlsls2_f4939()))<rlsls2_v7308);}}
static double rlsls2_f964(){if (rlsls2_p964) return rlsls2_m964; else {rlsls2_p964=T;return rlsls2_m964=(rlsls2_f1405()?(rlsls2_f2018()?(rlsls2_f2005()?((rlsls2_v1354=rlsls2_f1354()),(rlsls2_v1354?(rlsls2_f1345()?(rlsls2_f1396()?(rlsls2_f1365()?rlsls2_f1394():rlsls2_f1507()):rlsls2_f1507()):rlsls2_f970()):(rlsls2_v1354?rlsls2_f970():rlsls2_f1509()))):rlsls2_f1509()):rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f915(){if (rlsls2_p915) return rlsls2_m915; else {rlsls2_p915=T;return rlsls2_m915=(rlsls2_f1405()?(rlsls2_f2018()?(rlsls2_f2005()?(rlsls2_f1354()?(rlsls2_f1345()?NIL:(rlsls2_f1396()?(rlsls2_f1365()?NIL:T):T)):T):T):T):T);}}
static int rlsls2_f1403(){if (rlsls2_p1403) return rlsls2_m1403; else {rlsls2_p1403=T;return rlsls2_m1403=((rlsls2_v1405=rlsls2_f1405()),(rlsls2_v1405?rlsls2_f3155():(rlsls2_v1405?NIL:T)));}}
static double rlsls2_f922(){if (rlsls2_p922) return rlsls2_m922; else {rlsls2_p922=T;return rlsls2_m922=(-(rlsls2_f1408()?rlsls2_f1509():(rlsls2_f1403()?(rlsls2_f2052()?(rlsls2_f1401()?rlsls2_f964():(rlsls2_f1330()?(rlsls2_f1320()?(rlsls2_f1256()?(rlsls2_f1183()?(rlsls2_f1307()?(rlsls2_f1267()?(rlsls2_f1192()?(rlsls2_f1243()?(rlsls2_f1203()?((rlsls2_v1303=rlsls2_f1303()),(rlsls2_v1239=rlsls2_f1239()),((rlsls2_v1303>rlsls2_v1239)?rlsls2_v1303:rlsls2_v1239)):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f955()):rlsls2_f951()):(rlsls2_f1256()?rlsls2_f955():rlsls2_f1509())):(rlsls2_f1320()?rlsls2_f951():rlsls2_f1509()))):(rlsls2_f1171()?rlsls2_f964():(rlsls2_f1155()?(rlsls2_f1141()?(rlsls2_f1067()?(rlsls2_f984()?(rlsls2_f1122()?(rlsls2_f1078()?(rlsls2_f993()?(rlsls2_f1048()?(rlsls2_f1004()?((rlsls2_v1117=rlsls2_f1117()),(rlsls2_v1043=rlsls2_f1043()),((rlsls2_v1117>rlsls2_v1043)?rlsls2_v1117:rlsls2_v1043)):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f936()):rlsls2_f932()):(rlsls2_f1067()?rlsls2_f936():rlsls2_f1509())):(rlsls2_f1141()?rlsls2_f932():rlsls2_f1509())))):rlsls2_f1509())));}}
static int rlsls2_f825(){if (rlsls2_p825) return rlsls2_m825; else {rlsls2_p825=T;return rlsls2_m825=(rlsls2_f2154()<rlsls2_f922());}}
static int rlsls2_f864(){if (rlsls2_p864) return rlsls2_m864; else {rlsls2_p864=T;return rlsls2_m864=(rlsls2_f1419()<rlsls2_f922());}}
static int rlsls2_f888(){if (rlsls2_p888) return rlsls2_m888; else {rlsls2_p888=T;return rlsls2_m888=(rlsls2_f1408()?T:(rlsls2_f1403()?(rlsls2_f2052()?(rlsls2_f1401()?rlsls2_f915():(rlsls2_f1330()?(rlsls2_f1320()?(rlsls2_f1256()?(rlsls2_f1183()?NIL:rlsls2_f913()):rlsls2_f909()):(rlsls2_f1256()?rlsls2_f913():T)):(rlsls2_f1320()?rlsls2_f909():T))):(rlsls2_f1171()?rlsls2_f915():(rlsls2_f1155()?(rlsls2_f1141()?(rlsls2_f1067()?(rlsls2_f984()?NIL:rlsls2_f901()):rlsls2_f897()):(rlsls2_f1067()?rlsls2_f901():T)):(rlsls2_f1141()?rlsls2_f897():T)))):T));}}
static int rlsls2_f1340(){if (rlsls2_p1340) return rlsls2_m1340; else {rlsls2_p1340=T;return rlsls2_m1340=(rlsls2_f1405()?(rlsls2_f2018()?(rlsls2_f2005()?(rlsls2_f1354()?(rlsls2_f1345()?T:rlsls2_f1364()):NIL):NIL):NIL):NIL);}}
static int rlsls2_f974(){if (rlsls2_p974) return rlsls2_m974; else {rlsls2_p974=T;return rlsls2_m974=(rlsls2_f1408()?NIL:(rlsls2_f1403()?(rlsls2_f2052()?(rlsls2_f1401()?rlsls2_f1340():(rlsls2_f1330()?(rlsls2_f1320()?(rlsls2_f1256()?(rlsls2_f1183()?T:rlsls2_f1266()):rlsls2_f1191()):(rlsls2_f1256()?rlsls2_f1266():NIL)):(rlsls2_f1320()?rlsls2_f1191():NIL))):(rlsls2_f1171()?rlsls2_f1340():(rlsls2_f1155()?(rlsls2_f1141()?(rlsls2_f1067()?(rlsls2_f984()?T:rlsls2_f1077()):rlsls2_f992()):(rlsls2_f1067()?rlsls2_f1077():NIL)):(rlsls2_f1141()?rlsls2_f992():NIL)))):NIL));}}
static double rlsls2_f883(){if (rlsls2_p883) return rlsls2_m883; else {rlsls2_p883=T;return rlsls2_m883=(rlsls2_f974()?rlsls2_f922():(rlsls2_f888()?rlsls2_f3078():rlsls2_f1419()));}}
static double rlsls2_f886(){if (rlsls2_p886) return rlsls2_m886; else {rlsls2_p886=T;return rlsls2_m886=(rlsls2_f974()?rlsls2_f922():(rlsls2_f888()?rlsls2_f3083():rlsls2_f1419()));}}
static int rlsls2_f885(){if (rlsls2_p885) return rlsls2_m885; else {rlsls2_p885=T;return rlsls2_m885=(rlsls2_f886()>(0.0));}}
static int rlsls2_f878(){if (rlsls2_p878) return rlsls2_m878; else {rlsls2_p878=T;return rlsls2_m878=(rlsls2_f974()?((rlsls2_v885=rlsls2_f885()),(rlsls2_v885?rlsls2_v885:(fabs((rlsls2_f883()-(0.0)))<rlsls2_v7308))):NIL);}}
static int rlsls2_f877(){if (rlsls2_p877) return rlsls2_m877; else {rlsls2_p877=T;return rlsls2_m877=(rlsls2_f878()?rlsls2_f974():NIL);}}
static double rlsls2_f874(){if (rlsls2_p874) return rlsls2_m874; else {rlsls2_p874=T;return rlsls2_m874=(rlsls2_f878()?rlsls2_f883():rlsls2_f3078());}}
static double rlsls2_f876(){if (rlsls2_p876) return rlsls2_m876; else {rlsls2_p876=T;return rlsls2_m876=(rlsls2_f878()?rlsls2_f886():rlsls2_f3083());}}
static int rlsls2_f875(){if (rlsls2_p875) return rlsls2_m875; else {rlsls2_p875=T;return rlsls2_m875=(rlsls2_f876()>(0.0));}}
static int rlsls2_f869(){if (rlsls2_p869) return rlsls2_m869; else {rlsls2_p869=T;return rlsls2_m869=(rlsls2_f877()?((rlsls2_v875=rlsls2_f875()),(rlsls2_v875?rlsls2_v875:(fabs((rlsls2_f874()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f5780(){if (rlsls2_p5780) return rlsls2_m5780; else {rlsls2_p5780=T;return rlsls2_m5780=((rlsls2_v5783=rlsls2_f5783()),sqrt(((rlsls2_v5783*rlsls2_v5783)+rlsls2_f7237())));}}
static double rlsls2_f5768(){if (rlsls2_p5768) return rlsls2_m5768; else {rlsls2_p5768=T;return rlsls2_m5768=((rlsls2_v5780=rlsls2_f5780()),(rlsls2_v5780*rlsls2_v5780));}}
static double rlsls2_f1712(){if (rlsls2_p1712) return rlsls2_m1712; else {rlsls2_p1712=T;return rlsls2_m1712=(rlsls2_f1717()-((4.0)*rlsls2_f1716()*(rlsls2_f2048()-(rlsls2_f2086()*rlsls2_f5768()))));}}
static int rlsls2_f1711(){if (rlsls2_p1711) return rlsls2_m1711; else {rlsls2_p1711=T;return rlsls2_m1711=(rlsls2_f1712()<0.0);}}
static double rlsls2_f1706(){if (rlsls2_p1706) return rlsls2_m1706; else {rlsls2_p1706=T;return rlsls2_m1706=(sqrt(rlsls2_f1712())/rlsls2_f1709());}}
static double rlsls2_f1690(){if (rlsls2_p1690) return rlsls2_m1690; else {rlsls2_p1690=T;return rlsls2_m1690=((rlsls2_f1708()-rlsls2_f1706())+rlsls2_v7312);}}
static double rlsls2_f1689(){if (rlsls2_p1689) return rlsls2_m1689; else {rlsls2_p1689=T;return rlsls2_m1689=(rlsls2_f2084()*rlsls2_f1690());}}
static double rlsls2_f1687(){if (rlsls2_p1687) return rlsls2_m1687; else {rlsls2_p1687=T;return rlsls2_m1687=((rlsls2_f2076()-rlsls2_f1689())/rlsls2_f2087());}}
static int rlsls2_f1678(){if (rlsls2_p1678) return rlsls2_m1678; else {rlsls2_p1678=T;return rlsls2_m1678=((rlsls2_v1687=rlsls2_f1687()),((fabs((((rlsls2_f2087()*rlsls2_v1687)+rlsls2_f1689())-rlsls2_f2076()))<rlsls2_v7308)?(((rlsls2_f5675()<=rlsls2_v1687)&&(rlsls2_v1687<=rlsls2_f5673()))?((rlsls2_f5666()<=rlsls2_f1690())&&(rlsls2_f1690()<=rlsls2_f5664())):NIL):NIL));}}
static int rlsls2_f1597(){if (rlsls2_p1597) return rlsls2_m1597; else {rlsls2_p1597=T;return rlsls2_m1597=((fabs((rlsls2_f1687()-rlsls2_v7330))<rlsls2_v7308)?(fabs((rlsls2_f1690()-rlsls2_v7328))<rlsls2_v7308):NIL);}}
static int rlsls2_f1588(){if (rlsls2_p1588) return rlsls2_m1588; else {rlsls2_p1588=T;return rlsls2_m1588=((fabs((rlsls2_f1687()-rlsls2_v7326))<rlsls2_v7308)?(fabs((rlsls2_f1690()-rlsls2_v7324))<rlsls2_v7308):NIL);}}
static int rlsls2_f1585(){if (rlsls2_p1585) return rlsls2_m1585; else {rlsls2_p1585=T;return rlsls2_m1585=((rlsls2_v1597=rlsls2_f1597()),((rlsls2_v1597?rlsls2_f1995():(rlsls2_v1597?NIL:T))?((rlsls2_v1588=rlsls2_f1588()),(rlsls2_v1588?rlsls2_f1983():(rlsls2_v1588?NIL:T))):NIL));}}
static double rlsls2_f1582(){if (rlsls2_p1582) return rlsls2_m1582; else {rlsls2_p1582=T;return rlsls2_m1582=atan2((rlsls2_f1690()-rlsls2_v7312),(rlsls2_f1687()-rlsls2_v7314));}}
static double rlsls2_f1559(){if (rlsls2_p1559) return rlsls2_m1559; else {rlsls2_p1559=T;return rlsls2_m1559=(rlsls2_f1582()+(-1.5707963267948966));}}
static double rlsls2_f1551(){if (rlsls2_p1551) return rlsls2_m1551; else {rlsls2_p1551=T;return rlsls2_m1551=((rlsls2_v1559=rlsls2_f1559()),(((rlsls2_f2087()*(rlsls2_f1687()+cos(rlsls2_v1559)))+(rlsls2_f2084()*(rlsls2_f1690()+sin(rlsls2_v1559))))-rlsls2_f2076()));}}
static double rlsls2_f1580(){if (rlsls2_p1580) return rlsls2_m1580; else {rlsls2_p1580=T;return rlsls2_m1580=normalize_rotation((rlsls2_f1582()-rlsls2_f5522()));}}
static double rlsls2_f1579(){if (rlsls2_p1579) return rlsls2_m1579; else {rlsls2_p1579=T;return rlsls2_m1579=normalize_rotation(rlsls2_f1580());}}
static int rlsls2_f1567(){if (rlsls2_p1567) return rlsls2_m1567; else {rlsls2_p1567=T;return rlsls2_m1567=((rlsls2_v1579=rlsls2_f1579()),((fabs((rlsls2_v1579-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1579-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1579-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f1541(){if (rlsls2_p1541) return rlsls2_m1541; else {rlsls2_p1541=T;return rlsls2_m1541=((rlsls2_v1567=rlsls2_f1567()),(rlsls2_v1567?rlsls2_v1567:(((fabs((rlsls2_v7314-rlsls2_f1687()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f1690()))<rlsls2_v7308):NIL)?NIL:((rlsls2_f1944()?NIL:((rlsls2_v1551=rlsls2_f1551()),((fabs((rlsls2_v1551-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v1551>(0.0))?rlsls2_f1929():rlsls2_f1928()))))?NIL:T))));}}
static int rlsls2_f1540(){if (rlsls2_p1540) return rlsls2_m1540; else {rlsls2_p1540=T;return rlsls2_m1540=(rlsls2_f1585()?rlsls2_f1541():NIL);}}
static double rlsls2_f1535(){if (rlsls2_p1535) return rlsls2_m1535; else {rlsls2_p1535=T;return rlsls2_m1535=(rlsls2_f1585()?(rlsls2_f1541()?rlsls2_f1580():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f1538(){if (rlsls2_p1538) return rlsls2_m1538; else {rlsls2_p1538=T;return rlsls2_m1538=(rlsls2_f1585()?(rlsls2_f1541()?rlsls2_f1580():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f1537(){if (rlsls2_p1537) return rlsls2_m1537; else {rlsls2_p1537=T;return rlsls2_m1537=(rlsls2_f1538()<(0.0));}}
static int rlsls2_f1530(){if (rlsls2_p1530) return rlsls2_m1530; else {rlsls2_p1530=T;return rlsls2_m1530=(rlsls2_f1540()?((rlsls2_v1537=rlsls2_f1537()),(rlsls2_v1537?rlsls2_v1537:(fabs((rlsls2_f1535()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f1465(){if (rlsls2_p1465) return rlsls2_m1465; else {rlsls2_p1465=T;return rlsls2_m1465=(rlsls2_f1530()?(rlsls2_f1585()?(rlsls2_f1541()?rlsls2_f1580():rlsls2_f1509()):rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f1430(){if (rlsls2_p1430) return rlsls2_m1430; else {rlsls2_p1430=T;return rlsls2_m1430=(rlsls2_f1530()?(rlsls2_f1585()?(rlsls2_f1541()?NIL:T):T):T);}}
static int rlsls2_f1527(){if (rlsls2_p1527) return rlsls2_m1527; else {rlsls2_p1527=T;return rlsls2_m1527=((rlsls2_f1530()?rlsls2_f1538():rlsls2_f3083())<(0.0));}}
static int rlsls2_f1529(){if (rlsls2_p1529) return rlsls2_m1529; else {rlsls2_p1529=T;return rlsls2_m1529=(rlsls2_f1530()?rlsls2_f1540():NIL);}}
static int rlsls2_f1521(){if (rlsls2_p1521) return rlsls2_m1521; else {rlsls2_p1521=T;return rlsls2_m1521=(rlsls2_f1529()?((rlsls2_v1527=rlsls2_f1527()),(rlsls2_v1527?rlsls2_v1527:(fabs(((rlsls2_f1530()?rlsls2_f1535():rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f1704(){if (rlsls2_p1704) return rlsls2_m1704; else {rlsls2_p1704=T;return rlsls2_m1704=((rlsls2_f1708()+rlsls2_f1706())+rlsls2_v7312);}}
static double rlsls2_f1703(){if (rlsls2_p1703) return rlsls2_m1703; else {rlsls2_p1703=T;return rlsls2_m1703=(rlsls2_f2084()*rlsls2_f1704());}}
static double rlsls2_f1701(){if (rlsls2_p1701) return rlsls2_m1701; else {rlsls2_p1701=T;return rlsls2_m1701=((rlsls2_f2076()-rlsls2_f1703())/rlsls2_f2087());}}
static int rlsls2_f1692(){if (rlsls2_p1692) return rlsls2_m1692; else {rlsls2_p1692=T;return rlsls2_m1692=((rlsls2_v1701=rlsls2_f1701()),((fabs((((rlsls2_f2087()*rlsls2_v1701)+rlsls2_f1703())-rlsls2_f2076()))<rlsls2_v7308)?(((rlsls2_f5675()<=rlsls2_v1701)&&(rlsls2_v1701<=rlsls2_f5673()))?((rlsls2_f5666()<=rlsls2_f1704())&&(rlsls2_f1704()<=rlsls2_f5664())):NIL):NIL));}}
static int rlsls2_f1671(){if (rlsls2_p1671) return rlsls2_m1671; else {rlsls2_p1671=T;return rlsls2_m1671=((fabs((rlsls2_f1701()-rlsls2_v7330))<rlsls2_v7308)?(fabs((rlsls2_f1704()-rlsls2_v7328))<rlsls2_v7308):NIL);}}
static int rlsls2_f1662(){if (rlsls2_p1662) return rlsls2_m1662; else {rlsls2_p1662=T;return rlsls2_m1662=((fabs((rlsls2_f1701()-rlsls2_v7326))<rlsls2_v7308)?(fabs((rlsls2_f1704()-rlsls2_v7324))<rlsls2_v7308):NIL);}}
static int rlsls2_f1659(){if (rlsls2_p1659) return rlsls2_m1659; else {rlsls2_p1659=T;return rlsls2_m1659=((rlsls2_v1671=rlsls2_f1671()),((rlsls2_v1671?rlsls2_f1995():(rlsls2_v1671?NIL:T))?((rlsls2_v1662=rlsls2_f1662()),(rlsls2_v1662?rlsls2_f1983():(rlsls2_v1662?NIL:T))):NIL));}}
static double rlsls2_f1656(){if (rlsls2_p1656) return rlsls2_m1656; else {rlsls2_p1656=T;return rlsls2_m1656=atan2((rlsls2_f1704()-rlsls2_v7312),(rlsls2_f1701()-rlsls2_v7314));}}
static double rlsls2_f1633(){if (rlsls2_p1633) return rlsls2_m1633; else {rlsls2_p1633=T;return rlsls2_m1633=(rlsls2_f1656()+(-1.5707963267948966));}}
static double rlsls2_f1625(){if (rlsls2_p1625) return rlsls2_m1625; else {rlsls2_p1625=T;return rlsls2_m1625=((rlsls2_v1633=rlsls2_f1633()),(((rlsls2_f2087()*(rlsls2_f1701()+cos(rlsls2_v1633)))+(rlsls2_f2084()*(rlsls2_f1704()+sin(rlsls2_v1633))))-rlsls2_f2076()));}}
static double rlsls2_f1654(){if (rlsls2_p1654) return rlsls2_m1654; else {rlsls2_p1654=T;return rlsls2_m1654=normalize_rotation((rlsls2_f1656()-rlsls2_f5522()));}}
static double rlsls2_f1653(){if (rlsls2_p1653) return rlsls2_m1653; else {rlsls2_p1653=T;return rlsls2_m1653=normalize_rotation(rlsls2_f1654());}}
static int rlsls2_f1641(){if (rlsls2_p1641) return rlsls2_m1641; else {rlsls2_p1641=T;return rlsls2_m1641=((rlsls2_v1653=rlsls2_f1653()),((fabs((rlsls2_v1653-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1653-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1653-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f1615(){if (rlsls2_p1615) return rlsls2_m1615; else {rlsls2_p1615=T;return rlsls2_m1615=((rlsls2_v1641=rlsls2_f1641()),(rlsls2_v1641?rlsls2_v1641:(((fabs((rlsls2_v7314-rlsls2_f1701()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f1704()))<rlsls2_v7308):NIL)?NIL:((rlsls2_f1944()?NIL:((rlsls2_v1625=rlsls2_f1625()),((fabs((rlsls2_v1625-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v1625>(0.0))?rlsls2_f1929():rlsls2_f1928()))))?NIL:T))));}}
static double rlsls2_f1469(){if (rlsls2_p1469) return rlsls2_m1469; else {rlsls2_p1469=T;return rlsls2_m1469=(rlsls2_f1659()?(rlsls2_f1615()?rlsls2_f1654():rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f1434(){if (rlsls2_p1434) return rlsls2_m1434; else {rlsls2_p1434=T;return rlsls2_m1434=(rlsls2_f1659()?(rlsls2_f1615()?NIL:T):T);}}
static int rlsls2_f1614(){if (rlsls2_p1614) return rlsls2_m1614; else {rlsls2_p1614=T;return rlsls2_m1614=(rlsls2_f1659()?rlsls2_f1615():NIL);}}
static int rlsls2_f1611(){if (rlsls2_p1611) return rlsls2_m1611; else {rlsls2_p1611=T;return rlsls2_m1611=((rlsls2_f1659()?(rlsls2_f1615()?rlsls2_f1654():rlsls2_f3083()):rlsls2_f3083())<(0.0));}}
static int rlsls2_f1604(){if (rlsls2_p1604) return rlsls2_m1604; else {rlsls2_p1604=T;return rlsls2_m1604=(rlsls2_f1614()?((rlsls2_v1611=rlsls2_f1611()),(rlsls2_v1611?rlsls2_v1611:(fabs(((rlsls2_f1659()?(rlsls2_f1615()?rlsls2_f1654():rlsls2_f3078()):rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f2045(){if (rlsls2_p2045) return rlsls2_m2045; else {rlsls2_p2045=T;return rlsls2_m2045=(rlsls2_f5768()-rlsls2_f2046());}}
static int rlsls2_f2044(){if (rlsls2_p2044) return rlsls2_m2044; else {rlsls2_p2044=T;return rlsls2_m2044=(rlsls2_f2045()<0.0);}}
static double rlsls2_f1895(){if (rlsls2_p1895) return rlsls2_m1895; else {rlsls2_p1895=T;return rlsls2_m1895=sqrt(rlsls2_f2045());}}
static double rlsls2_f1881(){if (rlsls2_p1881) return rlsls2_m1881; else {rlsls2_p1881=T;return rlsls2_m1881=((-rlsls2_f1895())+rlsls2_v7314);}}
static int rlsls2_f1873(){if (rlsls2_p1873) return rlsls2_m1873; else {rlsls2_p1873=T;return rlsls2_m1873=((rlsls2_v1881=rlsls2_f1881()),((fabs((((rlsls2_f2087()*rlsls2_v1881)+rlsls2_f1891())-rlsls2_f2076()))<rlsls2_v7308)?(((rlsls2_f5675()<=rlsls2_v1881)&&(rlsls2_v1881<=rlsls2_f5673()))?rlsls2_f1885():NIL):NIL));}}
static int rlsls2_f1795(){if (rlsls2_p1795) return rlsls2_m1795; else {rlsls2_p1795=T;return rlsls2_m1795=((fabs((rlsls2_f1881()-rlsls2_v7330))<rlsls2_v7308)?rlsls2_f1867():NIL);}}
static int rlsls2_f1789(){if (rlsls2_p1789) return rlsls2_m1789; else {rlsls2_p1789=T;return rlsls2_m1789=((fabs((rlsls2_f1881()-rlsls2_v7326))<rlsls2_v7308)?rlsls2_f1858():NIL);}}
static int rlsls2_f1786(){if (rlsls2_p1786) return rlsls2_m1786; else {rlsls2_p1786=T;return rlsls2_m1786=((rlsls2_v1795=rlsls2_f1795()),((rlsls2_v1795?rlsls2_f1995():(rlsls2_v1795?NIL:T))?((rlsls2_v1789=rlsls2_f1789()),(rlsls2_v1789?rlsls2_f1983():(rlsls2_v1789?NIL:T))):NIL));}}
static double rlsls2_f1784(){if (rlsls2_p1784) return rlsls2_m1784; else {rlsls2_p1784=T;return rlsls2_m1784=atan2(rlsls2_f1853(),(rlsls2_f1881()-rlsls2_v7314));}}
static double rlsls2_f1764(){if (rlsls2_p1764) return rlsls2_m1764; else {rlsls2_p1764=T;return rlsls2_m1764=(rlsls2_f1784()+(-1.5707963267948966));}}
static double rlsls2_f1756(){if (rlsls2_p1756) return rlsls2_m1756; else {rlsls2_p1756=T;return rlsls2_m1756=((rlsls2_v1764=rlsls2_f1764()),(((rlsls2_f2087()*(rlsls2_f1881()+cos(rlsls2_v1764)))+(rlsls2_f2084()*(rlsls2_f1892()+sin(rlsls2_v1764))))-rlsls2_f2076()));}}
static double rlsls2_f1782(){if (rlsls2_p1782) return rlsls2_m1782; else {rlsls2_p1782=T;return rlsls2_m1782=normalize_rotation((rlsls2_f1784()-rlsls2_f5522()));}}
static double rlsls2_f1781(){if (rlsls2_p1781) return rlsls2_m1781; else {rlsls2_p1781=T;return rlsls2_m1781=normalize_rotation(rlsls2_f1782());}}
static int rlsls2_f1769(){if (rlsls2_p1769) return rlsls2_m1769; else {rlsls2_p1769=T;return rlsls2_m1769=((rlsls2_v1781=rlsls2_f1781()),((fabs((rlsls2_v1781-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1781-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1781-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f1746(){if (rlsls2_p1746) return rlsls2_m1746; else {rlsls2_p1746=T;return rlsls2_m1746=((rlsls2_v1769=rlsls2_f1769()),(rlsls2_v1769?rlsls2_v1769:(((fabs((rlsls2_v7314-rlsls2_f1881()))<rlsls2_v7308)?rlsls2_f1830():NIL)?NIL:((rlsls2_f1944()?NIL:((rlsls2_v1756=rlsls2_f1756()),((fabs((rlsls2_v1756-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v1756>(0.0))?rlsls2_f1929():rlsls2_f1928()))))?NIL:T))));}}
static int rlsls2_f1745(){if (rlsls2_p1745) return rlsls2_m1745; else {rlsls2_p1745=T;return rlsls2_m1745=(rlsls2_f1786()?rlsls2_f1746():NIL);}}
static double rlsls2_f1740(){if (rlsls2_p1740) return rlsls2_m1740; else {rlsls2_p1740=T;return rlsls2_m1740=(rlsls2_f1786()?(rlsls2_f1746()?rlsls2_f1782():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f1743(){if (rlsls2_p1743) return rlsls2_m1743; else {rlsls2_p1743=T;return rlsls2_m1743=(rlsls2_f1786()?(rlsls2_f1746()?rlsls2_f1782():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f1742(){if (rlsls2_p1742) return rlsls2_m1742; else {rlsls2_p1742=T;return rlsls2_m1742=(rlsls2_f1743()<(0.0));}}
static int rlsls2_f1735(){if (rlsls2_p1735) return rlsls2_m1735; else {rlsls2_p1735=T;return rlsls2_m1735=(rlsls2_f1745()?((rlsls2_v1742=rlsls2_f1742()),(rlsls2_v1742?rlsls2_v1742:(fabs((rlsls2_f1740()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f1484(){if (rlsls2_p1484) return rlsls2_m1484; else {rlsls2_p1484=T;return rlsls2_m1484=(rlsls2_f1735()?(rlsls2_f1786()?(rlsls2_f1746()?rlsls2_f1782():rlsls2_f1509()):rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f1442(){if (rlsls2_p1442) return rlsls2_m1442; else {rlsls2_p1442=T;return rlsls2_m1442=(rlsls2_f1735()?(rlsls2_f1786()?(rlsls2_f1746()?NIL:T):T):T);}}
static int rlsls2_f1732(){if (rlsls2_p1732) return rlsls2_m1732; else {rlsls2_p1732=T;return rlsls2_m1732=((rlsls2_f1735()?rlsls2_f1743():rlsls2_f3083())<(0.0));}}
static int rlsls2_f1734(){if (rlsls2_p1734) return rlsls2_m1734; else {rlsls2_p1734=T;return rlsls2_m1734=(rlsls2_f1735()?rlsls2_f1745():NIL);}}
static int rlsls2_f1726(){if (rlsls2_p1726) return rlsls2_m1726; else {rlsls2_p1726=T;return rlsls2_m1726=(rlsls2_f1734()?((rlsls2_v1732=rlsls2_f1732()),(rlsls2_v1732?rlsls2_v1732:(fabs(((rlsls2_f1735()?rlsls2_f1740():rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f1894(){if (rlsls2_p1894) return rlsls2_m1894; else {rlsls2_p1894=T;return rlsls2_m1894=(rlsls2_f1895()+rlsls2_v7314);}}
static int rlsls2_f1883(){if (rlsls2_p1883) return rlsls2_m1883; else {rlsls2_p1883=T;return rlsls2_m1883=((rlsls2_v1894=rlsls2_f1894()),((fabs((((rlsls2_f2087()*rlsls2_v1894)+rlsls2_f1891())-rlsls2_f2076()))<rlsls2_v7308)?(((rlsls2_f5675()<=rlsls2_v1894)&&(rlsls2_v1894<=rlsls2_f5673()))?rlsls2_f1885():NIL):NIL));}}
static int rlsls2_f1866(){if (rlsls2_p1866) return rlsls2_m1866; else {rlsls2_p1866=T;return rlsls2_m1866=((fabs((rlsls2_f1894()-rlsls2_v7330))<rlsls2_v7308)?rlsls2_f1867():NIL);}}
static int rlsls2_f1857(){if (rlsls2_p1857) return rlsls2_m1857; else {rlsls2_p1857=T;return rlsls2_m1857=((fabs((rlsls2_f1894()-rlsls2_v7326))<rlsls2_v7308)?rlsls2_f1858():NIL);}}
static int rlsls2_f1854(){if (rlsls2_p1854) return rlsls2_m1854; else {rlsls2_p1854=T;return rlsls2_m1854=((rlsls2_v1866=rlsls2_f1866()),((rlsls2_v1866?rlsls2_f1995():(rlsls2_v1866?NIL:T))?((rlsls2_v1857=rlsls2_f1857()),(rlsls2_v1857?rlsls2_f1983():(rlsls2_v1857?NIL:T))):NIL));}}
static double rlsls2_f1851(){if (rlsls2_p1851) return rlsls2_m1851; else {rlsls2_p1851=T;return rlsls2_m1851=atan2(rlsls2_f1853(),(rlsls2_f1894()-rlsls2_v7314));}}
static double rlsls2_f1828(){if (rlsls2_p1828) return rlsls2_m1828; else {rlsls2_p1828=T;return rlsls2_m1828=(rlsls2_f1851()+(-1.5707963267948966));}}
static double rlsls2_f1820(){if (rlsls2_p1820) return rlsls2_m1820; else {rlsls2_p1820=T;return rlsls2_m1820=((rlsls2_v1828=rlsls2_f1828()),(((rlsls2_f2087()*(rlsls2_f1894()+cos(rlsls2_v1828)))+(rlsls2_f2084()*(rlsls2_f1892()+sin(rlsls2_v1828))))-rlsls2_f2076()));}}
static double rlsls2_f1849(){if (rlsls2_p1849) return rlsls2_m1849; else {rlsls2_p1849=T;return rlsls2_m1849=normalize_rotation((rlsls2_f1851()-rlsls2_f5522()));}}
static double rlsls2_f1848(){if (rlsls2_p1848) return rlsls2_m1848; else {rlsls2_p1848=T;return rlsls2_m1848=normalize_rotation(rlsls2_f1849());}}
static int rlsls2_f1836(){if (rlsls2_p1836) return rlsls2_m1836; else {rlsls2_p1836=T;return rlsls2_m1836=((rlsls2_v1848=rlsls2_f1848()),((fabs((rlsls2_v1848-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1848-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v1848-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f1810(){if (rlsls2_p1810) return rlsls2_m1810; else {rlsls2_p1810=T;return rlsls2_m1810=((rlsls2_v1836=rlsls2_f1836()),(rlsls2_v1836?rlsls2_v1836:(((fabs((rlsls2_v7314-rlsls2_f1894()))<rlsls2_v7308)?rlsls2_f1830():NIL)?NIL:((rlsls2_f1944()?NIL:((rlsls2_v1820=rlsls2_f1820()),((fabs((rlsls2_v1820-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v1820>(0.0))?rlsls2_f1929():rlsls2_f1928()))))?NIL:T))));}}
static double rlsls2_f1488(){if (rlsls2_p1488) return rlsls2_m1488; else {rlsls2_p1488=T;return rlsls2_m1488=(rlsls2_f1854()?(rlsls2_f1810()?rlsls2_f1849():rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f1446(){if (rlsls2_p1446) return rlsls2_m1446; else {rlsls2_p1446=T;return rlsls2_m1446=(rlsls2_f1854()?(rlsls2_f1810()?NIL:T):T);}}
static int rlsls2_f1809(){if (rlsls2_p1809) return rlsls2_m1809; else {rlsls2_p1809=T;return rlsls2_m1809=(rlsls2_f1854()?rlsls2_f1810():NIL);}}
static int rlsls2_f1806(){if (rlsls2_p1806) return rlsls2_m1806; else {rlsls2_p1806=T;return rlsls2_m1806=((rlsls2_f1854()?(rlsls2_f1810()?rlsls2_f1849():rlsls2_f3083()):rlsls2_f3083())<(0.0));}}
static int rlsls2_f1799(){if (rlsls2_p1799) return rlsls2_m1799; else {rlsls2_p1799=T;return rlsls2_m1799=(rlsls2_f1809()?((rlsls2_v1806=rlsls2_f1806()),(rlsls2_v1806?rlsls2_v1806:(fabs(((rlsls2_f1854()?(rlsls2_f1810()?rlsls2_f1849():rlsls2_f3078()):rlsls2_f3078())-(0.0)))<rlsls2_v7308))):NIL);}}
static int rlsls2_f2055(){if (rlsls2_p2055) return rlsls2_m2055; else {rlsls2_p2055=T;return rlsls2_m2055=(fabs((rlsls2_f2058()-rlsls2_f5780()))<rlsls2_v7308);}}
static double rlsls2_f1497(){if (rlsls2_p1497) return rlsls2_m1497; else {rlsls2_p1497=T;return rlsls2_m1497=(rlsls2_f2055()?(rlsls2_f2018()?(rlsls2_f2005()?((rlsls2_v1910=rlsls2_f1910()),(rlsls2_v1910?(rlsls2_f1901()?(rlsls2_f1980()?(rlsls2_f1921()?rlsls2_f1973():rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1503()):(rlsls2_v1910?rlsls2_f1503():rlsls2_f1509()))):rlsls2_f1509()):rlsls2_f1509()):rlsls2_f1509());}}
static int rlsls2_f1448(){if (rlsls2_p1448) return rlsls2_m1448; else {rlsls2_p1448=T;return rlsls2_m1448=(rlsls2_f2055()?(rlsls2_f2018()?(rlsls2_f2005()?(rlsls2_f1910()?(rlsls2_f1901()?NIL:(rlsls2_f1980()?(rlsls2_f1921()?NIL:T):T)):T):T):T):T);}}
static int rlsls2_f2053(){if (rlsls2_p2053) return rlsls2_m2053; else {rlsls2_p2053=T;return rlsls2_m2053=((rlsls2_v2055=rlsls2_f2055()),(rlsls2_v2055?rlsls2_f3172():(rlsls2_v2055?NIL:T)));}}
static double rlsls2_f1455(){if (rlsls2_p1455) return rlsls2_m1455; else {rlsls2_p1455=T;return rlsls2_m1455=(-(rlsls2_f2089()?rlsls2_f1509():(rlsls2_f2053()?(rlsls2_f2052()?(rlsls2_f2044()?rlsls2_f1497():(rlsls2_f1883()?(rlsls2_f1873()?(rlsls2_f1799()?(rlsls2_f1726()?(rlsls2_f1854()?(rlsls2_f1810()?(rlsls2_f1735()?(rlsls2_f1786()?(rlsls2_f1746()?((rlsls2_v1849=rlsls2_f1849()),(rlsls2_v1782=rlsls2_f1782()),((rlsls2_v1849>rlsls2_v1782)?rlsls2_v1849:rlsls2_v1782)):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1488()):rlsls2_f1484()):(rlsls2_f1799()?rlsls2_f1488():rlsls2_f1509())):(rlsls2_f1873()?rlsls2_f1484():rlsls2_f1509()))):(rlsls2_f1711()?rlsls2_f1497():(rlsls2_f1692()?(rlsls2_f1678()?(rlsls2_f1604()?(rlsls2_f1521()?(rlsls2_f1659()?(rlsls2_f1615()?(rlsls2_f1530()?(rlsls2_f1585()?(rlsls2_f1541()?((rlsls2_v1654=rlsls2_f1654()),(rlsls2_v1580=rlsls2_f1580()),((rlsls2_v1654>rlsls2_v1580)?rlsls2_v1654:rlsls2_v1580)):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1507()):rlsls2_f1469()):rlsls2_f1465()):(rlsls2_f1604()?rlsls2_f1469():rlsls2_f1509())):(rlsls2_f1678()?rlsls2_f1465():rlsls2_f1509())))):rlsls2_f1509())));}}
static int rlsls2_f832(){if (rlsls2_p832) return rlsls2_m832; else {rlsls2_p832=T;return rlsls2_m832=(rlsls2_f2154()<rlsls2_f1455());}}
static int rlsls2_f868(){if (rlsls2_p868) return rlsls2_m868; else {rlsls2_p868=T;return rlsls2_m868=(rlsls2_f1455()<rlsls2_f1419());}}
static int rlsls2_f1421(){if (rlsls2_p1421) return rlsls2_m1421; else {rlsls2_p1421=T;return rlsls2_m1421=(rlsls2_f2089()?T:(rlsls2_f2053()?(rlsls2_f2052()?(rlsls2_f2044()?rlsls2_f1448():(rlsls2_f1883()?(rlsls2_f1873()?(rlsls2_f1799()?(rlsls2_f1726()?NIL:rlsls2_f1446()):rlsls2_f1442()):(rlsls2_f1799()?rlsls2_f1446():T)):(rlsls2_f1873()?rlsls2_f1442():T))):(rlsls2_f1711()?rlsls2_f1448():(rlsls2_f1692()?(rlsls2_f1678()?(rlsls2_f1604()?(rlsls2_f1521()?NIL:rlsls2_f1434()):rlsls2_f1430()):(rlsls2_f1604()?rlsls2_f1434():T)):(rlsls2_f1678()?rlsls2_f1430():T)))):T));}}
static int rlsls2_f1896(){if (rlsls2_p1896) return rlsls2_m1896; else {rlsls2_p1896=T;return rlsls2_m1896=(rlsls2_f2055()?(rlsls2_f2018()?(rlsls2_f2005()?(rlsls2_f1910()?(rlsls2_f1901()?T:rlsls2_f1920()):NIL):NIL):NIL):NIL);}}
static int rlsls2_f1511(){if (rlsls2_p1511) return rlsls2_m1511; else {rlsls2_p1511=T;return rlsls2_m1511=(rlsls2_f2089()?NIL:(rlsls2_f2053()?(rlsls2_f2052()?(rlsls2_f2044()?rlsls2_f1896():(rlsls2_f1883()?(rlsls2_f1873()?(rlsls2_f1799()?(rlsls2_f1726()?T:rlsls2_f1809()):rlsls2_f1734()):(rlsls2_f1799()?rlsls2_f1809():NIL)):(rlsls2_f1873()?rlsls2_f1734():NIL))):(rlsls2_f1711()?rlsls2_f1896():(rlsls2_f1692()?(rlsls2_f1678()?(rlsls2_f1604()?(rlsls2_f1521()?T:rlsls2_f1614()):rlsls2_f1529()):(rlsls2_f1604()?rlsls2_f1614():NIL)):(rlsls2_f1678()?rlsls2_f1529():NIL)))):NIL));}}
static int rlsls2_f859(){if (rlsls2_p859) return rlsls2_m859; else {rlsls2_p859=T;return rlsls2_m859=(rlsls2_f1511()?(rlsls2_f878()?(rlsls2_f974()?T:(rlsls2_f888()?NIL:rlsls2_f868())):NIL):(rlsls2_f1421()?NIL:(rlsls2_f878()?(rlsls2_f974()?(rlsls2_f864()?NIL:T):NIL):NIL)));}}
static double rlsls2_f845(){if (rlsls2_p845) return rlsls2_m845; else {rlsls2_p845=T;return rlsls2_m845=(rlsls2_f1511()?(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v1455=rlsls2_f1455()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v1455<rlsls2_v922)?rlsls2_v1455:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():(rlsls2_f868()?rlsls2_f1455():rlsls2_f1419()))):rlsls2_f2665()):(rlsls2_f1421()?rlsls2_f2665():(rlsls2_f878()?(rlsls2_f974()?(rlsls2_f864()?rlsls2_f1419():rlsls2_f922()):(rlsls2_f888()?rlsls2_f2665():rlsls2_f1419())):rlsls2_f2665())));}}
static int rlsls2_f834(){if (rlsls2_p834) return rlsls2_m834; else {rlsls2_p834=T;return rlsls2_m834=(rlsls2_f2154()<rlsls2_f845());}}
static int rlsls2_f819(){if (rlsls2_p819) return rlsls2_m819; else {rlsls2_p819=T;return rlsls2_m819=(rlsls2_f2579()<rlsls2_f845());}}
static double rlsls2_f1414(){if (rlsls2_p1414) return rlsls2_m1414; else {rlsls2_p1414=T;return rlsls2_m1414=(rlsls2_f1511()?rlsls2_f1455():(rlsls2_f1421()?rlsls2_f3078():rlsls2_f1419()));}}
static double rlsls2_f1417(){if (rlsls2_p1417) return rlsls2_m1417; else {rlsls2_p1417=T;return rlsls2_m1417=(rlsls2_f1511()?rlsls2_f1455():(rlsls2_f1421()?rlsls2_f3083():rlsls2_f1419()));}}
static int rlsls2_f1416(){if (rlsls2_p1416) return rlsls2_m1416; else {rlsls2_p1416=T;return rlsls2_m1416=(rlsls2_f1417()>(0.0));}}
static int rlsls2_f1409(){if (rlsls2_p1409) return rlsls2_m1409; else {rlsls2_p1409=T;return rlsls2_m1409=(rlsls2_f1511()?((rlsls2_v1416=rlsls2_f1416()),(rlsls2_v1416?rlsls2_v1416:(fabs((rlsls2_f1414()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f515(){if (rlsls2_p515) return rlsls2_m515; else {rlsls2_p515=T;return rlsls2_m515=(rlsls2_f1409()?(rlsls2_f869()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v845=rlsls2_f845()),((rlsls2_v2663<rlsls2_v845)?rlsls2_v2663:rlsls2_v845)):(rlsls2_f1511()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2663<rlsls2_v1455)?rlsls2_v2663:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f524()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2663<rlsls2_v922)?rlsls2_v2663:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f524())):rlsls2_f2665()));}}
static double rlsls2_f467(){if (rlsls2_p467) return rlsls2_m467; else {rlsls2_p467=T;return rlsls2_m467=(rlsls2_f1409()?(rlsls2_f869()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v845=rlsls2_f845()),((rlsls2_v3139<rlsls2_v845)?rlsls2_v3139:rlsls2_v845)):(rlsls2_f1511()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v3139<rlsls2_v1455)?rlsls2_v3139:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f476()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v3139<rlsls2_v922)?rlsls2_v3139:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f476())):rlsls2_f2665()));}}
static int rlsls2_f857(){if (rlsls2_p857) return rlsls2_m857; else {rlsls2_p857=T;return rlsls2_m857=(rlsls2_f1409()?(rlsls2_f869()?rlsls2_f859():rlsls2_f1511()):rlsls2_f877());}}
static double rlsls2_f840(){if (rlsls2_p840) return rlsls2_m840; else {rlsls2_p840=T;return rlsls2_m840=(rlsls2_f1409()?(rlsls2_f869()?rlsls2_f845():rlsls2_f1414()):rlsls2_f874());}}
static double rlsls2_f843(){if (rlsls2_p843) return rlsls2_m843; else {rlsls2_p843=T;return rlsls2_m843=(rlsls2_f1409()?(rlsls2_f869()?rlsls2_f845():rlsls2_f1417()):rlsls2_f876());}}
static int rlsls2_f842(){if (rlsls2_p842) return rlsls2_m842; else {rlsls2_p842=T;return rlsls2_m842=(rlsls2_f843()>(0.0));}}
static int rlsls2_f835(){if (rlsls2_p835) return rlsls2_m835; else {rlsls2_p835=T;return rlsls2_m835=(rlsls2_f857()?((rlsls2_v842=rlsls2_f842()),(rlsls2_v842?rlsls2_v842:(fabs((rlsls2_f840()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f6443(){if (rlsls2_p6443) return rlsls2_m6443; else {rlsls2_p6443=T;return rlsls2_m6443=((rlsls2_v6446=rlsls2_f6446()),sqrt(((rlsls2_v6446*rlsls2_v6446)+rlsls2_f7237())));}}
static double rlsls2_f6423(){if (rlsls2_p6423) return rlsls2_m6423; else {rlsls2_p6423=T;return rlsls2_m6423=((rlsls2_v6443=rlsls2_f6443()),(rlsls2_v6443*rlsls2_v6443));}}
static double rlsls2_f2364(){if (rlsls2_p2364) return rlsls2_m2364; else {rlsls2_p2364=T;return rlsls2_m2364=(rlsls2_f2884()-((4.0)*rlsls2_f2882()*(rlsls2_f3228()-(rlsls2_f3275()*rlsls2_f6423()))));}}
static int rlsls2_f2363(){if (rlsls2_p2363) return rlsls2_m2363; else {rlsls2_p2363=T;return rlsls2_m2363=(rlsls2_f2364()<0.0);}}
static double rlsls2_f2361(){if (rlsls2_p2361) return rlsls2_m2361; else {rlsls2_p2361=T;return rlsls2_m2361=(sqrt(rlsls2_f2364())/rlsls2_f2875());}}
static double rlsls2_f2345(){if (rlsls2_p2345) return rlsls2_m2345; else {rlsls2_p2345=T;return rlsls2_m2345=((rlsls2_f2874()-rlsls2_f2361())+rlsls2_v7312);}}
static double rlsls2_f2344(){if (rlsls2_p2344) return rlsls2_m2344; else {rlsls2_p2344=T;return rlsls2_m2344=(rlsls2_f3273()*rlsls2_f2345());}}
static double rlsls2_f2342(){if (rlsls2_p2342) return rlsls2_m2342; else {rlsls2_p2342=T;return rlsls2_m2342=((rlsls2_f3263()-rlsls2_f2344())/rlsls2_f3276());}}
static int rlsls2_f2333(){if (rlsls2_p2333) return rlsls2_m2333; else {rlsls2_p2333=T;return rlsls2_m2333=((rlsls2_v2342=rlsls2_f2342()),((fabs((((rlsls2_f3276()*rlsls2_v2342)+rlsls2_f2344())-rlsls2_f3263()))<rlsls2_v7308)?(((rlsls2_f7117()<=rlsls2_v2342)&&(rlsls2_v2342<=rlsls2_f7115()))?((rlsls2_f7108()<=rlsls2_f2345())&&(rlsls2_f2345()<=rlsls2_f7106())):NIL):NIL));}}
static int rlsls2_f2252(){if (rlsls2_p2252) return rlsls2_m2252; else {rlsls2_p2252=T;return rlsls2_m2252=((fabs((rlsls2_f2342()-rlsls2_v7322))<rlsls2_v7308)?(fabs((rlsls2_f2345()-rlsls2_v7320))<rlsls2_v7308):NIL);}}
static int rlsls2_f2243(){if (rlsls2_p2243) return rlsls2_m2243; else {rlsls2_p2243=T;return rlsls2_m2243=((fabs((rlsls2_f2342()-rlsls2_v7318))<rlsls2_v7308)?(fabs((rlsls2_f2345()-rlsls2_v7316))<rlsls2_v7308):NIL);}}
static int rlsls2_f2240(){if (rlsls2_p2240) return rlsls2_m2240; else {rlsls2_p2240=T;return rlsls2_m2240=((rlsls2_v2252=rlsls2_f2252()),((rlsls2_v2252?rlsls2_f2585():(rlsls2_v2252?NIL:T))?((rlsls2_v2243=rlsls2_f2243()),(rlsls2_v2243?rlsls2_f2583():(rlsls2_v2243?NIL:T))):NIL));}}
static double rlsls2_f2237(){if (rlsls2_p2237) return rlsls2_m2237; else {rlsls2_p2237=T;return rlsls2_m2237=atan2((rlsls2_f2345()-rlsls2_v7312),(rlsls2_f2342()-rlsls2_v7314));}}
static double rlsls2_f2214(){if (rlsls2_p2214) return rlsls2_m2214; else {rlsls2_p2214=T;return rlsls2_m2214=(rlsls2_f2237()+(1.5707963267948966));}}
static double rlsls2_f2206(){if (rlsls2_p2206) return rlsls2_m2206; else {rlsls2_p2206=T;return rlsls2_m2206=((rlsls2_v2214=rlsls2_f2214()),(((rlsls2_f3276()*(rlsls2_f2342()+cos(rlsls2_v2214)))+(rlsls2_f3273()*(rlsls2_f2345()+sin(rlsls2_v2214))))-rlsls2_f3263()));}}
static double rlsls2_f2235(){if (rlsls2_p2235) return rlsls2_m2235; else {rlsls2_p2235=T;return rlsls2_m2235=normalize_rotation((rlsls2_f2237()-rlsls2_f6280()));}}
static int rlsls2_f727(){if (rlsls2_p727) return rlsls2_m727; else {rlsls2_p727=T;return rlsls2_m727=(rlsls2_f2235()<rlsls2_f845());}}
static int rlsls2_f725(){if (rlsls2_p725) return rlsls2_m725; else {rlsls2_p725=T;return rlsls2_m725=(rlsls2_f2235()<rlsls2_f1419());}}
static double rlsls2_f593(){if (rlsls2_p593) return rlsls2_m593; else {rlsls2_p593=T;return rlsls2_m593=(rlsls2_f725()?rlsls2_f2235():rlsls2_f1419());}}
static double rlsls2_f2234(){if (rlsls2_p2234) return rlsls2_m2234; else {rlsls2_p2234=T;return rlsls2_m2234=normalize_rotation(rlsls2_f2235());}}
static int rlsls2_f2222(){if (rlsls2_p2222) return rlsls2_m2222; else {rlsls2_p2222=T;return rlsls2_m2222=((rlsls2_v2234=rlsls2_f2234()),((fabs((rlsls2_v2234-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2234-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2234-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f2196(){if (rlsls2_p2196) return rlsls2_m2196; else {rlsls2_p2196=T;return rlsls2_m2196=((rlsls2_v2222=rlsls2_f2222()),(rlsls2_v2222?rlsls2_v2222:(((fabs((rlsls2_v7314-rlsls2_f2342()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f2345()))<rlsls2_v7308):NIL)?NIL:((rlsls2_f2559()?NIL:((rlsls2_v2206=rlsls2_f2206()),((fabs((rlsls2_v2206-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v2206>(0.0))?rlsls2_f2558():rlsls2_f2557()))))?NIL:T))));}}
static int rlsls2_f2195(){if (rlsls2_p2195) return rlsls2_m2195; else {rlsls2_p2195=T;return rlsls2_m2195=(rlsls2_f2240()?rlsls2_f2196():NIL);}}
static double rlsls2_f2190(){if (rlsls2_p2190) return rlsls2_m2190; else {rlsls2_p2190=T;return rlsls2_m2190=(rlsls2_f2240()?(rlsls2_f2196()?rlsls2_f2235():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2193(){if (rlsls2_p2193) return rlsls2_m2193; else {rlsls2_p2193=T;return rlsls2_m2193=(rlsls2_f2240()?(rlsls2_f2196()?rlsls2_f2235():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2192(){if (rlsls2_p2192) return rlsls2_m2192; else {rlsls2_p2192=T;return rlsls2_m2192=(rlsls2_f2193()>(0.0));}}
static int rlsls2_f2185(){if (rlsls2_p2185) return rlsls2_m2185; else {rlsls2_p2185=T;return rlsls2_m2185=(rlsls2_f2195()?((rlsls2_v2192=rlsls2_f2192()),(rlsls2_v2192?rlsls2_v2192:(fabs((rlsls2_f2190()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f285(){if (rlsls2_p285) return rlsls2_m285; else {rlsls2_p285=T;return rlsls2_m285=(rlsls2_f2185()?(rlsls2_f2240()?(rlsls2_f2196()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v2235=rlsls2_f2235()),((rlsls2_v2663<rlsls2_v2235)?rlsls2_v2663:rlsls2_v2235)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f263(){if (rlsls2_p263) return rlsls2_m263; else {rlsls2_p263=T;return rlsls2_m263=(rlsls2_f2185()?(rlsls2_f2240()?(rlsls2_f2196()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v2235=rlsls2_f2235()),((rlsls2_v3139<rlsls2_v2235)?rlsls2_v3139:rlsls2_v2235)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static int rlsls2_f715(){if (rlsls2_p715) return rlsls2_m715; else {rlsls2_p715=T;return rlsls2_m715=(rlsls2_f2185()?(rlsls2_f2240()?(rlsls2_f2196()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f727()?T:rlsls2_f859()):(rlsls2_f1511()?T:(rlsls2_f1421()?NIL:rlsls2_f725()))):(rlsls2_f878()?(rlsls2_f974()?T:(rlsls2_f888()?NIL:rlsls2_f725())):NIL)):NIL):NIL):NIL);}}
static double rlsls2_f581(){if (rlsls2_p581) return rlsls2_m581; else {rlsls2_p581=T;return rlsls2_m581=(rlsls2_f2185()?(rlsls2_f2240()?(rlsls2_f2196()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f727()?rlsls2_f2235():rlsls2_f845()):(rlsls2_f1511()?((rlsls2_v2235=rlsls2_f2235()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2235<rlsls2_v1455)?rlsls2_v2235:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f593()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2235=rlsls2_f2235()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2235<rlsls2_v922)?rlsls2_v2235:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f593())):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double_or_symbol rlsls2_f19(){if (rlsls2_p19) return rlsls2_m19; else {rlsls2_p19=T;return rlsls2_m19=(rlsls2_f2185()?(rlsls2_f2240()?(rlsls2_f2196()?coerce_double_to_double_or_symbol(rlsls2_f2235()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2181(){if (rlsls2_p2181) return rlsls2_m2181; else {rlsls2_p2181=T;return rlsls2_m2181=(rlsls2_f2185()?rlsls2_f2190():rlsls2_f3078());}}
static double rlsls2_f2183(){if (rlsls2_p2183) return rlsls2_m2183; else {rlsls2_p2183=T;return rlsls2_m2183=(rlsls2_f2185()?rlsls2_f2193():rlsls2_f3083());}}
static int rlsls2_f2182(){if (rlsls2_p2182) return rlsls2_m2182; else {rlsls2_p2182=T;return rlsls2_m2182=(rlsls2_f2183()>(0.0));}}
static int rlsls2_f2184(){if (rlsls2_p2184) return rlsls2_m2184; else {rlsls2_p2184=T;return rlsls2_m2184=(rlsls2_f2185()?rlsls2_f2195():NIL);}}
static int rlsls2_f2176(){if (rlsls2_p2176) return rlsls2_m2176; else {rlsls2_p2176=T;return rlsls2_m2176=(rlsls2_f2184()?((rlsls2_v2182=rlsls2_f2182()),(rlsls2_v2182?rlsls2_v2182:(fabs((rlsls2_f2181()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f2359(){if (rlsls2_p2359) return rlsls2_m2359; else {rlsls2_p2359=T;return rlsls2_m2359=((rlsls2_f2874()+rlsls2_f2361())+rlsls2_v7312);}}
static double rlsls2_f2358(){if (rlsls2_p2358) return rlsls2_m2358; else {rlsls2_p2358=T;return rlsls2_m2358=(rlsls2_f3273()*rlsls2_f2359());}}
static double rlsls2_f2356(){if (rlsls2_p2356) return rlsls2_m2356; else {rlsls2_p2356=T;return rlsls2_m2356=((rlsls2_f3263()-rlsls2_f2358())/rlsls2_f3276());}}
static int rlsls2_f2347(){if (rlsls2_p2347) return rlsls2_m2347; else {rlsls2_p2347=T;return rlsls2_m2347=((rlsls2_v2356=rlsls2_f2356()),((fabs((((rlsls2_f3276()*rlsls2_v2356)+rlsls2_f2358())-rlsls2_f3263()))<rlsls2_v7308)?(((rlsls2_f7117()<=rlsls2_v2356)&&(rlsls2_v2356<=rlsls2_f7115()))?((rlsls2_f7108()<=rlsls2_f2359())&&(rlsls2_f2359()<=rlsls2_f7106())):NIL):NIL));}}
static int rlsls2_f2326(){if (rlsls2_p2326) return rlsls2_m2326; else {rlsls2_p2326=T;return rlsls2_m2326=((fabs((rlsls2_f2356()-rlsls2_v7322))<rlsls2_v7308)?(fabs((rlsls2_f2359()-rlsls2_v7320))<rlsls2_v7308):NIL);}}
static int rlsls2_f2317(){if (rlsls2_p2317) return rlsls2_m2317; else {rlsls2_p2317=T;return rlsls2_m2317=((fabs((rlsls2_f2356()-rlsls2_v7318))<rlsls2_v7308)?(fabs((rlsls2_f2359()-rlsls2_v7316))<rlsls2_v7308):NIL);}}
static int rlsls2_f2314(){if (rlsls2_p2314) return rlsls2_m2314; else {rlsls2_p2314=T;return rlsls2_m2314=((rlsls2_v2326=rlsls2_f2326()),((rlsls2_v2326?rlsls2_f2585():(rlsls2_v2326?NIL:T))?((rlsls2_v2317=rlsls2_f2317()),(rlsls2_v2317?rlsls2_f2583():(rlsls2_v2317?NIL:T))):NIL));}}
static double rlsls2_f2311(){if (rlsls2_p2311) return rlsls2_m2311; else {rlsls2_p2311=T;return rlsls2_m2311=atan2((rlsls2_f2359()-rlsls2_v7312),(rlsls2_f2356()-rlsls2_v7314));}}
static double rlsls2_f2288(){if (rlsls2_p2288) return rlsls2_m2288; else {rlsls2_p2288=T;return rlsls2_m2288=(rlsls2_f2311()+(1.5707963267948966));}}
static double rlsls2_f2280(){if (rlsls2_p2280) return rlsls2_m2280; else {rlsls2_p2280=T;return rlsls2_m2280=((rlsls2_v2288=rlsls2_f2288()),(((rlsls2_f3276()*(rlsls2_f2356()+cos(rlsls2_v2288)))+(rlsls2_f3273()*(rlsls2_f2359()+sin(rlsls2_v2288))))-rlsls2_f3263()));}}
static double rlsls2_f2309(){if (rlsls2_p2309) return rlsls2_m2309; else {rlsls2_p2309=T;return rlsls2_m2309=normalize_rotation((rlsls2_f2311()-rlsls2_f6280()));}}
static int rlsls2_f740(){if (rlsls2_p740) return rlsls2_m740; else {rlsls2_p740=T;return rlsls2_m740=(rlsls2_f2309()<rlsls2_f845());}}
static int rlsls2_f738(){if (rlsls2_p738) return rlsls2_m738; else {rlsls2_p738=T;return rlsls2_m738=(rlsls2_f2309()<rlsls2_f1419());}}
static double rlsls2_f609(){if (rlsls2_p609) return rlsls2_m609; else {rlsls2_p609=T;return rlsls2_m609=(rlsls2_f738()?rlsls2_f2309():rlsls2_f1419());}}
static double rlsls2_f2308(){if (rlsls2_p2308) return rlsls2_m2308; else {rlsls2_p2308=T;return rlsls2_m2308=normalize_rotation(rlsls2_f2309());}}
static int rlsls2_f2296(){if (rlsls2_p2296) return rlsls2_m2296; else {rlsls2_p2296=T;return rlsls2_m2296=((rlsls2_v2308=rlsls2_f2308()),((fabs((rlsls2_v2308-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2308-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2308-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f2270(){if (rlsls2_p2270) return rlsls2_m2270; else {rlsls2_p2270=T;return rlsls2_m2270=((rlsls2_v2296=rlsls2_f2296()),(rlsls2_v2296?rlsls2_v2296:(((fabs((rlsls2_v7314-rlsls2_f2356()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f2359()))<rlsls2_v7308):NIL)?NIL:((rlsls2_f2559()?NIL:((rlsls2_v2280=rlsls2_f2280()),((fabs((rlsls2_v2280-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v2280>(0.0))?rlsls2_f2558():rlsls2_f2557()))))?NIL:T))));}}
static double rlsls2_f291(){if (rlsls2_p291) return rlsls2_m291; else {rlsls2_p291=T;return rlsls2_m291=(rlsls2_f2314()?(rlsls2_f2270()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v2309=rlsls2_f2309()),((rlsls2_v2663<rlsls2_v2309)?rlsls2_v2663:rlsls2_v2309)):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f269(){if (rlsls2_p269) return rlsls2_m269; else {rlsls2_p269=T;return rlsls2_m269=(rlsls2_f2314()?(rlsls2_f2270()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v2309=rlsls2_f2309()),((rlsls2_v3139<rlsls2_v2309)?rlsls2_v3139:rlsls2_v2309)):rlsls2_f2665()):rlsls2_f2665());}}
static int rlsls2_f729(){if (rlsls2_p729) return rlsls2_m729; else {rlsls2_p729=T;return rlsls2_m729=(rlsls2_f2314()?(rlsls2_f2270()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f740()?T:rlsls2_f859()):(rlsls2_f1511()?T:(rlsls2_f1421()?NIL:rlsls2_f738()))):(rlsls2_f878()?(rlsls2_f974()?T:(rlsls2_f888()?NIL:rlsls2_f738())):NIL)):NIL):NIL);}}
static double rlsls2_f598(){if (rlsls2_p598) return rlsls2_m598; else {rlsls2_p598=T;return rlsls2_m598=(rlsls2_f2314()?(rlsls2_f2270()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f740()?rlsls2_f2309():rlsls2_f845()):(rlsls2_f1511()?((rlsls2_v2309=rlsls2_f2309()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2309<rlsls2_v1455)?rlsls2_v2309:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f609()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2309=rlsls2_f2309()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2309<rlsls2_v922)?rlsls2_v2309:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f609())):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665());}}
static double_or_symbol rlsls2_f23(){if (rlsls2_p23) return rlsls2_m23; else {rlsls2_p23=T;return rlsls2_m23=(rlsls2_f2314()?(rlsls2_f2270()?coerce_double_to_double_or_symbol(rlsls2_f2309()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2128(){if (rlsls2_p2128) return rlsls2_m2128; else {rlsls2_p2128=T;return rlsls2_m2128=(rlsls2_f2314()?(rlsls2_f2270()?(rlsls2_f2185()?(rlsls2_f2240()?(rlsls2_f2196()?((rlsls2_v2309=rlsls2_f2309()),(rlsls2_v2235=rlsls2_f2235()),((rlsls2_v2309<rlsls2_v2235)?rlsls2_v2309:rlsls2_v2235)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static int rlsls2_f755(){if (rlsls2_p755) return rlsls2_m755; else {rlsls2_p755=T;return rlsls2_m755=(rlsls2_f2128()<rlsls2_f845());}}
static int rlsls2_f753(){if (rlsls2_p753) return rlsls2_m753; else {rlsls2_p753=T;return rlsls2_m753=(rlsls2_f2128()<rlsls2_f1455());}}
static int rlsls2_f746(){if (rlsls2_p746) return rlsls2_m746; else {rlsls2_p746=T;return rlsls2_m746=(rlsls2_f2128()<rlsls2_f922());}}
static int rlsls2_f751(){if (rlsls2_p751) return rlsls2_m751; else {rlsls2_p751=T;return rlsls2_m751=(rlsls2_f2128()<rlsls2_f1419());}}
static double rlsls2_f621(){if (rlsls2_p621) return rlsls2_m621; else {rlsls2_p621=T;return rlsls2_m621=(rlsls2_f751()?rlsls2_f2128():rlsls2_f1419());}}
static int rlsls2_f2174(){if (rlsls2_p2174) return rlsls2_m2174; else {rlsls2_p2174=T;return rlsls2_m2174=(rlsls2_f2314()?(rlsls2_f2270()?rlsls2_f2184():NIL):NIL);}}
static int rlsls2_f750(){if (rlsls2_p750) return rlsls2_m750; else {rlsls2_p750=T;return rlsls2_m750=(rlsls2_f751()?rlsls2_f2174():NIL);}}
static int rlsls2_f2269(){if (rlsls2_p2269) return rlsls2_m2269; else {rlsls2_p2269=T;return rlsls2_m2269=(rlsls2_f2314()?rlsls2_f2270():NIL);}}
static double rlsls2_f2264(){if (rlsls2_p2264) return rlsls2_m2264; else {rlsls2_p2264=T;return rlsls2_m2264=(rlsls2_f2314()?(rlsls2_f2270()?rlsls2_f2309():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2267(){if (rlsls2_p2267) return rlsls2_m2267; else {rlsls2_p2267=T;return rlsls2_m2267=(rlsls2_f2314()?(rlsls2_f2270()?rlsls2_f2309():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2266(){if (rlsls2_p2266) return rlsls2_m2266; else {rlsls2_p2266=T;return rlsls2_m2266=(rlsls2_f2267()>(0.0));}}
static int rlsls2_f2259(){if (rlsls2_p2259) return rlsls2_m2259; else {rlsls2_p2259=T;return rlsls2_m2259=(rlsls2_f2269()?((rlsls2_v2266=rlsls2_f2266()),(rlsls2_v2266?rlsls2_v2266:(fabs((rlsls2_f2264()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f2587(){if (rlsls2_p2587) return rlsls2_m2587; else {rlsls2_p2587=T;return rlsls2_m2587=(rlsls2_f6423()-rlsls2_f3226());}}
static int rlsls2_f2586(){if (rlsls2_p2586) return rlsls2_m2586; else {rlsls2_p2586=T;return rlsls2_m2586=(rlsls2_f2587()<0.0);}}
static double rlsls2_f2533(){if (rlsls2_p2533) return rlsls2_m2533; else {rlsls2_p2533=T;return rlsls2_m2533=sqrt(rlsls2_f2587());}}
static double rlsls2_f2522(){if (rlsls2_p2522) return rlsls2_m2522; else {rlsls2_p2522=T;return rlsls2_m2522=((-rlsls2_f2533())+rlsls2_v7314);}}
static int rlsls2_f2514(){if (rlsls2_p2514) return rlsls2_m2514; else {rlsls2_p2514=T;return rlsls2_m2514=((rlsls2_v2522=rlsls2_f2522()),((fabs((((rlsls2_f3276()*rlsls2_v2522)+rlsls2_f3061())-rlsls2_f3263()))<rlsls2_v7308)?(((rlsls2_f7117()<=rlsls2_v2522)&&(rlsls2_v2522<=rlsls2_f7115()))?rlsls2_f3055():NIL):NIL));}}
static int rlsls2_f2446(){if (rlsls2_p2446) return rlsls2_m2446; else {rlsls2_p2446=T;return rlsls2_m2446=((fabs((rlsls2_f2522()-rlsls2_v7322))<rlsls2_v7308)?rlsls2_f3037():NIL);}}
static int rlsls2_f2440(){if (rlsls2_p2440) return rlsls2_m2440; else {rlsls2_p2440=T;return rlsls2_m2440=((fabs((rlsls2_f2522()-rlsls2_v7318))<rlsls2_v7308)?rlsls2_f3028():NIL);}}
static int rlsls2_f2437(){if (rlsls2_p2437) return rlsls2_m2437; else {rlsls2_p2437=T;return rlsls2_m2437=((rlsls2_v2446=rlsls2_f2446()),((rlsls2_v2446?rlsls2_f2585():(rlsls2_v2446?NIL:T))?((rlsls2_v2440=rlsls2_f2440()),(rlsls2_v2440?rlsls2_f2583():(rlsls2_v2440?NIL:T))):NIL));}}
static double rlsls2_f2435(){if (rlsls2_p2435) return rlsls2_m2435; else {rlsls2_p2435=T;return rlsls2_m2435=atan2(rlsls2_f3023(),(rlsls2_f2522()-rlsls2_v7314));}}
static double rlsls2_f2415(){if (rlsls2_p2415) return rlsls2_m2415; else {rlsls2_p2415=T;return rlsls2_m2415=(rlsls2_f2435()+(1.5707963267948966));}}
static double rlsls2_f2407(){if (rlsls2_p2407) return rlsls2_m2407; else {rlsls2_p2407=T;return rlsls2_m2407=((rlsls2_v2415=rlsls2_f2415()),(((rlsls2_f3276()*(rlsls2_f2522()+cos(rlsls2_v2415)))+(rlsls2_f3273()*(rlsls2_f3062()+sin(rlsls2_v2415))))-rlsls2_f3263()));}}
static double rlsls2_f2433(){if (rlsls2_p2433) return rlsls2_m2433; else {rlsls2_p2433=T;return rlsls2_m2433=normalize_rotation((rlsls2_f2435()-rlsls2_f6280()));}}
static int rlsls2_f774(){if (rlsls2_p774) return rlsls2_m774; else {rlsls2_p774=T;return rlsls2_m774=(rlsls2_f2433()<rlsls2_f845());}}
static int rlsls2_f772(){if (rlsls2_p772) return rlsls2_m772; else {rlsls2_p772=T;return rlsls2_m772=(rlsls2_f2433()<rlsls2_f1419());}}
static double rlsls2_f642(){if (rlsls2_p642) return rlsls2_m642; else {rlsls2_p642=T;return rlsls2_m642=(rlsls2_f772()?rlsls2_f2433():rlsls2_f1419());}}
static double rlsls2_f2432(){if (rlsls2_p2432) return rlsls2_m2432; else {rlsls2_p2432=T;return rlsls2_m2432=normalize_rotation(rlsls2_f2433());}}
static int rlsls2_f2420(){if (rlsls2_p2420) return rlsls2_m2420; else {rlsls2_p2420=T;return rlsls2_m2420=((rlsls2_v2432=rlsls2_f2432()),((fabs((rlsls2_v2432-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2432-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2432-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f2397(){if (rlsls2_p2397) return rlsls2_m2397; else {rlsls2_p2397=T;return rlsls2_m2397=((rlsls2_v2420=rlsls2_f2420()),(rlsls2_v2420?rlsls2_v2420:(((fabs((rlsls2_v7314-rlsls2_f2522()))<rlsls2_v7308)?rlsls2_f3000():NIL)?NIL:((rlsls2_f2559()?NIL:((rlsls2_v2407=rlsls2_f2407()),((fabs((rlsls2_v2407-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v2407>(0.0))?rlsls2_f2558():rlsls2_f2557()))))?NIL:T))));}}
static int rlsls2_f2396(){if (rlsls2_p2396) return rlsls2_m2396; else {rlsls2_p2396=T;return rlsls2_m2396=(rlsls2_f2437()?rlsls2_f2397():NIL);}}
static double rlsls2_f2391(){if (rlsls2_p2391) return rlsls2_m2391; else {rlsls2_p2391=T;return rlsls2_m2391=(rlsls2_f2437()?(rlsls2_f2397()?rlsls2_f2433():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2394(){if (rlsls2_p2394) return rlsls2_m2394; else {rlsls2_p2394=T;return rlsls2_m2394=(rlsls2_f2437()?(rlsls2_f2397()?rlsls2_f2433():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2393(){if (rlsls2_p2393) return rlsls2_m2393; else {rlsls2_p2393=T;return rlsls2_m2393=(rlsls2_f2394()>(0.0));}}
static int rlsls2_f2386(){if (rlsls2_p2386) return rlsls2_m2386; else {rlsls2_p2386=T;return rlsls2_m2386=(rlsls2_f2396()?((rlsls2_v2393=rlsls2_f2393()),(rlsls2_v2393?rlsls2_v2393:(fabs((rlsls2_f2391()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f539(){if (rlsls2_p539) return rlsls2_m539; else {rlsls2_p539=T;return rlsls2_m539=(rlsls2_f2386()?(rlsls2_f2437()?(rlsls2_f2397()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v2433=rlsls2_f2433()),((rlsls2_v2663<rlsls2_v2433)?rlsls2_v2663:rlsls2_v2433)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f491(){if (rlsls2_p491) return rlsls2_m491; else {rlsls2_p491=T;return rlsls2_m491=(rlsls2_f2386()?(rlsls2_f2437()?(rlsls2_f2397()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v2433=rlsls2_f2433()),((rlsls2_v3139<rlsls2_v2433)?rlsls2_v3139:rlsls2_v2433)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static int rlsls2_f762(){if (rlsls2_p762) return rlsls2_m762; else {rlsls2_p762=T;return rlsls2_m762=(rlsls2_f2386()?(rlsls2_f2437()?(rlsls2_f2397()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f774()?T:rlsls2_f859()):(rlsls2_f1511()?T:(rlsls2_f1421()?NIL:rlsls2_f772()))):(rlsls2_f878()?(rlsls2_f974()?T:(rlsls2_f888()?NIL:rlsls2_f772())):NIL)):NIL):NIL):NIL);}}
static double rlsls2_f630(){if (rlsls2_p630) return rlsls2_m630; else {rlsls2_p630=T;return rlsls2_m630=(rlsls2_f2386()?(rlsls2_f2437()?(rlsls2_f2397()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f774()?rlsls2_f2433():rlsls2_f845()):(rlsls2_f1511()?((rlsls2_v2433=rlsls2_f2433()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2433<rlsls2_v1455)?rlsls2_v2433:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f642()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2433=rlsls2_f2433()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2433<rlsls2_v922)?rlsls2_v2433:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f642())):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double_or_symbol rlsls2_f31(){if (rlsls2_p31) return rlsls2_m31; else {rlsls2_p31=T;return rlsls2_m31=(rlsls2_f2386()?(rlsls2_f2437()?(rlsls2_f2397()?coerce_double_to_double_or_symbol(rlsls2_f2433()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2382(){if (rlsls2_p2382) return rlsls2_m2382; else {rlsls2_p2382=T;return rlsls2_m2382=(rlsls2_f2386()?rlsls2_f2391():rlsls2_f3078());}}
static double rlsls2_f2384(){if (rlsls2_p2384) return rlsls2_m2384; else {rlsls2_p2384=T;return rlsls2_m2384=(rlsls2_f2386()?rlsls2_f2394():rlsls2_f3083());}}
static int rlsls2_f2383(){if (rlsls2_p2383) return rlsls2_m2383; else {rlsls2_p2383=T;return rlsls2_m2383=(rlsls2_f2384()>(0.0));}}
static int rlsls2_f2385(){if (rlsls2_p2385) return rlsls2_m2385; else {rlsls2_p2385=T;return rlsls2_m2385=(rlsls2_f2386()?rlsls2_f2396():NIL);}}
static int rlsls2_f2377(){if (rlsls2_p2377) return rlsls2_m2377; else {rlsls2_p2377=T;return rlsls2_m2377=(rlsls2_f2385()?((rlsls2_v2383=rlsls2_f2383()),(rlsls2_v2383?rlsls2_v2383:(fabs((rlsls2_f2382()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f2532(){if (rlsls2_p2532) return rlsls2_m2532; else {rlsls2_p2532=T;return rlsls2_m2532=(rlsls2_f2533()+rlsls2_v7314);}}
static int rlsls2_f2524(){if (rlsls2_p2524) return rlsls2_m2524; else {rlsls2_p2524=T;return rlsls2_m2524=((rlsls2_v2532=rlsls2_f2532()),((fabs((((rlsls2_f3276()*rlsls2_v2532)+rlsls2_f3061())-rlsls2_f3263()))<rlsls2_v7308)?(((rlsls2_f7117()<=rlsls2_v2532)&&(rlsls2_v2532<=rlsls2_f7115()))?rlsls2_f3055():NIL):NIL));}}
static int rlsls2_f2510(){if (rlsls2_p2510) return rlsls2_m2510; else {rlsls2_p2510=T;return rlsls2_m2510=((fabs((rlsls2_f2532()-rlsls2_v7322))<rlsls2_v7308)?rlsls2_f3037():NIL);}}
static int rlsls2_f2504(){if (rlsls2_p2504) return rlsls2_m2504; else {rlsls2_p2504=T;return rlsls2_m2504=((fabs((rlsls2_f2532()-rlsls2_v7318))<rlsls2_v7308)?rlsls2_f3028():NIL);}}
static int rlsls2_f2501(){if (rlsls2_p2501) return rlsls2_m2501; else {rlsls2_p2501=T;return rlsls2_m2501=((rlsls2_v2510=rlsls2_f2510()),((rlsls2_v2510?rlsls2_f2585():(rlsls2_v2510?NIL:T))?((rlsls2_v2504=rlsls2_f2504()),(rlsls2_v2504?rlsls2_f2583():(rlsls2_v2504?NIL:T))):NIL));}}
static double rlsls2_f2499(){if (rlsls2_p2499) return rlsls2_m2499; else {rlsls2_p2499=T;return rlsls2_m2499=atan2(rlsls2_f3023(),(rlsls2_f2532()-rlsls2_v7314));}}
static double rlsls2_f2479(){if (rlsls2_p2479) return rlsls2_m2479; else {rlsls2_p2479=T;return rlsls2_m2479=(rlsls2_f2499()+(1.5707963267948966));}}
static double rlsls2_f2471(){if (rlsls2_p2471) return rlsls2_m2471; else {rlsls2_p2471=T;return rlsls2_m2471=((rlsls2_v2479=rlsls2_f2479()),(((rlsls2_f3276()*(rlsls2_f2532()+cos(rlsls2_v2479)))+(rlsls2_f3273()*(rlsls2_f3062()+sin(rlsls2_v2479))))-rlsls2_f3263()));}}
static double rlsls2_f2497(){if (rlsls2_p2497) return rlsls2_m2497; else {rlsls2_p2497=T;return rlsls2_m2497=normalize_rotation((rlsls2_f2499()-rlsls2_f6280()));}}
static int rlsls2_f787(){if (rlsls2_p787) return rlsls2_m787; else {rlsls2_p787=T;return rlsls2_m787=(rlsls2_f2497()<rlsls2_f845());}}
static int rlsls2_f785(){if (rlsls2_p785) return rlsls2_m785; else {rlsls2_p785=T;return rlsls2_m785=(rlsls2_f2497()<rlsls2_f1419());}}
static double rlsls2_f658(){if (rlsls2_p658) return rlsls2_m658; else {rlsls2_p658=T;return rlsls2_m658=(rlsls2_f785()?rlsls2_f2497():rlsls2_f1419());}}
static double rlsls2_f2496(){if (rlsls2_p2496) return rlsls2_m2496; else {rlsls2_p2496=T;return rlsls2_m2496=normalize_rotation(rlsls2_f2497());}}
static int rlsls2_f2484(){if (rlsls2_p2484) return rlsls2_m2484; else {rlsls2_p2484=T;return rlsls2_m2484=((rlsls2_v2496=rlsls2_f2496()),((fabs((rlsls2_v2496-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2496-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2496-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f2461(){if (rlsls2_p2461) return rlsls2_m2461; else {rlsls2_p2461=T;return rlsls2_m2461=((rlsls2_v2484=rlsls2_f2484()),(rlsls2_v2484?rlsls2_v2484:(((fabs((rlsls2_v7314-rlsls2_f2532()))<rlsls2_v7308)?rlsls2_f3000():NIL)?NIL:((rlsls2_f2559()?NIL:((rlsls2_v2471=rlsls2_f2471()),((fabs((rlsls2_v2471-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v2471>(0.0))?rlsls2_f2558():rlsls2_f2557()))))?NIL:T))));}}
static double rlsls2_f545(){if (rlsls2_p545) return rlsls2_m545; else {rlsls2_p545=T;return rlsls2_m545=(rlsls2_f2501()?(rlsls2_f2461()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v2497=rlsls2_f2497()),((rlsls2_v2663<rlsls2_v2497)?rlsls2_v2663:rlsls2_v2497)):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f497(){if (rlsls2_p497) return rlsls2_m497; else {rlsls2_p497=T;return rlsls2_m497=(rlsls2_f2501()?(rlsls2_f2461()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v2497=rlsls2_f2497()),((rlsls2_v3139<rlsls2_v2497)?rlsls2_v3139:rlsls2_v2497)):rlsls2_f2665()):rlsls2_f2665());}}
static int rlsls2_f776(){if (rlsls2_p776) return rlsls2_m776; else {rlsls2_p776=T;return rlsls2_m776=(rlsls2_f2501()?(rlsls2_f2461()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f787()?T:rlsls2_f859()):(rlsls2_f1511()?T:(rlsls2_f1421()?NIL:rlsls2_f785()))):(rlsls2_f878()?(rlsls2_f974()?T:(rlsls2_f888()?NIL:rlsls2_f785())):NIL)):NIL):NIL);}}
static double rlsls2_f647(){if (rlsls2_p647) return rlsls2_m647; else {rlsls2_p647=T;return rlsls2_m647=(rlsls2_f2501()?(rlsls2_f2461()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f787()?rlsls2_f2497():rlsls2_f845()):(rlsls2_f1511()?((rlsls2_v2497=rlsls2_f2497()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2497<rlsls2_v1455)?rlsls2_v2497:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f658()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2497=rlsls2_f2497()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2497<rlsls2_v922)?rlsls2_v2497:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f658())):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665());}}
static double_or_symbol rlsls2_f35(){if (rlsls2_p35) return rlsls2_m35; else {rlsls2_p35=T;return rlsls2_m35=(rlsls2_f2501()?(rlsls2_f2461()?coerce_double_to_double_or_symbol(rlsls2_f2497()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2142(){if (rlsls2_p2142) return rlsls2_m2142; else {rlsls2_p2142=T;return rlsls2_m2142=(rlsls2_f2501()?(rlsls2_f2461()?(rlsls2_f2386()?(rlsls2_f2437()?(rlsls2_f2397()?((rlsls2_v2497=rlsls2_f2497()),(rlsls2_v2433=rlsls2_f2433()),((rlsls2_v2497<rlsls2_v2433)?rlsls2_v2497:rlsls2_v2433)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static int rlsls2_f802(){if (rlsls2_p802) return rlsls2_m802; else {rlsls2_p802=T;return rlsls2_m802=(rlsls2_f2142()<rlsls2_f845());}}
static int rlsls2_f800(){if (rlsls2_p800) return rlsls2_m800; else {rlsls2_p800=T;return rlsls2_m800=(rlsls2_f2142()<rlsls2_f1455());}}
static int rlsls2_f793(){if (rlsls2_p793) return rlsls2_m793; else {rlsls2_p793=T;return rlsls2_m793=(rlsls2_f2142()<rlsls2_f922());}}
static int rlsls2_f798(){if (rlsls2_p798) return rlsls2_m798; else {rlsls2_p798=T;return rlsls2_m798=(rlsls2_f2142()<rlsls2_f1419());}}
static double rlsls2_f670(){if (rlsls2_p670) return rlsls2_m670; else {rlsls2_p670=T;return rlsls2_m670=(rlsls2_f798()?rlsls2_f2142():rlsls2_f1419());}}
static int rlsls2_f2375(){if (rlsls2_p2375) return rlsls2_m2375; else {rlsls2_p2375=T;return rlsls2_m2375=(rlsls2_f2501()?(rlsls2_f2461()?rlsls2_f2385():NIL):NIL);}}
static int rlsls2_f797(){if (rlsls2_p797) return rlsls2_m797; else {rlsls2_p797=T;return rlsls2_m797=(rlsls2_f798()?rlsls2_f2375():NIL);}}
static int rlsls2_f2460(){if (rlsls2_p2460) return rlsls2_m2460; else {rlsls2_p2460=T;return rlsls2_m2460=(rlsls2_f2501()?rlsls2_f2461():NIL);}}
static double rlsls2_f2455(){if (rlsls2_p2455) return rlsls2_m2455; else {rlsls2_p2455=T;return rlsls2_m2455=(rlsls2_f2501()?(rlsls2_f2461()?rlsls2_f2497():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2458(){if (rlsls2_p2458) return rlsls2_m2458; else {rlsls2_p2458=T;return rlsls2_m2458=(rlsls2_f2501()?(rlsls2_f2461()?rlsls2_f2497():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2457(){if (rlsls2_p2457) return rlsls2_m2457; else {rlsls2_p2457=T;return rlsls2_m2457=(rlsls2_f2458()>(0.0));}}
static int rlsls2_f2450(){if (rlsls2_p2450) return rlsls2_m2450; else {rlsls2_p2450=T;return rlsls2_m2450=(rlsls2_f2460()?((rlsls2_v2457=rlsls2_f2457()),(rlsls2_v2457?rlsls2_v2457:(fabs((rlsls2_f2455()-(0.0)))<rlsls2_v7308))):NIL);}}
static int rlsls2_f2595(){if (rlsls2_p2595) return rlsls2_m2595; else {rlsls2_p2595=T;return rlsls2_m2595=(fabs((rlsls2_f3245()-rlsls2_f6443()))<rlsls2_v7308);}}
static double rlsls2_f551(){if (rlsls2_p551) return rlsls2_m551; else {rlsls2_p551=T;return rlsls2_m551=(rlsls2_f2595()?(rlsls2_f2539()?(rlsls2_f2156()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v2154=rlsls2_f2154()),((rlsls2_v2663<rlsls2_v2154)?rlsls2_v2663:rlsls2_v2154)):(rlsls2_f2581()?(rlsls2_f2550()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v2579=rlsls2_f2579()),((rlsls2_v2663<rlsls2_v2579)?rlsls2_v2663:rlsls2_v2579)):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f503(){if (rlsls2_p503) return rlsls2_m503; else {rlsls2_p503=T;return rlsls2_m503=(rlsls2_f2595()?(rlsls2_f2539()?(rlsls2_f2156()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v2154=rlsls2_f2154()),((rlsls2_v3139<rlsls2_v2154)?rlsls2_v3139:rlsls2_v2154)):(rlsls2_f2581()?(rlsls2_f2550()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v2579=rlsls2_f2579()),((rlsls2_v3139<rlsls2_v2579)?rlsls2_v3139:rlsls2_v2579)):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665());}}
static int rlsls2_f803(){if (rlsls2_p803) return rlsls2_m803; else {rlsls2_p803=T;return rlsls2_m803=(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f834()?rlsls2_f2549():rlsls2_f859()):(rlsls2_f1511()?(rlsls2_f832()?rlsls2_f2549():T):(rlsls2_f1421()?NIL:rlsls2_f829()))):(rlsls2_f878()?(rlsls2_f974()?(rlsls2_f825()?rlsls2_f2549():T):(rlsls2_f888()?NIL:rlsls2_f829())):NIL)):(rlsls2_f2581()?(rlsls2_f2550()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f819()?T:rlsls2_f859()):(rlsls2_f1511()?T:(rlsls2_f1421()?NIL:rlsls2_f817()))):(rlsls2_f878()?(rlsls2_f974()?T:(rlsls2_f888()?NIL:rlsls2_f817())):NIL)):NIL):NIL)):NIL):NIL):NIL):NIL);}}
static double rlsls2_f673(){if (rlsls2_p673) return rlsls2_m673; else {rlsls2_p673=T;return rlsls2_m673=(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f834()?rlsls2_f2154():rlsls2_f845()):(rlsls2_f1511()?(rlsls2_f832()?rlsls2_f2154():rlsls2_f1455()):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f701()))):(rlsls2_f878()?(rlsls2_f974()?(rlsls2_f825()?rlsls2_f2154():rlsls2_f922()):(rlsls2_f888()?rlsls2_f2665():rlsls2_f701())):rlsls2_f2665())):(rlsls2_f2581()?(rlsls2_f2550()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f819()?rlsls2_f2579():rlsls2_f845()):(rlsls2_f1511()?((rlsls2_v2579=rlsls2_f2579()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2579<rlsls2_v1455)?rlsls2_v2579:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f689()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2579=rlsls2_f2579()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2579<rlsls2_v922)?rlsls2_v2579:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f689())):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double_or_symbol rlsls2_f37(){if (rlsls2_p37) return rlsls2_m37; else {rlsls2_p37=T;return rlsls2_m37=(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?((rlsls2_v2539=rlsls2_f2539()),(rlsls2_v2539?(rlsls2_f2156()?coerce_double_to_double_or_symbol(rlsls2_f2154()):rlsls2_f43()):(rlsls2_v2539?rlsls2_f43():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2112(){if (rlsls2_p2112) return rlsls2_m2112; else {rlsls2_p2112=T;return rlsls2_m2112=(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?rlsls2_f2154():rlsls2_f2544()):rlsls2_f2161()):rlsls2_f3078()):rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2149(){if (rlsls2_p2149) return rlsls2_m2149; else {rlsls2_p2149=T;return rlsls2_m2149=(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?rlsls2_f2154():rlsls2_f2547()):rlsls2_f2163()):rlsls2_f3083()):rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2588(){if (rlsls2_p2588) return rlsls2_m2588; else {rlsls2_p2588=T;return rlsls2_m2588=((rlsls2_v2595=rlsls2_f2595()),(rlsls2_v2595?rlsls2_f2590():(rlsls2_v2595?NIL:T)));}}
static double rlsls2_f572(){if (rlsls2_p572) return rlsls2_m572; else {rlsls2_p572=T;return rlsls2_m572=(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f3232()?(rlsls2_f2586()?rlsls2_f673():(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f802()?rlsls2_f2142():rlsls2_f845()):(rlsls2_f1511()?(rlsls2_f800()?rlsls2_f2142():rlsls2_f1455()):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f670()))):(rlsls2_f878()?(rlsls2_f974()?(rlsls2_f793()?rlsls2_f2142():rlsls2_f922()):(rlsls2_f888()?rlsls2_f2665():rlsls2_f670())):rlsls2_f2665())):rlsls2_f647()):rlsls2_f630()):(rlsls2_f2450()?rlsls2_f647():rlsls2_f2665())):(rlsls2_f2514()?rlsls2_f630():rlsls2_f2665()))):(rlsls2_f2363()?rlsls2_f673():(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f755()?rlsls2_f2128():rlsls2_f845()):(rlsls2_f1511()?(rlsls2_f753()?rlsls2_f2128():rlsls2_f1455()):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f621()))):(rlsls2_f878()?(rlsls2_f974()?(rlsls2_f746()?rlsls2_f2128():rlsls2_f922()):(rlsls2_f888()?rlsls2_f2665():rlsls2_f621())):rlsls2_f2665())):rlsls2_f598()):rlsls2_f581()):(rlsls2_f2259()?rlsls2_f598():rlsls2_f2665())):(rlsls2_f2333()?rlsls2_f581():rlsls2_f2665())))):rlsls2_f2665()));}}
static double rlsls2_f560(){if (rlsls2_p560) return rlsls2_m560; else {rlsls2_p560=T;return rlsls2_m560=((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v572=rlsls2_f572()),((rlsls2_v2663<rlsls2_v572)?rlsls2_v2663:rlsls2_v572));}}
static double rlsls2_f512(){if (rlsls2_p512) return rlsls2_m512; else {rlsls2_p512=T;return rlsls2_m512=((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v572=rlsls2_f572()),((rlsls2_v3139<rlsls2_v572)?rlsls2_v3139:rlsls2_v572));}}
static double rlsls2_f2095(){if (rlsls2_p2095) return rlsls2_m2095; else {rlsls2_p2095=T;return rlsls2_m2095=(rlsls2_f2598()?rlsls2_f3078():(rlsls2_f2588()?(rlsls2_f3232()?(rlsls2_f2586()?rlsls2_f2112():(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?rlsls2_f2142():rlsls2_f2455()):rlsls2_f2382()):(rlsls2_f2450()?rlsls2_f2455():rlsls2_f3078())):(rlsls2_f2514()?rlsls2_f2382():rlsls2_f3078()))):(rlsls2_f2363()?rlsls2_f2112():(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?rlsls2_f2128():rlsls2_f2264()):rlsls2_f2181()):(rlsls2_f2259()?rlsls2_f2264():rlsls2_f3078())):(rlsls2_f2333()?rlsls2_f2181():rlsls2_f3078())))):rlsls2_f3078()));}}
static double rlsls2_f2118(){if (rlsls2_p2118) return rlsls2_m2118; else {rlsls2_p2118=T;return rlsls2_m2118=(rlsls2_f2598()?rlsls2_f3083():(rlsls2_f2588()?(rlsls2_f3232()?(rlsls2_f2586()?rlsls2_f2149():(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?rlsls2_f2142():rlsls2_f2458()):rlsls2_f2384()):(rlsls2_f2450()?rlsls2_f2458():rlsls2_f3083())):(rlsls2_f2514()?rlsls2_f2384():rlsls2_f3083()))):(rlsls2_f2363()?rlsls2_f2149():(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?rlsls2_f2128():rlsls2_f2267()):rlsls2_f2183()):(rlsls2_f2259()?rlsls2_f2267():rlsls2_f3083())):(rlsls2_f2333()?rlsls2_f2183():rlsls2_f3083())))):rlsls2_f3083()));}}
static int rlsls2_f2117(){if (rlsls2_p2117) return rlsls2_m2117; else {rlsls2_p2117=T;return rlsls2_m2117=(rlsls2_f2118()>(0.0));}}
static int rlsls2_f2534(){if (rlsls2_p2534) return rlsls2_m2534; else {rlsls2_p2534=T;return rlsls2_m2534=(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?rlsls2_f2549():rlsls2_f2538()):NIL):NIL):NIL);}}
static int rlsls2_f2164(){if (rlsls2_p2164) return rlsls2_m2164; else {rlsls2_p2164=T;return rlsls2_m2164=(rlsls2_f2598()?NIL:(rlsls2_f2588()?(rlsls2_f3232()?(rlsls2_f2586()?rlsls2_f2534():(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?rlsls2_f2375():rlsls2_f2460()):rlsls2_f2385()):(rlsls2_f2450()?rlsls2_f2460():NIL)):(rlsls2_f2514()?rlsls2_f2385():NIL))):(rlsls2_f2363()?rlsls2_f2534():(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?rlsls2_f2174():rlsls2_f2269()):rlsls2_f2184()):(rlsls2_f2259()?rlsls2_f2269():NIL)):(rlsls2_f2333()?rlsls2_f2184():NIL)))):NIL));}}
static int rlsls2_f2090(){if (rlsls2_p2090) return rlsls2_m2090; else {rlsls2_p2090=T;return rlsls2_m2090=(rlsls2_f2164()?((rlsls2_v2117=rlsls2_f2117()),(rlsls2_v2117?rlsls2_v2117:(fabs((rlsls2_f2095()-(0.0)))<rlsls2_v7308))):NIL);}}
static int rlsls2_f569(){if (rlsls2_p569) return rlsls2_m569; else {rlsls2_p569=T;return rlsls2_m569=((rlsls2_f2090()?(rlsls2_f835()?rlsls2_f572():rlsls2_f2118()):rlsls2_f843())>(0.0));}}
static double rlsls2_f7235(){if (rlsls2_p7235) return rlsls2_m7235; else {rlsls2_p7235=T;return rlsls2_m7235=((rlsls2_v7240=rlsls2_f7240()),sqrt(((rlsls2_v7240*rlsls2_v7240)+rlsls2_f7237())));}}
static double rlsls2_f7211(){if (rlsls2_p7211) return rlsls2_m7211; else {rlsls2_p7211=T;return rlsls2_m7211=((rlsls2_v7235=rlsls2_f7235()),(rlsls2_v7235*rlsls2_v7235));}}
static double rlsls2_f2878(){if (rlsls2_p2878) return rlsls2_m2878; else {rlsls2_p2878=T;return rlsls2_m2878=(rlsls2_f2884()-((4.0)*rlsls2_f2882()*(rlsls2_f3228()-(rlsls2_f3275()*rlsls2_f7211()))));}}
static int rlsls2_f2877(){if (rlsls2_p2877) return rlsls2_m2877; else {rlsls2_p2877=T;return rlsls2_m2877=(rlsls2_f2878()<0.0);}}
static double rlsls2_f2872(){if (rlsls2_p2872) return rlsls2_m2872; else {rlsls2_p2872=T;return rlsls2_m2872=(sqrt(rlsls2_f2878())/rlsls2_f2875());}}
static double rlsls2_f2856(){if (rlsls2_p2856) return rlsls2_m2856; else {rlsls2_p2856=T;return rlsls2_m2856=((rlsls2_f2874()-rlsls2_f2872())+rlsls2_v7312);}}
static double rlsls2_f2855(){if (rlsls2_p2855) return rlsls2_m2855; else {rlsls2_p2855=T;return rlsls2_m2855=(rlsls2_f3273()*rlsls2_f2856());}}
static double rlsls2_f2853(){if (rlsls2_p2853) return rlsls2_m2853; else {rlsls2_p2853=T;return rlsls2_m2853=((rlsls2_f3263()-rlsls2_f2855())/rlsls2_f3276());}}
static int rlsls2_f2844(){if (rlsls2_p2844) return rlsls2_m2844; else {rlsls2_p2844=T;return rlsls2_m2844=((rlsls2_v2853=rlsls2_f2853()),((fabs((((rlsls2_f3276()*rlsls2_v2853)+rlsls2_f2855())-rlsls2_f3263()))<rlsls2_v7308)?(((rlsls2_f7117()<=rlsls2_v2853)&&(rlsls2_v2853<=rlsls2_f7115()))?((rlsls2_f7108()<=rlsls2_f2856())&&(rlsls2_f2856()<=rlsls2_f7106())):NIL):NIL));}}
static int rlsls2_f2763(){if (rlsls2_p2763) return rlsls2_m2763; else {rlsls2_p2763=T;return rlsls2_m2763=((fabs((rlsls2_f2853()-rlsls2_v7322))<rlsls2_v7308)?(fabs((rlsls2_f2856()-rlsls2_v7320))<rlsls2_v7308):NIL);}}
static int rlsls2_f2754(){if (rlsls2_p2754) return rlsls2_m2754; else {rlsls2_p2754=T;return rlsls2_m2754=((fabs((rlsls2_f2853()-rlsls2_v7318))<rlsls2_v7308)?(fabs((rlsls2_f2856()-rlsls2_v7316))<rlsls2_v7308):NIL);}}
static int rlsls2_f2751(){if (rlsls2_p2751) return rlsls2_m2751; else {rlsls2_p2751=T;return rlsls2_m2751=((rlsls2_v2763=rlsls2_f2763()),((rlsls2_v2763?rlsls2_f3170():(rlsls2_v2763?NIL:T))?((rlsls2_v2754=rlsls2_f2754()),(rlsls2_v2754?rlsls2_f3153():(rlsls2_v2754?NIL:T))):NIL));}}
static double rlsls2_f2748(){if (rlsls2_p2748) return rlsls2_m2748; else {rlsls2_p2748=T;return rlsls2_m2748=atan2((rlsls2_f2856()-rlsls2_v7312),(rlsls2_f2853()-rlsls2_v7314));}}
static double rlsls2_f2725(){if (rlsls2_p2725) return rlsls2_m2725; else {rlsls2_p2725=T;return rlsls2_m2725=(rlsls2_f2748()+(1.5707963267948966));}}
static double rlsls2_f2717(){if (rlsls2_p2717) return rlsls2_m2717; else {rlsls2_p2717=T;return rlsls2_m2717=((rlsls2_v2725=rlsls2_f2725()),(((rlsls2_f3276()*(rlsls2_f2853()+cos(rlsls2_v2725)))+(rlsls2_f3273()*(rlsls2_f2856()+sin(rlsls2_v2725))))-rlsls2_f3263()));}}
static double rlsls2_f2746(){if (rlsls2_p2746) return rlsls2_m2746; else {rlsls2_p2746=T;return rlsls2_m2746=normalize_rotation((rlsls2_f2748()-rlsls2_f6935()));}}
static double rlsls2_f124(){if (rlsls2_p124) return rlsls2_m124; else {rlsls2_p124=T;return rlsls2_m124=(rlsls2_f2314()?(rlsls2_f2270()?((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v2309=rlsls2_f2309()),((rlsls2_v2746<rlsls2_v2309)?rlsls2_v2746:rlsls2_v2309)):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f118(){if (rlsls2_p118) return rlsls2_m118; else {rlsls2_p118=T;return rlsls2_m118=(rlsls2_f2185()?(rlsls2_f2240()?(rlsls2_f2196()?((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v2235=rlsls2_f2235()),((rlsls2_v2746<rlsls2_v2235)?rlsls2_v2746:rlsls2_v2235)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f103(){if (rlsls2_p103) return rlsls2_m103; else {rlsls2_p103=T;return rlsls2_m103=((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v1419=rlsls2_f1419()),((rlsls2_v2746<rlsls2_v1419)?rlsls2_v2746:rlsls2_v1419));}}
static double rlsls2_f2745(){if (rlsls2_p2745) return rlsls2_m2745; else {rlsls2_p2745=T;return rlsls2_m2745=normalize_rotation(rlsls2_f2746());}}
static int rlsls2_f2733(){if (rlsls2_p2733) return rlsls2_m2733; else {rlsls2_p2733=T;return rlsls2_m2733=((rlsls2_v2745=rlsls2_f2745()),((fabs((rlsls2_v2745-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2745-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2745-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f2707(){if (rlsls2_p2707) return rlsls2_m2707; else {rlsls2_p2707=T;return rlsls2_m2707=((rlsls2_v2733=rlsls2_f2733()),(rlsls2_v2733?rlsls2_v2733:(((fabs((rlsls2_v7314-rlsls2_f2853()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f2856()))<rlsls2_v7308):NIL)?NIL:((rlsls2_f3108()?NIL:((rlsls2_v2717=rlsls2_f2717()),((fabs((rlsls2_v2717-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v2717>(0.0))?rlsls2_f3094():rlsls2_f3093()))))?NIL:T))));}}
static int rlsls2_f2706(){if (rlsls2_p2706) return rlsls2_m2706; else {rlsls2_p2706=T;return rlsls2_m2706=(rlsls2_f2751()?rlsls2_f2707():NIL);}}
static double rlsls2_f2701(){if (rlsls2_p2701) return rlsls2_m2701; else {rlsls2_p2701=T;return rlsls2_m2701=(rlsls2_f2751()?(rlsls2_f2707()?rlsls2_f2746():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2704(){if (rlsls2_p2704) return rlsls2_m2704; else {rlsls2_p2704=T;return rlsls2_m2704=(rlsls2_f2751()?(rlsls2_f2707()?rlsls2_f2746():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2703(){if (rlsls2_p2703) return rlsls2_m2703; else {rlsls2_p2703=T;return rlsls2_m2703=(rlsls2_f2704()>(0.0));}}
static int rlsls2_f2696(){if (rlsls2_p2696) return rlsls2_m2696; else {rlsls2_p2696=T;return rlsls2_m2696=(rlsls2_f2706()?((rlsls2_v2703=rlsls2_f2703()),(rlsls2_v2703?rlsls2_v2703:(fabs((rlsls2_f2701()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f90(){if (rlsls2_p90) return rlsls2_m90; else {rlsls2_p90=T;return rlsls2_m90=(rlsls2_f2696()?(rlsls2_f2751()?(rlsls2_f2707()?(rlsls2_f2090()?(rlsls2_f835()?((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v572=rlsls2_f572()),((rlsls2_v2746<rlsls2_v572)?rlsls2_v2746:rlsls2_v572)):(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2363()?(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v2154=rlsls2_f2154()),((rlsls2_v2746<rlsls2_v2154)?rlsls2_v2746:rlsls2_v2154)):(rlsls2_f2581()?(rlsls2_f2550()?((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v2579=rlsls2_f2579()),((rlsls2_v2746<rlsls2_v2579)?rlsls2_v2746:rlsls2_v2579)):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v2128=rlsls2_f2128()),((rlsls2_v2746<rlsls2_v2128)?rlsls2_v2746:rlsls2_v2128)):rlsls2_f124()):rlsls2_f118()):(rlsls2_f2259()?rlsls2_f124():rlsls2_f2665())):(rlsls2_f2333()?rlsls2_f118():rlsls2_f2665()))):rlsls2_f2665()))):(rlsls2_f1409()?(rlsls2_f869()?((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v845=rlsls2_f845()),((rlsls2_v2746<rlsls2_v845)?rlsls2_v2746:rlsls2_v845)):(rlsls2_f1511()?((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2746<rlsls2_v1455)?rlsls2_v2746:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f103()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2746=rlsls2_f2746()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2746<rlsls2_v922)?rlsls2_v2746:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f103())):rlsls2_f2665()))):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double_or_symbol rlsls2_f55(){if (rlsls2_p55) return rlsls2_m55; else {rlsls2_p55=T;return rlsls2_m55=(rlsls2_f2696()?(rlsls2_f2751()?(rlsls2_f2707()?coerce_double_to_double_or_symbol(rlsls2_f2746()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2692(){if (rlsls2_p2692) return rlsls2_m2692; else {rlsls2_p2692=T;return rlsls2_m2692=(rlsls2_f2696()?rlsls2_f2701():rlsls2_f3078());}}
static double rlsls2_f2694(){if (rlsls2_p2694) return rlsls2_m2694; else {rlsls2_p2694=T;return rlsls2_m2694=(rlsls2_f2696()?rlsls2_f2704():rlsls2_f3083());}}
static int rlsls2_f2693(){if (rlsls2_p2693) return rlsls2_m2693; else {rlsls2_p2693=T;return rlsls2_m2693=(rlsls2_f2694()>(0.0));}}
static int rlsls2_f2695(){if (rlsls2_p2695) return rlsls2_m2695; else {rlsls2_p2695=T;return rlsls2_m2695=(rlsls2_f2696()?rlsls2_f2706():NIL);}}
static int rlsls2_f2687(){if (rlsls2_p2687) return rlsls2_m2687; else {rlsls2_p2687=T;return rlsls2_m2687=(rlsls2_f2695()?((rlsls2_v2693=rlsls2_f2693()),(rlsls2_v2693?rlsls2_v2693:(fabs((rlsls2_f2692()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f2870(){if (rlsls2_p2870) return rlsls2_m2870; else {rlsls2_p2870=T;return rlsls2_m2870=((rlsls2_f2874()+rlsls2_f2872())+rlsls2_v7312);}}
static double rlsls2_f2869(){if (rlsls2_p2869) return rlsls2_m2869; else {rlsls2_p2869=T;return rlsls2_m2869=(rlsls2_f3273()*rlsls2_f2870());}}
static double rlsls2_f2867(){if (rlsls2_p2867) return rlsls2_m2867; else {rlsls2_p2867=T;return rlsls2_m2867=((rlsls2_f3263()-rlsls2_f2869())/rlsls2_f3276());}}
static int rlsls2_f2858(){if (rlsls2_p2858) return rlsls2_m2858; else {rlsls2_p2858=T;return rlsls2_m2858=((rlsls2_v2867=rlsls2_f2867()),((fabs((((rlsls2_f3276()*rlsls2_v2867)+rlsls2_f2869())-rlsls2_f3263()))<rlsls2_v7308)?(((rlsls2_f7117()<=rlsls2_v2867)&&(rlsls2_v2867<=rlsls2_f7115()))?((rlsls2_f7108()<=rlsls2_f2870())&&(rlsls2_f2870()<=rlsls2_f7106())):NIL):NIL));}}
static int rlsls2_f2837(){if (rlsls2_p2837) return rlsls2_m2837; else {rlsls2_p2837=T;return rlsls2_m2837=((fabs((rlsls2_f2867()-rlsls2_v7322))<rlsls2_v7308)?(fabs((rlsls2_f2870()-rlsls2_v7320))<rlsls2_v7308):NIL);}}
static int rlsls2_f2828(){if (rlsls2_p2828) return rlsls2_m2828; else {rlsls2_p2828=T;return rlsls2_m2828=((fabs((rlsls2_f2867()-rlsls2_v7318))<rlsls2_v7308)?(fabs((rlsls2_f2870()-rlsls2_v7316))<rlsls2_v7308):NIL);}}
static int rlsls2_f2825(){if (rlsls2_p2825) return rlsls2_m2825; else {rlsls2_p2825=T;return rlsls2_m2825=((rlsls2_v2837=rlsls2_f2837()),((rlsls2_v2837?rlsls2_f3170():(rlsls2_v2837?NIL:T))?((rlsls2_v2828=rlsls2_f2828()),(rlsls2_v2828?rlsls2_f3153():(rlsls2_v2828?NIL:T))):NIL));}}
static double rlsls2_f2822(){if (rlsls2_p2822) return rlsls2_m2822; else {rlsls2_p2822=T;return rlsls2_m2822=atan2((rlsls2_f2870()-rlsls2_v7312),(rlsls2_f2867()-rlsls2_v7314));}}
static double rlsls2_f2799(){if (rlsls2_p2799) return rlsls2_m2799; else {rlsls2_p2799=T;return rlsls2_m2799=(rlsls2_f2822()+(1.5707963267948966));}}
static double rlsls2_f2791(){if (rlsls2_p2791) return rlsls2_m2791; else {rlsls2_p2791=T;return rlsls2_m2791=((rlsls2_v2799=rlsls2_f2799()),(((rlsls2_f3276()*(rlsls2_f2867()+cos(rlsls2_v2799)))+(rlsls2_f3273()*(rlsls2_f2870()+sin(rlsls2_v2799))))-rlsls2_f3263()));}}
static double rlsls2_f2820(){if (rlsls2_p2820) return rlsls2_m2820; else {rlsls2_p2820=T;return rlsls2_m2820=normalize_rotation((rlsls2_f2822()-rlsls2_f6935()));}}
static double rlsls2_f177(){if (rlsls2_p177) return rlsls2_m177; else {rlsls2_p177=T;return rlsls2_m177=(rlsls2_f2314()?(rlsls2_f2270()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v2309=rlsls2_f2309()),((rlsls2_v2820<rlsls2_v2309)?rlsls2_v2820:rlsls2_v2309)):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f171(){if (rlsls2_p171) return rlsls2_m171; else {rlsls2_p171=T;return rlsls2_m171=(rlsls2_f2185()?(rlsls2_f2240()?(rlsls2_f2196()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v2235=rlsls2_f2235()),((rlsls2_v2820<rlsls2_v2235)?rlsls2_v2820:rlsls2_v2235)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f156(){if (rlsls2_p156) return rlsls2_m156; else {rlsls2_p156=T;return rlsls2_m156=((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v1419=rlsls2_f1419()),((rlsls2_v2820<rlsls2_v1419)?rlsls2_v2820:rlsls2_v1419));}}
static double rlsls2_f2819(){if (rlsls2_p2819) return rlsls2_m2819; else {rlsls2_p2819=T;return rlsls2_m2819=normalize_rotation(rlsls2_f2820());}}
static int rlsls2_f2807(){if (rlsls2_p2807) return rlsls2_m2807; else {rlsls2_p2807=T;return rlsls2_m2807=((rlsls2_v2819=rlsls2_f2819()),((fabs((rlsls2_v2819-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2819-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2819-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f2781(){if (rlsls2_p2781) return rlsls2_m2781; else {rlsls2_p2781=T;return rlsls2_m2781=((rlsls2_v2807=rlsls2_f2807()),(rlsls2_v2807?rlsls2_v2807:(((fabs((rlsls2_v7314-rlsls2_f2867()))<rlsls2_v7308)?(fabs((rlsls2_v7312-rlsls2_f2870()))<rlsls2_v7308):NIL)?NIL:((rlsls2_f3108()?NIL:((rlsls2_v2791=rlsls2_f2791()),((fabs((rlsls2_v2791-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v2791>(0.0))?rlsls2_f3094():rlsls2_f3093()))))?NIL:T))));}}
static double rlsls2_f144(){if (rlsls2_p144) return rlsls2_m144; else {rlsls2_p144=T;return rlsls2_m144=(rlsls2_f2825()?(rlsls2_f2781()?(rlsls2_f2090()?(rlsls2_f835()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v572=rlsls2_f572()),((rlsls2_v2820<rlsls2_v572)?rlsls2_v2820:rlsls2_v572)):(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2363()?(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v2154=rlsls2_f2154()),((rlsls2_v2820<rlsls2_v2154)?rlsls2_v2820:rlsls2_v2154)):(rlsls2_f2581()?(rlsls2_f2550()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v2579=rlsls2_f2579()),((rlsls2_v2820<rlsls2_v2579)?rlsls2_v2820:rlsls2_v2579)):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v2128=rlsls2_f2128()),((rlsls2_v2820<rlsls2_v2128)?rlsls2_v2820:rlsls2_v2128)):rlsls2_f177()):rlsls2_f171()):(rlsls2_f2259()?rlsls2_f177():rlsls2_f2665())):(rlsls2_f2333()?rlsls2_f171():rlsls2_f2665()))):rlsls2_f2665()))):(rlsls2_f1409()?(rlsls2_f869()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v845=rlsls2_f845()),((rlsls2_v2820<rlsls2_v845)?rlsls2_v2820:rlsls2_v845)):(rlsls2_f1511()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2820<rlsls2_v1455)?rlsls2_v2820:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f156()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2820<rlsls2_v922)?rlsls2_v2820:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f156())):rlsls2_f2665()))):rlsls2_f2665()):rlsls2_f2665());}}
static double_or_symbol rlsls2_f59(){if (rlsls2_p59) return rlsls2_m59; else {rlsls2_p59=T;return rlsls2_m59=(rlsls2_f2825()?(rlsls2_f2781()?coerce_double_to_double_or_symbol(rlsls2_f2820()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2637(){if (rlsls2_p2637) return rlsls2_m2637; else {rlsls2_p2637=T;return rlsls2_m2637=(rlsls2_f2825()?(rlsls2_f2781()?(rlsls2_f2696()?(rlsls2_f2751()?(rlsls2_f2707()?((rlsls2_v2820=rlsls2_f2820()),(rlsls2_v2746=rlsls2_f2746()),((rlsls2_v2820<rlsls2_v2746)?rlsls2_v2820:rlsls2_v2746)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f227(){if (rlsls2_p227) return rlsls2_m227; else {rlsls2_p227=T;return rlsls2_m227=(rlsls2_f2314()?(rlsls2_f2270()?((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v2309=rlsls2_f2309()),((rlsls2_v2637<rlsls2_v2309)?rlsls2_v2637:rlsls2_v2309)):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f221(){if (rlsls2_p221) return rlsls2_m221; else {rlsls2_p221=T;return rlsls2_m221=(rlsls2_f2185()?(rlsls2_f2240()?(rlsls2_f2196()?((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v2235=rlsls2_f2235()),((rlsls2_v2637<rlsls2_v2235)?rlsls2_v2637:rlsls2_v2235)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f206(){if (rlsls2_p206) return rlsls2_m206; else {rlsls2_p206=T;return rlsls2_m206=((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v1419=rlsls2_f1419()),((rlsls2_v2637<rlsls2_v1419)?rlsls2_v2637:rlsls2_v1419));}}
static int rlsls2_f2780(){if (rlsls2_p2780) return rlsls2_m2780; else {rlsls2_p2780=T;return rlsls2_m2780=(rlsls2_f2825()?rlsls2_f2781():NIL);}}
static double rlsls2_f2775(){if (rlsls2_p2775) return rlsls2_m2775; else {rlsls2_p2775=T;return rlsls2_m2775=(rlsls2_f2825()?(rlsls2_f2781()?rlsls2_f2820():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2778(){if (rlsls2_p2778) return rlsls2_m2778; else {rlsls2_p2778=T;return rlsls2_m2778=(rlsls2_f2825()?(rlsls2_f2781()?rlsls2_f2820():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2777(){if (rlsls2_p2777) return rlsls2_m2777; else {rlsls2_p2777=T;return rlsls2_m2777=(rlsls2_f2778()>(0.0));}}
static int rlsls2_f2770(){if (rlsls2_p2770) return rlsls2_m2770; else {rlsls2_p2770=T;return rlsls2_m2770=(rlsls2_f2780()?((rlsls2_v2777=rlsls2_f2777()),(rlsls2_v2777?rlsls2_v2777:(fabs((rlsls2_f2775()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f3225(){if (rlsls2_p3225) return rlsls2_m3225; else {rlsls2_p3225=T;return rlsls2_m3225=(rlsls2_f7211()-rlsls2_f3226());}}
static int rlsls2_f3224(){if (rlsls2_p3224) return rlsls2_m3224; else {rlsls2_p3224=T;return rlsls2_m3224=(rlsls2_f3225()<0.0);}}
static double rlsls2_f3065(){if (rlsls2_p3065) return rlsls2_m3065; else {rlsls2_p3065=T;return rlsls2_m3065=sqrt(rlsls2_f3225());}}
static double rlsls2_f3051(){if (rlsls2_p3051) return rlsls2_m3051; else {rlsls2_p3051=T;return rlsls2_m3051=((-rlsls2_f3065())+rlsls2_v7314);}}
static int rlsls2_f3043(){if (rlsls2_p3043) return rlsls2_m3043; else {rlsls2_p3043=T;return rlsls2_m3043=((rlsls2_v3051=rlsls2_f3051()),((fabs((((rlsls2_f3276()*rlsls2_v3051)+rlsls2_f3061())-rlsls2_f3263()))<rlsls2_v7308)?(((rlsls2_f7117()<=rlsls2_v3051)&&(rlsls2_v3051<=rlsls2_f7115()))?rlsls2_f3055():NIL):NIL));}}
static int rlsls2_f2965(){if (rlsls2_p2965) return rlsls2_m2965; else {rlsls2_p2965=T;return rlsls2_m2965=((fabs((rlsls2_f3051()-rlsls2_v7322))<rlsls2_v7308)?rlsls2_f3037():NIL);}}
static int rlsls2_f2959(){if (rlsls2_p2959) return rlsls2_m2959; else {rlsls2_p2959=T;return rlsls2_m2959=((fabs((rlsls2_f3051()-rlsls2_v7318))<rlsls2_v7308)?rlsls2_f3028():NIL);}}
static int rlsls2_f2956(){if (rlsls2_p2956) return rlsls2_m2956; else {rlsls2_p2956=T;return rlsls2_m2956=((rlsls2_v2965=rlsls2_f2965()),((rlsls2_v2965?rlsls2_f3170():(rlsls2_v2965?NIL:T))?((rlsls2_v2959=rlsls2_f2959()),(rlsls2_v2959?rlsls2_f3153():(rlsls2_v2959?NIL:T))):NIL));}}
static double rlsls2_f2954(){if (rlsls2_p2954) return rlsls2_m2954; else {rlsls2_p2954=T;return rlsls2_m2954=atan2(rlsls2_f3023(),(rlsls2_f3051()-rlsls2_v7314));}}
static double rlsls2_f2934(){if (rlsls2_p2934) return rlsls2_m2934; else {rlsls2_p2934=T;return rlsls2_m2934=(rlsls2_f2954()+(1.5707963267948966));}}
static double rlsls2_f2926(){if (rlsls2_p2926) return rlsls2_m2926; else {rlsls2_p2926=T;return rlsls2_m2926=((rlsls2_v2934=rlsls2_f2934()),(((rlsls2_f3276()*(rlsls2_f3051()+cos(rlsls2_v2934)))+(rlsls2_f3273()*(rlsls2_f3062()+sin(rlsls2_v2934))))-rlsls2_f3263()));}}
static double rlsls2_f2952(){if (rlsls2_p2952) return rlsls2_m2952; else {rlsls2_p2952=T;return rlsls2_m2952=normalize_rotation((rlsls2_f2954()-rlsls2_f6935()));}}
static double rlsls2_f337(){if (rlsls2_p337) return rlsls2_m337; else {rlsls2_p337=T;return rlsls2_m337=(rlsls2_f2501()?(rlsls2_f2461()?((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v2497=rlsls2_f2497()),((rlsls2_v2952<rlsls2_v2497)?rlsls2_v2952:rlsls2_v2497)):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f331(){if (rlsls2_p331) return rlsls2_m331; else {rlsls2_p331=T;return rlsls2_m331=(rlsls2_f2386()?(rlsls2_f2437()?(rlsls2_f2397()?((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v2433=rlsls2_f2433()),((rlsls2_v2952<rlsls2_v2433)?rlsls2_v2952:rlsls2_v2433)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f316(){if (rlsls2_p316) return rlsls2_m316; else {rlsls2_p316=T;return rlsls2_m316=((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v1419=rlsls2_f1419()),((rlsls2_v2952<rlsls2_v1419)?rlsls2_v2952:rlsls2_v1419));}}
static double rlsls2_f2951(){if (rlsls2_p2951) return rlsls2_m2951; else {rlsls2_p2951=T;return rlsls2_m2951=normalize_rotation(rlsls2_f2952());}}
static int rlsls2_f2939(){if (rlsls2_p2939) return rlsls2_m2939; else {rlsls2_p2939=T;return rlsls2_m2939=((rlsls2_v2951=rlsls2_f2951()),((fabs((rlsls2_v2951-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2951-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v2951-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f2916(){if (rlsls2_p2916) return rlsls2_m2916; else {rlsls2_p2916=T;return rlsls2_m2916=((rlsls2_v2939=rlsls2_f2939()),(rlsls2_v2939?rlsls2_v2939:(((fabs((rlsls2_v7314-rlsls2_f3051()))<rlsls2_v7308)?rlsls2_f3000():NIL)?NIL:((rlsls2_f3108()?NIL:((rlsls2_v2926=rlsls2_f2926()),((fabs((rlsls2_v2926-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v2926>(0.0))?rlsls2_f3094():rlsls2_f3093()))))?NIL:T))));}}
static int rlsls2_f2915(){if (rlsls2_p2915) return rlsls2_m2915; else {rlsls2_p2915=T;return rlsls2_m2915=(rlsls2_f2956()?rlsls2_f2916():NIL);}}
static double rlsls2_f2910(){if (rlsls2_p2910) return rlsls2_m2910; else {rlsls2_p2910=T;return rlsls2_m2910=(rlsls2_f2956()?(rlsls2_f2916()?rlsls2_f2952():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2913(){if (rlsls2_p2913) return rlsls2_m2913; else {rlsls2_p2913=T;return rlsls2_m2913=(rlsls2_f2956()?(rlsls2_f2916()?rlsls2_f2952():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2912(){if (rlsls2_p2912) return rlsls2_m2912; else {rlsls2_p2912=T;return rlsls2_m2912=(rlsls2_f2913()>(0.0));}}
static int rlsls2_f2905(){if (rlsls2_p2905) return rlsls2_m2905; else {rlsls2_p2905=T;return rlsls2_m2905=(rlsls2_f2915()?((rlsls2_v2912=rlsls2_f2912()),(rlsls2_v2912?rlsls2_v2912:(fabs((rlsls2_f2910()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f303(){if (rlsls2_p303) return rlsls2_m303; else {rlsls2_p303=T;return rlsls2_m303=(rlsls2_f2905()?(rlsls2_f2956()?(rlsls2_f2916()?(rlsls2_f2090()?(rlsls2_f835()?((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v572=rlsls2_f572()),((rlsls2_v2952<rlsls2_v572)?rlsls2_v2952:rlsls2_v572)):(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2586()?(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v2154=rlsls2_f2154()),((rlsls2_v2952<rlsls2_v2154)?rlsls2_v2952:rlsls2_v2154)):(rlsls2_f2581()?(rlsls2_f2550()?((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v2579=rlsls2_f2579()),((rlsls2_v2952<rlsls2_v2579)?rlsls2_v2952:rlsls2_v2579)):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v2142=rlsls2_f2142()),((rlsls2_v2952<rlsls2_v2142)?rlsls2_v2952:rlsls2_v2142)):rlsls2_f337()):rlsls2_f331()):(rlsls2_f2450()?rlsls2_f337():rlsls2_f2665())):(rlsls2_f2514()?rlsls2_f331():rlsls2_f2665()))):rlsls2_f2665()))):(rlsls2_f1409()?(rlsls2_f869()?((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v845=rlsls2_f845()),((rlsls2_v2952<rlsls2_v845)?rlsls2_v2952:rlsls2_v845)):(rlsls2_f1511()?((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2952<rlsls2_v1455)?rlsls2_v2952:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f316()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2952=rlsls2_f2952()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2952<rlsls2_v922)?rlsls2_v2952:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f316())):rlsls2_f2665()))):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double_or_symbol rlsls2_f67(){if (rlsls2_p67) return rlsls2_m67; else {rlsls2_p67=T;return rlsls2_m67=(rlsls2_f2905()?(rlsls2_f2956()?(rlsls2_f2916()?coerce_double_to_double_or_symbol(rlsls2_f2952()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2901(){if (rlsls2_p2901) return rlsls2_m2901; else {rlsls2_p2901=T;return rlsls2_m2901=(rlsls2_f2905()?rlsls2_f2910():rlsls2_f3078());}}
static double rlsls2_f2903(){if (rlsls2_p2903) return rlsls2_m2903; else {rlsls2_p2903=T;return rlsls2_m2903=(rlsls2_f2905()?rlsls2_f2913():rlsls2_f3083());}}
static int rlsls2_f2902(){if (rlsls2_p2902) return rlsls2_m2902; else {rlsls2_p2902=T;return rlsls2_m2902=(rlsls2_f2903()>(0.0));}}
static int rlsls2_f2904(){if (rlsls2_p2904) return rlsls2_m2904; else {rlsls2_p2904=T;return rlsls2_m2904=(rlsls2_f2905()?rlsls2_f2915():NIL);}}
static int rlsls2_f2896(){if (rlsls2_p2896) return rlsls2_m2896; else {rlsls2_p2896=T;return rlsls2_m2896=(rlsls2_f2904()?((rlsls2_v2902=rlsls2_f2902()),(rlsls2_v2902?rlsls2_v2902:(fabs((rlsls2_f2901()-(0.0)))<rlsls2_v7308))):NIL);}}
static double rlsls2_f3064(){if (rlsls2_p3064) return rlsls2_m3064; else {rlsls2_p3064=T;return rlsls2_m3064=(rlsls2_f3065()+rlsls2_v7314);}}
static int rlsls2_f3053(){if (rlsls2_p3053) return rlsls2_m3053; else {rlsls2_p3053=T;return rlsls2_m3053=((rlsls2_v3064=rlsls2_f3064()),((fabs((((rlsls2_f3276()*rlsls2_v3064)+rlsls2_f3061())-rlsls2_f3263()))<rlsls2_v7308)?(((rlsls2_f7117()<=rlsls2_v3064)&&(rlsls2_v3064<=rlsls2_f7115()))?rlsls2_f3055():NIL):NIL));}}
static int rlsls2_f3036(){if (rlsls2_p3036) return rlsls2_m3036; else {rlsls2_p3036=T;return rlsls2_m3036=((fabs((rlsls2_f3064()-rlsls2_v7322))<rlsls2_v7308)?rlsls2_f3037():NIL);}}
static int rlsls2_f3027(){if (rlsls2_p3027) return rlsls2_m3027; else {rlsls2_p3027=T;return rlsls2_m3027=((fabs((rlsls2_f3064()-rlsls2_v7318))<rlsls2_v7308)?rlsls2_f3028():NIL);}}
static int rlsls2_f3024(){if (rlsls2_p3024) return rlsls2_m3024; else {rlsls2_p3024=T;return rlsls2_m3024=((rlsls2_v3036=rlsls2_f3036()),((rlsls2_v3036?rlsls2_f3170():(rlsls2_v3036?NIL:T))?((rlsls2_v3027=rlsls2_f3027()),(rlsls2_v3027?rlsls2_f3153():(rlsls2_v3027?NIL:T))):NIL));}}
static double rlsls2_f3021(){if (rlsls2_p3021) return rlsls2_m3021; else {rlsls2_p3021=T;return rlsls2_m3021=atan2(rlsls2_f3023(),(rlsls2_f3064()-rlsls2_v7314));}}
static double rlsls2_f2998(){if (rlsls2_p2998) return rlsls2_m2998; else {rlsls2_p2998=T;return rlsls2_m2998=(rlsls2_f3021()+(1.5707963267948966));}}
static double rlsls2_f2990(){if (rlsls2_p2990) return rlsls2_m2990; else {rlsls2_p2990=T;return rlsls2_m2990=((rlsls2_v2998=rlsls2_f2998()),(((rlsls2_f3276()*(rlsls2_f3064()+cos(rlsls2_v2998)))+(rlsls2_f3273()*(rlsls2_f3062()+sin(rlsls2_v2998))))-rlsls2_f3263()));}}
static double rlsls2_f3019(){if (rlsls2_p3019) return rlsls2_m3019; else {rlsls2_p3019=T;return rlsls2_m3019=normalize_rotation((rlsls2_f3021()-rlsls2_f6935()));}}
static double rlsls2_f390(){if (rlsls2_p390) return rlsls2_m390; else {rlsls2_p390=T;return rlsls2_m390=(rlsls2_f2501()?(rlsls2_f2461()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v2497=rlsls2_f2497()),((rlsls2_v3019<rlsls2_v2497)?rlsls2_v3019:rlsls2_v2497)):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f384(){if (rlsls2_p384) return rlsls2_m384; else {rlsls2_p384=T;return rlsls2_m384=(rlsls2_f2386()?(rlsls2_f2437()?(rlsls2_f2397()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v2433=rlsls2_f2433()),((rlsls2_v3019<rlsls2_v2433)?rlsls2_v3019:rlsls2_v2433)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f369(){if (rlsls2_p369) return rlsls2_m369; else {rlsls2_p369=T;return rlsls2_m369=((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v1419=rlsls2_f1419()),((rlsls2_v3019<rlsls2_v1419)?rlsls2_v3019:rlsls2_v1419));}}
static double rlsls2_f3018(){if (rlsls2_p3018) return rlsls2_m3018; else {rlsls2_p3018=T;return rlsls2_m3018=normalize_rotation(rlsls2_f3019());}}
static int rlsls2_f3006(){if (rlsls2_p3006) return rlsls2_m3006; else {rlsls2_p3006=T;return rlsls2_m3006=((rlsls2_v3018=rlsls2_f3018()),((fabs((rlsls2_v3018-(0.0)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v3018-(-6.283185307179586)))<rlsls2_v7308)?NIL:((fabs((rlsls2_v3018-(6.283185307179586)))<rlsls2_v7308)?NIL:T))));}}
static int rlsls2_f2980(){if (rlsls2_p2980) return rlsls2_m2980; else {rlsls2_p2980=T;return rlsls2_m2980=((rlsls2_v3006=rlsls2_f3006()),(rlsls2_v3006?rlsls2_v3006:(((fabs((rlsls2_v7314-rlsls2_f3064()))<rlsls2_v7308)?rlsls2_f3000():NIL)?NIL:((rlsls2_f3108()?NIL:((rlsls2_v2990=rlsls2_f2990()),((fabs((rlsls2_v2990-(0.0)))<rlsls2_v7308)?NIL:((rlsls2_v2990>(0.0))?rlsls2_f3094():rlsls2_f3093()))))?NIL:T))));}}
static double rlsls2_f357(){if (rlsls2_p357) return rlsls2_m357; else {rlsls2_p357=T;return rlsls2_m357=(rlsls2_f3024()?(rlsls2_f2980()?(rlsls2_f2090()?(rlsls2_f835()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v572=rlsls2_f572()),((rlsls2_v3019<rlsls2_v572)?rlsls2_v3019:rlsls2_v572)):(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2586()?(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v2154=rlsls2_f2154()),((rlsls2_v3019<rlsls2_v2154)?rlsls2_v3019:rlsls2_v2154)):(rlsls2_f2581()?(rlsls2_f2550()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v2579=rlsls2_f2579()),((rlsls2_v3019<rlsls2_v2579)?rlsls2_v3019:rlsls2_v2579)):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v2142=rlsls2_f2142()),((rlsls2_v3019<rlsls2_v2142)?rlsls2_v3019:rlsls2_v2142)):rlsls2_f390()):rlsls2_f384()):(rlsls2_f2450()?rlsls2_f390():rlsls2_f2665())):(rlsls2_f2514()?rlsls2_f384():rlsls2_f2665()))):rlsls2_f2665()))):(rlsls2_f1409()?(rlsls2_f869()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v845=rlsls2_f845()),((rlsls2_v3019<rlsls2_v845)?rlsls2_v3019:rlsls2_v845)):(rlsls2_f1511()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v3019<rlsls2_v1455)?rlsls2_v3019:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f369()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v3019<rlsls2_v922)?rlsls2_v3019:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f369())):rlsls2_f2665()))):rlsls2_f2665()):rlsls2_f2665());}}
static double_or_symbol rlsls2_f71(){if (rlsls2_p71) return rlsls2_m71; else {rlsls2_p71=T;return rlsls2_m71=(rlsls2_f3024()?(rlsls2_f2980()?coerce_double_to_double_or_symbol(rlsls2_f3019()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2651(){if (rlsls2_p2651) return rlsls2_m2651; else {rlsls2_p2651=T;return rlsls2_m2651=(rlsls2_f3024()?(rlsls2_f2980()?(rlsls2_f2905()?(rlsls2_f2956()?(rlsls2_f2916()?((rlsls2_v3019=rlsls2_f3019()),(rlsls2_v2952=rlsls2_f2952()),((rlsls2_v3019<rlsls2_v2952)?rlsls2_v3019:rlsls2_v2952)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f440(){if (rlsls2_p440) return rlsls2_m440; else {rlsls2_p440=T;return rlsls2_m440=(rlsls2_f2501()?(rlsls2_f2461()?((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v2497=rlsls2_f2497()),((rlsls2_v2651<rlsls2_v2497)?rlsls2_v2651:rlsls2_v2497)):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f434(){if (rlsls2_p434) return rlsls2_m434; else {rlsls2_p434=T;return rlsls2_m434=(rlsls2_f2386()?(rlsls2_f2437()?(rlsls2_f2397()?((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v2433=rlsls2_f2433()),((rlsls2_v2651<rlsls2_v2433)?rlsls2_v2651:rlsls2_v2433)):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665());}}
static double rlsls2_f419(){if (rlsls2_p419) return rlsls2_m419; else {rlsls2_p419=T;return rlsls2_m419=((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v1419=rlsls2_f1419()),((rlsls2_v2651<rlsls2_v1419)?rlsls2_v2651:rlsls2_v1419));}}
static int rlsls2_f2979(){if (rlsls2_p2979) return rlsls2_m2979; else {rlsls2_p2979=T;return rlsls2_m2979=(rlsls2_f3024()?rlsls2_f2980():NIL);}}
static double rlsls2_f2974(){if (rlsls2_p2974) return rlsls2_m2974; else {rlsls2_p2974=T;return rlsls2_m2974=(rlsls2_f3024()?(rlsls2_f2980()?rlsls2_f3019():rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2977(){if (rlsls2_p2977) return rlsls2_m2977; else {rlsls2_p2977=T;return rlsls2_m2977=(rlsls2_f3024()?(rlsls2_f2980()?rlsls2_f3019():rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f2976(){if (rlsls2_p2976) return rlsls2_m2976; else {rlsls2_p2976=T;return rlsls2_m2976=(rlsls2_f2977()>(0.0));}}
static int rlsls2_f2969(){if (rlsls2_p2969) return rlsls2_m2969; else {rlsls2_p2969=T;return rlsls2_m2969=(rlsls2_f2979()?((rlsls2_v2976=rlsls2_f2976()),(rlsls2_v2976?rlsls2_v2976:(fabs((rlsls2_f2974()-(0.0)))<rlsls2_v7308))):NIL);}}
static int rlsls2_f3242(){if (rlsls2_p3242) return rlsls2_m3242; else {rlsls2_p3242=T;return rlsls2_m3242=(fabs((rlsls2_f3245()-rlsls2_f7235()))<rlsls2_v7308);}}
static double_or_symbol rlsls2_f73(){if (rlsls2_p73) return rlsls2_m73; else {rlsls2_p73=T;return rlsls2_m73=(rlsls2_f3242()?(rlsls2_f3198()?(rlsls2_f3185()?((rlsls2_v3071=rlsls2_f3071()),(rlsls2_v3071?(rlsls2_f2667()?coerce_double_to_double_or_symbol(rlsls2_f2663()):rlsls2_f79()):(rlsls2_v3071?rlsls2_f79():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls2_f2621(){if (rlsls2_p2621) return rlsls2_m2621; else {rlsls2_p2621=T;return rlsls2_m2621=(rlsls2_f3242()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f3071()?(rlsls2_f2667()?rlsls2_f2663():rlsls2_f3076()):rlsls2_f2672()):rlsls2_f3078()):rlsls2_f3078()):rlsls2_f3078());}}
static double rlsls2_f2658(){if (rlsls2_p2658) return rlsls2_m2658; else {rlsls2_p2658=T;return rlsls2_m2658=(rlsls2_f3242()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f3071()?(rlsls2_f2667()?rlsls2_f2663():rlsls2_f3081()):rlsls2_f2674()):rlsls2_f3083()):rlsls2_f3083()):rlsls2_f3083());}}
static int rlsls2_f3233(){if (rlsls2_p3233) return rlsls2_m3233; else {rlsls2_p3233=T;return rlsls2_m3233=((rlsls2_v3242=rlsls2_f3242()),(rlsls2_v3242?rlsls2_f3236():(rlsls2_v3242?NIL:T)));}}
static int rlsls2_f2626(){if (rlsls2_p2626) return rlsls2_m2626; else {rlsls2_p2626=T;return rlsls2_m2626=((rlsls2_v3282?rlsls2_f3083():(rlsls2_f3233()?(rlsls2_f3232()?(rlsls2_f3224()?rlsls2_f2658():(rlsls2_f3053()?(rlsls2_f3043()?(rlsls2_f2969()?(rlsls2_f2896()?rlsls2_f2651():rlsls2_f2977()):rlsls2_f2903()):(rlsls2_f2969()?rlsls2_f2977():rlsls2_f3083())):(rlsls2_f3043()?rlsls2_f2903():rlsls2_f3083()))):(rlsls2_f2877()?rlsls2_f2658():(rlsls2_f2858()?(rlsls2_f2844()?(rlsls2_f2770()?(rlsls2_f2687()?rlsls2_f2637():rlsls2_f2778()):rlsls2_f2694()):(rlsls2_f2770()?rlsls2_f2778():rlsls2_f3083())):(rlsls2_f2844()?rlsls2_f2694():rlsls2_f3083())))):rlsls2_f3083()))>(0.0));}}
static int rlsls2_f3066(){if (rlsls2_p3066) return rlsls2_m3066; else {rlsls2_p3066=T;return rlsls2_m3066=(rlsls2_f3242()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f3071()?rlsls2_f3085():rlsls2_f3070()):NIL):NIL):NIL);}}
void rlsls2(rlsls2_a7330,rlsls2_a7328,rlsls2_a7326,rlsls2_a7324,rlsls2_a7322,rlsls2_a7320,rlsls2_a7318,rlsls2_a7316,rlsls2_a7314,rlsls2_a7312,rlsls2_a7308)
double rlsls2_a7330;
double rlsls2_a7328;
double rlsls2_a7326;
double rlsls2_a7324;
double rlsls2_a7322;
double rlsls2_a7320;
double rlsls2_a7318;
double rlsls2_a7316;
double rlsls2_a7314;
double rlsls2_a7312;
double rlsls2_a7308;
{ rlsls2_v7330=rlsls2_a7330;
  rlsls2_v7328=rlsls2_a7328;
  rlsls2_v7326=rlsls2_a7326;
  rlsls2_v7324=rlsls2_a7324;
  rlsls2_v7322=rlsls2_a7322;
  rlsls2_v7320=rlsls2_a7320;
  rlsls2_v7318=rlsls2_a7318;
  rlsls2_v7316=rlsls2_a7316;
  rlsls2_v7314=rlsls2_a7314;
  rlsls2_v7312=rlsls2_a7312;
  rlsls2_v7308=rlsls2_a7308;
  rlsls2_p4788=NIL;
  rlsls2_p1507=NIL;
  rlsls2_p1509=NIL;
  rlsls2_p1419=NIL;
  rlsls2_p5522=NIL;
  rlsls2_p5675=NIL;
  rlsls2_p5673=NIL;
  rlsls2_p5666=NIL;
  rlsls2_p5664=NIL;
  rlsls2_p6280=NIL;
  rlsls2_p6438=NIL;
  rlsls2_p5833=NIL;
  rlsls2_p6437=NIL;
  rlsls2_p5831=NIL;
  rlsls2_p6461=NIL;
  rlsls2_p6458=NIL;
  rlsls2_p2598=NIL;
  rlsls2_p6432=NIL;
  rlsls2_p2594=NIL;
  rlsls2_p2590=NIL;
  rlsls2_p1984=NIL;
  rlsls2_p6446=NIL;
  rlsls2_p2665=NIL;
  rlsls2_p3078=NIL;
  rlsls2_p3083=NIL;
  rlsls2_p6935=NIL;
  rlsls2_p3148=NIL;
  rlsls2_p3144=NIL;
  rlsls2_p6984=NIL;
  rlsls2_p6983=NIL;
  rlsls2_p2089=NIL;
  rlsls2_p5783=NIL;
  rlsls2_p6959=NIL;
  rlsls2_p6958=NIL;
  rlsls2_p1408=NIL;
  rlsls2_p4942=NIL;
  rlsls2_p7117=NIL;
  rlsls2_p7115=NIL;
  rlsls2_p7108=NIL;
  rlsls2_p7106=NIL;
  rlsls2_p7229=NIL;
  rlsls2_p5829=NIL;
  rlsls2_p3265=NIL;
  rlsls2_p3280=NIL;
  rlsls2_p2076=NIL;
  rlsls2_p2087=NIL;
  rlsls2_p2052=NIL;
  rlsls2_p2074=NIL;
  rlsls2_p2086=NIL;
  rlsls2_p2084=NIL;
  rlsls2_p1377=NIL;
  rlsls2_p1374=NIL;
  rlsls2_p1373=NIL;
  rlsls2_p1372=NIL;
  rlsls2_p1892=NIL;
  rlsls2_p1867=NIL;
  rlsls2_p1858=NIL;
  rlsls2_p1830=NIL;
  rlsls2_p1853=NIL;
  rlsls2_p1885=NIL;
  rlsls2_p1891=NIL;
  rlsls2_p1947=NIL;
  rlsls2_p1944=NIL;
  rlsls2_p1929=NIL;
  rlsls2_p1928=NIL;
  rlsls2_p2043=NIL;
  rlsls2_p2041=NIL;
  rlsls2_p2047=NIL;
  rlsls2_p1716=NIL;
  rlsls2_p1709=NIL;
  rlsls2_p2049=NIL;
  rlsls2_p1718=NIL;
  rlsls2_p1708=NIL;
  rlsls2_p1717=NIL;
  rlsls2_p2048=NIL;
  rlsls2_p2046=NIL;
  rlsls2_p2073=NIL;
  rlsls2_p2072=NIL;
  rlsls2_p2031=NIL;
  rlsls2_p2029=NIL;
  rlsls2_p2083=NIL;
  rlsls2_p2039=NIL;
  rlsls2_p2037=NIL;
  rlsls2_p2017=NIL;
  rlsls2_p2034=NIL;
  rlsls2_p1977=NIL;
  rlsls2_p2023=NIL;
  rlsls2_p2015=NIL;
  rlsls2_p2005=NIL;
  rlsls2_p1951=NIL;
  rlsls2_p1979=NIL;
  rlsls2_p1975=NIL;
  rlsls2_p1394=NIL;
  rlsls2_p1393=NIL;
  rlsls2_p1381=NIL;
  rlsls2_p1942=NIL;
  rlsls2_p1934=NIL;
  rlsls2_p1931=NIL;
  rlsls2_p1930=NIL;
  rlsls2_p1973=NIL;
  rlsls2_p1972=NIL;
  rlsls2_p1960=NIL;
  rlsls2_p1997=NIL;
  rlsls2_p1994=NIL;
  rlsls2_p1985=NIL;
  rlsls2_p1982=NIL;
  rlsls2_p2019=NIL;
  rlsls2_p2018=NIL;
  rlsls2_p1959=NIL;
  rlsls2_p1365=NIL;
  rlsls2_p1921=NIL;
  rlsls2_p2081=NIL;
  rlsls2_p2068=NIL;
  rlsls2_p2062=NIL;
  rlsls2_p2058=NIL;
  rlsls2_p7293=NIL;
  rlsls2_p7291=NIL;
  rlsls2_p7288=NIL;
  rlsls2_p6979=NIL;
  rlsls2_p3176=NIL;
  rlsls2_p3172=NIL;
  rlsls2_p1983=NIL;
  rlsls2_p3171=NIL;
  rlsls2_p2585=NIL;
  rlsls2_p7296=NIL;
  rlsls2_p6954=NIL;
  rlsls2_p3159=NIL;
  rlsls2_p3155=NIL;
  rlsls2_p1398=NIL;
  rlsls2_p3154=NIL;
  rlsls2_p2583=NIL;
  rlsls2_p7294=NIL;
  rlsls2_p3276=NIL;
  rlsls2_p3232=NIL;
  rlsls2_p3261=NIL;
  rlsls2_p3275=NIL;
  rlsls2_p7287=NIL;
  rlsls2_p3263=NIL;
  rlsls2_p3273=NIL;
  rlsls2_p2562=NIL;
  rlsls2_p2559=NIL;
  rlsls2_p2558=NIL;
  rlsls2_p2557=NIL;
  rlsls2_p3062=NIL;
  rlsls2_p3037=NIL;
  rlsls2_p3028=NIL;
  rlsls2_p3000=NIL;
  rlsls2_p3023=NIL;
  rlsls2_p3055=NIL;
  rlsls2_p3061=NIL;
  rlsls2_p3111=NIL;
  rlsls2_p3108=NIL;
  rlsls2_p3094=NIL;
  rlsls2_p3093=NIL;
  rlsls2_p3223=NIL;
  rlsls2_p3221=NIL;
  rlsls2_p3227=NIL;
  rlsls2_p2882=NIL;
  rlsls2_p2875=NIL;
  rlsls2_p3229=NIL;
  rlsls2_p2885=NIL;
  rlsls2_p2874=NIL;
  rlsls2_p2884=NIL;
  rlsls2_p3228=NIL;
  rlsls2_p3226=NIL;
  rlsls2_p3260=NIL;
  rlsls2_p3259=NIL;
  rlsls2_p3211=NIL;
  rlsls2_p3209=NIL;
  rlsls2_p3272=NIL;
  rlsls2_p3219=NIL;
  rlsls2_p3217=NIL;
  rlsls2_p3197=NIL;
  rlsls2_p3214=NIL;
  rlsls2_p3143=NIL;
  rlsls2_p3203=NIL;
  rlsls2_p3195=NIL;
  rlsls2_p3185=NIL;
  rlsls2_p3115=NIL;
  rlsls2_p3147=NIL;
  rlsls2_p3141=NIL;
  rlsls2_p2579=NIL;
  rlsls2_p817=NIL;
  rlsls2_p689=NIL;
  rlsls2_p2578=NIL;
  rlsls2_p2566=NIL;
  rlsls2_p3107=NIL;
  rlsls2_p3099=NIL;
  rlsls2_p3096=NIL;
  rlsls2_p3095=NIL;
  rlsls2_p3139=NIL;
  rlsls2_p476=NIL;
  rlsls2_p3138=NIL;
  rlsls2_p3124=NIL;
  rlsls2_p3177=NIL;
  rlsls2_p3169=NIL;
  rlsls2_p3160=NIL;
  rlsls2_p3152=NIL;
  rlsls2_p2581=NIL;
  rlsls2_p3199=NIL;
  rlsls2_p3198=NIL;
  rlsls2_p3123=NIL;
  rlsls2_p2550=NIL;
  rlsls2_p43=NIL;
  rlsls2_p2154=NIL;
  rlsls2_p830=NIL;
  rlsls2_p701=NIL;
  rlsls2_p2549=NIL;
  rlsls2_p829=NIL;
  rlsls2_p2544=NIL;
  rlsls2_p2547=NIL;
  rlsls2_p2546=NIL;
  rlsls2_p2539=NIL;
  rlsls2_p2161=NIL;
  rlsls2_p2163=NIL;
  rlsls2_p2162=NIL;
  rlsls2_p2538=NIL;
  rlsls2_p2156=NIL;
  rlsls2_p3086=NIL;
  rlsls2_p3270=NIL;
  rlsls2_p3255=NIL;
  rlsls2_p3249=NIL;
  rlsls2_p3245=NIL;
  rlsls2_p7305=NIL;
  rlsls2_p7224=NIL;
  rlsls2_p3240=NIL;
  rlsls2_p3236=NIL;
  rlsls2_p1996=NIL;
  rlsls2_p1400=NIL;
  rlsls2_p1396=NIL;
  rlsls2_p970=NIL;
  rlsls2_p1364=NIL;
  rlsls2_p1359=NIL;
  rlsls2_p1362=NIL;
  rlsls2_p1361=NIL;
  rlsls2_p1354=NIL;
  rlsls2_p1351=NIL;
  rlsls2_p1345=NIL;
  rlsls2_p1995=NIL;
  rlsls2_p1980=NIL;
  rlsls2_p1503=NIL;
  rlsls2_p1920=NIL;
  rlsls2_p1915=NIL;
  rlsls2_p1918=NIL;
  rlsls2_p1917=NIL;
  rlsls2_p1910=NIL;
  rlsls2_p1907=NIL;
  rlsls2_p1901=NIL;
  rlsls2_p3170=NIL;
  rlsls2_p3153=NIL;
  rlsls2_p3150=NIL;
  rlsls2_p79=NIL;
  rlsls2_p2663=NIL;
  rlsls2_p524=NIL;
  rlsls2_p3085=NIL;
  rlsls2_p3076=NIL;
  rlsls2_p3081=NIL;
  rlsls2_p3080=NIL;
  rlsls2_p3071=NIL;
  rlsls2_p2672=NIL;
  rlsls2_p2674=NIL;
  rlsls2_p2673=NIL;
  rlsls2_p3070=NIL;
  rlsls2_p2667=NIL;
  rlsls2_p7240=NIL;
  rlsls2_p7238=NIL;
  rlsls2_p7237=NIL;
  rlsls2_p4939=NIL;
  rlsls2_p4931=NIL;
  rlsls2_p1172=NIL;
  rlsls2_p1171=NIL;
  rlsls2_p1169=NIL;
  rlsls2_p1153=NIL;
  rlsls2_p1152=NIL;
  rlsls2_p1150=NIL;
  rlsls2_p1141=NIL;
  rlsls2_p1060=NIL;
  rlsls2_p1051=NIL;
  rlsls2_p1048=NIL;
  rlsls2_p1045=NIL;
  rlsls2_p1022=NIL;
  rlsls2_p1014=NIL;
  rlsls2_p1043=NIL;
  rlsls2_p1042=NIL;
  rlsls2_p1030=NIL;
  rlsls2_p1004=NIL;
  rlsls2_p1003=NIL;
  rlsls2_p998=NIL;
  rlsls2_p1001=NIL;
  rlsls2_p1000=NIL;
  rlsls2_p993=NIL;
  rlsls2_p932=NIL;
  rlsls2_p897=NIL;
  rlsls2_p990=NIL;
  rlsls2_p992=NIL;
  rlsls2_p984=NIL;
  rlsls2_p1167=NIL;
  rlsls2_p1166=NIL;
  rlsls2_p1164=NIL;
  rlsls2_p1155=NIL;
  rlsls2_p1134=NIL;
  rlsls2_p1125=NIL;
  rlsls2_p1122=NIL;
  rlsls2_p1119=NIL;
  rlsls2_p1096=NIL;
  rlsls2_p1088=NIL;
  rlsls2_p1117=NIL;
  rlsls2_p1116=NIL;
  rlsls2_p1104=NIL;
  rlsls2_p1078=NIL;
  rlsls2_p936=NIL;
  rlsls2_p901=NIL;
  rlsls2_p1077=NIL;
  rlsls2_p1074=NIL;
  rlsls2_p1067=NIL;
  rlsls2_p1402=NIL;
  rlsls2_p1401=NIL;
  rlsls2_p1339=NIL;
  rlsls2_p1328=NIL;
  rlsls2_p1320=NIL;
  rlsls2_p1252=NIL;
  rlsls2_p1246=NIL;
  rlsls2_p1243=NIL;
  rlsls2_p1241=NIL;
  rlsls2_p1221=NIL;
  rlsls2_p1213=NIL;
  rlsls2_p1239=NIL;
  rlsls2_p1238=NIL;
  rlsls2_p1226=NIL;
  rlsls2_p1203=NIL;
  rlsls2_p1202=NIL;
  rlsls2_p1197=NIL;
  rlsls2_p1200=NIL;
  rlsls2_p1199=NIL;
  rlsls2_p1192=NIL;
  rlsls2_p951=NIL;
  rlsls2_p909=NIL;
  rlsls2_p1189=NIL;
  rlsls2_p1191=NIL;
  rlsls2_p1183=NIL;
  rlsls2_p1338=NIL;
  rlsls2_p1330=NIL;
  rlsls2_p1316=NIL;
  rlsls2_p1310=NIL;
  rlsls2_p1307=NIL;
  rlsls2_p1305=NIL;
  rlsls2_p1285=NIL;
  rlsls2_p1277=NIL;
  rlsls2_p1303=NIL;
  rlsls2_p1302=NIL;
  rlsls2_p1290=NIL;
  rlsls2_p1267=NIL;
  rlsls2_p955=NIL;
  rlsls2_p913=NIL;
  rlsls2_p1266=NIL;
  rlsls2_p1263=NIL;
  rlsls2_p1256=NIL;
  rlsls2_p1405=NIL;
  rlsls2_p964=NIL;
  rlsls2_p915=NIL;
  rlsls2_p1403=NIL;
  rlsls2_p922=NIL;
  rlsls2_p825=NIL;
  rlsls2_p864=NIL;
  rlsls2_p888=NIL;
  rlsls2_p1340=NIL;
  rlsls2_p974=NIL;
  rlsls2_p883=NIL;
  rlsls2_p886=NIL;
  rlsls2_p885=NIL;
  rlsls2_p878=NIL;
  rlsls2_p877=NIL;
  rlsls2_p874=NIL;
  rlsls2_p876=NIL;
  rlsls2_p875=NIL;
  rlsls2_p869=NIL;
  rlsls2_p5780=NIL;
  rlsls2_p5768=NIL;
  rlsls2_p1712=NIL;
  rlsls2_p1711=NIL;
  rlsls2_p1706=NIL;
  rlsls2_p1690=NIL;
  rlsls2_p1689=NIL;
  rlsls2_p1687=NIL;
  rlsls2_p1678=NIL;
  rlsls2_p1597=NIL;
  rlsls2_p1588=NIL;
  rlsls2_p1585=NIL;
  rlsls2_p1582=NIL;
  rlsls2_p1559=NIL;
  rlsls2_p1551=NIL;
  rlsls2_p1580=NIL;
  rlsls2_p1579=NIL;
  rlsls2_p1567=NIL;
  rlsls2_p1541=NIL;
  rlsls2_p1540=NIL;
  rlsls2_p1535=NIL;
  rlsls2_p1538=NIL;
  rlsls2_p1537=NIL;
  rlsls2_p1530=NIL;
  rlsls2_p1465=NIL;
  rlsls2_p1430=NIL;
  rlsls2_p1527=NIL;
  rlsls2_p1529=NIL;
  rlsls2_p1521=NIL;
  rlsls2_p1704=NIL;
  rlsls2_p1703=NIL;
  rlsls2_p1701=NIL;
  rlsls2_p1692=NIL;
  rlsls2_p1671=NIL;
  rlsls2_p1662=NIL;
  rlsls2_p1659=NIL;
  rlsls2_p1656=NIL;
  rlsls2_p1633=NIL;
  rlsls2_p1625=NIL;
  rlsls2_p1654=NIL;
  rlsls2_p1653=NIL;
  rlsls2_p1641=NIL;
  rlsls2_p1615=NIL;
  rlsls2_p1469=NIL;
  rlsls2_p1434=NIL;
  rlsls2_p1614=NIL;
  rlsls2_p1611=NIL;
  rlsls2_p1604=NIL;
  rlsls2_p2045=NIL;
  rlsls2_p2044=NIL;
  rlsls2_p1895=NIL;
  rlsls2_p1881=NIL;
  rlsls2_p1873=NIL;
  rlsls2_p1795=NIL;
  rlsls2_p1789=NIL;
  rlsls2_p1786=NIL;
  rlsls2_p1784=NIL;
  rlsls2_p1764=NIL;
  rlsls2_p1756=NIL;
  rlsls2_p1782=NIL;
  rlsls2_p1781=NIL;
  rlsls2_p1769=NIL;
  rlsls2_p1746=NIL;
  rlsls2_p1745=NIL;
  rlsls2_p1740=NIL;
  rlsls2_p1743=NIL;
  rlsls2_p1742=NIL;
  rlsls2_p1735=NIL;
  rlsls2_p1484=NIL;
  rlsls2_p1442=NIL;
  rlsls2_p1732=NIL;
  rlsls2_p1734=NIL;
  rlsls2_p1726=NIL;
  rlsls2_p1894=NIL;
  rlsls2_p1883=NIL;
  rlsls2_p1866=NIL;
  rlsls2_p1857=NIL;
  rlsls2_p1854=NIL;
  rlsls2_p1851=NIL;
  rlsls2_p1828=NIL;
  rlsls2_p1820=NIL;
  rlsls2_p1849=NIL;
  rlsls2_p1848=NIL;
  rlsls2_p1836=NIL;
  rlsls2_p1810=NIL;
  rlsls2_p1488=NIL;
  rlsls2_p1446=NIL;
  rlsls2_p1809=NIL;
  rlsls2_p1806=NIL;
  rlsls2_p1799=NIL;
  rlsls2_p2055=NIL;
  rlsls2_p1497=NIL;
  rlsls2_p1448=NIL;
  rlsls2_p2053=NIL;
  rlsls2_p1455=NIL;
  rlsls2_p832=NIL;
  rlsls2_p868=NIL;
  rlsls2_p1421=NIL;
  rlsls2_p1896=NIL;
  rlsls2_p1511=NIL;
  rlsls2_p859=NIL;
  rlsls2_p845=NIL;
  rlsls2_p834=NIL;
  rlsls2_p819=NIL;
  rlsls2_p1414=NIL;
  rlsls2_p1417=NIL;
  rlsls2_p1416=NIL;
  rlsls2_p1409=NIL;
  rlsls2_p515=NIL;
  rlsls2_p467=NIL;
  rlsls2_p857=NIL;
  rlsls2_p840=NIL;
  rlsls2_p843=NIL;
  rlsls2_p842=NIL;
  rlsls2_p835=NIL;
  rlsls2_p6443=NIL;
  rlsls2_p6423=NIL;
  rlsls2_p2364=NIL;
  rlsls2_p2363=NIL;
  rlsls2_p2361=NIL;
  rlsls2_p2345=NIL;
  rlsls2_p2344=NIL;
  rlsls2_p2342=NIL;
  rlsls2_p2333=NIL;
  rlsls2_p2252=NIL;
  rlsls2_p2243=NIL;
  rlsls2_p2240=NIL;
  rlsls2_p2237=NIL;
  rlsls2_p2214=NIL;
  rlsls2_p2206=NIL;
  rlsls2_p2235=NIL;
  rlsls2_p727=NIL;
  rlsls2_p725=NIL;
  rlsls2_p593=NIL;
  rlsls2_p2234=NIL;
  rlsls2_p2222=NIL;
  rlsls2_p2196=NIL;
  rlsls2_p2195=NIL;
  rlsls2_p2190=NIL;
  rlsls2_p2193=NIL;
  rlsls2_p2192=NIL;
  rlsls2_p2185=NIL;
  rlsls2_p285=NIL;
  rlsls2_p263=NIL;
  rlsls2_p715=NIL;
  rlsls2_p581=NIL;
  rlsls2_p19=NIL;
  rlsls2_p2181=NIL;
  rlsls2_p2183=NIL;
  rlsls2_p2182=NIL;
  rlsls2_p2184=NIL;
  rlsls2_p2176=NIL;
  rlsls2_p2359=NIL;
  rlsls2_p2358=NIL;
  rlsls2_p2356=NIL;
  rlsls2_p2347=NIL;
  rlsls2_p2326=NIL;
  rlsls2_p2317=NIL;
  rlsls2_p2314=NIL;
  rlsls2_p2311=NIL;
  rlsls2_p2288=NIL;
  rlsls2_p2280=NIL;
  rlsls2_p2309=NIL;
  rlsls2_p740=NIL;
  rlsls2_p738=NIL;
  rlsls2_p609=NIL;
  rlsls2_p2308=NIL;
  rlsls2_p2296=NIL;
  rlsls2_p2270=NIL;
  rlsls2_p291=NIL;
  rlsls2_p269=NIL;
  rlsls2_p729=NIL;
  rlsls2_p598=NIL;
  rlsls2_p23=NIL;
  rlsls2_p2128=NIL;
  rlsls2_p755=NIL;
  rlsls2_p753=NIL;
  rlsls2_p746=NIL;
  rlsls2_p751=NIL;
  rlsls2_p621=NIL;
  rlsls2_p2174=NIL;
  rlsls2_p750=NIL;
  rlsls2_p2269=NIL;
  rlsls2_p2264=NIL;
  rlsls2_p2267=NIL;
  rlsls2_p2266=NIL;
  rlsls2_p2259=NIL;
  rlsls2_p2587=NIL;
  rlsls2_p2586=NIL;
  rlsls2_p2533=NIL;
  rlsls2_p2522=NIL;
  rlsls2_p2514=NIL;
  rlsls2_p2446=NIL;
  rlsls2_p2440=NIL;
  rlsls2_p2437=NIL;
  rlsls2_p2435=NIL;
  rlsls2_p2415=NIL;
  rlsls2_p2407=NIL;
  rlsls2_p2433=NIL;
  rlsls2_p774=NIL;
  rlsls2_p772=NIL;
  rlsls2_p642=NIL;
  rlsls2_p2432=NIL;
  rlsls2_p2420=NIL;
  rlsls2_p2397=NIL;
  rlsls2_p2396=NIL;
  rlsls2_p2391=NIL;
  rlsls2_p2394=NIL;
  rlsls2_p2393=NIL;
  rlsls2_p2386=NIL;
  rlsls2_p539=NIL;
  rlsls2_p491=NIL;
  rlsls2_p762=NIL;
  rlsls2_p630=NIL;
  rlsls2_p31=NIL;
  rlsls2_p2382=NIL;
  rlsls2_p2384=NIL;
  rlsls2_p2383=NIL;
  rlsls2_p2385=NIL;
  rlsls2_p2377=NIL;
  rlsls2_p2532=NIL;
  rlsls2_p2524=NIL;
  rlsls2_p2510=NIL;
  rlsls2_p2504=NIL;
  rlsls2_p2501=NIL;
  rlsls2_p2499=NIL;
  rlsls2_p2479=NIL;
  rlsls2_p2471=NIL;
  rlsls2_p2497=NIL;
  rlsls2_p787=NIL;
  rlsls2_p785=NIL;
  rlsls2_p658=NIL;
  rlsls2_p2496=NIL;
  rlsls2_p2484=NIL;
  rlsls2_p2461=NIL;
  rlsls2_p545=NIL;
  rlsls2_p497=NIL;
  rlsls2_p776=NIL;
  rlsls2_p647=NIL;
  rlsls2_p35=NIL;
  rlsls2_p2142=NIL;
  rlsls2_p802=NIL;
  rlsls2_p800=NIL;
  rlsls2_p793=NIL;
  rlsls2_p798=NIL;
  rlsls2_p670=NIL;
  rlsls2_p2375=NIL;
  rlsls2_p797=NIL;
  rlsls2_p2460=NIL;
  rlsls2_p2455=NIL;
  rlsls2_p2458=NIL;
  rlsls2_p2457=NIL;
  rlsls2_p2450=NIL;
  rlsls2_p2595=NIL;
  rlsls2_p551=NIL;
  rlsls2_p503=NIL;
  rlsls2_p803=NIL;
  rlsls2_p673=NIL;
  rlsls2_p37=NIL;
  rlsls2_p2112=NIL;
  rlsls2_p2149=NIL;
  rlsls2_p2588=NIL;
  rlsls2_p572=NIL;
  rlsls2_p560=NIL;
  rlsls2_p512=NIL;
  rlsls2_p2095=NIL;
  rlsls2_p2118=NIL;
  rlsls2_p2117=NIL;
  rlsls2_p2534=NIL;
  rlsls2_p2164=NIL;
  rlsls2_p2090=NIL;
  rlsls2_p569=NIL;
  rlsls2_p7235=NIL;
  rlsls2_p7211=NIL;
  rlsls2_p2878=NIL;
  rlsls2_p2877=NIL;
  rlsls2_p2872=NIL;
  rlsls2_p2856=NIL;
  rlsls2_p2855=NIL;
  rlsls2_p2853=NIL;
  rlsls2_p2844=NIL;
  rlsls2_p2763=NIL;
  rlsls2_p2754=NIL;
  rlsls2_p2751=NIL;
  rlsls2_p2748=NIL;
  rlsls2_p2725=NIL;
  rlsls2_p2717=NIL;
  rlsls2_p2746=NIL;
  rlsls2_p124=NIL;
  rlsls2_p118=NIL;
  rlsls2_p103=NIL;
  rlsls2_p2745=NIL;
  rlsls2_p2733=NIL;
  rlsls2_p2707=NIL;
  rlsls2_p2706=NIL;
  rlsls2_p2701=NIL;
  rlsls2_p2704=NIL;
  rlsls2_p2703=NIL;
  rlsls2_p2696=NIL;
  rlsls2_p90=NIL;
  rlsls2_p55=NIL;
  rlsls2_p2692=NIL;
  rlsls2_p2694=NIL;
  rlsls2_p2693=NIL;
  rlsls2_p2695=NIL;
  rlsls2_p2687=NIL;
  rlsls2_p2870=NIL;
  rlsls2_p2869=NIL;
  rlsls2_p2867=NIL;
  rlsls2_p2858=NIL;
  rlsls2_p2837=NIL;
  rlsls2_p2828=NIL;
  rlsls2_p2825=NIL;
  rlsls2_p2822=NIL;
  rlsls2_p2799=NIL;
  rlsls2_p2791=NIL;
  rlsls2_p2820=NIL;
  rlsls2_p177=NIL;
  rlsls2_p171=NIL;
  rlsls2_p156=NIL;
  rlsls2_p2819=NIL;
  rlsls2_p2807=NIL;
  rlsls2_p2781=NIL;
  rlsls2_p144=NIL;
  rlsls2_p59=NIL;
  rlsls2_p2637=NIL;
  rlsls2_p227=NIL;
  rlsls2_p221=NIL;
  rlsls2_p206=NIL;
  rlsls2_p2780=NIL;
  rlsls2_p2775=NIL;
  rlsls2_p2778=NIL;
  rlsls2_p2777=NIL;
  rlsls2_p2770=NIL;
  rlsls2_p3225=NIL;
  rlsls2_p3224=NIL;
  rlsls2_p3065=NIL;
  rlsls2_p3051=NIL;
  rlsls2_p3043=NIL;
  rlsls2_p2965=NIL;
  rlsls2_p2959=NIL;
  rlsls2_p2956=NIL;
  rlsls2_p2954=NIL;
  rlsls2_p2934=NIL;
  rlsls2_p2926=NIL;
  rlsls2_p2952=NIL;
  rlsls2_p337=NIL;
  rlsls2_p331=NIL;
  rlsls2_p316=NIL;
  rlsls2_p2951=NIL;
  rlsls2_p2939=NIL;
  rlsls2_p2916=NIL;
  rlsls2_p2915=NIL;
  rlsls2_p2910=NIL;
  rlsls2_p2913=NIL;
  rlsls2_p2912=NIL;
  rlsls2_p2905=NIL;
  rlsls2_p303=NIL;
  rlsls2_p67=NIL;
  rlsls2_p2901=NIL;
  rlsls2_p2903=NIL;
  rlsls2_p2902=NIL;
  rlsls2_p2904=NIL;
  rlsls2_p2896=NIL;
  rlsls2_p3064=NIL;
  rlsls2_p3053=NIL;
  rlsls2_p3036=NIL;
  rlsls2_p3027=NIL;
  rlsls2_p3024=NIL;
  rlsls2_p3021=NIL;
  rlsls2_p2998=NIL;
  rlsls2_p2990=NIL;
  rlsls2_p3019=NIL;
  rlsls2_p390=NIL;
  rlsls2_p384=NIL;
  rlsls2_p369=NIL;
  rlsls2_p3018=NIL;
  rlsls2_p3006=NIL;
  rlsls2_p2980=NIL;
  rlsls2_p357=NIL;
  rlsls2_p71=NIL;
  rlsls2_p2651=NIL;
  rlsls2_p440=NIL;
  rlsls2_p434=NIL;
  rlsls2_p419=NIL;
  rlsls2_p2979=NIL;
  rlsls2_p2974=NIL;
  rlsls2_p2977=NIL;
  rlsls2_p2976=NIL;
  rlsls2_p2969=NIL;
  rlsls2_p3242=NIL;
  rlsls2_p73=NIL;
  rlsls2_p2621=NIL;
  rlsls2_p2658=NIL;
  rlsls2_p3233=NIL;
  rlsls2_p2626=NIL;
  rlsls2_p3066=NIL;
  double_or_symbol_result=((rlsls2_v7310=(rlsls2_v7314-rlsls2_v7330)),(rlsls2_v3282=((fabs(rlsls2_v7310)<rlsls2_v7308)?(fabs(rlsls2_f7305())<rlsls2_v7308):NIL)),(((rlsls2_v3282?NIL:(rlsls2_f3233()?(rlsls2_f3232()?(rlsls2_f3224()?rlsls2_f3066():(rlsls2_f3053()?(rlsls2_f3043()?(rlsls2_f2969()?(rlsls2_f2896()?(rlsls2_f3024()?(rlsls2_f2980()?rlsls2_f2904():NIL):NIL):rlsls2_f2979()):rlsls2_f2904()):(rlsls2_f2969()?rlsls2_f2979():NIL)):(rlsls2_f3043()?rlsls2_f2904():NIL))):(rlsls2_f2877()?rlsls2_f3066():(rlsls2_f2858()?(rlsls2_f2844()?(rlsls2_f2770()?(rlsls2_f2687()?(rlsls2_f2825()?(rlsls2_f2781()?rlsls2_f2695():NIL):NIL):rlsls2_f2780()):rlsls2_f2695()):(rlsls2_f2770()?rlsls2_f2780():NIL)):(rlsls2_f2844()?rlsls2_f2695():NIL)))):NIL))?((rlsls2_v2626=rlsls2_f2626()),(rlsls2_v2626?rlsls2_v2626:(fabs(((rlsls2_v3282?rlsls2_f3078():(rlsls2_f3233()?(rlsls2_f3232()?(rlsls2_f3224()?rlsls2_f2621():(rlsls2_f3053()?(rlsls2_f3043()?(rlsls2_f2969()?(rlsls2_f2896()?rlsls2_f2651():rlsls2_f2974()):rlsls2_f2901()):(rlsls2_f2969()?rlsls2_f2974():rlsls2_f3078())):(rlsls2_f3043()?rlsls2_f2901():rlsls2_f3078()))):(rlsls2_f2877()?rlsls2_f2621():(rlsls2_f2858()?(rlsls2_f2844()?(rlsls2_f2770()?(rlsls2_f2687()?rlsls2_f2637():rlsls2_f2775()):rlsls2_f2692()):(rlsls2_f2770()?rlsls2_f2775():rlsls2_f3078())):(rlsls2_f2844()?rlsls2_f2692():rlsls2_f3078())))):rlsls2_f3078()))-(0.0)))<rlsls2_v7308))):NIL)?((rlsls2_v2090=rlsls2_f2090()),(((rlsls2_v2090?(rlsls2_f835()?(rlsls2_f2598()?NIL:(rlsls2_f2588()?(rlsls2_f3232()?(rlsls2_f2586()?rlsls2_f803():(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f802()?rlsls2_f2375():rlsls2_f859()):(rlsls2_f1511()?(rlsls2_f800()?rlsls2_f2375():T):(rlsls2_f1421()?NIL:rlsls2_f797()))):(rlsls2_f878()?(rlsls2_f974()?(rlsls2_f793()?rlsls2_f2375():T):(rlsls2_f888()?NIL:rlsls2_f797())):NIL)):rlsls2_f776()):rlsls2_f762()):(rlsls2_f2450()?rlsls2_f776():NIL)):(rlsls2_f2514()?rlsls2_f762():NIL))):(rlsls2_f2363()?rlsls2_f803():(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?(rlsls2_f1409()?(rlsls2_f869()?(rlsls2_f755()?rlsls2_f2174():rlsls2_f859()):(rlsls2_f1511()?(rlsls2_f753()?rlsls2_f2174():T):(rlsls2_f1421()?NIL:rlsls2_f750()))):(rlsls2_f878()?(rlsls2_f974()?(rlsls2_f746()?rlsls2_f2174():T):(rlsls2_f888()?NIL:rlsls2_f750())):NIL)):rlsls2_f729()):rlsls2_f715()):(rlsls2_f2259()?rlsls2_f729():NIL)):(rlsls2_f2333()?rlsls2_f715():NIL)))):NIL)):rlsls2_f2164()):rlsls2_f857())?((rlsls2_v569=rlsls2_f569()),(rlsls2_v569?rlsls2_v569:(fabs(((rlsls2_v2090?(rlsls2_f835()?rlsls2_f572():rlsls2_f2095()):rlsls2_f840())-(0.0)))<rlsls2_v7308))):NIL)?coerce_double_to_double_or_symbol((rlsls2_v3282?rlsls2_f2665():(rlsls2_f3233()?(rlsls2_f3232()?(rlsls2_f3224()?(rlsls2_f3242()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f3071()?(rlsls2_f2667()?(rlsls2_v2090?(rlsls2_f835()?rlsls2_f560():(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2586()?rlsls2_f551():(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v2142=rlsls2_f2142()),((rlsls2_v2663<rlsls2_v2142)?rlsls2_v2663:rlsls2_v2142)):rlsls2_f545()):rlsls2_f539()):(rlsls2_f2450()?rlsls2_f545():rlsls2_f2665())):(rlsls2_f2514()?rlsls2_f539():rlsls2_f2665()))):rlsls2_f2665()))):rlsls2_f515()):(rlsls2_f3150()?(rlsls2_f3086()?(rlsls2_v2090?(rlsls2_f835()?rlsls2_f512():(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2586()?rlsls2_f503():(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v2142=rlsls2_f2142()),((rlsls2_v3139<rlsls2_v2142)?rlsls2_v3139:rlsls2_v2142)):rlsls2_f497()):rlsls2_f491()):(rlsls2_f2450()?rlsls2_f497():rlsls2_f2665())):(rlsls2_f2514()?rlsls2_f491():rlsls2_f2665()))):rlsls2_f2665()))):rlsls2_f467()):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):(rlsls2_f3053()?(rlsls2_f3043()?(rlsls2_f2969()?(rlsls2_f2896()?(rlsls2_v2090?(rlsls2_f835()?((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v572=rlsls2_f572()),((rlsls2_v2651<rlsls2_v572)?rlsls2_v2651:rlsls2_v572)):(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2586()?(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v2154=rlsls2_f2154()),((rlsls2_v2651<rlsls2_v2154)?rlsls2_v2651:rlsls2_v2154)):(rlsls2_f2581()?(rlsls2_f2550()?((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v2579=rlsls2_f2579()),((rlsls2_v2651<rlsls2_v2579)?rlsls2_v2651:rlsls2_v2579)):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v2142=rlsls2_f2142()),((rlsls2_v2651<rlsls2_v2142)?rlsls2_v2651:rlsls2_v2142)):rlsls2_f440()):rlsls2_f434()):(rlsls2_f2450()?rlsls2_f440():rlsls2_f2665())):(rlsls2_f2514()?rlsls2_f434():rlsls2_f2665()))):rlsls2_f2665()))):(rlsls2_f1409()?(rlsls2_f869()?((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v845=rlsls2_f845()),((rlsls2_v2651<rlsls2_v845)?rlsls2_v2651:rlsls2_v845)):(rlsls2_f1511()?((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2651<rlsls2_v1455)?rlsls2_v2651:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f419()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2651=rlsls2_f2651()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2651<rlsls2_v922)?rlsls2_v2651:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f419())):rlsls2_f2665()))):rlsls2_f357()):rlsls2_f303()):(rlsls2_f2969()?rlsls2_f357():rlsls2_f2665())):(rlsls2_f3043()?rlsls2_f303():rlsls2_f2665()))):(rlsls2_f2877()?(rlsls2_f3242()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f3071()?(rlsls2_f2667()?(rlsls2_v2090?(rlsls2_f835()?rlsls2_f560():(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2363()?rlsls2_f551():(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?((rlsls2_v2663=rlsls2_f2663()),(rlsls2_v2128=rlsls2_f2128()),((rlsls2_v2663<rlsls2_v2128)?rlsls2_v2663:rlsls2_v2128)):rlsls2_f291()):rlsls2_f285()):(rlsls2_f2259()?rlsls2_f291():rlsls2_f2665())):(rlsls2_f2333()?rlsls2_f285():rlsls2_f2665()))):rlsls2_f2665()))):rlsls2_f515()):(rlsls2_f3150()?(rlsls2_f3086()?(rlsls2_v2090?(rlsls2_f835()?rlsls2_f512():(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2363()?rlsls2_f503():(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?((rlsls2_v3139=rlsls2_f3139()),(rlsls2_v2128=rlsls2_f2128()),((rlsls2_v3139<rlsls2_v2128)?rlsls2_v3139:rlsls2_v2128)):rlsls2_f269()):rlsls2_f263()):(rlsls2_f2259()?rlsls2_f269():rlsls2_f2665())):(rlsls2_f2333()?rlsls2_f263():rlsls2_f2665()))):rlsls2_f2665()))):rlsls2_f467()):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):(rlsls2_f2858()?(rlsls2_f2844()?(rlsls2_f2770()?(rlsls2_f2687()?(rlsls2_v2090?(rlsls2_f835()?((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v572=rlsls2_f572()),((rlsls2_v2637<rlsls2_v572)?rlsls2_v2637:rlsls2_v572)):(rlsls2_f2598()?rlsls2_f2665():(rlsls2_f2588()?(rlsls2_f2363()?(rlsls2_f2595()?(rlsls2_f3198()?(rlsls2_f3185()?(rlsls2_f2539()?(rlsls2_f2156()?((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v2154=rlsls2_f2154()),((rlsls2_v2637<rlsls2_v2154)?rlsls2_v2637:rlsls2_v2154)):(rlsls2_f2581()?(rlsls2_f2550()?((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v2579=rlsls2_f2579()),((rlsls2_v2637<rlsls2_v2579)?rlsls2_v2637:rlsls2_v2579)):rlsls2_f2665()):rlsls2_f2665())):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):rlsls2_f2665()):(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v2128=rlsls2_f2128()),((rlsls2_v2637<rlsls2_v2128)?rlsls2_v2637:rlsls2_v2128)):rlsls2_f227()):rlsls2_f221()):(rlsls2_f2259()?rlsls2_f227():rlsls2_f2665())):(rlsls2_f2333()?rlsls2_f221():rlsls2_f2665()))):rlsls2_f2665()))):(rlsls2_f1409()?(rlsls2_f869()?((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v845=rlsls2_f845()),((rlsls2_v2637<rlsls2_v845)?rlsls2_v2637:rlsls2_v845)):(rlsls2_f1511()?((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v1455=rlsls2_f1455()),((rlsls2_v2637<rlsls2_v1455)?rlsls2_v2637:rlsls2_v1455)):(rlsls2_f1421()?rlsls2_f2665():rlsls2_f206()))):(rlsls2_f878()?(rlsls2_f974()?((rlsls2_v2637=rlsls2_f2637()),(rlsls2_v922=rlsls2_f922()),((rlsls2_v2637<rlsls2_v922)?rlsls2_v2637:rlsls2_v922)):(rlsls2_f888()?rlsls2_f2665():rlsls2_f206())):rlsls2_f2665()))):rlsls2_f144()):rlsls2_f90()):(rlsls2_f2770()?rlsls2_f144():rlsls2_f2665())):(rlsls2_f2844()?rlsls2_f90():rlsls2_f2665())))):rlsls2_f2665()))):(rlsls2_v3282?coerce_symbol_to_double_or_symbol(NIL):(rlsls2_f3233()?(rlsls2_f3232()?(rlsls2_f3224()?rlsls2_f73():(rlsls2_f3053()?(rlsls2_f3043()?(rlsls2_f2969()?(rlsls2_f2896()?coerce_double_to_double_or_symbol(rlsls2_f2651()):rlsls2_f71()):rlsls2_f67()):(rlsls2_f2969()?rlsls2_f71():coerce_symbol_to_double_or_symbol(NIL))):(rlsls2_f3043()?rlsls2_f67():coerce_symbol_to_double_or_symbol(NIL)))):(rlsls2_f2877()?rlsls2_f73():(rlsls2_f2858()?(rlsls2_f2844()?(rlsls2_f2770()?(rlsls2_f2687()?coerce_double_to_double_or_symbol(rlsls2_f2637()):rlsls2_f59()):rlsls2_f55()):(rlsls2_f2770()?rlsls2_f59():coerce_symbol_to_double_or_symbol(NIL))):(rlsls2_f2844()?rlsls2_f55():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))))):(rlsls2_f2090()?(rlsls2_f835()?coerce_double_to_double_or_symbol(rlsls2_f572()):(rlsls2_f2598()?coerce_symbol_to_double_or_symbol(NIL):(rlsls2_f2588()?(rlsls2_f3232()?(rlsls2_f2586()?rlsls2_f37():(rlsls2_f2524()?(rlsls2_f2514()?(rlsls2_f2450()?(rlsls2_f2377()?coerce_double_to_double_or_symbol(rlsls2_f2142()):rlsls2_f35()):rlsls2_f31()):(rlsls2_f2450()?rlsls2_f35():coerce_symbol_to_double_or_symbol(NIL))):(rlsls2_f2514()?rlsls2_f31():coerce_symbol_to_double_or_symbol(NIL)))):(rlsls2_f2363()?rlsls2_f37():(rlsls2_f2347()?(rlsls2_f2333()?(rlsls2_f2259()?(rlsls2_f2176()?coerce_double_to_double_or_symbol(rlsls2_f2128()):rlsls2_f23()):rlsls2_f19()):(rlsls2_f2259()?rlsls2_f23():coerce_symbol_to_double_or_symbol(NIL))):(rlsls2_f2333()?rlsls2_f19():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)))):(rlsls2_f1409()?(rlsls2_f869()?coerce_double_to_double_or_symbol(rlsls2_f845()):(rlsls2_f1511()?coerce_double_to_double_or_symbol(rlsls2_f1455()):coerce_symbol_to_double_or_symbol((rlsls2_f1421()?NIL:rlsls2_f1419())))):(rlsls2_f878()?(rlsls2_f974()?coerce_double_to_double_or_symbol(rlsls2_f922()):coerce_symbol_to_double_or_symbol((rlsls2_f888()?NIL:rlsls2_f1419()))):coerce_symbol_to_double_or_symbol(NIL)))))); return;}
