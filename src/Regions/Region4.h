#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "ReferenceConstants.h"
#endif

#ifndef REGION1_H
    #define REGION1_H
    #include "Regions/Region1.h"
#endif

#ifndef REGION2_H
    #define REGION2_H
    #include "Regions/Region2.h"
#endif

//Psat(T)
double _Psat_T_R4(double T)
{
    const double n[10] = {1167.0521452767, -724213.16703206, -17.073846940092, 12020.82470247, -3232555.0322333, 14.91510861353, -4823.2657361591, 405113.40542057, -0.23855557567849, 650.17534844798};
    const double pStar = 1;
    const double tStar = 1;

    double phi = (T / tStar) +
        (n[8] / ((T / tStar) - n[9]));

    double a = pow(phi, 2) + phi * n[0] + n[1];
    double b = pow(phi, 2) * n[2] + phi * n[3] + n[4];
    double c = pow(phi, 2) * n[5] + phi * n[6] + n[7];

    double d1 = 2 * c;
    double d2 = -b + pow(pow(b,2) - 4 * a * c, 0.5);

    return pStar * pow(d1 / d2, 4);
}

//Tsat(P)
double _Tsat_P_R4(double P)
{
    const double n[10] = {1167.0521452767, -724213.16703206, -17.073846940092, 12020.82470247, -3232555.0322333, 14.91510861353, -4823.2657361591, 405113.40542057, -0.23855557567849, 650.17534844798};
    const double pStar = 1;
    const double tStar = 1;

    double beta = pow(P / pStar, 0.25);

    double e = pow(beta, 2) + beta * n[2] + n[5];
    double f = pow(beta, 2) * n[0] + beta * n[3] + n[6];
    double g = pow(beta, 2) * n[1] + beta * n[4] + n[7];

    double d1 = 2 * g;
    double d2 = -f - pow(pow(f, 2) - 4 * e * g, 0.5);
    double d = d1 / d2;

    double h  = pow(pow(n[9] + d, 2) - 4 * (n[8] + d * n[9]), 0.5);
    return tStar * ((n[9] + d - h) / 2.0);
}

//Tsat(h,s)
double _Tsat_h_s_R4(double enth, double entr)
{
	const int _I_TSatMetaphase_s[36] = {0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 8, 10, 10, 12, 14, 14, 16, 16, 18, 18, 18, 20, 28};
	const int _J_TSatMetaphase_s[36] = {0, 3, 12, 0, 1, 2, 5, 0, 5, 8, 0, 2, 3, 4, 0, 1, 1, 2, 4, 16, 6, 8, 22, 1, 20, 36, 24, 1, 28, 12, 32, 14, 22, 36, 24, 36};
	const double _n_TSatMetaphase_s[36] = {0.179882673606601, -0.267507455199603, 0.116276722612600E+01, 0.147545428713616, -0.512871635973248, 0.421333567697984, 0.563749522189870, 0.429274443819153, -0.335704552142140E+01, 0.108890916499278E+02, -0.248483390456012, 0.304153221906390, -0.494819763939905, 0.107551674933261E+01, 0.733888415457688E-01, 0.140170545411085E-01, -0.106110975998808, 0.168324361811875E-01, 0.125028363714877E+01, 0.101316840309509E+04, -0.151791558000712E+01, 0.524277865990866E+02, 0.230495545563912E+05, 0.249459806365456E-01, 0.210796467412137E+07, 0.366836848613065E+09, -0.144814105365163E+09, -0.179276373003590E-02, 0.489955602100459E+10, 0.471262212070518E+03, -0.829294390198652E+11, -0.171545662263191E+04, 0.355777682973575E+07, 0.586062760258436E+12, -0.129887635078195E+08, 0.317247449371057E+11};

    //K
    const double tStar = 550;
    //kJ/kg
    const double hStar = 2800;
    //kJ/(kg*K)
    const double sStar = 9.2;
    const int N = 36;

    double eta = enth / hStar;
    double sigma = entr / sStar;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_TSatMetaphase_s[i] *
            pow(eta - 0.119, _I_TSatMetaphase_s[i]) *
            pow(sigma - 1.07, _J_TSatMetaphase_s[i]);
        sum = sum + calc;
    }

    return sum * tStar;
}

//Psat(h,s)
double _Psat_h_s_R4(double h, double s)
{
	double T = _Tsat_h_s_R4(h,s);
	return _Psat_T_R4(T);
}

//x(h,s)
double _x_h_s_R4(double h, double s)
{
	double T = _Tsat_h_s_R4(h,s);
	double P = _Psat_h_s_R4(h,s);
	double hf = h_R1_T_P(T,P);
	double hg = h_R2_T_P(T,P);
	return (h - hf) / (hg - hf);
}
