#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsRegionBoundaries : public AccTestBase {};

extern "C"
{
    DLL_IMPORT double P_R2_R3_b(double);
    DLL_IMPORT double T_R2_R3_b(double);

    DLL_IMPORT double pSat_R3_R4_b(double);
    DLL_IMPORT double tSat_R3_R4_b(double);
    DLL_IMPORT double pSat_h_R3_R4(double);
    DLL_IMPORT double pSat_s_R3_R4(double);

    DLL_IMPORT double h1_prime(double);
    DLL_IMPORT double h3a_prime(double);

    DLL_IMPORT double h2ab_s_2prime(double);
    DLL_IMPORT double h2c3b_s_2prime(double);

    DLL_IMPORT double hB13_s(double);

    DLL_IMPORT double TB23_s(double,double);

    DLL_IMPORT double Tsat_h_s_R4(double,double);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" on page 6, immediately before
//the section regarding the equations for Region 1.

TEST_F(AccTestsRegionBoundaries, T_P_R2_R3)
{
    const double press = 0.165291643E+02;
    const double tExp = 0.623150000E+03;

    double T = T_R2_R3_b(press);
    double TErr = AbsRelativeErr(T, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, P_T_R2_R3)
{
    const double T = 0.623150000E+03;
    const double pExp = 0.165291643E+02;

    double press = P_R2_R3_b(T);
    double PErr = AbsRelativeErr(press, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 35 on page 34.

TEST_F(AccTestsRegionBoundaries, Psat_T_R3_R4_300k)
{
    const double temp = 300;
    const double pExp = 0.353658941E-02;

    double pActual = pSat_R3_R4_b(temp);
    double PErr = AbsRelativeErr(pActual, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegionBoundaries, Psat_T_R3_R4_500k)
{
    const double temp = 500;
    const double pExp = 0.263889776E+01;

    double pActual = pSat_R3_R4_b(temp);
    double PErr = AbsRelativeErr(pActual, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegionBoundaries, Psat_T_R3_R4_600k)
{
    const double temp = 600;
    const double pExp = 0.123443146E+02;

    double pActual = pSat_R3_R4_b(temp);
    double PErr = AbsRelativeErr(pActual, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 36 on page 36.

TEST_F(AccTestsRegionBoundaries, Tsat_P_R3_R4_0d1MPa)
{
    const double press = 0.1;
    const double tExp = 0.372755919E+03;

    double tActual = tSat_R3_R4_b(press);
    double TErr = AbsRelativeErr(tActual, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, Tsat_P_R3_R4_1MPa)
{
    const double press = 1;
    const double tExp = 0.453035632E+03;

    double tActual = tSat_R3_R4_b(press);
    double TErr = AbsRelativeErr(tActual, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, Tsat_P_R3_R4_10MPa)
{
    const double press = 10;
    const double tExp = 0.584149488E+03;

    double tActual = tSat_R3_R4_b(press);
    double TErr = AbsRelativeErr(tActual, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations for the Functions T(p,h), v(p,h) and T(p,s), v(p,s)
//for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" in table 18 on page 18.

TEST_F(AccTestsRegionBoundaries, Psat_h_R3_R4_1700h)
{
    const double h = 1700;
    const double pExp = 1.724175718E+01;

    double pTest = pSat_h_R3_R4(h);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegionBoundaries, Psat_h_R3_R4_2000h)
{
    const double h = 2000;
    const double pExp = 2.193442957E+01;

    double pTest = pSat_h_R3_R4(h);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegionBoundaries, Psat_h_R3_R4_2400h)
{
    const double h = 2400;
    const double pExp = 2.018090839E+01;

    double pTest = pSat_h_R3_R4(h);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations for the Functions T(p,h), v(p,h) and T(p,s), v(p,s)
//for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" in table 20 on page 19.

TEST_F(AccTestsRegionBoundaries, Psat_s_R3_R4_3d8s)
{
    const double s = 3.8;
    const double pExp = 1.687755057E+01;

    double pTest = pSat_s_R3_R4(s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegionBoundaries, Psat_s_R3_R4_4d2s)
{
    const double s = 4.2;
    const double pExp = 2.164451789E+01;

    double pTest = pSat_s_R3_R4(s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegionBoundaries, Psat_s_R3_R4_5d2s)
{
    const double s = 5.2;
    const double pExp = 1.668968482E+01;

    double pTest = pSat_s_R3_R4(s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised supplementary Release on Backward
//Equations p(h,s) for Region 3, Equations as a function of h and s for Region
//Boundaries, and an Equation Tsat(h,s) for Region 4 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in table 11 on page 17.

TEST_F(AccTestsRegionBoundaries, h1_prime_s_RMeta_1d0s)
{
    const double s = 1.0;
    const double hExp = 3.085509647E+02;

    double hTest = h1_prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h1_prime_s_RMeta_2d0s)
{
    const double s = 2.0;
    const double hExp = 7.006304472E+02;

    double hTest = h1_prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h1_prime_s_RMeta_3d0s)
{
    const double s = 3.0;
    const double hExp = 1.198359754E+03;

    double hTest = h1_prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h3a_prime_s_RMeta_3d8s)
{
    const double s = 3.8;
    const double hExp = 1.685025565E+03;

    double hTest = h3a_prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h3a_prime_s_RMeta_4d0s)
{
    const double s = 4.0;
    const double hExp = 1.816891476E+03;

    double hTest = h3a_prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h3a_prime_s_RMeta_4d2s)
{
    const double s = 4.2;
    const double hExp = 1.949352563E+03;

    double hTest = h3a_prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised supplementary Release on Backward
//Equations p(h,s) for Region 3, Equations as a function of h and s for Region
//Boundaries, and an Equation Tsat(h,s) for Region 4 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in table 18 on page 21.

TEST_F(AccTestsRegionBoundaries, h2ab_2prime_s_RMeta_7d0s)
{
    const double s = 7.0;
    const double hExp = 2.723729985E+03;

    double hTest = h2ab_s_2prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h2ab_2prime_s_RMeta_8d0s)
{
    const double s = 8.0;
    const double hExp = 2.599047210E+03;

    double hTest = h2ab_s_2prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h2ab_2prime_s_RMeta_9d0s)
{
    const double s = 9.0;
    const double hExp = 2.511861477E+03;

    double hTest = h2ab_s_2prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h2c3b_2prime_s_RMeta_5d5s)
{
    const double s = 5.5;
    const double hExp = 2.687693850E+03;

    double hTest = h2c3b_s_2prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h2c3b_2prime_s_RMeta_5d0s)
{
    const double s = 5.0;
    const double hExp = 2.451623609E+03;

    double hTest = h2c3b_s_2prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, h2c3b_2prime_s_RMeta_4d5s)
{
    const double s = 4.5;
    const double hExp = 2.144360448E+03;

    double hTest = h2c3b_s_2prime(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised supplementary Release on Backward
//Equations p(h,s) for Region 3, Equations as a function of h and s for Region
//Boundaries, and an Equation Tsat(h,s) for Region 4 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in table 24 on page 24.

TEST_F(AccTestsRegionBoundaries, hB13_s_RMeta_3d7s)
{
    const double s = 3.7;
    const double hExp = 1.632525047E+03;

    double hTest = hB13_s(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, hB13_s_RMeta_3d6s)
{
    const double s = 3.6;
    const double hExp = 1.593027214E+03;

    double hTest = hB13_s(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, hB13_s_RMeta_3d5s)
{
    const double s = 3.5;
    const double hExp = 1.566104611E+03;

    double hTest = hB13_s(s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised supplementary Release on Backward
//Equations p(h,s) for Region 3, Equations as a function of h and s for Region
//Boundaries, and an Equation Tsat(h,s) for Region 4 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in table 26 on page 26.

TEST_F(AccTestsRegionBoundaries, TB23_h_s_RMeta_2600h_5d1s)
{
    const double h = 2600;
    const double s = 5.1;
    const double TExp = 7.135259364E+02;

    double TTest = TB23_s(h,s);
    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, TB23_h_s_RMeta_2700h_5d15s)
{
    const double h = 2700;
    const double s = 5.15;
    const double TExp = 7.685345532E+02;

    double TTest = TB23_s(h,s);
    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, TB23_h_s_RMeta_2800h_5d2s)
{
    const double h = 2800;
    const double s = 5.2;
    const double TExp = 8.176202120E+02;

    double TTest = TB23_s(h,s);
    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
