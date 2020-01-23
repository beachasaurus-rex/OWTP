#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsRegion3SubBoundaries : public AccTestBase {};

extern "C"
{
    DLL_IMPORT double T3ab_v_T_P(double pressure);
	DLL_IMPORT double T3cd_v_T_P(double pressure);
	DLL_IMPORT double T3ef_v_T_P(double pressure);
	DLL_IMPORT double T3gh_v_T_P(double pressure);
	DLL_IMPORT double T3ij_v_T_P(double pressure);
	DLL_IMPORT double T3jk_v_T_P(double pressure);
	DLL_IMPORT double T3mn_v_T_P(double pressure);
	DLL_IMPORT double T3op_v_T_P(double pressure);
	DLL_IMPORT double T3qu_v_T_P(double pressure);
	DLL_IMPORT double T3rx_v_T_P(double pressure);
}

TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_a_b)
{
    double pressure = 40 * 1000;
    double Tactual = 6.930341408 * pow(10, 2);
    double Ttest = T3ab_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
