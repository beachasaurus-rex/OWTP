#pragma once

#include <math.h>
#include "..\..\..\ReferenceConstants.h"

//All Boundary Equations for v(T,P)



//Constants/functions used for all boundary equations

//K
static const int _tStar_T3subregs_v_T_P = 1;
//kPa
static const int _pStar_T3_subregs_v_T_P = 1000;

static double _theta_T3_subregs_v_T_P(double temp)
{
	return temp / _tStar_T3subregs_v_T_P;
}
static double _pi_T3_subregs_v_T_P(double press)
{
	return press / _pStar_T3_subregs_v_T_P;
}

//Iteration Constants R3ab

static const int _i_v_T_P_R3ab[5] = { 1, 2, 3, 4, 5 };
static const int _I_v_T_P_R3ab[5] = { 0, 1, 2, -1, -2 };
static const double _n_v_T_P_R3ab[5] = { 1547.93642129415, -187.661219490113, 21.3144632222113, -1918.87498864292, 918.419702359447 };

//Iteration Constants R3cd

static const int _i_v_T_P_R3cd[4] = { 1, 2, 3, 4 };
static const int _I_v_T_P_R3cd[4] = { 0, 1, 2, 3 };
static const double _n_v_T_P_R3cd[4] = { 585.276966696349, 2.78233532206915, -1.27283549295878E-02, 1.59090746562729E-04 };

//Iteration Constants R3gh

static const int _i_v_T_P_R3gh[5] = { 1, 2, 3, 4, 5 };
static const int _I_v_T_P_R3gh[5] = { 0, 1, 2, 3, 4 };
static const double _n_v_T_P_R3gh[5] = { -24928.4240900418, 4281.43584791546, -269.02917314013, 7.51608051114157, -7.87105249910383E-02 };

//Iteration Constants R3ij

static const int _i_v_T_P_R3ij[5] = { 1, 2, 3, 4, 5 };
static const int _I_v_T_P_R3ij[5] = { 0, 1, 2, 3, 4 };
static const double _n_v_T_P_R3ij[5] = { 584.814781649163, -0.616179320924617, 0.260763050899562, -5.87071076864459E-03, 5.15308185433082E-05 };

//Iteration Constants R3jk

static const int _i_v_T_P_R3jk[5] = { 1, 2, 3, 4, 5 };
static const int _I_v_T_P_R3jk[5] = { 0, 1, 2, 3, 4 };
static const double _n_v_T_P_R3jk[5] = { 617.229772068439, -7.70600270141675, 0.697072596851896, -1.57391839848015E-02, 1.37897492684194E-04 };

//Iteration Constants R3mn

static const int _i_v_T_P_R3mn[5] = { 1, 2, 3, 4, 5 };
static const int _I_v_T_P_R3mn[5] = { 0, 1, 2, -1, -2 };
static const double _n_v_T_P_R3mn[5] = { 535.339483742384, 7.61978122720128, -0.158365725441648, 1.92871054508108E-03, 1.37897492684194E-04 };

//Iteration Constants R3op

static const int _i_v_T_P_R3op[5] = { 1, 2, 3, 4, 5 };
static const int _I_v_T_P_R3op[13] = { 0, 1, 2, -1, -2 };
static const double _n_v_T_P_R3op[13] = { 969.461372400213, -332.500170441278, 64.2859598466067, 773.845935768222, -1523.13732937084 };

//Iteration Constants R3qu

static const int _i_v_T_P_R3qu[4] = { 1, 2, 3, 4 };
static const int _I_v_T_P_R3qu[12] = { 0, 1, 2, 3 };
static const double _n_v_T_P_R3qu[12] = { 565.603648239126, 5.29062258221222, -0.102020639611016, 1.22240301070145E-03 };

//Iteration Constants R3rx

static const int _i_v_T_P_R3rx[4] = { 1, 2, 3, 4 };
static const int _I_v_T_P_R3rx[4] = { 0, 1, 2, 3 };
static const double _n_v_T_P_R3rx[4] = { 584.561202520006, -1.02961025163669, 0.243293362700452, -2.94905044740799E-03 };

//Boundary Equations R3ab

static double T3ab_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);

	double sum = 0;
	for (int i = 0; i < ITERCONST(_i_v_T_P_R3ab); i++)
	{
		sum = sum + _n_v_T_P_R3ab[i] * pow(log(pi), _I_v_T_P_R3ab[i]);
	}

	return sum * _tStar_T3subregs_v_T_P;
}

//Boundary Equations R3cd

static double T3cd_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);

	double sum = 0;
	for (int i = 0; i < ITERCONST(_i_v_T_P_R3cd); i++)
	{
		sum = sum + _n_v_T_P_R3cd[i] * pow(pi, _I_v_T_P_R3cd[i]);
	}

	return sum * _tStar_T3subregs_v_T_P;
}

//Boundary Equations R3ef

static const double _thetaSat_dPi_c_v_T_P = 3.727888004;

static double T3ef_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);
	return ((pi - 22.064) + 647.096);
}

//Boundary Equations R3gh

static double T3gh_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);

	double sum = 0;
	for (int i = 0; i < ITERCONST(_i_v_T_P_R3gh); i++)
	{
		sum = sum + _n_v_T_P_R3gh[i] * pow(pi, _I_v_T_P_R3gh[i]);
	}

	return sum * _tStar_T3subregs_v_T_P;
}

//Boundary Equations R3ij

static double T3ij_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);

	double sum = 0;
	for (int i = 0; i < ITERCONST(_i_v_T_P_R3ij); i++)
	{
		sum = sum + _n_v_T_P_R3ij[i] * pow(pi, _I_v_T_P_R3ij[i]);
	}

	return sum * _tStar_T3subregs_v_T_P;
}

//Boundary Equations R3jk

static double T3jk_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);

	double sum = 0;
	for (int i = 0; i < ITERCONST(_i_v_T_P_R3jk); i++)
	{
		sum = sum + _n_v_T_P_R3jk[i] * pow(pi, _I_v_T_P_R3jk[i]);
	}

	return sum * _tStar_T3subregs_v_T_P;
}

//Boundary Equations R3mn

static double T3mn_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);

	double sum = 0;
	for (int i = 0; i < ITERCONST(_i_v_T_P_R3mn); i++)
	{
		sum = sum + _n_v_T_P_R3mn[i] * pow(pi, _I_v_T_P_R3mn[i]);
	}

	return sum * _tStar_T3subregs_v_T_P;
}

//Boundary Equations R3op

static double T3op_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);

	double sum = 0;
	for (int i = 0; i < ITERCONST(_i_v_T_P_R3op); i++)
	{
		sum = sum + _n_v_T_P_R3op[i] * pow(log(pi), _I_v_T_P_R3op[i]);
	}

	return sum * _tStar_T3subregs_v_T_P;
}

//Boundary Equations R3qu

static double T3qu_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);

	double sum = 0;
	for (int i = 0; i < ITERCONST(_i_v_T_P_R3qu); i++)
	{
		sum = sum + _n_v_T_P_R3qu[i] * pow(pi, _I_v_T_P_R3qu[i]);
	}

	return sum * _tStar_T3subregs_v_T_P;
}

//Boundary Equations R3rx

static double T3rx_v_T_P(double pressure)
{
	double pi = _pi_T3_subregs_v_T_P(pressure);

	double sum = 0;
	for (int i = 0; i < ITERCONST(_i_v_T_P_R3rx); i++)
	{
		sum = sum + _n_v_T_P_R3rx[i] * pow(pi, _I_v_T_P_R3rx[i]);
	}

	return sum * _tStar_T3subregs_v_T_P;
}
