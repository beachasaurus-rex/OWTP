#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "ReferenceConstants.h"
#endif

//gamma(pi,tau) ideal
static double _gamma_ideal(double pi, double tau)
{
    const int J[6] = {0, 1, -3, -2, -1, 2};
    const double n[6] = {-13.179983674201, 6.8540841634434, -0.024805148933466, 0.36901534980333, -3.1161318213925, -0.32961626538917};
    const int N = 6;

    double sum = log(pi);
    for (int i = 0; i < N; i++)
    {
        double calc = n[i] * pow(tau, J[i]);
        sum = sum + calc;
    }

    return sum;
}
//dgamma(pi,tau)/dpi ideal
static double _dgamma_dpi_ideal(double pi)
{
    return 1.0 / pi;
}
//dgamma(pi,tau)/ddpi ideal
static double _dgamma_ddpi_ideal(double pi)
{
    return -1.0 / pow(pi, 2);
}
//dgamma(pi,tau)/dtau ideal
static double _dgamma_dtau_ideal(double pi, double tau)
{
    const int J[6] = {0, 1, -3, -2, -1, 2};
    const double n[6] = {-13.179983674201, 6.8540841634434, -0.024805148933466, 0.36901534980333, -3.1161318213925, -0.32961626538917};
    const int N = 6;

    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = n[i] * J[i] * pow(tau, J[i]-1);
        sum = sum + calc;
    }

    return sum;
}
//dgamma(pi,tau)/ddtau ideal
static double _dgamma_ddtau_ideal(double pi, double tau)
{
    const int J[6] = {0, 1, -3, -2, -1, 2};
    const double n[6] = {-13.179983674201, 6.8540841634434, -0.024805148933466, 0.36901534980333, -3.1161318213925, -0.32961626538917};
    const int N = 6;

    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = n[i] * J[i] * (J[i] - 1) * pow(tau, J[i]-2);
        sum = sum + calc;
    }

    return sum;
}
//dgamma(pi,tau)/dpidtau ideal
static double _dgamma_dpi_dtau_ideal()
{
    return 0;
}

//gamma(pi,tau) residual
static double _gamma_res(double pi, double tau)
{
    const int I[6] = {1, 1, 1, 2, 2, 3};
    const int J[6] = {1, 2, 3, 3, 9, 7};
    const double n[6] = {1.5736404855259E-03, 9.0153761673944E-04, -5.0270077677648E-03, 2.2440037409485E-06, -4.1163275453471E-06, 3.7919454822955E-08};
    const int N = 6;

    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = n[i] * pow(pi, I[i]) * pow(tau, J[i]);
        sum = sum + calc;
    }

    return sum;
}
//dgamma(pi,tau)/dpi residual
static double _dgamma_dpi_res(double pi, double tau)
{
    const int I[6] = {1, 1, 1, 2, 2, 3};
    const int J[6] = {1, 2, 3, 3, 9, 7};
    const double n[6] = {1.5736404855259E-03, 9.0153761673944E-04, -5.0270077677648E-03, 2.2440037409485E-06, -4.1163275453471E-06, 3.7919454822955E-08};
    const int N = 6;

    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = n[i] * I[i] * pow(pi, I[i] - 1) * pow(tau, J[i]);
        sum = sum + calc;
    }

    return sum;
}
//dgamma(pi,tau)/ddpi residual
static double _dgamma_ddpi_res(double pi, double tau)
{
    const int I[6] = {1, 1, 1, 2, 2, 3};
    const int J[6] = {1, 2, 3, 3, 9, 7};
    const double n[6] = {1.5736404855259E-03, 9.0153761673944E-04, -5.0270077677648E-03, 2.2440037409485E-06, -4.1163275453471E-06, 3.7919454822955E-08};
    const int N = 6;

    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = n[i] * I[i] * (I[i] - 1) * pow(pi, I[i] - 2) * pow(tau, J[i]);
        sum = sum + calc;
    }

    return sum;
}
//dgamma(pi,tau)/dtau residual
static double _dgamma_dtau_res(double pi, double tau)
{
    const int I[6] = {1, 1, 1, 2, 2, 3};
    const int J[6] = {1, 2, 3, 3, 9, 7};
    const double n[6] = {1.5736404855259E-03, 9.0153761673944E-04, -5.0270077677648E-03, 2.2440037409485E-06, -4.1163275453471E-06, 3.7919454822955E-08};
    const int N = 6;

    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = n[i] * J[i] * pow(pi, I[i]) * pow(tau, J[i] - 1);
        sum = sum + calc;
    }

    return sum;
}
//dgamma(pi,tau)/ddtau residual
static double _dgamma_ddtau_res(double pi, double tau)
{
    const int I[6] = {1, 1, 1, 2, 2, 3};
    const int J[6] = {1, 2, 3, 3, 9, 7};
    const double n[6] = {1.5736404855259E-03, 9.0153761673944E-04, -5.0270077677648E-03, 2.2440037409485E-06, -4.1163275453471E-06, 3.7919454822955E-08};
    const int N = 6;

    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = n[i] * J[i] * (J[i] - 1) * pow(pi, I[i]) * pow(tau, J[i] - 2);
        sum = sum + calc;
    }

    return sum;
}
//dgamma(pi,tau)/dpidtau residual
static double _dgamma_dpi_dtau_res(double pi, double tau)
{
    const int I[6] = {1, 1, 1, 2, 2, 3};
    const int J[6] = {1, 2, 3, 3, 9, 7};
    const double n[6] = {1.5736404855259E-03, 9.0153761673944E-04, -5.0270077677648E-03, 2.2440037409485E-06, -4.1163275453471E-06, 3.7919454822955E-08};
    const int N = 6;

    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = n[i] * I[i] * J[i] * pow(pi, I[i] - 1) * pow(tau, J[i] - 1);
        sum = sum + calc;
    }

    return sum;
}

//gamma(pi,tau)
static double _gamma(double pi, double tau)
{
    return  _gamma_ideal(pi,tau) + _gamma_res(pi,tau);
}
//dgamma(pi,tau)/dpi
static double _dgamma_dpi(double pi, double tau)
{
    return  _dgamma_dpi_ideal(pi) + _dgamma_dpi_res(pi,tau);
}
//dgamma(pi,tau)/ddpi
static double _dgamma_ddpi(double pi, double tau)
{
    return  _dgamma_ddpi_ideal(pi) + _dgamma_ddpi_res(pi,tau);
}
//dgamma(pi,tau)/dtau
static double _dgamma_dtau(double pi, double tau)
{
    return  _dgamma_dtau_ideal(pi,tau) + _dgamma_dtau_res(pi,tau);
}
//dgamma(pi,tau)/ddtau
static double _dgamma_ddtau(double pi, double tau)
{
    return  _dgamma_ddtau_ideal(pi,tau) + _dgamma_ddtau_res(pi,tau);
}
//dgamma(pi,tau)/dpidtau
static double _dgamma_dpi_dtau(double pi, double tau)
{
    return  _dgamma_dpi_dtau_ideal() + _dgamma_dpi_dtau_res(pi,tau);
}

//v(P,T)
double _v_P_T_R5(double P, double T)
{
    const double pStar = 1;
    const double tStar = 1000;
    double pi = P / pStar;
    double tau = tStar / T;

    //divide by 1E+03 for difference in units from R & pressure
    return (R * T * pi * _dgamma_dpi(pi, tau)) / P / 1E+03;
}
//u(P,T)
double _u_P_T_R5(double P, double T)
{
    const double pStar = 1;
    const double tStar = 1000;
    double pi = P / pStar;
    double tau = tStar / T;

    return R * T * (tau * _dgamma_dtau(pi,tau) - pi * _dgamma_dpi(pi,tau));
}
//s(P,T)
double _s_P_T_R5(double P, double T)
{
    const double pStar = 1;
    const double tStar = 1000;
    double pi = P / pStar;
    double tau = tStar / T;

    return R * (tau * _dgamma_dtau(pi,tau) - _gamma(pi,tau));
}
//h(P,T)
double _h_P_T_R5(double P, double T)
{
    const double pStar = 1;
    const double tStar = 1000;
    double pi = P / pStar;
    double tau = tStar / T;

    return R * T * tau * _dgamma_dtau(pi,tau);
}
//cp(P,T)
double _cp_P_T_R5(double P, double T)
{
    const double pStar = 1;
    const double tStar = 1000;
    double pi = P / pStar;
    double tau = tStar / T;

    return R * -pow(tau,2) * _dgamma_ddtau(pi,tau);
}
//cv(P,T)
double _cv_P_T_R5(double P, double T)
{
    const double pStar = 1;
    const double tStar = 1000;
    double pi = P / pStar;
    double tau = tStar / T;

    double a = -pow(tau,2) * _dgamma_ddtau(pi,tau);
    double b = pow(1 + pi * _dgamma_dpi_res(pi,tau) - tau * pi
        * _dgamma_dpi_dtau_res(pi,tau), 2);
    double c = 1 - pow(pi,2) * _dgamma_ddpi_res(pi,tau);

    return R * (a - (b / c));
}
//w(P,T)
double _w_P_T_R5(double P, double T)
{
    //convert to J / (kg * K) from kJ / (kg * K)
    double _R = R * 1000;
    const double pStar = 1;
    const double tStar = 1000;
    double pi = P / pStar;
    double tau = tStar / T;

    double a = 1 + 2 * pi * _dgamma_dpi_res(pi,tau) +
        pow(pi,2) * pow(_dgamma_dpi_res(pi,tau), 2);
    double b = pow(1 + pi * _dgamma_dpi_res(pi,tau) - tau * pi
        * _dgamma_dpi_dtau_res(pi,tau), 2);
    double c = 1 - pow(pi,2) * _dgamma_ddpi_res(pi,tau);
    double d = pow(tau,2) * _dgamma_ddtau(pi,tau);

    double e = a / (c + (b / d));
    return pow(_R * T * e, 0.5);
}
