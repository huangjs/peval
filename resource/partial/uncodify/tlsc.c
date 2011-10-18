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
double tlsc_v4780;
double tlsc_v4778;
double tlsc_v4776;
double tlsc_v4774;
double tlsc_v4772;
double tlsc_v4770;
double tlsc_v4768;
double tlsc_v4766;
double tlsc_v4764;
double tlsc_v4723;
double tlsc_v2075;
double tlsc_v2074;
double tlsc_v2048;
double tlsc_v2047;
double tlsc_v4760;
double tlsc_v4758;
double tlsc_v4755;
double tlsc_v4753;
double tlsc_v4752;
double tlsc_v2071;
double tlsc_v2069;
double tlsc_v2068;
double tlsc_v2067;
double tlsc_v2066;
int tlsc_v2064;
int tlsc_p816;
double tlsc_m816;
int tlsc_p1424;
double tlsc_m1424;
int tlsc_p1413;
double tlsc_m1413;
int tlsc_p3944;
double tlsc_m3944;
int tlsc_p3877;
int tlsc_m3877;
int tlsc_p3893;
double tlsc_m3893;
int tlsc_p3937;
double tlsc_m3937;
double tlsc_v3944;
int tlsc_p3934;
double tlsc_m3934;
int tlsc_p3943;
double tlsc_m3943;
int tlsc_p3942;
double tlsc_m3942;
int tlsc_p3870;
int tlsc_m3870;
int tlsc_p3866;
double tlsc_m3866;
double tlsc_v3942;
int tlsc_p3875;
double tlsc_m3875;
int tlsc_p3832;
double tlsc_m3832;
double tlsc_v3832;
int tlsc_p3823;
double tlsc_m3823;
int tlsc_p3892;
double tlsc_m3892;
int tlsc_p3891;
double tlsc_m3891;
int tlsc_p3898;
double tlsc_m3898;
int tlsc_p3317;
double tlsc_m3317;
int tlsc_p3092;
double tlsc_m3092;
int tlsc_p3090;
int tlsc_m3090;
int tlsc_p1043;
double tlsc_m1043;
int tlsc_p1040;
double tlsc_m1040;
int tlsc_p1036;
double tlsc_m1036;
int tlsc_p3088;
double tlsc_m3088;
int tlsc_p3101;
double tlsc_m3101;
double tlsc_v3101;
int tlsc_p3100;
double tlsc_m3100;
int tlsc_p3256;
double tlsc_m3256;
int tlsc_p3248;
double tlsc_m3248;
int tlsc_p3246;
int tlsc_m3246;
int tlsc_p3342;
double tlsc_m3342;
int tlsc_p977;
double tlsc_m977;
int tlsc_p971;
double tlsc_m971;
double tlsc_v3342;
int tlsc_p3341;
double tlsc_m3341;
int tlsc_p3354;
double tlsc_m3354;
int tlsc_p3936;
double tlsc_m3936;
int tlsc_p3935;
double tlsc_m3935;
int tlsc_p3860;
double tlsc_m3860;
int tlsc_p3859;
double tlsc_m3859;
int tlsc_p3334;
double tlsc_m3334;
int tlsc_p3857;
double tlsc_m3857;
int tlsc_p3930;
double tlsc_m3930;
int tlsc_p3928;
double tlsc_m3928;
int tlsc_p3939;
double tlsc_m3939;
int tlsc_p3358;
double tlsc_m3358;
int tlsc_p1123;
int tlsc_m1123;
int tlsc_p3858;
double tlsc_m3858;
int tlsc_p3837;
double tlsc_m3837;
int tlsc_p3606;
double tlsc_m3606;
int tlsc_p3604;
int tlsc_m3604;
int tlsc_p1359;
double tlsc_m1359;
int tlsc_p1356;
double tlsc_m1356;
int tlsc_p1352;
double tlsc_m1352;
int tlsc_p3602;
double tlsc_m3602;
int tlsc_p3615;
double tlsc_m3615;
double tlsc_v3615;
int tlsc_p3614;
double tlsc_m3614;
int tlsc_p3772;
double tlsc_m3772;
int tlsc_p3764;
double tlsc_m3764;
int tlsc_p3762;
int tlsc_m3762;
int tlsc_p3878;
double tlsc_m3878;
int tlsc_p1293;
double tlsc_m1293;
int tlsc_p1287;
double tlsc_m1287;
double tlsc_v3878;
int tlsc_p3876;
double tlsc_m3876;
int tlsc_p3890;
double tlsc_m3890;
int tlsc_p3897;
double tlsc_m3897;
int tlsc_p1447;
int tlsc_m1447;
int tlsc_p3938;
double tlsc_m3938;
int tlsc_p3864;
double tlsc_m3864;
int tlsc_p3332;
double tlsc_m3332;
int tlsc_p1110;
int tlsc_m1110;
int tlsc_p3862;
double tlsc_m3862;
int tlsc_p3324;
double tlsc_m3324;
int tlsc_p3171;
double tlsc_m3171;
int tlsc_p3275;
double tlsc_m3275;
int tlsc_p3323;
double tlsc_m3323;
int tlsc_p3169;
double tlsc_m3169;
int tlsc_p3272;
double tlsc_m3272;
int tlsc_p1108;
int tlsc_m1108;
int tlsc_p3844;
double tlsc_m3844;
int tlsc_p3687;
double tlsc_m3687;
int tlsc_p3791;
double tlsc_m3791;
int tlsc_p1438;
int tlsc_m1438;
int tlsc_p1109;
int tlsc_m1109;
int tlsc_v1108;
int tlsc_p1105;
int tlsc_m1105;
int tlsc_p1100;
int tlsc_m1100;
double tlsc_v3171;
double tlsc_v3169;
int tlsc_p1104;
double tlsc_m1104;
int tlsc_p1101;
int tlsc_m1101;
int tlsc_p1375;
int tlsc_m1375;
int tlsc_p3855;
double tlsc_m3855;
int tlsc_p3843;
double tlsc_m3843;
int tlsc_p3685;
double tlsc_m3685;
double tlsc_v3687;
double tlsc_v3685;
int tlsc_p1423;
double tlsc_m1423;
int tlsc_p1420;
int tlsc_m1420;
int tlsc_p3788;
double tlsc_m3788;
int tlsc_p1429;
int tlsc_m1429;
int tlsc_v1429;
int tlsc_p1426;
int tlsc_m1426;
int tlsc_p1431;
int tlsc_m1431;
int tlsc_p1430;
int tlsc_m1430;
int tlsc_p1419;
int tlsc_m1419;
int tlsc_p3932;
double tlsc_m3932;
int tlsc_p3369;
double tlsc_m3369;
int tlsc_p3367;
double tlsc_m3367;
int tlsc_p1459;
int tlsc_m1459;
int tlsc_p3911;
double tlsc_m3911;
int tlsc_p3909;
double tlsc_m3909;
int tlsc_p1655;
double tlsc_m1655;
int tlsc_p1653;
double tlsc_m1653;
int tlsc_p1652;
double tlsc_m1652;
int tlsc_p1566;
double tlsc_m1566;
int tlsc_p1651;
double tlsc_m1651;
int tlsc_p1594;
double tlsc_m1594;
int tlsc_p1650;
double tlsc_m1650;
int tlsc_p1648;
int tlsc_m1648;
int tlsc_p1646;
double tlsc_m1646;
int tlsc_p1645;
double tlsc_m1645;
int tlsc_p1569;
double tlsc_m1569;
int tlsc_p1563;
int tlsc_m1563;
int tlsc_p1644;
double tlsc_m1644;
int tlsc_p1597;
double tlsc_m1597;
int tlsc_p1591;
int tlsc_m1591;
int tlsc_p1638;
double tlsc_m1638;
int tlsc_p1641;
int tlsc_m1641;
int tlsc_p1693;
double tlsc_m1693;
int tlsc_p1099;
double tlsc_m1099;
int tlsc_p1098;
int tlsc_m1098;
int tlsc_p1418;
double tlsc_m1418;
int tlsc_p1417;
int tlsc_m1417;
int tlsc_p1677;
double tlsc_m1677;
int tlsc_p1097;
double tlsc_m1097;
int tlsc_p1089;
double tlsc_m1089;
int tlsc_p1096;
int tlsc_m1096;
int tlsc_p1082;
double tlsc_m1082;
int tlsc_p1094;
double tlsc_m1094;
int tlsc_p1088;
double tlsc_m1088;
int tlsc_p1072;
double tlsc_m1072;
int tlsc_p1081;
double tlsc_m1081;
int tlsc_p1067;
int tlsc_m1067;
int tlsc_v1101;
int tlsc_v1100;
double tlsc_v1072;
int tlsc_p1059;
int tlsc_m1059;
int tlsc_p814;
double tlsc_m814;
int tlsc_p786;
int tlsc_m786;
int tlsc_p31;
double_or_symbol tlsc_m31;
int tlsc_p1058;
int tlsc_m1058;
int tlsc_v1058;
int tlsc_p1057;
int tlsc_m1057;
int tlsc_p1416;
double tlsc_m1416;
int tlsc_p1406;
double tlsc_m1406;
int tlsc_p1415;
int tlsc_m1415;
int tlsc_p1399;
double tlsc_m1399;
int tlsc_p1411;
double tlsc_m1411;
int tlsc_p1405;
double tlsc_m1405;
int tlsc_p1389;
double tlsc_m1389;
int tlsc_p1398;
double tlsc_m1398;
int tlsc_p1384;
int tlsc_m1384;
int tlsc_v1420;
int tlsc_v1419;
double tlsc_v1389;
int tlsc_p1376;
int tlsc_m1376;
int tlsc_p815;
double tlsc_m815;
int tlsc_p813;
int tlsc_m813;
int tlsc_p811;
int tlsc_m811;
int tlsc_p61;
double_or_symbol tlsc_m61;
int tlsc_p1374;
int tlsc_m1374;
int tlsc_v1374;
int tlsc_p1373;
int tlsc_m1373;
int tlsc_p4236;
double tlsc_m4236;
int tlsc_p4234;
double tlsc_m4234;
int tlsc_p4227;
double tlsc_m4227;
int tlsc_p4225;
double tlsc_m4225;
int tlsc_p1853;
double tlsc_m1853;
double tlsc_v3369;
double tlsc_v3367;
int tlsc_p1131;
int tlsc_m1131;
int tlsc_v1058;
int tlsc_p804;
int tlsc_m804;
int tlsc_v1058;
int tlsc_p780;
int tlsc_m780;
int tlsc_p549;
double tlsc_m549;
double tlsc_v1423;
double tlsc_v1104;
int tlsc_p527;
double tlsc_m527;
int tlsc_v1058;
int tlsc_p25;
double_or_symbol tlsc_m25;
int tlsc_v1131;
double tlsc_v3354;
int tlsc_p1117;
int tlsc_m1117;
int tlsc_v1058;
int tlsc_p1053;
int tlsc_m1053;
double tlsc_v3911;
double tlsc_v3909;
int tlsc_p1455;
int tlsc_m1455;
int tlsc_v1374;
int tlsc_p55;
double_or_symbol tlsc_m55;
int tlsc_v1455;
double tlsc_v3890;
int tlsc_p1441;
int tlsc_m1441;
int tlsc_v1374;
int tlsc_p1369;
int tlsc_m1369;
int tlsc_p4367;
double tlsc_m4367;
int tlsc_p3339;
double tlsc_m3339;
int tlsc_p3338;
int tlsc_m3338;
int tlsc_p3319;
double tlsc_m3319;
int tlsc_p3315;
double tlsc_m3315;
int tlsc_p3043;
int tlsc_m3043;
int tlsc_p1011;
double tlsc_m1011;
int tlsc_p3040;
double tlsc_m3040;
int tlsc_p1006;
double tlsc_m1006;
int tlsc_p1009;
double tlsc_m1009;
int tlsc_p998;
double tlsc_m998;
int tlsc_p1005;
double tlsc_m1005;
int tlsc_p993;
int tlsc_m993;
int tlsc_p3052;
double tlsc_m3052;
double tlsc_v3052;
int tlsc_p3049;
double tlsc_m3049;
int tlsc_p797;
int tlsc_m797;
int tlsc_p774;
int tlsc_m774;
int tlsc_p1012;
int tlsc_m1012;
int tlsc_v1012;
double tlsc_v998;
int tlsc_p986;
int tlsc_m986;
int tlsc_p795;
int tlsc_m795;
int tlsc_p772;
int tlsc_m772;
int tlsc_p544;
double tlsc_m544;
int tlsc_p522;
double tlsc_m522;
int tlsc_v986;
int tlsc_p21;
double_or_symbol tlsc_m21;
int tlsc_v986;
int tlsc_p985;
int tlsc_m985;
int tlsc_p3233;
double tlsc_m3233;
int tlsc_p1049;
int tlsc_m1049;
int tlsc_v1049;
int tlsc_p1047;
int tlsc_m1047;
int tlsc_p715;
int tlsc_m715;
int tlsc_p3316;
double tlsc_m3316;
int tlsc_p3091;
int tlsc_m3091;
int tlsc_p1042;
double tlsc_m1042;
int tlsc_p3086;
double tlsc_m3086;
int tlsc_p1035;
double tlsc_m1035;
int tlsc_p1039;
double tlsc_m1039;
int tlsc_p1027;
double tlsc_m1027;
int tlsc_p1034;
double tlsc_m1034;
int tlsc_p1022;
int tlsc_m1022;
int tlsc_p3103;
double tlsc_m3103;
double tlsc_v3103;
int tlsc_p3098;
double tlsc_m3098;
int tlsc_p800;
int tlsc_m800;
int tlsc_p799;
int tlsc_m799;
int tlsc_p547;
double tlsc_m547;
int tlsc_p777;
int tlsc_m777;
int tlsc_p776;
int tlsc_m776;
int tlsc_p525;
double tlsc_m525;
double tlsc_v3098;
double tlsc_v3049;
int tlsc_p803;
double tlsc_m803;
int tlsc_p802;
int tlsc_m802;
int tlsc_p779;
int tlsc_m779;
int tlsc_p1044;
int tlsc_m1044;
int tlsc_v1044;
double tlsc_v1027;
int tlsc_p1015;
int tlsc_m1015;
int tlsc_p24;
double_or_symbol tlsc_m24;
int tlsc_p3251;
double tlsc_m3251;
int tlsc_p1052;
int tlsc_m1052;
int tlsc_v1052;
int tlsc_p1050;
int tlsc_m1050;
int tlsc_p3830;
double tlsc_m3830;
double tlsc_v977;
int tlsc_p974;
double tlsc_m974;
int tlsc_p973;
int tlsc_m973;
int tlsc_p969;
double tlsc_m969;
int tlsc_p944;
double tlsc_m944;
int tlsc_p865;
int tlsc_m865;
int tlsc_p873;
double tlsc_m873;
int tlsc_p932;
double tlsc_m932;
int tlsc_p943;
double tlsc_m943;
int tlsc_p941;
double tlsc_m941;
int tlsc_p866;
int tlsc_m866;
int tlsc_p863;
double tlsc_m863;
int tlsc_p858;
double tlsc_m858;
int tlsc_p851;
double tlsc_m851;
int tlsc_p857;
double tlsc_m857;
int tlsc_p841;
double tlsc_m841;
int tlsc_p850;
double tlsc_m850;
int tlsc_p836;
int tlsc_m836;
int tlsc_p875;
double tlsc_m875;
double tlsc_v875;
double tlsc_v873;
int tlsc_p870;
double tlsc_m870;
int tlsc_p675;
int tlsc_m675;
int tlsc_p659;
int tlsc_m659;
int tlsc_p867;
int tlsc_m867;
int tlsc_v867;
double tlsc_v841;
int tlsc_p829;
int tlsc_m829;
int tlsc_p673;
int tlsc_m673;
int tlsc_p657;
int tlsc_m657;
int tlsc_p436;
double tlsc_m436;
int tlsc_p423;
double tlsc_m423;
int tlsc_v829;
int tlsc_p11;
double_or_symbol tlsc_m11;
int tlsc_v829;
int tlsc_p828;
int tlsc_m828;
int tlsc_p935;
double tlsc_m935;
int tlsc_p929;
int tlsc_m929;
int tlsc_v929;
int tlsc_p923;
int tlsc_m923;
int tlsc_p598;
int tlsc_m598;
int tlsc_p967;
double tlsc_m967;
int tlsc_p912;
int tlsc_m912;
int tlsc_p920;
double tlsc_m920;
int tlsc_p955;
double tlsc_m955;
int tlsc_p966;
double tlsc_m966;
int tlsc_p964;
double tlsc_m964;
int tlsc_p913;
int tlsc_m913;
int tlsc_p910;
double tlsc_m910;
int tlsc_p905;
double tlsc_m905;
int tlsc_p898;
double tlsc_m898;
int tlsc_p904;
double tlsc_m904;
int tlsc_p888;
double tlsc_m888;
int tlsc_p897;
double tlsc_m897;
int tlsc_p883;
int tlsc_m883;
int tlsc_p922;
double tlsc_m922;
double tlsc_v922;
double tlsc_v920;
int tlsc_p917;
double tlsc_m917;
int tlsc_p678;
int tlsc_m678;
int tlsc_p677;
int tlsc_m677;
int tlsc_p439;
double tlsc_m439;
int tlsc_p662;
int tlsc_m662;
int tlsc_p661;
int tlsc_m661;
int tlsc_p426;
double tlsc_m426;
double tlsc_v917;
double tlsc_v870;
int tlsc_p681;
double tlsc_m681;
int tlsc_p680;
int tlsc_m680;
int tlsc_p664;
int tlsc_m664;
int tlsc_p914;
int tlsc_m914;
int tlsc_v914;
double tlsc_v888;
int tlsc_p876;
int tlsc_m876;
int tlsc_p14;
double_or_symbol tlsc_m14;
int tlsc_p958;
double tlsc_m958;
int tlsc_p952;
int tlsc_m952;
int tlsc_v952;
int tlsc_p946;
int tlsc_m946;
int tlsc_v1015;
int tlsc_v1015;
int tlsc_v876;
int tlsc_v876;
int tlsc_p819;
int tlsc_m819;
int tlsc_v819;
int tlsc_p818;
int tlsc_m818;
double tlsc_v1293;
int tlsc_p1290;
double tlsc_m1290;
int tlsc_p1289;
int tlsc_m1289;
int tlsc_p1285;
double tlsc_m1285;
int tlsc_p1260;
double tlsc_m1260;
int tlsc_p1181;
int tlsc_m1181;
int tlsc_p1189;
double tlsc_m1189;
int tlsc_p1248;
double tlsc_m1248;
int tlsc_p1259;
double tlsc_m1259;
int tlsc_p1257;
double tlsc_m1257;
int tlsc_p1182;
int tlsc_m1182;
int tlsc_p1179;
double tlsc_m1179;
int tlsc_p1174;
double tlsc_m1174;
int tlsc_p1167;
double tlsc_m1167;
int tlsc_p1173;
double tlsc_m1173;
int tlsc_p1157;
double tlsc_m1157;
int tlsc_p1166;
double tlsc_m1166;
int tlsc_p1152;
int tlsc_m1152;
int tlsc_p1191;
double tlsc_m1191;
double tlsc_v1191;
double tlsc_v1189;
int tlsc_p1186;
double tlsc_m1186;
int tlsc_p582;
int tlsc_m582;
double tlsc_v1186;
double tlsc_v917;
int tlsc_p353;
double tlsc_m353;
double tlsc_v1186;
double tlsc_v870;
int tlsc_p349;
double tlsc_m349;
int tlsc_p592;
int tlsc_m592;
int tlsc_p590;
int tlsc_m590;
int tlsc_p1183;
int tlsc_m1183;
int tlsc_v1183;
double tlsc_v1157;
int tlsc_p1145;
int tlsc_m1145;
int tlsc_v1058;
int tlsc_p573;
int tlsc_m573;
int tlsc_p340;
double tlsc_m340;
int tlsc_v1145;
int tlsc_p41;
double_or_symbol tlsc_m41;
int tlsc_v1145;
int tlsc_p1144;
int tlsc_m1144;
int tlsc_p1251;
double tlsc_m1251;
int tlsc_p1245;
int tlsc_m1245;
int tlsc_v1245;
int tlsc_p1239;
int tlsc_m1239;
int tlsc_p1283;
double tlsc_m1283;
int tlsc_p1228;
int tlsc_m1228;
int tlsc_p1236;
double tlsc_m1236;
int tlsc_p1271;
double tlsc_m1271;
int tlsc_p1282;
double tlsc_m1282;
int tlsc_p1280;
double tlsc_m1280;
int tlsc_p1229;
int tlsc_m1229;
int tlsc_p1226;
double tlsc_m1226;
int tlsc_p1221;
double tlsc_m1221;
int tlsc_p1214;
double tlsc_m1214;
int tlsc_p1220;
double tlsc_m1220;
int tlsc_p1204;
double tlsc_m1204;
int tlsc_p1213;
double tlsc_m1213;
int tlsc_p1199;
int tlsc_m1199;
int tlsc_p1238;
double tlsc_m1238;
double tlsc_v1238;
double tlsc_v1236;
int tlsc_p1233;
double tlsc_m1233;
int tlsc_p603;
int tlsc_m603;
double tlsc_v1233;
double tlsc_v917;
int tlsc_p377;
double tlsc_m377;
double tlsc_v1233;
double tlsc_v870;
int tlsc_p373;
double tlsc_m373;
int tlsc_p613;
int tlsc_m613;
int tlsc_p611;
int tlsc_m611;
int tlsc_v1058;
int tlsc_p594;
int tlsc_m594;
int tlsc_p365;
double tlsc_m365;
double tlsc_v1233;
double tlsc_v1186;
int tlsc_p640;
double tlsc_m640;
int tlsc_p629;
int tlsc_m629;
int tlsc_p627;
int tlsc_m627;
int tlsc_p626;
int tlsc_m626;
int tlsc_p399;
double tlsc_m399;
int tlsc_p624;
int tlsc_m624;
int tlsc_p622;
int tlsc_m622;
int tlsc_p396;
double tlsc_m396;
int tlsc_p639;
int tlsc_m639;
int tlsc_p637;
int tlsc_m637;
int tlsc_p1230;
int tlsc_m1230;
int tlsc_v1230;
double tlsc_v1204;
int tlsc_p1192;
int tlsc_m1192;
int tlsc_p44;
double_or_symbol tlsc_m44;
int tlsc_p1274;
double tlsc_m1274;
int tlsc_p1268;
int tlsc_m1268;
int tlsc_v1268;
int tlsc_p1262;
int tlsc_m1262;
int tlsc_p3873;
double tlsc_m3873;
int tlsc_p3872;
int tlsc_m3872;
int tlsc_p3839;
double tlsc_m3839;
int tlsc_p3835;
double tlsc_m3835;
int tlsc_p3557;
int tlsc_m3557;
int tlsc_p1327;
double tlsc_m1327;
int tlsc_p3554;
double tlsc_m3554;
int tlsc_p1322;
double tlsc_m1322;
int tlsc_p1325;
double tlsc_m1325;
int tlsc_p1314;
double tlsc_m1314;
int tlsc_p1321;
double tlsc_m1321;
int tlsc_p1309;
int tlsc_m1309;
int tlsc_p3566;
double tlsc_m3566;
double tlsc_v3566;
int tlsc_p3563;
double tlsc_m3563;
int tlsc_p709;
int tlsc_m709;
int tlsc_p707;
int tlsc_m707;
int tlsc_p699;
int tlsc_m699;
double tlsc_v3563;
double tlsc_v3098;
int tlsc_p2703;
double tlsc_m2703;
double tlsc_v3563;
double tlsc_v3049;
int tlsc_p456;
double tlsc_m456;
int tlsc_p1328;
int tlsc_m1328;
int tlsc_v1328;
double tlsc_v1314;
int tlsc_p1302;
int tlsc_m1302;
int tlsc_v1058;
int tlsc_p690;
int tlsc_m690;
int tlsc_p447;
double tlsc_m447;
int tlsc_v1302;
int tlsc_p51;
double_or_symbol tlsc_m51;
int tlsc_v1302;
int tlsc_p1301;
int tlsc_m1301;
int tlsc_p3749;
double tlsc_m3749;
int tlsc_p1365;
int tlsc_m1365;
int tlsc_v1365;
int tlsc_p1363;
int tlsc_m1363;
int tlsc_p3836;
double tlsc_m3836;
int tlsc_p3605;
int tlsc_m3605;
int tlsc_p1358;
double tlsc_m1358;
int tlsc_p3600;
double tlsc_m3600;
int tlsc_p1351;
double tlsc_m1351;
int tlsc_p1355;
double tlsc_m1355;
int tlsc_p1343;
double tlsc_m1343;
int tlsc_p1350;
double tlsc_m1350;
int tlsc_p1338;
int tlsc_m1338;
int tlsc_p3617;
double tlsc_m3617;
double tlsc_v3617;
int tlsc_p3612;
double tlsc_m3612;
int tlsc_p730;
int tlsc_m730;
int tlsc_p728;
int tlsc_m728;
int tlsc_p720;
int tlsc_m720;
int tlsc_v1058;
int tlsc_p711;
int tlsc_m711;
double tlsc_v3612;
double tlsc_v3098;
int tlsc_p2730;
double tlsc_m2730;
double tlsc_v3612;
double tlsc_v3049;
int tlsc_p476;
double tlsc_m476;
int tlsc_p468;
double tlsc_m468;
double tlsc_v3612;
double tlsc_v3563;
int tlsc_p757;
double tlsc_m757;
int tlsc_p756;
int tlsc_m756;
int tlsc_p754;
int tlsc_m754;
int tlsc_p746;
int tlsc_m746;
int tlsc_p744;
int tlsc_m744;
int tlsc_p743;
int tlsc_m743;
int tlsc_p498;
double tlsc_m498;
int tlsc_p741;
int tlsc_m741;
int tlsc_p739;
int tlsc_m739;
int tlsc_p495;
double tlsc_m495;
int tlsc_p1360;
int tlsc_m1360;
int tlsc_v1360;
double tlsc_v1343;
int tlsc_p1331;
int tlsc_m1331;
int tlsc_p54;
double_or_symbol tlsc_m54;
int tlsc_p3767;
double tlsc_m3767;
int tlsc_p1368;
int tlsc_m1368;
int tlsc_v1368;
int tlsc_p1366;
int tlsc_m1366;
int tlsc_v1331;
int tlsc_v1331;
int tlsc_v1192;
int tlsc_v1192;
int tlsc_p1135;
int tlsc_m1135;
int tlsc_p332;
double tlsc_m332;
int tlsc_p4385;
int tlsc_m4385;
int tlsc_p4390;
double tlsc_m4390;
int tlsc_p4388;
int tlsc_m4388;
int tlsc_p4383;
double tlsc_m4383;
int tlsc_p1881;
double tlsc_m1881;
int tlsc_p1897;
double tlsc_m1897;
int tlsc_p2000;
double tlsc_m2000;
int tlsc_p1971;
double tlsc_m1971;
int tlsc_p2036;
double tlsc_m2036;
int tlsc_v1563;
int tlsc_p1557;
int tlsc_m1557;
int tlsc_v1591;
int tlsc_p1585;
int tlsc_m1585;
int tlsc_v1557;
int tlsc_p1553;
int tlsc_m1553;
int tlsc_p1583;
int tlsc_m1583;
int tlsc_v1583;
int tlsc_p1554;
int tlsc_m1554;
int tlsc_p2055;
double tlsc_m2055;
int tlsc_p1624;
double tlsc_m1624;
int tlsc_p1637;
double tlsc_m1637;
int tlsc_p1622;
double tlsc_m1622;
int tlsc_p1634;
double tlsc_m1634;
int tlsc_p1616;
double tlsc_m1616;
int tlsc_p1612;
int tlsc_m1612;
int tlsc_p1632;
double tlsc_m1632;
int tlsc_p1550;
double tlsc_m1550;
int tlsc_p1542;
double tlsc_m1542;
int tlsc_p1548;
double tlsc_m1548;
int tlsc_p1539;
double tlsc_m1539;
int tlsc_p1536;
int tlsc_m1536;
int tlsc_p1629;
int tlsc_m1629;
int tlsc_p1611;
int tlsc_m1611;
int tlsc_p1551;
int tlsc_m1551;
int tlsc_v1629;
int tlsc_v1536;
double tlsc_v1550;
double tlsc_v1548;
double tlsc_v1645;
double tlsc_v1644;
double tlsc_v1652;
double tlsc_v1651;
int tlsc_p1504;
int tlsc_m1504;
int tlsc_v1611;
int tlsc_p1497;
int tlsc_m1497;
int tlsc_p1494;
int tlsc_m1494;
int tlsc_p1489;
double tlsc_m1489;
int tlsc_p1483;
double tlsc_m1483;
double tlsc_v1489;
double tlsc_v1483;
int tlsc_p1479;
double tlsc_m1479;
double tlsc_v1479;
double tlsc_v1233;
int tlsc_p129;
double tlsc_m129;
double tlsc_v1479;
double tlsc_v1186;
int tlsc_p125;
double tlsc_m125;
double tlsc_v1479;
double tlsc_v815;
double tlsc_v1479;
double tlsc_v1423;
int tlsc_p147;
double tlsc_m147;
double tlsc_v1479;
double tlsc_v3612;
int tlsc_p143;
double tlsc_m143;
double tlsc_v1479;
double tlsc_v3563;
int tlsc_p139;
double tlsc_m139;
double tlsc_v1479;
double tlsc_v917;
int tlsc_p88;
double tlsc_m88;
double tlsc_v1479;
double tlsc_v870;
int tlsc_p84;
double tlsc_m84;
double tlsc_v1479;
double tlsc_v814;
double tlsc_v1479;
double tlsc_v1104;
int tlsc_p106;
double tlsc_m106;
double tlsc_v1479;
double tlsc_v3098;
int tlsc_p102;
double tlsc_m102;
double tlsc_v1479;
double tlsc_v3049;
int tlsc_p98;
double tlsc_m98;
int tlsc_p1476;
int tlsc_m1476;
int tlsc_p1872;
double tlsc_m1872;
int tlsc_p1875;
double tlsc_m1875;
int tlsc_p1874;
int tlsc_m1874;
int tlsc_p1851;
double tlsc_m1851;
double tlsc_v1875;
int tlsc_p1861;
double tlsc_m1861;
int tlsc_p1871;
double tlsc_m1871;
int tlsc_p1869;
double tlsc_m1869;
int tlsc_p1763;
double tlsc_m1763;
int tlsc_p1756;
int tlsc_m1756;
int tlsc_p1762;
double tlsc_m1762;
int tlsc_p1831;
int tlsc_m1831;
int tlsc_p1829;
double tlsc_m1829;
int tlsc_p1850;
double tlsc_m1850;
int tlsc_p1849;
double tlsc_m1849;
int tlsc_p1819;
double tlsc_m1819;
int tlsc_p1817;
double tlsc_m1817;
int tlsc_p1860;
double tlsc_m1860;
int tlsc_p1827;
double tlsc_m1827;
int tlsc_p1825;
double tlsc_m1825;
int tlsc_p1805;
double tlsc_m1805;
int tlsc_p1822;
int tlsc_m1822;
int tlsc_p1811;
double tlsc_m1811;
int tlsc_p1803;
double tlsc_m1803;
double tlsc_v1805;
double tlsc_v1803;
int tlsc_p1793;
int tlsc_m1793;
int tlsc_p1807;
int tlsc_m1807;
int tlsc_p1806;
int tlsc_m1806;
int tlsc_p1858;
double tlsc_m1858;
int tlsc_p1845;
double tlsc_m1845;
int tlsc_p1839;
double tlsc_m1839;
double tlsc_v1845;
double tlsc_v1839;
int tlsc_p1832;
int tlsc_m1832;
int tlsc_p1702;
double tlsc_m1702;
int tlsc_p1686;
double tlsc_m1686;
int tlsc_p1767;
int tlsc_m1767;
int tlsc_p1789;
int tlsc_m1789;
double tlsc_v1869;
int tlsc_p1865;
double tlsc_m1865;
int tlsc_p1783;
double tlsc_m1783;
double tlsc_v1783;
int tlsc_p1740;
double tlsc_m1740;
int tlsc_p1868;
double tlsc_m1868;
int tlsc_p1774;
double tlsc_m1774;
int tlsc_p1667;
int tlsc_m1667;
int tlsc_p1867;
double tlsc_m1867;
int tlsc_p1786;
double tlsc_m1786;
int tlsc_p1739;
double tlsc_m1739;
double tlsc_v1867;
int tlsc_p1866;
double tlsc_m1866;
double tlsc_v1786;
int tlsc_p1779;
double tlsc_m1779;
int tlsc_p1737;
double tlsc_m1737;
int tlsc_p1735;
double tlsc_m1735;
int tlsc_p1734;
double tlsc_m1734;
int tlsc_p1732;
double tlsc_m1732;
double tlsc_v1732;
int tlsc_p1723;
int tlsc_m1723;
int tlsc_p1721;
double tlsc_m1721;
int tlsc_p1720;
double tlsc_m1720;
int tlsc_p1718;
double tlsc_m1718;
double tlsc_v1718;
int tlsc_p1709;
int tlsc_m1709;
int tlsc_p1778;
int tlsc_m1778;
int tlsc_p1863;
double tlsc_m1863;
int tlsc_p1766;
double tlsc_m1766;
int tlsc_p1752;
double tlsc_m1752;
double tlsc_v1752;
int tlsc_p1744;
int tlsc_m1744;
int tlsc_p1765;
double tlsc_m1765;
double tlsc_v1765;
int tlsc_p1754;
int tlsc_m1754;
int tlsc_p1862;
int tlsc_m1862;
int tlsc_p1776;
int tlsc_m1776;
int tlsc_p1706;
int tlsc_m1706;
int tlsc_v1706;
int tlsc_p1672;
double tlsc_m1672;
int tlsc_v1776;
double tlsc_v1672;
int tlsc_p1661;
int tlsc_m1661;
int tlsc_v1476;
int tlsc_p1474;
int tlsc_m1474;
int tlsc_p1472;
int tlsc_m1472;
int tlsc_v1472;
int tlsc_p1471;
int tlsc_m1471;
int tlsc_p2062;
double tlsc_m2062;
int tlsc_p2061;
double tlsc_m2061;
int tlsc_p1974;
double tlsc_m1974;
int tlsc_p1968;
int tlsc_m1968;
int tlsc_v1968;
int tlsc_p1962;
int tlsc_m1962;
int tlsc_p2060;
double tlsc_m2060;
int tlsc_p2003;
double tlsc_m2003;
int tlsc_p1997;
int tlsc_m1997;
int tlsc_v1997;
int tlsc_p1991;
int tlsc_m1991;
int tlsc_v1962;
int tlsc_p1958;
int tlsc_m1958;
int tlsc_p1988;
int tlsc_m1988;
int tlsc_v1988;
int tlsc_p1959;
int tlsc_m1959;
int tlsc_p2051;
double tlsc_m2051;
int tlsc_p2057;
int tlsc_m2057;
double tlsc_v2050;
double tlsc_v2044;
double tlsc_v2042;
int tlsc_v2039;
int tlsc_p2031;
double tlsc_m2031;
int tlsc_p2029;
double tlsc_m2029;
int tlsc_p1955;
double tlsc_m1955;
int tlsc_p1947;
double tlsc_m1947;
int tlsc_p2023;
double tlsc_m2023;
int tlsc_p1953;
double tlsc_m1953;
int tlsc_p1944;
double tlsc_m1944;
int tlsc_p1941;
int tlsc_m1941;
int tlsc_p2018;
int tlsc_m2018;
int tlsc_v2017;
int tlsc_p1956;
int tlsc_m1956;
int tlsc_v1941;
double tlsc_v1955;
double tlsc_v1953;
double tlsc_v2061;
double tlsc_v2060;
int tlsc_p1909;
int tlsc_m1909;
int tlsc_v1902;
int tlsc_p1899;
int tlsc_m1899;
int tlsc_p1892;
double tlsc_m1892;
int tlsc_p1886;
double tlsc_m1886;
double tlsc_v1892;
double tlsc_v1886;
int tlsc_p1880;
double tlsc_m1880;
double tlsc_v1880;
double tlsc_v1233;
int tlsc_p217;
double tlsc_m217;
double tlsc_v1880;
double tlsc_v1186;
int tlsc_p213;
double tlsc_m213;
double tlsc_v1880;
double tlsc_v815;
double tlsc_v1880;
double tlsc_v1423;
int tlsc_p235;
double tlsc_m235;
double tlsc_v1880;
double tlsc_v3612;
int tlsc_p231;
double tlsc_m231;
double tlsc_v1880;
double tlsc_v3563;
int tlsc_p227;
double tlsc_m227;
double tlsc_v1880;
double tlsc_v917;
int tlsc_p176;
double tlsc_m176;
double tlsc_v1880;
double tlsc_v870;
int tlsc_p172;
double tlsc_m172;
double tlsc_v1880;
double tlsc_v814;
double tlsc_v1880;
double tlsc_v1104;
int tlsc_p194;
double tlsc_m194;
double tlsc_v1880;
double tlsc_v3098;
int tlsc_p190;
double tlsc_m190;
double tlsc_v1880;
double tlsc_v3049;
int tlsc_p186;
double tlsc_m186;
int tlsc_p1470;
int tlsc_m1470;
int tlsc_p1877;
int tlsc_m1877;
int tlsc_v1877;
int tlsc_p1659;
int tlsc_m1659;
int tlsc_v1657;
int tlsc_p557;
double tlsc_m557;
double tlsc_v557;
double tlsc_v1233;
int tlsc_p302;
double tlsc_m302;
double tlsc_v557;
double tlsc_v1186;
int tlsc_p298;
double tlsc_m298;
double tlsc_v557;
double tlsc_v815;
double tlsc_v557;
double tlsc_v1423;
int tlsc_p320;
double tlsc_m320;
double tlsc_v557;
double tlsc_v3612;
int tlsc_p316;
double tlsc_m316;
double tlsc_v557;
double tlsc_v3563;
int tlsc_p312;
double tlsc_m312;
double tlsc_v557;
double tlsc_v917;
int tlsc_p261;
double tlsc_m261;
double tlsc_v557;
double tlsc_v870;
int tlsc_p257;
double tlsc_m257;
double tlsc_v557;
double tlsc_v814;
double tlsc_v557;
double tlsc_v1104;
int tlsc_p279;
double tlsc_m279;
double tlsc_v557;
double tlsc_v3098;
int tlsc_p275;
double tlsc_m275;
double tlsc_v557;
double tlsc_v3049;
int tlsc_p271;
double tlsc_m271;
int tlsc_v1135;
int tlsc_v1374;
int tlsc_v1058;
int tlsc_v1374;
int tlsc_v1058;
double tlsc_v557;
double tlsc_v332;
double tlsc_v557;
double tlsc_v757;
double tlsc_v557;
double tlsc_v640;
double tlsc_v557;
double tlsc_v803;
double tlsc_v557;
double tlsc_v681;
double tlsc_v1880;
double tlsc_v332;
double tlsc_v1880;
double tlsc_v757;
double tlsc_v1880;
double tlsc_v640;
double tlsc_v1880;
double tlsc_v803;
double tlsc_v1880;
double tlsc_v681;
double tlsc_v1479;
double tlsc_v332;
double tlsc_v1479;
double tlsc_v757;
double tlsc_v1479;
double tlsc_v640;
double tlsc_v1479;
double tlsc_v803;
double tlsc_v1479;
double tlsc_v681;
static double tlsc_f816(){if (tlsc_p816) return tlsc_m816; else {tlsc_p816=T;return tlsc_m816=error("Non-numeric argument to MIN");}}
static double tlsc_f1424(){if (tlsc_p1424) return tlsc_m1424; else {tlsc_p1424=T;return tlsc_m1424=error("No applicable method for DISTANCE with argument types (POINT (OR BOOLEAN POINT))");}}
static double tlsc_f1413(){if (tlsc_p1413) return tlsc_m1413; else {tlsc_p1413=T;return tlsc_m1413=error("Can't form tangent when points are the same");}}
static double tlsc_f3944(){if (tlsc_p3944) return tlsc_m3944; else {tlsc_p3944=T;return tlsc_m3944=sin(tlsc_v4764);}}
static int tlsc_f3877(){if (tlsc_p3877) return tlsc_m3877; else {tlsc_p3877=T;return tlsc_m3877=(tlsc_f3944()==0.0);}}
static double tlsc_f3893(){if (tlsc_p3893) return tlsc_m3893; else {tlsc_p3893=T;return tlsc_m3893=(tlsc_f3944()*tlsc_v4772);}}
static double tlsc_f3937(){if (tlsc_p3937) return tlsc_m3937; else {tlsc_p3937=T;return tlsc_m3937=(tlsc_f3944()*tlsc_v4770);}}
static double tlsc_f3934(){if (tlsc_p3934) return tlsc_m3934; else {tlsc_p3934=T;return tlsc_m3934=((tlsc_v3944=tlsc_f3944()),(tlsc_v3944*tlsc_v3944));}}
static double tlsc_f3943(){if (tlsc_p3943) return tlsc_m3943; else {tlsc_p3943=T;return tlsc_m3943=cos(tlsc_v4764);}}
static double tlsc_f3942(){if (tlsc_p3942) return tlsc_m3942; else {tlsc_p3942=T;return tlsc_m3942=(-tlsc_f3943());}}
static int tlsc_f3870(){if (tlsc_p3870) return tlsc_m3870; else {tlsc_p3870=T;return tlsc_m3870=(tlsc_f3942()>0.0);}}
static double tlsc_f3866(){if (tlsc_p3866) return tlsc_m3866; else {tlsc_p3866=T;return tlsc_m3866=(tlsc_f3870()?(-tlsc_f3944()):tlsc_f3944());}}
static double tlsc_f3875(){if (tlsc_p3875) return tlsc_m3875; else {tlsc_p3875=T;return tlsc_m3875=((tlsc_v3942=tlsc_f3942()),(tlsc_v3942*tlsc_v3942));}}
static double tlsc_f3832(){if (tlsc_p3832) return tlsc_m3832; else {tlsc_p3832=T;return tlsc_m3832=(tlsc_f3934()+tlsc_f3875());}}
static double tlsc_f3823(){if (tlsc_p3823) return tlsc_m3823; else {tlsc_p3823=T;return tlsc_m3823=((tlsc_v3832=tlsc_f3832()),(tlsc_v3832+tlsc_v3832));}}
static double tlsc_f3892(){if (tlsc_p3892) return tlsc_m3892; else {tlsc_p3892=T;return tlsc_m3892=(tlsc_f3942()*tlsc_v4770);}}
static double tlsc_f3891(){if (tlsc_p3891) return tlsc_m3891; else {tlsc_p3891=T;return tlsc_m3891=(tlsc_f3893()+tlsc_f3892());}}
static double tlsc_f3898(){if (tlsc_p3898) return tlsc_m3898; else {tlsc_p3898=T;return tlsc_m3898=((tlsc_f3944()*tlsc_v4776)+(tlsc_f3942()*tlsc_v4774));}}
static double tlsc_f3317(){if (tlsc_p3317) return tlsc_m3317; else {tlsc_p3317=T;return tlsc_m3317=(tlsc_f3898()/tlsc_f3942());}}
static double tlsc_f3092(){if (tlsc_p3092) return tlsc_m3092; else {tlsc_p3092=T;return tlsc_m3092=(tlsc_f3317()+tlsc_f3944());}}
static int tlsc_f3090(){if (tlsc_p3090) return tlsc_m3090; else {tlsc_p3090=T;return tlsc_m3090=(tlsc_v4770==tlsc_f3317());}}
static double tlsc_f1043(){if (tlsc_p1043) return tlsc_m1043; else {tlsc_p1043=T;return tlsc_m1043=(tlsc_f3090()?tlsc_f1413():(0.0));}}
static double tlsc_f1040(){if (tlsc_p1040) return tlsc_m1040; else {tlsc_p1040=T;return tlsc_m1040=(tlsc_f3090()?tlsc_f1413():(1.0));}}
static double tlsc_f1036(){if (tlsc_p1036) return tlsc_m1036; else {tlsc_p1036=T;return tlsc_m1036=(tlsc_f3090()?tlsc_f1413():tlsc_f3317());}}
static double tlsc_f3088(){if (tlsc_p3088) return tlsc_m3088; else {tlsc_p3088=T;return tlsc_m3088=(tlsc_f3317()-tlsc_v4770);}}
static double tlsc_f3101(){if (tlsc_p3101) return tlsc_m3101; else {tlsc_p3101=T;return tlsc_m3101=(tlsc_v4774-tlsc_f3317());}}
static double tlsc_f3100(){if (tlsc_p3100) return tlsc_m3100; else {tlsc_p3100=T;return tlsc_m3100=((tlsc_v3101=tlsc_f3101()),(tlsc_v3101*tlsc_v3101));}}
static double tlsc_f3256(){if (tlsc_p3256) return tlsc_m3256; else {tlsc_p3256=T;return tlsc_m3256=(tlsc_f3942()*tlsc_f3317());}}
static double tlsc_f3248(){if (tlsc_p3248) return tlsc_m3248; else {tlsc_p3248=T;return tlsc_m3248=(tlsc_f3317()-tlsc_v4774);}}
static int tlsc_f3246(){if (tlsc_p3246) return tlsc_m3246; else {tlsc_p3246=T;return tlsc_m3246=(fabs(tlsc_f3248())<tlsc_v4723);}}
static double tlsc_f3342(){if (tlsc_p3342) return tlsc_m3342; else {tlsc_p3342=T;return tlsc_m3342=(tlsc_f3898()-tlsc_f3893()-tlsc_f3892());}}
static double tlsc_f977(){if (tlsc_p977) return tlsc_m977; else {tlsc_p977=T;return tlsc_m977=((-2.0)*tlsc_f3942()*tlsc_f3342());}}
static double tlsc_f971(){if (tlsc_p971) return tlsc_m971; else {tlsc_p971=T;return tlsc_m971=((-tlsc_f977())/tlsc_f3823());}}
static double tlsc_f3341(){if (tlsc_p3341) return tlsc_m3341; else {tlsc_p3341=T;return tlsc_m3341=((tlsc_v3342=tlsc_f3342()),(tlsc_v3342*tlsc_v3342));}}
static double tlsc_f3354(){if (tlsc_p3354) return tlsc_m3354; else {tlsc_p3354=T;return tlsc_m3354=(tlsc_f3891()-tlsc_f3898());}}
static double tlsc_f3936(){if (tlsc_p3936) return tlsc_m3936; else {tlsc_p3936=T;return tlsc_m3936=(tlsc_f3942()*tlsc_v4772);}}
static double tlsc_f3935(){if (tlsc_p3935) return tlsc_m3935; else {tlsc_p3935=T;return tlsc_m3935=(tlsc_f3937()-tlsc_f3936());}}
static double tlsc_f3860(){if (tlsc_p3860) return tlsc_m3860; else {tlsc_p3860=T;return tlsc_m3860=(tlsc_f3870()?(tlsc_f3936()-tlsc_f3937()):tlsc_f3935());}}
static double tlsc_f3859(){if (tlsc_p3859) return tlsc_m3859; else {tlsc_p3859=T;return tlsc_m3859=(tlsc_f3942()*tlsc_f3860());}}
static double tlsc_f3334(){if (tlsc_p3334) return tlsc_m3334; else {tlsc_p3334=T;return tlsc_m3334=((tlsc_f3898()*tlsc_f3866())-tlsc_f3859());}}
static double tlsc_f3857(){if (tlsc_p3857) return tlsc_m3857; else {tlsc_p3857=T;return tlsc_m3857=(tlsc_f3944()*tlsc_f3860());}}
static double tlsc_f3930(){if (tlsc_p3930) return tlsc_m3930; else {tlsc_p3930=T;return tlsc_m3930=(tlsc_f3942()*tlsc_f3935());}}
static double tlsc_f3928(){if (tlsc_p3928) return tlsc_m3928; else {tlsc_p3928=T;return tlsc_m3928=(tlsc_f3944()*tlsc_f3935());}}
static double tlsc_f3939(){if (tlsc_p3939) return tlsc_m3939; else {tlsc_p3939=T;return tlsc_m3939=((tlsc_f3944()*tlsc_v4780)+(tlsc_f3942()*tlsc_v4778));}}
static double tlsc_f3358(){if (tlsc_p3358) return tlsc_m3358; else {tlsc_p3358=T;return tlsc_m3358=(tlsc_f3939()-tlsc_f3898());}}
static int tlsc_f1123(){if (tlsc_p1123) return tlsc_m1123; else {tlsc_p1123=T;return tlsc_m1123=(tlsc_f3358()>(0.0));}}
static double tlsc_f3858(){if (tlsc_p3858) return tlsc_m3858; else {tlsc_p3858=T;return tlsc_m3858=((tlsc_f3939()*tlsc_f3866())-tlsc_f3859());}}
static double tlsc_f3837(){if (tlsc_p3837) return tlsc_m3837; else {tlsc_p3837=T;return tlsc_m3837=(tlsc_f3939()/tlsc_f3942());}}
static double tlsc_f3606(){if (tlsc_p3606) return tlsc_m3606; else {tlsc_p3606=T;return tlsc_m3606=(tlsc_f3837()+tlsc_f3944());}}
static int tlsc_f3604(){if (tlsc_p3604) return tlsc_m3604; else {tlsc_p3604=T;return tlsc_m3604=(tlsc_v4770==tlsc_f3837());}}
static double tlsc_f1359(){if (tlsc_p1359) return tlsc_m1359; else {tlsc_p1359=T;return tlsc_m1359=(tlsc_f3604()?tlsc_f1413():(0.0));}}
static double tlsc_f1356(){if (tlsc_p1356) return tlsc_m1356; else {tlsc_p1356=T;return tlsc_m1356=(tlsc_f3604()?tlsc_f1413():(1.0));}}
static double tlsc_f1352(){if (tlsc_p1352) return tlsc_m1352; else {tlsc_p1352=T;return tlsc_m1352=(tlsc_f3604()?tlsc_f1413():tlsc_f3837());}}
static double tlsc_f3602(){if (tlsc_p3602) return tlsc_m3602; else {tlsc_p3602=T;return tlsc_m3602=(tlsc_f3837()-tlsc_v4770);}}
static double tlsc_f3615(){if (tlsc_p3615) return tlsc_m3615; else {tlsc_p3615=T;return tlsc_m3615=(tlsc_v4778-tlsc_f3837());}}
static double tlsc_f3614(){if (tlsc_p3614) return tlsc_m3614; else {tlsc_p3614=T;return tlsc_m3614=((tlsc_v3615=tlsc_f3615()),(tlsc_v3615*tlsc_v3615));}}
static double tlsc_f3772(){if (tlsc_p3772) return tlsc_m3772; else {tlsc_p3772=T;return tlsc_m3772=(tlsc_f3942()*tlsc_f3837());}}
static double tlsc_f3764(){if (tlsc_p3764) return tlsc_m3764; else {tlsc_p3764=T;return tlsc_m3764=(tlsc_f3837()-tlsc_v4778);}}
static int tlsc_f3762(){if (tlsc_p3762) return tlsc_m3762; else {tlsc_p3762=T;return tlsc_m3762=(fabs(tlsc_f3764())<tlsc_v4723);}}
static double tlsc_f3878(){if (tlsc_p3878) return tlsc_m3878; else {tlsc_p3878=T;return tlsc_m3878=(tlsc_f3939()-tlsc_f3893()-tlsc_f3892());}}
static double tlsc_f1293(){if (tlsc_p1293) return tlsc_m1293; else {tlsc_p1293=T;return tlsc_m1293=((-2.0)*tlsc_f3942()*tlsc_f3878());}}
static double tlsc_f1287(){if (tlsc_p1287) return tlsc_m1287; else {tlsc_p1287=T;return tlsc_m1287=((-tlsc_f1293())/tlsc_f3823());}}
static double tlsc_f3876(){if (tlsc_p3876) return tlsc_m3876; else {tlsc_p3876=T;return tlsc_m3876=((tlsc_v3878=tlsc_f3878()),(tlsc_v3878*tlsc_v3878));}}
static double tlsc_f3890(){if (tlsc_p3890) return tlsc_m3890; else {tlsc_p3890=T;return tlsc_m3890=(tlsc_f3891()-tlsc_f3939());}}
static double tlsc_f3897(){if (tlsc_p3897) return tlsc_m3897; else {tlsc_p3897=T;return tlsc_m3897=(tlsc_f3898()-tlsc_f3939());}}
static int tlsc_f1447(){if (tlsc_p1447) return tlsc_m1447; else {tlsc_p1447=T;return tlsc_m1447=(tlsc_f3897()>(0.0));}}
static double tlsc_f3938(){if (tlsc_p3938) return tlsc_m3938; else {tlsc_p3938=T;return tlsc_m3938=(-tlsc_f3942());}}
static double tlsc_f3864(){if (tlsc_p3864) return tlsc_m3864; else {tlsc_p3864=T;return tlsc_m3864=(tlsc_f3870()?tlsc_f3942():tlsc_f3938());}}
static double tlsc_f3332(){if (tlsc_p3332) return tlsc_m3332; else {tlsc_p3332=T;return tlsc_m3332=(tlsc_f3857()-(tlsc_f3898()*tlsc_f3864()));}}
static int tlsc_f1110(){if (tlsc_p1110) return tlsc_m1110; else {tlsc_p1110=T;return tlsc_m1110=((fabs((tlsc_f3334()-(0.0)))<tlsc_v4723)?(fabs((tlsc_f3332()-(0.0)))<tlsc_v4723):NIL);}}
static double tlsc_f3862(){if (tlsc_p3862) return tlsc_m3862; else {tlsc_p3862=T;return tlsc_m3862=((tlsc_f3944()*tlsc_f3866())-(tlsc_f3942()*tlsc_f3864()));}}
static double tlsc_f3324(){if (tlsc_p3324) return tlsc_m3324; else {tlsc_p3324=T;return tlsc_m3324=(tlsc_f3334()/tlsc_f3862());}}
static double tlsc_f3171(){if (tlsc_p3171) return tlsc_m3171; else {tlsc_p3171=T;return tlsc_m3171=(tlsc_v4776-tlsc_f3324());}}
static double tlsc_f3275(){if (tlsc_p3275) return tlsc_m3275; else {tlsc_p3275=T;return tlsc_m3275=(tlsc_f3324()-tlsc_v4776);}}
static double tlsc_f3323(){if (tlsc_p3323) return tlsc_m3323; else {tlsc_p3323=T;return tlsc_m3323=(tlsc_f3332()/tlsc_f3862());}}
static double tlsc_f3169(){if (tlsc_p3169) return tlsc_m3169; else {tlsc_p3169=T;return tlsc_m3169=(tlsc_v4774-tlsc_f3323());}}
static double tlsc_f3272(){if (tlsc_p3272) return tlsc_m3272; else {tlsc_p3272=T;return tlsc_m3272=(tlsc_f3323()-tlsc_v4774);}}
static int tlsc_f1108(){if (tlsc_p1108) return tlsc_m1108; else {tlsc_p1108=T;return tlsc_m1108=((fabs(tlsc_f3275())<tlsc_v4723)?(fabs(tlsc_f3272())<tlsc_v4723):NIL);}}
static double tlsc_f3844(){if (tlsc_p3844) return tlsc_m3844; else {tlsc_p3844=T;return tlsc_m3844=(tlsc_f3858()/tlsc_f3862());}}
static double tlsc_f3687(){if (tlsc_p3687) return tlsc_m3687; else {tlsc_p3687=T;return tlsc_m3687=(tlsc_v4780-tlsc_f3844());}}
static double tlsc_f3791(){if (tlsc_p3791) return tlsc_m3791; else {tlsc_p3791=T;return tlsc_m3791=(tlsc_f3844()-tlsc_v4780);}}
static int tlsc_f1438(){if (tlsc_p1438) return tlsc_m1438; else {tlsc_p1438=T;return tlsc_m1438=(fabs((tlsc_f3862()-(0.0)))<tlsc_v4723);}}
static int tlsc_f1109(){if (tlsc_p1109) return tlsc_m1109; else {tlsc_p1109=T;return tlsc_m1109=(tlsc_f1438()?tlsc_f1110():T);}}
static int tlsc_f1105(){if (tlsc_p1105) return tlsc_m1105; else {tlsc_p1105=T;return tlsc_m1105=(tlsc_f1438()?NIL:((fabs((((tlsc_f3944()*tlsc_f3324())+(tlsc_f3942()*tlsc_f3323()))-tlsc_f3898()))<tlsc_v4723)?((tlsc_v1108=tlsc_f1108()),(tlsc_v1108?tlsc_v1108:(fabs((tlsc_v4764-atan2(tlsc_f3272(),tlsc_f3275())))<tlsc_v4723))):NIL));}}
static int tlsc_f1100(){if (tlsc_p1100) return tlsc_m1100; else {tlsc_p1100=T;return tlsc_m1100=(tlsc_f1438()?tlsc_f1110():NIL);}}
static double tlsc_f1104(){if (tlsc_p1104) return tlsc_m1104; else {tlsc_p1104=T;return tlsc_m1104=(tlsc_f1438()?tlsc_f1424():((tlsc_v3171=tlsc_f3171()),(tlsc_v3169=tlsc_f3169()),sqrt(((tlsc_v3171*tlsc_v3171)+(tlsc_v3169*tlsc_v3169)))));}}
static int tlsc_f1101(){if (tlsc_p1101) return tlsc_m1101; else {tlsc_p1101=T;return tlsc_m1101=(fabs((tlsc_f1104()-(0.0)))<tlsc_v4723);}}
static int tlsc_f1375(){if (tlsc_p1375) return tlsc_m1375; else {tlsc_p1375=T;return tlsc_m1375=(tlsc_f1438()?NIL:T);}}
static double tlsc_f3855(){if (tlsc_p3855) return tlsc_m3855; else {tlsc_p3855=T;return tlsc_m3855=(tlsc_f3857()-(tlsc_f3939()*tlsc_f3864()));}}
static double tlsc_f3843(){if (tlsc_p3843) return tlsc_m3843; else {tlsc_p3843=T;return tlsc_m3843=(tlsc_f3855()/tlsc_f3862());}}
static double tlsc_f3685(){if (tlsc_p3685) return tlsc_m3685; else {tlsc_p3685=T;return tlsc_m3685=(tlsc_v4778-tlsc_f3843());}}
static double tlsc_f1423(){if (tlsc_p1423) return tlsc_m1423; else {tlsc_p1423=T;return tlsc_m1423=(tlsc_f1438()?tlsc_f1424():((tlsc_v3687=tlsc_f3687()),(tlsc_v3685=tlsc_f3685()),sqrt(((tlsc_v3687*tlsc_v3687)+(tlsc_v3685*tlsc_v3685)))));}}
static int tlsc_f1420(){if (tlsc_p1420) return tlsc_m1420; else {tlsc_p1420=T;return tlsc_m1420=(fabs((tlsc_f1423()-(0.0)))<tlsc_v4723);}}
static double tlsc_f3788(){if (tlsc_p3788) return tlsc_m3788; else {tlsc_p3788=T;return tlsc_m3788=(tlsc_f3843()-tlsc_v4778);}}
static int tlsc_f1429(){if (tlsc_p1429) return tlsc_m1429; else {tlsc_p1429=T;return tlsc_m1429=((fabs(tlsc_f3791())<tlsc_v4723)?(fabs(tlsc_f3788())<tlsc_v4723):NIL);}}
static int tlsc_f1426(){if (tlsc_p1426) return tlsc_m1426; else {tlsc_p1426=T;return tlsc_m1426=(tlsc_f1438()?NIL:((fabs((((tlsc_f3944()*tlsc_f3844())+(tlsc_f3942()*tlsc_f3843()))-tlsc_f3939()))<tlsc_v4723)?((tlsc_v1429=tlsc_f1429()),(tlsc_v1429?tlsc_v1429:(fabs((tlsc_v4764-atan2(tlsc_f3788(),tlsc_f3791())))<tlsc_v4723))):NIL));}}
static int tlsc_f1431(){if (tlsc_p1431) return tlsc_m1431; else {tlsc_p1431=T;return tlsc_m1431=((fabs((tlsc_f3858()-(0.0)))<tlsc_v4723)?(fabs((tlsc_f3855()-(0.0)))<tlsc_v4723):NIL);}}
static int tlsc_f1430(){if (tlsc_p1430) return tlsc_m1430; else {tlsc_p1430=T;return tlsc_m1430=(tlsc_f1438()?tlsc_f1431():T);}}
static int tlsc_f1419(){if (tlsc_p1419) return tlsc_m1419; else {tlsc_p1419=T;return tlsc_m1419=(tlsc_f1438()?tlsc_f1431():NIL);}}
static double tlsc_f3932(){if (tlsc_p3932) return tlsc_m3932; else {tlsc_p3932=T;return tlsc_m3932=(tlsc_f3934()-(tlsc_f3942()*tlsc_f3938()));}}
static double tlsc_f3369(){if (tlsc_p3369) return tlsc_m3369; else {tlsc_p3369=T;return tlsc_m3369=((((tlsc_f3898()*tlsc_f3944())-tlsc_f3930())/tlsc_f3932())-tlsc_v4772);}}
static double tlsc_f3367(){if (tlsc_p3367) return tlsc_m3367; else {tlsc_p3367=T;return tlsc_m3367=(((tlsc_f3928()-(tlsc_f3898()*tlsc_f3938()))/tlsc_f3932())-tlsc_v4770);}}
static int tlsc_f1459(){if (tlsc_p1459) return tlsc_m1459; else {tlsc_p1459=T;return tlsc_m1459=(fabs((tlsc_f3932()-(0.0)))<tlsc_v4723);}}
static double tlsc_f3911(){if (tlsc_p3911) return tlsc_m3911; else {tlsc_p3911=T;return tlsc_m3911=((((tlsc_f3939()*tlsc_f3944())-tlsc_f3930())/tlsc_f3932())-tlsc_v4772);}}
static double tlsc_f3909(){if (tlsc_p3909) return tlsc_m3909; else {tlsc_p3909=T;return tlsc_m3909=(((tlsc_f3928()-(tlsc_f3939()*tlsc_f3938()))/tlsc_f3932())-tlsc_v4770);}}
static double tlsc_f1655(){if (tlsc_p1655) return tlsc_m1655; else {tlsc_p1655=T;return tlsc_m1655=normalize_rotation((tlsc_v4752-(1.5707963267948966)));}}
static double tlsc_f1653(){if (tlsc_p1653) return tlsc_m1653; else {tlsc_p1653=T;return tlsc_m1653=(tlsc_v4755*sin(tlsc_f1655()));}}
static double tlsc_f1652(){if (tlsc_p1652) return tlsc_m1652; else {tlsc_p1652=T;return tlsc_m1652=(tlsc_v4778+tlsc_f1653());}}
static double tlsc_f1566(){if (tlsc_p1566) return tlsc_m1566; else {tlsc_p1566=T;return tlsc_m1566=(tlsc_f1652()-tlsc_v4770);}}
static double tlsc_f1651(){if (tlsc_p1651) return tlsc_m1651; else {tlsc_p1651=T;return tlsc_m1651=(tlsc_v4774+tlsc_f1653());}}
static double tlsc_f1594(){if (tlsc_p1594) return tlsc_m1594; else {tlsc_p1594=T;return tlsc_m1594=(tlsc_f1651()-tlsc_v4770);}}
static double tlsc_f1650(){if (tlsc_p1650) return tlsc_m1650; else {tlsc_p1650=T;return tlsc_m1650=(tlsc_f1652()-tlsc_f1651());}}
static int tlsc_f1648(){if (tlsc_p1648) return tlsc_m1648; else {tlsc_p1648=T;return tlsc_m1648=(fabs(tlsc_f1650())<tlsc_v4723);}}
static double tlsc_f1646(){if (tlsc_p1646) return tlsc_m1646; else {tlsc_p1646=T;return tlsc_m1646=(tlsc_v4755*cos(tlsc_f1655()));}}
static double tlsc_f1645(){if (tlsc_p1645) return tlsc_m1645; else {tlsc_p1645=T;return tlsc_m1645=(tlsc_v4780+tlsc_f1646());}}
static double tlsc_f1569(){if (tlsc_p1569) return tlsc_m1569; else {tlsc_p1569=T;return tlsc_m1569=(tlsc_f1645()-tlsc_v4772);}}
static int tlsc_f1563(){if (tlsc_p1563) return tlsc_m1563; else {tlsc_p1563=T;return tlsc_m1563=((fabs(tlsc_f1569())<tlsc_v4723)?(fabs(tlsc_f1566())<tlsc_v4723):NIL);}}
static double tlsc_f1644(){if (tlsc_p1644) return tlsc_m1644; else {tlsc_p1644=T;return tlsc_m1644=(tlsc_v4776+tlsc_f1646());}}
static double tlsc_f1597(){if (tlsc_p1597) return tlsc_m1597; else {tlsc_p1597=T;return tlsc_m1597=(tlsc_f1644()-tlsc_v4772);}}
static int tlsc_f1591(){if (tlsc_p1591) return tlsc_m1591; else {tlsc_p1591=T;return tlsc_m1591=((fabs(tlsc_f1597())<tlsc_v4723)?(fabs(tlsc_f1594())<tlsc_v4723):NIL);}}
static double tlsc_f1638(){if (tlsc_p1638) return tlsc_m1638; else {tlsc_p1638=T;return tlsc_m1638=((tlsc_f1644()-tlsc_f1645())/tlsc_f1650());}}
static int tlsc_f1641(){if (tlsc_p1641) return tlsc_m1641; else {tlsc_p1641=T;return tlsc_m1641=(fabs((tlsc_f1645()-tlsc_f1644()))<tlsc_v4723);}}
static double tlsc_f1693(){if (tlsc_p1693) return tlsc_m1693; else {tlsc_p1693=T;return tlsc_m1693=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double tlsc_f1099(){if (tlsc_p1099) return tlsc_m1099; else {tlsc_p1099=T;return tlsc_m1099=(tlsc_f1438()?tlsc_f1693():tlsc_f3324());}}
static int tlsc_f1098(){if (tlsc_p1098) return tlsc_m1098; else {tlsc_p1098=T;return tlsc_m1098=(tlsc_v4772==tlsc_f1099());}}
static double tlsc_f1418(){if (tlsc_p1418) return tlsc_m1418; else {tlsc_p1418=T;return tlsc_m1418=(tlsc_f1438()?tlsc_f1693():tlsc_f3844());}}
static int tlsc_f1417(){if (tlsc_p1417) return tlsc_m1417; else {tlsc_p1417=T;return tlsc_m1417=(tlsc_v4772==tlsc_f1418());}}
static double tlsc_f1677(){if (tlsc_p1677) return tlsc_m1677; else {tlsc_p1677=T;return tlsc_m1677=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double tlsc_f1097(){if (tlsc_p1097) return tlsc_m1097; else {tlsc_p1097=T;return tlsc_m1097=(tlsc_f1438()?tlsc_f1677():tlsc_f3323());}}
static double tlsc_f1089(){if (tlsc_p1089) return tlsc_m1089; else {tlsc_p1089=T;return tlsc_m1089=((tlsc_f1097()-tlsc_v4770)/(tlsc_f1099()-tlsc_v4772));}}
static int tlsc_f1096(){if (tlsc_p1096) return tlsc_m1096; else {tlsc_p1096=T;return tlsc_m1096=(tlsc_v4770==tlsc_f1097());}}
static double tlsc_f1082(){if (tlsc_p1082) return tlsc_m1082; else {tlsc_p1082=T;return tlsc_m1082=(tlsc_f1098()?(tlsc_f1096()?tlsc_f1413():tlsc_f1097()):(tlsc_f1099()+(tlsc_f1089()*tlsc_f1097())));}}
static double tlsc_f1094(){if (tlsc_p1094) return tlsc_m1094; else {tlsc_p1094=T;return tlsc_m1094=(tlsc_f1098()?(tlsc_f1096()?tlsc_f1413():(0.0)):(1.0));}}
static double tlsc_f1088(){if (tlsc_p1088) return tlsc_m1088; else {tlsc_p1088=T;return tlsc_m1088=(tlsc_f1098()?(tlsc_f1096()?tlsc_f1413():(1.0)):tlsc_f1089());}}
static double tlsc_f1072(){if (tlsc_p1072) return tlsc_m1072; else {tlsc_p1072=T;return tlsc_m1072=(((tlsc_f1094()*(tlsc_f1099()+tlsc_f3943()))+(tlsc_f1088()*(tlsc_f1097()+tlsc_f3944())))-tlsc_f1082());}}
static double tlsc_f1081(){if (tlsc_p1081) return tlsc_m1081; else {tlsc_p1081=T;return tlsc_m1081=(((tlsc_f1094()*tlsc_v4780)+(tlsc_f1088()*tlsc_v4778))-tlsc_f1082());}}
static int tlsc_f1067(){if (tlsc_p1067) return tlsc_m1067; else {tlsc_p1067=T;return tlsc_m1067=(tlsc_f1081()>(0.0));}}
static int tlsc_f1059(){if (tlsc_p1059) return tlsc_m1059; else {tlsc_p1059=T;return tlsc_m1059=((tlsc_v1101=tlsc_f1101()),(tlsc_v1101?((tlsc_v1100=tlsc_f1100()),(tlsc_v1100?tlsc_v1100:(((fabs((tlsc_f1081()-(0.0)))<tlsc_v4723)?T:((tlsc_v1072=tlsc_f1072()),((fabs((tlsc_v1072-(0.0)))<tlsc_v4723)?NIL:((tlsc_v1072>(0.0))?tlsc_f1067():(tlsc_f1067()?NIL:T)))))?NIL:T))):(tlsc_v1101?NIL:T)));}}
static double tlsc_f814(){if (tlsc_p814) return tlsc_m814; else {tlsc_p814=T;return tlsc_m814=(tlsc_f1059()?tlsc_f1104():tlsc_f816());}}
static int tlsc_f786(){if (tlsc_p786) return tlsc_m786; else {tlsc_p786=T;return tlsc_m786=(tlsc_f1423()<tlsc_f814());}}
static double_or_symbol tlsc_f31(){if (tlsc_p31) return tlsc_m31; else {tlsc_p31=T;return tlsc_m31=(tlsc_f1059()?coerce_double_to_double_or_symbol(tlsc_f1104()):coerce_symbol_to_double_or_symbol(NIL));}}
static int tlsc_f1058(){if (tlsc_p1058) return tlsc_m1058; else {tlsc_p1058=T;return tlsc_m1058=(tlsc_f1059()?tlsc_f1375():NIL);}}
static int tlsc_f1057(){if (tlsc_p1057) return tlsc_m1057; else {tlsc_p1057=T;return tlsc_m1057=((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?tlsc_v1058:NIL));}}
static double tlsc_f1416(){if (tlsc_p1416) return tlsc_m1416; else {tlsc_p1416=T;return tlsc_m1416=(tlsc_f1438()?tlsc_f1677():tlsc_f3843());}}
static double tlsc_f1406(){if (tlsc_p1406) return tlsc_m1406; else {tlsc_p1406=T;return tlsc_m1406=((tlsc_f1416()-tlsc_v4770)/(tlsc_f1418()-tlsc_v4772));}}
static int tlsc_f1415(){if (tlsc_p1415) return tlsc_m1415; else {tlsc_p1415=T;return tlsc_m1415=(tlsc_v4770==tlsc_f1416());}}
static double tlsc_f1399(){if (tlsc_p1399) return tlsc_m1399; else {tlsc_p1399=T;return tlsc_m1399=(tlsc_f1417()?(tlsc_f1415()?tlsc_f1413():tlsc_f1416()):(tlsc_f1418()+(tlsc_f1406()*tlsc_f1416())));}}
static double tlsc_f1411(){if (tlsc_p1411) return tlsc_m1411; else {tlsc_p1411=T;return tlsc_m1411=(tlsc_f1417()?(tlsc_f1415()?tlsc_f1413():(0.0)):(1.0));}}
static double tlsc_f1405(){if (tlsc_p1405) return tlsc_m1405; else {tlsc_p1405=T;return tlsc_m1405=(tlsc_f1417()?(tlsc_f1415()?tlsc_f1413():(1.0)):tlsc_f1406());}}
static double tlsc_f1389(){if (tlsc_p1389) return tlsc_m1389; else {tlsc_p1389=T;return tlsc_m1389=(((tlsc_f1411()*(tlsc_f1418()+tlsc_f3943()))+(tlsc_f1405()*(tlsc_f1416()+tlsc_f3944())))-tlsc_f1399());}}
static double tlsc_f1398(){if (tlsc_p1398) return tlsc_m1398; else {tlsc_p1398=T;return tlsc_m1398=(((tlsc_f1411()*tlsc_v4776)+(tlsc_f1405()*tlsc_v4774))-tlsc_f1399());}}
static int tlsc_f1384(){if (tlsc_p1384) return tlsc_m1384; else {tlsc_p1384=T;return tlsc_m1384=(tlsc_f1398()>(0.0));}}
static int tlsc_f1376(){if (tlsc_p1376) return tlsc_m1376; else {tlsc_p1376=T;return tlsc_m1376=((tlsc_v1420=tlsc_f1420()),(tlsc_v1420?((tlsc_v1419=tlsc_f1419()),(tlsc_v1419?tlsc_v1419:(((fabs((tlsc_f1398()-(0.0)))<tlsc_v4723)?T:((tlsc_v1389=tlsc_f1389()),((fabs((tlsc_v1389-(0.0)))<tlsc_v4723)?NIL:((tlsc_v1389>(0.0))?tlsc_f1384():(tlsc_f1384()?NIL:T)))))?NIL:T))):(tlsc_v1420?NIL:T)));}}
static double tlsc_f815(){if (tlsc_p815) return tlsc_m815; else {tlsc_p815=T;return tlsc_m815=(tlsc_f1376()?tlsc_f1423():tlsc_f816());}}
static int tlsc_f813(){if (tlsc_p813) return tlsc_m813; else {tlsc_p813=T;return tlsc_m813=(tlsc_f815()<tlsc_f814());}}
static int tlsc_f811(){if (tlsc_p811) return tlsc_m811; else {tlsc_p811=T;return tlsc_m811=(tlsc_f815()<tlsc_f1104());}}
static double_or_symbol tlsc_f61(){if (tlsc_p61) return tlsc_m61; else {tlsc_p61=T;return tlsc_m61=(tlsc_f1376()?coerce_double_to_double_or_symbol(tlsc_f1423()):coerce_symbol_to_double_or_symbol(NIL));}}
static int tlsc_f1374(){if (tlsc_p1374) return tlsc_m1374; else {tlsc_p1374=T;return tlsc_m1374=(tlsc_f1376()?tlsc_f1375():NIL);}}
static int tlsc_f1373(){if (tlsc_p1373) return tlsc_m1373; else {tlsc_p1373=T;return tlsc_m1373=((tlsc_v1374=tlsc_f1374()),(tlsc_v1374?tlsc_v1374:NIL));}}
static double tlsc_f4236(){if (tlsc_p4236) return tlsc_m4236; else {tlsc_p4236=T;return tlsc_m4236=(((tlsc_v4780<tlsc_v4776)?tlsc_v4780:tlsc_v4776)-tlsc_v4723);}}
static double tlsc_f4234(){if (tlsc_p4234) return tlsc_m4234; else {tlsc_p4234=T;return tlsc_m4234=(((tlsc_v4780>tlsc_v4776)?tlsc_v4780:tlsc_v4776)+tlsc_v4723);}}
static double tlsc_f4227(){if (tlsc_p4227) return tlsc_m4227; else {tlsc_p4227=T;return tlsc_m4227=(((tlsc_v4778<tlsc_v4774)?tlsc_v4778:tlsc_v4774)-tlsc_v4723);}}
static double tlsc_f4225(){if (tlsc_p4225) return tlsc_m4225; else {tlsc_p4225=T;return tlsc_m4225=(((tlsc_v4778>tlsc_v4774)?tlsc_v4778:tlsc_v4774)+tlsc_v4723);}}
static double tlsc_f1853(){if (tlsc_p1853) return tlsc_m1853; else {tlsc_p1853=T;return tlsc_m1853=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static int tlsc_f1131(){if (tlsc_p1131) return tlsc_m1131; else {tlsc_p1131=T;return tlsc_m1131=(fabs(((tlsc_f1459()?tlsc_f1853():((tlsc_v3369=tlsc_f3369()),(tlsc_v3367=tlsc_f3367()),sqrt(((tlsc_v3369*tlsc_v3369)+(tlsc_v3367*tlsc_v3367)))))-tlsc_v4755))<tlsc_v4723);}}
static int tlsc_f804(){if (tlsc_p804) return tlsc_m804; else {tlsc_p804=T;return tlsc_m804=(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?(tlsc_f1057()?(tlsc_f813()?tlsc_f1374():tlsc_v1058):(tlsc_f1059()?(tlsc_f811()?tlsc_f1374():tlsc_f1375()):NIL)):NIL)):NIL):NIL):NIL);}}
static int tlsc_f780(){if (tlsc_p780) return tlsc_m780; else {tlsc_p780=T;return tlsc_m780=(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?(tlsc_f1057()?(tlsc_f786()?tlsc_f1375():tlsc_v1058):tlsc_v1058):NIL)):NIL):NIL):NIL);}}
static double tlsc_f549(){if (tlsc_p549) return tlsc_m549; else {tlsc_p549=T;return tlsc_m549=(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?(tlsc_f813()?tlsc_f815():tlsc_f814()):(tlsc_f1059()?(tlsc_f811()?tlsc_f815():tlsc_f1104()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double tlsc_f527(){if (tlsc_p527) return tlsc_m527; else {tlsc_p527=T;return tlsc_m527=(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?(tlsc_f786()?tlsc_f1423():tlsc_f814()):(tlsc_f1059()?((tlsc_v1423=tlsc_f1423()),(tlsc_v1104=tlsc_f1104()),((tlsc_v1423<tlsc_v1104)?tlsc_v1423:tlsc_v1104)):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double_or_symbol tlsc_f25(){if (tlsc_p25) return tlsc_m25; else {tlsc_p25=T;return tlsc_m25=(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?(tlsc_f1057()?coerce_double_to_double_or_symbol(tlsc_f814()):tlsc_f31()):(tlsc_v1058?tlsc_f31():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int tlsc_f1117(){if (tlsc_p1117) return tlsc_m1117; else {tlsc_p1117=T;return tlsc_m1117=((tlsc_v1131=tlsc_f1131()),(tlsc_v1131?((fabs((tlsc_f3358()-(0.0)))<tlsc_v4723)?NIL:((tlsc_v3354=tlsc_f3354()),((fabs((tlsc_v3354-(0.0)))<tlsc_v4723)?NIL:((tlsc_v3354>(0.0))?tlsc_f1123():(tlsc_f1123()?NIL:T))))):(tlsc_v1131?NIL:T)));}}
static int tlsc_f1053(){if (tlsc_p1053) return tlsc_m1053; else {tlsc_p1053=T;return tlsc_m1053=(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?tlsc_v1058:tlsc_f1057())):NIL):NIL):NIL);}}
static int tlsc_f1455(){if (tlsc_p1455) return tlsc_m1455; else {tlsc_p1455=T;return tlsc_m1455=(fabs(((tlsc_f1459()?tlsc_f1853():((tlsc_v3911=tlsc_f3911()),(tlsc_v3909=tlsc_f3909()),sqrt(((tlsc_v3911*tlsc_v3911)+(tlsc_v3909*tlsc_v3909)))))-tlsc_v4755))<tlsc_v4723);}}
static double_or_symbol tlsc_f55(){if (tlsc_p55) return tlsc_m55; else {tlsc_p55=T;return tlsc_m55=(tlsc_f1455()?(tlsc_f1430()?(tlsc_f1426()?((tlsc_v1374=tlsc_f1374()),(tlsc_v1374?(tlsc_f1373()?coerce_double_to_double_or_symbol(tlsc_f815()):tlsc_f61()):(tlsc_v1374?tlsc_f61():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int tlsc_f1441(){if (tlsc_p1441) return tlsc_m1441; else {tlsc_p1441=T;return tlsc_m1441=((tlsc_v1455=tlsc_f1455()),(tlsc_v1455?((fabs((tlsc_f3897()-(0.0)))<tlsc_v4723)?NIL:((tlsc_v3890=tlsc_f3890()),((fabs((tlsc_v3890-(0.0)))<tlsc_v4723)?NIL:((tlsc_v3890>(0.0))?tlsc_f1447():(tlsc_f1447()?NIL:T))))):(tlsc_v1455?NIL:T)));}}
static int tlsc_f1369(){if (tlsc_p1369) return tlsc_m1369; else {tlsc_p1369=T;return tlsc_m1369=(tlsc_f1455()?(tlsc_f1430()?(tlsc_f1426()?((tlsc_v1374=tlsc_f1374()),(tlsc_v1374?tlsc_v1374:tlsc_f1373())):NIL):NIL):NIL);}}
static double tlsc_f4367(){if (tlsc_p4367) return tlsc_m4367; else {tlsc_p4367=T;return tlsc_m4367=(tlsc_v4755*tlsc_v4755);}}
static double tlsc_f3339(){if (tlsc_p3339) return tlsc_m3339; else {tlsc_p3339=T;return tlsc_m3339=(tlsc_f4367()-(tlsc_f3341()/tlsc_f3875()));}}
static int tlsc_f3338(){if (tlsc_p3338) return tlsc_m3338; else {tlsc_p3338=T;return tlsc_m3338=(tlsc_f3339()<0.0);}}
static double tlsc_f3319(){if (tlsc_p3319) return tlsc_m3319; else {tlsc_p3319=T;return tlsc_m3319=sqrt(tlsc_f3339());}}
static double tlsc_f3315(){if (tlsc_p3315) return tlsc_m3315; else {tlsc_p3315=T;return tlsc_m3315=((-tlsc_f3319())+tlsc_v4772);}}
static int tlsc_f3043(){if (tlsc_p3043) return tlsc_m3043; else {tlsc_p3043=T;return tlsc_m3043=(tlsc_v4772==tlsc_f3315());}}
static double tlsc_f1011(){if (tlsc_p1011) return tlsc_m1011; else {tlsc_p1011=T;return tlsc_m1011=(tlsc_f3043()?tlsc_f1043():(1.0));}}
static double tlsc_f3040(){if (tlsc_p3040) return tlsc_m3040; else {tlsc_p3040=T;return tlsc_m3040=(tlsc_f3088()/(tlsc_f3315()-tlsc_v4772));}}
static double tlsc_f1006(){if (tlsc_p1006) return tlsc_m1006; else {tlsc_p1006=T;return tlsc_m1006=(tlsc_f3043()?tlsc_f1036():(tlsc_f3315()+(tlsc_f3040()*tlsc_f3317())));}}
static double tlsc_f1009(){if (tlsc_p1009) return tlsc_m1009; else {tlsc_p1009=T;return tlsc_m1009=(tlsc_f3043()?tlsc_f1040():tlsc_f3040());}}
static double tlsc_f998(){if (tlsc_p998) return tlsc_m998; else {tlsc_p998=T;return tlsc_m998=(((tlsc_f1011()*(tlsc_f3315()+tlsc_f3943()))+(tlsc_f1009()*tlsc_f3092()))-tlsc_f1006());}}
static double tlsc_f1005(){if (tlsc_p1005) return tlsc_m1005; else {tlsc_p1005=T;return tlsc_m1005=(((tlsc_f1011()*tlsc_v4780)+(tlsc_f1009()*tlsc_v4778))-tlsc_f1006());}}
static int tlsc_f993(){if (tlsc_p993) return tlsc_m993; else {tlsc_p993=T;return tlsc_m993=(tlsc_f1005()>(0.0));}}
static double tlsc_f3052(){if (tlsc_p3052) return tlsc_m3052; else {tlsc_p3052=T;return tlsc_m3052=(tlsc_v4776-tlsc_f3315());}}
static double tlsc_f3049(){if (tlsc_p3049) return tlsc_m3049; else {tlsc_p3049=T;return tlsc_m3049=((tlsc_v3052=tlsc_f3052()),sqrt(((tlsc_v3052*tlsc_v3052)+tlsc_f3100())));}}
static int tlsc_f797(){if (tlsc_p797) return tlsc_m797; else {tlsc_p797=T;return tlsc_m797=(tlsc_f815()<tlsc_f3049());}}
static int tlsc_f774(){if (tlsc_p774) return tlsc_m774; else {tlsc_p774=T;return tlsc_m774=(tlsc_f1423()<tlsc_f3049());}}
static int tlsc_f1012(){if (tlsc_p1012) return tlsc_m1012; else {tlsc_p1012=T;return tlsc_m1012=(fabs((tlsc_f3049()-(0.0)))<tlsc_v4723);}}
static int tlsc_f986(){if (tlsc_p986) return tlsc_m986; else {tlsc_p986=T;return tlsc_m986=((tlsc_v1012=tlsc_f1012()),(tlsc_v1012?(((fabs((tlsc_f1005()-(0.0)))<tlsc_v4723)?T:((tlsc_v998=tlsc_f998()),((fabs((tlsc_v998-(0.0)))<tlsc_v4723)?NIL:((tlsc_v998>(0.0))?tlsc_f993():(tlsc_f993()?NIL:T)))))?NIL:T):(tlsc_v1012?NIL:T)));}}
static int tlsc_f795(){if (tlsc_p795) return tlsc_m795; else {tlsc_p795=T;return tlsc_m795=(tlsc_f986()?(tlsc_f797()?tlsc_f1374():T):NIL);}}
static int tlsc_f772(){if (tlsc_p772) return tlsc_m772; else {tlsc_p772=T;return tlsc_m772=(tlsc_f986()?(tlsc_f774()?tlsc_f1375():T):NIL);}}
static double tlsc_f544(){if (tlsc_p544) return tlsc_m544; else {tlsc_p544=T;return tlsc_m544=(tlsc_f986()?(tlsc_f797()?tlsc_f815():tlsc_f3049()):tlsc_f816());}}
static double tlsc_f522(){if (tlsc_p522) return tlsc_m522; else {tlsc_p522=T;return tlsc_m522=(tlsc_f986()?(tlsc_f774()?tlsc_f1423():tlsc_f3049()):tlsc_f816());}}
static double_or_symbol tlsc_f21(){if (tlsc_p21) return tlsc_m21; else {tlsc_p21=T;return tlsc_m21=((tlsc_v986=tlsc_f986()),(tlsc_v986?(tlsc_v986?coerce_double_to_double_or_symbol(tlsc_f3049()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
static int tlsc_f985(){if (tlsc_p985) return tlsc_m985; else {tlsc_p985=T;return tlsc_m985=((tlsc_v986=tlsc_f986()),(tlsc_v986?tlsc_v986:NIL));}}
static double tlsc_f3233(){if (tlsc_p3233) return tlsc_m3233; else {tlsc_p3233=T;return tlsc_m3233=(tlsc_f3315()-tlsc_v4776);}}
static int tlsc_f1049(){if (tlsc_p1049) return tlsc_m1049; else {tlsc_p1049=T;return tlsc_m1049=((fabs(tlsc_f3233())<tlsc_v4723)?tlsc_f3246():NIL);}}
static int tlsc_f1047(){if (tlsc_p1047) return tlsc_m1047; else {tlsc_p1047=T;return tlsc_m1047=((fabs((((tlsc_f3944()*tlsc_f3315())+tlsc_f3256())-tlsc_f3898()))<tlsc_v4723)?((tlsc_v1049=tlsc_f1049()),(tlsc_v1049?tlsc_v1049:(fabs((tlsc_v4764-atan2(tlsc_f3248(),tlsc_f3233())))<tlsc_v4723))):NIL);}}
static int tlsc_f715(){if (tlsc_p715) return tlsc_m715; else {tlsc_p715=T;return tlsc_m715=(tlsc_f1047()?tlsc_f986():NIL);}}
static double tlsc_f3316(){if (tlsc_p3316) return tlsc_m3316; else {tlsc_p3316=T;return tlsc_m3316=(tlsc_f3319()+tlsc_v4772);}}
static int tlsc_f3091(){if (tlsc_p3091) return tlsc_m3091; else {tlsc_p3091=T;return tlsc_m3091=(tlsc_v4772==tlsc_f3316());}}
static double tlsc_f1042(){if (tlsc_p1042) return tlsc_m1042; else {tlsc_p1042=T;return tlsc_m1042=(tlsc_f3091()?tlsc_f1043():(1.0));}}
static double tlsc_f3086(){if (tlsc_p3086) return tlsc_m3086; else {tlsc_p3086=T;return tlsc_m3086=(tlsc_f3088()/(tlsc_f3316()-tlsc_v4772));}}
static double tlsc_f1035(){if (tlsc_p1035) return tlsc_m1035; else {tlsc_p1035=T;return tlsc_m1035=(tlsc_f3091()?tlsc_f1036():(tlsc_f3316()+(tlsc_f3086()*tlsc_f3317())));}}
static double tlsc_f1039(){if (tlsc_p1039) return tlsc_m1039; else {tlsc_p1039=T;return tlsc_m1039=(tlsc_f3091()?tlsc_f1040():tlsc_f3086());}}
static double tlsc_f1027(){if (tlsc_p1027) return tlsc_m1027; else {tlsc_p1027=T;return tlsc_m1027=(((tlsc_f1042()*(tlsc_f3316()+tlsc_f3943()))+(tlsc_f1039()*tlsc_f3092()))-tlsc_f1035());}}
static double tlsc_f1034(){if (tlsc_p1034) return tlsc_m1034; else {tlsc_p1034=T;return tlsc_m1034=(((tlsc_f1042()*tlsc_v4780)+(tlsc_f1039()*tlsc_v4778))-tlsc_f1035());}}
static int tlsc_f1022(){if (tlsc_p1022) return tlsc_m1022; else {tlsc_p1022=T;return tlsc_m1022=(tlsc_f1034()>(0.0));}}
static double tlsc_f3103(){if (tlsc_p3103) return tlsc_m3103; else {tlsc_p3103=T;return tlsc_m3103=(tlsc_v4776-tlsc_f3316());}}
static double tlsc_f3098(){if (tlsc_p3098) return tlsc_m3098; else {tlsc_p3098=T;return tlsc_m3098=((tlsc_v3103=tlsc_f3103()),sqrt(((tlsc_v3103*tlsc_v3103)+tlsc_f3100())));}}
static int tlsc_f800(){if (tlsc_p800) return tlsc_m800; else {tlsc_p800=T;return tlsc_m800=(tlsc_f815()<tlsc_f3098());}}
static int tlsc_f799(){if (tlsc_p799) return tlsc_m799; else {tlsc_p799=T;return tlsc_m799=(tlsc_f800()?tlsc_f1374():T);}}
static double tlsc_f547(){if (tlsc_p547) return tlsc_m547; else {tlsc_p547=T;return tlsc_m547=(tlsc_f800()?tlsc_f815():tlsc_f3098());}}
static int tlsc_f777(){if (tlsc_p777) return tlsc_m777; else {tlsc_p777=T;return tlsc_m777=(tlsc_f1423()<tlsc_f3098());}}
static int tlsc_f776(){if (tlsc_p776) return tlsc_m776; else {tlsc_p776=T;return tlsc_m776=(tlsc_f777()?tlsc_f1375():T);}}
static double tlsc_f525(){if (tlsc_p525) return tlsc_m525; else {tlsc_p525=T;return tlsc_m525=(tlsc_f777()?tlsc_f1423():tlsc_f3098());}}
static double tlsc_f803(){if (tlsc_p803) return tlsc_m803; else {tlsc_p803=T;return tlsc_m803=(tlsc_f986()?((tlsc_v3098=tlsc_f3098()),(tlsc_v3049=tlsc_f3049()),((tlsc_v3098<tlsc_v3049)?tlsc_v3098:tlsc_v3049)):tlsc_f816());}}
static int tlsc_f802(){if (tlsc_p802) return tlsc_m802; else {tlsc_p802=T;return tlsc_m802=(tlsc_f815()<tlsc_f803());}}
static int tlsc_f779(){if (tlsc_p779) return tlsc_m779; else {tlsc_p779=T;return tlsc_m779=(tlsc_f1423()<tlsc_f803());}}
static int tlsc_f1044(){if (tlsc_p1044) return tlsc_m1044; else {tlsc_p1044=T;return tlsc_m1044=(fabs((tlsc_f3098()-(0.0)))<tlsc_v4723);}}
static int tlsc_f1015(){if (tlsc_p1015) return tlsc_m1015; else {tlsc_p1015=T;return tlsc_m1015=((tlsc_v1044=tlsc_f1044()),(tlsc_v1044?(((fabs((tlsc_f1034()-(0.0)))<tlsc_v4723)?T:((tlsc_v1027=tlsc_f1027()),((fabs((tlsc_v1027-(0.0)))<tlsc_v4723)?NIL:((tlsc_v1027>(0.0))?tlsc_f1022():(tlsc_f1022()?NIL:T)))))?NIL:T):(tlsc_v1044?NIL:T)));}}
static double_or_symbol tlsc_f24(){if (tlsc_p24) return tlsc_m24; else {tlsc_p24=T;return tlsc_m24=(tlsc_f1015()?coerce_double_to_double_or_symbol(tlsc_f3098()):coerce_symbol_to_double_or_symbol(NIL));}}
static double tlsc_f3251(){if (tlsc_p3251) return tlsc_m3251; else {tlsc_p3251=T;return tlsc_m3251=(tlsc_f3316()-tlsc_v4776);}}
static int tlsc_f1052(){if (tlsc_p1052) return tlsc_m1052; else {tlsc_p1052=T;return tlsc_m1052=((fabs(tlsc_f3251())<tlsc_v4723)?tlsc_f3246():NIL);}}
static int tlsc_f1050(){if (tlsc_p1050) return tlsc_m1050; else {tlsc_p1050=T;return tlsc_m1050=((fabs((((tlsc_f3944()*tlsc_f3316())+tlsc_f3256())-tlsc_f3898()))<tlsc_v4723)?((tlsc_v1052=tlsc_f1052()),(tlsc_v1052?tlsc_v1052:(fabs((tlsc_v4764-atan2(tlsc_f3248(),tlsc_f3251())))<tlsc_v4723))):NIL);}}
static double tlsc_f3830(){if (tlsc_p3830) return tlsc_m3830; else {tlsc_p3830=T;return tlsc_m3830=(tlsc_f3934()*tlsc_f4367());}}
static double tlsc_f974(){if (tlsc_p974) return tlsc_m974; else {tlsc_p974=T;return tlsc_m974=((tlsc_v977=tlsc_f977()),((tlsc_v977*tlsc_v977)-((4.0)*tlsc_f3832()*(tlsc_f3341()-tlsc_f3830()))));}}
static int tlsc_f973(){if (tlsc_p973) return tlsc_m973; else {tlsc_p973=T;return tlsc_m973=(tlsc_f974()<0.0);}}
static double tlsc_f969(){if (tlsc_p969) return tlsc_m969; else {tlsc_p969=T;return tlsc_m969=(sqrt(tlsc_f974())/tlsc_f3823());}}
static double tlsc_f944(){if (tlsc_p944) return tlsc_m944; else {tlsc_p944=T;return tlsc_m944=((tlsc_f971()-tlsc_f969())+tlsc_v4770);}}
static int tlsc_f865(){if (tlsc_p865) return tlsc_m865; else {tlsc_p865=T;return tlsc_m865=(tlsc_v4770==tlsc_f944());}}
static double tlsc_f873(){if (tlsc_p873) return tlsc_m873; else {tlsc_p873=T;return tlsc_m873=(tlsc_v4774-tlsc_f944());}}
static double tlsc_f932(){if (tlsc_p932) return tlsc_m932; else {tlsc_p932=T;return tlsc_m932=(tlsc_f944()-tlsc_v4774);}}
static double tlsc_f943(){if (tlsc_p943) return tlsc_m943; else {tlsc_p943=T;return tlsc_m943=(tlsc_f3942()*tlsc_f944());}}
static double tlsc_f941(){if (tlsc_p941) return tlsc_m941; else {tlsc_p941=T;return tlsc_m941=((tlsc_f3898()-tlsc_f943())/tlsc_f3944());}}
static int tlsc_f866(){if (tlsc_p866) return tlsc_m866; else {tlsc_p866=T;return tlsc_m866=(tlsc_v4772==tlsc_f941());}}
static double tlsc_f863(){if (tlsc_p863) return tlsc_m863; else {tlsc_p863=T;return tlsc_m863=(tlsc_f866()?(tlsc_f865()?tlsc_f1413():(0.0)):(1.0));}}
static double tlsc_f858(){if (tlsc_p858) return tlsc_m858; else {tlsc_p858=T;return tlsc_m858=((tlsc_f944()-tlsc_v4770)/(tlsc_f941()-tlsc_v4772));}}
static double tlsc_f851(){if (tlsc_p851) return tlsc_m851; else {tlsc_p851=T;return tlsc_m851=(tlsc_f866()?(tlsc_f865()?tlsc_f1413():tlsc_f944()):(tlsc_f941()+(tlsc_f858()*tlsc_f944())));}}
static double tlsc_f857(){if (tlsc_p857) return tlsc_m857; else {tlsc_p857=T;return tlsc_m857=(tlsc_f866()?(tlsc_f865()?tlsc_f1413():(1.0)):tlsc_f858());}}
static double tlsc_f841(){if (tlsc_p841) return tlsc_m841; else {tlsc_p841=T;return tlsc_m841=(((tlsc_f863()*(tlsc_f941()+tlsc_f3943()))+(tlsc_f857()*(tlsc_f944()+tlsc_f3944())))-tlsc_f851());}}
static double tlsc_f850(){if (tlsc_p850) return tlsc_m850; else {tlsc_p850=T;return tlsc_m850=(((tlsc_f863()*tlsc_v4780)+(tlsc_f857()*tlsc_v4778))-tlsc_f851());}}
static int tlsc_f836(){if (tlsc_p836) return tlsc_m836; else {tlsc_p836=T;return tlsc_m836=(tlsc_f850()>(0.0));}}
static double tlsc_f875(){if (tlsc_p875) return tlsc_m875; else {tlsc_p875=T;return tlsc_m875=(tlsc_v4776-tlsc_f941());}}
static double tlsc_f870(){if (tlsc_p870) return tlsc_m870; else {tlsc_p870=T;return tlsc_m870=((tlsc_v875=tlsc_f875()),(tlsc_v873=tlsc_f873()),sqrt(((tlsc_v875*tlsc_v875)+(tlsc_v873*tlsc_v873))));}}
static int tlsc_f675(){if (tlsc_p675) return tlsc_m675; else {tlsc_p675=T;return tlsc_m675=(tlsc_f815()<tlsc_f870());}}
static int tlsc_f659(){if (tlsc_p659) return tlsc_m659; else {tlsc_p659=T;return tlsc_m659=(tlsc_f1423()<tlsc_f870());}}
static int tlsc_f867(){if (tlsc_p867) return tlsc_m867; else {tlsc_p867=T;return tlsc_m867=(fabs((tlsc_f870()-(0.0)))<tlsc_v4723);}}
static int tlsc_f829(){if (tlsc_p829) return tlsc_m829; else {tlsc_p829=T;return tlsc_m829=((tlsc_v867=tlsc_f867()),(tlsc_v867?(((fabs((tlsc_f850()-(0.0)))<tlsc_v4723)?T:((tlsc_v841=tlsc_f841()),((fabs((tlsc_v841-(0.0)))<tlsc_v4723)?NIL:((tlsc_v841>(0.0))?tlsc_f836():(tlsc_f836()?NIL:T)))))?NIL:T):(tlsc_v867?NIL:T)));}}
static int tlsc_f673(){if (tlsc_p673) return tlsc_m673; else {tlsc_p673=T;return tlsc_m673=(tlsc_f829()?(tlsc_f675()?tlsc_f1374():T):NIL);}}
static int tlsc_f657(){if (tlsc_p657) return tlsc_m657; else {tlsc_p657=T;return tlsc_m657=(tlsc_f829()?(tlsc_f659()?tlsc_f1375():T):NIL);}}
static double tlsc_f436(){if (tlsc_p436) return tlsc_m436; else {tlsc_p436=T;return tlsc_m436=(tlsc_f829()?(tlsc_f675()?tlsc_f815():tlsc_f870()):tlsc_f816());}}
static double tlsc_f423(){if (tlsc_p423) return tlsc_m423; else {tlsc_p423=T;return tlsc_m423=(tlsc_f829()?(tlsc_f659()?tlsc_f1423():tlsc_f870()):tlsc_f816());}}
static double_or_symbol tlsc_f11(){if (tlsc_p11) return tlsc_m11; else {tlsc_p11=T;return tlsc_m11=((tlsc_v829=tlsc_f829()),(tlsc_v829?(tlsc_v829?coerce_double_to_double_or_symbol(tlsc_f870()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
static int tlsc_f828(){if (tlsc_p828) return tlsc_m828; else {tlsc_p828=T;return tlsc_m828=((tlsc_v829=tlsc_f829()),(tlsc_v829?tlsc_v829:NIL));}}
static double tlsc_f935(){if (tlsc_p935) return tlsc_m935; else {tlsc_p935=T;return tlsc_m935=(tlsc_f941()-tlsc_v4776);}}
static int tlsc_f929(){if (tlsc_p929) return tlsc_m929; else {tlsc_p929=T;return tlsc_m929=((fabs(tlsc_f935())<tlsc_v4723)?(fabs(tlsc_f932())<tlsc_v4723):NIL);}}
static int tlsc_f923(){if (tlsc_p923) return tlsc_m923; else {tlsc_p923=T;return tlsc_m923=((fabs((((tlsc_f3944()*tlsc_f941())+tlsc_f943())-tlsc_f3898()))<tlsc_v4723)?((tlsc_v929=tlsc_f929()),(tlsc_v929?tlsc_v929:(fabs((tlsc_v4764-atan2(tlsc_f932(),tlsc_f935())))<tlsc_v4723))):NIL);}}
static int tlsc_f598(){if (tlsc_p598) return tlsc_m598; else {tlsc_p598=T;return tlsc_m598=(tlsc_f923()?tlsc_f829():NIL);}}
static double tlsc_f967(){if (tlsc_p967) return tlsc_m967; else {tlsc_p967=T;return tlsc_m967=((tlsc_f971()+tlsc_f969())+tlsc_v4770);}}
static int tlsc_f912(){if (tlsc_p912) return tlsc_m912; else {tlsc_p912=T;return tlsc_m912=(tlsc_v4770==tlsc_f967());}}
static double tlsc_f920(){if (tlsc_p920) return tlsc_m920; else {tlsc_p920=T;return tlsc_m920=(tlsc_v4774-tlsc_f967());}}
static double tlsc_f955(){if (tlsc_p955) return tlsc_m955; else {tlsc_p955=T;return tlsc_m955=(tlsc_f967()-tlsc_v4774);}}
static double tlsc_f966(){if (tlsc_p966) return tlsc_m966; else {tlsc_p966=T;return tlsc_m966=(tlsc_f3942()*tlsc_f967());}}
static double tlsc_f964(){if (tlsc_p964) return tlsc_m964; else {tlsc_p964=T;return tlsc_m964=((tlsc_f3898()-tlsc_f966())/tlsc_f3944());}}
static int tlsc_f913(){if (tlsc_p913) return tlsc_m913; else {tlsc_p913=T;return tlsc_m913=(tlsc_v4772==tlsc_f964());}}
static double tlsc_f910(){if (tlsc_p910) return tlsc_m910; else {tlsc_p910=T;return tlsc_m910=(tlsc_f913()?(tlsc_f912()?tlsc_f1413():(0.0)):(1.0));}}
static double tlsc_f905(){if (tlsc_p905) return tlsc_m905; else {tlsc_p905=T;return tlsc_m905=((tlsc_f967()-tlsc_v4770)/(tlsc_f964()-tlsc_v4772));}}
static double tlsc_f898(){if (tlsc_p898) return tlsc_m898; else {tlsc_p898=T;return tlsc_m898=(tlsc_f913()?(tlsc_f912()?tlsc_f1413():tlsc_f967()):(tlsc_f964()+(tlsc_f905()*tlsc_f967())));}}
static double tlsc_f904(){if (tlsc_p904) return tlsc_m904; else {tlsc_p904=T;return tlsc_m904=(tlsc_f913()?(tlsc_f912()?tlsc_f1413():(1.0)):tlsc_f905());}}
static double tlsc_f888(){if (tlsc_p888) return tlsc_m888; else {tlsc_p888=T;return tlsc_m888=(((tlsc_f910()*(tlsc_f964()+tlsc_f3943()))+(tlsc_f904()*(tlsc_f967()+tlsc_f3944())))-tlsc_f898());}}
static double tlsc_f897(){if (tlsc_p897) return tlsc_m897; else {tlsc_p897=T;return tlsc_m897=(((tlsc_f910()*tlsc_v4780)+(tlsc_f904()*tlsc_v4778))-tlsc_f898());}}
static int tlsc_f883(){if (tlsc_p883) return tlsc_m883; else {tlsc_p883=T;return tlsc_m883=(tlsc_f897()>(0.0));}}
static double tlsc_f922(){if (tlsc_p922) return tlsc_m922; else {tlsc_p922=T;return tlsc_m922=(tlsc_v4776-tlsc_f964());}}
static double tlsc_f917(){if (tlsc_p917) return tlsc_m917; else {tlsc_p917=T;return tlsc_m917=((tlsc_v922=tlsc_f922()),(tlsc_v920=tlsc_f920()),sqrt(((tlsc_v922*tlsc_v922)+(tlsc_v920*tlsc_v920))));}}
static int tlsc_f678(){if (tlsc_p678) return tlsc_m678; else {tlsc_p678=T;return tlsc_m678=(tlsc_f815()<tlsc_f917());}}
static int tlsc_f677(){if (tlsc_p677) return tlsc_m677; else {tlsc_p677=T;return tlsc_m677=(tlsc_f678()?tlsc_f1374():T);}}
static double tlsc_f439(){if (tlsc_p439) return tlsc_m439; else {tlsc_p439=T;return tlsc_m439=(tlsc_f678()?tlsc_f815():tlsc_f917());}}
static int tlsc_f662(){if (tlsc_p662) return tlsc_m662; else {tlsc_p662=T;return tlsc_m662=(tlsc_f1423()<tlsc_f917());}}
static int tlsc_f661(){if (tlsc_p661) return tlsc_m661; else {tlsc_p661=T;return tlsc_m661=(tlsc_f662()?tlsc_f1375():T);}}
static double tlsc_f426(){if (tlsc_p426) return tlsc_m426; else {tlsc_p426=T;return tlsc_m426=(tlsc_f662()?tlsc_f1423():tlsc_f917());}}
static double tlsc_f681(){if (tlsc_p681) return tlsc_m681; else {tlsc_p681=T;return tlsc_m681=(tlsc_f829()?((tlsc_v917=tlsc_f917()),(tlsc_v870=tlsc_f870()),((tlsc_v917<tlsc_v870)?tlsc_v917:tlsc_v870)):tlsc_f816());}}
static int tlsc_f680(){if (tlsc_p680) return tlsc_m680; else {tlsc_p680=T;return tlsc_m680=(tlsc_f815()<tlsc_f681());}}
static int tlsc_f664(){if (tlsc_p664) return tlsc_m664; else {tlsc_p664=T;return tlsc_m664=(tlsc_f1423()<tlsc_f681());}}
static int tlsc_f914(){if (tlsc_p914) return tlsc_m914; else {tlsc_p914=T;return tlsc_m914=(fabs((tlsc_f917()-(0.0)))<tlsc_v4723);}}
static int tlsc_f876(){if (tlsc_p876) return tlsc_m876; else {tlsc_p876=T;return tlsc_m876=((tlsc_v914=tlsc_f914()),(tlsc_v914?(((fabs((tlsc_f897()-(0.0)))<tlsc_v4723)?T:((tlsc_v888=tlsc_f888()),((fabs((tlsc_v888-(0.0)))<tlsc_v4723)?NIL:((tlsc_v888>(0.0))?tlsc_f883():(tlsc_f883()?NIL:T)))))?NIL:T):(tlsc_v914?NIL:T)));}}
static double_or_symbol tlsc_f14(){if (tlsc_p14) return tlsc_m14; else {tlsc_p14=T;return tlsc_m14=(tlsc_f876()?coerce_double_to_double_or_symbol(tlsc_f917()):coerce_symbol_to_double_or_symbol(NIL));}}
static double tlsc_f958(){if (tlsc_p958) return tlsc_m958; else {tlsc_p958=T;return tlsc_m958=(tlsc_f964()-tlsc_v4776);}}
static int tlsc_f952(){if (tlsc_p952) return tlsc_m952; else {tlsc_p952=T;return tlsc_m952=((fabs(tlsc_f958())<tlsc_v4723)?(fabs(tlsc_f955())<tlsc_v4723):NIL);}}
static int tlsc_f946(){if (tlsc_p946) return tlsc_m946; else {tlsc_p946=T;return tlsc_m946=((fabs((((tlsc_f3944()*tlsc_f964())+tlsc_f966())-tlsc_f3898()))<tlsc_v4723)?((tlsc_v952=tlsc_f952()),(tlsc_v952?tlsc_v952:(fabs((tlsc_v4764-atan2(tlsc_f955(),tlsc_f958())))<tlsc_v4723))):NIL);}}
static int tlsc_f819(){if (tlsc_p819) return tlsc_m819; else {tlsc_p819=T;return tlsc_m819=(tlsc_f1117()?(tlsc_f3877()?(tlsc_f3338()?tlsc_f1053():(tlsc_f1050()?(tlsc_f1047()?((tlsc_v1015=tlsc_f1015()),(tlsc_v1015?(tlsc_f985()?tlsc_f986():tlsc_v1015):tlsc_f985())):((tlsc_v1015=tlsc_f1015()),(tlsc_v1015?tlsc_v1015:NIL))):(tlsc_f1047()?tlsc_f985():NIL))):(tlsc_f973()?tlsc_f1053():(tlsc_f946()?(tlsc_f923()?((tlsc_v876=tlsc_f876()),(tlsc_v876?(tlsc_f828()?tlsc_f829():tlsc_v876):tlsc_f828())):((tlsc_v876=tlsc_f876()),(tlsc_v876?tlsc_v876:NIL))):(tlsc_f923()?tlsc_f828():NIL)))):NIL);}}
static int tlsc_f818(){if (tlsc_p818) return tlsc_m818; else {tlsc_p818=T;return tlsc_m818=((tlsc_v819=tlsc_f819()),(tlsc_v819?tlsc_v819:NIL));}}
static double tlsc_f1290(){if (tlsc_p1290) return tlsc_m1290; else {tlsc_p1290=T;return tlsc_m1290=((tlsc_v1293=tlsc_f1293()),((tlsc_v1293*tlsc_v1293)-((4.0)*tlsc_f3832()*(tlsc_f3876()-tlsc_f3830()))));}}
static int tlsc_f1289(){if (tlsc_p1289) return tlsc_m1289; else {tlsc_p1289=T;return tlsc_m1289=(tlsc_f1290()<0.0);}}
static double tlsc_f1285(){if (tlsc_p1285) return tlsc_m1285; else {tlsc_p1285=T;return tlsc_m1285=(sqrt(tlsc_f1290())/tlsc_f3823());}}
static double tlsc_f1260(){if (tlsc_p1260) return tlsc_m1260; else {tlsc_p1260=T;return tlsc_m1260=((tlsc_f1287()-tlsc_f1285())+tlsc_v4770);}}
static int tlsc_f1181(){if (tlsc_p1181) return tlsc_m1181; else {tlsc_p1181=T;return tlsc_m1181=(tlsc_v4770==tlsc_f1260());}}
static double tlsc_f1189(){if (tlsc_p1189) return tlsc_m1189; else {tlsc_p1189=T;return tlsc_m1189=(tlsc_v4778-tlsc_f1260());}}
static double tlsc_f1248(){if (tlsc_p1248) return tlsc_m1248; else {tlsc_p1248=T;return tlsc_m1248=(tlsc_f1260()-tlsc_v4778);}}
static double tlsc_f1259(){if (tlsc_p1259) return tlsc_m1259; else {tlsc_p1259=T;return tlsc_m1259=(tlsc_f3942()*tlsc_f1260());}}
static double tlsc_f1257(){if (tlsc_p1257) return tlsc_m1257; else {tlsc_p1257=T;return tlsc_m1257=((tlsc_f3939()-tlsc_f1259())/tlsc_f3944());}}
static int tlsc_f1182(){if (tlsc_p1182) return tlsc_m1182; else {tlsc_p1182=T;return tlsc_m1182=(tlsc_v4772==tlsc_f1257());}}
static double tlsc_f1179(){if (tlsc_p1179) return tlsc_m1179; else {tlsc_p1179=T;return tlsc_m1179=(tlsc_f1182()?(tlsc_f1181()?tlsc_f1413():(0.0)):(1.0));}}
static double tlsc_f1174(){if (tlsc_p1174) return tlsc_m1174; else {tlsc_p1174=T;return tlsc_m1174=((tlsc_f1260()-tlsc_v4770)/(tlsc_f1257()-tlsc_v4772));}}
static double tlsc_f1167(){if (tlsc_p1167) return tlsc_m1167; else {tlsc_p1167=T;return tlsc_m1167=(tlsc_f1182()?(tlsc_f1181()?tlsc_f1413():tlsc_f1260()):(tlsc_f1257()+(tlsc_f1174()*tlsc_f1260())));}}
static double tlsc_f1173(){if (tlsc_p1173) return tlsc_m1173; else {tlsc_p1173=T;return tlsc_m1173=(tlsc_f1182()?(tlsc_f1181()?tlsc_f1413():(1.0)):tlsc_f1174());}}
static double tlsc_f1157(){if (tlsc_p1157) return tlsc_m1157; else {tlsc_p1157=T;return tlsc_m1157=(((tlsc_f1179()*(tlsc_f1257()+tlsc_f3943()))+(tlsc_f1173()*(tlsc_f1260()+tlsc_f3944())))-tlsc_f1167());}}
static double tlsc_f1166(){if (tlsc_p1166) return tlsc_m1166; else {tlsc_p1166=T;return tlsc_m1166=(((tlsc_f1179()*tlsc_v4776)+(tlsc_f1173()*tlsc_v4774))-tlsc_f1167());}}
static int tlsc_f1152(){if (tlsc_p1152) return tlsc_m1152; else {tlsc_p1152=T;return tlsc_m1152=(tlsc_f1166()>(0.0));}}
static double tlsc_f1191(){if (tlsc_p1191) return tlsc_m1191; else {tlsc_p1191=T;return tlsc_m1191=(tlsc_v4780-tlsc_f1257());}}
static double tlsc_f1186(){if (tlsc_p1186) return tlsc_m1186; else {tlsc_p1186=T;return tlsc_m1186=((tlsc_v1191=tlsc_f1191()),(tlsc_v1189=tlsc_f1189()),sqrt(((tlsc_v1191*tlsc_v1191)+(tlsc_v1189*tlsc_v1189))));}}
static int tlsc_f582(){if (tlsc_p582) return tlsc_m582; else {tlsc_p582=T;return tlsc_m582=(tlsc_f1186()<tlsc_f681());}}
static double tlsc_f353(){if (tlsc_p353) return tlsc_m353; else {tlsc_p353=T;return tlsc_m353=((tlsc_v1186=tlsc_f1186()),(tlsc_v917=tlsc_f917()),((tlsc_v1186<tlsc_v917)?tlsc_v1186:tlsc_v917));}}
static double tlsc_f349(){if (tlsc_p349) return tlsc_m349; else {tlsc_p349=T;return tlsc_m349=(tlsc_f829()?((tlsc_v1186=tlsc_f1186()),(tlsc_v870=tlsc_f870()),((tlsc_v1186<tlsc_v870)?tlsc_v1186:tlsc_v870)):tlsc_f816());}}
static int tlsc_f592(){if (tlsc_p592) return tlsc_m592; else {tlsc_p592=T;return tlsc_m592=(tlsc_f1186()<tlsc_f814());}}
static int tlsc_f590(){if (tlsc_p590) return tlsc_m590; else {tlsc_p590=T;return tlsc_m590=(tlsc_f1186()<tlsc_f1104());}}
static int tlsc_f1183(){if (tlsc_p1183) return tlsc_m1183; else {tlsc_p1183=T;return tlsc_m1183=(fabs((tlsc_f1186()-(0.0)))<tlsc_v4723);}}
static int tlsc_f1145(){if (tlsc_p1145) return tlsc_m1145; else {tlsc_p1145=T;return tlsc_m1145=((tlsc_v1183=tlsc_f1183()),(tlsc_v1183?(((fabs((tlsc_f1166()-(0.0)))<tlsc_v4723)?T:((tlsc_v1157=tlsc_f1157()),((fabs((tlsc_v1157-(0.0)))<tlsc_v4723)?NIL:((tlsc_v1157>(0.0))?tlsc_f1152():(tlsc_f1152()?NIL:T)))))?NIL:T):(tlsc_v1183?NIL:T)));}}
static int tlsc_f573(){if (tlsc_p573) return tlsc_m573; else {tlsc_p573=T;return tlsc_m573=(tlsc_f1145()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?(tlsc_f1057()?(tlsc_f592()?T:tlsc_v1058):(tlsc_f1059()?(tlsc_f590()?T:tlsc_f1375()):NIL)):NIL)):NIL):NIL):NIL):(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f582()?T:tlsc_f829()):T):tlsc_f829()):tlsc_f876()):tlsc_f598())):NIL):NIL):NIL);}}
static double tlsc_f340(){if (tlsc_p340) return tlsc_m340; else {tlsc_p340=T;return tlsc_m340=(tlsc_f1145()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?(tlsc_f592()?tlsc_f1186():tlsc_f814()):(tlsc_f1059()?(tlsc_f590()?tlsc_f1186():tlsc_f1104()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816()):(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f582()?tlsc_f1186():tlsc_f681()):tlsc_f353()):tlsc_f349()):(tlsc_f876()?tlsc_f353():tlsc_f816())):(tlsc_f923()?tlsc_f349():tlsc_f816()))):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double_or_symbol tlsc_f41(){if (tlsc_p41) return tlsc_m41; else {tlsc_p41=T;return tlsc_m41=((tlsc_v1145=tlsc_f1145()),(tlsc_v1145?(tlsc_v1145?coerce_double_to_double_or_symbol(tlsc_f1186()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
static int tlsc_f1144(){if (tlsc_p1144) return tlsc_m1144; else {tlsc_p1144=T;return tlsc_m1144=((tlsc_v1145=tlsc_f1145()),(tlsc_v1145?tlsc_v1145:NIL));}}
static double tlsc_f1251(){if (tlsc_p1251) return tlsc_m1251; else {tlsc_p1251=T;return tlsc_m1251=(tlsc_f1257()-tlsc_v4780);}}
static int tlsc_f1245(){if (tlsc_p1245) return tlsc_m1245; else {tlsc_p1245=T;return tlsc_m1245=((fabs(tlsc_f1251())<tlsc_v4723)?(fabs(tlsc_f1248())<tlsc_v4723):NIL);}}
static int tlsc_f1239(){if (tlsc_p1239) return tlsc_m1239; else {tlsc_p1239=T;return tlsc_m1239=((fabs((((tlsc_f3944()*tlsc_f1257())+tlsc_f1259())-tlsc_f3939()))<tlsc_v4723)?((tlsc_v1245=tlsc_f1245()),(tlsc_v1245?tlsc_v1245:(fabs((tlsc_v4764-atan2(tlsc_f1248(),tlsc_f1251())))<tlsc_v4723))):NIL);}}
static double tlsc_f1283(){if (tlsc_p1283) return tlsc_m1283; else {tlsc_p1283=T;return tlsc_m1283=((tlsc_f1287()+tlsc_f1285())+tlsc_v4770);}}
static int tlsc_f1228(){if (tlsc_p1228) return tlsc_m1228; else {tlsc_p1228=T;return tlsc_m1228=(tlsc_v4770==tlsc_f1283());}}
static double tlsc_f1236(){if (tlsc_p1236) return tlsc_m1236; else {tlsc_p1236=T;return tlsc_m1236=(tlsc_v4778-tlsc_f1283());}}
static double tlsc_f1271(){if (tlsc_p1271) return tlsc_m1271; else {tlsc_p1271=T;return tlsc_m1271=(tlsc_f1283()-tlsc_v4778);}}
static double tlsc_f1282(){if (tlsc_p1282) return tlsc_m1282; else {tlsc_p1282=T;return tlsc_m1282=(tlsc_f3942()*tlsc_f1283());}}
static double tlsc_f1280(){if (tlsc_p1280) return tlsc_m1280; else {tlsc_p1280=T;return tlsc_m1280=((tlsc_f3939()-tlsc_f1282())/tlsc_f3944());}}
static int tlsc_f1229(){if (tlsc_p1229) return tlsc_m1229; else {tlsc_p1229=T;return tlsc_m1229=(tlsc_v4772==tlsc_f1280());}}
static double tlsc_f1226(){if (tlsc_p1226) return tlsc_m1226; else {tlsc_p1226=T;return tlsc_m1226=(tlsc_f1229()?(tlsc_f1228()?tlsc_f1413():(0.0)):(1.0));}}
static double tlsc_f1221(){if (tlsc_p1221) return tlsc_m1221; else {tlsc_p1221=T;return tlsc_m1221=((tlsc_f1283()-tlsc_v4770)/(tlsc_f1280()-tlsc_v4772));}}
static double tlsc_f1214(){if (tlsc_p1214) return tlsc_m1214; else {tlsc_p1214=T;return tlsc_m1214=(tlsc_f1229()?(tlsc_f1228()?tlsc_f1413():tlsc_f1283()):(tlsc_f1280()+(tlsc_f1221()*tlsc_f1283())));}}
static double tlsc_f1220(){if (tlsc_p1220) return tlsc_m1220; else {tlsc_p1220=T;return tlsc_m1220=(tlsc_f1229()?(tlsc_f1228()?tlsc_f1413():(1.0)):tlsc_f1221());}}
static double tlsc_f1204(){if (tlsc_p1204) return tlsc_m1204; else {tlsc_p1204=T;return tlsc_m1204=(((tlsc_f1226()*(tlsc_f1280()+tlsc_f3943()))+(tlsc_f1220()*(tlsc_f1283()+tlsc_f3944())))-tlsc_f1214());}}
static double tlsc_f1213(){if (tlsc_p1213) return tlsc_m1213; else {tlsc_p1213=T;return tlsc_m1213=(((tlsc_f1226()*tlsc_v4776)+(tlsc_f1220()*tlsc_v4774))-tlsc_f1214());}}
static int tlsc_f1199(){if (tlsc_p1199) return tlsc_m1199; else {tlsc_p1199=T;return tlsc_m1199=(tlsc_f1213()>(0.0));}}
static double tlsc_f1238(){if (tlsc_p1238) return tlsc_m1238; else {tlsc_p1238=T;return tlsc_m1238=(tlsc_v4780-tlsc_f1280());}}
static double tlsc_f1233(){if (tlsc_p1233) return tlsc_m1233; else {tlsc_p1233=T;return tlsc_m1233=((tlsc_v1238=tlsc_f1238()),(tlsc_v1236=tlsc_f1236()),sqrt(((tlsc_v1238*tlsc_v1238)+(tlsc_v1236*tlsc_v1236))));}}
static int tlsc_f603(){if (tlsc_p603) return tlsc_m603; else {tlsc_p603=T;return tlsc_m603=(tlsc_f1233()<tlsc_f681());}}
static double tlsc_f377(){if (tlsc_p377) return tlsc_m377; else {tlsc_p377=T;return tlsc_m377=((tlsc_v1233=tlsc_f1233()),(tlsc_v917=tlsc_f917()),((tlsc_v1233<tlsc_v917)?tlsc_v1233:tlsc_v917));}}
static double tlsc_f373(){if (tlsc_p373) return tlsc_m373; else {tlsc_p373=T;return tlsc_m373=(tlsc_f829()?((tlsc_v1233=tlsc_f1233()),(tlsc_v870=tlsc_f870()),((tlsc_v1233<tlsc_v870)?tlsc_v1233:tlsc_v870)):tlsc_f816());}}
static int tlsc_f613(){if (tlsc_p613) return tlsc_m613; else {tlsc_p613=T;return tlsc_m613=(tlsc_f1233()<tlsc_f814());}}
static int tlsc_f611(){if (tlsc_p611) return tlsc_m611; else {tlsc_p611=T;return tlsc_m611=(tlsc_f1233()<tlsc_f1104());}}
static int tlsc_f594(){if (tlsc_p594) return tlsc_m594; else {tlsc_p594=T;return tlsc_m594=(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?(tlsc_f1057()?(tlsc_f613()?T:tlsc_v1058):(tlsc_f1059()?(tlsc_f611()?T:tlsc_f1375()):NIL)):NIL)):NIL):NIL):NIL):(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f603()?T:tlsc_f829()):T):tlsc_f829()):tlsc_f876()):tlsc_f598())):NIL):NIL);}}
static double tlsc_f365(){if (tlsc_p365) return tlsc_m365; else {tlsc_p365=T;return tlsc_m365=(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?(tlsc_f613()?tlsc_f1233():tlsc_f814()):(tlsc_f1059()?(tlsc_f611()?tlsc_f1233():tlsc_f1104()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816()):(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f603()?tlsc_f1233():tlsc_f681()):tlsc_f377()):tlsc_f373()):(tlsc_f876()?tlsc_f377():tlsc_f816())):(tlsc_f923()?tlsc_f373():tlsc_f816()))):tlsc_f816()):tlsc_f816());}}
static double tlsc_f640(){if (tlsc_p640) return tlsc_m640; else {tlsc_p640=T;return tlsc_m640=(tlsc_f1145()?((tlsc_v1233=tlsc_f1233()),(tlsc_v1186=tlsc_f1186()),((tlsc_v1233<tlsc_v1186)?tlsc_v1233:tlsc_v1186)):tlsc_f816());}}
static int tlsc_f629(){if (tlsc_p629) return tlsc_m629; else {tlsc_p629=T;return tlsc_m629=(tlsc_f640()<tlsc_f681());}}
static int tlsc_f627(){if (tlsc_p627) return tlsc_m627; else {tlsc_p627=T;return tlsc_m627=(tlsc_f640()<tlsc_f917());}}
static int tlsc_f626(){if (tlsc_p626) return tlsc_m626; else {tlsc_p626=T;return tlsc_m626=(tlsc_f627()?tlsc_f1145():T);}}
static double tlsc_f399(){if (tlsc_p399) return tlsc_m399; else {tlsc_p399=T;return tlsc_m399=(tlsc_f627()?tlsc_f640():tlsc_f917());}}
static int tlsc_f624(){if (tlsc_p624) return tlsc_m624; else {tlsc_p624=T;return tlsc_m624=(tlsc_f640()<tlsc_f870());}}
static int tlsc_f622(){if (tlsc_p622) return tlsc_m622; else {tlsc_p622=T;return tlsc_m622=(tlsc_f829()?(tlsc_f624()?tlsc_f1145():T):NIL);}}
static double tlsc_f396(){if (tlsc_p396) return tlsc_m396; else {tlsc_p396=T;return tlsc_m396=(tlsc_f829()?(tlsc_f624()?tlsc_f640():tlsc_f870()):tlsc_f816());}}
static int tlsc_f639(){if (tlsc_p639) return tlsc_m639; else {tlsc_p639=T;return tlsc_m639=(tlsc_f640()<tlsc_f814());}}
static int tlsc_f637(){if (tlsc_p637) return tlsc_m637; else {tlsc_p637=T;return tlsc_m637=(tlsc_f640()<tlsc_f1104());}}
static int tlsc_f1230(){if (tlsc_p1230) return tlsc_m1230; else {tlsc_p1230=T;return tlsc_m1230=(fabs((tlsc_f1233()-(0.0)))<tlsc_v4723);}}
static int tlsc_f1192(){if (tlsc_p1192) return tlsc_m1192; else {tlsc_p1192=T;return tlsc_m1192=((tlsc_v1230=tlsc_f1230()),(tlsc_v1230?(((fabs((tlsc_f1213()-(0.0)))<tlsc_v4723)?T:((tlsc_v1204=tlsc_f1204()),((fabs((tlsc_v1204-(0.0)))<tlsc_v4723)?NIL:((tlsc_v1204>(0.0))?tlsc_f1199():(tlsc_f1199()?NIL:T)))))?NIL:T):(tlsc_v1230?NIL:T)));}}
static double_or_symbol tlsc_f44(){if (tlsc_p44) return tlsc_m44; else {tlsc_p44=T;return tlsc_m44=(tlsc_f1192()?coerce_double_to_double_or_symbol(tlsc_f1233()):coerce_symbol_to_double_or_symbol(NIL));}}
static double tlsc_f1274(){if (tlsc_p1274) return tlsc_m1274; else {tlsc_p1274=T;return tlsc_m1274=(tlsc_f1280()-tlsc_v4780);}}
static int tlsc_f1268(){if (tlsc_p1268) return tlsc_m1268; else {tlsc_p1268=T;return tlsc_m1268=((fabs(tlsc_f1274())<tlsc_v4723)?(fabs(tlsc_f1271())<tlsc_v4723):NIL);}}
static int tlsc_f1262(){if (tlsc_p1262) return tlsc_m1262; else {tlsc_p1262=T;return tlsc_m1262=((fabs((((tlsc_f3944()*tlsc_f1280())+tlsc_f1282())-tlsc_f3939()))<tlsc_v4723)?((tlsc_v1268=tlsc_f1268()),(tlsc_v1268?tlsc_v1268:(fabs((tlsc_v4764-atan2(tlsc_f1271(),tlsc_f1274())))<tlsc_v4723))):NIL);}}
static double tlsc_f3873(){if (tlsc_p3873) return tlsc_m3873; else {tlsc_p3873=T;return tlsc_m3873=(tlsc_f4367()-(tlsc_f3876()/tlsc_f3875()));}}
static int tlsc_f3872(){if (tlsc_p3872) return tlsc_m3872; else {tlsc_p3872=T;return tlsc_m3872=(tlsc_f3873()<0.0);}}
static double tlsc_f3839(){if (tlsc_p3839) return tlsc_m3839; else {tlsc_p3839=T;return tlsc_m3839=sqrt(tlsc_f3873());}}
static double tlsc_f3835(){if (tlsc_p3835) return tlsc_m3835; else {tlsc_p3835=T;return tlsc_m3835=((-tlsc_f3839())+tlsc_v4772);}}
static int tlsc_f3557(){if (tlsc_p3557) return tlsc_m3557; else {tlsc_p3557=T;return tlsc_m3557=(tlsc_v4772==tlsc_f3835());}}
static double tlsc_f1327(){if (tlsc_p1327) return tlsc_m1327; else {tlsc_p1327=T;return tlsc_m1327=(tlsc_f3557()?tlsc_f1359():(1.0));}}
static double tlsc_f3554(){if (tlsc_p3554) return tlsc_m3554; else {tlsc_p3554=T;return tlsc_m3554=(tlsc_f3602()/(tlsc_f3835()-tlsc_v4772));}}
static double tlsc_f1322(){if (tlsc_p1322) return tlsc_m1322; else {tlsc_p1322=T;return tlsc_m1322=(tlsc_f3557()?tlsc_f1352():(tlsc_f3835()+(tlsc_f3554()*tlsc_f3837())));}}
static double tlsc_f1325(){if (tlsc_p1325) return tlsc_m1325; else {tlsc_p1325=T;return tlsc_m1325=(tlsc_f3557()?tlsc_f1356():tlsc_f3554());}}
static double tlsc_f1314(){if (tlsc_p1314) return tlsc_m1314; else {tlsc_p1314=T;return tlsc_m1314=(((tlsc_f1327()*(tlsc_f3835()+tlsc_f3943()))+(tlsc_f1325()*tlsc_f3606()))-tlsc_f1322());}}
static double tlsc_f1321(){if (tlsc_p1321) return tlsc_m1321; else {tlsc_p1321=T;return tlsc_m1321=(((tlsc_f1327()*tlsc_v4776)+(tlsc_f1325()*tlsc_v4774))-tlsc_f1322());}}
static int tlsc_f1309(){if (tlsc_p1309) return tlsc_m1309; else {tlsc_p1309=T;return tlsc_m1309=(tlsc_f1321()>(0.0));}}
static double tlsc_f3566(){if (tlsc_p3566) return tlsc_m3566; else {tlsc_p3566=T;return tlsc_m3566=(tlsc_v4780-tlsc_f3835());}}
static double tlsc_f3563(){if (tlsc_p3563) return tlsc_m3563; else {tlsc_p3563=T;return tlsc_m3563=((tlsc_v3566=tlsc_f3566()),sqrt(((tlsc_v3566*tlsc_v3566)+tlsc_f3614())));}}
static int tlsc_f709(){if (tlsc_p709) return tlsc_m709; else {tlsc_p709=T;return tlsc_m709=(tlsc_f3563()<tlsc_f814());}}
static int tlsc_f707(){if (tlsc_p707) return tlsc_m707; else {tlsc_p707=T;return tlsc_m707=(tlsc_f3563()<tlsc_f1104());}}
static int tlsc_f699(){if (tlsc_p699) return tlsc_m699; else {tlsc_p699=T;return tlsc_m699=(tlsc_f3563()<tlsc_f803());}}
static double tlsc_f2703(){if (tlsc_p2703) return tlsc_m2703; else {tlsc_p2703=T;return tlsc_m2703=((tlsc_v3563=tlsc_f3563()),(tlsc_v3098=tlsc_f3098()),((tlsc_v3563<tlsc_v3098)?tlsc_v3563:tlsc_v3098));}}
static double tlsc_f456(){if (tlsc_p456) return tlsc_m456; else {tlsc_p456=T;return tlsc_m456=(tlsc_f986()?((tlsc_v3563=tlsc_f3563()),(tlsc_v3049=tlsc_f3049()),((tlsc_v3563<tlsc_v3049)?tlsc_v3563:tlsc_v3049)):tlsc_f816());}}
static int tlsc_f1328(){if (tlsc_p1328) return tlsc_m1328; else {tlsc_p1328=T;return tlsc_m1328=(fabs((tlsc_f3563()-(0.0)))<tlsc_v4723);}}
static int tlsc_f1302(){if (tlsc_p1302) return tlsc_m1302; else {tlsc_p1302=T;return tlsc_m1302=((tlsc_v1328=tlsc_f1328()),(tlsc_v1328?(((fabs((tlsc_f1321()-(0.0)))<tlsc_v4723)?T:((tlsc_v1314=tlsc_f1314()),((fabs((tlsc_v1314-(0.0)))<tlsc_v4723)?NIL:((tlsc_v1314>(0.0))?tlsc_f1309():(tlsc_f1309()?NIL:T)))))?NIL:T):(tlsc_v1328?NIL:T)));}}
static int tlsc_f690(){if (tlsc_p690) return tlsc_m690; else {tlsc_p690=T;return tlsc_m690=(tlsc_f1302()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?(tlsc_f1057()?(tlsc_f709()?T:tlsc_v1058):(tlsc_f1059()?(tlsc_f707()?T:tlsc_f1375()):NIL)):NIL)):NIL):NIL):NIL):(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f699()?T:tlsc_f986()):T):tlsc_f986()):tlsc_f1015()):tlsc_f715())):NIL):NIL):NIL);}}
static double tlsc_f447(){if (tlsc_p447) return tlsc_m447; else {tlsc_p447=T;return tlsc_m447=(tlsc_f1302()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?(tlsc_f709()?tlsc_f3563():tlsc_f814()):(tlsc_f1059()?(tlsc_f707()?tlsc_f3563():tlsc_f1104()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816()):(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f699()?tlsc_f3563():tlsc_f803()):tlsc_f2703()):tlsc_f456()):(tlsc_f1015()?tlsc_f2703():tlsc_f816())):(tlsc_f1047()?tlsc_f456():tlsc_f816()))):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double_or_symbol tlsc_f51(){if (tlsc_p51) return tlsc_m51; else {tlsc_p51=T;return tlsc_m51=((tlsc_v1302=tlsc_f1302()),(tlsc_v1302?(tlsc_v1302?coerce_double_to_double_or_symbol(tlsc_f3563()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
static int tlsc_f1301(){if (tlsc_p1301) return tlsc_m1301; else {tlsc_p1301=T;return tlsc_m1301=((tlsc_v1302=tlsc_f1302()),(tlsc_v1302?tlsc_v1302:NIL));}}
static double tlsc_f3749(){if (tlsc_p3749) return tlsc_m3749; else {tlsc_p3749=T;return tlsc_m3749=(tlsc_f3835()-tlsc_v4780);}}
static int tlsc_f1365(){if (tlsc_p1365) return tlsc_m1365; else {tlsc_p1365=T;return tlsc_m1365=((fabs(tlsc_f3749())<tlsc_v4723)?tlsc_f3762():NIL);}}
static int tlsc_f1363(){if (tlsc_p1363) return tlsc_m1363; else {tlsc_p1363=T;return tlsc_m1363=((fabs((((tlsc_f3944()*tlsc_f3835())+tlsc_f3772())-tlsc_f3939()))<tlsc_v4723)?((tlsc_v1365=tlsc_f1365()),(tlsc_v1365?tlsc_v1365:(fabs((tlsc_v4764-atan2(tlsc_f3764(),tlsc_f3749())))<tlsc_v4723))):NIL);}}
static double tlsc_f3836(){if (tlsc_p3836) return tlsc_m3836; else {tlsc_p3836=T;return tlsc_m3836=(tlsc_f3839()+tlsc_v4772);}}
static int tlsc_f3605(){if (tlsc_p3605) return tlsc_m3605; else {tlsc_p3605=T;return tlsc_m3605=(tlsc_v4772==tlsc_f3836());}}
static double tlsc_f1358(){if (tlsc_p1358) return tlsc_m1358; else {tlsc_p1358=T;return tlsc_m1358=(tlsc_f3605()?tlsc_f1359():(1.0));}}
static double tlsc_f3600(){if (tlsc_p3600) return tlsc_m3600; else {tlsc_p3600=T;return tlsc_m3600=(tlsc_f3602()/(tlsc_f3836()-tlsc_v4772));}}
static double tlsc_f1351(){if (tlsc_p1351) return tlsc_m1351; else {tlsc_p1351=T;return tlsc_m1351=(tlsc_f3605()?tlsc_f1352():(tlsc_f3836()+(tlsc_f3600()*tlsc_f3837())));}}
static double tlsc_f1355(){if (tlsc_p1355) return tlsc_m1355; else {tlsc_p1355=T;return tlsc_m1355=(tlsc_f3605()?tlsc_f1356():tlsc_f3600());}}
static double tlsc_f1343(){if (tlsc_p1343) return tlsc_m1343; else {tlsc_p1343=T;return tlsc_m1343=(((tlsc_f1358()*(tlsc_f3836()+tlsc_f3943()))+(tlsc_f1355()*tlsc_f3606()))-tlsc_f1351());}}
static double tlsc_f1350(){if (tlsc_p1350) return tlsc_m1350; else {tlsc_p1350=T;return tlsc_m1350=(((tlsc_f1358()*tlsc_v4776)+(tlsc_f1355()*tlsc_v4774))-tlsc_f1351());}}
static int tlsc_f1338(){if (tlsc_p1338) return tlsc_m1338; else {tlsc_p1338=T;return tlsc_m1338=(tlsc_f1350()>(0.0));}}
static double tlsc_f3617(){if (tlsc_p3617) return tlsc_m3617; else {tlsc_p3617=T;return tlsc_m3617=(tlsc_v4780-tlsc_f3836());}}
static double tlsc_f3612(){if (tlsc_p3612) return tlsc_m3612; else {tlsc_p3612=T;return tlsc_m3612=((tlsc_v3617=tlsc_f3617()),sqrt(((tlsc_v3617*tlsc_v3617)+tlsc_f3614())));}}
static int tlsc_f730(){if (tlsc_p730) return tlsc_m730; else {tlsc_p730=T;return tlsc_m730=(tlsc_f3612()<tlsc_f814());}}
static int tlsc_f728(){if (tlsc_p728) return tlsc_m728; else {tlsc_p728=T;return tlsc_m728=(tlsc_f3612()<tlsc_f1104());}}
static int tlsc_f720(){if (tlsc_p720) return tlsc_m720; else {tlsc_p720=T;return tlsc_m720=(tlsc_f3612()<tlsc_f803());}}
static int tlsc_f711(){if (tlsc_p711) return tlsc_m711; else {tlsc_p711=T;return tlsc_m711=(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?(tlsc_f1057()?(tlsc_f730()?T:tlsc_v1058):(tlsc_f1059()?(tlsc_f728()?T:tlsc_f1375()):NIL)):NIL)):NIL):NIL):NIL):(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f720()?T:tlsc_f986()):T):tlsc_f986()):tlsc_f1015()):tlsc_f715())):NIL):NIL);}}
static double tlsc_f2730(){if (tlsc_p2730) return tlsc_m2730; else {tlsc_p2730=T;return tlsc_m2730=((tlsc_v3612=tlsc_f3612()),(tlsc_v3098=tlsc_f3098()),((tlsc_v3612<tlsc_v3098)?tlsc_v3612:tlsc_v3098));}}
static double tlsc_f476(){if (tlsc_p476) return tlsc_m476; else {tlsc_p476=T;return tlsc_m476=(tlsc_f986()?((tlsc_v3612=tlsc_f3612()),(tlsc_v3049=tlsc_f3049()),((tlsc_v3612<tlsc_v3049)?tlsc_v3612:tlsc_v3049)):tlsc_f816());}}
static double tlsc_f468(){if (tlsc_p468) return tlsc_m468; else {tlsc_p468=T;return tlsc_m468=(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?(tlsc_f730()?tlsc_f3612():tlsc_f814()):(tlsc_f1059()?(tlsc_f728()?tlsc_f3612():tlsc_f1104()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816()):(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f720()?tlsc_f3612():tlsc_f803()):tlsc_f2730()):tlsc_f476()):(tlsc_f1015()?tlsc_f2730():tlsc_f816())):(tlsc_f1047()?tlsc_f476():tlsc_f816()))):tlsc_f816()):tlsc_f816());}}
static double tlsc_f757(){if (tlsc_p757) return tlsc_m757; else {tlsc_p757=T;return tlsc_m757=(tlsc_f1302()?((tlsc_v3612=tlsc_f3612()),(tlsc_v3563=tlsc_f3563()),((tlsc_v3612<tlsc_v3563)?tlsc_v3612:tlsc_v3563)):tlsc_f816());}}
static int tlsc_f756(){if (tlsc_p756) return tlsc_m756; else {tlsc_p756=T;return tlsc_m756=(tlsc_f757()<tlsc_f814());}}
static int tlsc_f754(){if (tlsc_p754) return tlsc_m754; else {tlsc_p754=T;return tlsc_m754=(tlsc_f757()<tlsc_f1104());}}
static int tlsc_f746(){if (tlsc_p746) return tlsc_m746; else {tlsc_p746=T;return tlsc_m746=(tlsc_f757()<tlsc_f803());}}
static int tlsc_f744(){if (tlsc_p744) return tlsc_m744; else {tlsc_p744=T;return tlsc_m744=(tlsc_f757()<tlsc_f3098());}}
static int tlsc_f743(){if (tlsc_p743) return tlsc_m743; else {tlsc_p743=T;return tlsc_m743=(tlsc_f744()?tlsc_f1302():T);}}
static double tlsc_f498(){if (tlsc_p498) return tlsc_m498; else {tlsc_p498=T;return tlsc_m498=(tlsc_f744()?tlsc_f757():tlsc_f3098());}}
static int tlsc_f741(){if (tlsc_p741) return tlsc_m741; else {tlsc_p741=T;return tlsc_m741=(tlsc_f757()<tlsc_f3049());}}
static int tlsc_f739(){if (tlsc_p739) return tlsc_m739; else {tlsc_p739=T;return tlsc_m739=(tlsc_f986()?(tlsc_f741()?tlsc_f1302():T):NIL);}}
static double tlsc_f495(){if (tlsc_p495) return tlsc_m495; else {tlsc_p495=T;return tlsc_m495=(tlsc_f986()?(tlsc_f741()?tlsc_f757():tlsc_f3049()):tlsc_f816());}}
static int tlsc_f1360(){if (tlsc_p1360) return tlsc_m1360; else {tlsc_p1360=T;return tlsc_m1360=(fabs((tlsc_f3612()-(0.0)))<tlsc_v4723);}}
static int tlsc_f1331(){if (tlsc_p1331) return tlsc_m1331; else {tlsc_p1331=T;return tlsc_m1331=((tlsc_v1360=tlsc_f1360()),(tlsc_v1360?(((fabs((tlsc_f1350()-(0.0)))<tlsc_v4723)?T:((tlsc_v1343=tlsc_f1343()),((fabs((tlsc_v1343-(0.0)))<tlsc_v4723)?NIL:((tlsc_v1343>(0.0))?tlsc_f1338():(tlsc_f1338()?NIL:T)))))?NIL:T):(tlsc_v1360?NIL:T)));}}
static double_or_symbol tlsc_f54(){if (tlsc_p54) return tlsc_m54; else {tlsc_p54=T;return tlsc_m54=(tlsc_f1331()?coerce_double_to_double_or_symbol(tlsc_f3612()):coerce_symbol_to_double_or_symbol(NIL));}}
static double tlsc_f3767(){if (tlsc_p3767) return tlsc_m3767; else {tlsc_p3767=T;return tlsc_m3767=(tlsc_f3836()-tlsc_v4780);}}
static int tlsc_f1368(){if (tlsc_p1368) return tlsc_m1368; else {tlsc_p1368=T;return tlsc_m1368=((fabs(tlsc_f3767())<tlsc_v4723)?tlsc_f3762():NIL);}}
static int tlsc_f1366(){if (tlsc_p1366) return tlsc_m1366; else {tlsc_p1366=T;return tlsc_m1366=((fabs((((tlsc_f3944()*tlsc_f3836())+tlsc_f3772())-tlsc_f3939()))<tlsc_v4723)?((tlsc_v1368=tlsc_f1368()),(tlsc_v1368?tlsc_v1368:(fabs((tlsc_v4764-atan2(tlsc_f3764(),tlsc_f3767())))<tlsc_v4723))):NIL);}}
static int tlsc_f1135(){if (tlsc_p1135) return tlsc_m1135; else {tlsc_p1135=T;return tlsc_m1135=(tlsc_f1441()?(tlsc_f3877()?(tlsc_f3872()?tlsc_f1369():(tlsc_f1366()?(tlsc_f1363()?((tlsc_v1331=tlsc_f1331()),(tlsc_v1331?(tlsc_f1301()?tlsc_f1302():tlsc_v1331):tlsc_f1301())):((tlsc_v1331=tlsc_f1331()),(tlsc_v1331?tlsc_v1331:NIL))):(tlsc_f1363()?tlsc_f1301():NIL))):(tlsc_f1289()?tlsc_f1369():(tlsc_f1262()?(tlsc_f1239()?((tlsc_v1192=tlsc_f1192()),(tlsc_v1192?(tlsc_f1144()?tlsc_f1145():tlsc_v1192):tlsc_f1144())):((tlsc_v1192=tlsc_f1192()),(tlsc_v1192?tlsc_v1192:NIL))):(tlsc_f1239()?tlsc_f1144():NIL)))):NIL);}}
static double tlsc_f332(){if (tlsc_p332) return tlsc_m332; else {tlsc_p332=T;return tlsc_m332=(tlsc_f1441()?(tlsc_f3877()?(tlsc_f3872()?(tlsc_f1455()?(tlsc_f1430()?(tlsc_f1426()?(tlsc_f1374()?(tlsc_f1373()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?tlsc_f549():(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f802()?tlsc_f815():tlsc_f803()):tlsc_f547()):tlsc_f544()):(tlsc_f1015()?tlsc_f547():tlsc_f816())):(tlsc_f1047()?tlsc_f544():tlsc_f816()))):tlsc_f816()):tlsc_f816()):(tlsc_f1376()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?tlsc_f527():(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f779()?tlsc_f1423():tlsc_f803()):tlsc_f525()):tlsc_f522()):(tlsc_f1015()?tlsc_f525():tlsc_f816())):(tlsc_f1047()?tlsc_f522():tlsc_f816()))):tlsc_f816()):tlsc_f816()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816()):(tlsc_f1366()?(tlsc_f1363()?(tlsc_f1331()?(tlsc_f1301()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?(tlsc_f756()?tlsc_f757():tlsc_f814()):(tlsc_f1059()?(tlsc_f754()?tlsc_f757():tlsc_f1104()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816()):(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f746()?tlsc_f757():tlsc_f803()):tlsc_f498()):tlsc_f495()):(tlsc_f1015()?tlsc_f498():tlsc_f816())):(tlsc_f1047()?tlsc_f495():tlsc_f816()))):tlsc_f816()):tlsc_f816()):tlsc_f468()):tlsc_f447()):(tlsc_f1331()?tlsc_f468():tlsc_f816())):(tlsc_f1363()?tlsc_f447():tlsc_f816()))):(tlsc_f1289()?(tlsc_f1455()?(tlsc_f1430()?(tlsc_f1426()?(tlsc_f1374()?(tlsc_f1373()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?tlsc_f549():(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f680()?tlsc_f815():tlsc_f681()):tlsc_f439()):tlsc_f436()):(tlsc_f876()?tlsc_f439():tlsc_f816())):(tlsc_f923()?tlsc_f436():tlsc_f816()))):tlsc_f816()):tlsc_f816()):(tlsc_f1376()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?tlsc_f527():(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f664()?tlsc_f1423():tlsc_f681()):tlsc_f426()):tlsc_f423()):(tlsc_f876()?tlsc_f426():tlsc_f816())):(tlsc_f923()?tlsc_f423():tlsc_f816()))):tlsc_f816()):tlsc_f816()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816()):(tlsc_f1262()?(tlsc_f1239()?(tlsc_f1192()?(tlsc_f1144()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?(tlsc_f639()?tlsc_f640():tlsc_f814()):(tlsc_f1059()?(tlsc_f637()?tlsc_f640():tlsc_f1104()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816()):(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f629()?tlsc_f640():tlsc_f681()):tlsc_f399()):tlsc_f396()):(tlsc_f876()?tlsc_f399():tlsc_f816())):(tlsc_f923()?tlsc_f396():tlsc_f816()))):tlsc_f816()):tlsc_f816()):tlsc_f365()):tlsc_f340()):(tlsc_f1192()?tlsc_f365():tlsc_f816())):(tlsc_f1239()?tlsc_f340():tlsc_f816())))):tlsc_f816());}}
static int tlsc_f4385(){if (tlsc_p4385) return tlsc_m4385; else {tlsc_p4385=T;return tlsc_m4385=(fabs((tlsc_v4780-tlsc_v4776))<tlsc_v4723);}}
static double tlsc_f4390(){if (tlsc_p4390) return tlsc_m4390; else {tlsc_p4390=T;return tlsc_m4390=(tlsc_v4778-tlsc_v4774);}}
static int tlsc_f4388(){if (tlsc_p4388) return tlsc_m4388; else {tlsc_p4388=T;return tlsc_m4388=(fabs(tlsc_f4390())<tlsc_v4723);}}
static double tlsc_f4383(){if (tlsc_p4383) return tlsc_m4383; else {tlsc_p4383=T;return tlsc_m4383=(tlsc_v4753/tlsc_f4390());}}
static double tlsc_f1881(){if (tlsc_p1881) return tlsc_m1881; else {tlsc_p1881=T;return tlsc_m1881=error("No applicable method for DISTANCE with argument types (POINT (OR POINT BOOLEAN))");}}
static double tlsc_f1897(){if (tlsc_p1897) return tlsc_m1897; else {tlsc_p1897=T;return tlsc_m1897=error("SLOT-VALUE called on non-instance");}}
static double tlsc_f2000(){if (tlsc_p2000) return tlsc_m2000; else {tlsc_p2000=T;return tlsc_m2000=(tlsc_v2067-tlsc_v4770);}}
static double tlsc_f1971(){if (tlsc_p1971) return tlsc_m1971; else {tlsc_p1971=T;return tlsc_m1971=(tlsc_v2068-tlsc_v4770);}}
static double tlsc_f2036(){if (tlsc_p2036) return tlsc_m2036; else {tlsc_p2036=T;return tlsc_m2036=((tlsc_v2074*tlsc_v4772)+(tlsc_v2047*tlsc_v4770));}}
static int tlsc_f1557(){if (tlsc_p1557) return tlsc_m1557; else {tlsc_p1557=T;return tlsc_m1557=((fabs((((tlsc_v2074*tlsc_f1645())+(tlsc_v2047*tlsc_f1652()))-tlsc_f2036()))<tlsc_v4723)?((tlsc_v1563=tlsc_f1563()),(tlsc_v1563?tlsc_v1563:(fabs((tlsc_v2075-atan2(tlsc_f1566(),tlsc_f1569())))<tlsc_v4723))):NIL);}}
static int tlsc_f1585(){if (tlsc_p1585) return tlsc_m1585; else {tlsc_p1585=T;return tlsc_m1585=((fabs((((tlsc_v2074*tlsc_f1644())+(tlsc_v2047*tlsc_f1651()))-tlsc_f2036()))<tlsc_v4723)?((tlsc_v1591=tlsc_f1591()),(tlsc_v1591?tlsc_v1591:(fabs((tlsc_v2075-atan2(tlsc_f1594(),tlsc_f1597())))<tlsc_v4723))):NIL);}}
static int tlsc_f1553(){if (tlsc_p1553) return tlsc_m1553; else {tlsc_p1553=T;return tlsc_m1553=((tlsc_v1557=tlsc_f1557()),(tlsc_v1557?tlsc_v1557:tlsc_f1585()));}}
static int tlsc_f1583(){if (tlsc_p1583) return tlsc_m1583; else {tlsc_p1583=T;return tlsc_m1583=(((fabs((tlsc_v4772-tlsc_f1645()))<tlsc_v4723)?(fabs((tlsc_v4770-tlsc_f1652()))<tlsc_v4723):NIL)?(tlsc_f1585()?NIL:T):NIL);}}
static int tlsc_f1554(){if (tlsc_p1554) return tlsc_m1554; else {tlsc_p1554=T;return tlsc_m1554=((tlsc_v1583=tlsc_f1583()),(tlsc_v1583?tlsc_v1583:(((fabs((tlsc_v4772-tlsc_f1644()))<tlsc_v4723)?(fabs((tlsc_v4770-tlsc_f1651()))<tlsc_v4723):NIL)?(tlsc_f1557()?NIL:T):NIL)));}}
static double tlsc_f2055(){if (tlsc_p2055) return tlsc_m2055; else {tlsc_p2055=T;return tlsc_m2055=error("Can't form a single line when the end points are the same");}}
static double tlsc_f1624(){if (tlsc_p1624) return tlsc_m1624; else {tlsc_p1624=T;return tlsc_m1624=(tlsc_f1648()?(tlsc_f1641()?tlsc_f2055():tlsc_f1652()):(tlsc_f1645()+(tlsc_f1638()*tlsc_f1652())));}}
static double tlsc_f1637(){if (tlsc_p1637) return tlsc_m1637; else {tlsc_p1637=T;return tlsc_m1637=(tlsc_f1648()?(tlsc_f1641()?tlsc_f2055():(1.0)):tlsc_f1638());}}
static double tlsc_f1622(){if (tlsc_p1622) return tlsc_m1622; else {tlsc_p1622=T;return tlsc_m1622=((tlsc_f2036()*tlsc_f1637())-(tlsc_v2047*tlsc_f1624()));}}
static double tlsc_f1634(){if (tlsc_p1634) return tlsc_m1634; else {tlsc_p1634=T;return tlsc_m1634=(tlsc_f1648()?(tlsc_f1641()?tlsc_f2055():(0.0)):(1.0));}}
static double tlsc_f1616(){if (tlsc_p1616) return tlsc_m1616; else {tlsc_p1616=T;return tlsc_m1616=((tlsc_v2074*tlsc_f1624())-(tlsc_f2036()*tlsc_f1634()));}}
static int tlsc_f1612(){if (tlsc_p1612) return tlsc_m1612; else {tlsc_p1612=T;return tlsc_m1612=((fabs((tlsc_f1622()-(0.0)))<tlsc_v4723)?(fabs((tlsc_f1616()-(0.0)))<tlsc_v4723):NIL);}}
static double tlsc_f1632(){if (tlsc_p1632) return tlsc_m1632; else {tlsc_p1632=T;return tlsc_m1632=((tlsc_v2074*tlsc_f1637())-(tlsc_v2047*tlsc_f1634()));}}
static double tlsc_f1550(){if (tlsc_p1550) return tlsc_m1550; else {tlsc_p1550=T;return tlsc_m1550=(tlsc_f1622()/tlsc_f1632());}}
static double tlsc_f1542(){if (tlsc_p1542) return tlsc_m1542; else {tlsc_p1542=T;return tlsc_m1542=(tlsc_f1550()-tlsc_v4772);}}
static double tlsc_f1548(){if (tlsc_p1548) return tlsc_m1548; else {tlsc_p1548=T;return tlsc_m1548=(tlsc_f1616()/tlsc_f1632());}}
static double tlsc_f1539(){if (tlsc_p1539) return tlsc_m1539; else {tlsc_p1539=T;return tlsc_m1539=(tlsc_f1548()-tlsc_v4770);}}
static int tlsc_f1536(){if (tlsc_p1536) return tlsc_m1536; else {tlsc_p1536=T;return tlsc_m1536=((fabs(tlsc_f1542())<tlsc_v4723)?(fabs(tlsc_f1539())<tlsc_v4723):NIL);}}
static int tlsc_f1629(){if (tlsc_p1629) return tlsc_m1629; else {tlsc_p1629=T;return tlsc_m1629=(fabs((tlsc_f1632()-(0.0)))<tlsc_v4723);}}
static int tlsc_f1611(){if (tlsc_p1611) return tlsc_m1611; else {tlsc_p1611=T;return tlsc_m1611=(tlsc_f1629()?tlsc_f1612():NIL);}}
static int tlsc_f1551(){if (tlsc_p1551) return tlsc_m1551; else {tlsc_p1551=T;return tlsc_m1551=(tlsc_f1629()?tlsc_f1612():T);}}
static int tlsc_f1504(){if (tlsc_p1504) return tlsc_m1504; else {tlsc_p1504=T;return tlsc_m1504=(tlsc_f1551()?((tlsc_v1629=tlsc_f1629()),((tlsc_v1629?NIL:((fabs((((tlsc_v2074*tlsc_f1550())+(tlsc_v2047*tlsc_f1548()))-tlsc_f2036()))<tlsc_v4723)?((tlsc_v1536=tlsc_f1536()),(tlsc_v1536?tlsc_v1536:(fabs((tlsc_v2075-atan2(tlsc_f1539(),tlsc_f1542())))<tlsc_v4723))):NIL))?(tlsc_v1629?NIL:((tlsc_v1550=tlsc_f1550()),(tlsc_v1548=tlsc_f1548()),((fabs((((tlsc_f1634()*tlsc_v1550)+(tlsc_f1637()*tlsc_v1548))-tlsc_f1624()))<tlsc_v4723)?((tlsc_v1645=tlsc_f1645()),(tlsc_v1644=tlsc_f1644()),((((((tlsc_v1645<tlsc_v1644)?tlsc_v1645:tlsc_v1644)-tlsc_v4723)<=tlsc_v1550)&&(tlsc_v1550<=(((tlsc_v1645>tlsc_v1644)?tlsc_v1645:tlsc_v1644)+tlsc_v4723)))?((tlsc_v1652=tlsc_f1652()),(tlsc_v1651=tlsc_f1651()),(((((tlsc_v1652<tlsc_v1651)?tlsc_v1652:tlsc_v1651)-tlsc_v4723)<=tlsc_v1548)&&(tlsc_v1548<=(((tlsc_v1652>tlsc_v1651)?tlsc_v1652:tlsc_v1651)+tlsc_v4723)))):NIL)):NIL))):NIL)):NIL);}}
static int tlsc_f1497(){if (tlsc_p1497) return tlsc_m1497; else {tlsc_p1497=T;return tlsc_m1497=((tlsc_v1611=tlsc_f1611()),((tlsc_v1611?(tlsc_f1554()?T:tlsc_f1553()):(tlsc_f1504()?tlsc_f1551():NIL))?((tlsc_v1611?(tlsc_f1554()?NIL:tlsc_f1553()):(tlsc_f1504()?tlsc_v1611:NIL))?NIL:T):NIL));}}
static int tlsc_f1494(){if (tlsc_p1494) return tlsc_m1494; else {tlsc_p1494=T;return tlsc_m1494=(tlsc_f1611()?tlsc_f1554():(tlsc_f1504()?(tlsc_f1629()?NIL:T):NIL));}}
static double tlsc_f1489(){if (tlsc_p1489) return tlsc_m1489; else {tlsc_p1489=T;return tlsc_m1489=(tlsc_v4772-(tlsc_f1611()?(tlsc_f1554()?tlsc_v4772:tlsc_f1897()):(tlsc_f1504()?(tlsc_f1629()?tlsc_f1897():tlsc_f1550()):tlsc_f1897())));}}
static double tlsc_f1483(){if (tlsc_p1483) return tlsc_m1483; else {tlsc_p1483=T;return tlsc_m1483=(tlsc_v4770-(tlsc_f1611()?(tlsc_f1554()?tlsc_v4770:tlsc_f1897()):(tlsc_f1504()?(tlsc_f1629()?tlsc_f1897():tlsc_f1548()):tlsc_f1897())));}}
static double tlsc_f1479(){if (tlsc_p1479) return tlsc_m1479; else {tlsc_p1479=T;return tlsc_m1479=(tlsc_f1494()?((tlsc_v1489=tlsc_f1489()),(tlsc_v1483=tlsc_f1483()),sqrt(((tlsc_v1489*tlsc_v1489)+(tlsc_v1483*tlsc_v1483)))):tlsc_f1881());}}
static double tlsc_f129(){if (tlsc_p129) return tlsc_m129; else {tlsc_p129=T;return tlsc_m129=((tlsc_v1479=tlsc_f1479()),(tlsc_v1233=tlsc_f1233()),((tlsc_v1479<tlsc_v1233)?tlsc_v1479:tlsc_v1233));}}
static double tlsc_f125(){if (tlsc_p125) return tlsc_m125; else {tlsc_p125=T;return tlsc_m125=(tlsc_f1145()?((tlsc_v1479=tlsc_f1479()),(tlsc_v1186=tlsc_f1186()),((tlsc_v1479<tlsc_v1186)?tlsc_v1479:tlsc_v1186)):tlsc_f816());}}
static double tlsc_f147(){if (tlsc_p147) return tlsc_m147; else {tlsc_p147=T;return tlsc_m147=(tlsc_f1455()?(tlsc_f1430()?(tlsc_f1426()?(tlsc_f1374()?(tlsc_f1373()?((tlsc_v1479=tlsc_f1479()),(tlsc_v815=tlsc_f815()),((tlsc_v1479<tlsc_v815)?tlsc_v1479:tlsc_v815)):(tlsc_f1376()?((tlsc_v1479=tlsc_f1479()),(tlsc_v1423=tlsc_f1423()),((tlsc_v1479<tlsc_v1423)?tlsc_v1479:tlsc_v1423)):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double tlsc_f143(){if (tlsc_p143) return tlsc_m143; else {tlsc_p143=T;return tlsc_m143=((tlsc_v1479=tlsc_f1479()),(tlsc_v3612=tlsc_f3612()),((tlsc_v1479<tlsc_v3612)?tlsc_v1479:tlsc_v3612));}}
static double tlsc_f139(){if (tlsc_p139) return tlsc_m139; else {tlsc_p139=T;return tlsc_m139=(tlsc_f1302()?((tlsc_v1479=tlsc_f1479()),(tlsc_v3563=tlsc_f3563()),((tlsc_v1479<tlsc_v3563)?tlsc_v1479:tlsc_v3563)):tlsc_f816());}}
static double tlsc_f88(){if (tlsc_p88) return tlsc_m88; else {tlsc_p88=T;return tlsc_m88=((tlsc_v1479=tlsc_f1479()),(tlsc_v917=tlsc_f917()),((tlsc_v1479<tlsc_v917)?tlsc_v1479:tlsc_v917));}}
static double tlsc_f84(){if (tlsc_p84) return tlsc_m84; else {tlsc_p84=T;return tlsc_m84=(tlsc_f829()?((tlsc_v1479=tlsc_f1479()),(tlsc_v870=tlsc_f870()),((tlsc_v1479<tlsc_v870)?tlsc_v1479:tlsc_v870)):tlsc_f816());}}
static double tlsc_f106(){if (tlsc_p106) return tlsc_m106; else {tlsc_p106=T;return tlsc_m106=(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?((tlsc_v1479=tlsc_f1479()),(tlsc_v814=tlsc_f814()),((tlsc_v1479<tlsc_v814)?tlsc_v1479:tlsc_v814)):(tlsc_f1059()?((tlsc_v1479=tlsc_f1479()),(tlsc_v1104=tlsc_f1104()),((tlsc_v1479<tlsc_v1104)?tlsc_v1479:tlsc_v1104)):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double tlsc_f102(){if (tlsc_p102) return tlsc_m102; else {tlsc_p102=T;return tlsc_m102=((tlsc_v1479=tlsc_f1479()),(tlsc_v3098=tlsc_f3098()),((tlsc_v1479<tlsc_v3098)?tlsc_v1479:tlsc_v3098));}}
static double tlsc_f98(){if (tlsc_p98) return tlsc_m98; else {tlsc_p98=T;return tlsc_m98=(tlsc_f986()?((tlsc_v1479=tlsc_f1479()),(tlsc_v3049=tlsc_f3049()),((tlsc_v1479<tlsc_v3049)?tlsc_v1479:tlsc_v3049)):tlsc_f816());}}
static int tlsc_f1476(){if (tlsc_p1476) return tlsc_m1476; else {tlsc_p1476=T;return tlsc_m1476=(fabs((tlsc_f1479()-(0.0)))<tlsc_v4723);}}
static double tlsc_f1872(){if (tlsc_p1872) return tlsc_m1872; else {tlsc_p1872=T;return tlsc_m1872=(tlsc_f4388()?(tlsc_f4385()?tlsc_f2055():tlsc_v4778):(tlsc_v4780+(tlsc_f4383()*tlsc_v4778)));}}
static double tlsc_f1875(){if (tlsc_p1875) return tlsc_m1875; else {tlsc_p1875=T;return tlsc_m1875=(tlsc_f4388()?(tlsc_f4385()?tlsc_f2055():(0.0)):(1.0));}}
static int tlsc_f1874(){if (tlsc_p1874) return tlsc_m1874; else {tlsc_p1874=T;return tlsc_m1874=(tlsc_f1875()==0.0);}}
static double tlsc_f1851(){if (tlsc_p1851) return tlsc_m1851; else {tlsc_p1851=T;return tlsc_m1851=(tlsc_f1875()*tlsc_v4770);}}
static double tlsc_f1861(){if (tlsc_p1861) return tlsc_m1861; else {tlsc_p1861=T;return tlsc_m1861=((tlsc_v1875=tlsc_f1875()),(tlsc_v1875*tlsc_v1875));}}
static double tlsc_f1871(){if (tlsc_p1871) return tlsc_m1871; else {tlsc_p1871=T;return tlsc_m1871=(tlsc_f1875()*tlsc_v4772);}}
static double tlsc_f1869(){if (tlsc_p1869) return tlsc_m1869; else {tlsc_p1869=T;return tlsc_m1869=(tlsc_f4388()?(tlsc_f4385()?tlsc_f2055():(1.0)):tlsc_f4383());}}
static double tlsc_f1763(){if (tlsc_p1763) return tlsc_m1763; else {tlsc_p1763=T;return tlsc_m1763=(tlsc_f1872()/tlsc_f1869());}}
static int tlsc_f1756(){if (tlsc_p1756) return tlsc_m1756; else {tlsc_p1756=T;return tlsc_m1756=((tlsc_f4227()<=tlsc_f1763())&&(tlsc_f1763()<=tlsc_f4225()));}}
static double tlsc_f1762(){if (tlsc_p1762) return tlsc_m1762; else {tlsc_p1762=T;return tlsc_m1762=(tlsc_f1869()*tlsc_f1763());}}
static int tlsc_f1831(){if (tlsc_p1831) return tlsc_m1831; else {tlsc_p1831=T;return tlsc_m1831=(tlsc_f1869()>0.0);}}
static double tlsc_f1829(){if (tlsc_p1829) return tlsc_m1829; else {tlsc_p1829=T;return tlsc_m1829=(tlsc_f1831()?(-tlsc_f1875()):tlsc_f1875());}}
static double tlsc_f1850(){if (tlsc_p1850) return tlsc_m1850; else {tlsc_p1850=T;return tlsc_m1850=(tlsc_f1869()*tlsc_v4772);}}
static double tlsc_f1849(){if (tlsc_p1849) return tlsc_m1849; else {tlsc_p1849=T;return tlsc_m1849=(tlsc_f1851()-tlsc_f1850());}}
static double tlsc_f1819(){if (tlsc_p1819) return tlsc_m1819; else {tlsc_p1819=T;return tlsc_m1819=(tlsc_f1831()?(tlsc_f1850()-tlsc_f1851()):tlsc_f1849());}}
static double tlsc_f1817(){if (tlsc_p1817) return tlsc_m1817; else {tlsc_p1817=T;return tlsc_m1817=((tlsc_f1872()*tlsc_f1829())-(tlsc_f1869()*tlsc_f1819()));}}
static double tlsc_f1860(){if (tlsc_p1860) return tlsc_m1860; else {tlsc_p1860=T;return tlsc_m1860=(-tlsc_f1869());}}
static double tlsc_f1827(){if (tlsc_p1827) return tlsc_m1827; else {tlsc_p1827=T;return tlsc_m1827=(tlsc_f1831()?tlsc_f1869():tlsc_f1860());}}
static double tlsc_f1825(){if (tlsc_p1825) return tlsc_m1825; else {tlsc_p1825=T;return tlsc_m1825=((tlsc_f1875()*tlsc_f1829())-(tlsc_f1869()*tlsc_f1827()));}}
static double tlsc_f1805(){if (tlsc_p1805) return tlsc_m1805; else {tlsc_p1805=T;return tlsc_m1805=(tlsc_f1817()/tlsc_f1825());}}
static int tlsc_f1822(){if (tlsc_p1822) return tlsc_m1822; else {tlsc_p1822=T;return tlsc_m1822=(fabs((tlsc_f1825()-(0.0)))<tlsc_v4723);}}
static double tlsc_f1811(){if (tlsc_p1811) return tlsc_m1811; else {tlsc_p1811=T;return tlsc_m1811=((tlsc_f1875()*tlsc_f1819())-(tlsc_f1872()*tlsc_f1827()));}}
static double tlsc_f1803(){if (tlsc_p1803) return tlsc_m1803; else {tlsc_p1803=T;return tlsc_m1803=(tlsc_f1811()/tlsc_f1825());}}
static int tlsc_f1793(){if (tlsc_p1793) return tlsc_m1793; else {tlsc_p1793=T;return tlsc_m1793=(tlsc_f1822()?NIL:((tlsc_v1805=tlsc_f1805()),(tlsc_v1803=tlsc_f1803()),((fabs((((tlsc_f1875()*tlsc_v1805)+(tlsc_f1869()*tlsc_v1803))-tlsc_f1872()))<tlsc_v4723)?(((tlsc_f4236()<=tlsc_v1805)&&(tlsc_v1805<=tlsc_f4234()))?((tlsc_f4227()<=tlsc_v1803)&&(tlsc_v1803<=tlsc_f4225())):NIL):NIL)));}}
static int tlsc_f1807(){if (tlsc_p1807) return tlsc_m1807; else {tlsc_p1807=T;return tlsc_m1807=((fabs((tlsc_f1817()-(0.0)))<tlsc_v4723)?(fabs((tlsc_f1811()-(0.0)))<tlsc_v4723):NIL);}}
static int tlsc_f1806(){if (tlsc_p1806) return tlsc_m1806; else {tlsc_p1806=T;return tlsc_m1806=(tlsc_f1822()?tlsc_f1807():T);}}
static double tlsc_f1858(){if (tlsc_p1858) return tlsc_m1858; else {tlsc_p1858=T;return tlsc_m1858=(tlsc_f1861()-(tlsc_f1869()*tlsc_f1860()));}}
static double tlsc_f1845(){if (tlsc_p1845) return tlsc_m1845; else {tlsc_p1845=T;return tlsc_m1845=((((tlsc_f1872()*tlsc_f1875())-(tlsc_f1869()*tlsc_f1849()))/tlsc_f1858())-tlsc_v4772);}}
static double tlsc_f1839(){if (tlsc_p1839) return tlsc_m1839; else {tlsc_p1839=T;return tlsc_m1839=((((tlsc_f1875()*tlsc_f1849())-(tlsc_f1872()*tlsc_f1860()))/tlsc_f1858())-tlsc_v4770);}}
static int tlsc_f1832(){if (tlsc_p1832) return tlsc_m1832; else {tlsc_p1832=T;return tlsc_m1832=(fabs((((fabs((tlsc_f1858()-(0.0)))<tlsc_v4723)?tlsc_f1853():((tlsc_v1845=tlsc_f1845()),(tlsc_v1839=tlsc_f1839()),sqrt(((tlsc_v1845*tlsc_v1845)+(tlsc_v1839*tlsc_v1839)))))-tlsc_v4755))<tlsc_v4723);}}
static double tlsc_f1702(){if (tlsc_p1702) return tlsc_m1702; else {tlsc_p1702=T;return tlsc_m1702=(tlsc_f1832()?(tlsc_f1806()?(tlsc_f1793()?(tlsc_f1822()?tlsc_f1897():tlsc_f1805()):tlsc_f1897()):tlsc_f1897()):tlsc_f1897());}}
static double tlsc_f1686(){if (tlsc_p1686) return tlsc_m1686; else {tlsc_p1686=T;return tlsc_m1686=(tlsc_f1832()?(tlsc_f1806()?(tlsc_f1793()?(tlsc_f1822()?tlsc_f1897():tlsc_f1803()):tlsc_f1897()):tlsc_f1897()):tlsc_f1897());}}
static int tlsc_f1767(){if (tlsc_p1767) return tlsc_m1767; else {tlsc_p1767=T;return tlsc_m1767=(tlsc_f1832()?(tlsc_f1806()?(tlsc_f1793()?(tlsc_f1822()?NIL:T):NIL):NIL):NIL);}}
static int tlsc_f1789(){if (tlsc_p1789) return tlsc_m1789; else {tlsc_p1789=T;return tlsc_m1789=(tlsc_f1832()?(tlsc_f1806()?(tlsc_f1793()?(tlsc_f1822()?tlsc_f1807():NIL):NIL):NIL):NIL);}}
static double tlsc_f1865(){if (tlsc_p1865) return tlsc_m1865; else {tlsc_p1865=T;return tlsc_m1865=((tlsc_v1869=tlsc_f1869()),(tlsc_v1869*tlsc_v1869));}}
static double tlsc_f1783(){if (tlsc_p1783) return tlsc_m1783; else {tlsc_p1783=T;return tlsc_m1783=(tlsc_f1861()+tlsc_f1865());}}
static double tlsc_f1740(){if (tlsc_p1740) return tlsc_m1740; else {tlsc_p1740=T;return tlsc_m1740=((tlsc_v1783=tlsc_f1783()),(tlsc_v1783+tlsc_v1783));}}
static double tlsc_f1868(){if (tlsc_p1868) return tlsc_m1868; else {tlsc_p1868=T;return tlsc_m1868=(tlsc_f1869()*tlsc_v4770);}}
static double tlsc_f1774(){if (tlsc_p1774) return tlsc_m1774; else {tlsc_p1774=T;return tlsc_m1774=((tlsc_f1871()+tlsc_f1868())-tlsc_f1872());}}
static int tlsc_f1667(){if (tlsc_p1667) return tlsc_m1667; else {tlsc_p1667=T;return tlsc_m1667=(tlsc_f1774()>(0.0));}}
static double tlsc_f1867(){if (tlsc_p1867) return tlsc_m1867; else {tlsc_p1867=T;return tlsc_m1867=(tlsc_f1872()-tlsc_f1871()-tlsc_f1868());}}
static double tlsc_f1786(){if (tlsc_p1786) return tlsc_m1786; else {tlsc_p1786=T;return tlsc_m1786=((-2.0)*tlsc_f1869()*tlsc_f1867());}}
static double tlsc_f1739(){if (tlsc_p1739) return tlsc_m1739; else {tlsc_p1739=T;return tlsc_m1739=((-tlsc_f1786())/tlsc_f1740());}}
static double tlsc_f1866(){if (tlsc_p1866) return tlsc_m1866; else {tlsc_p1866=T;return tlsc_m1866=((tlsc_v1867=tlsc_f1867()),(tlsc_v1867*tlsc_v1867));}}
static double tlsc_f1779(){if (tlsc_p1779) return tlsc_m1779; else {tlsc_p1779=T;return tlsc_m1779=((tlsc_v1786=tlsc_f1786()),((tlsc_v1786*tlsc_v1786)-((4.0)*tlsc_f1783()*(tlsc_f1866()-(tlsc_f1861()*tlsc_f4367())))));}}
static double tlsc_f1737(){if (tlsc_p1737) return tlsc_m1737; else {tlsc_p1737=T;return tlsc_m1737=(sqrt(tlsc_f1779())/tlsc_f1740());}}
static double tlsc_f1735(){if (tlsc_p1735) return tlsc_m1735; else {tlsc_p1735=T;return tlsc_m1735=((tlsc_f1739()+tlsc_f1737())+tlsc_v4770);}}
static double tlsc_f1734(){if (tlsc_p1734) return tlsc_m1734; else {tlsc_p1734=T;return tlsc_m1734=(tlsc_f1869()*tlsc_f1735());}}
static double tlsc_f1732(){if (tlsc_p1732) return tlsc_m1732; else {tlsc_p1732=T;return tlsc_m1732=((tlsc_f1872()-tlsc_f1734())/tlsc_f1875());}}
static int tlsc_f1723(){if (tlsc_p1723) return tlsc_m1723; else {tlsc_p1723=T;return tlsc_m1723=((tlsc_v1732=tlsc_f1732()),((fabs((((tlsc_f1875()*tlsc_v1732)+tlsc_f1734())-tlsc_f1872()))<tlsc_v4723)?(((tlsc_f4236()<=tlsc_v1732)&&(tlsc_v1732<=tlsc_f4234()))?((tlsc_f4227()<=tlsc_f1735())&&(tlsc_f1735()<=tlsc_f4225())):NIL):NIL));}}
static double tlsc_f1721(){if (tlsc_p1721) return tlsc_m1721; else {tlsc_p1721=T;return tlsc_m1721=((tlsc_f1739()-tlsc_f1737())+tlsc_v4770);}}
static double tlsc_f1720(){if (tlsc_p1720) return tlsc_m1720; else {tlsc_p1720=T;return tlsc_m1720=(tlsc_f1869()*tlsc_f1721());}}
static double tlsc_f1718(){if (tlsc_p1718) return tlsc_m1718; else {tlsc_p1718=T;return tlsc_m1718=((tlsc_f1872()-tlsc_f1720())/tlsc_f1875());}}
static int tlsc_f1709(){if (tlsc_p1709) return tlsc_m1709; else {tlsc_p1709=T;return tlsc_m1709=((tlsc_v1718=tlsc_f1718()),((fabs((((tlsc_f1875()*tlsc_v1718)+tlsc_f1720())-tlsc_f1872()))<tlsc_v4723)?(((tlsc_f4236()<=tlsc_v1718)&&(tlsc_v1718<=tlsc_f4234()))?((tlsc_f4227()<=tlsc_f1721())&&(tlsc_f1721()<=tlsc_f4225())):NIL):NIL));}}
static int tlsc_f1778(){if (tlsc_p1778) return tlsc_m1778; else {tlsc_p1778=T;return tlsc_m1778=(tlsc_f1779()<0.0);}}
static double tlsc_f1863(){if (tlsc_p1863) return tlsc_m1863; else {tlsc_p1863=T;return tlsc_m1863=(tlsc_f4367()-(tlsc_f1866()/tlsc_f1865()));}}
static double tlsc_f1766(){if (tlsc_p1766) return tlsc_m1766; else {tlsc_p1766=T;return tlsc_m1766=sqrt(tlsc_f1863());}}
static double tlsc_f1752(){if (tlsc_p1752) return tlsc_m1752; else {tlsc_p1752=T;return tlsc_m1752=((-tlsc_f1766())+tlsc_v4772);}}
static int tlsc_f1744(){if (tlsc_p1744) return tlsc_m1744; else {tlsc_p1744=T;return tlsc_m1744=((tlsc_v1752=tlsc_f1752()),((fabs((((tlsc_f1875()*tlsc_v1752)+tlsc_f1762())-tlsc_f1872()))<tlsc_v4723)?(((tlsc_f4236()<=tlsc_v1752)&&(tlsc_v1752<=tlsc_f4234()))?tlsc_f1756():NIL):NIL));}}
static double tlsc_f1765(){if (tlsc_p1765) return tlsc_m1765; else {tlsc_p1765=T;return tlsc_m1765=(tlsc_f1766()+tlsc_v4772);}}
static int tlsc_f1754(){if (tlsc_p1754) return tlsc_m1754; else {tlsc_p1754=T;return tlsc_m1754=((tlsc_v1765=tlsc_f1765()),((fabs((((tlsc_f1875()*tlsc_v1765)+tlsc_f1762())-tlsc_f1872()))<tlsc_v4723)?(((tlsc_f4236()<=tlsc_v1765)&&(tlsc_v1765<=tlsc_f4234()))?tlsc_f1756():NIL):NIL));}}
static int tlsc_f1862(){if (tlsc_p1862) return tlsc_m1862; else {tlsc_p1862=T;return tlsc_m1862=(tlsc_f1863()<0.0);}}
static int tlsc_f1776(){if (tlsc_p1776) return tlsc_m1776; else {tlsc_p1776=T;return tlsc_m1776=(tlsc_f1874()?(tlsc_f1862()?tlsc_f1789():NIL):(tlsc_f1778()?tlsc_f1789():NIL));}}
static int tlsc_f1706(){if (tlsc_p1706) return tlsc_m1706; else {tlsc_p1706=T;return tlsc_m1706=(tlsc_f1874()?(tlsc_f1862()?tlsc_f1767():(tlsc_f1754()?T:tlsc_f1744())):(tlsc_f1778()?tlsc_f1767():(tlsc_f1723()?T:tlsc_f1709())));}}
static double tlsc_f1672(){if (tlsc_p1672) return tlsc_m1672; else {tlsc_p1672=T;return tlsc_m1672=((tlsc_v1706=tlsc_f1706()),(((tlsc_f1875()*((tlsc_v1706?(tlsc_f1874()?(tlsc_f1862()?tlsc_f1702():(tlsc_f1754()?tlsc_f1765():(tlsc_f1744()?tlsc_f1752():tlsc_f1897()))):(tlsc_f1778()?tlsc_f1702():(tlsc_f1723()?tlsc_f1732():(tlsc_f1709()?tlsc_f1718():tlsc_f1897())))):tlsc_f1693())+tlsc_v2048))+(tlsc_f1869()*((tlsc_v1706?(tlsc_f1874()?(tlsc_f1862()?tlsc_f1686():(tlsc_f1754()?tlsc_f1763():(tlsc_f1744()?tlsc_f1763():tlsc_f1897()))):(tlsc_f1778()?tlsc_f1686():(tlsc_f1723()?tlsc_f1735():(tlsc_f1709()?tlsc_f1721():tlsc_f1897())))):tlsc_f1677())+tlsc_v2074)))-tlsc_f1872()));}}
static int tlsc_f1661(){if (tlsc_p1661) return tlsc_m1661; else {tlsc_p1661=T;return tlsc_m1661=((tlsc_v1776=tlsc_f1776()),(tlsc_v1776?tlsc_v1776:(((fabs((tlsc_f1774()-(0.0)))<tlsc_v4723)?T:((tlsc_v1672=tlsc_f1672()),((fabs((tlsc_v1672-(0.0)))<tlsc_v4723)?NIL:((tlsc_v1672>(0.0))?tlsc_f1667():(tlsc_f1667()?NIL:T)))))?NIL:T)));}}
static int tlsc_f1474(){if (tlsc_p1474) return tlsc_m1474; else {tlsc_p1474=T;return tlsc_m1474=((tlsc_v1476=tlsc_f1476()),(tlsc_v1476?tlsc_f1661():(tlsc_v1476?NIL:T)));}}
static int tlsc_f1472(){if (tlsc_p1472) return tlsc_m1472; else {tlsc_p1472=T;return tlsc_m1472=(tlsc_f1497()?(tlsc_f1474()?tlsc_f1494():NIL):NIL);}}
static int tlsc_f1471(){if (tlsc_p1471) return tlsc_m1471; else {tlsc_p1471=T;return tlsc_m1471=((tlsc_v1472=tlsc_f1472()),(tlsc_v1472?tlsc_v1472:NIL));}}
static double tlsc_f2062(){if (tlsc_p2062) return tlsc_m2062; else {tlsc_p2062=T;return tlsc_m2062=(tlsc_v4755*cos(tlsc_v2071));}}
static double tlsc_f2061(){if (tlsc_p2061) return tlsc_m2061; else {tlsc_p2061=T;return tlsc_m2061=(tlsc_v4780+tlsc_f2062());}}
static double tlsc_f1974(){if (tlsc_p1974) return tlsc_m1974; else {tlsc_p1974=T;return tlsc_m1974=(tlsc_f2061()-tlsc_v4772);}}
static int tlsc_f1968(){if (tlsc_p1968) return tlsc_m1968; else {tlsc_p1968=T;return tlsc_m1968=((fabs(tlsc_f1974())<tlsc_v4723)?(fabs(tlsc_f1971())<tlsc_v4723):NIL);}}
static int tlsc_f1962(){if (tlsc_p1962) return tlsc_m1962; else {tlsc_p1962=T;return tlsc_m1962=((fabs((((tlsc_v2074*tlsc_f2061())+(tlsc_v2047*tlsc_v2068))-tlsc_f2036()))<tlsc_v4723)?((tlsc_v1968=tlsc_f1968()),(tlsc_v1968?tlsc_v1968:(fabs((tlsc_v2075-atan2(tlsc_f1971(),tlsc_f1974())))<tlsc_v4723))):NIL);}}
static double tlsc_f2060(){if (tlsc_p2060) return tlsc_m2060; else {tlsc_p2060=T;return tlsc_m2060=(tlsc_v4776+tlsc_f2062());}}
static double tlsc_f2003(){if (tlsc_p2003) return tlsc_m2003; else {tlsc_p2003=T;return tlsc_m2003=(tlsc_f2060()-tlsc_v4772);}}
static int tlsc_f1997(){if (tlsc_p1997) return tlsc_m1997; else {tlsc_p1997=T;return tlsc_m1997=((fabs(tlsc_f2003())<tlsc_v4723)?(fabs(tlsc_f2000())<tlsc_v4723):NIL);}}
static int tlsc_f1991(){if (tlsc_p1991) return tlsc_m1991; else {tlsc_p1991=T;return tlsc_m1991=((fabs((((tlsc_v2074*tlsc_f2060())+(tlsc_v2047*tlsc_v2067))-tlsc_f2036()))<tlsc_v4723)?((tlsc_v1997=tlsc_f1997()),(tlsc_v1997?tlsc_v1997:(fabs((tlsc_v2075-atan2(tlsc_f2000(),tlsc_f2003())))<tlsc_v4723))):NIL);}}
static int tlsc_f1958(){if (tlsc_p1958) return tlsc_m1958; else {tlsc_p1958=T;return tlsc_m1958=((tlsc_v1962=tlsc_f1962()),(tlsc_v1962?tlsc_v1962:tlsc_f1991()));}}
static int tlsc_f1988(){if (tlsc_p1988) return tlsc_m1988; else {tlsc_p1988=T;return tlsc_m1988=(((fabs((tlsc_v4772-tlsc_f2061()))<tlsc_v4723)?(fabs((tlsc_v4770-tlsc_v2068))<tlsc_v4723):NIL)?(tlsc_f1991()?NIL:T):NIL);}}
static int tlsc_f1959(){if (tlsc_p1959) return tlsc_m1959; else {tlsc_p1959=T;return tlsc_m1959=((tlsc_v1988=tlsc_f1988()),(tlsc_v1988?tlsc_v1988:(((fabs((tlsc_v4772-tlsc_f2060()))<tlsc_v4723)?(fabs((tlsc_v4770-tlsc_v2067))<tlsc_v4723):NIL)?(tlsc_f1962()?NIL:T):NIL)));}}
static double tlsc_f2051(){if (tlsc_p2051) return tlsc_m2051; else {tlsc_p2051=T;return tlsc_m2051=((tlsc_f2060()-tlsc_f2061())/tlsc_v2066);}}
static int tlsc_f2057(){if (tlsc_p2057) return tlsc_m2057; else {tlsc_p2057=T;return tlsc_m2057=(fabs((tlsc_f2061()-tlsc_f2060()))<tlsc_v4723);}}
static double tlsc_f2031(){if (tlsc_p2031) return tlsc_m2031; else {tlsc_p2031=T;return tlsc_m2031=(tlsc_v2064?(tlsc_f2057()?tlsc_f2055():tlsc_v2068):(tlsc_f2061()+(tlsc_f2051()*tlsc_v2068)));}}
static double tlsc_f2029(){if (tlsc_p2029) return tlsc_m2029; else {tlsc_p2029=T;return tlsc_m2029=((tlsc_f2036()*tlsc_v2050)-(tlsc_v2047*tlsc_f2031()));}}
static double tlsc_f1955(){if (tlsc_p1955) return tlsc_m1955; else {tlsc_p1955=T;return tlsc_m1955=(tlsc_f2029()/tlsc_v2042);}}
static double tlsc_f1947(){if (tlsc_p1947) return tlsc_m1947; else {tlsc_p1947=T;return tlsc_m1947=(tlsc_f1955()-tlsc_v4772);}}
static double tlsc_f2023(){if (tlsc_p2023) return tlsc_m2023; else {tlsc_p2023=T;return tlsc_m2023=((tlsc_v2074*tlsc_f2031())-(tlsc_f2036()*tlsc_v2044));}}
static double tlsc_f1953(){if (tlsc_p1953) return tlsc_m1953; else {tlsc_p1953=T;return tlsc_m1953=(tlsc_f2023()/tlsc_v2042);}}
static double tlsc_f1944(){if (tlsc_p1944) return tlsc_m1944; else {tlsc_p1944=T;return tlsc_m1944=(tlsc_f1953()-tlsc_v4770);}}
static int tlsc_f1941(){if (tlsc_p1941) return tlsc_m1941; else {tlsc_p1941=T;return tlsc_m1941=((fabs(tlsc_f1947())<tlsc_v4723)?(fabs(tlsc_f1944())<tlsc_v4723):NIL);}}
static int tlsc_f2018(){if (tlsc_p2018) return tlsc_m2018; else {tlsc_p2018=T;return tlsc_m2018=((fabs((tlsc_f2029()-(0.0)))<tlsc_v4723)?(fabs((tlsc_f2023()-(0.0)))<tlsc_v4723):NIL);}}
static int tlsc_f1956(){if (tlsc_p1956) return tlsc_m1956; else {tlsc_p1956=T;return tlsc_m1956=(tlsc_v2039?tlsc_f2018():T);}}
static int tlsc_f1909(){if (tlsc_p1909) return tlsc_m1909; else {tlsc_p1909=T;return tlsc_m1909=(tlsc_f1956()?((tlsc_v2039?NIL:((fabs((((tlsc_v2074*tlsc_f1955())+(tlsc_v2047*tlsc_f1953()))-tlsc_f2036()))<tlsc_v4723)?((tlsc_v1941=tlsc_f1941()),(tlsc_v1941?tlsc_v1941:(fabs((tlsc_v2075-atan2(tlsc_f1944(),tlsc_f1947())))<tlsc_v4723))):NIL))?(tlsc_v2039?NIL:((tlsc_v1955=tlsc_f1955()),(tlsc_v1953=tlsc_f1953()),((fabs((((tlsc_v2044*tlsc_v1955)+(tlsc_v2050*tlsc_v1953))-tlsc_f2031()))<tlsc_v4723)?((tlsc_v2061=tlsc_f2061()),(tlsc_v2060=tlsc_f2060()),((((((tlsc_v2061<tlsc_v2060)?tlsc_v2061:tlsc_v2060)-tlsc_v4723)<=tlsc_v1955)&&(tlsc_v1955<=(((tlsc_v2061>tlsc_v2060)?tlsc_v2061:tlsc_v2060)+tlsc_v4723)))?(((((tlsc_v2068<tlsc_v2067)?tlsc_v2068:tlsc_v2067)-tlsc_v4723)<=tlsc_v1953)&&(tlsc_v1953<=(((tlsc_v2068>tlsc_v2067)?tlsc_v2068:tlsc_v2067)+tlsc_v4723))):NIL)):NIL))):NIL):NIL);}}
static int tlsc_f1899(){if (tlsc_p1899) return tlsc_m1899; else {tlsc_p1899=T;return tlsc_m1899=(tlsc_v2017?tlsc_f1959():(tlsc_f1909()?(tlsc_v2039?NIL:T):NIL));}}
static double tlsc_f1892(){if (tlsc_p1892) return tlsc_m1892; else {tlsc_p1892=T;return tlsc_m1892=(tlsc_v4772-(tlsc_v2017?(tlsc_f1959()?tlsc_v4772:tlsc_f1897()):(tlsc_f1909()?(tlsc_v2039?tlsc_f1897():tlsc_f1955()):tlsc_f1897())));}}
static double tlsc_f1886(){if (tlsc_p1886) return tlsc_m1886; else {tlsc_p1886=T;return tlsc_m1886=(tlsc_v4770-(tlsc_v2017?(tlsc_f1959()?tlsc_v4770:tlsc_f1897()):(tlsc_f1909()?(tlsc_v2039?tlsc_f1897():tlsc_f1953()):tlsc_f1897())));}}
static double tlsc_f1880(){if (tlsc_p1880) return tlsc_m1880; else {tlsc_p1880=T;return tlsc_m1880=(tlsc_f1899()?((tlsc_v1892=tlsc_f1892()),(tlsc_v1886=tlsc_f1886()),sqrt(((tlsc_v1892*tlsc_v1892)+(tlsc_v1886*tlsc_v1886)))):tlsc_f1881());}}
static double tlsc_f217(){if (tlsc_p217) return tlsc_m217; else {tlsc_p217=T;return tlsc_m217=((tlsc_v1880=tlsc_f1880()),(tlsc_v1233=tlsc_f1233()),((tlsc_v1880<tlsc_v1233)?tlsc_v1880:tlsc_v1233));}}
static double tlsc_f213(){if (tlsc_p213) return tlsc_m213; else {tlsc_p213=T;return tlsc_m213=(tlsc_f1145()?((tlsc_v1880=tlsc_f1880()),(tlsc_v1186=tlsc_f1186()),((tlsc_v1880<tlsc_v1186)?tlsc_v1880:tlsc_v1186)):tlsc_f816());}}
static double tlsc_f235(){if (tlsc_p235) return tlsc_m235; else {tlsc_p235=T;return tlsc_m235=(tlsc_f1455()?(tlsc_f1430()?(tlsc_f1426()?(tlsc_f1374()?(tlsc_f1373()?((tlsc_v1880=tlsc_f1880()),(tlsc_v815=tlsc_f815()),((tlsc_v1880<tlsc_v815)?tlsc_v1880:tlsc_v815)):(tlsc_f1376()?((tlsc_v1880=tlsc_f1880()),(tlsc_v1423=tlsc_f1423()),((tlsc_v1880<tlsc_v1423)?tlsc_v1880:tlsc_v1423)):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double tlsc_f231(){if (tlsc_p231) return tlsc_m231; else {tlsc_p231=T;return tlsc_m231=((tlsc_v1880=tlsc_f1880()),(tlsc_v3612=tlsc_f3612()),((tlsc_v1880<tlsc_v3612)?tlsc_v1880:tlsc_v3612));}}
static double tlsc_f227(){if (tlsc_p227) return tlsc_m227; else {tlsc_p227=T;return tlsc_m227=(tlsc_f1302()?((tlsc_v1880=tlsc_f1880()),(tlsc_v3563=tlsc_f3563()),((tlsc_v1880<tlsc_v3563)?tlsc_v1880:tlsc_v3563)):tlsc_f816());}}
static double tlsc_f176(){if (tlsc_p176) return tlsc_m176; else {tlsc_p176=T;return tlsc_m176=((tlsc_v1880=tlsc_f1880()),(tlsc_v917=tlsc_f917()),((tlsc_v1880<tlsc_v917)?tlsc_v1880:tlsc_v917));}}
static double tlsc_f172(){if (tlsc_p172) return tlsc_m172; else {tlsc_p172=T;return tlsc_m172=(tlsc_f829()?((tlsc_v1880=tlsc_f1880()),(tlsc_v870=tlsc_f870()),((tlsc_v1880<tlsc_v870)?tlsc_v1880:tlsc_v870)):tlsc_f816());}}
static double tlsc_f194(){if (tlsc_p194) return tlsc_m194; else {tlsc_p194=T;return tlsc_m194=(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?((tlsc_v1880=tlsc_f1880()),(tlsc_v814=tlsc_f814()),((tlsc_v1880<tlsc_v814)?tlsc_v1880:tlsc_v814)):(tlsc_f1059()?((tlsc_v1880=tlsc_f1880()),(tlsc_v1104=tlsc_f1104()),((tlsc_v1880<tlsc_v1104)?tlsc_v1880:tlsc_v1104)):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double tlsc_f190(){if (tlsc_p190) return tlsc_m190; else {tlsc_p190=T;return tlsc_m190=((tlsc_v1880=tlsc_f1880()),(tlsc_v3098=tlsc_f3098()),((tlsc_v1880<tlsc_v3098)?tlsc_v1880:tlsc_v3098));}}
static double tlsc_f186(){if (tlsc_p186) return tlsc_m186; else {tlsc_p186=T;return tlsc_m186=(tlsc_f986()?((tlsc_v1880=tlsc_f1880()),(tlsc_v3049=tlsc_f3049()),((tlsc_v1880<tlsc_v3049)?tlsc_v1880:tlsc_v3049)):tlsc_f816());}}
static int tlsc_f1470(){if (tlsc_p1470) return tlsc_m1470; else {tlsc_p1470=T;return tlsc_m1470=(tlsc_f1880()<tlsc_f1479());}}
static int tlsc_f1877(){if (tlsc_p1877) return tlsc_m1877; else {tlsc_p1877=T;return tlsc_m1877=(fabs((tlsc_f1880()-(0.0)))<tlsc_v4723);}}
static int tlsc_f1659(){if (tlsc_p1659) return tlsc_m1659; else {tlsc_p1659=T;return tlsc_m1659=((tlsc_v1877=tlsc_f1877()),(tlsc_v1877?tlsc_f1661():(tlsc_v1877?NIL:T)));}}
static double tlsc_f557(){if (tlsc_p557) return tlsc_m557; else {tlsc_p557=T;return tlsc_m557=(tlsc_v1902?(tlsc_f1659()?(tlsc_f1472()?(tlsc_f1497()?(tlsc_f1474()?(tlsc_f1470()?tlsc_f1880():tlsc_f1479()):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double tlsc_f302(){if (tlsc_p302) return tlsc_m302; else {tlsc_p302=T;return tlsc_m302=((tlsc_v557=tlsc_f557()),(tlsc_v1233=tlsc_f1233()),((tlsc_v557<tlsc_v1233)?tlsc_v557:tlsc_v1233));}}
static double tlsc_f298(){if (tlsc_p298) return tlsc_m298; else {tlsc_p298=T;return tlsc_m298=(tlsc_f1145()?((tlsc_v557=tlsc_f557()),(tlsc_v1186=tlsc_f1186()),((tlsc_v557<tlsc_v1186)?tlsc_v557:tlsc_v1186)):tlsc_f816());}}
static double tlsc_f320(){if (tlsc_p320) return tlsc_m320; else {tlsc_p320=T;return tlsc_m320=(tlsc_f1455()?(tlsc_f1430()?(tlsc_f1426()?(tlsc_f1374()?(tlsc_f1373()?((tlsc_v557=tlsc_f557()),(tlsc_v815=tlsc_f815()),((tlsc_v557<tlsc_v815)?tlsc_v557:tlsc_v815)):(tlsc_f1376()?((tlsc_v557=tlsc_f557()),(tlsc_v1423=tlsc_f1423()),((tlsc_v557<tlsc_v1423)?tlsc_v557:tlsc_v1423)):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double tlsc_f316(){if (tlsc_p316) return tlsc_m316; else {tlsc_p316=T;return tlsc_m316=((tlsc_v557=tlsc_f557()),(tlsc_v3612=tlsc_f3612()),((tlsc_v557<tlsc_v3612)?tlsc_v557:tlsc_v3612));}}
static double tlsc_f312(){if (tlsc_p312) return tlsc_m312; else {tlsc_p312=T;return tlsc_m312=(tlsc_f1302()?((tlsc_v557=tlsc_f557()),(tlsc_v3563=tlsc_f3563()),((tlsc_v557<tlsc_v3563)?tlsc_v557:tlsc_v3563)):tlsc_f816());}}
static double tlsc_f261(){if (tlsc_p261) return tlsc_m261; else {tlsc_p261=T;return tlsc_m261=((tlsc_v557=tlsc_f557()),(tlsc_v917=tlsc_f917()),((tlsc_v557<tlsc_v917)?tlsc_v557:tlsc_v917));}}
static double tlsc_f257(){if (tlsc_p257) return tlsc_m257; else {tlsc_p257=T;return tlsc_m257=(tlsc_f829()?((tlsc_v557=tlsc_f557()),(tlsc_v870=tlsc_f870()),((tlsc_v557<tlsc_v870)?tlsc_v557:tlsc_v870)):tlsc_f816());}}
static double tlsc_f279(){if (tlsc_p279) return tlsc_m279; else {tlsc_p279=T;return tlsc_m279=(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?(tlsc_f1058()?(tlsc_f1057()?((tlsc_v557=tlsc_f557()),(tlsc_v814=tlsc_f814()),((tlsc_v557<tlsc_v814)?tlsc_v557:tlsc_v814)):(tlsc_f1059()?((tlsc_v557=tlsc_f557()),(tlsc_v1104=tlsc_f1104()),((tlsc_v557<tlsc_v1104)?tlsc_v557:tlsc_v1104)):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()):tlsc_f816());}}
static double tlsc_f275(){if (tlsc_p275) return tlsc_m275; else {tlsc_p275=T;return tlsc_m275=((tlsc_v557=tlsc_f557()),(tlsc_v3098=tlsc_f3098()),((tlsc_v557<tlsc_v3098)?tlsc_v557:tlsc_v3098));}}
static double tlsc_f271(){if (tlsc_p271) return tlsc_m271; else {tlsc_p271=T;return tlsc_m271=(tlsc_f986()?((tlsc_v557=tlsc_f557()),(tlsc_v3049=tlsc_f3049()),((tlsc_v557<tlsc_v3049)?tlsc_v557:tlsc_v3049)):tlsc_f816());}}
void tlsc(tlsc_a4780,tlsc_a4778,tlsc_a4776,tlsc_a4774,tlsc_a4772,tlsc_a4770,tlsc_a4768,tlsc_a4766,tlsc_a4764,tlsc_a4723)
double tlsc_a4780;
double tlsc_a4778;
double tlsc_a4776;
double tlsc_a4774;
double tlsc_a4772;
double tlsc_a4770;
double tlsc_a4768;
double tlsc_a4766;
double tlsc_a4764;
double tlsc_a4723;
{ tlsc_v4780=tlsc_a4780;
  tlsc_v4778=tlsc_a4778;
  tlsc_v4776=tlsc_a4776;
  tlsc_v4774=tlsc_a4774;
  tlsc_v4772=tlsc_a4772;
  tlsc_v4770=tlsc_a4770;
  tlsc_v4768=tlsc_a4768;
  tlsc_v4766=tlsc_a4766;
  tlsc_v4764=tlsc_a4764;
  tlsc_v4723=tlsc_a4723;
  tlsc_p816=NIL;
  tlsc_p1424=NIL;
  tlsc_p1413=NIL;
  tlsc_p3944=NIL;
  tlsc_p3877=NIL;
  tlsc_p3893=NIL;
  tlsc_p3937=NIL;
  tlsc_p3934=NIL;
  tlsc_p3943=NIL;
  tlsc_p3942=NIL;
  tlsc_p3870=NIL;
  tlsc_p3866=NIL;
  tlsc_p3875=NIL;
  tlsc_p3832=NIL;
  tlsc_p3823=NIL;
  tlsc_p3892=NIL;
  tlsc_p3891=NIL;
  tlsc_p3898=NIL;
  tlsc_p3317=NIL;
  tlsc_p3092=NIL;
  tlsc_p3090=NIL;
  tlsc_p1043=NIL;
  tlsc_p1040=NIL;
  tlsc_p1036=NIL;
  tlsc_p3088=NIL;
  tlsc_p3101=NIL;
  tlsc_p3100=NIL;
  tlsc_p3256=NIL;
  tlsc_p3248=NIL;
  tlsc_p3246=NIL;
  tlsc_p3342=NIL;
  tlsc_p977=NIL;
  tlsc_p971=NIL;
  tlsc_p3341=NIL;
  tlsc_p3354=NIL;
  tlsc_p3936=NIL;
  tlsc_p3935=NIL;
  tlsc_p3860=NIL;
  tlsc_p3859=NIL;
  tlsc_p3334=NIL;
  tlsc_p3857=NIL;
  tlsc_p3930=NIL;
  tlsc_p3928=NIL;
  tlsc_p3939=NIL;
  tlsc_p3358=NIL;
  tlsc_p1123=NIL;
  tlsc_p3858=NIL;
  tlsc_p3837=NIL;
  tlsc_p3606=NIL;
  tlsc_p3604=NIL;
  tlsc_p1359=NIL;
  tlsc_p1356=NIL;
  tlsc_p1352=NIL;
  tlsc_p3602=NIL;
  tlsc_p3615=NIL;
  tlsc_p3614=NIL;
  tlsc_p3772=NIL;
  tlsc_p3764=NIL;
  tlsc_p3762=NIL;
  tlsc_p3878=NIL;
  tlsc_p1293=NIL;
  tlsc_p1287=NIL;
  tlsc_p3876=NIL;
  tlsc_p3890=NIL;
  tlsc_p3897=NIL;
  tlsc_p1447=NIL;
  tlsc_p3938=NIL;
  tlsc_p3864=NIL;
  tlsc_p3332=NIL;
  tlsc_p1110=NIL;
  tlsc_p3862=NIL;
  tlsc_p3324=NIL;
  tlsc_p3171=NIL;
  tlsc_p3275=NIL;
  tlsc_p3323=NIL;
  tlsc_p3169=NIL;
  tlsc_p3272=NIL;
  tlsc_p1108=NIL;
  tlsc_p3844=NIL;
  tlsc_p3687=NIL;
  tlsc_p3791=NIL;
  tlsc_p1438=NIL;
  tlsc_p1109=NIL;
  tlsc_p1105=NIL;
  tlsc_p1100=NIL;
  tlsc_p1104=NIL;
  tlsc_p1101=NIL;
  tlsc_p1375=NIL;
  tlsc_p3855=NIL;
  tlsc_p3843=NIL;
  tlsc_p3685=NIL;
  tlsc_p1423=NIL;
  tlsc_p1420=NIL;
  tlsc_p3788=NIL;
  tlsc_p1429=NIL;
  tlsc_p1426=NIL;
  tlsc_p1431=NIL;
  tlsc_p1430=NIL;
  tlsc_p1419=NIL;
  tlsc_p3932=NIL;
  tlsc_p3369=NIL;
  tlsc_p3367=NIL;
  tlsc_p1459=NIL;
  tlsc_p3911=NIL;
  tlsc_p3909=NIL;
  tlsc_p1655=NIL;
  tlsc_p1653=NIL;
  tlsc_p1652=NIL;
  tlsc_p1566=NIL;
  tlsc_p1651=NIL;
  tlsc_p1594=NIL;
  tlsc_p1650=NIL;
  tlsc_p1648=NIL;
  tlsc_p1646=NIL;
  tlsc_p1645=NIL;
  tlsc_p1569=NIL;
  tlsc_p1563=NIL;
  tlsc_p1644=NIL;
  tlsc_p1597=NIL;
  tlsc_p1591=NIL;
  tlsc_p1638=NIL;
  tlsc_p1641=NIL;
  tlsc_p1693=NIL;
  tlsc_p1099=NIL;
  tlsc_p1098=NIL;
  tlsc_p1418=NIL;
  tlsc_p1417=NIL;
  tlsc_p1677=NIL;
  tlsc_p1097=NIL;
  tlsc_p1089=NIL;
  tlsc_p1096=NIL;
  tlsc_p1082=NIL;
  tlsc_p1094=NIL;
  tlsc_p1088=NIL;
  tlsc_p1072=NIL;
  tlsc_p1081=NIL;
  tlsc_p1067=NIL;
  tlsc_p1059=NIL;
  tlsc_p814=NIL;
  tlsc_p786=NIL;
  tlsc_p31=NIL;
  tlsc_p1058=NIL;
  tlsc_p1057=NIL;
  tlsc_p1416=NIL;
  tlsc_p1406=NIL;
  tlsc_p1415=NIL;
  tlsc_p1399=NIL;
  tlsc_p1411=NIL;
  tlsc_p1405=NIL;
  tlsc_p1389=NIL;
  tlsc_p1398=NIL;
  tlsc_p1384=NIL;
  tlsc_p1376=NIL;
  tlsc_p815=NIL;
  tlsc_p813=NIL;
  tlsc_p811=NIL;
  tlsc_p61=NIL;
  tlsc_p1374=NIL;
  tlsc_p1373=NIL;
  tlsc_p4236=NIL;
  tlsc_p4234=NIL;
  tlsc_p4227=NIL;
  tlsc_p4225=NIL;
  tlsc_p1853=NIL;
  tlsc_p1131=NIL;
  tlsc_p804=NIL;
  tlsc_p780=NIL;
  tlsc_p549=NIL;
  tlsc_p527=NIL;
  tlsc_p25=NIL;
  tlsc_p1117=NIL;
  tlsc_p1053=NIL;
  tlsc_p1455=NIL;
  tlsc_p55=NIL;
  tlsc_p1441=NIL;
  tlsc_p1369=NIL;
  tlsc_p4367=NIL;
  tlsc_p3339=NIL;
  tlsc_p3338=NIL;
  tlsc_p3319=NIL;
  tlsc_p3315=NIL;
  tlsc_p3043=NIL;
  tlsc_p1011=NIL;
  tlsc_p3040=NIL;
  tlsc_p1006=NIL;
  tlsc_p1009=NIL;
  tlsc_p998=NIL;
  tlsc_p1005=NIL;
  tlsc_p993=NIL;
  tlsc_p3052=NIL;
  tlsc_p3049=NIL;
  tlsc_p797=NIL;
  tlsc_p774=NIL;
  tlsc_p1012=NIL;
  tlsc_p986=NIL;
  tlsc_p795=NIL;
  tlsc_p772=NIL;
  tlsc_p544=NIL;
  tlsc_p522=NIL;
  tlsc_p21=NIL;
  tlsc_p985=NIL;
  tlsc_p3233=NIL;
  tlsc_p1049=NIL;
  tlsc_p1047=NIL;
  tlsc_p715=NIL;
  tlsc_p3316=NIL;
  tlsc_p3091=NIL;
  tlsc_p1042=NIL;
  tlsc_p3086=NIL;
  tlsc_p1035=NIL;
  tlsc_p1039=NIL;
  tlsc_p1027=NIL;
  tlsc_p1034=NIL;
  tlsc_p1022=NIL;
  tlsc_p3103=NIL;
  tlsc_p3098=NIL;
  tlsc_p800=NIL;
  tlsc_p799=NIL;
  tlsc_p547=NIL;
  tlsc_p777=NIL;
  tlsc_p776=NIL;
  tlsc_p525=NIL;
  tlsc_p803=NIL;
  tlsc_p802=NIL;
  tlsc_p779=NIL;
  tlsc_p1044=NIL;
  tlsc_p1015=NIL;
  tlsc_p24=NIL;
  tlsc_p3251=NIL;
  tlsc_p1052=NIL;
  tlsc_p1050=NIL;
  tlsc_p3830=NIL;
  tlsc_p974=NIL;
  tlsc_p973=NIL;
  tlsc_p969=NIL;
  tlsc_p944=NIL;
  tlsc_p865=NIL;
  tlsc_p873=NIL;
  tlsc_p932=NIL;
  tlsc_p943=NIL;
  tlsc_p941=NIL;
  tlsc_p866=NIL;
  tlsc_p863=NIL;
  tlsc_p858=NIL;
  tlsc_p851=NIL;
  tlsc_p857=NIL;
  tlsc_p841=NIL;
  tlsc_p850=NIL;
  tlsc_p836=NIL;
  tlsc_p875=NIL;
  tlsc_p870=NIL;
  tlsc_p675=NIL;
  tlsc_p659=NIL;
  tlsc_p867=NIL;
  tlsc_p829=NIL;
  tlsc_p673=NIL;
  tlsc_p657=NIL;
  tlsc_p436=NIL;
  tlsc_p423=NIL;
  tlsc_p11=NIL;
  tlsc_p828=NIL;
  tlsc_p935=NIL;
  tlsc_p929=NIL;
  tlsc_p923=NIL;
  tlsc_p598=NIL;
  tlsc_p967=NIL;
  tlsc_p912=NIL;
  tlsc_p920=NIL;
  tlsc_p955=NIL;
  tlsc_p966=NIL;
  tlsc_p964=NIL;
  tlsc_p913=NIL;
  tlsc_p910=NIL;
  tlsc_p905=NIL;
  tlsc_p898=NIL;
  tlsc_p904=NIL;
  tlsc_p888=NIL;
  tlsc_p897=NIL;
  tlsc_p883=NIL;
  tlsc_p922=NIL;
  tlsc_p917=NIL;
  tlsc_p678=NIL;
  tlsc_p677=NIL;
  tlsc_p439=NIL;
  tlsc_p662=NIL;
  tlsc_p661=NIL;
  tlsc_p426=NIL;
  tlsc_p681=NIL;
  tlsc_p680=NIL;
  tlsc_p664=NIL;
  tlsc_p914=NIL;
  tlsc_p876=NIL;
  tlsc_p14=NIL;
  tlsc_p958=NIL;
  tlsc_p952=NIL;
  tlsc_p946=NIL;
  tlsc_p819=NIL;
  tlsc_p818=NIL;
  tlsc_p1290=NIL;
  tlsc_p1289=NIL;
  tlsc_p1285=NIL;
  tlsc_p1260=NIL;
  tlsc_p1181=NIL;
  tlsc_p1189=NIL;
  tlsc_p1248=NIL;
  tlsc_p1259=NIL;
  tlsc_p1257=NIL;
  tlsc_p1182=NIL;
  tlsc_p1179=NIL;
  tlsc_p1174=NIL;
  tlsc_p1167=NIL;
  tlsc_p1173=NIL;
  tlsc_p1157=NIL;
  tlsc_p1166=NIL;
  tlsc_p1152=NIL;
  tlsc_p1191=NIL;
  tlsc_p1186=NIL;
  tlsc_p582=NIL;
  tlsc_p353=NIL;
  tlsc_p349=NIL;
  tlsc_p592=NIL;
  tlsc_p590=NIL;
  tlsc_p1183=NIL;
  tlsc_p1145=NIL;
  tlsc_p573=NIL;
  tlsc_p340=NIL;
  tlsc_p41=NIL;
  tlsc_p1144=NIL;
  tlsc_p1251=NIL;
  tlsc_p1245=NIL;
  tlsc_p1239=NIL;
  tlsc_p1283=NIL;
  tlsc_p1228=NIL;
  tlsc_p1236=NIL;
  tlsc_p1271=NIL;
  tlsc_p1282=NIL;
  tlsc_p1280=NIL;
  tlsc_p1229=NIL;
  tlsc_p1226=NIL;
  tlsc_p1221=NIL;
  tlsc_p1214=NIL;
  tlsc_p1220=NIL;
  tlsc_p1204=NIL;
  tlsc_p1213=NIL;
  tlsc_p1199=NIL;
  tlsc_p1238=NIL;
  tlsc_p1233=NIL;
  tlsc_p603=NIL;
  tlsc_p377=NIL;
  tlsc_p373=NIL;
  tlsc_p613=NIL;
  tlsc_p611=NIL;
  tlsc_p594=NIL;
  tlsc_p365=NIL;
  tlsc_p640=NIL;
  tlsc_p629=NIL;
  tlsc_p627=NIL;
  tlsc_p626=NIL;
  tlsc_p399=NIL;
  tlsc_p624=NIL;
  tlsc_p622=NIL;
  tlsc_p396=NIL;
  tlsc_p639=NIL;
  tlsc_p637=NIL;
  tlsc_p1230=NIL;
  tlsc_p1192=NIL;
  tlsc_p44=NIL;
  tlsc_p1274=NIL;
  tlsc_p1268=NIL;
  tlsc_p1262=NIL;
  tlsc_p3873=NIL;
  tlsc_p3872=NIL;
  tlsc_p3839=NIL;
  tlsc_p3835=NIL;
  tlsc_p3557=NIL;
  tlsc_p1327=NIL;
  tlsc_p3554=NIL;
  tlsc_p1322=NIL;
  tlsc_p1325=NIL;
  tlsc_p1314=NIL;
  tlsc_p1321=NIL;
  tlsc_p1309=NIL;
  tlsc_p3566=NIL;
  tlsc_p3563=NIL;
  tlsc_p709=NIL;
  tlsc_p707=NIL;
  tlsc_p699=NIL;
  tlsc_p2703=NIL;
  tlsc_p456=NIL;
  tlsc_p1328=NIL;
  tlsc_p1302=NIL;
  tlsc_p690=NIL;
  tlsc_p447=NIL;
  tlsc_p51=NIL;
  tlsc_p1301=NIL;
  tlsc_p3749=NIL;
  tlsc_p1365=NIL;
  tlsc_p1363=NIL;
  tlsc_p3836=NIL;
  tlsc_p3605=NIL;
  tlsc_p1358=NIL;
  tlsc_p3600=NIL;
  tlsc_p1351=NIL;
  tlsc_p1355=NIL;
  tlsc_p1343=NIL;
  tlsc_p1350=NIL;
  tlsc_p1338=NIL;
  tlsc_p3617=NIL;
  tlsc_p3612=NIL;
  tlsc_p730=NIL;
  tlsc_p728=NIL;
  tlsc_p720=NIL;
  tlsc_p711=NIL;
  tlsc_p2730=NIL;
  tlsc_p476=NIL;
  tlsc_p468=NIL;
  tlsc_p757=NIL;
  tlsc_p756=NIL;
  tlsc_p754=NIL;
  tlsc_p746=NIL;
  tlsc_p744=NIL;
  tlsc_p743=NIL;
  tlsc_p498=NIL;
  tlsc_p741=NIL;
  tlsc_p739=NIL;
  tlsc_p495=NIL;
  tlsc_p1360=NIL;
  tlsc_p1331=NIL;
  tlsc_p54=NIL;
  tlsc_p3767=NIL;
  tlsc_p1368=NIL;
  tlsc_p1366=NIL;
  tlsc_p1135=NIL;
  tlsc_p332=NIL;
  tlsc_p4385=NIL;
  tlsc_p4390=NIL;
  tlsc_p4388=NIL;
  tlsc_p4383=NIL;
  tlsc_p1881=NIL;
  tlsc_p1897=NIL;
  tlsc_p2000=NIL;
  tlsc_p1971=NIL;
  tlsc_p2036=NIL;
  tlsc_p1557=NIL;
  tlsc_p1585=NIL;
  tlsc_p1553=NIL;
  tlsc_p1583=NIL;
  tlsc_p1554=NIL;
  tlsc_p2055=NIL;
  tlsc_p1624=NIL;
  tlsc_p1637=NIL;
  tlsc_p1622=NIL;
  tlsc_p1634=NIL;
  tlsc_p1616=NIL;
  tlsc_p1612=NIL;
  tlsc_p1632=NIL;
  tlsc_p1550=NIL;
  tlsc_p1542=NIL;
  tlsc_p1548=NIL;
  tlsc_p1539=NIL;
  tlsc_p1536=NIL;
  tlsc_p1629=NIL;
  tlsc_p1611=NIL;
  tlsc_p1551=NIL;
  tlsc_p1504=NIL;
  tlsc_p1497=NIL;
  tlsc_p1494=NIL;
  tlsc_p1489=NIL;
  tlsc_p1483=NIL;
  tlsc_p1479=NIL;
  tlsc_p129=NIL;
  tlsc_p125=NIL;
  tlsc_p147=NIL;
  tlsc_p143=NIL;
  tlsc_p139=NIL;
  tlsc_p88=NIL;
  tlsc_p84=NIL;
  tlsc_p106=NIL;
  tlsc_p102=NIL;
  tlsc_p98=NIL;
  tlsc_p1476=NIL;
  tlsc_p1872=NIL;
  tlsc_p1875=NIL;
  tlsc_p1874=NIL;
  tlsc_p1851=NIL;
  tlsc_p1861=NIL;
  tlsc_p1871=NIL;
  tlsc_p1869=NIL;
  tlsc_p1763=NIL;
  tlsc_p1756=NIL;
  tlsc_p1762=NIL;
  tlsc_p1831=NIL;
  tlsc_p1829=NIL;
  tlsc_p1850=NIL;
  tlsc_p1849=NIL;
  tlsc_p1819=NIL;
  tlsc_p1817=NIL;
  tlsc_p1860=NIL;
  tlsc_p1827=NIL;
  tlsc_p1825=NIL;
  tlsc_p1805=NIL;
  tlsc_p1822=NIL;
  tlsc_p1811=NIL;
  tlsc_p1803=NIL;
  tlsc_p1793=NIL;
  tlsc_p1807=NIL;
  tlsc_p1806=NIL;
  tlsc_p1858=NIL;
  tlsc_p1845=NIL;
  tlsc_p1839=NIL;
  tlsc_p1832=NIL;
  tlsc_p1702=NIL;
  tlsc_p1686=NIL;
  tlsc_p1767=NIL;
  tlsc_p1789=NIL;
  tlsc_p1865=NIL;
  tlsc_p1783=NIL;
  tlsc_p1740=NIL;
  tlsc_p1868=NIL;
  tlsc_p1774=NIL;
  tlsc_p1667=NIL;
  tlsc_p1867=NIL;
  tlsc_p1786=NIL;
  tlsc_p1739=NIL;
  tlsc_p1866=NIL;
  tlsc_p1779=NIL;
  tlsc_p1737=NIL;
  tlsc_p1735=NIL;
  tlsc_p1734=NIL;
  tlsc_p1732=NIL;
  tlsc_p1723=NIL;
  tlsc_p1721=NIL;
  tlsc_p1720=NIL;
  tlsc_p1718=NIL;
  tlsc_p1709=NIL;
  tlsc_p1778=NIL;
  tlsc_p1863=NIL;
  tlsc_p1766=NIL;
  tlsc_p1752=NIL;
  tlsc_p1744=NIL;
  tlsc_p1765=NIL;
  tlsc_p1754=NIL;
  tlsc_p1862=NIL;
  tlsc_p1776=NIL;
  tlsc_p1706=NIL;
  tlsc_p1672=NIL;
  tlsc_p1661=NIL;
  tlsc_p1474=NIL;
  tlsc_p1472=NIL;
  tlsc_p1471=NIL;
  tlsc_p2062=NIL;
  tlsc_p2061=NIL;
  tlsc_p1974=NIL;
  tlsc_p1968=NIL;
  tlsc_p1962=NIL;
  tlsc_p2060=NIL;
  tlsc_p2003=NIL;
  tlsc_p1997=NIL;
  tlsc_p1991=NIL;
  tlsc_p1958=NIL;
  tlsc_p1988=NIL;
  tlsc_p1959=NIL;
  tlsc_p2051=NIL;
  tlsc_p2057=NIL;
  tlsc_p2031=NIL;
  tlsc_p2029=NIL;
  tlsc_p1955=NIL;
  tlsc_p1947=NIL;
  tlsc_p2023=NIL;
  tlsc_p1953=NIL;
  tlsc_p1944=NIL;
  tlsc_p1941=NIL;
  tlsc_p2018=NIL;
  tlsc_p1956=NIL;
  tlsc_p1909=NIL;
  tlsc_p1899=NIL;
  tlsc_p1892=NIL;
  tlsc_p1886=NIL;
  tlsc_p1880=NIL;
  tlsc_p217=NIL;
  tlsc_p213=NIL;
  tlsc_p235=NIL;
  tlsc_p231=NIL;
  tlsc_p227=NIL;
  tlsc_p176=NIL;
  tlsc_p172=NIL;
  tlsc_p194=NIL;
  tlsc_p190=NIL;
  tlsc_p186=NIL;
  tlsc_p1470=NIL;
  tlsc_p1877=NIL;
  tlsc_p1659=NIL;
  tlsc_p557=NIL;
  tlsc_p302=NIL;
  tlsc_p298=NIL;
  tlsc_p320=NIL;
  tlsc_p316=NIL;
  tlsc_p312=NIL;
  tlsc_p261=NIL;
  tlsc_p257=NIL;
  tlsc_p279=NIL;
  tlsc_p275=NIL;
  tlsc_p271=NIL;
  double_or_symbol_result=((tlsc_v2075=normalize_rotation((tlsc_v4764+(3.141592653589793)))),(tlsc_v2074=sin(tlsc_v2075)),(tlsc_v2048=cos(tlsc_v2075)),(tlsc_v2047=(-tlsc_v2048)),(tlsc_v4760=(tlsc_v4772-tlsc_v4768)),(tlsc_v4758=(tlsc_v4770-tlsc_v4766)),(tlsc_v4755=sqrt(((tlsc_v4760*tlsc_v4760)+(tlsc_v4758*tlsc_v4758)))),(tlsc_v4753=(tlsc_v4776-tlsc_v4780)),(tlsc_v4752=atan2((tlsc_v4774-tlsc_v4778),tlsc_v4753)),(tlsc_v2071=normalize_rotation((tlsc_v4752+(1.5707963267948966)))),(tlsc_v2069=(tlsc_v4755*sin(tlsc_v2071))),(tlsc_v2068=(tlsc_v4778+tlsc_v2069)),(tlsc_v2067=(tlsc_v4774+tlsc_v2069)),(tlsc_v2066=(tlsc_v2068-tlsc_v2067)),(tlsc_v2064=(fabs(tlsc_v2066)<tlsc_v4723)),(tlsc_v2050=(tlsc_v2064?(tlsc_f2057()?tlsc_f2055():(1.0)):tlsc_f2051())),(tlsc_v2044=(tlsc_v2064?(tlsc_f2057()?tlsc_f2055():(0.0)):(1.0))),(tlsc_v2042=((tlsc_v2074*tlsc_v2050)-(tlsc_v2047*tlsc_v2044))),(tlsc_v2039=(fabs((tlsc_v2042-(0.0)))<tlsc_v4723)),(tlsc_v2017=(tlsc_v2039?tlsc_f2018():NIL)),(tlsc_v1902=((tlsc_v2017?(tlsc_f1959()?T:tlsc_f1958()):(tlsc_f1909()?tlsc_f1956():NIL))?((tlsc_v2017?(tlsc_f1959()?NIL:tlsc_f1958()):(tlsc_f1909()?tlsc_v2017:NIL))?NIL:T):NIL)),(tlsc_v1657=(tlsc_v1902?(tlsc_f1659()?tlsc_f1899():NIL):NIL)),((tlsc_v1657?(tlsc_f1471()?(tlsc_v1902?(tlsc_f1659()?(tlsc_f1472()?(tlsc_f1497()?(tlsc_f1474()?(tlsc_f1470()?tlsc_f1899():tlsc_f1494()):NIL):NIL):NIL):NIL):NIL):tlsc_v1657):tlsc_f1471())?((tlsc_v1135=tlsc_f1135()),((tlsc_v1135?(tlsc_f818()?(tlsc_f1441()?(tlsc_f3877()?(tlsc_f3872()?(tlsc_f1455()?(tlsc_f1430()?(tlsc_f1426()?((tlsc_v1374=tlsc_f1374()),(tlsc_v1374?(tlsc_f1373()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?tlsc_f804():(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f802()?tlsc_v1374:tlsc_f986()):tlsc_f799()):tlsc_f795()):(tlsc_f1015()?tlsc_f799():NIL)):(tlsc_f1047()?tlsc_f795():NIL))):NIL):NIL):(tlsc_f1376()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?tlsc_f780():(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f779()?tlsc_f1375():tlsc_f986()):tlsc_f776()):tlsc_f772()):(tlsc_f1015()?tlsc_f776():NIL)):(tlsc_f1047()?tlsc_f772():NIL))):NIL):NIL):NIL)):NIL)):NIL):NIL):NIL):(tlsc_f1366()?(tlsc_f1363()?(tlsc_f1331()?(tlsc_f1301()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f3338()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?(tlsc_f1057()?(tlsc_f756()?tlsc_f1302():tlsc_v1058):(tlsc_f1059()?(tlsc_f754()?tlsc_f1302():tlsc_f1375()):NIL)):NIL)):NIL):NIL):NIL):(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?(tlsc_f746()?tlsc_f1302():tlsc_f986()):tlsc_f743()):tlsc_f739()):(tlsc_f1015()?tlsc_f743():NIL)):(tlsc_f1047()?tlsc_f739():NIL))):NIL):NIL):tlsc_f711()):tlsc_f690()):(tlsc_f1331()?tlsc_f711():NIL)):(tlsc_f1363()?tlsc_f690():NIL))):(tlsc_f1289()?(tlsc_f1455()?(tlsc_f1430()?(tlsc_f1426()?((tlsc_v1374=tlsc_f1374()),(tlsc_v1374?(tlsc_f1373()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?tlsc_f804():(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f680()?tlsc_v1374:tlsc_f829()):tlsc_f677()):tlsc_f673()):(tlsc_f876()?tlsc_f677():NIL)):(tlsc_f923()?tlsc_f673():NIL))):NIL):NIL):(tlsc_f1376()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?tlsc_f780():(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f664()?tlsc_f1375():tlsc_f829()):tlsc_f661()):tlsc_f657()):(tlsc_f876()?tlsc_f661():NIL)):(tlsc_f923()?tlsc_f657():NIL))):NIL):NIL):NIL)):NIL)):NIL):NIL):NIL):(tlsc_f1262()?(tlsc_f1239()?(tlsc_f1192()?(tlsc_f1144()?(tlsc_f819()?(tlsc_f1117()?(tlsc_f973()?(tlsc_f1131()?(tlsc_f1109()?(tlsc_f1105()?((tlsc_v1058=tlsc_f1058()),(tlsc_v1058?(tlsc_f1057()?(tlsc_f639()?tlsc_f1145():tlsc_v1058):(tlsc_f1059()?(tlsc_f637()?tlsc_f1145():tlsc_f1375()):NIL)):NIL)):NIL):NIL):NIL):(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?(tlsc_f629()?tlsc_f1145():tlsc_f829()):tlsc_f626()):tlsc_f622()):(tlsc_f876()?tlsc_f626():NIL)):(tlsc_f923()?tlsc_f622():NIL))):NIL):NIL):tlsc_f594()):tlsc_f573()):(tlsc_f1192()?tlsc_f594():NIL)):(tlsc_f1239()?tlsc_f573():NIL)))):NIL):tlsc_v1135):tlsc_f818())?coerce_double_to_double_or_symbol((tlsc_v1657?(tlsc_f1471()?(tlsc_v1135?(tlsc_f818()?((tlsc_v557=tlsc_f557()),(tlsc_v332=tlsc_f332()),((tlsc_v557<tlsc_v332)?tlsc_v557:tlsc_v332)):(tlsc_f1441()?(tlsc_f3877()?(tlsc_f3872()?tlsc_f320():(tlsc_f1366()?(tlsc_f1363()?(tlsc_f1331()?(tlsc_f1301()?((tlsc_v557=tlsc_f557()),(tlsc_v757=tlsc_f757()),((tlsc_v557<tlsc_v757)?tlsc_v557:tlsc_v757)):tlsc_f316()):tlsc_f312()):(tlsc_f1331()?tlsc_f316():tlsc_f816())):(tlsc_f1363()?tlsc_f312():tlsc_f816()))):(tlsc_f1289()?tlsc_f320():(tlsc_f1262()?(tlsc_f1239()?(tlsc_f1192()?(tlsc_f1144()?((tlsc_v557=tlsc_f557()),(tlsc_v640=tlsc_f640()),((tlsc_v557<tlsc_v640)?tlsc_v557:tlsc_v640)):tlsc_f302()):tlsc_f298()):(tlsc_f1192()?tlsc_f302():tlsc_f816())):(tlsc_f1239()?tlsc_f298():tlsc_f816())))):tlsc_f816())):(tlsc_f819()?(tlsc_f1117()?(tlsc_f3877()?(tlsc_f3338()?tlsc_f279():(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?((tlsc_v557=tlsc_f557()),(tlsc_v803=tlsc_f803()),((tlsc_v557<tlsc_v803)?tlsc_v557:tlsc_v803)):tlsc_f275()):tlsc_f271()):(tlsc_f1015()?tlsc_f275():tlsc_f816())):(tlsc_f1047()?tlsc_f271():tlsc_f816()))):(tlsc_f973()?tlsc_f279():(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?((tlsc_v557=tlsc_f557()),(tlsc_v681=tlsc_f681()),((tlsc_v557<tlsc_v681)?tlsc_v557:tlsc_v681)):tlsc_f261()):tlsc_f257()):(tlsc_f876()?tlsc_f261():tlsc_f816())):(tlsc_f923()?tlsc_f257():tlsc_f816())))):tlsc_f816()):tlsc_f816())):(tlsc_v1902?(tlsc_f1659()?(tlsc_v1135?(tlsc_f818()?((tlsc_v1880=tlsc_f1880()),(tlsc_v332=tlsc_f332()),((tlsc_v1880<tlsc_v332)?tlsc_v1880:tlsc_v332)):(tlsc_f1441()?(tlsc_f3877()?(tlsc_f3872()?tlsc_f235():(tlsc_f1366()?(tlsc_f1363()?(tlsc_f1331()?(tlsc_f1301()?((tlsc_v1880=tlsc_f1880()),(tlsc_v757=tlsc_f757()),((tlsc_v1880<tlsc_v757)?tlsc_v1880:tlsc_v757)):tlsc_f231()):tlsc_f227()):(tlsc_f1331()?tlsc_f231():tlsc_f816())):(tlsc_f1363()?tlsc_f227():tlsc_f816()))):(tlsc_f1289()?tlsc_f235():(tlsc_f1262()?(tlsc_f1239()?(tlsc_f1192()?(tlsc_f1144()?((tlsc_v1880=tlsc_f1880()),(tlsc_v640=tlsc_f640()),((tlsc_v1880<tlsc_v640)?tlsc_v1880:tlsc_v640)):tlsc_f217()):tlsc_f213()):(tlsc_f1192()?tlsc_f217():tlsc_f816())):(tlsc_f1239()?tlsc_f213():tlsc_f816())))):tlsc_f816())):(tlsc_f819()?(tlsc_f1117()?(tlsc_f3877()?(tlsc_f3338()?tlsc_f194():(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?((tlsc_v1880=tlsc_f1880()),(tlsc_v803=tlsc_f803()),((tlsc_v1880<tlsc_v803)?tlsc_v1880:tlsc_v803)):tlsc_f190()):tlsc_f186()):(tlsc_f1015()?tlsc_f190():tlsc_f816())):(tlsc_f1047()?tlsc_f186():tlsc_f816()))):(tlsc_f973()?tlsc_f194():(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?((tlsc_v1880=tlsc_f1880()),(tlsc_v681=tlsc_f681()),((tlsc_v1880<tlsc_v681)?tlsc_v1880:tlsc_v681)):tlsc_f176()):tlsc_f172()):(tlsc_f876()?tlsc_f176():tlsc_f816())):(tlsc_f923()?tlsc_f172():tlsc_f816())))):tlsc_f816()):tlsc_f816())):tlsc_f816()):tlsc_f816())):(tlsc_f1472()?(tlsc_f1497()?(tlsc_f1474()?(tlsc_v1135?(tlsc_f818()?((tlsc_v1479=tlsc_f1479()),(tlsc_v332=tlsc_f332()),((tlsc_v1479<tlsc_v332)?tlsc_v1479:tlsc_v332)):(tlsc_f1441()?(tlsc_f3877()?(tlsc_f3872()?tlsc_f147():(tlsc_f1366()?(tlsc_f1363()?(tlsc_f1331()?(tlsc_f1301()?((tlsc_v1479=tlsc_f1479()),(tlsc_v757=tlsc_f757()),((tlsc_v1479<tlsc_v757)?tlsc_v1479:tlsc_v757)):tlsc_f143()):tlsc_f139()):(tlsc_f1331()?tlsc_f143():tlsc_f816())):(tlsc_f1363()?tlsc_f139():tlsc_f816()))):(tlsc_f1289()?tlsc_f147():(tlsc_f1262()?(tlsc_f1239()?(tlsc_f1192()?(tlsc_f1144()?((tlsc_v1479=tlsc_f1479()),(tlsc_v640=tlsc_f640()),((tlsc_v1479<tlsc_v640)?tlsc_v1479:tlsc_v640)):tlsc_f129()):tlsc_f125()):(tlsc_f1192()?tlsc_f129():tlsc_f816())):(tlsc_f1239()?tlsc_f125():tlsc_f816())))):tlsc_f816())):(tlsc_f819()?(tlsc_f1117()?(tlsc_f3877()?(tlsc_f3338()?tlsc_f106():(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?((tlsc_v1479=tlsc_f1479()),(tlsc_v803=tlsc_f803()),((tlsc_v1479<tlsc_v803)?tlsc_v1479:tlsc_v803)):tlsc_f102()):tlsc_f98()):(tlsc_f1015()?tlsc_f102():tlsc_f816())):(tlsc_f1047()?tlsc_f98():tlsc_f816()))):(tlsc_f973()?tlsc_f106():(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?((tlsc_v1479=tlsc_f1479()),(tlsc_v681=tlsc_f681()),((tlsc_v1479<tlsc_v681)?tlsc_v1479:tlsc_v681)):tlsc_f88()):tlsc_f84()):(tlsc_f876()?tlsc_f88():tlsc_f816())):(tlsc_f923()?tlsc_f84():tlsc_f816())))):tlsc_f816()):tlsc_f816())):tlsc_f816()):tlsc_f816()):tlsc_f816()))):(tlsc_v1657?(tlsc_f1471()?coerce_double_to_double_or_symbol(tlsc_f557()):(tlsc_v1902?(tlsc_f1659()?coerce_double_to_double_or_symbol(tlsc_f1880()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))):(tlsc_f1472()?(tlsc_f1497()?(tlsc_f1474()?coerce_double_to_double_or_symbol(tlsc_f1479()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):(tlsc_f1135()?(tlsc_f818()?coerce_double_to_double_or_symbol(tlsc_f332()):(tlsc_f1441()?(tlsc_f3877()?(tlsc_f3872()?tlsc_f55():(tlsc_f1366()?(tlsc_f1363()?(tlsc_f1331()?(tlsc_f1301()?coerce_double_to_double_or_symbol(tlsc_f757()):tlsc_f54()):tlsc_f51()):(tlsc_f1331()?tlsc_f54():coerce_symbol_to_double_or_symbol(NIL))):(tlsc_f1363()?tlsc_f51():coerce_symbol_to_double_or_symbol(NIL)))):(tlsc_f1289()?tlsc_f55():(tlsc_f1262()?(tlsc_f1239()?(tlsc_f1192()?(tlsc_f1144()?coerce_double_to_double_or_symbol(tlsc_f640()):tlsc_f44()):tlsc_f41()):(tlsc_f1192()?tlsc_f44():coerce_symbol_to_double_or_symbol(NIL))):(tlsc_f1239()?tlsc_f41():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))):(tlsc_f819()?(tlsc_f1117()?(tlsc_f3877()?(tlsc_f3338()?tlsc_f25():(tlsc_f1050()?(tlsc_f1047()?(tlsc_f1015()?(tlsc_f985()?coerce_double_to_double_or_symbol(tlsc_f803()):tlsc_f24()):tlsc_f21()):(tlsc_f1015()?tlsc_f24():coerce_symbol_to_double_or_symbol(NIL))):(tlsc_f1047()?tlsc_f21():coerce_symbol_to_double_or_symbol(NIL)))):(tlsc_f973()?tlsc_f25():(tlsc_f946()?(tlsc_f923()?(tlsc_f876()?(tlsc_f828()?coerce_double_to_double_or_symbol(tlsc_f681()):tlsc_f14()):tlsc_f11()):(tlsc_f876()?tlsc_f14():coerce_symbol_to_double_or_symbol(NIL))):(tlsc_f923()?tlsc_f11():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))); return;}
