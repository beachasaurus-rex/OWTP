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

    DLL_IMPORT double Tsat_metaphase(double,double);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" on page 6, immediately before
//the section regarding the equations for Region 1.

TEST_F(AccTestsRegionBoundaries, Region2AndRegion3_TemperatureAcc)
{
    double press = 0.165291643E+02 * 1000;

    double T = T_R2_R3_b(press);

    double TErr = AbsRelativeErr(T, 0.623150000E+03);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, Region2AndRegion3_PressureAcc)
{
    double T = 0.623150000E+03;

    double press = P_R2_R3_b(T);

    double PErr = AbsRelativeErr(press, 0.165291643E+02 * 1000);

    bool PPass = IsAcceptable(PErr);

    ASSERT_TRUE(PPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 35 on page 34.

TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationPressureAcc_T_300k)
{
    //K
    const double temp = 300;
    //kPa
    const double pExp = 0.353658941E-02 * 1000;
    //kPa
    double pActual = pSat_R3_R4_b(temp);

    double PErr = AbsRelativeErr(pActual, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationPressureAcc_T_500k)
{
    //K
    const double temp = 500;
    //kPa
    const double pExp = 0.263889776E+01 * 1000;
    //kPa
    double pActual = pSat_R3_R4_b(temp);

    double PErr = AbsRelativeErr(pActual, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationPressureAcc_T_600k)
{
    //K
    const double temp = 600;
    //kPa
    const double pExp = 0.123443146E+02 * 1000;
    //kPa
    double pActual = pSat_R3_R4_b(temp);

    double PErr = AbsRelativeErr(pActual, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 36 on page 36.

TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationTemperatureAcc_P_0d1MPa)
{
    //kPa
    const double press = 0.1 * 1000;
    //K
    const double tExp = 0.372755919E+03;
    //K
    double tActual = tSat_R3_R4_b(press);

    double TErr = AbsRelativeErr(tActual, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationTemperatureAcc_P_1MPa)
{
    //kPa
    const double press = 1000;
    //K
    const double tExp = 0.453035632E+03;
    //K
    double tActual = tSat_R3_R4_b(press);

    double TErr = AbsRelativeErr(tActual, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationTemperatureAcc_P_10MPa)
{
    //kPa
    const double press = 10 * 1000;
    //K
    const double tExp = 0.584149488E+03;
    //K
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

//Subregion boundary P(h)

TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationPressure_Enthalpy_1700h)
{
    //kJ/kg
    double h = 1700;
    //kPa
    double pExp = 1.724175718E+04;
    //kPa
    double pTest = pSat_h_R3_R4(h);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationPressure_Enthalpy_2000h)
{
    //kJ/kg
    double h = 2000;
    //kPa
    double pExp = 2.193442957E+04;
    //kPa
    double pTest = pSat_h_R3_R4(h);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationPressure_Enthalpy_2400h)
{
    //kJ/kg
    double h = 2400;
    //kPa
    double pExp = 2.018090839E+04;
    //kPa
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

//Subregion boundary P(s)

TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationPressure_Entropy_3d8s)
{
    //kJ/(kg*K)
    double s = 3.8;
    //kPa
    double pExp = 1.687755057E+04;
    //kPa
    double pTest = pSat_s_R3_R4(s);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationPressure_Entropy_4d2s)
{
    //kJ/(kg*K)
    double s = 4.2;
    //kPa
    double pExp = 2.164451789E+04;
    //kPa
    double pTest = pSat_s_R3_R4(s);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegionBoundaries, Region3AndRegion4_SaturationPressure_Entropy_5d2s)
{
    //kJ/(kg*K)
    double s = 5.2;
    //kPa
    double pExp = 1.668968482E+04;
    //kPa
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

TEST_F(AccTestsRegionBoundaries, MetastableRegion_h1_prime_1d0s)
{
    //kJ/(kg*K)
    const double s = 1.0;
    //kJ/kg
    const double hExp = 3.085509647E+02;
    //kJ/kg
    double hTest = h1_prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h1_prime_2d0s)
{
    //kJ/(kg*K)
    const double s = 2.0;
    //kJ/kg
    const double hExp = 7.006304472E+02;
    //kJ/kg
    double hTest = h1_prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h1_prime_3d0s)
{
    //kJ/(kg*K)
    const double s = 3.0;
    //kJ/kg
    const double hExp = 1.198359754E+03;
    //kJ/kg
    double hTest = h1_prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h3a_prime_3d8s)
{
    //kJ/(kg*K)
    const double s = 3.8;
    //kJ/kg
    const double hExp = 1.685025565E+03;
    //kJ/kg
    double hTest = h3a_prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h3a_prime_4d0s)
{
    //kJ/(kg*K)
    const double s = 4.0;
    //kJ/kg
    const double hExp = 1.816891476E+03;
    //kJ/kg
    double hTest = h3a_prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h3a_prime_4d2s)
{
    //kJ/(kg*K)
    const double s = 4.2;
    //kJ/kg
    const double hExp = 1.949352563E+03;
    //kJ/kg
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

TEST_F(AccTestsRegionBoundaries, MetastableRegion_h2ab_s_2prime_7d0s)
{
    //kJ/(kg*K)
    const double s = 7.0;
    //kJ/kg
    const double hExp = 2.723729985E+03;
    //kJ/kg
    double hTest = h2ab_s_2prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h2ab_s_2prime_8d0s)
{
    //kJ/(kg*K)
    const double s = 8.0;
    //kJ/kg
    const double hExp = 2.599047210E+03;
    //kJ/kg
    double hTest = h2ab_s_2prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h2ab_s_2prime_9d0s)
{
    //kJ/(kg*K)
    const double s = 9.0;
    //kJ/kg
    const double hExp = 2.511861477E+03;
    //kJ/kg
    double hTest = h2ab_s_2prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h2c3b_s_2prime_5d5s)
{
    //kJ/(kg*K)
    const double s = 5.5;
    //kJ/kg
    const double hExp = 2.687693850E+03;
    //kJ/kg
    double hTest = h2c3b_s_2prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h2c3b_s_2prime_5d0s)
{
    //kJ/(kg*K)
    const double s = 5.0;
    //kJ/kg
    const double hExp = 2.451623609E+03;
    //kJ/kg
    double hTest = h2c3b_s_2prime(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_h2c3b_s_2prime_4d5s)
{
    //kJ/(kg*K)
    const double s = 4.5;
    //kJ/kg
    const double hExp = 2.144360448E+03;
    //kJ/kg
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

TEST_F(AccTestsRegionBoundaries, MetastableRegion_hB13_s_3d7s)
{
    //kJ/(kg*K)
    const double s = 3.7;
    //kJ/kg
    const double hExp = 1.632525047E+03;
    //kJ/kg
    double hTest = hB13_s(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_hB13_s_3d6s)
{
    //kJ/(kg*K)
    const double s = 3.6;
    //kJ/kg
    const double hExp = 1.593027214E+03;
    //kJ/kg
    double hTest = hB13_s(s);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_hB13_s_3d5s)
{
    //kJ/(kg*K)
    const double s = 3.5;
    //kJ/kg
    const double hExp = 1.566104611E+03;
    //kJ/kg
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

TEST_F(AccTestsRegionBoundaries, MetastableRegion_TB23_h_s_2600h_5d1s)
{
    //kJ/kg
    const double h = 2600;
    //kJ/(kg*K)
    const double s = 5.1;
    //kJ/kg
    const double TExp = 7.135259364E+02;
    //kJ/kg
    double TTest = TB23_s(h,s);

    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_TB23_h_s_2700h_5d15s)
{
    //kJ/kg
    const double h = 2700;
    //kJ/(kg*K)
    const double s = 5.15;
    //kJ/kg
    const double TExp = 7.685345532E+02;
    //kJ/kg
    double TTest = TB23_s(h,s);

    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_TB23_h_s_2800h_5d2s)
{
    //kJ/kg
    const double h = 2800;
    //kJ/(kg*K)
    const double s = 5.2;
    //kJ/kg
    const double TExp = 8.176202120E+02;
    //kJ/kg
    double TTest = TB23_s(h,s);

    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised supplementary Release on Backward
//Equations p(h,s) for Region 3, Equations as a function of h and s for Region
//Boundaries, and an Equation Tsat(h,s) for Region 4 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in table 29 on page 31.

TEST_F(AccTestsRegionBoundaries, MetastableRegion_TsatMetaphase_h_s_1800h_5d3s)
{
    //kJ/kg
    const double h = 1800;
    //kJ/(kg*K)
    const double s = 5.3;
    //kJ/kg
    const double TExp = 3.468475498E+02;
    //kJ/kg
    double TTest = Tsat_metaphase(h,s);

    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_TsatMetaphase_h_s_2400h_6d0s)
{
    //kJ/kg
    const double h = 2400;
    //kJ/(kg*K)
    const double s = 6.0;
    //kJ/kg
    const double TExp = 4.251373305E+02;
    //kJ/kg
    double TTest = Tsat_metaphase(h,s);

    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegionBoundaries, MetastableRegion_TsatMetaphase_h_s_2500h_5d5s)
{
    //kJ/kg
    const double h = 2500;
    //kJ/(kg*K)
    const double s = 5.5;
    //kJ/kg
    const double TExp = 5.225579013E+02;
    //kJ/kg
    double TTest = Tsat_metaphase(h,s);

    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
