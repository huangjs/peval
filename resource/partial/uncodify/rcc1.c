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
double rcc1_v1858;
double rcc1_v1856;
double rcc1_v1854;
double rcc1_v1852;
double rcc1_v1850;
double rcc1_v1848;
double rcc1_v1846;
double rcc1_v1844;
double rcc1_v1842;
double rcc1_v1840;
double rcc1_v1816;
double rcc1_v1838;
double rcc1_v1836;
double rcc1_v1834;
double rcc1_v1833;
double rcc1_v1832;
double rcc1_v1830;
double rcc1_v1827;
double rcc1_v1826;
double rcc1_v1824;
double rcc1_v1821;
double rcc1_v1820;
int rcc1_v1819;
int rcc1_p42;
double rcc1_m42;
int rcc1_p44;
double rcc1_m44;
int rcc1_p1066;
double rcc1_m1066;
int rcc1_p1067;
double rcc1_m1067;
int rcc1_p1104;
double rcc1_m1104;
double rcc1_v1104;
int rcc1_p1102;
int rcc1_m1102;
int rcc1_p1108;
int rcc1_m1108;
int rcc1_p1131;
double rcc1_m1131;
int rcc1_p1407;
double rcc1_m1407;
int rcc1_p1429;
double rcc1_m1429;
int rcc1_p1107;
double rcc1_m1107;
int rcc1_p242;
int rcc1_m242;
int rcc1_p1427;
double rcc1_m1427;
int rcc1_p582;
double rcc1_m582;
int rcc1_p599;
double rcc1_m599;
int rcc1_p603;
double rcc1_m603;
int rcc1_p649;
double rcc1_m649;
int rcc1_p653;
double rcc1_m653;
int rcc1_p657;
double rcc1_m657;
int rcc1_p690;
double rcc1_m690;
int rcc1_p1730;
double rcc1_m1730;
int rcc1_p1732;
double rcc1_m1732;
int rcc1_p240;
double rcc1_m240;
double rcc1_v240;
int rcc1_p238;
double rcc1_m238;
int rcc1_p223;
double rcc1_m223;
int rcc1_p237;
int rcc1_m237;
int rcc1_p1760;
double rcc1_m1760;
int rcc1_p1759;
double rcc1_m1759;
double rcc1_v1760;
double rcc1_v1759;
int rcc1_p1756;
double rcc1_m1756;
int rcc1_p1747;
int rcc1_m1747;
int rcc1_p1733;
double rcc1_m1733;
int rcc1_p1094;
int rcc1_m1094;
int rcc1_p1088;
double rcc1_m1088;
int rcc1_p1101;
double rcc1_m1101;
int rcc1_p1099;
int rcc1_m1099;
int rcc1_v1094;
int rcc1_p228;
double rcc1_m228;
int rcc1_v1099;
int rcc1_p1095;
int rcc1_m1095;
int rcc1_p234;
int rcc1_m234;
int rcc1_p225;
double rcc1_m225;
int rcc1_p217;
double rcc1_m217;
int rcc1_p199;
double rcc1_m199;
int rcc1_p198;
int rcc1_m198;
int rcc1_p211;
double rcc1_m211;
int rcc1_p205;
double rcc1_m205;
int rcc1_p197;
double rcc1_m197;
int rcc1_p173;
double rcc1_m173;
int rcc1_p189;
double rcc1_m189;
int rcc1_p196;
int rcc1_m196;
int rcc1_p182;
double rcc1_m182;
int rcc1_p194;
double rcc1_m194;
int rcc1_p188;
double rcc1_m188;
double rcc1_v173;
int rcc1_p165;
double rcc1_m165;
int rcc1_p181;
double rcc1_m181;
int rcc1_p160;
int rcc1_m160;
int rcc1_v242;
double rcc1_v165;
int rcc1_p153;
int rcc1_m153;
int rcc1_p1719;
double rcc1_m1719;
int rcc1_p1720;
double rcc1_m1720;
int rcc1_p698;
double rcc1_m698;
double rcc1_v698;
int rcc1_p696;
double rcc1_m696;
int rcc1_p682;
double rcc1_m682;
int rcc1_p679;
double rcc1_m679;
int rcc1_p667;
double rcc1_m667;
int rcc1_p695;
int rcc1_m695;
int rcc1_p1755;
int rcc1_m1755;
int rcc1_p1754;
double rcc1_m1754;
int rcc1_p1133;
double rcc1_m1133;
double rcc1_v1133;
double rcc1_v1131;
int rcc1_p1128;
double rcc1_m1128;
int rcc1_p1753;
double rcc1_m1753;
int rcc1_p701;
int rcc1_m701;
int rcc1_p1647;
double rcc1_m1647;
int rcc1_p1646;
double rcc1_m1646;
double rcc1_v1646;
double rcc1_v1647;
int rcc1_p1113;
double rcc1_m1113;
int rcc1_p1046;
int rcc1_m1046;
int rcc1_p1112;
double rcc1_m1112;
int rcc1_p1012;
double rcc1_m1012;
int rcc1_p1011;
double rcc1_m1011;
int rcc1_p1645;
double rcc1_m1645;
int rcc1_p1769;
double rcc1_m1769;
int rcc1_p1767;
double rcc1_m1767;
int rcc1_p993;
double rcc1_m993;
double rcc1_v1769;
double rcc1_v1767;
int rcc1_p1765;
double rcc1_m1765;
int rcc1_p1699;
int rcc1_m1699;
int rcc1_p1764;
double rcc1_m1764;
int rcc1_p1666;
double rcc1_m1666;
int rcc1_p1665;
double rcc1_m1665;
int rcc1_p575;
double rcc1_m575;
int rcc1_p1799;
double rcc1_m1799;
int rcc1_p1797;
double rcc1_m1797;
int rcc1_p273;
int rcc1_m273;
double rcc1_v1799;
double rcc1_v1797;
int rcc1_p1794;
double rcc1_m1794;
int rcc1_p1137;
double rcc1_m1137;
int rcc1_p1812;
double rcc1_m1812;
int rcc1_p1809;
double rcc1_m1809;
int rcc1_p739;
int rcc1_m739;
double rcc1_v1812;
double rcc1_v1809;
int rcc1_p1801;
double rcc1_m1801;
int rcc1_p1793;
double rcc1_m1793;
int rcc1_p1791;
double rcc1_m1791;
double rcc1_v1791;
int rcc1_p1790;
double rcc1_m1790;
double rcc1_v1137;
int rcc1_p1134;
double rcc1_m1134;
double rcc1_v1134;
int rcc1_p1024;
double rcc1_m1024;
double rcc1_v1128;
int rcc1_p130;
double rcc1_m130;
int rcc1_p126;
double rcc1_m126;
int rcc1_p121;
double rcc1_m121;
double rcc1_v130;
int rcc1_p128;
double rcc1_m128;
int rcc1_p127;
int rcc1_m127;
int rcc1_p125;
double rcc1_m125;
int rcc1_p124;
double rcc1_m124;
int rcc1_p120;
double rcc1_m120;
int rcc1_p84;
double rcc1_m84;
int rcc1_p83;
double rcc1_m83;
double rcc1_v83;
int rcc1_p71;
int rcc1_m71;
int rcc1_v71;
int rcc1_p70;
int rcc1_m70;
int rcc1_p67;
double rcc1_m67;
int rcc1_p69;
double rcc1_m69;
int rcc1_p68;
int rcc1_m68;
int rcc1_v68;
int rcc1_p62;
int rcc1_m62;
int rcc1_p61;
int rcc1_m61;
int rcc1_p59;
int rcc1_m59;
int rcc1_v59;
int rcc1_p53;
int rcc1_m53;
int rcc1_p114;
double rcc1_m114;
int rcc1_p113;
double rcc1_m113;
double rcc1_v113;
int rcc1_p101;
int rcc1_m101;
int rcc1_v101;
int rcc1_p100;
int rcc1_m100;
int rcc1_p98;
int rcc1_m98;
int rcc1_v100;
int rcc1_v98;
int rcc1_p92;
int rcc1_m92;
int rcc1_p1035;
double rcc1_m1035;
int rcc1_p1116;
int rcc1_m1116;
int rcc1_p1127;
double rcc1_m1127;
double rcc1_v1127;
int rcc1_p1042;
int rcc1_m1042;
int rcc1_p1041;
int rcc1_m1041;
int rcc1_p1126;
double rcc1_m1126;
int rcc1_p1124;
int rcc1_m1124;
int rcc1_v1041;
int rcc1_p265;
double rcc1_m265;
double rcc1_v265;
int rcc1_p256;
double rcc1_m256;
int rcc1_p255;
double rcc1_m255;
double rcc1_v255;
int rcc1_p243;
int rcc1_m243;
int rcc1_v243;
int rcc1_p152;
int rcc1_m152;
int rcc1_p40;
double rcc1_m40;
int rcc1_p149;
double rcc1_m149;
int rcc1_p151;
double rcc1_m151;
int rcc1_p150;
int rcc1_m150;
int rcc1_v150;
int rcc1_p144;
int rcc1_m144;
int rcc1_p141;
int rcc1_m141;
int rcc1_v144;
int rcc1_v141;
int rcc1_p135;
int rcc1_m135;
int rcc1_v1124;
int rcc1_p1118;
int rcc1_m1118;
int rcc1_v144;
int rcc1_p36;
double rcc1_m36;
int rcc1_p16;
int rcc1_m16;
int rcc1_v1118;
int rcc1_v1116;
int rcc1_p271;
int rcc1_m271;
int rcc1_p132;
int rcc1_m132;
double rcc1_v1793;
int rcc1_p1788;
double rcc1_m1788;
double rcc1_v1788;
int rcc1_p1678;
double rcc1_m1678;
int rcc1_p1677;
double rcc1_m1677;
int rcc1_p1689;
double rcc1_m1689;
int rcc1_p1688;
double rcc1_m1688;
int rcc1_p729;
double rcc1_m729;
int rcc1_p1787;
double rcc1_m1787;
int rcc1_p1785;
double rcc1_m1785;
double rcc1_v1785;
int rcc1_p1784;
double rcc1_m1784;
double rcc1_v1427;
int rcc1_p1424;
double rcc1_m1424;
double rcc1_v1424;
int rcc1_p366;
double rcc1_m366;
int rcc1_p362;
double rcc1_m362;
int rcc1_p357;
double rcc1_m357;
double rcc1_v366;
int rcc1_p364;
double rcc1_m364;
int rcc1_p361;
double rcc1_m361;
int rcc1_p360;
double rcc1_m360;
int rcc1_p356;
double rcc1_m356;
int rcc1_p320;
double rcc1_m320;
int rcc1_p319;
double rcc1_m319;
double rcc1_v319;
int rcc1_p307;
int rcc1_m307;
int rcc1_p350;
double rcc1_m350;
int rcc1_p349;
double rcc1_m349;
double rcc1_v349;
int rcc1_p337;
int rcc1_m337;
int rcc1_p1412;
int rcc1_m1412;
int rcc1_p1423;
double rcc1_m1423;
int rcc1_p1385;
int rcc1_m1385;
int rcc1_p1422;
double rcc1_m1422;
int rcc1_p1420;
int rcc1_m1420;
int rcc1_v1385;
int rcc1_p475;
double rcc1_m475;
double rcc1_v475;
int rcc1_p466;
double rcc1_m466;
int rcc1_p465;
double rcc1_m465;
double rcc1_v465;
int rcc1_p453;
int rcc1_m453;
int rcc1_v1420;
int rcc1_p1414;
int rcc1_m1414;
double rcc1_v1787;
int rcc1_p1782;
double rcc1_m1782;
double rcc1_v1782;
int rcc1_p574;
double rcc1_m574;
int rcc1_p570;
double rcc1_m570;
int rcc1_p565;
double rcc1_m565;
double rcc1_v574;
int rcc1_p572;
double rcc1_m572;
int rcc1_p569;
double rcc1_m569;
int rcc1_p568;
double rcc1_m568;
int rcc1_p564;
double rcc1_m564;
int rcc1_p528;
double rcc1_m528;
int rcc1_p527;
double rcc1_m527;
double rcc1_v527;
int rcc1_p515;
int rcc1_m515;
int rcc1_p558;
double rcc1_m558;
int rcc1_p557;
double rcc1_m557;
double rcc1_v557;
int rcc1_p545;
int rcc1_m545;
int rcc1_p1770;
int rcc1_m1770;
int rcc1_p1781;
double rcc1_m1781;
int rcc1_p1694;
int rcc1_m1694;
int rcc1_p1780;
double rcc1_m1780;
int rcc1_p1778;
int rcc1_m1778;
int rcc1_v1694;
int rcc1_p727;
double rcc1_m727;
double rcc1_v727;
int rcc1_p718;
double rcc1_m718;
int rcc1_p717;
double rcc1_m717;
double rcc1_v717;
int rcc1_p702;
int rcc1_m702;
int rcc1_v1778;
int rcc1_p1772;
int rcc1_m1772;
int rcc1_p1818;
double rcc1_m1818;
int rcc1_p687;
double rcc1_m687;
int rcc1_p1814;
int rcc1_m1814;
int rcc1_v1814;
int rcc1_p1743;
int rcc1_m1743;
int rcc1_p452;
double rcc1_m452;
int rcc1_p449;
double rcc1_m449;
int rcc1_p445;
double rcc1_m445;
int rcc1_p442;
double rcc1_m442;
int rcc1_p692;
int rcc1_m692;
int rcc1_p434;
double rcc1_m434;
int rcc1_p433;
int rcc1_m433;
int rcc1_p436;
double rcc1_m436;
int rcc1_p411;
double rcc1_m411;
int rcc1_p435;
int rcc1_m435;
int rcc1_p431;
double rcc1_m431;
int rcc1_p426;
double rcc1_m426;
int rcc1_p419;
double rcc1_m419;
int rcc1_p425;
double rcc1_m425;
double rcc1_v411;
int rcc1_p403;
double rcc1_m403;
int rcc1_p418;
double rcc1_m418;
int rcc1_p398;
int rcc1_m398;
int rcc1_v701;
double rcc1_v403;
int rcc1_p391;
int rcc1_m391;
int rcc1_v307;
int rcc1_p306;
int rcc1_m306;
int rcc1_p303;
double rcc1_m303;
int rcc1_p305;
double rcc1_m305;
int rcc1_p304;
int rcc1_m304;
int rcc1_v304;
int rcc1_p298;
int rcc1_m298;
int rcc1_p295;
int rcc1_m295;
int rcc1_v337;
int rcc1_p336;
int rcc1_m336;
int rcc1_p334;
int rcc1_m334;
int rcc1_v453;
int rcc1_p390;
int rcc1_m390;
int rcc1_p371;
double_or_symbol rcc1_m371;
int rcc1_p387;
double rcc1_m387;
int rcc1_p389;
double rcc1_m389;
int rcc1_p388;
int rcc1_m388;
int rcc1_v388;
int rcc1_p382;
int rcc1_m382;
int rcc1_p379;
int rcc1_m379;
int rcc1_v382;
int rcc1_v379;
int rcc1_p367;
double_or_symbol rcc1_m367;
int rcc1_p684;
double rcc1_m684;
int rcc1_p676;
double rcc1_m676;
int rcc1_p656;
double rcc1_m656;
int rcc1_p655;
int rcc1_m655;
int rcc1_p670;
double rcc1_m670;
int rcc1_p664;
double rcc1_m664;
int rcc1_p652;
double rcc1_m652;
int rcc1_p626;
double rcc1_m626;
int rcc1_p642;
double rcc1_m642;
int rcc1_p651;
int rcc1_m651;
int rcc1_p635;
double rcc1_m635;
int rcc1_p647;
double rcc1_m647;
int rcc1_p641;
double rcc1_m641;
double rcc1_v626;
int rcc1_p618;
double rcc1_m618;
int rcc1_p634;
double rcc1_m634;
int rcc1_p613;
int rcc1_m613;
int rcc1_v701;
double rcc1_v618;
int rcc1_p606;
int rcc1_m606;
int rcc1_v515;
int rcc1_p514;
int rcc1_m514;
int rcc1_p511;
double rcc1_m511;
int rcc1_p513;
double rcc1_m513;
int rcc1_p512;
int rcc1_m512;
int rcc1_v512;
int rcc1_p506;
int rcc1_m506;
int rcc1_p503;
int rcc1_m503;
int rcc1_v545;
int rcc1_p544;
int rcc1_m544;
int rcc1_p542;
int rcc1_m542;
int rcc1_v702;
int rcc1_p605;
int rcc1_m605;
int rcc1_p580;
double_or_symbol rcc1_m580;
int rcc1_p598;
double rcc1_m598;
int rcc1_p602;
double rcc1_m602;
int rcc1_p601;
int rcc1_m601;
int rcc1_v601;
int rcc1_p593;
int rcc1_m593;
int rcc1_p590;
int rcc1_m590;
int rcc1_v593;
int rcc1_v590;
int rcc1_p576;
double_or_symbol rcc1_m576;
int rcc1_v1772;
double rcc1_v1781;
int rcc1_v544;
int rcc1_v542;
int rcc1_v506;
int rcc1_v503;
double rcc1_v558;
double rcc1_v528;
int rcc1_v1414;
int rcc1_v1412;
double rcc1_v1423;
int rcc1_v336;
int rcc1_v334;
int rcc1_v298;
int rcc1_v295;
double rcc1_v350;
double rcc1_v320;
int rcc1_v273;
double rcc1_v114;
double rcc1_v84;
static double rcc1_f42(){if (rcc1_p42) return rcc1_m42; else {rcc1_p42=T;return rcc1_m42=error("Non-numeric argument to MIN");}}
static double rcc1_f44(){if (rcc1_p44) return rcc1_m44; else {rcc1_p44=T;return rcc1_m44=error("Argument DIRECTION not of type FLOAT");}}
static double rcc1_f1066(){if (rcc1_p1066) return rcc1_m1066; else {rcc1_p1066=T;return rcc1_m1066=(rcc1_v1836/rcc1_v1833);}}
static double rcc1_f1067(){if (rcc1_p1067) return rcc1_m1067; else {rcc1_p1067=T;return rcc1_m1067=(rcc1_v1838/rcc1_v1833);}}
static double rcc1_f1104(){if (rcc1_p1104) return rcc1_m1104; else {rcc1_p1104=T;return rcc1_m1104=(rcc1_v1821+rcc1_v1827);}}
static int rcc1_f1102(){if (rcc1_p1102) return rcc1_m1102; else {rcc1_p1102=T;return rcc1_m1102=((rcc1_v1104=rcc1_f1104()),(rcc1_v1834>(rcc1_v1104*rcc1_v1104)));}}
static int rcc1_f1108(){if (rcc1_p1108) return rcc1_m1108; else {rcc1_p1108=T;return rcc1_m1108=(rcc1_v1834==0.0);}}
static double rcc1_f1131(){if (rcc1_p1131) return rcc1_m1131; else {rcc1_p1131=T;return rcc1_m1131=(rcc1_v1856-rcc1_v1856);}}
static double rcc1_f1407(){if (rcc1_p1407) return rcc1_m1407; else {rcc1_p1407=T;return rcc1_m1407=(-(rcc1_v1827/rcc1_v1833));}}
static double rcc1_f1429(){if (rcc1_p1429) return rcc1_m1429; else {rcc1_p1429=T;return rcc1_m1429=(rcc1_v1821-rcc1_v1827);}}
static double rcc1_f1107(){if (rcc1_p1107) return rcc1_m1107; else {rcc1_p1107=T;return rcc1_m1107=fabs(rcc1_f1429());}}
static int rcc1_f242(){if (rcc1_p242) return rcc1_m242; else {rcc1_p242=T;return rcc1_m242=(rcc1_f1108()?(rcc1_f1107()<rcc1_v1816):NIL);}}
static double rcc1_f1427(){if (rcc1_p1427) return rcc1_m1427; else {rcc1_p1427=T;return rcc1_m1427=(rcc1_v1850-(rcc1_v1850+rcc1_f1429()));}}
static double rcc1_f582(){if (rcc1_p582) return rcc1_m582; else {rcc1_p582=T;return rcc1_m582=error("Non-numeric argument to MAX");}}
static double rcc1_f599(){if (rcc1_p599) return rcc1_m599; else {rcc1_p599=T;return rcc1_m599=error("Argument X not of type FLOAT");}}
static double rcc1_f603(){if (rcc1_p603) return rcc1_m603; else {rcc1_p603=T;return rcc1_m603=error("Argument X not of type REAL");}}
static double rcc1_f649(){if (rcc1_p649) return rcc1_m649; else {rcc1_p649=T;return rcc1_m649=error("Can't form tangent when points are the same");}}
static double rcc1_f653(){if (rcc1_p653) return rcc1_m653; else {rcc1_p653=T;return rcc1_m653=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rcc1_f657(){if (rcc1_p657) return rcc1_m657; else {rcc1_p657=T;return rcc1_m657=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double rcc1_f690(){if (rcc1_p690) return rcc1_m690; else {rcc1_p690=T;return rcc1_m690=error("SLOT-VALUE called on non-instance");}}
static double rcc1_f1730(){if (rcc1_p1730) return rcc1_m1730; else {rcc1_p1730=T;return rcc1_m1730=(rcc1_v1821*rcc1_v1821);}}
static double rcc1_f1732(){if (rcc1_p1732) return rcc1_m1732; else {rcc1_p1732=T;return rcc1_m1732=(rcc1_v1827*rcc1_v1827);}}
static double rcc1_f240(){if (rcc1_p240) return rcc1_m240; else {rcc1_p240=T;return rcc1_m240=(((rcc1_v1834+rcc1_f1730())-rcc1_f1732())/((2.0)*rcc1_v1833));}}
static double rcc1_f238(){if (rcc1_p238) return rcc1_m238; else {rcc1_p238=T;return rcc1_m238=((rcc1_v240=rcc1_f240()),(rcc1_f1730()-(rcc1_v240*rcc1_v240)));}}
static double rcc1_f223(){if (rcc1_p223) return rcc1_m223; else {rcc1_p223=T;return rcc1_m223=sqrt(rcc1_f238());}}
static int rcc1_f237(){if (rcc1_p237) return rcc1_m237; else {rcc1_p237=T;return rcc1_m237=(rcc1_f238()<0.0);}}
static double rcc1_f1760(){if (rcc1_p1760) return rcc1_m1760; else {rcc1_p1760=T;return rcc1_m1760=(rcc1_v1850-rcc1_v1858);}}
static double rcc1_f1759(){if (rcc1_p1759) return rcc1_m1759; else {rcc1_p1759=T;return rcc1_m1759=(rcc1_v1848-rcc1_v1856);}}
static double rcc1_f1756(){if (rcc1_p1756) return rcc1_m1756; else {rcc1_p1756=T;return rcc1_m1756=((rcc1_v1760=rcc1_f1760()),(rcc1_v1759=rcc1_f1759()),((rcc1_v1760*rcc1_v1760)+(rcc1_v1759*rcc1_v1759)));}}
static int rcc1_f1747(){if (rcc1_p1747) return rcc1_m1747; else {rcc1_p1747=T;return rcc1_m1747=(rcc1_f1756()>(rcc1_v1820*rcc1_v1820));}}
static double rcc1_f1733(){if (rcc1_p1733) return rcc1_m1733; else {rcc1_p1733=T;return rcc1_m1733=sqrt(rcc1_f1756());}}
static int rcc1_f1094(){if (rcc1_p1094) return rcc1_m1094; else {rcc1_p1094=T;return rcc1_m1094=(rcc1_f1733()>rcc1_f1104());}}
static double rcc1_f1088(){if (rcc1_p1088) return rcc1_m1088; else {rcc1_p1088=T;return rcc1_m1088=(rcc1_v1821/rcc1_f1733());}}
static double rcc1_f1101(){if (rcc1_p1101) return rcc1_m1101; else {rcc1_p1101=T;return rcc1_m1101=(rcc1_f1733()-rcc1_f1104());}}
static int rcc1_f1099(){if (rcc1_p1099) return rcc1_m1099; else {rcc1_p1099=T;return rcc1_m1099=(fabs(rcc1_f1101())<rcc1_v1816);}}
static double rcc1_f228(){if (rcc1_p228) return rcc1_m228; else {rcc1_p228=T;return rcc1_m228=((rcc1_v1094=rcc1_f1094()),((rcc1_v1094?rcc1_v1094:rcc1_f1099())?((rcc1_v1821+((0.5)*rcc1_f1101()))/rcc1_f1733()):((rcc1_v1821<rcc1_v1827)?(-rcc1_f1088()):(rcc1_f1088()+(1.0)))));}}
static int rcc1_f1095(){if (rcc1_p1095) return rcc1_m1095; else {rcc1_p1095=T;return rcc1_m1095=((rcc1_v1099=rcc1_f1099()),(rcc1_v1099?rcc1_v1099:(fabs((rcc1_f1733()-rcc1_f1107()))<rcc1_v1816)));}}
static int rcc1_f234(){if (rcc1_p234) return rcc1_m234; else {rcc1_p234=T;return rcc1_m234=(rcc1_f1108()?NIL:(rcc1_f1102()?rcc1_f1095():(rcc1_f237()?rcc1_f1095():T)));}}
static double rcc1_f225(){if (rcc1_p225) return rcc1_m225; else {rcc1_p225=T;return rcc1_m225=(rcc1_f1095()?(rcc1_v1850+(rcc1_f228()*rcc1_v1838)):rcc1_f690());}}
static double rcc1_f217(){if (rcc1_p217) return rcc1_m217; else {rcc1_p217=T;return rcc1_m217=(rcc1_f1108()?rcc1_f690():(rcc1_f1102()?rcc1_f225():(rcc1_f237()?rcc1_f225():(rcc1_v1850+((rcc1_f240()*rcc1_f1067())-(rcc1_f223()*rcc1_f1066()))))));}}
static double rcc1_f199(){if (rcc1_p199) return rcc1_m199; else {rcc1_p199=T;return rcc1_m199=(rcc1_f234()?rcc1_f217():rcc1_f657());}}
static int rcc1_f198(){if (rcc1_p198) return rcc1_m198; else {rcc1_p198=T;return rcc1_m198=(rcc1_v1858==rcc1_f199());}}
static double rcc1_f211(){if (rcc1_p211) return rcc1_m211; else {rcc1_p211=T;return rcc1_m211=(rcc1_f1095()?(rcc1_v1848+(rcc1_f228()*rcc1_v1836)):rcc1_f690());}}
static double rcc1_f205(){if (rcc1_p205) return rcc1_m205; else {rcc1_p205=T;return rcc1_m205=(rcc1_f1108()?rcc1_f690():(rcc1_f1102()?rcc1_f211():(rcc1_f237()?rcc1_f211():(rcc1_v1848+(rcc1_f240()*rcc1_f1066())+(rcc1_f223()*rcc1_f1067())))));}}
static double rcc1_f197(){if (rcc1_p197) return rcc1_m197; else {rcc1_p197=T;return rcc1_m197=(rcc1_f234()?rcc1_f205():rcc1_f653());}}
static double rcc1_f173(){if (rcc1_p173) return rcc1_m173; else {rcc1_p173=T;return rcc1_m173=(atan2((rcc1_f197()-rcc1_v1840),(rcc1_f199()-rcc1_v1842))+(1.5707963267948966));}}
static double rcc1_f189(){if (rcc1_p189) return rcc1_m189; else {rcc1_p189=T;return rcc1_m189=((rcc1_f197()-rcc1_v1856)/(rcc1_f199()-rcc1_v1858));}}
static int rcc1_f196(){if (rcc1_p196) return rcc1_m196; else {rcc1_p196=T;return rcc1_m196=(rcc1_v1856==rcc1_f197());}}
static double rcc1_f182(){if (rcc1_p182) return rcc1_m182; else {rcc1_p182=T;return rcc1_m182=(rcc1_f198()?(rcc1_f196()?rcc1_f649():rcc1_f197()):(rcc1_f199()+(rcc1_f189()*rcc1_f197())));}}
static double rcc1_f194(){if (rcc1_p194) return rcc1_m194; else {rcc1_p194=T;return rcc1_m194=(rcc1_f198()?(rcc1_f196()?rcc1_f649():(0.0)):(1.0));}}
static double rcc1_f188(){if (rcc1_p188) return rcc1_m188; else {rcc1_p188=T;return rcc1_m188=(rcc1_f198()?(rcc1_f196()?rcc1_f649():(1.0)):rcc1_f189());}}
static double rcc1_f165(){if (rcc1_p165) return rcc1_m165; else {rcc1_p165=T;return rcc1_m165=((rcc1_v173=rcc1_f173()),(((rcc1_f194()*(rcc1_f199()+cos(rcc1_v173)))+(rcc1_f188()*(rcc1_f197()+sin(rcc1_v173))))-rcc1_f182()));}}
static double rcc1_f181(){if (rcc1_p181) return rcc1_m181; else {rcc1_p181=T;return rcc1_m181=(((rcc1_f194()*rcc1_v1850)+(rcc1_f188()*rcc1_v1848))-rcc1_f182());}}
static int rcc1_f160(){if (rcc1_p160) return rcc1_m160; else {rcc1_p160=T;return rcc1_m160=(rcc1_f181()>(0.0));}}
static int rcc1_f153(){if (rcc1_p153) return rcc1_m153; else {rcc1_p153=T;return rcc1_m153=((rcc1_v242=rcc1_f242()),(rcc1_v242?rcc1_v242:((rcc1_f234()?((fabs((rcc1_v1842-rcc1_f217()))<rcc1_v1816)?(fabs((rcc1_v1840-rcc1_f205()))<rcc1_v1816):NIL):NIL)?T:(((fabs((rcc1_f181()-(0.0)))<rcc1_v1816)?T:((rcc1_v165=rcc1_f165()),((fabs((rcc1_v165-(0.0)))<rcc1_v1816)?NIL:((rcc1_v165>(0.0))?rcc1_f160():(rcc1_f160()?NIL:T)))))?NIL:T))));}}
static double rcc1_f1719(){if (rcc1_p1719) return rcc1_m1719; else {rcc1_p1719=T;return rcc1_m1719=(rcc1_f1759()/rcc1_f1733());}}
static double rcc1_f1720(){if (rcc1_p1720) return rcc1_m1720; else {rcc1_p1720=T;return rcc1_m1720=(rcc1_f1760()/rcc1_f1733());}}
static double rcc1_f698(){if (rcc1_p698) return rcc1_m698; else {rcc1_p698=T;return rcc1_m698=(((rcc1_f1756()+rcc1_f1732())-rcc1_f1730())/((2.0)*rcc1_f1733()));}}
static double rcc1_f696(){if (rcc1_p696) return rcc1_m696; else {rcc1_p696=T;return rcc1_m696=((rcc1_v698=rcc1_f698()),(rcc1_f1732()-(rcc1_v698*rcc1_v698)));}}
static double rcc1_f682(){if (rcc1_p682) return rcc1_m682; else {rcc1_p682=T;return rcc1_m682=sqrt(rcc1_f696());}}
static double rcc1_f679(){if (rcc1_p679) return rcc1_m679; else {rcc1_p679=T;return rcc1_m679=(rcc1_v1858+((rcc1_f698()*rcc1_f1720())-(rcc1_f682()*rcc1_f1719())));}}
static double rcc1_f667(){if (rcc1_p667) return rcc1_m667; else {rcc1_p667=T;return rcc1_m667=(rcc1_v1856+(rcc1_f698()*rcc1_f1719())+(rcc1_f682()*rcc1_f1720()));}}
static int rcc1_f695(){if (rcc1_p695) return rcc1_m695; else {rcc1_p695=T;return rcc1_m695=(rcc1_f696()<0.0);}}
static int rcc1_f1755(){if (rcc1_p1755) return rcc1_m1755; else {rcc1_p1755=T;return rcc1_m1755=(rcc1_f1756()==0.0);}}
static double rcc1_f1754(){if (rcc1_p1754) return rcc1_m1754; else {rcc1_p1754=T;return rcc1_m1754=(rcc1_v1827-rcc1_v1821);}}
static double rcc1_f1133(){if (rcc1_p1133) return rcc1_m1133; else {rcc1_p1133=T;return rcc1_m1133=(rcc1_v1858-(rcc1_v1858+rcc1_f1754()));}}
static double rcc1_f1128(){if (rcc1_p1128) return rcc1_m1128; else {rcc1_p1128=T;return rcc1_m1128=((rcc1_v1133=rcc1_f1133()),(rcc1_v1131=rcc1_f1131()),sqrt(((rcc1_v1133*rcc1_v1133)+(rcc1_v1131*rcc1_v1131))));}}
static double rcc1_f1753(){if (rcc1_p1753) return rcc1_m1753; else {rcc1_p1753=T;return rcc1_m1753=fabs(rcc1_f1754());}}
static int rcc1_f701(){if (rcc1_p701) return rcc1_m701; else {rcc1_p701=T;return rcc1_m701=(rcc1_f1755()?(rcc1_f1753()<rcc1_v1816):NIL);}}
static double rcc1_f1647(){if (rcc1_p1647) return rcc1_m1647; else {rcc1_p1647=T;return rcc1_m1647=(rcc1_v1856-rcc1_v1840);}}
static double rcc1_f1646(){if (rcc1_p1646) return rcc1_m1646; else {rcc1_p1646=T;return rcc1_m1646=(rcc1_v1858-rcc1_v1842);}}
static double rcc1_f1113(){if (rcc1_p1113) return rcc1_m1113; else {rcc1_p1113=T;return rcc1_m1113=((rcc1_v1646=rcc1_f1646()),(rcc1_v1647=rcc1_f1647()),((rcc1_v1646*rcc1_v1646)+(rcc1_v1647*rcc1_v1647)));}}
static int rcc1_f1046(){if (rcc1_p1046) return rcc1_m1046; else {rcc1_p1046=T;return rcc1_m1046=(rcc1_f1113()==0.0);}}
static double rcc1_f1112(){if (rcc1_p1112) return rcc1_m1112; else {rcc1_p1112=T;return rcc1_m1112=sqrt(rcc1_f1113());}}
static double rcc1_f1012(){if (rcc1_p1012) return rcc1_m1012; else {rcc1_p1012=T;return rcc1_m1012=(rcc1_f1646()/rcc1_f1112());}}
static double rcc1_f1011(){if (rcc1_p1011) return rcc1_m1011; else {rcc1_p1011=T;return rcc1_m1011=(rcc1_f1647()/rcc1_f1112());}}
static double rcc1_f1645(){if (rcc1_p1645) return rcc1_m1645; else {rcc1_p1645=T;return rcc1_m1645=atan2(rcc1_f1647(),rcc1_f1646());}}
static double rcc1_f1769(){if (rcc1_p1769) return rcc1_m1769; else {rcc1_p1769=T;return rcc1_m1769=(rcc1_v1850-rcc1_v1842);}}
static double rcc1_f1767(){if (rcc1_p1767) return rcc1_m1767; else {rcc1_p1767=T;return rcc1_m1767=(rcc1_v1848-rcc1_v1840);}}
static double rcc1_f993(){if (rcc1_p993) return rcc1_m993; else {rcc1_p993=T;return rcc1_m993=atan2(rcc1_f1767(),rcc1_f1769());}}
static double rcc1_f1765(){if (rcc1_p1765) return rcc1_m1765; else {rcc1_p1765=T;return rcc1_m1765=((rcc1_v1769=rcc1_f1769()),(rcc1_v1767=rcc1_f1767()),((rcc1_v1769*rcc1_v1769)+(rcc1_v1767*rcc1_v1767)));}}
static int rcc1_f1699(){if (rcc1_p1699) return rcc1_m1699; else {rcc1_p1699=T;return rcc1_m1699=(rcc1_f1765()==0.0);}}
static double rcc1_f1764(){if (rcc1_p1764) return rcc1_m1764; else {rcc1_p1764=T;return rcc1_m1764=sqrt(rcc1_f1765());}}
static double rcc1_f1666(){if (rcc1_p1666) return rcc1_m1666; else {rcc1_p1666=T;return rcc1_m1666=(rcc1_f1769()/rcc1_f1764());}}
static double rcc1_f1665(){if (rcc1_p1665) return rcc1_m1665; else {rcc1_p1665=T;return rcc1_m1665=(rcc1_f1767()/rcc1_f1764());}}
static double rcc1_f575(){if (rcc1_p575) return rcc1_m575; else {rcc1_p575=T;return rcc1_m575=((2.0)*rcc1_f1764());}}
static double rcc1_f1799(){if (rcc1_p1799) return rcc1_m1799; else {rcc1_p1799=T;return rcc1_m1799=(rcc1_v1842-rcc1_v1850);}}
static double rcc1_f1797(){if (rcc1_p1797) return rcc1_m1797; else {rcc1_p1797=T;return rcc1_m1797=(rcc1_v1840-rcc1_v1848);}}
static int rcc1_f273(){if (rcc1_p273) return rcc1_m273; else {rcc1_p273=T;return rcc1_m273=((fabs(rcc1_f1799())<rcc1_v1816)?(fabs(rcc1_f1797())<rcc1_v1816):NIL);}}
static double rcc1_f1794(){if (rcc1_p1794) return rcc1_m1794; else {rcc1_p1794=T;return rcc1_m1794=((rcc1_v1799=rcc1_f1799()),(rcc1_v1797=rcc1_f1797()),sqrt(((rcc1_v1799*rcc1_v1799)+(rcc1_v1797*rcc1_v1797))));}}
static double rcc1_f1137(){if (rcc1_p1137) return rcc1_m1137; else {rcc1_p1137=T;return rcc1_m1137=(rcc1_v1842-(rcc1_v1842+rcc1_f1794()));}}
static double rcc1_f1812(){if (rcc1_p1812) return rcc1_m1812; else {rcc1_p1812=T;return rcc1_m1812=(rcc1_v1842-rcc1_v1858);}}
static double rcc1_f1809(){if (rcc1_p1809) return rcc1_m1809; else {rcc1_p1809=T;return rcc1_m1809=(rcc1_v1840-rcc1_v1856);}}
static int rcc1_f739(){if (rcc1_p739) return rcc1_m739; else {rcc1_p739=T;return rcc1_m739=((fabs(rcc1_f1812())<rcc1_v1816)?(fabs(rcc1_f1809())<rcc1_v1816):NIL);}}
static double rcc1_f1801(){if (rcc1_p1801) return rcc1_m1801; else {rcc1_p1801=T;return rcc1_m1801=((rcc1_v1812=rcc1_f1812()),(rcc1_v1809=rcc1_f1809()),sqrt(((rcc1_v1812*rcc1_v1812)+(rcc1_v1809*rcc1_v1809))));}}
static double rcc1_f1793(){if (rcc1_p1793) return rcc1_m1793; else {rcc1_p1793=T;return rcc1_m1793=(rcc1_v1842-(rcc1_v1842+rcc1_f1801()));}}
static double rcc1_f1791(){if (rcc1_p1791) return rcc1_m1791; else {rcc1_p1791=T;return rcc1_m1791=(rcc1_v1840-rcc1_v1840);}}
static double rcc1_f1790(){if (rcc1_p1790) return rcc1_m1790; else {rcc1_p1790=T;return rcc1_m1790=((rcc1_v1791=rcc1_f1791()),(rcc1_v1791*rcc1_v1791));}}
static double rcc1_f1134(){if (rcc1_p1134) return rcc1_m1134; else {rcc1_p1134=T;return rcc1_m1134=((rcc1_v1137=rcc1_f1137()),sqrt(((rcc1_v1137*rcc1_v1137)+rcc1_f1790())));}}
static double rcc1_f1024(){if (rcc1_p1024) return rcc1_m1024; else {rcc1_p1024=T;return rcc1_m1024=((rcc1_v1134=rcc1_f1134()),(rcc1_v1134*rcc1_v1134));}}
static double rcc1_f130(){if (rcc1_p130) return rcc1_m130; else {rcc1_p130=T;return rcc1_m130=((rcc1_v1128=rcc1_f1128()),(((rcc1_f1113()+rcc1_f1024())-(rcc1_v1128*rcc1_v1128))/((2.0)*rcc1_f1112())));}}
static double rcc1_f126(){if (rcc1_p126) return rcc1_m126; else {rcc1_p126=T;return rcc1_m126=(rcc1_f130()*rcc1_f1011());}}
static double rcc1_f121(){if (rcc1_p121) return rcc1_m121; else {rcc1_p121=T;return rcc1_m121=(rcc1_f130()*rcc1_f1012());}}
static double rcc1_f128(){if (rcc1_p128) return rcc1_m128; else {rcc1_p128=T;return rcc1_m128=((rcc1_v130=rcc1_f130()),(rcc1_f1024()-(rcc1_v130*rcc1_v130)));}}
static int rcc1_f127(){if (rcc1_p127) return rcc1_m127; else {rcc1_p127=T;return rcc1_m127=(rcc1_f128()<0.0);}}
static double rcc1_f125(){if (rcc1_p125) return rcc1_m125; else {rcc1_p125=T;return rcc1_m125=sqrt(rcc1_f128());}}
static double rcc1_f124(){if (rcc1_p124) return rcc1_m124; else {rcc1_p124=T;return rcc1_m124=(rcc1_f125()*rcc1_f1012());}}
static double rcc1_f120(){if (rcc1_p120) return rcc1_m120; else {rcc1_p120=T;return rcc1_m120=(rcc1_f125()*rcc1_f1011());}}
static double rcc1_f84(){if (rcc1_p84) return rcc1_m84; else {rcc1_p84=T;return rcc1_m84=normalize_rotation((atan2(((rcc1_v1840+(rcc1_f126()-rcc1_f124()))-rcc1_v1840),((rcc1_v1842+rcc1_f121()+rcc1_f120())-rcc1_v1842))-rcc1_f993()));}}
static double rcc1_f83(){if (rcc1_p83) return rcc1_m83; else {rcc1_p83=T;return rcc1_m83=normalize_rotation(rcc1_f84());}}
static int rcc1_f71(){if (rcc1_p71) return rcc1_m71; else {rcc1_p71=T;return rcc1_m71=((rcc1_v83=rcc1_f83()),((fabs((rcc1_v83-(0.0)))<rcc1_v1816)?NIL:((fabs((rcc1_v83-(-6.283185307179586)))<rcc1_v1816)?NIL:((fabs((rcc1_v83-(6.283185307179586)))<rcc1_v1816)?NIL:T))));}}
static int rcc1_f70(){if (rcc1_p70) return rcc1_m70; else {rcc1_p70=T;return rcc1_m70=((rcc1_v71=rcc1_f71()),(rcc1_v71?rcc1_v71:rcc1_f153()));}}
static double rcc1_f67(){if (rcc1_p67) return rcc1_m67; else {rcc1_p67=T;return rcc1_m67=(rcc1_f70()?rcc1_f84():rcc1_f599());}}
static double rcc1_f69(){if (rcc1_p69) return rcc1_m69; else {rcc1_p69=T;return rcc1_m69=(rcc1_f70()?rcc1_f84():rcc1_f603());}}
static int rcc1_f68(){if (rcc1_p68) return rcc1_m68; else {rcc1_p68=T;return rcc1_m68=(rcc1_f69()>(0.0));}}
static int rcc1_f62(){if (rcc1_p62) return rcc1_m62; else {rcc1_p62=T;return rcc1_m62=(rcc1_f70()?((rcc1_v68=rcc1_f68()),(rcc1_v68?rcc1_v68:(fabs((rcc1_f67()-(0.0)))<rcc1_v1816))):NIL);}}
static int rcc1_f61(){if (rcc1_p61) return rcc1_m61; else {rcc1_p61=T;return rcc1_m61=(rcc1_f62()?rcc1_f70():NIL);}}
static int rcc1_f59(){if (rcc1_p59) return rcc1_m59; else {rcc1_p59=T;return rcc1_m59=((rcc1_f62()?rcc1_f69():rcc1_f603())>(0.0));}}
static int rcc1_f53(){if (rcc1_p53) return rcc1_m53; else {rcc1_p53=T;return rcc1_m53=(rcc1_f61()?((rcc1_v59=rcc1_f59()),(rcc1_v59?rcc1_v59:(fabs(((rcc1_f62()?rcc1_f67():rcc1_f599())-(0.0)))<rcc1_v1816))):NIL);}}
static double rcc1_f114(){if (rcc1_p114) return rcc1_m114; else {rcc1_p114=T;return rcc1_m114=normalize_rotation((atan2(((rcc1_v1840+rcc1_f126()+rcc1_f124())-rcc1_v1840),((rcc1_v1842+(rcc1_f121()-rcc1_f120()))-rcc1_v1842))-rcc1_f993()));}}
static double rcc1_f113(){if (rcc1_p113) return rcc1_m113; else {rcc1_p113=T;return rcc1_m113=normalize_rotation(rcc1_f114());}}
static int rcc1_f101(){if (rcc1_p101) return rcc1_m101; else {rcc1_p101=T;return rcc1_m101=((rcc1_v113=rcc1_f113()),((fabs((rcc1_v113-(0.0)))<rcc1_v1816)?NIL:((fabs((rcc1_v113-(-6.283185307179586)))<rcc1_v1816)?NIL:((fabs((rcc1_v113-(6.283185307179586)))<rcc1_v1816)?NIL:T))));}}
static int rcc1_f100(){if (rcc1_p100) return rcc1_m100; else {rcc1_p100=T;return rcc1_m100=((rcc1_v101=rcc1_f101()),(rcc1_v101?rcc1_v101:rcc1_f153()));}}
static int rcc1_f98(){if (rcc1_p98) return rcc1_m98; else {rcc1_p98=T;return rcc1_m98=((rcc1_f100()?rcc1_f114():rcc1_f603())>(0.0));}}
static int rcc1_f92(){if (rcc1_p92) return rcc1_m92; else {rcc1_p92=T;return rcc1_m92=((rcc1_v100=rcc1_f100()),(rcc1_v100?((rcc1_v98=rcc1_f98()),(rcc1_v98?rcc1_v98:(fabs(((rcc1_v100?rcc1_f114():rcc1_f599())-(0.0)))<rcc1_v1816))):NIL));}}
static double rcc1_f1035(){if (rcc1_p1035) return rcc1_m1035; else {rcc1_p1035=T;return rcc1_m1035=(rcc1_f1134()/rcc1_f1801());}}
static int rcc1_f1116(){if (rcc1_p1116) return rcc1_m1116; else {rcc1_p1116=T;return rcc1_m1116=(rcc1_f1134()>rcc1_f1128());}}
static double rcc1_f1127(){if (rcc1_p1127) return rcc1_m1127; else {rcc1_p1127=T;return rcc1_m1127=(rcc1_f1134()+rcc1_f1128());}}
static int rcc1_f1042(){if (rcc1_p1042) return rcc1_m1042; else {rcc1_p1042=T;return rcc1_m1042=((rcc1_v1127=rcc1_f1127()),(rcc1_f1113()>(rcc1_v1127*rcc1_v1127)));}}
static int rcc1_f1041(){if (rcc1_p1041) return rcc1_m1041; else {rcc1_p1041=T;return rcc1_m1041=(rcc1_f1801()>rcc1_f1127());}}
static double rcc1_f1126(){if (rcc1_p1126) return rcc1_m1126; else {rcc1_p1126=T;return rcc1_m1126=(rcc1_f1801()-rcc1_f1127());}}
static int rcc1_f1124(){if (rcc1_p1124) return rcc1_m1124; else {rcc1_p1124=T;return rcc1_m1124=(fabs(rcc1_f1126())<rcc1_v1816);}}
static double rcc1_f265(){if (rcc1_p265) return rcc1_m265; else {rcc1_p265=T;return rcc1_m265=((rcc1_v1041=rcc1_f1041()),((rcc1_v1041?rcc1_v1041:rcc1_f1124())?((rcc1_f1134()+((0.5)*rcc1_f1126()))/rcc1_f1801()):((rcc1_f1134()<rcc1_f1128())?(-rcc1_f1035()):(rcc1_f1035()+(1.0)))));}}
static double rcc1_f256(){if (rcc1_p256) return rcc1_m256; else {rcc1_p256=T;return rcc1_m256=((rcc1_v265=rcc1_f265()),normalize_rotation((atan2(((rcc1_v1840+(rcc1_v265*rcc1_f1647()))-rcc1_v1840),((rcc1_v1842+(rcc1_v265*rcc1_f1646()))-rcc1_v1842))-rcc1_f993())));}}
static double rcc1_f255(){if (rcc1_p255) return rcc1_m255; else {rcc1_p255=T;return rcc1_m255=normalize_rotation(rcc1_f256());}}
static int rcc1_f243(){if (rcc1_p243) return rcc1_m243; else {rcc1_p243=T;return rcc1_m243=((rcc1_v255=rcc1_f255()),((fabs((rcc1_v255-(0.0)))<rcc1_v1816)?NIL:((fabs((rcc1_v255-(-6.283185307179586)))<rcc1_v1816)?NIL:((fabs((rcc1_v255-(6.283185307179586)))<rcc1_v1816)?NIL:T))));}}
static int rcc1_f152(){if (rcc1_p152) return rcc1_m152; else {rcc1_p152=T;return rcc1_m152=((rcc1_v243=rcc1_f243()),(rcc1_v243?rcc1_v243:rcc1_f153()));}}
static double rcc1_f40(){if (rcc1_p40) return rcc1_m40; else {rcc1_p40=T;return rcc1_m40=(rcc1_f152()?rcc1_f256():rcc1_f44());}}
static double rcc1_f149(){if (rcc1_p149) return rcc1_m149; else {rcc1_p149=T;return rcc1_m149=(rcc1_f152()?rcc1_f256():rcc1_f599());}}
static double rcc1_f151(){if (rcc1_p151) return rcc1_m151; else {rcc1_p151=T;return rcc1_m151=(rcc1_f152()?rcc1_f256():rcc1_f603());}}
static int rcc1_f150(){if (rcc1_p150) return rcc1_m150; else {rcc1_p150=T;return rcc1_m150=(rcc1_f151()>(0.0));}}
static int rcc1_f144(){if (rcc1_p144) return rcc1_m144; else {rcc1_p144=T;return rcc1_m144=(rcc1_f152()?((rcc1_v150=rcc1_f150()),(rcc1_v150?rcc1_v150:(fabs((rcc1_f149()-(0.0)))<rcc1_v1816))):NIL);}}
static int rcc1_f141(){if (rcc1_p141) return rcc1_m141; else {rcc1_p141=T;return rcc1_m141=((rcc1_f144()?rcc1_f151():rcc1_f603())>(0.0));}}
static int rcc1_f135(){if (rcc1_p135) return rcc1_m135; else {rcc1_p135=T;return rcc1_m135=((rcc1_v144=rcc1_f144()),((rcc1_v144?rcc1_f152():NIL)?((rcc1_v141=rcc1_f141()),(rcc1_v141?rcc1_v141:(fabs(((rcc1_v144?rcc1_f149():rcc1_f599())-(0.0)))<rcc1_v1816))):NIL));}}
static int rcc1_f1118(){if (rcc1_p1118) return rcc1_m1118; else {rcc1_p1118=T;return rcc1_m1118=((rcc1_v1124=rcc1_f1124()),(rcc1_v1124?rcc1_v1124:(fabs((rcc1_f1801()-fabs((rcc1_f1134()-rcc1_f1128()))))<rcc1_v1816)));}}
static double rcc1_f36(){if (rcc1_p36) return rcc1_m36; else {rcc1_p36=T;return rcc1_m36=(rcc1_f1118()?((rcc1_v144=rcc1_f144()),(rcc1_v144?(rcc1_f135()?(rcc1_f152()?rcc1_f256():rcc1_f42()):rcc1_f40()):(rcc1_v144?rcc1_f40():rcc1_f44()))):rcc1_f44());}}
static int rcc1_f16(){if (rcc1_p16) return rcc1_m16; else {rcc1_p16=T;return rcc1_m16=(rcc1_f1118()?(rcc1_f144()?(rcc1_f135()?NIL:(rcc1_f152()?NIL:T)):T):T);}}
static int rcc1_f271(){if (rcc1_p271) return rcc1_m271; else {rcc1_p271=T;return rcc1_m271=((rcc1_v1118=rcc1_f1118()),(rcc1_v1118?((rcc1_v1116=rcc1_f1116()),(rcc1_v1116?rcc1_v1116:(rcc1_f1112()>rcc1_f1128()))):(rcc1_v1118?NIL:T)));}}
static int rcc1_f132(){if (rcc1_p132) return rcc1_m132; else {rcc1_p132=T;return rcc1_m132=(rcc1_f1118()?(rcc1_f144()?(rcc1_f135()?T:rcc1_f152()):NIL):NIL);}}
static double rcc1_f1788(){if (rcc1_p1788) return rcc1_m1788; else {rcc1_p1788=T;return rcc1_m1788=((rcc1_v1793=rcc1_f1793()),sqrt(((rcc1_v1793*rcc1_v1793)+rcc1_f1790())));}}
static double rcc1_f1678(){if (rcc1_p1678) return rcc1_m1678; else {rcc1_p1678=T;return rcc1_m1678=((rcc1_v1788=rcc1_f1788()),(rcc1_v1788*rcc1_v1788));}}
static double rcc1_f1677(){if (rcc1_p1677) return rcc1_m1677; else {rcc1_p1677=T;return rcc1_m1677=(rcc1_f1765()+rcc1_f1678());}}
static double rcc1_f1689(){if (rcc1_p1689) return rcc1_m1689; else {rcc1_p1689=T;return rcc1_m1689=(rcc1_f1788()/rcc1_f1794());}}
static double rcc1_f1688(){if (rcc1_p1688) return rcc1_m1688; else {rcc1_p1688=T;return rcc1_m1688=(-rcc1_f1689());}}
static double rcc1_f729(){if (rcc1_p729) return rcc1_m729; else {rcc1_p729=T;return rcc1_m729=(rcc1_f1689()+(1.0));}}
static double rcc1_f1787(){if (rcc1_p1787) return rcc1_m1787; else {rcc1_p1787=T;return rcc1_m1787=(rcc1_v1850-(rcc1_v1850+rcc1_v1820));}}
static double rcc1_f1785(){if (rcc1_p1785) return rcc1_m1785; else {rcc1_p1785=T;return rcc1_m1785=(rcc1_v1848-rcc1_v1848);}}
static double rcc1_f1784(){if (rcc1_p1784) return rcc1_m1784; else {rcc1_p1784=T;return rcc1_m1784=((rcc1_v1785=rcc1_f1785()),(rcc1_v1785*rcc1_v1785));}}
static double rcc1_f1424(){if (rcc1_p1424) return rcc1_m1424; else {rcc1_p1424=T;return rcc1_m1424=((rcc1_v1427=rcc1_f1427()),sqrt(((rcc1_v1427*rcc1_v1427)+rcc1_f1784())));}}
static double rcc1_f366(){if (rcc1_p366) return rcc1_m366; else {rcc1_p366=T;return rcc1_m366=((rcc1_v1424=rcc1_f1424()),((rcc1_f1677()-(rcc1_v1424*rcc1_v1424))/rcc1_f575()));}}
static double rcc1_f362(){if (rcc1_p362) return rcc1_m362; else {rcc1_p362=T;return rcc1_m362=(rcc1_f366()*rcc1_f1665());}}
static double rcc1_f357(){if (rcc1_p357) return rcc1_m357; else {rcc1_p357=T;return rcc1_m357=(rcc1_f366()*rcc1_f1666());}}
static double rcc1_f364(){if (rcc1_p364) return rcc1_m364; else {rcc1_p364=T;return rcc1_m364=((rcc1_v366=rcc1_f366()),(rcc1_f1678()-(rcc1_v366*rcc1_v366)));}}
static double rcc1_f361(){if (rcc1_p361) return rcc1_m361; else {rcc1_p361=T;return rcc1_m361=sqrt(rcc1_f364());}}
static double rcc1_f360(){if (rcc1_p360) return rcc1_m360; else {rcc1_p360=T;return rcc1_m360=(rcc1_f361()*rcc1_f1666());}}
static double rcc1_f356(){if (rcc1_p356) return rcc1_m356; else {rcc1_p356=T;return rcc1_m356=(rcc1_f361()*rcc1_f1665());}}
static double rcc1_f320(){if (rcc1_p320) return rcc1_m320; else {rcc1_p320=T;return rcc1_m320=normalize_rotation((atan2(((rcc1_v1840+(rcc1_f362()-rcc1_f360()))-rcc1_v1840),((rcc1_v1842+rcc1_f357()+rcc1_f356())-rcc1_v1842))-rcc1_f1645()));}}
static double rcc1_f319(){if (rcc1_p319) return rcc1_m319; else {rcc1_p319=T;return rcc1_m319=normalize_rotation(rcc1_f320());}}
static int rcc1_f307(){if (rcc1_p307) return rcc1_m307; else {rcc1_p307=T;return rcc1_m307=((rcc1_v319=rcc1_f319()),((fabs((rcc1_v319-(0.0)))<rcc1_v1816)?NIL:((fabs((rcc1_v319-(-6.283185307179586)))<rcc1_v1816)?NIL:((fabs((rcc1_v319-(6.283185307179586)))<rcc1_v1816)?NIL:T))));}}
static double rcc1_f350(){if (rcc1_p350) return rcc1_m350; else {rcc1_p350=T;return rcc1_m350=normalize_rotation((atan2(((rcc1_v1840+rcc1_f362()+rcc1_f360())-rcc1_v1840),((rcc1_v1842+(rcc1_f357()-rcc1_f356()))-rcc1_v1842))-rcc1_f1645()));}}
static double rcc1_f349(){if (rcc1_p349) return rcc1_m349; else {rcc1_p349=T;return rcc1_m349=normalize_rotation(rcc1_f350());}}
static int rcc1_f337(){if (rcc1_p337) return rcc1_m337; else {rcc1_p337=T;return rcc1_m337=((rcc1_v349=rcc1_f349()),((fabs((rcc1_v349-(0.0)))<rcc1_v1816)?NIL:((fabs((rcc1_v349-(-6.283185307179586)))<rcc1_v1816)?NIL:((fabs((rcc1_v349-(6.283185307179586)))<rcc1_v1816)?NIL:T))));}}
static int rcc1_f1412(){if (rcc1_p1412) return rcc1_m1412; else {rcc1_p1412=T;return rcc1_m1412=(rcc1_f1788()>rcc1_f1424());}}
static double rcc1_f1423(){if (rcc1_p1423) return rcc1_m1423; else {rcc1_p1423=T;return rcc1_m1423=(rcc1_f1788()+rcc1_f1424());}}
static int rcc1_f1385(){if (rcc1_p1385) return rcc1_m1385; else {rcc1_p1385=T;return rcc1_m1385=(rcc1_f1794()>rcc1_f1423());}}
static double rcc1_f1422(){if (rcc1_p1422) return rcc1_m1422; else {rcc1_p1422=T;return rcc1_m1422=(rcc1_f1794()-rcc1_f1423());}}
static int rcc1_f1420(){if (rcc1_p1420) return rcc1_m1420; else {rcc1_p1420=T;return rcc1_m1420=(fabs(rcc1_f1422())<rcc1_v1816);}}
static double rcc1_f475(){if (rcc1_p475) return rcc1_m475; else {rcc1_p475=T;return rcc1_m475=((rcc1_v1385=rcc1_f1385()),((rcc1_v1385?rcc1_v1385:rcc1_f1420())?((rcc1_f1788()+((0.5)*rcc1_f1422()))/rcc1_f1794()):((rcc1_f1788()<rcc1_f1424())?rcc1_f1688():rcc1_f729())));}}
static double rcc1_f466(){if (rcc1_p466) return rcc1_m466; else {rcc1_p466=T;return rcc1_m466=((rcc1_v475=rcc1_f475()),normalize_rotation((atan2(((rcc1_v1840+(rcc1_v475*rcc1_f1767()))-rcc1_v1840),((rcc1_v1842+(rcc1_v475*rcc1_f1769()))-rcc1_v1842))-rcc1_f1645())));}}
static double rcc1_f465(){if (rcc1_p465) return rcc1_m465; else {rcc1_p465=T;return rcc1_m465=normalize_rotation(rcc1_f466());}}
static int rcc1_f453(){if (rcc1_p453) return rcc1_m453; else {rcc1_p453=T;return rcc1_m453=((rcc1_v465=rcc1_f465()),((fabs((rcc1_v465-(0.0)))<rcc1_v1816)?NIL:((fabs((rcc1_v465-(-6.283185307179586)))<rcc1_v1816)?NIL:((fabs((rcc1_v465-(6.283185307179586)))<rcc1_v1816)?NIL:T))));}}
static int rcc1_f1414(){if (rcc1_p1414) return rcc1_m1414; else {rcc1_p1414=T;return rcc1_m1414=((rcc1_v1420=rcc1_f1420()),(rcc1_v1420?rcc1_v1420:(fabs((rcc1_f1794()-fabs((rcc1_f1788()-rcc1_f1424()))))<rcc1_v1816)));}}
static double rcc1_f1782(){if (rcc1_p1782) return rcc1_m1782; else {rcc1_p1782=T;return rcc1_m1782=((rcc1_v1787=rcc1_f1787()),sqrt(((rcc1_v1787*rcc1_v1787)+rcc1_f1784())));}}
static double rcc1_f574(){if (rcc1_p574) return rcc1_m574; else {rcc1_p574=T;return rcc1_m574=((rcc1_v1782=rcc1_f1782()),((rcc1_f1677()-(rcc1_v1782*rcc1_v1782))/rcc1_f575()));}}
static double rcc1_f570(){if (rcc1_p570) return rcc1_m570; else {rcc1_p570=T;return rcc1_m570=(rcc1_f574()*rcc1_f1665());}}
static double rcc1_f565(){if (rcc1_p565) return rcc1_m565; else {rcc1_p565=T;return rcc1_m565=(rcc1_f574()*rcc1_f1666());}}
static double rcc1_f572(){if (rcc1_p572) return rcc1_m572; else {rcc1_p572=T;return rcc1_m572=((rcc1_v574=rcc1_f574()),(rcc1_f1678()-(rcc1_v574*rcc1_v574)));}}
static double rcc1_f569(){if (rcc1_p569) return rcc1_m569; else {rcc1_p569=T;return rcc1_m569=sqrt(rcc1_f572());}}
static double rcc1_f568(){if (rcc1_p568) return rcc1_m568; else {rcc1_p568=T;return rcc1_m568=(rcc1_f569()*rcc1_f1666());}}
static double rcc1_f564(){if (rcc1_p564) return rcc1_m564; else {rcc1_p564=T;return rcc1_m564=(rcc1_f569()*rcc1_f1665());}}
static double rcc1_f528(){if (rcc1_p528) return rcc1_m528; else {rcc1_p528=T;return rcc1_m528=normalize_rotation((atan2(((rcc1_v1840+(rcc1_f570()-rcc1_f568()))-rcc1_v1840),((rcc1_v1842+rcc1_f565()+rcc1_f564())-rcc1_v1842))-rcc1_f1645()));}}
static double rcc1_f527(){if (rcc1_p527) return rcc1_m527; else {rcc1_p527=T;return rcc1_m527=normalize_rotation(rcc1_f528());}}
static int rcc1_f515(){if (rcc1_p515) return rcc1_m515; else {rcc1_p515=T;return rcc1_m515=((rcc1_v527=rcc1_f527()),((fabs((rcc1_v527-(0.0)))<rcc1_v1816)?NIL:((fabs((rcc1_v527-(-6.283185307179586)))<rcc1_v1816)?NIL:((fabs((rcc1_v527-(6.283185307179586)))<rcc1_v1816)?NIL:T))));}}
static double rcc1_f558(){if (rcc1_p558) return rcc1_m558; else {rcc1_p558=T;return rcc1_m558=normalize_rotation((atan2(((rcc1_v1840+rcc1_f570()+rcc1_f568())-rcc1_v1840),((rcc1_v1842+(rcc1_f565()-rcc1_f564()))-rcc1_v1842))-rcc1_f1645()));}}
static double rcc1_f557(){if (rcc1_p557) return rcc1_m557; else {rcc1_p557=T;return rcc1_m557=normalize_rotation(rcc1_f558());}}
static int rcc1_f545(){if (rcc1_p545) return rcc1_m545; else {rcc1_p545=T;return rcc1_m545=((rcc1_v557=rcc1_f557()),((fabs((rcc1_v557-(0.0)))<rcc1_v1816)?NIL:((fabs((rcc1_v557-(-6.283185307179586)))<rcc1_v1816)?NIL:((fabs((rcc1_v557-(6.283185307179586)))<rcc1_v1816)?NIL:T))));}}
static int rcc1_f1770(){if (rcc1_p1770) return rcc1_m1770; else {rcc1_p1770=T;return rcc1_m1770=(rcc1_f1788()<rcc1_f1782());}}
static double rcc1_f1781(){if (rcc1_p1781) return rcc1_m1781; else {rcc1_p1781=T;return rcc1_m1781=(rcc1_f1788()+rcc1_f1782());}}
static int rcc1_f1694(){if (rcc1_p1694) return rcc1_m1694; else {rcc1_p1694=T;return rcc1_m1694=(rcc1_f1794()>rcc1_f1781());}}
static double rcc1_f1780(){if (rcc1_p1780) return rcc1_m1780; else {rcc1_p1780=T;return rcc1_m1780=(rcc1_f1794()-rcc1_f1781());}}
static int rcc1_f1778(){if (rcc1_p1778) return rcc1_m1778; else {rcc1_p1778=T;return rcc1_m1778=(fabs(rcc1_f1780())<rcc1_v1816);}}
static double rcc1_f727(){if (rcc1_p727) return rcc1_m727; else {rcc1_p727=T;return rcc1_m727=((rcc1_v1694=rcc1_f1694()),((rcc1_v1694?rcc1_v1694:rcc1_f1778())?((rcc1_f1788()+((0.5)*rcc1_f1780()))/rcc1_f1794()):(rcc1_f1770()?rcc1_f1688():rcc1_f729())));}}
static double rcc1_f718(){if (rcc1_p718) return rcc1_m718; else {rcc1_p718=T;return rcc1_m718=((rcc1_v727=rcc1_f727()),normalize_rotation((atan2(((rcc1_v1840+(rcc1_v727*rcc1_f1767()))-rcc1_v1840),((rcc1_v1842+(rcc1_v727*rcc1_f1769()))-rcc1_v1842))-rcc1_f1645())));}}
static double rcc1_f717(){if (rcc1_p717) return rcc1_m717; else {rcc1_p717=T;return rcc1_m717=normalize_rotation(rcc1_f718());}}
static int rcc1_f702(){if (rcc1_p702) return rcc1_m702; else {rcc1_p702=T;return rcc1_m702=((rcc1_v717=rcc1_f717()),((fabs((rcc1_v717-(0.0)))<rcc1_v1816)?NIL:((fabs((rcc1_v717-(-6.283185307179586)))<rcc1_v1816)?NIL:((fabs((rcc1_v717-(6.283185307179586)))<rcc1_v1816)?NIL:T))));}}
static int rcc1_f1772(){if (rcc1_p1772) return rcc1_m1772; else {rcc1_p1772=T;return rcc1_m1772=((rcc1_v1778=rcc1_f1778()),(rcc1_v1778?rcc1_v1778:(fabs((rcc1_f1794()-fabs((rcc1_f1788()-rcc1_f1782()))))<rcc1_v1816)));}}
static double rcc1_f1818(){if (rcc1_p1818) return rcc1_m1818; else {rcc1_p1818=T;return rcc1_m1818=(rcc1_v1833-rcc1_v1820);}}
static double rcc1_f687(){if (rcc1_p687) return rcc1_m687; else {rcc1_p687=T;return rcc1_m687=((rcc1_v1827+((0.5)*rcc1_f1818()))/rcc1_v1833);}}
static int rcc1_f1814(){if (rcc1_p1814) return rcc1_m1814; else {rcc1_p1814=T;return rcc1_m1814=(fabs(rcc1_f1818())<rcc1_v1816);}}
static int rcc1_f1743(){if (rcc1_p1743) return rcc1_m1743; else {rcc1_p1743=T;return rcc1_m1743=((rcc1_v1814=rcc1_f1814()),(rcc1_v1814?rcc1_v1814:(fabs((rcc1_v1833-rcc1_f1753()))<rcc1_v1816)));}}
static double rcc1_f452(){if (rcc1_p452) return rcc1_m452; else {rcc1_p452=T;return rcc1_m452=(rcc1_f1743()?(rcc1_v1858+(rcc1_f1407()*rcc1_f1760())):rcc1_f690());}}
static double rcc1_f449(){if (rcc1_p449) return rcc1_m449; else {rcc1_p449=T;return rcc1_m449=(rcc1_f1755()?rcc1_f690():(rcc1_f1747()?rcc1_f452():(rcc1_f695()?rcc1_f452():rcc1_f679())));}}
static double rcc1_f445(){if (rcc1_p445) return rcc1_m445; else {rcc1_p445=T;return rcc1_m445=(rcc1_f1743()?(rcc1_v1856+(rcc1_f1407()*rcc1_f1759())):rcc1_f690());}}
static double rcc1_f442(){if (rcc1_p442) return rcc1_m442; else {rcc1_p442=T;return rcc1_m442=(rcc1_f1755()?rcc1_f690():(rcc1_f1747()?rcc1_f445():(rcc1_f695()?rcc1_f445():rcc1_f667())));}}
static int rcc1_f692(){if (rcc1_p692) return rcc1_m692; else {rcc1_p692=T;return rcc1_m692=(rcc1_f1755()?NIL:(rcc1_f1747()?rcc1_f1743():(rcc1_f695()?rcc1_f1743():T)));}}
static double rcc1_f434(){if (rcc1_p434) return rcc1_m434; else {rcc1_p434=T;return rcc1_m434=(rcc1_f692()?rcc1_f442():rcc1_f653());}}
static int rcc1_f433(){if (rcc1_p433) return rcc1_m433; else {rcc1_p433=T;return rcc1_m433=(rcc1_v1848==rcc1_f434());}}
static double rcc1_f436(){if (rcc1_p436) return rcc1_m436; else {rcc1_p436=T;return rcc1_m436=(rcc1_f692()?rcc1_f449():rcc1_f657());}}
static double rcc1_f411(){if (rcc1_p411) return rcc1_m411; else {rcc1_p411=T;return rcc1_m411=(atan2((rcc1_f434()-rcc1_v1840),(rcc1_f436()-rcc1_v1842))+(-1.5707963267948966));}}
static int rcc1_f435(){if (rcc1_p435) return rcc1_m435; else {rcc1_p435=T;return rcc1_m435=(rcc1_v1850==rcc1_f436());}}
static double rcc1_f431(){if (rcc1_p431) return rcc1_m431; else {rcc1_p431=T;return rcc1_m431=(rcc1_f435()?(rcc1_f433()?rcc1_f649():(0.0)):(1.0));}}
static double rcc1_f426(){if (rcc1_p426) return rcc1_m426; else {rcc1_p426=T;return rcc1_m426=((rcc1_f434()-rcc1_v1848)/(rcc1_f436()-rcc1_v1850));}}
static double rcc1_f419(){if (rcc1_p419) return rcc1_m419; else {rcc1_p419=T;return rcc1_m419=(rcc1_f435()?(rcc1_f433()?rcc1_f649():rcc1_f434()):(rcc1_f436()+(rcc1_f426()*rcc1_f434())));}}
static double rcc1_f425(){if (rcc1_p425) return rcc1_m425; else {rcc1_p425=T;return rcc1_m425=(rcc1_f435()?(rcc1_f433()?rcc1_f649():(1.0)):rcc1_f426());}}
static double rcc1_f403(){if (rcc1_p403) return rcc1_m403; else {rcc1_p403=T;return rcc1_m403=((rcc1_v411=rcc1_f411()),(((rcc1_f431()*(rcc1_f436()+cos(rcc1_v411)))+(rcc1_f425()*(rcc1_f434()+sin(rcc1_v411))))-rcc1_f419()));}}
static double rcc1_f418(){if (rcc1_p418) return rcc1_m418; else {rcc1_p418=T;return rcc1_m418=(((rcc1_f431()*rcc1_v1858)+(rcc1_f425()*rcc1_v1856))-rcc1_f419());}}
static int rcc1_f398(){if (rcc1_p398) return rcc1_m398; else {rcc1_p398=T;return rcc1_m398=(rcc1_f418()>(0.0));}}
static int rcc1_f391(){if (rcc1_p391) return rcc1_m391; else {rcc1_p391=T;return rcc1_m391=((rcc1_v701=rcc1_f701()),(rcc1_v701?rcc1_v701:((rcc1_f692()?((fabs((rcc1_v1842-rcc1_f449()))<rcc1_v1816)?(fabs((rcc1_v1840-rcc1_f442()))<rcc1_v1816):NIL):NIL)?T:(((fabs((rcc1_f418()-(0.0)))<rcc1_v1816)?T:((rcc1_v403=rcc1_f403()),((fabs((rcc1_v403-(0.0)))<rcc1_v1816)?NIL:((rcc1_v403>(0.0))?rcc1_f398():(rcc1_f398()?NIL:T)))))?NIL:T))));}}
static int rcc1_f306(){if (rcc1_p306) return rcc1_m306; else {rcc1_p306=T;return rcc1_m306=((rcc1_v307=rcc1_f307()),(rcc1_v307?rcc1_v307:rcc1_f391()));}}
static double rcc1_f303(){if (rcc1_p303) return rcc1_m303; else {rcc1_p303=T;return rcc1_m303=(rcc1_f306()?rcc1_f320():rcc1_f599());}}
static double rcc1_f305(){if (rcc1_p305) return rcc1_m305; else {rcc1_p305=T;return rcc1_m305=(rcc1_f306()?rcc1_f320():rcc1_f603());}}
static int rcc1_f304(){if (rcc1_p304) return rcc1_m304; else {rcc1_p304=T;return rcc1_m304=(rcc1_f305()<(0.0));}}
static int rcc1_f298(){if (rcc1_p298) return rcc1_m298; else {rcc1_p298=T;return rcc1_m298=(rcc1_f306()?((rcc1_v304=rcc1_f304()),(rcc1_v304?rcc1_v304:(fabs((rcc1_f303()-(0.0)))<rcc1_v1816))):NIL);}}
static int rcc1_f295(){if (rcc1_p295) return rcc1_m295; else {rcc1_p295=T;return rcc1_m295=((rcc1_f298()?rcc1_f305():rcc1_f603())<(0.0));}}
static int rcc1_f336(){if (rcc1_p336) return rcc1_m336; else {rcc1_p336=T;return rcc1_m336=((rcc1_v337=rcc1_f337()),(rcc1_v337?rcc1_v337:rcc1_f391()));}}
static int rcc1_f334(){if (rcc1_p334) return rcc1_m334; else {rcc1_p334=T;return rcc1_m334=((rcc1_f336()?rcc1_f350():rcc1_f603())<(0.0));}}
static int rcc1_f390(){if (rcc1_p390) return rcc1_m390; else {rcc1_p390=T;return rcc1_m390=((rcc1_v453=rcc1_f453()),(rcc1_v453?rcc1_v453:rcc1_f391()));}}
static double_or_symbol rcc1_f371(){if (rcc1_p371) return rcc1_m371; else {rcc1_p371=T;return rcc1_m371=(rcc1_f390()?coerce_double_to_double_or_symbol(rcc1_f466()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcc1_f387(){if (rcc1_p387) return rcc1_m387; else {rcc1_p387=T;return rcc1_m387=(rcc1_f390()?rcc1_f466():rcc1_f599());}}
static double rcc1_f389(){if (rcc1_p389) return rcc1_m389; else {rcc1_p389=T;return rcc1_m389=(rcc1_f390()?rcc1_f466():rcc1_f603());}}
static int rcc1_f388(){if (rcc1_p388) return rcc1_m388; else {rcc1_p388=T;return rcc1_m388=(rcc1_f389()<(0.0));}}
static int rcc1_f382(){if (rcc1_p382) return rcc1_m382; else {rcc1_p382=T;return rcc1_m382=(rcc1_f390()?((rcc1_v388=rcc1_f388()),(rcc1_v388?rcc1_v388:(fabs((rcc1_f387()-(0.0)))<rcc1_v1816))):NIL);}}
static int rcc1_f379(){if (rcc1_p379) return rcc1_m379; else {rcc1_p379=T;return rcc1_m379=((rcc1_f382()?rcc1_f389():rcc1_f603())<(0.0));}}
static double_or_symbol rcc1_f367(){if (rcc1_p367) return rcc1_m367; else {rcc1_p367=T;return rcc1_m367=(rcc1_f1414()?((rcc1_v382=rcc1_f382()),(rcc1_v382?(((rcc1_v382?rcc1_f390():NIL)?((rcc1_v379=rcc1_f379()),(rcc1_v379?rcc1_v379:(fabs(((rcc1_v382?rcc1_f387():rcc1_f599())-(0.0)))<rcc1_v1816))):NIL)?coerce_double_to_double_or_symbol((rcc1_f390()?rcc1_f466():rcc1_f582())):rcc1_f371()):(rcc1_v382?rcc1_f371():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcc1_f684(){if (rcc1_p684) return rcc1_m684; else {rcc1_p684=T;return rcc1_m684=(rcc1_f1743()?(rcc1_v1858+(rcc1_f687()*rcc1_f1760())):rcc1_f690());}}
static double rcc1_f676(){if (rcc1_p676) return rcc1_m676; else {rcc1_p676=T;return rcc1_m676=(rcc1_f1755()?rcc1_f690():(rcc1_f1747()?rcc1_f684():(rcc1_f695()?rcc1_f684():rcc1_f679())));}}
static double rcc1_f656(){if (rcc1_p656) return rcc1_m656; else {rcc1_p656=T;return rcc1_m656=(rcc1_f692()?rcc1_f676():rcc1_f657());}}
static int rcc1_f655(){if (rcc1_p655) return rcc1_m655; else {rcc1_p655=T;return rcc1_m655=(rcc1_v1850==rcc1_f656());}}
static double rcc1_f670(){if (rcc1_p670) return rcc1_m670; else {rcc1_p670=T;return rcc1_m670=(rcc1_f1743()?(rcc1_v1856+(rcc1_f687()*rcc1_f1759())):rcc1_f690());}}
static double rcc1_f664(){if (rcc1_p664) return rcc1_m664; else {rcc1_p664=T;return rcc1_m664=(rcc1_f1755()?rcc1_f690():(rcc1_f1747()?rcc1_f670():(rcc1_f695()?rcc1_f670():rcc1_f667())));}}
static double rcc1_f652(){if (rcc1_p652) return rcc1_m652; else {rcc1_p652=T;return rcc1_m652=(rcc1_f692()?rcc1_f664():rcc1_f653());}}
static double rcc1_f626(){if (rcc1_p626) return rcc1_m626; else {rcc1_p626=T;return rcc1_m626=(atan2((rcc1_f652()-rcc1_v1840),(rcc1_f656()-rcc1_v1842))+(-1.5707963267948966));}}
static double rcc1_f642(){if (rcc1_p642) return rcc1_m642; else {rcc1_p642=T;return rcc1_m642=((rcc1_f652()-rcc1_v1848)/(rcc1_f656()-rcc1_v1850));}}
static int rcc1_f651(){if (rcc1_p651) return rcc1_m651; else {rcc1_p651=T;return rcc1_m651=(rcc1_v1848==rcc1_f652());}}
static double rcc1_f635(){if (rcc1_p635) return rcc1_m635; else {rcc1_p635=T;return rcc1_m635=(rcc1_f655()?(rcc1_f651()?rcc1_f649():rcc1_f652()):(rcc1_f656()+(rcc1_f642()*rcc1_f652())));}}
static double rcc1_f647(){if (rcc1_p647) return rcc1_m647; else {rcc1_p647=T;return rcc1_m647=(rcc1_f655()?(rcc1_f651()?rcc1_f649():(0.0)):(1.0));}}
static double rcc1_f641(){if (rcc1_p641) return rcc1_m641; else {rcc1_p641=T;return rcc1_m641=(rcc1_f655()?(rcc1_f651()?rcc1_f649():(1.0)):rcc1_f642());}}
static double rcc1_f618(){if (rcc1_p618) return rcc1_m618; else {rcc1_p618=T;return rcc1_m618=((rcc1_v626=rcc1_f626()),(((rcc1_f647()*(rcc1_f656()+cos(rcc1_v626)))+(rcc1_f641()*(rcc1_f652()+sin(rcc1_v626))))-rcc1_f635()));}}
static double rcc1_f634(){if (rcc1_p634) return rcc1_m634; else {rcc1_p634=T;return rcc1_m634=(((rcc1_f647()*rcc1_v1858)+(rcc1_f641()*rcc1_v1856))-rcc1_f635());}}
static int rcc1_f613(){if (rcc1_p613) return rcc1_m613; else {rcc1_p613=T;return rcc1_m613=(rcc1_f634()>(0.0));}}
static int rcc1_f606(){if (rcc1_p606) return rcc1_m606; else {rcc1_p606=T;return rcc1_m606=((rcc1_v701=rcc1_f701()),(rcc1_v701?rcc1_v701:((rcc1_f692()?((fabs((rcc1_v1842-rcc1_f676()))<rcc1_v1816)?(fabs((rcc1_v1840-rcc1_f664()))<rcc1_v1816):NIL):NIL)?T:(((fabs((rcc1_f634()-(0.0)))<rcc1_v1816)?T:((rcc1_v618=rcc1_f618()),((fabs((rcc1_v618-(0.0)))<rcc1_v1816)?NIL:((rcc1_v618>(0.0))?rcc1_f613():(rcc1_f613()?NIL:T)))))?NIL:T))));}}
static int rcc1_f514(){if (rcc1_p514) return rcc1_m514; else {rcc1_p514=T;return rcc1_m514=((rcc1_v515=rcc1_f515()),(rcc1_v515?rcc1_v515:rcc1_f606()));}}
static double rcc1_f511(){if (rcc1_p511) return rcc1_m511; else {rcc1_p511=T;return rcc1_m511=(rcc1_f514()?rcc1_f528():rcc1_f599());}}
static double rcc1_f513(){if (rcc1_p513) return rcc1_m513; else {rcc1_p513=T;return rcc1_m513=(rcc1_f514()?rcc1_f528():rcc1_f603());}}
static int rcc1_f512(){if (rcc1_p512) return rcc1_m512; else {rcc1_p512=T;return rcc1_m512=(rcc1_f513()<(0.0));}}
static int rcc1_f506(){if (rcc1_p506) return rcc1_m506; else {rcc1_p506=T;return rcc1_m506=(rcc1_f514()?((rcc1_v512=rcc1_f512()),(rcc1_v512?rcc1_v512:(fabs((rcc1_f511()-(0.0)))<rcc1_v1816))):NIL);}}
static int rcc1_f503(){if (rcc1_p503) return rcc1_m503; else {rcc1_p503=T;return rcc1_m503=((rcc1_f506()?rcc1_f513():rcc1_f603())<(0.0));}}
static int rcc1_f544(){if (rcc1_p544) return rcc1_m544; else {rcc1_p544=T;return rcc1_m544=((rcc1_v545=rcc1_f545()),(rcc1_v545?rcc1_v545:rcc1_f606()));}}
static int rcc1_f542(){if (rcc1_p542) return rcc1_m542; else {rcc1_p542=T;return rcc1_m542=((rcc1_f544()?rcc1_f558():rcc1_f603())<(0.0));}}
static int rcc1_f605(){if (rcc1_p605) return rcc1_m605; else {rcc1_p605=T;return rcc1_m605=((rcc1_v702=rcc1_f702()),(rcc1_v702?rcc1_v702:rcc1_f606()));}}
static double_or_symbol rcc1_f580(){if (rcc1_p580) return rcc1_m580; else {rcc1_p580=T;return rcc1_m580=(rcc1_f605()?coerce_double_to_double_or_symbol(rcc1_f718()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcc1_f598(){if (rcc1_p598) return rcc1_m598; else {rcc1_p598=T;return rcc1_m598=(rcc1_f605()?rcc1_f718():rcc1_f599());}}
static double rcc1_f602(){if (rcc1_p602) return rcc1_m602; else {rcc1_p602=T;return rcc1_m602=(rcc1_f605()?rcc1_f718():rcc1_f603());}}
static int rcc1_f601(){if (rcc1_p601) return rcc1_m601; else {rcc1_p601=T;return rcc1_m601=(rcc1_f602()<(0.0));}}
static int rcc1_f593(){if (rcc1_p593) return rcc1_m593; else {rcc1_p593=T;return rcc1_m593=(rcc1_f605()?((rcc1_v601=rcc1_f601()),(rcc1_v601?rcc1_v601:(fabs((rcc1_f598()-(0.0)))<rcc1_v1816))):NIL);}}
static int rcc1_f590(){if (rcc1_p590) return rcc1_m590; else {rcc1_p590=T;return rcc1_m590=((rcc1_f593()?rcc1_f602():rcc1_f603())<(0.0));}}
static double_or_symbol rcc1_f576(){if (rcc1_p576) return rcc1_m576; else {rcc1_p576=T;return rcc1_m576=(rcc1_f1772()?((rcc1_v593=rcc1_f593()),(rcc1_v593?(((rcc1_v593?rcc1_f605():NIL)?((rcc1_v590=rcc1_f590()),(rcc1_v590?rcc1_v590:(fabs(((rcc1_v593?rcc1_f598():rcc1_f599())-(0.0)))<rcc1_v1816))):NIL)?coerce_double_to_double_or_symbol((rcc1_f605()?rcc1_f718():rcc1_f582())):rcc1_f580()):(rcc1_v593?rcc1_f580():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL));}}
void rcc1(rcc1_a1858,rcc1_a1856,rcc1_a1854,rcc1_a1852,rcc1_a1850,rcc1_a1848,rcc1_a1846,rcc1_a1844,rcc1_a1842,rcc1_a1840,rcc1_a1816)
double rcc1_a1858;
double rcc1_a1856;
double rcc1_a1854;
double rcc1_a1852;
double rcc1_a1850;
double rcc1_a1848;
double rcc1_a1846;
double rcc1_a1844;
double rcc1_a1842;
double rcc1_a1840;
double rcc1_a1816;
{ rcc1_v1858=rcc1_a1858;
  rcc1_v1856=rcc1_a1856;
  rcc1_v1854=rcc1_a1854;
  rcc1_v1852=rcc1_a1852;
  rcc1_v1850=rcc1_a1850;
  rcc1_v1848=rcc1_a1848;
  rcc1_v1846=rcc1_a1846;
  rcc1_v1844=rcc1_a1844;
  rcc1_v1842=rcc1_a1842;
  rcc1_v1840=rcc1_a1840;
  rcc1_v1816=rcc1_a1816;
  rcc1_p42=NIL;
  rcc1_p44=NIL;
  rcc1_p1066=NIL;
  rcc1_p1067=NIL;
  rcc1_p1104=NIL;
  rcc1_p1102=NIL;
  rcc1_p1108=NIL;
  rcc1_p1131=NIL;
  rcc1_p1407=NIL;
  rcc1_p1429=NIL;
  rcc1_p1107=NIL;
  rcc1_p242=NIL;
  rcc1_p1427=NIL;
  rcc1_p582=NIL;
  rcc1_p599=NIL;
  rcc1_p603=NIL;
  rcc1_p649=NIL;
  rcc1_p653=NIL;
  rcc1_p657=NIL;
  rcc1_p690=NIL;
  rcc1_p1730=NIL;
  rcc1_p1732=NIL;
  rcc1_p240=NIL;
  rcc1_p238=NIL;
  rcc1_p223=NIL;
  rcc1_p237=NIL;
  rcc1_p1760=NIL;
  rcc1_p1759=NIL;
  rcc1_p1756=NIL;
  rcc1_p1747=NIL;
  rcc1_p1733=NIL;
  rcc1_p1094=NIL;
  rcc1_p1088=NIL;
  rcc1_p1101=NIL;
  rcc1_p1099=NIL;
  rcc1_p228=NIL;
  rcc1_p1095=NIL;
  rcc1_p234=NIL;
  rcc1_p225=NIL;
  rcc1_p217=NIL;
  rcc1_p199=NIL;
  rcc1_p198=NIL;
  rcc1_p211=NIL;
  rcc1_p205=NIL;
  rcc1_p197=NIL;
  rcc1_p173=NIL;
  rcc1_p189=NIL;
  rcc1_p196=NIL;
  rcc1_p182=NIL;
  rcc1_p194=NIL;
  rcc1_p188=NIL;
  rcc1_p165=NIL;
  rcc1_p181=NIL;
  rcc1_p160=NIL;
  rcc1_p153=NIL;
  rcc1_p1719=NIL;
  rcc1_p1720=NIL;
  rcc1_p698=NIL;
  rcc1_p696=NIL;
  rcc1_p682=NIL;
  rcc1_p679=NIL;
  rcc1_p667=NIL;
  rcc1_p695=NIL;
  rcc1_p1755=NIL;
  rcc1_p1754=NIL;
  rcc1_p1133=NIL;
  rcc1_p1128=NIL;
  rcc1_p1753=NIL;
  rcc1_p701=NIL;
  rcc1_p1647=NIL;
  rcc1_p1646=NIL;
  rcc1_p1113=NIL;
  rcc1_p1046=NIL;
  rcc1_p1112=NIL;
  rcc1_p1012=NIL;
  rcc1_p1011=NIL;
  rcc1_p1645=NIL;
  rcc1_p1769=NIL;
  rcc1_p1767=NIL;
  rcc1_p993=NIL;
  rcc1_p1765=NIL;
  rcc1_p1699=NIL;
  rcc1_p1764=NIL;
  rcc1_p1666=NIL;
  rcc1_p1665=NIL;
  rcc1_p575=NIL;
  rcc1_p1799=NIL;
  rcc1_p1797=NIL;
  rcc1_p273=NIL;
  rcc1_p1794=NIL;
  rcc1_p1137=NIL;
  rcc1_p1812=NIL;
  rcc1_p1809=NIL;
  rcc1_p739=NIL;
  rcc1_p1801=NIL;
  rcc1_p1793=NIL;
  rcc1_p1791=NIL;
  rcc1_p1790=NIL;
  rcc1_p1134=NIL;
  rcc1_p1024=NIL;
  rcc1_p130=NIL;
  rcc1_p126=NIL;
  rcc1_p121=NIL;
  rcc1_p128=NIL;
  rcc1_p127=NIL;
  rcc1_p125=NIL;
  rcc1_p124=NIL;
  rcc1_p120=NIL;
  rcc1_p84=NIL;
  rcc1_p83=NIL;
  rcc1_p71=NIL;
  rcc1_p70=NIL;
  rcc1_p67=NIL;
  rcc1_p69=NIL;
  rcc1_p68=NIL;
  rcc1_p62=NIL;
  rcc1_p61=NIL;
  rcc1_p59=NIL;
  rcc1_p53=NIL;
  rcc1_p114=NIL;
  rcc1_p113=NIL;
  rcc1_p101=NIL;
  rcc1_p100=NIL;
  rcc1_p98=NIL;
  rcc1_p92=NIL;
  rcc1_p1035=NIL;
  rcc1_p1116=NIL;
  rcc1_p1127=NIL;
  rcc1_p1042=NIL;
  rcc1_p1041=NIL;
  rcc1_p1126=NIL;
  rcc1_p1124=NIL;
  rcc1_p265=NIL;
  rcc1_p256=NIL;
  rcc1_p255=NIL;
  rcc1_p243=NIL;
  rcc1_p152=NIL;
  rcc1_p40=NIL;
  rcc1_p149=NIL;
  rcc1_p151=NIL;
  rcc1_p150=NIL;
  rcc1_p144=NIL;
  rcc1_p141=NIL;
  rcc1_p135=NIL;
  rcc1_p1118=NIL;
  rcc1_p36=NIL;
  rcc1_p16=NIL;
  rcc1_p271=NIL;
  rcc1_p132=NIL;
  rcc1_p1788=NIL;
  rcc1_p1678=NIL;
  rcc1_p1677=NIL;
  rcc1_p1689=NIL;
  rcc1_p1688=NIL;
  rcc1_p729=NIL;
  rcc1_p1787=NIL;
  rcc1_p1785=NIL;
  rcc1_p1784=NIL;
  rcc1_p1424=NIL;
  rcc1_p366=NIL;
  rcc1_p362=NIL;
  rcc1_p357=NIL;
  rcc1_p364=NIL;
  rcc1_p361=NIL;
  rcc1_p360=NIL;
  rcc1_p356=NIL;
  rcc1_p320=NIL;
  rcc1_p319=NIL;
  rcc1_p307=NIL;
  rcc1_p350=NIL;
  rcc1_p349=NIL;
  rcc1_p337=NIL;
  rcc1_p1412=NIL;
  rcc1_p1423=NIL;
  rcc1_p1385=NIL;
  rcc1_p1422=NIL;
  rcc1_p1420=NIL;
  rcc1_p475=NIL;
  rcc1_p466=NIL;
  rcc1_p465=NIL;
  rcc1_p453=NIL;
  rcc1_p1414=NIL;
  rcc1_p1782=NIL;
  rcc1_p574=NIL;
  rcc1_p570=NIL;
  rcc1_p565=NIL;
  rcc1_p572=NIL;
  rcc1_p569=NIL;
  rcc1_p568=NIL;
  rcc1_p564=NIL;
  rcc1_p528=NIL;
  rcc1_p527=NIL;
  rcc1_p515=NIL;
  rcc1_p558=NIL;
  rcc1_p557=NIL;
  rcc1_p545=NIL;
  rcc1_p1770=NIL;
  rcc1_p1781=NIL;
  rcc1_p1694=NIL;
  rcc1_p1780=NIL;
  rcc1_p1778=NIL;
  rcc1_p727=NIL;
  rcc1_p718=NIL;
  rcc1_p717=NIL;
  rcc1_p702=NIL;
  rcc1_p1772=NIL;
  rcc1_p1818=NIL;
  rcc1_p687=NIL;
  rcc1_p1814=NIL;
  rcc1_p1743=NIL;
  rcc1_p452=NIL;
  rcc1_p449=NIL;
  rcc1_p445=NIL;
  rcc1_p442=NIL;
  rcc1_p692=NIL;
  rcc1_p434=NIL;
  rcc1_p433=NIL;
  rcc1_p436=NIL;
  rcc1_p411=NIL;
  rcc1_p435=NIL;
  rcc1_p431=NIL;
  rcc1_p426=NIL;
  rcc1_p419=NIL;
  rcc1_p425=NIL;
  rcc1_p403=NIL;
  rcc1_p418=NIL;
  rcc1_p398=NIL;
  rcc1_p391=NIL;
  rcc1_p306=NIL;
  rcc1_p303=NIL;
  rcc1_p305=NIL;
  rcc1_p304=NIL;
  rcc1_p298=NIL;
  rcc1_p295=NIL;
  rcc1_p336=NIL;
  rcc1_p334=NIL;
  rcc1_p390=NIL;
  rcc1_p371=NIL;
  rcc1_p387=NIL;
  rcc1_p389=NIL;
  rcc1_p388=NIL;
  rcc1_p382=NIL;
  rcc1_p379=NIL;
  rcc1_p367=NIL;
  rcc1_p684=NIL;
  rcc1_p676=NIL;
  rcc1_p656=NIL;
  rcc1_p655=NIL;
  rcc1_p670=NIL;
  rcc1_p664=NIL;
  rcc1_p652=NIL;
  rcc1_p626=NIL;
  rcc1_p642=NIL;
  rcc1_p651=NIL;
  rcc1_p635=NIL;
  rcc1_p647=NIL;
  rcc1_p641=NIL;
  rcc1_p618=NIL;
  rcc1_p634=NIL;
  rcc1_p613=NIL;
  rcc1_p606=NIL;
  rcc1_p514=NIL;
  rcc1_p511=NIL;
  rcc1_p513=NIL;
  rcc1_p512=NIL;
  rcc1_p506=NIL;
  rcc1_p503=NIL;
  rcc1_p544=NIL;
  rcc1_p542=NIL;
  rcc1_p605=NIL;
  rcc1_p580=NIL;
  rcc1_p598=NIL;
  rcc1_p602=NIL;
  rcc1_p601=NIL;
  rcc1_p593=NIL;
  rcc1_p590=NIL;
  rcc1_p576=NIL;
  double_or_symbol_result=((rcc1_v1838=(rcc1_v1858-rcc1_v1850)),(rcc1_v1836=(rcc1_v1856-rcc1_v1848)),(rcc1_v1834=((rcc1_v1838*rcc1_v1838)+(rcc1_v1836*rcc1_v1836))),(rcc1_v1833=sqrt(rcc1_v1834)),(rcc1_v1832=(rcc1_v1858-rcc1_v1854)),(rcc1_v1830=(rcc1_v1856-rcc1_v1852)),(rcc1_v1827=sqrt(((rcc1_v1832*rcc1_v1832)+(rcc1_v1830*rcc1_v1830)))),(rcc1_v1826=(rcc1_v1850-rcc1_v1846)),(rcc1_v1824=(rcc1_v1848-rcc1_v1844)),(rcc1_v1821=sqrt(((rcc1_v1826*rcc1_v1826)+(rcc1_v1824*rcc1_v1824)))),(rcc1_v1820=(rcc1_v1827+rcc1_v1821)),(rcc1_v1819=(rcc1_v1833>rcc1_v1820)),((rcc1_v1819?rcc1_v1819:rcc1_f1814())?(rcc1_f739()?coerce_symbol_to_double_or_symbol(NIL):((rcc1_v1772=rcc1_f1772()),((rcc1_v1772?(rcc1_f1770()?(rcc1_f1764()<rcc1_f1782()):NIL):(rcc1_v1772?NIL:T))?(rcc1_f1699()?coerce_symbol_to_double_or_symbol(NIL):((rcc1_v1781=rcc1_f1781()),((rcc1_f1765()>(rcc1_v1781*rcc1_v1781))?rcc1_f576():((rcc1_f572()<0.0)?rcc1_f576():((rcc1_v544=rcc1_f544()),((rcc1_v544?((rcc1_v542=rcc1_f542()),(rcc1_v542?rcc1_v542:(fabs(((rcc1_v544?rcc1_f558():rcc1_f599())-(0.0)))<rcc1_v1816))):NIL)?((rcc1_v506=rcc1_f506()),(((rcc1_v506?rcc1_f514():NIL)?((rcc1_v503=rcc1_f503()),(rcc1_v503?rcc1_v503:(fabs(((rcc1_v506?rcc1_f511():rcc1_f599())-(0.0)))<rcc1_v1816))):NIL)?coerce_double_to_double_or_symbol((rcc1_v544?(rcc1_v506?(rcc1_f514()?((rcc1_v558=rcc1_f558()),(rcc1_v528=rcc1_f528()),((rcc1_v558>rcc1_v528)?rcc1_v558:rcc1_v528)):rcc1_f582()):rcc1_f582()):rcc1_f582())):(rcc1_v544?coerce_double_to_double_or_symbol(rcc1_f558()):coerce_symbol_to_double_or_symbol(NIL)))):(rcc1_f506()?(rcc1_f514()?coerce_double_to_double_or_symbol(rcc1_f528()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))))))):coerce_symbol_to_double_or_symbol(NIL)))):((rcc1_v1827<rcc1_v1821)?(rcc1_f739()?coerce_symbol_to_double_or_symbol(NIL):((rcc1_v1414=rcc1_f1414()),((rcc1_v1414?((rcc1_v1412=rcc1_f1412()),(rcc1_v1412?rcc1_v1412:(rcc1_f1764()>rcc1_f1424()))):(rcc1_v1414?NIL:T))?(rcc1_f1699()?coerce_symbol_to_double_or_symbol(NIL):((rcc1_v1423=rcc1_f1423()),((rcc1_f1765()>(rcc1_v1423*rcc1_v1423))?rcc1_f367():((rcc1_f364()<0.0)?rcc1_f367():((rcc1_v336=rcc1_f336()),((rcc1_v336?((rcc1_v334=rcc1_f334()),(rcc1_v334?rcc1_v334:(fabs(((rcc1_v336?rcc1_f350():rcc1_f599())-(0.0)))<rcc1_v1816))):NIL)?((rcc1_v298=rcc1_f298()),(((rcc1_v298?rcc1_f306():NIL)?((rcc1_v295=rcc1_f295()),(rcc1_v295?rcc1_v295:(fabs(((rcc1_v298?rcc1_f303():rcc1_f599())-(0.0)))<rcc1_v1816))):NIL)?coerce_double_to_double_or_symbol((rcc1_v336?(rcc1_v298?(rcc1_f306()?((rcc1_v350=rcc1_f350()),(rcc1_v320=rcc1_f320()),((rcc1_v350>rcc1_v320)?rcc1_v350:rcc1_v320)):rcc1_f582()):rcc1_f582()):rcc1_f582())):(rcc1_v336?coerce_double_to_double_or_symbol(rcc1_f350()):coerce_symbol_to_double_or_symbol(NIL)))):(rcc1_f298()?(rcc1_f306()?coerce_double_to_double_or_symbol(rcc1_f320()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))))))):coerce_symbol_to_double_or_symbol(NIL)))):((rcc1_v273=rcc1_f273()),((rcc1_v273?NIL:(rcc1_f271()?(rcc1_f1046()?NIL:(rcc1_f1042()?rcc1_f132():(rcc1_f127()?rcc1_f132():(rcc1_f92()?(rcc1_f53()?T:rcc1_f100()):rcc1_f61())))):NIL))?coerce_double_to_double_or_symbol((-(rcc1_v273?rcc1_f44():(rcc1_f271()?(rcc1_f1046()?rcc1_f44():(rcc1_f1042()?rcc1_f36():(rcc1_f127()?rcc1_f36():(rcc1_f92()?(rcc1_f53()?(rcc1_f100()?(rcc1_f62()?(rcc1_f70()?((rcc1_v114=rcc1_f114()),(rcc1_v84=rcc1_f84()),((rcc1_v114<rcc1_v84)?rcc1_v114:rcc1_v84)):rcc1_f42()):rcc1_f42()):rcc1_f42()):(rcc1_f100()?rcc1_f114():rcc1_f44())):(rcc1_f62()?(rcc1_f70()?rcc1_f84():rcc1_f44()):rcc1_f44()))))):rcc1_f44())))):coerce_symbol_to_double_or_symbol(((rcc1_v273?T:(rcc1_f271()?(rcc1_f1046()?T:(rcc1_f1042()?rcc1_f16():(rcc1_f127()?rcc1_f16():(rcc1_f92()?(rcc1_f53()?NIL:(rcc1_f100()?NIL:T)):(rcc1_f62()?(rcc1_f70()?NIL:T):T))))):T))?NIL:error("No applicable method for OPPOSITE with argument types ((OR NULL FLOAT))")))))))); return;}
