#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsBoundaries : public AccTestBase {};

extern "C"
{
    DLL_IMPORT double pi_R2_R3_b(double);
    DLL_IMPORT double theta_R2_R3_b(double);
    DLL_IMPORT double P_R2_R3_b(double);
    DLL_IMPORT double T_R2_R3_b(double);
}

TEST_F(AccTestsBoundaries, Region2AndRegion3_TemperatureAcc)
{
    double press = 0.165291643E+02 * 1000;

    double pi = pi_R2_R3_b(press);
    double T = T_R2_R3_b(pi);

    double TErr = AbsRelativeErr(T, 0.623150000E+03);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}

TEST_F(AccTestsBoundaries, Region2AndRegion3_PressureAcc)
{
    double T = 0.623150000E+03;

    double theta = theta_R2_R3_b(T);
    double press = P_R2_R3_b(theta);

    double PErr = AbsRelativeErr(press, 0.165291643E+02 * 1000);

    bool PPass = IsAcceptable(PErr);

    ASSERT_TRUE(PPass);
}
