#pragma once

#include <math.h>
#include "ReferenceConstants.h"
#include "RegionBoundaries.h"

//Basic Free Energy Iteration Constants

static const double _i_R3[40] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40 };
static const double _Ii_R3[39] = { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 8, 9, 9, 10, 10, 11 };
static const double  _Ji_R3[39] = { 0, 1, 2, 7, 10, 12, 23, 2, 6, 15, 17, 0, 2, 6, 7, 22, 26, 0, 2, 4, 16, 26, 0, 2, 4, 26, 1, 3, 26, 0, 2, 26, 2, 26, 2, 26, 0, 1, 26 };
static const double  _ni_R3[40] = { 1.0658070028513, -15.732845290239, 20.944396974307, -7.6867707878716, 2.6185947787954, -2.808078114862, 1.2053369696517, -8.4566812812502E-03, -1.2654315477714, -1.1524407806681, 0.88521043984318, -0.64207765181607, 0.38493460186671, -0.85214708824206, 4.8972281541877, -3.0502617256965, 0.039420536879154, 0.12558408424308, -0.2799932969871, 1.389979956946, -2.018991502357, -8.2147637173963E-03, -0.47596035734923, 0.0439840744735, -0.44476435428739, 0.90572070719733, 0.70522450087967, 0.10770512626332, -0.32913623258954, -0.50871062041158, -0.022175400873096, 0.094260751665092, 0.16436278447961, -0.013503372241348, -0.014834345352472, 5.7922953628084E-04, 3.2308904703711E-03, 8.0964802996215E-05, -1.6557679795037E-04, -4.4923899061815E-05 };

//kg / m^3
static const double const *_rhoStar_R3 = &rhoCrit;
//K
static const double const *_tStar_R3 = &tCrit;
static double _tau_R3(double T)
{
	return *_tStar_R3 / T;
}
static double _del_R3(double rho)
{
	return rho / *_rhoStar_R3;
}

//Basic Gibbs Free Energy Functions

//base gibbs free energy equation for region 3
static double _gibbs_R3(double del, double tau)
{
	double sum = _ni_R3[0] * log(del);

	for (int i = 1; i < ITERCONST(_i_R3); i++)
	{
		sum = sum + _ni_R3[i] * pow(del, _Ii_R3[i-1]) * pow(tau, _Ji_R3[i-1]);
	}

	return sum;
}
//d(gibbs)/d(del)
static double _gibbs_R3_ddel(double del, double tau)
{
	double sum = _ni_R3[0] * pow(del, -1);

	for (int i = 1; i < ITERCONST(_i_R3); i++)
	{
		sum = sum + _ni_R3[i] * _Ii_R3[i-1] * pow(del, _Ii_R3[i-1] - 1) 
			* pow(tau, _Ji_R3[i - 1]);
	}

	return sum;
}
//d(gibbs)^2/d^2(del)
static double _gibbs_R3_dddel(double del, double tau)
{
	double sum = -_ni_R3[0] * pow(del, -2);

	for (int i = 1; i < ITERCONST(_i_R3); i++)
	{
		sum = sum + _ni_R3[i] * _Ii_R3[i - 1] * (_Ii_R3[i - 1] - 1) * 
			pow(del, _Ii_R3[i - 1] - 2) * pow(tau, _Ji_R3[i - 1]);
	}

	return sum;
}
//d(gibbs)/d(tau)
static double _gibbs_R3_dtau(double del, double tau)
{
	double sum = 0;

	for (int i = 1; i < ITERCONST(_i_R3); i++)
	{
		sum = sum + _ni_R3[i] * _Ji_R3[i - 1] * pow(del, _Ii_R3[i - 1]) 
			* pow(tau, _Ji_R3[i - 1]-1);
	}

	return sum;
}
//d(gibbs)^2/d^2(tau)
static double _gibbs_R3_ddtau(double del, double tau)
{
	double sum = 0;

	for (int i = 1; i < ITERCONST(_i_R3); i++)
	{
		sum = sum + _ni_R3[i] * _Ji_R3[i - 1] * (_Ji_R3[i - 1]-1) 
			* pow(del, _Ii_R3[i - 1]) * pow(tau, _Ji_R3[i - 1] - 2);
	}

	return sum;
}
//d(gibbs)^2/(d(del) * d(tau))
static double _gibbs_R3_ddel_dtau(double del, double tau)
{
	double sum = 0;

	for (int i = 1; i < ITERCONST(_i_R3); i++)
	{
		sum = sum + _ni_R3[i] * _Ii_R3[i - 1] * _Ji_R3[i - 1] 
			* pow(del, _Ii_R3[i - 1]-1) * pow(tau, _Ji_R3[i - 1]-1);
	}

	return sum;
}

//Properties as functions of density and temperature for region 3

//pressure as a function of density and temperature for region 3
double _P_Rho_T_R3(double rho, double temp)
{
	double del = _del_R3(rho);
	double tau = _tau_R3(temp);

	return _gibbs_R3_ddel(del, tau) * del * rho * R * temp;
}
//specific internal energy as a function of density and temperature for region 3
double _u_Rho_T_R3(double rho, double temp)
{
	double del = _del_R3(rho);
	double tau = _tau_R3(temp);

	return _gibbs_R3_dtau(del, tau) * tau * R * temp;
}
//specific entropy as a function of density and temperature for region 3
double _s_Rho_T_R3(double rho, double temp)
{
	double del = _del_R3(rho);
	double tau = _tau_R3(temp);

	return R * ((tau * _gibbs_R3_dtau(del, tau)) - _gibbs_R3(del, tau));
}
//specific enthalpy as a function of density and temperature for region 3
double _h_Rho_T_R3(double rho, double temp)
{
	double del = _del_R3(rho);
	double tau = _tau_R3(temp);

	return R * temp * ((tau * _gibbs_R3_dtau(del, tau)) + 
		(del * _gibbs_R3_ddel(del, tau)));
}
//specific isochoric heat capacity as a function of density and temperature for region 3
double _cv_Rho_T_R3(double rho, double temp)
{
	double del = _del_R3(rho);
	double tau = _tau_R3(temp);

	return -R * pow(tau, 2) * _gibbs_R3_ddtau(del, tau);
}
//specific isobaric heat capacity as a function of density and temperature for region 3
double _cp_Rho_T_R3(double rho, double temp)
{
	double del = _del_R3(rho);
	double tau = _tau_R3(temp);

	double a1 = -pow(tau, 2) * _gibbs_R3_ddtau(del, tau);
	double a2 = pow((del * _gibbs_R3_ddel(del, tau))-
		(del * tau * _gibbs_R3_ddel_dtau(del, tau)), 2);
	double a3 = (2 * del * _gibbs_R3_ddel(del, tau)) + 
		(pow(del, 2) * _gibbs_R3_dddel(del, tau));
	double a4 = a1 + (a2 / a3);

	return R * a4;
}
//speed of sound as a function of density and temperature for region 3
double _w_Rho_T_R3(double rho, double temp)
{
	//convert to J / (kg * K) from kJ / (kg * K)
	double _R = R * 1000;

	double del = _del_R3(rho);
	double tau = _tau_R3(temp);

	double a1 = (2 * del * _gibbs_R3_ddel(del, tau)) + 
		(pow(del, 2) * _gibbs_R3_dddel(del, tau));
	double a2 = pow((del * _gibbs_R3_ddel(del, tau)) -
		(del * tau * _gibbs_R3_ddel_dtau(del, tau)), 2);
	double a3 = pow(tau,2) * _gibbs_R3_ddtau(del, tau);
	double a4 = a1 - (a2 / a3);

	return pow(_R * temp * a4, 0.5);
}

//Properties as functions of specific volume and temperature for region 3

//pressure as a function of specific volume and temperature for region 3
double _P_v_T_R3(double v, double temp)
{
	return _P_Rho_T_R3(1/v, temp);
}
//specific internal energy as a function of specific volume and temperature for region 3
double _u_v_T_R3(double v, double temp)
{
	return _u_Rho_T_R3(1/v, temp);
}
//specific entropy as a function of specific volume and temperature for region 3
double _s_v_T_R3(double v, double temp)
{
	return _s_Rho_T_R3(1/v, temp);
}
//specific enthalpy as a function of specific volume and temperature for region 3
double _h_v_T_R3(double v, double temp)
{
	return _h_Rho_T_R3(1/v, temp);
}
//specific isochoric heat capacity as a function of specific volume and temperature for region 3
double _cv_v_T_R3(double v, double temp)
{
	return _cv_Rho_T_R3(1/v, temp);
}
//specific isobaric heat capacity as a function of specific volume and temperature for region 3
double _cp_v_T_R3(double v, double temp)
{
	return _cp_Rho_T_R3(1/v, temp);
}
//speed of sound as a function of specific volume and temperature for region 3
double _w_v_T_R3(double v, double temp)
{
	return _w_Rho_T_R3(1/v, temp);
}