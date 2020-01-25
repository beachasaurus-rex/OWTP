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

    DLL_IMPORT double va_P_T(double pressure, double temperature);
}

//Subregion boundary temperature tests

TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_a_b)
{
    double pressure = 40 * 1000;
    double Tactual = 6.930341408 * pow(10, 2);
    double Ttest = T3ab_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_c_d)
{
    double pressure = 25 * 1000;
    double Tactual = 6.493659208 * pow(10, 2);
    double Ttest = T3cd_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_e_f)
{
    double pressure = 40 * 1000;
    double Tactual = 7.139593992 * pow(10, 2);
    double Ttest = T3ef_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_g_h)
{
    double pressure = 23 * 1000;
    double Tactual = 6.498873759 * pow(10, 2);
    double Ttest = T3gh_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_i_j)
{
    double pressure = 23 * 1000;
    double Tactual = 6.515778091 * pow(10, 2);
    double Ttest = T3ij_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_j_k)
{
    double pressure = 23 * 1000;
    double Tactual = 6.558338344 * pow(10, 2);
    double Ttest = T3jk_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_m_n)
{
    double pressure = 22.8 * 1000;
    double Tactual = 6.496054133 * pow(10, 2);
    double Ttest = T3mn_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_o_p)
{
    double pressure = 22.8 * 1000;
    double Tactual = 6.500106943 * pow(10, 2);
    double Ttest = T3op_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_q_u)
{
    double pressure = 22 * 1000;
    double Tactual = 6.456355027 * pow(10, 2);
    double Ttest = T3qu_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, Temperature_Subregions_r_x)
{
    double pressure = 22 * 1000;
    double Tactual = 6.482622754 * pow(10, 2);
    double Ttest = T3rx_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}

//Subregion specific volume tests

TEST_F(AccTestsRegion3SubBoundaries, v_Subregion_a)
{
    double pressure = 50 * 1000;
    double temp = 630;
    double vActual = 1.470853100E-03
    double vTest = va_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);

    bool vPass = IsAcceptable(vErr);

    ASSERT_TRUE(vPass);
}
