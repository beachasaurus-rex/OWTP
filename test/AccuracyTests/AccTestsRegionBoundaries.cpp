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
