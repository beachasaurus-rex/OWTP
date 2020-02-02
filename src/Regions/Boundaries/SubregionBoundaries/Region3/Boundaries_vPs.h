#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "..\..\..\ReferenceConstants.h"
#endif

//All Subregion Boundary Equations for v(P,s)



//Temperature(Pressure,Entropy) for subregion a
double _T_R3a_P_s(double press, double entr)
{
	const int _I_T_P_s_R3a[33] = {-12, -12, -10, -10, -10, -10, -8, -8, -8, -8, -6, -6, -6, -5, -5, -5, -4, -4, -4, -2, -2, -1, -1, 0, 0, 0, 1, 2, 2, 3, 8, 8, 10};
	const int _J_T_P_s_R3a[33] = {28, 32, 4, 10, 12, 14, 5, 7, 8, 28, 2, 6, 32, 0, 14, 32, 6, 10, 36, 1, 4, 1, 6, 0, 1, 4, 0, 0, 3, 2, 0, 1, 2};
	const double _n_T_P_s_R3a[33] = {1500420082.63875, -159397258480.424, 5.02181140217975E-04, -67.2057767855466, 1450.58545404456, -8238.8953488889, -0.154852214233853, 11.2305046746695, -29.7000213482822, 43856513263.5495, 1.37837838635464E-03, -2.97478527157462, 9717779473494.13, -5.71527767052398E-05, 28830.794977842, -74442828926270.3, 12.8017324848921, -368.275545889071, 6.64768904779177E+15, 0.044935925195888, -4.22897836099655, -0.240614376434179, -4.74341365254924, 0.72409399912611, 0.923874349695897, 3.99043655281015, 3.84066651868009E-02, -3.59344365571848E-03, -0.735196448821653, 0.188367048396131, 1.41064266818704E-04, -2.57418501496337E-03, 1.23220024851555E-03};

    //K
    const double tStar = 760;
    //MPa
    const double pStar = 100;
    //kJ/(kg*K)
    const double sStar = 4.4;

    const int N = 33;
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
	const int _I_T_P_s_R3b[28] = {-12, -12, -12, -12, -8, -8, -8, -6, -6, -6, -5, -5, -5, -5, -5, -4, -3, -3, -2, 0, 2, 3, 4, 5, 6, 8, 12, 14};
	const int _J_T_P_s_R3b[28] = {1, 3, 4, 7, 0, 1, 3, 0, 2, 4, 0, 1, 2, 4, 6, 12, 1, 6, 2, 0, 1, 1, 0, 24, 0, 3, 1, 2};
	const double _n_T_P_s_R3b[28] = {0.52711170160166, -40.1317830052742, 153.020073134484, -2247.99398218827, -0.193993484669048, -1.40467557893768, 42.6799878114024, 0.752810643416743, 22.6657238616417, -622.873556909932, -0.660823667935396, 0.841267087271658, -25.3717501764397, 485.708963532948, 880.531517490555, 2650155.92794626, -0.359287150025783, -656.991567673753, 2.41768149185367, 0.856873461222588, 0.655143675313458, -0.213535213206406, 5.62974957606348E-03, -316955725450471, -6.99997000152457E-04, 1.19845803210767E-02, 1.93848122022095E-05, -2.15095749182309E-05};

    //K
    const double tStar = 860;
    //MPa
    const double pStar = 100;
    //kJ/(kg*K)
    const double sStar = 5.3;

    const int N = 28;
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

//Temperature(Pressure,Entropy) for region 3
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

//SpecifivVolume(Pressure,Entropy) for subregion a
double _v_R3a_P_s(double press, double entr)
{
	const int _I_v_P_s_R3a[28] = {-12, -12, -12, -10, -10, -10, -10, -8, -8, -8, -8, -6, -5, -4, -3, -3, -2, -2, -1, -1, 0, 0, 0, 1, 2, 4, 5, 6};
	const int _J_v_P_s_R3a[28] = {10, 12, 14, 4, 8, 10, 20, 5, 6, 14, 16, 28, 1, 5, 2, 4, 3, 8, 1, 2, 0, 1, 3, 0, 0, 2, 2, 0};
	const double _n_v_P_s_R3a[28] = {79.5544074093975, -2382.6124298459, 17681.3100617787, -1.10524727080379E-03, -15.3213833655326, 297.544599376982, -35031520.6871242, 0.277513761062119, -0.523964271036888, -148011.182995403, 1600148.99374266, 1708023226634.27, 2.46866996006494E-04, 1.6532608479798, -0.118008384666987, 2.537986423559, 0.965127704669424, -28.2172420532826, 0.203224612353823, 1.10648186063513, 0.52612794845128, 0.277000018736321, 1.08153340501132, -7.44127885357893E-02, 1.64094443541384E-02, -6.80468275301065E-02, 0.025798857610164, -1.45749861944416E-04};

    //m^3/kg
    const double vStar = 0.0028;
    //MPa
    const double pStar = 100;
    //kJ/(kg*K)
    const double sStar = 4.4;

    double pi = press / pStar;
    double sigma = entr / sStar;
    const int N = 28;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_v_P_s_R3a[i] *
            pow(pi + 0.187, _I_v_P_s_R3a[i]) *
            pow(sigma - 0.755, _J_v_P_s_R3a[i]);
        sum = sum + calc;
    }

    return sum * vStar;
}

//SpecifivVolume(Pressure,Entropy) for subregion b
double _v_R3b_P_s(double press, double entr)
{
	const int _I_v_P_s_R3b[31] = {-12, -12, -12, -12, -12, -12, -10, -10, -10, -10, -8, -5, -5, -5, -4, -4, -4, -4, -3, -2, -2, -2, -2, -2, -2, 0, 0, 0, 1, 1, 2};
	const int _J_v_P_s_R3b[31] = {0, 1, 2, 3, 5, 6, 0, 1, 2, 4, 0, 1, 2, 3, 0, 1, 2, 3, 1, 0, 1, 2, 3, 4, 12, 0, 1, 2, 0, 2, 2};
	const double _n_v_P_s_R3b[31] = {5.91599780322238E-05, -1.85465997137856E-03, 1.04190510480013E-02, 5.9864730203859E-03, -0.771391189901699, 1.72549765557036, -4.67076079846526E-04, 1.34533823384439E-02, -8.08094336805495E-02, 0.508139374365767, 1.28584643361683E-03, -1.63899353915435, 5.86938199318063, -2.92466667918613, -6.14076301499537E-03, 5.76199014049172, -12.1613320606788, 1.67637540957944, -7.44135838773463, 3.78168091437659E-02, 4.01432203027688, 16.0279837479185, 3.17848779347728, -3.58362310304853, -1159952.60446827, 0.199256573577909, -0.122270624794624, -19.1449143716586, -1.50448002905284E-02, 14.6407900162154, -3.2747778718823};

    //m^3/kg
    const double vStar = 0.0088;
    //MPa
    const double pStar = 100;
    //kJ/(kg*K)
    const double sStar = 5.3;

    double pi = press / pStar;
    double sigma = entr / sStar;
    const int N = 31;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_v_P_s_R3b[i] *
            pow(pi + 0.298, _I_v_P_s_R3b[i]) *
            pow(sigma - 0.816, _J_v_P_s_R3b[i]);
        sum = sum + calc;
    }

    return sum * vStar;
}

//SpecifivVolume(Pressure,Entropy) for region 3
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
