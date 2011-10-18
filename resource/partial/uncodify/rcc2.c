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
double rcc2_v1858;
double rcc2_v1856;
double rcc2_v1854;
double rcc2_v1852;
double rcc2_v1850;
double rcc2_v1848;
double rcc2_v1846;
double rcc2_v1844;
double rcc2_v1842;
double rcc2_v1840;
double rcc2_v1816;
double rcc2_v1838;
double rcc2_v1836;
double rcc2_v1834;
double rcc2_v1833;
double rcc2_v1832;
double rcc2_v1830;
double rcc2_v1827;
double rcc2_v1826;
double rcc2_v1824;
double rcc2_v1821;
double rcc2_v1820;
int rcc2_v1819;
int rcc2_p42;
double rcc2_m42;
int rcc2_p44;
double rcc2_m44;
int rcc2_p1066;
double rcc2_m1066;
int rcc2_p1067;
double rcc2_m1067;
int rcc2_p1104;
double rcc2_m1104;
double rcc2_v1104;
int rcc2_p1102;
int rcc2_m1102;
int rcc2_p1108;
int rcc2_m1108;
int rcc2_p1131;
double rcc2_m1131;
int rcc2_p1407;
double rcc2_m1407;
int rcc2_p1429;
double rcc2_m1429;
int rcc2_p1107;
double rcc2_m1107;
int rcc2_p242;
int rcc2_m242;
int rcc2_p1427;
double rcc2_m1427;
int rcc2_p582;
double rcc2_m582;
int rcc2_p599;
double rcc2_m599;
int rcc2_p603;
double rcc2_m603;
int rcc2_p649;
double rcc2_m649;
int rcc2_p653;
double rcc2_m653;
int rcc2_p657;
double rcc2_m657;
int rcc2_p690;
double rcc2_m690;
int rcc2_p1730;
double rcc2_m1730;
int rcc2_p1732;
double rcc2_m1732;
int rcc2_p240;
double rcc2_m240;
double rcc2_v240;
int rcc2_p238;
double rcc2_m238;
int rcc2_p223;
double rcc2_m223;
int rcc2_p237;
int rcc2_m237;
int rcc2_p1760;
double rcc2_m1760;
int rcc2_p1759;
double rcc2_m1759;
double rcc2_v1760;
double rcc2_v1759;
int rcc2_p1756;
double rcc2_m1756;
int rcc2_p1747;
int rcc2_m1747;
int rcc2_p1733;
double rcc2_m1733;
int rcc2_p1094;
int rcc2_m1094;
int rcc2_p1088;
double rcc2_m1088;
int rcc2_p1101;
double rcc2_m1101;
int rcc2_p1099;
int rcc2_m1099;
int rcc2_v1094;
int rcc2_p228;
double rcc2_m228;
int rcc2_v1099;
int rcc2_p1095;
int rcc2_m1095;
int rcc2_p234;
int rcc2_m234;
int rcc2_p225;
double rcc2_m225;
int rcc2_p217;
double rcc2_m217;
int rcc2_p199;
double rcc2_m199;
int rcc2_p198;
int rcc2_m198;
int rcc2_p211;
double rcc2_m211;
int rcc2_p205;
double rcc2_m205;
int rcc2_p197;
double rcc2_m197;
int rcc2_p173;
double rcc2_m173;
int rcc2_p189;
double rcc2_m189;
int rcc2_p196;
int rcc2_m196;
int rcc2_p182;
double rcc2_m182;
int rcc2_p194;
double rcc2_m194;
int rcc2_p188;
double rcc2_m188;
double rcc2_v173;
int rcc2_p165;
double rcc2_m165;
int rcc2_p181;
double rcc2_m181;
int rcc2_p160;
int rcc2_m160;
int rcc2_v242;
double rcc2_v165;
int rcc2_p153;
int rcc2_m153;
int rcc2_p1719;
double rcc2_m1719;
int rcc2_p1720;
double rcc2_m1720;
int rcc2_p698;
double rcc2_m698;
double rcc2_v698;
int rcc2_p696;
double rcc2_m696;
int rcc2_p682;
double rcc2_m682;
int rcc2_p679;
double rcc2_m679;
int rcc2_p667;
double rcc2_m667;
int rcc2_p695;
int rcc2_m695;
int rcc2_p1755;
int rcc2_m1755;
int rcc2_p1754;
double rcc2_m1754;
int rcc2_p1133;
double rcc2_m1133;
double rcc2_v1133;
double rcc2_v1131;
int rcc2_p1128;
double rcc2_m1128;
int rcc2_p1753;
double rcc2_m1753;
int rcc2_p701;
int rcc2_m701;
int rcc2_p1647;
double rcc2_m1647;
int rcc2_p1646;
double rcc2_m1646;
double rcc2_v1646;
double rcc2_v1647;
int rcc2_p1113;
double rcc2_m1113;
int rcc2_p1046;
int rcc2_m1046;
int rcc2_p1112;
double rcc2_m1112;
int rcc2_p1012;
double rcc2_m1012;
int rcc2_p1011;
double rcc2_m1011;
int rcc2_p1645;
double rcc2_m1645;
int rcc2_p1769;
double rcc2_m1769;
int rcc2_p1767;
double rcc2_m1767;
int rcc2_p993;
double rcc2_m993;
double rcc2_v1769;
double rcc2_v1767;
int rcc2_p1765;
double rcc2_m1765;
int rcc2_p1699;
int rcc2_m1699;
int rcc2_p1764;
double rcc2_m1764;
int rcc2_p1666;
double rcc2_m1666;
int rcc2_p1665;
double rcc2_m1665;
int rcc2_p575;
double rcc2_m575;
int rcc2_p1799;
double rcc2_m1799;
int rcc2_p1797;
double rcc2_m1797;
int rcc2_p273;
int rcc2_m273;
double rcc2_v1799;
double rcc2_v1797;
int rcc2_p1794;
double rcc2_m1794;
int rcc2_p1137;
double rcc2_m1137;
int rcc2_p1812;
double rcc2_m1812;
int rcc2_p1809;
double rcc2_m1809;
int rcc2_p739;
int rcc2_m739;
double rcc2_v1812;
double rcc2_v1809;
int rcc2_p1801;
double rcc2_m1801;
int rcc2_p1793;
double rcc2_m1793;
int rcc2_p1791;
double rcc2_m1791;
double rcc2_v1791;
int rcc2_p1790;
double rcc2_m1790;
double rcc2_v1137;
int rcc2_p1134;
double rcc2_m1134;
double rcc2_v1134;
int rcc2_p1024;
double rcc2_m1024;
double rcc2_v1128;
int rcc2_p130;
double rcc2_m130;
int rcc2_p126;
double rcc2_m126;
int rcc2_p121;
double rcc2_m121;
double rcc2_v130;
int rcc2_p128;
double rcc2_m128;
int rcc2_p127;
int rcc2_m127;
int rcc2_p125;
double rcc2_m125;
int rcc2_p124;
double rcc2_m124;
int rcc2_p120;
double rcc2_m120;
int rcc2_p84;
double rcc2_m84;
int rcc2_p83;
double rcc2_m83;
double rcc2_v83;
int rcc2_p71;
int rcc2_m71;
int rcc2_v71;
int rcc2_p70;
int rcc2_m70;
int rcc2_p67;
double rcc2_m67;
int rcc2_p69;
double rcc2_m69;
int rcc2_p68;
int rcc2_m68;
int rcc2_v68;
int rcc2_p62;
int rcc2_m62;
int rcc2_p61;
int rcc2_m61;
int rcc2_p59;
int rcc2_m59;
int rcc2_v59;
int rcc2_p53;
int rcc2_m53;
int rcc2_p114;
double rcc2_m114;
int rcc2_p113;
double rcc2_m113;
double rcc2_v113;
int rcc2_p101;
int rcc2_m101;
int rcc2_v101;
int rcc2_p100;
int rcc2_m100;
int rcc2_p98;
int rcc2_m98;
int rcc2_v100;
int rcc2_v98;
int rcc2_p92;
int rcc2_m92;
int rcc2_p1035;
double rcc2_m1035;
int rcc2_p1116;
int rcc2_m1116;
int rcc2_p1127;
double rcc2_m1127;
double rcc2_v1127;
int rcc2_p1042;
int rcc2_m1042;
int rcc2_p1041;
int rcc2_m1041;
int rcc2_p1126;
double rcc2_m1126;
int rcc2_p1124;
int rcc2_m1124;
int rcc2_v1041;
int rcc2_p265;
double rcc2_m265;
double rcc2_v265;
int rcc2_p256;
double rcc2_m256;
int rcc2_p255;
double rcc2_m255;
double rcc2_v255;
int rcc2_p243;
int rcc2_m243;
int rcc2_v243;
int rcc2_p152;
int rcc2_m152;
int rcc2_p40;
double rcc2_m40;
int rcc2_p149;
double rcc2_m149;
int rcc2_p151;
double rcc2_m151;
int rcc2_p150;
int rcc2_m150;
int rcc2_v150;
int rcc2_p144;
int rcc2_m144;
int rcc2_p141;
int rcc2_m141;
int rcc2_v144;
int rcc2_v141;
int rcc2_p135;
int rcc2_m135;
int rcc2_v1124;
int rcc2_p1118;
int rcc2_m1118;
int rcc2_v144;
int rcc2_p36;
double rcc2_m36;
int rcc2_p16;
int rcc2_m16;
int rcc2_v1118;
int rcc2_v1116;
int rcc2_p271;
int rcc2_m271;
int rcc2_p132;
int rcc2_m132;
double rcc2_v1793;
int rcc2_p1788;
double rcc2_m1788;
double rcc2_v1788;
int rcc2_p1678;
double rcc2_m1678;
int rcc2_p1677;
double rcc2_m1677;
int rcc2_p1689;
double rcc2_m1689;
int rcc2_p1688;
double rcc2_m1688;
int rcc2_p729;
double rcc2_m729;
int rcc2_p1787;
double rcc2_m1787;
int rcc2_p1785;
double rcc2_m1785;
double rcc2_v1785;
int rcc2_p1784;
double rcc2_m1784;
double rcc2_v1427;
int rcc2_p1424;
double rcc2_m1424;
double rcc2_v1424;
int rcc2_p366;
double rcc2_m366;
int rcc2_p362;
double rcc2_m362;
int rcc2_p357;
double rcc2_m357;
double rcc2_v366;
int rcc2_p364;
double rcc2_m364;
int rcc2_p361;
double rcc2_m361;
int rcc2_p360;
double rcc2_m360;
int rcc2_p356;
double rcc2_m356;
int rcc2_p320;
double rcc2_m320;
int rcc2_p319;
double rcc2_m319;
double rcc2_v319;
int rcc2_p307;
int rcc2_m307;
int rcc2_p350;
double rcc2_m350;
int rcc2_p349;
double rcc2_m349;
double rcc2_v349;
int rcc2_p337;
int rcc2_m337;
int rcc2_p1412;
int rcc2_m1412;
int rcc2_p1423;
double rcc2_m1423;
int rcc2_p1385;
int rcc2_m1385;
int rcc2_p1422;
double rcc2_m1422;
int rcc2_p1420;
int rcc2_m1420;
int rcc2_v1385;
int rcc2_p475;
double rcc2_m475;
double rcc2_v475;
int rcc2_p466;
double rcc2_m466;
int rcc2_p465;
double rcc2_m465;
double rcc2_v465;
int rcc2_p453;
int rcc2_m453;
int rcc2_v1420;
int rcc2_p1414;
int rcc2_m1414;
double rcc2_v1787;
int rcc2_p1782;
double rcc2_m1782;
double rcc2_v1782;
int rcc2_p574;
double rcc2_m574;
int rcc2_p570;
double rcc2_m570;
int rcc2_p565;
double rcc2_m565;
double rcc2_v574;
int rcc2_p572;
double rcc2_m572;
int rcc2_p569;
double rcc2_m569;
int rcc2_p568;
double rcc2_m568;
int rcc2_p564;
double rcc2_m564;
int rcc2_p528;
double rcc2_m528;
int rcc2_p527;
double rcc2_m527;
double rcc2_v527;
int rcc2_p515;
int rcc2_m515;
int rcc2_p558;
double rcc2_m558;
int rcc2_p557;
double rcc2_m557;
double rcc2_v557;
int rcc2_p545;
int rcc2_m545;
int rcc2_p1770;
int rcc2_m1770;
int rcc2_p1781;
double rcc2_m1781;
int rcc2_p1694;
int rcc2_m1694;
int rcc2_p1780;
double rcc2_m1780;
int rcc2_p1778;
int rcc2_m1778;
int rcc2_v1694;
int rcc2_p727;
double rcc2_m727;
double rcc2_v727;
int rcc2_p718;
double rcc2_m718;
int rcc2_p717;
double rcc2_m717;
double rcc2_v717;
int rcc2_p702;
int rcc2_m702;
int rcc2_v1778;
int rcc2_p1772;
int rcc2_m1772;
int rcc2_p1818;
double rcc2_m1818;
int rcc2_p687;
double rcc2_m687;
int rcc2_p1814;
int rcc2_m1814;
int rcc2_v1814;
int rcc2_p1743;
int rcc2_m1743;
int rcc2_p452;
double rcc2_m452;
int rcc2_p449;
double rcc2_m449;
int rcc2_p445;
double rcc2_m445;
int rcc2_p442;
double rcc2_m442;
int rcc2_p692;
int rcc2_m692;
int rcc2_p434;
double rcc2_m434;
int rcc2_p433;
int rcc2_m433;
int rcc2_p436;
double rcc2_m436;
int rcc2_p411;
double rcc2_m411;
int rcc2_p435;
int rcc2_m435;
int rcc2_p431;
double rcc2_m431;
int rcc2_p426;
double rcc2_m426;
int rcc2_p419;
double rcc2_m419;
int rcc2_p425;
double rcc2_m425;
double rcc2_v411;
int rcc2_p403;
double rcc2_m403;
int rcc2_p418;
double rcc2_m418;
int rcc2_p398;
int rcc2_m398;
int rcc2_v701;
double rcc2_v403;
int rcc2_p391;
int rcc2_m391;
int rcc2_v307;
int rcc2_p306;
int rcc2_m306;
int rcc2_p303;
double rcc2_m303;
int rcc2_p305;
double rcc2_m305;
int rcc2_p304;
int rcc2_m304;
int rcc2_v304;
int rcc2_p298;
int rcc2_m298;
int rcc2_p295;
int rcc2_m295;
int rcc2_v337;
int rcc2_p336;
int rcc2_m336;
int rcc2_p334;
int rcc2_m334;
int rcc2_v453;
int rcc2_p390;
int rcc2_m390;
int rcc2_p371;
double_or_symbol rcc2_m371;
int rcc2_p387;
double rcc2_m387;
int rcc2_p389;
double rcc2_m389;
int rcc2_p388;
int rcc2_m388;
int rcc2_v388;
int rcc2_p382;
int rcc2_m382;
int rcc2_p379;
int rcc2_m379;
int rcc2_v382;
int rcc2_v379;
int rcc2_p367;
double_or_symbol rcc2_m367;
int rcc2_p684;
double rcc2_m684;
int rcc2_p676;
double rcc2_m676;
int rcc2_p656;
double rcc2_m656;
int rcc2_p655;
int rcc2_m655;
int rcc2_p670;
double rcc2_m670;
int rcc2_p664;
double rcc2_m664;
int rcc2_p652;
double rcc2_m652;
int rcc2_p626;
double rcc2_m626;
int rcc2_p642;
double rcc2_m642;
int rcc2_p651;
int rcc2_m651;
int rcc2_p635;
double rcc2_m635;
int rcc2_p647;
double rcc2_m647;
int rcc2_p641;
double rcc2_m641;
double rcc2_v626;
int rcc2_p618;
double rcc2_m618;
int rcc2_p634;
double rcc2_m634;
int rcc2_p613;
int rcc2_m613;
int rcc2_v701;
double rcc2_v618;
int rcc2_p606;
int rcc2_m606;
int rcc2_v515;
int rcc2_p514;
int rcc2_m514;
int rcc2_p511;
double rcc2_m511;
int rcc2_p513;
double rcc2_m513;
int rcc2_p512;
int rcc2_m512;
int rcc2_v512;
int rcc2_p506;
int rcc2_m506;
int rcc2_p503;
int rcc2_m503;
int rcc2_v545;
int rcc2_p544;
int rcc2_m544;
int rcc2_p542;
int rcc2_m542;
int rcc2_v702;
int rcc2_p605;
int rcc2_m605;
int rcc2_p580;
double_or_symbol rcc2_m580;
int rcc2_p598;
double rcc2_m598;
int rcc2_p602;
double rcc2_m602;
int rcc2_p601;
int rcc2_m601;
int rcc2_v601;
int rcc2_p593;
int rcc2_m593;
int rcc2_p590;
int rcc2_m590;
int rcc2_v593;
int rcc2_v590;
int rcc2_p576;
double_or_symbol rcc2_m576;
int rcc2_v1772;
double rcc2_v1781;
int rcc2_v544;
int rcc2_v542;
int rcc2_v506;
int rcc2_v503;
double rcc2_v558;
double rcc2_v528;
int rcc2_v1414;
int rcc2_v1412;
double rcc2_v1423;
int rcc2_v336;
int rcc2_v334;
int rcc2_v298;
int rcc2_v295;
double rcc2_v350;
double rcc2_v320;
int rcc2_v273;
double rcc2_v114;
double rcc2_v84;
static double rcc2_f42(){if (rcc2_p42) return rcc2_m42; else {rcc2_p42=T;return rcc2_m42=error("Non-numeric argument to MAX");}}
static double rcc2_f44(){if (rcc2_p44) return rcc2_m44; else {rcc2_p44=T;return rcc2_m44=error("Argument DIRECTION not of type FLOAT");}}
static double rcc2_f1066(){if (rcc2_p1066) return rcc2_m1066; else {rcc2_p1066=T;return rcc2_m1066=(rcc2_v1836/rcc2_v1833);}}
static double rcc2_f1067(){if (rcc2_p1067) return rcc2_m1067; else {rcc2_p1067=T;return rcc2_m1067=(rcc2_v1838/rcc2_v1833);}}
static double rcc2_f1104(){if (rcc2_p1104) return rcc2_m1104; else {rcc2_p1104=T;return rcc2_m1104=(rcc2_v1821+rcc2_v1827);}}
static int rcc2_f1102(){if (rcc2_p1102) return rcc2_m1102; else {rcc2_p1102=T;return rcc2_m1102=((rcc2_v1104=rcc2_f1104()),(rcc2_v1834>(rcc2_v1104*rcc2_v1104)));}}
static int rcc2_f1108(){if (rcc2_p1108) return rcc2_m1108; else {rcc2_p1108=T;return rcc2_m1108=(rcc2_v1834==0.0);}}
static double rcc2_f1131(){if (rcc2_p1131) return rcc2_m1131; else {rcc2_p1131=T;return rcc2_m1131=(rcc2_v1856-rcc2_v1856);}}
static double rcc2_f1407(){if (rcc2_p1407) return rcc2_m1407; else {rcc2_p1407=T;return rcc2_m1407=(-(rcc2_v1827/rcc2_v1833));}}
static double rcc2_f1429(){if (rcc2_p1429) return rcc2_m1429; else {rcc2_p1429=T;return rcc2_m1429=(rcc2_v1821-rcc2_v1827);}}
static double rcc2_f1107(){if (rcc2_p1107) return rcc2_m1107; else {rcc2_p1107=T;return rcc2_m1107=fabs(rcc2_f1429());}}
static int rcc2_f242(){if (rcc2_p242) return rcc2_m242; else {rcc2_p242=T;return rcc2_m242=(rcc2_f1108()?(rcc2_f1107()<rcc2_v1816):NIL);}}
static double rcc2_f1427(){if (rcc2_p1427) return rcc2_m1427; else {rcc2_p1427=T;return rcc2_m1427=(rcc2_v1850-(rcc2_v1850+rcc2_f1429()));}}
static double rcc2_f582(){if (rcc2_p582) return rcc2_m582; else {rcc2_p582=T;return rcc2_m582=error("Non-numeric argument to MIN");}}
static double rcc2_f599(){if (rcc2_p599) return rcc2_m599; else {rcc2_p599=T;return rcc2_m599=error("Argument X not of type FLOAT");}}
static double rcc2_f603(){if (rcc2_p603) return rcc2_m603; else {rcc2_p603=T;return rcc2_m603=error("Argument X not of type REAL");}}
static double rcc2_f649(){if (rcc2_p649) return rcc2_m649; else {rcc2_p649=T;return rcc2_m649=error("Can't form tangent when points are the same");}}
static double rcc2_f653(){if (rcc2_p653) return rcc2_m653; else {rcc2_p653=T;return rcc2_m653=error("No applicable method for Y with argument types ((OR BOOLEAN POINT))");}}
static double rcc2_f657(){if (rcc2_p657) return rcc2_m657; else {rcc2_p657=T;return rcc2_m657=error("No applicable method for X with argument types ((OR BOOLEAN POINT))");}}
static double rcc2_f690(){if (rcc2_p690) return rcc2_m690; else {rcc2_p690=T;return rcc2_m690=error("SLOT-VALUE called on non-instance");}}
static double rcc2_f1730(){if (rcc2_p1730) return rcc2_m1730; else {rcc2_p1730=T;return rcc2_m1730=(rcc2_v1821*rcc2_v1821);}}
static double rcc2_f1732(){if (rcc2_p1732) return rcc2_m1732; else {rcc2_p1732=T;return rcc2_m1732=(rcc2_v1827*rcc2_v1827);}}
static double rcc2_f240(){if (rcc2_p240) return rcc2_m240; else {rcc2_p240=T;return rcc2_m240=(((rcc2_v1834+rcc2_f1730())-rcc2_f1732())/((2.0)*rcc2_v1833));}}
static double rcc2_f238(){if (rcc2_p238) return rcc2_m238; else {rcc2_p238=T;return rcc2_m238=((rcc2_v240=rcc2_f240()),(rcc2_f1730()-(rcc2_v240*rcc2_v240)));}}
static double rcc2_f223(){if (rcc2_p223) return rcc2_m223; else {rcc2_p223=T;return rcc2_m223=sqrt(rcc2_f238());}}
static int rcc2_f237(){if (rcc2_p237) return rcc2_m237; else {rcc2_p237=T;return rcc2_m237=(rcc2_f238()<0.0);}}
static double rcc2_f1760(){if (rcc2_p1760) return rcc2_m1760; else {rcc2_p1760=T;return rcc2_m1760=(rcc2_v1850-rcc2_v1858);}}
static double rcc2_f1759(){if (rcc2_p1759) return rcc2_m1759; else {rcc2_p1759=T;return rcc2_m1759=(rcc2_v1848-rcc2_v1856);}}
static double rcc2_f1756(){if (rcc2_p1756) return rcc2_m1756; else {rcc2_p1756=T;return rcc2_m1756=((rcc2_v1760=rcc2_f1760()),(rcc2_v1759=rcc2_f1759()),((rcc2_v1760*rcc2_v1760)+(rcc2_v1759*rcc2_v1759)));}}
static int rcc2_f1747(){if (rcc2_p1747) return rcc2_m1747; else {rcc2_p1747=T;return rcc2_m1747=(rcc2_f1756()>(rcc2_v1820*rcc2_v1820));}}
static double rcc2_f1733(){if (rcc2_p1733) return rcc2_m1733; else {rcc2_p1733=T;return rcc2_m1733=sqrt(rcc2_f1756());}}
static int rcc2_f1094(){if (rcc2_p1094) return rcc2_m1094; else {rcc2_p1094=T;return rcc2_m1094=(rcc2_f1733()>rcc2_f1104());}}
static double rcc2_f1088(){if (rcc2_p1088) return rcc2_m1088; else {rcc2_p1088=T;return rcc2_m1088=(rcc2_v1821/rcc2_f1733());}}
static double rcc2_f1101(){if (rcc2_p1101) return rcc2_m1101; else {rcc2_p1101=T;return rcc2_m1101=(rcc2_f1733()-rcc2_f1104());}}
static int rcc2_f1099(){if (rcc2_p1099) return rcc2_m1099; else {rcc2_p1099=T;return rcc2_m1099=(fabs(rcc2_f1101())<rcc2_v1816);}}
static double rcc2_f228(){if (rcc2_p228) return rcc2_m228; else {rcc2_p228=T;return rcc2_m228=((rcc2_v1094=rcc2_f1094()),((rcc2_v1094?rcc2_v1094:rcc2_f1099())?((rcc2_v1821+((0.5)*rcc2_f1101()))/rcc2_f1733()):((rcc2_v1821<rcc2_v1827)?(-rcc2_f1088()):(rcc2_f1088()+(1.0)))));}}
static int rcc2_f1095(){if (rcc2_p1095) return rcc2_m1095; else {rcc2_p1095=T;return rcc2_m1095=((rcc2_v1099=rcc2_f1099()),(rcc2_v1099?rcc2_v1099:(fabs((rcc2_f1733()-rcc2_f1107()))<rcc2_v1816)));}}
static int rcc2_f234(){if (rcc2_p234) return rcc2_m234; else {rcc2_p234=T;return rcc2_m234=(rcc2_f1108()?NIL:(rcc2_f1102()?rcc2_f1095():(rcc2_f237()?rcc2_f1095():T)));}}
static double rcc2_f225(){if (rcc2_p225) return rcc2_m225; else {rcc2_p225=T;return rcc2_m225=(rcc2_f1095()?(rcc2_v1850+(rcc2_f228()*rcc2_v1838)):rcc2_f690());}}
static double rcc2_f217(){if (rcc2_p217) return rcc2_m217; else {rcc2_p217=T;return rcc2_m217=(rcc2_f1108()?rcc2_f690():(rcc2_f1102()?rcc2_f225():(rcc2_f237()?rcc2_f225():(rcc2_v1850+((rcc2_f240()*rcc2_f1067())-(rcc2_f223()*rcc2_f1066()))))));}}
static double rcc2_f199(){if (rcc2_p199) return rcc2_m199; else {rcc2_p199=T;return rcc2_m199=(rcc2_f234()?rcc2_f217():rcc2_f657());}}
static int rcc2_f198(){if (rcc2_p198) return rcc2_m198; else {rcc2_p198=T;return rcc2_m198=(rcc2_v1858==rcc2_f199());}}
static double rcc2_f211(){if (rcc2_p211) return rcc2_m211; else {rcc2_p211=T;return rcc2_m211=(rcc2_f1095()?(rcc2_v1848+(rcc2_f228()*rcc2_v1836)):rcc2_f690());}}
static double rcc2_f205(){if (rcc2_p205) return rcc2_m205; else {rcc2_p205=T;return rcc2_m205=(rcc2_f1108()?rcc2_f690():(rcc2_f1102()?rcc2_f211():(rcc2_f237()?rcc2_f211():(rcc2_v1848+(rcc2_f240()*rcc2_f1066())+(rcc2_f223()*rcc2_f1067())))));}}
static double rcc2_f197(){if (rcc2_p197) return rcc2_m197; else {rcc2_p197=T;return rcc2_m197=(rcc2_f234()?rcc2_f205():rcc2_f653());}}
static double rcc2_f173(){if (rcc2_p173) return rcc2_m173; else {rcc2_p173=T;return rcc2_m173=(atan2((rcc2_f197()-rcc2_v1840),(rcc2_f199()-rcc2_v1842))+(-1.5707963267948966));}}
static double rcc2_f189(){if (rcc2_p189) return rcc2_m189; else {rcc2_p189=T;return rcc2_m189=((rcc2_f197()-rcc2_v1856)/(rcc2_f199()-rcc2_v1858));}}
static int rcc2_f196(){if (rcc2_p196) return rcc2_m196; else {rcc2_p196=T;return rcc2_m196=(rcc2_v1856==rcc2_f197());}}
static double rcc2_f182(){if (rcc2_p182) return rcc2_m182; else {rcc2_p182=T;return rcc2_m182=(rcc2_f198()?(rcc2_f196()?rcc2_f649():rcc2_f197()):(rcc2_f199()+(rcc2_f189()*rcc2_f197())));}}
static double rcc2_f194(){if (rcc2_p194) return rcc2_m194; else {rcc2_p194=T;return rcc2_m194=(rcc2_f198()?(rcc2_f196()?rcc2_f649():(0.0)):(1.0));}}
static double rcc2_f188(){if (rcc2_p188) return rcc2_m188; else {rcc2_p188=T;return rcc2_m188=(rcc2_f198()?(rcc2_f196()?rcc2_f649():(1.0)):rcc2_f189());}}
static double rcc2_f165(){if (rcc2_p165) return rcc2_m165; else {rcc2_p165=T;return rcc2_m165=((rcc2_v173=rcc2_f173()),(((rcc2_f194()*(rcc2_f199()+cos(rcc2_v173)))+(rcc2_f188()*(rcc2_f197()+sin(rcc2_v173))))-rcc2_f182()));}}
static double rcc2_f181(){if (rcc2_p181) return rcc2_m181; else {rcc2_p181=T;return rcc2_m181=(((rcc2_f194()*rcc2_v1850)+(rcc2_f188()*rcc2_v1848))-rcc2_f182());}}
static int rcc2_f160(){if (rcc2_p160) return rcc2_m160; else {rcc2_p160=T;return rcc2_m160=(rcc2_f181()>(0.0));}}
static int rcc2_f153(){if (rcc2_p153) return rcc2_m153; else {rcc2_p153=T;return rcc2_m153=((rcc2_v242=rcc2_f242()),(rcc2_v242?rcc2_v242:((rcc2_f234()?((fabs((rcc2_v1842-rcc2_f217()))<rcc2_v1816)?(fabs((rcc2_v1840-rcc2_f205()))<rcc2_v1816):NIL):NIL)?T:(((fabs((rcc2_f181()-(0.0)))<rcc2_v1816)?T:((rcc2_v165=rcc2_f165()),((fabs((rcc2_v165-(0.0)))<rcc2_v1816)?NIL:((rcc2_v165>(0.0))?rcc2_f160():(rcc2_f160()?NIL:T)))))?NIL:T))));}}
static double rcc2_f1719(){if (rcc2_p1719) return rcc2_m1719; else {rcc2_p1719=T;return rcc2_m1719=(rcc2_f1759()/rcc2_f1733());}}
static double rcc2_f1720(){if (rcc2_p1720) return rcc2_m1720; else {rcc2_p1720=T;return rcc2_m1720=(rcc2_f1760()/rcc2_f1733());}}
static double rcc2_f698(){if (rcc2_p698) return rcc2_m698; else {rcc2_p698=T;return rcc2_m698=(((rcc2_f1756()+rcc2_f1732())-rcc2_f1730())/((2.0)*rcc2_f1733()));}}
static double rcc2_f696(){if (rcc2_p696) return rcc2_m696; else {rcc2_p696=T;return rcc2_m696=((rcc2_v698=rcc2_f698()),(rcc2_f1732()-(rcc2_v698*rcc2_v698)));}}
static double rcc2_f682(){if (rcc2_p682) return rcc2_m682; else {rcc2_p682=T;return rcc2_m682=sqrt(rcc2_f696());}}
static double rcc2_f679(){if (rcc2_p679) return rcc2_m679; else {rcc2_p679=T;return rcc2_m679=(rcc2_v1858+((rcc2_f698()*rcc2_f1720())-(rcc2_f682()*rcc2_f1719())));}}
static double rcc2_f667(){if (rcc2_p667) return rcc2_m667; else {rcc2_p667=T;return rcc2_m667=(rcc2_v1856+(rcc2_f698()*rcc2_f1719())+(rcc2_f682()*rcc2_f1720()));}}
static int rcc2_f695(){if (rcc2_p695) return rcc2_m695; else {rcc2_p695=T;return rcc2_m695=(rcc2_f696()<0.0);}}
static int rcc2_f1755(){if (rcc2_p1755) return rcc2_m1755; else {rcc2_p1755=T;return rcc2_m1755=(rcc2_f1756()==0.0);}}
static double rcc2_f1754(){if (rcc2_p1754) return rcc2_m1754; else {rcc2_p1754=T;return rcc2_m1754=(rcc2_v1827-rcc2_v1821);}}
static double rcc2_f1133(){if (rcc2_p1133) return rcc2_m1133; else {rcc2_p1133=T;return rcc2_m1133=(rcc2_v1858-(rcc2_v1858+rcc2_f1754()));}}
static double rcc2_f1128(){if (rcc2_p1128) return rcc2_m1128; else {rcc2_p1128=T;return rcc2_m1128=((rcc2_v1133=rcc2_f1133()),(rcc2_v1131=rcc2_f1131()),sqrt(((rcc2_v1133*rcc2_v1133)+(rcc2_v1131*rcc2_v1131))));}}
static double rcc2_f1753(){if (rcc2_p1753) return rcc2_m1753; else {rcc2_p1753=T;return rcc2_m1753=fabs(rcc2_f1754());}}
static int rcc2_f701(){if (rcc2_p701) return rcc2_m701; else {rcc2_p701=T;return rcc2_m701=(rcc2_f1755()?(rcc2_f1753()<rcc2_v1816):NIL);}}
static double rcc2_f1647(){if (rcc2_p1647) return rcc2_m1647; else {rcc2_p1647=T;return rcc2_m1647=(rcc2_v1856-rcc2_v1840);}}
static double rcc2_f1646(){if (rcc2_p1646) return rcc2_m1646; else {rcc2_p1646=T;return rcc2_m1646=(rcc2_v1858-rcc2_v1842);}}
static double rcc2_f1113(){if (rcc2_p1113) return rcc2_m1113; else {rcc2_p1113=T;return rcc2_m1113=((rcc2_v1646=rcc2_f1646()),(rcc2_v1647=rcc2_f1647()),((rcc2_v1646*rcc2_v1646)+(rcc2_v1647*rcc2_v1647)));}}
static int rcc2_f1046(){if (rcc2_p1046) return rcc2_m1046; else {rcc2_p1046=T;return rcc2_m1046=(rcc2_f1113()==0.0);}}
static double rcc2_f1112(){if (rcc2_p1112) return rcc2_m1112; else {rcc2_p1112=T;return rcc2_m1112=sqrt(rcc2_f1113());}}
static double rcc2_f1012(){if (rcc2_p1012) return rcc2_m1012; else {rcc2_p1012=T;return rcc2_m1012=(rcc2_f1646()/rcc2_f1112());}}
static double rcc2_f1011(){if (rcc2_p1011) return rcc2_m1011; else {rcc2_p1011=T;return rcc2_m1011=(rcc2_f1647()/rcc2_f1112());}}
static double rcc2_f1645(){if (rcc2_p1645) return rcc2_m1645; else {rcc2_p1645=T;return rcc2_m1645=atan2(rcc2_f1647(),rcc2_f1646());}}
static double rcc2_f1769(){if (rcc2_p1769) return rcc2_m1769; else {rcc2_p1769=T;return rcc2_m1769=(rcc2_v1850-rcc2_v1842);}}
static double rcc2_f1767(){if (rcc2_p1767) return rcc2_m1767; else {rcc2_p1767=T;return rcc2_m1767=(rcc2_v1848-rcc2_v1840);}}
static double rcc2_f993(){if (rcc2_p993) return rcc2_m993; else {rcc2_p993=T;return rcc2_m993=atan2(rcc2_f1767(),rcc2_f1769());}}
static double rcc2_f1765(){if (rcc2_p1765) return rcc2_m1765; else {rcc2_p1765=T;return rcc2_m1765=((rcc2_v1769=rcc2_f1769()),(rcc2_v1767=rcc2_f1767()),((rcc2_v1769*rcc2_v1769)+(rcc2_v1767*rcc2_v1767)));}}
static int rcc2_f1699(){if (rcc2_p1699) return rcc2_m1699; else {rcc2_p1699=T;return rcc2_m1699=(rcc2_f1765()==0.0);}}
static double rcc2_f1764(){if (rcc2_p1764) return rcc2_m1764; else {rcc2_p1764=T;return rcc2_m1764=sqrt(rcc2_f1765());}}
static double rcc2_f1666(){if (rcc2_p1666) return rcc2_m1666; else {rcc2_p1666=T;return rcc2_m1666=(rcc2_f1769()/rcc2_f1764());}}
static double rcc2_f1665(){if (rcc2_p1665) return rcc2_m1665; else {rcc2_p1665=T;return rcc2_m1665=(rcc2_f1767()/rcc2_f1764());}}
static double rcc2_f575(){if (rcc2_p575) return rcc2_m575; else {rcc2_p575=T;return rcc2_m575=((2.0)*rcc2_f1764());}}
static double rcc2_f1799(){if (rcc2_p1799) return rcc2_m1799; else {rcc2_p1799=T;return rcc2_m1799=(rcc2_v1842-rcc2_v1850);}}
static double rcc2_f1797(){if (rcc2_p1797) return rcc2_m1797; else {rcc2_p1797=T;return rcc2_m1797=(rcc2_v1840-rcc2_v1848);}}
static int rcc2_f273(){if (rcc2_p273) return rcc2_m273; else {rcc2_p273=T;return rcc2_m273=((fabs(rcc2_f1799())<rcc2_v1816)?(fabs(rcc2_f1797())<rcc2_v1816):NIL);}}
static double rcc2_f1794(){if (rcc2_p1794) return rcc2_m1794; else {rcc2_p1794=T;return rcc2_m1794=((rcc2_v1799=rcc2_f1799()),(rcc2_v1797=rcc2_f1797()),sqrt(((rcc2_v1799*rcc2_v1799)+(rcc2_v1797*rcc2_v1797))));}}
static double rcc2_f1137(){if (rcc2_p1137) return rcc2_m1137; else {rcc2_p1137=T;return rcc2_m1137=(rcc2_v1842-(rcc2_v1842+rcc2_f1794()));}}
static double rcc2_f1812(){if (rcc2_p1812) return rcc2_m1812; else {rcc2_p1812=T;return rcc2_m1812=(rcc2_v1842-rcc2_v1858);}}
static double rcc2_f1809(){if (rcc2_p1809) return rcc2_m1809; else {rcc2_p1809=T;return rcc2_m1809=(rcc2_v1840-rcc2_v1856);}}
static int rcc2_f739(){if (rcc2_p739) return rcc2_m739; else {rcc2_p739=T;return rcc2_m739=((fabs(rcc2_f1812())<rcc2_v1816)?(fabs(rcc2_f1809())<rcc2_v1816):NIL);}}
static double rcc2_f1801(){if (rcc2_p1801) return rcc2_m1801; else {rcc2_p1801=T;return rcc2_m1801=((rcc2_v1812=rcc2_f1812()),(rcc2_v1809=rcc2_f1809()),sqrt(((rcc2_v1812*rcc2_v1812)+(rcc2_v1809*rcc2_v1809))));}}
static double rcc2_f1793(){if (rcc2_p1793) return rcc2_m1793; else {rcc2_p1793=T;return rcc2_m1793=(rcc2_v1842-(rcc2_v1842+rcc2_f1801()));}}
static double rcc2_f1791(){if (rcc2_p1791) return rcc2_m1791; else {rcc2_p1791=T;return rcc2_m1791=(rcc2_v1840-rcc2_v1840);}}
static double rcc2_f1790(){if (rcc2_p1790) return rcc2_m1790; else {rcc2_p1790=T;return rcc2_m1790=((rcc2_v1791=rcc2_f1791()),(rcc2_v1791*rcc2_v1791));}}
static double rcc2_f1134(){if (rcc2_p1134) return rcc2_m1134; else {rcc2_p1134=T;return rcc2_m1134=((rcc2_v1137=rcc2_f1137()),sqrt(((rcc2_v1137*rcc2_v1137)+rcc2_f1790())));}}
static double rcc2_f1024(){if (rcc2_p1024) return rcc2_m1024; else {rcc2_p1024=T;return rcc2_m1024=((rcc2_v1134=rcc2_f1134()),(rcc2_v1134*rcc2_v1134));}}
static double rcc2_f130(){if (rcc2_p130) return rcc2_m130; else {rcc2_p130=T;return rcc2_m130=((rcc2_v1128=rcc2_f1128()),(((rcc2_f1113()+rcc2_f1024())-(rcc2_v1128*rcc2_v1128))/((2.0)*rcc2_f1112())));}}
static double rcc2_f126(){if (rcc2_p126) return rcc2_m126; else {rcc2_p126=T;return rcc2_m126=(rcc2_f130()*rcc2_f1011());}}
static double rcc2_f121(){if (rcc2_p121) return rcc2_m121; else {rcc2_p121=T;return rcc2_m121=(rcc2_f130()*rcc2_f1012());}}
static double rcc2_f128(){if (rcc2_p128) return rcc2_m128; else {rcc2_p128=T;return rcc2_m128=((rcc2_v130=rcc2_f130()),(rcc2_f1024()-(rcc2_v130*rcc2_v130)));}}
static int rcc2_f127(){if (rcc2_p127) return rcc2_m127; else {rcc2_p127=T;return rcc2_m127=(rcc2_f128()<0.0);}}
static double rcc2_f125(){if (rcc2_p125) return rcc2_m125; else {rcc2_p125=T;return rcc2_m125=sqrt(rcc2_f128());}}
static double rcc2_f124(){if (rcc2_p124) return rcc2_m124; else {rcc2_p124=T;return rcc2_m124=(rcc2_f125()*rcc2_f1012());}}
static double rcc2_f120(){if (rcc2_p120) return rcc2_m120; else {rcc2_p120=T;return rcc2_m120=(rcc2_f125()*rcc2_f1011());}}
static double rcc2_f84(){if (rcc2_p84) return rcc2_m84; else {rcc2_p84=T;return rcc2_m84=normalize_rotation((atan2(((rcc2_v1840+(rcc2_f126()-rcc2_f124()))-rcc2_v1840),((rcc2_v1842+rcc2_f121()+rcc2_f120())-rcc2_v1842))-rcc2_f993()));}}
static double rcc2_f83(){if (rcc2_p83) return rcc2_m83; else {rcc2_p83=T;return rcc2_m83=normalize_rotation(rcc2_f84());}}
static int rcc2_f71(){if (rcc2_p71) return rcc2_m71; else {rcc2_p71=T;return rcc2_m71=((rcc2_v83=rcc2_f83()),((fabs((rcc2_v83-(0.0)))<rcc2_v1816)?NIL:((fabs((rcc2_v83-(-6.283185307179586)))<rcc2_v1816)?NIL:((fabs((rcc2_v83-(6.283185307179586)))<rcc2_v1816)?NIL:T))));}}
static int rcc2_f70(){if (rcc2_p70) return rcc2_m70; else {rcc2_p70=T;return rcc2_m70=((rcc2_v71=rcc2_f71()),(rcc2_v71?rcc2_v71:rcc2_f153()));}}
static double rcc2_f67(){if (rcc2_p67) return rcc2_m67; else {rcc2_p67=T;return rcc2_m67=(rcc2_f70()?rcc2_f84():rcc2_f599());}}
static double rcc2_f69(){if (rcc2_p69) return rcc2_m69; else {rcc2_p69=T;return rcc2_m69=(rcc2_f70()?rcc2_f84():rcc2_f603());}}
static int rcc2_f68(){if (rcc2_p68) return rcc2_m68; else {rcc2_p68=T;return rcc2_m68=(rcc2_f69()<(0.0));}}
static int rcc2_f62(){if (rcc2_p62) return rcc2_m62; else {rcc2_p62=T;return rcc2_m62=(rcc2_f70()?((rcc2_v68=rcc2_f68()),(rcc2_v68?rcc2_v68:(fabs((rcc2_f67()-(0.0)))<rcc2_v1816))):NIL);}}
static int rcc2_f61(){if (rcc2_p61) return rcc2_m61; else {rcc2_p61=T;return rcc2_m61=(rcc2_f62()?rcc2_f70():NIL);}}
static int rcc2_f59(){if (rcc2_p59) return rcc2_m59; else {rcc2_p59=T;return rcc2_m59=((rcc2_f62()?rcc2_f69():rcc2_f603())<(0.0));}}
static int rcc2_f53(){if (rcc2_p53) return rcc2_m53; else {rcc2_p53=T;return rcc2_m53=(rcc2_f61()?((rcc2_v59=rcc2_f59()),(rcc2_v59?rcc2_v59:(fabs(((rcc2_f62()?rcc2_f67():rcc2_f599())-(0.0)))<rcc2_v1816))):NIL);}}
static double rcc2_f114(){if (rcc2_p114) return rcc2_m114; else {rcc2_p114=T;return rcc2_m114=normalize_rotation((atan2(((rcc2_v1840+rcc2_f126()+rcc2_f124())-rcc2_v1840),((rcc2_v1842+(rcc2_f121()-rcc2_f120()))-rcc2_v1842))-rcc2_f993()));}}
static double rcc2_f113(){if (rcc2_p113) return rcc2_m113; else {rcc2_p113=T;return rcc2_m113=normalize_rotation(rcc2_f114());}}
static int rcc2_f101(){if (rcc2_p101) return rcc2_m101; else {rcc2_p101=T;return rcc2_m101=((rcc2_v113=rcc2_f113()),((fabs((rcc2_v113-(0.0)))<rcc2_v1816)?NIL:((fabs((rcc2_v113-(-6.283185307179586)))<rcc2_v1816)?NIL:((fabs((rcc2_v113-(6.283185307179586)))<rcc2_v1816)?NIL:T))));}}
static int rcc2_f100(){if (rcc2_p100) return rcc2_m100; else {rcc2_p100=T;return rcc2_m100=((rcc2_v101=rcc2_f101()),(rcc2_v101?rcc2_v101:rcc2_f153()));}}
static int rcc2_f98(){if (rcc2_p98) return rcc2_m98; else {rcc2_p98=T;return rcc2_m98=((rcc2_f100()?rcc2_f114():rcc2_f603())<(0.0));}}
static int rcc2_f92(){if (rcc2_p92) return rcc2_m92; else {rcc2_p92=T;return rcc2_m92=((rcc2_v100=rcc2_f100()),(rcc2_v100?((rcc2_v98=rcc2_f98()),(rcc2_v98?rcc2_v98:(fabs(((rcc2_v100?rcc2_f114():rcc2_f599())-(0.0)))<rcc2_v1816))):NIL));}}
static double rcc2_f1035(){if (rcc2_p1035) return rcc2_m1035; else {rcc2_p1035=T;return rcc2_m1035=(rcc2_f1134()/rcc2_f1801());}}
static int rcc2_f1116(){if (rcc2_p1116) return rcc2_m1116; else {rcc2_p1116=T;return rcc2_m1116=(rcc2_f1134()>rcc2_f1128());}}
static double rcc2_f1127(){if (rcc2_p1127) return rcc2_m1127; else {rcc2_p1127=T;return rcc2_m1127=(rcc2_f1134()+rcc2_f1128());}}
static int rcc2_f1042(){if (rcc2_p1042) return rcc2_m1042; else {rcc2_p1042=T;return rcc2_m1042=((rcc2_v1127=rcc2_f1127()),(rcc2_f1113()>(rcc2_v1127*rcc2_v1127)));}}
static int rcc2_f1041(){if (rcc2_p1041) return rcc2_m1041; else {rcc2_p1041=T;return rcc2_m1041=(rcc2_f1801()>rcc2_f1127());}}
static double rcc2_f1126(){if (rcc2_p1126) return rcc2_m1126; else {rcc2_p1126=T;return rcc2_m1126=(rcc2_f1801()-rcc2_f1127());}}
static int rcc2_f1124(){if (rcc2_p1124) return rcc2_m1124; else {rcc2_p1124=T;return rcc2_m1124=(fabs(rcc2_f1126())<rcc2_v1816);}}
static double rcc2_f265(){if (rcc2_p265) return rcc2_m265; else {rcc2_p265=T;return rcc2_m265=((rcc2_v1041=rcc2_f1041()),((rcc2_v1041?rcc2_v1041:rcc2_f1124())?((rcc2_f1134()+((0.5)*rcc2_f1126()))/rcc2_f1801()):((rcc2_f1134()<rcc2_f1128())?(-rcc2_f1035()):(rcc2_f1035()+(1.0)))));}}
static double rcc2_f256(){if (rcc2_p256) return rcc2_m256; else {rcc2_p256=T;return rcc2_m256=((rcc2_v265=rcc2_f265()),normalize_rotation((atan2(((rcc2_v1840+(rcc2_v265*rcc2_f1647()))-rcc2_v1840),((rcc2_v1842+(rcc2_v265*rcc2_f1646()))-rcc2_v1842))-rcc2_f993())));}}
static double rcc2_f255(){if (rcc2_p255) return rcc2_m255; else {rcc2_p255=T;return rcc2_m255=normalize_rotation(rcc2_f256());}}
static int rcc2_f243(){if (rcc2_p243) return rcc2_m243; else {rcc2_p243=T;return rcc2_m243=((rcc2_v255=rcc2_f255()),((fabs((rcc2_v255-(0.0)))<rcc2_v1816)?NIL:((fabs((rcc2_v255-(-6.283185307179586)))<rcc2_v1816)?NIL:((fabs((rcc2_v255-(6.283185307179586)))<rcc2_v1816)?NIL:T))));}}
static int rcc2_f152(){if (rcc2_p152) return rcc2_m152; else {rcc2_p152=T;return rcc2_m152=((rcc2_v243=rcc2_f243()),(rcc2_v243?rcc2_v243:rcc2_f153()));}}
static double rcc2_f40(){if (rcc2_p40) return rcc2_m40; else {rcc2_p40=T;return rcc2_m40=(rcc2_f152()?rcc2_f256():rcc2_f44());}}
static double rcc2_f149(){if (rcc2_p149) return rcc2_m149; else {rcc2_p149=T;return rcc2_m149=(rcc2_f152()?rcc2_f256():rcc2_f599());}}
static double rcc2_f151(){if (rcc2_p151) return rcc2_m151; else {rcc2_p151=T;return rcc2_m151=(rcc2_f152()?rcc2_f256():rcc2_f603());}}
static int rcc2_f150(){if (rcc2_p150) return rcc2_m150; else {rcc2_p150=T;return rcc2_m150=(rcc2_f151()<(0.0));}}
static int rcc2_f144(){if (rcc2_p144) return rcc2_m144; else {rcc2_p144=T;return rcc2_m144=(rcc2_f152()?((rcc2_v150=rcc2_f150()),(rcc2_v150?rcc2_v150:(fabs((rcc2_f149()-(0.0)))<rcc2_v1816))):NIL);}}
static int rcc2_f141(){if (rcc2_p141) return rcc2_m141; else {rcc2_p141=T;return rcc2_m141=((rcc2_f144()?rcc2_f151():rcc2_f603())<(0.0));}}
static int rcc2_f135(){if (rcc2_p135) return rcc2_m135; else {rcc2_p135=T;return rcc2_m135=((rcc2_v144=rcc2_f144()),((rcc2_v144?rcc2_f152():NIL)?((rcc2_v141=rcc2_f141()),(rcc2_v141?rcc2_v141:(fabs(((rcc2_v144?rcc2_f149():rcc2_f599())-(0.0)))<rcc2_v1816))):NIL));}}
static int rcc2_f1118(){if (rcc2_p1118) return rcc2_m1118; else {rcc2_p1118=T;return rcc2_m1118=((rcc2_v1124=rcc2_f1124()),(rcc2_v1124?rcc2_v1124:(fabs((rcc2_f1801()-fabs((rcc2_f1134()-rcc2_f1128()))))<rcc2_v1816)));}}
static double rcc2_f36(){if (rcc2_p36) return rcc2_m36; else {rcc2_p36=T;return rcc2_m36=(rcc2_f1118()?((rcc2_v144=rcc2_f144()),(rcc2_v144?(rcc2_f135()?(rcc2_f152()?rcc2_f256():rcc2_f42()):rcc2_f40()):(rcc2_v144?rcc2_f40():rcc2_f44()))):rcc2_f44());}}
static int rcc2_f16(){if (rcc2_p16) return rcc2_m16; else {rcc2_p16=T;return rcc2_m16=(rcc2_f1118()?(rcc2_f144()?(rcc2_f135()?NIL:(rcc2_f152()?NIL:T)):T):T);}}
static int rcc2_f271(){if (rcc2_p271) return rcc2_m271; else {rcc2_p271=T;return rcc2_m271=((rcc2_v1118=rcc2_f1118()),(rcc2_v1118?((rcc2_v1116=rcc2_f1116()),(rcc2_v1116?rcc2_v1116:(rcc2_f1112()>rcc2_f1128()))):(rcc2_v1118?NIL:T)));}}
static int rcc2_f132(){if (rcc2_p132) return rcc2_m132; else {rcc2_p132=T;return rcc2_m132=(rcc2_f1118()?(rcc2_f144()?(rcc2_f135()?T:rcc2_f152()):NIL):NIL);}}
static double rcc2_f1788(){if (rcc2_p1788) return rcc2_m1788; else {rcc2_p1788=T;return rcc2_m1788=((rcc2_v1793=rcc2_f1793()),sqrt(((rcc2_v1793*rcc2_v1793)+rcc2_f1790())));}}
static double rcc2_f1678(){if (rcc2_p1678) return rcc2_m1678; else {rcc2_p1678=T;return rcc2_m1678=((rcc2_v1788=rcc2_f1788()),(rcc2_v1788*rcc2_v1788));}}
static double rcc2_f1677(){if (rcc2_p1677) return rcc2_m1677; else {rcc2_p1677=T;return rcc2_m1677=(rcc2_f1765()+rcc2_f1678());}}
static double rcc2_f1689(){if (rcc2_p1689) return rcc2_m1689; else {rcc2_p1689=T;return rcc2_m1689=(rcc2_f1788()/rcc2_f1794());}}
static double rcc2_f1688(){if (rcc2_p1688) return rcc2_m1688; else {rcc2_p1688=T;return rcc2_m1688=(-rcc2_f1689());}}
static double rcc2_f729(){if (rcc2_p729) return rcc2_m729; else {rcc2_p729=T;return rcc2_m729=(rcc2_f1689()+(1.0));}}
static double rcc2_f1787(){if (rcc2_p1787) return rcc2_m1787; else {rcc2_p1787=T;return rcc2_m1787=(rcc2_v1850-(rcc2_v1850+rcc2_v1820));}}
static double rcc2_f1785(){if (rcc2_p1785) return rcc2_m1785; else {rcc2_p1785=T;return rcc2_m1785=(rcc2_v1848-rcc2_v1848);}}
static double rcc2_f1784(){if (rcc2_p1784) return rcc2_m1784; else {rcc2_p1784=T;return rcc2_m1784=((rcc2_v1785=rcc2_f1785()),(rcc2_v1785*rcc2_v1785));}}
static double rcc2_f1424(){if (rcc2_p1424) return rcc2_m1424; else {rcc2_p1424=T;return rcc2_m1424=((rcc2_v1427=rcc2_f1427()),sqrt(((rcc2_v1427*rcc2_v1427)+rcc2_f1784())));}}
static double rcc2_f366(){if (rcc2_p366) return rcc2_m366; else {rcc2_p366=T;return rcc2_m366=((rcc2_v1424=rcc2_f1424()),((rcc2_f1677()-(rcc2_v1424*rcc2_v1424))/rcc2_f575()));}}
static double rcc2_f362(){if (rcc2_p362) return rcc2_m362; else {rcc2_p362=T;return rcc2_m362=(rcc2_f366()*rcc2_f1665());}}
static double rcc2_f357(){if (rcc2_p357) return rcc2_m357; else {rcc2_p357=T;return rcc2_m357=(rcc2_f366()*rcc2_f1666());}}
static double rcc2_f364(){if (rcc2_p364) return rcc2_m364; else {rcc2_p364=T;return rcc2_m364=((rcc2_v366=rcc2_f366()),(rcc2_f1678()-(rcc2_v366*rcc2_v366)));}}
static double rcc2_f361(){if (rcc2_p361) return rcc2_m361; else {rcc2_p361=T;return rcc2_m361=sqrt(rcc2_f364());}}
static double rcc2_f360(){if (rcc2_p360) return rcc2_m360; else {rcc2_p360=T;return rcc2_m360=(rcc2_f361()*rcc2_f1666());}}
static double rcc2_f356(){if (rcc2_p356) return rcc2_m356; else {rcc2_p356=T;return rcc2_m356=(rcc2_f361()*rcc2_f1665());}}
static double rcc2_f320(){if (rcc2_p320) return rcc2_m320; else {rcc2_p320=T;return rcc2_m320=normalize_rotation((atan2(((rcc2_v1840+(rcc2_f362()-rcc2_f360()))-rcc2_v1840),((rcc2_v1842+rcc2_f357()+rcc2_f356())-rcc2_v1842))-rcc2_f1645()));}}
static double rcc2_f319(){if (rcc2_p319) return rcc2_m319; else {rcc2_p319=T;return rcc2_m319=normalize_rotation(rcc2_f320());}}
static int rcc2_f307(){if (rcc2_p307) return rcc2_m307; else {rcc2_p307=T;return rcc2_m307=((rcc2_v319=rcc2_f319()),((fabs((rcc2_v319-(0.0)))<rcc2_v1816)?NIL:((fabs((rcc2_v319-(-6.283185307179586)))<rcc2_v1816)?NIL:((fabs((rcc2_v319-(6.283185307179586)))<rcc2_v1816)?NIL:T))));}}
static double rcc2_f350(){if (rcc2_p350) return rcc2_m350; else {rcc2_p350=T;return rcc2_m350=normalize_rotation((atan2(((rcc2_v1840+rcc2_f362()+rcc2_f360())-rcc2_v1840),((rcc2_v1842+(rcc2_f357()-rcc2_f356()))-rcc2_v1842))-rcc2_f1645()));}}
static double rcc2_f349(){if (rcc2_p349) return rcc2_m349; else {rcc2_p349=T;return rcc2_m349=normalize_rotation(rcc2_f350());}}
static int rcc2_f337(){if (rcc2_p337) return rcc2_m337; else {rcc2_p337=T;return rcc2_m337=((rcc2_v349=rcc2_f349()),((fabs((rcc2_v349-(0.0)))<rcc2_v1816)?NIL:((fabs((rcc2_v349-(-6.283185307179586)))<rcc2_v1816)?NIL:((fabs((rcc2_v349-(6.283185307179586)))<rcc2_v1816)?NIL:T))));}}
static int rcc2_f1412(){if (rcc2_p1412) return rcc2_m1412; else {rcc2_p1412=T;return rcc2_m1412=(rcc2_f1788()>rcc2_f1424());}}
static double rcc2_f1423(){if (rcc2_p1423) return rcc2_m1423; else {rcc2_p1423=T;return rcc2_m1423=(rcc2_f1788()+rcc2_f1424());}}
static int rcc2_f1385(){if (rcc2_p1385) return rcc2_m1385; else {rcc2_p1385=T;return rcc2_m1385=(rcc2_f1794()>rcc2_f1423());}}
static double rcc2_f1422(){if (rcc2_p1422) return rcc2_m1422; else {rcc2_p1422=T;return rcc2_m1422=(rcc2_f1794()-rcc2_f1423());}}
static int rcc2_f1420(){if (rcc2_p1420) return rcc2_m1420; else {rcc2_p1420=T;return rcc2_m1420=(fabs(rcc2_f1422())<rcc2_v1816);}}
static double rcc2_f475(){if (rcc2_p475) return rcc2_m475; else {rcc2_p475=T;return rcc2_m475=((rcc2_v1385=rcc2_f1385()),((rcc2_v1385?rcc2_v1385:rcc2_f1420())?((rcc2_f1788()+((0.5)*rcc2_f1422()))/rcc2_f1794()):((rcc2_f1788()<rcc2_f1424())?rcc2_f1688():rcc2_f729())));}}
static double rcc2_f466(){if (rcc2_p466) return rcc2_m466; else {rcc2_p466=T;return rcc2_m466=((rcc2_v475=rcc2_f475()),normalize_rotation((atan2(((rcc2_v1840+(rcc2_v475*rcc2_f1767()))-rcc2_v1840),((rcc2_v1842+(rcc2_v475*rcc2_f1769()))-rcc2_v1842))-rcc2_f1645())));}}
static double rcc2_f465(){if (rcc2_p465) return rcc2_m465; else {rcc2_p465=T;return rcc2_m465=normalize_rotation(rcc2_f466());}}
static int rcc2_f453(){if (rcc2_p453) return rcc2_m453; else {rcc2_p453=T;return rcc2_m453=((rcc2_v465=rcc2_f465()),((fabs((rcc2_v465-(0.0)))<rcc2_v1816)?NIL:((fabs((rcc2_v465-(-6.283185307179586)))<rcc2_v1816)?NIL:((fabs((rcc2_v465-(6.283185307179586)))<rcc2_v1816)?NIL:T))));}}
static int rcc2_f1414(){if (rcc2_p1414) return rcc2_m1414; else {rcc2_p1414=T;return rcc2_m1414=((rcc2_v1420=rcc2_f1420()),(rcc2_v1420?rcc2_v1420:(fabs((rcc2_f1794()-fabs((rcc2_f1788()-rcc2_f1424()))))<rcc2_v1816)));}}
static double rcc2_f1782(){if (rcc2_p1782) return rcc2_m1782; else {rcc2_p1782=T;return rcc2_m1782=((rcc2_v1787=rcc2_f1787()),sqrt(((rcc2_v1787*rcc2_v1787)+rcc2_f1784())));}}
static double rcc2_f574(){if (rcc2_p574) return rcc2_m574; else {rcc2_p574=T;return rcc2_m574=((rcc2_v1782=rcc2_f1782()),((rcc2_f1677()-(rcc2_v1782*rcc2_v1782))/rcc2_f575()));}}
static double rcc2_f570(){if (rcc2_p570) return rcc2_m570; else {rcc2_p570=T;return rcc2_m570=(rcc2_f574()*rcc2_f1665());}}
static double rcc2_f565(){if (rcc2_p565) return rcc2_m565; else {rcc2_p565=T;return rcc2_m565=(rcc2_f574()*rcc2_f1666());}}
static double rcc2_f572(){if (rcc2_p572) return rcc2_m572; else {rcc2_p572=T;return rcc2_m572=((rcc2_v574=rcc2_f574()),(rcc2_f1678()-(rcc2_v574*rcc2_v574)));}}
static double rcc2_f569(){if (rcc2_p569) return rcc2_m569; else {rcc2_p569=T;return rcc2_m569=sqrt(rcc2_f572());}}
static double rcc2_f568(){if (rcc2_p568) return rcc2_m568; else {rcc2_p568=T;return rcc2_m568=(rcc2_f569()*rcc2_f1666());}}
static double rcc2_f564(){if (rcc2_p564) return rcc2_m564; else {rcc2_p564=T;return rcc2_m564=(rcc2_f569()*rcc2_f1665());}}
static double rcc2_f528(){if (rcc2_p528) return rcc2_m528; else {rcc2_p528=T;return rcc2_m528=normalize_rotation((atan2(((rcc2_v1840+(rcc2_f570()-rcc2_f568()))-rcc2_v1840),((rcc2_v1842+rcc2_f565()+rcc2_f564())-rcc2_v1842))-rcc2_f1645()));}}
static double rcc2_f527(){if (rcc2_p527) return rcc2_m527; else {rcc2_p527=T;return rcc2_m527=normalize_rotation(rcc2_f528());}}
static int rcc2_f515(){if (rcc2_p515) return rcc2_m515; else {rcc2_p515=T;return rcc2_m515=((rcc2_v527=rcc2_f527()),((fabs((rcc2_v527-(0.0)))<rcc2_v1816)?NIL:((fabs((rcc2_v527-(-6.283185307179586)))<rcc2_v1816)?NIL:((fabs((rcc2_v527-(6.283185307179586)))<rcc2_v1816)?NIL:T))));}}
static double rcc2_f558(){if (rcc2_p558) return rcc2_m558; else {rcc2_p558=T;return rcc2_m558=normalize_rotation((atan2(((rcc2_v1840+rcc2_f570()+rcc2_f568())-rcc2_v1840),((rcc2_v1842+(rcc2_f565()-rcc2_f564()))-rcc2_v1842))-rcc2_f1645()));}}
static double rcc2_f557(){if (rcc2_p557) return rcc2_m557; else {rcc2_p557=T;return rcc2_m557=normalize_rotation(rcc2_f558());}}
static int rcc2_f545(){if (rcc2_p545) return rcc2_m545; else {rcc2_p545=T;return rcc2_m545=((rcc2_v557=rcc2_f557()),((fabs((rcc2_v557-(0.0)))<rcc2_v1816)?NIL:((fabs((rcc2_v557-(-6.283185307179586)))<rcc2_v1816)?NIL:((fabs((rcc2_v557-(6.283185307179586)))<rcc2_v1816)?NIL:T))));}}
static int rcc2_f1770(){if (rcc2_p1770) return rcc2_m1770; else {rcc2_p1770=T;return rcc2_m1770=(rcc2_f1788()<rcc2_f1782());}}
static double rcc2_f1781(){if (rcc2_p1781) return rcc2_m1781; else {rcc2_p1781=T;return rcc2_m1781=(rcc2_f1788()+rcc2_f1782());}}
static int rcc2_f1694(){if (rcc2_p1694) return rcc2_m1694; else {rcc2_p1694=T;return rcc2_m1694=(rcc2_f1794()>rcc2_f1781());}}
static double rcc2_f1780(){if (rcc2_p1780) return rcc2_m1780; else {rcc2_p1780=T;return rcc2_m1780=(rcc2_f1794()-rcc2_f1781());}}
static int rcc2_f1778(){if (rcc2_p1778) return rcc2_m1778; else {rcc2_p1778=T;return rcc2_m1778=(fabs(rcc2_f1780())<rcc2_v1816);}}
static double rcc2_f727(){if (rcc2_p727) return rcc2_m727; else {rcc2_p727=T;return rcc2_m727=((rcc2_v1694=rcc2_f1694()),((rcc2_v1694?rcc2_v1694:rcc2_f1778())?((rcc2_f1788()+((0.5)*rcc2_f1780()))/rcc2_f1794()):(rcc2_f1770()?rcc2_f1688():rcc2_f729())));}}
static double rcc2_f718(){if (rcc2_p718) return rcc2_m718; else {rcc2_p718=T;return rcc2_m718=((rcc2_v727=rcc2_f727()),normalize_rotation((atan2(((rcc2_v1840+(rcc2_v727*rcc2_f1767()))-rcc2_v1840),((rcc2_v1842+(rcc2_v727*rcc2_f1769()))-rcc2_v1842))-rcc2_f1645())));}}
static double rcc2_f717(){if (rcc2_p717) return rcc2_m717; else {rcc2_p717=T;return rcc2_m717=normalize_rotation(rcc2_f718());}}
static int rcc2_f702(){if (rcc2_p702) return rcc2_m702; else {rcc2_p702=T;return rcc2_m702=((rcc2_v717=rcc2_f717()),((fabs((rcc2_v717-(0.0)))<rcc2_v1816)?NIL:((fabs((rcc2_v717-(-6.283185307179586)))<rcc2_v1816)?NIL:((fabs((rcc2_v717-(6.283185307179586)))<rcc2_v1816)?NIL:T))));}}
static int rcc2_f1772(){if (rcc2_p1772) return rcc2_m1772; else {rcc2_p1772=T;return rcc2_m1772=((rcc2_v1778=rcc2_f1778()),(rcc2_v1778?rcc2_v1778:(fabs((rcc2_f1794()-fabs((rcc2_f1788()-rcc2_f1782()))))<rcc2_v1816)));}}
static double rcc2_f1818(){if (rcc2_p1818) return rcc2_m1818; else {rcc2_p1818=T;return rcc2_m1818=(rcc2_v1833-rcc2_v1820);}}
static double rcc2_f687(){if (rcc2_p687) return rcc2_m687; else {rcc2_p687=T;return rcc2_m687=((rcc2_v1827+((0.5)*rcc2_f1818()))/rcc2_v1833);}}
static int rcc2_f1814(){if (rcc2_p1814) return rcc2_m1814; else {rcc2_p1814=T;return rcc2_m1814=(fabs(rcc2_f1818())<rcc2_v1816);}}
static int rcc2_f1743(){if (rcc2_p1743) return rcc2_m1743; else {rcc2_p1743=T;return rcc2_m1743=((rcc2_v1814=rcc2_f1814()),(rcc2_v1814?rcc2_v1814:(fabs((rcc2_v1833-rcc2_f1753()))<rcc2_v1816)));}}
static double rcc2_f452(){if (rcc2_p452) return rcc2_m452; else {rcc2_p452=T;return rcc2_m452=(rcc2_f1743()?(rcc2_v1858+(rcc2_f1407()*rcc2_f1760())):rcc2_f690());}}
static double rcc2_f449(){if (rcc2_p449) return rcc2_m449; else {rcc2_p449=T;return rcc2_m449=(rcc2_f1755()?rcc2_f690():(rcc2_f1747()?rcc2_f452():(rcc2_f695()?rcc2_f452():rcc2_f679())));}}
static double rcc2_f445(){if (rcc2_p445) return rcc2_m445; else {rcc2_p445=T;return rcc2_m445=(rcc2_f1743()?(rcc2_v1856+(rcc2_f1407()*rcc2_f1759())):rcc2_f690());}}
static double rcc2_f442(){if (rcc2_p442) return rcc2_m442; else {rcc2_p442=T;return rcc2_m442=(rcc2_f1755()?rcc2_f690():(rcc2_f1747()?rcc2_f445():(rcc2_f695()?rcc2_f445():rcc2_f667())));}}
static int rcc2_f692(){if (rcc2_p692) return rcc2_m692; else {rcc2_p692=T;return rcc2_m692=(rcc2_f1755()?NIL:(rcc2_f1747()?rcc2_f1743():(rcc2_f695()?rcc2_f1743():T)));}}
static double rcc2_f434(){if (rcc2_p434) return rcc2_m434; else {rcc2_p434=T;return rcc2_m434=(rcc2_f692()?rcc2_f442():rcc2_f653());}}
static int rcc2_f433(){if (rcc2_p433) return rcc2_m433; else {rcc2_p433=T;return rcc2_m433=(rcc2_v1848==rcc2_f434());}}
static double rcc2_f436(){if (rcc2_p436) return rcc2_m436; else {rcc2_p436=T;return rcc2_m436=(rcc2_f692()?rcc2_f449():rcc2_f657());}}
static double rcc2_f411(){if (rcc2_p411) return rcc2_m411; else {rcc2_p411=T;return rcc2_m411=(atan2((rcc2_f434()-rcc2_v1840),(rcc2_f436()-rcc2_v1842))+(1.5707963267948966));}}
static int rcc2_f435(){if (rcc2_p435) return rcc2_m435; else {rcc2_p435=T;return rcc2_m435=(rcc2_v1850==rcc2_f436());}}
static double rcc2_f431(){if (rcc2_p431) return rcc2_m431; else {rcc2_p431=T;return rcc2_m431=(rcc2_f435()?(rcc2_f433()?rcc2_f649():(0.0)):(1.0));}}
static double rcc2_f426(){if (rcc2_p426) return rcc2_m426; else {rcc2_p426=T;return rcc2_m426=((rcc2_f434()-rcc2_v1848)/(rcc2_f436()-rcc2_v1850));}}
static double rcc2_f419(){if (rcc2_p419) return rcc2_m419; else {rcc2_p419=T;return rcc2_m419=(rcc2_f435()?(rcc2_f433()?rcc2_f649():rcc2_f434()):(rcc2_f436()+(rcc2_f426()*rcc2_f434())));}}
static double rcc2_f425(){if (rcc2_p425) return rcc2_m425; else {rcc2_p425=T;return rcc2_m425=(rcc2_f435()?(rcc2_f433()?rcc2_f649():(1.0)):rcc2_f426());}}
static double rcc2_f403(){if (rcc2_p403) return rcc2_m403; else {rcc2_p403=T;return rcc2_m403=((rcc2_v411=rcc2_f411()),(((rcc2_f431()*(rcc2_f436()+cos(rcc2_v411)))+(rcc2_f425()*(rcc2_f434()+sin(rcc2_v411))))-rcc2_f419()));}}
static double rcc2_f418(){if (rcc2_p418) return rcc2_m418; else {rcc2_p418=T;return rcc2_m418=(((rcc2_f431()*rcc2_v1858)+(rcc2_f425()*rcc2_v1856))-rcc2_f419());}}
static int rcc2_f398(){if (rcc2_p398) return rcc2_m398; else {rcc2_p398=T;return rcc2_m398=(rcc2_f418()>(0.0));}}
static int rcc2_f391(){if (rcc2_p391) return rcc2_m391; else {rcc2_p391=T;return rcc2_m391=((rcc2_v701=rcc2_f701()),(rcc2_v701?rcc2_v701:((rcc2_f692()?((fabs((rcc2_v1842-rcc2_f449()))<rcc2_v1816)?(fabs((rcc2_v1840-rcc2_f442()))<rcc2_v1816):NIL):NIL)?T:(((fabs((rcc2_f418()-(0.0)))<rcc2_v1816)?T:((rcc2_v403=rcc2_f403()),((fabs((rcc2_v403-(0.0)))<rcc2_v1816)?NIL:((rcc2_v403>(0.0))?rcc2_f398():(rcc2_f398()?NIL:T)))))?NIL:T))));}}
static int rcc2_f306(){if (rcc2_p306) return rcc2_m306; else {rcc2_p306=T;return rcc2_m306=((rcc2_v307=rcc2_f307()),(rcc2_v307?rcc2_v307:rcc2_f391()));}}
static double rcc2_f303(){if (rcc2_p303) return rcc2_m303; else {rcc2_p303=T;return rcc2_m303=(rcc2_f306()?rcc2_f320():rcc2_f599());}}
static double rcc2_f305(){if (rcc2_p305) return rcc2_m305; else {rcc2_p305=T;return rcc2_m305=(rcc2_f306()?rcc2_f320():rcc2_f603());}}
static int rcc2_f304(){if (rcc2_p304) return rcc2_m304; else {rcc2_p304=T;return rcc2_m304=(rcc2_f305()>(0.0));}}
static int rcc2_f298(){if (rcc2_p298) return rcc2_m298; else {rcc2_p298=T;return rcc2_m298=(rcc2_f306()?((rcc2_v304=rcc2_f304()),(rcc2_v304?rcc2_v304:(fabs((rcc2_f303()-(0.0)))<rcc2_v1816))):NIL);}}
static int rcc2_f295(){if (rcc2_p295) return rcc2_m295; else {rcc2_p295=T;return rcc2_m295=((rcc2_f298()?rcc2_f305():rcc2_f603())>(0.0));}}
static int rcc2_f336(){if (rcc2_p336) return rcc2_m336; else {rcc2_p336=T;return rcc2_m336=((rcc2_v337=rcc2_f337()),(rcc2_v337?rcc2_v337:rcc2_f391()));}}
static int rcc2_f334(){if (rcc2_p334) return rcc2_m334; else {rcc2_p334=T;return rcc2_m334=((rcc2_f336()?rcc2_f350():rcc2_f603())>(0.0));}}
static int rcc2_f390(){if (rcc2_p390) return rcc2_m390; else {rcc2_p390=T;return rcc2_m390=((rcc2_v453=rcc2_f453()),(rcc2_v453?rcc2_v453:rcc2_f391()));}}
static double_or_symbol rcc2_f371(){if (rcc2_p371) return rcc2_m371; else {rcc2_p371=T;return rcc2_m371=(rcc2_f390()?coerce_double_to_double_or_symbol(rcc2_f466()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcc2_f387(){if (rcc2_p387) return rcc2_m387; else {rcc2_p387=T;return rcc2_m387=(rcc2_f390()?rcc2_f466():rcc2_f599());}}
static double rcc2_f389(){if (rcc2_p389) return rcc2_m389; else {rcc2_p389=T;return rcc2_m389=(rcc2_f390()?rcc2_f466():rcc2_f603());}}
static int rcc2_f388(){if (rcc2_p388) return rcc2_m388; else {rcc2_p388=T;return rcc2_m388=(rcc2_f389()>(0.0));}}
static int rcc2_f382(){if (rcc2_p382) return rcc2_m382; else {rcc2_p382=T;return rcc2_m382=(rcc2_f390()?((rcc2_v388=rcc2_f388()),(rcc2_v388?rcc2_v388:(fabs((rcc2_f387()-(0.0)))<rcc2_v1816))):NIL);}}
static int rcc2_f379(){if (rcc2_p379) return rcc2_m379; else {rcc2_p379=T;return rcc2_m379=((rcc2_f382()?rcc2_f389():rcc2_f603())>(0.0));}}
static double_or_symbol rcc2_f367(){if (rcc2_p367) return rcc2_m367; else {rcc2_p367=T;return rcc2_m367=(rcc2_f1414()?((rcc2_v382=rcc2_f382()),(rcc2_v382?(((rcc2_v382?rcc2_f390():NIL)?((rcc2_v379=rcc2_f379()),(rcc2_v379?rcc2_v379:(fabs(((rcc2_v382?rcc2_f387():rcc2_f599())-(0.0)))<rcc2_v1816))):NIL)?coerce_double_to_double_or_symbol((rcc2_f390()?rcc2_f466():rcc2_f582())):rcc2_f371()):(rcc2_v382?rcc2_f371():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcc2_f684(){if (rcc2_p684) return rcc2_m684; else {rcc2_p684=T;return rcc2_m684=(rcc2_f1743()?(rcc2_v1858+(rcc2_f687()*rcc2_f1760())):rcc2_f690());}}
static double rcc2_f676(){if (rcc2_p676) return rcc2_m676; else {rcc2_p676=T;return rcc2_m676=(rcc2_f1755()?rcc2_f690():(rcc2_f1747()?rcc2_f684():(rcc2_f695()?rcc2_f684():rcc2_f679())));}}
static double rcc2_f656(){if (rcc2_p656) return rcc2_m656; else {rcc2_p656=T;return rcc2_m656=(rcc2_f692()?rcc2_f676():rcc2_f657());}}
static int rcc2_f655(){if (rcc2_p655) return rcc2_m655; else {rcc2_p655=T;return rcc2_m655=(rcc2_v1850==rcc2_f656());}}
static double rcc2_f670(){if (rcc2_p670) return rcc2_m670; else {rcc2_p670=T;return rcc2_m670=(rcc2_f1743()?(rcc2_v1856+(rcc2_f687()*rcc2_f1759())):rcc2_f690());}}
static double rcc2_f664(){if (rcc2_p664) return rcc2_m664; else {rcc2_p664=T;return rcc2_m664=(rcc2_f1755()?rcc2_f690():(rcc2_f1747()?rcc2_f670():(rcc2_f695()?rcc2_f670():rcc2_f667())));}}
static double rcc2_f652(){if (rcc2_p652) return rcc2_m652; else {rcc2_p652=T;return rcc2_m652=(rcc2_f692()?rcc2_f664():rcc2_f653());}}
static double rcc2_f626(){if (rcc2_p626) return rcc2_m626; else {rcc2_p626=T;return rcc2_m626=(atan2((rcc2_f652()-rcc2_v1840),(rcc2_f656()-rcc2_v1842))+(1.5707963267948966));}}
static double rcc2_f642(){if (rcc2_p642) return rcc2_m642; else {rcc2_p642=T;return rcc2_m642=((rcc2_f652()-rcc2_v1848)/(rcc2_f656()-rcc2_v1850));}}
static int rcc2_f651(){if (rcc2_p651) return rcc2_m651; else {rcc2_p651=T;return rcc2_m651=(rcc2_v1848==rcc2_f652());}}
static double rcc2_f635(){if (rcc2_p635) return rcc2_m635; else {rcc2_p635=T;return rcc2_m635=(rcc2_f655()?(rcc2_f651()?rcc2_f649():rcc2_f652()):(rcc2_f656()+(rcc2_f642()*rcc2_f652())));}}
static double rcc2_f647(){if (rcc2_p647) return rcc2_m647; else {rcc2_p647=T;return rcc2_m647=(rcc2_f655()?(rcc2_f651()?rcc2_f649():(0.0)):(1.0));}}
static double rcc2_f641(){if (rcc2_p641) return rcc2_m641; else {rcc2_p641=T;return rcc2_m641=(rcc2_f655()?(rcc2_f651()?rcc2_f649():(1.0)):rcc2_f642());}}
static double rcc2_f618(){if (rcc2_p618) return rcc2_m618; else {rcc2_p618=T;return rcc2_m618=((rcc2_v626=rcc2_f626()),(((rcc2_f647()*(rcc2_f656()+cos(rcc2_v626)))+(rcc2_f641()*(rcc2_f652()+sin(rcc2_v626))))-rcc2_f635()));}}
static double rcc2_f634(){if (rcc2_p634) return rcc2_m634; else {rcc2_p634=T;return rcc2_m634=(((rcc2_f647()*rcc2_v1858)+(rcc2_f641()*rcc2_v1856))-rcc2_f635());}}
static int rcc2_f613(){if (rcc2_p613) return rcc2_m613; else {rcc2_p613=T;return rcc2_m613=(rcc2_f634()>(0.0));}}
static int rcc2_f606(){if (rcc2_p606) return rcc2_m606; else {rcc2_p606=T;return rcc2_m606=((rcc2_v701=rcc2_f701()),(rcc2_v701?rcc2_v701:((rcc2_f692()?((fabs((rcc2_v1842-rcc2_f676()))<rcc2_v1816)?(fabs((rcc2_v1840-rcc2_f664()))<rcc2_v1816):NIL):NIL)?T:(((fabs((rcc2_f634()-(0.0)))<rcc2_v1816)?T:((rcc2_v618=rcc2_f618()),((fabs((rcc2_v618-(0.0)))<rcc2_v1816)?NIL:((rcc2_v618>(0.0))?rcc2_f613():(rcc2_f613()?NIL:T)))))?NIL:T))));}}
static int rcc2_f514(){if (rcc2_p514) return rcc2_m514; else {rcc2_p514=T;return rcc2_m514=((rcc2_v515=rcc2_f515()),(rcc2_v515?rcc2_v515:rcc2_f606()));}}
static double rcc2_f511(){if (rcc2_p511) return rcc2_m511; else {rcc2_p511=T;return rcc2_m511=(rcc2_f514()?rcc2_f528():rcc2_f599());}}
static double rcc2_f513(){if (rcc2_p513) return rcc2_m513; else {rcc2_p513=T;return rcc2_m513=(rcc2_f514()?rcc2_f528():rcc2_f603());}}
static int rcc2_f512(){if (rcc2_p512) return rcc2_m512; else {rcc2_p512=T;return rcc2_m512=(rcc2_f513()>(0.0));}}
static int rcc2_f506(){if (rcc2_p506) return rcc2_m506; else {rcc2_p506=T;return rcc2_m506=(rcc2_f514()?((rcc2_v512=rcc2_f512()),(rcc2_v512?rcc2_v512:(fabs((rcc2_f511()-(0.0)))<rcc2_v1816))):NIL);}}
static int rcc2_f503(){if (rcc2_p503) return rcc2_m503; else {rcc2_p503=T;return rcc2_m503=((rcc2_f506()?rcc2_f513():rcc2_f603())>(0.0));}}
static int rcc2_f544(){if (rcc2_p544) return rcc2_m544; else {rcc2_p544=T;return rcc2_m544=((rcc2_v545=rcc2_f545()),(rcc2_v545?rcc2_v545:rcc2_f606()));}}
static int rcc2_f542(){if (rcc2_p542) return rcc2_m542; else {rcc2_p542=T;return rcc2_m542=((rcc2_f544()?rcc2_f558():rcc2_f603())>(0.0));}}
static int rcc2_f605(){if (rcc2_p605) return rcc2_m605; else {rcc2_p605=T;return rcc2_m605=((rcc2_v702=rcc2_f702()),(rcc2_v702?rcc2_v702:rcc2_f606()));}}
static double_or_symbol rcc2_f580(){if (rcc2_p580) return rcc2_m580; else {rcc2_p580=T;return rcc2_m580=(rcc2_f605()?coerce_double_to_double_or_symbol(rcc2_f718()):coerce_symbol_to_double_or_symbol(NIL));}}
static double rcc2_f598(){if (rcc2_p598) return rcc2_m598; else {rcc2_p598=T;return rcc2_m598=(rcc2_f605()?rcc2_f718():rcc2_f599());}}
static double rcc2_f602(){if (rcc2_p602) return rcc2_m602; else {rcc2_p602=T;return rcc2_m602=(rcc2_f605()?rcc2_f718():rcc2_f603());}}
static int rcc2_f601(){if (rcc2_p601) return rcc2_m601; else {rcc2_p601=T;return rcc2_m601=(rcc2_f602()>(0.0));}}
static int rcc2_f593(){if (rcc2_p593) return rcc2_m593; else {rcc2_p593=T;return rcc2_m593=(rcc2_f605()?((rcc2_v601=rcc2_f601()),(rcc2_v601?rcc2_v601:(fabs((rcc2_f598()-(0.0)))<rcc2_v1816))):NIL);}}
static int rcc2_f590(){if (rcc2_p590) return rcc2_m590; else {rcc2_p590=T;return rcc2_m590=((rcc2_f593()?rcc2_f602():rcc2_f603())>(0.0));}}
static double_or_symbol rcc2_f576(){if (rcc2_p576) return rcc2_m576; else {rcc2_p576=T;return rcc2_m576=(rcc2_f1772()?((rcc2_v593=rcc2_f593()),(rcc2_v593?(((rcc2_v593?rcc2_f605():NIL)?((rcc2_v590=rcc2_f590()),(rcc2_v590?rcc2_v590:(fabs(((rcc2_v593?rcc2_f598():rcc2_f599())-(0.0)))<rcc2_v1816))):NIL)?coerce_double_to_double_or_symbol((rcc2_f605()?rcc2_f718():rcc2_f582())):rcc2_f580()):(rcc2_v593?rcc2_f580():coerce_symbol_to_double_or_symbol(NIL)))):coerce_symbol_to_double_or_symbol(NIL));}}
void rcc2(rcc2_a1858,rcc2_a1856,rcc2_a1854,rcc2_a1852,rcc2_a1850,rcc2_a1848,rcc2_a1846,rcc2_a1844,rcc2_a1842,rcc2_a1840,rcc2_a1816)
double rcc2_a1858;
double rcc2_a1856;
double rcc2_a1854;
double rcc2_a1852;
double rcc2_a1850;
double rcc2_a1848;
double rcc2_a1846;
double rcc2_a1844;
double rcc2_a1842;
double rcc2_a1840;
double rcc2_a1816;
{ rcc2_v1858=rcc2_a1858;
  rcc2_v1856=rcc2_a1856;
  rcc2_v1854=rcc2_a1854;
  rcc2_v1852=rcc2_a1852;
  rcc2_v1850=rcc2_a1850;
  rcc2_v1848=rcc2_a1848;
  rcc2_v1846=rcc2_a1846;
  rcc2_v1844=rcc2_a1844;
  rcc2_v1842=rcc2_a1842;
  rcc2_v1840=rcc2_a1840;
  rcc2_v1816=rcc2_a1816;
  rcc2_p42=NIL;
  rcc2_p44=NIL;
  rcc2_p1066=NIL;
  rcc2_p1067=NIL;
  rcc2_p1104=NIL;
  rcc2_p1102=NIL;
  rcc2_p1108=NIL;
  rcc2_p1131=NIL;
  rcc2_p1407=NIL;
  rcc2_p1429=NIL;
  rcc2_p1107=NIL;
  rcc2_p242=NIL;
  rcc2_p1427=NIL;
  rcc2_p582=NIL;
  rcc2_p599=NIL;
  rcc2_p603=NIL;
  rcc2_p649=NIL;
  rcc2_p653=NIL;
  rcc2_p657=NIL;
  rcc2_p690=NIL;
  rcc2_p1730=NIL;
  rcc2_p1732=NIL;
  rcc2_p240=NIL;
  rcc2_p238=NIL;
  rcc2_p223=NIL;
  rcc2_p237=NIL;
  rcc2_p1760=NIL;
  rcc2_p1759=NIL;
  rcc2_p1756=NIL;
  rcc2_p1747=NIL;
  rcc2_p1733=NIL;
  rcc2_p1094=NIL;
  rcc2_p1088=NIL;
  rcc2_p1101=NIL;
  rcc2_p1099=NIL;
  rcc2_p228=NIL;
  rcc2_p1095=NIL;
  rcc2_p234=NIL;
  rcc2_p225=NIL;
  rcc2_p217=NIL;
  rcc2_p199=NIL;
  rcc2_p198=NIL;
  rcc2_p211=NIL;
  rcc2_p205=NIL;
  rcc2_p197=NIL;
  rcc2_p173=NIL;
  rcc2_p189=NIL;
  rcc2_p196=NIL;
  rcc2_p182=NIL;
  rcc2_p194=NIL;
  rcc2_p188=NIL;
  rcc2_p165=NIL;
  rcc2_p181=NIL;
  rcc2_p160=NIL;
  rcc2_p153=NIL;
  rcc2_p1719=NIL;
  rcc2_p1720=NIL;
  rcc2_p698=NIL;
  rcc2_p696=NIL;
  rcc2_p682=NIL;
  rcc2_p679=NIL;
  rcc2_p667=NIL;
  rcc2_p695=NIL;
  rcc2_p1755=NIL;
  rcc2_p1754=NIL;
  rcc2_p1133=NIL;
  rcc2_p1128=NIL;
  rcc2_p1753=NIL;
  rcc2_p701=NIL;
  rcc2_p1647=NIL;
  rcc2_p1646=NIL;
  rcc2_p1113=NIL;
  rcc2_p1046=NIL;
  rcc2_p1112=NIL;
  rcc2_p1012=NIL;
  rcc2_p1011=NIL;
  rcc2_p1645=NIL;
  rcc2_p1769=NIL;
  rcc2_p1767=NIL;
  rcc2_p993=NIL;
  rcc2_p1765=NIL;
  rcc2_p1699=NIL;
  rcc2_p1764=NIL;
  rcc2_p1666=NIL;
  rcc2_p1665=NIL;
  rcc2_p575=NIL;
  rcc2_p1799=NIL;
  rcc2_p1797=NIL;
  rcc2_p273=NIL;
  rcc2_p1794=NIL;
  rcc2_p1137=NIL;
  rcc2_p1812=NIL;
  rcc2_p1809=NIL;
  rcc2_p739=NIL;
  rcc2_p1801=NIL;
  rcc2_p1793=NIL;
  rcc2_p1791=NIL;
  rcc2_p1790=NIL;
  rcc2_p1134=NIL;
  rcc2_p1024=NIL;
  rcc2_p130=NIL;
  rcc2_p126=NIL;
  rcc2_p121=NIL;
  rcc2_p128=NIL;
  rcc2_p127=NIL;
  rcc2_p125=NIL;
  rcc2_p124=NIL;
  rcc2_p120=NIL;
  rcc2_p84=NIL;
  rcc2_p83=NIL;
  rcc2_p71=NIL;
  rcc2_p70=NIL;
  rcc2_p67=NIL;
  rcc2_p69=NIL;
  rcc2_p68=NIL;
  rcc2_p62=NIL;
  rcc2_p61=NIL;
  rcc2_p59=NIL;
  rcc2_p53=NIL;
  rcc2_p114=NIL;
  rcc2_p113=NIL;
  rcc2_p101=NIL;
  rcc2_p100=NIL;
  rcc2_p98=NIL;
  rcc2_p92=NIL;
  rcc2_p1035=NIL;
  rcc2_p1116=NIL;
  rcc2_p1127=NIL;
  rcc2_p1042=NIL;
  rcc2_p1041=NIL;
  rcc2_p1126=NIL;
  rcc2_p1124=NIL;
  rcc2_p265=NIL;
  rcc2_p256=NIL;
  rcc2_p255=NIL;
  rcc2_p243=NIL;
  rcc2_p152=NIL;
  rcc2_p40=NIL;
  rcc2_p149=NIL;
  rcc2_p151=NIL;
  rcc2_p150=NIL;
  rcc2_p144=NIL;
  rcc2_p141=NIL;
  rcc2_p135=NIL;
  rcc2_p1118=NIL;
  rcc2_p36=NIL;
  rcc2_p16=NIL;
  rcc2_p271=NIL;
  rcc2_p132=NIL;
  rcc2_p1788=NIL;
  rcc2_p1678=NIL;
  rcc2_p1677=NIL;
  rcc2_p1689=NIL;
  rcc2_p1688=NIL;
  rcc2_p729=NIL;
  rcc2_p1787=NIL;
  rcc2_p1785=NIL;
  rcc2_p1784=NIL;
  rcc2_p1424=NIL;
  rcc2_p366=NIL;
  rcc2_p362=NIL;
  rcc2_p357=NIL;
  rcc2_p364=NIL;
  rcc2_p361=NIL;
  rcc2_p360=NIL;
  rcc2_p356=NIL;
  rcc2_p320=NIL;
  rcc2_p319=NIL;
  rcc2_p307=NIL;
  rcc2_p350=NIL;
  rcc2_p349=NIL;
  rcc2_p337=NIL;
  rcc2_p1412=NIL;
  rcc2_p1423=NIL;
  rcc2_p1385=NIL;
  rcc2_p1422=NIL;
  rcc2_p1420=NIL;
  rcc2_p475=NIL;
  rcc2_p466=NIL;
  rcc2_p465=NIL;
  rcc2_p453=NIL;
  rcc2_p1414=NIL;
  rcc2_p1782=NIL;
  rcc2_p574=NIL;
  rcc2_p570=NIL;
  rcc2_p565=NIL;
  rcc2_p572=NIL;
  rcc2_p569=NIL;
  rcc2_p568=NIL;
  rcc2_p564=NIL;
  rcc2_p528=NIL;
  rcc2_p527=NIL;
  rcc2_p515=NIL;
  rcc2_p558=NIL;
  rcc2_p557=NIL;
  rcc2_p545=NIL;
  rcc2_p1770=NIL;
  rcc2_p1781=NIL;
  rcc2_p1694=NIL;
  rcc2_p1780=NIL;
  rcc2_p1778=NIL;
  rcc2_p727=NIL;
  rcc2_p718=NIL;
  rcc2_p717=NIL;
  rcc2_p702=NIL;
  rcc2_p1772=NIL;
  rcc2_p1818=NIL;
  rcc2_p687=NIL;
  rcc2_p1814=NIL;
  rcc2_p1743=NIL;
  rcc2_p452=NIL;
  rcc2_p449=NIL;
  rcc2_p445=NIL;
  rcc2_p442=NIL;
  rcc2_p692=NIL;
  rcc2_p434=NIL;
  rcc2_p433=NIL;
  rcc2_p436=NIL;
  rcc2_p411=NIL;
  rcc2_p435=NIL;
  rcc2_p431=NIL;
  rcc2_p426=NIL;
  rcc2_p419=NIL;
  rcc2_p425=NIL;
  rcc2_p403=NIL;
  rcc2_p418=NIL;
  rcc2_p398=NIL;
  rcc2_p391=NIL;
  rcc2_p306=NIL;
  rcc2_p303=NIL;
  rcc2_p305=NIL;
  rcc2_p304=NIL;
  rcc2_p298=NIL;
  rcc2_p295=NIL;
  rcc2_p336=NIL;
  rcc2_p334=NIL;
  rcc2_p390=NIL;
  rcc2_p371=NIL;
  rcc2_p387=NIL;
  rcc2_p389=NIL;
  rcc2_p388=NIL;
  rcc2_p382=NIL;
  rcc2_p379=NIL;
  rcc2_p367=NIL;
  rcc2_p684=NIL;
  rcc2_p676=NIL;
  rcc2_p656=NIL;
  rcc2_p655=NIL;
  rcc2_p670=NIL;
  rcc2_p664=NIL;
  rcc2_p652=NIL;
  rcc2_p626=NIL;
  rcc2_p642=NIL;
  rcc2_p651=NIL;
  rcc2_p635=NIL;
  rcc2_p647=NIL;
  rcc2_p641=NIL;
  rcc2_p618=NIL;
  rcc2_p634=NIL;
  rcc2_p613=NIL;
  rcc2_p606=NIL;
  rcc2_p514=NIL;
  rcc2_p511=NIL;
  rcc2_p513=NIL;
  rcc2_p512=NIL;
  rcc2_p506=NIL;
  rcc2_p503=NIL;
  rcc2_p544=NIL;
  rcc2_p542=NIL;
  rcc2_p605=NIL;
  rcc2_p580=NIL;
  rcc2_p598=NIL;
  rcc2_p602=NIL;
  rcc2_p601=NIL;
  rcc2_p593=NIL;
  rcc2_p590=NIL;
  rcc2_p576=NIL;
  double_or_symbol_result=((rcc2_v1838=(rcc2_v1858-rcc2_v1850)),(rcc2_v1836=(rcc2_v1856-rcc2_v1848)),(rcc2_v1834=((rcc2_v1838*rcc2_v1838)+(rcc2_v1836*rcc2_v1836))),(rcc2_v1833=sqrt(rcc2_v1834)),(rcc2_v1832=(rcc2_v1858-rcc2_v1854)),(rcc2_v1830=(rcc2_v1856-rcc2_v1852)),(rcc2_v1827=sqrt(((rcc2_v1832*rcc2_v1832)+(rcc2_v1830*rcc2_v1830)))),(rcc2_v1826=(rcc2_v1850-rcc2_v1846)),(rcc2_v1824=(rcc2_v1848-rcc2_v1844)),(rcc2_v1821=sqrt(((rcc2_v1826*rcc2_v1826)+(rcc2_v1824*rcc2_v1824)))),(rcc2_v1820=(rcc2_v1827+rcc2_v1821)),(rcc2_v1819=(rcc2_v1833>rcc2_v1820)),((rcc2_v1819?rcc2_v1819:rcc2_f1814())?(rcc2_f739()?coerce_symbol_to_double_or_symbol(NIL):((rcc2_v1772=rcc2_f1772()),((rcc2_v1772?(rcc2_f1770()?(rcc2_f1764()<rcc2_f1782()):NIL):(rcc2_v1772?NIL:T))?(rcc2_f1699()?coerce_symbol_to_double_or_symbol(NIL):((rcc2_v1781=rcc2_f1781()),((rcc2_f1765()>(rcc2_v1781*rcc2_v1781))?rcc2_f576():((rcc2_f572()<0.0)?rcc2_f576():((rcc2_v544=rcc2_f544()),((rcc2_v544?((rcc2_v542=rcc2_f542()),(rcc2_v542?rcc2_v542:(fabs(((rcc2_v544?rcc2_f558():rcc2_f599())-(0.0)))<rcc2_v1816))):NIL)?((rcc2_v506=rcc2_f506()),(((rcc2_v506?rcc2_f514():NIL)?((rcc2_v503=rcc2_f503()),(rcc2_v503?rcc2_v503:(fabs(((rcc2_v506?rcc2_f511():rcc2_f599())-(0.0)))<rcc2_v1816))):NIL)?coerce_double_to_double_or_symbol((rcc2_v544?(rcc2_v506?(rcc2_f514()?((rcc2_v558=rcc2_f558()),(rcc2_v528=rcc2_f528()),((rcc2_v558<rcc2_v528)?rcc2_v558:rcc2_v528)):rcc2_f582()):rcc2_f582()):rcc2_f582())):(rcc2_v544?coerce_double_to_double_or_symbol(rcc2_f558()):coerce_symbol_to_double_or_symbol(NIL)))):(rcc2_f506()?(rcc2_f514()?coerce_double_to_double_or_symbol(rcc2_f528()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))))))):coerce_symbol_to_double_or_symbol(NIL)))):((rcc2_v1827<rcc2_v1821)?(rcc2_f739()?coerce_symbol_to_double_or_symbol(NIL):((rcc2_v1414=rcc2_f1414()),((rcc2_v1414?((rcc2_v1412=rcc2_f1412()),(rcc2_v1412?rcc2_v1412:(rcc2_f1764()>rcc2_f1424()))):(rcc2_v1414?NIL:T))?(rcc2_f1699()?coerce_symbol_to_double_or_symbol(NIL):((rcc2_v1423=rcc2_f1423()),((rcc2_f1765()>(rcc2_v1423*rcc2_v1423))?rcc2_f367():((rcc2_f364()<0.0)?rcc2_f367():((rcc2_v336=rcc2_f336()),((rcc2_v336?((rcc2_v334=rcc2_f334()),(rcc2_v334?rcc2_v334:(fabs(((rcc2_v336?rcc2_f350():rcc2_f599())-(0.0)))<rcc2_v1816))):NIL)?((rcc2_v298=rcc2_f298()),(((rcc2_v298?rcc2_f306():NIL)?((rcc2_v295=rcc2_f295()),(rcc2_v295?rcc2_v295:(fabs(((rcc2_v298?rcc2_f303():rcc2_f599())-(0.0)))<rcc2_v1816))):NIL)?coerce_double_to_double_or_symbol((rcc2_v336?(rcc2_v298?(rcc2_f306()?((rcc2_v350=rcc2_f350()),(rcc2_v320=rcc2_f320()),((rcc2_v350<rcc2_v320)?rcc2_v350:rcc2_v320)):rcc2_f582()):rcc2_f582()):rcc2_f582())):(rcc2_v336?coerce_double_to_double_or_symbol(rcc2_f350()):coerce_symbol_to_double_or_symbol(NIL)))):(rcc2_f298()?(rcc2_f306()?coerce_double_to_double_or_symbol(rcc2_f320()):coerce_symbol_to_double_or_symbol(NIL)):coerce_symbol_to_double_or_symbol(NIL)))))))):coerce_symbol_to_double_or_symbol(NIL)))):((rcc2_v273=rcc2_f273()),((rcc2_v273?NIL:(rcc2_f271()?(rcc2_f1046()?NIL:(rcc2_f1042()?rcc2_f132():(rcc2_f127()?rcc2_f132():(rcc2_f92()?(rcc2_f53()?T:rcc2_f100()):rcc2_f61())))):NIL))?coerce_double_to_double_or_symbol((-(rcc2_v273?rcc2_f44():(rcc2_f271()?(rcc2_f1046()?rcc2_f44():(rcc2_f1042()?rcc2_f36():(rcc2_f127()?rcc2_f36():(rcc2_f92()?(rcc2_f53()?(rcc2_f100()?(rcc2_f62()?(rcc2_f70()?((rcc2_v114=rcc2_f114()),(rcc2_v84=rcc2_f84()),((rcc2_v114>rcc2_v84)?rcc2_v114:rcc2_v84)):rcc2_f42()):rcc2_f42()):rcc2_f42()):(rcc2_f100()?rcc2_f114():rcc2_f44())):(rcc2_f62()?(rcc2_f70()?rcc2_f84():rcc2_f44()):rcc2_f44()))))):rcc2_f44())))):coerce_symbol_to_double_or_symbol(((rcc2_v273?T:(rcc2_f271()?(rcc2_f1046()?T:(rcc2_f1042()?rcc2_f16():(rcc2_f127()?rcc2_f16():(rcc2_f92()?(rcc2_f53()?NIL:(rcc2_f100()?NIL:T)):(rcc2_f62()?(rcc2_f70()?NIL:T):T))))):T))?NIL:error("No applicable method for OPPOSITE with argument types ((OR NULL FLOAT))")))))))); return;}
