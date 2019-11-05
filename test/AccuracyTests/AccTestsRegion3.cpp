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
}

TEST_F(AccTestsRegion3, PropertiesAsFunctionsDfDensityTemperature500rho650K)
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
TEST_F(AccTestsRegion3, PropertiesAsFunctionsDfDensityTemperature200rho650K)
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
TEST_F(AccTestsRegion3, PropertiesAsFunctionsDfDensityTemperature500rho750K)
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
