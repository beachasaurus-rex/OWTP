#pragma once

#include <math.h>
#include "ReferenceConstants.h"

//Basic Ideal Iteration Constants

static int _i0_R2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static int _J0_R2[10] = { 0, 1, -5, -4, -3, -2, -1, 2, 3 };
static double _n0_R2[10] = { -9.6927686500217, 10.086655968018, -0.005608791128302, 0.071452738081455, -0.40710498223928, 1.4240819171444, -4.383951131945, -0.28408632460772, 0.021268463753307 };

//kPa
static double _pStar_R2 = 1000;
//K
static double _tStar_R2 = 540;
static double _pi_R2(double inputPress)
{
	return inputPress / _pStar_R2;
}
static double _tau_R2(double inputTemp)
{
	return inputTemp / _tStar_R2;
}

//Basic Ideal Gibbs Free Energy Functions

static double _gibbs_ideal_R2(double pi, double tau)
{
	double sum = log(pi);

	for (int i = 0; i < ITERCONST(_i0_R2); i++)
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
	double sum = 0;

	for (int i = 0; i < ITERCONST(_i0_R2); i++)
	{
		sum = sum + _n0_R2[i] * _J0_R2[i] * pow(tau, _J0_R2[i] - 1);
	}

	return sum;
}
static double _gibbs_ideal_R2_ddtau(double tau)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_i0_R2); i++)
	{
		sum = sum + _n0_R2[i] * _J0_R2[i] * (_J0_R2[i] - 1) * pow(tau, _J0_R2[i] - 2);
	}

	return sum;
}
static double _gibbs_ideal_R2_dpi_dtau()
{
	return 0;
}

//Basic Residual Iteration Constants

static int _ir_R2[44] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43 };
static int _Ir_R2[44] = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 7, 7, 7, 8, 8, 9, 10, 10, 10, 16, 16, 18, 20, 20, 20, 21, 22, 23, 24, 24, 24 };
static int _Jr_R2[44] = { 0, 1, 2, 3, 6, 1, 2, 4, 7, 36, 0, 1, 3, 6, 35, 1, 2, 3, 7, 3, 16, 35, 0, 11, 25, 8, 36, 13, 4, 10, 14, 29, 50, 57, 20, 35, 48, 21, 53, 39, 26, 40, 58 };
static double _nr_R2[44] = { -1.7731742473213E-03, -0.017834862292358, -0.045996013696365, -0.057581259083432, -0.05032527872793, -3.3032641670203E-05, -1.8948987516315E-04, -3.9392777243355E-03, -0.043797295650573, -2.6674547914087E-05, 2.0481737692309E-08, 4.3870667284435E-07, -3.227767723857E-05, -1.5033924542148E-03, -0.040668253562649, -7.8847309559367E-10, 1.2790717852285E-08, 4.8225372718507E-07, 2.2922076337661E-06, -1.6714766451061E-11, -2.1171472321355E-03, -23.895741934104, -5.905956432427E-18, -1.2621808899101E-06, -0.038946842435739, 1.1256211360459E-11, -8.2311340897998, 1.9809712802088E-08, 1.0406965210174E-19, -1.0234747095929E-13, -1.0018179379511E-09, -8.0882908646985E-11, 0.10693031879409, -0.33662250574171, 8.9185845355421E-25, 3.0629316876232E-13, -4.2002467698208E-06, -5.9056029685639E-26, 3.7826947613457E-06, -1.2768608934681E-15, 7.3087610595061E-29, 5.5414715350778E-17, -9.436970724121E-07 };

//Basic Residual Gibbs Free Energy Functions

static double _gibbs_res_R2(double pi, double tau)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_ir_R2); i++)
	{
		sum = sum + _nr_R2[i] * pow(pi, _Ir_R2[i]) * pow(tau - 0.5, _Jr_R2[i]);
	}

	return sum;
}
static double _gibbs_res_R2_dpi(double pi, double tau)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_ir_R2); i++)
	{
		sum = sum + _nr_R2[i] * _Ir_R2[i] * pow(pi, _Ir_R2[i] - 1) * pow(tau - 0.5, _Jr_R2[i]);
	}

	return sum;
}
static double _gibbs_res_R2_ddpi(double pi, double tau)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_ir_R2); i++)
	{
		sum = sum + _nr_R2[i] * _Ir_R2[i] * (_Ir_R2[i] - 1) * pow(pi, _Ir_R2[i] - 2) * pow(tau - 0.5, _Jr_R2[i]);
	}

	return sum;
}
static double _gibbs_res_R2_dtau(double pi, double tau)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_ir_R2); i++)
	{
		sum = sum + _nr_R2[i] * _Jr_R2[i] * pow(pi, _Ir_R2[i]) * pow(tau - 0.5, _Jr_R2[i] - 1);
	}

	return sum;
}
static double _gibbs_res_R2_ddtau(double pi, double tau)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_ir_R2); i++)
	{
		sum = sum + _nr_R2[i] * _Jr_R2[i] * (_Jr_R2[i] - 1) * pow(pi, _Ir_R2[i]) * pow(tau - 0.5, _Jr_R2[i] - 2);
	}

	return sum;
}
static double _gibbs_res_R2_dpi_dtau(double pi, double tau)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_ir_R2); i++)
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
double v_R2_T_P(double inputTemp, double inputPress)
{
	double pi = _pi_R2(inputPress);
	double tau = _tau_R2(inputTemp);
	double gibbs_dpi = _gibbs_R2_dpi(pi, tau);

	return (R * inputTemp * pi * gibbs_dpi) / inputPress;
}
//specific internal energy of region 2 as a function of temperature and pressure
double u_R2_T_P(double inputTemp, double inputPress)
{
	double pi = _pi_R2(inputPress);
	double tau = _tau_R2(inputTemp);
	double gibbs_dpi = _gibbs_R2_dpi(pi, tau);
	double gibbs_dtau = _gibbs_R2_dtau(pi, tau);

	return R * inputTemp * ((tau * gibbs_dtau) - (pi * gibbs_dpi));
}
//specific entropy of region 2 as a function of temperature and pressure
double s_R2_T_P(double inputTemp, double inputPress)
{
	double pi = _pi_R2(inputPress);
	double tau = _tau_R2(inputTemp);
	double gibbs = _gibbs_R2(pi, tau);
	double gibbs_dtau = _gibbs_R2_dtau(pi, tau);

	return R * ((tau * gibbs_dtau) - gibbs);
}
//specific enthalpy of region 2 as a function of temperature and pressure
double h_R2_T_P(double inputTemp, double inputPress)
{
	double pi = _pi_R2(inputPress);
	double tau = _tau_R2(inputTemp);
	double gibbs_dtau = _gibbs_R2_dtau(pi, tau);

	return R * inputTemp * tau * gibbs_dtau;
}
//specific isobaric heat capacity of region 2 as a function of temperature and pressure
double cp_R2_T_P(double inputTemp, double inputPress)
{
	double pi = _pi_R2(inputPress);
	double tau = _tau_R2(inputTemp);
	double gibbs_ddtau = _gibbs_R2_dtau(pi, tau);

	return R * (-1) * pow(tau, 2) * gibbs_ddtau;
}
//specific isochoric heat capacity of region 2 as a function of temperature and pressure
double cv_R2_T_P(double inputTemp, double inputPress)
{
	double pi = _pi_R2(inputPress);
	double tau = _tau_R2(inputTemp);
	double gibbs_ddtau = _gibbs_R2_dtau(pi, tau);
	double gibbs_res_dpi = _gibbs_res_R2_dpi(pi, tau);
	double gibbs_res_ddpi = _gibbs_res_R2_ddpi(pi, tau);

	double c1 = -1 * pow(tau, 2) * gibbs_ddtau;
	double c2 = 1 + (pi * gibbs_res_dpi) - (pi * tau * gibbs_res_ddpi);
	double c3 = pow(c2, 2);
	double c4 = 1 - (pow(pi, 2) * gibbs_res_ddpi);
	double c5 = c3 / c4;
	
	return R * (c1 - c5);
}
//speed of sound of region 2 as a function of temperature and pressure
double w_R2_T_P(double inputTemp, double inputPress)
{
	double pi = _pi_R2(inputPress);
	double tau = _tau_R2(inputTemp);
	double gibbs_ddtau = _gibbs_R2_dtau(pi, tau);
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

	return R * inputTemp * c8;
}