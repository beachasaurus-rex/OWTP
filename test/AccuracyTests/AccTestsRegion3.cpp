#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsRegion3 : public AccTestBase {};

extern "C"
{
    //properties as functions of density and temperature
    DLL_IMPORT double P_Rho_T_R3(double, double);
    DLL_IMPORT double u_Rho_T_R3(double, double);
    DLL_IMPORT double s_Rho_T_R3(double, double);
    DLL_IMPORT double h_Rho_T_R3(double, double);
    DLL_IMPORT double cp_Rho_T_R3(double, double);
    DLL_IMPORT double cv_Rho_T_R3(double, double);
    DLL_IMPORT double w_Rho_T_R3(double, double);

    //properties as functions of specific volume and temperature
    DLL_IMPORT double P_v_T_R3(double, double);
    DLL_IMPORT double u_v_T_R3(double, double);
    DLL_IMPORT double s_v_T_R3(double, double);
    DLL_IMPORT double h_v_T_R3(double, double);
    DLL_IMPORT double cp_v_T_R3(double, double);
    DLL_IMPORT double cv_v_T_R3(double, double);
    DLL_IMPORT double w_v_T_R3(double, double);

    //properties as functions of pressure and temperature
    DLL_IMPORT double v_P_T_R3(double, double);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 33 on page 32.

TEST_F(AccTestsRegion3, PropertiesAsFunctionsOfDensityTemperature500rho650K)
{
    //kg/m^3
    double testRho = 500;
    //K
    double testTemp = 650;

    double P = P_Rho_T_R3(testRho, testTemp) / 1000;
    double u = u_Rho_T_R3(testRho, testTemp);
    double s = s_Rho_T_R3(testRho, testTemp);
    double h = h_Rho_T_R3(testRho, testTemp);
    double cp = cp_Rho_T_R3(testRho, testTemp);
    double cv = cv_Rho_T_R3(testRho, testTemp);
    double w = w_Rho_T_R3(testRho, testTemp);

    double PErr = AbsRelativeErr(P, 0.255837018E+02);
    double uErr = AbsRelativeErr(u, 0.181226279E+04);
    double sErr = AbsRelativeErr(s, 0.405427273E+01);
    double hErr = AbsRelativeErr(h, 0.186343019E+04);
    double cpErr = AbsRelativeErr(cp, 0.138935717E+02);
    double cvErr = AbsRelativeErr(cv, 3.191317871889);
    double wErr = AbsRelativeErr(w, 0.502005554E+03);

    bool PPass = IsAcceptable(PErr);
    bool uPass = IsAcceptable(uErr);
    bool sPass = IsAcceptable(sErr);
    bool hPass = IsAcceptable(hErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(PPass);
    ASSERT_TRUE(uPass);
    ASSERT_TRUE(sPass);
    ASSERT_TRUE(hPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, PropertiesAsFunctionsOfDensityTemperature200rho650K)
{
    //kg/m^3
    double testRho = 200;
    //K
    double testTemp = 650;

    double P = P_Rho_T_R3(testRho, testTemp) / 1000;
    double u = u_Rho_T_R3(testRho, testTemp);
    double s = s_Rho_T_R3(testRho, testTemp);
    double h = h_Rho_T_R3(testRho, testTemp);
    double cp = cp_Rho_T_R3(testRho, testTemp);
    double cv = cv_Rho_T_R3(testRho, testTemp);
    double w = w_Rho_T_R3(testRho, testTemp);

    double PErr = AbsRelativeErr(P, 0.222930643E+02);
    double uErr = AbsRelativeErr(u, 0.226365868E+04);
    double sErr = AbsRelativeErr(s, 0.485438792E+01);
    double hErr = AbsRelativeErr(h, 0.237512401E+04);
    double cpErr = AbsRelativeErr(cp, 0.446579342E+02);
    double cvErr = AbsRelativeErr(cv, 4.04118075955);
    double wErr = AbsRelativeErr(w, 0.383444594E+03);

    bool PPass = IsAcceptable(PErr);
    bool uPass = IsAcceptable(uErr);
    bool sPass = IsAcceptable(sErr);
    bool hPass = IsAcceptable(hErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(PPass);
    ASSERT_TRUE(uPass);
    ASSERT_TRUE(sPass);
    ASSERT_TRUE(hPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, PropertiesAsFunctionsOfDensityTemperature500rho750K)
{
    //kg/m^3
    double testRho = 500;
    //K
    double testTemp = 750;

    double P = P_Rho_T_R3(testRho, testTemp) / 1000;
    double u = u_Rho_T_R3(testRho, testTemp);
    double s = s_Rho_T_R3(testRho, testTemp);
    double h = h_Rho_T_R3(testRho, testTemp);
    double cp = cp_Rho_T_R3(testRho, testTemp);
    double cv = cv_Rho_T_R3(testRho, testTemp);
    double w = w_Rho_T_R3(testRho, testTemp);

    double PErr = AbsRelativeErr(P, 0.783095639E+02);
    double uErr = AbsRelativeErr(u, 0.210206932E+04);
    double sErr = AbsRelativeErr(s, 0.446971906E+01);
    double hErr = AbsRelativeErr(h, 0.225868845E+04);
    double cpErr = AbsRelativeErr(cp, 0.634165359E+01);
    double cvErr = AbsRelativeErr(cv, 2.71701677121);
    double wErr = AbsRelativeErr(w, 0.760696041E+03);

    bool PPass = IsAcceptable(PErr);
    bool uPass = IsAcceptable(uErr);
    bool sPass = IsAcceptable(sErr);
    bool hPass = IsAcceptable(hErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(PPass);
    ASSERT_TRUE(uPass);
    ASSERT_TRUE(sPass);
    ASSERT_TRUE(hPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, PropertiesAsFunctionsOfSpecificVolumeTemperature1over500v650K)
{
    //kg/m^3
    double testV = 1.0/500.0;
    //K
    double testTemp = 650;

    double P = P_v_T_R3(testV, testTemp) / 1000;
    double u = u_v_T_R3(testV, testTemp);
    double s = s_v_T_R3(testV, testTemp);
    double h = h_v_T_R3(testV, testTemp);
    double cp = cp_v_T_R3(testV, testTemp);
    double cv = cv_v_T_R3(testV, testTemp);
    double w = w_v_T_R3(testV, testTemp);

    double PErr = AbsRelativeErr(P, 0.255837018E+02);
    double uErr = AbsRelativeErr(u, 0.181226279E+04);
    double sErr = AbsRelativeErr(s, 0.405427273E+01);
    double hErr = AbsRelativeErr(h, 0.186343019E+04);
    double cpErr = AbsRelativeErr(cp, 0.138935717E+02);
    double cvErr = AbsRelativeErr(cv, 3.191317871889);
    double wErr = AbsRelativeErr(w, 0.502005554E+03);

    bool PPass = IsAcceptable(PErr);
    bool uPass = IsAcceptable(uErr);
    bool sPass = IsAcceptable(sErr);
    bool hPass = IsAcceptable(hErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(PPass);
    ASSERT_TRUE(uPass);
    ASSERT_TRUE(sPass);
    ASSERT_TRUE(hPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, PropertiesAsFunctionsOfSpecificVolumeTemperature1over200v650K)
{
    //kg/m^3
    double testV = 1.0/200.0;
    //K
    double testTemp = 650;

    double P = P_v_T_R3(testV, testTemp) / 1000;
    double u = u_v_T_R3(testV, testTemp);
    double s = s_v_T_R3(testV, testTemp);
    double h = h_v_T_R3(testV, testTemp);
    double cp = cp_v_T_R3(testV, testTemp);
    double cv = cv_v_T_R3(testV, testTemp);
    double w = w_v_T_R3(testV, testTemp);

    double PErr = AbsRelativeErr(P, 0.222930643E+02);
    double uErr = AbsRelativeErr(u, 0.226365868E+04);
    double sErr = AbsRelativeErr(s, 0.485438792E+01);
    double hErr = AbsRelativeErr(h, 0.237512401E+04);
    double cpErr = AbsRelativeErr(cp, 0.446579342E+02);
    double cvErr = AbsRelativeErr(cv, 4.04118075955);
    double wErr = AbsRelativeErr(w, 0.383444594E+03);

    bool PPass = IsAcceptable(PErr);
    bool uPass = IsAcceptable(uErr);
    bool sPass = IsAcceptable(sErr);
    bool hPass = IsAcceptable(hErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(PPass);
    ASSERT_TRUE(uPass);
    ASSERT_TRUE(sPass);
    ASSERT_TRUE(hPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, PropertiesAsFunctionsOfSpecificVolumeTemperature1over500v750K)
{
    //kg/m^3
    double testV = 1.0/500.0;
    //K
    double testTemp = 750;

    double P = P_v_T_R3(testV, testTemp) / 1000;
    double u = u_v_T_R3(testV, testTemp);
    double s = s_v_T_R3(testV, testTemp);
    double h = h_v_T_R3(testV, testTemp);
    double cp = cp_v_T_R3(testV, testTemp);
    double cv = cv_v_T_R3(testV, testTemp);
    double w = w_v_T_R3(testV, testTemp);

    double PErr = AbsRelativeErr(P, 0.783095639E+02);
    double uErr = AbsRelativeErr(u, 0.210206932E+04);
    double sErr = AbsRelativeErr(s, 0.446971906E+01);
    double hErr = AbsRelativeErr(h, 0.225868845E+04);
    double cpErr = AbsRelativeErr(cp, 0.634165359E+01);
    double cvErr = AbsRelativeErr(cv, 2.71701677121);
    double wErr = AbsRelativeErr(w, 0.760696041E+03);

    bool PPass = IsAcceptable(PErr);
    bool uPass = IsAcceptable(uErr);
    bool sPass = IsAcceptable(sErr);
    bool hPass = IsAcceptable(hErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(PPass);
    ASSERT_TRUE(uPass);
    ASSERT_TRUE(sPass);
    ASSERT_TRUE(hPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}

//The testing data points for the following tests were suggested
//by the IAPWS in "Revised Supplementary Release on
//Backward //Equations for Specific Volume as a Function of Pressure and
//Temperature v(p,T) for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" in Tables 5 & 13 on
//pages 13 & 20.

TEST_F(AccTestsRegion3, v_Subregion_a_P_50MPa_T_630K)
{
    double pressure = 50 * 1000;
    double temp = 630;
    double vActual = 1.470853100E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_a_P_80MPa_T_670K)
{
    double pressure = 80 * 1000;
    double temp = 670;
    double vActual = 1.503831359E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_b_P_50MPa_T_710K)
{
    double pressure = 50 * 1000;
    double temp = 710;
    double vActual = 2.204728587E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_b_P_80MPa_T_750K)
{
    double pressure = 80 * 1000;
    double temp = 750;
    double vActual = 1.973692940E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_c_P_20MPa_T_630K)
{
    double pressure = 20 * 1000;
    double temp = 630;
    double vActual = 1.761696406E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_c_P_30MPa_T_650K)
{
    double pressure = 30 * 1000;
    double temp = 650;
    double vActual = 1.819560617E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_d_P_26MPa_T_656K)
{
    double pressure = 26 * 1000;
    double temp = 656;
    double vActual = 2.245587720E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_d_P_30MPa_T_670K)
{
    double pressure = 30 * 1000;
    double temp = 670;
    double vActual = 2.506897702E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_e_P_26MPa_T_661K)
{
    double pressure = 26 * 1000;
    double temp = 661;
    double vActual = 2.970225962E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_e_P_30MPa_T_675K)
{
    double pressure = 30 * 1000;
    double temp = 675;
    double vActual = 3.004627086E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_f_P_26MPa_T_671K)
{
    double pressure = 26 * 1000;
    double temp = 671;
    double vActual = 5.019029401E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_f_P_30MPa_T_690K)
{
    double pressure = 30 * 1000;
    double temp = 690;
    double vActual = 4.656470142E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_g_P_23d6MPa_T_649K)
{
    double pressure = 23.6 * 1000;
    double temp = 649;
    double vActual = 2.163198378E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_g_P_24MPa_T_650K)
{
    double pressure = 24 * 1000;
    double temp = 650;
    double vActual = 2.166044161E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_h_P_23d6MPa_T_652K)
{
    double pressure = 23.6 * 1000;
    double temp = 652;
    double vActual = 2.651081407E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_h_P_24MPa_T_654K)
{
    double pressure = 24 * 1000;
    double temp = 654;
    double vActual = 2.967802335E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_i_P_23d6MPa_T_653K)
{
    double pressure = 23.6 * 1000;
    double temp = 653;
    double vActual = 3.273916816E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_i_P_24MPa_T_655K)
{
    double pressure = 24 * 1000;
    double temp = 655;
    double vActual = 3.550329864E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_j_P_23d5MPa_T_655K)
{
    double pressure = 23.5 * 1000;
    double temp = 655;
    double vActual = 4.545001142E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_j_P_24MPa_T_660K)
{
    double pressure = 24 * 1000;
    double temp = 660;
    double vActual = 5.100267704E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_k_P_23MPa_T_660K)
{
    double pressure = 23 * 1000;
    double temp = 660;
    double vActual = 6.109525997E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);

    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_k_P_24MPa_T_670K)
{
    double pressure = 24 * 1000;
    double temp = 670;
    double vActual = 6.427325645E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_l_P_22d6MPa_T_646K)
{
    double pressure = 22.6 * 1000;
    double temp = 646;
    double vActual = 2.117860851E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_l_P_23MPa_T_646K)
{
    double pressure = 23 * 1000;
    double temp = 646;
    double vActual = 2.062374674E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_m_P_22d6MPa_T_648d6K)
{
    double pressure = 22.6 * 1000;
    double temp = 648.6;
    double vActual = 2.533063780E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_m_P_22d8MPa_T_649d3K)
{
    double pressure = 22.8 * 1000;
    double temp = 649.3;
    double vActual = 2.572971781E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_n_P_22d6MPa_T_649d0K)
{
    double pressure = 22.6 * 1000;
    double temp = 649.0;
    double vActual = 2.923432711E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_n_P_22d8MPa_T_649d7K)
{
    double pressure = 22.8 * 1000;
    double temp = 649.7;
    double vActual = 2.913311494E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_o_P_22d6MPa_T_649d1K)
{
    double pressure = 22.6 * 1000;
    double temp = 649.1;
    double vActual = 3.131208996E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_o_P_22d8MPa_T_649d9K)
{
    double pressure = 22.8 * 1000;
    double temp = 649.9;
    double vActual = 3.221160278E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_p_P_22d6MPa_T_649d4K)
{
    double pressure = 22.6 * 1000;
    double temp = 649.4;
    double vActual = 3.715596186E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_p_P_22d8MPa_T_650d2K)
{
    double pressure = 22.8 * 1000;
    double temp = 650.2;
    double vActual = 3.664754790E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_q_P_21d1MPa_T_640K)
{
    double pressure = 21.1 * 1000;
    double temp = 640;
    double vActual = 1.970999272E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_q_P_21d8MPa_T_643K)
{
    double pressure = 21.8 * 1000;
    double temp = 643;
    double vActual = 2.043919161E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_r_P_21d1MPa_T_644K)
{
    double pressure = 21.1 * 1000;
    double temp = 644;
    double vActual = 5.251009921E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_r_P_21d8MPa_T_648K)
{
    double pressure = 21.8 * 1000;
    double temp = 648;
    double vActual = 5.256844741E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_s_P_19d1MPa_T_635K)
{
    double pressure = 19.1 * 1000;
    double temp = 635;
    double vActual = 1.932829079E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_s_P_20MPa_T_638K)
{
    double pressure = 20 * 1000;
    double temp = 638;
    double vActual = 1.985387227E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_t_P_17MPa_T_626K)
{
    double pressure = 17 * 1000;
    double temp = 626;
    double vActual = 8.483262001E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_t_P_20MPa_T_640K)
{
    double pressure = 20 * 1000;
    double temp = 640;
    double vActual = 6.227528101E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_u_P_21d5MPa_T_644d6K)
{
    double pressure = 21.5 * 1000;
    double temp = 644.6;
    double vActual = 2.268366647E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_u_P_22d0MPa_T_646d1K)
{
    double pressure = 22.0 * 1000;
    double temp = 646.1;
    double vActual = 2.296350553E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_v_P_22d5MPa_T_648d6K)
{
    double pressure = 22.5 * 1000;
    double temp = 648.6;
    double vActual = 2.832373260E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_v_P_22d3MPa_T_647d9K)
{
    double pressure = 22.3 * 1000;
    double temp = 647.9;
    double vActual = 2.811424405E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_w_P_22d15MPa_T_647d5K)
{
    double pressure = 22.15 * 1000;
    double temp = 647.5;
    double vActual = 3.694032281E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_w_P_22d3MPa_T_648d1K)
{
    double pressure = 22.3 * 1000;
    double temp = 648.1;
    double vActual = 3.622226305E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_x_P_22d11MPa_T_648d0K)
{
    double pressure = 22.11 * 1000;
    double temp = 648.0;
    double vActual = 4.528072649E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_x_P_22d3MPa_T_649d0K)
{
    double pressure = 22.3 * 1000;
    double temp = 649.0;
    double vActual = 4.556905799E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_y_P_22d0MPa_T_646d84K)
{
    double pressure = 22.0 * 1000;
    double temp = 646.84;
    double vActual = 2.698354719E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_y_P_22d064MPa_T_647d05K)
{
    double pressure = 22.064 * 1000;
    double temp = 647.05;
    double vActual = 2.717655648E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_z_P_22d0MPa_T_646d89K)
{
    double pressure = 22.0 * 1000;
    double temp = 646.89;
    double vActual = 3.798732962E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_z_P_22d064MPa_T_647d15K)
{
    double pressure = 22.064 * 1000;
    double temp = 647.15;
    double vActual = 3.701940010E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
