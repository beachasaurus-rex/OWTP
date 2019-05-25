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
	return _tStar_R2 / inputTemp;
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
	double gibbs_ddtau = _gibbs_R2_ddtau(pi, tau);

	return R * (-1) * pow(tau, 2) * gibbs_ddtau;
}
//specific isochoric heat capacity of region 2 as a function of temperature and pressure
double cv_R2_T_P(double inputTemp, double inputPress)
{
	double pi = _pi_R2(inputPress);
	double tau = _tau_R2(inputTemp);
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
double w_R2_T_P(double inputTemp, double inputPress)
{
	//convert to J / (kg * K) from kJ / (kg * K)
	double _R = R * 1000;

	double pi = _pi_R2(inputPress);
	double tau = _tau_R2(inputTemp);
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

//Boundary Iteration Constants for boundary between Regions 2b and 2c for
//Temeperature as a function of Pressure and Enthalpy

static double _n_R2B_T_P_h[5] = { 0.90584278514723E+03, -0.67955786399241, 0.12809002730136E-03, 0.26526571908428E+04, 0.45257578905948E+01 };

//kPa
static double _pStar_R2B_T_P_h = 1000;
//kJ / kg
static double _hStar_R2B_T_P_h = 1;
static double _eta_R2B_T_P_h(double inputEnthalpy)
{
	return inputEnthalpy / _hStar_R2B_T_P_h;
}
static double _P_R2B_T_P_h(double inputEnthalpy)
{
	double eta = _eta_R2B_T_P_h(inputEnthalpy);

	return _pStar_R2B_T_P_h * (_n_R2B_T_P_h[0] + (_n_R2B_T_P_h[1] * eta) + (_n_R2B_T_P_h[2] * pow(eta, 2)));
}

//Iteration Constants for Region 2a for Temperature as a function of
//Pressure and Enthalpy

static int _i_R2a_T_P_h[35] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34 };
static int _I_R2a_T_P_h[35] = { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 7 };
static int _J_R2a_T_P_h[35] = { 0, 1, 2, 3, 7, 20, 0, 1, 2, 3, 7, 9, 11, 18, 44, 0, 2, 7, 36, 38, 40, 42, 44, 24, 44, 12, 32, 44, 32, 36, 42, 34, 44, 28 };
static double _n_R2a_T_P_h[35] = { 1089.8952318288, 849.51654495535, -107.81748091826, 33.153654801263, -7.4232016790248, 11.765048724356, 1.844574935579, -4.1792700549624, 6.2478196935812, -17.344563108114, -200.58176862096, 271.96065473796, -455.11318285818, 3091.9688604755, 252266.40357872, -6.1707422868339E-03, -0.31078046629583, 11.670873077107, 128127984.04046, -985549096.23276, 2822454697.3002, -3594897141.0703, 1722734991.3197, -13551.334240775, 12848734.66465, 1.3865724283226, 235988.32556514, -13105236.545054, 7399.9835474766, -551966.9703006, 3715408.5996233, 19127.72923966, -415351.64835634, -62.459855192507 };

//kPa
static double _pStar_R2a_T_P_h = 1000;
//kJ / kg
static double _hStar_R2a_T_P_h = 2000;
//K
static double _tStar_R2a_T_P_h = 1;
static double _pi_R2a_T_P_h(double inputPress)
{
	return inputPress / _pStar_R2a_T_P_h;
}
static double _eta_R2a_T_P_h(double inputEnthalpy)
{
	return inputEnthalpy / _hStar_R2a_T_P_h;
}

//Temperature as a function of pressure and enthalpy for region 2a
static double _T_R2a_P_h(double pi, double eta)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_i_R2a_T_P_h); i++)
	{
		sum = sum + _n_R2a_T_P_h[i] * pow(pi, _I_R2a_T_P_h[i]) * pow(eta-2.1, _J_R2a_T_P_h[i]);
	}

	return sum * _tStar_R2a_T_P_h;
}

//Iteration Constants for Region 2b for Temperature as a function of
//Pressure and Enthalpy

static int _i_R2b_T_P_h[39] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38 };
static int _I_R2b_T_P_h[39] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7, 7, 9, 9 };
static int _J_R2b_T_P_h[39] = { 0, 1, 2, 12, 18, 24, 28, 40, 0, 2, 6, 12, 18, 24, 28, 40, 2, 8, 18, 40, 1, 2, 12, 24, 2, 12, 18, 24, 28, 40, 18, 24, 40, 28, 2, 28, 1, 40 };
static double _n_R2b_T_P_h[39] = { 1489.5041079516, 743.07798314034, -97.708318797837, 2.4742464705674, -0.63281320016026, 1.1385952129658, -0.47811863648625, 8.5208123431544E-03, 0.93747147377932, 3.3593118604916, 3.3809355601454, 0.16844539671904, 0.73875745236695, -0.47128737436186, 0.15020273139707, -0.002176411421975, -0.021810755324761, -0.10829784403677, -0.046333324635812, 7.1280351959551E-05, 1.1032831789999E-04, 1.8955248387902E-04, 3.0891541160537E-03, 1.3555504554949E-03, 2.8640237477456E-07, -1.0779857357512E-05, -7.6462712454814E-05, 1.4052392818316E-05, -3.1083814331434E-05, -1.0302738212103E-06, 2.821728163504E-07, 1.2704902271945E-06, 7.3803353468292E-08, -1.1030139238909E-08, -8.1456365207833E-14, -2.5180545682962E-11, -1.7565233969407E-18, 8.6934156344163E-15 };

//kPa
static double _pStar_R2b_T_P_h = 1000;
//kJ / kg
static double _hStar_R2b_T_P_h = 2000;
//K
static double _tStar_R2b_T_P_h = 1;
static double _pi_R2b_T_P_h(double inputPress)
{
	return inputPress / _pStar_R2b_T_P_h;
}
static double _eta_R2b_T_P_h(double inputEnthalpy)
{
	return inputEnthalpy / _hStar_R2b_T_P_h;
}

//Temperature as a function of pressure and enthalpy for region 2b
static double _T_R2b_P_h(double pi, double eta)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_i_R2b_T_P_h); i++)
	{
		sum = sum + _n_R2b_T_P_h[i] * pow(pi - 2, _I_R2b_T_P_h[i]) * pow(eta - 2.6, _J_R2b_T_P_h[i]);
	}

	return sum * _tStar_R2b_T_P_h;
}

//Iteration Constants for Region 2c for Temperature as a function of
//Pressure and Enthalpy

static int _i_R2c_T_P_h[24] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23 };
static int _I_R2c_T_P_h[24] = { -7, -7, -6, -6, -5, -5, -2, -2, -1, -1, 0, 0, 1, 1, 2, 6, 6, 6, 6, 6, 6, 6, 6 };
static int _J_R2c_T_P_h[24] = { 0, 4, 0, 2, 0, 2, 0, 1, 0, 2, 0, 1, 4, 8, 4, 0, 1, 4, 10, 12, 16, 20, 22 };
static double _n_R2c_T_P_h[24] = { -3236839855524.2, 7326335090218.1, 358250899454.47, -583401318515.9, -10783068217.47, 20825544563.171, 610747.83564516, 859777.2253558, -25745.72360417, 31081.088422714, 1208.2315865936, 482.19755109255, 3.7966001272486, -10.842984880077, -0.04536417267666, 1.4559115658698E-13, 1.126159740723E-12, -1.7804982240686E-11, 1.2324579690832E-07, -1.1606921130984E-06, 2.7846367088554E-05, -5.9270038474176E-04, 1.2918582991878E-03 };

//kPa
static double _pStar_R2c_T_P_h = 1000;
//kJ / kg
static double _hStar_R2c_T_P_h = 2000;
//K
static double _tStar_R2c_T_P_h = 1;
static double _pi_R2c_T_P_h(double inputPress)
{
	return inputPress / _pStar_R2c_T_P_h;
}
static double _eta_R2c_T_P_h(double inputEnthalpy)
{
	return inputEnthalpy / _hStar_R2c_T_P_h;
}

//Temperature as a function of pressure and enthalpy for region 2c
static double _T_R2c_P_h(double pi, double eta)
{
	double sum = 0;

	for (int i = 0; i < ITERCONST(_i_R2c_T_P_h); i++)
	{
		sum = sum + _n_R2c_T_P_h[i] * pow(pi - 25, _I_R2c_T_P_h[i]) * pow(eta - 1.8, _J_R2c_T_P_h[i]);
	}

	return sum * _tStar_R2c_T_P_h;
}

//Temperature as a function of pressure and enthalpy
static double _T_R2_P_h(double inputPress, double inputEnth)
{
	//kPa
	double P_R2a_Bound = 4000;
	double PBound = _P_R2B_T_P_h(inputEnth);

	if (inputPress <= P_R2a_Bound)
	{
		double pi = _pi_R2a_T_P_h(inputPress);
		double eta = _eta_R2a_T_P_h(inputEnth);

		return _T_R2a_P_h(pi, eta);
	}
	else if (inputPress < PBound)
	{
		double pi = _pi_R2b_T_P_h(inputPress);
		double eta = _eta_R2b_T_P_h(inputEnth);

		return _T_R2b_P_h(pi, eta);
	}

	else
	{
		double pi = _pi_R2c_T_P_h(inputPress);
		double eta = _eta_R2c_T_P_h(inputEnth);

		return _T_R2c_P_h(pi, eta);
	}
}
