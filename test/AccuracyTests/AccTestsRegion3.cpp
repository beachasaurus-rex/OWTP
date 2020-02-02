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
    DLL_IMPORT double u_P_T_R3(double, double);
    DLL_IMPORT double s_P_T_R3(double, double);
    DLL_IMPORT double h_P_T_R3(double, double);
    DLL_IMPORT double cv_P_T_R3(double, double);
    DLL_IMPORT double cp_P_T_R3(double, double);
    DLL_IMPORT double w_P_T_R3(double, double);

    //properties as functions of enthalpy and entropy
    DLL_IMPORT double P_h_s_R3(double,double);
    DLL_IMPORT double T_h_s_R3(double,double);
    DLL_IMPORT double v_h_s_R3(double,double);
    DLL_IMPORT double u_h_s_R3(double,double);
    DLL_IMPORT double cp_h_s_R3(double,double);
    DLL_IMPORT double cv_h_s_R3(double,double);
    DLL_IMPORT double w_h_s_R3(double,double);
}

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 33 on page 32.

TEST_F(AccTestsRegion3, P_rho_T_500rho_650K)
{
    const double testRho = 500;
    const double testTemp = 650;
    const double pExp = 0.255837018E+02;

    double P = P_Rho_T_R3(testRho, testTemp);
    double PErr = AbsRelativeErr(P, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion3, u_rho_T_500rho_650K)
{
    const double testRho = 500;
    const double testTemp = 650;
    const double uExp = 0.181226279E+04;

    double u = u_Rho_T_R3(testRho, testTemp);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, s_rho_T_500rho_650K)
{
    const double testRho = 500;
    const double testTemp = 650;
    const double sExp = 0.405427273E+01;

    double s = s_Rho_T_R3(testRho, testTemp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion3, h_rho_T_500rho_650K)
{
    const double testRho = 500;
    const double testTemp = 650;
    const double hExp = 0.186343019E+04;

    double h = h_Rho_T_R3(testRho, testTemp);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion3, cp_rho_T_500rho_650K)
{
    const double testRho = 500;
    const double testTemp = 650;
    const double cpExp = 0.138935717E+02;

    double cp = cp_Rho_T_R3(testRho, testTemp);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, cv_rho_T_500rho_650K)
{
    const double testRho = 500;
    const double testTemp = 650;
    const double cvExp = 3.191317871889;

    double cv = cv_Rho_T_R3(testRho, testTemp);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, w_rho_T_500rho_650K)
{
    const double testRho = 500;
    const double testTemp = 650;
    const double wExp = 0.502005554E+03;

    double w = w_Rho_T_R3(testRho, testTemp);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, P_rho_T_200rho_650K)
{
    const double testRho = 200;
    const double testTemp = 650;
    const double pExp = 0.222930643E+02;

    double P = P_Rho_T_R3(testRho, testTemp);
    double PErr = AbsRelativeErr(P, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion3, u_rho_T_200rho_650K)
{
    const double testRho = 200;
    const double testTemp = 650;
    const double uExp = 0.226365868E+04;

    double u = u_Rho_T_R3(testRho, testTemp);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, s_rho_T_200rho_650K)
{
    const double testRho = 200;
    const double testTemp = 650;
    const double sExp = 0.485438792E+01;

    double s = s_Rho_T_R3(testRho, testTemp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion3, h_rho_T_200rho_650K)
{
    const double testRho = 200;
    const double testTemp = 650;
    const double hExp = 0.237512401E+04;

    double h = h_Rho_T_R3(testRho, testTemp);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion3, cp_rho_T_200rho_650K)
{
    const double testRho = 200;
    const double testTemp = 650;
    const double cpExp = 0.446579342E+02;

    double cp = cp_Rho_T_R3(testRho, testTemp);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, cv_rho_T_200rho_650K)
{
    const double testRho = 200;
    const double testTemp = 650;
    const double cvExp = 4.04118075955;

    double cv = cv_Rho_T_R3(testRho, testTemp);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, w_rho_T_200rho_650K)
{
    const double testRho = 200;
    const double testTemp = 650;
    const double wExp = 0.383444594E+03;

    double w = w_Rho_T_R3(testRho, testTemp);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, P_rho_T_500rho_750K)
{
    const double testRho = 500;
    const double testTemp = 750;
    const double pExp = 0.783095639E+02;

    double P = P_Rho_T_R3(testRho, testTemp);
    double PErr = AbsRelativeErr(P, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion3, u_rho_T_500rho_750K)
{
    const double testRho = 500;
    const double testTemp = 750;
    const double uExp = 0.210206932E+04;

    double u = u_Rho_T_R3(testRho, testTemp);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, s_rho_T_500rho_750K)
{
    const double testRho = 500;
    const double testTemp = 750;
    const double sExp = 0.446971906E+01;

    double s = s_Rho_T_R3(testRho, testTemp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion3, h_rho_T_500rho_750K)
{
    const double testRho = 500;
    const double testTemp = 750;
    const double hExp = 0.225868845E+04;

    double h = h_Rho_T_R3(testRho, testTemp);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion3, cp_rho_T_500rho_750K)
{
    const double testRho = 500;
    const double testTemp = 750;
    const double cpExp = 0.634165359E+01;

    double cp = cp_Rho_T_R3(testRho, testTemp);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, cv_rho_T_500rho_750K)
{
    const double testRho = 500;
    const double testTemp = 750;
    const double cvExp = 2.71701677121;

    double cv = cv_Rho_T_R3(testRho, testTemp);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, w_rho_T_500rho_750K)
{
    const double testRho = 500;
    const double testTemp = 750;
    const double wExp = 0.760696041E+03;

    double w = w_Rho_T_R3(testRho, testTemp);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion3, P_v_T_1over500v_650K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 650;
    const double pExp = 0.255837018E+02;

    double P = P_v_T_R3(testV, testTemp);
    double PErr = AbsRelativeErr(P, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion3, u_v_T_1over500v_650K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 650;
    const double uExp = 0.181226279E+04;

    double u = u_v_T_R3(testV, testTemp);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, s_v_T_1over500v_650K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 650;
    const double sExp = 0.405427273E+01;

    double s = s_v_T_R3(testV, testTemp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion3, h_v_T_1over500v_650K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 650;
    const double hExp = 0.186343019E+04;

    double h = h_v_T_R3(testV, testTemp);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion3, cp_v_T_1over500v_650K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 650;
    const double cpExp = 0.138935717E+02;

    double cp = cp_v_T_R3(testV, testTemp);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, cv_v_T_1over500v_650K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 650;
    const double cvExp = 3.191317871889;

    double cv = cv_v_T_R3(testV, testTemp);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, w_v_T_1over500v_650K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 650;
    const double wExp = 0.502005554E+03;

    double w = w_v_T_R3(testV, testTemp);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, P_v_T_1over200v_650K)
{
    const double testV = 1.0/200.0;
    const double testTemp = 650;
    const double pExp = 0.222930643E+02;

    double P = P_v_T_R3(testV, testTemp);
    double PErr = AbsRelativeErr(P, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion3, u_v_T_1over200v_650K)
{
    const double testV = 1.0/200.0;
    const double testTemp = 650;
    const double uExp = 0.226365868E+04;

    double u = u_v_T_R3(testV, testTemp);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, s_v_T_1over200v_650K)
{
    const double testV = 1.0/200.0;
    const double testTemp = 650;
    const double sExp = 0.485438792E+01;

    double s = s_v_T_R3(testV, testTemp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion3, h_v_T_1over200v_650K)
{
    const double testV = 1.0/200.0;
    const double testTemp = 650;
    const double hExp = 0.237512401E+04;

    double h = h_v_T_R3(testV, testTemp);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion3, cp_v_T_1over200v_650K)
{
    const double testV = 1.0/200.0;
    const double testTemp = 650;
    const double cpExp = 0.446579342E+02;

    double cp = cp_v_T_R3(testV, testTemp);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, cv_v_T_1over200v_650K)
{
    const double testV = 1.0/200.0;
    const double testTemp = 650;
    const double cvExp = 4.04118075955;

    double cv = cv_v_T_R3(testV, testTemp);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, w_v_T_1over200v_650K)
{
    const double testV = 1.0/200.0;
    const double testTemp = 650;
    const double wExp = 0.383444594E+03;

    double w = w_v_T_R3(testV, testTemp);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, P_v_T_1over500v_750K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 750;
    const double pExp = 0.783095639E+02;

    double P = P_v_T_R3(testV, testTemp);
    double PErr = AbsRelativeErr(P, pExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion3, u_v_T_1over500v_750K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 750;
    const double uExp = 0.210206932E+04;

    double u = u_v_T_R3(testV, testTemp);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, s_v_T_1over500v_750K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 750;
    const double sExp = 0.446971906E+01;

    double s = s_v_T_R3(testV, testTemp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion3, h_v_T_1over500v_750K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 750;
    const double hExp = 0.225868845E+04;

    double h = h_v_T_R3(testV, testTemp);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion3, cp_v_T_1over500v_750K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 750;
    const double cpExp = 0.634165359E+01;

    double cp = cp_v_T_R3(testV, testTemp);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, cv_v_T_1over500v_750K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 750;
    const double cvExp = 2.71701677121;

    double cv = cv_v_T_R3(testV, testTemp);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, w_v_T_1over500v_750K)
{
    const double testV = 1.0/500.0;
    const double testTemp = 750;
    const double wExp = 0.760696041E+03;

    double w = w_v_T_R3(testV, testTemp);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion3, v_P_T_0d255837018Ep02MPa_650K)
{
    const double press = 0.255837018E+02;
    const double temp = 650;
    const double vExp = 1.0/500.0;

    double v = v_P_T_R3(press,temp);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, u_P_T_0d255837018Ep02MPa_650K)
{
    const double press = 0.255837018E+02;
    const double temp = 650;
    const double uExp = 0.181226279E+04;

    double u = u_P_T_R3(press,temp);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, s_P_T_0d255837018Ep02MPa_650K)
{
    const double press = 0.255837018E+02;
    const double temp = 650;
    const double sExp = 0.405427273E+01;

    double s = s_P_T_R3(press,temp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion3, h_P_T_0d255837018Ep02MPa_650K)
{
    const double press = 0.255837018E+02;
    const double temp = 650;
    const double hExp = 0.186343019E+04;

    double h = h_P_T_R3(press,temp);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion3, cp_P_T_0d255837018Ep02MPa_650K)
{
    const double press = 0.255837018E+02;
    const double temp = 650;
    const double cpExp = 0.138935717E+02;

    double cp = cp_P_T_R3(press,temp);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, cv_P_T_0d255837018Ep02MPa_650K)
{
    const double press = 0.255837018E+02;
    const double temp = 650;
    const double cvExp = 3.191317871889;

    double cv = cv_P_T_R3(press,temp);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, w_P_T_0d255837018Ep02MPa_650K)
{
    const double press = 0.255837018E+02;
    const double temp = 650;
    const double wExp = 0.502005554E+03;

    double w = w_P_T_R3(press,temp);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, v_P_T_0d222930643Ep02MPa_650K)
{
    const double press = 0.222930643E+02;
    const double temp = 650;
    const double vExp = 1.0/200.0;

    double v = v_P_T_R3(press,temp);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, u_P_T_0d222930643Ep02MPa_650K)
{
    const double press = 0.222930643E+02;
    const double temp = 650;
    const double uExp = 0.226365868E+04;

    double u = u_P_T_R3(press,temp);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, s_P_T_0d222930643Ep02MPa_650K)
{
    const double press = 0.222930643E+02;
    const double temp = 650;
    const double sExp = 0.485438792E+01;

    double s = s_P_T_R3(press,temp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion3, h_P_T_0d222930643Ep02MPa_650K)
{
    const double press = 0.222930643E+02;
    const double temp = 650;
    const double hExp = 0.237512401E+04;

    double h = h_P_T_R3(press,temp);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion3, cp_P_T_0d222930643Ep02MPa_650K)
{
    const double press = 0.222930643E+02;
    const double temp = 650;
    const double cpExp = 0.446579342E+02;

    double cp = cp_P_T_R3(press,temp);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, cv_P_T_0d222930643Ep02MPa_650K)
{
    const double press = 0.222930643E+02;
    const double temp = 650;
    const double cvExp = 4.04118075955;

    double cv = cv_P_T_R3(press,temp);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, w_P_T_0d222930643Ep02MPa_650K)
{
    const double press = 0.222930643E+02;
    const double temp = 650;
    const double wExp = 0.383444594E+03;

    double w = w_P_T_R3(press,temp);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, v_P_T_0d783095639Ep02MPa_750K)
{
    const double press = 0.783095639E+02;
    const double temp = 750;
    const double vExp = 1.0/500.0;

    double v = v_P_T_R3(press,temp);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, u_P_T_0d783095639Ep02MPa_750K)
{
    const double press = 0.783095639E+02;
    const double temp = 750;
    const double uExp = 0.210206932E+04;

    double u = u_P_T_R3(press,temp);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, s_P_T_0d783095639Ep02MPa_750K)
{
    const double press = 0.783095639E+02;
    const double temp = 750;
    const double sExp = 0.446971906E+01;

    double s = s_P_T_R3(press,temp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion3, h_P_T_0d783095639Ep02MPa_750K)
{
    const double press = 0.783095639E+02;
    const double temp = 750;
    const double hExp = 0.225868845E+04;

    double h = h_P_T_R3(press,temp);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion3, cp_P_T_0d783095639Ep02MPa_750K)
{
    const double press = 0.783095639E+02;
    const double temp = 750;
    const double cpExp = 0.634165359E+01;

    double cp = cp_P_T_R3(press,temp);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, cv_P_T_0d783095639Ep02MPa_750K)
{
    const double press = 0.783095639E+02;
    const double temp = 750;
    const double cvExp = 2.71701677121;

    double cv = cv_P_T_R3(press,temp);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, w_P_T_0d783095639Ep02MPa_750K)
{
    const double press = 0.783095639E+02;
    const double temp = 750;
    const double wExp = 0.760696041E+03;

    double w = w_P_T_R3(press,temp);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion3, P_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double pExp = 0.255837018E+02;
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;

    double pTest = P_h_s_R3(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, v_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double vExp = 1.0/500.0;
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;

    double vTest = v_h_s_R3(h,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, T_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double tExp = 650;
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;

    double tTest = T_h_s_R3(h,s);
    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(AccTestsRegion3, u_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;
    const double uExp = 0.181226279E+04;

    double uTest = u_h_s_R3(h,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, cv_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;
    const double cvExp = 3.191317871889;

    double uTest = u_h_s_R3(h,s);
    double cvTest = cv_h_s_R3(h,s);
    double cvErr = AbsRelativeErr(cvTest, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, cp_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;
    const double cpExp = 0.138935717E+02;

    double cpTest = cp_h_s_R3(h,s);
    double cpErr = AbsRelativeErr(cpTest, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, w_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;
    const double wExp = 0.502005554E+03;

    double wTest = w_h_s_R3(h,s);
    double wErr = AbsRelativeErr(wTest, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, P_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double pExp = 0.222930643E+02;
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;

    double pTest = P_h_s_R3(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, v_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double vExp = 1.0/200.0;
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;

    double vTest = v_h_s_R3(h,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, T_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double tExp = 650;
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;

    double tTest = T_h_s_R3(h,s);
    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(AccTestsRegion3, u_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;
    const double uExp = 0.226365868E+04;

    double uTest = u_h_s_R3(h,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, cv_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;
    const double cvExp = 4.04118075955;

    double cvTest = cv_h_s_R3(h,s);
    double cvErr = AbsRelativeErr(cvTest, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, cp_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;
    const double cpExp = 0.446579342E+02;

    double cpTest = cp_h_s_R3(h,s);
    double cpErr = AbsRelativeErr(cpTest, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, w_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;
    const double wExp = 0.383444594E+03;

    double wTest = w_h_s_R3(h,s);
    double wErr = AbsRelativeErr(wTest, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, P_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double pExp = 0.783095639E+02;
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;

    double pTest = P_h_s_R3(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, v_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    double vExp = 1.0/500.0;
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;

    double vTest = v_h_s_R3(h,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, T_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double tExp = 750;
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;

    double tTest = T_h_s_R3(h,s);
    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(AccTestsRegion3, u_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;
    const double uExp = 0.210206932E+04;

    double uTest = u_h_s_R3(h,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion3, cv_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;
    const double cvExp = 2.71701677121;

    double cvTest = cv_h_s_R3(h,s);
    double cvErr = AbsRelativeErr(cvTest, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion3, cp_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;
    const double cpExp = 0.634165359E+01;

    double cpTest = cp_h_s_R3(h,s);
    double cpErr = AbsRelativeErr(cpTest, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion3, w_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;
    const double wExp = 0.760696041E+03;

    double wTest = w_h_s_R3(h,s);
    double wErr = AbsRelativeErr(wTest, wExp);
    bool wPass = IsAcceptable(wErr);
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
    const double pressure = 50;
    const double temp = 630;
    const double vActual = 1.470853100E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_a_P_80MPa_T_670K)
{
    const double pressure = 80;
    const double temp = 670;
    const double vActual = 1.503831359E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_b_P_50MPa_T_710K)
{
    const double pressure = 50;
    const double temp = 710;
    const double vActual = 2.204728587E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_b_P_80MPa_T_750K)
{
    const double pressure = 80;
    const double temp = 750;
    const double vActual = 1.973692940E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_c_P_20MPa_T_630K)
{
    const double pressure = 20;
    const double temp = 630;
    const double vActual = 1.761696406E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_c_P_30MPa_T_650K)
{
    const double pressure = 30;
    const double temp = 650;
    const double vActual = 1.819560617E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_d_P_26MPa_T_656K)
{
    const double pressure = 26;
    const double temp = 656;
    const double vActual = 2.245587720E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_d_P_30MPa_T_670K)
{
    const double pressure = 30;
    const double temp = 670;
    const double vActual = 2.506897702E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_e_P_26MPa_T_661K)
{
    const double pressure = 26;
    const double temp = 661;
    const double vActual = 2.970225962E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_e_P_30MPa_T_675K)
{
    const double pressure = 30;
    const double temp = 675;
    const double vActual = 3.004627086E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_f_P_26MPa_T_671K)
{
    const double pressure = 26;
    const double temp = 671;
    const double vActual = 5.019029401E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_f_P_30MPa_T_690K)
{
    const double pressure = 30;
    const double temp = 690;
    const double vActual = 4.656470142E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_g_P_23d6MPa_T_649K)
{
    const double pressure = 23.6;
    const double temp = 649;
    const double vActual = 2.163198378E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_g_P_24MPa_T_650K)
{
    const double pressure = 24;
    const double temp = 650;
    const double vActual = 2.166044161E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_h_P_23d6MPa_T_652K)
{
    const double pressure = 23.6;
    const double temp = 652;
    const double vActual = 2.651081407E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_h_P_24MPa_T_654K)
{
    const double pressure = 24;
    const double temp = 654;
    const double vActual = 2.967802335E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_i_P_23d6MPa_T_653K)
{
    const double pressure = 23.6;
    const double temp = 653;
    const double vActual = 3.273916816E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_i_P_24MPa_T_655K)
{
    const double pressure = 24;
    const double temp = 655;
    const double vActual = 3.550329864E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_j_P_23d5MPa_T_655K)
{
    const double pressure = 23.5;
    const double temp = 655;
    const double vActual = 4.545001142E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_j_P_24MPa_T_660K)
{
    const double pressure = 24;
    const double temp = 660;
    const double vActual = 5.100267704E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_k_P_23MPa_T_660K)
{
    const double pressure = 23;
    const double temp = 660;
    const double vActual = 6.109525997E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);

    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_k_P_24MPa_T_670K)
{
    const double pressure = 24;
    const double temp = 670;
    const double vActual = 6.427325645E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_l_P_22d6MPa_T_646K)
{
    const double pressure = 22.6;
    const double temp = 646;
    const double vActual = 2.117860851E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_l_P_23MPa_T_646K)
{
    const double pressure = 23;
    const double temp = 646;
    const double vActual = 2.062374674E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_m_P_22d6MPa_T_648d6K)
{
    const double pressure = 22.6;
    const double temp = 648.6;
    const double vActual = 2.533063780E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_m_P_22d8MPa_T_649d3K)
{
    const double pressure = 22.8;
    const double temp = 649.3;
    const double vActual = 2.572971781E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_n_P_22d6MPa_T_649d0K)
{
    const double pressure = 22.6;
    const double temp = 649.0;
    const double vActual = 2.923432711E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_n_P_22d8MPa_T_649d7K)
{
    const double pressure = 22.8;
    const double temp = 649.7;
    const double vActual = 2.913311494E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_o_P_22d6MPa_T_649d1K)
{
    const double pressure = 22.6;
    const double temp = 649.1;
    const double vActual = 3.131208996E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_o_P_22d8MPa_T_649d9K)
{
    const double pressure = 22.8;
    const double temp = 649.9;
    const double vActual = 3.221160278E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_p_P_22d6MPa_T_649d4K)
{
    const double pressure = 22.6;
    const double temp = 649.4;
    const double vActual = 3.715596186E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_p_P_22d8MPa_T_650d2K)
{
    const double pressure = 22.8;
    const double temp = 650.2;
    const double vActual = 3.664754790E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_q_P_21d1MPa_T_640K)
{
    const double pressure = 21.1;
    const double temp = 640;
    const double vActual = 1.970999272E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_q_P_21d8MPa_T_643K)
{
    const double pressure = 21.8;
    const double temp = 643;
    const double vActual = 2.043919161E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_r_P_21d1MPa_T_644K)
{
    const double pressure = 21.1;
    const double temp = 644;
    const double vActual = 5.251009921E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_r_P_21d8MPa_T_648K)
{
    const double pressure = 21.8;
    const double temp = 648;
    const double vActual = 5.256844741E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_s_P_19d1MPa_T_635K)
{
    const double pressure = 19.1;
    const double temp = 635;
    const double vActual = 1.932829079E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_s_P_20MPa_T_638K)
{
    const double pressure = 20;
    const double temp = 638;
    const double vActual = 1.985387227E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_t_P_17MPa_T_626K)
{
    const double pressure = 17;
    const double temp = 626;
    const double vActual = 8.483262001E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_t_P_20MPa_T_640K)
{
    const double pressure = 20;
    const double temp = 640;
    const double vActual = 6.227528101E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_u_P_21d5MPa_T_644d6K)
{
    const double pressure = 21.5;
    const double temp = 644.6;
    const double vActual = 2.268366647E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_u_P_22d0MPa_T_646d1K)
{
    const double pressure = 22.0;
    const double temp = 646.1;
    const double vActual = 2.296350553E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_v_P_22d5MPa_T_648d6K)
{
    const double pressure = 22.5;
    const double temp = 648.6;
    const double vActual = 2.832373260E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_v_P_22d3MPa_T_647d9K)
{
    const double pressure = 22.3;
    const double temp = 647.9;
    const double vActual = 2.811424405E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_w_P_22d15MPa_T_647d5K)
{
    const double pressure = 22.15;
    const double temp = 647.5;
    const double vActual = 3.694032281E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_w_P_22d3MPa_T_648d1K)
{
    const double pressure = 22.3;
    const double temp = 648.1;
    const double vActual = 3.622226305E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_x_P_22d11MPa_T_648d0K)
{
    const double pressure = 22.11;
    const double temp = 648.0;
    const double vActual = 4.528072649E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_x_P_22d3MPa_T_649d0K)
{
    const double pressure = 22.3;
    const double temp = 649.0;
    const double vActual = 4.556905799E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_y_P_22d0MPa_T_646d84K)
{
    const double pressure = 22.0;
    const double temp = 646.84;
    const double vActual = 2.698354719E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_y_P_22d064MPa_T_647d05K)
{
    const double pressure = 22.064;
    const double temp = 647.05;
    const double vActual = 2.717655648E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_z_P_22d0MPa_T_646d89K)
{
    const double pressure = 22.0;
    const double temp = 646.89;
    const double vActual = 3.798732962E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_Subregion_z_P_22d064MPa_T_647d15K)
{
    const double pressure = 22.064;
    const double temp = 647.15;
    const double vActual = 3.701940010E-03;

    double vTest = v_P_T_R3(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}

//The test data points for the following tests were
//suggested by the IAPWS in "Revised Supplementary Release on
//Backward Equations p(h,s) for Region 3, Equations as a function of h and s
//for the Region Boundaries, and an Equation Tsat(h,s) for Region 4 of the
//IAPWS Industrial Formulation 1997 for the Thermodynamic Properties of
//Water and Steam" in table 5 on page 10.

TEST_F(AccTestsRegion3, P_h_s_1700h_3d8s)
{
    const double h = 1700;
    const double s = 3.8;
    const double pExp = 2.555703246E+01;

    double pTest = P_h_s_R3(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2000h_4d2s)
{
    const double h = 2000;
    const double s = 4.2;
    const double pExp = 4.540873468E+01;

    double pTest = P_h_s_R3(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2100h_4d3s)
{
    const double h = 2100;
    const double s = 4.3;
    const double pExp = 6.078123340E+01;

    double pTest = P_h_s_R3(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2600h_5d1s)
{
    const double h = 2600;
    const double s = 5.1;
    const double pExp = 3.434999263E+01;

    double pTest = P_h_s_R3(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2400h_4d7s)
{
    const double h = 2400;
    const double s = 4.7;
    const double pExp = 6.363924887E+01;

    double pTest = P_h_s_R3(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2700h_5d0s)
{
    const double h = 2700;
    const double s = 5.0;
    const double pExp = 8.839043281E+01;

    double pTest = P_h_s_R3(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
