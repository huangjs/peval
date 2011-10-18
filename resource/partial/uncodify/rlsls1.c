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
double rlsls1_v7330;
double rlsls1_v7328;
double rlsls1_v7326;
double rlsls1_v7324;
double rlsls1_v7322;
double rlsls1_v7320;
double rlsls1_v7318;
double rlsls1_v7316;
double rlsls1_v7314;
double rlsls1_v7312;
double rlsls1_v7308;
double rlsls1_v7310;
int rlsls1_p4788;
double rlsls1_m4788;
int rlsls1_p1507;
double rlsls1_m1507;
int rlsls1_p1509;
double rlsls1_m1509;
int rlsls1_p1419;
double rlsls1_m1419;
int rlsls1_p5522;
double rlsls1_m5522;
int rlsls1_p5675;
double rlsls1_m5675;
int rlsls1_p5673;
double rlsls1_m5673;
int rlsls1_p5666;
double rlsls1_m5666;
int rlsls1_p5664;
double rlsls1_m5664;
int rlsls1_p6280;
double rlsls1_m6280;
int rlsls1_p6438;
double rlsls1_m6438;
int rlsls1_p5833;
int rlsls1_m5833;
int rlsls1_p6437;
double rlsls1_m6437;
int rlsls1_p5831;
int rlsls1_m5831;
int rlsls1_p6461;
double rlsls1_m6461;
int rlsls1_p6458;
double rlsls1_m6458;
int rlsls1_p2597;
int rlsls1_m2597;
int rlsls1_p6432;
double rlsls1_m6432;
int rlsls1_p2593;
int rlsls1_m2593;
int rlsls1_v2593;
int rlsls1_p2589;
int rlsls1_m2589;
int rlsls1_p1983;
int rlsls1_m1983;
double rlsls1_v6461;
double rlsls1_v6458;
int rlsls1_p6446;
double rlsls1_m6446;
int rlsls1_p2664;
double rlsls1_m2664;
int rlsls1_p3077;
double rlsls1_m3077;
int rlsls1_p3082;
double rlsls1_m3082;
int rlsls1_p6935;
double rlsls1_m6935;
int rlsls1_p3148;
double rlsls1_m3148;
int rlsls1_p3144;
double rlsls1_m3144;
int rlsls1_p6984;
double rlsls1_m6984;
int rlsls1_p6983;
double rlsls1_m6983;
int rlsls1_p2088;
int rlsls1_m2088;
double rlsls1_v6983;
double rlsls1_v6984;
int rlsls1_p5783;
double rlsls1_m5783;
int rlsls1_p6959;
double rlsls1_m6959;
int rlsls1_p6958;
double rlsls1_m6958;
int rlsls1_p1408;
int rlsls1_m1408;
double rlsls1_v6958;
double rlsls1_v6959;
int rlsls1_p4942;
double rlsls1_m4942;
int rlsls1_p7117;
double rlsls1_m7117;
int rlsls1_p7115;
double rlsls1_m7115;
int rlsls1_p7108;
double rlsls1_m7108;
int rlsls1_p7106;
double rlsls1_m7106;
int rlsls1_p7229;
double rlsls1_m7229;
int rlsls1_p5829;
double rlsls1_m5829;
int rlsls1_p3265;
double rlsls1_m3265;
int rlsls1_p3280;
double rlsls1_m3280;
int rlsls1_p2075;
double rlsls1_m2075;
int rlsls1_p2086;
double rlsls1_m2086;
int rlsls1_p2051;
int rlsls1_m2051;
int rlsls1_p2073;
double rlsls1_m2073;
double rlsls1_v2086;
int rlsls1_p2085;
double rlsls1_m2085;
int rlsls1_p2083;
double rlsls1_m2083;
int rlsls1_p1377;
double rlsls1_m1377;
int rlsls1_p1374;
int rlsls1_m1374;
int rlsls1_p1373;
int rlsls1_m1373;
int rlsls1_p1372;
int rlsls1_m1372;
int rlsls1_p1892;
double rlsls1_m1892;
int rlsls1_p1867;
int rlsls1_m1867;
int rlsls1_p1858;
int rlsls1_m1858;
int rlsls1_p1830;
int rlsls1_m1830;
int rlsls1_p1853;
double rlsls1_m1853;
int rlsls1_p1885;
int rlsls1_m1885;
int rlsls1_p1891;
double rlsls1_m1891;
int rlsls1_p1946;
double rlsls1_m1946;
int rlsls1_p1943;
int rlsls1_m1943;
int rlsls1_p1929;
int rlsls1_m1929;
int rlsls1_p1928;
int rlsls1_m1928;
int rlsls1_p2042;
int rlsls1_m2042;
int rlsls1_p2040;
double rlsls1_m2040;
double rlsls1_v2083;
int rlsls1_p2046;
double rlsls1_m2046;
int rlsls1_p1716;
double rlsls1_m1716;
double rlsls1_v1716;
int rlsls1_p1709;
double rlsls1_m1709;
int rlsls1_p2048;
double rlsls1_m2048;
int rlsls1_p1718;
double rlsls1_m1718;
int rlsls1_p1708;
double rlsls1_m1708;
double rlsls1_v1718;
int rlsls1_p1717;
double rlsls1_m1717;
double rlsls1_v2048;
int rlsls1_p2047;
double rlsls1_m2047;
int rlsls1_p2045;
double rlsls1_m2045;
int rlsls1_p2072;
double rlsls1_m2072;
int rlsls1_p2071;
double rlsls1_m2071;
int rlsls1_p2030;
double rlsls1_m2030;
int rlsls1_p2028;
double rlsls1_m2028;
int rlsls1_p2082;
double rlsls1_m2082;
int rlsls1_p2038;
double rlsls1_m2038;
int rlsls1_p2036;
double rlsls1_m2036;
int rlsls1_p2016;
double rlsls1_m2016;
int rlsls1_p2033;
int rlsls1_m2033;
int rlsls1_p1976;
double rlsls1_m1976;
int rlsls1_p2022;
double rlsls1_m2022;
int rlsls1_p2014;
double rlsls1_m2014;
double rlsls1_v2016;
double rlsls1_v2014;
int rlsls1_p2004;
int rlsls1_m2004;
int rlsls1_p1950;
int rlsls1_m1950;
int rlsls1_p1978;
double rlsls1_m1978;
int rlsls1_p1974;
double rlsls1_m1974;
int rlsls1_p1394;
double rlsls1_m1394;
int rlsls1_p1393;
double rlsls1_m1393;
double rlsls1_v1393;
int rlsls1_p1381;
int rlsls1_m1381;
int rlsls1_p1942;
double rlsls1_m1942;
double rlsls1_v1942;
int rlsls1_p1934;
double rlsls1_m1934;
int rlsls1_p1931;
int rlsls1_m1931;
int rlsls1_p1930;
int rlsls1_m1930;
int rlsls1_p1972;
double rlsls1_m1972;
int rlsls1_p1971;
double rlsls1_m1971;
double rlsls1_v1971;
int rlsls1_p1959;
int rlsls1_m1959;
int rlsls1_p1996;
int rlsls1_m1996;
int rlsls1_p1993;
int rlsls1_m1993;
int rlsls1_p1984;
int rlsls1_m1984;
int rlsls1_p1981;
int rlsls1_m1981;
int rlsls1_p2018;
int rlsls1_m2018;
int rlsls1_p2017;
int rlsls1_m2017;
int rlsls1_p1958;
int rlsls1_m1958;
int rlsls1_v1381;
int rlsls1_v1958;
int rlsls1_p1365;
int rlsls1_m1365;
int rlsls1_v1959;
int rlsls1_v1958;
int rlsls1_p1921;
int rlsls1_m1921;
int rlsls1_p2080;
double rlsls1_m2080;
int rlsls1_p2067;
double rlsls1_m2067;
int rlsls1_p2061;
double rlsls1_m2061;
double rlsls1_v2067;
double rlsls1_v2061;
int rlsls1_p2057;
double rlsls1_m2057;
int rlsls1_p7293;
double rlsls1_m7293;
int rlsls1_p7291;
int rlsls1_m7291;
int rlsls1_p7288;
double rlsls1_m7288;
int rlsls1_p6979;
double rlsls1_m6979;
int rlsls1_p3176;
int rlsls1_m3176;
int rlsls1_v3176;
int rlsls1_p3172;
int rlsls1_m3172;
int rlsls1_p1982;
int rlsls1_m1982;
int rlsls1_p3171;
int rlsls1_m3171;
int rlsls1_p2584;
int rlsls1_m2584;
int rlsls1_p7296;
double rlsls1_m7296;
int rlsls1_p6954;
double rlsls1_m6954;
int rlsls1_p3159;
int rlsls1_m3159;
int rlsls1_v3159;
int rlsls1_p3155;
int rlsls1_m3155;
int rlsls1_p1398;
int rlsls1_m1398;
int rlsls1_p3154;
int rlsls1_m3154;
int rlsls1_p2582;
int rlsls1_m2582;
int rlsls1_p7294;
int rlsls1_m7294;
int rlsls1_p3276;
double rlsls1_m3276;
int rlsls1_p3232;
int rlsls1_m3232;
int rlsls1_p3261;
double rlsls1_m3261;
double rlsls1_v3276;
int rlsls1_p3275;
double rlsls1_m3275;
int rlsls1_p7287;
double rlsls1_m7287;
int rlsls1_p3263;
double rlsls1_m3263;
int rlsls1_p3273;
double rlsls1_m3273;
int rlsls1_p2561;
double rlsls1_m2561;
int rlsls1_p2558;
int rlsls1_m2558;
int rlsls1_p2557;
int rlsls1_m2557;
int rlsls1_p2556;
int rlsls1_m2556;
int rlsls1_p3061;
double rlsls1_m3061;
int rlsls1_p3036;
int rlsls1_m3036;
int rlsls1_p3027;
int rlsls1_m3027;
int rlsls1_p2999;
int rlsls1_m2999;
int rlsls1_p3022;
double rlsls1_m3022;
int rlsls1_p3054;
int rlsls1_m3054;
int rlsls1_p3060;
double rlsls1_m3060;
int rlsls1_p3111;
double rlsls1_m3111;
int rlsls1_p3108;
int rlsls1_m3108;
int rlsls1_p3093;
int rlsls1_m3093;
int rlsls1_p3092;
int rlsls1_m3092;
int rlsls1_p3223;
int rlsls1_m3223;
int rlsls1_p3221;
double rlsls1_m3221;
double rlsls1_v3273;
int rlsls1_p3227;
double rlsls1_m3227;
int rlsls1_p2881;
double rlsls1_m2881;
double rlsls1_v2881;
int rlsls1_p2874;
double rlsls1_m2874;
int rlsls1_p3229;
double rlsls1_m3229;
int rlsls1_p2884;
double rlsls1_m2884;
int rlsls1_p2873;
double rlsls1_m2873;
double rlsls1_v2884;
int rlsls1_p2883;
double rlsls1_m2883;
double rlsls1_v3229;
int rlsls1_p3228;
double rlsls1_m3228;
int rlsls1_p3226;
double rlsls1_m3226;
int rlsls1_p3260;
double rlsls1_m3260;
int rlsls1_p3259;
double rlsls1_m3259;
int rlsls1_p3211;
double rlsls1_m3211;
int rlsls1_p3209;
double rlsls1_m3209;
int rlsls1_p3272;
double rlsls1_m3272;
int rlsls1_p3219;
double rlsls1_m3219;
int rlsls1_p3217;
double rlsls1_m3217;
int rlsls1_p3197;
double rlsls1_m3197;
int rlsls1_p3214;
int rlsls1_m3214;
int rlsls1_p3143;
double rlsls1_m3143;
int rlsls1_p3203;
double rlsls1_m3203;
int rlsls1_p3195;
double rlsls1_m3195;
double rlsls1_v3197;
double rlsls1_v3195;
int rlsls1_p3185;
int rlsls1_m3185;
int rlsls1_p3115;
int rlsls1_m3115;
int rlsls1_p3147;
double rlsls1_m3147;
int rlsls1_p3141;
double rlsls1_m3141;
int rlsls1_p2578;
double rlsls1_m2578;
int rlsls1_p817;
int rlsls1_m817;
int rlsls1_p689;
double rlsls1_m689;
int rlsls1_p2577;
double rlsls1_m2577;
double rlsls1_v2577;
int rlsls1_p2565;
int rlsls1_m2565;
int rlsls1_p3106;
double rlsls1_m3106;
double rlsls1_v3106;
int rlsls1_p3098;
double rlsls1_m3098;
int rlsls1_p3095;
int rlsls1_m3095;
int rlsls1_p3094;
int rlsls1_m3094;
int rlsls1_p3139;
double rlsls1_m3139;
double rlsls1_v3139;
double rlsls1_v1419;
int rlsls1_p476;
double rlsls1_m476;
int rlsls1_p3138;
double rlsls1_m3138;
double rlsls1_v3138;
int rlsls1_p3124;
int rlsls1_m3124;
int rlsls1_p3177;
int rlsls1_m3177;
int rlsls1_p3169;
int rlsls1_m3169;
int rlsls1_p3160;
int rlsls1_m3160;
int rlsls1_p3152;
int rlsls1_m3152;
int rlsls1_p2580;
int rlsls1_m2580;
int rlsls1_p3199;
int rlsls1_m3199;
int rlsls1_p3198;
int rlsls1_m3198;
int rlsls1_p3123;
int rlsls1_m3123;
int rlsls1_v2565;
int rlsls1_v3123;
int rlsls1_p2549;
int rlsls1_m2549;
int rlsls1_p43;
double_or_symbol rlsls1_m43;
int rlsls1_p2153;
double rlsls1_m2153;
int rlsls1_p830;
int rlsls1_m830;
int rlsls1_p701;
double rlsls1_m701;
int rlsls1_p2548;
int rlsls1_m2548;
int rlsls1_p829;
int rlsls1_m829;
int rlsls1_p2543;
double rlsls1_m2543;
int rlsls1_p2546;
double rlsls1_m2546;
int rlsls1_p2545;
int rlsls1_m2545;
int rlsls1_v2545;
int rlsls1_p2538;
int rlsls1_m2538;
int rlsls1_p2160;
double rlsls1_m2160;
int rlsls1_p2162;
double rlsls1_m2162;
int rlsls1_p2161;
int rlsls1_m2161;
int rlsls1_p2537;
int rlsls1_m2537;
int rlsls1_v2161;
int rlsls1_p2155;
int rlsls1_m2155;
int rlsls1_v3124;
int rlsls1_v3123;
int rlsls1_p3085;
int rlsls1_m3085;
int rlsls1_p3270;
double rlsls1_m3270;
int rlsls1_p3255;
double rlsls1_m3255;
int rlsls1_p3249;
double rlsls1_m3249;
double rlsls1_v3255;
double rlsls1_v3249;
int rlsls1_p3245;
double rlsls1_m3245;
int rlsls1_p7305;
double rlsls1_m7305;
int rlsls1_v3282;
int rlsls1_p7224;
double rlsls1_m7224;
int rlsls1_p3240;
int rlsls1_m3240;
int rlsls1_v3240;
int rlsls1_p3236;
int rlsls1_m3236;
int rlsls1_p1995;
int rlsls1_m1995;
int rlsls1_p1400;
int rlsls1_m1400;
int rlsls1_p1396;
int rlsls1_m1396;
int rlsls1_p970;
double rlsls1_m970;
int rlsls1_p1364;
int rlsls1_m1364;
int rlsls1_p1359;
double rlsls1_m1359;
int rlsls1_p1362;
double rlsls1_m1362;
int rlsls1_p1361;
int rlsls1_m1361;
int rlsls1_v1361;
int rlsls1_p1354;
int rlsls1_m1354;
int rlsls1_p1351;
int rlsls1_m1351;
int rlsls1_v1354;
int rlsls1_v1351;
int rlsls1_p1345;
int rlsls1_m1345;
int rlsls1_p1994;
int rlsls1_m1994;
int rlsls1_p1979;
int rlsls1_m1979;
int rlsls1_p1503;
double rlsls1_m1503;
int rlsls1_p1920;
int rlsls1_m1920;
int rlsls1_p1915;
double rlsls1_m1915;
int rlsls1_p1918;
double rlsls1_m1918;
int rlsls1_p1917;
int rlsls1_m1917;
int rlsls1_v1917;
int rlsls1_p1910;
int rlsls1_m1910;
int rlsls1_p1907;
int rlsls1_m1907;
int rlsls1_v1910;
int rlsls1_v1907;
int rlsls1_p1901;
int rlsls1_m1901;
int rlsls1_p3170;
int rlsls1_m3170;
int rlsls1_p3153;
int rlsls1_m3153;
int rlsls1_p3150;
int rlsls1_m3150;
int rlsls1_p79;
double_or_symbol rlsls1_m79;
int rlsls1_p2662;
double rlsls1_m2662;
double rlsls1_v2662;
double rlsls1_v1419;
int rlsls1_p524;
double rlsls1_m524;
int rlsls1_p3084;
int rlsls1_m3084;
int rlsls1_p3075;
double rlsls1_m3075;
int rlsls1_p3080;
double rlsls1_m3080;
int rlsls1_p3079;
int rlsls1_m3079;
int rlsls1_v3079;
int rlsls1_p3070;
int rlsls1_m3070;
int rlsls1_p2671;
double rlsls1_m2671;
int rlsls1_p2673;
double rlsls1_m2673;
int rlsls1_p2672;
int rlsls1_m2672;
int rlsls1_p3069;
int rlsls1_m3069;
int rlsls1_v2672;
int rlsls1_p2666;
int rlsls1_m2666;
double rlsls1_v7305;
int rlsls1_p7240;
double rlsls1_m7240;
int rlsls1_p7238;
double rlsls1_m7238;
double rlsls1_v7238;
int rlsls1_p7237;
double rlsls1_m7237;
double rlsls1_v4942;
int rlsls1_p4939;
double rlsls1_m4939;
double rlsls1_v4939;
int rlsls1_p4931;
double rlsls1_m4931;
int rlsls1_p1172;
double rlsls1_m1172;
int rlsls1_p1171;
int rlsls1_m1171;
int rlsls1_p1169;
double rlsls1_m1169;
int rlsls1_p1153;
double rlsls1_m1153;
int rlsls1_p1152;
double rlsls1_m1152;
int rlsls1_p1150;
double rlsls1_m1150;
double rlsls1_v1150;
int rlsls1_p1141;
int rlsls1_m1141;
int rlsls1_p1060;
int rlsls1_m1060;
int rlsls1_p1051;
int rlsls1_m1051;
int rlsls1_v1060;
int rlsls1_v1051;
int rlsls1_p1048;
int rlsls1_m1048;
int rlsls1_p1045;
double rlsls1_m1045;
int rlsls1_p1022;
double rlsls1_m1022;
double rlsls1_v1022;
int rlsls1_p1014;
double rlsls1_m1014;
int rlsls1_p1043;
double rlsls1_m1043;
int rlsls1_p1042;
double rlsls1_m1042;
double rlsls1_v1042;
int rlsls1_p1030;
int rlsls1_m1030;
int rlsls1_v1030;
double rlsls1_v1014;
int rlsls1_p1004;
int rlsls1_m1004;
int rlsls1_p1003;
int rlsls1_m1003;
int rlsls1_p998;
double rlsls1_m998;
int rlsls1_p1001;
double rlsls1_m1001;
int rlsls1_p1000;
int rlsls1_m1000;
int rlsls1_v1000;
int rlsls1_p993;
int rlsls1_m993;
int rlsls1_p932;
double rlsls1_m932;
int rlsls1_p897;
int rlsls1_m897;
int rlsls1_p990;
int rlsls1_m990;
int rlsls1_p992;
int rlsls1_m992;
int rlsls1_v990;
int rlsls1_p984;
int rlsls1_m984;
int rlsls1_p1167;
double rlsls1_m1167;
int rlsls1_p1166;
double rlsls1_m1166;
int rlsls1_p1164;
double rlsls1_m1164;
double rlsls1_v1164;
int rlsls1_p1155;
int rlsls1_m1155;
int rlsls1_p1134;
int rlsls1_m1134;
int rlsls1_p1125;
int rlsls1_m1125;
int rlsls1_v1134;
int rlsls1_v1125;
int rlsls1_p1122;
int rlsls1_m1122;
int rlsls1_p1119;
double rlsls1_m1119;
int rlsls1_p1096;
double rlsls1_m1096;
double rlsls1_v1096;
int rlsls1_p1088;
double rlsls1_m1088;
int rlsls1_p1117;
double rlsls1_m1117;
int rlsls1_p1116;
double rlsls1_m1116;
double rlsls1_v1116;
int rlsls1_p1104;
int rlsls1_m1104;
int rlsls1_v1104;
double rlsls1_v1088;
int rlsls1_p1078;
int rlsls1_m1078;
int rlsls1_p936;
double rlsls1_m936;
int rlsls1_p901;
int rlsls1_m901;
int rlsls1_p1077;
int rlsls1_m1077;
int rlsls1_p1074;
int rlsls1_m1074;
int rlsls1_v1074;
int rlsls1_p1067;
int rlsls1_m1067;
int rlsls1_p1402;
double rlsls1_m1402;
int rlsls1_p1401;
int rlsls1_m1401;
int rlsls1_p1339;
double rlsls1_m1339;
int rlsls1_p1328;
double rlsls1_m1328;
double rlsls1_v1328;
int rlsls1_p1320;
int rlsls1_m1320;
int rlsls1_p1252;
int rlsls1_m1252;
int rlsls1_p1246;
int rlsls1_m1246;
int rlsls1_v1252;
int rlsls1_v1246;
int rlsls1_p1243;
int rlsls1_m1243;
int rlsls1_p1241;
double rlsls1_m1241;
int rlsls1_p1221;
double rlsls1_m1221;
double rlsls1_v1221;
int rlsls1_p1213;
double rlsls1_m1213;
int rlsls1_p1239;
double rlsls1_m1239;
int rlsls1_p1238;
double rlsls1_m1238;
double rlsls1_v1238;
int rlsls1_p1226;
int rlsls1_m1226;
int rlsls1_v1226;
double rlsls1_v1213;
int rlsls1_p1203;
int rlsls1_m1203;
int rlsls1_p1202;
int rlsls1_m1202;
int rlsls1_p1197;
double rlsls1_m1197;
int rlsls1_p1200;
double rlsls1_m1200;
int rlsls1_p1199;
int rlsls1_m1199;
int rlsls1_v1199;
int rlsls1_p1192;
int rlsls1_m1192;
int rlsls1_p951;
double rlsls1_m951;
int rlsls1_p909;
int rlsls1_m909;
int rlsls1_p1189;
int rlsls1_m1189;
int rlsls1_p1191;
int rlsls1_m1191;
int rlsls1_v1189;
int rlsls1_p1183;
int rlsls1_m1183;
int rlsls1_p1338;
double rlsls1_m1338;
double rlsls1_v1338;
int rlsls1_p1330;
int rlsls1_m1330;
int rlsls1_p1316;
int rlsls1_m1316;
int rlsls1_p1310;
int rlsls1_m1310;
int rlsls1_v1316;
int rlsls1_v1310;
int rlsls1_p1307;
int rlsls1_m1307;
int rlsls1_p1305;
double rlsls1_m1305;
int rlsls1_p1285;
double rlsls1_m1285;
double rlsls1_v1285;
int rlsls1_p1277;
double rlsls1_m1277;
int rlsls1_p1303;
double rlsls1_m1303;
int rlsls1_p1302;
double rlsls1_m1302;
double rlsls1_v1302;
int rlsls1_p1290;
int rlsls1_m1290;
int rlsls1_v1290;
double rlsls1_v1277;
int rlsls1_p1267;
int rlsls1_m1267;
int rlsls1_p955;
double rlsls1_m955;
int rlsls1_p913;
int rlsls1_m913;
int rlsls1_p1266;
int rlsls1_m1266;
int rlsls1_p1263;
int rlsls1_m1263;
int rlsls1_v1263;
int rlsls1_p1256;
int rlsls1_m1256;
int rlsls1_p1405;
int rlsls1_m1405;
int rlsls1_v1354;
int rlsls1_p964;
double rlsls1_m964;
int rlsls1_p915;
int rlsls1_m915;
int rlsls1_v1405;
int rlsls1_p1403;
int rlsls1_m1403;
double rlsls1_v1303;
double rlsls1_v1239;
double rlsls1_v1117;
double rlsls1_v1043;
int rlsls1_p922;
double rlsls1_m922;
int rlsls1_p825;
int rlsls1_m825;
int rlsls1_p864;
int rlsls1_m864;
int rlsls1_p888;
int rlsls1_m888;
int rlsls1_p1340;
int rlsls1_m1340;
int rlsls1_p974;
int rlsls1_m974;
int rlsls1_p883;
double rlsls1_m883;
int rlsls1_p886;
double rlsls1_m886;
int rlsls1_p885;
int rlsls1_m885;
int rlsls1_v885;
int rlsls1_p878;
int rlsls1_m878;
int rlsls1_p877;
int rlsls1_m877;
int rlsls1_p874;
double rlsls1_m874;
int rlsls1_p876;
double rlsls1_m876;
int rlsls1_p875;
int rlsls1_m875;
int rlsls1_v875;
int rlsls1_p869;
int rlsls1_m869;
double rlsls1_v5783;
int rlsls1_p5780;
double rlsls1_m5780;
double rlsls1_v5780;
int rlsls1_p5768;
double rlsls1_m5768;
int rlsls1_p1712;
double rlsls1_m1712;
int rlsls1_p1711;
int rlsls1_m1711;
int rlsls1_p1706;
double rlsls1_m1706;
int rlsls1_p1690;
double rlsls1_m1690;
int rlsls1_p1689;
double rlsls1_m1689;
int rlsls1_p1687;
double rlsls1_m1687;
double rlsls1_v1687;
int rlsls1_p1678;
int rlsls1_m1678;
int rlsls1_p1597;
int rlsls1_m1597;
int rlsls1_p1588;
int rlsls1_m1588;
int rlsls1_v1597;
int rlsls1_v1588;
int rlsls1_p1585;
int rlsls1_m1585;
int rlsls1_p1582;
double rlsls1_m1582;
int rlsls1_p1559;
double rlsls1_m1559;
double rlsls1_v1559;
int rlsls1_p1551;
double rlsls1_m1551;
int rlsls1_p1580;
double rlsls1_m1580;
int rlsls1_p1579;
double rlsls1_m1579;
double rlsls1_v1579;
int rlsls1_p1567;
int rlsls1_m1567;
int rlsls1_v1567;
double rlsls1_v1551;
int rlsls1_p1541;
int rlsls1_m1541;
int rlsls1_p1540;
int rlsls1_m1540;
int rlsls1_p1535;
double rlsls1_m1535;
int rlsls1_p1538;
double rlsls1_m1538;
int rlsls1_p1537;
int rlsls1_m1537;
int rlsls1_v1537;
int rlsls1_p1530;
int rlsls1_m1530;
int rlsls1_p1465;
double rlsls1_m1465;
int rlsls1_p1430;
int rlsls1_m1430;
int rlsls1_p1527;
int rlsls1_m1527;
int rlsls1_p1529;
int rlsls1_m1529;
int rlsls1_v1527;
int rlsls1_p1521;
int rlsls1_m1521;
int rlsls1_p1704;
double rlsls1_m1704;
int rlsls1_p1703;
double rlsls1_m1703;
int rlsls1_p1701;
double rlsls1_m1701;
double rlsls1_v1701;
int rlsls1_p1692;
int rlsls1_m1692;
int rlsls1_p1671;
int rlsls1_m1671;
int rlsls1_p1662;
int rlsls1_m1662;
int rlsls1_v1671;
int rlsls1_v1662;
int rlsls1_p1659;
int rlsls1_m1659;
int rlsls1_p1656;
double rlsls1_m1656;
int rlsls1_p1633;
double rlsls1_m1633;
double rlsls1_v1633;
int rlsls1_p1625;
double rlsls1_m1625;
int rlsls1_p1654;
double rlsls1_m1654;
int rlsls1_p1653;
double rlsls1_m1653;
double rlsls1_v1653;
int rlsls1_p1641;
int rlsls1_m1641;
int rlsls1_v1641;
double rlsls1_v1625;
int rlsls1_p1615;
int rlsls1_m1615;
int rlsls1_p1469;
double rlsls1_m1469;
int rlsls1_p1434;
int rlsls1_m1434;
int rlsls1_p1614;
int rlsls1_m1614;
int rlsls1_p1611;
int rlsls1_m1611;
int rlsls1_v1611;
int rlsls1_p1604;
int rlsls1_m1604;
int rlsls1_p2044;
double rlsls1_m2044;
int rlsls1_p2043;
int rlsls1_m2043;
int rlsls1_p1895;
double rlsls1_m1895;
int rlsls1_p1881;
double rlsls1_m1881;
double rlsls1_v1881;
int rlsls1_p1873;
int rlsls1_m1873;
int rlsls1_p1795;
int rlsls1_m1795;
int rlsls1_p1789;
int rlsls1_m1789;
int rlsls1_v1795;
int rlsls1_v1789;
int rlsls1_p1786;
int rlsls1_m1786;
int rlsls1_p1784;
double rlsls1_m1784;
int rlsls1_p1764;
double rlsls1_m1764;
double rlsls1_v1764;
int rlsls1_p1756;
double rlsls1_m1756;
int rlsls1_p1782;
double rlsls1_m1782;
int rlsls1_p1781;
double rlsls1_m1781;
double rlsls1_v1781;
int rlsls1_p1769;
int rlsls1_m1769;
int rlsls1_v1769;
double rlsls1_v1756;
int rlsls1_p1746;
int rlsls1_m1746;
int rlsls1_p1745;
int rlsls1_m1745;
int rlsls1_p1740;
double rlsls1_m1740;
int rlsls1_p1743;
double rlsls1_m1743;
int rlsls1_p1742;
int rlsls1_m1742;
int rlsls1_v1742;
int rlsls1_p1735;
int rlsls1_m1735;
int rlsls1_p1484;
double rlsls1_m1484;
int rlsls1_p1442;
int rlsls1_m1442;
int rlsls1_p1732;
int rlsls1_m1732;
int rlsls1_p1734;
int rlsls1_m1734;
int rlsls1_v1732;
int rlsls1_p1726;
int rlsls1_m1726;
int rlsls1_p1894;
double rlsls1_m1894;
double rlsls1_v1894;
int rlsls1_p1883;
int rlsls1_m1883;
int rlsls1_p1866;
int rlsls1_m1866;
int rlsls1_p1857;
int rlsls1_m1857;
int rlsls1_v1866;
int rlsls1_v1857;
int rlsls1_p1854;
int rlsls1_m1854;
int rlsls1_p1851;
double rlsls1_m1851;
int rlsls1_p1828;
double rlsls1_m1828;
double rlsls1_v1828;
int rlsls1_p1820;
double rlsls1_m1820;
int rlsls1_p1849;
double rlsls1_m1849;
int rlsls1_p1848;
double rlsls1_m1848;
double rlsls1_v1848;
int rlsls1_p1836;
int rlsls1_m1836;
int rlsls1_v1836;
double rlsls1_v1820;
int rlsls1_p1810;
int rlsls1_m1810;
int rlsls1_p1488;
double rlsls1_m1488;
int rlsls1_p1446;
int rlsls1_m1446;
int rlsls1_p1809;
int rlsls1_m1809;
int rlsls1_p1806;
int rlsls1_m1806;
int rlsls1_v1806;
int rlsls1_p1799;
int rlsls1_m1799;
int rlsls1_p2054;
int rlsls1_m2054;
int rlsls1_v1910;
int rlsls1_p1497;
double rlsls1_m1497;
int rlsls1_p1448;
int rlsls1_m1448;
int rlsls1_v2054;
int rlsls1_p2052;
int rlsls1_m2052;
double rlsls1_v1849;
double rlsls1_v1782;
double rlsls1_v1654;
double rlsls1_v1580;
int rlsls1_p1455;
double rlsls1_m1455;
int rlsls1_p832;
int rlsls1_m832;
int rlsls1_p868;
int rlsls1_m868;
int rlsls1_p1421;
int rlsls1_m1421;
int rlsls1_p1896;
int rlsls1_m1896;
int rlsls1_p1511;
int rlsls1_m1511;
int rlsls1_p859;
int rlsls1_m859;
double rlsls1_v1455;
double rlsls1_v922;
int rlsls1_p845;
double rlsls1_m845;
int rlsls1_p834;
int rlsls1_m834;
int rlsls1_p819;
int rlsls1_m819;
int rlsls1_p1414;
double rlsls1_m1414;
int rlsls1_p1417;
double rlsls1_m1417;
int rlsls1_p1416;
int rlsls1_m1416;
int rlsls1_v1416;
int rlsls1_p1409;
int rlsls1_m1409;
double rlsls1_v2662;
double rlsls1_v845;
double rlsls1_v2662;
double rlsls1_v1455;
double rlsls1_v2662;
double rlsls1_v922;
int rlsls1_p515;
double rlsls1_m515;
double rlsls1_v3139;
double rlsls1_v845;
double rlsls1_v3139;
double rlsls1_v1455;
double rlsls1_v3139;
double rlsls1_v922;
int rlsls1_p467;
double rlsls1_m467;
int rlsls1_p857;
int rlsls1_m857;
int rlsls1_p840;
double rlsls1_m840;
int rlsls1_p843;
double rlsls1_m843;
int rlsls1_p842;
int rlsls1_m842;
int rlsls1_v842;
int rlsls1_p835;
int rlsls1_m835;
double rlsls1_v6446;
int rlsls1_p6443;
double rlsls1_m6443;
double rlsls1_v6443;
int rlsls1_p6423;
double rlsls1_m6423;
int rlsls1_p2363;
double rlsls1_m2363;
int rlsls1_p2362;
int rlsls1_m2362;
int rlsls1_p2360;
double rlsls1_m2360;
int rlsls1_p2344;
double rlsls1_m2344;
int rlsls1_p2343;
double rlsls1_m2343;
int rlsls1_p2341;
double rlsls1_m2341;
double rlsls1_v2341;
int rlsls1_p2332;
int rlsls1_m2332;
int rlsls1_p2251;
int rlsls1_m2251;
int rlsls1_p2242;
int rlsls1_m2242;
int rlsls1_v2251;
int rlsls1_v2242;
int rlsls1_p2239;
int rlsls1_m2239;
int rlsls1_p2236;
double rlsls1_m2236;
int rlsls1_p2213;
double rlsls1_m2213;
double rlsls1_v2213;
int rlsls1_p2205;
double rlsls1_m2205;
int rlsls1_p2234;
double rlsls1_m2234;
int rlsls1_p727;
int rlsls1_m727;
int rlsls1_p725;
int rlsls1_m725;
int rlsls1_p593;
double rlsls1_m593;
int rlsls1_p2233;
double rlsls1_m2233;
double rlsls1_v2233;
int rlsls1_p2221;
int rlsls1_m2221;
int rlsls1_v2221;
double rlsls1_v2205;
int rlsls1_p2195;
int rlsls1_m2195;
int rlsls1_p2194;
int rlsls1_m2194;
int rlsls1_p2189;
double rlsls1_m2189;
int rlsls1_p2192;
double rlsls1_m2192;
int rlsls1_p2191;
int rlsls1_m2191;
int rlsls1_v2191;
int rlsls1_p2184;
int rlsls1_m2184;
double rlsls1_v2662;
double rlsls1_v2234;
int rlsls1_p285;
double rlsls1_m285;
double rlsls1_v3139;
double rlsls1_v2234;
int rlsls1_p263;
double rlsls1_m263;
int rlsls1_p715;
int rlsls1_m715;
double rlsls1_v2234;
double rlsls1_v1455;
double rlsls1_v2234;
double rlsls1_v922;
int rlsls1_p581;
double rlsls1_m581;
int rlsls1_p19;
double_or_symbol rlsls1_m19;
int rlsls1_p2180;
double rlsls1_m2180;
int rlsls1_p2182;
double rlsls1_m2182;
int rlsls1_p2181;
int rlsls1_m2181;
int rlsls1_p2183;
int rlsls1_m2183;
int rlsls1_v2181;
int rlsls1_p2175;
int rlsls1_m2175;
int rlsls1_p2358;
double rlsls1_m2358;
int rlsls1_p2357;
double rlsls1_m2357;
int rlsls1_p2355;
double rlsls1_m2355;
double rlsls1_v2355;
int rlsls1_p2346;
int rlsls1_m2346;
int rlsls1_p2325;
int rlsls1_m2325;
int rlsls1_p2316;
int rlsls1_m2316;
int rlsls1_v2325;
int rlsls1_v2316;
int rlsls1_p2313;
int rlsls1_m2313;
int rlsls1_p2310;
double rlsls1_m2310;
int rlsls1_p2287;
double rlsls1_m2287;
double rlsls1_v2287;
int rlsls1_p2279;
double rlsls1_m2279;
int rlsls1_p2308;
double rlsls1_m2308;
int rlsls1_p740;
int rlsls1_m740;
int rlsls1_p738;
int rlsls1_m738;
int rlsls1_p609;
double rlsls1_m609;
int rlsls1_p2307;
double rlsls1_m2307;
double rlsls1_v2307;
int rlsls1_p2295;
int rlsls1_m2295;
int rlsls1_v2295;
double rlsls1_v2279;
int rlsls1_p2269;
int rlsls1_m2269;
double rlsls1_v2662;
double rlsls1_v2308;
int rlsls1_p291;
double rlsls1_m291;
double rlsls1_v3139;
double rlsls1_v2308;
int rlsls1_p269;
double rlsls1_m269;
int rlsls1_p729;
int rlsls1_m729;
double rlsls1_v2308;
double rlsls1_v1455;
double rlsls1_v2308;
double rlsls1_v922;
int rlsls1_p598;
double rlsls1_m598;
int rlsls1_p23;
double_or_symbol rlsls1_m23;
double rlsls1_v2308;
double rlsls1_v2234;
int rlsls1_p2127;
double rlsls1_m2127;
int rlsls1_p755;
int rlsls1_m755;
int rlsls1_p753;
int rlsls1_m753;
int rlsls1_p746;
int rlsls1_m746;
int rlsls1_p751;
int rlsls1_m751;
int rlsls1_p621;
double rlsls1_m621;
int rlsls1_p2173;
int rlsls1_m2173;
int rlsls1_p750;
int rlsls1_m750;
int rlsls1_p2268;
int rlsls1_m2268;
int rlsls1_p2263;
double rlsls1_m2263;
int rlsls1_p2266;
double rlsls1_m2266;
int rlsls1_p2265;
int rlsls1_m2265;
int rlsls1_v2265;
int rlsls1_p2258;
int rlsls1_m2258;
int rlsls1_p2586;
double rlsls1_m2586;
int rlsls1_p2585;
int rlsls1_m2585;
int rlsls1_p2532;
double rlsls1_m2532;
int rlsls1_p2521;
double rlsls1_m2521;
double rlsls1_v2521;
int rlsls1_p2513;
int rlsls1_m2513;
int rlsls1_p2445;
int rlsls1_m2445;
int rlsls1_p2439;
int rlsls1_m2439;
int rlsls1_v2445;
int rlsls1_v2439;
int rlsls1_p2436;
int rlsls1_m2436;
int rlsls1_p2434;
double rlsls1_m2434;
int rlsls1_p2414;
double rlsls1_m2414;
double rlsls1_v2414;
int rlsls1_p2406;
double rlsls1_m2406;
int rlsls1_p2432;
double rlsls1_m2432;
int rlsls1_p774;
int rlsls1_m774;
int rlsls1_p772;
int rlsls1_m772;
int rlsls1_p642;
double rlsls1_m642;
int rlsls1_p2431;
double rlsls1_m2431;
double rlsls1_v2431;
int rlsls1_p2419;
int rlsls1_m2419;
int rlsls1_v2419;
double rlsls1_v2406;
int rlsls1_p2396;
int rlsls1_m2396;
int rlsls1_p2395;
int rlsls1_m2395;
int rlsls1_p2390;
double rlsls1_m2390;
int rlsls1_p2393;
double rlsls1_m2393;
int rlsls1_p2392;
int rlsls1_m2392;
int rlsls1_v2392;
int rlsls1_p2385;
int rlsls1_m2385;
double rlsls1_v2662;
double rlsls1_v2432;
int rlsls1_p539;
double rlsls1_m539;
double rlsls1_v3139;
double rlsls1_v2432;
int rlsls1_p491;
double rlsls1_m491;
int rlsls1_p762;
int rlsls1_m762;
double rlsls1_v2432;
double rlsls1_v1455;
double rlsls1_v2432;
double rlsls1_v922;
int rlsls1_p630;
double rlsls1_m630;
int rlsls1_p31;
double_or_symbol rlsls1_m31;
int rlsls1_p2381;
double rlsls1_m2381;
int rlsls1_p2383;
double rlsls1_m2383;
int rlsls1_p2382;
int rlsls1_m2382;
int rlsls1_p2384;
int rlsls1_m2384;
int rlsls1_v2382;
int rlsls1_p2376;
int rlsls1_m2376;
int rlsls1_p2531;
double rlsls1_m2531;
double rlsls1_v2531;
int rlsls1_p2523;
int rlsls1_m2523;
int rlsls1_p2509;
int rlsls1_m2509;
int rlsls1_p2503;
int rlsls1_m2503;
int rlsls1_v2509;
int rlsls1_v2503;
int rlsls1_p2500;
int rlsls1_m2500;
int rlsls1_p2498;
double rlsls1_m2498;
int rlsls1_p2478;
double rlsls1_m2478;
double rlsls1_v2478;
int rlsls1_p2470;
double rlsls1_m2470;
int rlsls1_p2496;
double rlsls1_m2496;
int rlsls1_p787;
int rlsls1_m787;
int rlsls1_p785;
int rlsls1_m785;
int rlsls1_p658;
double rlsls1_m658;
int rlsls1_p2495;
double rlsls1_m2495;
double rlsls1_v2495;
int rlsls1_p2483;
int rlsls1_m2483;
int rlsls1_v2483;
double rlsls1_v2470;
int rlsls1_p2460;
int rlsls1_m2460;
double rlsls1_v2662;
double rlsls1_v2496;
int rlsls1_p545;
double rlsls1_m545;
double rlsls1_v3139;
double rlsls1_v2496;
int rlsls1_p497;
double rlsls1_m497;
int rlsls1_p776;
int rlsls1_m776;
double rlsls1_v2496;
double rlsls1_v1455;
double rlsls1_v2496;
double rlsls1_v922;
int rlsls1_p647;
double rlsls1_m647;
int rlsls1_p35;
double_or_symbol rlsls1_m35;
double rlsls1_v2496;
double rlsls1_v2432;
int rlsls1_p2141;
double rlsls1_m2141;
int rlsls1_p802;
int rlsls1_m802;
int rlsls1_p800;
int rlsls1_m800;
int rlsls1_p793;
int rlsls1_m793;
int rlsls1_p798;
int rlsls1_m798;
int rlsls1_p670;
double rlsls1_m670;
int rlsls1_p2374;
int rlsls1_m2374;
int rlsls1_p797;
int rlsls1_m797;
int rlsls1_p2459;
int rlsls1_m2459;
int rlsls1_p2454;
double rlsls1_m2454;
int rlsls1_p2457;
double rlsls1_m2457;
int rlsls1_p2456;
int rlsls1_m2456;
int rlsls1_v2456;
int rlsls1_p2449;
int rlsls1_m2449;
int rlsls1_p2594;
int rlsls1_m2594;
double rlsls1_v2662;
double rlsls1_v2153;
double rlsls1_v2662;
double rlsls1_v2578;
int rlsls1_p551;
double rlsls1_m551;
double rlsls1_v3139;
double rlsls1_v2153;
double rlsls1_v3139;
double rlsls1_v2578;
int rlsls1_p503;
double rlsls1_m503;
int rlsls1_p803;
int rlsls1_m803;
double rlsls1_v2578;
double rlsls1_v1455;
double rlsls1_v2578;
double rlsls1_v922;
int rlsls1_p673;
double rlsls1_m673;
int rlsls1_v2538;
int rlsls1_p37;
double_or_symbol rlsls1_m37;
int rlsls1_p2111;
double rlsls1_m2111;
int rlsls1_p2148;
double rlsls1_m2148;
int rlsls1_v2594;
int rlsls1_p2587;
int rlsls1_m2587;
int rlsls1_p572;
double rlsls1_m572;
double rlsls1_v2662;
double rlsls1_v572;
int rlsls1_p560;
double rlsls1_m560;
double rlsls1_v3139;
double rlsls1_v572;
int rlsls1_p512;
double rlsls1_m512;
int rlsls1_p2094;
double rlsls1_m2094;
int rlsls1_p2117;
double rlsls1_m2117;
int rlsls1_p2116;
int rlsls1_m2116;
int rlsls1_p2533;
int rlsls1_m2533;
int rlsls1_p2163;
int rlsls1_m2163;
int rlsls1_v2116;
int rlsls1_p2089;
int rlsls1_m2089;
int rlsls1_p569;
int rlsls1_m569;
double rlsls1_v7240;
int rlsls1_p7235;
double rlsls1_m7235;
double rlsls1_v7235;
int rlsls1_p7211;
double rlsls1_m7211;
int rlsls1_p2877;
double rlsls1_m2877;
int rlsls1_p2876;
int rlsls1_m2876;
int rlsls1_p2871;
double rlsls1_m2871;
int rlsls1_p2855;
double rlsls1_m2855;
int rlsls1_p2854;
double rlsls1_m2854;
int rlsls1_p2852;
double rlsls1_m2852;
double rlsls1_v2852;
int rlsls1_p2843;
int rlsls1_m2843;
int rlsls1_p2762;
int rlsls1_m2762;
int rlsls1_p2753;
int rlsls1_m2753;
int rlsls1_v2762;
int rlsls1_v2753;
int rlsls1_p2750;
int rlsls1_m2750;
int rlsls1_p2747;
double rlsls1_m2747;
int rlsls1_p2724;
double rlsls1_m2724;
double rlsls1_v2724;
int rlsls1_p2716;
double rlsls1_m2716;
int rlsls1_p2745;
double rlsls1_m2745;
double rlsls1_v2745;
double rlsls1_v2308;
int rlsls1_p124;
double rlsls1_m124;
double rlsls1_v2745;
double rlsls1_v2234;
int rlsls1_p118;
double rlsls1_m118;
double rlsls1_v2745;
double rlsls1_v1419;
int rlsls1_p103;
double rlsls1_m103;
int rlsls1_p2744;
double rlsls1_m2744;
double rlsls1_v2744;
int rlsls1_p2732;
int rlsls1_m2732;
int rlsls1_v2732;
double rlsls1_v2716;
int rlsls1_p2706;
int rlsls1_m2706;
int rlsls1_p2705;
int rlsls1_m2705;
int rlsls1_p2700;
double rlsls1_m2700;
int rlsls1_p2703;
double rlsls1_m2703;
int rlsls1_p2702;
int rlsls1_m2702;
int rlsls1_v2702;
int rlsls1_p2695;
int rlsls1_m2695;
double rlsls1_v2745;
double rlsls1_v572;
double rlsls1_v2745;
double rlsls1_v2153;
double rlsls1_v2745;
double rlsls1_v2578;
double rlsls1_v2745;
double rlsls1_v2127;
double rlsls1_v2745;
double rlsls1_v845;
double rlsls1_v2745;
double rlsls1_v1455;
double rlsls1_v2745;
double rlsls1_v922;
int rlsls1_p90;
double rlsls1_m90;
int rlsls1_p55;
double_or_symbol rlsls1_m55;
int rlsls1_p2691;
double rlsls1_m2691;
int rlsls1_p2693;
double rlsls1_m2693;
int rlsls1_p2692;
int rlsls1_m2692;
int rlsls1_p2694;
int rlsls1_m2694;
int rlsls1_v2692;
int rlsls1_p2686;
int rlsls1_m2686;
int rlsls1_p2869;
double rlsls1_m2869;
int rlsls1_p2868;
double rlsls1_m2868;
int rlsls1_p2866;
double rlsls1_m2866;
double rlsls1_v2866;
int rlsls1_p2857;
int rlsls1_m2857;
int rlsls1_p2836;
int rlsls1_m2836;
int rlsls1_p2827;
int rlsls1_m2827;
int rlsls1_v2836;
int rlsls1_v2827;
int rlsls1_p2824;
int rlsls1_m2824;
int rlsls1_p2821;
double rlsls1_m2821;
int rlsls1_p2798;
double rlsls1_m2798;
double rlsls1_v2798;
int rlsls1_p2790;
double rlsls1_m2790;
int rlsls1_p2819;
double rlsls1_m2819;
double rlsls1_v2819;
double rlsls1_v2308;
int rlsls1_p177;
double rlsls1_m177;
double rlsls1_v2819;
double rlsls1_v2234;
int rlsls1_p171;
double rlsls1_m171;
double rlsls1_v2819;
double rlsls1_v1419;
int rlsls1_p156;
double rlsls1_m156;
int rlsls1_p2818;
double rlsls1_m2818;
double rlsls1_v2818;
int rlsls1_p2806;
int rlsls1_m2806;
int rlsls1_v2806;
double rlsls1_v2790;
int rlsls1_p2780;
int rlsls1_m2780;
double rlsls1_v2819;
double rlsls1_v572;
double rlsls1_v2819;
double rlsls1_v2153;
double rlsls1_v2819;
double rlsls1_v2578;
double rlsls1_v2819;
double rlsls1_v2127;
double rlsls1_v2819;
double rlsls1_v845;
double rlsls1_v2819;
double rlsls1_v1455;
double rlsls1_v2819;
double rlsls1_v922;
int rlsls1_p144;
double rlsls1_m144;
int rlsls1_p59;
double_or_symbol rlsls1_m59;
double rlsls1_v2819;
double rlsls1_v2745;
int rlsls1_p2636;
double rlsls1_m2636;
double rlsls1_v2636;
double rlsls1_v2308;
int rlsls1_p227;
double rlsls1_m227;
double rlsls1_v2636;
double rlsls1_v2234;
int rlsls1_p221;
double rlsls1_m221;
double rlsls1_v2636;
double rlsls1_v1419;
int rlsls1_p206;
double rlsls1_m206;
int rlsls1_p2779;
int rlsls1_m2779;
int rlsls1_p2774;
double rlsls1_m2774;
int rlsls1_p2777;
double rlsls1_m2777;
int rlsls1_p2776;
int rlsls1_m2776;
int rlsls1_v2776;
int rlsls1_p2769;
int rlsls1_m2769;
int rlsls1_p3225;
double rlsls1_m3225;
int rlsls1_p3224;
int rlsls1_m3224;
int rlsls1_p3064;
double rlsls1_m3064;
int rlsls1_p3050;
double rlsls1_m3050;
double rlsls1_v3050;
int rlsls1_p3042;
int rlsls1_m3042;
int rlsls1_p2964;
int rlsls1_m2964;
int rlsls1_p2958;
int rlsls1_m2958;
int rlsls1_v2964;
int rlsls1_v2958;
int rlsls1_p2955;
int rlsls1_m2955;
int rlsls1_p2953;
double rlsls1_m2953;
int rlsls1_p2933;
double rlsls1_m2933;
double rlsls1_v2933;
int rlsls1_p2925;
double rlsls1_m2925;
int rlsls1_p2951;
double rlsls1_m2951;
double rlsls1_v2951;
double rlsls1_v2496;
int rlsls1_p337;
double rlsls1_m337;
double rlsls1_v2951;
double rlsls1_v2432;
int rlsls1_p331;
double rlsls1_m331;
double rlsls1_v2951;
double rlsls1_v1419;
int rlsls1_p316;
double rlsls1_m316;
int rlsls1_p2950;
double rlsls1_m2950;
double rlsls1_v2950;
int rlsls1_p2938;
int rlsls1_m2938;
int rlsls1_v2938;
double rlsls1_v2925;
int rlsls1_p2915;
int rlsls1_m2915;
int rlsls1_p2914;
int rlsls1_m2914;
int rlsls1_p2909;
double rlsls1_m2909;
int rlsls1_p2912;
double rlsls1_m2912;
int rlsls1_p2911;
int rlsls1_m2911;
int rlsls1_v2911;
int rlsls1_p2904;
int rlsls1_m2904;
double rlsls1_v2951;
double rlsls1_v572;
double rlsls1_v2951;
double rlsls1_v2153;
double rlsls1_v2951;
double rlsls1_v2578;
double rlsls1_v2951;
double rlsls1_v2141;
double rlsls1_v2951;
double rlsls1_v845;
double rlsls1_v2951;
double rlsls1_v1455;
double rlsls1_v2951;
double rlsls1_v922;
int rlsls1_p303;
double rlsls1_m303;
int rlsls1_p67;
double_or_symbol rlsls1_m67;
int rlsls1_p2900;
double rlsls1_m2900;
int rlsls1_p2902;
double rlsls1_m2902;
int rlsls1_p2901;
int rlsls1_m2901;
int rlsls1_p2903;
int rlsls1_m2903;
int rlsls1_v2901;
int rlsls1_p2895;
int rlsls1_m2895;
int rlsls1_p3063;
double rlsls1_m3063;
double rlsls1_v3063;
int rlsls1_p3052;
int rlsls1_m3052;
int rlsls1_p3035;
int rlsls1_m3035;
int rlsls1_p3026;
int rlsls1_m3026;
int rlsls1_v3035;
int rlsls1_v3026;
int rlsls1_p3023;
int rlsls1_m3023;
int rlsls1_p3020;
double rlsls1_m3020;
int rlsls1_p2997;
double rlsls1_m2997;
double rlsls1_v2997;
int rlsls1_p2989;
double rlsls1_m2989;
int rlsls1_p3018;
double rlsls1_m3018;
double rlsls1_v3018;
double rlsls1_v2496;
int rlsls1_p390;
double rlsls1_m390;
double rlsls1_v3018;
double rlsls1_v2432;
int rlsls1_p384;
double rlsls1_m384;
double rlsls1_v3018;
double rlsls1_v1419;
int rlsls1_p369;
double rlsls1_m369;
int rlsls1_p3017;
double rlsls1_m3017;
double rlsls1_v3017;
int rlsls1_p3005;
int rlsls1_m3005;
int rlsls1_v3005;
double rlsls1_v2989;
int rlsls1_p2979;
int rlsls1_m2979;
double rlsls1_v3018;
double rlsls1_v572;
double rlsls1_v3018;
double rlsls1_v2153;
double rlsls1_v3018;
double rlsls1_v2578;
double rlsls1_v3018;
double rlsls1_v2141;
double rlsls1_v3018;
double rlsls1_v845;
double rlsls1_v3018;
double rlsls1_v1455;
double rlsls1_v3018;
double rlsls1_v922;
int rlsls1_p357;
double rlsls1_m357;
int rlsls1_p71;
double_or_symbol rlsls1_m71;
double rlsls1_v3018;
double rlsls1_v2951;
int rlsls1_p2650;
double rlsls1_m2650;
double rlsls1_v2650;
double rlsls1_v2496;
int rlsls1_p440;
double rlsls1_m440;
double rlsls1_v2650;
double rlsls1_v2432;
int rlsls1_p434;
double rlsls1_m434;
double rlsls1_v2650;
double rlsls1_v1419;
int rlsls1_p419;
double rlsls1_m419;
int rlsls1_p2978;
int rlsls1_m2978;
int rlsls1_p2973;
double rlsls1_m2973;
int rlsls1_p2976;
double rlsls1_m2976;
int rlsls1_p2975;
int rlsls1_m2975;
int rlsls1_v2975;
int rlsls1_p2968;
int rlsls1_m2968;
int rlsls1_p3242;
int rlsls1_m3242;
int rlsls1_v3070;
int rlsls1_p73;
double_or_symbol rlsls1_m73;
int rlsls1_p2620;
double rlsls1_m2620;
int rlsls1_p2657;
double rlsls1_m2657;
int rlsls1_v3242;
int rlsls1_p3233;
int rlsls1_m3233;
int rlsls1_p2625;
int rlsls1_m2625;
int rlsls1_p3065;
int rlsls1_m3065;
int rlsls1_v2625;
int rlsls1_v2089;
int rlsls1_v569;
double rlsls1_v2662;
double rlsls1_v2141;
double rlsls1_v3139;
double rlsls1_v2141;
double rlsls1_v2650;
double rlsls1_v572;
double rlsls1_v2650;
double rlsls1_v2153;
double rlsls1_v2650;
double rlsls1_v2578;
double rlsls1_v2650;
double rlsls1_v2141;
double rlsls1_v2650;
double rlsls1_v845;
double rlsls1_v2650;
double rlsls1_v1455;
double rlsls1_v2650;
double rlsls1_v922;
double rlsls1_v2662;
double rlsls1_v2127;
double rlsls1_v3139;
double rlsls1_v2127;
double rlsls1_v2636;
double rlsls1_v572;
double rlsls1_v2636;
double rlsls1_v2153;
double rlsls1_v2636;
double rlsls1_v2578;
double rlsls1_v2636;
double rlsls1_v2127;
double rlsls1_v2636;
double rlsls1_v845;
double rlsls1_v2636;
double rlsls1_v1455;
double rlsls1_v2636;
double rlsls1_v922;
static double rlsls1_f4788(){if (rlsls1_p4788) return rlsls1_m4788; else {rlsls1_p4788=T;return rlsls1_m4788=atan2((rlsls1_v7316-rlsls1_v7312),(rlsls1_v7318-rlsls1_v7314));}}
static double rlsls1_f1507(){if (rlsls1_p1507) return rlsls1_m1507; else {rlsls1_p1507=T;return rlsls1_m1507=error("Non-numeric argument to MIN");}}
static double rlsls1_f1509(){if (rlsls1_p1509) return rlsls1_m1509; else {rlsls1_p1509=T;return rlsls1_m1509=error("Argument DIRECTION not of type FLOAT");}}
static double rlsls1_f1419(){if (rlsls1_p1419) return rlsls1_m1419; else {rlsls1_p1419=T;return rlsls1_m1419=error("No applicable method for OPPOSITE with argument types ((OR NULL FLOAT))");}}
static double rlsls1_f5522(){if (rlsls1_p5522) return rlsls1_m5522; else {rlsls1_p5522=T;return rlsls1_m5522=atan2((rlsls1_v7320-rlsls1_v7312),(rlsls1_v7322-rlsls1_v7314));}}
static double rlsls1_f5675(){if (rlsls1_p5675) return rlsls1_m5675; else {rlsls1_p5675=T;return rlsls1_m5675=(((rlsls1_v7330<rlsls1_v7326)?rlsls1_v7330:rlsls1_v7326)-rlsls1_v7308);}}
static double rlsls1_f5673(){if (rlsls1_p5673) return rlsls1_m5673; else {rlsls1_p5673=T;return rlsls1_m5673=(((rlsls1_v7330>rlsls1_v7326)?rlsls1_v7330:rlsls1_v7326)+rlsls1_v7308);}}
static double rlsls1_f5666(){if (rlsls1_p5666) return rlsls1_m5666; else {rlsls1_p5666=T;return rlsls1_m5666=(((rlsls1_v7328<rlsls1_v7324)?rlsls1_v7328:rlsls1_v7324)-rlsls1_v7308);}}
static double rlsls1_f5664(){if (rlsls1_p5664) return rlsls1_m5664; else {rlsls1_p5664=T;return rlsls1_m5664=(((rlsls1_v7328>rlsls1_v7324)?rlsls1_v7328:rlsls1_v7324)+rlsls1_v7308);}}
static double rlsls1_f6280(){if (rlsls1_p6280) return rlsls1_m6280; else {rlsls1_p6280=T;return rlsls1_m6280=atan2((rlsls1_v7324-rlsls1_v7312),(rlsls1_v7326-rlsls1_v7314));}}
static double rlsls1_f6438(){if (rlsls1_p6438) return rlsls1_m6438; else {rlsls1_p6438=T;return rlsls1_m6438=(rlsls1_v7328-rlsls1_v7324);}}
static int rlsls1_f5833(){if (rlsls1_p5833) return rlsls1_m5833; else {rlsls1_p5833=T;return rlsls1_m5833=(fabs(rlsls1_f6438())<rlsls1_v7308);}}
static double rlsls1_f6437(){if (rlsls1_p6437) return rlsls1_m6437; else {rlsls1_p6437=T;return rlsls1_m6437=(rlsls1_v7330-rlsls1_v7326);}}
static int rlsls1_f5831(){if (rlsls1_p5831) return rlsls1_m5831; else {rlsls1_p5831=T;return rlsls1_m5831=(fabs(rlsls1_f6437())<rlsls1_v7308);}}
static double rlsls1_f6461(){if (rlsls1_p6461) return rlsls1_m6461; else {rlsls1_p6461=T;return rlsls1_m6461=(rlsls1_v7314-rlsls1_v7326);}}
static double rlsls1_f6458(){if (rlsls1_p6458) return rlsls1_m6458; else {rlsls1_p6458=T;return rlsls1_m6458=(rlsls1_v7312-rlsls1_v7324);}}
static int rlsls1_f2597(){if (rlsls1_p2597) return rlsls1_m2597; else {rlsls1_p2597=T;return rlsls1_m2597=((fabs(rlsls1_f6461())<rlsls1_v7308)?(fabs(rlsls1_f6458())<rlsls1_v7308):NIL);}}
static double rlsls1_f6432(){if (rlsls1_p6432) return rlsls1_m6432; else {rlsls1_p6432=T;return rlsls1_m6432=fabs(normalize_rotation((atan2(rlsls1_f6438(),rlsls1_f6437())-atan2(rlsls1_f6458(),rlsls1_f6461()))));}}
static int rlsls1_f2593(){if (rlsls1_p2593) return rlsls1_m2593; else {rlsls1_p2593=T;return rlsls1_m2593=(rlsls1_f6432()>(1.5707963267948966));}}
static int rlsls1_f2589(){if (rlsls1_p2589) return rlsls1_m2589; else {rlsls1_p2589=T;return rlsls1_m2589=((rlsls1_v2593=rlsls1_f2593()),(rlsls1_v2593?rlsls1_v2593:(fabs((rlsls1_f6432()-(1.5707963267948966)))<rlsls1_v7308)));}}
static int rlsls1_f1983(){if (rlsls1_p1983) return rlsls1_m1983; else {rlsls1_p1983=T;return rlsls1_m1983=(rlsls1_f2589()?NIL:T);}}
static double rlsls1_f6446(){if (rlsls1_p6446) return rlsls1_m6446; else {rlsls1_p6446=T;return rlsls1_m6446=((rlsls1_v6461=rlsls1_f6461()),(rlsls1_v6458=rlsls1_f6458()),(rlsls1_v7314-(rlsls1_v7314+sqrt(((rlsls1_v6461*rlsls1_v6461)+(rlsls1_v6458*rlsls1_v6458))))));}}
static double rlsls1_f2664(){if (rlsls1_p2664) return rlsls1_m2664; else {rlsls1_p2664=T;return rlsls1_m2664=error("Non-numeric argument to MAX");}}
static double rlsls1_f3077(){if (rlsls1_p3077) return rlsls1_m3077; else {rlsls1_p3077=T;return rlsls1_m3077=error("Argument X not of type FLOAT");}}
static double rlsls1_f3082(){if (rlsls1_p3082) return rlsls1_m3082; else {rlsls1_p3082=T;return rlsls1_m3082=error("Argument X not of type REAL");}}
static double rlsls1_f6935(){if (rlsls1_p6935) return rlsls1_m6935; else {rlsls1_p6935=T;return rlsls1_m6935=atan2((rlsls1_v7328-rlsls1_v7312),(rlsls1_v7330-rlsls1_v7314));}}
static double rlsls1_f3148(){if (rlsls1_p3148) return rlsls1_m3148; else {rlsls1_p3148=T;return rlsls1_m3148=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rlsls1_f3144(){if (rlsls1_p3144) return rlsls1_m3144; else {rlsls1_p3144=T;return rlsls1_m3144=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double rlsls1_f6984(){if (rlsls1_p6984) return rlsls1_m6984; else {rlsls1_p6984=T;return rlsls1_m6984=(rlsls1_v7312-rlsls1_v7320);}}
static double rlsls1_f6983(){if (rlsls1_p6983) return rlsls1_m6983; else {rlsls1_p6983=T;return rlsls1_m6983=(rlsls1_v7314-rlsls1_v7322);}}
static int rlsls1_f2088(){if (rlsls1_p2088) return rlsls1_m2088; else {rlsls1_p2088=T;return rlsls1_m2088=((fabs(rlsls1_f6983())<rlsls1_v7308)?(fabs(rlsls1_f6984())<rlsls1_v7308):NIL);}}
static double rlsls1_f5783(){if (rlsls1_p5783) return rlsls1_m5783; else {rlsls1_p5783=T;return rlsls1_m5783=((rlsls1_v6983=rlsls1_f6983()),(rlsls1_v6984=rlsls1_f6984()),(rlsls1_v7314-(rlsls1_v7314+sqrt(((rlsls1_v6983*rlsls1_v6983)+(rlsls1_v6984*rlsls1_v6984))))));}}
static double rlsls1_f6959(){if (rlsls1_p6959) return rlsls1_m6959; else {rlsls1_p6959=T;return rlsls1_m6959=(rlsls1_v7312-rlsls1_v7316);}}
static double rlsls1_f6958(){if (rlsls1_p6958) return rlsls1_m6958; else {rlsls1_p6958=T;return rlsls1_m6958=(rlsls1_v7314-rlsls1_v7318);}}
static int rlsls1_f1408(){if (rlsls1_p1408) return rlsls1_m1408; else {rlsls1_p1408=T;return rlsls1_m1408=((fabs(rlsls1_f6958())<rlsls1_v7308)?(fabs(rlsls1_f6959())<rlsls1_v7308):NIL);}}
static double rlsls1_f4942(){if (rlsls1_p4942) return rlsls1_m4942; else {rlsls1_p4942=T;return rlsls1_m4942=((rlsls1_v6958=rlsls1_f6958()),(rlsls1_v6959=rlsls1_f6959()),(rlsls1_v7314-(rlsls1_v7314+sqrt(((rlsls1_v6958*rlsls1_v6958)+(rlsls1_v6959*rlsls1_v6959))))));}}
static double rlsls1_f7117(){if (rlsls1_p7117) return rlsls1_m7117; else {rlsls1_p7117=T;return rlsls1_m7117=(((rlsls1_v7322<rlsls1_v7318)?rlsls1_v7322:rlsls1_v7318)-rlsls1_v7308);}}
static double rlsls1_f7115(){if (rlsls1_p7115) return rlsls1_m7115; else {rlsls1_p7115=T;return rlsls1_m7115=(((rlsls1_v7322>rlsls1_v7318)?rlsls1_v7322:rlsls1_v7318)+rlsls1_v7308);}}
static double rlsls1_f7108(){if (rlsls1_p7108) return rlsls1_m7108; else {rlsls1_p7108=T;return rlsls1_m7108=(((rlsls1_v7320<rlsls1_v7316)?rlsls1_v7320:rlsls1_v7316)-rlsls1_v7308);}}
static double rlsls1_f7106(){if (rlsls1_p7106) return rlsls1_m7106; else {rlsls1_p7106=T;return rlsls1_m7106=(((rlsls1_v7320>rlsls1_v7316)?rlsls1_v7320:rlsls1_v7316)+rlsls1_v7308);}}
static double rlsls1_f7229(){if (rlsls1_p7229) return rlsls1_m7229; else {rlsls1_p7229=T;return rlsls1_m7229=(rlsls1_v7326-rlsls1_v7330);}}
static double rlsls1_f5829(){if (rlsls1_p5829) return rlsls1_m5829; else {rlsls1_p5829=T;return rlsls1_m5829=(rlsls1_f7229()/rlsls1_f6438());}}
static double rlsls1_f3265(){if (rlsls1_p3265) return rlsls1_m3265; else {rlsls1_p3265=T;return rlsls1_m3265=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static double rlsls1_f3280(){if (rlsls1_p3280) return rlsls1_m3280; else {rlsls1_p3280=T;return rlsls1_m3280=error("Can't form a single line when the end points are the same");}}
static double rlsls1_f2075(){if (rlsls1_p2075) return rlsls1_m2075; else {rlsls1_p2075=T;return rlsls1_m2075=(rlsls1_f5833()?(rlsls1_f5831()?rlsls1_f3280():rlsls1_v7328):(rlsls1_v7330+(rlsls1_f5829()*rlsls1_v7328)));}}
static double rlsls1_f2086(){if (rlsls1_p2086) return rlsls1_m2086; else {rlsls1_p2086=T;return rlsls1_m2086=(rlsls1_f5833()?(rlsls1_f5831()?rlsls1_f3280():(0.0)):(1.0));}}
static int rlsls1_f2051(){if (rlsls1_p2051) return rlsls1_m2051; else {rlsls1_p2051=T;return rlsls1_m2051=(rlsls1_f2086()==0.0);}}
static double rlsls1_f2073(){if (rlsls1_p2073) return rlsls1_m2073; else {rlsls1_p2073=T;return rlsls1_m2073=(rlsls1_f2086()*rlsls1_v7312);}}
static double rlsls1_f2085(){if (rlsls1_p2085) return rlsls1_m2085; else {rlsls1_p2085=T;return rlsls1_m2085=((rlsls1_v2086=rlsls1_f2086()),(rlsls1_v2086*rlsls1_v2086));}}
static double rlsls1_f2083(){if (rlsls1_p2083) return rlsls1_m2083; else {rlsls1_p2083=T;return rlsls1_m2083=(rlsls1_f5833()?(rlsls1_f5831()?rlsls1_f3280():(1.0)):rlsls1_f5829());}}
static double rlsls1_f1377(){if (rlsls1_p1377) return rlsls1_m1377; else {rlsls1_p1377=T;return rlsls1_m1377=(((rlsls1_f2086()*rlsls1_v7322)+(rlsls1_f2083()*rlsls1_v7320))-rlsls1_f2075());}}
static int rlsls1_f1374(){if (rlsls1_p1374) return rlsls1_m1374; else {rlsls1_p1374=T;return rlsls1_m1374=(fabs((rlsls1_f1377()-(0.0)))<rlsls1_v7308);}}
static int rlsls1_f1373(){if (rlsls1_p1373) return rlsls1_m1373; else {rlsls1_p1373=T;return rlsls1_m1373=(rlsls1_f1377()>(0.0));}}
static int rlsls1_f1372(){if (rlsls1_p1372) return rlsls1_m1372; else {rlsls1_p1372=T;return rlsls1_m1372=(rlsls1_f1373()?NIL:T);}}
static double rlsls1_f1892(){if (rlsls1_p1892) return rlsls1_m1892; else {rlsls1_p1892=T;return rlsls1_m1892=(rlsls1_f2075()/rlsls1_f2083());}}
static int rlsls1_f1867(){if (rlsls1_p1867) return rlsls1_m1867; else {rlsls1_p1867=T;return rlsls1_m1867=(fabs((rlsls1_f1892()-rlsls1_v7328))<rlsls1_v7308);}}
static int rlsls1_f1858(){if (rlsls1_p1858) return rlsls1_m1858; else {rlsls1_p1858=T;return rlsls1_m1858=(fabs((rlsls1_f1892()-rlsls1_v7324))<rlsls1_v7308);}}
static int rlsls1_f1830(){if (rlsls1_p1830) return rlsls1_m1830; else {rlsls1_p1830=T;return rlsls1_m1830=(fabs((rlsls1_v7312-rlsls1_f1892()))<rlsls1_v7308);}}
static double rlsls1_f1853(){if (rlsls1_p1853) return rlsls1_m1853; else {rlsls1_p1853=T;return rlsls1_m1853=(rlsls1_f1892()-rlsls1_v7312);}}
static int rlsls1_f1885(){if (rlsls1_p1885) return rlsls1_m1885; else {rlsls1_p1885=T;return rlsls1_m1885=((rlsls1_f5666()<=rlsls1_f1892())&&(rlsls1_f1892()<=rlsls1_f5664()));}}
static double rlsls1_f1891(){if (rlsls1_p1891) return rlsls1_m1891; else {rlsls1_p1891=T;return rlsls1_m1891=(rlsls1_f2083()*rlsls1_f1892());}}
static double rlsls1_f1946(){if (rlsls1_p1946) return rlsls1_m1946; else {rlsls1_p1946=T;return rlsls1_m1946=(((rlsls1_f2086()*rlsls1_v7318)+(rlsls1_f2083()*rlsls1_v7316))-rlsls1_f2075());}}
static int rlsls1_f1943(){if (rlsls1_p1943) return rlsls1_m1943; else {rlsls1_p1943=T;return rlsls1_m1943=(fabs((rlsls1_f1946()-(0.0)))<rlsls1_v7308);}}
static int rlsls1_f1929(){if (rlsls1_p1929) return rlsls1_m1929; else {rlsls1_p1929=T;return rlsls1_m1929=(rlsls1_f1946()>(0.0));}}
static int rlsls1_f1928(){if (rlsls1_p1928) return rlsls1_m1928; else {rlsls1_p1928=T;return rlsls1_m1928=(rlsls1_f1929()?NIL:T);}}
static int rlsls1_f2042(){if (rlsls1_p2042) return rlsls1_m2042; else {rlsls1_p2042=T;return rlsls1_m2042=(rlsls1_f2083()>0.0);}}
static double rlsls1_f2040(){if (rlsls1_p2040) return rlsls1_m2040; else {rlsls1_p2040=T;return rlsls1_m2040=(rlsls1_f2042()?(-rlsls1_f2086()):rlsls1_f2086());}}
static double rlsls1_f2046(){if (rlsls1_p2046) return rlsls1_m2046; else {rlsls1_p2046=T;return rlsls1_m2046=((rlsls1_v2083=rlsls1_f2083()),(rlsls1_v2083*rlsls1_v2083));}}
static double rlsls1_f1716(){if (rlsls1_p1716) return rlsls1_m1716; else {rlsls1_p1716=T;return rlsls1_m1716=(rlsls1_f2085()+rlsls1_f2046());}}
static double rlsls1_f1709(){if (rlsls1_p1709) return rlsls1_m1709; else {rlsls1_p1709=T;return rlsls1_m1709=((rlsls1_v1716=rlsls1_f1716()),(rlsls1_v1716+rlsls1_v1716));}}
static double rlsls1_f2048(){if (rlsls1_p2048) return rlsls1_m2048; else {rlsls1_p2048=T;return rlsls1_m2048=(rlsls1_f2075()-(rlsls1_f2086()*rlsls1_v7314)-(rlsls1_f2083()*rlsls1_v7312));}}
static double rlsls1_f1718(){if (rlsls1_p1718) return rlsls1_m1718; else {rlsls1_p1718=T;return rlsls1_m1718=((-2.0)*rlsls1_f2083()*rlsls1_f2048());}}
static double rlsls1_f1708(){if (rlsls1_p1708) return rlsls1_m1708; else {rlsls1_p1708=T;return rlsls1_m1708=((-rlsls1_f1718())/rlsls1_f1709());}}
static double rlsls1_f1717(){if (rlsls1_p1717) return rlsls1_m1717; else {rlsls1_p1717=T;return rlsls1_m1717=((rlsls1_v1718=rlsls1_f1718()),(rlsls1_v1718*rlsls1_v1718));}}
static double rlsls1_f2047(){if (rlsls1_p2047) return rlsls1_m2047; else {rlsls1_p2047=T;return rlsls1_m2047=((rlsls1_v2048=rlsls1_f2048()),(rlsls1_v2048*rlsls1_v2048));}}
static double rlsls1_f2045(){if (rlsls1_p2045) return rlsls1_m2045; else {rlsls1_p2045=T;return rlsls1_m2045=(rlsls1_f2047()/rlsls1_f2046());}}
static double rlsls1_f2072(){if (rlsls1_p2072) return rlsls1_m2072; else {rlsls1_p2072=T;return rlsls1_m2072=(rlsls1_f2083()*rlsls1_v7314);}}
static double rlsls1_f2071(){if (rlsls1_p2071) return rlsls1_m2071; else {rlsls1_p2071=T;return rlsls1_m2071=(rlsls1_f2073()-rlsls1_f2072());}}
static double rlsls1_f2030(){if (rlsls1_p2030) return rlsls1_m2030; else {rlsls1_p2030=T;return rlsls1_m2030=(rlsls1_f2042()?(rlsls1_f2072()-rlsls1_f2073()):rlsls1_f2071());}}
static double rlsls1_f2028(){if (rlsls1_p2028) return rlsls1_m2028; else {rlsls1_p2028=T;return rlsls1_m2028=((rlsls1_f2075()*rlsls1_f2040())-(rlsls1_f2083()*rlsls1_f2030()));}}
static double rlsls1_f2082(){if (rlsls1_p2082) return rlsls1_m2082; else {rlsls1_p2082=T;return rlsls1_m2082=(-rlsls1_f2083());}}
static double rlsls1_f2038(){if (rlsls1_p2038) return rlsls1_m2038; else {rlsls1_p2038=T;return rlsls1_m2038=(rlsls1_f2042()?rlsls1_f2083():rlsls1_f2082());}}
static double rlsls1_f2036(){if (rlsls1_p2036) return rlsls1_m2036; else {rlsls1_p2036=T;return rlsls1_m2036=((rlsls1_f2086()*rlsls1_f2040())-(rlsls1_f2083()*rlsls1_f2038()));}}
static double rlsls1_f2016(){if (rlsls1_p2016) return rlsls1_m2016; else {rlsls1_p2016=T;return rlsls1_m2016=(rlsls1_f2028()/rlsls1_f2036());}}
static int rlsls1_f2033(){if (rlsls1_p2033) return rlsls1_m2033; else {rlsls1_p2033=T;return rlsls1_m2033=(fabs((rlsls1_f2036()-(0.0)))<rlsls1_v7308);}}
static double rlsls1_f1976(){if (rlsls1_p1976) return rlsls1_m1976; else {rlsls1_p1976=T;return rlsls1_m1976=(rlsls1_f2033()?rlsls1_f3144():rlsls1_f2016());}}
static double rlsls1_f2022(){if (rlsls1_p2022) return rlsls1_m2022; else {rlsls1_p2022=T;return rlsls1_m2022=((rlsls1_f2086()*rlsls1_f2030())-(rlsls1_f2075()*rlsls1_f2038()));}}
static double rlsls1_f2014(){if (rlsls1_p2014) return rlsls1_m2014; else {rlsls1_p2014=T;return rlsls1_m2014=(rlsls1_f2022()/rlsls1_f2036());}}
static int rlsls1_f2004(){if (rlsls1_p2004) return rlsls1_m2004; else {rlsls1_p2004=T;return rlsls1_m2004=(rlsls1_f2033()?NIL:((rlsls1_v2016=rlsls1_f2016()),(rlsls1_v2014=rlsls1_f2014()),((fabs((((rlsls1_f2086()*rlsls1_v2016)+(rlsls1_f2083()*rlsls1_v2014))-rlsls1_f2075()))<rlsls1_v7308)?(((rlsls1_f5675()<=rlsls1_v2016)&&(rlsls1_v2016<=rlsls1_f5673()))?((rlsls1_f5666()<=rlsls1_v2014)&&(rlsls1_v2014<=rlsls1_f5664())):NIL):NIL)));}}
static int rlsls1_f1950(){if (rlsls1_p1950) return rlsls1_m1950; else {rlsls1_p1950=T;return rlsls1_m1950=(rlsls1_f2033()?NIL:((fabs((rlsls1_v7314-rlsls1_f2016()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f2014()))<rlsls1_v7308):NIL));}}
static double rlsls1_f1978(){if (rlsls1_p1978) return rlsls1_m1978; else {rlsls1_p1978=T;return rlsls1_m1978=(rlsls1_f2033()?rlsls1_f3148():rlsls1_f2014());}}
static double rlsls1_f1974(){if (rlsls1_p1974) return rlsls1_m1974; else {rlsls1_p1974=T;return rlsls1_m1974=atan2((rlsls1_f1978()-rlsls1_v7312),(rlsls1_f1976()-rlsls1_v7314));}}
static double rlsls1_f1394(){if (rlsls1_p1394) return rlsls1_m1394; else {rlsls1_p1394=T;return rlsls1_m1394=normalize_rotation((rlsls1_f1974()-rlsls1_f4788()));}}
static double rlsls1_f1393(){if (rlsls1_p1393) return rlsls1_m1393; else {rlsls1_p1393=T;return rlsls1_m1393=normalize_rotation(rlsls1_f1394());}}
static int rlsls1_f1381(){if (rlsls1_p1381) return rlsls1_m1381; else {rlsls1_p1381=T;return rlsls1_m1381=((rlsls1_v1393=rlsls1_f1393()),((fabs((rlsls1_v1393-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1393-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1393-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static double rlsls1_f1942(){if (rlsls1_p1942) return rlsls1_m1942; else {rlsls1_p1942=T;return rlsls1_m1942=(rlsls1_f1974()+(1.5707963267948966));}}
static double rlsls1_f1934(){if (rlsls1_p1934) return rlsls1_m1934; else {rlsls1_p1934=T;return rlsls1_m1934=((rlsls1_v1942=rlsls1_f1942()),(((rlsls1_f2086()*(rlsls1_f1976()+cos(rlsls1_v1942)))+(rlsls1_f2083()*(rlsls1_f1978()+sin(rlsls1_v1942))))-rlsls1_f2075()));}}
static int rlsls1_f1931(){if (rlsls1_p1931) return rlsls1_m1931; else {rlsls1_p1931=T;return rlsls1_m1931=(fabs((rlsls1_f1934()-(0.0)))<rlsls1_v7308);}}
static int rlsls1_f1930(){if (rlsls1_p1930) return rlsls1_m1930; else {rlsls1_p1930=T;return rlsls1_m1930=(rlsls1_f1934()>(0.0));}}
static double rlsls1_f1972(){if (rlsls1_p1972) return rlsls1_m1972; else {rlsls1_p1972=T;return rlsls1_m1972=normalize_rotation((rlsls1_f1974()-rlsls1_f5522()));}}
static double rlsls1_f1971(){if (rlsls1_p1971) return rlsls1_m1971; else {rlsls1_p1971=T;return rlsls1_m1971=normalize_rotation(rlsls1_f1972());}}
static int rlsls1_f1959(){if (rlsls1_p1959) return rlsls1_m1959; else {rlsls1_p1959=T;return rlsls1_m1959=((rlsls1_v1971=rlsls1_f1971()),((fabs((rlsls1_v1971-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1971-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1971-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f1996(){if (rlsls1_p1996) return rlsls1_m1996; else {rlsls1_p1996=T;return rlsls1_m1996=(rlsls1_f2033()?NIL:((fabs((rlsls1_f2016()-rlsls1_v7330))<rlsls1_v7308)?(fabs((rlsls1_f2014()-rlsls1_v7328))<rlsls1_v7308):NIL));}}
static int rlsls1_f1993(){if (rlsls1_p1993) return rlsls1_m1993; else {rlsls1_p1993=T;return rlsls1_m1993=(rlsls1_f1996()?NIL:T);}}
static int rlsls1_f1984(){if (rlsls1_p1984) return rlsls1_m1984; else {rlsls1_p1984=T;return rlsls1_m1984=(rlsls1_f2033()?NIL:((fabs((rlsls1_f2016()-rlsls1_v7326))<rlsls1_v7308)?(fabs((rlsls1_f2014()-rlsls1_v7324))<rlsls1_v7308):NIL));}}
static int rlsls1_f1981(){if (rlsls1_p1981) return rlsls1_m1981; else {rlsls1_p1981=T;return rlsls1_m1981=(rlsls1_f1984()?NIL:T);}}
static int rlsls1_f2018(){if (rlsls1_p2018) return rlsls1_m2018; else {rlsls1_p2018=T;return rlsls1_m2018=((fabs((rlsls1_f2028()-(0.0)))<rlsls1_v7308)?(fabs((rlsls1_f2022()-(0.0)))<rlsls1_v7308):NIL);}}
static int rlsls1_f2017(){if (rlsls1_p2017) return rlsls1_m2017; else {rlsls1_p2017=T;return rlsls1_m2017=(rlsls1_f2033()?rlsls1_f2018():T);}}
static int rlsls1_f1958(){if (rlsls1_p1958) return rlsls1_m1958; else {rlsls1_p1958=T;return rlsls1_m1958=(rlsls1_f2033()?rlsls1_f2018():NIL);}}
static int rlsls1_f1365(){if (rlsls1_p1365) return rlsls1_m1365; else {rlsls1_p1365=T;return rlsls1_m1365=((rlsls1_v1381=rlsls1_f1381()),(rlsls1_v1381?rlsls1_v1381:((rlsls1_v1958=rlsls1_f1958()),(rlsls1_v1958?rlsls1_v1958:(rlsls1_f1950()?NIL:((rlsls1_f1374()?NIL:(rlsls1_f1931()?NIL:(rlsls1_f1930()?rlsls1_f1373():rlsls1_f1372())))?NIL:T))))));}}
static int rlsls1_f1921(){if (rlsls1_p1921) return rlsls1_m1921; else {rlsls1_p1921=T;return rlsls1_m1921=((rlsls1_v1959=rlsls1_f1959()),(rlsls1_v1959?rlsls1_v1959:((rlsls1_v1958=rlsls1_f1958()),(rlsls1_v1958?rlsls1_v1958:(rlsls1_f1950()?NIL:((rlsls1_f1943()?NIL:(rlsls1_f1931()?NIL:(rlsls1_f1930()?rlsls1_f1929():rlsls1_f1928())))?NIL:T))))));}}
static double rlsls1_f2080(){if (rlsls1_p2080) return rlsls1_m2080; else {rlsls1_p2080=T;return rlsls1_m2080=(rlsls1_f2085()-(rlsls1_f2083()*rlsls1_f2082()));}}
static double rlsls1_f2067(){if (rlsls1_p2067) return rlsls1_m2067; else {rlsls1_p2067=T;return rlsls1_m2067=((((rlsls1_f2075()*rlsls1_f2086())-(rlsls1_f2083()*rlsls1_f2071()))/rlsls1_f2080())-rlsls1_v7314);}}
static double rlsls1_f2061(){if (rlsls1_p2061) return rlsls1_m2061; else {rlsls1_p2061=T;return rlsls1_m2061=((((rlsls1_f2086()*rlsls1_f2071())-(rlsls1_f2075()*rlsls1_f2082()))/rlsls1_f2080())-rlsls1_v7312);}}
static double rlsls1_f2057(){if (rlsls1_p2057) return rlsls1_m2057; else {rlsls1_p2057=T;return rlsls1_m2057=((fabs((rlsls1_f2080()-(0.0)))<rlsls1_v7308)?rlsls1_f3265():((rlsls1_v2067=rlsls1_f2067()),(rlsls1_v2061=rlsls1_f2061()),sqrt(((rlsls1_v2067*rlsls1_v2067)+(rlsls1_v2061*rlsls1_v2061)))));}}
static double rlsls1_f7293(){if (rlsls1_p7293) return rlsls1_m7293; else {rlsls1_p7293=T;return rlsls1_m7293=(rlsls1_v7322-rlsls1_v7318);}}
static int rlsls1_f7291(){if (rlsls1_p7291) return rlsls1_m7291; else {rlsls1_p7291=T;return rlsls1_m7291=(fabs(rlsls1_f7293())<rlsls1_v7308);}}
static double rlsls1_f7288(){if (rlsls1_p7288) return rlsls1_m7288; else {rlsls1_p7288=T;return rlsls1_m7288=(rlsls1_v7318-rlsls1_v7322);}}
static double rlsls1_f6979(){if (rlsls1_p6979) return rlsls1_m6979; else {rlsls1_p6979=T;return rlsls1_m6979=fabs(normalize_rotation((atan2((rlsls1_v7316-rlsls1_v7320),rlsls1_f7288())-atan2(rlsls1_f6984(),rlsls1_f6983()))));}}
static int rlsls1_f3176(){if (rlsls1_p3176) return rlsls1_m3176; else {rlsls1_p3176=T;return rlsls1_m3176=(rlsls1_f6979()>(1.5707963267948966));}}
static int rlsls1_f3172(){if (rlsls1_p3172) return rlsls1_m3172; else {rlsls1_p3172=T;return rlsls1_m3172=((rlsls1_v3176=rlsls1_f3176()),(rlsls1_v3176?rlsls1_v3176:(fabs((rlsls1_f6979()-(1.5707963267948966)))<rlsls1_v7308)));}}
static int rlsls1_f1982(){if (rlsls1_p1982) return rlsls1_m1982; else {rlsls1_p1982=T;return rlsls1_m1982=(rlsls1_f3172()?rlsls1_f2589():rlsls1_f1983());}}
static int rlsls1_f3171(){if (rlsls1_p3171) return rlsls1_m3171; else {rlsls1_p3171=T;return rlsls1_m3171=(rlsls1_f3172()?NIL:T);}}
static int rlsls1_f2584(){if (rlsls1_p2584) return rlsls1_m2584; else {rlsls1_p2584=T;return rlsls1_m2584=(rlsls1_f2589()?rlsls1_f3172():rlsls1_f3171());}}
static double rlsls1_f7296(){if (rlsls1_p7296) return rlsls1_m7296; else {rlsls1_p7296=T;return rlsls1_m7296=(rlsls1_v7320-rlsls1_v7316);}}
static double rlsls1_f6954(){if (rlsls1_p6954) return rlsls1_m6954; else {rlsls1_p6954=T;return rlsls1_m6954=fabs(normalize_rotation((atan2(rlsls1_f7296(),rlsls1_f7293())-atan2(rlsls1_f6959(),rlsls1_f6958()))));}}
static int rlsls1_f3159(){if (rlsls1_p3159) return rlsls1_m3159; else {rlsls1_p3159=T;return rlsls1_m3159=(rlsls1_f6954()>(1.5707963267948966));}}
static int rlsls1_f3155(){if (rlsls1_p3155) return rlsls1_m3155; else {rlsls1_p3155=T;return rlsls1_m3155=((rlsls1_v3159=rlsls1_f3159()),(rlsls1_v3159?rlsls1_v3159:(fabs((rlsls1_f6954()-(1.5707963267948966)))<rlsls1_v7308)));}}
static int rlsls1_f1398(){if (rlsls1_p1398) return rlsls1_m1398; else {rlsls1_p1398=T;return rlsls1_m1398=(rlsls1_f3155()?rlsls1_f2589():rlsls1_f1983());}}
static int rlsls1_f3154(){if (rlsls1_p3154) return rlsls1_m3154; else {rlsls1_p3154=T;return rlsls1_m3154=(rlsls1_f3155()?NIL:T);}}
static int rlsls1_f2582(){if (rlsls1_p2582) return rlsls1_m2582; else {rlsls1_p2582=T;return rlsls1_m2582=(rlsls1_f2589()?rlsls1_f3155():rlsls1_f3154());}}
static int rlsls1_f7294(){if (rlsls1_p7294) return rlsls1_m7294; else {rlsls1_p7294=T;return rlsls1_m7294=(fabs(rlsls1_f7296())<rlsls1_v7308);}}
static double rlsls1_f3276(){if (rlsls1_p3276) return rlsls1_m3276; else {rlsls1_p3276=T;return rlsls1_m3276=(rlsls1_f7294()?(rlsls1_f7291()?rlsls1_f3280():(0.0)):(1.0));}}
static int rlsls1_f3232(){if (rlsls1_p3232) return rlsls1_m3232; else {rlsls1_p3232=T;return rlsls1_m3232=(rlsls1_f3276()==0.0);}}
static double rlsls1_f3261(){if (rlsls1_p3261) return rlsls1_m3261; else {rlsls1_p3261=T;return rlsls1_m3261=(rlsls1_f3276()*rlsls1_v7312);}}
static double rlsls1_f3275(){if (rlsls1_p3275) return rlsls1_m3275; else {rlsls1_p3275=T;return rlsls1_m3275=((rlsls1_v3276=rlsls1_f3276()),(rlsls1_v3276*rlsls1_v3276));}}
static double rlsls1_f7287(){if (rlsls1_p7287) return rlsls1_m7287; else {rlsls1_p7287=T;return rlsls1_m7287=(rlsls1_f7288()/rlsls1_f7296());}}
static double rlsls1_f3263(){if (rlsls1_p3263) return rlsls1_m3263; else {rlsls1_p3263=T;return rlsls1_m3263=(rlsls1_f7294()?(rlsls1_f7291()?rlsls1_f3280():rlsls1_v7320):(rlsls1_v7322+(rlsls1_f7287()*rlsls1_v7320)));}}
static double rlsls1_f3273(){if (rlsls1_p3273) return rlsls1_m3273; else {rlsls1_p3273=T;return rlsls1_m3273=(rlsls1_f7294()?(rlsls1_f7291()?rlsls1_f3280():(1.0)):rlsls1_f7287());}}
static double rlsls1_f2561(){if (rlsls1_p2561) return rlsls1_m2561; else {rlsls1_p2561=T;return rlsls1_m2561=(((rlsls1_f3276()*rlsls1_v7330)+(rlsls1_f3273()*rlsls1_v7328))-rlsls1_f3263());}}
static int rlsls1_f2558(){if (rlsls1_p2558) return rlsls1_m2558; else {rlsls1_p2558=T;return rlsls1_m2558=(fabs((rlsls1_f2561()-(0.0)))<rlsls1_v7308);}}
static int rlsls1_f2557(){if (rlsls1_p2557) return rlsls1_m2557; else {rlsls1_p2557=T;return rlsls1_m2557=(rlsls1_f2561()>(0.0));}}
static int rlsls1_f2556(){if (rlsls1_p2556) return rlsls1_m2556; else {rlsls1_p2556=T;return rlsls1_m2556=(rlsls1_f2557()?NIL:T);}}
static double rlsls1_f3061(){if (rlsls1_p3061) return rlsls1_m3061; else {rlsls1_p3061=T;return rlsls1_m3061=(rlsls1_f3263()/rlsls1_f3273());}}
static int rlsls1_f3036(){if (rlsls1_p3036) return rlsls1_m3036; else {rlsls1_p3036=T;return rlsls1_m3036=(fabs((rlsls1_f3061()-rlsls1_v7320))<rlsls1_v7308);}}
static int rlsls1_f3027(){if (rlsls1_p3027) return rlsls1_m3027; else {rlsls1_p3027=T;return rlsls1_m3027=(fabs((rlsls1_f3061()-rlsls1_v7316))<rlsls1_v7308);}}
static int rlsls1_f2999(){if (rlsls1_p2999) return rlsls1_m2999; else {rlsls1_p2999=T;return rlsls1_m2999=(fabs((rlsls1_v7312-rlsls1_f3061()))<rlsls1_v7308);}}
static double rlsls1_f3022(){if (rlsls1_p3022) return rlsls1_m3022; else {rlsls1_p3022=T;return rlsls1_m3022=(rlsls1_f3061()-rlsls1_v7312);}}
static int rlsls1_f3054(){if (rlsls1_p3054) return rlsls1_m3054; else {rlsls1_p3054=T;return rlsls1_m3054=((rlsls1_f7108()<=rlsls1_f3061())&&(rlsls1_f3061()<=rlsls1_f7106()));}}
static double rlsls1_f3060(){if (rlsls1_p3060) return rlsls1_m3060; else {rlsls1_p3060=T;return rlsls1_m3060=(rlsls1_f3273()*rlsls1_f3061());}}
static double rlsls1_f3111(){if (rlsls1_p3111) return rlsls1_m3111; else {rlsls1_p3111=T;return rlsls1_m3111=(((rlsls1_f3276()*rlsls1_v7326)+(rlsls1_f3273()*rlsls1_v7324))-rlsls1_f3263());}}
static int rlsls1_f3108(){if (rlsls1_p3108) return rlsls1_m3108; else {rlsls1_p3108=T;return rlsls1_m3108=(fabs((rlsls1_f3111()-(0.0)))<rlsls1_v7308);}}
static int rlsls1_f3093(){if (rlsls1_p3093) return rlsls1_m3093; else {rlsls1_p3093=T;return rlsls1_m3093=(rlsls1_f3111()>(0.0));}}
static int rlsls1_f3092(){if (rlsls1_p3092) return rlsls1_m3092; else {rlsls1_p3092=T;return rlsls1_m3092=(rlsls1_f3093()?NIL:T);}}
static int rlsls1_f3223(){if (rlsls1_p3223) return rlsls1_m3223; else {rlsls1_p3223=T;return rlsls1_m3223=(rlsls1_f3273()>0.0);}}
static double rlsls1_f3221(){if (rlsls1_p3221) return rlsls1_m3221; else {rlsls1_p3221=T;return rlsls1_m3221=(rlsls1_f3223()?(-rlsls1_f3276()):rlsls1_f3276());}}
static double rlsls1_f3227(){if (rlsls1_p3227) return rlsls1_m3227; else {rlsls1_p3227=T;return rlsls1_m3227=((rlsls1_v3273=rlsls1_f3273()),(rlsls1_v3273*rlsls1_v3273));}}
static double rlsls1_f2881(){if (rlsls1_p2881) return rlsls1_m2881; else {rlsls1_p2881=T;return rlsls1_m2881=(rlsls1_f3275()+rlsls1_f3227());}}
static double rlsls1_f2874(){if (rlsls1_p2874) return rlsls1_m2874; else {rlsls1_p2874=T;return rlsls1_m2874=((rlsls1_v2881=rlsls1_f2881()),(rlsls1_v2881+rlsls1_v2881));}}
static double rlsls1_f3229(){if (rlsls1_p3229) return rlsls1_m3229; else {rlsls1_p3229=T;return rlsls1_m3229=(rlsls1_f3263()-(rlsls1_f3276()*rlsls1_v7314)-(rlsls1_f3273()*rlsls1_v7312));}}
static double rlsls1_f2884(){if (rlsls1_p2884) return rlsls1_m2884; else {rlsls1_p2884=T;return rlsls1_m2884=((-2.0)*rlsls1_f3273()*rlsls1_f3229());}}
static double rlsls1_f2873(){if (rlsls1_p2873) return rlsls1_m2873; else {rlsls1_p2873=T;return rlsls1_m2873=((-rlsls1_f2884())/rlsls1_f2874());}}
static double rlsls1_f2883(){if (rlsls1_p2883) return rlsls1_m2883; else {rlsls1_p2883=T;return rlsls1_m2883=((rlsls1_v2884=rlsls1_f2884()),(rlsls1_v2884*rlsls1_v2884));}}
static double rlsls1_f3228(){if (rlsls1_p3228) return rlsls1_m3228; else {rlsls1_p3228=T;return rlsls1_m3228=((rlsls1_v3229=rlsls1_f3229()),(rlsls1_v3229*rlsls1_v3229));}}
static double rlsls1_f3226(){if (rlsls1_p3226) return rlsls1_m3226; else {rlsls1_p3226=T;return rlsls1_m3226=(rlsls1_f3228()/rlsls1_f3227());}}
static double rlsls1_f3260(){if (rlsls1_p3260) return rlsls1_m3260; else {rlsls1_p3260=T;return rlsls1_m3260=(rlsls1_f3273()*rlsls1_v7314);}}
static double rlsls1_f3259(){if (rlsls1_p3259) return rlsls1_m3259; else {rlsls1_p3259=T;return rlsls1_m3259=(rlsls1_f3261()-rlsls1_f3260());}}
static double rlsls1_f3211(){if (rlsls1_p3211) return rlsls1_m3211; else {rlsls1_p3211=T;return rlsls1_m3211=(rlsls1_f3223()?(rlsls1_f3260()-rlsls1_f3261()):rlsls1_f3259());}}
static double rlsls1_f3209(){if (rlsls1_p3209) return rlsls1_m3209; else {rlsls1_p3209=T;return rlsls1_m3209=((rlsls1_f3263()*rlsls1_f3221())-(rlsls1_f3273()*rlsls1_f3211()));}}
static double rlsls1_f3272(){if (rlsls1_p3272) return rlsls1_m3272; else {rlsls1_p3272=T;return rlsls1_m3272=(-rlsls1_f3273());}}
static double rlsls1_f3219(){if (rlsls1_p3219) return rlsls1_m3219; else {rlsls1_p3219=T;return rlsls1_m3219=(rlsls1_f3223()?rlsls1_f3273():rlsls1_f3272());}}
static double rlsls1_f3217(){if (rlsls1_p3217) return rlsls1_m3217; else {rlsls1_p3217=T;return rlsls1_m3217=((rlsls1_f3276()*rlsls1_f3221())-(rlsls1_f3273()*rlsls1_f3219()));}}
static double rlsls1_f3197(){if (rlsls1_p3197) return rlsls1_m3197; else {rlsls1_p3197=T;return rlsls1_m3197=(rlsls1_f3209()/rlsls1_f3217());}}
static int rlsls1_f3214(){if (rlsls1_p3214) return rlsls1_m3214; else {rlsls1_p3214=T;return rlsls1_m3214=(fabs((rlsls1_f3217()-(0.0)))<rlsls1_v7308);}}
static double rlsls1_f3143(){if (rlsls1_p3143) return rlsls1_m3143; else {rlsls1_p3143=T;return rlsls1_m3143=(rlsls1_f3214()?rlsls1_f3144():rlsls1_f3197());}}
static double rlsls1_f3203(){if (rlsls1_p3203) return rlsls1_m3203; else {rlsls1_p3203=T;return rlsls1_m3203=((rlsls1_f3276()*rlsls1_f3211())-(rlsls1_f3263()*rlsls1_f3219()));}}
static double rlsls1_f3195(){if (rlsls1_p3195) return rlsls1_m3195; else {rlsls1_p3195=T;return rlsls1_m3195=(rlsls1_f3203()/rlsls1_f3217());}}
static int rlsls1_f3185(){if (rlsls1_p3185) return rlsls1_m3185; else {rlsls1_p3185=T;return rlsls1_m3185=(rlsls1_f3214()?NIL:((rlsls1_v3197=rlsls1_f3197()),(rlsls1_v3195=rlsls1_f3195()),((fabs((((rlsls1_f3276()*rlsls1_v3197)+(rlsls1_f3273()*rlsls1_v3195))-rlsls1_f3263()))<rlsls1_v7308)?(((rlsls1_f7117()<=rlsls1_v3197)&&(rlsls1_v3197<=rlsls1_f7115()))?((rlsls1_f7108()<=rlsls1_v3195)&&(rlsls1_v3195<=rlsls1_f7106())):NIL):NIL)));}}
static int rlsls1_f3115(){if (rlsls1_p3115) return rlsls1_m3115; else {rlsls1_p3115=T;return rlsls1_m3115=(rlsls1_f3214()?NIL:((fabs((rlsls1_v7314-rlsls1_f3197()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f3195()))<rlsls1_v7308):NIL));}}
static double rlsls1_f3147(){if (rlsls1_p3147) return rlsls1_m3147; else {rlsls1_p3147=T;return rlsls1_m3147=(rlsls1_f3214()?rlsls1_f3148():rlsls1_f3195());}}
static double rlsls1_f3141(){if (rlsls1_p3141) return rlsls1_m3141; else {rlsls1_p3141=T;return rlsls1_m3141=atan2((rlsls1_f3147()-rlsls1_v7312),(rlsls1_f3143()-rlsls1_v7314));}}
static double rlsls1_f2578(){if (rlsls1_p2578) return rlsls1_m2578; else {rlsls1_p2578=T;return rlsls1_m2578=normalize_rotation((rlsls1_f3141()-rlsls1_f6280()));}}
static int rlsls1_f817(){if (rlsls1_p817) return rlsls1_m817; else {rlsls1_p817=T;return rlsls1_m817=(rlsls1_f2578()>rlsls1_f1419());}}
static double rlsls1_f689(){if (rlsls1_p689) return rlsls1_m689; else {rlsls1_p689=T;return rlsls1_m689=(rlsls1_f817()?rlsls1_f2578():rlsls1_f1419());}}
static double rlsls1_f2577(){if (rlsls1_p2577) return rlsls1_m2577; else {rlsls1_p2577=T;return rlsls1_m2577=normalize_rotation(rlsls1_f2578());}}
static int rlsls1_f2565(){if (rlsls1_p2565) return rlsls1_m2565; else {rlsls1_p2565=T;return rlsls1_m2565=((rlsls1_v2577=rlsls1_f2577()),((fabs((rlsls1_v2577-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2577-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2577-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static double rlsls1_f3106(){if (rlsls1_p3106) return rlsls1_m3106; else {rlsls1_p3106=T;return rlsls1_m3106=(rlsls1_f3141()+(-1.5707963267948966));}}
static double rlsls1_f3098(){if (rlsls1_p3098) return rlsls1_m3098; else {rlsls1_p3098=T;return rlsls1_m3098=((rlsls1_v3106=rlsls1_f3106()),(((rlsls1_f3276()*(rlsls1_f3143()+cos(rlsls1_v3106)))+(rlsls1_f3273()*(rlsls1_f3147()+sin(rlsls1_v3106))))-rlsls1_f3263()));}}
static int rlsls1_f3095(){if (rlsls1_p3095) return rlsls1_m3095; else {rlsls1_p3095=T;return rlsls1_m3095=(fabs((rlsls1_f3098()-(0.0)))<rlsls1_v7308);}}
static int rlsls1_f3094(){if (rlsls1_p3094) return rlsls1_m3094; else {rlsls1_p3094=T;return rlsls1_m3094=(rlsls1_f3098()>(0.0));}}
static double rlsls1_f3139(){if (rlsls1_p3139) return rlsls1_m3139; else {rlsls1_p3139=T;return rlsls1_m3139=normalize_rotation((rlsls1_f3141()-rlsls1_f6935()));}}
static double rlsls1_f476(){if (rlsls1_p476) return rlsls1_m476; else {rlsls1_p476=T;return rlsls1_m476=((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v1419=rlsls1_f1419()),((rlsls1_v3139>rlsls1_v1419)?rlsls1_v3139:rlsls1_v1419));}}
static double rlsls1_f3138(){if (rlsls1_p3138) return rlsls1_m3138; else {rlsls1_p3138=T;return rlsls1_m3138=normalize_rotation(rlsls1_f3139());}}
static int rlsls1_f3124(){if (rlsls1_p3124) return rlsls1_m3124; else {rlsls1_p3124=T;return rlsls1_m3124=((rlsls1_v3138=rlsls1_f3138()),((fabs((rlsls1_v3138-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v3138-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v3138-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f3177(){if (rlsls1_p3177) return rlsls1_m3177; else {rlsls1_p3177=T;return rlsls1_m3177=(rlsls1_f3214()?NIL:((fabs((rlsls1_f3197()-rlsls1_v7322))<rlsls1_v7308)?(fabs((rlsls1_f3195()-rlsls1_v7320))<rlsls1_v7308):NIL));}}
static int rlsls1_f3169(){if (rlsls1_p3169) return rlsls1_m3169; else {rlsls1_p3169=T;return rlsls1_m3169=(rlsls1_f3177()?NIL:T);}}
static int rlsls1_f3160(){if (rlsls1_p3160) return rlsls1_m3160; else {rlsls1_p3160=T;return rlsls1_m3160=(rlsls1_f3214()?NIL:((fabs((rlsls1_f3197()-rlsls1_v7318))<rlsls1_v7308)?(fabs((rlsls1_f3195()-rlsls1_v7316))<rlsls1_v7308):NIL));}}
static int rlsls1_f3152(){if (rlsls1_p3152) return rlsls1_m3152; else {rlsls1_p3152=T;return rlsls1_m3152=(rlsls1_f3160()?NIL:T);}}
static int rlsls1_f2580(){if (rlsls1_p2580) return rlsls1_m2580; else {rlsls1_p2580=T;return rlsls1_m2580=((rlsls1_f3177()?rlsls1_f2584():rlsls1_f3169())?(rlsls1_f3160()?rlsls1_f2582():rlsls1_f3152()):NIL);}}
static int rlsls1_f3199(){if (rlsls1_p3199) return rlsls1_m3199; else {rlsls1_p3199=T;return rlsls1_m3199=((fabs((rlsls1_f3209()-(0.0)))<rlsls1_v7308)?(fabs((rlsls1_f3203()-(0.0)))<rlsls1_v7308):NIL);}}
static int rlsls1_f3198(){if (rlsls1_p3198) return rlsls1_m3198; else {rlsls1_p3198=T;return rlsls1_m3198=(rlsls1_f3214()?rlsls1_f3199():T);}}
static int rlsls1_f3123(){if (rlsls1_p3123) return rlsls1_m3123; else {rlsls1_p3123=T;return rlsls1_m3123=(rlsls1_f3214()?rlsls1_f3199():NIL);}}
static int rlsls1_f2549(){if (rlsls1_p2549) return rlsls1_m2549; else {rlsls1_p2549=T;return rlsls1_m2549=((rlsls1_v2565=rlsls1_f2565()),(rlsls1_v2565?rlsls1_v2565:((rlsls1_v3123=rlsls1_f3123()),(rlsls1_v3123?rlsls1_v3123:(rlsls1_f3115()?NIL:((rlsls1_f2558()?NIL:(rlsls1_f3095()?NIL:(rlsls1_f3094()?rlsls1_f2557():rlsls1_f2556())))?NIL:T))))));}}
static double_or_symbol rlsls1_f43(){if (rlsls1_p43) return rlsls1_m43; else {rlsls1_p43=T;return rlsls1_m43=(rlsls1_f2580()?(rlsls1_f2549()?coerce_double_to_double_or_symbol(rlsls1_f2578()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2153(){if (rlsls1_p2153) return rlsls1_m2153; else {rlsls1_p2153=T;return rlsls1_m2153=(rlsls1_f2580()?(rlsls1_f2549()?rlsls1_f2578():rlsls1_f2664()):rlsls1_f2664());}}
static int rlsls1_f830(){if (rlsls1_p830) return rlsls1_m830; else {rlsls1_p830=T;return rlsls1_m830=(rlsls1_f2153()>rlsls1_f1419());}}
static double rlsls1_f701(){if (rlsls1_p701) return rlsls1_m701; else {rlsls1_p701=T;return rlsls1_m701=(rlsls1_f830()?rlsls1_f2153():rlsls1_f1419());}}
static int rlsls1_f2548(){if (rlsls1_p2548) return rlsls1_m2548; else {rlsls1_p2548=T;return rlsls1_m2548=(rlsls1_f2580()?rlsls1_f2549():NIL);}}
static int rlsls1_f829(){if (rlsls1_p829) return rlsls1_m829; else {rlsls1_p829=T;return rlsls1_m829=(rlsls1_f830()?rlsls1_f2548():NIL);}}
static double rlsls1_f2543(){if (rlsls1_p2543) return rlsls1_m2543; else {rlsls1_p2543=T;return rlsls1_m2543=(rlsls1_f2580()?(rlsls1_f2549()?rlsls1_f2578():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2546(){if (rlsls1_p2546) return rlsls1_m2546; else {rlsls1_p2546=T;return rlsls1_m2546=(rlsls1_f2580()?(rlsls1_f2549()?rlsls1_f2578():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2545(){if (rlsls1_p2545) return rlsls1_m2545; else {rlsls1_p2545=T;return rlsls1_m2545=(rlsls1_f2546()<(0.0));}}
static int rlsls1_f2538(){if (rlsls1_p2538) return rlsls1_m2538; else {rlsls1_p2538=T;return rlsls1_m2538=(rlsls1_f2548()?((rlsls1_v2545=rlsls1_f2545()),(rlsls1_v2545?rlsls1_v2545:(fabs((rlsls1_f2543()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f2160(){if (rlsls1_p2160) return rlsls1_m2160; else {rlsls1_p2160=T;return rlsls1_m2160=(rlsls1_f2538()?rlsls1_f2543():rlsls1_f3077());}}
static double rlsls1_f2162(){if (rlsls1_p2162) return rlsls1_m2162; else {rlsls1_p2162=T;return rlsls1_m2162=(rlsls1_f2538()?rlsls1_f2546():rlsls1_f3082());}}
static int rlsls1_f2161(){if (rlsls1_p2161) return rlsls1_m2161; else {rlsls1_p2161=T;return rlsls1_m2161=(rlsls1_f2162()<(0.0));}}
static int rlsls1_f2537(){if (rlsls1_p2537) return rlsls1_m2537; else {rlsls1_p2537=T;return rlsls1_m2537=(rlsls1_f2538()?rlsls1_f2548():NIL);}}
static int rlsls1_f2155(){if (rlsls1_p2155) return rlsls1_m2155; else {rlsls1_p2155=T;return rlsls1_m2155=(rlsls1_f2537()?((rlsls1_v2161=rlsls1_f2161()),(rlsls1_v2161?rlsls1_v2161:(fabs((rlsls1_f2160()-(0.0)))<rlsls1_v7308))):NIL);}}
static int rlsls1_f3085(){if (rlsls1_p3085) return rlsls1_m3085; else {rlsls1_p3085=T;return rlsls1_m3085=((rlsls1_v3124=rlsls1_f3124()),(rlsls1_v3124?rlsls1_v3124:((rlsls1_v3123=rlsls1_f3123()),(rlsls1_v3123?rlsls1_v3123:(rlsls1_f3115()?NIL:((rlsls1_f3108()?NIL:(rlsls1_f3095()?NIL:(rlsls1_f3094()?rlsls1_f3093():rlsls1_f3092())))?NIL:T))))));}}
static double rlsls1_f3270(){if (rlsls1_p3270) return rlsls1_m3270; else {rlsls1_p3270=T;return rlsls1_m3270=(rlsls1_f3275()-(rlsls1_f3273()*rlsls1_f3272()));}}
static double rlsls1_f3255(){if (rlsls1_p3255) return rlsls1_m3255; else {rlsls1_p3255=T;return rlsls1_m3255=((((rlsls1_f3263()*rlsls1_f3276())-(rlsls1_f3273()*rlsls1_f3259()))/rlsls1_f3270())-rlsls1_v7314);}}
static double rlsls1_f3249(){if (rlsls1_p3249) return rlsls1_m3249; else {rlsls1_p3249=T;return rlsls1_m3249=((((rlsls1_f3276()*rlsls1_f3259())-(rlsls1_f3263()*rlsls1_f3272()))/rlsls1_f3270())-rlsls1_v7312);}}
static double rlsls1_f3245(){if (rlsls1_p3245) return rlsls1_m3245; else {rlsls1_p3245=T;return rlsls1_m3245=((fabs((rlsls1_f3270()-(0.0)))<rlsls1_v7308)?rlsls1_f3265():((rlsls1_v3255=rlsls1_f3255()),(rlsls1_v3249=rlsls1_f3249()),sqrt(((rlsls1_v3255*rlsls1_v3255)+(rlsls1_v3249*rlsls1_v3249)))));}}
static double rlsls1_f7305(){if (rlsls1_p7305) return rlsls1_m7305; else {rlsls1_p7305=T;return rlsls1_m7305=(rlsls1_v7312-rlsls1_v7328);}}
static double rlsls1_f7224(){if (rlsls1_p7224) return rlsls1_m7224; else {rlsls1_p7224=T;return rlsls1_m7224=fabs(normalize_rotation((atan2((rlsls1_v7324-rlsls1_v7328),rlsls1_f7229())-atan2(rlsls1_f7305(),rlsls1_v7310))));}}
static int rlsls1_f3240(){if (rlsls1_p3240) return rlsls1_m3240; else {rlsls1_p3240=T;return rlsls1_m3240=(rlsls1_f7224()>(1.5707963267948966));}}
static int rlsls1_f3236(){if (rlsls1_p3236) return rlsls1_m3236; else {rlsls1_p3236=T;return rlsls1_m3236=((rlsls1_v3240=rlsls1_f3240()),(rlsls1_v3240?rlsls1_v3240:(fabs((rlsls1_f7224()-(1.5707963267948966)))<rlsls1_v7308)));}}
static int rlsls1_f1995(){if (rlsls1_p1995) return rlsls1_m1995; else {rlsls1_p1995=T;return rlsls1_m1995=(rlsls1_f3236()?NIL:T);}}
static int rlsls1_f1400(){if (rlsls1_p1400) return rlsls1_m1400; else {rlsls1_p1400=T;return rlsls1_m1400=(rlsls1_f3155()?rlsls1_f3236():rlsls1_f1995());}}
static int rlsls1_f1396(){if (rlsls1_p1396) return rlsls1_m1396; else {rlsls1_p1396=T;return rlsls1_m1396=((rlsls1_f1996()?rlsls1_f1400():rlsls1_f1993())?(rlsls1_f1984()?rlsls1_f1398():rlsls1_f1981()):NIL);}}
static double rlsls1_f970(){if (rlsls1_p970) return rlsls1_m970; else {rlsls1_p970=T;return rlsls1_m970=(rlsls1_f1396()?(rlsls1_f1365()?rlsls1_f1394():rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f1364(){if (rlsls1_p1364) return rlsls1_m1364; else {rlsls1_p1364=T;return rlsls1_m1364=(rlsls1_f1396()?rlsls1_f1365():NIL);}}
static double rlsls1_f1359(){if (rlsls1_p1359) return rlsls1_m1359; else {rlsls1_p1359=T;return rlsls1_m1359=(rlsls1_f1396()?(rlsls1_f1365()?rlsls1_f1394():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f1362(){if (rlsls1_p1362) return rlsls1_m1362; else {rlsls1_p1362=T;return rlsls1_m1362=(rlsls1_f1396()?(rlsls1_f1365()?rlsls1_f1394():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f1361(){if (rlsls1_p1361) return rlsls1_m1361; else {rlsls1_p1361=T;return rlsls1_m1361=(rlsls1_f1362()>(0.0));}}
static int rlsls1_f1354(){if (rlsls1_p1354) return rlsls1_m1354; else {rlsls1_p1354=T;return rlsls1_m1354=(rlsls1_f1364()?((rlsls1_v1361=rlsls1_f1361()),(rlsls1_v1361?rlsls1_v1361:(fabs((rlsls1_f1359()-(0.0)))<rlsls1_v7308))):NIL);}}
static int rlsls1_f1351(){if (rlsls1_p1351) return rlsls1_m1351; else {rlsls1_p1351=T;return rlsls1_m1351=((rlsls1_f1354()?rlsls1_f1362():rlsls1_f3082())>(0.0));}}
static int rlsls1_f1345(){if (rlsls1_p1345) return rlsls1_m1345; else {rlsls1_p1345=T;return rlsls1_m1345=((rlsls1_v1354=rlsls1_f1354()),((rlsls1_v1354?rlsls1_f1364():NIL)?((rlsls1_v1351=rlsls1_f1351()),(rlsls1_v1351?rlsls1_v1351:(fabs(((rlsls1_v1354?rlsls1_f1359():rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL));}}
static int rlsls1_f1994(){if (rlsls1_p1994) return rlsls1_m1994; else {rlsls1_p1994=T;return rlsls1_m1994=(rlsls1_f3172()?rlsls1_f3236():rlsls1_f1995());}}
static int rlsls1_f1979(){if (rlsls1_p1979) return rlsls1_m1979; else {rlsls1_p1979=T;return rlsls1_m1979=((rlsls1_f1996()?rlsls1_f1994():rlsls1_f1993())?(rlsls1_f1984()?rlsls1_f1982():rlsls1_f1981()):NIL);}}
static double rlsls1_f1503(){if (rlsls1_p1503) return rlsls1_m1503; else {rlsls1_p1503=T;return rlsls1_m1503=(rlsls1_f1979()?(rlsls1_f1921()?rlsls1_f1972():rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f1920(){if (rlsls1_p1920) return rlsls1_m1920; else {rlsls1_p1920=T;return rlsls1_m1920=(rlsls1_f1979()?rlsls1_f1921():NIL);}}
static double rlsls1_f1915(){if (rlsls1_p1915) return rlsls1_m1915; else {rlsls1_p1915=T;return rlsls1_m1915=(rlsls1_f1979()?(rlsls1_f1921()?rlsls1_f1972():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f1918(){if (rlsls1_p1918) return rlsls1_m1918; else {rlsls1_p1918=T;return rlsls1_m1918=(rlsls1_f1979()?(rlsls1_f1921()?rlsls1_f1972():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f1917(){if (rlsls1_p1917) return rlsls1_m1917; else {rlsls1_p1917=T;return rlsls1_m1917=(rlsls1_f1918()>(0.0));}}
static int rlsls1_f1910(){if (rlsls1_p1910) return rlsls1_m1910; else {rlsls1_p1910=T;return rlsls1_m1910=(rlsls1_f1920()?((rlsls1_v1917=rlsls1_f1917()),(rlsls1_v1917?rlsls1_v1917:(fabs((rlsls1_f1915()-(0.0)))<rlsls1_v7308))):NIL);}}
static int rlsls1_f1907(){if (rlsls1_p1907) return rlsls1_m1907; else {rlsls1_p1907=T;return rlsls1_m1907=((rlsls1_f1910()?rlsls1_f1918():rlsls1_f3082())>(0.0));}}
static int rlsls1_f1901(){if (rlsls1_p1901) return rlsls1_m1901; else {rlsls1_p1901=T;return rlsls1_m1901=((rlsls1_v1910=rlsls1_f1910()),((rlsls1_v1910?rlsls1_f1920():NIL)?((rlsls1_v1907=rlsls1_f1907()),(rlsls1_v1907?rlsls1_v1907:(fabs(((rlsls1_v1910?rlsls1_f1915():rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL));}}
static int rlsls1_f3170(){if (rlsls1_p3170) return rlsls1_m3170; else {rlsls1_p3170=T;return rlsls1_m3170=(rlsls1_f3236()?rlsls1_f3172():rlsls1_f3171());}}
static int rlsls1_f3153(){if (rlsls1_p3153) return rlsls1_m3153; else {rlsls1_p3153=T;return rlsls1_m3153=(rlsls1_f3236()?rlsls1_f3155():rlsls1_f3154());}}
static int rlsls1_f3150(){if (rlsls1_p3150) return rlsls1_m3150; else {rlsls1_p3150=T;return rlsls1_m3150=((rlsls1_f3177()?rlsls1_f3170():rlsls1_f3169())?(rlsls1_f3160()?rlsls1_f3153():rlsls1_f3152()):NIL);}}
static double_or_symbol rlsls1_f79(){if (rlsls1_p79) return rlsls1_m79; else {rlsls1_p79=T;return rlsls1_m79=(rlsls1_f3150()?(rlsls1_f3085()?coerce_double_to_double_or_symbol(rlsls1_f3139()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2662(){if (rlsls1_p2662) return rlsls1_m2662; else {rlsls1_p2662=T;return rlsls1_m2662=(rlsls1_f3150()?(rlsls1_f3085()?rlsls1_f3139():rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f524(){if (rlsls1_p524) return rlsls1_m524; else {rlsls1_p524=T;return rlsls1_m524=((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v1419=rlsls1_f1419()),((rlsls1_v2662>rlsls1_v1419)?rlsls1_v2662:rlsls1_v1419));}}
static int rlsls1_f3084(){if (rlsls1_p3084) return rlsls1_m3084; else {rlsls1_p3084=T;return rlsls1_m3084=(rlsls1_f3150()?rlsls1_f3085():NIL);}}
static double rlsls1_f3075(){if (rlsls1_p3075) return rlsls1_m3075; else {rlsls1_p3075=T;return rlsls1_m3075=(rlsls1_f3150()?(rlsls1_f3085()?rlsls1_f3139():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f3080(){if (rlsls1_p3080) return rlsls1_m3080; else {rlsls1_p3080=T;return rlsls1_m3080=(rlsls1_f3150()?(rlsls1_f3085()?rlsls1_f3139():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f3079(){if (rlsls1_p3079) return rlsls1_m3079; else {rlsls1_p3079=T;return rlsls1_m3079=(rlsls1_f3080()<(0.0));}}
static int rlsls1_f3070(){if (rlsls1_p3070) return rlsls1_m3070; else {rlsls1_p3070=T;return rlsls1_m3070=(rlsls1_f3084()?((rlsls1_v3079=rlsls1_f3079()),(rlsls1_v3079?rlsls1_v3079:(fabs((rlsls1_f3075()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f2671(){if (rlsls1_p2671) return rlsls1_m2671; else {rlsls1_p2671=T;return rlsls1_m2671=(rlsls1_f3070()?rlsls1_f3075():rlsls1_f3077());}}
static double rlsls1_f2673(){if (rlsls1_p2673) return rlsls1_m2673; else {rlsls1_p2673=T;return rlsls1_m2673=(rlsls1_f3070()?rlsls1_f3080():rlsls1_f3082());}}
static int rlsls1_f2672(){if (rlsls1_p2672) return rlsls1_m2672; else {rlsls1_p2672=T;return rlsls1_m2672=(rlsls1_f2673()<(0.0));}}
static int rlsls1_f3069(){if (rlsls1_p3069) return rlsls1_m3069; else {rlsls1_p3069=T;return rlsls1_m3069=(rlsls1_f3070()?rlsls1_f3084():NIL);}}
static int rlsls1_f2666(){if (rlsls1_p2666) return rlsls1_m2666; else {rlsls1_p2666=T;return rlsls1_m2666=(rlsls1_f3069()?((rlsls1_v2672=rlsls1_f2672()),(rlsls1_v2672?rlsls1_v2672:(fabs((rlsls1_f2671()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f7240(){if (rlsls1_p7240) return rlsls1_m7240; else {rlsls1_p7240=T;return rlsls1_m7240=((rlsls1_v7305=rlsls1_f7305()),(rlsls1_v7314-(rlsls1_v7314+sqrt(((rlsls1_v7310*rlsls1_v7310)+(rlsls1_v7305*rlsls1_v7305))))));}}
static double rlsls1_f7238(){if (rlsls1_p7238) return rlsls1_m7238; else {rlsls1_p7238=T;return rlsls1_m7238=(rlsls1_v7312-rlsls1_v7312);}}
static double rlsls1_f7237(){if (rlsls1_p7237) return rlsls1_m7237; else {rlsls1_p7237=T;return rlsls1_m7237=((rlsls1_v7238=rlsls1_f7238()),(rlsls1_v7238*rlsls1_v7238));}}
static double rlsls1_f4939(){if (rlsls1_p4939) return rlsls1_m4939; else {rlsls1_p4939=T;return rlsls1_m4939=((rlsls1_v4942=rlsls1_f4942()),sqrt(((rlsls1_v4942*rlsls1_v4942)+rlsls1_f7237())));}}
static double rlsls1_f4931(){if (rlsls1_p4931) return rlsls1_m4931; else {rlsls1_p4931=T;return rlsls1_m4931=((rlsls1_v4939=rlsls1_f4939()),(rlsls1_v4939*rlsls1_v4939));}}
static double rlsls1_f1172(){if (rlsls1_p1172) return rlsls1_m1172; else {rlsls1_p1172=T;return rlsls1_m1172=(rlsls1_f1717()-((4.0)*rlsls1_f1716()*(rlsls1_f2047()-(rlsls1_f2085()*rlsls1_f4931()))));}}
static int rlsls1_f1171(){if (rlsls1_p1171) return rlsls1_m1171; else {rlsls1_p1171=T;return rlsls1_m1171=(rlsls1_f1172()<0.0);}}
static double rlsls1_f1169(){if (rlsls1_p1169) return rlsls1_m1169; else {rlsls1_p1169=T;return rlsls1_m1169=(sqrt(rlsls1_f1172())/rlsls1_f1709());}}
static double rlsls1_f1153(){if (rlsls1_p1153) return rlsls1_m1153; else {rlsls1_p1153=T;return rlsls1_m1153=((rlsls1_f1708()-rlsls1_f1169())+rlsls1_v7312);}}
static double rlsls1_f1152(){if (rlsls1_p1152) return rlsls1_m1152; else {rlsls1_p1152=T;return rlsls1_m1152=(rlsls1_f2083()*rlsls1_f1153());}}
static double rlsls1_f1150(){if (rlsls1_p1150) return rlsls1_m1150; else {rlsls1_p1150=T;return rlsls1_m1150=((rlsls1_f2075()-rlsls1_f1152())/rlsls1_f2086());}}
static int rlsls1_f1141(){if (rlsls1_p1141) return rlsls1_m1141; else {rlsls1_p1141=T;return rlsls1_m1141=((rlsls1_v1150=rlsls1_f1150()),((fabs((((rlsls1_f2086()*rlsls1_v1150)+rlsls1_f1152())-rlsls1_f2075()))<rlsls1_v7308)?(((rlsls1_f5675()<=rlsls1_v1150)&&(rlsls1_v1150<=rlsls1_f5673()))?((rlsls1_f5666()<=rlsls1_f1153())&&(rlsls1_f1153()<=rlsls1_f5664())):NIL):NIL));}}
static int rlsls1_f1060(){if (rlsls1_p1060) return rlsls1_m1060; else {rlsls1_p1060=T;return rlsls1_m1060=((fabs((rlsls1_f1150()-rlsls1_v7330))<rlsls1_v7308)?(fabs((rlsls1_f1153()-rlsls1_v7328))<rlsls1_v7308):NIL);}}
static int rlsls1_f1051(){if (rlsls1_p1051) return rlsls1_m1051; else {rlsls1_p1051=T;return rlsls1_m1051=((fabs((rlsls1_f1150()-rlsls1_v7326))<rlsls1_v7308)?(fabs((rlsls1_f1153()-rlsls1_v7324))<rlsls1_v7308):NIL);}}
static int rlsls1_f1048(){if (rlsls1_p1048) return rlsls1_m1048; else {rlsls1_p1048=T;return rlsls1_m1048=((rlsls1_v1060=rlsls1_f1060()),((rlsls1_v1060?rlsls1_f1400():(rlsls1_v1060?NIL:T))?((rlsls1_v1051=rlsls1_f1051()),(rlsls1_v1051?rlsls1_f1398():(rlsls1_v1051?NIL:T))):NIL));}}
static double rlsls1_f1045(){if (rlsls1_p1045) return rlsls1_m1045; else {rlsls1_p1045=T;return rlsls1_m1045=atan2((rlsls1_f1153()-rlsls1_v7312),(rlsls1_f1150()-rlsls1_v7314));}}
static double rlsls1_f1022(){if (rlsls1_p1022) return rlsls1_m1022; else {rlsls1_p1022=T;return rlsls1_m1022=(rlsls1_f1045()+(1.5707963267948966));}}
static double rlsls1_f1014(){if (rlsls1_p1014) return rlsls1_m1014; else {rlsls1_p1014=T;return rlsls1_m1014=((rlsls1_v1022=rlsls1_f1022()),(((rlsls1_f2086()*(rlsls1_f1150()+cos(rlsls1_v1022)))+(rlsls1_f2083()*(rlsls1_f1153()+sin(rlsls1_v1022))))-rlsls1_f2075()));}}
static double rlsls1_f1043(){if (rlsls1_p1043) return rlsls1_m1043; else {rlsls1_p1043=T;return rlsls1_m1043=normalize_rotation((rlsls1_f1045()-rlsls1_f4788()));}}
static double rlsls1_f1042(){if (rlsls1_p1042) return rlsls1_m1042; else {rlsls1_p1042=T;return rlsls1_m1042=normalize_rotation(rlsls1_f1043());}}
static int rlsls1_f1030(){if (rlsls1_p1030) return rlsls1_m1030; else {rlsls1_p1030=T;return rlsls1_m1030=((rlsls1_v1042=rlsls1_f1042()),((fabs((rlsls1_v1042-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1042-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1042-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f1004(){if (rlsls1_p1004) return rlsls1_m1004; else {rlsls1_p1004=T;return rlsls1_m1004=((rlsls1_v1030=rlsls1_f1030()),(rlsls1_v1030?rlsls1_v1030:(((fabs((rlsls1_v7314-rlsls1_f1150()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f1153()))<rlsls1_v7308):NIL)?NIL:((rlsls1_f1374()?NIL:((rlsls1_v1014=rlsls1_f1014()),((fabs((rlsls1_v1014-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v1014>(0.0))?rlsls1_f1373():rlsls1_f1372()))))?NIL:T))));}}
static int rlsls1_f1003(){if (rlsls1_p1003) return rlsls1_m1003; else {rlsls1_p1003=T;return rlsls1_m1003=(rlsls1_f1048()?rlsls1_f1004():NIL);}}
static double rlsls1_f998(){if (rlsls1_p998) return rlsls1_m998; else {rlsls1_p998=T;return rlsls1_m998=(rlsls1_f1048()?(rlsls1_f1004()?rlsls1_f1043():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f1001(){if (rlsls1_p1001) return rlsls1_m1001; else {rlsls1_p1001=T;return rlsls1_m1001=(rlsls1_f1048()?(rlsls1_f1004()?rlsls1_f1043():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f1000(){if (rlsls1_p1000) return rlsls1_m1000; else {rlsls1_p1000=T;return rlsls1_m1000=(rlsls1_f1001()>(0.0));}}
static int rlsls1_f993(){if (rlsls1_p993) return rlsls1_m993; else {rlsls1_p993=T;return rlsls1_m993=(rlsls1_f1003()?((rlsls1_v1000=rlsls1_f1000()),(rlsls1_v1000?rlsls1_v1000:(fabs((rlsls1_f998()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f932(){if (rlsls1_p932) return rlsls1_m932; else {rlsls1_p932=T;return rlsls1_m932=(rlsls1_f993()?(rlsls1_f1048()?(rlsls1_f1004()?rlsls1_f1043():rlsls1_f1509()):rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f897(){if (rlsls1_p897) return rlsls1_m897; else {rlsls1_p897=T;return rlsls1_m897=(rlsls1_f993()?(rlsls1_f1048()?(rlsls1_f1004()?NIL:T):T):T);}}
static int rlsls1_f990(){if (rlsls1_p990) return rlsls1_m990; else {rlsls1_p990=T;return rlsls1_m990=((rlsls1_f993()?rlsls1_f1001():rlsls1_f3082())>(0.0));}}
static int rlsls1_f992(){if (rlsls1_p992) return rlsls1_m992; else {rlsls1_p992=T;return rlsls1_m992=(rlsls1_f993()?rlsls1_f1003():NIL);}}
static int rlsls1_f984(){if (rlsls1_p984) return rlsls1_m984; else {rlsls1_p984=T;return rlsls1_m984=(rlsls1_f992()?((rlsls1_v990=rlsls1_f990()),(rlsls1_v990?rlsls1_v990:(fabs(((rlsls1_f993()?rlsls1_f998():rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f1167(){if (rlsls1_p1167) return rlsls1_m1167; else {rlsls1_p1167=T;return rlsls1_m1167=((rlsls1_f1708()+rlsls1_f1169())+rlsls1_v7312);}}
static double rlsls1_f1166(){if (rlsls1_p1166) return rlsls1_m1166; else {rlsls1_p1166=T;return rlsls1_m1166=(rlsls1_f2083()*rlsls1_f1167());}}
static double rlsls1_f1164(){if (rlsls1_p1164) return rlsls1_m1164; else {rlsls1_p1164=T;return rlsls1_m1164=((rlsls1_f2075()-rlsls1_f1166())/rlsls1_f2086());}}
static int rlsls1_f1155(){if (rlsls1_p1155) return rlsls1_m1155; else {rlsls1_p1155=T;return rlsls1_m1155=((rlsls1_v1164=rlsls1_f1164()),((fabs((((rlsls1_f2086()*rlsls1_v1164)+rlsls1_f1166())-rlsls1_f2075()))<rlsls1_v7308)?(((rlsls1_f5675()<=rlsls1_v1164)&&(rlsls1_v1164<=rlsls1_f5673()))?((rlsls1_f5666()<=rlsls1_f1167())&&(rlsls1_f1167()<=rlsls1_f5664())):NIL):NIL));}}
static int rlsls1_f1134(){if (rlsls1_p1134) return rlsls1_m1134; else {rlsls1_p1134=T;return rlsls1_m1134=((fabs((rlsls1_f1164()-rlsls1_v7330))<rlsls1_v7308)?(fabs((rlsls1_f1167()-rlsls1_v7328))<rlsls1_v7308):NIL);}}
static int rlsls1_f1125(){if (rlsls1_p1125) return rlsls1_m1125; else {rlsls1_p1125=T;return rlsls1_m1125=((fabs((rlsls1_f1164()-rlsls1_v7326))<rlsls1_v7308)?(fabs((rlsls1_f1167()-rlsls1_v7324))<rlsls1_v7308):NIL);}}
static int rlsls1_f1122(){if (rlsls1_p1122) return rlsls1_m1122; else {rlsls1_p1122=T;return rlsls1_m1122=((rlsls1_v1134=rlsls1_f1134()),((rlsls1_v1134?rlsls1_f1400():(rlsls1_v1134?NIL:T))?((rlsls1_v1125=rlsls1_f1125()),(rlsls1_v1125?rlsls1_f1398():(rlsls1_v1125?NIL:T))):NIL));}}
static double rlsls1_f1119(){if (rlsls1_p1119) return rlsls1_m1119; else {rlsls1_p1119=T;return rlsls1_m1119=atan2((rlsls1_f1167()-rlsls1_v7312),(rlsls1_f1164()-rlsls1_v7314));}}
static double rlsls1_f1096(){if (rlsls1_p1096) return rlsls1_m1096; else {rlsls1_p1096=T;return rlsls1_m1096=(rlsls1_f1119()+(1.5707963267948966));}}
static double rlsls1_f1088(){if (rlsls1_p1088) return rlsls1_m1088; else {rlsls1_p1088=T;return rlsls1_m1088=((rlsls1_v1096=rlsls1_f1096()),(((rlsls1_f2086()*(rlsls1_f1164()+cos(rlsls1_v1096)))+(rlsls1_f2083()*(rlsls1_f1167()+sin(rlsls1_v1096))))-rlsls1_f2075()));}}
static double rlsls1_f1117(){if (rlsls1_p1117) return rlsls1_m1117; else {rlsls1_p1117=T;return rlsls1_m1117=normalize_rotation((rlsls1_f1119()-rlsls1_f4788()));}}
static double rlsls1_f1116(){if (rlsls1_p1116) return rlsls1_m1116; else {rlsls1_p1116=T;return rlsls1_m1116=normalize_rotation(rlsls1_f1117());}}
static int rlsls1_f1104(){if (rlsls1_p1104) return rlsls1_m1104; else {rlsls1_p1104=T;return rlsls1_m1104=((rlsls1_v1116=rlsls1_f1116()),((fabs((rlsls1_v1116-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1116-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1116-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f1078(){if (rlsls1_p1078) return rlsls1_m1078; else {rlsls1_p1078=T;return rlsls1_m1078=((rlsls1_v1104=rlsls1_f1104()),(rlsls1_v1104?rlsls1_v1104:(((fabs((rlsls1_v7314-rlsls1_f1164()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f1167()))<rlsls1_v7308):NIL)?NIL:((rlsls1_f1374()?NIL:((rlsls1_v1088=rlsls1_f1088()),((fabs((rlsls1_v1088-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v1088>(0.0))?rlsls1_f1373():rlsls1_f1372()))))?NIL:T))));}}
static double rlsls1_f936(){if (rlsls1_p936) return rlsls1_m936; else {rlsls1_p936=T;return rlsls1_m936=(rlsls1_f1122()?(rlsls1_f1078()?rlsls1_f1117():rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f901(){if (rlsls1_p901) return rlsls1_m901; else {rlsls1_p901=T;return rlsls1_m901=(rlsls1_f1122()?(rlsls1_f1078()?NIL:T):T);}}
static int rlsls1_f1077(){if (rlsls1_p1077) return rlsls1_m1077; else {rlsls1_p1077=T;return rlsls1_m1077=(rlsls1_f1122()?rlsls1_f1078():NIL);}}
static int rlsls1_f1074(){if (rlsls1_p1074) return rlsls1_m1074; else {rlsls1_p1074=T;return rlsls1_m1074=((rlsls1_f1122()?(rlsls1_f1078()?rlsls1_f1117():rlsls1_f3082()):rlsls1_f3082())>(0.0));}}
static int rlsls1_f1067(){if (rlsls1_p1067) return rlsls1_m1067; else {rlsls1_p1067=T;return rlsls1_m1067=(rlsls1_f1077()?((rlsls1_v1074=rlsls1_f1074()),(rlsls1_v1074?rlsls1_v1074:(fabs(((rlsls1_f1122()?(rlsls1_f1078()?rlsls1_f1117():rlsls1_f3077()):rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f1402(){if (rlsls1_p1402) return rlsls1_m1402; else {rlsls1_p1402=T;return rlsls1_m1402=(rlsls1_f4931()-rlsls1_f2045());}}
static int rlsls1_f1401(){if (rlsls1_p1401) return rlsls1_m1401; else {rlsls1_p1401=T;return rlsls1_m1401=(rlsls1_f1402()<0.0);}}
static double rlsls1_f1339(){if (rlsls1_p1339) return rlsls1_m1339; else {rlsls1_p1339=T;return rlsls1_m1339=sqrt(rlsls1_f1402());}}
static double rlsls1_f1328(){if (rlsls1_p1328) return rlsls1_m1328; else {rlsls1_p1328=T;return rlsls1_m1328=((-rlsls1_f1339())+rlsls1_v7314);}}
static int rlsls1_f1320(){if (rlsls1_p1320) return rlsls1_m1320; else {rlsls1_p1320=T;return rlsls1_m1320=((rlsls1_v1328=rlsls1_f1328()),((fabs((((rlsls1_f2086()*rlsls1_v1328)+rlsls1_f1891())-rlsls1_f2075()))<rlsls1_v7308)?(((rlsls1_f5675()<=rlsls1_v1328)&&(rlsls1_v1328<=rlsls1_f5673()))?rlsls1_f1885():NIL):NIL));}}
static int rlsls1_f1252(){if (rlsls1_p1252) return rlsls1_m1252; else {rlsls1_p1252=T;return rlsls1_m1252=((fabs((rlsls1_f1328()-rlsls1_v7330))<rlsls1_v7308)?rlsls1_f1867():NIL);}}
static int rlsls1_f1246(){if (rlsls1_p1246) return rlsls1_m1246; else {rlsls1_p1246=T;return rlsls1_m1246=((fabs((rlsls1_f1328()-rlsls1_v7326))<rlsls1_v7308)?rlsls1_f1858():NIL);}}
static int rlsls1_f1243(){if (rlsls1_p1243) return rlsls1_m1243; else {rlsls1_p1243=T;return rlsls1_m1243=((rlsls1_v1252=rlsls1_f1252()),((rlsls1_v1252?rlsls1_f1400():(rlsls1_v1252?NIL:T))?((rlsls1_v1246=rlsls1_f1246()),(rlsls1_v1246?rlsls1_f1398():(rlsls1_v1246?NIL:T))):NIL));}}
static double rlsls1_f1241(){if (rlsls1_p1241) return rlsls1_m1241; else {rlsls1_p1241=T;return rlsls1_m1241=atan2(rlsls1_f1853(),(rlsls1_f1328()-rlsls1_v7314));}}
static double rlsls1_f1221(){if (rlsls1_p1221) return rlsls1_m1221; else {rlsls1_p1221=T;return rlsls1_m1221=(rlsls1_f1241()+(1.5707963267948966));}}
static double rlsls1_f1213(){if (rlsls1_p1213) return rlsls1_m1213; else {rlsls1_p1213=T;return rlsls1_m1213=((rlsls1_v1221=rlsls1_f1221()),(((rlsls1_f2086()*(rlsls1_f1328()+cos(rlsls1_v1221)))+(rlsls1_f2083()*(rlsls1_f1892()+sin(rlsls1_v1221))))-rlsls1_f2075()));}}
static double rlsls1_f1239(){if (rlsls1_p1239) return rlsls1_m1239; else {rlsls1_p1239=T;return rlsls1_m1239=normalize_rotation((rlsls1_f1241()-rlsls1_f4788()));}}
static double rlsls1_f1238(){if (rlsls1_p1238) return rlsls1_m1238; else {rlsls1_p1238=T;return rlsls1_m1238=normalize_rotation(rlsls1_f1239());}}
static int rlsls1_f1226(){if (rlsls1_p1226) return rlsls1_m1226; else {rlsls1_p1226=T;return rlsls1_m1226=((rlsls1_v1238=rlsls1_f1238()),((fabs((rlsls1_v1238-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1238-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1238-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f1203(){if (rlsls1_p1203) return rlsls1_m1203; else {rlsls1_p1203=T;return rlsls1_m1203=((rlsls1_v1226=rlsls1_f1226()),(rlsls1_v1226?rlsls1_v1226:(((fabs((rlsls1_v7314-rlsls1_f1328()))<rlsls1_v7308)?rlsls1_f1830():NIL)?NIL:((rlsls1_f1374()?NIL:((rlsls1_v1213=rlsls1_f1213()),((fabs((rlsls1_v1213-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v1213>(0.0))?rlsls1_f1373():rlsls1_f1372()))))?NIL:T))));}}
static int rlsls1_f1202(){if (rlsls1_p1202) return rlsls1_m1202; else {rlsls1_p1202=T;return rlsls1_m1202=(rlsls1_f1243()?rlsls1_f1203():NIL);}}
static double rlsls1_f1197(){if (rlsls1_p1197) return rlsls1_m1197; else {rlsls1_p1197=T;return rlsls1_m1197=(rlsls1_f1243()?(rlsls1_f1203()?rlsls1_f1239():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f1200(){if (rlsls1_p1200) return rlsls1_m1200; else {rlsls1_p1200=T;return rlsls1_m1200=(rlsls1_f1243()?(rlsls1_f1203()?rlsls1_f1239():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f1199(){if (rlsls1_p1199) return rlsls1_m1199; else {rlsls1_p1199=T;return rlsls1_m1199=(rlsls1_f1200()>(0.0));}}
static int rlsls1_f1192(){if (rlsls1_p1192) return rlsls1_m1192; else {rlsls1_p1192=T;return rlsls1_m1192=(rlsls1_f1202()?((rlsls1_v1199=rlsls1_f1199()),(rlsls1_v1199?rlsls1_v1199:(fabs((rlsls1_f1197()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f951(){if (rlsls1_p951) return rlsls1_m951; else {rlsls1_p951=T;return rlsls1_m951=(rlsls1_f1192()?(rlsls1_f1243()?(rlsls1_f1203()?rlsls1_f1239():rlsls1_f1509()):rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f909(){if (rlsls1_p909) return rlsls1_m909; else {rlsls1_p909=T;return rlsls1_m909=(rlsls1_f1192()?(rlsls1_f1243()?(rlsls1_f1203()?NIL:T):T):T);}}
static int rlsls1_f1189(){if (rlsls1_p1189) return rlsls1_m1189; else {rlsls1_p1189=T;return rlsls1_m1189=((rlsls1_f1192()?rlsls1_f1200():rlsls1_f3082())>(0.0));}}
static int rlsls1_f1191(){if (rlsls1_p1191) return rlsls1_m1191; else {rlsls1_p1191=T;return rlsls1_m1191=(rlsls1_f1192()?rlsls1_f1202():NIL);}}
static int rlsls1_f1183(){if (rlsls1_p1183) return rlsls1_m1183; else {rlsls1_p1183=T;return rlsls1_m1183=(rlsls1_f1191()?((rlsls1_v1189=rlsls1_f1189()),(rlsls1_v1189?rlsls1_v1189:(fabs(((rlsls1_f1192()?rlsls1_f1197():rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f1338(){if (rlsls1_p1338) return rlsls1_m1338; else {rlsls1_p1338=T;return rlsls1_m1338=(rlsls1_f1339()+rlsls1_v7314);}}
static int rlsls1_f1330(){if (rlsls1_p1330) return rlsls1_m1330; else {rlsls1_p1330=T;return rlsls1_m1330=((rlsls1_v1338=rlsls1_f1338()),((fabs((((rlsls1_f2086()*rlsls1_v1338)+rlsls1_f1891())-rlsls1_f2075()))<rlsls1_v7308)?(((rlsls1_f5675()<=rlsls1_v1338)&&(rlsls1_v1338<=rlsls1_f5673()))?rlsls1_f1885():NIL):NIL));}}
static int rlsls1_f1316(){if (rlsls1_p1316) return rlsls1_m1316; else {rlsls1_p1316=T;return rlsls1_m1316=((fabs((rlsls1_f1338()-rlsls1_v7330))<rlsls1_v7308)?rlsls1_f1867():NIL);}}
static int rlsls1_f1310(){if (rlsls1_p1310) return rlsls1_m1310; else {rlsls1_p1310=T;return rlsls1_m1310=((fabs((rlsls1_f1338()-rlsls1_v7326))<rlsls1_v7308)?rlsls1_f1858():NIL);}}
static int rlsls1_f1307(){if (rlsls1_p1307) return rlsls1_m1307; else {rlsls1_p1307=T;return rlsls1_m1307=((rlsls1_v1316=rlsls1_f1316()),((rlsls1_v1316?rlsls1_f1400():(rlsls1_v1316?NIL:T))?((rlsls1_v1310=rlsls1_f1310()),(rlsls1_v1310?rlsls1_f1398():(rlsls1_v1310?NIL:T))):NIL));}}
static double rlsls1_f1305(){if (rlsls1_p1305) return rlsls1_m1305; else {rlsls1_p1305=T;return rlsls1_m1305=atan2(rlsls1_f1853(),(rlsls1_f1338()-rlsls1_v7314));}}
static double rlsls1_f1285(){if (rlsls1_p1285) return rlsls1_m1285; else {rlsls1_p1285=T;return rlsls1_m1285=(rlsls1_f1305()+(1.5707963267948966));}}
static double rlsls1_f1277(){if (rlsls1_p1277) return rlsls1_m1277; else {rlsls1_p1277=T;return rlsls1_m1277=((rlsls1_v1285=rlsls1_f1285()),(((rlsls1_f2086()*(rlsls1_f1338()+cos(rlsls1_v1285)))+(rlsls1_f2083()*(rlsls1_f1892()+sin(rlsls1_v1285))))-rlsls1_f2075()));}}
static double rlsls1_f1303(){if (rlsls1_p1303) return rlsls1_m1303; else {rlsls1_p1303=T;return rlsls1_m1303=normalize_rotation((rlsls1_f1305()-rlsls1_f4788()));}}
static double rlsls1_f1302(){if (rlsls1_p1302) return rlsls1_m1302; else {rlsls1_p1302=T;return rlsls1_m1302=normalize_rotation(rlsls1_f1303());}}
static int rlsls1_f1290(){if (rlsls1_p1290) return rlsls1_m1290; else {rlsls1_p1290=T;return rlsls1_m1290=((rlsls1_v1302=rlsls1_f1302()),((fabs((rlsls1_v1302-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1302-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1302-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f1267(){if (rlsls1_p1267) return rlsls1_m1267; else {rlsls1_p1267=T;return rlsls1_m1267=((rlsls1_v1290=rlsls1_f1290()),(rlsls1_v1290?rlsls1_v1290:(((fabs((rlsls1_v7314-rlsls1_f1338()))<rlsls1_v7308)?rlsls1_f1830():NIL)?NIL:((rlsls1_f1374()?NIL:((rlsls1_v1277=rlsls1_f1277()),((fabs((rlsls1_v1277-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v1277>(0.0))?rlsls1_f1373():rlsls1_f1372()))))?NIL:T))));}}
static double rlsls1_f955(){if (rlsls1_p955) return rlsls1_m955; else {rlsls1_p955=T;return rlsls1_m955=(rlsls1_f1307()?(rlsls1_f1267()?rlsls1_f1303():rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f913(){if (rlsls1_p913) return rlsls1_m913; else {rlsls1_p913=T;return rlsls1_m913=(rlsls1_f1307()?(rlsls1_f1267()?NIL:T):T);}}
static int rlsls1_f1266(){if (rlsls1_p1266) return rlsls1_m1266; else {rlsls1_p1266=T;return rlsls1_m1266=(rlsls1_f1307()?rlsls1_f1267():NIL);}}
static int rlsls1_f1263(){if (rlsls1_p1263) return rlsls1_m1263; else {rlsls1_p1263=T;return rlsls1_m1263=((rlsls1_f1307()?(rlsls1_f1267()?rlsls1_f1303():rlsls1_f3082()):rlsls1_f3082())>(0.0));}}
static int rlsls1_f1256(){if (rlsls1_p1256) return rlsls1_m1256; else {rlsls1_p1256=T;return rlsls1_m1256=(rlsls1_f1266()?((rlsls1_v1263=rlsls1_f1263()),(rlsls1_v1263?rlsls1_v1263:(fabs(((rlsls1_f1307()?(rlsls1_f1267()?rlsls1_f1303():rlsls1_f3077()):rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL);}}
static int rlsls1_f1405(){if (rlsls1_p1405) return rlsls1_m1405; else {rlsls1_p1405=T;return rlsls1_m1405=(fabs((rlsls1_f2057()-rlsls1_f4939()))<rlsls1_v7308);}}
static double rlsls1_f964(){if (rlsls1_p964) return rlsls1_m964; else {rlsls1_p964=T;return rlsls1_m964=(rlsls1_f1405()?(rlsls1_f2017()?(rlsls1_f2004()?((rlsls1_v1354=rlsls1_f1354()),(rlsls1_v1354?(rlsls1_f1345()?(rlsls1_f1396()?(rlsls1_f1365()?rlsls1_f1394():rlsls1_f1507()):rlsls1_f1507()):rlsls1_f970()):(rlsls1_v1354?rlsls1_f970():rlsls1_f1509()))):rlsls1_f1509()):rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f915(){if (rlsls1_p915) return rlsls1_m915; else {rlsls1_p915=T;return rlsls1_m915=(rlsls1_f1405()?(rlsls1_f2017()?(rlsls1_f2004()?(rlsls1_f1354()?(rlsls1_f1345()?NIL:(rlsls1_f1396()?(rlsls1_f1365()?NIL:T):T)):T):T):T):T);}}
static int rlsls1_f1403(){if (rlsls1_p1403) return rlsls1_m1403; else {rlsls1_p1403=T;return rlsls1_m1403=((rlsls1_v1405=rlsls1_f1405()),(rlsls1_v1405?rlsls1_f3155():(rlsls1_v1405?NIL:T)));}}
static double rlsls1_f922(){if (rlsls1_p922) return rlsls1_m922; else {rlsls1_p922=T;return rlsls1_m922=(-(rlsls1_f1408()?rlsls1_f1509():(rlsls1_f1403()?(rlsls1_f2051()?(rlsls1_f1401()?rlsls1_f964():(rlsls1_f1330()?(rlsls1_f1320()?(rlsls1_f1256()?(rlsls1_f1183()?(rlsls1_f1307()?(rlsls1_f1267()?(rlsls1_f1192()?(rlsls1_f1243()?(rlsls1_f1203()?((rlsls1_v1303=rlsls1_f1303()),(rlsls1_v1239=rlsls1_f1239()),((rlsls1_v1303<rlsls1_v1239)?rlsls1_v1303:rlsls1_v1239)):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f955()):rlsls1_f951()):(rlsls1_f1256()?rlsls1_f955():rlsls1_f1509())):(rlsls1_f1320()?rlsls1_f951():rlsls1_f1509()))):(rlsls1_f1171()?rlsls1_f964():(rlsls1_f1155()?(rlsls1_f1141()?(rlsls1_f1067()?(rlsls1_f984()?(rlsls1_f1122()?(rlsls1_f1078()?(rlsls1_f993()?(rlsls1_f1048()?(rlsls1_f1004()?((rlsls1_v1117=rlsls1_f1117()),(rlsls1_v1043=rlsls1_f1043()),((rlsls1_v1117<rlsls1_v1043)?rlsls1_v1117:rlsls1_v1043)):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f936()):rlsls1_f932()):(rlsls1_f1067()?rlsls1_f936():rlsls1_f1509())):(rlsls1_f1141()?rlsls1_f932():rlsls1_f1509())))):rlsls1_f1509())));}}
static int rlsls1_f825(){if (rlsls1_p825) return rlsls1_m825; else {rlsls1_p825=T;return rlsls1_m825=(rlsls1_f2153()>rlsls1_f922());}}
static int rlsls1_f864(){if (rlsls1_p864) return rlsls1_m864; else {rlsls1_p864=T;return rlsls1_m864=(rlsls1_f1419()>rlsls1_f922());}}
static int rlsls1_f888(){if (rlsls1_p888) return rlsls1_m888; else {rlsls1_p888=T;return rlsls1_m888=(rlsls1_f1408()?T:(rlsls1_f1403()?(rlsls1_f2051()?(rlsls1_f1401()?rlsls1_f915():(rlsls1_f1330()?(rlsls1_f1320()?(rlsls1_f1256()?(rlsls1_f1183()?NIL:rlsls1_f913()):rlsls1_f909()):(rlsls1_f1256()?rlsls1_f913():T)):(rlsls1_f1320()?rlsls1_f909():T))):(rlsls1_f1171()?rlsls1_f915():(rlsls1_f1155()?(rlsls1_f1141()?(rlsls1_f1067()?(rlsls1_f984()?NIL:rlsls1_f901()):rlsls1_f897()):(rlsls1_f1067()?rlsls1_f901():T)):(rlsls1_f1141()?rlsls1_f897():T)))):T));}}
static int rlsls1_f1340(){if (rlsls1_p1340) return rlsls1_m1340; else {rlsls1_p1340=T;return rlsls1_m1340=(rlsls1_f1405()?(rlsls1_f2017()?(rlsls1_f2004()?(rlsls1_f1354()?(rlsls1_f1345()?T:rlsls1_f1364()):NIL):NIL):NIL):NIL);}}
static int rlsls1_f974(){if (rlsls1_p974) return rlsls1_m974; else {rlsls1_p974=T;return rlsls1_m974=(rlsls1_f1408()?NIL:(rlsls1_f1403()?(rlsls1_f2051()?(rlsls1_f1401()?rlsls1_f1340():(rlsls1_f1330()?(rlsls1_f1320()?(rlsls1_f1256()?(rlsls1_f1183()?T:rlsls1_f1266()):rlsls1_f1191()):(rlsls1_f1256()?rlsls1_f1266():NIL)):(rlsls1_f1320()?rlsls1_f1191():NIL))):(rlsls1_f1171()?rlsls1_f1340():(rlsls1_f1155()?(rlsls1_f1141()?(rlsls1_f1067()?(rlsls1_f984()?T:rlsls1_f1077()):rlsls1_f992()):(rlsls1_f1067()?rlsls1_f1077():NIL)):(rlsls1_f1141()?rlsls1_f992():NIL)))):NIL));}}
static double rlsls1_f883(){if (rlsls1_p883) return rlsls1_m883; else {rlsls1_p883=T;return rlsls1_m883=(rlsls1_f974()?rlsls1_f922():(rlsls1_f888()?rlsls1_f3077():rlsls1_f1419()));}}
static double rlsls1_f886(){if (rlsls1_p886) return rlsls1_m886; else {rlsls1_p886=T;return rlsls1_m886=(rlsls1_f974()?rlsls1_f922():(rlsls1_f888()?rlsls1_f3082():rlsls1_f1419()));}}
static int rlsls1_f885(){if (rlsls1_p885) return rlsls1_m885; else {rlsls1_p885=T;return rlsls1_m885=(rlsls1_f886()<(0.0));}}
static int rlsls1_f878(){if (rlsls1_p878) return rlsls1_m878; else {rlsls1_p878=T;return rlsls1_m878=(rlsls1_f974()?((rlsls1_v885=rlsls1_f885()),(rlsls1_v885?rlsls1_v885:(fabs((rlsls1_f883()-(0.0)))<rlsls1_v7308))):NIL);}}
static int rlsls1_f877(){if (rlsls1_p877) return rlsls1_m877; else {rlsls1_p877=T;return rlsls1_m877=(rlsls1_f878()?rlsls1_f974():NIL);}}
static double rlsls1_f874(){if (rlsls1_p874) return rlsls1_m874; else {rlsls1_p874=T;return rlsls1_m874=(rlsls1_f878()?rlsls1_f883():rlsls1_f3077());}}
static double rlsls1_f876(){if (rlsls1_p876) return rlsls1_m876; else {rlsls1_p876=T;return rlsls1_m876=(rlsls1_f878()?rlsls1_f886():rlsls1_f3082());}}
static int rlsls1_f875(){if (rlsls1_p875) return rlsls1_m875; else {rlsls1_p875=T;return rlsls1_m875=(rlsls1_f876()<(0.0));}}
static int rlsls1_f869(){if (rlsls1_p869) return rlsls1_m869; else {rlsls1_p869=T;return rlsls1_m869=(rlsls1_f877()?((rlsls1_v875=rlsls1_f875()),(rlsls1_v875?rlsls1_v875:(fabs((rlsls1_f874()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f5780(){if (rlsls1_p5780) return rlsls1_m5780; else {rlsls1_p5780=T;return rlsls1_m5780=((rlsls1_v5783=rlsls1_f5783()),sqrt(((rlsls1_v5783*rlsls1_v5783)+rlsls1_f7237())));}}
static double rlsls1_f5768(){if (rlsls1_p5768) return rlsls1_m5768; else {rlsls1_p5768=T;return rlsls1_m5768=((rlsls1_v5780=rlsls1_f5780()),(rlsls1_v5780*rlsls1_v5780));}}
static double rlsls1_f1712(){if (rlsls1_p1712) return rlsls1_m1712; else {rlsls1_p1712=T;return rlsls1_m1712=(rlsls1_f1717()-((4.0)*rlsls1_f1716()*(rlsls1_f2047()-(rlsls1_f2085()*rlsls1_f5768()))));}}
static int rlsls1_f1711(){if (rlsls1_p1711) return rlsls1_m1711; else {rlsls1_p1711=T;return rlsls1_m1711=(rlsls1_f1712()<0.0);}}
static double rlsls1_f1706(){if (rlsls1_p1706) return rlsls1_m1706; else {rlsls1_p1706=T;return rlsls1_m1706=(sqrt(rlsls1_f1712())/rlsls1_f1709());}}
static double rlsls1_f1690(){if (rlsls1_p1690) return rlsls1_m1690; else {rlsls1_p1690=T;return rlsls1_m1690=((rlsls1_f1708()-rlsls1_f1706())+rlsls1_v7312);}}
static double rlsls1_f1689(){if (rlsls1_p1689) return rlsls1_m1689; else {rlsls1_p1689=T;return rlsls1_m1689=(rlsls1_f2083()*rlsls1_f1690());}}
static double rlsls1_f1687(){if (rlsls1_p1687) return rlsls1_m1687; else {rlsls1_p1687=T;return rlsls1_m1687=((rlsls1_f2075()-rlsls1_f1689())/rlsls1_f2086());}}
static int rlsls1_f1678(){if (rlsls1_p1678) return rlsls1_m1678; else {rlsls1_p1678=T;return rlsls1_m1678=((rlsls1_v1687=rlsls1_f1687()),((fabs((((rlsls1_f2086()*rlsls1_v1687)+rlsls1_f1689())-rlsls1_f2075()))<rlsls1_v7308)?(((rlsls1_f5675()<=rlsls1_v1687)&&(rlsls1_v1687<=rlsls1_f5673()))?((rlsls1_f5666()<=rlsls1_f1690())&&(rlsls1_f1690()<=rlsls1_f5664())):NIL):NIL));}}
static int rlsls1_f1597(){if (rlsls1_p1597) return rlsls1_m1597; else {rlsls1_p1597=T;return rlsls1_m1597=((fabs((rlsls1_f1687()-rlsls1_v7330))<rlsls1_v7308)?(fabs((rlsls1_f1690()-rlsls1_v7328))<rlsls1_v7308):NIL);}}
static int rlsls1_f1588(){if (rlsls1_p1588) return rlsls1_m1588; else {rlsls1_p1588=T;return rlsls1_m1588=((fabs((rlsls1_f1687()-rlsls1_v7326))<rlsls1_v7308)?(fabs((rlsls1_f1690()-rlsls1_v7324))<rlsls1_v7308):NIL);}}
static int rlsls1_f1585(){if (rlsls1_p1585) return rlsls1_m1585; else {rlsls1_p1585=T;return rlsls1_m1585=((rlsls1_v1597=rlsls1_f1597()),((rlsls1_v1597?rlsls1_f1994():(rlsls1_v1597?NIL:T))?((rlsls1_v1588=rlsls1_f1588()),(rlsls1_v1588?rlsls1_f1982():(rlsls1_v1588?NIL:T))):NIL));}}
static double rlsls1_f1582(){if (rlsls1_p1582) return rlsls1_m1582; else {rlsls1_p1582=T;return rlsls1_m1582=atan2((rlsls1_f1690()-rlsls1_v7312),(rlsls1_f1687()-rlsls1_v7314));}}
static double rlsls1_f1559(){if (rlsls1_p1559) return rlsls1_m1559; else {rlsls1_p1559=T;return rlsls1_m1559=(rlsls1_f1582()+(1.5707963267948966));}}
static double rlsls1_f1551(){if (rlsls1_p1551) return rlsls1_m1551; else {rlsls1_p1551=T;return rlsls1_m1551=((rlsls1_v1559=rlsls1_f1559()),(((rlsls1_f2086()*(rlsls1_f1687()+cos(rlsls1_v1559)))+(rlsls1_f2083()*(rlsls1_f1690()+sin(rlsls1_v1559))))-rlsls1_f2075()));}}
static double rlsls1_f1580(){if (rlsls1_p1580) return rlsls1_m1580; else {rlsls1_p1580=T;return rlsls1_m1580=normalize_rotation((rlsls1_f1582()-rlsls1_f5522()));}}
static double rlsls1_f1579(){if (rlsls1_p1579) return rlsls1_m1579; else {rlsls1_p1579=T;return rlsls1_m1579=normalize_rotation(rlsls1_f1580());}}
static int rlsls1_f1567(){if (rlsls1_p1567) return rlsls1_m1567; else {rlsls1_p1567=T;return rlsls1_m1567=((rlsls1_v1579=rlsls1_f1579()),((fabs((rlsls1_v1579-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1579-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1579-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f1541(){if (rlsls1_p1541) return rlsls1_m1541; else {rlsls1_p1541=T;return rlsls1_m1541=((rlsls1_v1567=rlsls1_f1567()),(rlsls1_v1567?rlsls1_v1567:(((fabs((rlsls1_v7314-rlsls1_f1687()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f1690()))<rlsls1_v7308):NIL)?NIL:((rlsls1_f1943()?NIL:((rlsls1_v1551=rlsls1_f1551()),((fabs((rlsls1_v1551-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v1551>(0.0))?rlsls1_f1929():rlsls1_f1928()))))?NIL:T))));}}
static int rlsls1_f1540(){if (rlsls1_p1540) return rlsls1_m1540; else {rlsls1_p1540=T;return rlsls1_m1540=(rlsls1_f1585()?rlsls1_f1541():NIL);}}
static double rlsls1_f1535(){if (rlsls1_p1535) return rlsls1_m1535; else {rlsls1_p1535=T;return rlsls1_m1535=(rlsls1_f1585()?(rlsls1_f1541()?rlsls1_f1580():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f1538(){if (rlsls1_p1538) return rlsls1_m1538; else {rlsls1_p1538=T;return rlsls1_m1538=(rlsls1_f1585()?(rlsls1_f1541()?rlsls1_f1580():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f1537(){if (rlsls1_p1537) return rlsls1_m1537; else {rlsls1_p1537=T;return rlsls1_m1537=(rlsls1_f1538()>(0.0));}}
static int rlsls1_f1530(){if (rlsls1_p1530) return rlsls1_m1530; else {rlsls1_p1530=T;return rlsls1_m1530=(rlsls1_f1540()?((rlsls1_v1537=rlsls1_f1537()),(rlsls1_v1537?rlsls1_v1537:(fabs((rlsls1_f1535()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f1465(){if (rlsls1_p1465) return rlsls1_m1465; else {rlsls1_p1465=T;return rlsls1_m1465=(rlsls1_f1530()?(rlsls1_f1585()?(rlsls1_f1541()?rlsls1_f1580():rlsls1_f1509()):rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f1430(){if (rlsls1_p1430) return rlsls1_m1430; else {rlsls1_p1430=T;return rlsls1_m1430=(rlsls1_f1530()?(rlsls1_f1585()?(rlsls1_f1541()?NIL:T):T):T);}}
static int rlsls1_f1527(){if (rlsls1_p1527) return rlsls1_m1527; else {rlsls1_p1527=T;return rlsls1_m1527=((rlsls1_f1530()?rlsls1_f1538():rlsls1_f3082())>(0.0));}}
static int rlsls1_f1529(){if (rlsls1_p1529) return rlsls1_m1529; else {rlsls1_p1529=T;return rlsls1_m1529=(rlsls1_f1530()?rlsls1_f1540():NIL);}}
static int rlsls1_f1521(){if (rlsls1_p1521) return rlsls1_m1521; else {rlsls1_p1521=T;return rlsls1_m1521=(rlsls1_f1529()?((rlsls1_v1527=rlsls1_f1527()),(rlsls1_v1527?rlsls1_v1527:(fabs(((rlsls1_f1530()?rlsls1_f1535():rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f1704(){if (rlsls1_p1704) return rlsls1_m1704; else {rlsls1_p1704=T;return rlsls1_m1704=((rlsls1_f1708()+rlsls1_f1706())+rlsls1_v7312);}}
static double rlsls1_f1703(){if (rlsls1_p1703) return rlsls1_m1703; else {rlsls1_p1703=T;return rlsls1_m1703=(rlsls1_f2083()*rlsls1_f1704());}}
static double rlsls1_f1701(){if (rlsls1_p1701) return rlsls1_m1701; else {rlsls1_p1701=T;return rlsls1_m1701=((rlsls1_f2075()-rlsls1_f1703())/rlsls1_f2086());}}
static int rlsls1_f1692(){if (rlsls1_p1692) return rlsls1_m1692; else {rlsls1_p1692=T;return rlsls1_m1692=((rlsls1_v1701=rlsls1_f1701()),((fabs((((rlsls1_f2086()*rlsls1_v1701)+rlsls1_f1703())-rlsls1_f2075()))<rlsls1_v7308)?(((rlsls1_f5675()<=rlsls1_v1701)&&(rlsls1_v1701<=rlsls1_f5673()))?((rlsls1_f5666()<=rlsls1_f1704())&&(rlsls1_f1704()<=rlsls1_f5664())):NIL):NIL));}}
static int rlsls1_f1671(){if (rlsls1_p1671) return rlsls1_m1671; else {rlsls1_p1671=T;return rlsls1_m1671=((fabs((rlsls1_f1701()-rlsls1_v7330))<rlsls1_v7308)?(fabs((rlsls1_f1704()-rlsls1_v7328))<rlsls1_v7308):NIL);}}
static int rlsls1_f1662(){if (rlsls1_p1662) return rlsls1_m1662; else {rlsls1_p1662=T;return rlsls1_m1662=((fabs((rlsls1_f1701()-rlsls1_v7326))<rlsls1_v7308)?(fabs((rlsls1_f1704()-rlsls1_v7324))<rlsls1_v7308):NIL);}}
static int rlsls1_f1659(){if (rlsls1_p1659) return rlsls1_m1659; else {rlsls1_p1659=T;return rlsls1_m1659=((rlsls1_v1671=rlsls1_f1671()),((rlsls1_v1671?rlsls1_f1994():(rlsls1_v1671?NIL:T))?((rlsls1_v1662=rlsls1_f1662()),(rlsls1_v1662?rlsls1_f1982():(rlsls1_v1662?NIL:T))):NIL));}}
static double rlsls1_f1656(){if (rlsls1_p1656) return rlsls1_m1656; else {rlsls1_p1656=T;return rlsls1_m1656=atan2((rlsls1_f1704()-rlsls1_v7312),(rlsls1_f1701()-rlsls1_v7314));}}
static double rlsls1_f1633(){if (rlsls1_p1633) return rlsls1_m1633; else {rlsls1_p1633=T;return rlsls1_m1633=(rlsls1_f1656()+(1.5707963267948966));}}
static double rlsls1_f1625(){if (rlsls1_p1625) return rlsls1_m1625; else {rlsls1_p1625=T;return rlsls1_m1625=((rlsls1_v1633=rlsls1_f1633()),(((rlsls1_f2086()*(rlsls1_f1701()+cos(rlsls1_v1633)))+(rlsls1_f2083()*(rlsls1_f1704()+sin(rlsls1_v1633))))-rlsls1_f2075()));}}
static double rlsls1_f1654(){if (rlsls1_p1654) return rlsls1_m1654; else {rlsls1_p1654=T;return rlsls1_m1654=normalize_rotation((rlsls1_f1656()-rlsls1_f5522()));}}
static double rlsls1_f1653(){if (rlsls1_p1653) return rlsls1_m1653; else {rlsls1_p1653=T;return rlsls1_m1653=normalize_rotation(rlsls1_f1654());}}
static int rlsls1_f1641(){if (rlsls1_p1641) return rlsls1_m1641; else {rlsls1_p1641=T;return rlsls1_m1641=((rlsls1_v1653=rlsls1_f1653()),((fabs((rlsls1_v1653-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1653-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1653-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f1615(){if (rlsls1_p1615) return rlsls1_m1615; else {rlsls1_p1615=T;return rlsls1_m1615=((rlsls1_v1641=rlsls1_f1641()),(rlsls1_v1641?rlsls1_v1641:(((fabs((rlsls1_v7314-rlsls1_f1701()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f1704()))<rlsls1_v7308):NIL)?NIL:((rlsls1_f1943()?NIL:((rlsls1_v1625=rlsls1_f1625()),((fabs((rlsls1_v1625-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v1625>(0.0))?rlsls1_f1929():rlsls1_f1928()))))?NIL:T))));}}
static double rlsls1_f1469(){if (rlsls1_p1469) return rlsls1_m1469; else {rlsls1_p1469=T;return rlsls1_m1469=(rlsls1_f1659()?(rlsls1_f1615()?rlsls1_f1654():rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f1434(){if (rlsls1_p1434) return rlsls1_m1434; else {rlsls1_p1434=T;return rlsls1_m1434=(rlsls1_f1659()?(rlsls1_f1615()?NIL:T):T);}}
static int rlsls1_f1614(){if (rlsls1_p1614) return rlsls1_m1614; else {rlsls1_p1614=T;return rlsls1_m1614=(rlsls1_f1659()?rlsls1_f1615():NIL);}}
static int rlsls1_f1611(){if (rlsls1_p1611) return rlsls1_m1611; else {rlsls1_p1611=T;return rlsls1_m1611=((rlsls1_f1659()?(rlsls1_f1615()?rlsls1_f1654():rlsls1_f3082()):rlsls1_f3082())>(0.0));}}
static int rlsls1_f1604(){if (rlsls1_p1604) return rlsls1_m1604; else {rlsls1_p1604=T;return rlsls1_m1604=(rlsls1_f1614()?((rlsls1_v1611=rlsls1_f1611()),(rlsls1_v1611?rlsls1_v1611:(fabs(((rlsls1_f1659()?(rlsls1_f1615()?rlsls1_f1654():rlsls1_f3077()):rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f2044(){if (rlsls1_p2044) return rlsls1_m2044; else {rlsls1_p2044=T;return rlsls1_m2044=(rlsls1_f5768()-rlsls1_f2045());}}
static int rlsls1_f2043(){if (rlsls1_p2043) return rlsls1_m2043; else {rlsls1_p2043=T;return rlsls1_m2043=(rlsls1_f2044()<0.0);}}
static double rlsls1_f1895(){if (rlsls1_p1895) return rlsls1_m1895; else {rlsls1_p1895=T;return rlsls1_m1895=sqrt(rlsls1_f2044());}}
static double rlsls1_f1881(){if (rlsls1_p1881) return rlsls1_m1881; else {rlsls1_p1881=T;return rlsls1_m1881=((-rlsls1_f1895())+rlsls1_v7314);}}
static int rlsls1_f1873(){if (rlsls1_p1873) return rlsls1_m1873; else {rlsls1_p1873=T;return rlsls1_m1873=((rlsls1_v1881=rlsls1_f1881()),((fabs((((rlsls1_f2086()*rlsls1_v1881)+rlsls1_f1891())-rlsls1_f2075()))<rlsls1_v7308)?(((rlsls1_f5675()<=rlsls1_v1881)&&(rlsls1_v1881<=rlsls1_f5673()))?rlsls1_f1885():NIL):NIL));}}
static int rlsls1_f1795(){if (rlsls1_p1795) return rlsls1_m1795; else {rlsls1_p1795=T;return rlsls1_m1795=((fabs((rlsls1_f1881()-rlsls1_v7330))<rlsls1_v7308)?rlsls1_f1867():NIL);}}
static int rlsls1_f1789(){if (rlsls1_p1789) return rlsls1_m1789; else {rlsls1_p1789=T;return rlsls1_m1789=((fabs((rlsls1_f1881()-rlsls1_v7326))<rlsls1_v7308)?rlsls1_f1858():NIL);}}
static int rlsls1_f1786(){if (rlsls1_p1786) return rlsls1_m1786; else {rlsls1_p1786=T;return rlsls1_m1786=((rlsls1_v1795=rlsls1_f1795()),((rlsls1_v1795?rlsls1_f1994():(rlsls1_v1795?NIL:T))?((rlsls1_v1789=rlsls1_f1789()),(rlsls1_v1789?rlsls1_f1982():(rlsls1_v1789?NIL:T))):NIL));}}
static double rlsls1_f1784(){if (rlsls1_p1784) return rlsls1_m1784; else {rlsls1_p1784=T;return rlsls1_m1784=atan2(rlsls1_f1853(),(rlsls1_f1881()-rlsls1_v7314));}}
static double rlsls1_f1764(){if (rlsls1_p1764) return rlsls1_m1764; else {rlsls1_p1764=T;return rlsls1_m1764=(rlsls1_f1784()+(1.5707963267948966));}}
static double rlsls1_f1756(){if (rlsls1_p1756) return rlsls1_m1756; else {rlsls1_p1756=T;return rlsls1_m1756=((rlsls1_v1764=rlsls1_f1764()),(((rlsls1_f2086()*(rlsls1_f1881()+cos(rlsls1_v1764)))+(rlsls1_f2083()*(rlsls1_f1892()+sin(rlsls1_v1764))))-rlsls1_f2075()));}}
static double rlsls1_f1782(){if (rlsls1_p1782) return rlsls1_m1782; else {rlsls1_p1782=T;return rlsls1_m1782=normalize_rotation((rlsls1_f1784()-rlsls1_f5522()));}}
static double rlsls1_f1781(){if (rlsls1_p1781) return rlsls1_m1781; else {rlsls1_p1781=T;return rlsls1_m1781=normalize_rotation(rlsls1_f1782());}}
static int rlsls1_f1769(){if (rlsls1_p1769) return rlsls1_m1769; else {rlsls1_p1769=T;return rlsls1_m1769=((rlsls1_v1781=rlsls1_f1781()),((fabs((rlsls1_v1781-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1781-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1781-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f1746(){if (rlsls1_p1746) return rlsls1_m1746; else {rlsls1_p1746=T;return rlsls1_m1746=((rlsls1_v1769=rlsls1_f1769()),(rlsls1_v1769?rlsls1_v1769:(((fabs((rlsls1_v7314-rlsls1_f1881()))<rlsls1_v7308)?rlsls1_f1830():NIL)?NIL:((rlsls1_f1943()?NIL:((rlsls1_v1756=rlsls1_f1756()),((fabs((rlsls1_v1756-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v1756>(0.0))?rlsls1_f1929():rlsls1_f1928()))))?NIL:T))));}}
static int rlsls1_f1745(){if (rlsls1_p1745) return rlsls1_m1745; else {rlsls1_p1745=T;return rlsls1_m1745=(rlsls1_f1786()?rlsls1_f1746():NIL);}}
static double rlsls1_f1740(){if (rlsls1_p1740) return rlsls1_m1740; else {rlsls1_p1740=T;return rlsls1_m1740=(rlsls1_f1786()?(rlsls1_f1746()?rlsls1_f1782():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f1743(){if (rlsls1_p1743) return rlsls1_m1743; else {rlsls1_p1743=T;return rlsls1_m1743=(rlsls1_f1786()?(rlsls1_f1746()?rlsls1_f1782():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f1742(){if (rlsls1_p1742) return rlsls1_m1742; else {rlsls1_p1742=T;return rlsls1_m1742=(rlsls1_f1743()>(0.0));}}
static int rlsls1_f1735(){if (rlsls1_p1735) return rlsls1_m1735; else {rlsls1_p1735=T;return rlsls1_m1735=(rlsls1_f1745()?((rlsls1_v1742=rlsls1_f1742()),(rlsls1_v1742?rlsls1_v1742:(fabs((rlsls1_f1740()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f1484(){if (rlsls1_p1484) return rlsls1_m1484; else {rlsls1_p1484=T;return rlsls1_m1484=(rlsls1_f1735()?(rlsls1_f1786()?(rlsls1_f1746()?rlsls1_f1782():rlsls1_f1509()):rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f1442(){if (rlsls1_p1442) return rlsls1_m1442; else {rlsls1_p1442=T;return rlsls1_m1442=(rlsls1_f1735()?(rlsls1_f1786()?(rlsls1_f1746()?NIL:T):T):T);}}
static int rlsls1_f1732(){if (rlsls1_p1732) return rlsls1_m1732; else {rlsls1_p1732=T;return rlsls1_m1732=((rlsls1_f1735()?rlsls1_f1743():rlsls1_f3082())>(0.0));}}
static int rlsls1_f1734(){if (rlsls1_p1734) return rlsls1_m1734; else {rlsls1_p1734=T;return rlsls1_m1734=(rlsls1_f1735()?rlsls1_f1745():NIL);}}
static int rlsls1_f1726(){if (rlsls1_p1726) return rlsls1_m1726; else {rlsls1_p1726=T;return rlsls1_m1726=(rlsls1_f1734()?((rlsls1_v1732=rlsls1_f1732()),(rlsls1_v1732?rlsls1_v1732:(fabs(((rlsls1_f1735()?rlsls1_f1740():rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f1894(){if (rlsls1_p1894) return rlsls1_m1894; else {rlsls1_p1894=T;return rlsls1_m1894=(rlsls1_f1895()+rlsls1_v7314);}}
static int rlsls1_f1883(){if (rlsls1_p1883) return rlsls1_m1883; else {rlsls1_p1883=T;return rlsls1_m1883=((rlsls1_v1894=rlsls1_f1894()),((fabs((((rlsls1_f2086()*rlsls1_v1894)+rlsls1_f1891())-rlsls1_f2075()))<rlsls1_v7308)?(((rlsls1_f5675()<=rlsls1_v1894)&&(rlsls1_v1894<=rlsls1_f5673()))?rlsls1_f1885():NIL):NIL));}}
static int rlsls1_f1866(){if (rlsls1_p1866) return rlsls1_m1866; else {rlsls1_p1866=T;return rlsls1_m1866=((fabs((rlsls1_f1894()-rlsls1_v7330))<rlsls1_v7308)?rlsls1_f1867():NIL);}}
static int rlsls1_f1857(){if (rlsls1_p1857) return rlsls1_m1857; else {rlsls1_p1857=T;return rlsls1_m1857=((fabs((rlsls1_f1894()-rlsls1_v7326))<rlsls1_v7308)?rlsls1_f1858():NIL);}}
static int rlsls1_f1854(){if (rlsls1_p1854) return rlsls1_m1854; else {rlsls1_p1854=T;return rlsls1_m1854=((rlsls1_v1866=rlsls1_f1866()),((rlsls1_v1866?rlsls1_f1994():(rlsls1_v1866?NIL:T))?((rlsls1_v1857=rlsls1_f1857()),(rlsls1_v1857?rlsls1_f1982():(rlsls1_v1857?NIL:T))):NIL));}}
static double rlsls1_f1851(){if (rlsls1_p1851) return rlsls1_m1851; else {rlsls1_p1851=T;return rlsls1_m1851=atan2(rlsls1_f1853(),(rlsls1_f1894()-rlsls1_v7314));}}
static double rlsls1_f1828(){if (rlsls1_p1828) return rlsls1_m1828; else {rlsls1_p1828=T;return rlsls1_m1828=(rlsls1_f1851()+(1.5707963267948966));}}
static double rlsls1_f1820(){if (rlsls1_p1820) return rlsls1_m1820; else {rlsls1_p1820=T;return rlsls1_m1820=((rlsls1_v1828=rlsls1_f1828()),(((rlsls1_f2086()*(rlsls1_f1894()+cos(rlsls1_v1828)))+(rlsls1_f2083()*(rlsls1_f1892()+sin(rlsls1_v1828))))-rlsls1_f2075()));}}
static double rlsls1_f1849(){if (rlsls1_p1849) return rlsls1_m1849; else {rlsls1_p1849=T;return rlsls1_m1849=normalize_rotation((rlsls1_f1851()-rlsls1_f5522()));}}
static double rlsls1_f1848(){if (rlsls1_p1848) return rlsls1_m1848; else {rlsls1_p1848=T;return rlsls1_m1848=normalize_rotation(rlsls1_f1849());}}
static int rlsls1_f1836(){if (rlsls1_p1836) return rlsls1_m1836; else {rlsls1_p1836=T;return rlsls1_m1836=((rlsls1_v1848=rlsls1_f1848()),((fabs((rlsls1_v1848-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1848-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v1848-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f1810(){if (rlsls1_p1810) return rlsls1_m1810; else {rlsls1_p1810=T;return rlsls1_m1810=((rlsls1_v1836=rlsls1_f1836()),(rlsls1_v1836?rlsls1_v1836:(((fabs((rlsls1_v7314-rlsls1_f1894()))<rlsls1_v7308)?rlsls1_f1830():NIL)?NIL:((rlsls1_f1943()?NIL:((rlsls1_v1820=rlsls1_f1820()),((fabs((rlsls1_v1820-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v1820>(0.0))?rlsls1_f1929():rlsls1_f1928()))))?NIL:T))));}}
static double rlsls1_f1488(){if (rlsls1_p1488) return rlsls1_m1488; else {rlsls1_p1488=T;return rlsls1_m1488=(rlsls1_f1854()?(rlsls1_f1810()?rlsls1_f1849():rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f1446(){if (rlsls1_p1446) return rlsls1_m1446; else {rlsls1_p1446=T;return rlsls1_m1446=(rlsls1_f1854()?(rlsls1_f1810()?NIL:T):T);}}
static int rlsls1_f1809(){if (rlsls1_p1809) return rlsls1_m1809; else {rlsls1_p1809=T;return rlsls1_m1809=(rlsls1_f1854()?rlsls1_f1810():NIL);}}
static int rlsls1_f1806(){if (rlsls1_p1806) return rlsls1_m1806; else {rlsls1_p1806=T;return rlsls1_m1806=((rlsls1_f1854()?(rlsls1_f1810()?rlsls1_f1849():rlsls1_f3082()):rlsls1_f3082())>(0.0));}}
static int rlsls1_f1799(){if (rlsls1_p1799) return rlsls1_m1799; else {rlsls1_p1799=T;return rlsls1_m1799=(rlsls1_f1809()?((rlsls1_v1806=rlsls1_f1806()),(rlsls1_v1806?rlsls1_v1806:(fabs(((rlsls1_f1854()?(rlsls1_f1810()?rlsls1_f1849():rlsls1_f3077()):rlsls1_f3077())-(0.0)))<rlsls1_v7308))):NIL);}}
static int rlsls1_f2054(){if (rlsls1_p2054) return rlsls1_m2054; else {rlsls1_p2054=T;return rlsls1_m2054=(fabs((rlsls1_f2057()-rlsls1_f5780()))<rlsls1_v7308);}}
static double rlsls1_f1497(){if (rlsls1_p1497) return rlsls1_m1497; else {rlsls1_p1497=T;return rlsls1_m1497=(rlsls1_f2054()?(rlsls1_f2017()?(rlsls1_f2004()?((rlsls1_v1910=rlsls1_f1910()),(rlsls1_v1910?(rlsls1_f1901()?(rlsls1_f1979()?(rlsls1_f1921()?rlsls1_f1972():rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1503()):(rlsls1_v1910?rlsls1_f1503():rlsls1_f1509()))):rlsls1_f1509()):rlsls1_f1509()):rlsls1_f1509());}}
static int rlsls1_f1448(){if (rlsls1_p1448) return rlsls1_m1448; else {rlsls1_p1448=T;return rlsls1_m1448=(rlsls1_f2054()?(rlsls1_f2017()?(rlsls1_f2004()?(rlsls1_f1910()?(rlsls1_f1901()?NIL:(rlsls1_f1979()?(rlsls1_f1921()?NIL:T):T)):T):T):T):T);}}
static int rlsls1_f2052(){if (rlsls1_p2052) return rlsls1_m2052; else {rlsls1_p2052=T;return rlsls1_m2052=((rlsls1_v2054=rlsls1_f2054()),(rlsls1_v2054?rlsls1_f3172():(rlsls1_v2054?NIL:T)));}}
static double rlsls1_f1455(){if (rlsls1_p1455) return rlsls1_m1455; else {rlsls1_p1455=T;return rlsls1_m1455=(-(rlsls1_f2088()?rlsls1_f1509():(rlsls1_f2052()?(rlsls1_f2051()?(rlsls1_f2043()?rlsls1_f1497():(rlsls1_f1883()?(rlsls1_f1873()?(rlsls1_f1799()?(rlsls1_f1726()?(rlsls1_f1854()?(rlsls1_f1810()?(rlsls1_f1735()?(rlsls1_f1786()?(rlsls1_f1746()?((rlsls1_v1849=rlsls1_f1849()),(rlsls1_v1782=rlsls1_f1782()),((rlsls1_v1849<rlsls1_v1782)?rlsls1_v1849:rlsls1_v1782)):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1488()):rlsls1_f1484()):(rlsls1_f1799()?rlsls1_f1488():rlsls1_f1509())):(rlsls1_f1873()?rlsls1_f1484():rlsls1_f1509()))):(rlsls1_f1711()?rlsls1_f1497():(rlsls1_f1692()?(rlsls1_f1678()?(rlsls1_f1604()?(rlsls1_f1521()?(rlsls1_f1659()?(rlsls1_f1615()?(rlsls1_f1530()?(rlsls1_f1585()?(rlsls1_f1541()?((rlsls1_v1654=rlsls1_f1654()),(rlsls1_v1580=rlsls1_f1580()),((rlsls1_v1654<rlsls1_v1580)?rlsls1_v1654:rlsls1_v1580)):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1507()):rlsls1_f1469()):rlsls1_f1465()):(rlsls1_f1604()?rlsls1_f1469():rlsls1_f1509())):(rlsls1_f1678()?rlsls1_f1465():rlsls1_f1509())))):rlsls1_f1509())));}}
static int rlsls1_f832(){if (rlsls1_p832) return rlsls1_m832; else {rlsls1_p832=T;return rlsls1_m832=(rlsls1_f2153()>rlsls1_f1455());}}
static int rlsls1_f868(){if (rlsls1_p868) return rlsls1_m868; else {rlsls1_p868=T;return rlsls1_m868=(rlsls1_f1455()>rlsls1_f1419());}}
static int rlsls1_f1421(){if (rlsls1_p1421) return rlsls1_m1421; else {rlsls1_p1421=T;return rlsls1_m1421=(rlsls1_f2088()?T:(rlsls1_f2052()?(rlsls1_f2051()?(rlsls1_f2043()?rlsls1_f1448():(rlsls1_f1883()?(rlsls1_f1873()?(rlsls1_f1799()?(rlsls1_f1726()?NIL:rlsls1_f1446()):rlsls1_f1442()):(rlsls1_f1799()?rlsls1_f1446():T)):(rlsls1_f1873()?rlsls1_f1442():T))):(rlsls1_f1711()?rlsls1_f1448():(rlsls1_f1692()?(rlsls1_f1678()?(rlsls1_f1604()?(rlsls1_f1521()?NIL:rlsls1_f1434()):rlsls1_f1430()):(rlsls1_f1604()?rlsls1_f1434():T)):(rlsls1_f1678()?rlsls1_f1430():T)))):T));}}
static int rlsls1_f1896(){if (rlsls1_p1896) return rlsls1_m1896; else {rlsls1_p1896=T;return rlsls1_m1896=(rlsls1_f2054()?(rlsls1_f2017()?(rlsls1_f2004()?(rlsls1_f1910()?(rlsls1_f1901()?T:rlsls1_f1920()):NIL):NIL):NIL):NIL);}}
static int rlsls1_f1511(){if (rlsls1_p1511) return rlsls1_m1511; else {rlsls1_p1511=T;return rlsls1_m1511=(rlsls1_f2088()?NIL:(rlsls1_f2052()?(rlsls1_f2051()?(rlsls1_f2043()?rlsls1_f1896():(rlsls1_f1883()?(rlsls1_f1873()?(rlsls1_f1799()?(rlsls1_f1726()?T:rlsls1_f1809()):rlsls1_f1734()):(rlsls1_f1799()?rlsls1_f1809():NIL)):(rlsls1_f1873()?rlsls1_f1734():NIL))):(rlsls1_f1711()?rlsls1_f1896():(rlsls1_f1692()?(rlsls1_f1678()?(rlsls1_f1604()?(rlsls1_f1521()?T:rlsls1_f1614()):rlsls1_f1529()):(rlsls1_f1604()?rlsls1_f1614():NIL)):(rlsls1_f1678()?rlsls1_f1529():NIL)))):NIL));}}
static int rlsls1_f859(){if (rlsls1_p859) return rlsls1_m859; else {rlsls1_p859=T;return rlsls1_m859=(rlsls1_f1511()?(rlsls1_f878()?(rlsls1_f974()?T:(rlsls1_f888()?NIL:rlsls1_f868())):NIL):(rlsls1_f1421()?NIL:(rlsls1_f878()?(rlsls1_f974()?(rlsls1_f864()?NIL:T):NIL):NIL)));}}
static double rlsls1_f845(){if (rlsls1_p845) return rlsls1_m845; else {rlsls1_p845=T;return rlsls1_m845=(rlsls1_f1511()?(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v1455=rlsls1_f1455()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v1455>rlsls1_v922)?rlsls1_v1455:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():(rlsls1_f868()?rlsls1_f1455():rlsls1_f1419()))):rlsls1_f2664()):(rlsls1_f1421()?rlsls1_f2664():(rlsls1_f878()?(rlsls1_f974()?(rlsls1_f864()?rlsls1_f1419():rlsls1_f922()):(rlsls1_f888()?rlsls1_f2664():rlsls1_f1419())):rlsls1_f2664())));}}
static int rlsls1_f834(){if (rlsls1_p834) return rlsls1_m834; else {rlsls1_p834=T;return rlsls1_m834=(rlsls1_f2153()>rlsls1_f845());}}
static int rlsls1_f819(){if (rlsls1_p819) return rlsls1_m819; else {rlsls1_p819=T;return rlsls1_m819=(rlsls1_f2578()>rlsls1_f845());}}
static double rlsls1_f1414(){if (rlsls1_p1414) return rlsls1_m1414; else {rlsls1_p1414=T;return rlsls1_m1414=(rlsls1_f1511()?rlsls1_f1455():(rlsls1_f1421()?rlsls1_f3077():rlsls1_f1419()));}}
static double rlsls1_f1417(){if (rlsls1_p1417) return rlsls1_m1417; else {rlsls1_p1417=T;return rlsls1_m1417=(rlsls1_f1511()?rlsls1_f1455():(rlsls1_f1421()?rlsls1_f3082():rlsls1_f1419()));}}
static int rlsls1_f1416(){if (rlsls1_p1416) return rlsls1_m1416; else {rlsls1_p1416=T;return rlsls1_m1416=(rlsls1_f1417()<(0.0));}}
static int rlsls1_f1409(){if (rlsls1_p1409) return rlsls1_m1409; else {rlsls1_p1409=T;return rlsls1_m1409=(rlsls1_f1511()?((rlsls1_v1416=rlsls1_f1416()),(rlsls1_v1416?rlsls1_v1416:(fabs((rlsls1_f1414()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f515(){if (rlsls1_p515) return rlsls1_m515; else {rlsls1_p515=T;return rlsls1_m515=(rlsls1_f1409()?(rlsls1_f869()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v845=rlsls1_f845()),((rlsls1_v2662>rlsls1_v845)?rlsls1_v2662:rlsls1_v845)):(rlsls1_f1511()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2662>rlsls1_v1455)?rlsls1_v2662:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f524()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2662>rlsls1_v922)?rlsls1_v2662:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f524())):rlsls1_f2664()));}}
static double rlsls1_f467(){if (rlsls1_p467) return rlsls1_m467; else {rlsls1_p467=T;return rlsls1_m467=(rlsls1_f1409()?(rlsls1_f869()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v845=rlsls1_f845()),((rlsls1_v3139>rlsls1_v845)?rlsls1_v3139:rlsls1_v845)):(rlsls1_f1511()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v3139>rlsls1_v1455)?rlsls1_v3139:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f476()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v3139>rlsls1_v922)?rlsls1_v3139:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f476())):rlsls1_f2664()));}}
static int rlsls1_f857(){if (rlsls1_p857) return rlsls1_m857; else {rlsls1_p857=T;return rlsls1_m857=(rlsls1_f1409()?(rlsls1_f869()?rlsls1_f859():rlsls1_f1511()):rlsls1_f877());}}
static double rlsls1_f840(){if (rlsls1_p840) return rlsls1_m840; else {rlsls1_p840=T;return rlsls1_m840=(rlsls1_f1409()?(rlsls1_f869()?rlsls1_f845():rlsls1_f1414()):rlsls1_f874());}}
static double rlsls1_f843(){if (rlsls1_p843) return rlsls1_m843; else {rlsls1_p843=T;return rlsls1_m843=(rlsls1_f1409()?(rlsls1_f869()?rlsls1_f845():rlsls1_f1417()):rlsls1_f876());}}
static int rlsls1_f842(){if (rlsls1_p842) return rlsls1_m842; else {rlsls1_p842=T;return rlsls1_m842=(rlsls1_f843()<(0.0));}}
static int rlsls1_f835(){if (rlsls1_p835) return rlsls1_m835; else {rlsls1_p835=T;return rlsls1_m835=(rlsls1_f857()?((rlsls1_v842=rlsls1_f842()),(rlsls1_v842?rlsls1_v842:(fabs((rlsls1_f840()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f6443(){if (rlsls1_p6443) return rlsls1_m6443; else {rlsls1_p6443=T;return rlsls1_m6443=((rlsls1_v6446=rlsls1_f6446()),sqrt(((rlsls1_v6446*rlsls1_v6446)+rlsls1_f7237())));}}
static double rlsls1_f6423(){if (rlsls1_p6423) return rlsls1_m6423; else {rlsls1_p6423=T;return rlsls1_m6423=((rlsls1_v6443=rlsls1_f6443()),(rlsls1_v6443*rlsls1_v6443));}}
static double rlsls1_f2363(){if (rlsls1_p2363) return rlsls1_m2363; else {rlsls1_p2363=T;return rlsls1_m2363=(rlsls1_f2883()-((4.0)*rlsls1_f2881()*(rlsls1_f3228()-(rlsls1_f3275()*rlsls1_f6423()))));}}
static int rlsls1_f2362(){if (rlsls1_p2362) return rlsls1_m2362; else {rlsls1_p2362=T;return rlsls1_m2362=(rlsls1_f2363()<0.0);}}
static double rlsls1_f2360(){if (rlsls1_p2360) return rlsls1_m2360; else {rlsls1_p2360=T;return rlsls1_m2360=(sqrt(rlsls1_f2363())/rlsls1_f2874());}}
static double rlsls1_f2344(){if (rlsls1_p2344) return rlsls1_m2344; else {rlsls1_p2344=T;return rlsls1_m2344=((rlsls1_f2873()-rlsls1_f2360())+rlsls1_v7312);}}
static double rlsls1_f2343(){if (rlsls1_p2343) return rlsls1_m2343; else {rlsls1_p2343=T;return rlsls1_m2343=(rlsls1_f3273()*rlsls1_f2344());}}
static double rlsls1_f2341(){if (rlsls1_p2341) return rlsls1_m2341; else {rlsls1_p2341=T;return rlsls1_m2341=((rlsls1_f3263()-rlsls1_f2343())/rlsls1_f3276());}}
static int rlsls1_f2332(){if (rlsls1_p2332) return rlsls1_m2332; else {rlsls1_p2332=T;return rlsls1_m2332=((rlsls1_v2341=rlsls1_f2341()),((fabs((((rlsls1_f3276()*rlsls1_v2341)+rlsls1_f2343())-rlsls1_f3263()))<rlsls1_v7308)?(((rlsls1_f7117()<=rlsls1_v2341)&&(rlsls1_v2341<=rlsls1_f7115()))?((rlsls1_f7108()<=rlsls1_f2344())&&(rlsls1_f2344()<=rlsls1_f7106())):NIL):NIL));}}
static int rlsls1_f2251(){if (rlsls1_p2251) return rlsls1_m2251; else {rlsls1_p2251=T;return rlsls1_m2251=((fabs((rlsls1_f2341()-rlsls1_v7322))<rlsls1_v7308)?(fabs((rlsls1_f2344()-rlsls1_v7320))<rlsls1_v7308):NIL);}}
static int rlsls1_f2242(){if (rlsls1_p2242) return rlsls1_m2242; else {rlsls1_p2242=T;return rlsls1_m2242=((fabs((rlsls1_f2341()-rlsls1_v7318))<rlsls1_v7308)?(fabs((rlsls1_f2344()-rlsls1_v7316))<rlsls1_v7308):NIL);}}
static int rlsls1_f2239(){if (rlsls1_p2239) return rlsls1_m2239; else {rlsls1_p2239=T;return rlsls1_m2239=((rlsls1_v2251=rlsls1_f2251()),((rlsls1_v2251?rlsls1_f2584():(rlsls1_v2251?NIL:T))?((rlsls1_v2242=rlsls1_f2242()),(rlsls1_v2242?rlsls1_f2582():(rlsls1_v2242?NIL:T))):NIL));}}
static double rlsls1_f2236(){if (rlsls1_p2236) return rlsls1_m2236; else {rlsls1_p2236=T;return rlsls1_m2236=atan2((rlsls1_f2344()-rlsls1_v7312),(rlsls1_f2341()-rlsls1_v7314));}}
static double rlsls1_f2213(){if (rlsls1_p2213) return rlsls1_m2213; else {rlsls1_p2213=T;return rlsls1_m2213=(rlsls1_f2236()+(-1.5707963267948966));}}
static double rlsls1_f2205(){if (rlsls1_p2205) return rlsls1_m2205; else {rlsls1_p2205=T;return rlsls1_m2205=((rlsls1_v2213=rlsls1_f2213()),(((rlsls1_f3276()*(rlsls1_f2341()+cos(rlsls1_v2213)))+(rlsls1_f3273()*(rlsls1_f2344()+sin(rlsls1_v2213))))-rlsls1_f3263()));}}
static double rlsls1_f2234(){if (rlsls1_p2234) return rlsls1_m2234; else {rlsls1_p2234=T;return rlsls1_m2234=normalize_rotation((rlsls1_f2236()-rlsls1_f6280()));}}
static int rlsls1_f727(){if (rlsls1_p727) return rlsls1_m727; else {rlsls1_p727=T;return rlsls1_m727=(rlsls1_f2234()>rlsls1_f845());}}
static int rlsls1_f725(){if (rlsls1_p725) return rlsls1_m725; else {rlsls1_p725=T;return rlsls1_m725=(rlsls1_f2234()>rlsls1_f1419());}}
static double rlsls1_f593(){if (rlsls1_p593) return rlsls1_m593; else {rlsls1_p593=T;return rlsls1_m593=(rlsls1_f725()?rlsls1_f2234():rlsls1_f1419());}}
static double rlsls1_f2233(){if (rlsls1_p2233) return rlsls1_m2233; else {rlsls1_p2233=T;return rlsls1_m2233=normalize_rotation(rlsls1_f2234());}}
static int rlsls1_f2221(){if (rlsls1_p2221) return rlsls1_m2221; else {rlsls1_p2221=T;return rlsls1_m2221=((rlsls1_v2233=rlsls1_f2233()),((fabs((rlsls1_v2233-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2233-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2233-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f2195(){if (rlsls1_p2195) return rlsls1_m2195; else {rlsls1_p2195=T;return rlsls1_m2195=((rlsls1_v2221=rlsls1_f2221()),(rlsls1_v2221?rlsls1_v2221:(((fabs((rlsls1_v7314-rlsls1_f2341()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f2344()))<rlsls1_v7308):NIL)?NIL:((rlsls1_f2558()?NIL:((rlsls1_v2205=rlsls1_f2205()),((fabs((rlsls1_v2205-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v2205>(0.0))?rlsls1_f2557():rlsls1_f2556()))))?NIL:T))));}}
static int rlsls1_f2194(){if (rlsls1_p2194) return rlsls1_m2194; else {rlsls1_p2194=T;return rlsls1_m2194=(rlsls1_f2239()?rlsls1_f2195():NIL);}}
static double rlsls1_f2189(){if (rlsls1_p2189) return rlsls1_m2189; else {rlsls1_p2189=T;return rlsls1_m2189=(rlsls1_f2239()?(rlsls1_f2195()?rlsls1_f2234():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2192(){if (rlsls1_p2192) return rlsls1_m2192; else {rlsls1_p2192=T;return rlsls1_m2192=(rlsls1_f2239()?(rlsls1_f2195()?rlsls1_f2234():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2191(){if (rlsls1_p2191) return rlsls1_m2191; else {rlsls1_p2191=T;return rlsls1_m2191=(rlsls1_f2192()<(0.0));}}
static int rlsls1_f2184(){if (rlsls1_p2184) return rlsls1_m2184; else {rlsls1_p2184=T;return rlsls1_m2184=(rlsls1_f2194()?((rlsls1_v2191=rlsls1_f2191()),(rlsls1_v2191?rlsls1_v2191:(fabs((rlsls1_f2189()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f285(){if (rlsls1_p285) return rlsls1_m285; else {rlsls1_p285=T;return rlsls1_m285=(rlsls1_f2184()?(rlsls1_f2239()?(rlsls1_f2195()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v2234=rlsls1_f2234()),((rlsls1_v2662>rlsls1_v2234)?rlsls1_v2662:rlsls1_v2234)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f263(){if (rlsls1_p263) return rlsls1_m263; else {rlsls1_p263=T;return rlsls1_m263=(rlsls1_f2184()?(rlsls1_f2239()?(rlsls1_f2195()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v2234=rlsls1_f2234()),((rlsls1_v3139>rlsls1_v2234)?rlsls1_v3139:rlsls1_v2234)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static int rlsls1_f715(){if (rlsls1_p715) return rlsls1_m715; else {rlsls1_p715=T;return rlsls1_m715=(rlsls1_f2184()?(rlsls1_f2239()?(rlsls1_f2195()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f727()?T:rlsls1_f859()):(rlsls1_f1511()?T:(rlsls1_f1421()?NIL:rlsls1_f725()))):(rlsls1_f878()?(rlsls1_f974()?T:(rlsls1_f888()?NIL:rlsls1_f725())):NIL)):NIL):NIL):NIL);}}
static double rlsls1_f581(){if (rlsls1_p581) return rlsls1_m581; else {rlsls1_p581=T;return rlsls1_m581=(rlsls1_f2184()?(rlsls1_f2239()?(rlsls1_f2195()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f727()?rlsls1_f2234():rlsls1_f845()):(rlsls1_f1511()?((rlsls1_v2234=rlsls1_f2234()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2234>rlsls1_v1455)?rlsls1_v2234:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f593()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2234=rlsls1_f2234()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2234>rlsls1_v922)?rlsls1_v2234:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f593())):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double_or_symbol rlsls1_f19(){if (rlsls1_p19) return rlsls1_m19; else {rlsls1_p19=T;return rlsls1_m19=(rlsls1_f2184()?(rlsls1_f2239()?(rlsls1_f2195()?coerce_double_to_double_or_symbol(rlsls1_f2234()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2180(){if (rlsls1_p2180) return rlsls1_m2180; else {rlsls1_p2180=T;return rlsls1_m2180=(rlsls1_f2184()?rlsls1_f2189():rlsls1_f3077());}}
static double rlsls1_f2182(){if (rlsls1_p2182) return rlsls1_m2182; else {rlsls1_p2182=T;return rlsls1_m2182=(rlsls1_f2184()?rlsls1_f2192():rlsls1_f3082());}}
static int rlsls1_f2181(){if (rlsls1_p2181) return rlsls1_m2181; else {rlsls1_p2181=T;return rlsls1_m2181=(rlsls1_f2182()<(0.0));}}
static int rlsls1_f2183(){if (rlsls1_p2183) return rlsls1_m2183; else {rlsls1_p2183=T;return rlsls1_m2183=(rlsls1_f2184()?rlsls1_f2194():NIL);}}
static int rlsls1_f2175(){if (rlsls1_p2175) return rlsls1_m2175; else {rlsls1_p2175=T;return rlsls1_m2175=(rlsls1_f2183()?((rlsls1_v2181=rlsls1_f2181()),(rlsls1_v2181?rlsls1_v2181:(fabs((rlsls1_f2180()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f2358(){if (rlsls1_p2358) return rlsls1_m2358; else {rlsls1_p2358=T;return rlsls1_m2358=((rlsls1_f2873()+rlsls1_f2360())+rlsls1_v7312);}}
static double rlsls1_f2357(){if (rlsls1_p2357) return rlsls1_m2357; else {rlsls1_p2357=T;return rlsls1_m2357=(rlsls1_f3273()*rlsls1_f2358());}}
static double rlsls1_f2355(){if (rlsls1_p2355) return rlsls1_m2355; else {rlsls1_p2355=T;return rlsls1_m2355=((rlsls1_f3263()-rlsls1_f2357())/rlsls1_f3276());}}
static int rlsls1_f2346(){if (rlsls1_p2346) return rlsls1_m2346; else {rlsls1_p2346=T;return rlsls1_m2346=((rlsls1_v2355=rlsls1_f2355()),((fabs((((rlsls1_f3276()*rlsls1_v2355)+rlsls1_f2357())-rlsls1_f3263()))<rlsls1_v7308)?(((rlsls1_f7117()<=rlsls1_v2355)&&(rlsls1_v2355<=rlsls1_f7115()))?((rlsls1_f7108()<=rlsls1_f2358())&&(rlsls1_f2358()<=rlsls1_f7106())):NIL):NIL));}}
static int rlsls1_f2325(){if (rlsls1_p2325) return rlsls1_m2325; else {rlsls1_p2325=T;return rlsls1_m2325=((fabs((rlsls1_f2355()-rlsls1_v7322))<rlsls1_v7308)?(fabs((rlsls1_f2358()-rlsls1_v7320))<rlsls1_v7308):NIL);}}
static int rlsls1_f2316(){if (rlsls1_p2316) return rlsls1_m2316; else {rlsls1_p2316=T;return rlsls1_m2316=((fabs((rlsls1_f2355()-rlsls1_v7318))<rlsls1_v7308)?(fabs((rlsls1_f2358()-rlsls1_v7316))<rlsls1_v7308):NIL);}}
static int rlsls1_f2313(){if (rlsls1_p2313) return rlsls1_m2313; else {rlsls1_p2313=T;return rlsls1_m2313=((rlsls1_v2325=rlsls1_f2325()),((rlsls1_v2325?rlsls1_f2584():(rlsls1_v2325?NIL:T))?((rlsls1_v2316=rlsls1_f2316()),(rlsls1_v2316?rlsls1_f2582():(rlsls1_v2316?NIL:T))):NIL));}}
static double rlsls1_f2310(){if (rlsls1_p2310) return rlsls1_m2310; else {rlsls1_p2310=T;return rlsls1_m2310=atan2((rlsls1_f2358()-rlsls1_v7312),(rlsls1_f2355()-rlsls1_v7314));}}
static double rlsls1_f2287(){if (rlsls1_p2287) return rlsls1_m2287; else {rlsls1_p2287=T;return rlsls1_m2287=(rlsls1_f2310()+(-1.5707963267948966));}}
static double rlsls1_f2279(){if (rlsls1_p2279) return rlsls1_m2279; else {rlsls1_p2279=T;return rlsls1_m2279=((rlsls1_v2287=rlsls1_f2287()),(((rlsls1_f3276()*(rlsls1_f2355()+cos(rlsls1_v2287)))+(rlsls1_f3273()*(rlsls1_f2358()+sin(rlsls1_v2287))))-rlsls1_f3263()));}}
static double rlsls1_f2308(){if (rlsls1_p2308) return rlsls1_m2308; else {rlsls1_p2308=T;return rlsls1_m2308=normalize_rotation((rlsls1_f2310()-rlsls1_f6280()));}}
static int rlsls1_f740(){if (rlsls1_p740) return rlsls1_m740; else {rlsls1_p740=T;return rlsls1_m740=(rlsls1_f2308()>rlsls1_f845());}}
static int rlsls1_f738(){if (rlsls1_p738) return rlsls1_m738; else {rlsls1_p738=T;return rlsls1_m738=(rlsls1_f2308()>rlsls1_f1419());}}
static double rlsls1_f609(){if (rlsls1_p609) return rlsls1_m609; else {rlsls1_p609=T;return rlsls1_m609=(rlsls1_f738()?rlsls1_f2308():rlsls1_f1419());}}
static double rlsls1_f2307(){if (rlsls1_p2307) return rlsls1_m2307; else {rlsls1_p2307=T;return rlsls1_m2307=normalize_rotation(rlsls1_f2308());}}
static int rlsls1_f2295(){if (rlsls1_p2295) return rlsls1_m2295; else {rlsls1_p2295=T;return rlsls1_m2295=((rlsls1_v2307=rlsls1_f2307()),((fabs((rlsls1_v2307-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2307-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2307-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f2269(){if (rlsls1_p2269) return rlsls1_m2269; else {rlsls1_p2269=T;return rlsls1_m2269=((rlsls1_v2295=rlsls1_f2295()),(rlsls1_v2295?rlsls1_v2295:(((fabs((rlsls1_v7314-rlsls1_f2355()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f2358()))<rlsls1_v7308):NIL)?NIL:((rlsls1_f2558()?NIL:((rlsls1_v2279=rlsls1_f2279()),((fabs((rlsls1_v2279-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v2279>(0.0))?rlsls1_f2557():rlsls1_f2556()))))?NIL:T))));}}
static double rlsls1_f291(){if (rlsls1_p291) return rlsls1_m291; else {rlsls1_p291=T;return rlsls1_m291=(rlsls1_f2313()?(rlsls1_f2269()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v2308=rlsls1_f2308()),((rlsls1_v2662>rlsls1_v2308)?rlsls1_v2662:rlsls1_v2308)):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f269(){if (rlsls1_p269) return rlsls1_m269; else {rlsls1_p269=T;return rlsls1_m269=(rlsls1_f2313()?(rlsls1_f2269()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v2308=rlsls1_f2308()),((rlsls1_v3139>rlsls1_v2308)?rlsls1_v3139:rlsls1_v2308)):rlsls1_f2664()):rlsls1_f2664());}}
static int rlsls1_f729(){if (rlsls1_p729) return rlsls1_m729; else {rlsls1_p729=T;return rlsls1_m729=(rlsls1_f2313()?(rlsls1_f2269()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f740()?T:rlsls1_f859()):(rlsls1_f1511()?T:(rlsls1_f1421()?NIL:rlsls1_f738()))):(rlsls1_f878()?(rlsls1_f974()?T:(rlsls1_f888()?NIL:rlsls1_f738())):NIL)):NIL):NIL);}}
static double rlsls1_f598(){if (rlsls1_p598) return rlsls1_m598; else {rlsls1_p598=T;return rlsls1_m598=(rlsls1_f2313()?(rlsls1_f2269()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f740()?rlsls1_f2308():rlsls1_f845()):(rlsls1_f1511()?((rlsls1_v2308=rlsls1_f2308()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2308>rlsls1_v1455)?rlsls1_v2308:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f609()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2308=rlsls1_f2308()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2308>rlsls1_v922)?rlsls1_v2308:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f609())):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664());}}
static double_or_symbol rlsls1_f23(){if (rlsls1_p23) return rlsls1_m23; else {rlsls1_p23=T;return rlsls1_m23=(rlsls1_f2313()?(rlsls1_f2269()?coerce_double_to_double_or_symbol(rlsls1_f2308()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2127(){if (rlsls1_p2127) return rlsls1_m2127; else {rlsls1_p2127=T;return rlsls1_m2127=(rlsls1_f2313()?(rlsls1_f2269()?(rlsls1_f2184()?(rlsls1_f2239()?(rlsls1_f2195()?((rlsls1_v2308=rlsls1_f2308()),(rlsls1_v2234=rlsls1_f2234()),((rlsls1_v2308>rlsls1_v2234)?rlsls1_v2308:rlsls1_v2234)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static int rlsls1_f755(){if (rlsls1_p755) return rlsls1_m755; else {rlsls1_p755=T;return rlsls1_m755=(rlsls1_f2127()>rlsls1_f845());}}
static int rlsls1_f753(){if (rlsls1_p753) return rlsls1_m753; else {rlsls1_p753=T;return rlsls1_m753=(rlsls1_f2127()>rlsls1_f1455());}}
static int rlsls1_f746(){if (rlsls1_p746) return rlsls1_m746; else {rlsls1_p746=T;return rlsls1_m746=(rlsls1_f2127()>rlsls1_f922());}}
static int rlsls1_f751(){if (rlsls1_p751) return rlsls1_m751; else {rlsls1_p751=T;return rlsls1_m751=(rlsls1_f2127()>rlsls1_f1419());}}
static double rlsls1_f621(){if (rlsls1_p621) return rlsls1_m621; else {rlsls1_p621=T;return rlsls1_m621=(rlsls1_f751()?rlsls1_f2127():rlsls1_f1419());}}
static int rlsls1_f2173(){if (rlsls1_p2173) return rlsls1_m2173; else {rlsls1_p2173=T;return rlsls1_m2173=(rlsls1_f2313()?(rlsls1_f2269()?rlsls1_f2183():NIL):NIL);}}
static int rlsls1_f750(){if (rlsls1_p750) return rlsls1_m750; else {rlsls1_p750=T;return rlsls1_m750=(rlsls1_f751()?rlsls1_f2173():NIL);}}
static int rlsls1_f2268(){if (rlsls1_p2268) return rlsls1_m2268; else {rlsls1_p2268=T;return rlsls1_m2268=(rlsls1_f2313()?rlsls1_f2269():NIL);}}
static double rlsls1_f2263(){if (rlsls1_p2263) return rlsls1_m2263; else {rlsls1_p2263=T;return rlsls1_m2263=(rlsls1_f2313()?(rlsls1_f2269()?rlsls1_f2308():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2266(){if (rlsls1_p2266) return rlsls1_m2266; else {rlsls1_p2266=T;return rlsls1_m2266=(rlsls1_f2313()?(rlsls1_f2269()?rlsls1_f2308():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2265(){if (rlsls1_p2265) return rlsls1_m2265; else {rlsls1_p2265=T;return rlsls1_m2265=(rlsls1_f2266()<(0.0));}}
static int rlsls1_f2258(){if (rlsls1_p2258) return rlsls1_m2258; else {rlsls1_p2258=T;return rlsls1_m2258=(rlsls1_f2268()?((rlsls1_v2265=rlsls1_f2265()),(rlsls1_v2265?rlsls1_v2265:(fabs((rlsls1_f2263()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f2586(){if (rlsls1_p2586) return rlsls1_m2586; else {rlsls1_p2586=T;return rlsls1_m2586=(rlsls1_f6423()-rlsls1_f3226());}}
static int rlsls1_f2585(){if (rlsls1_p2585) return rlsls1_m2585; else {rlsls1_p2585=T;return rlsls1_m2585=(rlsls1_f2586()<0.0);}}
static double rlsls1_f2532(){if (rlsls1_p2532) return rlsls1_m2532; else {rlsls1_p2532=T;return rlsls1_m2532=sqrt(rlsls1_f2586());}}
static double rlsls1_f2521(){if (rlsls1_p2521) return rlsls1_m2521; else {rlsls1_p2521=T;return rlsls1_m2521=((-rlsls1_f2532())+rlsls1_v7314);}}
static int rlsls1_f2513(){if (rlsls1_p2513) return rlsls1_m2513; else {rlsls1_p2513=T;return rlsls1_m2513=((rlsls1_v2521=rlsls1_f2521()),((fabs((((rlsls1_f3276()*rlsls1_v2521)+rlsls1_f3060())-rlsls1_f3263()))<rlsls1_v7308)?(((rlsls1_f7117()<=rlsls1_v2521)&&(rlsls1_v2521<=rlsls1_f7115()))?rlsls1_f3054():NIL):NIL));}}
static int rlsls1_f2445(){if (rlsls1_p2445) return rlsls1_m2445; else {rlsls1_p2445=T;return rlsls1_m2445=((fabs((rlsls1_f2521()-rlsls1_v7322))<rlsls1_v7308)?rlsls1_f3036():NIL);}}
static int rlsls1_f2439(){if (rlsls1_p2439) return rlsls1_m2439; else {rlsls1_p2439=T;return rlsls1_m2439=((fabs((rlsls1_f2521()-rlsls1_v7318))<rlsls1_v7308)?rlsls1_f3027():NIL);}}
static int rlsls1_f2436(){if (rlsls1_p2436) return rlsls1_m2436; else {rlsls1_p2436=T;return rlsls1_m2436=((rlsls1_v2445=rlsls1_f2445()),((rlsls1_v2445?rlsls1_f2584():(rlsls1_v2445?NIL:T))?((rlsls1_v2439=rlsls1_f2439()),(rlsls1_v2439?rlsls1_f2582():(rlsls1_v2439?NIL:T))):NIL));}}
static double rlsls1_f2434(){if (rlsls1_p2434) return rlsls1_m2434; else {rlsls1_p2434=T;return rlsls1_m2434=atan2(rlsls1_f3022(),(rlsls1_f2521()-rlsls1_v7314));}}
static double rlsls1_f2414(){if (rlsls1_p2414) return rlsls1_m2414; else {rlsls1_p2414=T;return rlsls1_m2414=(rlsls1_f2434()+(-1.5707963267948966));}}
static double rlsls1_f2406(){if (rlsls1_p2406) return rlsls1_m2406; else {rlsls1_p2406=T;return rlsls1_m2406=((rlsls1_v2414=rlsls1_f2414()),(((rlsls1_f3276()*(rlsls1_f2521()+cos(rlsls1_v2414)))+(rlsls1_f3273()*(rlsls1_f3061()+sin(rlsls1_v2414))))-rlsls1_f3263()));}}
static double rlsls1_f2432(){if (rlsls1_p2432) return rlsls1_m2432; else {rlsls1_p2432=T;return rlsls1_m2432=normalize_rotation((rlsls1_f2434()-rlsls1_f6280()));}}
static int rlsls1_f774(){if (rlsls1_p774) return rlsls1_m774; else {rlsls1_p774=T;return rlsls1_m774=(rlsls1_f2432()>rlsls1_f845());}}
static int rlsls1_f772(){if (rlsls1_p772) return rlsls1_m772; else {rlsls1_p772=T;return rlsls1_m772=(rlsls1_f2432()>rlsls1_f1419());}}
static double rlsls1_f642(){if (rlsls1_p642) return rlsls1_m642; else {rlsls1_p642=T;return rlsls1_m642=(rlsls1_f772()?rlsls1_f2432():rlsls1_f1419());}}
static double rlsls1_f2431(){if (rlsls1_p2431) return rlsls1_m2431; else {rlsls1_p2431=T;return rlsls1_m2431=normalize_rotation(rlsls1_f2432());}}
static int rlsls1_f2419(){if (rlsls1_p2419) return rlsls1_m2419; else {rlsls1_p2419=T;return rlsls1_m2419=((rlsls1_v2431=rlsls1_f2431()),((fabs((rlsls1_v2431-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2431-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2431-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f2396(){if (rlsls1_p2396) return rlsls1_m2396; else {rlsls1_p2396=T;return rlsls1_m2396=((rlsls1_v2419=rlsls1_f2419()),(rlsls1_v2419?rlsls1_v2419:(((fabs((rlsls1_v7314-rlsls1_f2521()))<rlsls1_v7308)?rlsls1_f2999():NIL)?NIL:((rlsls1_f2558()?NIL:((rlsls1_v2406=rlsls1_f2406()),((fabs((rlsls1_v2406-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v2406>(0.0))?rlsls1_f2557():rlsls1_f2556()))))?NIL:T))));}}
static int rlsls1_f2395(){if (rlsls1_p2395) return rlsls1_m2395; else {rlsls1_p2395=T;return rlsls1_m2395=(rlsls1_f2436()?rlsls1_f2396():NIL);}}
static double rlsls1_f2390(){if (rlsls1_p2390) return rlsls1_m2390; else {rlsls1_p2390=T;return rlsls1_m2390=(rlsls1_f2436()?(rlsls1_f2396()?rlsls1_f2432():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2393(){if (rlsls1_p2393) return rlsls1_m2393; else {rlsls1_p2393=T;return rlsls1_m2393=(rlsls1_f2436()?(rlsls1_f2396()?rlsls1_f2432():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2392(){if (rlsls1_p2392) return rlsls1_m2392; else {rlsls1_p2392=T;return rlsls1_m2392=(rlsls1_f2393()<(0.0));}}
static int rlsls1_f2385(){if (rlsls1_p2385) return rlsls1_m2385; else {rlsls1_p2385=T;return rlsls1_m2385=(rlsls1_f2395()?((rlsls1_v2392=rlsls1_f2392()),(rlsls1_v2392?rlsls1_v2392:(fabs((rlsls1_f2390()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f539(){if (rlsls1_p539) return rlsls1_m539; else {rlsls1_p539=T;return rlsls1_m539=(rlsls1_f2385()?(rlsls1_f2436()?(rlsls1_f2396()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v2432=rlsls1_f2432()),((rlsls1_v2662>rlsls1_v2432)?rlsls1_v2662:rlsls1_v2432)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f491(){if (rlsls1_p491) return rlsls1_m491; else {rlsls1_p491=T;return rlsls1_m491=(rlsls1_f2385()?(rlsls1_f2436()?(rlsls1_f2396()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v2432=rlsls1_f2432()),((rlsls1_v3139>rlsls1_v2432)?rlsls1_v3139:rlsls1_v2432)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static int rlsls1_f762(){if (rlsls1_p762) return rlsls1_m762; else {rlsls1_p762=T;return rlsls1_m762=(rlsls1_f2385()?(rlsls1_f2436()?(rlsls1_f2396()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f774()?T:rlsls1_f859()):(rlsls1_f1511()?T:(rlsls1_f1421()?NIL:rlsls1_f772()))):(rlsls1_f878()?(rlsls1_f974()?T:(rlsls1_f888()?NIL:rlsls1_f772())):NIL)):NIL):NIL):NIL);}}
static double rlsls1_f630(){if (rlsls1_p630) return rlsls1_m630; else {rlsls1_p630=T;return rlsls1_m630=(rlsls1_f2385()?(rlsls1_f2436()?(rlsls1_f2396()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f774()?rlsls1_f2432():rlsls1_f845()):(rlsls1_f1511()?((rlsls1_v2432=rlsls1_f2432()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2432>rlsls1_v1455)?rlsls1_v2432:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f642()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2432=rlsls1_f2432()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2432>rlsls1_v922)?rlsls1_v2432:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f642())):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double_or_symbol rlsls1_f31(){if (rlsls1_p31) return rlsls1_m31; else {rlsls1_p31=T;return rlsls1_m31=(rlsls1_f2385()?(rlsls1_f2436()?(rlsls1_f2396()?coerce_double_to_double_or_symbol(rlsls1_f2432()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2381(){if (rlsls1_p2381) return rlsls1_m2381; else {rlsls1_p2381=T;return rlsls1_m2381=(rlsls1_f2385()?rlsls1_f2390():rlsls1_f3077());}}
static double rlsls1_f2383(){if (rlsls1_p2383) return rlsls1_m2383; else {rlsls1_p2383=T;return rlsls1_m2383=(rlsls1_f2385()?rlsls1_f2393():rlsls1_f3082());}}
static int rlsls1_f2382(){if (rlsls1_p2382) return rlsls1_m2382; else {rlsls1_p2382=T;return rlsls1_m2382=(rlsls1_f2383()<(0.0));}}
static int rlsls1_f2384(){if (rlsls1_p2384) return rlsls1_m2384; else {rlsls1_p2384=T;return rlsls1_m2384=(rlsls1_f2385()?rlsls1_f2395():NIL);}}
static int rlsls1_f2376(){if (rlsls1_p2376) return rlsls1_m2376; else {rlsls1_p2376=T;return rlsls1_m2376=(rlsls1_f2384()?((rlsls1_v2382=rlsls1_f2382()),(rlsls1_v2382?rlsls1_v2382:(fabs((rlsls1_f2381()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f2531(){if (rlsls1_p2531) return rlsls1_m2531; else {rlsls1_p2531=T;return rlsls1_m2531=(rlsls1_f2532()+rlsls1_v7314);}}
static int rlsls1_f2523(){if (rlsls1_p2523) return rlsls1_m2523; else {rlsls1_p2523=T;return rlsls1_m2523=((rlsls1_v2531=rlsls1_f2531()),((fabs((((rlsls1_f3276()*rlsls1_v2531)+rlsls1_f3060())-rlsls1_f3263()))<rlsls1_v7308)?(((rlsls1_f7117()<=rlsls1_v2531)&&(rlsls1_v2531<=rlsls1_f7115()))?rlsls1_f3054():NIL):NIL));}}
static int rlsls1_f2509(){if (rlsls1_p2509) return rlsls1_m2509; else {rlsls1_p2509=T;return rlsls1_m2509=((fabs((rlsls1_f2531()-rlsls1_v7322))<rlsls1_v7308)?rlsls1_f3036():NIL);}}
static int rlsls1_f2503(){if (rlsls1_p2503) return rlsls1_m2503; else {rlsls1_p2503=T;return rlsls1_m2503=((fabs((rlsls1_f2531()-rlsls1_v7318))<rlsls1_v7308)?rlsls1_f3027():NIL);}}
static int rlsls1_f2500(){if (rlsls1_p2500) return rlsls1_m2500; else {rlsls1_p2500=T;return rlsls1_m2500=((rlsls1_v2509=rlsls1_f2509()),((rlsls1_v2509?rlsls1_f2584():(rlsls1_v2509?NIL:T))?((rlsls1_v2503=rlsls1_f2503()),(rlsls1_v2503?rlsls1_f2582():(rlsls1_v2503?NIL:T))):NIL));}}
static double rlsls1_f2498(){if (rlsls1_p2498) return rlsls1_m2498; else {rlsls1_p2498=T;return rlsls1_m2498=atan2(rlsls1_f3022(),(rlsls1_f2531()-rlsls1_v7314));}}
static double rlsls1_f2478(){if (rlsls1_p2478) return rlsls1_m2478; else {rlsls1_p2478=T;return rlsls1_m2478=(rlsls1_f2498()+(-1.5707963267948966));}}
static double rlsls1_f2470(){if (rlsls1_p2470) return rlsls1_m2470; else {rlsls1_p2470=T;return rlsls1_m2470=((rlsls1_v2478=rlsls1_f2478()),(((rlsls1_f3276()*(rlsls1_f2531()+cos(rlsls1_v2478)))+(rlsls1_f3273()*(rlsls1_f3061()+sin(rlsls1_v2478))))-rlsls1_f3263()));}}
static double rlsls1_f2496(){if (rlsls1_p2496) return rlsls1_m2496; else {rlsls1_p2496=T;return rlsls1_m2496=normalize_rotation((rlsls1_f2498()-rlsls1_f6280()));}}
static int rlsls1_f787(){if (rlsls1_p787) return rlsls1_m787; else {rlsls1_p787=T;return rlsls1_m787=(rlsls1_f2496()>rlsls1_f845());}}
static int rlsls1_f785(){if (rlsls1_p785) return rlsls1_m785; else {rlsls1_p785=T;return rlsls1_m785=(rlsls1_f2496()>rlsls1_f1419());}}
static double rlsls1_f658(){if (rlsls1_p658) return rlsls1_m658; else {rlsls1_p658=T;return rlsls1_m658=(rlsls1_f785()?rlsls1_f2496():rlsls1_f1419());}}
static double rlsls1_f2495(){if (rlsls1_p2495) return rlsls1_m2495; else {rlsls1_p2495=T;return rlsls1_m2495=normalize_rotation(rlsls1_f2496());}}
static int rlsls1_f2483(){if (rlsls1_p2483) return rlsls1_m2483; else {rlsls1_p2483=T;return rlsls1_m2483=((rlsls1_v2495=rlsls1_f2495()),((fabs((rlsls1_v2495-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2495-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2495-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f2460(){if (rlsls1_p2460) return rlsls1_m2460; else {rlsls1_p2460=T;return rlsls1_m2460=((rlsls1_v2483=rlsls1_f2483()),(rlsls1_v2483?rlsls1_v2483:(((fabs((rlsls1_v7314-rlsls1_f2531()))<rlsls1_v7308)?rlsls1_f2999():NIL)?NIL:((rlsls1_f2558()?NIL:((rlsls1_v2470=rlsls1_f2470()),((fabs((rlsls1_v2470-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v2470>(0.0))?rlsls1_f2557():rlsls1_f2556()))))?NIL:T))));}}
static double rlsls1_f545(){if (rlsls1_p545) return rlsls1_m545; else {rlsls1_p545=T;return rlsls1_m545=(rlsls1_f2500()?(rlsls1_f2460()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v2496=rlsls1_f2496()),((rlsls1_v2662>rlsls1_v2496)?rlsls1_v2662:rlsls1_v2496)):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f497(){if (rlsls1_p497) return rlsls1_m497; else {rlsls1_p497=T;return rlsls1_m497=(rlsls1_f2500()?(rlsls1_f2460()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v2496=rlsls1_f2496()),((rlsls1_v3139>rlsls1_v2496)?rlsls1_v3139:rlsls1_v2496)):rlsls1_f2664()):rlsls1_f2664());}}
static int rlsls1_f776(){if (rlsls1_p776) return rlsls1_m776; else {rlsls1_p776=T;return rlsls1_m776=(rlsls1_f2500()?(rlsls1_f2460()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f787()?T:rlsls1_f859()):(rlsls1_f1511()?T:(rlsls1_f1421()?NIL:rlsls1_f785()))):(rlsls1_f878()?(rlsls1_f974()?T:(rlsls1_f888()?NIL:rlsls1_f785())):NIL)):NIL):NIL);}}
static double rlsls1_f647(){if (rlsls1_p647) return rlsls1_m647; else {rlsls1_p647=T;return rlsls1_m647=(rlsls1_f2500()?(rlsls1_f2460()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f787()?rlsls1_f2496():rlsls1_f845()):(rlsls1_f1511()?((rlsls1_v2496=rlsls1_f2496()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2496>rlsls1_v1455)?rlsls1_v2496:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f658()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2496=rlsls1_f2496()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2496>rlsls1_v922)?rlsls1_v2496:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f658())):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664());}}
static double_or_symbol rlsls1_f35(){if (rlsls1_p35) return rlsls1_m35; else {rlsls1_p35=T;return rlsls1_m35=(rlsls1_f2500()?(rlsls1_f2460()?coerce_double_to_double_or_symbol(rlsls1_f2496()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2141(){if (rlsls1_p2141) return rlsls1_m2141; else {rlsls1_p2141=T;return rlsls1_m2141=(rlsls1_f2500()?(rlsls1_f2460()?(rlsls1_f2385()?(rlsls1_f2436()?(rlsls1_f2396()?((rlsls1_v2496=rlsls1_f2496()),(rlsls1_v2432=rlsls1_f2432()),((rlsls1_v2496>rlsls1_v2432)?rlsls1_v2496:rlsls1_v2432)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static int rlsls1_f802(){if (rlsls1_p802) return rlsls1_m802; else {rlsls1_p802=T;return rlsls1_m802=(rlsls1_f2141()>rlsls1_f845());}}
static int rlsls1_f800(){if (rlsls1_p800) return rlsls1_m800; else {rlsls1_p800=T;return rlsls1_m800=(rlsls1_f2141()>rlsls1_f1455());}}
static int rlsls1_f793(){if (rlsls1_p793) return rlsls1_m793; else {rlsls1_p793=T;return rlsls1_m793=(rlsls1_f2141()>rlsls1_f922());}}
static int rlsls1_f798(){if (rlsls1_p798) return rlsls1_m798; else {rlsls1_p798=T;return rlsls1_m798=(rlsls1_f2141()>rlsls1_f1419());}}
static double rlsls1_f670(){if (rlsls1_p670) return rlsls1_m670; else {rlsls1_p670=T;return rlsls1_m670=(rlsls1_f798()?rlsls1_f2141():rlsls1_f1419());}}
static int rlsls1_f2374(){if (rlsls1_p2374) return rlsls1_m2374; else {rlsls1_p2374=T;return rlsls1_m2374=(rlsls1_f2500()?(rlsls1_f2460()?rlsls1_f2384():NIL):NIL);}}
static int rlsls1_f797(){if (rlsls1_p797) return rlsls1_m797; else {rlsls1_p797=T;return rlsls1_m797=(rlsls1_f798()?rlsls1_f2374():NIL);}}
static int rlsls1_f2459(){if (rlsls1_p2459) return rlsls1_m2459; else {rlsls1_p2459=T;return rlsls1_m2459=(rlsls1_f2500()?rlsls1_f2460():NIL);}}
static double rlsls1_f2454(){if (rlsls1_p2454) return rlsls1_m2454; else {rlsls1_p2454=T;return rlsls1_m2454=(rlsls1_f2500()?(rlsls1_f2460()?rlsls1_f2496():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2457(){if (rlsls1_p2457) return rlsls1_m2457; else {rlsls1_p2457=T;return rlsls1_m2457=(rlsls1_f2500()?(rlsls1_f2460()?rlsls1_f2496():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2456(){if (rlsls1_p2456) return rlsls1_m2456; else {rlsls1_p2456=T;return rlsls1_m2456=(rlsls1_f2457()<(0.0));}}
static int rlsls1_f2449(){if (rlsls1_p2449) return rlsls1_m2449; else {rlsls1_p2449=T;return rlsls1_m2449=(rlsls1_f2459()?((rlsls1_v2456=rlsls1_f2456()),(rlsls1_v2456?rlsls1_v2456:(fabs((rlsls1_f2454()-(0.0)))<rlsls1_v7308))):NIL);}}
static int rlsls1_f2594(){if (rlsls1_p2594) return rlsls1_m2594; else {rlsls1_p2594=T;return rlsls1_m2594=(fabs((rlsls1_f3245()-rlsls1_f6443()))<rlsls1_v7308);}}
static double rlsls1_f551(){if (rlsls1_p551) return rlsls1_m551; else {rlsls1_p551=T;return rlsls1_m551=(rlsls1_f2594()?(rlsls1_f2538()?(rlsls1_f2155()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v2153=rlsls1_f2153()),((rlsls1_v2662>rlsls1_v2153)?rlsls1_v2662:rlsls1_v2153)):(rlsls1_f2580()?(rlsls1_f2549()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v2578=rlsls1_f2578()),((rlsls1_v2662>rlsls1_v2578)?rlsls1_v2662:rlsls1_v2578)):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f503(){if (rlsls1_p503) return rlsls1_m503; else {rlsls1_p503=T;return rlsls1_m503=(rlsls1_f2594()?(rlsls1_f2538()?(rlsls1_f2155()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v2153=rlsls1_f2153()),((rlsls1_v3139>rlsls1_v2153)?rlsls1_v3139:rlsls1_v2153)):(rlsls1_f2580()?(rlsls1_f2549()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v2578=rlsls1_f2578()),((rlsls1_v3139>rlsls1_v2578)?rlsls1_v3139:rlsls1_v2578)):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664());}}
static int rlsls1_f803(){if (rlsls1_p803) return rlsls1_m803; else {rlsls1_p803=T;return rlsls1_m803=(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f834()?rlsls1_f2548():rlsls1_f859()):(rlsls1_f1511()?(rlsls1_f832()?rlsls1_f2548():T):(rlsls1_f1421()?NIL:rlsls1_f829()))):(rlsls1_f878()?(rlsls1_f974()?(rlsls1_f825()?rlsls1_f2548():T):(rlsls1_f888()?NIL:rlsls1_f829())):NIL)):(rlsls1_f2580()?(rlsls1_f2549()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f819()?T:rlsls1_f859()):(rlsls1_f1511()?T:(rlsls1_f1421()?NIL:rlsls1_f817()))):(rlsls1_f878()?(rlsls1_f974()?T:(rlsls1_f888()?NIL:rlsls1_f817())):NIL)):NIL):NIL)):NIL):NIL):NIL):NIL);}}
static double rlsls1_f673(){if (rlsls1_p673) return rlsls1_m673; else {rlsls1_p673=T;return rlsls1_m673=(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f834()?rlsls1_f2153():rlsls1_f845()):(rlsls1_f1511()?(rlsls1_f832()?rlsls1_f2153():rlsls1_f1455()):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f701()))):(rlsls1_f878()?(rlsls1_f974()?(rlsls1_f825()?rlsls1_f2153():rlsls1_f922()):(rlsls1_f888()?rlsls1_f2664():rlsls1_f701())):rlsls1_f2664())):(rlsls1_f2580()?(rlsls1_f2549()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f819()?rlsls1_f2578():rlsls1_f845()):(rlsls1_f1511()?((rlsls1_v2578=rlsls1_f2578()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2578>rlsls1_v1455)?rlsls1_v2578:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f689()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2578=rlsls1_f2578()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2578>rlsls1_v922)?rlsls1_v2578:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f689())):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double_or_symbol rlsls1_f37(){if (rlsls1_p37) return rlsls1_m37; else {rlsls1_p37=T;return rlsls1_m37=(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?((rlsls1_v2538=rlsls1_f2538()),(rlsls1_v2538?(rlsls1_f2155()?coerce_double_to_double_or_symbol(rlsls1_f2153()):rlsls1_f43()):(rlsls1_v2538?rlsls1_f43():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2111(){if (rlsls1_p2111) return rlsls1_m2111; else {rlsls1_p2111=T;return rlsls1_m2111=(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?rlsls1_f2153():rlsls1_f2543()):rlsls1_f2160()):rlsls1_f3077()):rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2148(){if (rlsls1_p2148) return rlsls1_m2148; else {rlsls1_p2148=T;return rlsls1_m2148=(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?rlsls1_f2153():rlsls1_f2546()):rlsls1_f2162()):rlsls1_f3082()):rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2587(){if (rlsls1_p2587) return rlsls1_m2587; else {rlsls1_p2587=T;return rlsls1_m2587=((rlsls1_v2594=rlsls1_f2594()),(rlsls1_v2594?rlsls1_f2589():(rlsls1_v2594?NIL:T)));}}
static double rlsls1_f572(){if (rlsls1_p572) return rlsls1_m572; else {rlsls1_p572=T;return rlsls1_m572=(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f3232()?(rlsls1_f2585()?rlsls1_f673():(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f802()?rlsls1_f2141():rlsls1_f845()):(rlsls1_f1511()?(rlsls1_f800()?rlsls1_f2141():rlsls1_f1455()):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f670()))):(rlsls1_f878()?(rlsls1_f974()?(rlsls1_f793()?rlsls1_f2141():rlsls1_f922()):(rlsls1_f888()?rlsls1_f2664():rlsls1_f670())):rlsls1_f2664())):rlsls1_f647()):rlsls1_f630()):(rlsls1_f2449()?rlsls1_f647():rlsls1_f2664())):(rlsls1_f2513()?rlsls1_f630():rlsls1_f2664()))):(rlsls1_f2362()?rlsls1_f673():(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f755()?rlsls1_f2127():rlsls1_f845()):(rlsls1_f1511()?(rlsls1_f753()?rlsls1_f2127():rlsls1_f1455()):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f621()))):(rlsls1_f878()?(rlsls1_f974()?(rlsls1_f746()?rlsls1_f2127():rlsls1_f922()):(rlsls1_f888()?rlsls1_f2664():rlsls1_f621())):rlsls1_f2664())):rlsls1_f598()):rlsls1_f581()):(rlsls1_f2258()?rlsls1_f598():rlsls1_f2664())):(rlsls1_f2332()?rlsls1_f581():rlsls1_f2664())))):rlsls1_f2664()));}}
static double rlsls1_f560(){if (rlsls1_p560) return rlsls1_m560; else {rlsls1_p560=T;return rlsls1_m560=((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v572=rlsls1_f572()),((rlsls1_v2662>rlsls1_v572)?rlsls1_v2662:rlsls1_v572));}}
static double rlsls1_f512(){if (rlsls1_p512) return rlsls1_m512; else {rlsls1_p512=T;return rlsls1_m512=((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v572=rlsls1_f572()),((rlsls1_v3139>rlsls1_v572)?rlsls1_v3139:rlsls1_v572));}}
static double rlsls1_f2094(){if (rlsls1_p2094) return rlsls1_m2094; else {rlsls1_p2094=T;return rlsls1_m2094=(rlsls1_f2597()?rlsls1_f3077():(rlsls1_f2587()?(rlsls1_f3232()?(rlsls1_f2585()?rlsls1_f2111():(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?rlsls1_f2141():rlsls1_f2454()):rlsls1_f2381()):(rlsls1_f2449()?rlsls1_f2454():rlsls1_f3077())):(rlsls1_f2513()?rlsls1_f2381():rlsls1_f3077()))):(rlsls1_f2362()?rlsls1_f2111():(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?rlsls1_f2127():rlsls1_f2263()):rlsls1_f2180()):(rlsls1_f2258()?rlsls1_f2263():rlsls1_f3077())):(rlsls1_f2332()?rlsls1_f2180():rlsls1_f3077())))):rlsls1_f3077()));}}
static double rlsls1_f2117(){if (rlsls1_p2117) return rlsls1_m2117; else {rlsls1_p2117=T;return rlsls1_m2117=(rlsls1_f2597()?rlsls1_f3082():(rlsls1_f2587()?(rlsls1_f3232()?(rlsls1_f2585()?rlsls1_f2148():(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?rlsls1_f2141():rlsls1_f2457()):rlsls1_f2383()):(rlsls1_f2449()?rlsls1_f2457():rlsls1_f3082())):(rlsls1_f2513()?rlsls1_f2383():rlsls1_f3082()))):(rlsls1_f2362()?rlsls1_f2148():(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?rlsls1_f2127():rlsls1_f2266()):rlsls1_f2182()):(rlsls1_f2258()?rlsls1_f2266():rlsls1_f3082())):(rlsls1_f2332()?rlsls1_f2182():rlsls1_f3082())))):rlsls1_f3082()));}}
static int rlsls1_f2116(){if (rlsls1_p2116) return rlsls1_m2116; else {rlsls1_p2116=T;return rlsls1_m2116=(rlsls1_f2117()<(0.0));}}
static int rlsls1_f2533(){if (rlsls1_p2533) return rlsls1_m2533; else {rlsls1_p2533=T;return rlsls1_m2533=(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?rlsls1_f2548():rlsls1_f2537()):NIL):NIL):NIL);}}
static int rlsls1_f2163(){if (rlsls1_p2163) return rlsls1_m2163; else {rlsls1_p2163=T;return rlsls1_m2163=(rlsls1_f2597()?NIL:(rlsls1_f2587()?(rlsls1_f3232()?(rlsls1_f2585()?rlsls1_f2533():(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?rlsls1_f2374():rlsls1_f2459()):rlsls1_f2384()):(rlsls1_f2449()?rlsls1_f2459():NIL)):(rlsls1_f2513()?rlsls1_f2384():NIL))):(rlsls1_f2362()?rlsls1_f2533():(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?rlsls1_f2173():rlsls1_f2268()):rlsls1_f2183()):(rlsls1_f2258()?rlsls1_f2268():NIL)):(rlsls1_f2332()?rlsls1_f2183():NIL)))):NIL));}}
static int rlsls1_f2089(){if (rlsls1_p2089) return rlsls1_m2089; else {rlsls1_p2089=T;return rlsls1_m2089=(rlsls1_f2163()?((rlsls1_v2116=rlsls1_f2116()),(rlsls1_v2116?rlsls1_v2116:(fabs((rlsls1_f2094()-(0.0)))<rlsls1_v7308))):NIL);}}
static int rlsls1_f569(){if (rlsls1_p569) return rlsls1_m569; else {rlsls1_p569=T;return rlsls1_m569=((rlsls1_f2089()?(rlsls1_f835()?rlsls1_f572():rlsls1_f2117()):rlsls1_f843())<(0.0));}}
static double rlsls1_f7235(){if (rlsls1_p7235) return rlsls1_m7235; else {rlsls1_p7235=T;return rlsls1_m7235=((rlsls1_v7240=rlsls1_f7240()),sqrt(((rlsls1_v7240*rlsls1_v7240)+rlsls1_f7237())));}}
static double rlsls1_f7211(){if (rlsls1_p7211) return rlsls1_m7211; else {rlsls1_p7211=T;return rlsls1_m7211=((rlsls1_v7235=rlsls1_f7235()),(rlsls1_v7235*rlsls1_v7235));}}
static double rlsls1_f2877(){if (rlsls1_p2877) return rlsls1_m2877; else {rlsls1_p2877=T;return rlsls1_m2877=(rlsls1_f2883()-((4.0)*rlsls1_f2881()*(rlsls1_f3228()-(rlsls1_f3275()*rlsls1_f7211()))));}}
static int rlsls1_f2876(){if (rlsls1_p2876) return rlsls1_m2876; else {rlsls1_p2876=T;return rlsls1_m2876=(rlsls1_f2877()<0.0);}}
static double rlsls1_f2871(){if (rlsls1_p2871) return rlsls1_m2871; else {rlsls1_p2871=T;return rlsls1_m2871=(sqrt(rlsls1_f2877())/rlsls1_f2874());}}
static double rlsls1_f2855(){if (rlsls1_p2855) return rlsls1_m2855; else {rlsls1_p2855=T;return rlsls1_m2855=((rlsls1_f2873()-rlsls1_f2871())+rlsls1_v7312);}}
static double rlsls1_f2854(){if (rlsls1_p2854) return rlsls1_m2854; else {rlsls1_p2854=T;return rlsls1_m2854=(rlsls1_f3273()*rlsls1_f2855());}}
static double rlsls1_f2852(){if (rlsls1_p2852) return rlsls1_m2852; else {rlsls1_p2852=T;return rlsls1_m2852=((rlsls1_f3263()-rlsls1_f2854())/rlsls1_f3276());}}
static int rlsls1_f2843(){if (rlsls1_p2843) return rlsls1_m2843; else {rlsls1_p2843=T;return rlsls1_m2843=((rlsls1_v2852=rlsls1_f2852()),((fabs((((rlsls1_f3276()*rlsls1_v2852)+rlsls1_f2854())-rlsls1_f3263()))<rlsls1_v7308)?(((rlsls1_f7117()<=rlsls1_v2852)&&(rlsls1_v2852<=rlsls1_f7115()))?((rlsls1_f7108()<=rlsls1_f2855())&&(rlsls1_f2855()<=rlsls1_f7106())):NIL):NIL));}}
static int rlsls1_f2762(){if (rlsls1_p2762) return rlsls1_m2762; else {rlsls1_p2762=T;return rlsls1_m2762=((fabs((rlsls1_f2852()-rlsls1_v7322))<rlsls1_v7308)?(fabs((rlsls1_f2855()-rlsls1_v7320))<rlsls1_v7308):NIL);}}
static int rlsls1_f2753(){if (rlsls1_p2753) return rlsls1_m2753; else {rlsls1_p2753=T;return rlsls1_m2753=((fabs((rlsls1_f2852()-rlsls1_v7318))<rlsls1_v7308)?(fabs((rlsls1_f2855()-rlsls1_v7316))<rlsls1_v7308):NIL);}}
static int rlsls1_f2750(){if (rlsls1_p2750) return rlsls1_m2750; else {rlsls1_p2750=T;return rlsls1_m2750=((rlsls1_v2762=rlsls1_f2762()),((rlsls1_v2762?rlsls1_f3170():(rlsls1_v2762?NIL:T))?((rlsls1_v2753=rlsls1_f2753()),(rlsls1_v2753?rlsls1_f3153():(rlsls1_v2753?NIL:T))):NIL));}}
static double rlsls1_f2747(){if (rlsls1_p2747) return rlsls1_m2747; else {rlsls1_p2747=T;return rlsls1_m2747=atan2((rlsls1_f2855()-rlsls1_v7312),(rlsls1_f2852()-rlsls1_v7314));}}
static double rlsls1_f2724(){if (rlsls1_p2724) return rlsls1_m2724; else {rlsls1_p2724=T;return rlsls1_m2724=(rlsls1_f2747()+(-1.5707963267948966));}}
static double rlsls1_f2716(){if (rlsls1_p2716) return rlsls1_m2716; else {rlsls1_p2716=T;return rlsls1_m2716=((rlsls1_v2724=rlsls1_f2724()),(((rlsls1_f3276()*(rlsls1_f2852()+cos(rlsls1_v2724)))+(rlsls1_f3273()*(rlsls1_f2855()+sin(rlsls1_v2724))))-rlsls1_f3263()));}}
static double rlsls1_f2745(){if (rlsls1_p2745) return rlsls1_m2745; else {rlsls1_p2745=T;return rlsls1_m2745=normalize_rotation((rlsls1_f2747()-rlsls1_f6935()));}}
static double rlsls1_f124(){if (rlsls1_p124) return rlsls1_m124; else {rlsls1_p124=T;return rlsls1_m124=(rlsls1_f2313()?(rlsls1_f2269()?((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v2308=rlsls1_f2308()),((rlsls1_v2745>rlsls1_v2308)?rlsls1_v2745:rlsls1_v2308)):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f118(){if (rlsls1_p118) return rlsls1_m118; else {rlsls1_p118=T;return rlsls1_m118=(rlsls1_f2184()?(rlsls1_f2239()?(rlsls1_f2195()?((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v2234=rlsls1_f2234()),((rlsls1_v2745>rlsls1_v2234)?rlsls1_v2745:rlsls1_v2234)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f103(){if (rlsls1_p103) return rlsls1_m103; else {rlsls1_p103=T;return rlsls1_m103=((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v1419=rlsls1_f1419()),((rlsls1_v2745>rlsls1_v1419)?rlsls1_v2745:rlsls1_v1419));}}
static double rlsls1_f2744(){if (rlsls1_p2744) return rlsls1_m2744; else {rlsls1_p2744=T;return rlsls1_m2744=normalize_rotation(rlsls1_f2745());}}
static int rlsls1_f2732(){if (rlsls1_p2732) return rlsls1_m2732; else {rlsls1_p2732=T;return rlsls1_m2732=((rlsls1_v2744=rlsls1_f2744()),((fabs((rlsls1_v2744-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2744-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2744-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f2706(){if (rlsls1_p2706) return rlsls1_m2706; else {rlsls1_p2706=T;return rlsls1_m2706=((rlsls1_v2732=rlsls1_f2732()),(rlsls1_v2732?rlsls1_v2732:(((fabs((rlsls1_v7314-rlsls1_f2852()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f2855()))<rlsls1_v7308):NIL)?NIL:((rlsls1_f3108()?NIL:((rlsls1_v2716=rlsls1_f2716()),((fabs((rlsls1_v2716-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v2716>(0.0))?rlsls1_f3093():rlsls1_f3092()))))?NIL:T))));}}
static int rlsls1_f2705(){if (rlsls1_p2705) return rlsls1_m2705; else {rlsls1_p2705=T;return rlsls1_m2705=(rlsls1_f2750()?rlsls1_f2706():NIL);}}
static double rlsls1_f2700(){if (rlsls1_p2700) return rlsls1_m2700; else {rlsls1_p2700=T;return rlsls1_m2700=(rlsls1_f2750()?(rlsls1_f2706()?rlsls1_f2745():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2703(){if (rlsls1_p2703) return rlsls1_m2703; else {rlsls1_p2703=T;return rlsls1_m2703=(rlsls1_f2750()?(rlsls1_f2706()?rlsls1_f2745():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2702(){if (rlsls1_p2702) return rlsls1_m2702; else {rlsls1_p2702=T;return rlsls1_m2702=(rlsls1_f2703()<(0.0));}}
static int rlsls1_f2695(){if (rlsls1_p2695) return rlsls1_m2695; else {rlsls1_p2695=T;return rlsls1_m2695=(rlsls1_f2705()?((rlsls1_v2702=rlsls1_f2702()),(rlsls1_v2702?rlsls1_v2702:(fabs((rlsls1_f2700()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f90(){if (rlsls1_p90) return rlsls1_m90; else {rlsls1_p90=T;return rlsls1_m90=(rlsls1_f2695()?(rlsls1_f2750()?(rlsls1_f2706()?(rlsls1_f2089()?(rlsls1_f835()?((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v572=rlsls1_f572()),((rlsls1_v2745>rlsls1_v572)?rlsls1_v2745:rlsls1_v572)):(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2362()?(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v2153=rlsls1_f2153()),((rlsls1_v2745>rlsls1_v2153)?rlsls1_v2745:rlsls1_v2153)):(rlsls1_f2580()?(rlsls1_f2549()?((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v2578=rlsls1_f2578()),((rlsls1_v2745>rlsls1_v2578)?rlsls1_v2745:rlsls1_v2578)):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v2127=rlsls1_f2127()),((rlsls1_v2745>rlsls1_v2127)?rlsls1_v2745:rlsls1_v2127)):rlsls1_f124()):rlsls1_f118()):(rlsls1_f2258()?rlsls1_f124():rlsls1_f2664())):(rlsls1_f2332()?rlsls1_f118():rlsls1_f2664()))):rlsls1_f2664()))):(rlsls1_f1409()?(rlsls1_f869()?((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v845=rlsls1_f845()),((rlsls1_v2745>rlsls1_v845)?rlsls1_v2745:rlsls1_v845)):(rlsls1_f1511()?((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2745>rlsls1_v1455)?rlsls1_v2745:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f103()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2745=rlsls1_f2745()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2745>rlsls1_v922)?rlsls1_v2745:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f103())):rlsls1_f2664()))):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double_or_symbol rlsls1_f55(){if (rlsls1_p55) return rlsls1_m55; else {rlsls1_p55=T;return rlsls1_m55=(rlsls1_f2695()?(rlsls1_f2750()?(rlsls1_f2706()?coerce_double_to_double_or_symbol(rlsls1_f2745()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2691(){if (rlsls1_p2691) return rlsls1_m2691; else {rlsls1_p2691=T;return rlsls1_m2691=(rlsls1_f2695()?rlsls1_f2700():rlsls1_f3077());}}
static double rlsls1_f2693(){if (rlsls1_p2693) return rlsls1_m2693; else {rlsls1_p2693=T;return rlsls1_m2693=(rlsls1_f2695()?rlsls1_f2703():rlsls1_f3082());}}
static int rlsls1_f2692(){if (rlsls1_p2692) return rlsls1_m2692; else {rlsls1_p2692=T;return rlsls1_m2692=(rlsls1_f2693()<(0.0));}}
static int rlsls1_f2694(){if (rlsls1_p2694) return rlsls1_m2694; else {rlsls1_p2694=T;return rlsls1_m2694=(rlsls1_f2695()?rlsls1_f2705():NIL);}}
static int rlsls1_f2686(){if (rlsls1_p2686) return rlsls1_m2686; else {rlsls1_p2686=T;return rlsls1_m2686=(rlsls1_f2694()?((rlsls1_v2692=rlsls1_f2692()),(rlsls1_v2692?rlsls1_v2692:(fabs((rlsls1_f2691()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f2869(){if (rlsls1_p2869) return rlsls1_m2869; else {rlsls1_p2869=T;return rlsls1_m2869=((rlsls1_f2873()+rlsls1_f2871())+rlsls1_v7312);}}
static double rlsls1_f2868(){if (rlsls1_p2868) return rlsls1_m2868; else {rlsls1_p2868=T;return rlsls1_m2868=(rlsls1_f3273()*rlsls1_f2869());}}
static double rlsls1_f2866(){if (rlsls1_p2866) return rlsls1_m2866; else {rlsls1_p2866=T;return rlsls1_m2866=((rlsls1_f3263()-rlsls1_f2868())/rlsls1_f3276());}}
static int rlsls1_f2857(){if (rlsls1_p2857) return rlsls1_m2857; else {rlsls1_p2857=T;return rlsls1_m2857=((rlsls1_v2866=rlsls1_f2866()),((fabs((((rlsls1_f3276()*rlsls1_v2866)+rlsls1_f2868())-rlsls1_f3263()))<rlsls1_v7308)?(((rlsls1_f7117()<=rlsls1_v2866)&&(rlsls1_v2866<=rlsls1_f7115()))?((rlsls1_f7108()<=rlsls1_f2869())&&(rlsls1_f2869()<=rlsls1_f7106())):NIL):NIL));}}
static int rlsls1_f2836(){if (rlsls1_p2836) return rlsls1_m2836; else {rlsls1_p2836=T;return rlsls1_m2836=((fabs((rlsls1_f2866()-rlsls1_v7322))<rlsls1_v7308)?(fabs((rlsls1_f2869()-rlsls1_v7320))<rlsls1_v7308):NIL);}}
static int rlsls1_f2827(){if (rlsls1_p2827) return rlsls1_m2827; else {rlsls1_p2827=T;return rlsls1_m2827=((fabs((rlsls1_f2866()-rlsls1_v7318))<rlsls1_v7308)?(fabs((rlsls1_f2869()-rlsls1_v7316))<rlsls1_v7308):NIL);}}
static int rlsls1_f2824(){if (rlsls1_p2824) return rlsls1_m2824; else {rlsls1_p2824=T;return rlsls1_m2824=((rlsls1_v2836=rlsls1_f2836()),((rlsls1_v2836?rlsls1_f3170():(rlsls1_v2836?NIL:T))?((rlsls1_v2827=rlsls1_f2827()),(rlsls1_v2827?rlsls1_f3153():(rlsls1_v2827?NIL:T))):NIL));}}
static double rlsls1_f2821(){if (rlsls1_p2821) return rlsls1_m2821; else {rlsls1_p2821=T;return rlsls1_m2821=atan2((rlsls1_f2869()-rlsls1_v7312),(rlsls1_f2866()-rlsls1_v7314));}}
static double rlsls1_f2798(){if (rlsls1_p2798) return rlsls1_m2798; else {rlsls1_p2798=T;return rlsls1_m2798=(rlsls1_f2821()+(-1.5707963267948966));}}
static double rlsls1_f2790(){if (rlsls1_p2790) return rlsls1_m2790; else {rlsls1_p2790=T;return rlsls1_m2790=((rlsls1_v2798=rlsls1_f2798()),(((rlsls1_f3276()*(rlsls1_f2866()+cos(rlsls1_v2798)))+(rlsls1_f3273()*(rlsls1_f2869()+sin(rlsls1_v2798))))-rlsls1_f3263()));}}
static double rlsls1_f2819(){if (rlsls1_p2819) return rlsls1_m2819; else {rlsls1_p2819=T;return rlsls1_m2819=normalize_rotation((rlsls1_f2821()-rlsls1_f6935()));}}
static double rlsls1_f177(){if (rlsls1_p177) return rlsls1_m177; else {rlsls1_p177=T;return rlsls1_m177=(rlsls1_f2313()?(rlsls1_f2269()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v2308=rlsls1_f2308()),((rlsls1_v2819>rlsls1_v2308)?rlsls1_v2819:rlsls1_v2308)):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f171(){if (rlsls1_p171) return rlsls1_m171; else {rlsls1_p171=T;return rlsls1_m171=(rlsls1_f2184()?(rlsls1_f2239()?(rlsls1_f2195()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v2234=rlsls1_f2234()),((rlsls1_v2819>rlsls1_v2234)?rlsls1_v2819:rlsls1_v2234)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f156(){if (rlsls1_p156) return rlsls1_m156; else {rlsls1_p156=T;return rlsls1_m156=((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v1419=rlsls1_f1419()),((rlsls1_v2819>rlsls1_v1419)?rlsls1_v2819:rlsls1_v1419));}}
static double rlsls1_f2818(){if (rlsls1_p2818) return rlsls1_m2818; else {rlsls1_p2818=T;return rlsls1_m2818=normalize_rotation(rlsls1_f2819());}}
static int rlsls1_f2806(){if (rlsls1_p2806) return rlsls1_m2806; else {rlsls1_p2806=T;return rlsls1_m2806=((rlsls1_v2818=rlsls1_f2818()),((fabs((rlsls1_v2818-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2818-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2818-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f2780(){if (rlsls1_p2780) return rlsls1_m2780; else {rlsls1_p2780=T;return rlsls1_m2780=((rlsls1_v2806=rlsls1_f2806()),(rlsls1_v2806?rlsls1_v2806:(((fabs((rlsls1_v7314-rlsls1_f2866()))<rlsls1_v7308)?(fabs((rlsls1_v7312-rlsls1_f2869()))<rlsls1_v7308):NIL)?NIL:((rlsls1_f3108()?NIL:((rlsls1_v2790=rlsls1_f2790()),((fabs((rlsls1_v2790-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v2790>(0.0))?rlsls1_f3093():rlsls1_f3092()))))?NIL:T))));}}
static double rlsls1_f144(){if (rlsls1_p144) return rlsls1_m144; else {rlsls1_p144=T;return rlsls1_m144=(rlsls1_f2824()?(rlsls1_f2780()?(rlsls1_f2089()?(rlsls1_f835()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v572=rlsls1_f572()),((rlsls1_v2819>rlsls1_v572)?rlsls1_v2819:rlsls1_v572)):(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2362()?(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v2153=rlsls1_f2153()),((rlsls1_v2819>rlsls1_v2153)?rlsls1_v2819:rlsls1_v2153)):(rlsls1_f2580()?(rlsls1_f2549()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v2578=rlsls1_f2578()),((rlsls1_v2819>rlsls1_v2578)?rlsls1_v2819:rlsls1_v2578)):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v2127=rlsls1_f2127()),((rlsls1_v2819>rlsls1_v2127)?rlsls1_v2819:rlsls1_v2127)):rlsls1_f177()):rlsls1_f171()):(rlsls1_f2258()?rlsls1_f177():rlsls1_f2664())):(rlsls1_f2332()?rlsls1_f171():rlsls1_f2664()))):rlsls1_f2664()))):(rlsls1_f1409()?(rlsls1_f869()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v845=rlsls1_f845()),((rlsls1_v2819>rlsls1_v845)?rlsls1_v2819:rlsls1_v845)):(rlsls1_f1511()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2819>rlsls1_v1455)?rlsls1_v2819:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f156()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2819>rlsls1_v922)?rlsls1_v2819:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f156())):rlsls1_f2664()))):rlsls1_f2664()):rlsls1_f2664());}}
static double_or_symbol rlsls1_f59(){if (rlsls1_p59) return rlsls1_m59; else {rlsls1_p59=T;return rlsls1_m59=(rlsls1_f2824()?(rlsls1_f2780()?coerce_double_to_double_or_symbol(rlsls1_f2819()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2636(){if (rlsls1_p2636) return rlsls1_m2636; else {rlsls1_p2636=T;return rlsls1_m2636=(rlsls1_f2824()?(rlsls1_f2780()?(rlsls1_f2695()?(rlsls1_f2750()?(rlsls1_f2706()?((rlsls1_v2819=rlsls1_f2819()),(rlsls1_v2745=rlsls1_f2745()),((rlsls1_v2819>rlsls1_v2745)?rlsls1_v2819:rlsls1_v2745)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f227(){if (rlsls1_p227) return rlsls1_m227; else {rlsls1_p227=T;return rlsls1_m227=(rlsls1_f2313()?(rlsls1_f2269()?((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v2308=rlsls1_f2308()),((rlsls1_v2636>rlsls1_v2308)?rlsls1_v2636:rlsls1_v2308)):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f221(){if (rlsls1_p221) return rlsls1_m221; else {rlsls1_p221=T;return rlsls1_m221=(rlsls1_f2184()?(rlsls1_f2239()?(rlsls1_f2195()?((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v2234=rlsls1_f2234()),((rlsls1_v2636>rlsls1_v2234)?rlsls1_v2636:rlsls1_v2234)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f206(){if (rlsls1_p206) return rlsls1_m206; else {rlsls1_p206=T;return rlsls1_m206=((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v1419=rlsls1_f1419()),((rlsls1_v2636>rlsls1_v1419)?rlsls1_v2636:rlsls1_v1419));}}
static int rlsls1_f2779(){if (rlsls1_p2779) return rlsls1_m2779; else {rlsls1_p2779=T;return rlsls1_m2779=(rlsls1_f2824()?rlsls1_f2780():NIL);}}
static double rlsls1_f2774(){if (rlsls1_p2774) return rlsls1_m2774; else {rlsls1_p2774=T;return rlsls1_m2774=(rlsls1_f2824()?(rlsls1_f2780()?rlsls1_f2819():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2777(){if (rlsls1_p2777) return rlsls1_m2777; else {rlsls1_p2777=T;return rlsls1_m2777=(rlsls1_f2824()?(rlsls1_f2780()?rlsls1_f2819():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2776(){if (rlsls1_p2776) return rlsls1_m2776; else {rlsls1_p2776=T;return rlsls1_m2776=(rlsls1_f2777()<(0.0));}}
static int rlsls1_f2769(){if (rlsls1_p2769) return rlsls1_m2769; else {rlsls1_p2769=T;return rlsls1_m2769=(rlsls1_f2779()?((rlsls1_v2776=rlsls1_f2776()),(rlsls1_v2776?rlsls1_v2776:(fabs((rlsls1_f2774()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f3225(){if (rlsls1_p3225) return rlsls1_m3225; else {rlsls1_p3225=T;return rlsls1_m3225=(rlsls1_f7211()-rlsls1_f3226());}}
static int rlsls1_f3224(){if (rlsls1_p3224) return rlsls1_m3224; else {rlsls1_p3224=T;return rlsls1_m3224=(rlsls1_f3225()<0.0);}}
static double rlsls1_f3064(){if (rlsls1_p3064) return rlsls1_m3064; else {rlsls1_p3064=T;return rlsls1_m3064=sqrt(rlsls1_f3225());}}
static double rlsls1_f3050(){if (rlsls1_p3050) return rlsls1_m3050; else {rlsls1_p3050=T;return rlsls1_m3050=((-rlsls1_f3064())+rlsls1_v7314);}}
static int rlsls1_f3042(){if (rlsls1_p3042) return rlsls1_m3042; else {rlsls1_p3042=T;return rlsls1_m3042=((rlsls1_v3050=rlsls1_f3050()),((fabs((((rlsls1_f3276()*rlsls1_v3050)+rlsls1_f3060())-rlsls1_f3263()))<rlsls1_v7308)?(((rlsls1_f7117()<=rlsls1_v3050)&&(rlsls1_v3050<=rlsls1_f7115()))?rlsls1_f3054():NIL):NIL));}}
static int rlsls1_f2964(){if (rlsls1_p2964) return rlsls1_m2964; else {rlsls1_p2964=T;return rlsls1_m2964=((fabs((rlsls1_f3050()-rlsls1_v7322))<rlsls1_v7308)?rlsls1_f3036():NIL);}}
static int rlsls1_f2958(){if (rlsls1_p2958) return rlsls1_m2958; else {rlsls1_p2958=T;return rlsls1_m2958=((fabs((rlsls1_f3050()-rlsls1_v7318))<rlsls1_v7308)?rlsls1_f3027():NIL);}}
static int rlsls1_f2955(){if (rlsls1_p2955) return rlsls1_m2955; else {rlsls1_p2955=T;return rlsls1_m2955=((rlsls1_v2964=rlsls1_f2964()),((rlsls1_v2964?rlsls1_f3170():(rlsls1_v2964?NIL:T))?((rlsls1_v2958=rlsls1_f2958()),(rlsls1_v2958?rlsls1_f3153():(rlsls1_v2958?NIL:T))):NIL));}}
static double rlsls1_f2953(){if (rlsls1_p2953) return rlsls1_m2953; else {rlsls1_p2953=T;return rlsls1_m2953=atan2(rlsls1_f3022(),(rlsls1_f3050()-rlsls1_v7314));}}
static double rlsls1_f2933(){if (rlsls1_p2933) return rlsls1_m2933; else {rlsls1_p2933=T;return rlsls1_m2933=(rlsls1_f2953()+(-1.5707963267948966));}}
static double rlsls1_f2925(){if (rlsls1_p2925) return rlsls1_m2925; else {rlsls1_p2925=T;return rlsls1_m2925=((rlsls1_v2933=rlsls1_f2933()),(((rlsls1_f3276()*(rlsls1_f3050()+cos(rlsls1_v2933)))+(rlsls1_f3273()*(rlsls1_f3061()+sin(rlsls1_v2933))))-rlsls1_f3263()));}}
static double rlsls1_f2951(){if (rlsls1_p2951) return rlsls1_m2951; else {rlsls1_p2951=T;return rlsls1_m2951=normalize_rotation((rlsls1_f2953()-rlsls1_f6935()));}}
static double rlsls1_f337(){if (rlsls1_p337) return rlsls1_m337; else {rlsls1_p337=T;return rlsls1_m337=(rlsls1_f2500()?(rlsls1_f2460()?((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v2496=rlsls1_f2496()),((rlsls1_v2951>rlsls1_v2496)?rlsls1_v2951:rlsls1_v2496)):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f331(){if (rlsls1_p331) return rlsls1_m331; else {rlsls1_p331=T;return rlsls1_m331=(rlsls1_f2385()?(rlsls1_f2436()?(rlsls1_f2396()?((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v2432=rlsls1_f2432()),((rlsls1_v2951>rlsls1_v2432)?rlsls1_v2951:rlsls1_v2432)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f316(){if (rlsls1_p316) return rlsls1_m316; else {rlsls1_p316=T;return rlsls1_m316=((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v1419=rlsls1_f1419()),((rlsls1_v2951>rlsls1_v1419)?rlsls1_v2951:rlsls1_v1419));}}
static double rlsls1_f2950(){if (rlsls1_p2950) return rlsls1_m2950; else {rlsls1_p2950=T;return rlsls1_m2950=normalize_rotation(rlsls1_f2951());}}
static int rlsls1_f2938(){if (rlsls1_p2938) return rlsls1_m2938; else {rlsls1_p2938=T;return rlsls1_m2938=((rlsls1_v2950=rlsls1_f2950()),((fabs((rlsls1_v2950-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2950-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v2950-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f2915(){if (rlsls1_p2915) return rlsls1_m2915; else {rlsls1_p2915=T;return rlsls1_m2915=((rlsls1_v2938=rlsls1_f2938()),(rlsls1_v2938?rlsls1_v2938:(((fabs((rlsls1_v7314-rlsls1_f3050()))<rlsls1_v7308)?rlsls1_f2999():NIL)?NIL:((rlsls1_f3108()?NIL:((rlsls1_v2925=rlsls1_f2925()),((fabs((rlsls1_v2925-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v2925>(0.0))?rlsls1_f3093():rlsls1_f3092()))))?NIL:T))));}}
static int rlsls1_f2914(){if (rlsls1_p2914) return rlsls1_m2914; else {rlsls1_p2914=T;return rlsls1_m2914=(rlsls1_f2955()?rlsls1_f2915():NIL);}}
static double rlsls1_f2909(){if (rlsls1_p2909) return rlsls1_m2909; else {rlsls1_p2909=T;return rlsls1_m2909=(rlsls1_f2955()?(rlsls1_f2915()?rlsls1_f2951():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2912(){if (rlsls1_p2912) return rlsls1_m2912; else {rlsls1_p2912=T;return rlsls1_m2912=(rlsls1_f2955()?(rlsls1_f2915()?rlsls1_f2951():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2911(){if (rlsls1_p2911) return rlsls1_m2911; else {rlsls1_p2911=T;return rlsls1_m2911=(rlsls1_f2912()<(0.0));}}
static int rlsls1_f2904(){if (rlsls1_p2904) return rlsls1_m2904; else {rlsls1_p2904=T;return rlsls1_m2904=(rlsls1_f2914()?((rlsls1_v2911=rlsls1_f2911()),(rlsls1_v2911?rlsls1_v2911:(fabs((rlsls1_f2909()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f303(){if (rlsls1_p303) return rlsls1_m303; else {rlsls1_p303=T;return rlsls1_m303=(rlsls1_f2904()?(rlsls1_f2955()?(rlsls1_f2915()?(rlsls1_f2089()?(rlsls1_f835()?((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v572=rlsls1_f572()),((rlsls1_v2951>rlsls1_v572)?rlsls1_v2951:rlsls1_v572)):(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2585()?(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v2153=rlsls1_f2153()),((rlsls1_v2951>rlsls1_v2153)?rlsls1_v2951:rlsls1_v2153)):(rlsls1_f2580()?(rlsls1_f2549()?((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v2578=rlsls1_f2578()),((rlsls1_v2951>rlsls1_v2578)?rlsls1_v2951:rlsls1_v2578)):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v2141=rlsls1_f2141()),((rlsls1_v2951>rlsls1_v2141)?rlsls1_v2951:rlsls1_v2141)):rlsls1_f337()):rlsls1_f331()):(rlsls1_f2449()?rlsls1_f337():rlsls1_f2664())):(rlsls1_f2513()?rlsls1_f331():rlsls1_f2664()))):rlsls1_f2664()))):(rlsls1_f1409()?(rlsls1_f869()?((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v845=rlsls1_f845()),((rlsls1_v2951>rlsls1_v845)?rlsls1_v2951:rlsls1_v845)):(rlsls1_f1511()?((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2951>rlsls1_v1455)?rlsls1_v2951:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f316()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2951=rlsls1_f2951()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2951>rlsls1_v922)?rlsls1_v2951:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f316())):rlsls1_f2664()))):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double_or_symbol rlsls1_f67(){if (rlsls1_p67) return rlsls1_m67; else {rlsls1_p67=T;return rlsls1_m67=(rlsls1_f2904()?(rlsls1_f2955()?(rlsls1_f2915()?coerce_double_to_double_or_symbol(rlsls1_f2951()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2900(){if (rlsls1_p2900) return rlsls1_m2900; else {rlsls1_p2900=T;return rlsls1_m2900=(rlsls1_f2904()?rlsls1_f2909():rlsls1_f3077());}}
static double rlsls1_f2902(){if (rlsls1_p2902) return rlsls1_m2902; else {rlsls1_p2902=T;return rlsls1_m2902=(rlsls1_f2904()?rlsls1_f2912():rlsls1_f3082());}}
static int rlsls1_f2901(){if (rlsls1_p2901) return rlsls1_m2901; else {rlsls1_p2901=T;return rlsls1_m2901=(rlsls1_f2902()<(0.0));}}
static int rlsls1_f2903(){if (rlsls1_p2903) return rlsls1_m2903; else {rlsls1_p2903=T;return rlsls1_m2903=(rlsls1_f2904()?rlsls1_f2914():NIL);}}
static int rlsls1_f2895(){if (rlsls1_p2895) return rlsls1_m2895; else {rlsls1_p2895=T;return rlsls1_m2895=(rlsls1_f2903()?((rlsls1_v2901=rlsls1_f2901()),(rlsls1_v2901?rlsls1_v2901:(fabs((rlsls1_f2900()-(0.0)))<rlsls1_v7308))):NIL);}}
static double rlsls1_f3063(){if (rlsls1_p3063) return rlsls1_m3063; else {rlsls1_p3063=T;return rlsls1_m3063=(rlsls1_f3064()+rlsls1_v7314);}}
static int rlsls1_f3052(){if (rlsls1_p3052) return rlsls1_m3052; else {rlsls1_p3052=T;return rlsls1_m3052=((rlsls1_v3063=rlsls1_f3063()),((fabs((((rlsls1_f3276()*rlsls1_v3063)+rlsls1_f3060())-rlsls1_f3263()))<rlsls1_v7308)?(((rlsls1_f7117()<=rlsls1_v3063)&&(rlsls1_v3063<=rlsls1_f7115()))?rlsls1_f3054():NIL):NIL));}}
static int rlsls1_f3035(){if (rlsls1_p3035) return rlsls1_m3035; else {rlsls1_p3035=T;return rlsls1_m3035=((fabs((rlsls1_f3063()-rlsls1_v7322))<rlsls1_v7308)?rlsls1_f3036():NIL);}}
static int rlsls1_f3026(){if (rlsls1_p3026) return rlsls1_m3026; else {rlsls1_p3026=T;return rlsls1_m3026=((fabs((rlsls1_f3063()-rlsls1_v7318))<rlsls1_v7308)?rlsls1_f3027():NIL);}}
static int rlsls1_f3023(){if (rlsls1_p3023) return rlsls1_m3023; else {rlsls1_p3023=T;return rlsls1_m3023=((rlsls1_v3035=rlsls1_f3035()),((rlsls1_v3035?rlsls1_f3170():(rlsls1_v3035?NIL:T))?((rlsls1_v3026=rlsls1_f3026()),(rlsls1_v3026?rlsls1_f3153():(rlsls1_v3026?NIL:T))):NIL));}}
static double rlsls1_f3020(){if (rlsls1_p3020) return rlsls1_m3020; else {rlsls1_p3020=T;return rlsls1_m3020=atan2(rlsls1_f3022(),(rlsls1_f3063()-rlsls1_v7314));}}
static double rlsls1_f2997(){if (rlsls1_p2997) return rlsls1_m2997; else {rlsls1_p2997=T;return rlsls1_m2997=(rlsls1_f3020()+(-1.5707963267948966));}}
static double rlsls1_f2989(){if (rlsls1_p2989) return rlsls1_m2989; else {rlsls1_p2989=T;return rlsls1_m2989=((rlsls1_v2997=rlsls1_f2997()),(((rlsls1_f3276()*(rlsls1_f3063()+cos(rlsls1_v2997)))+(rlsls1_f3273()*(rlsls1_f3061()+sin(rlsls1_v2997))))-rlsls1_f3263()));}}
static double rlsls1_f3018(){if (rlsls1_p3018) return rlsls1_m3018; else {rlsls1_p3018=T;return rlsls1_m3018=normalize_rotation((rlsls1_f3020()-rlsls1_f6935()));}}
static double rlsls1_f390(){if (rlsls1_p390) return rlsls1_m390; else {rlsls1_p390=T;return rlsls1_m390=(rlsls1_f2500()?(rlsls1_f2460()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v2496=rlsls1_f2496()),((rlsls1_v3018>rlsls1_v2496)?rlsls1_v3018:rlsls1_v2496)):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f384(){if (rlsls1_p384) return rlsls1_m384; else {rlsls1_p384=T;return rlsls1_m384=(rlsls1_f2385()?(rlsls1_f2436()?(rlsls1_f2396()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v2432=rlsls1_f2432()),((rlsls1_v3018>rlsls1_v2432)?rlsls1_v3018:rlsls1_v2432)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f369(){if (rlsls1_p369) return rlsls1_m369; else {rlsls1_p369=T;return rlsls1_m369=((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v1419=rlsls1_f1419()),((rlsls1_v3018>rlsls1_v1419)?rlsls1_v3018:rlsls1_v1419));}}
static double rlsls1_f3017(){if (rlsls1_p3017) return rlsls1_m3017; else {rlsls1_p3017=T;return rlsls1_m3017=normalize_rotation(rlsls1_f3018());}}
static int rlsls1_f3005(){if (rlsls1_p3005) return rlsls1_m3005; else {rlsls1_p3005=T;return rlsls1_m3005=((rlsls1_v3017=rlsls1_f3017()),((fabs((rlsls1_v3017-(0.0)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v3017-(-6.283185307179586)))<rlsls1_v7308)?NIL:((fabs((rlsls1_v3017-(6.283185307179586)))<rlsls1_v7308)?NIL:T))));}}
static int rlsls1_f2979(){if (rlsls1_p2979) return rlsls1_m2979; else {rlsls1_p2979=T;return rlsls1_m2979=((rlsls1_v3005=rlsls1_f3005()),(rlsls1_v3005?rlsls1_v3005:(((fabs((rlsls1_v7314-rlsls1_f3063()))<rlsls1_v7308)?rlsls1_f2999():NIL)?NIL:((rlsls1_f3108()?NIL:((rlsls1_v2989=rlsls1_f2989()),((fabs((rlsls1_v2989-(0.0)))<rlsls1_v7308)?NIL:((rlsls1_v2989>(0.0))?rlsls1_f3093():rlsls1_f3092()))))?NIL:T))));}}
static double rlsls1_f357(){if (rlsls1_p357) return rlsls1_m357; else {rlsls1_p357=T;return rlsls1_m357=(rlsls1_f3023()?(rlsls1_f2979()?(rlsls1_f2089()?(rlsls1_f835()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v572=rlsls1_f572()),((rlsls1_v3018>rlsls1_v572)?rlsls1_v3018:rlsls1_v572)):(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2585()?(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v2153=rlsls1_f2153()),((rlsls1_v3018>rlsls1_v2153)?rlsls1_v3018:rlsls1_v2153)):(rlsls1_f2580()?(rlsls1_f2549()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v2578=rlsls1_f2578()),((rlsls1_v3018>rlsls1_v2578)?rlsls1_v3018:rlsls1_v2578)):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v2141=rlsls1_f2141()),((rlsls1_v3018>rlsls1_v2141)?rlsls1_v3018:rlsls1_v2141)):rlsls1_f390()):rlsls1_f384()):(rlsls1_f2449()?rlsls1_f390():rlsls1_f2664())):(rlsls1_f2513()?rlsls1_f384():rlsls1_f2664()))):rlsls1_f2664()))):(rlsls1_f1409()?(rlsls1_f869()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v845=rlsls1_f845()),((rlsls1_v3018>rlsls1_v845)?rlsls1_v3018:rlsls1_v845)):(rlsls1_f1511()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v3018>rlsls1_v1455)?rlsls1_v3018:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f369()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v3018>rlsls1_v922)?rlsls1_v3018:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f369())):rlsls1_f2664()))):rlsls1_f2664()):rlsls1_f2664());}}
static double_or_symbol rlsls1_f71(){if (rlsls1_p71) return rlsls1_m71; else {rlsls1_p71=T;return rlsls1_m71=(rlsls1_f3023()?(rlsls1_f2979()?coerce_double_to_double_or_symbol(rlsls1_f3018()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2650(){if (rlsls1_p2650) return rlsls1_m2650; else {rlsls1_p2650=T;return rlsls1_m2650=(rlsls1_f3023()?(rlsls1_f2979()?(rlsls1_f2904()?(rlsls1_f2955()?(rlsls1_f2915()?((rlsls1_v3018=rlsls1_f3018()),(rlsls1_v2951=rlsls1_f2951()),((rlsls1_v3018>rlsls1_v2951)?rlsls1_v3018:rlsls1_v2951)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f440(){if (rlsls1_p440) return rlsls1_m440; else {rlsls1_p440=T;return rlsls1_m440=(rlsls1_f2500()?(rlsls1_f2460()?((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v2496=rlsls1_f2496()),((rlsls1_v2650>rlsls1_v2496)?rlsls1_v2650:rlsls1_v2496)):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f434(){if (rlsls1_p434) return rlsls1_m434; else {rlsls1_p434=T;return rlsls1_m434=(rlsls1_f2385()?(rlsls1_f2436()?(rlsls1_f2396()?((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v2432=rlsls1_f2432()),((rlsls1_v2650>rlsls1_v2432)?rlsls1_v2650:rlsls1_v2432)):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664());}}
static double rlsls1_f419(){if (rlsls1_p419) return rlsls1_m419; else {rlsls1_p419=T;return rlsls1_m419=((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v1419=rlsls1_f1419()),((rlsls1_v2650>rlsls1_v1419)?rlsls1_v2650:rlsls1_v1419));}}
static int rlsls1_f2978(){if (rlsls1_p2978) return rlsls1_m2978; else {rlsls1_p2978=T;return rlsls1_m2978=(rlsls1_f3023()?rlsls1_f2979():NIL);}}
static double rlsls1_f2973(){if (rlsls1_p2973) return rlsls1_m2973; else {rlsls1_p2973=T;return rlsls1_m2973=(rlsls1_f3023()?(rlsls1_f2979()?rlsls1_f3018():rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2976(){if (rlsls1_p2976) return rlsls1_m2976; else {rlsls1_p2976=T;return rlsls1_m2976=(rlsls1_f3023()?(rlsls1_f2979()?rlsls1_f3018():rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f2975(){if (rlsls1_p2975) return rlsls1_m2975; else {rlsls1_p2975=T;return rlsls1_m2975=(rlsls1_f2976()<(0.0));}}
static int rlsls1_f2968(){if (rlsls1_p2968) return rlsls1_m2968; else {rlsls1_p2968=T;return rlsls1_m2968=(rlsls1_f2978()?((rlsls1_v2975=rlsls1_f2975()),(rlsls1_v2975?rlsls1_v2975:(fabs((rlsls1_f2973()-(0.0)))<rlsls1_v7308))):NIL);}}
static int rlsls1_f3242(){if (rlsls1_p3242) return rlsls1_m3242; else {rlsls1_p3242=T;return rlsls1_m3242=(fabs((rlsls1_f3245()-rlsls1_f7235()))<rlsls1_v7308);}}
static double_or_symbol rlsls1_f73(){if (rlsls1_p73) return rlsls1_m73; else {rlsls1_p73=T;return rlsls1_m73=(rlsls1_f3242()?(rlsls1_f3198()?(rlsls1_f3185()?((rlsls1_v3070=rlsls1_f3070()),(rlsls1_v3070?(rlsls1_f2666()?coerce_double_to_double_or_symbol(rlsls1_f2662()):rlsls1_f79()):(rlsls1_v3070?rlsls1_f79():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static double rlsls1_f2620(){if (rlsls1_p2620) return rlsls1_m2620; else {rlsls1_p2620=T;return rlsls1_m2620=(rlsls1_f3242()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f3070()?(rlsls1_f2666()?rlsls1_f2662():rlsls1_f3075()):rlsls1_f2671()):rlsls1_f3077()):rlsls1_f3077()):rlsls1_f3077());}}
static double rlsls1_f2657(){if (rlsls1_p2657) return rlsls1_m2657; else {rlsls1_p2657=T;return rlsls1_m2657=(rlsls1_f3242()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f3070()?(rlsls1_f2666()?rlsls1_f2662():rlsls1_f3080()):rlsls1_f2673()):rlsls1_f3082()):rlsls1_f3082()):rlsls1_f3082());}}
static int rlsls1_f3233(){if (rlsls1_p3233) return rlsls1_m3233; else {rlsls1_p3233=T;return rlsls1_m3233=((rlsls1_v3242=rlsls1_f3242()),(rlsls1_v3242?rlsls1_f3236():(rlsls1_v3242?NIL:T)));}}
static int rlsls1_f2625(){if (rlsls1_p2625) return rlsls1_m2625; else {rlsls1_p2625=T;return rlsls1_m2625=((rlsls1_v3282?rlsls1_f3082():(rlsls1_f3233()?(rlsls1_f3232()?(rlsls1_f3224()?rlsls1_f2657():(rlsls1_f3052()?(rlsls1_f3042()?(rlsls1_f2968()?(rlsls1_f2895()?rlsls1_f2650():rlsls1_f2976()):rlsls1_f2902()):(rlsls1_f2968()?rlsls1_f2976():rlsls1_f3082())):(rlsls1_f3042()?rlsls1_f2902():rlsls1_f3082()))):(rlsls1_f2876()?rlsls1_f2657():(rlsls1_f2857()?(rlsls1_f2843()?(rlsls1_f2769()?(rlsls1_f2686()?rlsls1_f2636():rlsls1_f2777()):rlsls1_f2693()):(rlsls1_f2769()?rlsls1_f2777():rlsls1_f3082())):(rlsls1_f2843()?rlsls1_f2693():rlsls1_f3082())))):rlsls1_f3082()))<(0.0));}}
static int rlsls1_f3065(){if (rlsls1_p3065) return rlsls1_m3065; else {rlsls1_p3065=T;return rlsls1_m3065=(rlsls1_f3242()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f3070()?rlsls1_f3084():rlsls1_f3069()):NIL):NIL):NIL);}}
void rlsls1(rlsls1_a7330,rlsls1_a7328,rlsls1_a7326,rlsls1_a7324,rlsls1_a7322,rlsls1_a7320,rlsls1_a7318,rlsls1_a7316,rlsls1_a7314,rlsls1_a7312,rlsls1_a7308)
double rlsls1_a7330;
double rlsls1_a7328;
double rlsls1_a7326;
double rlsls1_a7324;
double rlsls1_a7322;
double rlsls1_a7320;
double rlsls1_a7318;
double rlsls1_a7316;
double rlsls1_a7314;
double rlsls1_a7312;
double rlsls1_a7308;
{ rlsls1_v7330=rlsls1_a7330;
  rlsls1_v7328=rlsls1_a7328;
  rlsls1_v7326=rlsls1_a7326;
  rlsls1_v7324=rlsls1_a7324;
  rlsls1_v7322=rlsls1_a7322;
  rlsls1_v7320=rlsls1_a7320;
  rlsls1_v7318=rlsls1_a7318;
  rlsls1_v7316=rlsls1_a7316;
  rlsls1_v7314=rlsls1_a7314;
  rlsls1_v7312=rlsls1_a7312;
  rlsls1_v7308=rlsls1_a7308;
  rlsls1_p4788=NIL;
  rlsls1_p1507=NIL;
  rlsls1_p1509=NIL;
  rlsls1_p1419=NIL;
  rlsls1_p5522=NIL;
  rlsls1_p5675=NIL;
  rlsls1_p5673=NIL;
  rlsls1_p5666=NIL;
  rlsls1_p5664=NIL;
  rlsls1_p6280=NIL;
  rlsls1_p6438=NIL;
  rlsls1_p5833=NIL;
  rlsls1_p6437=NIL;
  rlsls1_p5831=NIL;
  rlsls1_p6461=NIL;
  rlsls1_p6458=NIL;
  rlsls1_p2597=NIL;
  rlsls1_p6432=NIL;
  rlsls1_p2593=NIL;
  rlsls1_p2589=NIL;
  rlsls1_p1983=NIL;
  rlsls1_p6446=NIL;
  rlsls1_p2664=NIL;
  rlsls1_p3077=NIL;
  rlsls1_p3082=NIL;
  rlsls1_p6935=NIL;
  rlsls1_p3148=NIL;
  rlsls1_p3144=NIL;
  rlsls1_p6984=NIL;
  rlsls1_p6983=NIL;
  rlsls1_p2088=NIL;
  rlsls1_p5783=NIL;
  rlsls1_p6959=NIL;
  rlsls1_p6958=NIL;
  rlsls1_p1408=NIL;
  rlsls1_p4942=NIL;
  rlsls1_p7117=NIL;
  rlsls1_p7115=NIL;
  rlsls1_p7108=NIL;
  rlsls1_p7106=NIL;
  rlsls1_p7229=NIL;
  rlsls1_p5829=NIL;
  rlsls1_p3265=NIL;
  rlsls1_p3280=NIL;
  rlsls1_p2075=NIL;
  rlsls1_p2086=NIL;
  rlsls1_p2051=NIL;
  rlsls1_p2073=NIL;
  rlsls1_p2085=NIL;
  rlsls1_p2083=NIL;
  rlsls1_p1377=NIL;
  rlsls1_p1374=NIL;
  rlsls1_p1373=NIL;
  rlsls1_p1372=NIL;
  rlsls1_p1892=NIL;
  rlsls1_p1867=NIL;
  rlsls1_p1858=NIL;
  rlsls1_p1830=NIL;
  rlsls1_p1853=NIL;
  rlsls1_p1885=NIL;
  rlsls1_p1891=NIL;
  rlsls1_p1946=NIL;
  rlsls1_p1943=NIL;
  rlsls1_p1929=NIL;
  rlsls1_p1928=NIL;
  rlsls1_p2042=NIL;
  rlsls1_p2040=NIL;
  rlsls1_p2046=NIL;
  rlsls1_p1716=NIL;
  rlsls1_p1709=NIL;
  rlsls1_p2048=NIL;
  rlsls1_p1718=NIL;
  rlsls1_p1708=NIL;
  rlsls1_p1717=NIL;
  rlsls1_p2047=NIL;
  rlsls1_p2045=NIL;
  rlsls1_p2072=NIL;
  rlsls1_p2071=NIL;
  rlsls1_p2030=NIL;
  rlsls1_p2028=NIL;
  rlsls1_p2082=NIL;
  rlsls1_p2038=NIL;
  rlsls1_p2036=NIL;
  rlsls1_p2016=NIL;
  rlsls1_p2033=NIL;
  rlsls1_p1976=NIL;
  rlsls1_p2022=NIL;
  rlsls1_p2014=NIL;
  rlsls1_p2004=NIL;
  rlsls1_p1950=NIL;
  rlsls1_p1978=NIL;
  rlsls1_p1974=NIL;
  rlsls1_p1394=NIL;
  rlsls1_p1393=NIL;
  rlsls1_p1381=NIL;
  rlsls1_p1942=NIL;
  rlsls1_p1934=NIL;
  rlsls1_p1931=NIL;
  rlsls1_p1930=NIL;
  rlsls1_p1972=NIL;
  rlsls1_p1971=NIL;
  rlsls1_p1959=NIL;
  rlsls1_p1996=NIL;
  rlsls1_p1993=NIL;
  rlsls1_p1984=NIL;
  rlsls1_p1981=NIL;
  rlsls1_p2018=NIL;
  rlsls1_p2017=NIL;
  rlsls1_p1958=NIL;
  rlsls1_p1365=NIL;
  rlsls1_p1921=NIL;
  rlsls1_p2080=NIL;
  rlsls1_p2067=NIL;
  rlsls1_p2061=NIL;
  rlsls1_p2057=NIL;
  rlsls1_p7293=NIL;
  rlsls1_p7291=NIL;
  rlsls1_p7288=NIL;
  rlsls1_p6979=NIL;
  rlsls1_p3176=NIL;
  rlsls1_p3172=NIL;
  rlsls1_p1982=NIL;
  rlsls1_p3171=NIL;
  rlsls1_p2584=NIL;
  rlsls1_p7296=NIL;
  rlsls1_p6954=NIL;
  rlsls1_p3159=NIL;
  rlsls1_p3155=NIL;
  rlsls1_p1398=NIL;
  rlsls1_p3154=NIL;
  rlsls1_p2582=NIL;
  rlsls1_p7294=NIL;
  rlsls1_p3276=NIL;
  rlsls1_p3232=NIL;
  rlsls1_p3261=NIL;
  rlsls1_p3275=NIL;
  rlsls1_p7287=NIL;
  rlsls1_p3263=NIL;
  rlsls1_p3273=NIL;
  rlsls1_p2561=NIL;
  rlsls1_p2558=NIL;
  rlsls1_p2557=NIL;
  rlsls1_p2556=NIL;
  rlsls1_p3061=NIL;
  rlsls1_p3036=NIL;
  rlsls1_p3027=NIL;
  rlsls1_p2999=NIL;
  rlsls1_p3022=NIL;
  rlsls1_p3054=NIL;
  rlsls1_p3060=NIL;
  rlsls1_p3111=NIL;
  rlsls1_p3108=NIL;
  rlsls1_p3093=NIL;
  rlsls1_p3092=NIL;
  rlsls1_p3223=NIL;
  rlsls1_p3221=NIL;
  rlsls1_p3227=NIL;
  rlsls1_p2881=NIL;
  rlsls1_p2874=NIL;
  rlsls1_p3229=NIL;
  rlsls1_p2884=NIL;
  rlsls1_p2873=NIL;
  rlsls1_p2883=NIL;
  rlsls1_p3228=NIL;
  rlsls1_p3226=NIL;
  rlsls1_p3260=NIL;
  rlsls1_p3259=NIL;
  rlsls1_p3211=NIL;
  rlsls1_p3209=NIL;
  rlsls1_p3272=NIL;
  rlsls1_p3219=NIL;
  rlsls1_p3217=NIL;
  rlsls1_p3197=NIL;
  rlsls1_p3214=NIL;
  rlsls1_p3143=NIL;
  rlsls1_p3203=NIL;
  rlsls1_p3195=NIL;
  rlsls1_p3185=NIL;
  rlsls1_p3115=NIL;
  rlsls1_p3147=NIL;
  rlsls1_p3141=NIL;
  rlsls1_p2578=NIL;
  rlsls1_p817=NIL;
  rlsls1_p689=NIL;
  rlsls1_p2577=NIL;
  rlsls1_p2565=NIL;
  rlsls1_p3106=NIL;
  rlsls1_p3098=NIL;
  rlsls1_p3095=NIL;
  rlsls1_p3094=NIL;
  rlsls1_p3139=NIL;
  rlsls1_p476=NIL;
  rlsls1_p3138=NIL;
  rlsls1_p3124=NIL;
  rlsls1_p3177=NIL;
  rlsls1_p3169=NIL;
  rlsls1_p3160=NIL;
  rlsls1_p3152=NIL;
  rlsls1_p2580=NIL;
  rlsls1_p3199=NIL;
  rlsls1_p3198=NIL;
  rlsls1_p3123=NIL;
  rlsls1_p2549=NIL;
  rlsls1_p43=NIL;
  rlsls1_p2153=NIL;
  rlsls1_p830=NIL;
  rlsls1_p701=NIL;
  rlsls1_p2548=NIL;
  rlsls1_p829=NIL;
  rlsls1_p2543=NIL;
  rlsls1_p2546=NIL;
  rlsls1_p2545=NIL;
  rlsls1_p2538=NIL;
  rlsls1_p2160=NIL;
  rlsls1_p2162=NIL;
  rlsls1_p2161=NIL;
  rlsls1_p2537=NIL;
  rlsls1_p2155=NIL;
  rlsls1_p3085=NIL;
  rlsls1_p3270=NIL;
  rlsls1_p3255=NIL;
  rlsls1_p3249=NIL;
  rlsls1_p3245=NIL;
  rlsls1_p7305=NIL;
  rlsls1_p7224=NIL;
  rlsls1_p3240=NIL;
  rlsls1_p3236=NIL;
  rlsls1_p1995=NIL;
  rlsls1_p1400=NIL;
  rlsls1_p1396=NIL;
  rlsls1_p970=NIL;
  rlsls1_p1364=NIL;
  rlsls1_p1359=NIL;
  rlsls1_p1362=NIL;
  rlsls1_p1361=NIL;
  rlsls1_p1354=NIL;
  rlsls1_p1351=NIL;
  rlsls1_p1345=NIL;
  rlsls1_p1994=NIL;
  rlsls1_p1979=NIL;
  rlsls1_p1503=NIL;
  rlsls1_p1920=NIL;
  rlsls1_p1915=NIL;
  rlsls1_p1918=NIL;
  rlsls1_p1917=NIL;
  rlsls1_p1910=NIL;
  rlsls1_p1907=NIL;
  rlsls1_p1901=NIL;
  rlsls1_p3170=NIL;
  rlsls1_p3153=NIL;
  rlsls1_p3150=NIL;
  rlsls1_p79=NIL;
  rlsls1_p2662=NIL;
  rlsls1_p524=NIL;
  rlsls1_p3084=NIL;
  rlsls1_p3075=NIL;
  rlsls1_p3080=NIL;
  rlsls1_p3079=NIL;
  rlsls1_p3070=NIL;
  rlsls1_p2671=NIL;
  rlsls1_p2673=NIL;
  rlsls1_p2672=NIL;
  rlsls1_p3069=NIL;
  rlsls1_p2666=NIL;
  rlsls1_p7240=NIL;
  rlsls1_p7238=NIL;
  rlsls1_p7237=NIL;
  rlsls1_p4939=NIL;
  rlsls1_p4931=NIL;
  rlsls1_p1172=NIL;
  rlsls1_p1171=NIL;
  rlsls1_p1169=NIL;
  rlsls1_p1153=NIL;
  rlsls1_p1152=NIL;
  rlsls1_p1150=NIL;
  rlsls1_p1141=NIL;
  rlsls1_p1060=NIL;
  rlsls1_p1051=NIL;
  rlsls1_p1048=NIL;
  rlsls1_p1045=NIL;
  rlsls1_p1022=NIL;
  rlsls1_p1014=NIL;
  rlsls1_p1043=NIL;
  rlsls1_p1042=NIL;
  rlsls1_p1030=NIL;
  rlsls1_p1004=NIL;
  rlsls1_p1003=NIL;
  rlsls1_p998=NIL;
  rlsls1_p1001=NIL;
  rlsls1_p1000=NIL;
  rlsls1_p993=NIL;
  rlsls1_p932=NIL;
  rlsls1_p897=NIL;
  rlsls1_p990=NIL;
  rlsls1_p992=NIL;
  rlsls1_p984=NIL;
  rlsls1_p1167=NIL;
  rlsls1_p1166=NIL;
  rlsls1_p1164=NIL;
  rlsls1_p1155=NIL;
  rlsls1_p1134=NIL;
  rlsls1_p1125=NIL;
  rlsls1_p1122=NIL;
  rlsls1_p1119=NIL;
  rlsls1_p1096=NIL;
  rlsls1_p1088=NIL;
  rlsls1_p1117=NIL;
  rlsls1_p1116=NIL;
  rlsls1_p1104=NIL;
  rlsls1_p1078=NIL;
  rlsls1_p936=NIL;
  rlsls1_p901=NIL;
  rlsls1_p1077=NIL;
  rlsls1_p1074=NIL;
  rlsls1_p1067=NIL;
  rlsls1_p1402=NIL;
  rlsls1_p1401=NIL;
  rlsls1_p1339=NIL;
  rlsls1_p1328=NIL;
  rlsls1_p1320=NIL;
  rlsls1_p1252=NIL;
  rlsls1_p1246=NIL;
  rlsls1_p1243=NIL;
  rlsls1_p1241=NIL;
  rlsls1_p1221=NIL;
  rlsls1_p1213=NIL;
  rlsls1_p1239=NIL;
  rlsls1_p1238=NIL;
  rlsls1_p1226=NIL;
  rlsls1_p1203=NIL;
  rlsls1_p1202=NIL;
  rlsls1_p1197=NIL;
  rlsls1_p1200=NIL;
  rlsls1_p1199=NIL;
  rlsls1_p1192=NIL;
  rlsls1_p951=NIL;
  rlsls1_p909=NIL;
  rlsls1_p1189=NIL;
  rlsls1_p1191=NIL;
  rlsls1_p1183=NIL;
  rlsls1_p1338=NIL;
  rlsls1_p1330=NIL;
  rlsls1_p1316=NIL;
  rlsls1_p1310=NIL;
  rlsls1_p1307=NIL;
  rlsls1_p1305=NIL;
  rlsls1_p1285=NIL;
  rlsls1_p1277=NIL;
  rlsls1_p1303=NIL;
  rlsls1_p1302=NIL;
  rlsls1_p1290=NIL;
  rlsls1_p1267=NIL;
  rlsls1_p955=NIL;
  rlsls1_p913=NIL;
  rlsls1_p1266=NIL;
  rlsls1_p1263=NIL;
  rlsls1_p1256=NIL;
  rlsls1_p1405=NIL;
  rlsls1_p964=NIL;
  rlsls1_p915=NIL;
  rlsls1_p1403=NIL;
  rlsls1_p922=NIL;
  rlsls1_p825=NIL;
  rlsls1_p864=NIL;
  rlsls1_p888=NIL;
  rlsls1_p1340=NIL;
  rlsls1_p974=NIL;
  rlsls1_p883=NIL;
  rlsls1_p886=NIL;
  rlsls1_p885=NIL;
  rlsls1_p878=NIL;
  rlsls1_p877=NIL;
  rlsls1_p874=NIL;
  rlsls1_p876=NIL;
  rlsls1_p875=NIL;
  rlsls1_p869=NIL;
  rlsls1_p5780=NIL;
  rlsls1_p5768=NIL;
  rlsls1_p1712=NIL;
  rlsls1_p1711=NIL;
  rlsls1_p1706=NIL;
  rlsls1_p1690=NIL;
  rlsls1_p1689=NIL;
  rlsls1_p1687=NIL;
  rlsls1_p1678=NIL;
  rlsls1_p1597=NIL;
  rlsls1_p1588=NIL;
  rlsls1_p1585=NIL;
  rlsls1_p1582=NIL;
  rlsls1_p1559=NIL;
  rlsls1_p1551=NIL;
  rlsls1_p1580=NIL;
  rlsls1_p1579=NIL;
  rlsls1_p1567=NIL;
  rlsls1_p1541=NIL;
  rlsls1_p1540=NIL;
  rlsls1_p1535=NIL;
  rlsls1_p1538=NIL;
  rlsls1_p1537=NIL;
  rlsls1_p1530=NIL;
  rlsls1_p1465=NIL;
  rlsls1_p1430=NIL;
  rlsls1_p1527=NIL;
  rlsls1_p1529=NIL;
  rlsls1_p1521=NIL;
  rlsls1_p1704=NIL;
  rlsls1_p1703=NIL;
  rlsls1_p1701=NIL;
  rlsls1_p1692=NIL;
  rlsls1_p1671=NIL;
  rlsls1_p1662=NIL;
  rlsls1_p1659=NIL;
  rlsls1_p1656=NIL;
  rlsls1_p1633=NIL;
  rlsls1_p1625=NIL;
  rlsls1_p1654=NIL;
  rlsls1_p1653=NIL;
  rlsls1_p1641=NIL;
  rlsls1_p1615=NIL;
  rlsls1_p1469=NIL;
  rlsls1_p1434=NIL;
  rlsls1_p1614=NIL;
  rlsls1_p1611=NIL;
  rlsls1_p1604=NIL;
  rlsls1_p2044=NIL;
  rlsls1_p2043=NIL;
  rlsls1_p1895=NIL;
  rlsls1_p1881=NIL;
  rlsls1_p1873=NIL;
  rlsls1_p1795=NIL;
  rlsls1_p1789=NIL;
  rlsls1_p1786=NIL;
  rlsls1_p1784=NIL;
  rlsls1_p1764=NIL;
  rlsls1_p1756=NIL;
  rlsls1_p1782=NIL;
  rlsls1_p1781=NIL;
  rlsls1_p1769=NIL;
  rlsls1_p1746=NIL;
  rlsls1_p1745=NIL;
  rlsls1_p1740=NIL;
  rlsls1_p1743=NIL;
  rlsls1_p1742=NIL;
  rlsls1_p1735=NIL;
  rlsls1_p1484=NIL;
  rlsls1_p1442=NIL;
  rlsls1_p1732=NIL;
  rlsls1_p1734=NIL;
  rlsls1_p1726=NIL;
  rlsls1_p1894=NIL;
  rlsls1_p1883=NIL;
  rlsls1_p1866=NIL;
  rlsls1_p1857=NIL;
  rlsls1_p1854=NIL;
  rlsls1_p1851=NIL;
  rlsls1_p1828=NIL;
  rlsls1_p1820=NIL;
  rlsls1_p1849=NIL;
  rlsls1_p1848=NIL;
  rlsls1_p1836=NIL;
  rlsls1_p1810=NIL;
  rlsls1_p1488=NIL;
  rlsls1_p1446=NIL;
  rlsls1_p1809=NIL;
  rlsls1_p1806=NIL;
  rlsls1_p1799=NIL;
  rlsls1_p2054=NIL;
  rlsls1_p1497=NIL;
  rlsls1_p1448=NIL;
  rlsls1_p2052=NIL;
  rlsls1_p1455=NIL;
  rlsls1_p832=NIL;
  rlsls1_p868=NIL;
  rlsls1_p1421=NIL;
  rlsls1_p1896=NIL;
  rlsls1_p1511=NIL;
  rlsls1_p859=NIL;
  rlsls1_p845=NIL;
  rlsls1_p834=NIL;
  rlsls1_p819=NIL;
  rlsls1_p1414=NIL;
  rlsls1_p1417=NIL;
  rlsls1_p1416=NIL;
  rlsls1_p1409=NIL;
  rlsls1_p515=NIL;
  rlsls1_p467=NIL;
  rlsls1_p857=NIL;
  rlsls1_p840=NIL;
  rlsls1_p843=NIL;
  rlsls1_p842=NIL;
  rlsls1_p835=NIL;
  rlsls1_p6443=NIL;
  rlsls1_p6423=NIL;
  rlsls1_p2363=NIL;
  rlsls1_p2362=NIL;
  rlsls1_p2360=NIL;
  rlsls1_p2344=NIL;
  rlsls1_p2343=NIL;
  rlsls1_p2341=NIL;
  rlsls1_p2332=NIL;
  rlsls1_p2251=NIL;
  rlsls1_p2242=NIL;
  rlsls1_p2239=NIL;
  rlsls1_p2236=NIL;
  rlsls1_p2213=NIL;
  rlsls1_p2205=NIL;
  rlsls1_p2234=NIL;
  rlsls1_p727=NIL;
  rlsls1_p725=NIL;
  rlsls1_p593=NIL;
  rlsls1_p2233=NIL;
  rlsls1_p2221=NIL;
  rlsls1_p2195=NIL;
  rlsls1_p2194=NIL;
  rlsls1_p2189=NIL;
  rlsls1_p2192=NIL;
  rlsls1_p2191=NIL;
  rlsls1_p2184=NIL;
  rlsls1_p285=NIL;
  rlsls1_p263=NIL;
  rlsls1_p715=NIL;
  rlsls1_p581=NIL;
  rlsls1_p19=NIL;
  rlsls1_p2180=NIL;
  rlsls1_p2182=NIL;
  rlsls1_p2181=NIL;
  rlsls1_p2183=NIL;
  rlsls1_p2175=NIL;
  rlsls1_p2358=NIL;
  rlsls1_p2357=NIL;
  rlsls1_p2355=NIL;
  rlsls1_p2346=NIL;
  rlsls1_p2325=NIL;
  rlsls1_p2316=NIL;
  rlsls1_p2313=NIL;
  rlsls1_p2310=NIL;
  rlsls1_p2287=NIL;
  rlsls1_p2279=NIL;
  rlsls1_p2308=NIL;
  rlsls1_p740=NIL;
  rlsls1_p738=NIL;
  rlsls1_p609=NIL;
  rlsls1_p2307=NIL;
  rlsls1_p2295=NIL;
  rlsls1_p2269=NIL;
  rlsls1_p291=NIL;
  rlsls1_p269=NIL;
  rlsls1_p729=NIL;
  rlsls1_p598=NIL;
  rlsls1_p23=NIL;
  rlsls1_p2127=NIL;
  rlsls1_p755=NIL;
  rlsls1_p753=NIL;
  rlsls1_p746=NIL;
  rlsls1_p751=NIL;
  rlsls1_p621=NIL;
  rlsls1_p2173=NIL;
  rlsls1_p750=NIL;
  rlsls1_p2268=NIL;
  rlsls1_p2263=NIL;
  rlsls1_p2266=NIL;
  rlsls1_p2265=NIL;
  rlsls1_p2258=NIL;
  rlsls1_p2586=NIL;
  rlsls1_p2585=NIL;
  rlsls1_p2532=NIL;
  rlsls1_p2521=NIL;
  rlsls1_p2513=NIL;
  rlsls1_p2445=NIL;
  rlsls1_p2439=NIL;
  rlsls1_p2436=NIL;
  rlsls1_p2434=NIL;
  rlsls1_p2414=NIL;
  rlsls1_p2406=NIL;
  rlsls1_p2432=NIL;
  rlsls1_p774=NIL;
  rlsls1_p772=NIL;
  rlsls1_p642=NIL;
  rlsls1_p2431=NIL;
  rlsls1_p2419=NIL;
  rlsls1_p2396=NIL;
  rlsls1_p2395=NIL;
  rlsls1_p2390=NIL;
  rlsls1_p2393=NIL;
  rlsls1_p2392=NIL;
  rlsls1_p2385=NIL;
  rlsls1_p539=NIL;
  rlsls1_p491=NIL;
  rlsls1_p762=NIL;
  rlsls1_p630=NIL;
  rlsls1_p31=NIL;
  rlsls1_p2381=NIL;
  rlsls1_p2383=NIL;
  rlsls1_p2382=NIL;
  rlsls1_p2384=NIL;
  rlsls1_p2376=NIL;
  rlsls1_p2531=NIL;
  rlsls1_p2523=NIL;
  rlsls1_p2509=NIL;
  rlsls1_p2503=NIL;
  rlsls1_p2500=NIL;
  rlsls1_p2498=NIL;
  rlsls1_p2478=NIL;
  rlsls1_p2470=NIL;
  rlsls1_p2496=NIL;
  rlsls1_p787=NIL;
  rlsls1_p785=NIL;
  rlsls1_p658=NIL;
  rlsls1_p2495=NIL;
  rlsls1_p2483=NIL;
  rlsls1_p2460=NIL;
  rlsls1_p545=NIL;
  rlsls1_p497=NIL;
  rlsls1_p776=NIL;
  rlsls1_p647=NIL;
  rlsls1_p35=NIL;
  rlsls1_p2141=NIL;
  rlsls1_p802=NIL;
  rlsls1_p800=NIL;
  rlsls1_p793=NIL;
  rlsls1_p798=NIL;
  rlsls1_p670=NIL;
  rlsls1_p2374=NIL;
  rlsls1_p797=NIL;
  rlsls1_p2459=NIL;
  rlsls1_p2454=NIL;
  rlsls1_p2457=NIL;
  rlsls1_p2456=NIL;
  rlsls1_p2449=NIL;
  rlsls1_p2594=NIL;
  rlsls1_p551=NIL;
  rlsls1_p503=NIL;
  rlsls1_p803=NIL;
  rlsls1_p673=NIL;
  rlsls1_p37=NIL;
  rlsls1_p2111=NIL;
  rlsls1_p2148=NIL;
  rlsls1_p2587=NIL;
  rlsls1_p572=NIL;
  rlsls1_p560=NIL;
  rlsls1_p512=NIL;
  rlsls1_p2094=NIL;
  rlsls1_p2117=NIL;
  rlsls1_p2116=NIL;
  rlsls1_p2533=NIL;
  rlsls1_p2163=NIL;
  rlsls1_p2089=NIL;
  rlsls1_p569=NIL;
  rlsls1_p7235=NIL;
  rlsls1_p7211=NIL;
  rlsls1_p2877=NIL;
  rlsls1_p2876=NIL;
  rlsls1_p2871=NIL;
  rlsls1_p2855=NIL;
  rlsls1_p2854=NIL;
  rlsls1_p2852=NIL;
  rlsls1_p2843=NIL;
  rlsls1_p2762=NIL;
  rlsls1_p2753=NIL;
  rlsls1_p2750=NIL;
  rlsls1_p2747=NIL;
  rlsls1_p2724=NIL;
  rlsls1_p2716=NIL;
  rlsls1_p2745=NIL;
  rlsls1_p124=NIL;
  rlsls1_p118=NIL;
  rlsls1_p103=NIL;
  rlsls1_p2744=NIL;
  rlsls1_p2732=NIL;
  rlsls1_p2706=NIL;
  rlsls1_p2705=NIL;
  rlsls1_p2700=NIL;
  rlsls1_p2703=NIL;
  rlsls1_p2702=NIL;
  rlsls1_p2695=NIL;
  rlsls1_p90=NIL;
  rlsls1_p55=NIL;
  rlsls1_p2691=NIL;
  rlsls1_p2693=NIL;
  rlsls1_p2692=NIL;
  rlsls1_p2694=NIL;
  rlsls1_p2686=NIL;
  rlsls1_p2869=NIL;
  rlsls1_p2868=NIL;
  rlsls1_p2866=NIL;
  rlsls1_p2857=NIL;
  rlsls1_p2836=NIL;
  rlsls1_p2827=NIL;
  rlsls1_p2824=NIL;
  rlsls1_p2821=NIL;
  rlsls1_p2798=NIL;
  rlsls1_p2790=NIL;
  rlsls1_p2819=NIL;
  rlsls1_p177=NIL;
  rlsls1_p171=NIL;
  rlsls1_p156=NIL;
  rlsls1_p2818=NIL;
  rlsls1_p2806=NIL;
  rlsls1_p2780=NIL;
  rlsls1_p144=NIL;
  rlsls1_p59=NIL;
  rlsls1_p2636=NIL;
  rlsls1_p227=NIL;
  rlsls1_p221=NIL;
  rlsls1_p206=NIL;
  rlsls1_p2779=NIL;
  rlsls1_p2774=NIL;
  rlsls1_p2777=NIL;
  rlsls1_p2776=NIL;
  rlsls1_p2769=NIL;
  rlsls1_p3225=NIL;
  rlsls1_p3224=NIL;
  rlsls1_p3064=NIL;
  rlsls1_p3050=NIL;
  rlsls1_p3042=NIL;
  rlsls1_p2964=NIL;
  rlsls1_p2958=NIL;
  rlsls1_p2955=NIL;
  rlsls1_p2953=NIL;
  rlsls1_p2933=NIL;
  rlsls1_p2925=NIL;
  rlsls1_p2951=NIL;
  rlsls1_p337=NIL;
  rlsls1_p331=NIL;
  rlsls1_p316=NIL;
  rlsls1_p2950=NIL;
  rlsls1_p2938=NIL;
  rlsls1_p2915=NIL;
  rlsls1_p2914=NIL;
  rlsls1_p2909=NIL;
  rlsls1_p2912=NIL;
  rlsls1_p2911=NIL;
  rlsls1_p2904=NIL;
  rlsls1_p303=NIL;
  rlsls1_p67=NIL;
  rlsls1_p2900=NIL;
  rlsls1_p2902=NIL;
  rlsls1_p2901=NIL;
  rlsls1_p2903=NIL;
  rlsls1_p2895=NIL;
  rlsls1_p3063=NIL;
  rlsls1_p3052=NIL;
  rlsls1_p3035=NIL;
  rlsls1_p3026=NIL;
  rlsls1_p3023=NIL;
  rlsls1_p3020=NIL;
  rlsls1_p2997=NIL;
  rlsls1_p2989=NIL;
  rlsls1_p3018=NIL;
  rlsls1_p390=NIL;
  rlsls1_p384=NIL;
  rlsls1_p369=NIL;
  rlsls1_p3017=NIL;
  rlsls1_p3005=NIL;
  rlsls1_p2979=NIL;
  rlsls1_p357=NIL;
  rlsls1_p71=NIL;
  rlsls1_p2650=NIL;
  rlsls1_p440=NIL;
  rlsls1_p434=NIL;
  rlsls1_p419=NIL;
  rlsls1_p2978=NIL;
  rlsls1_p2973=NIL;
  rlsls1_p2976=NIL;
  rlsls1_p2975=NIL;
  rlsls1_p2968=NIL;
  rlsls1_p3242=NIL;
  rlsls1_p73=NIL;
  rlsls1_p2620=NIL;
  rlsls1_p2657=NIL;
  rlsls1_p3233=NIL;
  rlsls1_p2625=NIL;
  rlsls1_p3065=NIL;
  double_or_symbol_result=((rlsls1_v7310=(rlsls1_v7314-rlsls1_v7330)),(rlsls1_v3282=((fabs(rlsls1_v7310)<rlsls1_v7308)?(fabs(rlsls1_f7305())<rlsls1_v7308):NIL)),(((rlsls1_v3282?NIL:(rlsls1_f3233()?(rlsls1_f3232()?(rlsls1_f3224()?rlsls1_f3065():(rlsls1_f3052()?(rlsls1_f3042()?(rlsls1_f2968()?(rlsls1_f2895()?(rlsls1_f3023()?(rlsls1_f2979()?rlsls1_f2903():NIL):NIL):rlsls1_f2978()):rlsls1_f2903()):(rlsls1_f2968()?rlsls1_f2978():NIL)):(rlsls1_f3042()?rlsls1_f2903():NIL))):(rlsls1_f2876()?rlsls1_f3065():(rlsls1_f2857()?(rlsls1_f2843()?(rlsls1_f2769()?(rlsls1_f2686()?(rlsls1_f2824()?(rlsls1_f2780()?rlsls1_f2694():NIL):NIL):rlsls1_f2779()):rlsls1_f2694()):(rlsls1_f2769()?rlsls1_f2779():NIL)):(rlsls1_f2843()?rlsls1_f2694():NIL)))):NIL))?((rlsls1_v2625=rlsls1_f2625()),(rlsls1_v2625?rlsls1_v2625:(fabs(((rlsls1_v3282?rlsls1_f3077():(rlsls1_f3233()?(rlsls1_f3232()?(rlsls1_f3224()?rlsls1_f2620():(rlsls1_f3052()?(rlsls1_f3042()?(rlsls1_f2968()?(rlsls1_f2895()?rlsls1_f2650():rlsls1_f2973()):rlsls1_f2900()):(rlsls1_f2968()?rlsls1_f2973():rlsls1_f3077())):(rlsls1_f3042()?rlsls1_f2900():rlsls1_f3077()))):(rlsls1_f2876()?rlsls1_f2620():(rlsls1_f2857()?(rlsls1_f2843()?(rlsls1_f2769()?(rlsls1_f2686()?rlsls1_f2636():rlsls1_f2774()):rlsls1_f2691()):(rlsls1_f2769()?rlsls1_f2774():rlsls1_f3077())):(rlsls1_f2843()?rlsls1_f2691():rlsls1_f3077())))):rlsls1_f3077()))-(0.0)))<rlsls1_v7308))):NIL)?((rlsls1_v2089=rlsls1_f2089()),(((rlsls1_v2089?(rlsls1_f835()?(rlsls1_f2597()?NIL:(rlsls1_f2587()?(rlsls1_f3232()?(rlsls1_f2585()?rlsls1_f803():(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f802()?rlsls1_f2374():rlsls1_f859()):(rlsls1_f1511()?(rlsls1_f800()?rlsls1_f2374():T):(rlsls1_f1421()?NIL:rlsls1_f797()))):(rlsls1_f878()?(rlsls1_f974()?(rlsls1_f793()?rlsls1_f2374():T):(rlsls1_f888()?NIL:rlsls1_f797())):NIL)):rlsls1_f776()):rlsls1_f762()):(rlsls1_f2449()?rlsls1_f776():NIL)):(rlsls1_f2513()?rlsls1_f762():NIL))):(rlsls1_f2362()?rlsls1_f803():(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?(rlsls1_f1409()?(rlsls1_f869()?(rlsls1_f755()?rlsls1_f2173():rlsls1_f859()):(rlsls1_f1511()?(rlsls1_f753()?rlsls1_f2173():T):(rlsls1_f1421()?NIL:rlsls1_f750()))):(rlsls1_f878()?(rlsls1_f974()?(rlsls1_f746()?rlsls1_f2173():T):(rlsls1_f888()?NIL:rlsls1_f750())):NIL)):rlsls1_f729()):rlsls1_f715()):(rlsls1_f2258()?rlsls1_f729():NIL)):(rlsls1_f2332()?rlsls1_f715():NIL)))):NIL)):rlsls1_f2163()):rlsls1_f857())?((rlsls1_v569=rlsls1_f569()),(rlsls1_v569?rlsls1_v569:(fabs(((rlsls1_v2089?(rlsls1_f835()?rlsls1_f572():rlsls1_f2094()):rlsls1_f840())-(0.0)))<rlsls1_v7308))):NIL)?coerce_double_to_double_or_symbol((rlsls1_v3282?rlsls1_f2664():(rlsls1_f3233()?(rlsls1_f3232()?(rlsls1_f3224()?(rlsls1_f3242()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f3070()?(rlsls1_f2666()?(rlsls1_v2089?(rlsls1_f835()?rlsls1_f560():(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2585()?rlsls1_f551():(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v2141=rlsls1_f2141()),((rlsls1_v2662>rlsls1_v2141)?rlsls1_v2662:rlsls1_v2141)):rlsls1_f545()):rlsls1_f539()):(rlsls1_f2449()?rlsls1_f545():rlsls1_f2664())):(rlsls1_f2513()?rlsls1_f539():rlsls1_f2664()))):rlsls1_f2664()))):rlsls1_f515()):(rlsls1_f3150()?(rlsls1_f3085()?(rlsls1_v2089?(rlsls1_f835()?rlsls1_f512():(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2585()?rlsls1_f503():(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v2141=rlsls1_f2141()),((rlsls1_v3139>rlsls1_v2141)?rlsls1_v3139:rlsls1_v2141)):rlsls1_f497()):rlsls1_f491()):(rlsls1_f2449()?rlsls1_f497():rlsls1_f2664())):(rlsls1_f2513()?rlsls1_f491():rlsls1_f2664()))):rlsls1_f2664()))):rlsls1_f467()):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):(rlsls1_f3052()?(rlsls1_f3042()?(rlsls1_f2968()?(rlsls1_f2895()?(rlsls1_v2089?(rlsls1_f835()?((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v572=rlsls1_f572()),((rlsls1_v2650>rlsls1_v572)?rlsls1_v2650:rlsls1_v572)):(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2585()?(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v2153=rlsls1_f2153()),((rlsls1_v2650>rlsls1_v2153)?rlsls1_v2650:rlsls1_v2153)):(rlsls1_f2580()?(rlsls1_f2549()?((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v2578=rlsls1_f2578()),((rlsls1_v2650>rlsls1_v2578)?rlsls1_v2650:rlsls1_v2578)):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v2141=rlsls1_f2141()),((rlsls1_v2650>rlsls1_v2141)?rlsls1_v2650:rlsls1_v2141)):rlsls1_f440()):rlsls1_f434()):(rlsls1_f2449()?rlsls1_f440():rlsls1_f2664())):(rlsls1_f2513()?rlsls1_f434():rlsls1_f2664()))):rlsls1_f2664()))):(rlsls1_f1409()?(rlsls1_f869()?((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v845=rlsls1_f845()),((rlsls1_v2650>rlsls1_v845)?rlsls1_v2650:rlsls1_v845)):(rlsls1_f1511()?((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2650>rlsls1_v1455)?rlsls1_v2650:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f419()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2650=rlsls1_f2650()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2650>rlsls1_v922)?rlsls1_v2650:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f419())):rlsls1_f2664()))):rlsls1_f357()):rlsls1_f303()):(rlsls1_f2968()?rlsls1_f357():rlsls1_f2664())):(rlsls1_f3042()?rlsls1_f303():rlsls1_f2664()))):(rlsls1_f2876()?(rlsls1_f3242()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f3070()?(rlsls1_f2666()?(rlsls1_v2089?(rlsls1_f835()?rlsls1_f560():(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2362()?rlsls1_f551():(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?((rlsls1_v2662=rlsls1_f2662()),(rlsls1_v2127=rlsls1_f2127()),((rlsls1_v2662>rlsls1_v2127)?rlsls1_v2662:rlsls1_v2127)):rlsls1_f291()):rlsls1_f285()):(rlsls1_f2258()?rlsls1_f291():rlsls1_f2664())):(rlsls1_f2332()?rlsls1_f285():rlsls1_f2664()))):rlsls1_f2664()))):rlsls1_f515()):(rlsls1_f3150()?(rlsls1_f3085()?(rlsls1_v2089?(rlsls1_f835()?rlsls1_f512():(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2362()?rlsls1_f503():(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?((rlsls1_v3139=rlsls1_f3139()),(rlsls1_v2127=rlsls1_f2127()),((rlsls1_v3139>rlsls1_v2127)?rlsls1_v3139:rlsls1_v2127)):rlsls1_f269()):rlsls1_f263()):(rlsls1_f2258()?rlsls1_f269():rlsls1_f2664())):(rlsls1_f2332()?rlsls1_f263():rlsls1_f2664()))):rlsls1_f2664()))):rlsls1_f467()):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):(rlsls1_f2857()?(rlsls1_f2843()?(rlsls1_f2769()?(rlsls1_f2686()?(rlsls1_v2089?(rlsls1_f835()?((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v572=rlsls1_f572()),((rlsls1_v2636>rlsls1_v572)?rlsls1_v2636:rlsls1_v572)):(rlsls1_f2597()?rlsls1_f2664():(rlsls1_f2587()?(rlsls1_f2362()?(rlsls1_f2594()?(rlsls1_f3198()?(rlsls1_f3185()?(rlsls1_f2538()?(rlsls1_f2155()?((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v2153=rlsls1_f2153()),((rlsls1_v2636>rlsls1_v2153)?rlsls1_v2636:rlsls1_v2153)):(rlsls1_f2580()?(rlsls1_f2549()?((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v2578=rlsls1_f2578()),((rlsls1_v2636>rlsls1_v2578)?rlsls1_v2636:rlsls1_v2578)):rlsls1_f2664()):rlsls1_f2664())):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):rlsls1_f2664()):(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v2127=rlsls1_f2127()),((rlsls1_v2636>rlsls1_v2127)?rlsls1_v2636:rlsls1_v2127)):rlsls1_f227()):rlsls1_f221()):(rlsls1_f2258()?rlsls1_f227():rlsls1_f2664())):(rlsls1_f2332()?rlsls1_f221():rlsls1_f2664()))):rlsls1_f2664()))):(rlsls1_f1409()?(rlsls1_f869()?((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v845=rlsls1_f845()),((rlsls1_v2636>rlsls1_v845)?rlsls1_v2636:rlsls1_v845)):(rlsls1_f1511()?((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v1455=rlsls1_f1455()),((rlsls1_v2636>rlsls1_v1455)?rlsls1_v2636:rlsls1_v1455)):(rlsls1_f1421()?rlsls1_f2664():rlsls1_f206()))):(rlsls1_f878()?(rlsls1_f974()?((rlsls1_v2636=rlsls1_f2636()),(rlsls1_v922=rlsls1_f922()),((rlsls1_v2636>rlsls1_v922)?rlsls1_v2636:rlsls1_v922)):(rlsls1_f888()?rlsls1_f2664():rlsls1_f206())):rlsls1_f2664()))):rlsls1_f144()):rlsls1_f90()):(rlsls1_f2769()?rlsls1_f144():rlsls1_f2664())):(rlsls1_f2843()?rlsls1_f90():rlsls1_f2664())))):rlsls1_f2664()))):(rlsls1_v3282?coerce_symbol_to_double_or_symbol(NIL):(rlsls1_f3233()?(rlsls1_f3232()?(rlsls1_f3224()?rlsls1_f73():(rlsls1_f3052()?(rlsls1_f3042()?(rlsls1_f2968()?(rlsls1_f2895()?coerce_double_to_double_or_symbol(rlsls1_f2650()):rlsls1_f71()):rlsls1_f67()):(rlsls1_f2968()?rlsls1_f71():coerce_symbol_to_double_or_symbol(NIL))):(rlsls1_f3042()?rlsls1_f67():coerce_symbol_to_double_or_symbol(NIL)))):(rlsls1_f2876()?rlsls1_f73():(rlsls1_f2857()?(rlsls1_f2843()?(rlsls1_f2769()?(rlsls1_f2686()?coerce_double_to_double_or_symbol(rlsls1_f2636()):rlsls1_f59()):rlsls1_f55()):(rlsls1_f2769()?rlsls1_f59():coerce_symbol_to_double_or_symbol(NIL))):(rlsls1_f2843()?rlsls1_f55():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))))):(rlsls1_f2089()?(rlsls1_f835()?coerce_double_to_double_or_symbol(rlsls1_f572()):(rlsls1_f2597()?coerce_symbol_to_double_or_symbol(NIL):(rlsls1_f2587()?(rlsls1_f3232()?(rlsls1_f2585()?rlsls1_f37():(rlsls1_f2523()?(rlsls1_f2513()?(rlsls1_f2449()?(rlsls1_f2376()?coerce_double_to_double_or_symbol(rlsls1_f2141()):rlsls1_f35()):rlsls1_f31()):(rlsls1_f2449()?rlsls1_f35():coerce_symbol_to_double_or_symbol(NIL))):(rlsls1_f2513()?rlsls1_f31():coerce_symbol_to_double_or_symbol(NIL)))):(rlsls1_f2362()?rlsls1_f37():(rlsls1_f2346()?(rlsls1_f2332()?(rlsls1_f2258()?(rlsls1_f2175()?coerce_double_to_double_or_symbol(rlsls1_f2127()):rlsls1_f23()):rlsls1_f19()):(rlsls1_f2258()?rlsls1_f23():coerce_symbol_to_double_or_symbol(NIL))):(rlsls1_f2332()?rlsls1_f19():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)))):(rlsls1_f1409()?(rlsls1_f869()?coerce_double_to_double_or_symbol(rlsls1_f845()):(rlsls1_f1511()?coerce_double_to_double_or_symbol(rlsls1_f1455()):coerce_symbol_to_double_or_symbol((rlsls1_f1421()?NIL:rlsls1_f1419())))):(rlsls1_f878()?(rlsls1_f974()?coerce_double_to_double_or_symbol(rlsls1_f922()):coerce_symbol_to_double_or_symbol((rlsls1_f888()?NIL:rlsls1_f1419()))):coerce_symbol_to_double_or_symbol(NIL)))))); return;}
