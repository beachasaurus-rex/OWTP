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

TEST_F(AccTestsRegion3, PropertiesAsFunctionsOfDensityTemperature500rho650K)
{
    //kg/m^3
    const double testRho = 500;
    //K
    const double testTemp = 650;

    double P = P_Rho_T_R3(testRho, testTemp);
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

    printf("test = %f\nexp = %f\n",P,0.255837018E+02);
    printf("test = %f\nexp = %f\n",u,0.181226279E+04);
    printf("test = %f\nexp = %f\n",s,0.405427273E+01);
    printf("test = %f\nexp = %f\n",h,0.186343019E+04);
    printf("test = %f\nexp = %f\n",cp,0.138935717E+02);
    printf("test = %f\nexp = %f\n",cv,3.191317871889);
    printf("test = %f\nexp = %f\n",w,0.502005554E+03);

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
    const double testRho = 200;
    //K
    const double testTemp = 650;

    double P = P_Rho_T_R3(testRho, testTemp);
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
    const double testRho = 500;
    //K
    const double testTemp = 750;

    double P = P_Rho_T_R3(testRho, testTemp);
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
    //m^3/kg
    const double testV = 1.0/500.0;
    //K
    const double testTemp = 650;

    double P = P_v_T_R3(testV, testTemp);
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
    //m^3/kg
    const double testV = 1.0/200.0;
    //K
    const double testTemp = 650;

    double P = P_v_T_R3(testV, testTemp);
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
    //m^3/kg
    const double testV = 1.0/500.0;
    //K
    const double testTemp = 750;

    double P = P_v_T_R3(testV, testTemp);
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

TEST_F(AccTestsRegion3, Properties_P_T_0d255837018Ep02MPa_650K)
{
    //m^3/kg
    double vActual = 1.0/500.0;
    //K
    const double temp = 650;
    //kPa
    const double press = 0.255837018E+02;

    double v = v_P_T_R3(press,temp);
    double u = u_P_T_R3(press,temp);
    double s = s_P_T_R3(press,temp);
    double h = h_P_T_R3(press,temp);
    double cp = cp_P_T_R3(press,temp);
    double cv = cv_P_T_R3(press,temp);
    double w = w_P_T_R3(press,temp);

    double vErr = AbsRelativeErr(v, vActual);
    double uErr = AbsRelativeErr(u, 0.181226279E+04);
    double sErr = AbsRelativeErr(s, 0.405427273E+01);
    double hErr = AbsRelativeErr(h, 0.186343019E+04);
    double cpErr = AbsRelativeErr(cp, 0.138935717E+02);
    double cvErr = AbsRelativeErr(cv, 3.191317871889);
    double wErr = AbsRelativeErr(w, 0.502005554E+03);

    bool vPass = IsAcceptable(vErr);
    bool uPass = IsAcceptable(uErr);
    bool sPass = IsAcceptable(sErr);
    bool hPass = IsAcceptable(hErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(vPass);
    ASSERT_TRUE(uPass);
    ASSERT_TRUE(sPass);
    ASSERT_TRUE(hPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, Properties_P_T_0d222930643Ep02MPa_650K)
{
    //m^3/kg
    double vActual = 1.0/200.0;
    //K
    const double temp = 650;
    //kPa
    const double press = 0.222930643E+02;

    double v = v_P_T_R3(press,temp);
    double u = u_P_T_R3(press,temp);
    double s = s_P_T_R3(press,temp);
    double h = h_P_T_R3(press,temp);
    double cp = cp_P_T_R3(press,temp);
    double cv = cv_P_T_R3(press,temp);
    double w = w_P_T_R3(press,temp);

    double vErr = AbsRelativeErr(v, vActual);
    double uErr = AbsRelativeErr(u, 0.226365868E+04);
    double sErr = AbsRelativeErr(s, 0.485438792E+01);
    double hErr = AbsRelativeErr(h, 0.237512401E+04);
    double cpErr = AbsRelativeErr(cp, 0.446579342E+02);
    double cvErr = AbsRelativeErr(cv, 4.04118075955);
    double wErr = AbsRelativeErr(w, 0.383444594E+03);

    bool vPass = IsAcceptable(vErr);
    bool uPass = IsAcceptable(uErr);
    bool sPass = IsAcceptable(sErr);
    bool hPass = IsAcceptable(hErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(vPass);
    ASSERT_TRUE(uPass);
    ASSERT_TRUE(sPass);
    ASSERT_TRUE(hPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, Properties_P_T_0d783095639Ep02MPa_750K)
{
    //m^3/kg
    double vActual = 1.0/500.0;
    //K
    double temp = 750;
    //kPa
    double press = 0.783095639E+02;

    double v = v_P_T_R3(press,temp);
    double u = u_P_T_R3(press,temp);
    double s = s_P_T_R3(press,temp);
    double h = h_P_T_R3(press,temp);
    double cp = cp_P_T_R3(press,temp);
    double cv = cv_P_T_R3(press,temp);
    double w = w_P_T_R3(press,temp);

    double vErr = AbsRelativeErr(v, vActual);
    double uErr = AbsRelativeErr(u, 0.210206932E+04);
    double sErr = AbsRelativeErr(s, 0.446971906E+01);
    double hErr = AbsRelativeErr(h, 0.225868845E+04);
    double cpErr = AbsRelativeErr(cp, 0.634165359E+01);
    double cvErr = AbsRelativeErr(cv, 2.71701677121);
    double wErr = AbsRelativeErr(w, 0.760696041E+03);

    bool vPass = IsAcceptable(vErr);
    bool uPass = IsAcceptable(uErr);
    bool sPass = IsAcceptable(sErr);
    bool hPass = IsAcceptable(hErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(vPass);
    ASSERT_TRUE(uPass);
    ASSERT_TRUE(sPass);
    ASSERT_TRUE(hPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion3, T_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    //K
    const double tExp = 650;
    //kJ/kg
    const double h = 0.186343019E+04;
    //kJ/(kg*K)
    const double s = 0.405427273E+01;
    //K
    double tTest = T_h_s_R3(h,s);

    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(AccTestsRegion3, T_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    //K
    const double tExp = 650;
    //kJ/kg
    const double h = 0.237512401E+04;
    //kJ/(kg*K)
    const double s = 0.485438792E+01;
    //K
    double tTest = T_h_s_R3(h,s);

    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(AccTestsRegion3, T_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    //K
    const double tExp = 750;
    //kJ/kg
    const double h = 0.225868845E+04;
    //kJ/(kg*K)
    const double s = 0.446971906E+01;
    //K
    double tTest = T_h_s_R3(h,s);

    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}

TEST_F(AccTestsRegion3, v_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    //K
    double vExp = 1.0/500.0;
    //kJ/kg
    const double h = 0.186343019E+04;
    //kJ/(kg*K)
    const double s = 0.405427273E+01;
    //K
    double vTest = v_h_s_R3(h,s);

    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    //K
    double vExp = 1.0/200.0;
    //kJ/kg
    const double h = 0.237512401E+04;
    //kJ/(kg*K)
    const double s = 0.485438792E+01;
    //K
    double vTest = v_h_s_R3(h,s);

    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion3, v_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    //K
    double vExp = 1.0/500.0;
    //kJ/kg
    const double h = 0.225868845E+04;
    //kJ/(kg*K)
    const double s = 0.446971906E+01;
    //K
    double vTest = v_h_s_R3(h,s);

    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}

TEST_F(AccTestsRegion3, props_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    //kJ/kg
    const double h = 0.186343019E+04;
    //kJ/(kg*K)
    const double s = 0.405427273E+01;

    const double uExp = 0.181226279E+04;
    const double cvExp = 3.191317871889;
    const double cpExp = 0.138935717E+02;
    const double wExp = 0.502005554E+03;

    double uTest = u_h_s_R3(h,s);
    double cpTest = cp_h_s_R3(h,s);
    double cvTest = cv_h_s_R3(h,s);
    double wTest = w_h_s_R3(h,s);

    double uErr = AbsRelativeErr(uTest, uExp);
    double cpErr = AbsRelativeErr(cpTest, cpExp);
    double cvErr = AbsRelativeErr(cvTest, cvExp);
    double wErr = AbsRelativeErr(wTest, wExp);

    bool uPass = IsAcceptable(uErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(uPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, props_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    //kJ/kg
    const double h = 0.237512401E+04;
    //kJ/(kg*K)
    const double s = 0.485438792E+01;

    const double uExp = 0.226365868E+04;
    const double cvExp = 4.04118075955;
    const double cpExp = 0.446579342E+02;
    const double wExp = 0.383444594E+03;

    double uTest = u_h_s_R3(h,s);
    double cpTest = cp_h_s_R3(h,s);
    double cvTest = cv_h_s_R3(h,s);
    double wTest = w_h_s_R3(h,s);

    double uErr = AbsRelativeErr(uTest, uExp);
    double cpErr = AbsRelativeErr(cpTest, cpExp);
    double cvErr = AbsRelativeErr(cvTest, cvExp);
    double wErr = AbsRelativeErr(wTest, wExp);

    bool uPass = IsAcceptable(uErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(uPass);
    ASSERT_TRUE(cpPass);
    ASSERT_TRUE(cvPass);
    ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion3, props_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    //K
    double vExp = 1.0/500.0;
    //kJ/kg
    const double h = 0.225868845E+04;
    //kJ/(kg*K)
    const double s = 0.446971906E+01;

    const double uExp = 0.210206932E+04;
    const double cvExp = 2.71701677121;
    const double cpExp = 0.634165359E+01;
    const double wExp = 0.760696041E+03;

    double uTest = u_h_s_R3(h,s);
    double cpTest = cp_h_s_R3(h,s);
    double cvTest = cv_h_s_R3(h,s);
    double wTest = w_h_s_R3(h,s);

    double uErr = AbsRelativeErr(uTest, uExp);
    double cpErr = AbsRelativeErr(cpTest, cpExp);
    double cvErr = AbsRelativeErr(cvTest, cvExp);
    double wErr = AbsRelativeErr(wTest, wExp);

    bool uPass = IsAcceptable(uErr);
    bool cpPass = IsAcceptable(cpErr);
    bool cvPass = IsAcceptable(cvErr);
    bool wPass = IsAcceptable(wErr);

    ASSERT_TRUE(uPass);
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
    //kJ/kg
    const double h = 1700;
    //kJ/(kg*K)
    const double s = 3.8;
    //MPa
    const double pExp = 2.555703246E+01;
    //MPa
    double pTest = P_h_s_R3(h,s);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2000h_4d2s)
{
    //kJ/kg
    const double h = 2000;
    //kJ/(kg*K)
    const double s = 4.2;
    //MPa
    const double pExp = 4.540873468E+01;
    //MPa
    double pTest = P_h_s_R3(h,s);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2100h_4d3s)
{
    //kJ/kg
    const double h = 2100;
    //kJ/(kg*K)
    const double s = 4.3;
    //MPa
    const double pExp = 6.078123340E+01;
    //MPa
    double pTest = P_h_s_R3(h,s);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2600h_5d1s)
{
    //kJ/kg
    const double h = 2600;
    //kJ/(kg*K)
    const double s = 5.1;
    //MPa
    const double pExp = 3.434999263E+01;
    //MPa
    double pTest = P_h_s_R3(h,s);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2400h_4d7s)
{
    //kJ/kg
    const double h = 2400;
    //kJ/(kg*K)
    const double s = 4.7;
    //MPa
    const double pExp = 6.363924887E+01;
    //MPa
    double pTest = P_h_s_R3(h,s);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(AccTestsRegion3, P_h_s_2700h_5d0s)
{
    //kJ/kg
    const double h = 2700;
    //kJ/(kg*K)
    const double s = 5.0;
    //MPa
    const double pExp = 8.839043281E+01;
    //MPa
    double pTest = P_h_s_R3(h,s);

    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
