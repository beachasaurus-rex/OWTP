#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsRegion4 : public AccTestBase {};

extern "C"
{
    DLL_IMPORT double Psat_T_R4(double);

    DLL_IMPORT double Tsat_P_R4(double);

    DLL_IMPORT double Tsat_h_s_R4(double,double);

    DLL_IMPORT double Psat_h_s_R4(double,double);

    DLL_IMPORT double x_h_s_R4(double,double);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 35 on page 34.

TEST_F(AccTestsRegion4, Psat_T_300K)
{
    const double T = 300;
    const double pExp = 0.353658941E-02;

    double pTest = Psat_T_R4(T);
    double PErr = AbsRelativeErr(pTest, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion4, Psat_T_500K)
{
    const double T = 500;
    const double pExp = 0.263889776E+01;

    double pTest = Psat_T_R4(T);
    double PErr = AbsRelativeErr(pTest, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion4, Psat_T_600K)
{
    const double T = 600;
    const double pExp = 0.123443146E+02;

    double pTest = Psat_T_R4(T);
    double PErr = AbsRelativeErr(pTest, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 36 on page 36.

TEST_F(AccTestsRegion4, Tsat_P_0d1MPa)
{
    const double P = 0.1;
    const double tExp = 0.372755919E+03;

    double tTest = Tsat_P_R4(P);
    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(AccTestsRegion4, Tsat_P_1MPa)
{
    const double P = 1;
    const double tExp = 0.453035632E+03;

    double tTest = Tsat_P_R4(P);
    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(AccTestsRegion4, Tsat_P_10MPa)
{
    const double P = 10;
    const double tExp = 0.584149488E+03;

    double tTest = Tsat_P_R4(P);
    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised supplementary Release on Backward
//Equations p(h,s) for Region 3, Equations as a function of h and s for Region
//Boundaries, and an Equation Tsat(h,s) for Region 4 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in table 29 on page 31.

TEST_F(AccTestsRegion4, Tsat_h_s_1800h_5d3s)
{
    const double h = 1800;
    const double s = 5.3;
    const double TExp = 3.468475498E+02;

    double TTest = Tsat_h_s_R4(h,s);
    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion4, Tsat_h_s_2400h_6d0s)
{
    const double h = 2400;
    const double s = 6.0;
    const double TExp = 4.251373305E+02;

    double TTest = Tsat_h_s_R4(h,s);
    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion4, Tsat_h_s_2500h_5d5s)
{
    const double h = 2500;
    const double s = 5.5;
    const double TExp = 5.225579013E+02;

    double TTest = Tsat_h_s_R4(h,s);
    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion4, Psat_h_s_1800h_5d3s)
{
    const double h = 1800;
    const double s = 5.3;
    const double pExp = 0.0365398932;

    double pTest = Psat_h_s_R4(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion4, Psat_h_s_2400h_6d0s)
{
    const double h = 2400;
    const double s = 6.0;
    const double pExp = 0.502008352;

    double pTest = Psat_h_s_R4(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion4, Psat_h_s_2500h_5d5s)
{
    const double h = 2500;
    const double s = 5.5;
    const double pExp = 3.93633491;

    double pTest = Psat_h_s_R4(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion4, x_h_s_1800h_5d3s)
{
    const double h = 1800;
    const double s = 5.3;
    const double xExp = 0.641808120;

    double xTest = x_h_s_R4(h,s);
    double xErr = AbsRelativeErr(xTest, xExp);
    bool xPass = IsAcceptable(xErr);
    ASSERT_TRUE(xPass);
}
TEST_F(AccTestsRegion4, x_h_s_2400h_6d0s)
{
    const double h = 2400;
    const double s = 6.0;
    const double xExp = 0.834735532;

    double xTest = x_h_s_R4(h,s);
    double xErr = AbsRelativeErr(xTest, xExp);
    bool xPass = IsAcceptable(xErr);
    ASSERT_TRUE(xPass);
}
TEST_F(AccTestsRegion4, x_h_s_2500h_5d5s)
{
    const double h = 2500;
    const double s = 5.5;
    const double xExp = 0.824721845;

    double xTest = x_h_s_R4(h,s);
    double xErr = AbsRelativeErr(xTest, xExp);
    bool xPass = IsAcceptable(xErr);
    ASSERT_TRUE(xPass);
}
