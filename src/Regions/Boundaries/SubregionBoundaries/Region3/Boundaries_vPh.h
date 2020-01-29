#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "..\..\..\ReferenceConstants.h"
#endif

//All Subregion Boundary Equations for v(P,h)



//Iterator variable data for h(P) for subregion ab

static const double _n_h_P_R3ab[4] = {0.201464004206875E+04, 0.374696550136983E+01, -0.219921901054187E-01, 0.875131686009950E-04};

//Enthalpy(Pressure) for subregion boundary ab

double _h_R3ab_P(double press)
{
    //kJ/kg
    double hStar = 1;
    //kPa
    double pStar = 1000;

    double pi = press / pStar;
    return hStar *
        (
        _n_h_P_R3ab[0] + _n_h_P_R3ab[1] * pi + _n_h_P_R3ab[2] * pow(pi,2) +
        _n_h_P_R3ab[3] * pow(pi,3)
        );
}

//Iterator variable data for T(P,h) for subregion a

static const int _I_T_P_h_R3a[31] = {-12, -12, -12, -12, -12, -12, -12, -12, -10, -10, -10, -8, -8, -8, -8, -5, -3, -2, -2, -2, -1, -1, 0, 0, 1, 3, 3, 4, 4, 10, 12};
static const int _J_T_P_h_R3a[31] = {0, 1, 2, 6, 14, 16, 20, 22, 1, 5, 12, 0, 2, 4, 10, 2, 0, 1, 3, 4, 0, 2, 0, 1, 1, 0, 1, 0, 3, 4, 5};
static const double _n_T_P_h_R3a[31] = {-1.33645667811215E-07, 4.55912656802978E-06, -1.46294640700979E-05, 6.3934131297008E-03, 372.783927268847, -7186.54377460447, 573494.7521034, -2675693.29111439, -3.34066283302614E-05, -2.45479214069597E-02, 47.8087847764996, 7.64664131818904E-06, 1.28350627676972E-03, 1.71219081377331E-02, -8.51007304583213, -1.36513461629781E-02, -3.84460997596657E-06, 3.37423807911655E-03, -0.551624873066791, 0.72920227710747, -9.92522757376041E-03, -0.119308831407288, 0.793929190615421, 0.454270731799386, 0.20999859125991, -6.42109823904738E-03, -0.023515586860454, 2.52233108341612E-03, -7.64885133368119E-03, 1.36176427574291E-02, -1.33027883575669E-02};

//Iterator variable data for T(P,h) for subregion b

static const int _I_T_P_h_R3b[33] = {-12, -12, -10, -10, -10, -10, -10, -8, -8, -8, -8, -8, -6, -6, -6, -4, -4, -3, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 1, 3, 5, 6, 8};
static const int _J_T_P_h_R3b[33] = {0, 1, 0, 1, 5, 10, 12, 0, 1, 2, 4, 10, 0, 1, 2, 0, 1, 5, 0, 4, 2, 4, 6, 10, 14, 16, 0, 2, 1, 1, 1, 1, 1};
static const double _n_T_P_h_R3b[33] = {3.2325457364492E-05, -1.27575556587181E-04, -4.75851877356068E-04, 1.56183014181602E-03, 0.105724860113781, -85.8514221132534, 724.140095480911, 2.96475810273257E-03, -5.92721983365988E-03, -1.26305422818666E-02, -0.115716196364853, 84.9000969739595, -1.08602260086615E-02, 1.54304475328851E-02, 7.50455441524466E-02, 2.52520973612982E-02, -6.02507901232996E-02, -3.07622221350501, -5.74011959864879E-02, 5.03471360939849, -0.925081888584834, 3.91733882917546, -77.314600713019, 9493.08762098587, -1410437.19679409, 8491662.30819026, 0.861095729446704, 0.32334644281172, 0.873281936020439, -0.436653048526683, 0.286596714529479, -0.131778331276228, 6.76682064330275E-03};

//Temperature(Pressure,Enthalpy) for subregion a

double _T_R3a_P_h(double press, double enth)
{
    //K
    double tStar = 760;
    //kPa
    double pStar = 100E+03;
    //kJ/kg
    double hStar = 2300;

    double eta = enth / hStar;
    double pi = press / pStar;
    int N = ITERCONST(_I_T_P_h_R3a);
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_T_P_h_R3a[i] *
            pow(pi + 0.240, _I_T_P_h_R3a[i]) *
            pow(eta - 0.615, _J_T_P_h_R3a[i]);
        sum = sum + calc;
    }

    return sum * tStar;
}

//Temperature(Pressure,Enthalpy) for subregion b

double _T_R3b_P_h(double press, double enth)
{
    //K
    double tStar = 860;
    //kPa
    double pStar = 100E+03;
    //kJ/kg
    double hStar = 2800;

    double eta = enth / hStar;
    double pi = press / pStar;
    int N = ITERCONST(_I_T_P_h_R3b);
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_T_P_h_R3b[i] *
            pow(pi + 0.298, _I_T_P_h_R3b[i]) *
            pow(eta - 0.720, _J_T_P_h_R3b[i]);
        sum = sum + calc;
    }

    return sum * tStar;
}

//Iterator variable data for v(P,h) for subregion a

static const int _I_v_P_h_R3a[32] = {-12, -12, -12, -12, -10, -10, -10, -8, -8, -6, -6, -6, -4, -4, -3, -2, -2, -1, -1, -1, -1, 0, 0, 1, 1, 1, 2, 2, 3, 4, 5, 8};
static const int _J_v_P_h_R3a[32] = {6, 8, 12, 18, 4, 7, 10, 5, 12, 3, 4, 22, 2, 3, 7, 3, 16, 0, 1, 2, 3, 0, 1, 0, 1, 2, 0, 2, 0, 2, 2, 2};
static const double _n_v_P_h_R3a[32] = {5.29944062966028E-03, -0.170099690234461, 11.1323814312927, -2178.98123145125, -5.06061827980875E-04, 0.556495239685324, -9.43672726094016, -0.297856807561527, 93.9353943717186, 1.92944939465981E-02, 0.421740664704763, -3689141.2628233, -7.37566847600639E-03, -0.354753242424366, -1.99768169338727, 1.15456297059049, 5683.6687581596, 8.08169540124668E-03, 0.172416341519307, 1.04270175292927, -0.297691372792847, 0.560394465163593, 0.275234661176914, -0.148347894866012, -6.51142513478515E-02, -2.92468715386302, 6.64876096952665E-02, 3.52335014263844, -1.46340792313332E-02, -2.24503486668184, 1.10533464706142, -4.08757344495612E-02};

//Iterator variable data for v(P,h) for subregion b

static const int _I_v_P_h_R3b[30] = {-12, -12, -8, -8, -8, -8, -8, -8, -6, -6, -6, -6, -6, -6, -4, -4, -4, -3, -3, -2, -2, -1, -1, -1, -1, 0, 1, 1, 2, 2};
static const int _J_v_P_h_R3b[30] = {0, 1, 0, 1, 3, 6, 7, 8, 0, 1, 2, 5, 6, 10, 3, 6, 10, 0, 2, 1, 2, 0, 1, 4, 5, 0, 0, 1, 2, 6};
static const double _n_v_P_h_R3b[30] = {-2.25196934336318E-09, 1.40674363313486E-08, 2.3378408528056E-06, -3.31833715229001E-05, 1.07956778514318E-03, -0.271382067378863, 1.07202262490333, -0.853821329075382, -2.15214194340526E-05, 7.6965608822273E-04, -4.31136580433864E-03, 0.453342167309331, -0.507749535873652, -100.475154528389, -0.219201924648793, -3.21087965668917, 607.567815637771, 5.57686450685932E-04, 0.18749904002955, 9.05368030448107E-03, 0.285417173048685, 3.29924030996098E-02, 0.239897419685483, 4.82754995951394, -11.8035753702231, 0.169490044091791, -1.79967222507787E-02, 3.71810116332674E-02, -5.36288335065096E-02, 1.6069710109252};

//v(Pressure,Enthalpy) for subregion a

double _v_R3a_P_h(double press, double enth)
{
    //m^3/kg
    double vStar = 0.0028;
    //kPa
    double pStar = 100E+03;
    //kJ/kg
    double hStar = 2100;

    double pi = press / pStar;
    double eta = enth / hStar;
    int N = ITERCONST(_I_v_P_h_R3a);
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_v_P_h_R3a[i] *
            pow(pi + 0.128, _I_v_P_h_R3a[i]) *
            pow(eta - 0.727, _J_v_P_h_R3a[i]);
        sum = sum + calc;
    }

    return sum * vStar;
}

//v(Pressure,Enthalpy) for subregion b

double _v_R3b_P_h(double press, double enth)
{
    //m^3/kg
    double vStar = 0.0088;
    //kPa
    double pStar = 100E+03;
    //kJ/kg
    double hStar = 2800;

    double pi = press / pStar;
    double eta = enth / hStar;
    int N = ITERCONST(_I_v_P_h_R3b);
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_v_P_h_R3b[i] *
            pow(pi + 0.0661, _I_v_P_h_R3b[i]) *
            pow(eta - 0.720, _J_v_P_h_R3b[i]);
        sum = sum + calc;
    }

    return sum * vStar;
}
