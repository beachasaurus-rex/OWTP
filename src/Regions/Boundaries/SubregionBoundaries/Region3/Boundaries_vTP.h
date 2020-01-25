#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "..\..\..\ReferenceConstants.h"
#endif

//All Subregion Boundary Equations for v(T,P)



//Iteration Constants R3ab

static const int _I_v_T_P_R3ab[5] = { 0, 1, 2, -1, -2 };
static const double _n_v_T_P_R3ab[5] = { 1547.93642129415, -187.661219490113, 21.3144632222113, -1918.87498864292, 918.419702359447 };

//Iteration Constants R3cd

static const int _I_v_T_P_R3cd[4] = { 0, 1, 2, 3 };
static const double _n_v_T_P_R3cd[4] = { 585.276966696349, 2.78233532206915, -1.27283549295878E-02, 1.59090746562729E-04 };

//Iteration Constants R3gh

static const int _I_v_T_P_R3gh[5] = { 0, 1, 2, 3, 4 };
static const double _n_v_T_P_R3gh[5] = { -24928.4240900418, 4281.43584791546, -269.02917314013, 7.51608051114157, -7.87105249910383E-02 };

//Iteration Constants R3ij

static const int _I_v_T_P_R3ij[5] = { 0, 1, 2, 3, 4 };
static const double _n_v_T_P_R3ij[5] = { 584.814781649163, -0.616179320924617, 0.260763050899562, -5.87071076864459E-03, 5.15308185433082E-05 };

//Iteration Constants R3jk

static const int _I_v_T_P_R3jk[5] = { 0, 1, 2, 3, 4 };
static const double _n_v_T_P_R3jk[5] = { 617.229772068439, -7.70600270141675, 0.697072596851896, -1.57391839848015E-02, 1.37897492684194E-04 };

//Iteration Constants R3mn

static const int _I_v_T_P_R3mn[5] = { 0, 1, 2, 3 };
static const double _n_v_T_P_R3mn[5] = { 535.339483742384, 7.61978122720128, -0.158365725441648, 1.92871054508108E-03 };

//Iteration Constants R3op

static const int _I_v_T_P_R3op[13] = { 0, 1, 2, -1, -2 };
static const double _n_v_T_P_R3op[13] = { 969.461372400213, -332.500170441278, 64.2859598466067, 773.845935768222, -1523.13732937084 };

//Iteration Constants R3qu

static const int _I_v_T_P_R3qu[12] = { 0, 1, 2, 3 };
static const double _n_v_T_P_R3qu[12] = { 565.603648239126, 5.29062258221222, -0.102020639611016, 1.22240301070145E-03 };

//Iteration Constants R3rx

static const int _I_v_T_P_R3rx[4] = { 0, 1, 2, 3 };
static const double _n_v_T_P_R3rx[4] = { 584.561202520006, -1.02961025163669, 0.243293362700452, -2.94905044740799E-03 };

//Iteration Constants R3uv

static const int _I_v_T_P_R3uv[4] = {0, 1, 2, 3};
static const double _n_v_T_P_R3uv[4] = {528.199646263062, 8.90579602135307, -0.222814134903755, 2.86791682263697E-03};

//Iteration Constants R3wx

static const int _I_v_T_P_R3wx[5] = {0, 1, 2, -1, -2};
static const double _n_v_T_P_R3wx[5] = {7.2805260914538, 97.3505869861952, 14.7370491183191, 329.196213998375, 873.371668682417};

//Generic boundary equation for all subregions except ab, ef, op

static double _T3_v_T_P(double press, const int* IArr, const double* nArr, int arrSize)
{
	//K
	const double tStar = 1;
	//kPa
	const double pStar = 1000;

	double pi = press / pStar;
	double sum = 0;
	for (int i = 0; i < arrSize; i++)
	{
		double calc = nArr[i] * pow(pi, IArr[i]);
		sum = sum + calc;
	}
	return sum * tStar;
}

//Generic boundary equation for subregions ab, op

static double _T3_ab_op_wx_v_T_P(double press, const int* IArr, const double* nArr,
	int arrSize)
{
	//K
	const double tStar = 1;
	//kPa
	const double pStar = 1000;

	double pi = press / pStar;
	double sum = 0;
	for (int i = 0; i < arrSize; i++)
	{
		double calc = nArr[i] * pow(log(pi), IArr[i]);
		sum = sum + calc;
	}
	return sum * tStar;
}

//Boundary Equations R3ab

double _T3ab_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3ab);
	return _T3_ab_op_wx_v_T_P(press, _I_v_T_P_R3ab, _n_v_T_P_R3ab, N);
}

//Boundary Equations R3cd

double _T3cd_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3cd);
	return _T3_v_T_P(press, _I_v_T_P_R3cd, _n_v_T_P_R3cd, N);
}

//Boundary Equations R3ef

double _T3ef_v_T_P(double press)
{
	const double dPiSat_dPi = 3.727888004;
	//K
	const double tStar = 1;
	//kPa
	const double pStar = 1000;

	double pi = press / pStar;
	return tStar * (dPiSat_dPi * (pi - 22.064) + 647.096);
}

//Boundary Equations R3gh

double _T3gh_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3gh);
	return _T3_v_T_P(press, _I_v_T_P_R3gh, _n_v_T_P_R3gh, N);
}

//Boundary Equations R3ij

double _T3ij_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3ij);
	return _T3_v_T_P(press, _I_v_T_P_R3ij, _n_v_T_P_R3ij, N);
}

//Boundary Equations R3jk

double _T3jk_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3jk);
	return _T3_v_T_P(press, _I_v_T_P_R3jk, _n_v_T_P_R3jk, N);
}

//Boundary Equations R3mn

double _T3mn_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3mn);
	return _T3_v_T_P(press, _I_v_T_P_R3mn, _n_v_T_P_R3mn, N);
}

//Boundary Equations R3op

double _T3op_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3op);
	return _T3_ab_op_wx_v_T_P(press, _I_v_T_P_R3op, _n_v_T_P_R3op, N);
}

//Boundary Equations R3qu

double _T3qu_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3qu);
	return _T3_v_T_P(press, _I_v_T_P_R3qu, _n_v_T_P_R3qu, N);
}

//Boundary Equations R3rx

double _T3rx_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3rx);
	return _T3_v_T_P(press, _I_v_T_P_R3rx, _n_v_T_P_R3rx, N);
}

//Boundary Equations R3uv

double _T3uv_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3uv);
	return _T3_v_T_P(press, _I_v_T_P_R3uv, _n_v_T_P_R3uv, N);
}

//Boundary Equations R3wx

double _T3wx_v_T_P(double press)
{
	int N = ITERCONST(_I_v_T_P_R3wx);
	return _T3_ab_op_wx_v_T_P(press, _I_v_T_P_R3wx, _n_v_T_P_R3wx, N);
}

//Backwards equations for v(P,T)


//Iteration Constants R3a

static const int _I_v_T_P_R3a[30] = {-12, -12, -12, -10, -10, -10, -8, -8, -8, -6, -5, -5, -5, -4, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 2, 2};
static const int _J_v_T_P_R3a[30] = {5, 10, 12, 5, 10, 12, 5, 8, 10, 1, 1, 5, 10, 8, 0, 1, 3, 6, 0, 2, 3, 0, 1, 2, 0, 1, 0, 2, 0, 2};
static const double _n_v_T_P_R3a[30] = {1.10879558823853E-03, 572.616740810616, -76705.1948380852, -2.53321069529674E-02, 6280.08049345689, 234105.654131876, 0.216867826045856, -156.237904341963, -26989.3956176613, -1.80407100085505E-04, 1.16732227668261E-03, 26.698704085604, 28277.6617243286, -2424.31520029523, 4.35217323022733E-04, -1.22494831387441E-02, 1.79357604019989, 44.2729521058314, -5.93223489018342E-03, 0.453186261685774, 1.3582570312914, 4.08748415856745E-02, 0.474686397863312, 1.18646814997915, 0.546987265727549, 0.195266770452643, -5.02268790869663E-02, -0.369645308193377, 6.3382803752842E-03, 7.97441793901017E-02};

//Iteration Constants R3b

static const int _I_v_T_P_R3b[32] = {-12, -12, -10, -10, -8, -6, -6, -6, -5, -5, -5, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 3, 4, 4};
static const int _J_v_T_P_R3b[32] = {10, 12, 8, 14, 8, 5, 6, 8, 5, 8, 10, 2, 4, 5, 0, 1, 2, 3, 5, 0, 2, 5, 0, 2, 0, 1, 0, 2, 0, 2, 0, 1};
static const double _n_v_T_P_R3b[32] = {-8.27670470003621E-02, 41.6887126010565, 4.83651982197059E-02, -29103.2084950276, -111.422582236948, -2.02300083904014E-02, 294.002509338515, 140.244997609658, -344.384158811459, 361.182452612149, -1406.99677420738, -2.02023902676481E-03, 171.346792457471, -4.25597804058632, 6.91346085000334E-06, 1.51140509678925E-03, -4.16375290166236E-02, -41.3754957011042, -50.6673295721637, -5.72212965569023E-04, 6.08817368401785, 23.9600660256161, 1.22261479925384E-02, 2.16356057692938, 0.398198903368642, -0.116892827834085, -0.102845919373532, -0.492676637589284, 0.065554045640679, -0.24046253507853, -2.69798180310075E-02, 0.128369435967012};

//Iteration Constants R3c

static const int _I_v_T_P_R3c[35] = {-12, -12, -12, -10, -10, -10, -8, -8, -8, -6, -5, -5, -5, -4, -4, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 8};
static const int _J_v_T_P_R3c[35] = {6, 8, 10, 6, 8, 10, 5, 6, 7, 8, 1, 4, 7, 2, 8, 0, 3, 0, 4, 5, 0, 1, 2, 0, 1, 2, 0, 2, 0, 1, 3, 7, 0, 7, 1};
static const double _n_v_T_P_R3c[35] = {3.1196778876303, 27671.3458847564, 32258310.3403269, -342.416065095363, -899732.529907377, -79389204.9821251, 95.3193003217388, 2297.84742345072, 175336.675322499, 7912143.65222792, 3.19933345844209E-05, -65.9508863555767, -833426.563212851, 6.45734680583292E-02, -3820310.20570813, 4.06398848470079E-05, 31.0327498492008, -8.92996718483724E-04, 234.604891591616, 3775.15668966951, 1.58646812591361E-02, 0.707906336241843, 12.601622514657, 0.736143655772152, 0.676544268999101, -17.8100588189137, -0.156531975531713, 11.7707430048158, 8.40143653860447E-02, -0.186442467471949, -44.0170203949645, 1232904.23502494, -2.40650039730845E-02, -1070777.16660869, 4.38319858566475E-02};

//Iteration Constants R3d

static const int _I_v_T_P_R3d[38] = {-12, -12, -12, -12, -12, -12, -10, -10, -10, -10, -10, -10, -10, -8, -8, -8, -8, -6, -6, -5, -5, -5, -5, -4, -4, -4, -3, -3, -2, -2, -1, -1, -1, 0, 0, 1, 1, 3};
static const int _J_v_T_P_R3d[38] = {4, 6, 7, 10, 12, 16, 0, 2, 4, 6, 8, 10, 14, 3, 7, 8, 10, 6, 8, 1, 2, 5, 7, 0, 1, 7, 2, 4, 0, 1, 0, 1, 5, 0, 2, 0, 6, 0};
static const double _n_v_T_P_R3d[38] = {-4.52484847171645E-10, 3.15210389538801E-05, -2.14991352047545E-03, 508.058874808345, -12712303.6845932, 1153711331204.97, -1.97805728776273E-16, 2.41554806033972E-11, -1.56481703640525E-06, 2.77211346836625E-03, -20.3578994462286, 1443694.89909053, -41125421794.6539, 6.23449786243773E-06, -22.1774281146038, -68931.5087933158, -19541952.5060713, 3163.73510564015, 2240407.54426988, -4.36701347922356E-06, -4.04213852833996E-04, -348.153203414663, -385294.213555289, 1.35203700099403E-07, 1.34648383271089E-04, 125031.835351736, 9.68123678455841E-02, 225.660517512438, -1.90102435341872E-04, -2.99628410819229E-02, 5.00833915372121E-03, 0.387842482998411, -1385.35367777182, 0.870745245971773, 1.71946252068742, -3.26650121426383E-02, 4980.44171727877, 5.51478022765087E-03};

//Iteration Constants R3e

static const int _I_v_T_P_R3e[29] = {-12, -12, -10, -10, -10, -10, -10, -8, -8, -8, -6, -5, -4, -4, -3, -3, -3, -2, -2, -2, -2, -1, 0, 0, 1, 1, 1, 2, 2};
static const int _J_v_T_P_R3e[29] = {14, 16, 3, 6, 10, 14, 16, 7, 8, 10, 6, 6, 2, 4, 2, 6, 7, 0, 1, 3, 4, 0, 0, 1, 0, 4, 6, 0, 2};
static const double _n_v_T_P_R3e[29] = {715815808.404721, -114328360753.449, 3.7653100201572E-12, -9.03983668691157E-05, 665695.908836252, 5353641749.60127, 79497740233.5603, 92.2230563421437, -142586.073991215, -1117963.81424162, 8961.2162964076, -6699.89239070491, 4.51242538486834E-03, -33.9731325977713, -1.20523111552278, 47599.2667717124, -266627.750390341, -1.53314954386524E-04, 0.305638404828265, 123.654999499486, -1043.90794213011, -1.57496516174308E-02, 0.685331118940253, 1.78373462873903, -0.54467412487891, 2045.29931318843, -22834.2359328752, 0.413197481515899, -34.1931835910405};

//Iteration Constants R3f

static const int _I_v_T_P_R3f[42] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 3, 3, 3, 4, 5, 5, 6, 7, 7, 10, 12, 12, 12, 14, 14, 14, 14, 14, 16, 16, 18, 18, 20, 20, 20, 22, 24, 24, 28, 32};
static const int _J_v_T_P_R3f[42] = {-3, -2, -1, 0, 1, 2, -1, 1, 2, 3, 0, 1, -5, -2, 0, -3, -8, 1, -6, -4, 1, -6, -10, -8, -4, -12, -10, -8, -6, -4, -10, -8, -12, -10, -12, -10, -6, -12, -12, -4, -12, -12};
static const double _n_v_T_P_R3f[42] = {-2.51756547792325E-08, 6.01307193668763E-06, -1.00615977450049E-03, 0.999969140252192, 2.14107759236486, -16.5175571959086, -1.41987303638727E-03, 2.69251915156554, 34.9741815858722, -30.0208695771783, -1.31546288252539, -8.39091277286169, 1.81545608337015E-10, -5.91099206478909E-04, 1.52115067087106, 2.52956470663225E-05, 1.00726265203786E-15, -1.4977453386065, -7.93940970562969E-10, -1.50290891264717E-04, 1.51205531275133, 4.70942606221652E-06, 1.95049710391712E-13, -9.11627886266077E-09, 6.04374640201265E-04, -2.25132933900136E-16, 6.10916973582981E-12, -3.03063908043404E-07, -1.37796070798409E-05, -9.19296736666106E-04, 6.39288223132545E-10, 7.53259479898699E-07, -4.00321478682929E-13, 7.56140294351614E-09, -9.12082054034891E-12, -2.37612381140539E-08, 2.69586010591874E-05, -7.32828135157839E-11, 2.4199557830666E-10, -4.05735532730322E-04, 1.89424143498011E-10, -4.86632965074563E-10};

//Iteration Constants R3g

static const int _I_v_T_P_R3g[38] = {-12, -12, -12, -12, -12, -12, -10, -10, -10, -8, -8, -8, -8, -6, -6, -5, -5, -4, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 3, 5, 6, 8, 10, 10};
static const int _J_v_T_P_R3g[38] = {7, 12, 14, 18, 22, 24, 14, 20, 24, 7, 8, 10, 12, 8, 22, 7, 20, 22, 7, 3, 5, 14, 24, 2, 8, 18, 0, 1, 2, 0, 1, 3, 24, 22, 12, 3, 0, 6};
static const double _n_v_T_P_R3g[38] = {4.12209020652996E-05, -1149872.38280587, 9481808850.3208, -1.95788865718971E+17, 4.962507048713E+24, -1.05549884548496E+28, -758642165988.278, -9.22172769596101E+22, 7.25379072059348E+29, -61.7718249205859, 10755.5033344858, -37954580.2336487, 228646846221.831, -4997410.93010619, -2.80214310054101E+30, 1049154.06769586, 6.13754229168619E+27, 8.02056715528378E+31, -29861781.9828065, -91.0782540134681, 135033.227281565, -7.12949383408211E+18, -1.04578785289542E+36, 30.4331584444093, 5932507979.59445, -3.64174062110798E+27, 0.921791403532461, -0.337693609657471, -72.4644143758508, -0.110480239272601, 5.36516031875059, -2914.41872156205, 6.16338176535305E+39, -1.2088917586118E+38, 8.18396024524612E+22, 940781944.835829, -36727.9669545448, -8.37513931798655E+15};

//Iteration Constants R3h

static const int _I_v_T_P_R3h[29] = {-12, -12, -10, -10, -10, -10, -10, -10, -8, -8, -8, -8, -8, -6, -6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -1, -1, 0, 1, 1};
static const int _J_v_T_P_R3h[29] = {8, 12, 4, 6, 8, 10, 14, 16, 0, 1, 6, 7, 8, 4, 6, 8, 2, 3, 4, 2, 4, 1, 2, 0, 0, 2, 0, 0, 2};
static const double _n_v_T_P_R3h[29] = {5.61379678887577E-02, 7741354215.87083, 1.11482975877938E-09, -1.43987128208183E-03, 1936.9655876492, -605971823.585005, 17195156812433.7, -1.85461154985145E+16, 3.8785116807801E-17, -3.95464327846105E-14, -170.875935679023, -2120.1062070122, 17768333.7348191, 11.0177443629575, -234396.091693313, -6561744.21999594, 1.56362212977396E-05, -2.129462570214, 13.5249306374858, 0.177189164145813, 1394.99167345464, -7.03670932036388E-03, -0.152011044389648, 9.81916922991113E-05, 1.47199658618076E-03, 20.2618487025578, 0.89934551894424, -0.211346402240858, 24.9971752957491};

//Iteration Constants R3i

static const int _I_v_T_P_R3i[42] = {0, 0, 0, 1, 1, 1, 1, 2, 3, 3, 4, 4, 4, 5, 5, 5, 7, 7, 8, 8, 10, 12, 12, 12, 14, 14, 14, 14, 18, 18, 18, 18, 18, 20, 20, 22, 24, 24, 32, 32, 36, 36};
static const int _J_v_T_P_R3i[42] = {0, 1, 10, -4, -2, -1, 0, 0, -5, 0, -3, -2, -1, -6, -1, 12, -4, -3, -6, 10, -8, -12, -6, -4, -10, -8, -4, 5, -12, -10, -8, -6, 2, -12, -10, -12, -12, -8, -10, -5, -10, -8};
static const double _n_v_T_P_R3i[42] = {1.06905684359136, -1.48620857922333, 259862256980408, -4.46352055678749E-12, -5.66620757170032E-07, -2.35302885736849E-03, -0.269226321968839, 9.22024992944392, 3.57633505503772E-12, -17.3942565562222, 7.00681785556229E-06, -2.67050351075768E-04, -2.31779669675624, -7.53533046979752E-13, 4.81337131452891, -2.23286270422356E+21, -1.18746004987383E-05, 6.46412934136496E-03, -4.10588536330937E-10, 4.22739537057241E+19, 3.13698180473812E-13, 1.6439533434504E-24, -3.39823323754373E-06, -1.35268639905021E-02, -7.23252514211625E-15, 1.84386437538366E-09, -4.63959533752385E-02, -99226310037675, 6.88169154439335E-17, -2.22620998452197E-11, -5.40843018624083E-08, 3.45570606200257E-03, 42227580030.4086, -1.26974478770487E-15, 9.27237985153679E-10, 6.12670812016489E-14, -7.22693924063497E-12, -3.83669502636822E-04, 3.74684572410204E-04, -93197.6897511086, -2.47690616026922E-02, 65.8110546759474};

//Iteration Constants R3j

static const int _I_v_T_P_R3j[29] = {0, 0, 0, 1, 1, 1, 2, 2, 3, 4, 4, 5, 5, 5, 6, 10, 12, 12, 14, 14, 14, 16, 18, 20, 20, 24, 24, 28, 28};
static const int _J_v_T_P_R3j[29] = {-1, 0, 1, -2, -1, 1, -1, 1, -2, -2, 2, -3, -2, 0, 3, -6, -8, -3, -10, -8, -5, -10, -12, -12, -10, -12, -6, -12, -5};
static const double _n_v_T_P_R3j[29] = {-1.1137131739554E-04, 1.00342892423685, 5.30615581928979, 1.79058760078792E-06, -7.28541958464774E-04, -18.7576133371704, 1.99060874071849E-03, 24.357475537729, -1.77040785499444E-04, -2.5968038522713E-03, -198.704578406823, 7.38627790224287E-05, -2.36264692844138E-03, -1.61023121314333, 6223.22971786473, -9.60754116701669E-09, -5.10572269720488E-11, 7.67373781404211E-03, 6.63855469485254E-15, -7.17590735526745E-10, 1.46564542926508E-05, 3.09029474277013E-12, -4.64216300971708E-16, -3.90499637961161E-14, -2.36716126781431E-10, 4.54652854268717E-12, -4.22271787482497E-03, 2.83911742354706E-11, 2.70929002720228};

//Iteration Constants R3k

static const int _I_v_T_P_R3k[34] = {-2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 5, 5, 5, 6, 6, 6, 6, 8, 10, 12};
static const int _J_v_T_P_R3k[34] = {10, 12, -5, 6, -12, -6, -2, -1, 0, 1, 2, 3, 14, -3, -2, 0, 1, 2, -8, -6, -3, -2, 0, 4, -12, -6, -3, -12, -10, -8, -5, -12, -12, -10};
static const double _n_v_T_P_R3k[34] = {-401215699.576099, 48450147831.8406, 3.94721471363678E-15, 37262.9967374147, -3.69794374168666E-30, -3.80436407012452E-15, 4.75361629970233E-07, -8.79148916140706E-04, 0.844317863844331, 12.24331626566, -104.529634830279, 589.702771277429, -29102685116444.4, 1.7034307284185E-06, -2.77617606975748E-04, -3.44709605486686, 22.1333862447095, -194.646110037079, 8.08354639772825E-16, -1.8084520914547E-11, -6.96664158132412E-06, -1.81057560300994E-03, 2.55830298579027, 3289.13873658481, -1.73270241249904E-19, -6.61876792558034E-07, -3.9568892342125E-03, 6.04203299819132E-18, -4.00879935920517E-14, 1.60751107464958E-09, 3.83719409025556E-05, -6.49565446702457E-15, -1.49095328506E-12, 5.41449377329581E-09};

//Iteration Constants R3l

static const int _I_v_T_P_R3l[43] = {-12, -12, -12, -12, -12, -10, -10, -8, -8, -8, -8, -8, -8, -8, -6, -5, -5, -4, -4, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 2, 4, 5, 5, 6, 10, 10, 14};
static const int _J_v_T_P_R3l[43] = {14, 16, 18, 20, 22, 14, 24, 6, 10, 12, 14, 18, 24, 36, 8, 4, 5, 7, 16, 1, 3, 18, 20, 2, 3, 10, 0, 1, 3, 0, 1, 2, 12, 0, 16, 1, 0, 0, 1, 14, 4, 12, 10};
static const double _n_v_T_P_R3l[43] = {2607020586.47537, -188277213604704, 5.54923870289667E+18, -7.58966946387758E+22, 4.13865186848908E+26, -815038000738.06, -3.81458260489955E+32, -1.23239564600519E-02, 22609563.1437174, -495017809506.72, 5.29482996422863E+15, -4.44359478746295E+22, 5.21635864527315E+34, -4.87095672740742E+54, -714430.209937547, 0.127868634615495, -10.0752127917598, 7774514.3796099, -1.08105480796471E+24, -3.57578581169659E-06, -2.12857169423484, 2.70706111085238E+29, -6.95953622348829E+32, 0.11060902747228, 72.1559163361354, -306367307532219, 2.6583961888553E-05, 2.53392392889754E-02, -214.443041836579, 0.937846601489667, 2.231840431017, 33.8401222509191, 4.94237237179718E+20, -0.198068404154428, -1.4141534988114E+30, -99.3862421613651, 125.070534142731, -996.473529004439, 47313.7909872765, 1.16662121219322E+32, -3.15874976271533E+15, -4.45703369196945E+32, 6.42794932373694E+32};

//Iteration Constants R3m

static const int _I_v_T_P_R3m[40] = {0, 3, 8, 20, 1, 3, 4, 5, 1, 6, 2, 4, 14, 2, 5, 3, 0, 1, 1, 1, 28, 2, 16, 0, 5, 0, 3, 4, 12, 16, 1, 8, 14, 0, 2, 3, 4, 8, 14, 24};
static const int _J_v_T_P_R3m[40] = {0, 0, 0, 2, 5, 5, 5, 5, 6, 6, 7, 8, 8, 10, 10, 12, 14, 14, 18, 20, 20, 22, 22, 24, 24, 28, 28, 28, 28, 28, 32, 32, 32, 36, 36, 36, 36, 36, 36, 36};
static const double _n_v_T_P_R3m[40] = {0.811384363481847, -5681.99310990094, -17865719817.2556, 7.95537657613427E+31, -81456.8209346872, -65977456.7602874, -15286114865.9302, -560165667510.446, 458384.828593949, -38575400038384.8, 45373580.0004273, 939454935735.563, 2.66572856432938E+27, -5475783138.99097, 200725701112386, 1850072455632.39, 185135446.828337, -170451090076.385, 157890366037614, -2.02530509748774E+15, 3.6819392618357E+59, 1.70215539458936E+17, 6.39234909918741E+41, -821698160721956, -7.95260241872306E+23, 2.3341586947851E+17, -6.00079934586803E+22, 5.94584382273384E+24, 1.89461279349492E+39, -8.10093428842645E+45, 1.88813911076809E+21, 1.11052244098768E+35, 2.91133958602503E+45, -3.2942192395146E+21, -1.37570282536696E+25, 1.81508996303902E+27, -3.46865122768353E+29, -2.1196114877426E+37, -1.28617899887675E+48, 4.79817895699239E+64};

//Iteration Constants R3n

static const int _I_v_T_P_R3n[39] = {0, 3, 4, 6, 7, 10, 12, 14, 18, 0, 3, 5, 6, 8, 12, 0, 3, 7, 12, 2, 3, 4, 2, 4, 7, 4, 3, 5, 6, 0, 0, 3, 1, 0, 1, 0, 1, 0, 1};
static const int _J_v_T_P_R3n[39] = {-12, -12, -12, -12, -12, -12, -12, -12, -12, -10, -10, -10, -10, -10, -10, -8, -8, -8, -8, -6, -6, -6, -5, -5, -5, -4, -3, -3, -3, -2, -1, -1, 0, 1, 1, 2, 4, 5, 6};
static const double _n_v_T_P_R3n[39] = {2.80967799943151E-39, 6.14869006573609E-31, 5.82238667048942E-28, 3.90628369238462E-23, 8.21445758255119E-21, 4.02137961842776E-15, 6.51718171878301E-13, -2.11773355803058E-08, 2.64953354380072E-03, -1.35031446451331E-32, -6.07246643970893E-24, -4.02352115234494E-19, -7.44938506925544E-17, 1.89917206526237E-13, 3.64975183508473E-06, 1.77274872361946E-26, -3.34952758812999E-19, -4.21537726098389E-09, -3.91048167929649E-02, 5.41276911564176E-14, 7.05412100773699E-12, 2.58585887897486E-09, -4.93111362030162E-11, -1.58649699894543E-06, -0.5250374278861, 2.20019901729615E-03, -6.43064132636925E-03, 62.9154149015048, 135.147318617061, 2.40560808321713E-07, -8.90763306701305E-04, -4402.09599407714, -302.807107747776, 1591.58748314599, 232534.272709876, -792681.2071326, -86987136466.2769, 354542769185.671, 400849240129329};

//Iteration Constants R3o

static const int _I_v_T_P_R3o[24] = {0, 0, 0, 2, 3, 4, 4, 4, 4, 4, 5, 5, 6, 7, 8, 8, 8, 10, 10, 14, 14, 20, 20, 24};
static const int _J_v_T_P_R3o[24] = {-12, -4, -1, -1, -10, -12, -8, -5, -4, -1, -4, -3, -8, -12, -10, -8, -4, -12, -8, -12, -8, -12, -10, -12};
static const double _n_v_T_P_R3o[24] = {1.28746023979718E-35, -7.35234770382342E-12, 2.8907869214915E-03, 0.244482731907223, 1.41733492030985E-24, -3.54533853059476E-29, -5.94539202901431E-18, -5.85188401782779E-09, 2.01377325411803E-06, 1.38647388209306, -1.73959365084772E-05, 1.37680878349369E-03, 8.14897605805513E-15, 4.25596631351839E-26, -3.87449113787755E-18, 1.3981474793024E-13, -1.71849638951521E-03, 6.41890529513296E-22, 1.18960578072018E-11, -1.55282762571611E-18, 2.33907907347507E-08, -1.74093247766213E-13, 3.77682649089149E-09, -5.16720236575302E-11};

//Iteration Constants R3p

static const int _I_v_T_P_R3p[27] = {0, 0, 0, 0, 1, 2, 3, 3, 4, 6, 7, 7, 8, 10, 12, 12, 12, 14, 14, 14, 16, 18, 20, 22, 24, 24, 36};
static const int _J_v_T_P_R3p[27] = {-1, 0, 1, 2, 1, -1, -3, 0, -2, -2, -5, -4, -2, -3, -12, -6, -5, -10, -8, -3, -8, -8, -10, -10, -12, -8, -12};
static const double _n_v_T_P_R3p[27] = {-9.82825342010366E-05, 1.05145700850612, 116.033094095084, 3246.64750281543, -1235.92348610137, -5.61403450013495E-02, 8.56677401640869E-08, 236.313425393924, 9.72503292350109E-03, -1.03001994531927, -1.49653706199162E-09, -2.15743778861592E-05, -8.34452198291445, 0.586602660564988, 3.43480022104968E-26, 8.16256095947021E-06, 2.94985697916798E-03, 7.11730466276584E-17, 4.00954763806941E-10, 10.7766027032853, -4.09449599138182E-07, -7.29121307758902E-06, 6.77107970938909E-09, 6.02745973022975E-08, -3.82323011855257E-11, 1.79946628317437E-03, -3.45042834640005E-04};

//Iteration Constants R3q

static const int _I_v_T_P_R3q[24] = {-12, -12, -10, -10, -10, -10, -8, -6, -5, -5, -4, -4, -3, -2, -2, -2, -2, -1, -1, -1, 0, 1, 1, 1};
static const int _J_v_T_P_R3q[24] = {10, 12, 6, 7, 8, 10, 8, 6, 2, 5, 3, 4, 3, 0, 1, 2, 4, 0, 1, 2, 0, 0, 1, 3};
static const double _n_v_T_P_R3q[24] = {-82043.384325995, 47327151846.1586, -8.05950021005413E-02, 32.860002543598, -3566.1702998249, -1729857814.33335, 35176923.2729192, -775489.259985144, 7.10346691966018E-05, 99349.9883820274, -0.64209417190457, -6128.42816820083, 232.808472983776, -1.42808220416837E-05, -6.43596060678456E-03, -4.28577227475614, 2256.89939161918, 1.0035565172151E-03, 0.333491455143516, 1.09697576888873, 0.961917379376452, -8.38165632204598E-02, 2.47795908411492, -3191.14969006533};

//Iteration Constants R3r

static const int _I_v_T_P_R3r[27] = {-8, -8, -3, -3, -3, -3, -3, 0, 0, 0, 0, 3, 3, 8, 8, 8, 8, 10, 10, 10, 10, 10, 10, 10, 10, 12, 14};
static const int _J_v_T_P_R3r[27] = {6, 14, -3, 3, 4, 5, 8, -1, 0, 1, 5, -6, -2, -12, -10, -8, -5, -12, -10, -8, -6, -5, -4, -3, -2, -12, -12};
static const double _n_v_T_P_R3r[27] = {1.44165955660863E-03, -7014385996282.58, -8.30946716459219E-17, 0.261975135368109, 393.097214706245, -10433.4030654021, 490112654.154211, -1.47104222772069E-04, 1.03602748043408, 3.05308890065089, -3997452.76971264, 5.6923371959375E-12, -4.64923504407778E-02, -5.35400396512906E-18, 3.99988795693162E-13, -5.36479560201811E-07, 1.59536722411202E-02, 2.70303248860217E-15, 2.44247453858506E-08, -9.83430636716454E-06, 6.63513144224454E-02, -9.93456957845006, 546.491323528491, -14336.5406393758, 150764.974125511, -3.37209709340105E-10, 3.77501980025469E-09};

//Iteration Constants R3s

static const int _I_v_T_P_R3s[29] = {-12, -12, -10, -8, -6, -5, -5, -4, -4, -3, -3, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 3, 3, 3, 4, 4, 4, 5, 14};
static const int _J_v_T_P_R3s[29] = {20, 24, 22, 14, 36, 8, 16, 6, 32, 3, 8, 4, 1, 2, 3, 0, 1, 4, 28, 0, 32, 0, 1, 2, 3, 18, 24, 4, 24};
static const double _n_v_T_P_R3s[29] = {-5.32466612140254E+22, 1.00415480000824E+31, -1.91540001821367E+29, 1.05618377808847E+16, 2.02281884477061E+58, 88458547.2596134, 1.66540181638363E+22, -313563.197669111, -1.85662327545324E+53, -6.24942093918942E-02, -5041607241.3259, 18751.4491833092, 1.21399979993217E-03, 1.88317043049455, -1670.7350396206, 0.965961650599775, 2.94885696802488, -65391.5627346115, 6.04012200163444E+49, -0.198339358557937, -1.75984090163501E+57, 3.56314881403987, -575.991255144384, 45621.3415338071, -10917404.4987829, 4.37796099975134E+33, -6.16552611135792E+45, 1935687689.17797, 9.50898170425042E+53};

//Iteration Constants R3t

static const int _I_v_T_P_R3t[33] = {0, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3, 4, 4, 7, 7, 7, 7, 7, 10, 10, 10, 10, 10, 18, 20, 22, 22, 24, 28, 32, 32, 32, 36};
static const int _J_v_T_P_R3t[33] = {0, 1, 4, 12, 0, 10, 0, 6, 14, 3, 8, 0, 10, 3, 4, 7, 20, 36, 10, 12, 14, 16, 22, 18, 32, 22, 36, 24, 28, 22, 32, 36, 36};
static const double _n_v_T_P_R3t[33] = {1.55287249586268, 6.64235115009031, -2893.6623672721, -3859232023098.48, -2.91002915783761, -829088246858.083, 1.76814899675218, -534686695.713469, 1.60464608687834E+17, 196435.366560186, 1566374275417.29, -1.78154560260006, -2.29746237623692E+15, 38565900.1648006, 1105544467.90543, -67707383068734.9, -3.27910592086523E+30, -3.41552040860644E+50, -5.27251339709047E+20, 2.45375640937055E+23, -1.68776617209269E+26, 3.58958955867578E+28, -6.56475280339411E+35, 3.55286045512301E+38, 5.6902145441327E+57, -7.00584546433113E+47, -7.05772623326374E+64, 1.66861176200148E+52, -3.00475129680486E+60, -6.68481295196808E+50, 4.28432338620678E+68, -4.44227367758304E+71, -2.81396013562745E+76};

//Generic backward equation for omega(pi,theta)

static double _omega_pi_theta(double press, double temp, double pStar, double tStar,
	double a, double b, double c, double d, double e, const int* IArr, const int* JArr,
	const double* nArr, int arrSize)
{
	double pi = press / pStar;
	double theta = temp / tStar;
	double sum = 0;
	for (int i = 0; i < arrSize; i++)
	{
		double calc = nArr[i] *
			   		  pow( pi - a , c * IArr[i]) *
			   		  pow( theta - b, d * JArr[i]);
	    sum = calc + sum;
	}
	sum = pow(sum, e);
	return sum;
}

//Backwards equation for v(P,T) for subregion a

double _va_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 0.0024;
	//units = kPa
	double pStar = 100 * 1000;
	//units = K
	double tStar = 760;

	double a = 0.085;
	double b = 0.817;
	double c = 1;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3a);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e, _I_v_T_P_R3a,
		_J_v_T_P_R3a, _n_v_T_P_R3a, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion b

double _vb_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 0.0041;
	//units = kPa
	double pStar = 100 * 1000;
	//units = K
	double tStar = 860;

	double a = 0.280;
	double b = 0.779;
	double c = 1;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3b);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e, _I_v_T_P_R3b,
		_J_v_T_P_R3b, _n_v_T_P_R3b, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion c

double _vc_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 0.0022;
	//units = kPa
	double pStar = 40 * 1000;
	//units = K
	double tStar = 690;

	double a = 0.259;
	double b = 0.903;
	double c = 1;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3c);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3c, _J_v_T_P_R3c, _n_v_T_P_R3c, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion d

double _vd_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 0.0029;
	//units = kPa
	double pStar = 40 * 1000;
	//units = K
	double tStar = 690;

	double a = 0.559;
	double b = 0.939;
	double c = 1;
	double d = 1;
	double e = 4;

	int N = ITERCONST(_I_v_T_P_R3d);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3d, _J_v_T_P_R3d, _n_v_T_P_R3d, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion e

double _ve_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 3.2E-03;
	//units = kPa
	double pStar = 40 * 1000;
	//units = K
	double tStar = 710;

	double a = 0.587;
	double b = 0.918;
	double c = 1;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3e);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3e, _J_v_T_P_R3e, _n_v_T_P_R3e, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion f

double _vf_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 6.4E-03;
	//units = kPa
	double pStar = 40 * 1000;
	//units = K
	double tStar = 730;

	double a = 0.587;
	double b = 0.891;
	double c = 0.5;
	double d = 1;
	double e = 4;

	int N = ITERCONST(_I_v_T_P_R3f);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3f, _J_v_T_P_R3f, _n_v_T_P_R3f, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion g

double _vg_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 2.7E-03;
	//units = kPa
	double pStar = 25 * 1000;
	//units = K
	double tStar = 660;

	double a = 0.872;
	double b = 0.971;
	double c = 1;
	double d = 1;
	double e = 4;

	int N = ITERCONST(_I_v_T_P_R3g);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3g, _J_v_T_P_R3g, _n_v_T_P_R3g, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion h

double _vh_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 32.0E-04;
	//units = kPa
	double pStar = 25 * 1000;
	//units = K
	double tStar = 660;

	double a = 0.898;
	double b = 0.983;
	double c = 1;
	double d = 1;
	double e = 4;

	int N = ITERCONST(_I_v_T_P_R3h);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3h, _J_v_T_P_R3h, _n_v_T_P_R3h, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion i

double _vi_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 41.0E-04;
	//units = kPa
	double pStar = 25 * 1000;
	//units = K
	double tStar = 660;

	double a = 0.910;
	double b = 0.984;
	double c = 0.5;
	double d = 1;
	double e = 4;

	int N = ITERCONST(_I_v_T_P_R3i);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3i, _J_v_T_P_R3i, _n_v_T_P_R3i, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion j

double _vj_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 54.0E-04;
	//units = kPa
	double pStar = 25 * 1000;
	//units = K
	double tStar = 670;

	double a = 0.875;
	double b = 0.964;
	double c = 0.5;
	double d = 1;
	double e = 4;

	int N = ITERCONST(_I_v_T_P_R3j);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3j, _J_v_T_P_R3j, _n_v_T_P_R3j, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion k

double _vk_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 77.0E-04;
	//units = kPa
	double pStar = 25 * 1000;
	//units = K
	double tStar = 680;

	double a = 0.802;
	double b = 0.935;
	double c = 1;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3k);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3k, _J_v_T_P_R3k, _n_v_T_P_R3k, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion l

double _vl_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 26.0E-04;
	//units = kPa
	double pStar = 24 * 1000;
	//units = K
	double tStar = 650;

	double a = 0.908;
	double b = 0.989;
	double c = 1;
	double d = 1;
	double e = 4;

	int N = ITERCONST(_I_v_T_P_R3l);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3l, _J_v_T_P_R3l, _n_v_T_P_R3l, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion m

double _vm_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 28.0E-04;
	//units = kPa
	double pStar = 23 * 1000;
	//units = K
	double tStar = 650;

	double a = 1.00;
	double b = 0.997;
	double c = 1;
	double d = 0.25;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3m);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3m, _J_v_T_P_R3m, _n_v_T_P_R3m, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion n

double _vn_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 31.0E-04;
	//units = kPa
	double pStar = 23 * 1000;
	//units = K
	double tStar = 650;

	double a = 0.976;
	double b = 0.997;
	double c = 1;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3n);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3n, _J_v_T_P_R3n, _n_v_T_P_R3n, N);

	return vStar * exp(omega);
}

//Backwards equation for v(P,T) for subregion o

double _vo_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 34.0E-04;
	//units = kPa
	double pStar = 23 * 1000;
	//units = K
	double tStar = 650;

	double a = 0.974;
	double b = 0.996;
	double c = 0.5;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3o);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3o, _J_v_T_P_R3o, _n_v_T_P_R3o, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion p

double _vp_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 41.0E-04;
	//units = kPa
	double pStar = 23 * 1000;
	//units = K
	double tStar = 650;

	double a = 0.972;
	double b = 0.997;
	double c = 0.5;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3p);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3p, _J_v_T_P_R3p, _n_v_T_P_R3p, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion q

double _vq_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 22.0E-04;
	//units = kPa
	double pStar = 23 * 1000;
	//units = K
	double tStar = 650;

	double a = 0.848;
	double b = 0.983;
	double c = 1;
	double d = 1;
	double e = 4;

	int N = ITERCONST(_I_v_T_P_R3q);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3q, _J_v_T_P_R3q, _n_v_T_P_R3q, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion r

double _vr_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 54.0E-04;
	//units = kPa
	double pStar = 23 * 1000;
	//units = K
	double tStar = 650;

	double a = 0.874;
	double b = 0.982;
	double c = 1;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3r);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3r, _J_v_T_P_R3r, _n_v_T_P_R3r, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion s

double _vs_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 22.0E-04;
	//units = kPa
	double pStar = 21 * 1000;
	//units = K
	double tStar = 640;

	double a = 0.886;
	double b = 0.990;
	double c = 1;
	double d = 1;
	double e = 4;

	int N = ITERCONST(_I_v_T_P_R3s);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3s, _J_v_T_P_R3s, _n_v_T_P_R3s, N);

	return vStar * omega;
}

//Backwards equation for v(P,T) for subregion t

double _vt_P_T(double press, double temp)
{
	//units = m^3/kg
	double vStar = 88.0E-04;
	//units = kPa
	double pStar = 20 * 1000;
	//units = K
	double tStar = 650;

	double a = 0.803;
	double b = 1.02;
	double c = 1;
	double d = 1;
	double e = 1;

	int N = ITERCONST(_I_v_T_P_R3t);

	double omega = _omega_pi_theta(press, temp, pStar, tStar, a, b, c, d, e,
		_I_v_T_P_R3t, _J_v_T_P_R3t, _n_v_T_P_R3t, N);

	return vStar * omega;
}
