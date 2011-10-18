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
double tcc_v1893;
double tcc_v1891;
double tcc_v1889;
double tcc_v1887;
double tcc_v1885;
double tcc_v1883;
double tcc_v1881;
double tcc_v1879;
double tcc_v1877;
double tcc_v1853;
double tcc_v1875;
double tcc_v1873;
double tcc_v1871;
double tcc_v1870;
double tcc_v1869;
double tcc_v1867;
double tcc_v1864;
double tcc_v1863;
double tcc_v1861;
double tcc_v1858;
double tcc_v1857;
int tcc_v1856;
int tcc_p797;
double tcc_m797;
int tcc_p796;
double tcc_m796;
int tcc_p834;
double tcc_m834;
double tcc_v834;
int tcc_p832;
int tcc_m832;
int tcc_p838;
int tcc_m838;
int tcc_p1124;
double tcc_m1124;
int tcc_p316;
double tcc_m316;
int tcc_p315;
double tcc_m315;
int tcc_p314;
int tcc_m314;
int tcc_p292;
double tcc_m292;
double tcc_v315;
int tcc_p300;
double tcc_m300;
int tcc_p312;
double tcc_m312;
int tcc_p311;
double tcc_m311;
int tcc_p272;
int tcc_m272;
int tcc_p270;
double tcc_m270;
int tcc_p291;
double tcc_m291;
int tcc_p290;
double tcc_m290;
int tcc_p260;
double tcc_m260;
int tcc_p299;
double tcc_m299;
int tcc_p268;
double tcc_m268;
int tcc_p266;
double tcc_m266;
int tcc_p263;
int tcc_m263;
int tcc_p297;
double tcc_m297;
double tcc_v311;
int tcc_p304;
double tcc_m304;
int tcc_p178;
double tcc_m178;
double tcc_v178;
int tcc_p171;
double tcc_m171;
int tcc_p309;
double tcc_m309;
int tcc_p258;
double tcc_m258;
int tcc_p246;
double tcc_m246;
int tcc_p238;
double tcc_m238;
int tcc_p252;
double tcc_m252;
int tcc_p247;
int tcc_m247;
int tcc_p244;
double tcc_m244;
int tcc_p235;
double tcc_m235;
int tcc_p232;
int tcc_m232;
int tcc_v232;
int tcc_p225;
int tcc_m225;
int tcc_p286;
double tcc_m286;
int tcc_p280;
double tcc_m280;
int tcc_p218;
double tcc_m218;
int tcc_p209;
double tcc_m209;
int tcc_p207;
int tcc_m207;
int tcc_p217;
double tcc_m217;
int tcc_p306;
double tcc_m306;
int tcc_p180;
double tcc_m180;
int tcc_p170;
double tcc_m170;
double tcc_v306;
int tcc_p305;
double tcc_m305;
int tcc_p1215;
double tcc_m1215;
int tcc_p374;
double tcc_m374;
int tcc_p1459;
double tcc_m1459;
int tcc_p837;
double tcc_m837;
int tcc_p79;
int tcc_m79;
int tcc_p1457;
double tcc_m1457;
int tcc_p600;
double tcc_m600;
int tcc_p646;
double tcc_m646;
int tcc_p650;
double tcc_m650;
int tcc_p663;
double tcc_m663;
int tcc_p680;
double tcc_m680;
int tcc_p1768;
double tcc_m1768;
int tcc_p1770;
double tcc_m1770;
int tcc_p77;
double tcc_m77;
double tcc_v77;
int tcc_p75;
double tcc_m75;
int tcc_p60;
double tcc_m60;
int tcc_p74;
int tcc_m74;
int tcc_p1798;
double tcc_m1798;
int tcc_p1797;
double tcc_m1797;
double tcc_v1798;
double tcc_v1797;
int tcc_p1794;
double tcc_m1794;
int tcc_p1785;
int tcc_m1785;
int tcc_p1771;
double tcc_m1771;
int tcc_p824;
int tcc_m824;
int tcc_p818;
double tcc_m818;
int tcc_p831;
double tcc_m831;
int tcc_p829;
int tcc_m829;
int tcc_v824;
int tcc_p65;
double tcc_m65;
int tcc_v829;
int tcc_p825;
int tcc_m825;
int tcc_p49;
double tcc_m49;
int tcc_p71;
int tcc_m71;
int tcc_p42;
double tcc_m42;
int tcc_p41;
int tcc_m41;
int tcc_p62;
double tcc_m62;
int tcc_p53;
double tcc_m53;
int tcc_p52;
int tcc_m52;
int tcc_p39;
double tcc_m39;
int tcc_p34;
double tcc_m34;
int tcc_p27;
double tcc_m27;
int tcc_p33;
double tcc_m33;
int tcc_p17;
double tcc_m17;
int tcc_p26;
double tcc_m26;
int tcc_p12;
int tcc_m12;
int tcc_p1758;
double tcc_m1758;
int tcc_p1757;
double tcc_m1757;
int tcc_p689;
double tcc_m689;
double tcc_v689;
int tcc_p687;
double tcc_m687;
int tcc_p671;
double tcc_m671;
int tcc_p655;
double tcc_m655;
int tcc_p668;
double tcc_m668;
int tcc_p686;
int tcc_m686;
int tcc_p1793;
int tcc_m1793;
int tcc_p1792;
double tcc_m1792;
int tcc_p1126;
double tcc_m1126;
double tcc_v1126;
double tcc_v1124;
int tcc_p1121;
double tcc_m1121;
double tcc_v1121;
int tcc_p1120;
double tcc_m1120;
double tcc_v180;
int tcc_p174;
double tcc_m174;
int tcc_p173;
int tcc_m173;
int tcc_p168;
double tcc_m168;
int tcc_p166;
double tcc_m166;
int tcc_p154;
double tcc_m154;
int tcc_p165;
double tcc_m165;
int tcc_p163;
double tcc_m163;
int tcc_p157;
double tcc_m157;
int tcc_p151;
int tcc_m151;
int tcc_v151;
int tcc_p145;
int tcc_m145;
int tcc_p143;
double tcc_m143;
int tcc_p131;
double tcc_m131;
int tcc_p142;
double tcc_m142;
int tcc_p140;
double tcc_m140;
int tcc_p134;
double tcc_m134;
int tcc_p128;
int tcc_m128;
int tcc_v128;
int tcc_p122;
int tcc_m122;
int tcc_p121;
int tcc_m121;
int tcc_p302;
double tcc_m302;
int tcc_p301;
int tcc_m301;
int tcc_p221;
double tcc_m221;
int tcc_p198;
double tcc_m198;
int tcc_p192;
double tcc_m192;
int tcc_p189;
int tcc_m189;
int tcc_v189;
int tcc_p183;
int tcc_m183;
int tcc_p220;
double tcc_m220;
int tcc_p212;
double tcc_m212;
int tcc_p206;
int tcc_m206;
int tcc_v206;
int tcc_p200;
int tcc_m200;
int tcc_p182;
int tcc_m182;
int tcc_p1791;
double tcc_m1791;
int tcc_p692;
int tcc_m692;
int tcc_p707;
double tcc_m707;
double tcc_v286;
double tcc_v280;
int tcc_p273;
int tcc_m273;
int tcc_p108;
double tcc_m108;
int tcc_p100;
double tcc_m100;
int tcc_p95;
double tcc_m95;
int tcc_p87;
double tcc_m87;
int tcc_p115;
int tcc_m115;
double tcc_v100;
double tcc_v87;
int tcc_p83;
double tcc_m83;
int tcc_p80;
int tcc_m80;
int tcc_v247;
int tcc_p222;
int tcc_m222;
int tcc_p1848;
double tcc_m1848;
int tcc_p1734;
int tcc_m1734;
int tcc_p1841;
double tcc_m1841;
double tcc_v1848;
int tcc_p1838;
double tcc_m1838;
int tcc_p1847;
double tcc_m1847;
int tcc_p1846;
double tcc_m1846;
int tcc_p1446;
int tcc_m1446;
int tcc_p1442;
double tcc_m1442;
double tcc_v1846;
int tcc_p1731;
double tcc_m1731;
int tcc_p1719;
double tcc_m1719;
double tcc_v1719;
int tcc_p1710;
double tcc_m1710;
int tcc_p1840;
double tcc_m1840;
int tcc_p1839;
double tcc_m1839;
int tcc_p1436;
double tcc_m1436;
int tcc_p1843;
double tcc_m1843;
int tcc_p1434;
double tcc_m1434;
int tcc_p1724;
double tcc_m1724;
int tcc_p1605;
double tcc_m1605;
double tcc_v1605;
int tcc_p1604;
double tcc_m1604;
int tcc_p1681;
double tcc_m1681;
int tcc_p1679;
int tcc_m1679;
int tcc_p1689;
double tcc_m1689;
int tcc_p1735;
double tcc_m1735;
int tcc_p587;
double tcc_m587;
int tcc_p580;
double tcc_m580;
double tcc_v587;
int tcc_p586;
double tcc_m586;
double tcc_v1735;
int tcc_p1732;
double tcc_m1732;
int tcc_p1730;
double tcc_m1730;
int tcc_p1842;
double tcc_m1842;
int tcc_p1440;
double tcc_m1440;
int tcc_p1438;
double tcc_m1438;
int tcc_p1420;
double tcc_m1420;
int tcc_p1374;
double tcc_m1374;
int tcc_p488;
int tcc_m488;
int tcc_p1431;
double tcc_m1431;
int tcc_p480;
int tcc_m480;
int tcc_p1419;
double tcc_m1419;
int tcc_p1371;
double tcc_m1371;
int tcc_p479;
int tcc_m479;
int tcc_v479;
int tcc_p476;
int tcc_m476;
int tcc_p1836;
double tcc_m1836;
int tcc_p1815;
double tcc_m1815;
int tcc_p1813;
double tcc_m1813;
double tcc_v1815;
double tcc_v1813;
int tcc_p706;
double tcc_m706;
int tcc_p1807;
double tcc_m1807;
int tcc_p1805;
double tcc_m1805;
double tcc_v1805;
int tcc_p1804;
double tcc_m1804;
double tcc_v1457;
int tcc_p1454;
double tcc_m1454;
int tcc_p491;
int tcc_m491;
int tcc_p400;
double tcc_m400;
int tcc_p387;
double tcc_m387;
int tcc_p407;
int tcc_m407;
int tcc_v480;
int tcc_p473;
int tcc_m473;
double tcc_v1454;
int tcc_p1453;
double tcc_m1453;
int tcc_p463;
double tcc_m463;
int tcc_p462;
int tcc_m462;
int tcc_p460;
double tcc_m460;
int tcc_p458;
double tcc_m458;
int tcc_p446;
double tcc_m446;
int tcc_p457;
double tcc_m457;
int tcc_p455;
double tcc_m455;
int tcc_p449;
double tcc_m449;
int tcc_p443;
int tcc_m443;
int tcc_v443;
int tcc_p437;
int tcc_m437;
int tcc_p435;
double tcc_m435;
int tcc_p423;
double tcc_m423;
int tcc_p434;
double tcc_m434;
int tcc_p432;
double tcc_m432;
int tcc_p426;
double tcc_m426;
int tcc_p420;
int tcc_m420;
int tcc_v420;
int tcc_p414;
int tcc_m414;
int tcc_p413;
int tcc_m413;
int tcc_p1452;
double tcc_m1452;
int tcc_p1451;
int tcc_m1451;
int tcc_p1415;
double tcc_m1415;
int tcc_p1412;
double tcc_m1412;
int tcc_p1335;
double tcc_m1335;
int tcc_p469;
int tcc_m469;
int tcc_v469;
int tcc_p467;
int tcc_m467;
int tcc_p1413;
double tcc_m1413;
int tcc_p1350;
double tcc_m1350;
int tcc_p472;
int tcc_m472;
int tcc_v472;
int tcc_p470;
int tcc_m470;
int tcc_p392;
double tcc_m392;
int tcc_p379;
double tcc_m379;
int tcc_p466;
int tcc_m466;
double tcc_v392;
double tcc_v379;
int tcc_p373;
double tcc_m373;
int tcc_p370;
int tcc_m370;
double tcc_v1807;
int tcc_p1802;
double tcc_m1802;
double tcc_v1802;
int tcc_p1733;
double tcc_m1733;
int tcc_p583;
double tcc_m583;
int tcc_p578;
double tcc_m578;
int tcc_p553;
double tcc_m553;
int tcc_p518;
double tcc_m518;
int tcc_p541;
double tcc_m541;
int tcc_p552;
double tcc_m552;
int tcc_p550;
double tcc_m550;
int tcc_p520;
double tcc_m520;
double tcc_v520;
double tcc_v518;
int tcc_p515;
double tcc_m515;
int tcc_p512;
int tcc_m512;
int tcc_p544;
double tcc_m544;
int tcc_p538;
int tcc_m538;
int tcc_v538;
int tcc_p532;
int tcc_m532;
int tcc_p576;
double tcc_m576;
int tcc_p529;
double tcc_m529;
int tcc_p564;
double tcc_m564;
int tcc_p575;
double tcc_m575;
int tcc_p573;
double tcc_m573;
int tcc_p531;
double tcc_m531;
double tcc_v531;
double tcc_v529;
int tcc_p526;
double tcc_m526;
int tcc_p523;
int tcc_m523;
int tcc_p567;
double tcc_m567;
int tcc_p561;
int tcc_m561;
int tcc_p1729;
double tcc_m1729;
int tcc_p1726;
double tcc_m1726;
int tcc_p1722;
double tcc_m1722;
int tcc_p1535;
double tcc_m1535;
double tcc_v1535;
int tcc_p1532;
double tcc_m1532;
int tcc_p605;
int tcc_m605;
int tcc_p1666;
double tcc_m1666;
int tcc_p698;
int tcc_m698;
int tcc_v698;
int tcc_p696;
int tcc_m696;
int tcc_p1723;
double tcc_m1723;
int tcc_p1607;
double tcc_m1607;
double tcc_v1607;
int tcc_p1602;
double tcc_m1602;
int tcc_p693;
int tcc_m693;
int tcc_p1684;
double tcc_m1684;
int tcc_p701;
int tcc_m701;
int tcc_p1855;
double tcc_m1855;
int tcc_p676;
double tcc_m676;
int tcc_p1851;
int tcc_m1851;
int tcc_v1851;
int tcc_p1781;
int tcc_m1781;
int tcc_p363;
double tcc_m363;
int tcc_p369;
double tcc_m369;
int tcc_p658;
double tcc_m658;
int tcc_p682;
int tcc_m682;
int tcc_p359;
double tcc_m359;
int tcc_p358;
int tcc_m358;
int tcc_p365;
double tcc_m365;
int tcc_p364;
int tcc_m364;
int tcc_p356;
double tcc_m356;
int tcc_p351;
double tcc_m351;
int tcc_p344;
double tcc_m344;
int tcc_p350;
double tcc_m350;
int tcc_p334;
double tcc_m334;
int tcc_p343;
double tcc_m343;
int tcc_p329;
int tcc_m329;
int tcc_p649;
double tcc_m649;
int tcc_p648;
int tcc_m648;
int tcc_p673;
double tcc_m673;
int tcc_p662;
double tcc_m662;
int tcc_p661;
int tcc_m661;
int tcc_p643;
double tcc_m643;
int tcc_p638;
double tcc_m638;
int tcc_p631;
double tcc_m631;
int tcc_p637;
double tcc_m637;
int tcc_p621;
double tcc_m621;
int tcc_p630;
double tcc_m630;
int tcc_p616;
int tcc_m616;
int tcc_v692;
double tcc_v621;
int tcc_p610;
int tcc_m610;
int tcc_v523;
int tcc_p521;
int tcc_m521;
int tcc_p505;
double_or_symbol tcc_m505;
int tcc_v512;
int tcc_p510;
int tcc_m510;
int tcc_v510;
int tcc_p502;
double_or_symbol tcc_m502;
int tcc_v693;
int tcc_p608;
int tcc_m608;
int tcc_p598;
double_or_symbol tcc_m598;
int tcc_v605;
int tcc_p603;
int tcc_m603;
int tcc_v603;
int tcc_p595;
double_or_symbol tcc_m595;
int tcc_v701;
int tcc_v603;
double tcc_v1602;
double tcc_v1532;
int tcc_v561;
int tcc_v510;
double tcc_v526;
double tcc_v515;
int tcc_v370;
int tcc_v692;
double tcc_v334;
int tcc_v80;
int tcc_v79;
double tcc_v17;
static double tcc_f797(){if (tcc_p797) return tcc_m797; else {tcc_p797=T;return tcc_m797=(tcc_v1875/tcc_v1870);}}
static double tcc_f796(){if (tcc_p796) return tcc_m796; else {tcc_p796=T;return tcc_m796=(tcc_v1873/tcc_v1870);}}
static double tcc_f834(){if (tcc_p834) return tcc_m834; else {tcc_p834=T;return tcc_m834=(tcc_v1858+tcc_v1864);}}
static int tcc_f832(){if (tcc_p832) return tcc_m832; else {tcc_p832=T;return tcc_m832=((tcc_v834=tcc_f834()),(tcc_v1871>(tcc_v834*tcc_v834)));}}
static int tcc_f838(){if (tcc_p838) return tcc_m838; else {tcc_p838=T;return tcc_m838=(tcc_v1871==0.0);}}
static double tcc_f1124(){if (tcc_p1124) return tcc_m1124; else {tcc_p1124=T;return tcc_m1124=(tcc_v1891-tcc_v1891);}}
static double tcc_f316(){if (tcc_p316) return tcc_m316; else {tcc_p316=T;return tcc_m316=normalize_rotation((tcc_v1877+(3.141592653589793)));}}
static double tcc_f315(){if (tcc_p315) return tcc_m315; else {tcc_p315=T;return tcc_m315=sin(tcc_f316());}}
static int tcc_f314(){if (tcc_p314) return tcc_m314; else {tcc_p314=T;return tcc_m314=(tcc_f315()==0.0);}}
static double tcc_f292(){if (tcc_p292) return tcc_m292; else {tcc_p292=T;return tcc_m292=(tcc_f315()*tcc_v1891);}}
static double tcc_f300(){if (tcc_p300) return tcc_m300; else {tcc_p300=T;return tcc_m300=((tcc_v315=tcc_f315()),(tcc_v315*tcc_v315));}}
static double tcc_f312(){if (tcc_p312) return tcc_m312; else {tcc_p312=T;return tcc_m312=cos(tcc_f316());}}
static double tcc_f311(){if (tcc_p311) return tcc_m311; else {tcc_p311=T;return tcc_m311=(-tcc_f312());}}
static int tcc_f272(){if (tcc_p272) return tcc_m272; else {tcc_p272=T;return tcc_m272=(tcc_f311()>0.0);}}
static double tcc_f270(){if (tcc_p270) return tcc_m270; else {tcc_p270=T;return tcc_m270=(tcc_f272()?(-tcc_f315()):tcc_f315());}}
static double tcc_f291(){if (tcc_p291) return tcc_m291; else {tcc_p291=T;return tcc_m291=(tcc_f311()*tcc_v1893);}}
static double tcc_f290(){if (tcc_p290) return tcc_m290; else {tcc_p290=T;return tcc_m290=(tcc_f292()-tcc_f291());}}
static double tcc_f260(){if (tcc_p260) return tcc_m260; else {tcc_p260=T;return tcc_m260=(tcc_f272()?(tcc_f291()-tcc_f292()):tcc_f290());}}
static double tcc_f299(){if (tcc_p299) return tcc_m299; else {tcc_p299=T;return tcc_m299=(-tcc_f311());}}
static double tcc_f268(){if (tcc_p268) return tcc_m268; else {tcc_p268=T;return tcc_m268=(tcc_f272()?tcc_f311():tcc_f299());}}
static double tcc_f266(){if (tcc_p266) return tcc_m266; else {tcc_p266=T;return tcc_m266=((tcc_f315()*tcc_f270())-(tcc_f311()*tcc_f268()));}}
static int tcc_f263(){if (tcc_p263) return tcc_m263; else {tcc_p263=T;return tcc_m263=(fabs((tcc_f266()-(0.0)))<tcc_v1853);}}
static double tcc_f297(){if (tcc_p297) return tcc_m297; else {tcc_p297=T;return tcc_m297=(tcc_f300()-(tcc_f311()*tcc_f299()));}}
static double tcc_f304(){if (tcc_p304) return tcc_m304; else {tcc_p304=T;return tcc_m304=((tcc_v311=tcc_f311()),(tcc_v311*tcc_v311));}}
static double tcc_f178(){if (tcc_p178) return tcc_m178; else {tcc_p178=T;return tcc_m178=(tcc_f300()+tcc_f304());}}
static double tcc_f171(){if (tcc_p171) return tcc_m171; else {tcc_p171=T;return tcc_m171=((tcc_v178=tcc_f178()),(tcc_v178+tcc_v178));}}
static double tcc_f309(){if (tcc_p309) return tcc_m309; else {tcc_p309=T;return tcc_m309=((tcc_f315()*tcc_v1885)+(tcc_f311()*tcc_v1883));}}
static double tcc_f258(){if (tcc_p258) return tcc_m258; else {tcc_p258=T;return tcc_m258=((tcc_f309()*tcc_f270())-(tcc_f311()*tcc_f260()));}}
static double tcc_f246(){if (tcc_p246) return tcc_m246; else {tcc_p246=T;return tcc_m246=(tcc_f258()/tcc_f266());}}
static double tcc_f238(){if (tcc_p238) return tcc_m238; else {tcc_p238=T;return tcc_m238=(tcc_f246()-tcc_v1885);}}
static double tcc_f252(){if (tcc_p252) return tcc_m252; else {tcc_p252=T;return tcc_m252=((tcc_f315()*tcc_f260())-(tcc_f309()*tcc_f268()));}}
static int tcc_f247(){if (tcc_p247) return tcc_m247; else {tcc_p247=T;return tcc_m247=(tcc_f263()?((fabs((tcc_f258()-(0.0)))<tcc_v1853)?(fabs((tcc_f252()-(0.0)))<tcc_v1853):NIL):T);}}
static double tcc_f244(){if (tcc_p244) return tcc_m244; else {tcc_p244=T;return tcc_m244=(tcc_f252()/tcc_f266());}}
static double tcc_f235(){if (tcc_p235) return tcc_m235; else {tcc_p235=T;return tcc_m235=(tcc_f244()-tcc_v1883);}}
static int tcc_f232(){if (tcc_p232) return tcc_m232; else {tcc_p232=T;return tcc_m232=((fabs(tcc_f238())<tcc_v1853)?(fabs(tcc_f235())<tcc_v1853):NIL);}}
static int tcc_f225(){if (tcc_p225) return tcc_m225; else {tcc_p225=T;return tcc_m225=(tcc_f263()?NIL:((fabs((((tcc_f315()*tcc_f246())+(tcc_f311()*tcc_f244()))-tcc_f309()))<tcc_v1853)?((tcc_v232=tcc_f232()),(tcc_v232?tcc_v232:(fabs((tcc_f316()-atan2(tcc_f235(),tcc_f238())))<tcc_v1853))):NIL));}}
static double tcc_f286(){if (tcc_p286) return tcc_m286; else {tcc_p286=T;return tcc_m286=((((tcc_f309()*tcc_f315())-(tcc_f311()*tcc_f290()))/tcc_f297())-tcc_v1893);}}
static double tcc_f280(){if (tcc_p280) return tcc_m280; else {tcc_p280=T;return tcc_m280=((((tcc_f315()*tcc_f290())-(tcc_f309()*tcc_f299()))/tcc_f297())-tcc_v1891);}}
static double tcc_f218(){if (tcc_p218) return tcc_m218; else {tcc_p218=T;return tcc_m218=(tcc_f309()/tcc_f311());}}
static double tcc_f209(){if (tcc_p209) return tcc_m209; else {tcc_p209=T;return tcc_m209=(tcc_f218()-tcc_v1883);}}
static int tcc_f207(){if (tcc_p207) return tcc_m207; else {tcc_p207=T;return tcc_m207=(fabs(tcc_f209())<tcc_v1853);}}
static double tcc_f217(){if (tcc_p217) return tcc_m217; else {tcc_p217=T;return tcc_m217=(tcc_f311()*tcc_f218());}}
static double tcc_f306(){if (tcc_p306) return tcc_m306; else {tcc_p306=T;return tcc_m306=(tcc_f309()-(tcc_f315()*tcc_v1893)-(tcc_f311()*tcc_v1891));}}
static double tcc_f180(){if (tcc_p180) return tcc_m180; else {tcc_p180=T;return tcc_m180=((-2.0)*tcc_f311()*tcc_f306());}}
static double tcc_f170(){if (tcc_p170) return tcc_m170; else {tcc_p170=T;return tcc_m170=((-tcc_f180())/tcc_f171());}}
static double tcc_f305(){if (tcc_p305) return tcc_m305; else {tcc_p305=T;return tcc_m305=((tcc_v306=tcc_f306()),(tcc_v306*tcc_v306));}}
static double tcc_f1215(){if (tcc_p1215) return tcc_m1215; else {tcc_p1215=T;return tcc_m1215=(-(tcc_v1864/tcc_v1870));}}
static double tcc_f374(){if (tcc_p374) return tcc_m374; else {tcc_p374=T;return tcc_m374=error("No applicable method for DISTANCE with argument types (POINT (OR BOOLEAN POINT))");}}
static double tcc_f1459(){if (tcc_p1459) return tcc_m1459; else {tcc_p1459=T;return tcc_m1459=(tcc_v1858-tcc_v1864);}}
static double tcc_f837(){if (tcc_p837) return tcc_m837; else {tcc_p837=T;return tcc_m837=fabs(tcc_f1459());}}
static int tcc_f79(){if (tcc_p79) return tcc_m79; else {tcc_p79=T;return tcc_m79=(tcc_f838()?(tcc_f837()<tcc_v1853):NIL);}}
static double tcc_f1457(){if (tcc_p1457) return tcc_m1457; else {tcc_p1457=T;return tcc_m1457=(tcc_v1885-(tcc_v1885+tcc_f1459()));}}
static double tcc_f600(){if (tcc_p600) return tcc_m600; else {tcc_p600=T;return tcc_m600=error("Non-numeric argument to MIN");}}
static double tcc_f646(){if (tcc_p646) return tcc_m646; else {tcc_p646=T;return tcc_m646=error("Can't form tangent when points are the same");}}
static double tcc_f650(){if (tcc_p650) return tcc_m650; else {tcc_p650=T;return tcc_m650=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double tcc_f663(){if (tcc_p663) return tcc_m663; else {tcc_p663=T;return tcc_m663=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double tcc_f680(){if (tcc_p680) return tcc_m680; else {tcc_p680=T;return tcc_m680=error("SLOT-VALUE called on non-instance");}}
static double tcc_f1768(){if (tcc_p1768) return tcc_m1768; else {tcc_p1768=T;return tcc_m1768=(tcc_v1858*tcc_v1858);}}
static double tcc_f1770(){if (tcc_p1770) return tcc_m1770; else {tcc_p1770=T;return tcc_m1770=(tcc_v1864*tcc_v1864);}}
static double tcc_f77(){if (tcc_p77) return tcc_m77; else {tcc_p77=T;return tcc_m77=(((tcc_v1871+tcc_f1768())-tcc_f1770())/((2.0)*tcc_v1870));}}
static double tcc_f75(){if (tcc_p75) return tcc_m75; else {tcc_p75=T;return tcc_m75=((tcc_v77=tcc_f77()),(tcc_f1768()-(tcc_v77*tcc_v77)));}}
static double tcc_f60(){if (tcc_p60) return tcc_m60; else {tcc_p60=T;return tcc_m60=sqrt(tcc_f75());}}
static int tcc_f74(){if (tcc_p74) return tcc_m74; else {tcc_p74=T;return tcc_m74=(tcc_f75()<0.0);}}
static double tcc_f1798(){if (tcc_p1798) return tcc_m1798; else {tcc_p1798=T;return tcc_m1798=(tcc_v1885-tcc_v1893);}}
static double tcc_f1797(){if (tcc_p1797) return tcc_m1797; else {tcc_p1797=T;return tcc_m1797=(tcc_v1883-tcc_v1891);}}
static double tcc_f1794(){if (tcc_p1794) return tcc_m1794; else {tcc_p1794=T;return tcc_m1794=((tcc_v1798=tcc_f1798()),(tcc_v1797=tcc_f1797()),((tcc_v1798*tcc_v1798)+(tcc_v1797*tcc_v1797)));}}
static int tcc_f1785(){if (tcc_p1785) return tcc_m1785; else {tcc_p1785=T;return tcc_m1785=(tcc_f1794()>(tcc_v1857*tcc_v1857));}}
static double tcc_f1771(){if (tcc_p1771) return tcc_m1771; else {tcc_p1771=T;return tcc_m1771=sqrt(tcc_f1794());}}
static int tcc_f824(){if (tcc_p824) return tcc_m824; else {tcc_p824=T;return tcc_m824=(tcc_f1771()>tcc_f834());}}
static double tcc_f818(){if (tcc_p818) return tcc_m818; else {tcc_p818=T;return tcc_m818=(tcc_v1858/tcc_f1771());}}
static double tcc_f831(){if (tcc_p831) return tcc_m831; else {tcc_p831=T;return tcc_m831=(tcc_f1771()-tcc_f834());}}
static int tcc_f829(){if (tcc_p829) return tcc_m829; else {tcc_p829=T;return tcc_m829=(fabs(tcc_f831())<tcc_v1853);}}
static double tcc_f65(){if (tcc_p65) return tcc_m65; else {tcc_p65=T;return tcc_m65=((tcc_v824=tcc_f824()),((tcc_v824?tcc_v824:tcc_f829())?((tcc_v1858+((0.5)*tcc_f831()))/tcc_f1771()):((tcc_v1858<tcc_v1864)?(-tcc_f818()):(tcc_f818()+(1.0)))));}}
static int tcc_f825(){if (tcc_p825) return tcc_m825; else {tcc_p825=T;return tcc_m825=((tcc_v829=tcc_f829()),(tcc_v829?tcc_v829:(fabs((tcc_f1771()-tcc_f837()))<tcc_v1853)));}}
static double tcc_f49(){if (tcc_p49) return tcc_m49; else {tcc_p49=T;return tcc_m49=(tcc_f825()?(tcc_v1883+(tcc_f65()*tcc_v1873)):tcc_f680());}}
static int tcc_f71(){if (tcc_p71) return tcc_m71; else {tcc_p71=T;return tcc_m71=(tcc_f838()?NIL:(tcc_f832()?tcc_f825():(tcc_f74()?tcc_f825():T)));}}
static double tcc_f42(){if (tcc_p42) return tcc_m42; else {tcc_p42=T;return tcc_m42=(tcc_f71()?(tcc_f838()?tcc_f680():(tcc_f832()?tcc_f49():(tcc_f74()?tcc_f49():(tcc_v1883+(tcc_f77()*tcc_f796())+(tcc_f60()*tcc_f797()))))):tcc_f650());}}
static int tcc_f41(){if (tcc_p41) return tcc_m41; else {tcc_p41=T;return tcc_m41=(tcc_v1891==tcc_f42());}}
static double tcc_f62(){if (tcc_p62) return tcc_m62; else {tcc_p62=T;return tcc_m62=(tcc_f825()?(tcc_v1885+(tcc_f65()*tcc_v1875)):tcc_f680());}}
static double tcc_f53(){if (tcc_p53) return tcc_m53; else {tcc_p53=T;return tcc_m53=(tcc_f71()?(tcc_f838()?tcc_f680():(tcc_f832()?tcc_f62():(tcc_f74()?tcc_f62():(tcc_v1885+((tcc_f77()*tcc_f797())-(tcc_f60()*tcc_f796())))))):tcc_f663());}}
static int tcc_f52(){if (tcc_p52) return tcc_m52; else {tcc_p52=T;return tcc_m52=(tcc_v1893==tcc_f53());}}
static double tcc_f39(){if (tcc_p39) return tcc_m39; else {tcc_p39=T;return tcc_m39=(tcc_f52()?(tcc_f41()?tcc_f646():(0.0)):(1.0));}}
static double tcc_f34(){if (tcc_p34) return tcc_m34; else {tcc_p34=T;return tcc_m34=((tcc_f42()-tcc_v1891)/(tcc_f53()-tcc_v1893));}}
static double tcc_f27(){if (tcc_p27) return tcc_m27; else {tcc_p27=T;return tcc_m27=(tcc_f52()?(tcc_f41()?tcc_f646():tcc_f42()):(tcc_f53()+(tcc_f34()*tcc_f42())));}}
static double tcc_f33(){if (tcc_p33) return tcc_m33; else {tcc_p33=T;return tcc_m33=(tcc_f52()?(tcc_f41()?tcc_f646():(1.0)):tcc_f34());}}
static double tcc_f17(){if (tcc_p17) return tcc_m17; else {tcc_p17=T;return tcc_m17=(((tcc_f39()*(tcc_f53()+tcc_f312()))+(tcc_f33()*(tcc_f42()+tcc_f315())))-tcc_f27());}}
static double tcc_f26(){if (tcc_p26) return tcc_m26; else {tcc_p26=T;return tcc_m26=(((tcc_f39()*tcc_v1885)+(tcc_f33()*tcc_v1883))-tcc_f27());}}
static int tcc_f12(){if (tcc_p12) return tcc_m12; else {tcc_p12=T;return tcc_m12=(tcc_f26()>(0.0));}}
static double tcc_f1758(){if (tcc_p1758) return tcc_m1758; else {tcc_p1758=T;return tcc_m1758=(tcc_f1798()/tcc_f1771());}}
static double tcc_f1757(){if (tcc_p1757) return tcc_m1757; else {tcc_p1757=T;return tcc_m1757=(tcc_f1797()/tcc_f1771());}}
static double tcc_f689(){if (tcc_p689) return tcc_m689; else {tcc_p689=T;return tcc_m689=(((tcc_f1794()+tcc_f1770())-tcc_f1768())/((2.0)*tcc_f1771()));}}
static double tcc_f687(){if (tcc_p687) return tcc_m687; else {tcc_p687=T;return tcc_m687=((tcc_v689=tcc_f689()),(tcc_f1770()-(tcc_v689*tcc_v689)));}}
static double tcc_f671(){if (tcc_p671) return tcc_m671; else {tcc_p671=T;return tcc_m671=sqrt(tcc_f687());}}
static double tcc_f655(){if (tcc_p655) return tcc_m655; else {tcc_p655=T;return tcc_m655=(tcc_v1891+(tcc_f689()*tcc_f1757())+(tcc_f671()*tcc_f1758()));}}
static double tcc_f668(){if (tcc_p668) return tcc_m668; else {tcc_p668=T;return tcc_m668=(tcc_v1893+((tcc_f689()*tcc_f1758())-(tcc_f671()*tcc_f1757())));}}
static int tcc_f686(){if (tcc_p686) return tcc_m686; else {tcc_p686=T;return tcc_m686=(tcc_f687()<0.0);}}
static int tcc_f1793(){if (tcc_p1793) return tcc_m1793; else {tcc_p1793=T;return tcc_m1793=(tcc_f1794()==0.0);}}
static double tcc_f1792(){if (tcc_p1792) return tcc_m1792; else {tcc_p1792=T;return tcc_m1792=(tcc_v1864-tcc_v1858);}}
static double tcc_f1126(){if (tcc_p1126) return tcc_m1126; else {tcc_p1126=T;return tcc_m1126=(tcc_v1893-(tcc_v1893+tcc_f1792()));}}
static double tcc_f1121(){if (tcc_p1121) return tcc_m1121; else {tcc_p1121=T;return tcc_m1121=((tcc_v1126=tcc_f1126()),(tcc_v1124=tcc_f1124()),sqrt(((tcc_v1126*tcc_v1126)+(tcc_v1124*tcc_v1124))));}}
static double tcc_f1120(){if (tcc_p1120) return tcc_m1120; else {tcc_p1120=T;return tcc_m1120=((tcc_v1121=tcc_f1121()),(tcc_v1121*tcc_v1121));}}
static double tcc_f174(){if (tcc_p174) return tcc_m174; else {tcc_p174=T;return tcc_m174=((tcc_v180=tcc_f180()),((tcc_v180*tcc_v180)-((4.0)*tcc_f178()*(tcc_f305()-(tcc_f300()*tcc_f1120())))));}}
static int tcc_f173(){if (tcc_p173) return tcc_m173; else {tcc_p173=T;return tcc_m173=(tcc_f174()<0.0);}}
static double tcc_f168(){if (tcc_p168) return tcc_m168; else {tcc_p168=T;return tcc_m168=(sqrt(tcc_f174())/tcc_f171());}}
static double tcc_f166(){if (tcc_p166) return tcc_m166; else {tcc_p166=T;return tcc_m166=((tcc_f170()+tcc_f168())+tcc_v1891);}}
static double tcc_f154(){if (tcc_p154) return tcc_m154; else {tcc_p154=T;return tcc_m154=(tcc_f166()-tcc_v1883);}}
static double tcc_f165(){if (tcc_p165) return tcc_m165; else {tcc_p165=T;return tcc_m165=(tcc_f311()*tcc_f166());}}
static double tcc_f163(){if (tcc_p163) return tcc_m163; else {tcc_p163=T;return tcc_m163=((tcc_f309()-tcc_f165())/tcc_f315());}}
static double tcc_f157(){if (tcc_p157) return tcc_m157; else {tcc_p157=T;return tcc_m157=(tcc_f163()-tcc_v1885);}}
static int tcc_f151(){if (tcc_p151) return tcc_m151; else {tcc_p151=T;return tcc_m151=((fabs(tcc_f157())<tcc_v1853)?(fabs(tcc_f154())<tcc_v1853):NIL);}}
static int tcc_f145(){if (tcc_p145) return tcc_m145; else {tcc_p145=T;return tcc_m145=((fabs((((tcc_f315()*tcc_f163())+tcc_f165())-tcc_f309()))<tcc_v1853)?((tcc_v151=tcc_f151()),(tcc_v151?tcc_v151:(fabs((tcc_f316()-atan2(tcc_f154(),tcc_f157())))<tcc_v1853))):NIL);}}
static double tcc_f143(){if (tcc_p143) return tcc_m143; else {tcc_p143=T;return tcc_m143=((tcc_f170()-tcc_f168())+tcc_v1891);}}
static double tcc_f131(){if (tcc_p131) return tcc_m131; else {tcc_p131=T;return tcc_m131=(tcc_f143()-tcc_v1883);}}
static double tcc_f142(){if (tcc_p142) return tcc_m142; else {tcc_p142=T;return tcc_m142=(tcc_f311()*tcc_f143());}}
static double tcc_f140(){if (tcc_p140) return tcc_m140; else {tcc_p140=T;return tcc_m140=((tcc_f309()-tcc_f142())/tcc_f315());}}
static double tcc_f134(){if (tcc_p134) return tcc_m134; else {tcc_p134=T;return tcc_m134=(tcc_f140()-tcc_v1885);}}
static int tcc_f128(){if (tcc_p128) return tcc_m128; else {tcc_p128=T;return tcc_m128=((fabs(tcc_f134())<tcc_v1853)?(fabs(tcc_f131())<tcc_v1853):NIL);}}
static int tcc_f122(){if (tcc_p122) return tcc_m122; else {tcc_p122=T;return tcc_m122=((fabs((((tcc_f315()*tcc_f140())+tcc_f142())-tcc_f309()))<tcc_v1853)?((tcc_v128=tcc_f128()),(tcc_v128?tcc_v128:(fabs((tcc_f316()-atan2(tcc_f131(),tcc_f134())))<tcc_v1853))):NIL);}}
static int tcc_f121(){if (tcc_p121) return tcc_m121; else {tcc_p121=T;return tcc_m121=(tcc_f145()?T:tcc_f122());}}
static double tcc_f302(){if (tcc_p302) return tcc_m302; else {tcc_p302=T;return tcc_m302=(tcc_f1120()-(tcc_f305()/tcc_f304()));}}
static int tcc_f301(){if (tcc_p301) return tcc_m301; else {tcc_p301=T;return tcc_m301=(tcc_f302()<0.0);}}
static double tcc_f221(){if (tcc_p221) return tcc_m221; else {tcc_p221=T;return tcc_m221=sqrt(tcc_f302());}}
static double tcc_f198(){if (tcc_p198) return tcc_m198; else {tcc_p198=T;return tcc_m198=((-tcc_f221())+tcc_v1893);}}
static double tcc_f192(){if (tcc_p192) return tcc_m192; else {tcc_p192=T;return tcc_m192=(tcc_f198()-tcc_v1885);}}
static int tcc_f189(){if (tcc_p189) return tcc_m189; else {tcc_p189=T;return tcc_m189=((fabs(tcc_f192())<tcc_v1853)?tcc_f207():NIL);}}
static int tcc_f183(){if (tcc_p183) return tcc_m183; else {tcc_p183=T;return tcc_m183=((fabs((((tcc_f315()*tcc_f198())+tcc_f217())-tcc_f309()))<tcc_v1853)?((tcc_v189=tcc_f189()),(tcc_v189?tcc_v189:(fabs((tcc_f316()-atan2(tcc_f209(),tcc_f192())))<tcc_v1853))):NIL);}}
static double tcc_f220(){if (tcc_p220) return tcc_m220; else {tcc_p220=T;return tcc_m220=(tcc_f221()+tcc_v1893);}}
static double tcc_f212(){if (tcc_p212) return tcc_m212; else {tcc_p212=T;return tcc_m212=(tcc_f220()-tcc_v1885);}}
static int tcc_f206(){if (tcc_p206) return tcc_m206; else {tcc_p206=T;return tcc_m206=((fabs(tcc_f212())<tcc_v1853)?tcc_f207():NIL);}}
static int tcc_f200(){if (tcc_p200) return tcc_m200; else {tcc_p200=T;return tcc_m200=((fabs((((tcc_f315()*tcc_f220())+tcc_f217())-tcc_f309()))<tcc_v1853)?((tcc_v206=tcc_f206()),(tcc_v206?tcc_v206:(fabs((tcc_f316()-atan2(tcc_f209(),tcc_f212())))<tcc_v1853))):NIL);}}
static int tcc_f182(){if (tcc_p182) return tcc_m182; else {tcc_p182=T;return tcc_m182=(tcc_f200()?T:tcc_f183());}}
static double tcc_f1791(){if (tcc_p1791) return tcc_m1791; else {tcc_p1791=T;return tcc_m1791=fabs(tcc_f1792());}}
static int tcc_f692(){if (tcc_p692) return tcc_m692; else {tcc_p692=T;return tcc_m692=(tcc_f1793()?(tcc_f1791()<tcc_v1853):NIL);}}
static double tcc_f707(){if (tcc_p707) return tcc_m707; else {tcc_p707=T;return tcc_m707=error("No applicable method for DISTANCE with argument types ((OR BOOLEAN POINT) POINT)");}}
static int tcc_f273(){if (tcc_p273) return tcc_m273; else {tcc_p273=T;return tcc_m273=(fabs((((fabs((tcc_f297()-(0.0)))<tcc_v1853)?tcc_f707():((tcc_v286=tcc_f286()),(tcc_v280=tcc_f280()),sqrt(((tcc_v286*tcc_v286)+(tcc_v280*tcc_v280)))))-tcc_f1121()))<tcc_v1853);}}
static double tcc_f108(){if (tcc_p108) return tcc_m108; else {tcc_p108=T;return tcc_m108=(tcc_f273()?(tcc_f247()?(tcc_f225()?(tcc_f263()?tcc_f680():tcc_f246()):tcc_f680()):tcc_f680()):tcc_f680());}}
static double tcc_f100(){if (tcc_p100) return tcc_m100; else {tcc_p100=T;return tcc_m100=(tcc_v1885-(tcc_f314()?(tcc_f301()?tcc_f108():(tcc_f200()?tcc_f220():(tcc_f183()?tcc_f198():tcc_f680()))):(tcc_f173()?tcc_f108():(tcc_f145()?tcc_f163():(tcc_f122()?tcc_f140():tcc_f680())))));}}
static double tcc_f95(){if (tcc_p95) return tcc_m95; else {tcc_p95=T;return tcc_m95=(tcc_f273()?(tcc_f247()?(tcc_f225()?(tcc_f263()?tcc_f680():tcc_f244()):tcc_f680()):tcc_f680()):tcc_f680());}}
static double tcc_f87(){if (tcc_p87) return tcc_m87; else {tcc_p87=T;return tcc_m87=(tcc_v1883-(tcc_f314()?(tcc_f301()?tcc_f95():(tcc_f200()?tcc_f218():(tcc_f183()?tcc_f218():tcc_f680()))):(tcc_f173()?tcc_f95():(tcc_f145()?tcc_f166():(tcc_f122()?tcc_f143():tcc_f680())))));}}
static int tcc_f115(){if (tcc_p115) return tcc_m115; else {tcc_p115=T;return tcc_m115=(tcc_f273()?(tcc_f247()?(tcc_f225()?(tcc_f263()?NIL:T):NIL):NIL):NIL);}}
static double tcc_f83(){if (tcc_p83) return tcc_m83; else {tcc_p83=T;return tcc_m83=((tcc_f314()?(tcc_f301()?tcc_f115():tcc_f182()):(tcc_f173()?tcc_f115():tcc_f121()))?((tcc_v100=tcc_f100()),(tcc_v87=tcc_f87()),sqrt(((tcc_v100*tcc_v100)+(tcc_v87*tcc_v87)))):tcc_f374());}}
static int tcc_f80(){if (tcc_p80) return tcc_m80; else {tcc_p80=T;return tcc_m80=(fabs((tcc_f83()-(0.0)))<tcc_v1853);}}
static int tcc_f222(){if (tcc_p222) return tcc_m222; else {tcc_p222=T;return tcc_m222=(tcc_f273()?((tcc_v247=tcc_f247()),(tcc_v247?(tcc_f225()?tcc_v247:NIL):NIL)):NIL);}}
static double tcc_f1848(){if (tcc_p1848) return tcc_m1848; else {tcc_p1848=T;return tcc_m1848=sin(tcc_v1877);}}
static int tcc_f1734(){if (tcc_p1734) return tcc_m1734; else {tcc_p1734=T;return tcc_m1734=(tcc_f1848()==0.0);}}
static double tcc_f1841(){if (tcc_p1841) return tcc_m1841; else {tcc_p1841=T;return tcc_m1841=(tcc_f1848()*tcc_v1883);}}
static double tcc_f1838(){if (tcc_p1838) return tcc_m1838; else {tcc_p1838=T;return tcc_m1838=((tcc_v1848=tcc_f1848()),(tcc_v1848*tcc_v1848));}}
static double tcc_f1847(){if (tcc_p1847) return tcc_m1847; else {tcc_p1847=T;return tcc_m1847=cos(tcc_v1877);}}
static double tcc_f1846(){if (tcc_p1846) return tcc_m1846; else {tcc_p1846=T;return tcc_m1846=(-tcc_f1847());}}
static int tcc_f1446(){if (tcc_p1446) return tcc_m1446; else {tcc_p1446=T;return tcc_m1446=(tcc_f1846()>0.0);}}
static double tcc_f1442(){if (tcc_p1442) return tcc_m1442; else {tcc_p1442=T;return tcc_m1442=(tcc_f1446()?(-tcc_f1848()):tcc_f1848());}}
static double tcc_f1731(){if (tcc_p1731) return tcc_m1731; else {tcc_p1731=T;return tcc_m1731=((tcc_v1846=tcc_f1846()),(tcc_v1846*tcc_v1846));}}
static double tcc_f1719(){if (tcc_p1719) return tcc_m1719; else {tcc_p1719=T;return tcc_m1719=(tcc_f1838()+tcc_f1731());}}
static double tcc_f1710(){if (tcc_p1710) return tcc_m1710; else {tcc_p1710=T;return tcc_m1710=((tcc_v1719=tcc_f1719()),(tcc_v1719+tcc_v1719));}}
static double tcc_f1840(){if (tcc_p1840) return tcc_m1840; else {tcc_p1840=T;return tcc_m1840=(tcc_f1846()*tcc_v1885);}}
static double tcc_f1839(){if (tcc_p1839) return tcc_m1839; else {tcc_p1839=T;return tcc_m1839=(tcc_f1841()-tcc_f1840());}}
static double tcc_f1436(){if (tcc_p1436) return tcc_m1436; else {tcc_p1436=T;return tcc_m1436=(tcc_f1446()?(tcc_f1840()-tcc_f1841()):tcc_f1839());}}
static double tcc_f1843(){if (tcc_p1843) return tcc_m1843; else {tcc_p1843=T;return tcc_m1843=((tcc_f1848()*tcc_v1893)+(tcc_f1846()*tcc_v1891));}}
static double tcc_f1434(){if (tcc_p1434) return tcc_m1434; else {tcc_p1434=T;return tcc_m1434=((tcc_f1843()*tcc_f1442())-(tcc_f1846()*tcc_f1436()));}}
static double tcc_f1724(){if (tcc_p1724) return tcc_m1724; else {tcc_p1724=T;return tcc_m1724=(tcc_f1843()/tcc_f1846());}}
static double tcc_f1605(){if (tcc_p1605) return tcc_m1605; else {tcc_p1605=T;return tcc_m1605=(tcc_v1891-tcc_f1724());}}
static double tcc_f1604(){if (tcc_p1604) return tcc_m1604; else {tcc_p1604=T;return tcc_m1604=((tcc_v1605=tcc_f1605()),(tcc_v1605*tcc_v1605));}}
static double tcc_f1681(){if (tcc_p1681) return tcc_m1681; else {tcc_p1681=T;return tcc_m1681=(tcc_f1724()-tcc_v1891);}}
static int tcc_f1679(){if (tcc_p1679) return tcc_m1679; else {tcc_p1679=T;return tcc_m1679=(fabs(tcc_f1681())<tcc_v1853);}}
static double tcc_f1689(){if (tcc_p1689) return tcc_m1689; else {tcc_p1689=T;return tcc_m1689=(tcc_f1846()*tcc_f1724());}}
static double tcc_f1735(){if (tcc_p1735) return tcc_m1735; else {tcc_p1735=T;return tcc_m1735=(tcc_f1843()-(tcc_f1848()*tcc_v1885)-(tcc_f1846()*tcc_v1883));}}
static double tcc_f587(){if (tcc_p587) return tcc_m587; else {tcc_p587=T;return tcc_m587=((-2.0)*tcc_f1846()*tcc_f1735());}}
static double tcc_f580(){if (tcc_p580) return tcc_m580; else {tcc_p580=T;return tcc_m580=((-tcc_f587())/tcc_f1710());}}
static double tcc_f586(){if (tcc_p586) return tcc_m586; else {tcc_p586=T;return tcc_m586=((tcc_v587=tcc_f587()),(tcc_v587*tcc_v587));}}
static double tcc_f1732(){if (tcc_p1732) return tcc_m1732; else {tcc_p1732=T;return tcc_m1732=((tcc_v1735=tcc_f1735()),(tcc_v1735*tcc_v1735));}}
static double tcc_f1730(){if (tcc_p1730) return tcc_m1730; else {tcc_p1730=T;return tcc_m1730=(tcc_f1732()/tcc_f1731());}}
static double tcc_f1842(){if (tcc_p1842) return tcc_m1842; else {tcc_p1842=T;return tcc_m1842=(-tcc_f1846());}}
static double tcc_f1440(){if (tcc_p1440) return tcc_m1440; else {tcc_p1440=T;return tcc_m1440=(tcc_f1446()?tcc_f1846():tcc_f1842());}}
static double tcc_f1438(){if (tcc_p1438) return tcc_m1438; else {tcc_p1438=T;return tcc_m1438=((tcc_f1848()*tcc_f1442())-(tcc_f1846()*tcc_f1440()));}}
static double tcc_f1420(){if (tcc_p1420) return tcc_m1420; else {tcc_p1420=T;return tcc_m1420=(tcc_f1434()/tcc_f1438());}}
static double tcc_f1374(){if (tcc_p1374) return tcc_m1374; else {tcc_p1374=T;return tcc_m1374=(tcc_f1420()-tcc_v1893);}}
static int tcc_f488(){if (tcc_p488) return tcc_m488; else {tcc_p488=T;return tcc_m488=(fabs((tcc_f1438()-(0.0)))<tcc_v1853);}}
static double tcc_f1431(){if (tcc_p1431) return tcc_m1431; else {tcc_p1431=T;return tcc_m1431=((tcc_f1848()*tcc_f1436())-(tcc_f1843()*tcc_f1440()));}}
static int tcc_f480(){if (tcc_p480) return tcc_m480; else {tcc_p480=T;return tcc_m480=(tcc_f488()?((fabs((tcc_f1434()-(0.0)))<tcc_v1853)?(fabs((tcc_f1431()-(0.0)))<tcc_v1853):NIL):T);}}
static double tcc_f1419(){if (tcc_p1419) return tcc_m1419; else {tcc_p1419=T;return tcc_m1419=(tcc_f1431()/tcc_f1438());}}
static double tcc_f1371(){if (tcc_p1371) return tcc_m1371; else {tcc_p1371=T;return tcc_m1371=(tcc_f1419()-tcc_v1891);}}
static int tcc_f479(){if (tcc_p479) return tcc_m479; else {tcc_p479=T;return tcc_m479=((fabs(tcc_f1374())<tcc_v1853)?(fabs(tcc_f1371())<tcc_v1853):NIL);}}
static int tcc_f476(){if (tcc_p476) return tcc_m476; else {tcc_p476=T;return tcc_m476=(tcc_f488()?NIL:((fabs((((tcc_f1848()*tcc_f1420())+(tcc_f1846()*tcc_f1419()))-tcc_f1843()))<tcc_v1853)?((tcc_v479=tcc_f479()),(tcc_v479?tcc_v479:(fabs((tcc_v1877-atan2(tcc_f1371(),tcc_f1374())))<tcc_v1853))):NIL));}}
static double tcc_f1836(){if (tcc_p1836) return tcc_m1836; else {tcc_p1836=T;return tcc_m1836=(tcc_f1838()-(tcc_f1846()*tcc_f1842()));}}
static double tcc_f1815(){if (tcc_p1815) return tcc_m1815; else {tcc_p1815=T;return tcc_m1815=((((tcc_f1843()*tcc_f1848())-(tcc_f1846()*tcc_f1839()))/tcc_f1836())-tcc_v1885);}}
static double tcc_f1813(){if (tcc_p1813) return tcc_m1813; else {tcc_p1813=T;return tcc_m1813=((((tcc_f1848()*tcc_f1839())-(tcc_f1843()*tcc_f1842()))/tcc_f1836())-tcc_v1883);}}
static double tcc_f706(){if (tcc_p706) return tcc_m706; else {tcc_p706=T;return tcc_m706=((fabs((tcc_f1836()-(0.0)))<tcc_v1853)?tcc_f707():((tcc_v1815=tcc_f1815()),(tcc_v1813=tcc_f1813()),sqrt(((tcc_v1815*tcc_v1815)+(tcc_v1813*tcc_v1813)))));}}
static double tcc_f1807(){if (tcc_p1807) return tcc_m1807; else {tcc_p1807=T;return tcc_m1807=(tcc_v1885-(tcc_v1885+tcc_v1857));}}
static double tcc_f1805(){if (tcc_p1805) return tcc_m1805; else {tcc_p1805=T;return tcc_m1805=(tcc_v1883-tcc_v1883);}}
static double tcc_f1804(){if (tcc_p1804) return tcc_m1804; else {tcc_p1804=T;return tcc_m1804=((tcc_v1805=tcc_f1805()),(tcc_v1805*tcc_v1805));}}
static double tcc_f1454(){if (tcc_p1454) return tcc_m1454; else {tcc_p1454=T;return tcc_m1454=((tcc_v1457=tcc_f1457()),sqrt(((tcc_v1457*tcc_v1457)+tcc_f1804())));}}
static int tcc_f491(){if (tcc_p491) return tcc_m491; else {tcc_p491=T;return tcc_m491=(fabs((tcc_f706()-tcc_f1454()))<tcc_v1853);}}
static double tcc_f400(){if (tcc_p400) return tcc_m400; else {tcc_p400=T;return tcc_m400=(tcc_f491()?(tcc_f480()?(tcc_f476()?(tcc_f488()?tcc_f680():tcc_f1420()):tcc_f680()):tcc_f680()):tcc_f680());}}
static double tcc_f387(){if (tcc_p387) return tcc_m387; else {tcc_p387=T;return tcc_m387=(tcc_f491()?(tcc_f480()?(tcc_f476()?(tcc_f488()?tcc_f680():tcc_f1419()):tcc_f680()):tcc_f680()):tcc_f680());}}
static int tcc_f407(){if (tcc_p407) return tcc_m407; else {tcc_p407=T;return tcc_m407=(tcc_f491()?(tcc_f480()?(tcc_f476()?(tcc_f488()?NIL:T):NIL):NIL):NIL);}}
static int tcc_f473(){if (tcc_p473) return tcc_m473; else {tcc_p473=T;return tcc_m473=(tcc_f491()?((tcc_v480=tcc_f480()),(tcc_v480?(tcc_f476()?tcc_v480:NIL):NIL)):NIL);}}
static double tcc_f1453(){if (tcc_p1453) return tcc_m1453; else {tcc_p1453=T;return tcc_m1453=((tcc_v1454=tcc_f1454()),(tcc_v1454*tcc_v1454));}}
static double tcc_f463(){if (tcc_p463) return tcc_m463; else {tcc_p463=T;return tcc_m463=(tcc_f586()-((4.0)*tcc_f1719()*(tcc_f1732()-(tcc_f1838()*tcc_f1453()))));}}
static int tcc_f462(){if (tcc_p462) return tcc_m462; else {tcc_p462=T;return tcc_m462=(tcc_f463()<0.0);}}
static double tcc_f460(){if (tcc_p460) return tcc_m460; else {tcc_p460=T;return tcc_m460=(sqrt(tcc_f463())/tcc_f1710());}}
static double tcc_f458(){if (tcc_p458) return tcc_m458; else {tcc_p458=T;return tcc_m458=((tcc_f580()+tcc_f460())+tcc_v1883);}}
static double tcc_f446(){if (tcc_p446) return tcc_m446; else {tcc_p446=T;return tcc_m446=(tcc_f458()-tcc_v1891);}}
static double tcc_f457(){if (tcc_p457) return tcc_m457; else {tcc_p457=T;return tcc_m457=(tcc_f1846()*tcc_f458());}}
static double tcc_f455(){if (tcc_p455) return tcc_m455; else {tcc_p455=T;return tcc_m455=((tcc_f1843()-tcc_f457())/tcc_f1848());}}
static double tcc_f449(){if (tcc_p449) return tcc_m449; else {tcc_p449=T;return tcc_m449=(tcc_f455()-tcc_v1893);}}
static int tcc_f443(){if (tcc_p443) return tcc_m443; else {tcc_p443=T;return tcc_m443=((fabs(tcc_f449())<tcc_v1853)?(fabs(tcc_f446())<tcc_v1853):NIL);}}
static int tcc_f437(){if (tcc_p437) return tcc_m437; else {tcc_p437=T;return tcc_m437=((fabs((((tcc_f1848()*tcc_f455())+tcc_f457())-tcc_f1843()))<tcc_v1853)?((tcc_v443=tcc_f443()),(tcc_v443?tcc_v443:(fabs((tcc_v1877-atan2(tcc_f446(),tcc_f449())))<tcc_v1853))):NIL);}}
static double tcc_f435(){if (tcc_p435) return tcc_m435; else {tcc_p435=T;return tcc_m435=((tcc_f580()-tcc_f460())+tcc_v1883);}}
static double tcc_f423(){if (tcc_p423) return tcc_m423; else {tcc_p423=T;return tcc_m423=(tcc_f435()-tcc_v1891);}}
static double tcc_f434(){if (tcc_p434) return tcc_m434; else {tcc_p434=T;return tcc_m434=(tcc_f1846()*tcc_f435());}}
static double tcc_f432(){if (tcc_p432) return tcc_m432; else {tcc_p432=T;return tcc_m432=((tcc_f1843()-tcc_f434())/tcc_f1848());}}
static double tcc_f426(){if (tcc_p426) return tcc_m426; else {tcc_p426=T;return tcc_m426=(tcc_f432()-tcc_v1893);}}
static int tcc_f420(){if (tcc_p420) return tcc_m420; else {tcc_p420=T;return tcc_m420=((fabs(tcc_f426())<tcc_v1853)?(fabs(tcc_f423())<tcc_v1853):NIL);}}
static int tcc_f414(){if (tcc_p414) return tcc_m414; else {tcc_p414=T;return tcc_m414=((fabs((((tcc_f1848()*tcc_f432())+tcc_f434())-tcc_f1843()))<tcc_v1853)?((tcc_v420=tcc_f420()),(tcc_v420?tcc_v420:(fabs((tcc_v1877-atan2(tcc_f423(),tcc_f426())))<tcc_v1853))):NIL);}}
static int tcc_f413(){if (tcc_p413) return tcc_m413; else {tcc_p413=T;return tcc_m413=(tcc_f437()?T:tcc_f414());}}
static double tcc_f1452(){if (tcc_p1452) return tcc_m1452; else {tcc_p1452=T;return tcc_m1452=(tcc_f1453()-tcc_f1730());}}
static int tcc_f1451(){if (tcc_p1451) return tcc_m1451; else {tcc_p1451=T;return tcc_m1451=(tcc_f1452()<0.0);}}
static double tcc_f1415(){if (tcc_p1415) return tcc_m1415; else {tcc_p1415=T;return tcc_m1415=sqrt(tcc_f1452());}}
static double tcc_f1412(){if (tcc_p1412) return tcc_m1412; else {tcc_p1412=T;return tcc_m1412=((-tcc_f1415())+tcc_v1885);}}
static double tcc_f1335(){if (tcc_p1335) return tcc_m1335; else {tcc_p1335=T;return tcc_m1335=(tcc_f1412()-tcc_v1893);}}
static int tcc_f469(){if (tcc_p469) return tcc_m469; else {tcc_p469=T;return tcc_m469=((fabs(tcc_f1335())<tcc_v1853)?tcc_f1679():NIL);}}
static int tcc_f467(){if (tcc_p467) return tcc_m467; else {tcc_p467=T;return tcc_m467=((fabs((((tcc_f1848()*tcc_f1412())+tcc_f1689())-tcc_f1843()))<tcc_v1853)?((tcc_v469=tcc_f469()),(tcc_v469?tcc_v469:(fabs((tcc_v1877-atan2(tcc_f1681(),tcc_f1335())))<tcc_v1853))):NIL);}}
static double tcc_f1413(){if (tcc_p1413) return tcc_m1413; else {tcc_p1413=T;return tcc_m1413=(tcc_f1415()+tcc_v1885);}}
static double tcc_f1350(){if (tcc_p1350) return tcc_m1350; else {tcc_p1350=T;return tcc_m1350=(tcc_f1413()-tcc_v1893);}}
static int tcc_f472(){if (tcc_p472) return tcc_m472; else {tcc_p472=T;return tcc_m472=((fabs(tcc_f1350())<tcc_v1853)?tcc_f1679():NIL);}}
static int tcc_f470(){if (tcc_p470) return tcc_m470; else {tcc_p470=T;return tcc_m470=((fabs((((tcc_f1848()*tcc_f1413())+tcc_f1689())-tcc_f1843()))<tcc_v1853)?((tcc_v472=tcc_f472()),(tcc_v472?tcc_v472:(fabs((tcc_v1877-atan2(tcc_f1681(),tcc_f1350())))<tcc_v1853))):NIL);}}
static double tcc_f392(){if (tcc_p392) return tcc_m392; else {tcc_p392=T;return tcc_m392=(tcc_v1893-(tcc_f1734()?(tcc_f1451()?tcc_f400():(tcc_f470()?tcc_f1413():(tcc_f467()?tcc_f1412():tcc_f680()))):(tcc_f462()?tcc_f400():(tcc_f437()?tcc_f455():(tcc_f414()?tcc_f432():tcc_f680())))));}}
static double tcc_f379(){if (tcc_p379) return tcc_m379; else {tcc_p379=T;return tcc_m379=(tcc_v1891-(tcc_f1734()?(tcc_f1451()?tcc_f387():(tcc_f470()?tcc_f1724():(tcc_f467()?tcc_f1724():tcc_f680()))):(tcc_f462()?tcc_f387():(tcc_f437()?tcc_f458():(tcc_f414()?tcc_f435():tcc_f680())))));}}
static int tcc_f466(){if (tcc_p466) return tcc_m466; else {tcc_p466=T;return tcc_m466=(tcc_f470()?T:tcc_f467());}}
static double tcc_f373(){if (tcc_p373) return tcc_m373; else {tcc_p373=T;return tcc_m373=((tcc_f1734()?(tcc_f1451()?tcc_f407():tcc_f466()):(tcc_f462()?tcc_f407():tcc_f413()))?((tcc_v392=tcc_f392()),(tcc_v379=tcc_f379()),sqrt(((tcc_v392*tcc_v392)+(tcc_v379*tcc_v379)))):tcc_f374());}}
static int tcc_f370(){if (tcc_p370) return tcc_m370; else {tcc_p370=T;return tcc_m370=(fabs((tcc_f373()-(0.0)))<tcc_v1853);}}
static double tcc_f1802(){if (tcc_p1802) return tcc_m1802; else {tcc_p1802=T;return tcc_m1802=((tcc_v1807=tcc_f1807()),sqrt(((tcc_v1807*tcc_v1807)+tcc_f1804())));}}
static double tcc_f1733(){if (tcc_p1733) return tcc_m1733; else {tcc_p1733=T;return tcc_m1733=((tcc_v1802=tcc_f1802()),(tcc_v1802*tcc_v1802));}}
static double tcc_f583(){if (tcc_p583) return tcc_m583; else {tcc_p583=T;return tcc_m583=(tcc_f586()-((4.0)*tcc_f1719()*(tcc_f1732()-(tcc_f1838()*tcc_f1733()))));}}
static double tcc_f578(){if (tcc_p578) return tcc_m578; else {tcc_p578=T;return tcc_m578=(sqrt(tcc_f583())/tcc_f1710());}}
static double tcc_f553(){if (tcc_p553) return tcc_m553; else {tcc_p553=T;return tcc_m553=((tcc_f580()-tcc_f578())+tcc_v1883);}}
static double tcc_f518(){if (tcc_p518) return tcc_m518; else {tcc_p518=T;return tcc_m518=(tcc_v1891-tcc_f553());}}
static double tcc_f541(){if (tcc_p541) return tcc_m541; else {tcc_p541=T;return tcc_m541=(tcc_f553()-tcc_v1891);}}
static double tcc_f552(){if (tcc_p552) return tcc_m552; else {tcc_p552=T;return tcc_m552=(tcc_f1846()*tcc_f553());}}
static double tcc_f550(){if (tcc_p550) return tcc_m550; else {tcc_p550=T;return tcc_m550=((tcc_f1843()-tcc_f552())/tcc_f1848());}}
static double tcc_f520(){if (tcc_p520) return tcc_m520; else {tcc_p520=T;return tcc_m520=(tcc_v1893-tcc_f550());}}
static double tcc_f515(){if (tcc_p515) return tcc_m515; else {tcc_p515=T;return tcc_m515=((tcc_v520=tcc_f520()),(tcc_v518=tcc_f518()),sqrt(((tcc_v520*tcc_v520)+(tcc_v518*tcc_v518))));}}
static int tcc_f512(){if (tcc_p512) return tcc_m512; else {tcc_p512=T;return tcc_m512=(fabs((tcc_f515()-(0.0)))<tcc_v1853);}}
static double tcc_f544(){if (tcc_p544) return tcc_m544; else {tcc_p544=T;return tcc_m544=(tcc_f550()-tcc_v1893);}}
static int tcc_f538(){if (tcc_p538) return tcc_m538; else {tcc_p538=T;return tcc_m538=((fabs(tcc_f544())<tcc_v1853)?(fabs(tcc_f541())<tcc_v1853):NIL);}}
static int tcc_f532(){if (tcc_p532) return tcc_m532; else {tcc_p532=T;return tcc_m532=((fabs((((tcc_f1848()*tcc_f550())+tcc_f552())-tcc_f1843()))<tcc_v1853)?((tcc_v538=tcc_f538()),(tcc_v538?tcc_v538:(fabs((tcc_v1877-atan2(tcc_f541(),tcc_f544())))<tcc_v1853))):NIL);}}
static double tcc_f576(){if (tcc_p576) return tcc_m576; else {tcc_p576=T;return tcc_m576=((tcc_f580()+tcc_f578())+tcc_v1883);}}
static double tcc_f529(){if (tcc_p529) return tcc_m529; else {tcc_p529=T;return tcc_m529=(tcc_v1891-tcc_f576());}}
static double tcc_f564(){if (tcc_p564) return tcc_m564; else {tcc_p564=T;return tcc_m564=(tcc_f576()-tcc_v1891);}}
static double tcc_f575(){if (tcc_p575) return tcc_m575; else {tcc_p575=T;return tcc_m575=(tcc_f1846()*tcc_f576());}}
static double tcc_f573(){if (tcc_p573) return tcc_m573; else {tcc_p573=T;return tcc_m573=((tcc_f1843()-tcc_f575())/tcc_f1848());}}
static double tcc_f531(){if (tcc_p531) return tcc_m531; else {tcc_p531=T;return tcc_m531=(tcc_v1893-tcc_f573());}}
static double tcc_f526(){if (tcc_p526) return tcc_m526; else {tcc_p526=T;return tcc_m526=((tcc_v531=tcc_f531()),(tcc_v529=tcc_f529()),sqrt(((tcc_v531*tcc_v531)+(tcc_v529*tcc_v529))));}}
static int tcc_f523(){if (tcc_p523) return tcc_m523; else {tcc_p523=T;return tcc_m523=(fabs((tcc_f526()-(0.0)))<tcc_v1853);}}
static double tcc_f567(){if (tcc_p567) return tcc_m567; else {tcc_p567=T;return tcc_m567=(tcc_f573()-tcc_v1893);}}
static int tcc_f561(){if (tcc_p561) return tcc_m561; else {tcc_p561=T;return tcc_m561=((fabs(tcc_f567())<tcc_v1853)?(fabs(tcc_f564())<tcc_v1853):NIL);}}
static double tcc_f1729(){if (tcc_p1729) return tcc_m1729; else {tcc_p1729=T;return tcc_m1729=(tcc_f1733()-tcc_f1730());}}
static double tcc_f1726(){if (tcc_p1726) return tcc_m1726; else {tcc_p1726=T;return tcc_m1726=sqrt(tcc_f1729());}}
static double tcc_f1722(){if (tcc_p1722) return tcc_m1722; else {tcc_p1722=T;return tcc_m1722=((-tcc_f1726())+tcc_v1885);}}
static double tcc_f1535(){if (tcc_p1535) return tcc_m1535; else {tcc_p1535=T;return tcc_m1535=(tcc_v1893-tcc_f1722());}}
static double tcc_f1532(){if (tcc_p1532) return tcc_m1532; else {tcc_p1532=T;return tcc_m1532=((tcc_v1535=tcc_f1535()),sqrt(((tcc_v1535*tcc_v1535)+tcc_f1604())));}}
static int tcc_f605(){if (tcc_p605) return tcc_m605; else {tcc_p605=T;return tcc_m605=(fabs((tcc_f1532()-(0.0)))<tcc_v1853);}}
static double tcc_f1666(){if (tcc_p1666) return tcc_m1666; else {tcc_p1666=T;return tcc_m1666=(tcc_f1722()-tcc_v1893);}}
static int tcc_f698(){if (tcc_p698) return tcc_m698; else {tcc_p698=T;return tcc_m698=((fabs(tcc_f1666())<tcc_v1853)?tcc_f1679():NIL);}}
static int tcc_f696(){if (tcc_p696) return tcc_m696; else {tcc_p696=T;return tcc_m696=((fabs((((tcc_f1848()*tcc_f1722())+tcc_f1689())-tcc_f1843()))<tcc_v1853)?((tcc_v698=tcc_f698()),(tcc_v698?tcc_v698:(fabs((tcc_v1877-atan2(tcc_f1681(),tcc_f1666())))<tcc_v1853))):NIL);}}
static double tcc_f1723(){if (tcc_p1723) return tcc_m1723; else {tcc_p1723=T;return tcc_m1723=(tcc_f1726()+tcc_v1885);}}
static double tcc_f1607(){if (tcc_p1607) return tcc_m1607; else {tcc_p1607=T;return tcc_m1607=(tcc_v1893-tcc_f1723());}}
static double tcc_f1602(){if (tcc_p1602) return tcc_m1602; else {tcc_p1602=T;return tcc_m1602=((tcc_v1607=tcc_f1607()),sqrt(((tcc_v1607*tcc_v1607)+tcc_f1604())));}}
static int tcc_f693(){if (tcc_p693) return tcc_m693; else {tcc_p693=T;return tcc_m693=(fabs((tcc_f1602()-(0.0)))<tcc_v1853);}}
static double tcc_f1684(){if (tcc_p1684) return tcc_m1684; else {tcc_p1684=T;return tcc_m1684=(tcc_f1723()-tcc_v1893);}}
static int tcc_f701(){if (tcc_p701) return tcc_m701; else {tcc_p701=T;return tcc_m701=((fabs(tcc_f1684())<tcc_v1853)?tcc_f1679():NIL);}}
static double tcc_f1855(){if (tcc_p1855) return tcc_m1855; else {tcc_p1855=T;return tcc_m1855=(tcc_v1870-tcc_v1857);}}
static double tcc_f676(){if (tcc_p676) return tcc_m676; else {tcc_p676=T;return tcc_m676=((tcc_v1864+((0.5)*tcc_f1855()))/tcc_v1870);}}
static int tcc_f1851(){if (tcc_p1851) return tcc_m1851; else {tcc_p1851=T;return tcc_m1851=(fabs(tcc_f1855())<tcc_v1853);}}
static int tcc_f1781(){if (tcc_p1781) return tcc_m1781; else {tcc_p1781=T;return tcc_m1781=((tcc_v1851=tcc_f1851()),(tcc_v1851?tcc_v1851:(fabs((tcc_v1870-tcc_f1791()))<tcc_v1853)));}}
static double tcc_f363(){if (tcc_p363) return tcc_m363; else {tcc_p363=T;return tcc_m363=(tcc_f1781()?(tcc_v1891+(tcc_f1215()*tcc_f1797())):tcc_f680());}}
static double tcc_f369(){if (tcc_p369) return tcc_m369; else {tcc_p369=T;return tcc_m369=(tcc_f1781()?(tcc_v1893+(tcc_f1215()*tcc_f1798())):tcc_f680());}}
static double tcc_f658(){if (tcc_p658) return tcc_m658; else {tcc_p658=T;return tcc_m658=(tcc_f1781()?(tcc_v1891+(tcc_f676()*tcc_f1797())):tcc_f680());}}
static int tcc_f682(){if (tcc_p682) return tcc_m682; else {tcc_p682=T;return tcc_m682=(tcc_f1793()?NIL:(tcc_f1785()?tcc_f1781():(tcc_f686()?tcc_f1781():T)));}}
static double tcc_f359(){if (tcc_p359) return tcc_m359; else {tcc_p359=T;return tcc_m359=(tcc_f682()?(tcc_f1793()?tcc_f680():(tcc_f1785()?tcc_f363():(tcc_f686()?tcc_f363():tcc_f655()))):tcc_f650());}}
static int tcc_f358(){if (tcc_p358) return tcc_m358; else {tcc_p358=T;return tcc_m358=(tcc_v1883==tcc_f359());}}
static double tcc_f365(){if (tcc_p365) return tcc_m365; else {tcc_p365=T;return tcc_m365=(tcc_f682()?(tcc_f1793()?tcc_f680():(tcc_f1785()?tcc_f369():(tcc_f686()?tcc_f369():tcc_f668()))):tcc_f663());}}
static int tcc_f364(){if (tcc_p364) return tcc_m364; else {tcc_p364=T;return tcc_m364=(tcc_v1885==tcc_f365());}}
static double tcc_f356(){if (tcc_p356) return tcc_m356; else {tcc_p356=T;return tcc_m356=(tcc_f364()?(tcc_f358()?tcc_f646():(0.0)):(1.0));}}
static double tcc_f351(){if (tcc_p351) return tcc_m351; else {tcc_p351=T;return tcc_m351=((tcc_f359()-tcc_v1883)/(tcc_f365()-tcc_v1885));}}
static double tcc_f344(){if (tcc_p344) return tcc_m344; else {tcc_p344=T;return tcc_m344=(tcc_f364()?(tcc_f358()?tcc_f646():tcc_f359()):(tcc_f365()+(tcc_f351()*tcc_f359())));}}
static double tcc_f350(){if (tcc_p350) return tcc_m350; else {tcc_p350=T;return tcc_m350=(tcc_f364()?(tcc_f358()?tcc_f646():(1.0)):tcc_f351());}}
static double tcc_f334(){if (tcc_p334) return tcc_m334; else {tcc_p334=T;return tcc_m334=(((tcc_f356()*(tcc_f365()+tcc_f1847()))+(tcc_f350()*(tcc_f359()+tcc_f1848())))-tcc_f344());}}
static double tcc_f343(){if (tcc_p343) return tcc_m343; else {tcc_p343=T;return tcc_m343=(((tcc_f356()*tcc_v1893)+(tcc_f350()*tcc_v1891))-tcc_f344());}}
static int tcc_f329(){if (tcc_p329) return tcc_m329; else {tcc_p329=T;return tcc_m329=(tcc_f343()>(0.0));}}
static double tcc_f649(){if (tcc_p649) return tcc_m649; else {tcc_p649=T;return tcc_m649=(tcc_f682()?(tcc_f1793()?tcc_f680():(tcc_f1785()?tcc_f658():(tcc_f686()?tcc_f658():tcc_f655()))):tcc_f650());}}
static int tcc_f648(){if (tcc_p648) return tcc_m648; else {tcc_p648=T;return tcc_m648=(tcc_v1883==tcc_f649());}}
static double tcc_f673(){if (tcc_p673) return tcc_m673; else {tcc_p673=T;return tcc_m673=(tcc_f1781()?(tcc_v1893+(tcc_f676()*tcc_f1798())):tcc_f680());}}
static double tcc_f662(){if (tcc_p662) return tcc_m662; else {tcc_p662=T;return tcc_m662=(tcc_f682()?(tcc_f1793()?tcc_f680():(tcc_f1785()?tcc_f673():(tcc_f686()?tcc_f673():tcc_f668()))):tcc_f663());}}
static int tcc_f661(){if (tcc_p661) return tcc_m661; else {tcc_p661=T;return tcc_m661=(tcc_v1885==tcc_f662());}}
static double tcc_f643(){if (tcc_p643) return tcc_m643; else {tcc_p643=T;return tcc_m643=(tcc_f661()?(tcc_f648()?tcc_f646():(0.0)):(1.0));}}
static double tcc_f638(){if (tcc_p638) return tcc_m638; else {tcc_p638=T;return tcc_m638=((tcc_f649()-tcc_v1883)/(tcc_f662()-tcc_v1885));}}
static double tcc_f631(){if (tcc_p631) return tcc_m631; else {tcc_p631=T;return tcc_m631=(tcc_f661()?(tcc_f648()?tcc_f646():tcc_f649()):(tcc_f662()+(tcc_f638()*tcc_f649())));}}
static double tcc_f637(){if (tcc_p637) return tcc_m637; else {tcc_p637=T;return tcc_m637=(tcc_f661()?(tcc_f648()?tcc_f646():(1.0)):tcc_f638());}}
static double tcc_f621(){if (tcc_p621) return tcc_m621; else {tcc_p621=T;return tcc_m621=(((tcc_f643()*(tcc_f662()+tcc_f1847()))+(tcc_f637()*(tcc_f649()+tcc_f1848())))-tcc_f631());}}
static double tcc_f630(){if (tcc_p630) return tcc_m630; else {tcc_p630=T;return tcc_m630=(((tcc_f643()*tcc_v1893)+(tcc_f637()*tcc_v1891))-tcc_f631());}}
static int tcc_f616(){if (tcc_p616) return tcc_m616; else {tcc_p616=T;return tcc_m616=(tcc_f630()>(0.0));}}
static int tcc_f610(){if (tcc_p610) return tcc_m610; else {tcc_p610=T;return tcc_m610=((tcc_v692=tcc_f692()),(tcc_v692?tcc_v692:(((fabs((tcc_f630()-(0.0)))<tcc_v1853)?T:((tcc_v621=tcc_f621()),((fabs((tcc_v621-(0.0)))<tcc_v1853)?NIL:((tcc_v621>(0.0))?tcc_f616():(tcc_f616()?NIL:T)))))?NIL:T)));}}
static int tcc_f521(){if (tcc_p521) return tcc_m521; else {tcc_p521=T;return tcc_m521=((tcc_v523=tcc_f523()),(tcc_v523?tcc_f610():(tcc_v523?NIL:T)));}}
static double_or_symbol tcc_f505(){if (tcc_p505) return tcc_m505; else {tcc_p505=T;return tcc_m505=(tcc_f521()?coerce_double_to_double_or_symbol(tcc_f526()):coerce_symbol_to_double_or_symbol(NIL));}}
static int tcc_f510(){if (tcc_p510) return tcc_m510; else {tcc_p510=T;return tcc_m510=((tcc_v512=tcc_f512()),(tcc_v512?tcc_f610():(tcc_v512?NIL:T)));}}
static double_or_symbol tcc_f502(){if (tcc_p502) return tcc_m502; else {tcc_p502=T;return tcc_m502=((tcc_v510=tcc_f510()),(tcc_v510?(tcc_v510?coerce_double_to_double_or_symbol(tcc_f515()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
static int tcc_f608(){if (tcc_p608) return tcc_m608; else {tcc_p608=T;return tcc_m608=((tcc_v693=tcc_f693()),(tcc_v693?tcc_f610():(tcc_v693?NIL:T)));}}
static double_or_symbol tcc_f598(){if (tcc_p598) return tcc_m598; else {tcc_p598=T;return tcc_m598=(tcc_f608()?coerce_double_to_double_or_symbol(tcc_f1602()):coerce_symbol_to_double_or_symbol(NIL));}}
static int tcc_f603(){if (tcc_p603) return tcc_m603; else {tcc_p603=T;return tcc_m603=((tcc_v605=tcc_f605()),(tcc_v605?tcc_f610():(tcc_v605?NIL:T)));}}
static double_or_symbol tcc_f595(){if (tcc_p595) return tcc_m595; else {tcc_p595=T;return tcc_m595=((tcc_v603=tcc_f603()),(tcc_v603?(tcc_v603?coerce_double_to_double_or_symbol(tcc_f1532()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)));}}
void tcc(tcc_a1893,tcc_a1891,tcc_a1889,tcc_a1887,tcc_a1885,tcc_a1883,tcc_a1881,tcc_a1879,tcc_a1877,tcc_a1853)
double tcc_a1893;
double tcc_a1891;
double tcc_a1889;
double tcc_a1887;
double tcc_a1885;
double tcc_a1883;
double tcc_a1881;
double tcc_a1879;
double tcc_a1877;
double tcc_a1853;
{ tcc_v1893=tcc_a1893;
  tcc_v1891=tcc_a1891;
  tcc_v1889=tcc_a1889;
  tcc_v1887=tcc_a1887;
  tcc_v1885=tcc_a1885;
  tcc_v1883=tcc_a1883;
  tcc_v1881=tcc_a1881;
  tcc_v1879=tcc_a1879;
  tcc_v1877=tcc_a1877;
  tcc_v1853=tcc_a1853;
  tcc_p797=NIL;
  tcc_p796=NIL;
  tcc_p834=NIL;
  tcc_p832=NIL;
  tcc_p838=NIL;
  tcc_p1124=NIL;
  tcc_p316=NIL;
  tcc_p315=NIL;
  tcc_p314=NIL;
  tcc_p292=NIL;
  tcc_p300=NIL;
  tcc_p312=NIL;
  tcc_p311=NIL;
  tcc_p272=NIL;
  tcc_p270=NIL;
  tcc_p291=NIL;
  tcc_p290=NIL;
  tcc_p260=NIL;
  tcc_p299=NIL;
  tcc_p268=NIL;
  tcc_p266=NIL;
  tcc_p263=NIL;
  tcc_p297=NIL;
  tcc_p304=NIL;
  tcc_p178=NIL;
  tcc_p171=NIL;
  tcc_p309=NIL;
  tcc_p258=NIL;
  tcc_p246=NIL;
  tcc_p238=NIL;
  tcc_p252=NIL;
  tcc_p247=NIL;
  tcc_p244=NIL;
  tcc_p235=NIL;
  tcc_p232=NIL;
  tcc_p225=NIL;
  tcc_p286=NIL;
  tcc_p280=NIL;
  tcc_p218=NIL;
  tcc_p209=NIL;
  tcc_p207=NIL;
  tcc_p217=NIL;
  tcc_p306=NIL;
  tcc_p180=NIL;
  tcc_p170=NIL;
  tcc_p305=NIL;
  tcc_p1215=NIL;
  tcc_p374=NIL;
  tcc_p1459=NIL;
  tcc_p837=NIL;
  tcc_p79=NIL;
  tcc_p1457=NIL;
  tcc_p600=NIL;
  tcc_p646=NIL;
  tcc_p650=NIL;
  tcc_p663=NIL;
  tcc_p680=NIL;
  tcc_p1768=NIL;
  tcc_p1770=NIL;
  tcc_p77=NIL;
  tcc_p75=NIL;
  tcc_p60=NIL;
  tcc_p74=NIL;
  tcc_p1798=NIL;
  tcc_p1797=NIL;
  tcc_p1794=NIL;
  tcc_p1785=NIL;
  tcc_p1771=NIL;
  tcc_p824=NIL;
  tcc_p818=NIL;
  tcc_p831=NIL;
  tcc_p829=NIL;
  tcc_p65=NIL;
  tcc_p825=NIL;
  tcc_p49=NIL;
  tcc_p71=NIL;
  tcc_p42=NIL;
  tcc_p41=NIL;
  tcc_p62=NIL;
  tcc_p53=NIL;
  tcc_p52=NIL;
  tcc_p39=NIL;
  tcc_p34=NIL;
  tcc_p27=NIL;
  tcc_p33=NIL;
  tcc_p17=NIL;
  tcc_p26=NIL;
  tcc_p12=NIL;
  tcc_p1758=NIL;
  tcc_p1757=NIL;
  tcc_p689=NIL;
  tcc_p687=NIL;
  tcc_p671=NIL;
  tcc_p655=NIL;
  tcc_p668=NIL;
  tcc_p686=NIL;
  tcc_p1793=NIL;
  tcc_p1792=NIL;
  tcc_p1126=NIL;
  tcc_p1121=NIL;
  tcc_p1120=NIL;
  tcc_p174=NIL;
  tcc_p173=NIL;
  tcc_p168=NIL;
  tcc_p166=NIL;
  tcc_p154=NIL;
  tcc_p165=NIL;
  tcc_p163=NIL;
  tcc_p157=NIL;
  tcc_p151=NIL;
  tcc_p145=NIL;
  tcc_p143=NIL;
  tcc_p131=NIL;
  tcc_p142=NIL;
  tcc_p140=NIL;
  tcc_p134=NIL;
  tcc_p128=NIL;
  tcc_p122=NIL;
  tcc_p121=NIL;
  tcc_p302=NIL;
  tcc_p301=NIL;
  tcc_p221=NIL;
  tcc_p198=NIL;
  tcc_p192=NIL;
  tcc_p189=NIL;
  tcc_p183=NIL;
  tcc_p220=NIL;
  tcc_p212=NIL;
  tcc_p206=NIL;
  tcc_p200=NIL;
  tcc_p182=NIL;
  tcc_p1791=NIL;
  tcc_p692=NIL;
  tcc_p707=NIL;
  tcc_p273=NIL;
  tcc_p108=NIL;
  tcc_p100=NIL;
  tcc_p95=NIL;
  tcc_p87=NIL;
  tcc_p115=NIL;
  tcc_p83=NIL;
  tcc_p80=NIL;
  tcc_p222=NIL;
  tcc_p1848=NIL;
  tcc_p1734=NIL;
  tcc_p1841=NIL;
  tcc_p1838=NIL;
  tcc_p1847=NIL;
  tcc_p1846=NIL;
  tcc_p1446=NIL;
  tcc_p1442=NIL;
  tcc_p1731=NIL;
  tcc_p1719=NIL;
  tcc_p1710=NIL;
  tcc_p1840=NIL;
  tcc_p1839=NIL;
  tcc_p1436=NIL;
  tcc_p1843=NIL;
  tcc_p1434=NIL;
  tcc_p1724=NIL;
  tcc_p1605=NIL;
  tcc_p1604=NIL;
  tcc_p1681=NIL;
  tcc_p1679=NIL;
  tcc_p1689=NIL;
  tcc_p1735=NIL;
  tcc_p587=NIL;
  tcc_p580=NIL;
  tcc_p586=NIL;
  tcc_p1732=NIL;
  tcc_p1730=NIL;
  tcc_p1842=NIL;
  tcc_p1440=NIL;
  tcc_p1438=NIL;
  tcc_p1420=NIL;
  tcc_p1374=NIL;
  tcc_p488=NIL;
  tcc_p1431=NIL;
  tcc_p480=NIL;
  tcc_p1419=NIL;
  tcc_p1371=NIL;
  tcc_p479=NIL;
  tcc_p476=NIL;
  tcc_p1836=NIL;
  tcc_p1815=NIL;
  tcc_p1813=NIL;
  tcc_p706=NIL;
  tcc_p1807=NIL;
  tcc_p1805=NIL;
  tcc_p1804=NIL;
  tcc_p1454=NIL;
  tcc_p491=NIL;
  tcc_p400=NIL;
  tcc_p387=NIL;
  tcc_p407=NIL;
  tcc_p473=NIL;
  tcc_p1453=NIL;
  tcc_p463=NIL;
  tcc_p462=NIL;
  tcc_p460=NIL;
  tcc_p458=NIL;
  tcc_p446=NIL;
  tcc_p457=NIL;
  tcc_p455=NIL;
  tcc_p449=NIL;
  tcc_p443=NIL;
  tcc_p437=NIL;
  tcc_p435=NIL;
  tcc_p423=NIL;
  tcc_p434=NIL;
  tcc_p432=NIL;
  tcc_p426=NIL;
  tcc_p420=NIL;
  tcc_p414=NIL;
  tcc_p413=NIL;
  tcc_p1452=NIL;
  tcc_p1451=NIL;
  tcc_p1415=NIL;
  tcc_p1412=NIL;
  tcc_p1335=NIL;
  tcc_p469=NIL;
  tcc_p467=NIL;
  tcc_p1413=NIL;
  tcc_p1350=NIL;
  tcc_p472=NIL;
  tcc_p470=NIL;
  tcc_p392=NIL;
  tcc_p379=NIL;
  tcc_p466=NIL;
  tcc_p373=NIL;
  tcc_p370=NIL;
  tcc_p1802=NIL;
  tcc_p1733=NIL;
  tcc_p583=NIL;
  tcc_p578=NIL;
  tcc_p553=NIL;
  tcc_p518=NIL;
  tcc_p541=NIL;
  tcc_p552=NIL;
  tcc_p550=NIL;
  tcc_p520=NIL;
  tcc_p515=NIL;
  tcc_p512=NIL;
  tcc_p544=NIL;
  tcc_p538=NIL;
  tcc_p532=NIL;
  tcc_p576=NIL;
  tcc_p529=NIL;
  tcc_p564=NIL;
  tcc_p575=NIL;
  tcc_p573=NIL;
  tcc_p531=NIL;
  tcc_p526=NIL;
  tcc_p523=NIL;
  tcc_p567=NIL;
  tcc_p561=NIL;
  tcc_p1729=NIL;
  tcc_p1726=NIL;
  tcc_p1722=NIL;
  tcc_p1535=NIL;
  tcc_p1532=NIL;
  tcc_p605=NIL;
  tcc_p1666=NIL;
  tcc_p698=NIL;
  tcc_p696=NIL;
  tcc_p1723=NIL;
  tcc_p1607=NIL;
  tcc_p1602=NIL;
  tcc_p693=NIL;
  tcc_p1684=NIL;
  tcc_p701=NIL;
  tcc_p1855=NIL;
  tcc_p676=NIL;
  tcc_p1851=NIL;
  tcc_p1781=NIL;
  tcc_p363=NIL;
  tcc_p369=NIL;
  tcc_p658=NIL;
  tcc_p682=NIL;
  tcc_p359=NIL;
  tcc_p358=NIL;
  tcc_p365=NIL;
  tcc_p364=NIL;
  tcc_p356=NIL;
  tcc_p351=NIL;
  tcc_p344=NIL;
  tcc_p350=NIL;
  tcc_p334=NIL;
  tcc_p343=NIL;
  tcc_p329=NIL;
  tcc_p649=NIL;
  tcc_p648=NIL;
  tcc_p673=NIL;
  tcc_p662=NIL;
  tcc_p661=NIL;
  tcc_p643=NIL;
  tcc_p638=NIL;
  tcc_p631=NIL;
  tcc_p637=NIL;
  tcc_p621=NIL;
  tcc_p630=NIL;
  tcc_p616=NIL;
  tcc_p610=NIL;
  tcc_p521=NIL;
  tcc_p505=NIL;
  tcc_p510=NIL;
  tcc_p502=NIL;
  tcc_p608=NIL;
  tcc_p598=NIL;
  tcc_p603=NIL;
  tcc_p595=NIL;
  double_or_symbol_result=((tcc_v1875=(tcc_v1893-tcc_v1885)),(tcc_v1873=(tcc_v1891-tcc_v1883)),(tcc_v1871=((tcc_v1875*tcc_v1875)+(tcc_v1873*tcc_v1873))),(tcc_v1870=sqrt(tcc_v1871)),(tcc_v1869=(tcc_v1893-tcc_v1889)),(tcc_v1867=(tcc_v1891-tcc_v1887)),(tcc_v1864=sqrt(((tcc_v1869*tcc_v1869)+(tcc_v1867*tcc_v1867)))),(tcc_v1863=(tcc_v1885-tcc_v1881)),(tcc_v1861=(tcc_v1883-tcc_v1879)),(tcc_v1858=sqrt(((tcc_v1863*tcc_v1863)+(tcc_v1861*tcc_v1861)))),(tcc_v1857=(tcc_v1864+tcc_v1858)),(tcc_v1856=(tcc_v1870>tcc_v1857)),((tcc_v1856?tcc_v1856:tcc_f1851())?((fabs((tcc_f706()-tcc_f1802()))<tcc_v1853)?coerce_symbol_to_double_or_symbol(NIL):(tcc_f1734()?((tcc_f1729()<0.0)?coerce_symbol_to_double_or_symbol(NIL):(((fabs((((tcc_f1848()*tcc_f1723())+tcc_f1689())-tcc_f1843()))<tcc_v1853)?((tcc_v701=tcc_f701()),(tcc_v701?tcc_v701:(fabs((tcc_v1877-atan2(tcc_f1681(),tcc_f1684())))<tcc_v1853))):NIL)?(tcc_f696()?(tcc_f608()?((tcc_v603=tcc_f603()),((tcc_v603?tcc_v603:NIL)?coerce_double_to_double_or_symbol((tcc_v603?((tcc_v1602=tcc_f1602()),(tcc_v1532=tcc_f1532()),((tcc_v1602<tcc_v1532)?tcc_v1602:tcc_v1532)):tcc_f600())):tcc_f598())):tcc_f595()):(tcc_f608()?tcc_f598():coerce_symbol_to_double_or_symbol(NIL))):(tcc_f696()?tcc_f595():coerce_symbol_to_double_or_symbol(NIL)))):((tcc_f583()<0.0)?coerce_symbol_to_double_or_symbol(NIL):(((fabs((((tcc_f1848()*tcc_f573())+tcc_f575())-tcc_f1843()))<tcc_v1853)?((tcc_v561=tcc_f561()),(tcc_v561?tcc_v561:(fabs((tcc_v1877-atan2(tcc_f564(),tcc_f567())))<tcc_v1853))):NIL)?(tcc_f532()?(tcc_f521()?((tcc_v510=tcc_f510()),((tcc_v510?tcc_v510:NIL)?coerce_double_to_double_or_symbol((tcc_v510?((tcc_v526=tcc_f526()),(tcc_v515=tcc_f515()),((tcc_v526<tcc_v515)?tcc_v526:tcc_v515)):tcc_f600())):tcc_f505())):tcc_f502()):(tcc_f521()?tcc_f505():coerce_symbol_to_double_or_symbol(NIL))):(tcc_f532()?tcc_f502():coerce_symbol_to_double_or_symbol(NIL)))))):((tcc_v1864<tcc_v1858)?((tcc_f1734()?(tcc_f1451()?tcc_f473():tcc_f466()):(tcc_f462()?tcc_f473():tcc_f413()))?((tcc_v370=tcc_f370()),((tcc_v370?((tcc_v692=tcc_f692()),(tcc_v692?tcc_v692:(((fabs((tcc_f343()-(0.0)))<tcc_v1853)?T:((tcc_v334=tcc_f334()),((fabs((tcc_v334-(0.0)))<tcc_v1853)?NIL:((tcc_v334>(0.0))?tcc_f329():(tcc_f329()?NIL:T)))))?NIL:T))):(tcc_v370?NIL:T))?coerce_double_to_double_or_symbol(tcc_f373()):coerce_symbol_to_double_or_symbol(NIL))):coerce_symbol_to_double_or_symbol(NIL)):((tcc_f314()?(tcc_f301()?tcc_f222():tcc_f182()):(tcc_f173()?tcc_f222():tcc_f121()))?((tcc_v80=tcc_f80()),((tcc_v80?((tcc_v79=tcc_f79()),(tcc_v79?tcc_v79:(((fabs((tcc_f26()-(0.0)))<tcc_v1853)?T:((tcc_v17=tcc_f17()),((fabs((tcc_v17-(0.0)))<tcc_v1853)?NIL:((tcc_v17>(0.0))?tcc_f12():(tcc_f12()?NIL:T)))))?NIL:T))):(tcc_v80?NIL:T))?coerce_double_to_double_or_symbol(tcc_f83()):coerce_symbol_to_double_or_symbol(NIL))):coerce_symbol_to_double_or_symbol(NIL))))); return;}
