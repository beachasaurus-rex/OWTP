#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "..\..\..\ReferenceConstants.h"
#endif

//All Subregion Boundary Equations for v(P,s)



//Iteration Constants for T(P,s) for subregion a

static const int _I_T_P_s_R3a[33] = {-12, -12, -10, -10, -10, -10, -8, -8, -8, -8, -6, -6, -6, -5, -5, -5, -4, -4, -4, -2, -2, -1, -1, 0, 0, 0, 1, 2, 2, 3, 8, 8, 10};
static const int _J_T_P_s_R3a[33] = {28, 32, 4, 10, 12, 14, 5, 7, 8, 28, 2, 6, 32, 0, 14, 32, 6, 10, 36, 1, 4, 1, 6, 0, 1, 4, 0, 0, 3, 2, 0, 1, 2};
static const double _n_T_P_s_R3a[33] = {1500420082.63875, -159397258480.424, 5.02181140217975E-04, -67.2057767855466, 1450.58545404456, -8238.8953488889, -0.154852214233853, 11.2305046746695, -29.7000213482822, 43856513263.5495, 1.37837838635464E-03, -2.97478527157462, 9717779473494.13, -5.71527767052398E-05, 28830.794977842, -74442828926270.3, 12.8017324848921, -368.275545889071, 6.64768904779177E+15, 0.044935925195888, -4.22897836099655, -0.240614376434179, -4.74341365254924, 0.72409399912611, 0.923874349695897, 3.99043655281015, 3.84066651868009E-02, -3.59344365571848E-03, -0.735196448821653, 0.188367048396131, 1.41064266818704E-04, -2.57418501496337E-03, 1.23220024851555E-03};

//Iteration Constants for T(P,s) for subregion b

static const int _I_T_P_s_R3b[28] = {-12, -12, -12, -12, -8, -8, -8, -6, -6, -6, -5, -5, -5, -5, -5, -4, -3, -3, -2, 0, 2, 3, 4, 5, 6, 8, 12, 14};
static const int _J_T_P_s_R3b[28] = {1, 3, 4, 7, 0, 1, 3, 0, 2, 4, 0, 1, 2, 4, 6, 12, 1, 6, 2, 0, 1, 1, 0, 24, 0, 3, 1, 2};
static const double _n_T_P_s_R3b[28] = {0.52711170160166, -40.1317830052742, 153.020073134484, -2247.99398218827, -0.193993484669048, -1.40467557893768, 42.6799878114024, 0.752810643416743, 22.6657238616417, -622.873556909932, -0.660823667935396, 0.841267087271658, -25.3717501764397, 485.708963532948, 880.531517490555, 2650155.92794626, -0.359287150025783, -656.991567673753, 2.41768149185367, 0.856873461222588, 0.655143675313458, -0.213535213206406, 5.62974957606348E-03, -316955725450471, -6.99997000152457E-04, 1.19845803210767E-02, 1.93848122022095E-05, -2.15095749182309E-05};

//Temperature(Pressure,Entropy) for subregion a

double _T_R3a_P_s(double press, double entr)
{
    //K
    const double tStar = 760;
    //kPa
    const double pStar = 100E+03;
    //kJ/(kg*K)
    const double sStar = 4.4;

    int N = ITERCONST(_I_T_P_s_R3a);
    double pi = press / pStar;
    double sigma = entr / sStar;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_T_P_s_R3a[i] *
            pow(pi + 0.240, _I_T_P_s_R3a[i]) *
            pow(sigma - 0.703, _J_T_P_s_R3a[i]);
        sum = sum + calc;
    }

    return sum * tStar;
}

//Temperature(Pressure,Entropy) for subregion b

double _T_R3b_P_s(double press, double entr)
{
    //K
    const double tStar = 860;
    //kPa
    const double pStar = 100E+03;
    //kJ/(kg*K)
    const double sStar = 5.3;

    int N = ITERCONST(_I_T_P_s_R3b);
    double pi = press / pStar;
    double sigma = entr / sStar;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_T_P_s_R3b[i] *
            pow(pi + 0.760, _I_T_P_s_R3b[i]) *
            pow(sigma - 0.818, _J_T_P_s_R3b[i]);
        sum = sum + calc;
    }

    return sum * tStar;
}
