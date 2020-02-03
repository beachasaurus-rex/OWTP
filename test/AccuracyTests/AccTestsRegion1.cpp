#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsRegion1 : public AccTestBase
{

};

extern "C"
{
    //REGION 1:
	//properties as a function of temperature and pressure

	DLL_IMPORT  double v_T_P_R1(double, double);
	DLL_IMPORT  double u_T_P_R1(double, double);
	DLL_IMPORT  double s_T_P_R1(double, double);
	DLL_IMPORT  double h_T_P_R1(double, double);
	DLL_IMPORT  double cp_T_P_R1(double, double);
	DLL_IMPORT  double cv_T_P_R1(double, double);
	DLL_IMPORT  double w_T_P_R1(double, double);

	//properties as a function of pressure and enthalpy

	DLL_IMPORT  double v_P_h_R1(double, double);
	DLL_IMPORT  double u_P_h_R1(double, double);
	DLL_IMPORT  double s_P_h_R1(double, double);
	DLL_IMPORT  double T_P_h_R1(double, double);
	DLL_IMPORT  double cp_P_h_R1(double, double);
	DLL_IMPORT  double cv_P_h_R1(double, double);
	DLL_IMPORT  double w_P_h_R1(double, double);

	//properties as a function of pressure and entropy

	DLL_IMPORT  double v_P_s_R1(double, double);
	DLL_IMPORT  double u_P_s_R1(double, double);
	DLL_IMPORT  double h_P_s_R1(double, double);
	DLL_IMPORT  double T_P_s_R1(double, double);
	DLL_IMPORT  double cp_P_s_R1(double, double);
	DLL_IMPORT  double cv_P_s_R1(double, double);
	DLL_IMPORT  double w_P_s_R1(double, double);

	//properties as a function of enthalpy and entropy

	DLL_IMPORT double v_h_s_R1(double, double);
	DLL_IMPORT double u_h_s_R1(double, double);
	DLL_IMPORT double P_h_s_R1(double, double);
	DLL_IMPORT double T_h_s_R1(double, double);
	DLL_IMPORT double cp_h_s_R1(double, double);
	DLL_IMPORT double cv_h_s_R1(double, double);
	DLL_IMPORT double w_h_s_R1(double, double);
}

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 5 on page 9.

TEST_F(AccTestsRegion1, v_T_P_300K_3MPa)
{
	const double testTemp = 300;
	const double testPressure = 3;
    const double vExp = 0.100215168E-02;

	double v = v_T_P_R1(testTemp, testPressure);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_T_P_300K_3MPa)
{
	const double testTemp = 300;
	const double testPressure = 3;
    const double uExp = 0.112324818E+03;

	double u = u_T_P_R1(testTemp, testPressure);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, s_T_P_300K_3MPa)
{
	const double testTemp = 300;
	const double testPressure = 3;
    const double sExp = 0.392294792;

	double s = s_T_P_R1(testTemp, testPressure);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion1, h_T_P_300K_3MPa)
{
	const double testTemp = 300;
	const double testPressure = 3;
    const double hExp = 0.115331273E+03;

	double h = h_T_P_R1(testTemp, testPressure);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion1, cp_T_P_300K_3MPa)
{
	const double testTemp = 300;
	const double testPressure = 3;
    const double cpExp = 0.417301218E+01;

	double cp = cp_T_P_R1(testTemp, testPressure);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_T_P_300K_3MPa)
{
	const double testTemp = 300;
	const double testPressure = 3;
    const double cvExp = 4.121201603587;

	double cv = cv_T_P_R1(testTemp, testPressure);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_T_P_300K_3MPa)
{
	const double testTemp = 300;
	const double testPressure = 3;
    const double wExp = 0.150773921E+04;

	double w = w_T_P_R1(testTemp, testPressure);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, v_T_P_300K_80MPa)
{
	const double testTemp = 300;
	const double testPressure = 80;
    const double vExp = 0.971180894E-03;

	double v = v_T_P_R1(testTemp, testPressure);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_T_P_300K_80MPa)
{
	const double testTemp = 300;
	const double testPressure = 80;
    const double uExp = 0.106448356E+03;

	double u = u_T_P_R1(testTemp, testPressure);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, s_T_P_300K_80MPa)
{
	const double testTemp = 300;
	const double testPressure = 80;
    const double sExp = 0.368563852;

	double s = s_T_P_R1(testTemp, testPressure);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion1, h_T_P_300K_80MPa)
{
	const double testTemp = 300;
	const double testPressure = 80;
    const double hExp = 0.184142828E+03;

	double h = h_T_P_R1(testTemp, testPressure);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion1, cp_T_P_300K_80MPa)
{
	const double testTemp = 300;
	const double testPressure = 80;
    const double cpExp = 0.401008987E+01;

	double cp = cp_T_P_R1(testTemp, testPressure);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_T_P_300K_80MPa)
{
	const double testTemp = 300;
	const double testPressure = 80;
    const double cvExp = 3.917366061845;

	double cv = cv_T_P_R1(testTemp, testPressure);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_T_P_300K_80MPa)
{
	const double testTemp = 300;
	const double testPressure = 80;
    const double wExp = 0.163469054E+04;

	double w = w_T_P_R1(testTemp, testPressure);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, v_T_P_500K_3MPa)
{
	const double testTemp = 500;
	const double testPressure = 3;
    const double vExp = 0.120241800E-02;

	double v = v_T_P_R1(testTemp, testPressure);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_T_P_500K_3MPa)
{
	const double testTemp = 500;
	const double testPressure = 3;
    const double uExp = 0.971934985E+03;

	double u = u_T_P_R1(testTemp, testPressure);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, s_T_P_500K_3MPa)
{
	const double testTemp = 500;
	const double testPressure = 3;
    const double sExp = 0.258041912E+01;

	double s = s_T_P_R1(testTemp, testPressure);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion1, h_T_P_500K_3MPa)
{
	const double testTemp = 500;
	const double testPressure = 3;
    const double hExp = 0.975542239E+03;

	double h = h_T_P_R1(testTemp, testPressure);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion1, cp_T_P_500K_3MPa)
{
	const double testTemp = 500;
	const double testPressure = 3;
    const double cpExp = 0.465580682E+01;

	double cp = cp_T_P_R1(testTemp, testPressure);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_T_P_500K_3MPa)
{
	const double testTemp = 500;
	const double testPressure = 3;
    const double cvExp = 3.221392229028;

	double cv = cv_T_P_R1(testTemp, testPressure);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_T_P_500K_3MPa)
{
	const double testTemp = 500;
	const double testPressure = 3;
    const double wExp = 0.124071337E+04;

	double w = w_T_P_R1(testTemp, testPressure);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion1, v_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double vExp = 0.100215168E-02;

	double v = v_P_h_R1(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double uExp = 0.112324818E+03;

	double u = u_P_h_R1(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, s_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double sExp = 0.392294792;

	double s = s_P_h_R1(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion1, T_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double tExp = 300;

	double T = T_P_h_R1(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, cp_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double cpExp = 0.417301218E+01;

	double cp = cp_P_h_R1(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double cvExp = 4.121201603587;

	double cv = cv_P_h_R1(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double wExp = 0.150773921E+04;

	double w = w_P_h_R1(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, v_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double vExp = 0.971180894E-03;

	double v = v_P_h_R1(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double uExp = 0.106448356E+03;

	double u = u_P_h_R1(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, s_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double sExp = 0.368563852;

	double s = s_P_h_R1(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion1, T_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double tExp = 300;

	double T = T_P_h_R1(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, cp_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double cpExp = 0.401008987E+01;

	double cp = cp_P_h_R1(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double cvExp = 3.917366061845;

	double cv = cv_P_h_R1(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double wExp = 0.163469054E+04;

	double w = w_P_h_R1(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, v_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double vExp = 0.120241800E-02;

	double v = v_P_h_R1(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double uExp = 0.971934985E+03;

	double u = u_P_h_R1(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, s_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double sExp = 0.258041912E+01;

	double s = s_P_h_R1(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion1, T_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double tExp = 500;

	double T = T_P_h_R1(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, cp_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double cpExp = 0.465580682E+01;

	double cp = cp_P_h_R1(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double cvExp = 3.221392229028;

	double cv = cv_P_h_R1(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double wExp = 0.124071337E+04;

	double w = w_P_h_R1(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion1, v_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double vExp = 0.100215168E-02;

	double v = v_P_s_R1(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double uExp = 0.112324818E+03;

	double u = u_P_s_R1(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, h_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double hExp = 0.115331273E+03;

	double h = h_P_s_R1(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion1, T_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double tExp = 300;

	double T = T_P_s_R1(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, cp_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double cpExp = 0.417301218E+01;

	double cp = cp_P_s_R1(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double cvExp = 4.121201603587;

	double cv = cv_P_s_R1(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double wExp = 0.150773921E+04;

	double w = w_P_s_R1(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, v_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double vExp = 0.971180894E-03;

	double v = v_P_s_R1(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double uExp = 0.106448356E+03;

	double u = u_P_s_R1(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, h_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double hExp = 0.184142828E+03;

	double h = h_P_s_R1(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion1, T_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double tExp = 300;

	double T = T_P_s_R1(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, cp_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double cpExp = 0.401008987E+01;

	double cp = cp_P_s_R1(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double cvExp = 3.917366061845;

	double cv = cv_P_s_R1(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double wExp = 0.163469054E+04;

	double w = w_P_s_R1(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, v_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double vExp = 0.120241800E-02;

	double v = v_P_s_R1(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double uExp = 0.971934985E+03;

	double u = u_P_s_R1(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, h_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double hExp = 0.975542239E+03;

	double h = h_P_s_R1(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion1, T_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double tExp = 500;

	double T = T_P_s_R1(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, cp_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double cpExp = 0.465580682E+01;

	double cp = cp_P_s_R1(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double cvExp = 3.221392229028;

	double cv = cv_P_s_R1(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double wExp = 0.124071337E+04;

	double w = w_P_s_R1(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion1, v_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double vExp = 0.100215168E-02;

	double v = v_h_s_R1(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double uExp = 0.112324818E+03;

	double u = u_h_s_R1(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, P_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double pExp = 3;

	double P = P_h_s_R1(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion1, T_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double tExp = 300;

	double T = T_h_s_R1(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, cp_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double cpExp = 0.417301218E+01;

	double cp = cp_h_s_R1(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double cvExp = 4.121201603587;

	double cv = cv_h_s_R1(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double wExp = 0.150773921E+04;

	double w = w_h_s_R1(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, v_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double vExp = 0.971180894E-03;

	double v = v_h_s_R1(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double uExp = 0.106448356E+03;

	double u = u_h_s_R1(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, P_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double pExp = 80;

	double P = P_h_s_R1(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion1, T_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double tExp = 300;

	double T = T_h_s_R1(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, cp_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double cpExp = 0.401008987E+01;

	double cp = cp_h_s_R1(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double cvExp = 3.917366061845;

	double cv = cv_h_s_R1(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double wExp = 0.163469054E+04;

	double w = w_h_s_R1(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, v_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double vExp = 0.120241800E-02;

	double v = v_h_s_R1(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion1, u_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double uExp = 0.971934985E+03;

	double u = u_h_s_R1(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion1, P_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double pExp = 3;

	double P = P_h_s_R1(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion1, T_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double tExp = 500;

	double T = T_h_s_R1(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, cp_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double cpExp = 0.465580682E+01;

	double cp = cp_h_s_R1(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion1, cv_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double cvExp = 3.221392229028;

	double cv = cv_h_s_R1(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion1, w_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double wExp = 0.124071337E+04;

	double w = w_h_s_R1(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

//The pressure and enthalpy data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 7 on page 11.

TEST_F(AccTestsRegion1, T_P_h_3MPa_500h)
{
	const double testPressure = 3;
	const double testEnth = 500;
    const double tExp = 0.391798509E+03;

	double T = T_P_h_R1(testPressure, testEnth);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, T_P_h_80MPa_500h)
{
	const double testPressure = 80;
	const double testEnth = 500;
    const double tExp = 0.378108626E+03;

	double T = T_P_h_R1(testPressure, testEnth);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, T_P_h_80MPa_1500h)
{
	const double testPressure = 80;
	const double testEnth = 1500;
    const double tExp = 0.611041229E+03;

	double T = T_P_h_R1(testPressure, testEnth);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}

//The pressure and entropy data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 9 on page 12.

TEST_F(AccTestsRegion1, T_P_s_3MPa_0d5s)
{
	const double testPressure = 3;
	const double testEntropy = 0.5;
    const double tExp = 0.307842258E+03;

	double T = T_P_s_R1(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, T_P_s_80MPa_0d5s)
{
	const double testPressure = 80;
	const double testEntropy = 0.5;
    const double tExp = 0.309979785E+03;

	double T = T_P_s_R1(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, T_P_s_80MPa_3s)
{
	const double testPressure = 80;
	const double testEntropy = 3;
    const double tExp = 0.565899909E+03;

	double T = T_P_s_R1(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}

//The enthalpy and entropy data points for Region1 were
//suggested by the IAPWS in "Revised Supplementary Release
//on Backward Equations for Pressure as a Function of Enthalpy
//and Entropy p(h,s) for Regions 1 and 2 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in Table 3 on page 6.

TEST_F(AccTestsRegion1, P_h_s_0d001h_0s)
{
	const double testEnth = 0.001;
	const double testEntr = 0;
    const double pExp = 9.800980612E-04;

	double P = (P_h_s_R1(testEnth, testEntr));
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion1, P_h_s_90h_0s)
{
	const double testEnth = 90;
	const double testEntr = 0;
    const double pExp = 9.192954727E+01;

	double P = (P_h_s_R1(testEnth, testEntr));
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion1, P_h_s_1500h_34s)
{
	const double testEnth = 1500;
	const double testEntr = 3.4;
    const double pExp = 5.868294423E+01;

	double P = (P_h_s_R1(testEnth, testEntr));
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
