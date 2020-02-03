#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsRegion4 : public AccTestBase {};

extern "C"
{
    DLL_IMPORT double Psat_T_R4(double);

    DLL_IMPORT double Tsat_P_R4(double);
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
