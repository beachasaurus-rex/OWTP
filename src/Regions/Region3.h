#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "ReferenceConstants.h"
#endif

#ifndef R3_SUBBOUNDS_V_PT_H
	#define R3_SUBBOUNDS_V_PT_H
	#include "Boundaries/SubregionBoundaries/Region3/Boundaries_vTP.h"
#endif

#ifndef R3_SUBBOUNDS_V_PH_H
    #define R3_SUBBOUNDS_V_PH_H
    #include "Boundaries/SubregionBoundaries/Region3/Boundaries_vPh.h"
#endif

#ifndef R3_SUBBOUNDS_V_PS_H
    #define R3_SUBBOUNDS_V_PS_H
    #include "Boundaries/SubregionBoundaries/Region3/Boundaries_vPs.h"
#endif

#ifndef R3_R4_BOUNDS_H
    #define R3_R4_BOUNDS_H
    #include "Boundaries/RegionBoundaries/R3andR4.h"
#endif

#ifndef META_REGION_H
	#define META_REGION_H
	#include "Boundaries/RegionBoundaries/MetastableRegion.h"
#endif

//Basic Gibbs Free Energy Functions

//base gibbs free energy equation for region 3
static double _gibbs_R3(double del, double tau)
{
	const double _Ii_R3[39] = { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 8, 9, 9, 10, 10, 11 };
	const double  _Ji_R3[39] = { 0, 1, 2, 7, 10, 12, 23, 2, 6, 15, 17, 0, 2, 6, 7, 22, 26, 0, 2, 4, 16, 26, 0, 2, 4, 26, 1, 3, 26, 0, 2, 26, 2, 26, 2, 26, 0, 1, 26 };
	const double  _ni_R3[40] = { 1.0658070028513, -15.732845290239, 20.944396974307, -7.6867707878716, 2.6185947787954, -2.808078114862, 1.2053369696517, -8.4566812812502E-03, -1.2654315477714, -1.1524407806681, 0.88521043984318, -0.64207765181607, 0.38493460186671, -0.85214708824206, 4.8972281541877, -3.0502617256965, 0.039420536879154, 0.12558408424308, -0.2799932969871, 1.389979956946, -2.018991502357, -8.2147637173963E-03, -0.47596035734923, 0.0439840744735, -0.44476435428739, 0.90572070719733, 0.70522450087967, 0.10770512626332, -0.32913623258954, -0.50871062041158, -0.022175400873096, 0.094260751665092, 0.16436278447961, -0.013503372241348, -0.014834345352472, 5.7922953628084E-04, 3.2308904703711E-03, 8.0964802996215E-05, -1.6557679795037E-04, -4.4923899061815E-05 };
	const int N = 40;

	double sum = _ni_R3[0] * log(del);
	for (int i = 1; i < N; i++)
	{
		sum = sum + _ni_R3[i] * pow(del, _Ii_R3[i-1]) * pow(tau, _Ji_R3[i-1]);
	}

	return sum;
}
//d(gibbs)/d(del)
static double _gibbs_ddel_R3(double del, double tau)
{
	const double _Ii_R3[39] = { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 8, 9, 9, 10, 10, 11 };
	const double  _Ji_R3[39] = { 0, 1, 2, 7, 10, 12, 23, 2, 6, 15, 17, 0, 2, 6, 7, 22, 26, 0, 2, 4, 16, 26, 0, 2, 4, 26, 1, 3, 26, 0, 2, 26, 2, 26, 2, 26, 0, 1, 26 };
	const double  _ni_R3[40] = { 1.0658070028513, -15.732845290239, 20.944396974307, -7.6867707878716, 2.6185947787954, -2.808078114862, 1.2053369696517, -8.4566812812502E-03, -1.2654315477714, -1.1524407806681, 0.88521043984318, -0.64207765181607, 0.38493460186671, -0.85214708824206, 4.8972281541877, -3.0502617256965, 0.039420536879154, 0.12558408424308, -0.2799932969871, 1.389979956946, -2.018991502357, -8.2147637173963E-03, -0.47596035734923, 0.0439840744735, -0.44476435428739, 0.90572070719733, 0.70522450087967, 0.10770512626332, -0.32913623258954, -0.50871062041158, -0.022175400873096, 0.094260751665092, 0.16436278447961, -0.013503372241348, -0.014834345352472, 5.7922953628084E-04, 3.2308904703711E-03, 8.0964802996215E-05, -1.6557679795037E-04, -4.4923899061815E-05 };
	const int N = 40;

	double sum = _ni_R3[0] * pow(del, -1);
	for (int i = 1; i < N; i++)
	{
		sum = sum + _ni_R3[i] * _Ii_R3[i-1] * pow(del, _Ii_R3[i-1] - 1)
			* pow(tau, _Ji_R3[i - 1]);
	}

	return sum;
}
//d(gibbs)^2/d^2(del)
static double _gibbs_dddel_R3(double del, double tau)
{
	const double _Ii_R3[39] = { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 8, 9, 9, 10, 10, 11 };
	const double  _Ji_R3[39] = { 0, 1, 2, 7, 10, 12, 23, 2, 6, 15, 17, 0, 2, 6, 7, 22, 26, 0, 2, 4, 16, 26, 0, 2, 4, 26, 1, 3, 26, 0, 2, 26, 2, 26, 2, 26, 0, 1, 26 };
	const double  _ni_R3[40] = { 1.0658070028513, -15.732845290239, 20.944396974307, -7.6867707878716, 2.6185947787954, -2.808078114862, 1.2053369696517, -8.4566812812502E-03, -1.2654315477714, -1.1524407806681, 0.88521043984318, -0.64207765181607, 0.38493460186671, -0.85214708824206, 4.8972281541877, -3.0502617256965, 0.039420536879154, 0.12558408424308, -0.2799932969871, 1.389979956946, -2.018991502357, -8.2147637173963E-03, -0.47596035734923, 0.0439840744735, -0.44476435428739, 0.90572070719733, 0.70522450087967, 0.10770512626332, -0.32913623258954, -0.50871062041158, -0.022175400873096, 0.094260751665092, 0.16436278447961, -0.013503372241348, -0.014834345352472, 5.7922953628084E-04, 3.2308904703711E-03, 8.0964802996215E-05, -1.6557679795037E-04, -4.4923899061815E-05 };
	const int N = 40;

	double sum = -_ni_R3[0] * pow(del, -2);
	for (int i = 1; i < N; i++)
	{
		sum = sum + _ni_R3[i] * _Ii_R3[i - 1] * (_Ii_R3[i - 1] - 1) *
			pow(del, _Ii_R3[i - 1] - 2) * pow(tau, _Ji_R3[i - 1]);
	}

	return sum;
}
//d(gibbs)/d(tau)
static double _gibbs_dtau_R3(double del, double tau)
{
	const double _Ii_R3[39] = { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 8, 9, 9, 10, 10, 11 };
	const double  _Ji_R3[39] = { 0, 1, 2, 7, 10, 12, 23, 2, 6, 15, 17, 0, 2, 6, 7, 22, 26, 0, 2, 4, 16, 26, 0, 2, 4, 26, 1, 3, 26, 0, 2, 26, 2, 26, 2, 26, 0, 1, 26 };
	const double  _ni_R3[40] = { 1.0658070028513, -15.732845290239, 20.944396974307, -7.6867707878716, 2.6185947787954, -2.808078114862, 1.2053369696517, -8.4566812812502E-03, -1.2654315477714, -1.1524407806681, 0.88521043984318, -0.64207765181607, 0.38493460186671, -0.85214708824206, 4.8972281541877, -3.0502617256965, 0.039420536879154, 0.12558408424308, -0.2799932969871, 1.389979956946, -2.018991502357, -8.2147637173963E-03, -0.47596035734923, 0.0439840744735, -0.44476435428739, 0.90572070719733, 0.70522450087967, 0.10770512626332, -0.32913623258954, -0.50871062041158, -0.022175400873096, 0.094260751665092, 0.16436278447961, -0.013503372241348, -0.014834345352472, 5.7922953628084E-04, 3.2308904703711E-03, 8.0964802996215E-05, -1.6557679795037E-04, -4.4923899061815E-05 };
	const int N = 40;

	double sum = 0;
	for (int i = 1; i < N; i++)
	{
		sum = sum + _ni_R3[i] * _Ji_R3[i - 1] * pow(del, _Ii_R3[i - 1])
			* pow(tau, _Ji_R3[i - 1]-1);
	}

	return sum;
}
//d(gibbs)^2/d^2(tau)
static double _gibbs_ddtau_R3(double del, double tau)
{
	const double _Ii_R3[39] = { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 8, 9, 9, 10, 10, 11 };
	const double  _Ji_R3[39] = { 0, 1, 2, 7, 10, 12, 23, 2, 6, 15, 17, 0, 2, 6, 7, 22, 26, 0, 2, 4, 16, 26, 0, 2, 4, 26, 1, 3, 26, 0, 2, 26, 2, 26, 2, 26, 0, 1, 26 };
	const double  _ni_R3[40] = { 1.0658070028513, -15.732845290239, 20.944396974307, -7.6867707878716, 2.6185947787954, -2.808078114862, 1.2053369696517, -8.4566812812502E-03, -1.2654315477714, -1.1524407806681, 0.88521043984318, -0.64207765181607, 0.38493460186671, -0.85214708824206, 4.8972281541877, -3.0502617256965, 0.039420536879154, 0.12558408424308, -0.2799932969871, 1.389979956946, -2.018991502357, -8.2147637173963E-03, -0.47596035734923, 0.0439840744735, -0.44476435428739, 0.90572070719733, 0.70522450087967, 0.10770512626332, -0.32913623258954, -0.50871062041158, -0.022175400873096, 0.094260751665092, 0.16436278447961, -0.013503372241348, -0.014834345352472, 5.7922953628084E-04, 3.2308904703711E-03, 8.0964802996215E-05, -1.6557679795037E-04, -4.4923899061815E-05 };
	const int N = 40;

	double sum = 0;
	for (int i = 1; i < N; i++)
	{
		sum = sum + _ni_R3[i] * _Ji_R3[i - 1] * (_Ji_R3[i - 1]-1)
			* pow(del, _Ii_R3[i - 1]) * pow(tau, _Ji_R3[i - 1] - 2);
	}

	return sum;
}
//d(gibbs)^2/(d(del) * d(tau))
static double _gibbs_ddel_dtau_R3(double del, double tau)
{
	const double _Ii_R3[39] = { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 8, 9, 9, 10, 10, 11 };
	const double  _Ji_R3[39] = { 0, 1, 2, 7, 10, 12, 23, 2, 6, 15, 17, 0, 2, 6, 7, 22, 26, 0, 2, 4, 16, 26, 0, 2, 4, 26, 1, 3, 26, 0, 2, 26, 2, 26, 2, 26, 0, 1, 26 };
	const double  _ni_R3[40] = { 1.0658070028513, -15.732845290239, 20.944396974307, -7.6867707878716, 2.6185947787954, -2.808078114862, 1.2053369696517, -8.4566812812502E-03, -1.2654315477714, -1.1524407806681, 0.88521043984318, -0.64207765181607, 0.38493460186671, -0.85214708824206, 4.8972281541877, -3.0502617256965, 0.039420536879154, 0.12558408424308, -0.2799932969871, 1.389979956946, -2.018991502357, -8.2147637173963E-03, -0.47596035734923, 0.0439840744735, -0.44476435428739, 0.90572070719733, 0.70522450087967, 0.10770512626332, -0.32913623258954, -0.50871062041158, -0.022175400873096, 0.094260751665092, 0.16436278447961, -0.013503372241348, -0.014834345352472, 5.7922953628084E-04, 3.2308904703711E-03, 8.0964802996215E-05, -1.6557679795037E-04, -4.4923899061815E-05 };
	const int N = 40;

	double sum = 0;
	for (int i = 1; i < N; i++)
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
	//K
	const double tStar = tCrit;
	//kg / m^3
	const double rhoStar = rhoCrit;

	double del = rho / rhoStar;
	double tau = tStar / temp;

	//divide by 1E+03 for difference in units from R & pressure
	return _gibbs_ddel_R3(del, tau) * del * rho * R * temp / 1E+03;
}
//specific internal energy as a function of density and temperature for region 3
double _u_Rho_T_R3(double rho, double temp)
{
	//K
	const double tStar = tCrit;
	//kg / m^3
	const double rhoStar = rhoCrit;

	double del = rho / rhoStar;
	double tau = tStar / temp;

	return _gibbs_dtau_R3(del, tau) * tau * R * temp;
}
//specific entropy as a function of density and temperature for region 3
double _s_Rho_T_R3(double rho, double temp)
{
	//K
	const double tStar = tCrit;
	//kg / m^3
	const double rhoStar = rhoCrit;

	double del = rho / rhoStar;
	double tau = tStar / temp;

	return R * ((tau * _gibbs_dtau_R3(del, tau)) - _gibbs_R3(del, tau));
}
//specific enthalpy as a function of density and temperature for region 3
double _h_Rho_T_R3(double rho, double temp)
{
	//K
	const double tStar = tCrit;
	//kg / m^3
	const double rhoStar = rhoCrit;

	double del = rho / rhoStar;
	double tau = tStar / temp;

	return R * temp * ((tau * _gibbs_dtau_R3(del, tau)) +
		(del * _gibbs_ddel_R3(del, tau)));
}
//specific isochoric heat capacity as a function of density and temperature for region 3
double _cv_Rho_T_R3(double rho, double temp)
{
	//K
	const double tStar = tCrit;
	//kg / m^3
	const double rhoStar = rhoCrit;

	double del = rho / rhoStar;
	double tau = tStar / temp;

	return -R * pow(tau, 2) * _gibbs_ddtau_R3(del, tau);
}
//specific isobaric heat capacity as a function of density and temperature for region 3
double _cp_Rho_T_R3(double rho, double temp)
{
	//K
	const double tStar = tCrit;
	//kg / m^3
	const double rhoStar = rhoCrit;

	double del = rho / rhoStar;
	double tau = tStar / temp;

	double a1 = -pow(tau, 2) * _gibbs_ddtau_R3(del, tau);
	double a2 = pow((del * _gibbs_ddel_R3(del, tau))-
		(del * tau * _gibbs_ddel_dtau_R3(del, tau)), 2);
	double a3 = (2 * del * _gibbs_ddel_R3(del, tau)) +
		(pow(del, 2) * _gibbs_dddel_R3(del, tau));
	double a4 = a1 + (a2 / a3);

	return R * a4;
}
//speed of sound as a function of density and temperature for region 3
double _w_Rho_T_R3(double rho, double temp)
{
	//convert to J / (kg * K) from kJ / (kg * K)
	double _R = R * 1000;
	//K
	const double tStar = tCrit;
	//kg / m^3
	const double rhoStar = rhoCrit;

	double del = rho / rhoStar;
	double tau = tStar / temp;

	double a1 = (2 * del * _gibbs_ddel_R3(del, tau)) +
		(pow(del, 2) * _gibbs_dddel_R3(del, tau));
	double a2 = pow((del * _gibbs_ddel_R3(del, tau)) -
		(del * tau * _gibbs_ddel_dtau_R3(del, tau)), 2);
	double a3 = pow(tau,2) * _gibbs_ddtau_R3(del, tau);
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

//Properties as functions of pressure and temperature for region 3

//specific volume as a function of pressure and temperature for region 3
double _v_P_T_R3(double press, double temp)
{
	//MPa
	const double pSat_643d15K = 21.04336732;
	//MPa
	double pSat_623d15K = _PSat_T_R3_R4_b(623.15);
	//MPa
	const double p3cd = 19.00881189173929;
	//MPa
	const double pSat_v0d00264 = 21.93161551;
	//MPa
	const double pSat_v0d00385 = 21.90096265;
	//K
	double Tsat = _TSat_P_R3_R4_b(press);

	//subregions a, b
	if
	(
		press > 40
		&& press <= 100
	)
	{
		double Tab = _T3ab_v_T_P(press);

		//subregion a
		if (temp <= Tab)
		{
			return _va_P_T(press,temp);
		}
		//subregion b
		else
		{
			return _vb_P_T(press,temp);
		}
	}
	//subregions c, d, e, f
	else if
	(
		press > 25
		&& press <= 40
	)
	{
		double Tab = _T3ab_v_T_P(press);
		double Tcd = _T3cd_v_T_P(press);
		double Tef = _T3ef_v_T_P(press);

		//subregion c
		if (temp <= Tcd)
		{
			return _vc_P_T(press,temp);
		}
		//subregion d
		else if
		(
			temp > Tcd
			&& temp <= Tab
		)
		{
			return _vd_P_T(press,temp);
		}
		//subregion e
		else if
		(
			temp > Tab
			&& temp <= Tef
		)
		{
			return _ve_P_T(press,temp);
		}
		//subregion f
		else
		{
			return _vf_P_T(press,temp);
		}
	}
	//subregions c, g, h, i, j, k
	else if
	(
		press > 23.5
		&& press <= 25
	)
	{
		double Tcd = _T3cd_v_T_P(press);
		double Tef = _T3ef_v_T_P(press);
		double Tgh = _T3gh_v_T_P(press);
		double Tij = _T3ij_v_T_P(press);
		double Tjk = _T3jk_v_T_P(press);

		//subregion c
		if (temp <= Tcd)
		{
			return _vc_P_T(press,temp);
		}
		//subregion g
		else if
		(
			temp > Tcd
			&& temp <= Tgh
		)
		{
			return _vg_P_T(press,temp);
		}
		//subregion h
		else if
		(
			temp > Tgh
			&& temp <= Tef
		)
		{
			return _vh_P_T(press,temp);
		}
		//subregion i
		else if
		(
			temp > Tef
			&& temp <= Tij
		)
		{
			return _vi_P_T(press,temp);
		}
		//subregion j
		else if
		(
			temp > Tij
			&& temp <= Tjk
		)
		{
			return _vj_P_T(press,temp);
		}
		//subregion k
		else
		{
			return _vk_P_T(press,temp);
		}
	}
	//subregions c, l, h, i, j, k
	else if
	(
		press > 23
		&& press <= 23.5
	)
	{
		double Tcd = _T3cd_v_T_P(press);
		double Tef = _T3ef_v_T_P(press);
		double Tgh = _T3gh_v_T_P(press);
		double Tij = _T3ij_v_T_P(press);
		double Tjk = _T3jk_v_T_P(press);

		//subregion c
		if (temp <= Tcd)
		{
			return _vc_P_T(press,temp);
		}
		//subregion l
		else if
		(
			temp > Tcd
			&& temp <= Tgh
		)
		{
			return _vl_P_T(press,temp);
		}
		//subregion h
		else if
		(
			temp > Tgh
			&& temp <= Tef
		)
		{
			return _vh_P_T(press,temp);
		}
		//subregion i
		else if
		(
			temp > Tef
			&& temp <= Tij
		)
		{
			return _vi_P_T(press,temp);
		}
		//subregion j
		else if
		(
			temp > Tij
			&& temp <= Tjk
		)
		{
			return _vj_P_T(press,temp);
		}
		//subregion k
		else
		{
			return _vk_P_T(press,temp);
		}
	}
	//subregions c, l, m, n, o, p, j, k
	else if
	(
		press > 22.5
		&& press <= 23
	)
	{
		double Tcd = _T3cd_v_T_P(press);
		double Tef = _T3ef_v_T_P(press);
		double Tgh = _T3gh_v_T_P(press);
		double Tij = _T3ij_v_T_P(press);
		double Tjk = _T3jk_v_T_P(press);
		double Tmn = _T3mn_v_T_P(press);
		double Top = _T3op_v_T_P(press);

		//subregion c
		if (temp <= Tcd)
		{
			return _vc_P_T(press,temp);
		}
		//subregion l
		else if
		(
			temp > Tcd
			&& temp <= Tgh
		)
		{
			return _vl_P_T(press,temp);
		}
		//subregion m
		else if
		(
			temp > Tgh
			&& temp <= Tmn
		)
		{
			return _vm_P_T(press,temp);
		}
		//subregion n
		else if
		(
			temp > Tmn
			&& temp <= Tef
		)
		{
			return _vn_P_T(press,temp);
		}
		//subregion o
		else if
		(
			temp > Tef
			&& temp <= Top
		)
		{
			return _vo_P_T(press,temp);
		}
		//subregion p
		else if
		(
			temp > Top
			&& temp <= Tij
		)
		{
			return _vp_P_T(press,temp);
		}
		//subregion j
		else if
		(
			temp > Tij
			&& temp <= Tjk
		)
		{
			return _vj_P_T(press,temp);
		}
		//subregion k
		else
		{
			return _vk_P_T(press,temp);
		}
	}
	//subregions c, q, r, k || critical subregions
	else if
	(
		press > pSat_643d15K
		&& press <= 22.5
	)
	{

		//subregions u, w, v, x
		if
		(
			press > 22.11
			&& press <= 22.5
		)
		{
			double Tef = _T3ef_v_T_P(press);
			double Tqu = _T3qu_v_T_P(press);
			double Trx = _T3rx_v_T_P(press);
			double Twx = _T3wx_v_T_P(press);
			double Tuv = _T3uv_v_T_P(press);

			//subregion u
			if
			(
				temp > Tqu
				&& temp <= Tuv
			)
			{
				return _vu_P_T(press,temp);
			}
			//subregion w
			else if
			(
				temp > Tef
				&& temp <= Twx
			)
			{
				return _vw_P_T(press,temp);
			}
			//subregion v
			else if
			(
				temp > Tuv
				&& temp <= Tef
			)
			{
				return _vv_P_T(press,temp);
			}
			//subregion x
			else if
			(
				temp > Twx
				&& temp <= Trx
			)
			{
				return _vx_P_T(press,temp);
			}
		}
		//subregions u, z, y, x
		else if
		(
			press > 22.064
			&& press <= 22.11
		)
		{
			double Tef = _T3ef_v_T_P(press);
			double Tqu = _T3qu_v_T_P(press);
			double Trx = _T3rx_v_T_P(press);
			double Twx = _T3wx_v_T_P(press);
			double Tuv = _T3uv_v_T_P(press);

			//subregion u
			if
			(
				temp > Tqu
				&& temp <= Tuv
			)
			{
				return _vu_P_T(press,temp);
			}
			//subregion z
			else if
			(
				temp > Tef
				&& temp <= Twx
			)
			{
				return _vz_P_T(press,temp);
			}
			//subregion y
			else if
			(
				temp > Tuv
				&& temp <= Tef
			)
			{
				return _vy_P_T(press,temp);
			}
			//subregion x
			else if
			(
				temp > Twx
				&& temp <= Trx
			)
			{
				return _vx_P_T(press,temp);
			}
		}
		//subregions u, y
		else if
		(
			press > pSat_v0d00264
			&& press <= 22.064
			&& temp <= Tsat
		)
		{
			double Tqu = _T3qu_v_T_P(press);
			double Tuv = _T3uv_v_T_P(press);

			//subregion u
			if
			(
				temp > Tqu
				&& temp <= Tuv
			)
			{
				return _vu_P_T(press,temp);
			}
			//subregion y
			else if (temp > Tqu)
			{
				return _vy_P_T(press,temp);
			}
		}
		//subregions u
		else if
		(
			press > pSat_643d15K
			&& press <= pSat_v0d00264
			&& temp <= Tsat
		)
		{
			double Tqu = _T3qu_v_T_P(press);

			//subregion u
			if (temp > Tqu)
			{
				return _vu_P_T(press,temp);
			}
		}
		//subregions z, x
		else if
		(
			press > pSat_v0d00385
			&& press <= 22.064
			&& temp >= Tsat
		)
		{
			double Trx = _T3rx_v_T_P(press);
			double Twx = _T3wx_v_T_P(press);

			//subregion z
			if (temp <= Twx)
			{
				return _vz_P_T(press,temp);
			}
			//subregion x
			else if
			(
				temp > Twx
				&& temp <= Trx
			)
			{
				return _vx_P_T(press,temp);
			}
		}
		//subregions x
		else if
		(
			press > pSat_643d15K
			&& press <= pSat_v0d00385
			&& temp >= Tsat
		)
		{
			double Trx = _T3rx_v_T_P(press);

			//subregion x
			if (temp <= Trx)
			{
				return _vx_P_T(press,temp);
			}
		}

		double Tcd = _T3cd_v_T_P(press);
		double Tjk = _T3jk_v_T_P(press);
		double Tqu = _T3qu_v_T_P(press);
		double Trx = _T3rx_v_T_P(press);

		//subregion c
		if (temp <= Tcd)
		{
			return _vc_P_T(press,temp);
		}
		//subregion q
		else if
		(
			temp > Tcd
			&& temp <= Tqu
		)
		{
			return _vq_P_T(press,temp);
		}
		//subregion r
		else if
		(
			temp > Trx
			&& temp <= Tjk
		)
		{
			return _vr_P_T(press,temp);
		}
		//subregion k
		else
		{
			return _vk_P_T(press,temp);
		}
	}
	//subregions c, s, r, k
	else if
	(
		press > 20.5
		&& press <= pSat_643d15K
	)
	{
		double Tcd = _T3cd_v_T_P(press);
		double Tjk = _T3jk_v_T_P(press);

		//subregion c
		if (temp <= Tcd)
		{
			return _vc_P_T(press,temp);
		}
		//subregion s
		else if
		(
			temp > Tcd
			&& temp <= Tsat
		)
		{
			return _vs_P_T(press,temp);
		}
		//subregion r
		else if
		(
			temp > Tsat
			&& temp <= Tjk
		)
		{
			return _vr_P_T(press,temp);
		}
		//subregion k
		else
		{
			return _vk_P_T(press,temp);
		}
	}
	//subregions c, s, t
	else if
	(
		press > p3cd
		&& press <= 20.5
	)
	{
		double Tcd = _T3cd_v_T_P(press);

		//subregion c
		if (temp <= Tcd)
		{
			return _vc_P_T(press,temp);
		}
		//subregion s
		else if
		(
			temp > Tcd
			&& temp <= Tsat
		)
		{
			return _vs_P_T(press,temp);
		}
		//subregion t
		else
		{
			return _vt_P_T(press,temp);
		}
	}
	//subregions c, t
	else if
	(
		press > pSat_623d15K
		&& press <= p3cd
	)
	{
		//subregion c
		if (temp <= Tsat)
		{
			return _vc_P_T(press,temp);
		}
		//subregion t
		else
		{
			return _vt_P_T(press,temp);
		}
	}
}
//specific internal energy as a function of pressure and temperature for region 3
double _u_P_T_R3(double press, double temp)
{
	double v = _v_P_T_R3(press,temp);
	return _u_Rho_T_R3(1/v, temp);
}
//specific entropy as a function of pressure and temperature for region 3
double _s_P_T_R3(double press, double temp)
{
	double v = _v_P_T_R3(press,temp);
	return _s_Rho_T_R3(1/v, temp);
}
//specific enthalpy as a function of pressure and temperature for region 3
double _h_P_T_R3(double press, double temp)
{
	double v = _v_P_T_R3(press,temp);
	return _h_Rho_T_R3(1/v, temp);
}
//specific isochoric heat capacity as a function of pressure and temperature for region 3
double _cv_P_T_R3(double press, double temp)
{
	double v = _v_P_T_R3(press,temp);
	return _cv_Rho_T_R3(1/v, temp);
}
//specific isobaric heat capacity as a function of pressure and temperature for region 3
double _cp_P_T_R3(double press, double temp)
{
	double v = _v_P_T_R3(press,temp);
	return _cp_Rho_T_R3(1/v, temp);
}
//speed of sound as a function of pressure and temperature for region 3
double _w_P_T_R3(double press, double temp)
{
	double v = _v_P_T_R3(press,temp);
	return _w_Rho_T_R3(1/v, temp);
}

//Properties as functions of pressure and enthalpy for region 3

//Temperature as a function of pressure and enthalpy for region 3
double _T_P_h_R3(double press, double enth)
{
	//kJ/kg
	double hPred = _h_P_R3ab(press);

	//subregion a
	if
	(
		enth < hPred
	)
	{
		return _T_P_h_R3a(press,enth);
	}
	//subregion b
	else
	{
		return _T_P_h_R3b(press,enth);
	}
}
//specific volume as a function of pressure and enthalpy for region 3
double _v_P_h_R3(double press, double enth)
{
	//kJ/kg
	double hPred = _h_P_R3ab(press);

	//subregion a
	if
	(
		enth < hPred
	)
	{
		return _v_P_h_R3a(press,enth);
	}
	//subregion b
	else
	{
		return _v_P_h_R3b(press,enth);
	}
}
//specific internal energy as a function of pressure and enthalpy for region 3
double _u_P_h_R3(double press, double enth)
{
    double v = _v_P_h_R3(press, enth);
    double T = _T_P_h_R3(press, enth);

    return _u_v_T_R3(v,T);
}
//specific entropy as a function of pressure and enthalpy for region 3
double _s_P_h_R3(double press, double enth)
{
    double v = _v_P_h_R3(press, enth);
    double T = _T_P_h_R3(press, enth);

    return _s_v_T_R3(v,T);
}
//specific isochoric heat capacity as a function of pressure and enthalpy for region 3
double _cv_P_h_R3(double press, double enth)
{
    double v = _v_P_h_R3(press, enth);
    double T = _T_P_h_R3(press, enth);

    return _cv_v_T_R3(v,T);
}
//specific isobaric heat capacity as a function of pressure and enthalpy for region 3
double _cp_P_h_R3(double press, double enth)
{
    double v = _v_P_h_R3(press, enth);
    double T = _T_P_h_R3(press, enth);

    return _cp_v_T_R3(v,T);
}
//speed of sound as a function of pressure and enthalpy for region 3
double _w_P_h_R3(double press, double enth)
{
    double v = _v_P_h_R3(press, enth);
    double T = _T_P_h_R3(press, enth);

    return _w_v_T_R3(v,T);
}

//Properties as functions of pressure and entropy for region 3

//temperature as a function of pressure and entropy for region 3
double _T_P_s_R3(double press, double entr)
{
    //kJ/(kg*K)
    const double sCrit = 4.41202148223476;

    if (entr < sCrit)
    {
        return _T_R3a_P_s(press, entr);
    }
    else
    {
        return _T_R3b_P_s(press, entr);
    }
}
//specific volume as a function of pressure and entropy for region 3
double _v_P_s_R3(double press, double entr)
{
    //kJ/(kg*K)
    const double sCrit = 4.41202148223476;

    if (entr < sCrit)
    {
        return _v_R3a_P_s(press, entr);
    }
    else
    {
        return _v_R3b_P_s(press, entr);
    }
}
//specific internal energy as a function of pressure and entropy for region 3
double _u_P_s_R3(double press, double entr)
{
    double v = _v_P_s_R3(press, entr);
    double T = _T_P_s_R3(press, entr);

    return _u_v_T_R3(v,T);
}
//specific entropy as a function of pressure and entropy for region 3
double _h_P_s_R3(double press, double entr)
{
    double v = _v_P_s_R3(press, entr);
    double T = _T_P_s_R3(press, entr);

    return _h_v_T_R3(v,T);
}
//specific isochoric heat capacity as a function of pressure and entropy for region 3
double _cv_P_s_R3(double press, double entr)
{
    double v = _v_P_s_R3(press, entr);
    double T = _T_P_s_R3(press, entr);

    return _cv_v_T_R3(v,T);
}
//specific isobaric heat capacity as a function of pressure and entropy for region 3
double _cp_P_s_R3(double press, double entr)
{
    double v = _v_P_s_R3(press, entr);
    double T = _T_P_s_R3(press, entr);

    return _cp_v_T_R3(v,T);
}
//speed of sound as a function of pressure and entropy for region 3
double _w_P_s_R3(double press, double entr)
{
    double v = _v_P_s_R3(press, entr);
    double T = _T_P_s_R3(press, entr);

    return _w_v_T_R3(v,T);
}

//Properties as functions of enthalpy and entropy for region 3

//P(h,s) for subregion a
double _P_h_s_R3a(double h, double s)
{
	const int _I_P_h_s_R3a[33] = {0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 6, 7, 8, 10, 10, 14, 18, 20, 22, 22, 24, 28, 28, 32, 32};
	const int _J_P_h_s_R3a[33] = {0, 1, 5, 0, 3, 4, 8, 14, 6, 16, 0, 2, 3, 0, 1, 4, 5, 28, 28, 24, 1, 32, 36, 22, 28, 36, 16, 28, 36, 16, 36, 10, 28};
	const double _n_P_h_s_R3a[33] = {0.770889828326934E+01, -0.260835009128688E+02, 0.267416218930389E+03, 0.172221089496844E+02, -0.293542332145970E+03, 0.614135601882478E+03, -0.610562757725674E+05, -0.651272251118218E+08, 0.735919313521937E+05, -0.116646505914191E+11, 0.355267086434461E+02, -0.596144543825955E+03, -0.475842430145708E+03, 0.696781965359503E+02, 0.335674250377312E+03, 0.250526809130882E+05, 0.146997380630766E+06, 0.538069315091534E+20, 0.143619827291346E+22, 0.364984866165994E+20, -0.254741561156775E+04, 0.240120197096563E+28, -0.393847464679496E+30, 0.147073407024852E+25, -0.426391250432059E+32, 0.194509340621077E+39, 0.666212132114896E+24, 0.706777016552858E+34, 0.175563621975576E+42, 0.108408607429124E+29, 0.730872705175151E+44, 0.159145847398870E+25, 0.377121605943324E+41};

    //MPa
    const double pStar = 99;
    //kJ/kg
    const double hStar = 2300;
    //kJ/(kg*K)
    const double sStar = 4.4;

    double eta = h / hStar;
    double sigma = s / sStar;
    const int N = 33;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_P_h_s_R3a[i] *
            pow(eta - 1.01, _I_P_h_s_R3a[i]) *
            pow(sigma - 0.750, _J_P_h_s_R3a[i]);
        sum = sum + calc;
    }

    return sum * pStar;
}
//P(h,s) for subregion b
double _P_h_s_R3b(double h, double s)
{
	const int _I_P_h_s_R3b[35] = {-12, -12, -12, -12, -12, -10, -10, -10, -10, -8, -8, -6, -6, -6, -6, -5, -4, -4, -4, -3, -3, -3, -3, -2, -2, -1, 0, 2, 2, 5, 6, 8, 10, 14, 14};
	const int _J_P_h_s_R3b[35] = {2, 10, 12, 14, 20, 2, 10, 14, 18, 2, 8, 2, 6, 7, 8, 10, 4, 5, 8, 1, 3, 5, 6, 0, 1, 0, 3, 0, 1, 0, 1, 1, 1, 3, 7};
	const double _n_P_h_s_R3b[35] = {0.125244360717979E-12, -0.126599322553716E-01, 0.506878030140626E+01, 0.317847171154202E+02, -0.391041161399932E+06, -0.975733406392044E-10, -0.186312419488279E+02, 0.510973543414101E+03, 0.373847005822362E+06, 0.299804024666572E-07, 0.200544393820342E+02, -0.498030487662829E-05, -0.102301806360030E+02, 0.552819126990325E+02, -0.206211367510878E+03, -0.794012232324832E+04, 0.782248472028153E+01, -0.586544326902468E+02, 0.355073647696481E+04, -0.115303107290162E-03, -0.175092403171802E+01, 0.257981687748160E+03, -0.727048374179467E+03, 0.121644822609198E-03, 0.393137871762692E-01, 0.704181005909296E-02, -0.829108200698110E+02, -0.265178818131250, 0.137531682453991E+02, -0.522394090753046E+02, 0.240556298941048E+04, -0.227361631268928E+05, 0.890746343932567E+05, -0.239234565822486E+08, 0.568795808129714E+10};

    //MPa
    const double pStar = 16.6;
    //kJ/kg
    const double hStar = 2800;
    //kJ/(kg*K)
    const double sStar = 5.3;

    double eta = h / hStar;
    double sigma = s / sStar;
    const int N = 35;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_P_h_s_R3b[i] *
            pow(eta - 0.681, _I_P_h_s_R3b[i]) *
            pow(sigma - 0.792, _J_P_h_s_R3b[i]);
        sum = sum + calc;
    }

    return pow(sum, -1) * pStar;
}

//P(h,s) for region 3
double _P_h_s_R3(double enth, double entr)
{
	//kJ/(kg*K)
	const double sCrit = 4.41202148223476;
	//kJ/kg
	double h3a = _h3a_prime(entr);
	//kJ/kg
	double h2c3b = _h2c3b_s_2prime(entr);

	if
	(
		enth <= h3a
		|| entr <= sCrit
	)
	{
		return _P_h_s_R3a(enth, entr);
	}
	else if
	(
		enth >= h2c3b
		|| entr > sCrit
	)
	{
		return _P_h_s_R3b(enth, entr);
	}
}
//T(h,s) for region 3
double _T_h_s_R3(double h, double s)
{
	double p = _P_h_s_R3(h,s);
	return _T_P_h_R3(p,h);
}
//v(h,s) for region 3
double _v_h_s_R3(double h, double s)
{
	double p = _P_h_s_R3(h,s);
	return _v_P_s_R3(p,s);
}
//u(h,s) for region 3
double _u_h_s_R3(double h, double s)
{
	double v = _v_h_s_R3(h,s);
	double T = _T_h_s_R3(h,s);
	return _u_v_T_R3(v, T);
}
//cv(h,s) for region 3
double _cv_h_s_R3(double h, double s)
{
	double v = _v_h_s_R3(h,s);
	double T = _T_h_s_R3(h,s);
	return _cv_v_T_R3(v, T);
}
//cp(h,s) for region 3
double _cp_h_s_R3(double h, double s)
{
	double v = _v_h_s_R3(h,s);
	double T = _T_h_s_R3(h,s);
	return _cp_v_T_R3(v, T);
}
//w(h,s) for region 3
double _w_h_s_R3(double h, double s)
{
	double v = _v_h_s_R3(h,s);
	double T = _T_h_s_R3(h,s);
	return _w_v_T_R3(v, T);
}
