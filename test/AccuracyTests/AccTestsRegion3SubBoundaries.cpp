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

    DLL_IMPORT double T_R3a_P_h(double, double);
    DLL_IMPORT double T_R3b_P_h(double, double);
    DLL_IMPORT double T_P_h_R3(double, double);

    DLL_IMPORT double v_R3a_P_h(double, double);
    DLL_IMPORT double v_R3b_P_h(double, double);
    DLL_IMPORT double v_P_h_R3(double, double);

    DLL_IMPORT double h_R3ab_P(double);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on Backward
//Equations for Specific Volume as a Function of Pressure and Temperature v(p,T)
//for Region 3 of the IAPWS Industrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Tables 3 & 11 on pages 11 & 19.

//Subregion boundary v(P,T) - temperature

TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_a_b)
{
    double pressure = 40 * 1000;
    double Tactual = 6.930341408E+02;
    double Ttest = T3ab_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_c_d)
{
    double pressure = 25 * 1000;
    double Tactual = 6.493659208E+02;
    double Ttest = T3cd_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_e_f)
{
    double pressure = 40 * 1000;
    double Tactual = 7.139593992E+02;
    double Ttest = T3ef_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_g_h)
{
    double pressure = 23 * 1000;
    double Tactual = 6.498873759E+02;
    double Ttest = T3gh_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_i_j)
{
    double pressure = 23 * 1000;
    double Tactual = 6.515778091E+02;
    double Ttest = T3ij_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_j_k)
{
    double pressure = 23 * 1000;
    double Tactual = 6.558338344E+02;
    double Ttest = T3jk_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_m_n)
{
    double pressure = 22.8 * 1000;
    double Tactual = 6.496054133E+02;
    double Ttest = T3mn_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_o_p)
{
    double pressure = 22.8 * 1000;
    double Tactual = 6.500106943E+02;
    double Ttest = T3op_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_q_u)
{
    double pressure = 22 * 1000;
    double Tactual = 6.456355027E+02;
    double Ttest = T3qu_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_r_x)
{
    double pressure = 22 * 1000;
    double Tactual = 6.482622754E+02;
    double Ttest = T3rx_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_u_v)
{
    double pressure = 22.3 * 1000;
    double Tactual = 6.477996121E+02;
    double Ttest = T3uv_v_T_P(pressure);

    double TErr = AbsRelativeErr(Ttest, Tactual);

    bool TPass = IsAcceptable(TErr);

    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_Temperature_Subregions_w_x)
{
    double pressure = 22.3 * 1000;
    double Tactual = 6.482049480E+02;
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

TEST_F(AccTestsRegion3SubBoundaries, vPT_va_P_50MPa_T_630K)
{
    double pressure = 50 * 1000;
    double temp = 630;
    double vActual = 1.470853100E-03;

    double vTest = va_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_va_P_80MPa_T_670K)
{
    double pressure = 80 * 1000;
    double temp = 670;
    double vActual = 1.503831359E-03;

    double vTest = va_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vb_P_50MPa_T_710K)
{
    double pressure = 50 * 1000;
    double temp = 710;
    double vActual = 2.204728587E-03;

    double vTest = vb_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vb_P_80MPa_T_750K)
{
    double pressure = 80 * 1000;
    double temp = 750;
    double vActual = 1.973692940E-03;

    double vTest = vb_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vc_P_20MPa_T_630K)
{
    double pressure = 20 * 1000;
    double temp = 630;
    double vActual = 1.761696406E-03;

    double vTest = vc_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vc_P_30MPa_T_650K)
{
    double pressure = 30 * 1000;
    double temp = 650;
    double vActual = 1.819560617E-03;

    double vTest = vc_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vd_P_26MPa_T_656K)
{
    double pressure = 26 * 1000;
    double temp = 656;
    double vActual = 2.245587720E-03;

    double vTest = vd_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vd_P_30MPa_T_670K)
{
    double pressure = 30 * 1000;
    double temp = 670;
    double vActual = 2.506897702E-03;

    double vTest = vd_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_ve_P_26MPa_T_661K)
{
    double pressure = 26 * 1000;
    double temp = 661;
    double vActual = 2.970225962E-03;

    double vTest = ve_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_ve_P_30MPa_T_675K)
{
    double pressure = 30 * 1000;
    double temp = 675;
    double vActual = 3.004627086E-03;

    double vTest = ve_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vf_P_26MPa_T_671K)
{
    double pressure = 26 * 1000;
    double temp = 671;
    double vActual = 5.019029401E-03;

    double vTest = vf_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vf_P_30MPa_T_690K)
{
    double pressure = 30 * 1000;
    double temp = 690;
    double vActual = 4.656470142E-03;

    double vTest = vf_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vg_P_23d6MPa_T_649K)
{
    double pressure = 23.6 * 1000;
    double temp = 649;
    double vActual = 2.163198378E-03;

    double vTest = vg_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vg_P_24MPa_T_650K)
{
    double pressure = 24 * 1000;
    double temp = 650;
    double vActual = 2.166044161E-03;

    double vTest = vg_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vh_P_23d6MPa_T_652K)
{
    double pressure = 23.6 * 1000;
    double temp = 652;
    double vActual = 2.651081407E-03;

    double vTest = vh_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vh_P_24MPa_T_654K)
{
    double pressure = 24 * 1000;
    double temp = 654;
    double vActual = 2.967802335E-03;

    double vTest = vh_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vi_P_23d6MPa_T_653K)
{
    double pressure = 23.6 * 1000;
    double temp = 653;
    double vActual = 3.273916816E-03;

    double vTest = vi_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vi_P_24MPa_T_655K)
{
    double pressure = 24 * 1000;
    double temp = 655;
    double vActual = 3.550329864E-03;

    double vTest = vi_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vj_P_23d5MPa_T_655K)
{
    double pressure = 23.5 * 1000;
    double temp = 655;
    double vActual = 4.545001142E-03;

    double vTest = vj_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vj_P_24MPa_T_660K)
{
    double pressure = 24 * 1000;
    double temp = 660;
    double vActual = 5.100267704E-03;

    double vTest = vj_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vk_P_23MPa_T_660K)
{
    double pressure = 23 * 1000;
    double temp = 660;
    double vActual = 6.109525997E-03;

    double vTest = vk_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vk_P_24MPa_T_670K)
{
    double pressure = 24 * 1000;
    double temp = 670;
    double vActual = 6.427325645E-03;

    double vTest = vk_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vl_P_22d6MPa_T_646K)
{
    double pressure = 22.6 * 1000;
    double temp = 646;
    double vActual = 2.117860851E-03;

    double vTest = vl_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vl_P_23MPa_T_646K)
{
    double pressure = 23 * 1000;
    double temp = 646;
    double vActual = 2.062374674E-03;

    double vTest = vl_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vm_P_22d6MPa_T_648d6K)
{
    double pressure = 22.6 * 1000;
    double temp = 648.6;
    double vActual = 2.533063780E-03;

    double vTest = vm_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vm_P_22d8MPa_T_649d3K)
{
    double pressure = 22.8 * 1000;
    double temp = 649.3;
    double vActual = 2.572971781E-03;

    double vTest = vm_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vn_P_22d6MPa_T_649d0K)
{
    double pressure = 22.6 * 1000;
    double temp = 649.0;
    double vActual = 2.923432711E-03;

    double vTest = vn_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vn_P_22d8MPa_T_649d7K)
{
    double pressure = 22.8 * 1000;
    double temp = 649.7;
    double vActual = 2.913311494E-03;

    double vTest = vn_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vo_P_22d6MPa_T_649d1K)
{
    double pressure = 22.6 * 1000;
    double temp = 649.1;
    double vActual = 3.131208996E-03;

    double vTest = vo_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vo_P_22d8MPa_T_649d9K)
{
    double pressure = 22.8 * 1000;
    double temp = 649.9;
    double vActual = 3.221160278E-03;

    double vTest = vo_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vp_P_22d6MPa_T_649d4K)
{
    double pressure = 22.6 * 1000;
    double temp = 649.4;
    double vActual = 3.715596186E-03;

    double vTest = vp_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vp_P_22d8MPa_T_650d2K)
{
    double pressure = 22.8 * 1000;
    double temp = 650.2;
    double vActual = 3.664754790E-03;

    double vTest = vp_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vq_P_21d1MPa_T_640K)
{
    double pressure = 21.1 * 1000;
    double temp = 640;
    double vActual = 1.970999272E-03;

    double vTest = vq_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vq_P_21d8MPa_T_643K)
{
    double pressure = 21.8 * 1000;
    double temp = 643;
    double vActual = 2.043919161E-03;

    double vTest = vq_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vr_P_21d1MPa_T_644K)
{
    double pressure = 21.1 * 1000;
    double temp = 644;
    double vActual = 5.251009921E-03;

    double vTest = vr_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vr_P_21d8MPa_T_648K)
{
    double pressure = 21.8 * 1000;
    double temp = 648;
    double vActual = 5.256844741E-03;

    double vTest = vr_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vs_P_19d1MPa_T_635K)
{
    double pressure = 19.1 * 1000;
    double temp = 635;
    double vActual = 1.932829079E-03;

    double vTest = vs_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vs_P_20MPa_T_638K)
{
    double pressure = 20 * 1000;
    double temp = 638;
    double vActual = 1.985387227E-03;

    double vTest = vs_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vt_P_17MPa_T_626K)
{
    double pressure = 17 * 1000;
    double temp = 626;
    double vActual = 8.483262001E-03;

    double vTest = vt_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vt_P_20MPa_T_640K)
{
    double pressure = 20 * 1000;
    double temp = 640;
    double vActual = 6.227528101E-03;

    double vTest = vt_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vu_P_21d5MPa_T_644d6K)
{
    double pressure = 21.5 * 1000;
    double temp = 644.6;
    double vActual = 2.268366647E-03;

    double vTest = vu_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vu_P_22d0MPa_T_646d1K)
{
    double pressure = 22.0 * 1000;
    double temp = 646.1;
    double vActual = 2.296350553E-03;

    double vTest = vu_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vv_P_22d5MPa_T_648d6K)
{
    double pressure = 22.5 * 1000;
    double temp = 648.6;
    double vActual = 2.832373260E-03;

    double vTest = vv_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vv_P_22d3MPa_T_647d9K)
{
    double pressure = 22.3 * 1000;
    double temp = 647.9;
    double vActual = 2.811424405E-03;

    double vTest = vv_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vw_P_22d15MPa_T_647d5K)
{
    double pressure = 22.15 * 1000;
    double temp = 647.5;
    double vActual = 3.694032281E-03;

    double vTest = vw_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vw_P_22d3MPa_T_648d1K)
{
    double pressure = 22.3 * 1000;
    double temp = 648.1;
    double vActual = 3.622226305E-03;

    double vTest = vw_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vx_P_22d11MPa_T_648d0K)
{
    double pressure = 22.11 * 1000;
    double temp = 648.0;
    double vActual = 4.528072649E-03;

    double vTest = vx_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vx_P_22d3MPa_T_649d0K)
{
    double pressure = 22.3 * 1000;
    double temp = 649.0;
    double vActual = 4.556905799E-03;

    double vTest = vx_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vy_P_22d0MPa_T_646d84K)
{
    double pressure = 22.0 * 1000;
    double temp = 646.84;
    double vActual = 2.698354719E-03;

    double vTest = vy_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vy_P_22d064MPa_T_647d05K)
{
    double pressure = 22.064 * 1000;
    double temp = 647.05;
    double vActual = 2.717655648E-03;

    double vTest = vy_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vz_P_22d0MPa_T_646d89K)
{
    double pressure = 22.0 * 1000;
    double temp = 646.89;
    double vActual = 3.798732962E-03;

    double vTest = vz_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPT_vz_P_22d064MPa_T_647d15K)
{
    double pressure = 22.064 * 1000;
    double temp = 647.15;
    double vActual = 3.701940010E-03;

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

//Subregion boundary v(P,h) - temperature

TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_Subregion_a_20MPa_1700h)
{
    //kPa
    double press = 20 * 1000;
    //kJ/kg
    double h = 1700;
    //K
    double tExp = 6.293083892E+02;
    //K
    double Ttest = T_R3a_P_h(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_Subregion_a_50MPa_2000h)
{
    //kPa
    double press = 50 * 1000;
    //kJ/kg
    double h = 2000;
    //K
    double tExp = 6.905718338E+02;
    //K
    double Ttest = T_R3a_P_h(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_Subregion_a_100MPa_2100h)
{
    //kPa
    double press = 100 * 1000;
    //kJ/kg
    double h = 2100;
    //K
    double tExp = 7.336163014E+02;
    //K
    double Ttest = T_R3a_P_h(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_Subregion_b_20MPa_2500h)
{
    //kPa
    double press = 20 * 1000;
    //kJ/kg
    double h = 2500;
    //K
    double tExp = 6.418418053E+02;
    //K
    double Ttest = T_R3b_P_h(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_Subregion_b_50MPa_2400h)
{
    //kPa
    double press = 50 * 1000;
    //kJ/kg
    double h = 2400;
    //K
    double tExp = 7.351848618E+02;
    //K
    double Ttest = T_R3b_P_h(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_Subregion_b_100MPa_2700h)
{
    //kPa
    double press = 100 * 1000;
    //kJ/kg
    double h = 2700;
    //K
    double tExp = 8.420460876E+02;
    //K
    double Ttest = T_R3b_P_h(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_20MPa_1700h)
{
    //kPa
    double press = 20 * 1000;
    //kJ/kg
    double h = 1700;
    //K
    double tExp = 6.293083892E+02;
    //K
    double Ttest = T_P_h_R3(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_50MPa_2000h)
{
    //kPa
    double press = 50 * 1000;
    //kJ/kg
    double h = 2000;
    //K
    double tExp = 6.905718338E+02;
    //K
    double Ttest = T_P_h_R3(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_100MPa_2100h)
{
    //kPa
    double press = 100 * 1000;
    //kJ/kg
    double h = 2100;
    //K
    double tExp = 7.336163014E+02;
    //K
    double Ttest = T_P_h_R3(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_20MPa_2500h)
{
    //kPa
    double press = 20 * 1000;
    //kJ/kg
    double h = 2500;
    //K
    double tExp = 6.418418053E+02;
    //K
    double Ttest = T_P_h_R3(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_50MPa_2400h)
{
    //kPa
    double press = 50 * 1000;
    //kJ/kg
    double h = 2400;
    //K
    double tExp = 7.351848618E+02;
    //K
    double Ttest = T_P_h_R3(press,h);

    double TErr = AbsRelativeErr(Ttest, tExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_Temperature_100MPa_2700h)
{
    //kPa
    double press = 100 * 1000;
    //kJ/kg
    double h = 2700;
    //K
    double tExp = 8.420460876E+02;
    //K
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

//Subregion boundary v(P,h) - specific volume

TEST_F(AccTestsRegion3SubBoundaries, vPh_v_Subregion_a_20MPa_1700h)
{
    //kPa
    double press = 20 * 1000;
    //kJ/kg
    double h = 1700;
    //m^3/kg
    double vExp = 1.749903962E-03;
    //K
    double vtest = v_R3a_P_h(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_Subregion_a_50MPa_2000h)
{
    //kPa
    double press = 50 * 1000;
    //kJ/kg
    double h = 2000;
    //m^3/kg
    double vExp = 1.908139035E-03;
    //K
    double vtest = v_R3a_P_h(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_Subregion_a_100MPa_2100h)
{
    //kPa
    double press = 100 * 1000;
    //kJ/kg
    double h = 2100;
    //m^3/kg
    double vExp = 1.676229776E-03;
    //K
    double vtest = v_R3a_P_h(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_Subregion_b_20MPa_2500h)
{
    //kPa
    double press = 20 * 1000;
    //kJ/kg
    double h = 2500;
    //m^3/kg
    double vExp = 6.670547043E-03;
    //K
    double vtest = v_R3b_P_h(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_Subregion_b_50MPa_2400h)
{
    //kPa
    double press = 50 * 1000;
    //kJ/kg
    double h = 2400;
    //m^3/kg
    double vExp = 2.801244590E-03;
    //K
    double vtest = v_R3b_P_h(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_Subregion_b_100MPa_2700h)
{
    //kPa
    double press = 100 * 1000;
    //kJ/kg
    double h = 2700;
    //m^3/kg
    double vExp = 2.404234998E-03;
    //K
    double vtest = v_R3b_P_h(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_20MPa_1700h)
{
    //kPa
    double press = 20 * 1000;
    //kJ/kg
    double h = 1700;
    //m^3/kg
    double vExp = 1.749903962E-03;
    //K
    double vtest = v_P_h_R3(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_50MPa_2000h)
{
    //kPa
    double press = 50 * 1000;
    //kJ/kg
    double h = 2000;
    //m^3/kg
    double vExp = 1.908139035E-03;
    //K
    double vtest = v_P_h_R3(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_100MPa_2100h)
{
    //kPa
    double press = 100 * 1000;
    //kJ/kg
    double h = 2100;
    //m^3/kg
    double vExp = 1.676229776E-03;
    //K
    double vtest = v_P_h_R3(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_20MPa_2500h)
{
    //kPa
    double press = 20 * 1000;
    //kJ/kg
    double h = 2500;
    //m^3/kg
    double vExp = 6.670547043E-03;
    //K
    double vtest = v_P_h_R3(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_50MPa_2400h)
{
    //kPa
    double press = 50 * 1000;
    //kJ/kg
    double h = 2400;
    //m^3/kg
    double vExp = 2.801244590E-03;
    //K
    double vtest = v_P_h_R3(press,h);

    double vErr = AbsRelativeErr(vtest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3SubBoundaries, vPh_v_100MPa_2700h)
{
    //kPa
    double press = 100 * 1000;
    //kJ/kg
    double h = 2700;
    //m^3/kg
    double vExp = 2.404234998E-03;
    //K
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

//Subregion boundary v(P,h) - enthalpy subregion boundary

TEST_F(AccTestsRegion3SubBoundaries, vPh_h_SubregionBoundary_ab_25MPa)
{
    //kPa
    double press = 25 * 1000;
    //kJ/kg
    double hExp = 2.095936454E+03;
    //K
    double hTest = h_R3ab_P(press);

    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
