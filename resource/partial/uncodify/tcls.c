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
double tcls_v5035;
double tcls_v5033;
double tcls_v5031;
double tcls_v5029;
double tcls_v5027;
double tcls_v5025;
double tcls_v5023;
double tcls_v5021;
double tcls_v5019;
double tcls_v4980;
double tcls_v4988;
double tcls_v4987;
double tcls_v4986;
double tcls_v5017;
double tcls_v5015;
double tcls_v5012;
double tcls_v5010;
double tcls_v5009;
double tcls_v2330;
double tcls_v2328;
double tcls_v2327;
double tcls_v2326;
double tcls_v2325;
int tcls_v2323;
int tcls_p828;
double tcls_m828;
int tcls_p1610;
double tcls_m1610;
int tcls_p1593;
double tcls_m1593;
int tcls_p1723;
double tcls_m1723;
int tcls_p1722;
double tcls_m1722;
int tcls_p1666;
int tcls_m1666;
int tcls_p1681;
double tcls_m1681;
int tcls_p1708;
double tcls_m1708;
double tcls_v1722;
int tcls_p1721;
double tcls_m1721;
int tcls_p1720;
double tcls_m1720;
int tcls_p1719;
double tcls_m1719;
int tcls_p1659;
int tcls_m1659;
int tcls_p1657;
double tcls_m1657;
double tcls_v1719;
int tcls_p1663;
double tcls_m1663;
int tcls_p1413;
double tcls_m1413;
double tcls_v1413;
int tcls_p1406;
double tcls_m1406;
int tcls_p1680;
double tcls_m1680;
int tcls_p1679;
double tcls_m1679;
int tcls_p1686;
double tcls_m1686;
int tcls_p1120;
double tcls_m1120;
int tcls_p1053;
double tcls_m1053;
int tcls_p1074;
int tcls_m1074;
int tcls_p1073;
double tcls_m1073;
int tcls_p1070;
double tcls_m1070;
int tcls_p1063;
double tcls_m1063;
int tcls_p1069;
double tcls_m1069;
int tcls_p1082;
double tcls_m1082;
double tcls_v1082;
int tcls_p1081;
double tcls_m1081;
int tcls_p1111;
double tcls_m1111;
int tcls_p1109;
int tcls_m1109;
int tcls_p1119;
double tcls_m1119;
int tcls_p1220;
double tcls_m1220;
int tcls_p990;
double tcls_m990;
int tcls_p983;
double tcls_m983;
double tcls_v1220;
int tcls_p1219;
double tcls_m1219;
int tcls_p1232;
double tcls_m1232;
int tcls_p1707;
double tcls_m1707;
int tcls_p1706;
double tcls_m1706;
int tcls_p1647;
double tcls_m1647;
int tcls_p1646;
double tcls_m1646;
int tcls_p1214;
double tcls_m1214;
int tcls_p1641;
double tcls_m1641;
int tcls_p1705;
double tcls_m1705;
int tcls_p1700;
double tcls_m1700;
int tcls_p1710;
double tcls_m1710;
int tcls_p1236;
double tcls_m1236;
int tcls_p1227;
int tcls_m1227;
int tcls_p1645;
double tcls_m1645;
int tcls_p1545;
double tcls_m1545;
int tcls_p1478;
double tcls_m1478;
int tcls_p1499;
int tcls_m1499;
int tcls_p1498;
double tcls_m1498;
int tcls_p1495;
double tcls_m1495;
int tcls_p1488;
double tcls_m1488;
int tcls_p1494;
double tcls_m1494;
int tcls_p1507;
double tcls_m1507;
double tcls_v1507;
int tcls_p1506;
double tcls_m1506;
int tcls_p1536;
double tcls_m1536;
int tcls_p1534;
int tcls_m1534;
int tcls_p1544;
double tcls_m1544;
int tcls_p1665;
double tcls_m1665;
int tcls_p1415;
double tcls_m1415;
int tcls_p1405;
double tcls_m1405;
double tcls_v1665;
int tcls_p1664;
double tcls_m1664;
int tcls_p1678;
double tcls_m1678;
int tcls_p1685;
double tcls_m1685;
int tcls_p1673;
int tcls_m1673;
int tcls_p1718;
double tcls_m1718;
int tcls_p1655;
double tcls_m1655;
int tcls_p1209;
double tcls_m1209;
int tcls_p1205;
int tcls_m1205;
int tcls_p1653;
double tcls_m1653;
int tcls_p1203;
double tcls_m1203;
int tcls_p1181;
double tcls_m1181;
int tcls_p1195;
double tcls_m1195;
int tcls_p1201;
double tcls_m1201;
int tcls_p1179;
double tcls_m1179;
int tcls_p1192;
double tcls_m1192;
int tcls_p1189;
int tcls_m1189;
int tcls_p1633;
double tcls_m1633;
int tcls_p1609;
double tcls_m1609;
int tcls_p1625;
double tcls_m1625;
int tcls_p1650;
int tcls_m1650;
int tcls_p1204;
int tcls_m1204;
int tcls_v1189;
int tcls_p1182;
int tcls_m1182;
int tcls_p1171;
int tcls_m1171;
double tcls_v1181;
double tcls_v1179;
int tcls_p1175;
double tcls_m1175;
int tcls_p1172;
int tcls_m1172;
int tcls_p1555;
int tcls_m1555;
int tcls_p1639;
double tcls_m1639;
int tcls_p1631;
double tcls_m1631;
int tcls_p1607;
double tcls_m1607;
double tcls_v1609;
double tcls_v1607;
int tcls_p1603;
double tcls_m1603;
int tcls_p1600;
int tcls_m1600;
int tcls_p1622;
double tcls_m1622;
int tcls_p1619;
int tcls_m1619;
int tcls_v1619;
int tcls_p1612;
int tcls_m1612;
int tcls_p1635;
int tcls_m1635;
int tcls_p1634;
int tcls_m1634;
int tcls_p1599;
int tcls_m1599;
int tcls_p1716;
double tcls_m1716;
int tcls_p1249;
double tcls_m1249;
int tcls_p1244;
double tcls_m1244;
int tcls_p1713;
int tcls_m1713;
int tcls_p1702;
double tcls_m1702;
int tcls_p1696;
double tcls_m1696;
int tcls_p1919;
double tcls_m1919;
int tcls_p1917;
double tcls_m1917;
int tcls_p1916;
double tcls_m1916;
int tcls_p1830;
double tcls_m1830;
int tcls_p1915;
double tcls_m1915;
int tcls_p1858;
double tcls_m1858;
int tcls_p1914;
double tcls_m1914;
int tcls_p1912;
int tcls_m1912;
int tcls_p1910;
double tcls_m1910;
int tcls_p1909;
double tcls_m1909;
int tcls_p1833;
double tcls_m1833;
int tcls_p1827;
int tcls_m1827;
int tcls_p1908;
double tcls_m1908;
int tcls_p1861;
double tcls_m1861;
int tcls_p1855;
int tcls_m1855;
int tcls_p1902;
double tcls_m1902;
int tcls_p1905;
int tcls_m1905;
int tcls_p1957;
double tcls_m1957;
int tcls_p1170;
double tcls_m1170;
int tcls_p1169;
int tcls_m1169;
int tcls_p1598;
double tcls_m1598;
int tcls_p1597;
int tcls_m1597;
int tcls_p1941;
double tcls_m1941;
int tcls_p1168;
double tcls_m1168;
int tcls_p1160;
double tcls_m1160;
int tcls_p1167;
int tcls_m1167;
int tcls_p1153;
double tcls_m1153;
int tcls_p1165;
double tcls_m1165;
int tcls_p1159;
double tcls_m1159;
int tcls_p1143;
double tcls_m1143;
int tcls_p1152;
double tcls_m1152;
int tcls_p1138;
int tcls_m1138;
int tcls_v1172;
int tcls_v1171;
double tcls_v1143;
int tcls_p1130;
int tcls_m1130;
int tcls_p826;
double tcls_m826;
int tcls_p796;
int tcls_m796;
int tcls_p31;
double_or_symbol tcls_m31;
int tcls_p1129;
int tcls_m1129;
int tcls_v1129;
int tcls_p1128;
int tcls_m1128;
int tcls_p1596;
double tcls_m1596;
int tcls_p1586;
double tcls_m1586;
int tcls_p1595;
int tcls_m1595;
int tcls_p1579;
double tcls_m1579;
int tcls_p1591;
double tcls_m1591;
int tcls_p1585;
double tcls_m1585;
int tcls_p1569;
double tcls_m1569;
int tcls_p1578;
double tcls_m1578;
int tcls_p1564;
int tcls_m1564;
int tcls_v1600;
int tcls_v1599;
double tcls_v1569;
int tcls_p1556;
int tcls_m1556;
int tcls_p827;
double tcls_m827;
int tcls_p825;
int tcls_m825;
int tcls_p823;
int tcls_m823;
int tcls_p61;
double_or_symbol tcls_m61;
int tcls_p1554;
int tcls_m1554;
int tcls_v1554;
int tcls_p1553;
int tcls_m1553;
int tcls_p4493;
double tcls_m4493;
int tcls_p4491;
double tcls_m4491;
int tcls_p4484;
double tcls_m4484;
int tcls_p4482;
double tcls_m4482;
int tcls_p2117;
double tcls_m2117;
double tcls_v1249;
double tcls_v1244;
int tcls_p1237;
int tcls_m1237;
int tcls_v1129;
int tcls_p816;
int tcls_m816;
int tcls_v1129;
int tcls_p790;
int tcls_m790;
int tcls_p557;
double tcls_m557;
double tcls_v1603;
double tcls_v1175;
int tcls_p535;
double tcls_m535;
int tcls_v1129;
int tcls_p25;
double_or_symbol tcls_m25;
int tcls_v1237;
double tcls_v1232;
int tcls_p1221;
int tcls_m1221;
int tcls_v1129;
int tcls_p1124;
int tcls_m1124;
double tcls_v1702;
double tcls_v1696;
int tcls_p1689;
int tcls_m1689;
int tcls_v1554;
int tcls_p55;
double_or_symbol tcls_m55;
int tcls_v1689;
double tcls_v1678;
int tcls_p1667;
int tcls_m1667;
int tcls_v1554;
int tcls_p1549;
int tcls_m1549;
int tcls_p4624;
double tcls_m4624;
int tcls_p1217;
double tcls_m1217;
int tcls_p1216;
int tcls_m1216;
int tcls_p1123;
double tcls_m1123;
int tcls_p1100;
double tcls_m1100;
int tcls_p1030;
int tcls_m1030;
int tcls_p1029;
double tcls_m1029;
int tcls_p1026;
double tcls_m1026;
int tcls_p1020;
double tcls_m1020;
int tcls_p1025;
double tcls_m1025;
int tcls_p1011;
double tcls_m1011;
int tcls_p1019;
double tcls_m1019;
int tcls_p1006;
int tcls_m1006;
int tcls_p1037;
double tcls_m1037;
double tcls_v1037;
int tcls_p1034;
double tcls_m1034;
int tcls_p807;
int tcls_m807;
int tcls_p784;
int tcls_m784;
int tcls_p1031;
int tcls_m1031;
int tcls_v1031;
double tcls_v1011;
int tcls_p999;
int tcls_m999;
int tcls_p805;
int tcls_m805;
int tcls_p782;
int tcls_m782;
int tcls_p552;
double tcls_m552;
int tcls_p530;
double tcls_m530;
int tcls_v999;
int tcls_p21;
double_or_symbol tcls_m21;
int tcls_v999;
int tcls_p998;
int tcls_m998;
int tcls_p1094;
double tcls_m1094;
int tcls_p1091;
int tcls_m1091;
int tcls_v1091;
int tcls_p1085;
int tcls_m1085;
int tcls_p723;
int tcls_m723;
int tcls_p1122;
double tcls_m1122;
int tcls_p1075;
int tcls_m1075;
int tcls_p1072;
double tcls_m1072;
int tcls_p1067;
double tcls_m1067;
int tcls_p1060;
double tcls_m1060;
int tcls_p1066;
double tcls_m1066;
int tcls_p1050;
double tcls_m1050;
int tcls_p1059;
double tcls_m1059;
int tcls_p1045;
int tcls_m1045;
int tcls_p1084;
double tcls_m1084;
double tcls_v1084;
int tcls_p1079;
double tcls_m1079;
int tcls_p810;
int tcls_m810;
int tcls_p809;
int tcls_m809;
int tcls_p555;
double tcls_m555;
int tcls_p787;
int tcls_m787;
int tcls_p786;
int tcls_m786;
int tcls_p533;
double tcls_m533;
double tcls_v1079;
double tcls_v1034;
int tcls_p813;
double tcls_m813;
int tcls_p812;
int tcls_m812;
int tcls_p789;
int tcls_m789;
int tcls_p1076;
int tcls_m1076;
int tcls_v1076;
double tcls_v1050;
int tcls_p1038;
int tcls_m1038;
int tcls_p24;
double_or_symbol tcls_m24;
int tcls_p1114;
double tcls_m1114;
int tcls_p1108;
int tcls_m1108;
int tcls_v1108;
int tcls_p1102;
int tcls_m1102;
int tcls_p1412;
double tcls_m1412;
double tcls_v990;
int tcls_p986;
double tcls_m986;
int tcls_p985;
int tcls_m985;
int tcls_p981;
double tcls_m981;
int tcls_p956;
double tcls_m956;
int tcls_p877;
int tcls_m877;
int tcls_p885;
double tcls_m885;
int tcls_p944;
double tcls_m944;
int tcls_p955;
double tcls_m955;
int tcls_p953;
double tcls_m953;
int tcls_p878;
int tcls_m878;
int tcls_p875;
double tcls_m875;
int tcls_p870;
double tcls_m870;
int tcls_p863;
double tcls_m863;
int tcls_p869;
double tcls_m869;
int tcls_p853;
double tcls_m853;
int tcls_p862;
double tcls_m862;
int tcls_p848;
int tcls_m848;
int tcls_p887;
double tcls_m887;
double tcls_v887;
double tcls_v885;
int tcls_p882;
double tcls_m882;
int tcls_p683;
int tcls_m683;
int tcls_p667;
int tcls_m667;
int tcls_p879;
int tcls_m879;
int tcls_v879;
double tcls_v853;
int tcls_p841;
int tcls_m841;
int tcls_p681;
int tcls_m681;
int tcls_p665;
int tcls_m665;
int tcls_p436;
double tcls_m436;
int tcls_p423;
double tcls_m423;
int tcls_v841;
int tcls_p11;
double_or_symbol tcls_m11;
int tcls_v841;
int tcls_p840;
int tcls_m840;
int tcls_p947;
double tcls_m947;
int tcls_p941;
int tcls_m941;
int tcls_v941;
int tcls_p935;
int tcls_m935;
int tcls_p606;
int tcls_m606;
int tcls_p979;
double tcls_m979;
int tcls_p924;
int tcls_m924;
int tcls_p932;
double tcls_m932;
int tcls_p967;
double tcls_m967;
int tcls_p978;
double tcls_m978;
int tcls_p976;
double tcls_m976;
int tcls_p925;
int tcls_m925;
int tcls_p922;
double tcls_m922;
int tcls_p917;
double tcls_m917;
int tcls_p910;
double tcls_m910;
int tcls_p916;
double tcls_m916;
int tcls_p900;
double tcls_m900;
int tcls_p909;
double tcls_m909;
int tcls_p895;
int tcls_m895;
int tcls_p934;
double tcls_m934;
double tcls_v934;
double tcls_v932;
int tcls_p929;
double tcls_m929;
int tcls_p686;
int tcls_m686;
int tcls_p685;
int tcls_m685;
int tcls_p439;
double tcls_m439;
int tcls_p670;
int tcls_m670;
int tcls_p669;
int tcls_m669;
int tcls_p426;
double tcls_m426;
double tcls_v929;
double tcls_v882;
int tcls_p689;
double tcls_m689;
int tcls_p688;
int tcls_m688;
int tcls_p672;
int tcls_m672;
int tcls_p926;
int tcls_m926;
int tcls_v926;
double tcls_v900;
int tcls_p888;
int tcls_m888;
int tcls_p14;
double_or_symbol tcls_m14;
int tcls_p970;
double tcls_m970;
int tcls_p964;
int tcls_m964;
int tcls_v964;
int tcls_p958;
int tcls_m958;
int tcls_v1038;
int tcls_v1038;
int tcls_v888;
int tcls_v888;
int tcls_p831;
int tcls_m831;
int tcls_v831;
int tcls_p830;
int tcls_m830;
double tcls_v1415;
int tcls_p1409;
double tcls_m1409;
int tcls_p1408;
int tcls_m1408;
int tcls_p1403;
double tcls_m1403;
int tcls_p1378;
double tcls_m1378;
int tcls_p1299;
int tcls_m1299;
int tcls_p1307;
double tcls_m1307;
int tcls_p1366;
double tcls_m1366;
int tcls_p1377;
double tcls_m1377;
int tcls_p1375;
double tcls_m1375;
int tcls_p1300;
int tcls_m1300;
int tcls_p1297;
double tcls_m1297;
int tcls_p1292;
double tcls_m1292;
int tcls_p1285;
double tcls_m1285;
int tcls_p1291;
double tcls_m1291;
int tcls_p1275;
double tcls_m1275;
int tcls_p1284;
double tcls_m1284;
int tcls_p1270;
int tcls_m1270;
int tcls_p1309;
double tcls_m1309;
double tcls_v1309;
double tcls_v1307;
int tcls_p1304;
double tcls_m1304;
int tcls_p590;
int tcls_m590;
double tcls_v1304;
double tcls_v929;
int tcls_p353;
double tcls_m353;
double tcls_v1304;
double tcls_v882;
int tcls_p349;
double tcls_m349;
int tcls_p600;
int tcls_m600;
int tcls_p598;
int tcls_m598;
int tcls_p1301;
int tcls_m1301;
int tcls_v1301;
double tcls_v1275;
int tcls_p1263;
int tcls_m1263;
int tcls_v1129;
int tcls_p581;
int tcls_m581;
int tcls_p340;
double tcls_m340;
int tcls_v1263;
int tcls_p41;
double_or_symbol tcls_m41;
int tcls_v1263;
int tcls_p1262;
int tcls_m1262;
int tcls_p1369;
double tcls_m1369;
int tcls_p1363;
int tcls_m1363;
int tcls_v1363;
int tcls_p1357;
int tcls_m1357;
int tcls_p1401;
double tcls_m1401;
int tcls_p1346;
int tcls_m1346;
int tcls_p1354;
double tcls_m1354;
int tcls_p1389;
double tcls_m1389;
int tcls_p1400;
double tcls_m1400;
int tcls_p1398;
double tcls_m1398;
int tcls_p1347;
int tcls_m1347;
int tcls_p1344;
double tcls_m1344;
int tcls_p1339;
double tcls_m1339;
int tcls_p1332;
double tcls_m1332;
int tcls_p1338;
double tcls_m1338;
int tcls_p1322;
double tcls_m1322;
int tcls_p1331;
double tcls_m1331;
int tcls_p1317;
int tcls_m1317;
int tcls_p1356;
double tcls_m1356;
double tcls_v1356;
double tcls_v1354;
int tcls_p1351;
double tcls_m1351;
int tcls_p611;
int tcls_m611;
double tcls_v1351;
double tcls_v929;
int tcls_p377;
double tcls_m377;
double tcls_v1351;
double tcls_v882;
int tcls_p373;
double tcls_m373;
int tcls_p621;
int tcls_m621;
int tcls_p619;
int tcls_m619;
int tcls_v1129;
int tcls_p602;
int tcls_m602;
int tcls_p365;
double tcls_m365;
double tcls_v1351;
double tcls_v1304;
int tcls_p648;
double tcls_m648;
int tcls_p637;
int tcls_m637;
int tcls_p635;
int tcls_m635;
int tcls_p634;
int tcls_m634;
int tcls_p399;
double tcls_m399;
int tcls_p632;
int tcls_m632;
int tcls_p630;
int tcls_m630;
int tcls_p396;
double tcls_m396;
int tcls_p647;
int tcls_m647;
int tcls_p645;
int tcls_m645;
int tcls_p1348;
int tcls_m1348;
int tcls_v1348;
double tcls_v1322;
int tcls_p1310;
int tcls_m1310;
int tcls_p44;
double_or_symbol tcls_m44;
int tcls_p1392;
double tcls_m1392;
int tcls_p1386;
int tcls_m1386;
int tcls_v1386;
int tcls_p1380;
int tcls_m1380;
int tcls_p1661;
double tcls_m1661;
int tcls_p1660;
int tcls_m1660;
int tcls_p1548;
double tcls_m1548;
int tcls_p1525;
double tcls_m1525;
int tcls_p1455;
int tcls_m1455;
int tcls_p1454;
double tcls_m1454;
int tcls_p1451;
double tcls_m1451;
int tcls_p1445;
double tcls_m1445;
int tcls_p1450;
double tcls_m1450;
int tcls_p1436;
double tcls_m1436;
int tcls_p1444;
double tcls_m1444;
int tcls_p1431;
int tcls_m1431;
int tcls_p1462;
double tcls_m1462;
double tcls_v1462;
int tcls_p1459;
double tcls_m1459;
int tcls_p717;
int tcls_m717;
int tcls_p715;
int tcls_m715;
int tcls_p707;
int tcls_m707;
double tcls_v1459;
double tcls_v1079;
int tcls_p460;
double tcls_m460;
double tcls_v1459;
double tcls_v1034;
int tcls_p456;
double tcls_m456;
int tcls_p1456;
int tcls_m1456;
int tcls_v1456;
double tcls_v1436;
int tcls_p1424;
int tcls_m1424;
int tcls_v1129;
int tcls_p698;
int tcls_m698;
int tcls_p447;
double tcls_m447;
int tcls_v1424;
int tcls_p51;
double_or_symbol tcls_m51;
int tcls_v1424;
int tcls_p1423;
int tcls_m1423;
int tcls_p1519;
double tcls_m1519;
int tcls_p1516;
int tcls_m1516;
int tcls_v1516;
int tcls_p1510;
int tcls_m1510;
int tcls_p1547;
double tcls_m1547;
int tcls_p1500;
int tcls_m1500;
int tcls_p1497;
double tcls_m1497;
int tcls_p1492;
double tcls_m1492;
int tcls_p1485;
double tcls_m1485;
int tcls_p1491;
double tcls_m1491;
int tcls_p1475;
double tcls_m1475;
int tcls_p1484;
double tcls_m1484;
int tcls_p1470;
int tcls_m1470;
int tcls_p1509;
double tcls_m1509;
double tcls_v1509;
int tcls_p1504;
double tcls_m1504;
int tcls_p738;
int tcls_m738;
int tcls_p736;
int tcls_m736;
int tcls_p728;
int tcls_m728;
int tcls_v1129;
int tcls_p719;
int tcls_m719;
double tcls_v1504;
double tcls_v1079;
int tcls_p484;
double tcls_m484;
double tcls_v1504;
double tcls_v1034;
int tcls_p480;
double tcls_m480;
int tcls_p472;
double tcls_m472;
double tcls_v1504;
double tcls_v1459;
int tcls_p765;
double tcls_m765;
int tcls_p764;
int tcls_m764;
int tcls_p762;
int tcls_m762;
int tcls_p754;
int tcls_m754;
int tcls_p752;
int tcls_m752;
int tcls_p751;
int tcls_m751;
int tcls_p506;
double tcls_m506;
int tcls_p749;
int tcls_m749;
int tcls_p747;
int tcls_m747;
int tcls_p503;
double tcls_m503;
int tcls_p1501;
int tcls_m1501;
int tcls_v1501;
double tcls_v1475;
int tcls_p1463;
int tcls_m1463;
int tcls_p54;
double_or_symbol tcls_m54;
int tcls_p1539;
double tcls_m1539;
int tcls_p1533;
int tcls_m1533;
int tcls_v1533;
int tcls_p1527;
int tcls_m1527;
int tcls_v1463;
int tcls_v1463;
int tcls_v1310;
int tcls_v1310;
int tcls_p1253;
int tcls_m1253;
int tcls_p332;
double tcls_m332;
int tcls_p4642;
int tcls_m4642;
int tcls_p4647;
double tcls_m4647;
int tcls_p4645;
int tcls_m4645;
int tcls_p4640;
double tcls_m4640;
int tcls_p2145;
double tcls_m2145;
int tcls_p2161;
double tcls_m2161;
int tcls_p2264;
double tcls_m2264;
int tcls_p2235;
double tcls_m2235;
int tcls_p4983;
double tcls_m4983;
int tcls_v1827;
int tcls_p1821;
int tcls_m1821;
int tcls_v1855;
int tcls_p1849;
int tcls_m1849;
int tcls_v1821;
int tcls_p1817;
int tcls_m1817;
int tcls_p1847;
int tcls_m1847;
int tcls_v1847;
int tcls_p1818;
int tcls_m1818;
int tcls_p2314;
double tcls_m2314;
int tcls_p1888;
double tcls_m1888;
int tcls_p1901;
double tcls_m1901;
int tcls_p1886;
double tcls_m1886;
int tcls_p1898;
double tcls_m1898;
int tcls_p1880;
double tcls_m1880;
int tcls_p1876;
int tcls_m1876;
int tcls_p1896;
double tcls_m1896;
int tcls_p1814;
double tcls_m1814;
int tcls_p1806;
double tcls_m1806;
int tcls_p1812;
double tcls_m1812;
int tcls_p1803;
double tcls_m1803;
int tcls_p1800;
int tcls_m1800;
int tcls_p1893;
int tcls_m1893;
int tcls_p1875;
int tcls_m1875;
int tcls_p1815;
int tcls_m1815;
int tcls_v1893;
int tcls_v1800;
double tcls_v1814;
double tcls_v1812;
double tcls_v1909;
double tcls_v1908;
double tcls_v1916;
double tcls_v1915;
int tcls_p1768;
int tcls_m1768;
int tcls_v1875;
int tcls_p1761;
int tcls_m1761;
int tcls_p1758;
int tcls_m1758;
int tcls_p1753;
double tcls_m1753;
int tcls_p1747;
double tcls_m1747;
double tcls_v1753;
double tcls_v1747;
int tcls_p1743;
double tcls_m1743;
double tcls_v1743;
double tcls_v1351;
int tcls_p129;
double tcls_m129;
double tcls_v1743;
double tcls_v1304;
int tcls_p125;
double tcls_m125;
double tcls_v1743;
double tcls_v827;
double tcls_v1743;
double tcls_v1603;
int tcls_p147;
double tcls_m147;
double tcls_v1743;
double tcls_v1504;
int tcls_p143;
double tcls_m143;
double tcls_v1743;
double tcls_v1459;
int tcls_p139;
double tcls_m139;
double tcls_v1743;
double tcls_v929;
int tcls_p88;
double tcls_m88;
double tcls_v1743;
double tcls_v882;
int tcls_p84;
double tcls_m84;
double tcls_v1743;
double tcls_v826;
double tcls_v1743;
double tcls_v1175;
int tcls_p106;
double tcls_m106;
double tcls_v1743;
double tcls_v1079;
int tcls_p102;
double tcls_m102;
double tcls_v1743;
double tcls_v1034;
int tcls_p98;
double tcls_m98;
int tcls_p1740;
int tcls_m1740;
int tcls_p2136;
double tcls_m2136;
int tcls_p2139;
double tcls_m2139;
int tcls_p2138;
int tcls_m2138;
int tcls_p2115;
double tcls_m2115;
double tcls_v2139;
int tcls_p2125;
double tcls_m2125;
int tcls_p2135;
double tcls_m2135;
int tcls_p2133;
double tcls_m2133;
int tcls_p2027;
double tcls_m2027;
int tcls_p2020;
int tcls_m2020;
int tcls_p2026;
double tcls_m2026;
int tcls_p2095;
int tcls_m2095;
int tcls_p2093;
double tcls_m2093;
int tcls_p2114;
double tcls_m2114;
int tcls_p2113;
double tcls_m2113;
int tcls_p2083;
double tcls_m2083;
int tcls_p2081;
double tcls_m2081;
int tcls_p2124;
double tcls_m2124;
int tcls_p2091;
double tcls_m2091;
int tcls_p2089;
double tcls_m2089;
int tcls_p2069;
double tcls_m2069;
int tcls_p2086;
int tcls_m2086;
int tcls_p2075;
double tcls_m2075;
int tcls_p2067;
double tcls_m2067;
double tcls_v2069;
double tcls_v2067;
int tcls_p2057;
int tcls_m2057;
int tcls_p2071;
int tcls_m2071;
int tcls_p2070;
int tcls_m2070;
int tcls_p2122;
double tcls_m2122;
int tcls_p2109;
double tcls_m2109;
int tcls_p2103;
double tcls_m2103;
double tcls_v2109;
double tcls_v2103;
int tcls_p2096;
int tcls_m2096;
int tcls_p1966;
double tcls_m1966;
int tcls_p1950;
double tcls_m1950;
int tcls_p2031;
int tcls_m2031;
int tcls_p2053;
int tcls_m2053;
double tcls_v2133;
int tcls_p2129;
double tcls_m2129;
int tcls_p2047;
double tcls_m2047;
double tcls_v2047;
int tcls_p2004;
double tcls_m2004;
int tcls_p2132;
double tcls_m2132;
int tcls_p2038;
double tcls_m2038;
int tcls_p1931;
int tcls_m1931;
int tcls_p2131;
double tcls_m2131;
int tcls_p2050;
double tcls_m2050;
int tcls_p2003;
double tcls_m2003;
double tcls_v2131;
int tcls_p2130;
double tcls_m2130;
double tcls_v2050;
int tcls_p2043;
double tcls_m2043;
int tcls_p2001;
double tcls_m2001;
int tcls_p1999;
double tcls_m1999;
int tcls_p1998;
double tcls_m1998;
int tcls_p1996;
double tcls_m1996;
double tcls_v1996;
int tcls_p1987;
int tcls_m1987;
int tcls_p1985;
double tcls_m1985;
int tcls_p1984;
double tcls_m1984;
int tcls_p1982;
double tcls_m1982;
double tcls_v1982;
int tcls_p1973;
int tcls_m1973;
int tcls_p2042;
int tcls_m2042;
int tcls_p2127;
double tcls_m2127;
int tcls_p2030;
double tcls_m2030;
int tcls_p2016;
double tcls_m2016;
double tcls_v2016;
int tcls_p2008;
int tcls_m2008;
int tcls_p2029;
double tcls_m2029;
double tcls_v2029;
int tcls_p2018;
int tcls_m2018;
int tcls_p2126;
int tcls_m2126;
int tcls_p2040;
int tcls_m2040;
int tcls_p1970;
int tcls_m1970;
int tcls_v1970;
int tcls_p1936;
double tcls_m1936;
int tcls_v2040;
double tcls_v1936;
int tcls_p1925;
int tcls_m1925;
int tcls_v1740;
int tcls_p1738;
int tcls_m1738;
int tcls_p1736;
int tcls_m1736;
int tcls_v1736;
int tcls_p1735;
int tcls_m1735;
int tcls_p2321;
double tcls_m2321;
int tcls_p2320;
double tcls_m2320;
int tcls_p2238;
double tcls_m2238;
int tcls_p2232;
int tcls_m2232;
int tcls_v2232;
int tcls_p2226;
int tcls_m2226;
int tcls_p2319;
double tcls_m2319;
int tcls_p2267;
double tcls_m2267;
int tcls_p2261;
int tcls_m2261;
int tcls_v2261;
int tcls_p2255;
int tcls_m2255;
int tcls_v2226;
int tcls_p2222;
int tcls_m2222;
int tcls_p2252;
int tcls_m2252;
int tcls_v2252;
int tcls_p2223;
int tcls_m2223;
int tcls_p2310;
double tcls_m2310;
int tcls_p2316;
int tcls_m2316;
double tcls_v2309;
double tcls_v2305;
double tcls_v2303;
int tcls_v2300;
int tcls_p2295;
double tcls_m2295;
int tcls_p2293;
double tcls_m2293;
int tcls_p2219;
double tcls_m2219;
int tcls_p2211;
double tcls_m2211;
int tcls_p2287;
double tcls_m2287;
int tcls_p2217;
double tcls_m2217;
int tcls_p2208;
double tcls_m2208;
int tcls_p2205;
int tcls_m2205;
int tcls_p2282;
int tcls_m2282;
int tcls_v2281;
int tcls_p2220;
int tcls_m2220;
int tcls_v2205;
double tcls_v2219;
double tcls_v2217;
double tcls_v2320;
double tcls_v2319;
int tcls_p2173;
int tcls_m2173;
int tcls_v2166;
int tcls_p2163;
int tcls_m2163;
int tcls_p2156;
double tcls_m2156;
int tcls_p2150;
double tcls_m2150;
double tcls_v2156;
double tcls_v2150;
int tcls_p2144;
double tcls_m2144;
double tcls_v2144;
double tcls_v1351;
int tcls_p217;
double tcls_m217;
double tcls_v2144;
double tcls_v1304;
int tcls_p213;
double tcls_m213;
double tcls_v2144;
double tcls_v827;
double tcls_v2144;
double tcls_v1603;
int tcls_p235;
double tcls_m235;
double tcls_v2144;
double tcls_v1504;
int tcls_p231;
double tcls_m231;
double tcls_v2144;
double tcls_v1459;
int tcls_p227;
double tcls_m227;
double tcls_v2144;
double tcls_v929;
int tcls_p176;
double tcls_m176;
double tcls_v2144;
double tcls_v882;
int tcls_p172;
double tcls_m172;
double tcls_v2144;
double tcls_v826;
double tcls_v2144;
double tcls_v1175;
int tcls_p194;
double tcls_m194;
double tcls_v2144;
double tcls_v1079;
int tcls_p190;
double tcls_m190;
double tcls_v2144;
double tcls_v1034;
int tcls_p186;
double tcls_m186;
int tcls_p1734;
int tcls_m1734;
int tcls_p2141;
int tcls_m2141;
int tcls_v2141;
int tcls_p1923;
int tcls_m1923;
int tcls_v1921;
int tcls_p565;
double tcls_m565;
double tcls_v565;
double tcls_v1351;
int tcls_p302;
double tcls_m302;
double tcls_v565;
double tcls_v1304;
int tcls_p298;
double tcls_m298;
double tcls_v565;
double tcls_v827;
double tcls_v565;
double tcls_v1603;
int tcls_p320;
double tcls_m320;
double tcls_v565;
double tcls_v1504;
int tcls_p316;
double tcls_m316;
double tcls_v565;
double tcls_v1459;
int tcls_p312;
double tcls_m312;
double tcls_v565;
double tcls_v929;
int tcls_p261;
double tcls_m261;
double tcls_v565;
double tcls_v882;
int tcls_p257;
double tcls_m257;
double tcls_v565;
double tcls_v826;
double tcls_v565;
double tcls_v1175;
int tcls_p279;
double tcls_m279;
double tcls_v565;
double tcls_v1079;
int tcls_p275;
double tcls_m275;
double tcls_v565;
double tcls_v1034;
int tcls_p271;
double tcls_m271;
int tcls_v1253;
int tcls_v1554;
int tcls_v1129;
int tcls_v1554;
int tcls_v1129;
double tcls_v565;
double tcls_v332;
double tcls_v565;
double tcls_v765;
double tcls_v565;
double tcls_v648;
double tcls_v565;
double tcls_v813;
double tcls_v565;
double tcls_v689;
double tcls_v2144;
double tcls_v332;
double tcls_v2144;
double tcls_v765;
double tcls_v2144;
double tcls_v648;
double tcls_v2144;
double tcls_v813;
double tcls_v2144;
double tcls_v689;
double tcls_v1743;
double tcls_v332;
double tcls_v1743;
double tcls_v765;
double tcls_v1743;
double tcls_v648;
double tcls_v1743;
double tcls_v813;
double tcls_v1743;
double tcls_v689;
static double tcls_f828(){if (tcls_p828) return tcls_m828; else {tcls_p828=T;return tcls_m828=error("Non-numeric argument to MIN");}}
static double tcls_f1610(){if (tcls_p1610) return tcls_m1610; else {tcls_p1610=T;return tcls_m1610=error("No applicable method for DISTANCE with argument types (POINT (OR BOOLEAN POINT))");}}
static double tcls_f1593(){if (tcls_p1593) return tcls_m1593; else {tcls_p1593=T;return tcls_m1593=error("Can't form tangent when points are the same");}}
static double tcls_f1723(){if (tcls_p1723) return tcls_m1723; else {tcls_p1723=T;return tcls_m1723=normalize_rotation((tcls_v5019+(3.141592653589793)));}}
static double tcls_f1722(){if (tcls_p1722) return tcls_m1722; else {tcls_p1722=T;return tcls_m1722=sin(tcls_f1723());}}
static int tcls_f1666(){if (tcls_p1666) return tcls_m1666; else {tcls_p1666=T;return tcls_m1666=(tcls_f1722()==0.0);}}
static double tcls_f1681(){if (tcls_p1681) return tcls_m1681; else {tcls_p1681=T;return tcls_m1681=(tcls_f1722()*tcls_v5035);}}
static double tcls_f1708(){if (tcls_p1708) return tcls_m1708; else {tcls_p1708=T;return tcls_m1708=(tcls_f1722()*tcls_v5033);}}
static double tcls_f1721(){if (tcls_p1721) return tcls_m1721; else {tcls_p1721=T;return tcls_m1721=((tcls_v1722=tcls_f1722()),(tcls_v1722*tcls_v1722));}}
static double tcls_f1720(){if (tcls_p1720) return tcls_m1720; else {tcls_p1720=T;return tcls_m1720=cos(tcls_f1723());}}
static double tcls_f1719(){if (tcls_p1719) return tcls_m1719; else {tcls_p1719=T;return tcls_m1719=(-tcls_f1720());}}
static int tcls_f1659(){if (tcls_p1659) return tcls_m1659; else {tcls_p1659=T;return tcls_m1659=(tcls_f1719()>0.0);}}
static double tcls_f1657(){if (tcls_p1657) return tcls_m1657; else {tcls_p1657=T;return tcls_m1657=(tcls_f1659()?(-tcls_f1722()):tcls_f1722());}}
static double tcls_f1663(){if (tcls_p1663) return tcls_m1663; else {tcls_p1663=T;return tcls_m1663=((tcls_v1719=tcls_f1719()),(tcls_v1719*tcls_v1719));}}
static double tcls_f1413(){if (tcls_p1413) return tcls_m1413; else {tcls_p1413=T;return tcls_m1413=(tcls_f1721()+tcls_f1663());}}
static double tcls_f1406(){if (tcls_p1406) return tcls_m1406; else {tcls_p1406=T;return tcls_m1406=((tcls_v1413=tcls_f1413()),(tcls_v1413+tcls_v1413));}}
static double tcls_f1680(){if (tcls_p1680) return tcls_m1680; else {tcls_p1680=T;return tcls_m1680=(tcls_f1719()*tcls_v5033);}}
static double tcls_f1679(){if (tcls_p1679) return tcls_m1679; else {tcls_p1679=T;return tcls_m1679=(tcls_f1681()+tcls_f1680());}}
static double tcls_f1686(){if (tcls_p1686) return tcls_m1686; else {tcls_p1686=T;return tcls_m1686=((tcls_f1722()*tcls_v5023)+(tcls_f1719()*tcls_v5021));}}
static double tcls_f1120(){if (tcls_p1120) return tcls_m1120; else {tcls_p1120=T;return tcls_m1120=(tcls_f1686()/tcls_f1719());}}
static double tcls_f1053(){if (tcls_p1053) return tcls_m1053; else {tcls_p1053=T;return tcls_m1053=(tcls_f1120()+tcls_f1722());}}
static int tcls_f1074(){if (tcls_p1074) return tcls_m1074; else {tcls_p1074=T;return tcls_m1074=(tcls_v5033==tcls_f1120());}}
static double tcls_f1073(){if (tcls_p1073) return tcls_m1073; else {tcls_p1073=T;return tcls_m1073=(tcls_f1074()?tcls_f1593():(0.0));}}
static double tcls_f1070(){if (tcls_p1070) return tcls_m1070; else {tcls_p1070=T;return tcls_m1070=(tcls_f1074()?tcls_f1593():(1.0));}}
static double tcls_f1063(){if (tcls_p1063) return tcls_m1063; else {tcls_p1063=T;return tcls_m1063=(tcls_f1074()?tcls_f1593():tcls_f1120());}}
static double tcls_f1069(){if (tcls_p1069) return tcls_m1069; else {tcls_p1069=T;return tcls_m1069=(tcls_f1120()-tcls_v5033);}}
static double tcls_f1082(){if (tcls_p1082) return tcls_m1082; else {tcls_p1082=T;return tcls_m1082=(tcls_v5021-tcls_f1120());}}
static double tcls_f1081(){if (tcls_p1081) return tcls_m1081; else {tcls_p1081=T;return tcls_m1081=((tcls_v1082=tcls_f1082()),(tcls_v1082*tcls_v1082));}}
static double tcls_f1111(){if (tcls_p1111) return tcls_m1111; else {tcls_p1111=T;return tcls_m1111=(tcls_f1120()-tcls_v5021);}}
static int tcls_f1109(){if (tcls_p1109) return tcls_m1109; else {tcls_p1109=T;return tcls_m1109=(fabs(tcls_f1111())<tcls_v4980);}}
static double tcls_f1119(){if (tcls_p1119) return tcls_m1119; else {tcls_p1119=T;return tcls_m1119=(tcls_f1719()*tcls_f1120());}}
static double tcls_f1220(){if (tcls_p1220) return tcls_m1220; else {tcls_p1220=T;return tcls_m1220=(tcls_f1686()-tcls_f1681()-tcls_f1680());}}
static double tcls_f990(){if (tcls_p990) return tcls_m990; else {tcls_p990=T;return tcls_m990=((-2.0)*tcls_f1719()*tcls_f1220());}}
static double tcls_f983(){if (tcls_p983) return tcls_m983; else {tcls_p983=T;return tcls_m983=((-tcls_f990())/tcls_f1406());}}
static double tcls_f1219(){if (tcls_p1219) return tcls_m1219; else {tcls_p1219=T;return tcls_m1219=((tcls_v1220=tcls_f1220()),(tcls_v1220*tcls_v1220));}}
static double tcls_f1232(){if (tcls_p1232) return tcls_m1232; else {tcls_p1232=T;return tcls_m1232=(tcls_f1679()-tcls_f1686());}}
static double tcls_f1707(){if (tcls_p1707) return tcls_m1707; else {tcls_p1707=T;return tcls_m1707=(tcls_f1719()*tcls_v5035);}}
static double tcls_f1706(){if (tcls_p1706) return tcls_m1706; else {tcls_p1706=T;return tcls_m1706=(tcls_f1708()-tcls_f1707());}}
static double tcls_f1647(){if (tcls_p1647) return tcls_m1647; else {tcls_p1647=T;return tcls_m1647=(tcls_f1659()?(tcls_f1707()-tcls_f1708()):tcls_f1706());}}
static double tcls_f1646(){if (tcls_p1646) return tcls_m1646; else {tcls_p1646=T;return tcls_m1646=(tcls_f1719()*tcls_f1647());}}
static double tcls_f1214(){if (tcls_p1214) return tcls_m1214; else {tcls_p1214=T;return tcls_m1214=((tcls_f1686()*tcls_f1657())-tcls_f1646());}}
static double tcls_f1641(){if (tcls_p1641) return tcls_m1641; else {tcls_p1641=T;return tcls_m1641=(tcls_f1722()*tcls_f1647());}}
static double tcls_f1705(){if (tcls_p1705) return tcls_m1705; else {tcls_p1705=T;return tcls_m1705=(tcls_f1719()*tcls_f1706());}}
static double tcls_f1700(){if (tcls_p1700) return tcls_m1700; else {tcls_p1700=T;return tcls_m1700=(tcls_f1722()*tcls_f1706());}}
static double tcls_f1710(){if (tcls_p1710) return tcls_m1710; else {tcls_p1710=T;return tcls_m1710=((tcls_f1722()*tcls_v5027)+(tcls_f1719()*tcls_v5025));}}
static double tcls_f1236(){if (tcls_p1236) return tcls_m1236; else {tcls_p1236=T;return tcls_m1236=(tcls_f1710()-tcls_f1686());}}
static int tcls_f1227(){if (tcls_p1227) return tcls_m1227; else {tcls_p1227=T;return tcls_m1227=(tcls_f1236()>(0.0));}}
static double tcls_f1645(){if (tcls_p1645) return tcls_m1645; else {tcls_p1645=T;return tcls_m1645=((tcls_f1710()*tcls_f1657())-tcls_f1646());}}
static double tcls_f1545(){if (tcls_p1545) return tcls_m1545; else {tcls_p1545=T;return tcls_m1545=(tcls_f1710()/tcls_f1719());}}
static double tcls_f1478(){if (tcls_p1478) return tcls_m1478; else {tcls_p1478=T;return tcls_m1478=(tcls_f1545()+tcls_f1722());}}
static int tcls_f1499(){if (tcls_p1499) return tcls_m1499; else {tcls_p1499=T;return tcls_m1499=(tcls_v5033==tcls_f1545());}}
static double tcls_f1498(){if (tcls_p1498) return tcls_m1498; else {tcls_p1498=T;return tcls_m1498=(tcls_f1499()?tcls_f1593():(0.0));}}
static double tcls_f1495(){if (tcls_p1495) return tcls_m1495; else {tcls_p1495=T;return tcls_m1495=(tcls_f1499()?tcls_f1593():(1.0));}}
static double tcls_f1488(){if (tcls_p1488) return tcls_m1488; else {tcls_p1488=T;return tcls_m1488=(tcls_f1499()?tcls_f1593():tcls_f1545());}}
static double tcls_f1494(){if (tcls_p1494) return tcls_m1494; else {tcls_p1494=T;return tcls_m1494=(tcls_f1545()-tcls_v5033);}}
static double tcls_f1507(){if (tcls_p1507) return tcls_m1507; else {tcls_p1507=T;return tcls_m1507=(tcls_v5025-tcls_f1545());}}
static double tcls_f1506(){if (tcls_p1506) return tcls_m1506; else {tcls_p1506=T;return tcls_m1506=((tcls_v1507=tcls_f1507()),(tcls_v1507*tcls_v1507));}}
static double tcls_f1536(){if (tcls_p1536) return tcls_m1536; else {tcls_p1536=T;return tcls_m1536=(tcls_f1545()-tcls_v5025);}}
static int tcls_f1534(){if (tcls_p1534) return tcls_m1534; else {tcls_p1534=T;return tcls_m1534=(fabs(tcls_f1536())<tcls_v4980);}}
static double tcls_f1544(){if (tcls_p1544) return tcls_m1544; else {tcls_p1544=T;return tcls_m1544=(tcls_f1719()*tcls_f1545());}}
static double tcls_f1665(){if (tcls_p1665) return tcls_m1665; else {tcls_p1665=T;return tcls_m1665=(tcls_f1710()-tcls_f1681()-tcls_f1680());}}
static double tcls_f1415(){if (tcls_p1415) return tcls_m1415; else {tcls_p1415=T;return tcls_m1415=((-2.0)*tcls_f1719()*tcls_f1665());}}
static double tcls_f1405(){if (tcls_p1405) return tcls_m1405; else {tcls_p1405=T;return tcls_m1405=((-tcls_f1415())/tcls_f1406());}}
static double tcls_f1664(){if (tcls_p1664) return tcls_m1664; else {tcls_p1664=T;return tcls_m1664=((tcls_v1665=tcls_f1665()),(tcls_v1665*tcls_v1665));}}
static double tcls_f1678(){if (tcls_p1678) return tcls_m1678; else {tcls_p1678=T;return tcls_m1678=(tcls_f1679()-tcls_f1710());}}
static double tcls_f1685(){if (tcls_p1685) return tcls_m1685; else {tcls_p1685=T;return tcls_m1685=(tcls_f1686()-tcls_f1710());}}
static int tcls_f1673(){if (tcls_p1673) return tcls_m1673; else {tcls_p1673=T;return tcls_m1673=(tcls_f1685()>(0.0));}}
static double tcls_f1718(){if (tcls_p1718) return tcls_m1718; else {tcls_p1718=T;return tcls_m1718=(-tcls_f1719());}}
static double tcls_f1655(){if (tcls_p1655) return tcls_m1655; else {tcls_p1655=T;return tcls_m1655=(tcls_f1659()?tcls_f1719():tcls_f1718());}}
static double tcls_f1209(){if (tcls_p1209) return tcls_m1209; else {tcls_p1209=T;return tcls_m1209=(tcls_f1641()-(tcls_f1686()*tcls_f1655()));}}
static int tcls_f1205(){if (tcls_p1205) return tcls_m1205; else {tcls_p1205=T;return tcls_m1205=((fabs((tcls_f1214()-(0.0)))<tcls_v4980)?(fabs((tcls_f1209()-(0.0)))<tcls_v4980):NIL);}}
static double tcls_f1653(){if (tcls_p1653) return tcls_m1653; else {tcls_p1653=T;return tcls_m1653=((tcls_f1722()*tcls_f1657())-(tcls_f1719()*tcls_f1655()));}}
static double tcls_f1203(){if (tcls_p1203) return tcls_m1203; else {tcls_p1203=T;return tcls_m1203=(tcls_f1214()/tcls_f1653());}}
static double tcls_f1181(){if (tcls_p1181) return tcls_m1181; else {tcls_p1181=T;return tcls_m1181=(tcls_v5023-tcls_f1203());}}
static double tcls_f1195(){if (tcls_p1195) return tcls_m1195; else {tcls_p1195=T;return tcls_m1195=(tcls_f1203()-tcls_v5023);}}
static double tcls_f1201(){if (tcls_p1201) return tcls_m1201; else {tcls_p1201=T;return tcls_m1201=(tcls_f1209()/tcls_f1653());}}
static double tcls_f1179(){if (tcls_p1179) return tcls_m1179; else {tcls_p1179=T;return tcls_m1179=(tcls_v5021-tcls_f1201());}}
static double tcls_f1192(){if (tcls_p1192) return tcls_m1192; else {tcls_p1192=T;return tcls_m1192=(tcls_f1201()-tcls_v5021);}}
static int tcls_f1189(){if (tcls_p1189) return tcls_m1189; else {tcls_p1189=T;return tcls_m1189=((fabs(tcls_f1195())<tcls_v4980)?(fabs(tcls_f1192())<tcls_v4980):NIL);}}
static double tcls_f1633(){if (tcls_p1633) return tcls_m1633; else {tcls_p1633=T;return tcls_m1633=(tcls_f1645()/tcls_f1653());}}
static double tcls_f1609(){if (tcls_p1609) return tcls_m1609; else {tcls_p1609=T;return tcls_m1609=(tcls_v5027-tcls_f1633());}}
static double tcls_f1625(){if (tcls_p1625) return tcls_m1625; else {tcls_p1625=T;return tcls_m1625=(tcls_f1633()-tcls_v5027);}}
static int tcls_f1650(){if (tcls_p1650) return tcls_m1650; else {tcls_p1650=T;return tcls_m1650=(fabs((tcls_f1653()-(0.0)))<tcls_v4980);}}
static int tcls_f1204(){if (tcls_p1204) return tcls_m1204; else {tcls_p1204=T;return tcls_m1204=(tcls_f1650()?tcls_f1205():T);}}
static int tcls_f1182(){if (tcls_p1182) return tcls_m1182; else {tcls_p1182=T;return tcls_m1182=(tcls_f1650()?NIL:((fabs((((tcls_f1722()*tcls_f1203())+(tcls_f1719()*tcls_f1201()))-tcls_f1686()))<tcls_v4980)?((tcls_v1189=tcls_f1189()),(tcls_v1189?tcls_v1189:(fabs((tcls_f1723()-atan2(tcls_f1192(),tcls_f1195())))<tcls_v4980))):NIL));}}
static int tcls_f1171(){if (tcls_p1171) return tcls_m1171; else {tcls_p1171=T;return tcls_m1171=(tcls_f1650()?tcls_f1205():NIL);}}
static double tcls_f1175(){if (tcls_p1175) return tcls_m1175; else {tcls_p1175=T;return tcls_m1175=(tcls_f1650()?tcls_f1610():((tcls_v1181=tcls_f1181()),(tcls_v1179=tcls_f1179()),sqrt(((tcls_v1181*tcls_v1181)+(tcls_v1179*tcls_v1179)))));}}
static int tcls_f1172(){if (tcls_p1172) return tcls_m1172; else {tcls_p1172=T;return tcls_m1172=(fabs((tcls_f1175()-(0.0)))<tcls_v4980);}}
static int tcls_f1555(){if (tcls_p1555) return tcls_m1555; else {tcls_p1555=T;return tcls_m1555=(tcls_f1650()?NIL:T);}}
static double tcls_f1639(){if (tcls_p1639) return tcls_m1639; else {tcls_p1639=T;return tcls_m1639=(tcls_f1641()-(tcls_f1710()*tcls_f1655()));}}
static double tcls_f1631(){if (tcls_p1631) return tcls_m1631; else {tcls_p1631=T;return tcls_m1631=(tcls_f1639()/tcls_f1653());}}
static double tcls_f1607(){if (tcls_p1607) return tcls_m1607; else {tcls_p1607=T;return tcls_m1607=(tcls_v5025-tcls_f1631());}}
static double tcls_f1603(){if (tcls_p1603) return tcls_m1603; else {tcls_p1603=T;return tcls_m1603=(tcls_f1650()?tcls_f1610():((tcls_v1609=tcls_f1609()),(tcls_v1607=tcls_f1607()),sqrt(((tcls_v1609*tcls_v1609)+(tcls_v1607*tcls_v1607)))));}}
static int tcls_f1600(){if (tcls_p1600) return tcls_m1600; else {tcls_p1600=T;return tcls_m1600=(fabs((tcls_f1603()-(0.0)))<tcls_v4980);}}
static double tcls_f1622(){if (tcls_p1622) return tcls_m1622; else {tcls_p1622=T;return tcls_m1622=(tcls_f1631()-tcls_v5025);}}
static int tcls_f1619(){if (tcls_p1619) return tcls_m1619; else {tcls_p1619=T;return tcls_m1619=((fabs(tcls_f1625())<tcls_v4980)?(fabs(tcls_f1622())<tcls_v4980):NIL);}}
static int tcls_f1612(){if (tcls_p1612) return tcls_m1612; else {tcls_p1612=T;return tcls_m1612=(tcls_f1650()?NIL:((fabs((((tcls_f1722()*tcls_f1633())+(tcls_f1719()*tcls_f1631()))-tcls_f1710()))<tcls_v4980)?((tcls_v1619=tcls_f1619()),(tcls_v1619?tcls_v1619:(fabs((tcls_f1723()-atan2(tcls_f1622(),tcls_f1625())))<tcls_v4980))):NIL));}}
static int tcls_f1635(){if (tcls_p1635) return tcls_m1635; else {tcls_p1635=T;return tcls_m1635=((fabs((tcls_f1645()-(0.0)))<tcls_v4980)?(fabs((tcls_f1639()-(0.0)))<tcls_v4980):NIL);}}
static int tcls_f1634(){if (tcls_p1634) return tcls_m1634; else {tcls_p1634=T;return tcls_m1634=(tcls_f1650()?tcls_f1635():T);}}
static int tcls_f1599(){if (tcls_p1599) return tcls_m1599; else {tcls_p1599=T;return tcls_m1599=(tcls_f1650()?tcls_f1635():NIL);}}
static double tcls_f1716(){if (tcls_p1716) return tcls_m1716; else {tcls_p1716=T;return tcls_m1716=(tcls_f1721()-(tcls_f1719()*tcls_f1718()));}}
static double tcls_f1249(){if (tcls_p1249) return tcls_m1249; else {tcls_p1249=T;return tcls_m1249=((((tcls_f1686()*tcls_f1722())-tcls_f1705())/tcls_f1716())-tcls_v5035);}}
static double tcls_f1244(){if (tcls_p1244) return tcls_m1244; else {tcls_p1244=T;return tcls_m1244=(((tcls_f1700()-(tcls_f1686()*tcls_f1718()))/tcls_f1716())-tcls_v5033);}}
static int tcls_f1713(){if (tcls_p1713) return tcls_m1713; else {tcls_p1713=T;return tcls_m1713=(fabs((tcls_f1716()-(0.0)))<tcls_v4980);}}
static double tcls_f1702(){if (tcls_p1702) return tcls_m1702; else {tcls_p1702=T;return tcls_m1702=((((tcls_f1710()*tcls_f1722())-tcls_f1705())/tcls_f1716())-tcls_v5035);}}
static double tcls_f1696(){if (tcls_p1696) return tcls_m1696; else {tcls_p1696=T;return tcls_m1696=(((tcls_f1700()-(tcls_f1710()*tcls_f1718()))/tcls_f1716())-tcls_v5033);}}
static double tcls_f1919(){if (tcls_p1919) return tcls_m1919; else {tcls_p1919=T;return tcls_m1919=normalize_rotation((tcls_v5009-(1.5707963267948966)));}}
static double tcls_f1917(){if (tcls_p1917) return tcls_m1917; else {tcls_p1917=T;return tcls_m1917=(tcls_v5012*sin(tcls_f1919()));}}
static double tcls_f1916(){if (tcls_p1916) return tcls_m1916; else {tcls_p1916=T;return tcls_m1916=(tcls_v5025+tcls_f1917());}}
static double tcls_f1830(){if (tcls_p1830) return tcls_m1830; else {tcls_p1830=T;return tcls_m1830=(tcls_f1916()-tcls_v5033);}}
static double tcls_f1915(){if (tcls_p1915) return tcls_m1915; else {tcls_p1915=T;return tcls_m1915=(tcls_v5021+tcls_f1917());}}
static double tcls_f1858(){if (tcls_p1858) return tcls_m1858; else {tcls_p1858=T;return tcls_m1858=(tcls_f1915()-tcls_v5033);}}
static double tcls_f1914(){if (tcls_p1914) return tcls_m1914; else {tcls_p1914=T;return tcls_m1914=(tcls_f1916()-tcls_f1915());}}
static int tcls_f1912(){if (tcls_p1912) return tcls_m1912; else {tcls_p1912=T;return tcls_m1912=(fabs(tcls_f1914())<tcls_v4980);}}
static double tcls_f1910(){if (tcls_p1910) return tcls_m1910; else {tcls_p1910=T;return tcls_m1910=(tcls_v5012*cos(tcls_f1919()));}}
static double tcls_f1909(){if (tcls_p1909) return tcls_m1909; else {tcls_p1909=T;return tcls_m1909=(tcls_v5027+tcls_f1910());}}
static double tcls_f1833(){if (tcls_p1833) return tcls_m1833; else {tcls_p1833=T;return tcls_m1833=(tcls_f1909()-tcls_v5035);}}
static int tcls_f1827(){if (tcls_p1827) return tcls_m1827; else {tcls_p1827=T;return tcls_m1827=((fabs(tcls_f1833())<tcls_v4980)?(fabs(tcls_f1830())<tcls_v4980):NIL);}}
static double tcls_f1908(){if (tcls_p1908) return tcls_m1908; else {tcls_p1908=T;return tcls_m1908=(tcls_v5023+tcls_f1910());}}
static double tcls_f1861(){if (tcls_p1861) return tcls_m1861; else {tcls_p1861=T;return tcls_m1861=(tcls_f1908()-tcls_v5035);}}
static int tcls_f1855(){if (tcls_p1855) return tcls_m1855; else {tcls_p1855=T;return tcls_m1855=((fabs(tcls_f1861())<tcls_v4980)?(fabs(tcls_f1858())<tcls_v4980):NIL);}}
static double tcls_f1902(){if (tcls_p1902) return tcls_m1902; else {tcls_p1902=T;return tcls_m1902=((tcls_f1908()-tcls_f1909())/tcls_f1914());}}
static int tcls_f1905(){if (tcls_p1905) return tcls_m1905; else {tcls_p1905=T;return tcls_m1905=(fabs((tcls_f1909()-tcls_f1908()))<tcls_v4980);}}
static double tcls_f1957(){if (tcls_p1957) return tcls_m1957; else {tcls_p1957=T;return tcls_m1957=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double tcls_f1170(){if (tcls_p1170) return tcls_m1170; else {tcls_p1170=T;return tcls_m1170=(tcls_f1650()?tcls_f1957():tcls_f1203());}}
static int tcls_f1169(){if (tcls_p1169) return tcls_m1169; else {tcls_p1169=T;return tcls_m1169=(tcls_v5035==tcls_f1170());}}
static double tcls_f1598(){if (tcls_p1598) return tcls_m1598; else {tcls_p1598=T;return tcls_m1598=(tcls_f1650()?tcls_f1957():tcls_f1633());}}
static int tcls_f1597(){if (tcls_p1597) return tcls_m1597; else {tcls_p1597=T;return tcls_m1597=(tcls_v5035==tcls_f1598());}}
static double tcls_f1941(){if (tcls_p1941) return tcls_m1941; else {tcls_p1941=T;return tcls_m1941=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double tcls_f1168(){if (tcls_p1168) return tcls_m1168; else {tcls_p1168=T;return tcls_m1168=(tcls_f1650()?tcls_f1941():tcls_f1201());}}
static double tcls_f1160(){if (tcls_p1160) return tcls_m1160; else {tcls_p1160=T;return tcls_m1160=((tcls_f1168()-tcls_v5033)/(tcls_f1170()-tcls_v5035));}}
static int tcls_f1167(){if (tcls_p1167) return tcls_m1167; else {tcls_p1167=T;return tcls_m1167=(tcls_v5033==tcls_f1168());}}
static double tcls_f1153(){if (tcls_p1153) return tcls_m1153; else {tcls_p1153=T;return tcls_m1153=(tcls_f1169()?(tcls_f1167()?tcls_f1593():tcls_f1168()):(tcls_f1170()+(tcls_f1160()*tcls_f1168())));}}
static double tcls_f1165(){if (tcls_p1165) return tcls_m1165; else {tcls_p1165=T;return tcls_m1165=(tcls_f1169()?(tcls_f1167()?tcls_f1593():(0.0)):(1.0));}}
static double tcls_f1159(){if (tcls_p1159) return tcls_m1159; else {tcls_p1159=T;return tcls_m1159=(tcls_f1169()?(tcls_f1167()?tcls_f1593():(1.0)):tcls_f1160());}}
static double tcls_f1143(){if (tcls_p1143) return tcls_m1143; else {tcls_p1143=T;return tcls_m1143=(((tcls_f1165()*(tcls_f1170()+tcls_f1720()))+(tcls_f1159()*(tcls_f1168()+tcls_f1722())))-tcls_f1153());}}
static double tcls_f1152(){if (tcls_p1152) return tcls_m1152; else {tcls_p1152=T;return tcls_m1152=(((tcls_f1165()*tcls_v5027)+(tcls_f1159()*tcls_v5025))-tcls_f1153());}}
static int tcls_f1138(){if (tcls_p1138) return tcls_m1138; else {tcls_p1138=T;return tcls_m1138=(tcls_f1152()>(0.0));}}
static int tcls_f1130(){if (tcls_p1130) return tcls_m1130; else {tcls_p1130=T;return tcls_m1130=((tcls_v1172=tcls_f1172()),(tcls_v1172?((tcls_v1171=tcls_f1171()),(tcls_v1171?tcls_v1171:(((fabs((tcls_f1152()-(0.0)))<tcls_v4980)?T:((tcls_v1143=tcls_f1143()),((fabs((tcls_v1143-(0.0)))<tcls_v4980)?NIL:((tcls_v1143>(0.0))?tcls_f1138():(tcls_f1138()?NIL:T)))))?NIL:T))):(tcls_v1172?NIL:T)));}}
static double tcls_f826(){if (tcls_p826) return tcls_m826; else {tcls_p826=T;return tcls_m826=(tcls_f1130()?tcls_f1175():tcls_f828());}}
static int tcls_f796(){if (tcls_p796) return tcls_m796; else {tcls_p796=T;return tcls_m796=(tcls_f1603()<tcls_f826());}}
static double_or_symbol tcls_f31(){if (tcls_p31) return tcls_m31; else {tcls_p31=T;return tcls_m31=(tcls_f1130()?coerce_double_to_double_or_symbol(tcls_f1175()):coerce_symbol_to_double_or_symbol(NIL));}}
static int tcls_f1129(){if (tcls_p1129) return tcls_m1129; else {tcls_p1129=T;return tcls_m1129=(tcls_f1130()?tcls_f1555():NIL);}}
static int tcls_f1128(){if (tcls_p1128) return tcls_m1128; else {tcls_p1128=T;return tcls_m1128=((tcls_v1129=tcls_f1129()),(tcls_v1129?tcls_v1129:NIL));}}
static double tcls_f1596(){if (tcls_p1596) return tcls_m1596; else {tcls_p1596=T;return tcls_m1596=(tcls_f1650()?tcls_f1941():tcls_f1631());}}
static double tcls_f1586(){if (tcls_p1586) return tcls_m1586; else {tcls_p1586=T;return tcls_m1586=((tcls_f1596()-tcls_v5033)/(tcls_f1598()-tcls_v5035));}}
static int tcls_f1595(){if (tcls_p1595) return tcls_m1595; else {tcls_p1595=T;return tcls_m1595=(tcls_v5033==tcls_f1596());}}
static double tcls_f1579(){if (tcls_p1579) return tcls_m1579; else {tcls_p1579=T;return tcls_m1579=(tcls_f1597()?(tcls_f1595()?tcls_f1593():tcls_f1596()):(tcls_f1598()+(tcls_f1586()*tcls_f1596())));}}
static double tcls_f1591(){if (tcls_p1591) return tcls_m1591; else {tcls_p1591=T;return tcls_m1591=(tcls_f1597()?(tcls_f1595()?tcls_f1593():(0.0)):(1.0));}}
static double tcls_f1585(){if (tcls_p1585) return tcls_m1585; else {tcls_p1585=T;return tcls_m1585=(tcls_f1597()?(tcls_f1595()?tcls_f1593():(1.0)):tcls_f1586());}}
static double tcls_f1569(){if (tcls_p1569) return tcls_m1569; else {tcls_p1569=T;return tcls_m1569=(((tcls_f1591()*(tcls_f1598()+tcls_f1720()))+(tcls_f1585()*(tcls_f1596()+tcls_f1722())))-tcls_f1579());}}
static double tcls_f1578(){if (tcls_p1578) return tcls_m1578; else {tcls_p1578=T;return tcls_m1578=(((tcls_f1591()*tcls_v5023)+(tcls_f1585()*tcls_v5021))-tcls_f1579());}}
static int tcls_f1564(){if (tcls_p1564) return tcls_m1564; else {tcls_p1564=T;return tcls_m1564=(tcls_f1578()>(0.0));}}
static int tcls_f1556(){if (tcls_p1556) return tcls_m1556; else {tcls_p1556=T;return tcls_m1556=((tcls_v1600=tcls_f1600()),(tcls_v1600?((tcls_v1599=tcls_f1599()),(tcls_v1599?tcls_v1599:(((fabs((tcls_f1578()-(0.0)))<tcls_v4980)?T:((tcls_v1569=tcls_f1569()),((fabs((tcls_v1569-(0.0)))<tcls_v4980)?NIL:((tcls_v1569>(0.0))?tcls_f1564():(tcls_f1564()?NIL:T)))))?NIL:T))):(tcls_v1600?NIL:T)));}}
static double tcls_f827(){if (tcls_p827) return tcls_m827; else {tcls_p827=T;return tcls_m827=(tcls_f1556()?tcls_f1603():tcls_f828());}}
static int tcls_f825(){if (tcls_p825) return tcls_m825; else {tcls_p825=T;return tcls_m825=(tcls_f827()<tcls_f826());}}
static int tcls_f823(){if (tcls_p823) return tcls_m823; else {tcls_p823=T;return tcls_m823=(tcls_f827()<tcls_f1175());}}
static double_or_symbol tcls_f61(){if (tcls_p61) return tcls_m61; else {tcls_p61=T;return tcls_m61=(tcls_f1556()?coerce_double_to_double_or_symbol(tcls_f1603()):coerce_symbol_to_double_or_symbol(NIL));}}
static int tcls_f1554(){if (tcls_p1554) return tcls_m1554; else {tcls_p1554=T;return tcls_m1554=(tcls_f1556()?tcls_f1555():NIL);}}
static int tcls_f1553(){if (tcls_p1553) return tcls_m1553; else {tcls_p1553=T;return tcls_m1553=((tcls_v1554=tcls_f1554()),(tcls_v1554?tcls_v1554:NIL));}}
static double tcls_f4493(){if (tcls_p4493) return tcls_m4493; else {tcls_p4493=T;return tcls_m4493=(((tcls_v5027<tcls_v5023)?tcls_v5027:tcls_v5023)-tcls_v4980);}}
static double tcls_f4491(){if (tcls_p4491) return tcls_m4491; else {tcls_p4491=T;return tcls_m4491=(((tcls_v5027>tcls_v5023)?tcls_v5027:tcls_v5023)+tcls_v4980);}}
static double tcls_f4484(){if (tcls_p4484) return tcls_m4484; else {tcls_p4484=T;return tcls_m4484=(((tcls_v5025<tcls_v5021)?tcls_v5025:tcls_v5021)-tcls_v4980);}}
static double tcls_f4482(){if (tcls_p4482) return tcls_m4482; else {tcls_p4482=T;return tcls_m4482=(((tcls_v5025>tcls_v5021)?tcls_v5025:tcls_v5021)+tcls_v4980);}}
static double tcls_f2117(){if (tcls_p2117) return tcls_m2117; else {tcls_p2117=T;return tcls_m2117=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static int tcls_f1237(){if (tcls_p1237) return tcls_m1237; else {tcls_p1237=T;return tcls_m1237=(fabs(((tcls_f1713()?tcls_f2117():((tcls_v1249=tcls_f1249()),(tcls_v1244=tcls_f1244()),sqrt(((tcls_v1249*tcls_v1249)+(tcls_v1244*tcls_v1244)))))-tcls_v5012))<tcls_v4980);}}
static int tcls_f816(){if (tcls_p816) return tcls_m816; else {tcls_p816=T;return tcls_m816=(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?(tcls_f1128()?(tcls_f825()?tcls_f1554():tcls_v1129):(tcls_f1130()?(tcls_f823()?tcls_f1554():tcls_f1555()):NIL)):NIL)):NIL):NIL):NIL);}}
static int tcls_f790(){if (tcls_p790) return tcls_m790; else {tcls_p790=T;return tcls_m790=(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?(tcls_f1128()?(tcls_f796()?tcls_f1555():tcls_v1129):tcls_v1129):NIL)):NIL):NIL):NIL);}}
static double tcls_f557(){if (tcls_p557) return tcls_m557; else {tcls_p557=T;return tcls_m557=(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?(tcls_f825()?tcls_f827():tcls_f826()):(tcls_f1130()?(tcls_f823()?tcls_f827():tcls_f1175()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828());}}
static double tcls_f535(){if (tcls_p535) return tcls_m535; else {tcls_p535=T;return tcls_m535=(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?(tcls_f796()?tcls_f1603():tcls_f826()):(tcls_f1130()?((tcls_v1603=tcls_f1603()),(tcls_v1175=tcls_f1175()),((tcls_v1603<tcls_v1175)?tcls_v1603:tcls_v1175)):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828());}}
static double_or_symbol tcls_f25(){if (tcls_p25) return tcls_m25; else {tcls_p25=T;return tcls_m25=(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?(tcls_f1128()?coerce_double_to_double_or_symbol(tcls_f826()):tcls_f31()):(tcls_v1129?tcls_f31():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int tcls_f1221(){if (tcls_p1221) return tcls_m1221; else {tcls_p1221=T;return tcls_m1221=((tcls_v1237=tcls_f1237()),(tcls_v1237?((fabs((tcls_f1236()-(0.0)))<tcls_v4980)?NIL:((tcls_v1232=tcls_f1232()),((fabs((tcls_v1232-(0.0)))<tcls_v4980)?NIL:((tcls_v1232>(0.0))?tcls_f1227():(tcls_f1227()?NIL:T))))):(tcls_v1237?NIL:T)));}}
static int tcls_f1124(){if (tcls_p1124) return tcls_m1124; else {tcls_p1124=T;return tcls_m1124=(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?tcls_v1129:tcls_f1128())):NIL):NIL):NIL);}}
static int tcls_f1689(){if (tcls_p1689) return tcls_m1689; else {tcls_p1689=T;return tcls_m1689=(fabs(((tcls_f1713()?tcls_f2117():((tcls_v1702=tcls_f1702()),(tcls_v1696=tcls_f1696()),sqrt(((tcls_v1702*tcls_v1702)+(tcls_v1696*tcls_v1696)))))-tcls_v5012))<tcls_v4980);}}
static double_or_symbol tcls_f55(){if (tcls_p55) return tcls_m55; else {tcls_p55=T;return tcls_m55=(tcls_f1689()?(tcls_f1634()?(tcls_f1612()?((tcls_v1554=tcls_f1554()),(tcls_v1554?(tcls_f1553()?coerce_double_to_double_or_symbol(tcls_f827()):tcls_f61()):(tcls_v1554?tcls_f61():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL));}}
static int tcls_f1667(){if (tcls_p1667) return tcls_m1667; else {tcls_p1667=T;return tcls_m1667=((tcls_v1689=tcls_f1689()),(tcls_v1689?((fabs((tcls_f1685()-(0.0)))<tcls_v4980)?NIL:((tcls_v1678=tcls_f1678()),((fabs((tcls_v1678-(0.0)))<tcls_v4980)?NIL:((tcls_v1678>(0.0))?tcls_f1673():(tcls_f1673()?NIL:T))))):(tcls_v1689?NIL:T)));}}
static int tcls_f1549(){if (tcls_p1549) return tcls_m1549; else {tcls_p1549=T;return tcls_m1549=(tcls_f1689()?(tcls_f1634()?(tcls_f1612()?((tcls_v1554=tcls_f1554()),(tcls_v1554?tcls_v1554:tcls_f1553())):NIL):NIL):NIL);}}
static double tcls_f4624(){if (tcls_p4624) return tcls_m4624; else {tcls_p4624=T;return tcls_m4624=(tcls_v5012*tcls_v5012);}}
static double tcls_f1217(){if (tcls_p1217) return tcls_m1217; else {tcls_p1217=T;return tcls_m1217=(tcls_f4624()-(tcls_f1219()/tcls_f1663()));}}
static int tcls_f1216(){if (tcls_p1216) return tcls_m1216; else {tcls_p1216=T;return tcls_m1216=(tcls_f1217()<0.0);}}
static double tcls_f1123(){if (tcls_p1123) return tcls_m1123; else {tcls_p1123=T;return tcls_m1123=sqrt(tcls_f1217());}}
static double tcls_f1100(){if (tcls_p1100) return tcls_m1100; else {tcls_p1100=T;return tcls_m1100=((-tcls_f1123())+tcls_v5035);}}
static int tcls_f1030(){if (tcls_p1030) return tcls_m1030; else {tcls_p1030=T;return tcls_m1030=(tcls_v5035==tcls_f1100());}}
static double tcls_f1029(){if (tcls_p1029) return tcls_m1029; else {tcls_p1029=T;return tcls_m1029=(tcls_f1030()?tcls_f1073():(1.0));}}
static double tcls_f1026(){if (tcls_p1026) return tcls_m1026; else {tcls_p1026=T;return tcls_m1026=(tcls_f1069()/(tcls_f1100()-tcls_v5035));}}
static double tcls_f1020(){if (tcls_p1020) return tcls_m1020; else {tcls_p1020=T;return tcls_m1020=(tcls_f1030()?tcls_f1063():(tcls_f1100()+(tcls_f1026()*tcls_f1120())));}}
static double tcls_f1025(){if (tcls_p1025) return tcls_m1025; else {tcls_p1025=T;return tcls_m1025=(tcls_f1030()?tcls_f1070():tcls_f1026());}}
static double tcls_f1011(){if (tcls_p1011) return tcls_m1011; else {tcls_p1011=T;return tcls_m1011=(((tcls_f1029()*(tcls_f1100()+tcls_f1720()))+(tcls_f1025()*tcls_f1053()))-tcls_f1020());}}
static double tcls_f1019(){if (tcls_p1019) return tcls_m1019; else {tcls_p1019=T;return tcls_m1019=(((tcls_f1029()*tcls_v5027)+(tcls_f1025()*tcls_v5025))-tcls_f1020());}}
static int tcls_f1006(){if (tcls_p1006) return tcls_m1006; else {tcls_p1006=T;return tcls_m1006=(tcls_f1019()>(0.0));}}
static double tcls_f1037(){if (tcls_p1037) return tcls_m1037; else {tcls_p1037=T;return tcls_m1037=(tcls_v5023-tcls_f1100());}}
static double tcls_f1034(){if (tcls_p1034) return tcls_m1034; else {tcls_p1034=T;return tcls_m1034=((tcls_v1037=tcls_f1037()),sqrt(((tcls_v1037*tcls_v1037)+tcls_f1081())));}}
static int tcls_f807(){if (tcls_p807) return tcls_m807; else {tcls_p807=T;return tcls_m807=(tcls_f827()<tcls_f1034());}}
static int tcls_f784(){if (tcls_p784) return tcls_m784; else {tcls_p784=T;return tcls_m784=(tcls_f1603()<tcls_f1034());}}
static int tcls_f1031(){if (tcls_p1031) return tcls_m1031; else {tcls_p1031=T;return tcls_m1031=(fabs((tcls_f1034()-(0.0)))<tcls_v4980);}}
static int tcls_f999(){if (tcls_p999) return tcls_m999; else {tcls_p999=T;return tcls_m999=((tcls_v1031=tcls_f1031()),(tcls_v1031?(((fabs((tcls_f1019()-(0.0)))<tcls_v4980)?T:((tcls_v1011=tcls_f1011()),((fabs((tcls_v1011-(0.0)))<tcls_v4980)?NIL:((tcls_v1011>(0.0))?tcls_f1006():(tcls_f1006()?NIL:T)))))?NIL:T):(tcls_v1031?NIL:T)));}}
static int tcls_f805(){if (tcls_p805) return tcls_m805; else {tcls_p805=T;return tcls_m805=(tcls_f999()?(tcls_f807()?tcls_f1554():T):NIL);}}
static int tcls_f782(){if (tcls_p782) return tcls_m782; else {tcls_p782=T;return tcls_m782=(tcls_f999()?(tcls_f784()?tcls_f1555():T):NIL);}}
static double tcls_f552(){if (tcls_p552) return tcls_m552; else {tcls_p552=T;return tcls_m552=(tcls_f999()?(tcls_f807()?tcls_f827():tcls_f1034()):tcls_f828());}}
static double tcls_f530(){if (tcls_p530) return tcls_m530; else {tcls_p530=T;return tcls_m530=(tcls_f999()?(tcls_f784()?tcls_f1603():tcls_f1034()):tcls_f828());}}
static double_or_symbol tcls_f21(){if (tcls_p21) return tcls_m21; else {tcls_p21=T;return tcls_m21=((tcls_v999=tcls_f999()),(tcls_v999?(tcls_v999?coerce_double_to_double_or_symbol(tcls_f1034()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
static int tcls_f998(){if (tcls_p998) return tcls_m998; else {tcls_p998=T;return tcls_m998=((tcls_v999=tcls_f999()),(tcls_v999?tcls_v999:NIL));}}
static double tcls_f1094(){if (tcls_p1094) return tcls_m1094; else {tcls_p1094=T;return tcls_m1094=(tcls_f1100()-tcls_v5023);}}
static int tcls_f1091(){if (tcls_p1091) return tcls_m1091; else {tcls_p1091=T;return tcls_m1091=((fabs(tcls_f1094())<tcls_v4980)?tcls_f1109():NIL);}}
static int tcls_f1085(){if (tcls_p1085) return tcls_m1085; else {tcls_p1085=T;return tcls_m1085=((fabs((((tcls_f1722()*tcls_f1100())+tcls_f1119())-tcls_f1686()))<tcls_v4980)?((tcls_v1091=tcls_f1091()),(tcls_v1091?tcls_v1091:(fabs((tcls_f1723()-atan2(tcls_f1111(),tcls_f1094())))<tcls_v4980))):NIL);}}
static int tcls_f723(){if (tcls_p723) return tcls_m723; else {tcls_p723=T;return tcls_m723=(tcls_f1085()?tcls_f999():NIL);}}
static double tcls_f1122(){if (tcls_p1122) return tcls_m1122; else {tcls_p1122=T;return tcls_m1122=(tcls_f1123()+tcls_v5035);}}
static int tcls_f1075(){if (tcls_p1075) return tcls_m1075; else {tcls_p1075=T;return tcls_m1075=(tcls_v5035==tcls_f1122());}}
static double tcls_f1072(){if (tcls_p1072) return tcls_m1072; else {tcls_p1072=T;return tcls_m1072=(tcls_f1075()?tcls_f1073():(1.0));}}
static double tcls_f1067(){if (tcls_p1067) return tcls_m1067; else {tcls_p1067=T;return tcls_m1067=(tcls_f1069()/(tcls_f1122()-tcls_v5035));}}
static double tcls_f1060(){if (tcls_p1060) return tcls_m1060; else {tcls_p1060=T;return tcls_m1060=(tcls_f1075()?tcls_f1063():(tcls_f1122()+(tcls_f1067()*tcls_f1120())));}}
static double tcls_f1066(){if (tcls_p1066) return tcls_m1066; else {tcls_p1066=T;return tcls_m1066=(tcls_f1075()?tcls_f1070():tcls_f1067());}}
static double tcls_f1050(){if (tcls_p1050) return tcls_m1050; else {tcls_p1050=T;return tcls_m1050=(((tcls_f1072()*(tcls_f1122()+tcls_f1720()))+(tcls_f1066()*tcls_f1053()))-tcls_f1060());}}
static double tcls_f1059(){if (tcls_p1059) return tcls_m1059; else {tcls_p1059=T;return tcls_m1059=(((tcls_f1072()*tcls_v5027)+(tcls_f1066()*tcls_v5025))-tcls_f1060());}}
static int tcls_f1045(){if (tcls_p1045) return tcls_m1045; else {tcls_p1045=T;return tcls_m1045=(tcls_f1059()>(0.0));}}
static double tcls_f1084(){if (tcls_p1084) return tcls_m1084; else {tcls_p1084=T;return tcls_m1084=(tcls_v5023-tcls_f1122());}}
static double tcls_f1079(){if (tcls_p1079) return tcls_m1079; else {tcls_p1079=T;return tcls_m1079=((tcls_v1084=tcls_f1084()),sqrt(((tcls_v1084*tcls_v1084)+tcls_f1081())));}}
static int tcls_f810(){if (tcls_p810) return tcls_m810; else {tcls_p810=T;return tcls_m810=(tcls_f827()<tcls_f1079());}}
static int tcls_f809(){if (tcls_p809) return tcls_m809; else {tcls_p809=T;return tcls_m809=(tcls_f810()?tcls_f1554():T);}}
static double tcls_f555(){if (tcls_p555) return tcls_m555; else {tcls_p555=T;return tcls_m555=(tcls_f810()?tcls_f827():tcls_f1079());}}
static int tcls_f787(){if (tcls_p787) return tcls_m787; else {tcls_p787=T;return tcls_m787=(tcls_f1603()<tcls_f1079());}}
static int tcls_f786(){if (tcls_p786) return tcls_m786; else {tcls_p786=T;return tcls_m786=(tcls_f787()?tcls_f1555():T);}}
static double tcls_f533(){if (tcls_p533) return tcls_m533; else {tcls_p533=T;return tcls_m533=(tcls_f787()?tcls_f1603():tcls_f1079());}}
static double tcls_f813(){if (tcls_p813) return tcls_m813; else {tcls_p813=T;return tcls_m813=(tcls_f999()?((tcls_v1079=tcls_f1079()),(tcls_v1034=tcls_f1034()),((tcls_v1079<tcls_v1034)?tcls_v1079:tcls_v1034)):tcls_f828());}}
static int tcls_f812(){if (tcls_p812) return tcls_m812; else {tcls_p812=T;return tcls_m812=(tcls_f827()<tcls_f813());}}
static int tcls_f789(){if (tcls_p789) return tcls_m789; else {tcls_p789=T;return tcls_m789=(tcls_f1603()<tcls_f813());}}
static int tcls_f1076(){if (tcls_p1076) return tcls_m1076; else {tcls_p1076=T;return tcls_m1076=(fabs((tcls_f1079()-(0.0)))<tcls_v4980);}}
static int tcls_f1038(){if (tcls_p1038) return tcls_m1038; else {tcls_p1038=T;return tcls_m1038=((tcls_v1076=tcls_f1076()),(tcls_v1076?(((fabs((tcls_f1059()-(0.0)))<tcls_v4980)?T:((tcls_v1050=tcls_f1050()),((fabs((tcls_v1050-(0.0)))<tcls_v4980)?NIL:((tcls_v1050>(0.0))?tcls_f1045():(tcls_f1045()?NIL:T)))))?NIL:T):(tcls_v1076?NIL:T)));}}
static double_or_symbol tcls_f24(){if (tcls_p24) return tcls_m24; else {tcls_p24=T;return tcls_m24=(tcls_f1038()?coerce_double_to_double_or_symbol(tcls_f1079()):coerce_symbol_to_double_or_symbol(NIL));}}
static double tcls_f1114(){if (tcls_p1114) return tcls_m1114; else {tcls_p1114=T;return tcls_m1114=(tcls_f1122()-tcls_v5023);}}
static int tcls_f1108(){if (tcls_p1108) return tcls_m1108; else {tcls_p1108=T;return tcls_m1108=((fabs(tcls_f1114())<tcls_v4980)?tcls_f1109():NIL);}}
static int tcls_f1102(){if (tcls_p1102) return tcls_m1102; else {tcls_p1102=T;return tcls_m1102=((fabs((((tcls_f1722()*tcls_f1122())+tcls_f1119())-tcls_f1686()))<tcls_v4980)?((tcls_v1108=tcls_f1108()),(tcls_v1108?tcls_v1108:(fabs((tcls_f1723()-atan2(tcls_f1111(),tcls_f1114())))<tcls_v4980))):NIL);}}
static double tcls_f1412(){if (tcls_p1412) return tcls_m1412; else {tcls_p1412=T;return tcls_m1412=(tcls_f1721()*tcls_f4624());}}
static double tcls_f986(){if (tcls_p986) return tcls_m986; else {tcls_p986=T;return tcls_m986=((tcls_v990=tcls_f990()),((tcls_v990*tcls_v990)-((4.0)*tcls_f1413()*(tcls_f1219()-tcls_f1412()))));}}
static int tcls_f985(){if (tcls_p985) return tcls_m985; else {tcls_p985=T;return tcls_m985=(tcls_f986()<0.0);}}
static double tcls_f981(){if (tcls_p981) return tcls_m981; else {tcls_p981=T;return tcls_m981=(sqrt(tcls_f986())/tcls_f1406());}}
static double tcls_f956(){if (tcls_p956) return tcls_m956; else {tcls_p956=T;return tcls_m956=((tcls_f983()-tcls_f981())+tcls_v5033);}}
static int tcls_f877(){if (tcls_p877) return tcls_m877; else {tcls_p877=T;return tcls_m877=(tcls_v5033==tcls_f956());}}
static double tcls_f885(){if (tcls_p885) return tcls_m885; else {tcls_p885=T;return tcls_m885=(tcls_v5021-tcls_f956());}}
static double tcls_f944(){if (tcls_p944) return tcls_m944; else {tcls_p944=T;return tcls_m944=(tcls_f956()-tcls_v5021);}}
static double tcls_f955(){if (tcls_p955) return tcls_m955; else {tcls_p955=T;return tcls_m955=(tcls_f1719()*tcls_f956());}}
static double tcls_f953(){if (tcls_p953) return tcls_m953; else {tcls_p953=T;return tcls_m953=((tcls_f1686()-tcls_f955())/tcls_f1722());}}
static int tcls_f878(){if (tcls_p878) return tcls_m878; else {tcls_p878=T;return tcls_m878=(tcls_v5035==tcls_f953());}}
static double tcls_f875(){if (tcls_p875) return tcls_m875; else {tcls_p875=T;return tcls_m875=(tcls_f878()?(tcls_f877()?tcls_f1593():(0.0)):(1.0));}}
static double tcls_f870(){if (tcls_p870) return tcls_m870; else {tcls_p870=T;return tcls_m870=((tcls_f956()-tcls_v5033)/(tcls_f953()-tcls_v5035));}}
static double tcls_f863(){if (tcls_p863) return tcls_m863; else {tcls_p863=T;return tcls_m863=(tcls_f878()?(tcls_f877()?tcls_f1593():tcls_f956()):(tcls_f953()+(tcls_f870()*tcls_f956())));}}
static double tcls_f869(){if (tcls_p869) return tcls_m869; else {tcls_p869=T;return tcls_m869=(tcls_f878()?(tcls_f877()?tcls_f1593():(1.0)):tcls_f870());}}
static double tcls_f853(){if (tcls_p853) return tcls_m853; else {tcls_p853=T;return tcls_m853=(((tcls_f875()*(tcls_f953()+tcls_f1720()))+(tcls_f869()*(tcls_f956()+tcls_f1722())))-tcls_f863());}}
static double tcls_f862(){if (tcls_p862) return tcls_m862; else {tcls_p862=T;return tcls_m862=(((tcls_f875()*tcls_v5027)+(tcls_f869()*tcls_v5025))-tcls_f863());}}
static int tcls_f848(){if (tcls_p848) return tcls_m848; else {tcls_p848=T;return tcls_m848=(tcls_f862()>(0.0));}}
static double tcls_f887(){if (tcls_p887) return tcls_m887; else {tcls_p887=T;return tcls_m887=(tcls_v5023-tcls_f953());}}
static double tcls_f882(){if (tcls_p882) return tcls_m882; else {tcls_p882=T;return tcls_m882=((tcls_v887=tcls_f887()),(tcls_v885=tcls_f885()),sqrt(((tcls_v887*tcls_v887)+(tcls_v885*tcls_v885))));}}
static int tcls_f683(){if (tcls_p683) return tcls_m683; else {tcls_p683=T;return tcls_m683=(tcls_f827()<tcls_f882());}}
static int tcls_f667(){if (tcls_p667) return tcls_m667; else {tcls_p667=T;return tcls_m667=(tcls_f1603()<tcls_f882());}}
static int tcls_f879(){if (tcls_p879) return tcls_m879; else {tcls_p879=T;return tcls_m879=(fabs((tcls_f882()-(0.0)))<tcls_v4980);}}
static int tcls_f841(){if (tcls_p841) return tcls_m841; else {tcls_p841=T;return tcls_m841=((tcls_v879=tcls_f879()),(tcls_v879?(((fabs((tcls_f862()-(0.0)))<tcls_v4980)?T:((tcls_v853=tcls_f853()),((fabs((tcls_v853-(0.0)))<tcls_v4980)?NIL:((tcls_v853>(0.0))?tcls_f848():(tcls_f848()?NIL:T)))))?NIL:T):(tcls_v879?NIL:T)));}}
static int tcls_f681(){if (tcls_p681) return tcls_m681; else {tcls_p681=T;return tcls_m681=(tcls_f841()?(tcls_f683()?tcls_f1554():T):NIL);}}
static int tcls_f665(){if (tcls_p665) return tcls_m665; else {tcls_p665=T;return tcls_m665=(tcls_f841()?(tcls_f667()?tcls_f1555():T):NIL);}}
static double tcls_f436(){if (tcls_p436) return tcls_m436; else {tcls_p436=T;return tcls_m436=(tcls_f841()?(tcls_f683()?tcls_f827():tcls_f882()):tcls_f828());}}
static double tcls_f423(){if (tcls_p423) return tcls_m423; else {tcls_p423=T;return tcls_m423=(tcls_f841()?(tcls_f667()?tcls_f1603():tcls_f882()):tcls_f828());}}
static double_or_symbol tcls_f11(){if (tcls_p11) return tcls_m11; else {tcls_p11=T;return tcls_m11=((tcls_v841=tcls_f841()),(tcls_v841?(tcls_v841?coerce_double_to_double_or_symbol(tcls_f882()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
static int tcls_f840(){if (tcls_p840) return tcls_m840; else {tcls_p840=T;return tcls_m840=((tcls_v841=tcls_f841()),(tcls_v841?tcls_v841:NIL));}}
static double tcls_f947(){if (tcls_p947) return tcls_m947; else {tcls_p947=T;return tcls_m947=(tcls_f953()-tcls_v5023);}}
static int tcls_f941(){if (tcls_p941) return tcls_m941; else {tcls_p941=T;return tcls_m941=((fabs(tcls_f947())<tcls_v4980)?(fabs(tcls_f944())<tcls_v4980):NIL);}}
static int tcls_f935(){if (tcls_p935) return tcls_m935; else {tcls_p935=T;return tcls_m935=((fabs((((tcls_f1722()*tcls_f953())+tcls_f955())-tcls_f1686()))<tcls_v4980)?((tcls_v941=tcls_f941()),(tcls_v941?tcls_v941:(fabs((tcls_f1723()-atan2(tcls_f944(),tcls_f947())))<tcls_v4980))):NIL);}}
static int tcls_f606(){if (tcls_p606) return tcls_m606; else {tcls_p606=T;return tcls_m606=(tcls_f935()?tcls_f841():NIL);}}
static double tcls_f979(){if (tcls_p979) return tcls_m979; else {tcls_p979=T;return tcls_m979=((tcls_f983()+tcls_f981())+tcls_v5033);}}
static int tcls_f924(){if (tcls_p924) return tcls_m924; else {tcls_p924=T;return tcls_m924=(tcls_v5033==tcls_f979());}}
static double tcls_f932(){if (tcls_p932) return tcls_m932; else {tcls_p932=T;return tcls_m932=(tcls_v5021-tcls_f979());}}
static double tcls_f967(){if (tcls_p967) return tcls_m967; else {tcls_p967=T;return tcls_m967=(tcls_f979()-tcls_v5021);}}
static double tcls_f978(){if (tcls_p978) return tcls_m978; else {tcls_p978=T;return tcls_m978=(tcls_f1719()*tcls_f979());}}
static double tcls_f976(){if (tcls_p976) return tcls_m976; else {tcls_p976=T;return tcls_m976=((tcls_f1686()-tcls_f978())/tcls_f1722());}}
static int tcls_f925(){if (tcls_p925) return tcls_m925; else {tcls_p925=T;return tcls_m925=(tcls_v5035==tcls_f976());}}
static double tcls_f922(){if (tcls_p922) return tcls_m922; else {tcls_p922=T;return tcls_m922=(tcls_f925()?(tcls_f924()?tcls_f1593():(0.0)):(1.0));}}
static double tcls_f917(){if (tcls_p917) return tcls_m917; else {tcls_p917=T;return tcls_m917=((tcls_f979()-tcls_v5033)/(tcls_f976()-tcls_v5035));}}
static double tcls_f910(){if (tcls_p910) return tcls_m910; else {tcls_p910=T;return tcls_m910=(tcls_f925()?(tcls_f924()?tcls_f1593():tcls_f979()):(tcls_f976()+(tcls_f917()*tcls_f979())));}}
static double tcls_f916(){if (tcls_p916) return tcls_m916; else {tcls_p916=T;return tcls_m916=(tcls_f925()?(tcls_f924()?tcls_f1593():(1.0)):tcls_f917());}}
static double tcls_f900(){if (tcls_p900) return tcls_m900; else {tcls_p900=T;return tcls_m900=(((tcls_f922()*(tcls_f976()+tcls_f1720()))+(tcls_f916()*(tcls_f979()+tcls_f1722())))-tcls_f910());}}
static double tcls_f909(){if (tcls_p909) return tcls_m909; else {tcls_p909=T;return tcls_m909=(((tcls_f922()*tcls_v5027)+(tcls_f916()*tcls_v5025))-tcls_f910());}}
static int tcls_f895(){if (tcls_p895) return tcls_m895; else {tcls_p895=T;return tcls_m895=(tcls_f909()>(0.0));}}
static double tcls_f934(){if (tcls_p934) return tcls_m934; else {tcls_p934=T;return tcls_m934=(tcls_v5023-tcls_f976());}}
static double tcls_f929(){if (tcls_p929) return tcls_m929; else {tcls_p929=T;return tcls_m929=((tcls_v934=tcls_f934()),(tcls_v932=tcls_f932()),sqrt(((tcls_v934*tcls_v934)+(tcls_v932*tcls_v932))));}}
static int tcls_f686(){if (tcls_p686) return tcls_m686; else {tcls_p686=T;return tcls_m686=(tcls_f827()<tcls_f929());}}
static int tcls_f685(){if (tcls_p685) return tcls_m685; else {tcls_p685=T;return tcls_m685=(tcls_f686()?tcls_f1554():T);}}
static double tcls_f439(){if (tcls_p439) return tcls_m439; else {tcls_p439=T;return tcls_m439=(tcls_f686()?tcls_f827():tcls_f929());}}
static int tcls_f670(){if (tcls_p670) return tcls_m670; else {tcls_p670=T;return tcls_m670=(tcls_f1603()<tcls_f929());}}
static int tcls_f669(){if (tcls_p669) return tcls_m669; else {tcls_p669=T;return tcls_m669=(tcls_f670()?tcls_f1555():T);}}
static double tcls_f426(){if (tcls_p426) return tcls_m426; else {tcls_p426=T;return tcls_m426=(tcls_f670()?tcls_f1603():tcls_f929());}}
static double tcls_f689(){if (tcls_p689) return tcls_m689; else {tcls_p689=T;return tcls_m689=(tcls_f841()?((tcls_v929=tcls_f929()),(tcls_v882=tcls_f882()),((tcls_v929<tcls_v882)?tcls_v929:tcls_v882)):tcls_f828());}}
static int tcls_f688(){if (tcls_p688) return tcls_m688; else {tcls_p688=T;return tcls_m688=(tcls_f827()<tcls_f689());}}
static int tcls_f672(){if (tcls_p672) return tcls_m672; else {tcls_p672=T;return tcls_m672=(tcls_f1603()<tcls_f689());}}
static int tcls_f926(){if (tcls_p926) return tcls_m926; else {tcls_p926=T;return tcls_m926=(fabs((tcls_f929()-(0.0)))<tcls_v4980);}}
static int tcls_f888(){if (tcls_p888) return tcls_m888; else {tcls_p888=T;return tcls_m888=((tcls_v926=tcls_f926()),(tcls_v926?(((fabs((tcls_f909()-(0.0)))<tcls_v4980)?T:((tcls_v900=tcls_f900()),((fabs((tcls_v900-(0.0)))<tcls_v4980)?NIL:((tcls_v900>(0.0))?tcls_f895():(tcls_f895()?NIL:T)))))?NIL:T):(tcls_v926?NIL:T)));}}
static double_or_symbol tcls_f14(){if (tcls_p14) return tcls_m14; else {tcls_p14=T;return tcls_m14=(tcls_f888()?coerce_double_to_double_or_symbol(tcls_f929()):coerce_symbol_to_double_or_symbol(NIL));}}
static double tcls_f970(){if (tcls_p970) return tcls_m970; else {tcls_p970=T;return tcls_m970=(tcls_f976()-tcls_v5023);}}
static int tcls_f964(){if (tcls_p964) return tcls_m964; else {tcls_p964=T;return tcls_m964=((fabs(tcls_f970())<tcls_v4980)?(fabs(tcls_f967())<tcls_v4980):NIL);}}
static int tcls_f958(){if (tcls_p958) return tcls_m958; else {tcls_p958=T;return tcls_m958=((fabs((((tcls_f1722()*tcls_f976())+tcls_f978())-tcls_f1686()))<tcls_v4980)?((tcls_v964=tcls_f964()),(tcls_v964?tcls_v964:(fabs((tcls_f1723()-atan2(tcls_f967(),tcls_f970())))<tcls_v4980))):NIL);}}
static int tcls_f831(){if (tcls_p831) return tcls_m831; else {tcls_p831=T;return tcls_m831=(tcls_f1221()?(tcls_f1666()?(tcls_f1216()?tcls_f1124():(tcls_f1102()?(tcls_f1085()?((tcls_v1038=tcls_f1038()),(tcls_v1038?(tcls_f998()?tcls_f999():tcls_v1038):tcls_f998())):((tcls_v1038=tcls_f1038()),(tcls_v1038?tcls_v1038:NIL))):(tcls_f1085()?tcls_f998():NIL))):(tcls_f985()?tcls_f1124():(tcls_f958()?(tcls_f935()?((tcls_v888=tcls_f888()),(tcls_v888?(tcls_f840()?tcls_f841():tcls_v888):tcls_f840())):((tcls_v888=tcls_f888()),(tcls_v888?tcls_v888:NIL))):(tcls_f935()?tcls_f840():NIL)))):NIL);}}
static int tcls_f830(){if (tcls_p830) return tcls_m830; else {tcls_p830=T;return tcls_m830=((tcls_v831=tcls_f831()),(tcls_v831?tcls_v831:NIL));}}
static double tcls_f1409(){if (tcls_p1409) return tcls_m1409; else {tcls_p1409=T;return tcls_m1409=((tcls_v1415=tcls_f1415()),((tcls_v1415*tcls_v1415)-((4.0)*tcls_f1413()*(tcls_f1664()-tcls_f1412()))));}}
static int tcls_f1408(){if (tcls_p1408) return tcls_m1408; else {tcls_p1408=T;return tcls_m1408=(tcls_f1409()<0.0);}}
static double tcls_f1403(){if (tcls_p1403) return tcls_m1403; else {tcls_p1403=T;return tcls_m1403=(sqrt(tcls_f1409())/tcls_f1406());}}
static double tcls_f1378(){if (tcls_p1378) return tcls_m1378; else {tcls_p1378=T;return tcls_m1378=((tcls_f1405()-tcls_f1403())+tcls_v5033);}}
static int tcls_f1299(){if (tcls_p1299) return tcls_m1299; else {tcls_p1299=T;return tcls_m1299=(tcls_v5033==tcls_f1378());}}
static double tcls_f1307(){if (tcls_p1307) return tcls_m1307; else {tcls_p1307=T;return tcls_m1307=(tcls_v5025-tcls_f1378());}}
static double tcls_f1366(){if (tcls_p1366) return tcls_m1366; else {tcls_p1366=T;return tcls_m1366=(tcls_f1378()-tcls_v5025);}}
static double tcls_f1377(){if (tcls_p1377) return tcls_m1377; else {tcls_p1377=T;return tcls_m1377=(tcls_f1719()*tcls_f1378());}}
static double tcls_f1375(){if (tcls_p1375) return tcls_m1375; else {tcls_p1375=T;return tcls_m1375=((tcls_f1710()-tcls_f1377())/tcls_f1722());}}
static int tcls_f1300(){if (tcls_p1300) return tcls_m1300; else {tcls_p1300=T;return tcls_m1300=(tcls_v5035==tcls_f1375());}}
static double tcls_f1297(){if (tcls_p1297) return tcls_m1297; else {tcls_p1297=T;return tcls_m1297=(tcls_f1300()?(tcls_f1299()?tcls_f1593():(0.0)):(1.0));}}
static double tcls_f1292(){if (tcls_p1292) return tcls_m1292; else {tcls_p1292=T;return tcls_m1292=((tcls_f1378()-tcls_v5033)/(tcls_f1375()-tcls_v5035));}}
static double tcls_f1285(){if (tcls_p1285) return tcls_m1285; else {tcls_p1285=T;return tcls_m1285=(tcls_f1300()?(tcls_f1299()?tcls_f1593():tcls_f1378()):(tcls_f1375()+(tcls_f1292()*tcls_f1378())));}}
static double tcls_f1291(){if (tcls_p1291) return tcls_m1291; else {tcls_p1291=T;return tcls_m1291=(tcls_f1300()?(tcls_f1299()?tcls_f1593():(1.0)):tcls_f1292());}}
static double tcls_f1275(){if (tcls_p1275) return tcls_m1275; else {tcls_p1275=T;return tcls_m1275=(((tcls_f1297()*(tcls_f1375()+tcls_f1720()))+(tcls_f1291()*(tcls_f1378()+tcls_f1722())))-tcls_f1285());}}
static double tcls_f1284(){if (tcls_p1284) return tcls_m1284; else {tcls_p1284=T;return tcls_m1284=(((tcls_f1297()*tcls_v5023)+(tcls_f1291()*tcls_v5021))-tcls_f1285());}}
static int tcls_f1270(){if (tcls_p1270) return tcls_m1270; else {tcls_p1270=T;return tcls_m1270=(tcls_f1284()>(0.0));}}
static double tcls_f1309(){if (tcls_p1309) return tcls_m1309; else {tcls_p1309=T;return tcls_m1309=(tcls_v5027-tcls_f1375());}}
static double tcls_f1304(){if (tcls_p1304) return tcls_m1304; else {tcls_p1304=T;return tcls_m1304=((tcls_v1309=tcls_f1309()),(tcls_v1307=tcls_f1307()),sqrt(((tcls_v1309*tcls_v1309)+(tcls_v1307*tcls_v1307))));}}
static int tcls_f590(){if (tcls_p590) return tcls_m590; else {tcls_p590=T;return tcls_m590=(tcls_f1304()<tcls_f689());}}
static double tcls_f353(){if (tcls_p353) return tcls_m353; else {tcls_p353=T;return tcls_m353=((tcls_v1304=tcls_f1304()),(tcls_v929=tcls_f929()),((tcls_v1304<tcls_v929)?tcls_v1304:tcls_v929));}}
static double tcls_f349(){if (tcls_p349) return tcls_m349; else {tcls_p349=T;return tcls_m349=(tcls_f841()?((tcls_v1304=tcls_f1304()),(tcls_v882=tcls_f882()),((tcls_v1304<tcls_v882)?tcls_v1304:tcls_v882)):tcls_f828());}}
static int tcls_f600(){if (tcls_p600) return tcls_m600; else {tcls_p600=T;return tcls_m600=(tcls_f1304()<tcls_f826());}}
static int tcls_f598(){if (tcls_p598) return tcls_m598; else {tcls_p598=T;return tcls_m598=(tcls_f1304()<tcls_f1175());}}
static int tcls_f1301(){if (tcls_p1301) return tcls_m1301; else {tcls_p1301=T;return tcls_m1301=(fabs((tcls_f1304()-(0.0)))<tcls_v4980);}}
static int tcls_f1263(){if (tcls_p1263) return tcls_m1263; else {tcls_p1263=T;return tcls_m1263=((tcls_v1301=tcls_f1301()),(tcls_v1301?(((fabs((tcls_f1284()-(0.0)))<tcls_v4980)?T:((tcls_v1275=tcls_f1275()),((fabs((tcls_v1275-(0.0)))<tcls_v4980)?NIL:((tcls_v1275>(0.0))?tcls_f1270():(tcls_f1270()?NIL:T)))))?NIL:T):(tcls_v1301?NIL:T)));}}
static int tcls_f581(){if (tcls_p581) return tcls_m581; else {tcls_p581=T;return tcls_m581=(tcls_f1263()?(tcls_f831()?(tcls_f1221()?(tcls_f985()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?(tcls_f1128()?(tcls_f600()?T:tcls_v1129):(tcls_f1130()?(tcls_f598()?T:tcls_f1555()):NIL)):NIL)):NIL):NIL):NIL):(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f590()?T:tcls_f841()):T):tcls_f841()):tcls_f888()):tcls_f606())):NIL):NIL):NIL);}}
static double tcls_f340(){if (tcls_p340) return tcls_m340; else {tcls_p340=T;return tcls_m340=(tcls_f1263()?(tcls_f831()?(tcls_f1221()?(tcls_f985()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?(tcls_f600()?tcls_f1304():tcls_f826()):(tcls_f1130()?(tcls_f598()?tcls_f1304():tcls_f1175()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828()):(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f590()?tcls_f1304():tcls_f689()):tcls_f353()):tcls_f349()):(tcls_f888()?tcls_f353():tcls_f828())):(tcls_f935()?tcls_f349():tcls_f828()))):tcls_f828()):tcls_f828()):tcls_f828());}}
static double_or_symbol tcls_f41(){if (tcls_p41) return tcls_m41; else {tcls_p41=T;return tcls_m41=((tcls_v1263=tcls_f1263()),(tcls_v1263?(tcls_v1263?coerce_double_to_double_or_symbol(tcls_f1304()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
static int tcls_f1262(){if (tcls_p1262) return tcls_m1262; else {tcls_p1262=T;return tcls_m1262=((tcls_v1263=tcls_f1263()),(tcls_v1263?tcls_v1263:NIL));}}
static double tcls_f1369(){if (tcls_p1369) return tcls_m1369; else {tcls_p1369=T;return tcls_m1369=(tcls_f1375()-tcls_v5027);}}
static int tcls_f1363(){if (tcls_p1363) return tcls_m1363; else {tcls_p1363=T;return tcls_m1363=((fabs(tcls_f1369())<tcls_v4980)?(fabs(tcls_f1366())<tcls_v4980):NIL);}}
static int tcls_f1357(){if (tcls_p1357) return tcls_m1357; else {tcls_p1357=T;return tcls_m1357=((fabs((((tcls_f1722()*tcls_f1375())+tcls_f1377())-tcls_f1710()))<tcls_v4980)?((tcls_v1363=tcls_f1363()),(tcls_v1363?tcls_v1363:(fabs((tcls_f1723()-atan2(tcls_f1366(),tcls_f1369())))<tcls_v4980))):NIL);}}
static double tcls_f1401(){if (tcls_p1401) return tcls_m1401; else {tcls_p1401=T;return tcls_m1401=((tcls_f1405()+tcls_f1403())+tcls_v5033);}}
static int tcls_f1346(){if (tcls_p1346) return tcls_m1346; else {tcls_p1346=T;return tcls_m1346=(tcls_v5033==tcls_f1401());}}
static double tcls_f1354(){if (tcls_p1354) return tcls_m1354; else {tcls_p1354=T;return tcls_m1354=(tcls_v5025-tcls_f1401());}}
static double tcls_f1389(){if (tcls_p1389) return tcls_m1389; else {tcls_p1389=T;return tcls_m1389=(tcls_f1401()-tcls_v5025);}}
static double tcls_f1400(){if (tcls_p1400) return tcls_m1400; else {tcls_p1400=T;return tcls_m1400=(tcls_f1719()*tcls_f1401());}}
static double tcls_f1398(){if (tcls_p1398) return tcls_m1398; else {tcls_p1398=T;return tcls_m1398=((tcls_f1710()-tcls_f1400())/tcls_f1722());}}
static int tcls_f1347(){if (tcls_p1347) return tcls_m1347; else {tcls_p1347=T;return tcls_m1347=(tcls_v5035==tcls_f1398());}}
static double tcls_f1344(){if (tcls_p1344) return tcls_m1344; else {tcls_p1344=T;return tcls_m1344=(tcls_f1347()?(tcls_f1346()?tcls_f1593():(0.0)):(1.0));}}
static double tcls_f1339(){if (tcls_p1339) return tcls_m1339; else {tcls_p1339=T;return tcls_m1339=((tcls_f1401()-tcls_v5033)/(tcls_f1398()-tcls_v5035));}}
static double tcls_f1332(){if (tcls_p1332) return tcls_m1332; else {tcls_p1332=T;return tcls_m1332=(tcls_f1347()?(tcls_f1346()?tcls_f1593():tcls_f1401()):(tcls_f1398()+(tcls_f1339()*tcls_f1401())));}}
static double tcls_f1338(){if (tcls_p1338) return tcls_m1338; else {tcls_p1338=T;return tcls_m1338=(tcls_f1347()?(tcls_f1346()?tcls_f1593():(1.0)):tcls_f1339());}}
static double tcls_f1322(){if (tcls_p1322) return tcls_m1322; else {tcls_p1322=T;return tcls_m1322=(((tcls_f1344()*(tcls_f1398()+tcls_f1720()))+(tcls_f1338()*(tcls_f1401()+tcls_f1722())))-tcls_f1332());}}
static double tcls_f1331(){if (tcls_p1331) return tcls_m1331; else {tcls_p1331=T;return tcls_m1331=(((tcls_f1344()*tcls_v5023)+(tcls_f1338()*tcls_v5021))-tcls_f1332());}}
static int tcls_f1317(){if (tcls_p1317) return tcls_m1317; else {tcls_p1317=T;return tcls_m1317=(tcls_f1331()>(0.0));}}
static double tcls_f1356(){if (tcls_p1356) return tcls_m1356; else {tcls_p1356=T;return tcls_m1356=(tcls_v5027-tcls_f1398());}}
static double tcls_f1351(){if (tcls_p1351) return tcls_m1351; else {tcls_p1351=T;return tcls_m1351=((tcls_v1356=tcls_f1356()),(tcls_v1354=tcls_f1354()),sqrt(((tcls_v1356*tcls_v1356)+(tcls_v1354*tcls_v1354))));}}
static int tcls_f611(){if (tcls_p611) return tcls_m611; else {tcls_p611=T;return tcls_m611=(tcls_f1351()<tcls_f689());}}
static double tcls_f377(){if (tcls_p377) return tcls_m377; else {tcls_p377=T;return tcls_m377=((tcls_v1351=tcls_f1351()),(tcls_v929=tcls_f929()),((tcls_v1351<tcls_v929)?tcls_v1351:tcls_v929));}}
static double tcls_f373(){if (tcls_p373) return tcls_m373; else {tcls_p373=T;return tcls_m373=(tcls_f841()?((tcls_v1351=tcls_f1351()),(tcls_v882=tcls_f882()),((tcls_v1351<tcls_v882)?tcls_v1351:tcls_v882)):tcls_f828());}}
static int tcls_f621(){if (tcls_p621) return tcls_m621; else {tcls_p621=T;return tcls_m621=(tcls_f1351()<tcls_f826());}}
static int tcls_f619(){if (tcls_p619) return tcls_m619; else {tcls_p619=T;return tcls_m619=(tcls_f1351()<tcls_f1175());}}
static int tcls_f602(){if (tcls_p602) return tcls_m602; else {tcls_p602=T;return tcls_m602=(tcls_f831()?(tcls_f1221()?(tcls_f985()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?(tcls_f1128()?(tcls_f621()?T:tcls_v1129):(tcls_f1130()?(tcls_f619()?T:tcls_f1555()):NIL)):NIL)):NIL):NIL):NIL):(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f611()?T:tcls_f841()):T):tcls_f841()):tcls_f888()):tcls_f606())):NIL):NIL);}}
static double tcls_f365(){if (tcls_p365) return tcls_m365; else {tcls_p365=T;return tcls_m365=(tcls_f831()?(tcls_f1221()?(tcls_f985()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?(tcls_f621()?tcls_f1351():tcls_f826()):(tcls_f1130()?(tcls_f619()?tcls_f1351():tcls_f1175()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828()):(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f611()?tcls_f1351():tcls_f689()):tcls_f377()):tcls_f373()):(tcls_f888()?tcls_f377():tcls_f828())):(tcls_f935()?tcls_f373():tcls_f828()))):tcls_f828()):tcls_f828());}}
static double tcls_f648(){if (tcls_p648) return tcls_m648; else {tcls_p648=T;return tcls_m648=(tcls_f1263()?((tcls_v1351=tcls_f1351()),(tcls_v1304=tcls_f1304()),((tcls_v1351<tcls_v1304)?tcls_v1351:tcls_v1304)):tcls_f828());}}
static int tcls_f637(){if (tcls_p637) return tcls_m637; else {tcls_p637=T;return tcls_m637=(tcls_f648()<tcls_f689());}}
static int tcls_f635(){if (tcls_p635) return tcls_m635; else {tcls_p635=T;return tcls_m635=(tcls_f648()<tcls_f929());}}
static int tcls_f634(){if (tcls_p634) return tcls_m634; else {tcls_p634=T;return tcls_m634=(tcls_f635()?tcls_f1263():T);}}
static double tcls_f399(){if (tcls_p399) return tcls_m399; else {tcls_p399=T;return tcls_m399=(tcls_f635()?tcls_f648():tcls_f929());}}
static int tcls_f632(){if (tcls_p632) return tcls_m632; else {tcls_p632=T;return tcls_m632=(tcls_f648()<tcls_f882());}}
static int tcls_f630(){if (tcls_p630) return tcls_m630; else {tcls_p630=T;return tcls_m630=(tcls_f841()?(tcls_f632()?tcls_f1263():T):NIL);}}
static double tcls_f396(){if (tcls_p396) return tcls_m396; else {tcls_p396=T;return tcls_m396=(tcls_f841()?(tcls_f632()?tcls_f648():tcls_f882()):tcls_f828());}}
static int tcls_f647(){if (tcls_p647) return tcls_m647; else {tcls_p647=T;return tcls_m647=(tcls_f648()<tcls_f826());}}
static int tcls_f645(){if (tcls_p645) return tcls_m645; else {tcls_p645=T;return tcls_m645=(tcls_f648()<tcls_f1175());}}
static int tcls_f1348(){if (tcls_p1348) return tcls_m1348; else {tcls_p1348=T;return tcls_m1348=(fabs((tcls_f1351()-(0.0)))<tcls_v4980);}}
static int tcls_f1310(){if (tcls_p1310) return tcls_m1310; else {tcls_p1310=T;return tcls_m1310=((tcls_v1348=tcls_f1348()),(tcls_v1348?(((fabs((tcls_f1331()-(0.0)))<tcls_v4980)?T:((tcls_v1322=tcls_f1322()),((fabs((tcls_v1322-(0.0)))<tcls_v4980)?NIL:((tcls_v1322>(0.0))?tcls_f1317():(tcls_f1317()?NIL:T)))))?NIL:T):(tcls_v1348?NIL:T)));}}
static double_or_symbol tcls_f44(){if (tcls_p44) return tcls_m44; else {tcls_p44=T;return tcls_m44=(tcls_f1310()?coerce_double_to_double_or_symbol(tcls_f1351()):coerce_symbol_to_double_or_symbol(NIL));}}
static double tcls_f1392(){if (tcls_p1392) return tcls_m1392; else {tcls_p1392=T;return tcls_m1392=(tcls_f1398()-tcls_v5027);}}
static int tcls_f1386(){if (tcls_p1386) return tcls_m1386; else {tcls_p1386=T;return tcls_m1386=((fabs(tcls_f1392())<tcls_v4980)?(fabs(tcls_f1389())<tcls_v4980):NIL);}}
static int tcls_f1380(){if (tcls_p1380) return tcls_m1380; else {tcls_p1380=T;return tcls_m1380=((fabs((((tcls_f1722()*tcls_f1398())+tcls_f1400())-tcls_f1710()))<tcls_v4980)?((tcls_v1386=tcls_f1386()),(tcls_v1386?tcls_v1386:(fabs((tcls_f1723()-atan2(tcls_f1389(),tcls_f1392())))<tcls_v4980))):NIL);}}
static double tcls_f1661(){if (tcls_p1661) return tcls_m1661; else {tcls_p1661=T;return tcls_m1661=(tcls_f4624()-(tcls_f1664()/tcls_f1663()));}}
static int tcls_f1660(){if (tcls_p1660) return tcls_m1660; else {tcls_p1660=T;return tcls_m1660=(tcls_f1661()<0.0);}}
static double tcls_f1548(){if (tcls_p1548) return tcls_m1548; else {tcls_p1548=T;return tcls_m1548=sqrt(tcls_f1661());}}
static double tcls_f1525(){if (tcls_p1525) return tcls_m1525; else {tcls_p1525=T;return tcls_m1525=((-tcls_f1548())+tcls_v5035);}}
static int tcls_f1455(){if (tcls_p1455) return tcls_m1455; else {tcls_p1455=T;return tcls_m1455=(tcls_v5035==tcls_f1525());}}
static double tcls_f1454(){if (tcls_p1454) return tcls_m1454; else {tcls_p1454=T;return tcls_m1454=(tcls_f1455()?tcls_f1498():(1.0));}}
static double tcls_f1451(){if (tcls_p1451) return tcls_m1451; else {tcls_p1451=T;return tcls_m1451=(tcls_f1494()/(tcls_f1525()-tcls_v5035));}}
static double tcls_f1445(){if (tcls_p1445) return tcls_m1445; else {tcls_p1445=T;return tcls_m1445=(tcls_f1455()?tcls_f1488():(tcls_f1525()+(tcls_f1451()*tcls_f1545())));}}
static double tcls_f1450(){if (tcls_p1450) return tcls_m1450; else {tcls_p1450=T;return tcls_m1450=(tcls_f1455()?tcls_f1495():tcls_f1451());}}
static double tcls_f1436(){if (tcls_p1436) return tcls_m1436; else {tcls_p1436=T;return tcls_m1436=(((tcls_f1454()*(tcls_f1525()+tcls_f1720()))+(tcls_f1450()*tcls_f1478()))-tcls_f1445());}}
static double tcls_f1444(){if (tcls_p1444) return tcls_m1444; else {tcls_p1444=T;return tcls_m1444=(((tcls_f1454()*tcls_v5023)+(tcls_f1450()*tcls_v5021))-tcls_f1445());}}
static int tcls_f1431(){if (tcls_p1431) return tcls_m1431; else {tcls_p1431=T;return tcls_m1431=(tcls_f1444()>(0.0));}}
static double tcls_f1462(){if (tcls_p1462) return tcls_m1462; else {tcls_p1462=T;return tcls_m1462=(tcls_v5027-tcls_f1525());}}
static double tcls_f1459(){if (tcls_p1459) return tcls_m1459; else {tcls_p1459=T;return tcls_m1459=((tcls_v1462=tcls_f1462()),sqrt(((tcls_v1462*tcls_v1462)+tcls_f1506())));}}
static int tcls_f717(){if (tcls_p717) return tcls_m717; else {tcls_p717=T;return tcls_m717=(tcls_f1459()<tcls_f826());}}
static int tcls_f715(){if (tcls_p715) return tcls_m715; else {tcls_p715=T;return tcls_m715=(tcls_f1459()<tcls_f1175());}}
static int tcls_f707(){if (tcls_p707) return tcls_m707; else {tcls_p707=T;return tcls_m707=(tcls_f1459()<tcls_f813());}}
static double tcls_f460(){if (tcls_p460) return tcls_m460; else {tcls_p460=T;return tcls_m460=((tcls_v1459=tcls_f1459()),(tcls_v1079=tcls_f1079()),((tcls_v1459<tcls_v1079)?tcls_v1459:tcls_v1079));}}
static double tcls_f456(){if (tcls_p456) return tcls_m456; else {tcls_p456=T;return tcls_m456=(tcls_f999()?((tcls_v1459=tcls_f1459()),(tcls_v1034=tcls_f1034()),((tcls_v1459<tcls_v1034)?tcls_v1459:tcls_v1034)):tcls_f828());}}
static int tcls_f1456(){if (tcls_p1456) return tcls_m1456; else {tcls_p1456=T;return tcls_m1456=(fabs((tcls_f1459()-(0.0)))<tcls_v4980);}}
static int tcls_f1424(){if (tcls_p1424) return tcls_m1424; else {tcls_p1424=T;return tcls_m1424=((tcls_v1456=tcls_f1456()),(tcls_v1456?(((fabs((tcls_f1444()-(0.0)))<tcls_v4980)?T:((tcls_v1436=tcls_f1436()),((fabs((tcls_v1436-(0.0)))<tcls_v4980)?NIL:((tcls_v1436>(0.0))?tcls_f1431():(tcls_f1431()?NIL:T)))))?NIL:T):(tcls_v1456?NIL:T)));}}
static int tcls_f698(){if (tcls_p698) return tcls_m698; else {tcls_p698=T;return tcls_m698=(tcls_f1424()?(tcls_f831()?(tcls_f1221()?(tcls_f1216()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?(tcls_f1128()?(tcls_f717()?T:tcls_v1129):(tcls_f1130()?(tcls_f715()?T:tcls_f1555()):NIL)):NIL)):NIL):NIL):NIL):(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f707()?T:tcls_f999()):T):tcls_f999()):tcls_f1038()):tcls_f723())):NIL):NIL):NIL);}}
static double tcls_f447(){if (tcls_p447) return tcls_m447; else {tcls_p447=T;return tcls_m447=(tcls_f1424()?(tcls_f831()?(tcls_f1221()?(tcls_f1216()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?(tcls_f717()?tcls_f1459():tcls_f826()):(tcls_f1130()?(tcls_f715()?tcls_f1459():tcls_f1175()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828()):(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f707()?tcls_f1459():tcls_f813()):tcls_f460()):tcls_f456()):(tcls_f1038()?tcls_f460():tcls_f828())):(tcls_f1085()?tcls_f456():tcls_f828()))):tcls_f828()):tcls_f828()):tcls_f828());}}
static double_or_symbol tcls_f51(){if (tcls_p51) return tcls_m51; else {tcls_p51=T;return tcls_m51=((tcls_v1424=tcls_f1424()),(tcls_v1424?(tcls_v1424?coerce_double_to_double_or_symbol(tcls_f1459()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
static int tcls_f1423(){if (tcls_p1423) return tcls_m1423; else {tcls_p1423=T;return tcls_m1423=((tcls_v1424=tcls_f1424()),(tcls_v1424?tcls_v1424:NIL));}}
static double tcls_f1519(){if (tcls_p1519) return tcls_m1519; else {tcls_p1519=T;return tcls_m1519=(tcls_f1525()-tcls_v5027);}}
static int tcls_f1516(){if (tcls_p1516) return tcls_m1516; else {tcls_p1516=T;return tcls_m1516=((fabs(tcls_f1519())<tcls_v4980)?tcls_f1534():NIL);}}
static int tcls_f1510(){if (tcls_p1510) return tcls_m1510; else {tcls_p1510=T;return tcls_m1510=((fabs((((tcls_f1722()*tcls_f1525())+tcls_f1544())-tcls_f1710()))<tcls_v4980)?((tcls_v1516=tcls_f1516()),(tcls_v1516?tcls_v1516:(fabs((tcls_f1723()-atan2(tcls_f1536(),tcls_f1519())))<tcls_v4980))):NIL);}}
static double tcls_f1547(){if (tcls_p1547) return tcls_m1547; else {tcls_p1547=T;return tcls_m1547=(tcls_f1548()+tcls_v5035);}}
static int tcls_f1500(){if (tcls_p1500) return tcls_m1500; else {tcls_p1500=T;return tcls_m1500=(tcls_v5035==tcls_f1547());}}
static double tcls_f1497(){if (tcls_p1497) return tcls_m1497; else {tcls_p1497=T;return tcls_m1497=(tcls_f1500()?tcls_f1498():(1.0));}}
static double tcls_f1492(){if (tcls_p1492) return tcls_m1492; else {tcls_p1492=T;return tcls_m1492=(tcls_f1494()/(tcls_f1547()-tcls_v5035));}}
static double tcls_f1485(){if (tcls_p1485) return tcls_m1485; else {tcls_p1485=T;return tcls_m1485=(tcls_f1500()?tcls_f1488():(tcls_f1547()+(tcls_f1492()*tcls_f1545())));}}
static double tcls_f1491(){if (tcls_p1491) return tcls_m1491; else {tcls_p1491=T;return tcls_m1491=(tcls_f1500()?tcls_f1495():tcls_f1492());}}
static double tcls_f1475(){if (tcls_p1475) return tcls_m1475; else {tcls_p1475=T;return tcls_m1475=(((tcls_f1497()*(tcls_f1547()+tcls_f1720()))+(tcls_f1491()*tcls_f1478()))-tcls_f1485());}}
static double tcls_f1484(){if (tcls_p1484) return tcls_m1484; else {tcls_p1484=T;return tcls_m1484=(((tcls_f1497()*tcls_v5023)+(tcls_f1491()*tcls_v5021))-tcls_f1485());}}
static int tcls_f1470(){if (tcls_p1470) return tcls_m1470; else {tcls_p1470=T;return tcls_m1470=(tcls_f1484()>(0.0));}}
static double tcls_f1509(){if (tcls_p1509) return tcls_m1509; else {tcls_p1509=T;return tcls_m1509=(tcls_v5027-tcls_f1547());}}
static double tcls_f1504(){if (tcls_p1504) return tcls_m1504; else {tcls_p1504=T;return tcls_m1504=((tcls_v1509=tcls_f1509()),sqrt(((tcls_v1509*tcls_v1509)+tcls_f1506())));}}
static int tcls_f738(){if (tcls_p738) return tcls_m738; else {tcls_p738=T;return tcls_m738=(tcls_f1504()<tcls_f826());}}
static int tcls_f736(){if (tcls_p736) return tcls_m736; else {tcls_p736=T;return tcls_m736=(tcls_f1504()<tcls_f1175());}}
static int tcls_f728(){if (tcls_p728) return tcls_m728; else {tcls_p728=T;return tcls_m728=(tcls_f1504()<tcls_f813());}}
static int tcls_f719(){if (tcls_p719) return tcls_m719; else {tcls_p719=T;return tcls_m719=(tcls_f831()?(tcls_f1221()?(tcls_f1216()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?(tcls_f1128()?(tcls_f738()?T:tcls_v1129):(tcls_f1130()?(tcls_f736()?T:tcls_f1555()):NIL)):NIL)):NIL):NIL):NIL):(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f728()?T:tcls_f999()):T):tcls_f999()):tcls_f1038()):tcls_f723())):NIL):NIL);}}
static double tcls_f484(){if (tcls_p484) return tcls_m484; else {tcls_p484=T;return tcls_m484=((tcls_v1504=tcls_f1504()),(tcls_v1079=tcls_f1079()),((tcls_v1504<tcls_v1079)?tcls_v1504:tcls_v1079));}}
static double tcls_f480(){if (tcls_p480) return tcls_m480; else {tcls_p480=T;return tcls_m480=(tcls_f999()?((tcls_v1504=tcls_f1504()),(tcls_v1034=tcls_f1034()),((tcls_v1504<tcls_v1034)?tcls_v1504:tcls_v1034)):tcls_f828());}}
static double tcls_f472(){if (tcls_p472) return tcls_m472; else {tcls_p472=T;return tcls_m472=(tcls_f831()?(tcls_f1221()?(tcls_f1216()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?(tcls_f738()?tcls_f1504():tcls_f826()):(tcls_f1130()?(tcls_f736()?tcls_f1504():tcls_f1175()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828()):(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f728()?tcls_f1504():tcls_f813()):tcls_f484()):tcls_f480()):(tcls_f1038()?tcls_f484():tcls_f828())):(tcls_f1085()?tcls_f480():tcls_f828()))):tcls_f828()):tcls_f828());}}
static double tcls_f765(){if (tcls_p765) return tcls_m765; else {tcls_p765=T;return tcls_m765=(tcls_f1424()?((tcls_v1504=tcls_f1504()),(tcls_v1459=tcls_f1459()),((tcls_v1504<tcls_v1459)?tcls_v1504:tcls_v1459)):tcls_f828());}}
static int tcls_f764(){if (tcls_p764) return tcls_m764; else {tcls_p764=T;return tcls_m764=(tcls_f765()<tcls_f826());}}
static int tcls_f762(){if (tcls_p762) return tcls_m762; else {tcls_p762=T;return tcls_m762=(tcls_f765()<tcls_f1175());}}
static int tcls_f754(){if (tcls_p754) return tcls_m754; else {tcls_p754=T;return tcls_m754=(tcls_f765()<tcls_f813());}}
static int tcls_f752(){if (tcls_p752) return tcls_m752; else {tcls_p752=T;return tcls_m752=(tcls_f765()<tcls_f1079());}}
static int tcls_f751(){if (tcls_p751) return tcls_m751; else {tcls_p751=T;return tcls_m751=(tcls_f752()?tcls_f1424():T);}}
static double tcls_f506(){if (tcls_p506) return tcls_m506; else {tcls_p506=T;return tcls_m506=(tcls_f752()?tcls_f765():tcls_f1079());}}
static int tcls_f749(){if (tcls_p749) return tcls_m749; else {tcls_p749=T;return tcls_m749=(tcls_f765()<tcls_f1034());}}
static int tcls_f747(){if (tcls_p747) return tcls_m747; else {tcls_p747=T;return tcls_m747=(tcls_f999()?(tcls_f749()?tcls_f1424():T):NIL);}}
static double tcls_f503(){if (tcls_p503) return tcls_m503; else {tcls_p503=T;return tcls_m503=(tcls_f999()?(tcls_f749()?tcls_f765():tcls_f1034()):tcls_f828());}}
static int tcls_f1501(){if (tcls_p1501) return tcls_m1501; else {tcls_p1501=T;return tcls_m1501=(fabs((tcls_f1504()-(0.0)))<tcls_v4980);}}
static int tcls_f1463(){if (tcls_p1463) return tcls_m1463; else {tcls_p1463=T;return tcls_m1463=((tcls_v1501=tcls_f1501()),(tcls_v1501?(((fabs((tcls_f1484()-(0.0)))<tcls_v4980)?T:((tcls_v1475=tcls_f1475()),((fabs((tcls_v1475-(0.0)))<tcls_v4980)?NIL:((tcls_v1475>(0.0))?tcls_f1470():(tcls_f1470()?NIL:T)))))?NIL:T):(tcls_v1501?NIL:T)));}}
static double_or_symbol tcls_f54(){if (tcls_p54) return tcls_m54; else {tcls_p54=T;return tcls_m54=(tcls_f1463()?coerce_double_to_double_or_symbol(tcls_f1504()):coerce_symbol_to_double_or_symbol(NIL));}}
static double tcls_f1539(){if (tcls_p1539) return tcls_m1539; else {tcls_p1539=T;return tcls_m1539=(tcls_f1547()-tcls_v5027);}}
static int tcls_f1533(){if (tcls_p1533) return tcls_m1533; else {tcls_p1533=T;return tcls_m1533=((fabs(tcls_f1539())<tcls_v4980)?tcls_f1534():NIL);}}
static int tcls_f1527(){if (tcls_p1527) return tcls_m1527; else {tcls_p1527=T;return tcls_m1527=((fabs((((tcls_f1722()*tcls_f1547())+tcls_f1544())-tcls_f1710()))<tcls_v4980)?((tcls_v1533=tcls_f1533()),(tcls_v1533?tcls_v1533:(fabs((tcls_f1723()-atan2(tcls_f1536(),tcls_f1539())))<tcls_v4980))):NIL);}}
static int tcls_f1253(){if (tcls_p1253) return tcls_m1253; else {tcls_p1253=T;return tcls_m1253=(tcls_f1667()?(tcls_f1666()?(tcls_f1660()?tcls_f1549():(tcls_f1527()?(tcls_f1510()?((tcls_v1463=tcls_f1463()),(tcls_v1463?(tcls_f1423()?tcls_f1424():tcls_v1463):tcls_f1423())):((tcls_v1463=tcls_f1463()),(tcls_v1463?tcls_v1463:NIL))):(tcls_f1510()?tcls_f1423():NIL))):(tcls_f1408()?tcls_f1549():(tcls_f1380()?(tcls_f1357()?((tcls_v1310=tcls_f1310()),(tcls_v1310?(tcls_f1262()?tcls_f1263():tcls_v1310):tcls_f1262())):((tcls_v1310=tcls_f1310()),(tcls_v1310?tcls_v1310:NIL))):(tcls_f1357()?tcls_f1262():NIL)))):NIL);}}
static double tcls_f332(){if (tcls_p332) return tcls_m332; else {tcls_p332=T;return tcls_m332=(tcls_f1667()?(tcls_f1666()?(tcls_f1660()?(tcls_f1689()?(tcls_f1634()?(tcls_f1612()?(tcls_f1554()?(tcls_f1553()?(tcls_f831()?(tcls_f1221()?(tcls_f1216()?tcls_f557():(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f812()?tcls_f827():tcls_f813()):tcls_f555()):tcls_f552()):(tcls_f1038()?tcls_f555():tcls_f828())):(tcls_f1085()?tcls_f552():tcls_f828()))):tcls_f828()):tcls_f828()):(tcls_f1556()?(tcls_f831()?(tcls_f1221()?(tcls_f1216()?tcls_f535():(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f789()?tcls_f1603():tcls_f813()):tcls_f533()):tcls_f530()):(tcls_f1038()?tcls_f533():tcls_f828())):(tcls_f1085()?tcls_f530():tcls_f828()))):tcls_f828()):tcls_f828()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828()):(tcls_f1527()?(tcls_f1510()?(tcls_f1463()?(tcls_f1423()?(tcls_f831()?(tcls_f1221()?(tcls_f1216()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?(tcls_f764()?tcls_f765():tcls_f826()):(tcls_f1130()?(tcls_f762()?tcls_f765():tcls_f1175()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828()):(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f754()?tcls_f765():tcls_f813()):tcls_f506()):tcls_f503()):(tcls_f1038()?tcls_f506():tcls_f828())):(tcls_f1085()?tcls_f503():tcls_f828()))):tcls_f828()):tcls_f828()):tcls_f472()):tcls_f447()):(tcls_f1463()?tcls_f472():tcls_f828())):(tcls_f1510()?tcls_f447():tcls_f828()))):(tcls_f1408()?(tcls_f1689()?(tcls_f1634()?(tcls_f1612()?(tcls_f1554()?(tcls_f1553()?(tcls_f831()?(tcls_f1221()?(tcls_f985()?tcls_f557():(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f688()?tcls_f827():tcls_f689()):tcls_f439()):tcls_f436()):(tcls_f888()?tcls_f439():tcls_f828())):(tcls_f935()?tcls_f436():tcls_f828()))):tcls_f828()):tcls_f828()):(tcls_f1556()?(tcls_f831()?(tcls_f1221()?(tcls_f985()?tcls_f535():(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f672()?tcls_f1603():tcls_f689()):tcls_f426()):tcls_f423()):(tcls_f888()?tcls_f426():tcls_f828())):(tcls_f935()?tcls_f423():tcls_f828()))):tcls_f828()):tcls_f828()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828()):(tcls_f1380()?(tcls_f1357()?(tcls_f1310()?(tcls_f1262()?(tcls_f831()?(tcls_f1221()?(tcls_f985()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?(tcls_f647()?tcls_f648():tcls_f826()):(tcls_f1130()?(tcls_f645()?tcls_f648():tcls_f1175()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828()):(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f637()?tcls_f648():tcls_f689()):tcls_f399()):tcls_f396()):(tcls_f888()?tcls_f399():tcls_f828())):(tcls_f935()?tcls_f396():tcls_f828()))):tcls_f828()):tcls_f828()):tcls_f365()):tcls_f340()):(tcls_f1310()?tcls_f365():tcls_f828())):(tcls_f1357()?tcls_f340():tcls_f828())))):tcls_f828());}}
static int tcls_f4642(){if (tcls_p4642) return tcls_m4642; else {tcls_p4642=T;return tcls_m4642=(fabs((tcls_v5027-tcls_v5023))<tcls_v4980);}}
static double tcls_f4647(){if (tcls_p4647) return tcls_m4647; else {tcls_p4647=T;return tcls_m4647=(tcls_v5025-tcls_v5021);}}
static int tcls_f4645(){if (tcls_p4645) return tcls_m4645; else {tcls_p4645=T;return tcls_m4645=(fabs(tcls_f4647())<tcls_v4980);}}
static double tcls_f4640(){if (tcls_p4640) return tcls_m4640; else {tcls_p4640=T;return tcls_m4640=(tcls_v5010/tcls_f4647());}}
static double tcls_f2145(){if (tcls_p2145) return tcls_m2145; else {tcls_p2145=T;return tcls_m2145=error("No applicable method for DISTANCE with argument types (POINT (OR POINT BOOLEAN))");}}
static double tcls_f2161(){if (tcls_p2161) return tcls_m2161; else {tcls_p2161=T;return tcls_m2161=error("SLOT-VALUE called on non-instance");}}
static double tcls_f2264(){if (tcls_p2264) return tcls_m2264; else {tcls_p2264=T;return tcls_m2264=(tcls_v2326-tcls_v5033);}}
static double tcls_f2235(){if (tcls_p2235) return tcls_m2235; else {tcls_p2235=T;return tcls_m2235=(tcls_v2327-tcls_v5033);}}
static double tcls_f4983(){if (tcls_p4983) return tcls_m4983; else {tcls_p4983=T;return tcls_m4983=((tcls_v4988*tcls_v5035)+(tcls_v4986*tcls_v5033));}}
static int tcls_f1821(){if (tcls_p1821) return tcls_m1821; else {tcls_p1821=T;return tcls_m1821=((fabs((((tcls_v4988*tcls_f1909())+(tcls_v4986*tcls_f1916()))-tcls_f4983()))<tcls_v4980)?((tcls_v1827=tcls_f1827()),(tcls_v1827?tcls_v1827:(fabs((tcls_v5019-atan2(tcls_f1830(),tcls_f1833())))<tcls_v4980))):NIL);}}
static int tcls_f1849(){if (tcls_p1849) return tcls_m1849; else {tcls_p1849=T;return tcls_m1849=((fabs((((tcls_v4988*tcls_f1908())+(tcls_v4986*tcls_f1915()))-tcls_f4983()))<tcls_v4980)?((tcls_v1855=tcls_f1855()),(tcls_v1855?tcls_v1855:(fabs((tcls_v5019-atan2(tcls_f1858(),tcls_f1861())))<tcls_v4980))):NIL);}}
static int tcls_f1817(){if (tcls_p1817) return tcls_m1817; else {tcls_p1817=T;return tcls_m1817=((tcls_v1821=tcls_f1821()),(tcls_v1821?tcls_v1821:tcls_f1849()));}}
static int tcls_f1847(){if (tcls_p1847) return tcls_m1847; else {tcls_p1847=T;return tcls_m1847=(((fabs((tcls_v5035-tcls_f1909()))<tcls_v4980)?(fabs((tcls_v5033-tcls_f1916()))<tcls_v4980):NIL)?(tcls_f1849()?NIL:T):NIL);}}
static int tcls_f1818(){if (tcls_p1818) return tcls_m1818; else {tcls_p1818=T;return tcls_m1818=((tcls_v1847=tcls_f1847()),(tcls_v1847?tcls_v1847:(((fabs((tcls_v5035-tcls_f1908()))<tcls_v4980)?(fabs((tcls_v5033-tcls_f1915()))<tcls_v4980):NIL)?(tcls_f1821()?NIL:T):NIL)));}}
static double tcls_f2314(){if (tcls_p2314) return tcls_m2314; else {tcls_p2314=T;return tcls_m2314=error("Can't form a single line when the end points are the same");}}
static double tcls_f1888(){if (tcls_p1888) return tcls_m1888; else {tcls_p1888=T;return tcls_m1888=(tcls_f1912()?(tcls_f1905()?tcls_f2314():tcls_f1916()):(tcls_f1909()+(tcls_f1902()*tcls_f1916())));}}
static double tcls_f1901(){if (tcls_p1901) return tcls_m1901; else {tcls_p1901=T;return tcls_m1901=(tcls_f1912()?(tcls_f1905()?tcls_f2314():(1.0)):tcls_f1902());}}
static double tcls_f1886(){if (tcls_p1886) return tcls_m1886; else {tcls_p1886=T;return tcls_m1886=((tcls_f4983()*tcls_f1901())-(tcls_v4986*tcls_f1888()));}}
static double tcls_f1898(){if (tcls_p1898) return tcls_m1898; else {tcls_p1898=T;return tcls_m1898=(tcls_f1912()?(tcls_f1905()?tcls_f2314():(0.0)):(1.0));}}
static double tcls_f1880(){if (tcls_p1880) return tcls_m1880; else {tcls_p1880=T;return tcls_m1880=((tcls_v4988*tcls_f1888())-(tcls_f4983()*tcls_f1898()));}}
static int tcls_f1876(){if (tcls_p1876) return tcls_m1876; else {tcls_p1876=T;return tcls_m1876=((fabs((tcls_f1886()-(0.0)))<tcls_v4980)?(fabs((tcls_f1880()-(0.0)))<tcls_v4980):NIL);}}
static double tcls_f1896(){if (tcls_p1896) return tcls_m1896; else {tcls_p1896=T;return tcls_m1896=((tcls_v4988*tcls_f1901())-(tcls_v4986*tcls_f1898()));}}
static double tcls_f1814(){if (tcls_p1814) return tcls_m1814; else {tcls_p1814=T;return tcls_m1814=(tcls_f1886()/tcls_f1896());}}
static double tcls_f1806(){if (tcls_p1806) return tcls_m1806; else {tcls_p1806=T;return tcls_m1806=(tcls_f1814()-tcls_v5035);}}
static double tcls_f1812(){if (tcls_p1812) return tcls_m1812; else {tcls_p1812=T;return tcls_m1812=(tcls_f1880()/tcls_f1896());}}
static double tcls_f1803(){if (tcls_p1803) return tcls_m1803; else {tcls_p1803=T;return tcls_m1803=(tcls_f1812()-tcls_v5033);}}
static int tcls_f1800(){if (tcls_p1800) return tcls_m1800; else {tcls_p1800=T;return tcls_m1800=((fabs(tcls_f1806())<tcls_v4980)?(fabs(tcls_f1803())<tcls_v4980):NIL);}}
static int tcls_f1893(){if (tcls_p1893) return tcls_m1893; else {tcls_p1893=T;return tcls_m1893=(fabs((tcls_f1896()-(0.0)))<tcls_v4980);}}
static int tcls_f1875(){if (tcls_p1875) return tcls_m1875; else {tcls_p1875=T;return tcls_m1875=(tcls_f1893()?tcls_f1876():NIL);}}
static int tcls_f1815(){if (tcls_p1815) return tcls_m1815; else {tcls_p1815=T;return tcls_m1815=(tcls_f1893()?tcls_f1876():T);}}
static int tcls_f1768(){if (tcls_p1768) return tcls_m1768; else {tcls_p1768=T;return tcls_m1768=(tcls_f1815()?((tcls_v1893=tcls_f1893()),((tcls_v1893?NIL:((fabs((((tcls_v4988*tcls_f1814())+(tcls_v4986*tcls_f1812()))-tcls_f4983()))<tcls_v4980)?((tcls_v1800=tcls_f1800()),(tcls_v1800?tcls_v1800:(fabs((tcls_v5019-atan2(tcls_f1803(),tcls_f1806())))<tcls_v4980))):NIL))?(tcls_v1893?NIL:((tcls_v1814=tcls_f1814()),(tcls_v1812=tcls_f1812()),((fabs((((tcls_f1898()*tcls_v1814)+(tcls_f1901()*tcls_v1812))-tcls_f1888()))<tcls_v4980)?((tcls_v1909=tcls_f1909()),(tcls_v1908=tcls_f1908()),((((((tcls_v1909<tcls_v1908)?tcls_v1909:tcls_v1908)-tcls_v4980)<=tcls_v1814)&&(tcls_v1814<=(((tcls_v1909>tcls_v1908)?tcls_v1909:tcls_v1908)+tcls_v4980)))?((tcls_v1916=tcls_f1916()),(tcls_v1915=tcls_f1915()),(((((tcls_v1916<tcls_v1915)?tcls_v1916:tcls_v1915)-tcls_v4980)<=tcls_v1812)&&(tcls_v1812<=(((tcls_v1916>tcls_v1915)?tcls_v1916:tcls_v1915)+tcls_v4980)))):NIL)):NIL))):NIL)):NIL);}}
static int tcls_f1761(){if (tcls_p1761) return tcls_m1761; else {tcls_p1761=T;return tcls_m1761=((tcls_v1875=tcls_f1875()),((tcls_v1875?(tcls_f1818()?T:tcls_f1817()):(tcls_f1768()?tcls_f1815():NIL))?((tcls_v1875?(tcls_f1818()?NIL:tcls_f1817()):(tcls_f1768()?tcls_v1875:NIL))?NIL:T):NIL));}}
static int tcls_f1758(){if (tcls_p1758) return tcls_m1758; else {tcls_p1758=T;return tcls_m1758=(tcls_f1875()?tcls_f1818():(tcls_f1768()?(tcls_f1893()?NIL:T):NIL));}}
static double tcls_f1753(){if (tcls_p1753) return tcls_m1753; else {tcls_p1753=T;return tcls_m1753=(tcls_v5035-(tcls_f1875()?(tcls_f1818()?tcls_v5035:tcls_f2161()):(tcls_f1768()?(tcls_f1893()?tcls_f2161():tcls_f1814()):tcls_f2161())));}}
static double tcls_f1747(){if (tcls_p1747) return tcls_m1747; else {tcls_p1747=T;return tcls_m1747=(tcls_v5033-(tcls_f1875()?(tcls_f1818()?tcls_v5033:tcls_f2161()):(tcls_f1768()?(tcls_f1893()?tcls_f2161():tcls_f1812()):tcls_f2161())));}}
static double tcls_f1743(){if (tcls_p1743) return tcls_m1743; else {tcls_p1743=T;return tcls_m1743=(tcls_f1758()?((tcls_v1753=tcls_f1753()),(tcls_v1747=tcls_f1747()),sqrt(((tcls_v1753*tcls_v1753)+(tcls_v1747*tcls_v1747)))):tcls_f2145());}}
static double tcls_f129(){if (tcls_p129) return tcls_m129; else {tcls_p129=T;return tcls_m129=((tcls_v1743=tcls_f1743()),(tcls_v1351=tcls_f1351()),((tcls_v1743<tcls_v1351)?tcls_v1743:tcls_v1351));}}
static double tcls_f125(){if (tcls_p125) return tcls_m125; else {tcls_p125=T;return tcls_m125=(tcls_f1263()?((tcls_v1743=tcls_f1743()),(tcls_v1304=tcls_f1304()),((tcls_v1743<tcls_v1304)?tcls_v1743:tcls_v1304)):tcls_f828());}}
static double tcls_f147(){if (tcls_p147) return tcls_m147; else {tcls_p147=T;return tcls_m147=(tcls_f1689()?(tcls_f1634()?(tcls_f1612()?(tcls_f1554()?(tcls_f1553()?((tcls_v1743=tcls_f1743()),(tcls_v827=tcls_f827()),((tcls_v1743<tcls_v827)?tcls_v1743:tcls_v827)):(tcls_f1556()?((tcls_v1743=tcls_f1743()),(tcls_v1603=tcls_f1603()),((tcls_v1743<tcls_v1603)?tcls_v1743:tcls_v1603)):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828());}}
static double tcls_f143(){if (tcls_p143) return tcls_m143; else {tcls_p143=T;return tcls_m143=((tcls_v1743=tcls_f1743()),(tcls_v1504=tcls_f1504()),((tcls_v1743<tcls_v1504)?tcls_v1743:tcls_v1504));}}
static double tcls_f139(){if (tcls_p139) return tcls_m139; else {tcls_p139=T;return tcls_m139=(tcls_f1424()?((tcls_v1743=tcls_f1743()),(tcls_v1459=tcls_f1459()),((tcls_v1743<tcls_v1459)?tcls_v1743:tcls_v1459)):tcls_f828());}}
static double tcls_f88(){if (tcls_p88) return tcls_m88; else {tcls_p88=T;return tcls_m88=((tcls_v1743=tcls_f1743()),(tcls_v929=tcls_f929()),((tcls_v1743<tcls_v929)?tcls_v1743:tcls_v929));}}
static double tcls_f84(){if (tcls_p84) return tcls_m84; else {tcls_p84=T;return tcls_m84=(tcls_f841()?((tcls_v1743=tcls_f1743()),(tcls_v882=tcls_f882()),((tcls_v1743<tcls_v882)?tcls_v1743:tcls_v882)):tcls_f828());}}
static double tcls_f106(){if (tcls_p106) return tcls_m106; else {tcls_p106=T;return tcls_m106=(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?((tcls_v1743=tcls_f1743()),(tcls_v826=tcls_f826()),((tcls_v1743<tcls_v826)?tcls_v1743:tcls_v826)):(tcls_f1130()?((tcls_v1743=tcls_f1743()),(tcls_v1175=tcls_f1175()),((tcls_v1743<tcls_v1175)?tcls_v1743:tcls_v1175)):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828());}}
static double tcls_f102(){if (tcls_p102) return tcls_m102; else {tcls_p102=T;return tcls_m102=((tcls_v1743=tcls_f1743()),(tcls_v1079=tcls_f1079()),((tcls_v1743<tcls_v1079)?tcls_v1743:tcls_v1079));}}
static double tcls_f98(){if (tcls_p98) return tcls_m98; else {tcls_p98=T;return tcls_m98=(tcls_f999()?((tcls_v1743=tcls_f1743()),(tcls_v1034=tcls_f1034()),((tcls_v1743<tcls_v1034)?tcls_v1743:tcls_v1034)):tcls_f828());}}
static int tcls_f1740(){if (tcls_p1740) return tcls_m1740; else {tcls_p1740=T;return tcls_m1740=(fabs((tcls_f1743()-(0.0)))<tcls_v4980);}}
static double tcls_f2136(){if (tcls_p2136) return tcls_m2136; else {tcls_p2136=T;return tcls_m2136=(tcls_f4645()?(tcls_f4642()?tcls_f2314():tcls_v5025):(tcls_v5027+(tcls_f4640()*tcls_v5025)));}}
static double tcls_f2139(){if (tcls_p2139) return tcls_m2139; else {tcls_p2139=T;return tcls_m2139=(tcls_f4645()?(tcls_f4642()?tcls_f2314():(0.0)):(1.0));}}
static int tcls_f2138(){if (tcls_p2138) return tcls_m2138; else {tcls_p2138=T;return tcls_m2138=(tcls_f2139()==0.0);}}
static double tcls_f2115(){if (tcls_p2115) return tcls_m2115; else {tcls_p2115=T;return tcls_m2115=(tcls_f2139()*tcls_v5033);}}
static double tcls_f2125(){if (tcls_p2125) return tcls_m2125; else {tcls_p2125=T;return tcls_m2125=((tcls_v2139=tcls_f2139()),(tcls_v2139*tcls_v2139));}}
static double tcls_f2135(){if (tcls_p2135) return tcls_m2135; else {tcls_p2135=T;return tcls_m2135=(tcls_f2139()*tcls_v5035);}}
static double tcls_f2133(){if (tcls_p2133) return tcls_m2133; else {tcls_p2133=T;return tcls_m2133=(tcls_f4645()?(tcls_f4642()?tcls_f2314():(1.0)):tcls_f4640());}}
static double tcls_f2027(){if (tcls_p2027) return tcls_m2027; else {tcls_p2027=T;return tcls_m2027=(tcls_f2136()/tcls_f2133());}}
static int tcls_f2020(){if (tcls_p2020) return tcls_m2020; else {tcls_p2020=T;return tcls_m2020=((tcls_f4484()<=tcls_f2027())&&(tcls_f2027()<=tcls_f4482()));}}
static double tcls_f2026(){if (tcls_p2026) return tcls_m2026; else {tcls_p2026=T;return tcls_m2026=(tcls_f2133()*tcls_f2027());}}
static int tcls_f2095(){if (tcls_p2095) return tcls_m2095; else {tcls_p2095=T;return tcls_m2095=(tcls_f2133()>0.0);}}
static double tcls_f2093(){if (tcls_p2093) return tcls_m2093; else {tcls_p2093=T;return tcls_m2093=(tcls_f2095()?(-tcls_f2139()):tcls_f2139());}}
static double tcls_f2114(){if (tcls_p2114) return tcls_m2114; else {tcls_p2114=T;return tcls_m2114=(tcls_f2133()*tcls_v5035);}}
static double tcls_f2113(){if (tcls_p2113) return tcls_m2113; else {tcls_p2113=T;return tcls_m2113=(tcls_f2115()-tcls_f2114());}}
static double tcls_f2083(){if (tcls_p2083) return tcls_m2083; else {tcls_p2083=T;return tcls_m2083=(tcls_f2095()?(tcls_f2114()-tcls_f2115()):tcls_f2113());}}
static double tcls_f2081(){if (tcls_p2081) return tcls_m2081; else {tcls_p2081=T;return tcls_m2081=((tcls_f2136()*tcls_f2093())-(tcls_f2133()*tcls_f2083()));}}
static double tcls_f2124(){if (tcls_p2124) return tcls_m2124; else {tcls_p2124=T;return tcls_m2124=(-tcls_f2133());}}
static double tcls_f2091(){if (tcls_p2091) return tcls_m2091; else {tcls_p2091=T;return tcls_m2091=(tcls_f2095()?tcls_f2133():tcls_f2124());}}
static double tcls_f2089(){if (tcls_p2089) return tcls_m2089; else {tcls_p2089=T;return tcls_m2089=((tcls_f2139()*tcls_f2093())-(tcls_f2133()*tcls_f2091()));}}
static double tcls_f2069(){if (tcls_p2069) return tcls_m2069; else {tcls_p2069=T;return tcls_m2069=(tcls_f2081()/tcls_f2089());}}
static int tcls_f2086(){if (tcls_p2086) return tcls_m2086; else {tcls_p2086=T;return tcls_m2086=(fabs((tcls_f2089()-(0.0)))<tcls_v4980);}}
static double tcls_f2075(){if (tcls_p2075) return tcls_m2075; else {tcls_p2075=T;return tcls_m2075=((tcls_f2139()*tcls_f2083())-(tcls_f2136()*tcls_f2091()));}}
static double tcls_f2067(){if (tcls_p2067) return tcls_m2067; else {tcls_p2067=T;return tcls_m2067=(tcls_f2075()/tcls_f2089());}}
static int tcls_f2057(){if (tcls_p2057) return tcls_m2057; else {tcls_p2057=T;return tcls_m2057=(tcls_f2086()?NIL:((tcls_v2069=tcls_f2069()),(tcls_v2067=tcls_f2067()),((fabs((((tcls_f2139()*tcls_v2069)+(tcls_f2133()*tcls_v2067))-tcls_f2136()))<tcls_v4980)?(((tcls_f4493()<=tcls_v2069)&&(tcls_v2069<=tcls_f4491()))?((tcls_f4484()<=tcls_v2067)&&(tcls_v2067<=tcls_f4482())):NIL):NIL)));}}
static int tcls_f2071(){if (tcls_p2071) return tcls_m2071; else {tcls_p2071=T;return tcls_m2071=((fabs((tcls_f2081()-(0.0)))<tcls_v4980)?(fabs((tcls_f2075()-(0.0)))<tcls_v4980):NIL);}}
static int tcls_f2070(){if (tcls_p2070) return tcls_m2070; else {tcls_p2070=T;return tcls_m2070=(tcls_f2086()?tcls_f2071():T);}}
static double tcls_f2122(){if (tcls_p2122) return tcls_m2122; else {tcls_p2122=T;return tcls_m2122=(tcls_f2125()-(tcls_f2133()*tcls_f2124()));}}
static double tcls_f2109(){if (tcls_p2109) return tcls_m2109; else {tcls_p2109=T;return tcls_m2109=((((tcls_f2136()*tcls_f2139())-(tcls_f2133()*tcls_f2113()))/tcls_f2122())-tcls_v5035);}}
static double tcls_f2103(){if (tcls_p2103) return tcls_m2103; else {tcls_p2103=T;return tcls_m2103=((((tcls_f2139()*tcls_f2113())-(tcls_f2136()*tcls_f2124()))/tcls_f2122())-tcls_v5033);}}
static int tcls_f2096(){if (tcls_p2096) return tcls_m2096; else {tcls_p2096=T;return tcls_m2096=(fabs((((fabs((tcls_f2122()-(0.0)))<tcls_v4980)?tcls_f2117():((tcls_v2109=tcls_f2109()),(tcls_v2103=tcls_f2103()),sqrt(((tcls_v2109*tcls_v2109)+(tcls_v2103*tcls_v2103)))))-tcls_v5012))<tcls_v4980);}}
static double tcls_f1966(){if (tcls_p1966) return tcls_m1966; else {tcls_p1966=T;return tcls_m1966=(tcls_f2096()?(tcls_f2070()?(tcls_f2057()?(tcls_f2086()?tcls_f2161():tcls_f2069()):tcls_f2161()):tcls_f2161()):tcls_f2161());}}
static double tcls_f1950(){if (tcls_p1950) return tcls_m1950; else {tcls_p1950=T;return tcls_m1950=(tcls_f2096()?(tcls_f2070()?(tcls_f2057()?(tcls_f2086()?tcls_f2161():tcls_f2067()):tcls_f2161()):tcls_f2161()):tcls_f2161());}}
static int tcls_f2031(){if (tcls_p2031) return tcls_m2031; else {tcls_p2031=T;return tcls_m2031=(tcls_f2096()?(tcls_f2070()?(tcls_f2057()?(tcls_f2086()?NIL:T):NIL):NIL):NIL);}}
static int tcls_f2053(){if (tcls_p2053) return tcls_m2053; else {tcls_p2053=T;return tcls_m2053=(tcls_f2096()?(tcls_f2070()?(tcls_f2057()?(tcls_f2086()?tcls_f2071():NIL):NIL):NIL):NIL);}}
static double tcls_f2129(){if (tcls_p2129) return tcls_m2129; else {tcls_p2129=T;return tcls_m2129=((tcls_v2133=tcls_f2133()),(tcls_v2133*tcls_v2133));}}
static double tcls_f2047(){if (tcls_p2047) return tcls_m2047; else {tcls_p2047=T;return tcls_m2047=(tcls_f2125()+tcls_f2129());}}
static double tcls_f2004(){if (tcls_p2004) return tcls_m2004; else {tcls_p2004=T;return tcls_m2004=((tcls_v2047=tcls_f2047()),(tcls_v2047+tcls_v2047));}}
static double tcls_f2132(){if (tcls_p2132) return tcls_m2132; else {tcls_p2132=T;return tcls_m2132=(tcls_f2133()*tcls_v5033);}}
static double tcls_f2038(){if (tcls_p2038) return tcls_m2038; else {tcls_p2038=T;return tcls_m2038=((tcls_f2135()+tcls_f2132())-tcls_f2136());}}
static int tcls_f1931(){if (tcls_p1931) return tcls_m1931; else {tcls_p1931=T;return tcls_m1931=(tcls_f2038()>(0.0));}}
static double tcls_f2131(){if (tcls_p2131) return tcls_m2131; else {tcls_p2131=T;return tcls_m2131=(tcls_f2136()-tcls_f2135()-tcls_f2132());}}
static double tcls_f2050(){if (tcls_p2050) return tcls_m2050; else {tcls_p2050=T;return tcls_m2050=((-2.0)*tcls_f2133()*tcls_f2131());}}
static double tcls_f2003(){if (tcls_p2003) return tcls_m2003; else {tcls_p2003=T;return tcls_m2003=((-tcls_f2050())/tcls_f2004());}}
static double tcls_f2130(){if (tcls_p2130) return tcls_m2130; else {tcls_p2130=T;return tcls_m2130=((tcls_v2131=tcls_f2131()),(tcls_v2131*tcls_v2131));}}
static double tcls_f2043(){if (tcls_p2043) return tcls_m2043; else {tcls_p2043=T;return tcls_m2043=((tcls_v2050=tcls_f2050()),((tcls_v2050*tcls_v2050)-((4.0)*tcls_f2047()*(tcls_f2130()-(tcls_f2125()*tcls_f4624())))));}}
static double tcls_f2001(){if (tcls_p2001) return tcls_m2001; else {tcls_p2001=T;return tcls_m2001=(sqrt(tcls_f2043())/tcls_f2004());}}
static double tcls_f1999(){if (tcls_p1999) return tcls_m1999; else {tcls_p1999=T;return tcls_m1999=((tcls_f2003()+tcls_f2001())+tcls_v5033);}}
static double tcls_f1998(){if (tcls_p1998) return tcls_m1998; else {tcls_p1998=T;return tcls_m1998=(tcls_f2133()*tcls_f1999());}}
static double tcls_f1996(){if (tcls_p1996) return tcls_m1996; else {tcls_p1996=T;return tcls_m1996=((tcls_f2136()-tcls_f1998())/tcls_f2139());}}
static int tcls_f1987(){if (tcls_p1987) return tcls_m1987; else {tcls_p1987=T;return tcls_m1987=((tcls_v1996=tcls_f1996()),((fabs((((tcls_f2139()*tcls_v1996)+tcls_f1998())-tcls_f2136()))<tcls_v4980)?(((tcls_f4493()<=tcls_v1996)&&(tcls_v1996<=tcls_f4491()))?((tcls_f4484()<=tcls_f1999())&&(tcls_f1999()<=tcls_f4482())):NIL):NIL));}}
static double tcls_f1985(){if (tcls_p1985) return tcls_m1985; else {tcls_p1985=T;return tcls_m1985=((tcls_f2003()-tcls_f2001())+tcls_v5033);}}
static double tcls_f1984(){if (tcls_p1984) return tcls_m1984; else {tcls_p1984=T;return tcls_m1984=(tcls_f2133()*tcls_f1985());}}
static double tcls_f1982(){if (tcls_p1982) return tcls_m1982; else {tcls_p1982=T;return tcls_m1982=((tcls_f2136()-tcls_f1984())/tcls_f2139());}}
static int tcls_f1973(){if (tcls_p1973) return tcls_m1973; else {tcls_p1973=T;return tcls_m1973=((tcls_v1982=tcls_f1982()),((fabs((((tcls_f2139()*tcls_v1982)+tcls_f1984())-tcls_f2136()))<tcls_v4980)?(((tcls_f4493()<=tcls_v1982)&&(tcls_v1982<=tcls_f4491()))?((tcls_f4484()<=tcls_f1985())&&(tcls_f1985()<=tcls_f4482())):NIL):NIL));}}
static int tcls_f2042(){if (tcls_p2042) return tcls_m2042; else {tcls_p2042=T;return tcls_m2042=(tcls_f2043()<0.0);}}
static double tcls_f2127(){if (tcls_p2127) return tcls_m2127; else {tcls_p2127=T;return tcls_m2127=(tcls_f4624()-(tcls_f2130()/tcls_f2129()));}}
static double tcls_f2030(){if (tcls_p2030) return tcls_m2030; else {tcls_p2030=T;return tcls_m2030=sqrt(tcls_f2127());}}
static double tcls_f2016(){if (tcls_p2016) return tcls_m2016; else {tcls_p2016=T;return tcls_m2016=((-tcls_f2030())+tcls_v5035);}}
static int tcls_f2008(){if (tcls_p2008) return tcls_m2008; else {tcls_p2008=T;return tcls_m2008=((tcls_v2016=tcls_f2016()),((fabs((((tcls_f2139()*tcls_v2016)+tcls_f2026())-tcls_f2136()))<tcls_v4980)?(((tcls_f4493()<=tcls_v2016)&&(tcls_v2016<=tcls_f4491()))?tcls_f2020():NIL):NIL));}}
static double tcls_f2029(){if (tcls_p2029) return tcls_m2029; else {tcls_p2029=T;return tcls_m2029=(tcls_f2030()+tcls_v5035);}}
static int tcls_f2018(){if (tcls_p2018) return tcls_m2018; else {tcls_p2018=T;return tcls_m2018=((tcls_v2029=tcls_f2029()),((fabs((((tcls_f2139()*tcls_v2029)+tcls_f2026())-tcls_f2136()))<tcls_v4980)?(((tcls_f4493()<=tcls_v2029)&&(tcls_v2029<=tcls_f4491()))?tcls_f2020():NIL):NIL));}}
static int tcls_f2126(){if (tcls_p2126) return tcls_m2126; else {tcls_p2126=T;return tcls_m2126=(tcls_f2127()<0.0);}}
static int tcls_f2040(){if (tcls_p2040) return tcls_m2040; else {tcls_p2040=T;return tcls_m2040=(tcls_f2138()?(tcls_f2126()?tcls_f2053():NIL):(tcls_f2042()?tcls_f2053():NIL));}}
static int tcls_f1970(){if (tcls_p1970) return tcls_m1970; else {tcls_p1970=T;return tcls_m1970=(tcls_f2138()?(tcls_f2126()?tcls_f2031():(tcls_f2018()?T:tcls_f2008())):(tcls_f2042()?tcls_f2031():(tcls_f1987()?T:tcls_f1973())));}}
static double tcls_f1936(){if (tcls_p1936) return tcls_m1936; else {tcls_p1936=T;return tcls_m1936=((tcls_v1970=tcls_f1970()),(((tcls_f2139()*((tcls_v1970?(tcls_f2138()?(tcls_f2126()?tcls_f1966():(tcls_f2018()?tcls_f2029():(tcls_f2008()?tcls_f2016():tcls_f2161()))):(tcls_f2042()?tcls_f1966():(tcls_f1987()?tcls_f1996():(tcls_f1973()?tcls_f1982():tcls_f2161())))):tcls_f1957())+tcls_v4987))+(tcls_f2133()*((tcls_v1970?(tcls_f2138()?(tcls_f2126()?tcls_f1950():(tcls_f2018()?tcls_f2027():(tcls_f2008()?tcls_f2027():tcls_f2161()))):(tcls_f2042()?tcls_f1950():(tcls_f1987()?tcls_f1999():(tcls_f1973()?tcls_f1985():tcls_f2161())))):tcls_f1941())+tcls_v4988)))-tcls_f2136()));}}
static int tcls_f1925(){if (tcls_p1925) return tcls_m1925; else {tcls_p1925=T;return tcls_m1925=((tcls_v2040=tcls_f2040()),(tcls_v2040?tcls_v2040:(((fabs((tcls_f2038()-(0.0)))<tcls_v4980)?T:((tcls_v1936=tcls_f1936()),((fabs((tcls_v1936-(0.0)))<tcls_v4980)?NIL:((tcls_v1936>(0.0))?tcls_f1931():(tcls_f1931()?NIL:T)))))?NIL:T)));}}
static int tcls_f1738(){if (tcls_p1738) return tcls_m1738; else {tcls_p1738=T;return tcls_m1738=((tcls_v1740=tcls_f1740()),(tcls_v1740?tcls_f1925():(tcls_v1740?NIL:T)));}}
static int tcls_f1736(){if (tcls_p1736) return tcls_m1736; else {tcls_p1736=T;return tcls_m1736=(tcls_f1761()?(tcls_f1738()?tcls_f1758():NIL):NIL);}}
static int tcls_f1735(){if (tcls_p1735) return tcls_m1735; else {tcls_p1735=T;return tcls_m1735=((tcls_v1736=tcls_f1736()),(tcls_v1736?tcls_v1736:NIL));}}
static double tcls_f2321(){if (tcls_p2321) return tcls_m2321; else {tcls_p2321=T;return tcls_m2321=(tcls_v5012*cos(tcls_v2330));}}
static double tcls_f2320(){if (tcls_p2320) return tcls_m2320; else {tcls_p2320=T;return tcls_m2320=(tcls_v5027+tcls_f2321());}}
static double tcls_f2238(){if (tcls_p2238) return tcls_m2238; else {tcls_p2238=T;return tcls_m2238=(tcls_f2320()-tcls_v5035);}}
static int tcls_f2232(){if (tcls_p2232) return tcls_m2232; else {tcls_p2232=T;return tcls_m2232=((fabs(tcls_f2238())<tcls_v4980)?(fabs(tcls_f2235())<tcls_v4980):NIL);}}
static int tcls_f2226(){if (tcls_p2226) return tcls_m2226; else {tcls_p2226=T;return tcls_m2226=((fabs((((tcls_v4988*tcls_f2320())+(tcls_v4986*tcls_v2327))-tcls_f4983()))<tcls_v4980)?((tcls_v2232=tcls_f2232()),(tcls_v2232?tcls_v2232:(fabs((tcls_v5019-atan2(tcls_f2235(),tcls_f2238())))<tcls_v4980))):NIL);}}
static double tcls_f2319(){if (tcls_p2319) return tcls_m2319; else {tcls_p2319=T;return tcls_m2319=(tcls_v5023+tcls_f2321());}}
static double tcls_f2267(){if (tcls_p2267) return tcls_m2267; else {tcls_p2267=T;return tcls_m2267=(tcls_f2319()-tcls_v5035);}}
static int tcls_f2261(){if (tcls_p2261) return tcls_m2261; else {tcls_p2261=T;return tcls_m2261=((fabs(tcls_f2267())<tcls_v4980)?(fabs(tcls_f2264())<tcls_v4980):NIL);}}
static int tcls_f2255(){if (tcls_p2255) return tcls_m2255; else {tcls_p2255=T;return tcls_m2255=((fabs((((tcls_v4988*tcls_f2319())+(tcls_v4986*tcls_v2326))-tcls_f4983()))<tcls_v4980)?((tcls_v2261=tcls_f2261()),(tcls_v2261?tcls_v2261:(fabs((tcls_v5019-atan2(tcls_f2264(),tcls_f2267())))<tcls_v4980))):NIL);}}
static int tcls_f2222(){if (tcls_p2222) return tcls_m2222; else {tcls_p2222=T;return tcls_m2222=((tcls_v2226=tcls_f2226()),(tcls_v2226?tcls_v2226:tcls_f2255()));}}
static int tcls_f2252(){if (tcls_p2252) return tcls_m2252; else {tcls_p2252=T;return tcls_m2252=(((fabs((tcls_v5035-tcls_f2320()))<tcls_v4980)?(fabs((tcls_v5033-tcls_v2327))<tcls_v4980):NIL)?(tcls_f2255()?NIL:T):NIL);}}
static int tcls_f2223(){if (tcls_p2223) return tcls_m2223; else {tcls_p2223=T;return tcls_m2223=((tcls_v2252=tcls_f2252()),(tcls_v2252?tcls_v2252:(((fabs((tcls_v5035-tcls_f2319()))<tcls_v4980)?(fabs((tcls_v5033-tcls_v2326))<tcls_v4980):NIL)?(tcls_f2226()?NIL:T):NIL)));}}
static double tcls_f2310(){if (tcls_p2310) return tcls_m2310; else {tcls_p2310=T;return tcls_m2310=((tcls_f2319()-tcls_f2320())/tcls_v2325);}}
static int tcls_f2316(){if (tcls_p2316) return tcls_m2316; else {tcls_p2316=T;return tcls_m2316=(fabs((tcls_f2320()-tcls_f2319()))<tcls_v4980);}}
static double tcls_f2295(){if (tcls_p2295) return tcls_m2295; else {tcls_p2295=T;return tcls_m2295=(tcls_v2323?(tcls_f2316()?tcls_f2314():tcls_v2327):(tcls_f2320()+(tcls_f2310()*tcls_v2327)));}}
static double tcls_f2293(){if (tcls_p2293) return tcls_m2293; else {tcls_p2293=T;return tcls_m2293=((tcls_f4983()*tcls_v2309)-(tcls_v4986*tcls_f2295()));}}
static double tcls_f2219(){if (tcls_p2219) return tcls_m2219; else {tcls_p2219=T;return tcls_m2219=(tcls_f2293()/tcls_v2303);}}
static double tcls_f2211(){if (tcls_p2211) return tcls_m2211; else {tcls_p2211=T;return tcls_m2211=(tcls_f2219()-tcls_v5035);}}
static double tcls_f2287(){if (tcls_p2287) return tcls_m2287; else {tcls_p2287=T;return tcls_m2287=((tcls_v4988*tcls_f2295())-(tcls_f4983()*tcls_v2305));}}
static double tcls_f2217(){if (tcls_p2217) return tcls_m2217; else {tcls_p2217=T;return tcls_m2217=(tcls_f2287()/tcls_v2303);}}
static double tcls_f2208(){if (tcls_p2208) return tcls_m2208; else {tcls_p2208=T;return tcls_m2208=(tcls_f2217()-tcls_v5033);}}
static int tcls_f2205(){if (tcls_p2205) return tcls_m2205; else {tcls_p2205=T;return tcls_m2205=((fabs(tcls_f2211())<tcls_v4980)?(fabs(tcls_f2208())<tcls_v4980):NIL);}}
static int tcls_f2282(){if (tcls_p2282) return tcls_m2282; else {tcls_p2282=T;return tcls_m2282=((fabs((tcls_f2293()-(0.0)))<tcls_v4980)?(fabs((tcls_f2287()-(0.0)))<tcls_v4980):NIL);}}
static int tcls_f2220(){if (tcls_p2220) return tcls_m2220; else {tcls_p2220=T;return tcls_m2220=(tcls_v2300?tcls_f2282():T);}}
static int tcls_f2173(){if (tcls_p2173) return tcls_m2173; else {tcls_p2173=T;return tcls_m2173=(tcls_f2220()?((tcls_v2300?NIL:((fabs((((tcls_v4988*tcls_f2219())+(tcls_v4986*tcls_f2217()))-tcls_f4983()))<tcls_v4980)?((tcls_v2205=tcls_f2205()),(tcls_v2205?tcls_v2205:(fabs((tcls_v5019-atan2(tcls_f2208(),tcls_f2211())))<tcls_v4980))):NIL))?(tcls_v2300?NIL:((tcls_v2219=tcls_f2219()),(tcls_v2217=tcls_f2217()),((fabs((((tcls_v2305*tcls_v2219)+(tcls_v2309*tcls_v2217))-tcls_f2295()))<tcls_v4980)?((tcls_v2320=tcls_f2320()),(tcls_v2319=tcls_f2319()),((((((tcls_v2320<tcls_v2319)?tcls_v2320:tcls_v2319)-tcls_v4980)<=tcls_v2219)&&(tcls_v2219<=(((tcls_v2320>tcls_v2319)?tcls_v2320:tcls_v2319)+tcls_v4980)))?(((((tcls_v2327<tcls_v2326)?tcls_v2327:tcls_v2326)-tcls_v4980)<=tcls_v2217)&&(tcls_v2217<=(((tcls_v2327>tcls_v2326)?tcls_v2327:tcls_v2326)+tcls_v4980))):NIL)):NIL))):NIL):NIL);}}
static int tcls_f2163(){if (tcls_p2163) return tcls_m2163; else {tcls_p2163=T;return tcls_m2163=(tcls_v2281?tcls_f2223():(tcls_f2173()?(tcls_v2300?NIL:T):NIL));}}
static double tcls_f2156(){if (tcls_p2156) return tcls_m2156; else {tcls_p2156=T;return tcls_m2156=(tcls_v5035-(tcls_v2281?(tcls_f2223()?tcls_v5035:tcls_f2161()):(tcls_f2173()?(tcls_v2300?tcls_f2161():tcls_f2219()):tcls_f2161())));}}
static double tcls_f2150(){if (tcls_p2150) return tcls_m2150; else {tcls_p2150=T;return tcls_m2150=(tcls_v5033-(tcls_v2281?(tcls_f2223()?tcls_v5033:tcls_f2161()):(tcls_f2173()?(tcls_v2300?tcls_f2161():tcls_f2217()):tcls_f2161())));}}
static double tcls_f2144(){if (tcls_p2144) return tcls_m2144; else {tcls_p2144=T;return tcls_m2144=(tcls_f2163()?((tcls_v2156=tcls_f2156()),(tcls_v2150=tcls_f2150()),sqrt(((tcls_v2156*tcls_v2156)+(tcls_v2150*tcls_v2150)))):tcls_f2145());}}
static double tcls_f217(){if (tcls_p217) return tcls_m217; else {tcls_p217=T;return tcls_m217=((tcls_v2144=tcls_f2144()),(tcls_v1351=tcls_f1351()),((tcls_v2144<tcls_v1351)?tcls_v2144:tcls_v1351));}}
static double tcls_f213(){if (tcls_p213) return tcls_m213; else {tcls_p213=T;return tcls_m213=(tcls_f1263()?((tcls_v2144=tcls_f2144()),(tcls_v1304=tcls_f1304()),((tcls_v2144<tcls_v1304)?tcls_v2144:tcls_v1304)):tcls_f828());}}
static double tcls_f235(){if (tcls_p235) return tcls_m235; else {tcls_p235=T;return tcls_m235=(tcls_f1689()?(tcls_f1634()?(tcls_f1612()?(tcls_f1554()?(tcls_f1553()?((tcls_v2144=tcls_f2144()),(tcls_v827=tcls_f827()),((tcls_v2144<tcls_v827)?tcls_v2144:tcls_v827)):(tcls_f1556()?((tcls_v2144=tcls_f2144()),(tcls_v1603=tcls_f1603()),((tcls_v2144<tcls_v1603)?tcls_v2144:tcls_v1603)):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828());}}
static double tcls_f231(){if (tcls_p231) return tcls_m231; else {tcls_p231=T;return tcls_m231=((tcls_v2144=tcls_f2144()),(tcls_v1504=tcls_f1504()),((tcls_v2144<tcls_v1504)?tcls_v2144:tcls_v1504));}}
static double tcls_f227(){if (tcls_p227) return tcls_m227; else {tcls_p227=T;return tcls_m227=(tcls_f1424()?((tcls_v2144=tcls_f2144()),(tcls_v1459=tcls_f1459()),((tcls_v2144<tcls_v1459)?tcls_v2144:tcls_v1459)):tcls_f828());}}
static double tcls_f176(){if (tcls_p176) return tcls_m176; else {tcls_p176=T;return tcls_m176=((tcls_v2144=tcls_f2144()),(tcls_v929=tcls_f929()),((tcls_v2144<tcls_v929)?tcls_v2144:tcls_v929));}}
static double tcls_f172(){if (tcls_p172) return tcls_m172; else {tcls_p172=T;return tcls_m172=(tcls_f841()?((tcls_v2144=tcls_f2144()),(tcls_v882=tcls_f882()),((tcls_v2144<tcls_v882)?tcls_v2144:tcls_v882)):tcls_f828());}}
static double tcls_f194(){if (tcls_p194) return tcls_m194; else {tcls_p194=T;return tcls_m194=(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?((tcls_v2144=tcls_f2144()),(tcls_v826=tcls_f826()),((tcls_v2144<tcls_v826)?tcls_v2144:tcls_v826)):(tcls_f1130()?((tcls_v2144=tcls_f2144()),(tcls_v1175=tcls_f1175()),((tcls_v2144<tcls_v1175)?tcls_v2144:tcls_v1175)):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828());}}
static double tcls_f190(){if (tcls_p190) return tcls_m190; else {tcls_p190=T;return tcls_m190=((tcls_v2144=tcls_f2144()),(tcls_v1079=tcls_f1079()),((tcls_v2144<tcls_v1079)?tcls_v2144:tcls_v1079));}}
static double tcls_f186(){if (tcls_p186) return tcls_m186; else {tcls_p186=T;return tcls_m186=(tcls_f999()?((tcls_v2144=tcls_f2144()),(tcls_v1034=tcls_f1034()),((tcls_v2144<tcls_v1034)?tcls_v2144:tcls_v1034)):tcls_f828());}}
static int tcls_f1734(){if (tcls_p1734) return tcls_m1734; else {tcls_p1734=T;return tcls_m1734=(tcls_f2144()<tcls_f1743());}}
static int tcls_f2141(){if (tcls_p2141) return tcls_m2141; else {tcls_p2141=T;return tcls_m2141=(fabs((tcls_f2144()-(0.0)))<tcls_v4980);}}
static int tcls_f1923(){if (tcls_p1923) return tcls_m1923; else {tcls_p1923=T;return tcls_m1923=((tcls_v2141=tcls_f2141()),(tcls_v2141?tcls_f1925():(tcls_v2141?NIL:T)));}}
static double tcls_f565(){if (tcls_p565) return tcls_m565; else {tcls_p565=T;return tcls_m565=(tcls_v2166?(tcls_f1923()?(tcls_f1736()?(tcls_f1761()?(tcls_f1738()?(tcls_f1734()?tcls_f2144():tcls_f1743()):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828());}}
static double tcls_f302(){if (tcls_p302) return tcls_m302; else {tcls_p302=T;return tcls_m302=((tcls_v565=tcls_f565()),(tcls_v1351=tcls_f1351()),((tcls_v565<tcls_v1351)?tcls_v565:tcls_v1351));}}
static double tcls_f298(){if (tcls_p298) return tcls_m298; else {tcls_p298=T;return tcls_m298=(tcls_f1263()?((tcls_v565=tcls_f565()),(tcls_v1304=tcls_f1304()),((tcls_v565<tcls_v1304)?tcls_v565:tcls_v1304)):tcls_f828());}}
static double tcls_f320(){if (tcls_p320) return tcls_m320; else {tcls_p320=T;return tcls_m320=(tcls_f1689()?(tcls_f1634()?(tcls_f1612()?(tcls_f1554()?(tcls_f1553()?((tcls_v565=tcls_f565()),(tcls_v827=tcls_f827()),((tcls_v565<tcls_v827)?tcls_v565:tcls_v827)):(tcls_f1556()?((tcls_v565=tcls_f565()),(tcls_v1603=tcls_f1603()),((tcls_v565<tcls_v1603)?tcls_v565:tcls_v1603)):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828());}}
static double tcls_f316(){if (tcls_p316) return tcls_m316; else {tcls_p316=T;return tcls_m316=((tcls_v565=tcls_f565()),(tcls_v1504=tcls_f1504()),((tcls_v565<tcls_v1504)?tcls_v565:tcls_v1504));}}
static double tcls_f312(){if (tcls_p312) return tcls_m312; else {tcls_p312=T;return tcls_m312=(tcls_f1424()?((tcls_v565=tcls_f565()),(tcls_v1459=tcls_f1459()),((tcls_v565<tcls_v1459)?tcls_v565:tcls_v1459)):tcls_f828());}}
static double tcls_f261(){if (tcls_p261) return tcls_m261; else {tcls_p261=T;return tcls_m261=((tcls_v565=tcls_f565()),(tcls_v929=tcls_f929()),((tcls_v565<tcls_v929)?tcls_v565:tcls_v929));}}
static double tcls_f257(){if (tcls_p257) return tcls_m257; else {tcls_p257=T;return tcls_m257=(tcls_f841()?((tcls_v565=tcls_f565()),(tcls_v882=tcls_f882()),((tcls_v565<tcls_v882)?tcls_v565:tcls_v882)):tcls_f828());}}
static double tcls_f279(){if (tcls_p279) return tcls_m279; else {tcls_p279=T;return tcls_m279=(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?(tcls_f1129()?(tcls_f1128()?((tcls_v565=tcls_f565()),(tcls_v826=tcls_f826()),((tcls_v565<tcls_v826)?tcls_v565:tcls_v826)):(tcls_f1130()?((tcls_v565=tcls_f565()),(tcls_v1175=tcls_f1175()),((tcls_v565<tcls_v1175)?tcls_v565:tcls_v1175)):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()):tcls_f828());}}
static double tcls_f275(){if (tcls_p275) return tcls_m275; else {tcls_p275=T;return tcls_m275=((tcls_v565=tcls_f565()),(tcls_v1079=tcls_f1079()),((tcls_v565<tcls_v1079)?tcls_v565:tcls_v1079));}}
static double tcls_f271(){if (tcls_p271) return tcls_m271; else {tcls_p271=T;return tcls_m271=(tcls_f999()?((tcls_v565=tcls_f565()),(tcls_v1034=tcls_f1034()),((tcls_v565<tcls_v1034)?tcls_v565:tcls_v1034)):tcls_f828());}}
void tcls(tcls_a5035,tcls_a5033,tcls_a5031,tcls_a5029,tcls_a5027,tcls_a5025,tcls_a5023,tcls_a5021,tcls_a5019,tcls_a4980)
double tcls_a5035;
double tcls_a5033;
double tcls_a5031;
double tcls_a5029;
double tcls_a5027;
double tcls_a5025;
double tcls_a5023;
double tcls_a5021;
double tcls_a5019;
double tcls_a4980;
{ tcls_v5035=tcls_a5035;
  tcls_v5033=tcls_a5033;
  tcls_v5031=tcls_a5031;
  tcls_v5029=tcls_a5029;
  tcls_v5027=tcls_a5027;
  tcls_v5025=tcls_a5025;
  tcls_v5023=tcls_a5023;
  tcls_v5021=tcls_a5021;
  tcls_v5019=tcls_a5019;
  tcls_v4980=tcls_a4980;
  tcls_p828=NIL;
  tcls_p1610=NIL;
  tcls_p1593=NIL;
  tcls_p1723=NIL;
  tcls_p1722=NIL;
  tcls_p1666=NIL;
  tcls_p1681=NIL;
  tcls_p1708=NIL;
  tcls_p1721=NIL;
  tcls_p1720=NIL;
  tcls_p1719=NIL;
  tcls_p1659=NIL;
  tcls_p1657=NIL;
  tcls_p1663=NIL;
  tcls_p1413=NIL;
  tcls_p1406=NIL;
  tcls_p1680=NIL;
  tcls_p1679=NIL;
  tcls_p1686=NIL;
  tcls_p1120=NIL;
  tcls_p1053=NIL;
  tcls_p1074=NIL;
  tcls_p1073=NIL;
  tcls_p1070=NIL;
  tcls_p1063=NIL;
  tcls_p1069=NIL;
  tcls_p1082=NIL;
  tcls_p1081=NIL;
  tcls_p1111=NIL;
  tcls_p1109=NIL;
  tcls_p1119=NIL;
  tcls_p1220=NIL;
  tcls_p990=NIL;
  tcls_p983=NIL;
  tcls_p1219=NIL;
  tcls_p1232=NIL;
  tcls_p1707=NIL;
  tcls_p1706=NIL;
  tcls_p1647=NIL;
  tcls_p1646=NIL;
  tcls_p1214=NIL;
  tcls_p1641=NIL;
  tcls_p1705=NIL;
  tcls_p1700=NIL;
  tcls_p1710=NIL;
  tcls_p1236=NIL;
  tcls_p1227=NIL;
  tcls_p1645=NIL;
  tcls_p1545=NIL;
  tcls_p1478=NIL;
  tcls_p1499=NIL;
  tcls_p1498=NIL;
  tcls_p1495=NIL;
  tcls_p1488=NIL;
  tcls_p1494=NIL;
  tcls_p1507=NIL;
  tcls_p1506=NIL;
  tcls_p1536=NIL;
  tcls_p1534=NIL;
  tcls_p1544=NIL;
  tcls_p1665=NIL;
  tcls_p1415=NIL;
  tcls_p1405=NIL;
  tcls_p1664=NIL;
  tcls_p1678=NIL;
  tcls_p1685=NIL;
  tcls_p1673=NIL;
  tcls_p1718=NIL;
  tcls_p1655=NIL;
  tcls_p1209=NIL;
  tcls_p1205=NIL;
  tcls_p1653=NIL;
  tcls_p1203=NIL;
  tcls_p1181=NIL;
  tcls_p1195=NIL;
  tcls_p1201=NIL;
  tcls_p1179=NIL;
  tcls_p1192=NIL;
  tcls_p1189=NIL;
  tcls_p1633=NIL;
  tcls_p1609=NIL;
  tcls_p1625=NIL;
  tcls_p1650=NIL;
  tcls_p1204=NIL;
  tcls_p1182=NIL;
  tcls_p1171=NIL;
  tcls_p1175=NIL;
  tcls_p1172=NIL;
  tcls_p1555=NIL;
  tcls_p1639=NIL;
  tcls_p1631=NIL;
  tcls_p1607=NIL;
  tcls_p1603=NIL;
  tcls_p1600=NIL;
  tcls_p1622=NIL;
  tcls_p1619=NIL;
  tcls_p1612=NIL;
  tcls_p1635=NIL;
  tcls_p1634=NIL;
  tcls_p1599=NIL;
  tcls_p1716=NIL;
  tcls_p1249=NIL;
  tcls_p1244=NIL;
  tcls_p1713=NIL;
  tcls_p1702=NIL;
  tcls_p1696=NIL;
  tcls_p1919=NIL;
  tcls_p1917=NIL;
  tcls_p1916=NIL;
  tcls_p1830=NIL;
  tcls_p1915=NIL;
  tcls_p1858=NIL;
  tcls_p1914=NIL;
  tcls_p1912=NIL;
  tcls_p1910=NIL;
  tcls_p1909=NIL;
  tcls_p1833=NIL;
  tcls_p1827=NIL;
  tcls_p1908=NIL;
  tcls_p1861=NIL;
  tcls_p1855=NIL;
  tcls_p1902=NIL;
  tcls_p1905=NIL;
  tcls_p1957=NIL;
  tcls_p1170=NIL;
  tcls_p1169=NIL;
  tcls_p1598=NIL;
  tcls_p1597=NIL;
  tcls_p1941=NIL;
  tcls_p1168=NIL;
  tcls_p1160=NIL;
  tcls_p1167=NIL;
  tcls_p1153=NIL;
  tcls_p1165=NIL;
  tcls_p1159=NIL;
  tcls_p1143=NIL;
  tcls_p1152=NIL;
  tcls_p1138=NIL;
  tcls_p1130=NIL;
  tcls_p826=NIL;
  tcls_p796=NIL;
  tcls_p31=NIL;
  tcls_p1129=NIL;
  tcls_p1128=NIL;
  tcls_p1596=NIL;
  tcls_p1586=NIL;
  tcls_p1595=NIL;
  tcls_p1579=NIL;
  tcls_p1591=NIL;
  tcls_p1585=NIL;
  tcls_p1569=NIL;
  tcls_p1578=NIL;
  tcls_p1564=NIL;
  tcls_p1556=NIL;
  tcls_p827=NIL;
  tcls_p825=NIL;
  tcls_p823=NIL;
  tcls_p61=NIL;
  tcls_p1554=NIL;
  tcls_p1553=NIL;
  tcls_p4493=NIL;
  tcls_p4491=NIL;
  tcls_p4484=NIL;
  tcls_p4482=NIL;
  tcls_p2117=NIL;
  tcls_p1237=NIL;
  tcls_p816=NIL;
  tcls_p790=NIL;
  tcls_p557=NIL;
  tcls_p535=NIL;
  tcls_p25=NIL;
  tcls_p1221=NIL;
  tcls_p1124=NIL;
  tcls_p1689=NIL;
  tcls_p55=NIL;
  tcls_p1667=NIL;
  tcls_p1549=NIL;
  tcls_p4624=NIL;
  tcls_p1217=NIL;
  tcls_p1216=NIL;
  tcls_p1123=NIL;
  tcls_p1100=NIL;
  tcls_p1030=NIL;
  tcls_p1029=NIL;
  tcls_p1026=NIL;
  tcls_p1020=NIL;
  tcls_p1025=NIL;
  tcls_p1011=NIL;
  tcls_p1019=NIL;
  tcls_p1006=NIL;
  tcls_p1037=NIL;
  tcls_p1034=NIL;
  tcls_p807=NIL;
  tcls_p784=NIL;
  tcls_p1031=NIL;
  tcls_p999=NIL;
  tcls_p805=NIL;
  tcls_p782=NIL;
  tcls_p552=NIL;
  tcls_p530=NIL;
  tcls_p21=NIL;
  tcls_p998=NIL;
  tcls_p1094=NIL;
  tcls_p1091=NIL;
  tcls_p1085=NIL;
  tcls_p723=NIL;
  tcls_p1122=NIL;
  tcls_p1075=NIL;
  tcls_p1072=NIL;
  tcls_p1067=NIL;
  tcls_p1060=NIL;
  tcls_p1066=NIL;
  tcls_p1050=NIL;
  tcls_p1059=NIL;
  tcls_p1045=NIL;
  tcls_p1084=NIL;
  tcls_p1079=NIL;
  tcls_p810=NIL;
  tcls_p809=NIL;
  tcls_p555=NIL;
  tcls_p787=NIL;
  tcls_p786=NIL;
  tcls_p533=NIL;
  tcls_p813=NIL;
  tcls_p812=NIL;
  tcls_p789=NIL;
  tcls_p1076=NIL;
  tcls_p1038=NIL;
  tcls_p24=NIL;
  tcls_p1114=NIL;
  tcls_p1108=NIL;
  tcls_p1102=NIL;
  tcls_p1412=NIL;
  tcls_p986=NIL;
  tcls_p985=NIL;
  tcls_p981=NIL;
  tcls_p956=NIL;
  tcls_p877=NIL;
  tcls_p885=NIL;
  tcls_p944=NIL;
  tcls_p955=NIL;
  tcls_p953=NIL;
  tcls_p878=NIL;
  tcls_p875=NIL;
  tcls_p870=NIL;
  tcls_p863=NIL;
  tcls_p869=NIL;
  tcls_p853=NIL;
  tcls_p862=NIL;
  tcls_p848=NIL;
  tcls_p887=NIL;
  tcls_p882=NIL;
  tcls_p683=NIL;
  tcls_p667=NIL;
  tcls_p879=NIL;
  tcls_p841=NIL;
  tcls_p681=NIL;
  tcls_p665=NIL;
  tcls_p436=NIL;
  tcls_p423=NIL;
  tcls_p11=NIL;
  tcls_p840=NIL;
  tcls_p947=NIL;
  tcls_p941=NIL;
  tcls_p935=NIL;
  tcls_p606=NIL;
  tcls_p979=NIL;
  tcls_p924=NIL;
  tcls_p932=NIL;
  tcls_p967=NIL;
  tcls_p978=NIL;
  tcls_p976=NIL;
  tcls_p925=NIL;
  tcls_p922=NIL;
  tcls_p917=NIL;
  tcls_p910=NIL;
  tcls_p916=NIL;
  tcls_p900=NIL;
  tcls_p909=NIL;
  tcls_p895=NIL;
  tcls_p934=NIL;
  tcls_p929=NIL;
  tcls_p686=NIL;
  tcls_p685=NIL;
  tcls_p439=NIL;
  tcls_p670=NIL;
  tcls_p669=NIL;
  tcls_p426=NIL;
  tcls_p689=NIL;
  tcls_p688=NIL;
  tcls_p672=NIL;
  tcls_p926=NIL;
  tcls_p888=NIL;
  tcls_p14=NIL;
  tcls_p970=NIL;
  tcls_p964=NIL;
  tcls_p958=NIL;
  tcls_p831=NIL;
  tcls_p830=NIL;
  tcls_p1409=NIL;
  tcls_p1408=NIL;
  tcls_p1403=NIL;
  tcls_p1378=NIL;
  tcls_p1299=NIL;
  tcls_p1307=NIL;
  tcls_p1366=NIL;
  tcls_p1377=NIL;
  tcls_p1375=NIL;
  tcls_p1300=NIL;
  tcls_p1297=NIL;
  tcls_p1292=NIL;
  tcls_p1285=NIL;
  tcls_p1291=NIL;
  tcls_p1275=NIL;
  tcls_p1284=NIL;
  tcls_p1270=NIL;
  tcls_p1309=NIL;
  tcls_p1304=NIL;
  tcls_p590=NIL;
  tcls_p353=NIL;
  tcls_p349=NIL;
  tcls_p600=NIL;
  tcls_p598=NIL;
  tcls_p1301=NIL;
  tcls_p1263=NIL;
  tcls_p581=NIL;
  tcls_p340=NIL;
  tcls_p41=NIL;
  tcls_p1262=NIL;
  tcls_p1369=NIL;
  tcls_p1363=NIL;
  tcls_p1357=NIL;
  tcls_p1401=NIL;
  tcls_p1346=NIL;
  tcls_p1354=NIL;
  tcls_p1389=NIL;
  tcls_p1400=NIL;
  tcls_p1398=NIL;
  tcls_p1347=NIL;
  tcls_p1344=NIL;
  tcls_p1339=NIL;
  tcls_p1332=NIL;
  tcls_p1338=NIL;
  tcls_p1322=NIL;
  tcls_p1331=NIL;
  tcls_p1317=NIL;
  tcls_p1356=NIL;
  tcls_p1351=NIL;
  tcls_p611=NIL;
  tcls_p377=NIL;
  tcls_p373=NIL;
  tcls_p621=NIL;
  tcls_p619=NIL;
  tcls_p602=NIL;
  tcls_p365=NIL;
  tcls_p648=NIL;
  tcls_p637=NIL;
  tcls_p635=NIL;
  tcls_p634=NIL;
  tcls_p399=NIL;
  tcls_p632=NIL;
  tcls_p630=NIL;
  tcls_p396=NIL;
  tcls_p647=NIL;
  tcls_p645=NIL;
  tcls_p1348=NIL;
  tcls_p1310=NIL;
  tcls_p44=NIL;
  tcls_p1392=NIL;
  tcls_p1386=NIL;
  tcls_p1380=NIL;
  tcls_p1661=NIL;
  tcls_p1660=NIL;
  tcls_p1548=NIL;
  tcls_p1525=NIL;
  tcls_p1455=NIL;
  tcls_p1454=NIL;
  tcls_p1451=NIL;
  tcls_p1445=NIL;
  tcls_p1450=NIL;
  tcls_p1436=NIL;
  tcls_p1444=NIL;
  tcls_p1431=NIL;
  tcls_p1462=NIL;
  tcls_p1459=NIL;
  tcls_p717=NIL;
  tcls_p715=NIL;
  tcls_p707=NIL;
  tcls_p460=NIL;
  tcls_p456=NIL;
  tcls_p1456=NIL;
  tcls_p1424=NIL;
  tcls_p698=NIL;
  tcls_p447=NIL;
  tcls_p51=NIL;
  tcls_p1423=NIL;
  tcls_p1519=NIL;
  tcls_p1516=NIL;
  tcls_p1510=NIL;
  tcls_p1547=NIL;
  tcls_p1500=NIL;
  tcls_p1497=NIL;
  tcls_p1492=NIL;
  tcls_p1485=NIL;
  tcls_p1491=NIL;
  tcls_p1475=NIL;
  tcls_p1484=NIL;
  tcls_p1470=NIL;
  tcls_p1509=NIL;
  tcls_p1504=NIL;
  tcls_p738=NIL;
  tcls_p736=NIL;
  tcls_p728=NIL;
  tcls_p719=NIL;
  tcls_p484=NIL;
  tcls_p480=NIL;
  tcls_p472=NIL;
  tcls_p765=NIL;
  tcls_p764=NIL;
  tcls_p762=NIL;
  tcls_p754=NIL;
  tcls_p752=NIL;
  tcls_p751=NIL;
  tcls_p506=NIL;
  tcls_p749=NIL;
  tcls_p747=NIL;
  tcls_p503=NIL;
  tcls_p1501=NIL;
  tcls_p1463=NIL;
  tcls_p54=NIL;
  tcls_p1539=NIL;
  tcls_p1533=NIL;
  tcls_p1527=NIL;
  tcls_p1253=NIL;
  tcls_p332=NIL;
  tcls_p4642=NIL;
  tcls_p4647=NIL;
  tcls_p4645=NIL;
  tcls_p4640=NIL;
  tcls_p2145=NIL;
  tcls_p2161=NIL;
  tcls_p2264=NIL;
  tcls_p2235=NIL;
  tcls_p4983=NIL;
  tcls_p1821=NIL;
  tcls_p1849=NIL;
  tcls_p1817=NIL;
  tcls_p1847=NIL;
  tcls_p1818=NIL;
  tcls_p2314=NIL;
  tcls_p1888=NIL;
  tcls_p1901=NIL;
  tcls_p1886=NIL;
  tcls_p1898=NIL;
  tcls_p1880=NIL;
  tcls_p1876=NIL;
  tcls_p1896=NIL;
  tcls_p1814=NIL;
  tcls_p1806=NIL;
  tcls_p1812=NIL;
  tcls_p1803=NIL;
  tcls_p1800=NIL;
  tcls_p1893=NIL;
  tcls_p1875=NIL;
  tcls_p1815=NIL;
  tcls_p1768=NIL;
  tcls_p1761=NIL;
  tcls_p1758=NIL;
  tcls_p1753=NIL;
  tcls_p1747=NIL;
  tcls_p1743=NIL;
  tcls_p129=NIL;
  tcls_p125=NIL;
  tcls_p147=NIL;
  tcls_p143=NIL;
  tcls_p139=NIL;
  tcls_p88=NIL;
  tcls_p84=NIL;
  tcls_p106=NIL;
  tcls_p102=NIL;
  tcls_p98=NIL;
  tcls_p1740=NIL;
  tcls_p2136=NIL;
  tcls_p2139=NIL;
  tcls_p2138=NIL;
  tcls_p2115=NIL;
  tcls_p2125=NIL;
  tcls_p2135=NIL;
  tcls_p2133=NIL;
  tcls_p2027=NIL;
  tcls_p2020=NIL;
  tcls_p2026=NIL;
  tcls_p2095=NIL;
  tcls_p2093=NIL;
  tcls_p2114=NIL;
  tcls_p2113=NIL;
  tcls_p2083=NIL;
  tcls_p2081=NIL;
  tcls_p2124=NIL;
  tcls_p2091=NIL;
  tcls_p2089=NIL;
  tcls_p2069=NIL;
  tcls_p2086=NIL;
  tcls_p2075=NIL;
  tcls_p2067=NIL;
  tcls_p2057=NIL;
  tcls_p2071=NIL;
  tcls_p2070=NIL;
  tcls_p2122=NIL;
  tcls_p2109=NIL;
  tcls_p2103=NIL;
  tcls_p2096=NIL;
  tcls_p1966=NIL;
  tcls_p1950=NIL;
  tcls_p2031=NIL;
  tcls_p2053=NIL;
  tcls_p2129=NIL;
  tcls_p2047=NIL;
  tcls_p2004=NIL;
  tcls_p2132=NIL;
  tcls_p2038=NIL;
  tcls_p1931=NIL;
  tcls_p2131=NIL;
  tcls_p2050=NIL;
  tcls_p2003=NIL;
  tcls_p2130=NIL;
  tcls_p2043=NIL;
  tcls_p2001=NIL;
  tcls_p1999=NIL;
  tcls_p1998=NIL;
  tcls_p1996=NIL;
  tcls_p1987=NIL;
  tcls_p1985=NIL;
  tcls_p1984=NIL;
  tcls_p1982=NIL;
  tcls_p1973=NIL;
  tcls_p2042=NIL;
  tcls_p2127=NIL;
  tcls_p2030=NIL;
  tcls_p2016=NIL;
  tcls_p2008=NIL;
  tcls_p2029=NIL;
  tcls_p2018=NIL;
  tcls_p2126=NIL;
  tcls_p2040=NIL;
  tcls_p1970=NIL;
  tcls_p1936=NIL;
  tcls_p1925=NIL;
  tcls_p1738=NIL;
  tcls_p1736=NIL;
  tcls_p1735=NIL;
  tcls_p2321=NIL;
  tcls_p2320=NIL;
  tcls_p2238=NIL;
  tcls_p2232=NIL;
  tcls_p2226=NIL;
  tcls_p2319=NIL;
  tcls_p2267=NIL;
  tcls_p2261=NIL;
  tcls_p2255=NIL;
  tcls_p2222=NIL;
  tcls_p2252=NIL;
  tcls_p2223=NIL;
  tcls_p2310=NIL;
  tcls_p2316=NIL;
  tcls_p2295=NIL;
  tcls_p2293=NIL;
  tcls_p2219=NIL;
  tcls_p2211=NIL;
  tcls_p2287=NIL;
  tcls_p2217=NIL;
  tcls_p2208=NIL;
  tcls_p2205=NIL;
  tcls_p2282=NIL;
  tcls_p2220=NIL;
  tcls_p2173=NIL;
  tcls_p2163=NIL;
  tcls_p2156=NIL;
  tcls_p2150=NIL;
  tcls_p2144=NIL;
  tcls_p217=NIL;
  tcls_p213=NIL;
  tcls_p235=NIL;
  tcls_p231=NIL;
  tcls_p227=NIL;
  tcls_p176=NIL;
  tcls_p172=NIL;
  tcls_p194=NIL;
  tcls_p190=NIL;
  tcls_p186=NIL;
  tcls_p1734=NIL;
  tcls_p2141=NIL;
  tcls_p1923=NIL;
  tcls_p565=NIL;
  tcls_p302=NIL;
  tcls_p298=NIL;
  tcls_p320=NIL;
  tcls_p316=NIL;
  tcls_p312=NIL;
  tcls_p261=NIL;
  tcls_p257=NIL;
  tcls_p279=NIL;
  tcls_p275=NIL;
  tcls_p271=NIL;
  double_or_symbol_result=((tcls_v4988=sin(tcls_v5019)),(tcls_v4987=cos(tcls_v5019)),(tcls_v4986=(-tcls_v4987)),(tcls_v5017=(tcls_v5035-tcls_v5031)),(tcls_v5015=(tcls_v5033-tcls_v5029)),(tcls_v5012=sqrt(((tcls_v5017*tcls_v5017)+(tcls_v5015*tcls_v5015)))),(tcls_v5010=(tcls_v5023-tcls_v5027)),(tcls_v5009=atan2((tcls_v5021-tcls_v5025),tcls_v5010)),(tcls_v2330=normalize_rotation((tcls_v5009+(1.5707963267948966)))),(tcls_v2328=(tcls_v5012*sin(tcls_v2330))),(tcls_v2327=(tcls_v5025+tcls_v2328)),(tcls_v2326=(tcls_v5021+tcls_v2328)),(tcls_v2325=(tcls_v2327-tcls_v2326)),(tcls_v2323=(fabs(tcls_v2325)<tcls_v4980)),(tcls_v2309=(tcls_v2323?(tcls_f2316()?tcls_f2314():(1.0)):tcls_f2310())),(tcls_v2305=(tcls_v2323?(tcls_f2316()?tcls_f2314():(0.0)):(1.0))),(tcls_v2303=((tcls_v4988*tcls_v2309)-(tcls_v4986*tcls_v2305))),(tcls_v2300=(fabs((tcls_v2303-(0.0)))<tcls_v4980)),(tcls_v2281=(tcls_v2300?tcls_f2282():NIL)),(tcls_v2166=((tcls_v2281?(tcls_f2223()?T:tcls_f2222()):(tcls_f2173()?tcls_f2220():NIL))?((tcls_v2281?(tcls_f2223()?NIL:tcls_f2222()):(tcls_f2173()?tcls_v2281:NIL))?NIL:T):NIL)),(tcls_v1921=(tcls_v2166?(tcls_f1923()?tcls_f2163():NIL):NIL)),((tcls_v1921?(tcls_f1735()?(tcls_v2166?(tcls_f1923()?(tcls_f1736()?(tcls_f1761()?(tcls_f1738()?(tcls_f1734()?tcls_f2163():tcls_f1758()):NIL):NIL):NIL):NIL):NIL):tcls_v1921):tcls_f1735())?((tcls_v1253=tcls_f1253()),((tcls_v1253?(tcls_f830()?(tcls_f1667()?(tcls_f1666()?(tcls_f1660()?(tcls_f1689()?(tcls_f1634()?(tcls_f1612()?((tcls_v1554=tcls_f1554()),(tcls_v1554?(tcls_f1553()?(tcls_f831()?(tcls_f1221()?(tcls_f1216()?tcls_f816():(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f812()?tcls_v1554:tcls_f999()):tcls_f809()):tcls_f805()):(tcls_f1038()?tcls_f809():NIL)):(tcls_f1085()?tcls_f805():NIL))):NIL):NIL):(tcls_f1556()?(tcls_f831()?(tcls_f1221()?(tcls_f1216()?tcls_f790():(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f789()?tcls_f1555():tcls_f999()):tcls_f786()):tcls_f782()):(tcls_f1038()?tcls_f786():NIL)):(tcls_f1085()?tcls_f782():NIL))):NIL):NIL):NIL)):NIL)):NIL):NIL):NIL):(tcls_f1527()?(tcls_f1510()?(tcls_f1463()?(tcls_f1423()?(tcls_f831()?(tcls_f1221()?(tcls_f1216()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?(tcls_f1128()?(tcls_f764()?tcls_f1424():tcls_v1129):(tcls_f1130()?(tcls_f762()?tcls_f1424():tcls_f1555()):NIL)):NIL)):NIL):NIL):NIL):(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?(tcls_f754()?tcls_f1424():tcls_f999()):tcls_f751()):tcls_f747()):(tcls_f1038()?tcls_f751():NIL)):(tcls_f1085()?tcls_f747():NIL))):NIL):NIL):tcls_f719()):tcls_f698()):(tcls_f1463()?tcls_f719():NIL)):(tcls_f1510()?tcls_f698():NIL))):(tcls_f1408()?(tcls_f1689()?(tcls_f1634()?(tcls_f1612()?((tcls_v1554=tcls_f1554()),(tcls_v1554?(tcls_f1553()?(tcls_f831()?(tcls_f1221()?(tcls_f985()?tcls_f816():(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f688()?tcls_v1554:tcls_f841()):tcls_f685()):tcls_f681()):(tcls_f888()?tcls_f685():NIL)):(tcls_f935()?tcls_f681():NIL))):NIL):NIL):(tcls_f1556()?(tcls_f831()?(tcls_f1221()?(tcls_f985()?tcls_f790():(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f672()?tcls_f1555():tcls_f841()):tcls_f669()):tcls_f665()):(tcls_f888()?tcls_f669():NIL)):(tcls_f935()?tcls_f665():NIL))):NIL):NIL):NIL)):NIL)):NIL):NIL):NIL):(tcls_f1380()?(tcls_f1357()?(tcls_f1310()?(tcls_f1262()?(tcls_f831()?(tcls_f1221()?(tcls_f985()?(tcls_f1237()?(tcls_f1204()?(tcls_f1182()?((tcls_v1129=tcls_f1129()),(tcls_v1129?(tcls_f1128()?(tcls_f647()?tcls_f1263():tcls_v1129):(tcls_f1130()?(tcls_f645()?tcls_f1263():tcls_f1555()):NIL)):NIL)):NIL):NIL):NIL):(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?(tcls_f637()?tcls_f1263():tcls_f841()):tcls_f634()):tcls_f630()):(tcls_f888()?tcls_f634():NIL)):(tcls_f935()?tcls_f630():NIL))):NIL):NIL):tcls_f602()):tcls_f581()):(tcls_f1310()?tcls_f602():NIL)):(tcls_f1357()?tcls_f581():NIL)))):NIL):tcls_v1253):tcls_f830())?coerce_double_to_double_or_symbol((tcls_v1921?(tcls_f1735()?(tcls_v1253?(tcls_f830()?((tcls_v565=tcls_f565()),(tcls_v332=tcls_f332()),((tcls_v565<tcls_v332)?tcls_v565:tcls_v332)):(tcls_f1667()?(tcls_f1666()?(tcls_f1660()?tcls_f320():(tcls_f1527()?(tcls_f1510()?(tcls_f1463()?(tcls_f1423()?((tcls_v565=tcls_f565()),(tcls_v765=tcls_f765()),((tcls_v565<tcls_v765)?tcls_v565:tcls_v765)):tcls_f316()):tcls_f312()):(tcls_f1463()?tcls_f316():tcls_f828())):(tcls_f1510()?tcls_f312():tcls_f828()))):(tcls_f1408()?tcls_f320():(tcls_f1380()?(tcls_f1357()?(tcls_f1310()?(tcls_f1262()?((tcls_v565=tcls_f565()),(tcls_v648=tcls_f648()),((tcls_v565<tcls_v648)?tcls_v565:tcls_v648)):tcls_f302()):tcls_f298()):(tcls_f1310()?tcls_f302():tcls_f828())):(tcls_f1357()?tcls_f298():tcls_f828())))):tcls_f828())):(tcls_f831()?(tcls_f1221()?(tcls_f1666()?(tcls_f1216()?tcls_f279():(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?((tcls_v565=tcls_f565()),(tcls_v813=tcls_f813()),((tcls_v565<tcls_v813)?tcls_v565:tcls_v813)):tcls_f275()):tcls_f271()):(tcls_f1038()?tcls_f275():tcls_f828())):(tcls_f1085()?tcls_f271():tcls_f828()))):(tcls_f985()?tcls_f279():(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?((tcls_v565=tcls_f565()),(tcls_v689=tcls_f689()),((tcls_v565<tcls_v689)?tcls_v565:tcls_v689)):tcls_f261()):tcls_f257()):(tcls_f888()?tcls_f261():tcls_f828())):(tcls_f935()?tcls_f257():tcls_f828())))):tcls_f828()):tcls_f828())):(tcls_v2166?(tcls_f1923()?(tcls_v1253?(tcls_f830()?((tcls_v2144=tcls_f2144()),(tcls_v332=tcls_f332()),((tcls_v2144<tcls_v332)?tcls_v2144:tcls_v332)):(tcls_f1667()?(tcls_f1666()?(tcls_f1660()?tcls_f235():(tcls_f1527()?(tcls_f1510()?(tcls_f1463()?(tcls_f1423()?((tcls_v2144=tcls_f2144()),(tcls_v765=tcls_f765()),((tcls_v2144<tcls_v765)?tcls_v2144:tcls_v765)):tcls_f231()):tcls_f227()):(tcls_f1463()?tcls_f231():tcls_f828())):(tcls_f1510()?tcls_f227():tcls_f828()))):(tcls_f1408()?tcls_f235():(tcls_f1380()?(tcls_f1357()?(tcls_f1310()?(tcls_f1262()?((tcls_v2144=tcls_f2144()),(tcls_v648=tcls_f648()),((tcls_v2144<tcls_v648)?tcls_v2144:tcls_v648)):tcls_f217()):tcls_f213()):(tcls_f1310()?tcls_f217():tcls_f828())):(tcls_f1357()?tcls_f213():tcls_f828())))):tcls_f828())):(tcls_f831()?(tcls_f1221()?(tcls_f1666()?(tcls_f1216()?tcls_f194():(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?((tcls_v2144=tcls_f2144()),(tcls_v813=tcls_f813()),((tcls_v2144<tcls_v813)?tcls_v2144:tcls_v813)):tcls_f190()):tcls_f186()):(tcls_f1038()?tcls_f190():tcls_f828())):(tcls_f1085()?tcls_f186():tcls_f828()))):(tcls_f985()?tcls_f194():(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?((tcls_v2144=tcls_f2144()),(tcls_v689=tcls_f689()),((tcls_v2144<tcls_v689)?tcls_v2144:tcls_v689)):tcls_f176()):tcls_f172()):(tcls_f888()?tcls_f176():tcls_f828())):(tcls_f935()?tcls_f172():tcls_f828())))):tcls_f828()):tcls_f828())):tcls_f828()):tcls_f828())):(tcls_f1736()?(tcls_f1761()?(tcls_f1738()?(tcls_v1253?(tcls_f830()?((tcls_v1743=tcls_f1743()),(tcls_v332=tcls_f332()),((tcls_v1743<tcls_v332)?tcls_v1743:tcls_v332)):(tcls_f1667()?(tcls_f1666()?(tcls_f1660()?tcls_f147():(tcls_f1527()?(tcls_f1510()?(tcls_f1463()?(tcls_f1423()?((tcls_v1743=tcls_f1743()),(tcls_v765=tcls_f765()),((tcls_v1743<tcls_v765)?tcls_v1743:tcls_v765)):tcls_f143()):tcls_f139()):(tcls_f1463()?tcls_f143():tcls_f828())):(tcls_f1510()?tcls_f139():tcls_f828()))):(tcls_f1408()?tcls_f147():(tcls_f1380()?(tcls_f1357()?(tcls_f1310()?(tcls_f1262()?((tcls_v1743=tcls_f1743()),(tcls_v648=tcls_f648()),((tcls_v1743<tcls_v648)?tcls_v1743:tcls_v648)):tcls_f129()):tcls_f125()):(tcls_f1310()?tcls_f129():tcls_f828())):(tcls_f1357()?tcls_f125():tcls_f828())))):tcls_f828())):(tcls_f831()?(tcls_f1221()?(tcls_f1666()?(tcls_f1216()?tcls_f106():(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?((tcls_v1743=tcls_f1743()),(tcls_v813=tcls_f813()),((tcls_v1743<tcls_v813)?tcls_v1743:tcls_v813)):tcls_f102()):tcls_f98()):(tcls_f1038()?tcls_f102():tcls_f828())):(tcls_f1085()?tcls_f98():tcls_f828()))):(tcls_f985()?tcls_f106():(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?((tcls_v1743=tcls_f1743()),(tcls_v689=tcls_f689()),((tcls_v1743<tcls_v689)?tcls_v1743:tcls_v689)):tcls_f88()):tcls_f84()):(tcls_f888()?tcls_f88():tcls_f828())):(tcls_f935()?tcls_f84():tcls_f828())))):tcls_f828()):tcls_f828())):tcls_f828()):tcls_f828()):tcls_f828()))):(tcls_v1921?(tcls_f1735()?coerce_double_to_double_or_symbol(tcls_f565()):(tcls_v2166?(tcls_f1923()?coerce_double_to_double_or_symbol(tcls_f2144()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))):(tcls_f1736()?(tcls_f1761()?(tcls_f1738()?coerce_double_to_double_or_symbol(tcls_f1743()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))):(tcls_f1253()?(tcls_f830()?coerce_double_to_double_or_symbol(tcls_f332()):(tcls_f1667()?(tcls_f1666()?(tcls_f1660()?tcls_f55():(tcls_f1527()?(tcls_f1510()?(tcls_f1463()?(tcls_f1423()?coerce_double_to_double_or_symbol(tcls_f765()):tcls_f54()):tcls_f51()):(tcls_f1463()?tcls_f54():coerce_symbol_to_double_or_symbol(NIL))):(tcls_f1510()?tcls_f51():coerce_symbol_to_double_or_symbol(NIL)))):(tcls_f1408()?tcls_f55():(tcls_f1380()?(tcls_f1357()?(tcls_f1310()?(tcls_f1262()?coerce_double_to_double_or_symbol(tcls_f648()):tcls_f44()):tcls_f41()):(tcls_f1310()?tcls_f44():coerce_symbol_to_double_or_symbol(NIL))):(tcls_f1357()?tcls_f41():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL))):(tcls_f831()?(tcls_f1221()?(tcls_f1666()?(tcls_f1216()?tcls_f25():(tcls_f1102()?(tcls_f1085()?(tcls_f1038()?(tcls_f998()?coerce_double_to_double_or_symbol(tcls_f813()):tcls_f24()):tcls_f21()):(tcls_f1038()?tcls_f24():coerce_symbol_to_double_or_symbol(NIL))):(tcls_f1085()?tcls_f21():coerce_symbol_to_double_or_symbol(NIL)))):(tcls_f985()?tcls_f25():(tcls_f958()?(tcls_f935()?(tcls_f888()?(tcls_f840()?coerce_double_to_double_or_symbol(tcls_f689()):tcls_f14()):tcls_f11()):(tcls_f888()?tcls_f14():coerce_symbol_to_double_or_symbol(NIL))):(tcls_f935()?tcls_f11():coerce_symbol_to_double_or_symbol(NIL))))):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL))))); return;}
