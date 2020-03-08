#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "ReferenceConstants.h"
#endif

//Basic Ideal Gibbs Free Energy Functions
static double _gibbs_ideal_R2(double pi, double tau)
{
	const int _J0_R2[10] = { 0, 1, -5, -4, -3, -2, -1, 2, 3 };
	const double _n0_R2[10] = { -9.6927686500217, 10.086655968018, -0.005608791128302, 0.071452738081455, -0.40710498223928, 1.4240819171444, -4.383951131945, -0.28408632460772, 0.021268463753307 };
	const int N = 10;

	double sum = log(pi);
	for (int i = 0; i < N; i++)
	{
		sum = sum + _n0_R2[i] * pow(tau, _J0_R2[i]);
	}

	return sum;
}
static double _gibbs_ideal_R2_dpi(double pi)
{
	return 1 / pi;
}
static double _gibbs_ideal_R2_ddpi(double pi)
{
	return -1 / pow(pi, 2);
}
static double _gibbs_ideal_R2_dtau(double tau)
{
	const int _J0_R2[10] = { 0, 1, -5, -4, -3, -2, -1, 2, 3 };
	const double _n0_R2[10] = { -9.6927686500217, 10.086655968018, -0.005608791128302, 0.071452738081455, -0.40710498223928, 1.4240819171444, -4.383951131945, -0.28408632460772, 0.021268463753307 };
	const int N = 10;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _n0_R2[i] * _J0_R2[i] * pow(tau, _J0_R2[i] - 1);
	}

	return sum;
}
static double _gibbs_ideal_R2_ddtau(double tau)
{
	const int _J0_R2[10] = { 0, 1, -5, -4, -3, -2, -1, 2, 3 };
	const double _n0_R2[10] = { -9.6927686500217, 10.086655968018, -0.005608791128302, 0.071452738081455, -0.40710498223928, 1.4240819171444, -4.383951131945, -0.28408632460772, 0.021268463753307 };
	const int N = 10;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _n0_R2[i] * _J0_R2[i] * (_J0_R2[i] - 1) * pow(tau, _J0_R2[i] - 2);
	}

	return sum;
}
static double _gibbs_ideal_R2_dpi_dtau()
{
	return 0;
}

//Basic Residual Gibbs Free Energy Functions

static double _gibbs_res_R2(double pi, double tau)
{
	const int _Ir_R2[44] = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 7, 7, 7, 8, 8, 9, 10, 10, 10, 16, 16, 18, 20, 20, 20, 21, 22, 23, 24, 24, 24 };
	const int _Jr_R2[44] = { 0, 1, 2, 3, 6, 1, 2, 4, 7, 36, 0, 1, 3, 6, 35, 1, 2, 3, 7, 3, 16, 35, 0, 11, 25, 8, 36, 13, 4, 10, 14, 29, 50, 57, 20, 35, 48, 21, 53, 39, 26, 40, 58 };
	const double _nr_R2[44] = { -1.7731742473213E-03, -0.017834862292358, -0.045996013696365, -0.057581259083432, -0.05032527872793, -3.3032641670203E-05, -1.8948987516315E-04, -3.9392777243355E-03, -0.043797295650573, -2.6674547914087E-05, 2.0481737692309E-08, 4.3870667284435E-07, -3.227767723857E-05, -1.5033924542148E-03, -0.040668253562649, -7.8847309559367E-10, 1.2790717852285E-08, 4.8225372718507E-07, 2.2922076337661E-06, -1.6714766451061E-11, -2.1171472321355E-03, -23.895741934104, -5.905956432427E-18, -1.2621808899101E-06, -0.038946842435739, 1.1256211360459E-11, -8.2311340897998, 1.9809712802088E-08, 1.0406965210174E-19, -1.0234747095929E-13, -1.0018179379511E-09, -8.0882908646985E-11, 0.10693031879409, -0.33662250574171, 8.9185845355421E-25, 3.0629316876232E-13, -4.2002467698208E-06, -5.9056029685639E-26, 3.7826947613457E-06, -1.2768608934681E-15, 7.3087610595061E-29, 5.5414715350778E-17, -9.436970724121E-07 };
	const int N = 44;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _nr_R2[i] * pow(pi, _Ir_R2[i]) * pow(tau - 0.5, _Jr_R2[i]);
	}

	return sum;
}
static double _gibbs_res_R2_dpi(double pi, double tau)
{
	const int _Ir_R2[44] = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 7, 7, 7, 8, 8, 9, 10, 10, 10, 16, 16, 18, 20, 20, 20, 21, 22, 23, 24, 24, 24 };
	const int _Jr_R2[44] = { 0, 1, 2, 3, 6, 1, 2, 4, 7, 36, 0, 1, 3, 6, 35, 1, 2, 3, 7, 3, 16, 35, 0, 11, 25, 8, 36, 13, 4, 10, 14, 29, 50, 57, 20, 35, 48, 21, 53, 39, 26, 40, 58 };
	const double _nr_R2[44] = { -1.7731742473213E-03, -0.017834862292358, -0.045996013696365, -0.057581259083432, -0.05032527872793, -3.3032641670203E-05, -1.8948987516315E-04, -3.9392777243355E-03, -0.043797295650573, -2.6674547914087E-05, 2.0481737692309E-08, 4.3870667284435E-07, -3.227767723857E-05, -1.5033924542148E-03, -0.040668253562649, -7.8847309559367E-10, 1.2790717852285E-08, 4.8225372718507E-07, 2.2922076337661E-06, -1.6714766451061E-11, -2.1171472321355E-03, -23.895741934104, -5.905956432427E-18, -1.2621808899101E-06, -0.038946842435739, 1.1256211360459E-11, -8.2311340897998, 1.9809712802088E-08, 1.0406965210174E-19, -1.0234747095929E-13, -1.0018179379511E-09, -8.0882908646985E-11, 0.10693031879409, -0.33662250574171, 8.9185845355421E-25, 3.0629316876232E-13, -4.2002467698208E-06, -5.9056029685639E-26, 3.7826947613457E-06, -1.2768608934681E-15, 7.3087610595061E-29, 5.5414715350778E-17, -9.436970724121E-07 };
	const int N = 44;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _nr_R2[i] * _Ir_R2[i] * pow(pi, _Ir_R2[i] - 1) * pow(tau - 0.5, _Jr_R2[i]);
	}

	return sum;
}
static double _gibbs_res_R2_ddpi(double pi, double tau)
{
	const int _Ir_R2[44] = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 7, 7, 7, 8, 8, 9, 10, 10, 10, 16, 16, 18, 20, 20, 20, 21, 22, 23, 24, 24, 24 };
	const int _Jr_R2[44] = { 0, 1, 2, 3, 6, 1, 2, 4, 7, 36, 0, 1, 3, 6, 35, 1, 2, 3, 7, 3, 16, 35, 0, 11, 25, 8, 36, 13, 4, 10, 14, 29, 50, 57, 20, 35, 48, 21, 53, 39, 26, 40, 58 };
	const double _nr_R2[44] = { -1.7731742473213E-03, -0.017834862292358, -0.045996013696365, -0.057581259083432, -0.05032527872793, -3.3032641670203E-05, -1.8948987516315E-04, -3.9392777243355E-03, -0.043797295650573, -2.6674547914087E-05, 2.0481737692309E-08, 4.3870667284435E-07, -3.227767723857E-05, -1.5033924542148E-03, -0.040668253562649, -7.8847309559367E-10, 1.2790717852285E-08, 4.8225372718507E-07, 2.2922076337661E-06, -1.6714766451061E-11, -2.1171472321355E-03, -23.895741934104, -5.905956432427E-18, -1.2621808899101E-06, -0.038946842435739, 1.1256211360459E-11, -8.2311340897998, 1.9809712802088E-08, 1.0406965210174E-19, -1.0234747095929E-13, -1.0018179379511E-09, -8.0882908646985E-11, 0.10693031879409, -0.33662250574171, 8.9185845355421E-25, 3.0629316876232E-13, -4.2002467698208E-06, -5.9056029685639E-26, 3.7826947613457E-06, -1.2768608934681E-15, 7.3087610595061E-29, 5.5414715350778E-17, -9.436970724121E-07 };
	const int N = 44;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _nr_R2[i] * _Ir_R2[i] * (_Ir_R2[i] - 1) * pow(pi, _Ir_R2[i] - 2) * pow(tau - 0.5, _Jr_R2[i]);
	}

	return sum;
}
static double _gibbs_res_R2_dtau(double pi, double tau)
{
	const int _Ir_R2[44] = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 7, 7, 7, 8, 8, 9, 10, 10, 10, 16, 16, 18, 20, 20, 20, 21, 22, 23, 24, 24, 24 };
	const int _Jr_R2[44] = { 0, 1, 2, 3, 6, 1, 2, 4, 7, 36, 0, 1, 3, 6, 35, 1, 2, 3, 7, 3, 16, 35, 0, 11, 25, 8, 36, 13, 4, 10, 14, 29, 50, 57, 20, 35, 48, 21, 53, 39, 26, 40, 58 };
	const double _nr_R2[44] = { -1.7731742473213E-03, -0.017834862292358, -0.045996013696365, -0.057581259083432, -0.05032527872793, -3.3032641670203E-05, -1.8948987516315E-04, -3.9392777243355E-03, -0.043797295650573, -2.6674547914087E-05, 2.0481737692309E-08, 4.3870667284435E-07, -3.227767723857E-05, -1.5033924542148E-03, -0.040668253562649, -7.8847309559367E-10, 1.2790717852285E-08, 4.8225372718507E-07, 2.2922076337661E-06, -1.6714766451061E-11, -2.1171472321355E-03, -23.895741934104, -5.905956432427E-18, -1.2621808899101E-06, -0.038946842435739, 1.1256211360459E-11, -8.2311340897998, 1.9809712802088E-08, 1.0406965210174E-19, -1.0234747095929E-13, -1.0018179379511E-09, -8.0882908646985E-11, 0.10693031879409, -0.33662250574171, 8.9185845355421E-25, 3.0629316876232E-13, -4.2002467698208E-06, -5.9056029685639E-26, 3.7826947613457E-06, -1.2768608934681E-15, 7.3087610595061E-29, 5.5414715350778E-17, -9.436970724121E-07 };
	const int N = 44;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _nr_R2[i] * _Jr_R2[i] * pow(pi, _Ir_R2[i]) * pow(tau - 0.5, _Jr_R2[i] - 1);
	}

	return sum;
}
static double _gibbs_res_R2_ddtau(double pi, double tau)
{
	const int _Ir_R2[44] = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 7, 7, 7, 8, 8, 9, 10, 10, 10, 16, 16, 18, 20, 20, 20, 21, 22, 23, 24, 24, 24 };
	const int _Jr_R2[44] = { 0, 1, 2, 3, 6, 1, 2, 4, 7, 36, 0, 1, 3, 6, 35, 1, 2, 3, 7, 3, 16, 35, 0, 11, 25, 8, 36, 13, 4, 10, 14, 29, 50, 57, 20, 35, 48, 21, 53, 39, 26, 40, 58 };
	const double _nr_R2[44] = { -1.7731742473213E-03, -0.017834862292358, -0.045996013696365, -0.057581259083432, -0.05032527872793, -3.3032641670203E-05, -1.8948987516315E-04, -3.9392777243355E-03, -0.043797295650573, -2.6674547914087E-05, 2.0481737692309E-08, 4.3870667284435E-07, -3.227767723857E-05, -1.5033924542148E-03, -0.040668253562649, -7.8847309559367E-10, 1.2790717852285E-08, 4.8225372718507E-07, 2.2922076337661E-06, -1.6714766451061E-11, -2.1171472321355E-03, -23.895741934104, -5.905956432427E-18, -1.2621808899101E-06, -0.038946842435739, 1.1256211360459E-11, -8.2311340897998, 1.9809712802088E-08, 1.0406965210174E-19, -1.0234747095929E-13, -1.0018179379511E-09, -8.0882908646985E-11, 0.10693031879409, -0.33662250574171, 8.9185845355421E-25, 3.0629316876232E-13, -4.2002467698208E-06, -5.9056029685639E-26, 3.7826947613457E-06, -1.2768608934681E-15, 7.3087610595061E-29, 5.5414715350778E-17, -9.436970724121E-07 };
	const int N = 44;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _nr_R2[i] * _Jr_R2[i] * (_Jr_R2[i] - 1) * pow(pi, _Ir_R2[i]) * pow(tau - 0.5, _Jr_R2[i] - 2);
	}

	return sum;
}
static double _gibbs_res_R2_dpi_dtau(double pi, double tau)
{
	const int _Ir_R2[44] = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 7, 7, 7, 8, 8, 9, 10, 10, 10, 16, 16, 18, 20, 20, 20, 21, 22, 23, 24, 24, 24 };
	const int _Jr_R2[44] = { 0, 1, 2, 3, 6, 1, 2, 4, 7, 36, 0, 1, 3, 6, 35, 1, 2, 3, 7, 3, 16, 35, 0, 11, 25, 8, 36, 13, 4, 10, 14, 29, 50, 57, 20, 35, 48, 21, 53, 39, 26, 40, 58 };
	const double _nr_R2[44] = { -1.7731742473213E-03, -0.017834862292358, -0.045996013696365, -0.057581259083432, -0.05032527872793, -3.3032641670203E-05, -1.8948987516315E-04, -3.9392777243355E-03, -0.043797295650573, -2.6674547914087E-05, 2.0481737692309E-08, 4.3870667284435E-07, -3.227767723857E-05, -1.5033924542148E-03, -0.040668253562649, -7.8847309559367E-10, 1.2790717852285E-08, 4.8225372718507E-07, 2.2922076337661E-06, -1.6714766451061E-11, -2.1171472321355E-03, -23.895741934104, -5.905956432427E-18, -1.2621808899101E-06, -0.038946842435739, 1.1256211360459E-11, -8.2311340897998, 1.9809712802088E-08, 1.0406965210174E-19, -1.0234747095929E-13, -1.0018179379511E-09, -8.0882908646985E-11, 0.10693031879409, -0.33662250574171, 8.9185845355421E-25, 3.0629316876232E-13, -4.2002467698208E-06, -5.9056029685639E-26, 3.7826947613457E-06, -1.2768608934681E-15, 7.3087610595061E-29, 5.5414715350778E-17, -9.436970724121E-07 };
	const int N = 44;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _nr_R2[i] * _Ir_R2[i] * _Jr_R2[i] * pow(pi, _Ir_R2[i] - 1) * pow(tau - 0.5, _Jr_R2[i] - 1);
	}

	return sum;
}

//Basic Gibbs Free Energy Functions

static double _gibbs_R2(double pi, double tau)
{
	double gibbs_ideal = _gibbs_ideal_R2(pi, tau);
	double gibbs_res = _gibbs_res_R2(pi, tau);

	return gibbs_ideal + gibbs_res;
}
static double _gibbs_R2_dpi(double pi, double tau)
{
	double gibbs_ideal_dpi = _gibbs_ideal_R2_dpi(pi);
	double gibbs_res_dpi = _gibbs_res_R2_dpi(pi, tau);

	return gibbs_ideal_dpi + gibbs_res_dpi;
}
static double _gibbs_R2_ddpi(double pi, double tau)
{
	double gibbs_ideal_ddpi = _gibbs_ideal_R2_ddpi(pi);
	double gibbs_res_ddpi = _gibbs_res_R2_ddpi(pi, tau);

	return gibbs_ideal_ddpi + gibbs_res_ddpi;
}
static double _gibbs_R2_dtau(double pi, double tau)
{
	double gibbs_ideal_dtau = _gibbs_ideal_R2_dtau(tau);
	double gibbs_res_dtau = _gibbs_res_R2_dtau(pi, tau);

	return gibbs_ideal_dtau + gibbs_res_dtau;
}
static double _gibbs_R2_ddtau(double pi, double tau)
{
	double gibbs_ideal_ddtau = _gibbs_ideal_R2_ddtau(tau);
	double gibbs_res_ddtau = _gibbs_res_R2_ddtau(pi, tau);

	return gibbs_ideal_ddtau + gibbs_res_ddtau;
}
static double _gibbs_R2_dpi_dtau(double pi, double tau)
{
	double gibbs_ideal_dpi_dtau = _gibbs_ideal_R2_dpi_dtau();
	double gibbs_res_dpi_dtau = _gibbs_res_R2_dpi_dtau(pi, tau);

	return gibbs_ideal_dpi_dtau + gibbs_res_dpi_dtau;
}

//State Property Functions as a Function of Temperature and Pressure

//specific volume of region 2 as a function of temperature and pressure
double _v_P_T_R2(double inputPress, double inputTemp)
{
	//MPa
	const double pStar = 1;
	//K
	const double tStar = 540;

	double pi = inputPress / pStar;
	double tau = tStar / inputTemp;
	double gibbs_dpi = _gibbs_R2_dpi(pi, tau);

	//divide by 1E+03 for difference in units from R & pressure
	return (R * inputTemp * pi * gibbs_dpi) / inputPress / 1E+03;
}
//specific internal energy of region 2 as a function of temperature and pressure
double _u_P_T_R2(double inputPress, double inputTemp)
{
	//MPa
	const double pStar = 1;
	//K
	const double tStar = 540;

	double pi = inputPress / pStar;
	double tau = tStar / inputTemp;
	double gibbs_dpi = _gibbs_R2_dpi(pi, tau);
	double gibbs_dtau = _gibbs_R2_dtau(pi, tau);

	return R * inputTemp * ((tau * gibbs_dtau) - (pi * gibbs_dpi));
}
//specific entropy of region 2 as a function of temperature and pressure
double _s_P_T_R2(double inputPress, double inputTemp)
{
	//MPa
	const double pStar = 1;
	//K
	const double tStar = 540;

	double pi = inputPress / pStar;
	double tau = tStar / inputTemp;
	double gibbs = _gibbs_R2(pi, tau);
	double gibbs_dtau = _gibbs_R2_dtau(pi, tau);

	return R * ((tau * gibbs_dtau) - gibbs);
}
//specific enthalpy of region 2 as a function of temperature and pressure
double _h_P_T_R2(double inputPress, double inputTemp)
{
	//MPa
	const double pStar = 1;
	//K
	const double tStar = 540;

	double pi = inputPress / pStar;
	double tau = tStar / inputTemp;
	double gibbs_dtau = _gibbs_R2_dtau(pi, tau);

	return R * inputTemp * tau * gibbs_dtau;
}
//specific isobaric heat capacity of region 2 as a function of temperature and pressure
double _cp_P_T_R2(double inputPress, double inputTemp)
{
	//MPa
	const double pStar = 1;
	//K
	const double tStar = 540;

	double pi = inputPress / pStar;
	double tau = tStar / inputTemp;
	double gibbs_ddtau = _gibbs_R2_ddtau(pi, tau);

	return R * (-1) * pow(tau, 2) * gibbs_ddtau;
}
//specific isochoric heat capacity of region 2 as a function of temperature and pressure
double _cv_P_T_R2(double inputPress, double inputTemp)
{
	//MPa
	const double pStar = 1;
	//K
	const double tStar = 540;

	double pi = inputPress / pStar;
	double tau = tStar / inputTemp;
	double gibbs_ddtau = _gibbs_R2_ddtau(pi, tau);
	double gibbs_res_dpi = _gibbs_res_R2_dpi(pi, tau);
	double gibbs_res_ddpi = _gibbs_res_R2_ddpi(pi, tau);
	double gibbs_res_dpi_dtau = _gibbs_res_R2_dpi_dtau(pi, tau);

	double c1 = -1 * pow(tau, 2) * gibbs_ddtau;
	double c2 = 1 + (pi * gibbs_res_dpi) - (pi * tau * gibbs_res_dpi_dtau);
	double c3 = pow(c2, 2);
	double c4 = 1 - (pow(pi, 2) * gibbs_res_ddpi);
	double c5 = c3 / c4;

	return R * (c1 - c5);
}
//speed of sound of region 2 as a function of temperature and pressure
double _w_P_T_R2(double inputPress, double inputTemp)
{
	//convert to J / (kg * K) from kJ / (kg * K)
	double _R = R * 1000;

	//MPa
	const double pStar = 1;
	//K
	const double tStar = 540;

	double pi = inputPress / pStar;
	double tau = tStar / inputTemp;
	double gibbs_ddtau = _gibbs_R2_ddtau(pi, tau);
	double gibbs_res_dpi = _gibbs_res_R2_dpi(pi, tau);
	double gibbs_res_ddpi = _gibbs_res_R2_ddpi(pi, tau);
	double gibbs_res_dpi_dtau = _gibbs_res_R2_dpi_dtau(pi, tau);

	double c1 = 1 + (2 * pi * gibbs_res_dpi) + pow(pi * gibbs_res_dpi, 2);
	double c2 = 1 - (pow(pi, 2) * gibbs_res_ddpi);
	double c3 = 1 + (pi * gibbs_res_dpi) - (tau * pi * gibbs_res_dpi_dtau);
	double c4 = pow(c3, 2);
	double c5 = pow(tau, 2) * gibbs_ddtau;
	double c6 = c4 / c5;
	double c7 = c2 + c6;
	double c8 = c1 / c7;

	return pow(_R * inputTemp * c8, 0.5);
}

//P(h) for the region 2 boundary
static double _P_R2B_T_P_h(double inputEnthalpy)
{
	const double _n_R2B_T_P_h[5] = { 0.90584278514723E+03, -0.67955786399241, 0.12809002730136E-03, 0.26526571908428E+04, 0.45257578905948E+01 };
	//MPa
	const double pStar = 1;
	//kJ / kg
	const double hStar = 1;

	double eta = inputEnthalpy / hStar;

	return pStar * (_n_R2B_T_P_h[0] + (_n_R2B_T_P_h[1] * eta) + (_n_R2B_T_P_h[2] * pow(eta, 2)));
}

//Temperature as a function of pressure and enthalpy for region 2a
static double _T_R2a_P_h(double pi, double eta)
{
	const int _I_R2a_T_P_h[35] = { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 7 };
	const int _J_R2a_T_P_h[35] = { 0, 1, 2, 3, 7, 20, 0, 1, 2, 3, 7, 9, 11, 18, 44, 0, 2, 7, 36, 38, 40, 42, 44, 24, 44, 12, 32, 44, 32, 36, 42, 34, 44, 28 };
	const double _n_R2a_T_P_h[35] = { 1089.8952318288, 849.51654495535, -107.81748091826, 33.153654801263, -7.4232016790248, 11.765048724356, 1.844574935579, -4.1792700549624, 6.2478196935812, -17.344563108114, -200.58176862096, 271.96065473796, -455.11318285818, 3091.9688604755, 252266.40357872, -6.1707422868339E-03, -0.31078046629583, 11.670873077107, 128127984.04046, -985549096.23276, 2822454697.3002, -3594897141.0703, 1722734991.3197, -13551.334240775, 12848734.66465, 1.3865724283226, 235988.32556514, -13105236.545054, 7399.9835474766, -551966.9703006, 3715408.5996233, 19127.72923966, -415351.64835634, -62.459855192507 };
	const int N = 35;
	//K
	const double _tStar_R2a_T_P_h = 1;

	double sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum = sum + _n_R2a_T_P_h[i] * pow(pi, _I_R2a_T_P_h[i]) * pow(eta-2.1, _J_R2a_T_P_h[i]);
	}

	return sum * _tStar_R2a_T_P_h;
}

//Temperature as a function of pressure and enthalpy for region 2b
static double _T_R2b_P_h(double pi, double eta)
{
	const int _I_R2b_T_P_h[39] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7, 7, 9, 9 };
	const int _J_R2b_T_P_h[39] = { 0, 1, 2, 12, 18, 24, 28, 40, 0, 2, 6, 12, 18, 24, 28, 40, 2, 8, 18, 40, 1, 2, 12, 24, 2, 12, 18, 24, 28, 40, 18, 24, 40, 28, 2, 28, 1, 40 };
	const double _n_R2b_T_P_h[39] = { 1489.5041079516, 743.07798314034, -97.708318797837, 2.4742464705674, -0.63281320016026, 1.1385952129658, -0.47811863648625, 8.5208123431544E-03, 0.93747147377932, 3.3593118604916, 3.3809355601454, 0.16844539671904, 0.73875745236695, -0.47128737436186, 0.15020273139707, -0.002176411421975, -0.021810755324761, -0.10829784403677, -0.046333324635812, 7.1280351959551E-05, 1.1032831789999E-04, 1.8955248387902E-04, 3.0891541160537E-03, 1.3555504554949E-03, 2.8640237477456E-07, -1.0779857357512E-05, -7.6462712454814E-05, 1.4052392818316E-05, -3.1083814331434E-05, -1.0302738212103E-06, 2.821728163504E-07, 1.2704902271945E-06, 7.3803353468292E-08, -1.1030139238909E-08, -8.1456365207833E-14, -2.5180545682962E-11, -1.7565233969407E-18, 8.6934156344163E-15 };
	const int N = 39;
	//K
	const double _tStar_R2b_T_P_h = 1;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _n_R2b_T_P_h[i] * pow(pi - 2, _I_R2b_T_P_h[i]) * pow(eta - 2.6, _J_R2b_T_P_h[i]);
	}

	return sum * _tStar_R2b_T_P_h;
}

//Temperature as a function of pressure and enthalpy for region 2c
static double _T_R2c_P_h(double pi, double eta)
{
	const int _I_R2c_T_P_h[24] = { -7, -7, -6, -6, -5, -5, -2, -2, -1, -1, 0, 0, 1, 1, 2, 6, 6, 6, 6, 6, 6, 6, 6 };
	const int _J_R2c_T_P_h[24] = { 0, 4, 0, 2, 0, 2, 0, 1, 0, 2, 0, 1, 4, 8, 4, 0, 1, 4, 10, 12, 16, 20, 22 };
	const double _n_R2c_T_P_h[24] = { -3236839855524.2, 7326335090218.1, 358250899454.47, -583401318515.9, -10783068217.47, 20825544563.171, 610747.83564516, 859777.2253558, -25745.72360417, 31081.088422714, 1208.2315865936, 482.19755109255, 3.7966001272486, -10.842984880077, -0.04536417267666, 1.4559115658698E-13, 1.126159740723E-12, -1.7804982240686E-11, 1.2324579690832E-07, -1.1606921130984E-06, 2.7846367088554E-05, -5.9270038474176E-04, 1.2918582991878E-03 };
	const int N = 24;
	//K
	const double _tStar_R2c_T_P_h = 1;

	double sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum = sum + _n_R2c_T_P_h[i] * pow(pi + 25, _I_R2c_T_P_h[i]) * pow(eta - 1.8, _J_R2c_T_P_h[i]);
	}

	return sum * _tStar_R2c_T_P_h;
}

//State Property Functions as a Function of Pressure and Enthalpy

//temperature of region 2 as a function of pressure and enthalpy
double _T_P_h_R2(double inputPress, double inputEnth)
{
	//MPa
	double P_R2a_Bound = 4;
	double PBound = _P_R2B_T_P_h(inputEnth);

	if (inputPress <= P_R2a_Bound)
	{
		//MPa
		const double pStar = 1;
		//kJ / kg
		const double hStar = 2000;

		double pi = inputPress / pStar;
		double eta = inputEnth / hStar;

		return _T_R2a_P_h(pi, eta);
	}
	else if (inputPress < PBound)
	{
		//MPa
		const double pStar = 1;
		//kJ / kg
		const double hStar = 2000;

		double pi = inputPress / pStar;
		double eta = inputEnth / hStar;

		return _T_R2b_P_h(pi, eta);
	}
	else
	{
		//MPa
		const double pStar = 1;
		//kJ / kg
		const double hStar = 2000;

		double pi = inputPress / pStar;
		double eta = inputEnth / hStar;

		return _T_R2c_P_h(pi, eta);
	}
}
//specific volume of region 2 as a function of pressure and enthalpy
double _v_P_h_R2(double inputPress, double inputEnth)
{
	double T = _T_P_h_R2(inputPress, inputEnth);
	return _v_P_T_R2(inputPress,T);
}
//specific internal energy of region 2 as a function of pressure and enthalpy
double _u_P_h_R2(double inputPress, double inputEnth)
{
	double T = _T_P_h_R2(inputPress, inputEnth);
	return _u_P_T_R2(inputPress,T);
}
//specific entropy of region 2 as a function of pressure and enthalpy
double _s_P_h_R2(double inputPress, double inputEnth)
{
	double T = _T_P_h_R2(inputPress, inputEnth);
	return _s_P_T_R2(inputPress,T);
}
//specific isobaric heat capacity of region 2 as a function of pressure and enthalpy
double _cp_P_h_R2(double inputPress, double inputEnth)
{
	double T = _T_P_h_R2(inputPress, inputEnth);
	return _cp_P_T_R2(inputPress,T);
}
//specific isochoric heat capacity of region 2 as a function of pressure and enthalpy
double _cv_P_h_R2(double inputPress, double inputEnth)
{
	double T = _T_P_h_R2(inputPress, inputEnth);
	return _cv_P_T_R2(inputPress,T);
}
//speed of sound of region 2 as a function of pressure and enthalpy
double _w_P_h_R2(double inputPress, double inputEnth)
{
	double T = _T_P_h_R2(inputPress, inputEnth);
	return _w_P_T_R2(inputPress,T);
}

//Temperature as a function of pressure and entropy for region 2a
static double _T_R2a_P_s(double pi, double sigma)
{
	const double _I_R2a_T_P_s[46] = { -1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.25, -1.25, -1.25, -1, -1, -1, -1, -1, -1, -0.75, -0.75, -0.5, -0.5, -0.5, -0.5, -0.25, -0.25, -0.25, -0.25, 0.25, 0.25, 0.25, 0.25, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.75, 0.75, 0.75, 0.75, 1, 1, 1.25, 1.25, 1.5, 1.5 };
	const double _J_R2a_T_P_s[46] = { -24, -23, -19, -13, -11, -10, -19, -15, -6, -26, -21, -17, -16, -9, -8, -15, -14, -26, -13, -9, -7, -27, -25, -11, -6, 1, 4, 8, 11, 0, 1, 5, 6, 10, 14, 16, 0, 4, 9, 17, 7, 18, 3, 15, 5, 18 };
	const double _n_R2a_T_P_s[46] = { -392359.83861984, 515265.7382727, 40482.443161048, -321.93790923902, 96.961424218694, -22.867846371773, -449429.14124357, -5011.8336020166, 0.35684463560015, 44235.33584819, -13673.388811708, 421632.60207864, 22516.925837475, 474.42144865646, -149.31130797647, -197811.26320452, -23554.39947076, -19070.616302076, 55375.669883164, 3829.3691437363, -603.91860580567, 1936.3102620331, 4266.064369861, -5978.0638872718, -704.01463926862, 338.36784107553, 20.862786635187, 0.033834172656196, -4.3124428414893E-05, 166.53791356412, -139.86292055898, -0.78849547999872, 0.072132411753872, -5.9754839398283E-03, -1.2141358953904E-05, 2.3227096733871E-07, -10.538463566194, 2.0718925496502, -0.072193155260427, 2.074988708112E-07, -0.018340657911379, 2.9036272348696E-07, 0.21037527893619, 2.5681239729999E-04, -0.012799002933781, -8.2198102652018E-06 };
	const int N = 46;
	//K
	const double _tStar_R2a_T_P_s = 1;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _n_R2a_T_P_s[i] * pow(pi, _I_R2a_T_P_s[i]) * pow(sigma - 2, _J_R2a_T_P_s[i]);
	}

	return sum * _tStar_R2a_T_P_s;
}

//Temperature as a function of pressure and entropy for region 2b
static double _T_R2b_P_s(double pi, double sigma)
{
	const double _I_R2b_T_P_s[44] = { -6, -6, -5, -5, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5 };
	const double _J_R2b_T_P_s[44] = { 0, 11, 0, 11, 0, 1, 11, 0, 1, 11, 12, 0, 1, 6, 10, 0, 1, 5, 8, 9, 0, 1, 2, 4, 5, 6, 9, 0, 1, 2, 3, 7, 8, 0, 1, 5, 0, 1, 3, 0, 1, 0, 1, 2 };
	const double _n_R2b_T_P_s[44] = { 316876.65083497, 20.864175881858, -398593.99803599, -21.816058518877, 223697.85194242, -2784.1703445817, 9.920743607148, -75197.512299157, 2970.8605951158, -3.4406878548526, 0.38815564249115, 17511.29508575, -1423.7112854449, 1.0943803364167, 0.89971619308495, -3375.9740098958, 471.62885818355, -1.9188241993679, 0.41078580492196, -0.33465378172097, 1387.0034777505, -406.63326195838, 41.72734715961, 2.1932549434532, -1.0320050009077, 0.35882943516703, 5.2511453726066E-03, 12.838916450705, -2.8642437219381, 0.56912683664855, -0.099962954584931, -3.2632037778459E-03, 2.3320922576723E-04, -0.1533480985745, 0.029072288239902, 3.7534702741167E-04, 1.7296691702411E-03, -3.8556050844504E-04, -3.5017712292608E-05, -1.4566393631492E-05, 5.6420857267269E-06, 4.1286150074605E-08, -2.0684671118824E-08, 1.6409393674725E-09 };
	const int N = 44;
	//K
	const double _tStar_R2b_T_P_s = 1;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _n_R2b_T_P_s[i] * pow(pi, _I_R2b_T_P_s[i]) * pow(10 - sigma, _J_R2b_T_P_s[i]);
	}

	return sum * _tStar_R2b_T_P_s;
}

//Temperature as a function of pressure and entropy for region 2c
static double _T_R2c_P_s(double pi, double sigma)
{
	const double _I_R2c_T_P_s[30] = { -2, -2, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7 };
	const double _J_R2c_T_P_s[30] = { 0, 1, 0, 0, 1, 2, 3, 0, 1, 3, 4, 0, 1, 2, 0, 1, 5, 0, 1, 4, 0, 1, 2, 0, 1, 0, 1, 3, 4, 5 };
	const double _n_R2c_T_P_s[30] = { 909.68501005365, 2404.566708842, -591.6232638713, 541.45404128074, -270.98308411192, 979.76525097926, -469.66772959435, 14.399274604723, -19.104204230429, 5.3299167111971, -21.252975375934, -0.3114733441376, 0.60334840894623, -0.042764839702509, 5.8185597255259E-03, -0.014597008284753, 5.6631175631027E-03, -7.6155864584577E-05, 2.2440342919332E-04, -1.2561095013413E-05, 6.3323132660934E-07, -2.0541989675375E-06, 3.6405370390082E-08, -2.9759897789215E-09, 1.0136618529763E-08, 5.9925719692351E-12, -2.0677870105164E-11, -2.0874278181886E-11, 1.0162166825089E-10, -1.6429828281347E-10 };
	const int N = 30;
	//K
	const double _tStar_R2c_T_P_s = 1;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + (_n_R2c_T_P_s[i] * pow(pi, _I_R2c_T_P_s[i]) * pow(2 - sigma, _J_R2c_T_P_s[i]));
	}

	return sum * _tStar_R2c_T_P_s;
}

//State Property Functions as a Function of Pressure and Entropy

//temperature of region 2 as a function of pressure and entropy
static double T_R2_P_s(double inputPress, double inputEntr)
{
	//MPa
	double P_R2a_Bound = 4;
	//kJ / (kg * K)
	double SBound = 5.85;

	if (inputPress <= P_R2a_Bound)
	{
		//MPa
		const double pStar = 1;
		//kJ / (kg * K)
		const double sStar = 2;

		double pi = inputPress / pStar;
		double sigma = inputEntr / sStar;

		return _T_R2a_P_s(pi, sigma);
	}
	else if (inputEntr > SBound)
	{
		//MPa
		const double pStar = 1;
		//kJ / (kg * K)
		const double sStar = 0.7853;

		double pi = inputPress / pStar;
		double sigma = inputEntr / sStar;

		return _T_R2b_P_s(pi, sigma);
	}
	else
	{
		//MPa
		const double pStar = 1;
		//kJ / (kg * K)
		const double sStar = 2.9251;

		double pi = inputPress / pStar;
		double sigma = inputEntr / sStar;

		return _T_R2c_P_s(pi, sigma);
	}
}
//specific volume of region 2 as a function of pressure and entropy
double v_R2_P_s(double inputPress, double inputEntr)
{
	double T = T_R2_P_s(inputPress, inputEntr);
	return _v_P_T_R2(inputPress,T);
}
//specific internal energy of region 2 as a function of pressure and entropy
double u_R2_P_s(double inputPress, double inputEntr)
{
	double T = T_R2_P_s(inputPress, inputEntr);
	return _u_P_T_R2(inputPress,T);
}
//specific entropy of region 2 as a function of pressure and entropy
double h_R2_P_s(double inputPress, double inputEntr)
{
	double T = T_R2_P_s(inputPress, inputEntr);
	return _h_P_T_R2(inputPress,T);
}
//specific isobaric heat capacity of region 2 as a function of pressure and entropy
double cp_R2_P_s(double inputPress, double inputEntr)
{
	double T = T_R2_P_s(inputPress, inputEntr);
	return _cp_P_T_R2(inputPress,T);
}
//specific isochoric heat capacity of region 2 as a function of pressure and entropy
double cv_R2_P_s(double inputPress, double inputEntr)
{
	double T = T_R2_P_s(inputPress, inputEntr);
	return _cv_P_T_R2(inputPress,T);
}
//speed of sound of region 2 as a function of pressure and entropy
double w_R2_P_s(double inputPress, double inputEntr)
{
	double T = T_R2_P_s(inputPress, inputEntr);
	return _w_P_T_R2(inputPress,T);
}

//enthalpy on the boundary of regions 2b and 2a
static double _h_R2B_P_h_s(double inputEntropy)
{
	const double _n_R2B_P_h_s[4] = { -0.349898083432139E+04, 0.257560716905876E+04, -0.421073558227969E+03, 0.276349063799944E+02 };
	//kJ / kg
	const double _hStar_R2B_P_h_s = 1;
	//kJ / (kg * K)
	const double sStar = 1;

	double sigma = inputEntropy / sStar;

	return _hStar_R2B_P_h_s * (_n_R2B_P_h_s[0] + (_n_R2B_P_h_s[1] * sigma) + (_n_R2B_P_h_s[2] * pow(sigma, 2)) + (_n_R2B_P_h_s[3] * pow(sigma, 3)));
}

//Pressure as a function of enthalpy and entropy for region 2a
static double _P_R2a_h_s(double eta, double sigma)
{
	const double _I_R2a_P_h_s[29] = { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 5, 5, 6, 7 };
	const double _J_R2a_P_h_s[29] = { 1, 3, 6, 16, 20, 22, 0, 1, 2, 3, 5, 6, 10, 16, 20, 22, 3, 16, 20, 0, 2, 3, 6, 16, 16, 3, 16, 3, 1 };
	const double _n_R2a_P_h_s[29] = { -1.82575361923032E-02, -0.125229548799536, 0.592290437320145, 6.04769706185122, 238.624965444474, -298.639090222922, 0.051225081304075, -0.437266515606486, 0.413336902999504, -5.16468254574773, -5.57014838445711, 12.8555037824478, 11.414410895329, -119.504225652714, -2847.7798596156, 4317.57846408006, 1.1289404080265, 1974.09186206319, 1516.12444706087, 1.41324451421235E-02, 0.585501282219601, -2.97258075863012, 5.94567314847319, -6236.56565798905, 9659.86235133332, 6.81500934948134, -6332.07286824489, -5.5891922446576, 4.00645798472063E-02 };
	const int N = 29;
	//MPa
	const double _pStar_R2a_P_h_s = 4;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _n_R2a_P_h_s[i] * pow(eta - 0.5, _I_R2a_P_h_s[i]) * pow(sigma - 1.2, _J_R2a_P_h_s[i]);
	}

	sum = pow(sum, 4);

	return sum * _pStar_R2a_P_h_s;
}

//Pressure as a function of enthalpy and entropy for region 2b
static double _P_R2b_h_s(double eta, double sigma)
{
	const double _I_R2b_P_h_s[33] = { 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 8, 12, 14 };
	const double _J_R2b_P_h_s[33] = { 0, 1, 2, 4, 8, 0, 1, 2, 3, 5, 12, 1, 6, 18, 0, 1, 7, 12, 1, 16, 1, 12, 1, 8, 18, 1, 16, 1, 3, 14, 18, 10, 16 };
	const double _n_R2b_P_h_s[33] = { 8.01496989929495E-02, -0.543862807146111, 0.337455597421283, 8.9055545115745, 313.840736431485, 0.797367065977789, -1.2161697355624, 8.72803386937477, -16.9769781757602, -186.552827328416, 95115.9274344237, -18.9168510120494, -4334.0703719484, 543212633.012715, 0.144793408386013, 128.024559637516, -67230.9534071268, 33697238.0095287, -586.63419676272, -22140322476.9889, 1716.06668708389, -570817595.806302, -3121.09693178482, -2078413.8463301, 3056059461577.86, 3221.57004314333, 326810259797.295, -1441.04158934487, 410.694867802691, 109077066873.024, -24796465425889.3, 1888019068.65134, -123651009018773 };
	const int N = 33;
	//MPa
	const double _pStar_R2b_P_h_s = 100;

	double sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum = sum + _n_R2b_P_h_s[i] * pow(eta - 0.6, _I_R2b_P_h_s[i]) * pow(sigma - 1.01, _J_R2b_P_h_s[i]);
	}

	sum = pow(sum, 4);

	return sum * _pStar_R2b_P_h_s;
}

//Pressure as a function of enthalpy and entropy for region 2c
double _P_R2c_h_s(double eta, double sigma)
{
	const double _I_R2c_P_h_s[31] = { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 5, 5, 5, 5, 6, 6, 10, 12, 16 };
	const double _J_R2c_P_h_s[31] = { 0, 1, 2, 3, 4, 8, 0, 2, 5, 8, 14, 2, 3, 7, 10, 18, 0, 5, 8, 16, 18, 18, 1, 4, 6, 14, 8, 18, 7, 7, 10 };
	const double _n_R2c_P_h_s[31] = { 0.112225607199012, -3.39005953606712, -32.0503911730094, -197.5973051049, -407.693861553446, 13294.3775222331, 1.70846839774007, 37.3694198142245, 3581.44365815434, 423014.446424664, -751071025.760063, 52.3446127607898, -228.351290812417, -960652.417056937, -80705929.2526074, 1626980172256.69, 0.772465073604171, 46392.9973837746, -13731788.5134128, 1704703926305.12, -25110462818730.8, 31774883083552, 53.8685623675312, -55308.9094625169, -1028615.22421405, 2042494187562.34, 273918446.626977, -2.63963146312685E+15, -1078908541.08088, -29649262098.0124, -1.11754907323424E+15 };
	const int N = 31;
	//MPa
	const double _pStar_R2c_P_h_s = 100;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _n_R2c_P_h_s[i] * pow(eta - 0.7, _I_R2c_P_h_s[i]) * pow(sigma - 1.1, _J_R2c_P_h_s[i]);
	}

	sum = pow(sum, 4);

	return sum * _pStar_R2c_P_h_s;
}

//State Property Functions as a Function of Enthalpy and Entropy

//pressure of region 2 as a function of enthalpy and entropy
double P_R2_h_s(double inputEnthalpy, double inputEntropy)
{
	//kJ / (kg * K)
	const double sBound = 5.85;
	//kJ / kg
	double hBound = _h_R2B_P_h_s(inputEntropy);

	if (inputEntropy < sBound)
	{
		//kJ / kg
		const double hStar = 3500;
		//kJ / (kg * K)
		const double sStar = 5.9;

		double eta = inputEnthalpy / hStar;
		double sigma = inputEntropy / sStar;

		return _P_R2c_h_s(eta, sigma);
	}
	else if (inputEnthalpy > hBound)
	{
		//kJ / kg
		const double hStar = 4100;
		//kJ / (kg * K)
		const double sStar = 7.9;

		double eta = inputEnthalpy / hStar;
		double sigma = inputEntropy / sStar;

		return _P_R2b_h_s(eta, sigma);
	}
	else
	{
		//kJ / kg
		const double hStar = 4200;
		//kJ / (kg * K)
		const double sStar = 12;

		double eta = inputEnthalpy / hStar;
		double sigma = inputEntropy / sStar;

		return _P_R2a_h_s(eta, sigma);
	}
}
//temperature of region 2 as a function of enthalpy and entropy
double T_R2_h_s(double inputEnthalpy, double inputEntropy)
{
	double P = P_R2_h_s(inputEnthalpy, inputEntropy);
	return _T_P_h_R2(P, inputEnthalpy);
}
//specific volume of region 2 as a function of enthalpy and entropy
double v_R2_h_s(double inputEnthalpy, double inputEntropy)
{
	double P = P_R2_h_s(inputEnthalpy, inputEntropy);
	double T = _T_P_h_R2(P, inputEnthalpy);

	return _v_P_T_R2(P,T);
}
//specific internal energy of region 2 as a function of enthalpy and entropy
double u_R2_h_s(double inputEnthalpy, double inputEntropy)
{
	double P = P_R2_h_s(inputEnthalpy, inputEntropy);
	double T = _T_P_h_R2(P, inputEnthalpy);

	return _u_P_T_R2(P,T);
}
//specific isobaric heat capacity of region 2 as a function of enthalpy and entropy
double cp_R2_h_s(double inputEnthalpy, double inputEntropy)
{
	double P = P_R2_h_s(inputEnthalpy, inputEntropy);
	double T = _T_P_h_R2(P, inputEnthalpy);

	return _cp_P_T_R2(P,T);
}
//specific isochoric heat capacity of region 2 as a function of enthalpy and entropy
double cv_R2_h_s(double inputEnthalpy, double inputEntropy)
{
	double P = P_R2_h_s(inputEnthalpy, inputEntropy);
	double T = _T_P_h_R2(P, inputEnthalpy);

	return _cv_P_T_R2(P,T);
}
//speed of sound of region 2 as a function of enthalpy and entropy
double w_R2_h_s(double inputEnthalpy, double inputEntropy)
{
	double P = P_R2_h_s(inputEnthalpy, inputEntropy);
	double T = _T_P_h_R2(P, inputEnthalpy);

	return _w_P_T_R2(P,T);
}
