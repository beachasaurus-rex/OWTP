#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "..\..\..\ReferenceConstants.h"
#endif

//All Subregion Boundary Equations for v(P,h)



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
