#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsRegion3SubBoundaries : public AccTestBase {};

extern "C"
{
    DLL_IMPORT double T3ab_v_T_P(double);
	DLL_IMPORT double T3cd_v_T_P(double);
	DLL_IMPORT double T3ef_v_T_P(double);
	DLL_IMPORT double T3gh_v_T_P(double);
	DLL_IMPORT double T3ij_v_T_P(double);
	DLL_IMPORT double T3jk_v_T_P(double);
	DLL_IMPORT double T3mn_v_T_P(double);
	DLL_IMPORT double T3op_v_T_P(double);
	DLL_IMPORT double T3qu_v_T_P(double);
	DLL_IMPORT double T3rx_v_T_P(double);
    DLL_IMPORT double T3uv_v_T_P(double);
    DLL_IMPORT double T3wx_v_T_P(double);

    DLL_IMPORT double va_P_T(double, double);
    DLL_IMPORT double vb_P_T(double, double);
    DLL_IMPORT double vc_P_T(double, double);
    DLL_IMPORT double vd_P_T(double, double);
    DLL_IMPORT double ve_P_T(double, double);
    DLL_IMPORT double vf_P_T(double, double);
    DLL_IMPORT double vg_P_T(double, double);
    DLL_IMPORT double vh_P_T(double, double);
    DLL_IMPORT double vi_P_T(double, double);
    DLL_IMPORT double vj_P_T(double, double);
    DLL_IMPORT double vk_P_T(double, double);
    DLL_IMPORT double vl_P_T(double, double);
    DLL_IMPORT double vm_P_T(double, double);
    DLL_IMPORT double vn_P_T(double, double);
    DLL_IMPORT double vo_P_T(double, double);
    DLL_IMPORT double vp_P_T(double, double);
    DLL_IMPORT double vq_P_T(double, double);
    DLL_IMPORT double vr_P_T(double, double);
    DLL_IMPORT double vs_P_T(double, double);
    DLL_IMPORT double vt_P_T(double, double);
    DLL_IMPORT double vu_P_T(double, double);
    DLL_IMPORT double vv_P_T(double, double);
    DLL_IMPORT double vw_P_T(double, double);
    DLL_IMPORT double vx_P_T(double, double);
    DLL_IMPORT double vy_P_T(double, double);
    DLL_IMPORT double vz_P_T(double, double);

    DLL_IMPORT double T_P_h_R3a(double, double);
    DLL_IMPORT double T_P_h_R3b(double, double);
    DLL_IMPORT double T_P_h_R3(double, double);

    DLL_IMPORT double v_P_h_R3a(double, double);
    DLL_IMPORT double v_P_h_R3b(double, double);
    DLL_IMPORT double v_P_h_R3(double, double);

    DLL_IMPORT double h_P_R3ab(double);

    DLL_IMPORT double T_R3a_P_s(double, double);
    DLL_IMPORT double T_R3b_P_s(double, double);
    DLL_IMPORT double T_P_s_R3(double, double);

    DLL_IMPORT double v_R3a_P_s(double, double);
    DLL_IMPORT double v_R3b_P_s(double, double);
    DLL_IMPORT double v_P_s_R3(double, double);

    DLL_IMPORT double P_h_s_R3a(double, double);
    DLL_IMPORT double P_h_s_R3b(double, double);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on Backward
//Equations for Specific Volume as a Function of Pressure and Temperature v(p,T)
//for Region 3 of the IAPWS Industrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Tables 3 & 11 on pages 11 & 19.

TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_a_b_40MPa)
{
    const double pressure = 40;
    const double Tactual = 6.930341408E+02;

    double Ttest = T3ab_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_c_d_25MPa)
{
    const double pressure = 25;
    const double Tactual = 6.493659208E+02;

    double Ttest = T3cd_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_e_f_40MPa)
{
    const double pressure = 40;
    const double Tactual = 7.139593992E+02;

    double Ttest = T3ef_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_g_h_23MPa)
{
    const double pressure = 23;
    const double Tactual = 6.498873759E+02;

    double Ttest = T3gh_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_i_j_23MPa)
{
    const double pressure = 23;
    const double Tactual = 6.515778091E+02;

    double Ttest = T3ij_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_j_k_23MPa)
{
    const double pressure = 23;
    const double Tactual = 6.558338344E+02;

    double Ttest = T3jk_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_m_n_22d8MPa)
{
    const double pressure = 22.8;
    const double Tactual = 6.496054133E+02;

    double Ttest = T3mn_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_o_p_22d8MPa)
{
    const double pressure = 22.8;
    const double Tactual = 6.500106943E+02;

    double Ttest = T3op_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_q_u_22MPa)
{
    const double pressure = 22;
    const double Tactual = 6.456355027E+02;

    double Ttest = T3qu_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_r_x_22MPa)
{
    const double pressure = 22;
    const double Tactual = 6.482622754E+02;

    double Ttest = T3rx_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_u_v_22d3MPa)
{
    const double pressure = 22.3;
    const double Tactual = 6.477996121E+02;

    double Ttest = T3uv_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_Subregions_w_x_22d3MPa)
{
    const double pressure = 22.3;
    const double Tactual = 6.482049480E+02;

    double Ttest = T3wx_v_T_P(pressure);
    double TErr = AbsRelativeErr(Ttest, Tactual);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations for Specific Volume as a Function of Pressure and
//Temperature v(p,T) for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" in Tables 5 & 13 on
//pages 13 & 20.

//Subregion boundary v(P,T) - specific volume

TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_a_50MPa_T_630K)
{
    const double pressure = 50;
    const double temp = 630;
    const double vActual = 1.470853100E-03;

    double vTest = va_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_a_80MPa_T_670K)
{
    const double pressure = 80;
    const double temp = 670;
    const double vActual = 1.503831359E-03;

    double vTest = va_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_b_50MPa_T_710K)
{
    const double pressure = 50;
    const double temp = 710;
    const double vActual = 2.204728587E-03;

    double vTest = vb_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_b_80MPa_T_750K)
{
    const double pressure = 80;
    const double temp = 750;
    const double vActual = 1.973692940E-03;

    double vTest = vb_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_c_20MPa_T_630K)
{
    const double pressure = 20;
    const double temp = 630;
    const double vActual = 1.761696406E-03;

    double vTest = vc_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_c_30MPa_T_650K)
{
    const double pressure = 30;
    const double temp = 650;
    const double vActual = 1.819560617E-03;

    double vTest = vc_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_d_26MPa_T_656K)
{
    const double pressure = 26;
    const double temp = 656;
    const double vActual = 2.245587720E-03;

    double vTest = vd_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_d_30MPa_T_670K)
{
    const double pressure = 30;
    const double temp = 670;
    const double vActual = 2.506897702E-03;

    double vTest = vd_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_e_26MPa_T_661K)
{
    const double pressure = 26;
    const double temp = 661;
    const double vActual = 2.970225962E-03;

    double vTest = ve_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_e_30MPa_T_675K)
{
    const double pressure = 30;
    const double temp = 675;
    const double vActual = 3.004627086E-03;

    double vTest = ve_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_f_26MPa_T_671K)
{
    const double pressure = 26;
    const double temp = 671;
    const double vActual = 5.019029401E-03;

    double vTest = vf_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_f_30MPa_T_690K)
{
    const double pressure = 30;
    const double temp = 690;
    const double vActual = 4.656470142E-03;

    double vTest = vf_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_g_23d6MPa_T_649K)
{
    const double pressure = 23.6;
    const double temp = 649;
    const double vActual = 2.163198378E-03;

    double vTest = vg_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_g_24MPa_T_650K)
{
    const double pressure = 24;
    const double temp = 650;
    const double vActual = 2.166044161E-03;

    double vTest = vg_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_h_23d6MPa_T_652K)
{
    const double pressure = 23.6;
    const double temp = 652;
    const double vActual = 2.651081407E-03;

    double vTest = vh_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_h_24MPa_T_654K)
{
    const double pressure = 24;
    const double temp = 654;
    const double vActual = 2.967802335E-03;

    double vTest = vh_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_i_23d6MPa_T_653K)
{
    const double pressure = 23.6;
    const double temp = 653;
    const double vActual = 3.273916816E-03;

    double vTest = vi_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_i_24MPa_T_655K)
{
    const double pressure = 24;
    const double temp = 655;
    const double vActual = 3.550329864E-03;

    double vTest = vi_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_j_23d5MPa_T_655K)
{
    const double pressure = 23.5;
    const double temp = 655;
    const double vActual = 4.545001142E-03;

    double vTest = vj_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_j_24MPa_T_660K)
{
    const double pressure = 24;
    const double temp = 660;
    const double vActual = 5.100267704E-03;

    double vTest = vj_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_k_23MPa_T_660K)
{
    const double pressure = 23;
    const double temp = 660;
    const double vActual = 6.109525997E-03;

    double vTest = vk_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_k_24MPa_T_670K)
{
    const double pressure = 24;
    const double temp = 670;
    const double vActual = 6.427325645E-03;

    double vTest = vk_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_l_22d6MPa_T_646K)
{
    const double pressure = 22.6;
    const double temp = 646;
    const double vActual = 2.117860851E-03;

    double vTest = vl_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_l_23MPa_T_646K)
{
    const double pressure = 23;
    const double temp = 646;
    const double vActual = 2.062374674E-03;

    double vTest = vl_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_m_22d6MPa_T_648d6K)
{
    const double pressure = 22.6;
    const double temp = 648.6;
    const double vActual = 2.533063780E-03;

    double vTest = vm_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_m_22d8MPa_T_649d3K)
{
    const double pressure = 22.8;
    const double temp = 649.3;
    const double vActual = 2.572971781E-03;

    double vTest = vm_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_n_22d6MPa_T_649d0K)
{
    const double pressure = 22.6;
    const double temp = 649.0;
    const double vActual = 2.923432711E-03;

    double vTest = vn_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_n_22d8MPa_T_649d7K)
{
    const double pressure = 22.8;
    const double temp = 649.7;
    const double vActual = 2.913311494E-03;

    double vTest = vn_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_o_22d6MPa_T_649d1K)
{
    const double pressure = 22.6;
    const double temp = 649.1;
    const double vActual = 3.131208996E-03;

    double vTest = vo_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_o_22d8MPa_T_649d9K)
{
    const double pressure = 22.8;
    const double temp = 649.9;
    const double vActual = 3.221160278E-03;

    double vTest = vo_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_p_22d6MPa_T_649d4K)
{
    const double pressure = 22.6;
    const double temp = 649.4;
    const double vActual = 3.715596186E-03;

    double vTest = vp_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_p_22d8MPa_T_650d2K)
{
    const double pressure = 22.8;
    const double temp = 650.2;
    const double vActual = 3.664754790E-03;

    double vTest = vp_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_q_21d1MPa_T_640K)
{
    const double pressure = 21.1;
    const double temp = 640;
    const double vActual = 1.970999272E-03;

    double vTest = vq_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_q_21d8MPa_T_643K)
{
    const double pressure = 21.8;
    const double temp = 643;
    const double vActual = 2.043919161E-03;

    double vTest = vq_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_r_21d1MPa_T_644K)
{
    const double pressure = 21.1;
    const double temp = 644;
    const double vActual = 5.251009921E-03;

    double vTest = vr_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_r_21d8MPa_T_648K)
{
    const double pressure = 21.8;
    const double temp = 648;
    const double vActual = 5.256844741E-03;

    double vTest = vr_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_s_19d1MPa_T_635K)
{
    const double pressure = 19.1;
    const double temp = 635;
    const double vActual = 1.932829079E-03;

    double vTest = vs_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_s_20MPa_T_638K)
{
    const double pressure = 20;
    const double temp = 638;
    const double vActual = 1.985387227E-03;

    double vTest = vs_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_t_17MPa_T_626K)
{
    const double pressure = 17;
    const double temp = 626;
    const double vActual = 8.483262001E-03;

    double vTest = vt_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_t_20MPa_T_640K)
{
    const double pressure = 20;
    const double temp = 640;
    const double vActual = 6.227528101E-03;

    double vTest = vt_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_u_21d5MPa_T_644d6K)
{
    const double pressure = 21.5;
    const double temp = 644.6;
    const double vActual = 2.268366647E-03;

    double vTest = vu_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_u_22d0MPa_T_646d1K)
{
    const double pressure = 22.0;
    const double temp = 646.1;
    const double vActual = 2.296350553E-03;

    double vTest = vu_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_v_22d5MPa_T_648d6K)
{
    const double pressure = 22.5;
    const double temp = 648.6;
    const double vActual = 2.832373260E-03;

    double vTest = vv_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_v_22d3MPa_T_647d9K)
{
    const double pressure = 22.3;
    const double temp = 647.9;
    const double vActual = 2.811424405E-03;

    double vTest = vv_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_w_22d15MPa_T_647d5K)
{
    const double pressure = 22.15;
    const double temp = 647.5;
    const double vActual = 3.694032281E-03;

    double vTest = vw_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_w_22d3MPa_T_648d1K)
{
    const double pressure = 22.3;
    const double temp = 648.1;
    const double vActual = 3.622226305E-03;

    double vTest = vw_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_x_22d11MPa_T_648d0K)
{
    const double pressure = 22.11;
    const double temp = 648.0;
    const double vActual = 4.528072649E-03;

    double vTest = vx_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_x_22d3MPa_T_649d0K)
{
    const double pressure = 22.3;
    const double temp = 649.0;
    const double vActual = 4.556905799E-03;

    double vTest = vx_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_y_22d0MPa_T_646d84K)
{
    const double pressure = 22.0;
    const double temp = 646.84;
    const double vActual = 2.698354719E-03;

    double vTest = vy_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_y_22d064MPa_T_647d05K)
{
    const double pressure = 22.064;
    const double temp = 647.05;
    const double vActual = 2.717655648E-03;

    double vTest = vy_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_z_22d0MPa_T_646d89K)
{
    const double pressure = 22.0;
    const double temp = 646.89;
    const double vActual = 3.798732962E-03;

    double vTest = vz_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_T_Subregion_z_22d064MPa_T_647d15K)
{
    const double pressure = 22.064;
    const double temp = 647.15;
    const double vActual = 3.701940010E-03;

    double vTest = vz_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations for the Functions T(p,h), v(p,h) and T(p,s), v(p,s)
//for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" in Table 5 on
//page 8.

TEST_F(AccTestsRegion3SubBoundaries, T_P_h_Subregion_a_20MPa_1700h)
{
    const double press = 20;
    const double h = 1700;
    const double tExp = 6.293083892E+02;

    double Ttest = T_P_h_R3a(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_Subregion_a_50MPa_2000h)
{
    const double press = 50;
    const double h = 2000;
    const double tExp = 6.905718338E+02;

    double Ttest = T_P_h_R3a(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_Subregion_a_100MPa_2100h)
{
    const double press = 100;
    const double h = 2100;
    const double tExp = 7.336163014E+02;

    double Ttest = T_P_h_R3a(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_Subregion_b_20MPa_2500h)
{
    const double press = 20;
    const double h = 2500;
    const double tExp = 6.418418053E+02;

    double Ttest = T_P_h_R3b(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_Subregion_b_50MPa_2400h)
{
    const double press = 50;
    const double h = 2400;
    const double tExp = 7.351848618E+02;

    double Ttest = T_P_h_R3b(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_Subregion_b_100MPa_2700h)
{
    const double press = 100;
    const double h = 2700;
    const double tExp = 8.420460876E+02;

    double Ttest = T_P_h_R3b(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_20MPa_1700h)
{
    const double press = 20;
    const double h = 1700;
    const double tExp = 6.293083892E+02;

    double Ttest = T_P_h_R3(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_50MPa_2000h)
{
    const double press = 50;
    const double h = 2000;
    const double tExp = 6.905718338E+02;

    double Ttest = T_P_h_R3(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_100MPa_2100h)
{
    const double press = 100;
    const double h = 2100;
    const double tExp = 7.336163014E+02;

    double Ttest = T_P_h_R3(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_20MPa_2500h)
{
    const double press = 20;
    const double h = 2500;
    const double tExp = 6.418418053E+02;

    double Ttest = T_P_h_R3(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_50MPa_2400h)
{
    const double press = 50;
    const double h = 2400;
    const double tExp = 7.351848618E+02;

    double Ttest = T_P_h_R3(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_h_100MPa_2700h)
{
    const double press = 100;
    const double h = 2700;
    const double tExp = 8.420460876E+02;

    double Ttest = T_P_h_R3(press,h);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations for the Functions T(p,h), v(p,h) and T(p,s), v(p,s)
//for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" in Table 8 on
//page 10.

TEST_F(AccTestsRegion3SubBoundaries, v_P_h_Subregion_a_20MPa_1700h)
{
    const double press = 20;
    const double h = 1700;
    const double vExp = 1.749903962E-03;

    double vtest = v_P_h_R3a(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_Subregion_a_50MPa_2000h)
{
    const double press = 50;
    const double h = 2000;
    const double vExp = 1.908139035E-03;

    double vtest = v_P_h_R3a(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_Subregion_a_100MPa_2100h)
{
    const double press = 100;
    const double h = 2100;
    const double vExp = 1.676229776E-03;

    double vtest = v_P_h_R3a(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_Subregion_b_20MPa_2500h)
{
    const double press = 20;
    const double h = 2500;
    const double vExp = 6.670547043E-03;

    double vtest = v_P_h_R3b(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_Subregion_b_50MPa_2400h)
{
    const double press = 50;
    const double h = 2400;
    const double vExp = 2.801244590E-03;

    double vtest = v_P_h_R3b(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_Subregion_b_100MPa_2700h)

{
    const double press = 100;
    const double h = 2700;
    const double vExp = 2.404234998E-03;

    double vtest = v_P_h_R3b(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_20MPa_1700h)
{
    const double press = 20;
    const double h = 1700;
    const double vExp = 1.749903962E-03;

    double vtest = v_P_h_R3(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_50MPa_2000h)
{
    const double press = 50;
    const double h = 2000;
    const double vExp = 1.908139035E-03;

    double vtest = v_P_h_R3(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_100MPa_2100h)
{
    const double press = 100;
    const double h = 2100;
    const double vExp = 1.676229776E-03;

    double vtest = v_P_h_R3(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_20MPa_2500h)
{
    const double press = 20;
    const double h = 2500;
    const double vExp = 6.670547043E-03;

    double vtest = v_P_h_R3(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_50MPa_2400h)
{
    const double press = 50;
    const double h = 2400;
    const double vExp = 2.801244590E-03;

    double vtest = v_P_h_R3(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_h_100MPa_2700h)
{
    const double press = 100;
    const double h = 2700;
    const double vExp = 2.404234998E-03;

    double vtest = v_P_h_R3(press,h);
    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations for the Functions T(p,h), v(p,h) and T(p,s), v(p,s)
//for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" on page 7 in the sentence
//directly before section 3.3.

TEST_F(AccTestsRegion3SubBoundaries, h_P_SubregionBoundary_ab_25MPa)
{
    const double press = 25;
    const double hExp = 2.095936454E+03;

    double hTest = h_P_R3ab(press);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations for the Functions T(p,h), v(p,h) and T(p,s), v(p,s)
//for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" in table 12 on page 13.

TEST_F(AccTestsRegion3SubBoundaries, T_P_s_Subregion_a_20MPa_3d8s)
{
    const double press = 20;
    const double s = 3.8;
    const double tExp = 6.282959869E+02;

    double Ttest = T_R3a_P_s(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_Subregion_a_50MPa_3d6s)
{
    const double press = 50;
    const double s = 3.6;
    const double tExp = 6.297158726E+02;

    double Ttest = T_R3a_P_s(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_Subregion_a_100MPa_4d0s)
{
    const double press = 100;
    const double s = 4.0;
    const double tExp = 7.056880237E+02;

    double Ttest = T_R3a_P_s(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_Subregion_b_20MPa_5d0s)
{
    const double press = 20;
    const double s = 5.0;
    const double tExp = 6.401176443E+02;

    double Ttest = T_R3b_P_s(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_Subregion_b_50MPa_4d5s)
{
    const double press = 50;
    const double s = 4.5;
    const double tExp = 7.163687517E+02;

    double Ttest = T_R3b_P_s(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_Subregion_b_100MPa_5d0s)
{
    const double press = 100;
    const double s = 5.0;
    const double tExp = 8.474332825E+02;

    double Ttest = T_R3b_P_s(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}

TEST_F(AccTestsRegion3SubBoundaries, T_P_s_20MPa_3d8s)
{
    const double press = 20;
    const double s = 3.8;
    const double tExp = 6.282959869E+02;

    double Ttest = T_P_s_R3(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_50MPa_3d6s)
{
    const double press = 50;
    const double s = 3.6;
    const double tExp = 6.297158726E+02;

    double Ttest = T_P_s_R3(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_100MPa_4d0s)
{
    const double press = 100;
    const double s = 4.0;
    const double tExp = 7.056880237E+02;

    double Ttest = T_P_s_R3(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_20MPa_5d0s)
{
    const double press = 20;
    const double s = 5.0;
    const double tExp = 6.401176443E+02;

    double Ttest = T_P_s_R3(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_50MPa_4d5s)
{
    const double press = 50;
    const double s = 4.5;
    const double tExp = 7.163687517E+02;

    double Ttest = T_P_s_R3(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, T_P_s_100MPa_5d0s)
{
    const double press = 100;
    const double s = 5.0;
    const double tExp = 8.474332825E+02;

    double Ttest = T_P_s_R3(press,s);
    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations for the Functions T(p,h), v(p,h) and T(p,s), v(p,s)
//for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" in table 15 on page 15.

TEST_F(AccTestsRegion3SubBoundaries, v_P_s_Subregion_a_20MPa_3d8s)
{
    const double press = 20;
    const double s = 3.8;
    const double vExp = 1.733791463E-03;

    double vTest = v_R3a_P_s(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_Subregion_a_50MPa_3d6s)
{
    const double press = 50;
    const double s = 3.6;
    const double vExp = 1.469680170E-03;

    double vTest = v_R3a_P_s(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_Subregion_a_100MPa_4d0s)
{
    const double press = 100;
    const double s = 4.0;
    const double vExp = 1.555893131E-03;

    double vTest = v_R3a_P_s(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_Subregion_b_20MPa_5d0s)
{
    const double press = 20;
    const double s = 5.0;
    const double vExp = 6.262101987E-03;

    double vTest = v_R3b_P_s(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_Subregion_b_50MPa_4d5s)
{
    const double press = 50;
    const double s = 4.5;
    const double vExp = 2.332634294E-03;

    double vTest = v_R3b_P_s(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_Subregion_b_100MPa_5d0s)
{
    const double press = 100;
    const double s = 5.0;
    const double vExp = 2.449610757E-03;

    double vTest = v_R3b_P_s(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}

TEST_F(AccTestsRegion3SubBoundaries, v_P_s_20MPa_3d8s)
{
    const double press = 20;
    const double s = 3.8;
    const double vExp = 1.733791463E-03;

    double vTest = v_P_s_R3(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_50MPa_3d6s)
{
    const double press = 50;
    const double s = 3.6;
    const double vExp = 1.469680170E-03;

    double vTest = v_P_s_R3(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_100MPa_4d0s)
{
    const double press = 100;
    const double s = 4.0;
    const double vExp = 1.555893131E-03;

    double vTest = v_P_s_R3(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_20MPa_5d0s)
{
    const double press = 20;
    const double s = 5.0;
    const double vExp = 6.262101987E-03;

    double vTest = v_P_s_R3(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_50MPa_4d5s)
{
    const double press = 50;
    const double s = 4.5;
    const double vExp = 2.332634294E-03;

    double vTest = v_P_s_R3(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, v_P_s_100MPa_5d0s)
{
    const double press = 100;
    const double s = 5.0;
    const double vExp = 2.449610757E-03;

    double vTest = v_P_s_R3(press,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations p(h,s) for Region 3, Equations as a function of h and s
//for the Region Boundaries, and an Equation Tsat(h,s) for Region 4 of the
//IAPWS Industrial Formulation 1997 for the Thermodynamic Properties of
//Water and Steam" in table 5 on page 10.

TEST_F(AccTestsRegion3SubBoundaries, P_h_s_Subregion_a_1700h_3d8s)
{
    const double h = 1700;
    const double s = 3.8;
    const double pExp = 2.555703246E+01;

    double pTest = P_h_s_R3a(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3SubBoundaries, P_h_s_Subregion_a_2000h_4d2s)
{
    const double h = 2000;
    const double s = 4.2;
    const double pExp = 4.540873468E+01;

    double pTest = P_h_s_R3a(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3SubBoundaries, P_h_s_Subregion_a_2100h_4d3s)
{
    const double h = 2100;
    const double s = 4.3;
    const double pExp = 6.078123340E+01;

    double pTest = P_h_s_R3a(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3SubBoundaries, P_h_s_Subregion_b_2600h_5d1s)
{
    const double h = 2600;
    const double s = 5.1;
    const double pExp = 3.434999263E+01;

    double pTest = P_h_s_R3b(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3SubBoundaries, P_h_s_Subregion_b_2400h_4d7s)
{
    const double h = 2400;
    const double s = 4.7;
    const double pExp = 6.363924887E+01;

    double pTest = P_h_s_R3b(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3SubBoundaries, P_h_s_Subregion_b_2700h_5d0s)
{
    const double h = 2700;
    const double s = 5.0;
    const double pExp = 8.839043281E+01;

    double pTest = P_h_s_R3b(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
