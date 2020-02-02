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

TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfTemperaturePressure300K3MPa)
{
	//K
	const double testTemp = 300;
	//MPa
	const double testPressure = 3;

	double v = v_T_P_R1(testTemp, testPressure);
	double u = u_T_P_R1(testTemp, testPressure);
	double s = s_T_P_R1(testTemp, testPressure);
	double h = h_T_P_R1(testTemp, testPressure);
	double cp = cp_T_P_R1(testTemp, testPressure);
	double cv = cv_T_P_R1(testTemp, testPressure);
	double w = w_T_P_R1(testTemp, testPressure);

	double vErr = AbsRelativeErr(v, 0.100215168E-02);
	double uErr = AbsRelativeErr(u, 0.112324818E+03);
	double sErr = AbsRelativeErr(s, 0.392294792);
	double hErr = AbsRelativeErr(h, 0.115331273E+03);
	double cpErr = AbsRelativeErr(cp, 0.417301218E+01);
	double cvErr = AbsRelativeErr(cv, 4.121201603587);
	double wErr = AbsRelativeErr(w, 0.150773921E+04);

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
TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfTemperaturePressure300K80MPa)
{
	//K
	const double testTemp = 300;
	//MPa
	const double testPressure = 80;

	double v = v_T_P_R1(testTemp, testPressure);
	double u = u_T_P_R1(testTemp, testPressure);
	double s = s_T_P_R1(testTemp, testPressure);
	double h = h_T_P_R1(testTemp, testPressure);
	double cp = cp_T_P_R1(testTemp, testPressure);
	double cv = cv_T_P_R1(testTemp, testPressure);
	double w = w_T_P_R1(testTemp, testPressure);

	double vErr = AbsRelativeErr(v, 0.971180894E-03);
	double uErr = AbsRelativeErr(u, 0.106448356E+03);
	double sErr = AbsRelativeErr(s, 0.368563852);
	double hErr = AbsRelativeErr(h, 0.184142828E+03);
	double cpErr = AbsRelativeErr(cp, 0.401008987E+01);
	double cvErr = AbsRelativeErr(cv, 3.917366061845);
	double wErr = AbsRelativeErr(w, 0.163469054E+04);

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
TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfTemperaturePressure500K3MPa)
{
	//K
	const double testTemp = 500;
	//MPa
	const double testPressure = 3;

	double v = v_T_P_R1(testTemp, testPressure);
	double u = u_T_P_R1(testTemp, testPressure);
	double s = s_T_P_R1(testTemp, testPressure);
	double h = h_T_P_R1(testTemp, testPressure);
	double cp = cp_T_P_R1(testTemp, testPressure);
	double cv = cv_T_P_R1(testTemp, testPressure);
	double w = w_T_P_R1(testTemp, testPressure);

	double vErr = AbsRelativeErr(v, 0.120241800E-02);
	double uErr = AbsRelativeErr(u, 0.971934985E+03);
	double sErr = AbsRelativeErr(s, 0.258041912E+01);
	double hErr = AbsRelativeErr(h, 0.975542239E+03);
	double cpErr = AbsRelativeErr(cp, 0.465580682E+01);
	double cvErr = AbsRelativeErr(cv, 3.221392229028);
	double wErr = AbsRelativeErr(w, 0.124071337E+04);

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

TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfPressureEnthalpyHAt300K3MPa)
{
	//MPa
	const double testPress = 3;
	//kJ / kg
	const double testEnthalpy = 0.115331273E+03;

	double v = v_P_h_R1(testPress, testEnthalpy);
	double u = u_P_h_R1(testPress, testEnthalpy);
	double s = s_P_h_R1(testPress, testEnthalpy);
	double T = T_P_h_R1(testPress, testEnthalpy);
	double cp = cp_P_h_R1(testPress, testEnthalpy);
	double cv = cv_P_h_R1(testPress, testEnthalpy);
	double w = w_P_h_R1(testPress, testEnthalpy);

	double vErr = AbsRelativeErr(v, 0.100215168E-02);
	double uErr = AbsRelativeErr(u, 0.112324818E+03);
	double sErr = AbsRelativeErr(s, 0.392294792);
	double TErr = AbsRelativeErr(T, 300);
	double cpErr = AbsRelativeErr(cp, 0.417301218E+01);
	double cvErr = AbsRelativeErr(cv, 4.121201603587);
	double wErr = AbsRelativeErr(w, 0.150773921E+04);

	bool vPass = IsAcceptable(vErr);
	bool uPass = IsAcceptable(uErr);
	bool sPass = IsAcceptable(sErr);
	bool TPass = IsAcceptable(TErr);
	bool cpPass = IsAcceptable(cpErr);
	bool cvPass = IsAcceptable(cvErr);
	bool wPass = IsAcceptable(wErr);

	ASSERT_TRUE(vPass);
	ASSERT_TRUE(uPass);
	ASSERT_TRUE(sPass);
	ASSERT_TRUE(TPass);
	ASSERT_TRUE(cpPass);
	ASSERT_TRUE(cvPass);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfPressureEnthalpyHAt300K80MPa)
{
	//MPa
	const double testPress = 80;
	//kJ / kg
	const double testEnthalpy = 0.184142828E+03;

	double v = v_P_h_R1(testPress, testEnthalpy);
	double u = u_P_h_R1(testPress, testEnthalpy);
	double s = s_P_h_R1(testPress, testEnthalpy);
	double T = T_P_h_R1(testPress, testEnthalpy);
	double cp = cp_P_h_R1(testPress, testEnthalpy);
	double cv = cv_P_h_R1(testPress, testEnthalpy);
	double w = w_P_h_R1(testPress, testEnthalpy);

	double vErr = AbsRelativeErr(v, 0.971180894E-03);
	double uErr = AbsRelativeErr(u, 0.106448356E+03);
	double sErr = AbsRelativeErr(s, 0.368563852);
	double TErr = AbsRelativeErr(T, 300);
	double cpErr = AbsRelativeErr(cp, 0.401008987E+01);
	double cvErr = AbsRelativeErr(cv, 3.917366061845);
	double wErr = AbsRelativeErr(w, 0.163469054E+04);

	bool vPass = IsAcceptable(vErr);
	bool uPass = IsAcceptable(uErr);
	bool sPass = IsAcceptable(sErr);
	bool TPass = IsAcceptable(TErr);
	bool cpPass = IsAcceptable(cpErr);
	bool cvPass = IsAcceptable(cvErr);
	bool wPass = IsAcceptable(wErr);

	ASSERT_TRUE(vPass);
	ASSERT_TRUE(uPass);
	ASSERT_TRUE(sPass);
	ASSERT_TRUE(TPass);
	ASSERT_TRUE(cpPass);
	ASSERT_TRUE(cvPass);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfPressureEnthalpyHAt500K3MPa)
{
	//MPa
	const double testPress = 3;
	//kJ / kg
	const double testEnthalpy = 0.975542239E+03;

	double v = v_P_h_R1(testPress, testEnthalpy);
	double u = u_P_h_R1(testPress, testEnthalpy);
	double s = s_P_h_R1(testPress, testEnthalpy);
	double T = T_P_h_R1(testPress, testEnthalpy);
	double cp = cp_P_h_R1(testPress, testEnthalpy);
	double cv = cv_P_h_R1(testPress, testEnthalpy);
	double w = w_P_h_R1(testPress, testEnthalpy);

	double vErr = AbsRelativeErr(v, 0.120241800E-02);
	double uErr = AbsRelativeErr(u, 0.971934985E+03);
	double sErr = AbsRelativeErr(s, 0.258041912E+01);
	double TErr = AbsRelativeErr(T, 500);
	double cpErr = AbsRelativeErr(cp, 0.465580682E+01);
	double cvErr = AbsRelativeErr(cv, 3.221392229028);
	double wErr = AbsRelativeErr(w, 0.124071337E+04);

	bool vPass = IsAcceptable(vErr);
	bool uPass = IsAcceptable(uErr);
	bool sPass = IsAcceptable(sErr);
	bool TPass = IsAcceptable(TErr);
	bool cpPass = IsAcceptable(cpErr);
	bool cvPass = IsAcceptable(cvErr);
	bool wPass = IsAcceptable(wErr);

	ASSERT_TRUE(vPass);
	ASSERT_TRUE(uPass);
	ASSERT_TRUE(sPass);
	ASSERT_TRUE(TPass);
	ASSERT_TRUE(cpPass);
	ASSERT_TRUE(cvPass);
	ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfPressureEntropySAt300K3MPa)
{
	//MPa
	const double testPress = 3;
	//kJ / (kg * K)
	const double testEntropy = 0.392294792;

	double v = v_P_s_R1(testPress, testEntropy);
	double u = u_P_s_R1(testPress, testEntropy);
	double h = h_P_s_R1(testPress, testEntropy);
	double T = T_P_s_R1(testPress, testEntropy);
	double cp = cp_P_s_R1(testPress, testEntropy);
	double cv = cv_P_s_R1(testPress, testEntropy);
	double w = w_P_s_R1(testPress, testEntropy);

	double vErr = AbsRelativeErr(v, 0.100215168E-02);
	double uErr = AbsRelativeErr(u, 0.112324818E+03);
	double hErr = AbsRelativeErr(h, 0.115331273E+03);
	double TErr = AbsRelativeErr(T, 300);
	double cpErr = AbsRelativeErr(cp, 0.417301218E+01);
	double cvErr = AbsRelativeErr(cv, 4.121201603587);
	double wErr = AbsRelativeErr(w, 0.150773921E+04);

	bool vPass = IsAcceptable(vErr);
	bool uPass = IsAcceptable(uErr);
	bool hPass = IsAcceptable(hErr);
	bool TPass = IsAcceptable(TErr);
	bool cpPass = IsAcceptable(cpErr);
	bool cvPass = IsAcceptable(cvErr);
	bool wPass = IsAcceptable(wErr);

	ASSERT_TRUE(vPass);
	ASSERT_TRUE(uPass);
	ASSERT_TRUE(hPass);
	ASSERT_TRUE(TPass);
	ASSERT_TRUE(cpPass);
	ASSERT_TRUE(cvPass);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfPressureEntropySAt300K80MPa)
{
	//MPa
	const double testPress = 80;
	//kJ / (kg * K)
	const double testEntropy = 0.368563852;

	double v = v_P_s_R1(testPress, testEntropy);
	double u = u_P_s_R1(testPress, testEntropy);
	double h = h_P_s_R1(testPress, testEntropy);
	double T = T_P_s_R1(testPress, testEntropy);
	double cp = cp_P_s_R1(testPress, testEntropy);
	double cv = cv_P_s_R1(testPress, testEntropy);
	double w = w_P_s_R1(testPress, testEntropy);

	double vErr = AbsRelativeErr(v, 0.971180894E-03);
	double uErr = AbsRelativeErr(u, 0.106448356E+03);
	double hErr = AbsRelativeErr(h, 0.184142828E+03);
	double TErr = AbsRelativeErr(T, 300);
	double cpErr = AbsRelativeErr(cp, 0.401008987E+01);
	double cvErr = AbsRelativeErr(cv, 3.917366061845);
	double wErr = AbsRelativeErr(w, 0.163469054E+04);

	bool vPass = IsAcceptable(vErr);
	bool uPass = IsAcceptable(uErr);
	bool hPass = IsAcceptable(hErr);
	bool TPass = IsAcceptable(TErr);
	bool cpPass = IsAcceptable(cpErr);
	bool cvPass = IsAcceptable(cvErr);
	bool wPass = IsAcceptable(wErr);

	ASSERT_TRUE(vPass);
	ASSERT_TRUE(uPass);
	ASSERT_TRUE(hPass);
	ASSERT_TRUE(TPass);
	ASSERT_TRUE(cpPass);
	ASSERT_TRUE(cvPass);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfPressureEntropySAt500K3MPa)
{
	//MPa
	const double testPress = 3;
	//kJ / (kg * K)
	const double testEntropy = 0.258041912E+01;

	double v = v_P_s_R1(testPress, testEntropy);
	double u = u_P_s_R1(testPress, testEntropy);
	double h = h_P_s_R1(testPress, testEntropy);
	double T = T_P_s_R1(testPress, testEntropy);
	double cp = cp_P_s_R1(testPress, testEntropy);
	double cv = cv_P_s_R1(testPress, testEntropy);
	double w = w_P_s_R1(testPress, testEntropy);

	double vErr = AbsRelativeErr(v, 0.120241800E-02);
	double uErr = AbsRelativeErr(u, 0.971934985E+03);
	double hErr = AbsRelativeErr(h, 0.975542239E+03);
	double TErr = AbsRelativeErr(T, 500);
	double cpErr = AbsRelativeErr(cp, 0.465580682E+01);
	double cvErr = AbsRelativeErr(cv, 3.221392229028);
	double wErr = AbsRelativeErr(w, 0.124071337E+04);

	bool vPass = IsAcceptable(vErr);
	bool uPass = IsAcceptable(uErr);
	bool hPass = IsAcceptable(hErr);
	bool TPass = IsAcceptable(TErr);
	bool cpPass = IsAcceptable(cpErr);
	bool cvPass = IsAcceptable(cvErr);
	bool wPass = IsAcceptable(wErr);

	ASSERT_TRUE(vPass);
	ASSERT_TRUE(uPass);
	ASSERT_TRUE(hPass);
	ASSERT_TRUE(TPass);
	ASSERT_TRUE(cpPass);
	ASSERT_TRUE(cvPass);
	ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfEnthalpyEntropyHSAt300K3MPa)
{
	//kJ / kg
	const double testEnthalpy = 0.115331273E+03;
	//kJ / (kg * K)
	const double testEntropy = 0.392294792;

	double v = v_h_s_R1(testEnthalpy, testEntropy);
	double u = u_h_s_R1(testEnthalpy, testEntropy);
	double P = P_h_s_R1(testEnthalpy, testEntropy);
	double T = T_h_s_R1(testEnthalpy, testEntropy);
	double cp = cp_h_s_R1(testEnthalpy, testEntropy);
	double cv = cv_h_s_R1(testEnthalpy, testEntropy);
	double w = w_h_s_R1(testEnthalpy, testEntropy);

	double vErr = AbsRelativeErr(v, 0.100215168E-02);
	double uErr = AbsRelativeErr(u, 0.112324818E+03);
	double PErr = AbsRelativeErr(P, 3);
	double TErr = AbsRelativeErr(T, 300);
	double cpErr = AbsRelativeErr(cp, 0.417301218E+01);
	double cvErr = AbsRelativeErr(cv, 4.121201603587);
	double wErr = AbsRelativeErr(w, 0.150773921E+04);

	bool vPass = IsAcceptable(vErr);
	bool uPass = IsAcceptable(uErr);
	bool PPass = IsAcceptable(PErr);
	bool TPass = IsAcceptable(TErr);
	bool cpPass = IsAcceptable(cpErr);
	bool cvPass = IsAcceptable(cvErr);
	bool wPass = IsAcceptable(wErr);

	ASSERT_TRUE(vPass);
	ASSERT_TRUE(uPass);
	ASSERT_TRUE(PPass);
	ASSERT_TRUE(TPass);
	ASSERT_TRUE(cpPass);
	ASSERT_TRUE(cvPass);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfEnthalpyEntropyHSAt300K80MPa)
{
	//kJ / kg
	const double testEnthalpy = 0.184142828E+03;
	//kJ / (kg * K)
	const double testEntropy = 0.368563852;

	double v = v_h_s_R1(testEnthalpy, testEntropy);
	double u = u_h_s_R1(testEnthalpy, testEntropy);
	double P = P_h_s_R1(testEnthalpy, testEntropy);
	double T = T_h_s_R1(testEnthalpy, testEntropy);
	double cp = cp_h_s_R1(testEnthalpy, testEntropy);
	double cv = cv_h_s_R1(testEnthalpy, testEntropy);
	double w = w_h_s_R1(testEnthalpy, testEntropy);

	double vErr = AbsRelativeErr(v, 0.971180894E-03);
	double uErr = AbsRelativeErr(u, 0.106448356E+03);
	double PErr = AbsRelativeErr(P, 80);
	double TErr = AbsRelativeErr(T, 300);
	double cpErr = AbsRelativeErr(cp, 0.401008987E+01);
	double cvErr = AbsRelativeErr(cv, 3.917366061845);
	double wErr = AbsRelativeErr(w, 0.163469054E+04);

	bool vPass = IsAcceptable(vErr);
	bool uPass = IsAcceptable(uErr);
	bool PPass = IsAcceptable(PErr);
	bool TPass = IsAcceptable(TErr);
	bool cpPass = IsAcceptable(cpErr);
	bool cvPass = IsAcceptable(cvErr);
	bool wPass = IsAcceptable(wErr);

	ASSERT_TRUE(vPass);
	ASSERT_TRUE(uPass);
	ASSERT_TRUE(PPass);
	ASSERT_TRUE(TPass);
	ASSERT_TRUE(cpPass);
	ASSERT_TRUE(cvPass);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion1, PropertiesAsFunctionsOfEnthalpyEntropyHSAt500K3MPa)
{
	//kJ / kg
	const double testEnthalpy = 0.975542239E+03;
	//kJ / (kg * K)
	const double testEntropy = 0.258041912E+01;

	double v = v_h_s_R1(testEnthalpy, testEntropy);
	double u = u_h_s_R1(testEnthalpy, testEntropy);
	double P = P_h_s_R1(testEnthalpy, testEntropy);
	double T = T_h_s_R1(testEnthalpy, testEntropy);
	double cp = cp_h_s_R1(testEnthalpy, testEntropy);
	double cv = cv_h_s_R1(testEnthalpy, testEntropy);
	double w = w_h_s_R1(testEnthalpy, testEntropy);

	double vErr = AbsRelativeErr(v, 0.120241800E-02);
	double uErr = AbsRelativeErr(u, 0.971934985E+03);
	double PErr = AbsRelativeErr(P, 3);
	double TErr = AbsRelativeErr(T, 500);
	double cpErr = AbsRelativeErr(cp, 0.465580682E+01);
	double cvErr = AbsRelativeErr(cv, 3.221392229028);
	double wErr = AbsRelativeErr(w, 0.124071337E+04);

	bool vPass = IsAcceptable(vErr);
	bool uPass = IsAcceptable(uErr);
	bool PPass = IsAcceptable(PErr);
	bool TPass = IsAcceptable(TErr);
	bool cpPass = IsAcceptable(cpErr);
	bool cvPass = IsAcceptable(cvErr);
	bool wPass = IsAcceptable(wErr);

	ASSERT_TRUE(vPass);
	ASSERT_TRUE(uPass);
	ASSERT_TRUE(PPass);
	ASSERT_TRUE(TPass);
	ASSERT_TRUE(cpPass);
	ASSERT_TRUE(cvPass);
	ASSERT_TRUE(wPass);
}

//The pressure and enthalpy data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 7 on page 11.

TEST_F(AccTestsRegion1, TemperatureAsFunctionOfPressureEnthalpy3MPa500h)
{
	//MPa
	const double testPressure = 3;
	//kJ / kg
	const double testEnth = 500;

	double T = T_P_h_R1(testPressure, testEnth);
	double TErr = AbsRelativeErr(T, 0.391798509E+03);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, TemperatureAsFunctionOfPressureEnthalpy80MPa500h)
{
	//MPa
	const double testPressure = 80;
	//kJ / kg
	const double testEnth = 500;

	double T = T_P_h_R1(testPressure, testEnth);
	double TErr = AbsRelativeErr(T, 0.378108626E+03);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, TemperatureAsFunctionOfPressureEnthalpy80MPa1500h)
{
	//MPa
	const double testPressure = 80;
	//kJ / kg
	const double testEnth = 1500;

	double T = T_P_h_R1(testPressure, testEnth);
	double TErr = AbsRelativeErr(T, 0.611041229E+03);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}

//The pressure and entropy data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 9 on page 12.

TEST_F(AccTestsRegion1, TemperatureAsFunctionOfPressureEntropy3MPa0d5s)
{
	//MPa
	const double testPressure = 3;
	//kJ / (kg * K)
	const double testEntropy = 0.5;

	double T = T_P_s_R1(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, 0.307842258E+03);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, TemperatureAsFunctionOfPressureEntropy80MPa0d5s)
{
	//MPa
	const double testPressure = 80;
	//kJ / (kg * K)
	const double testEntropy = 0.5;

	double T = T_P_s_R1(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, 0.309979785E+03);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion1, TemperatureAsFunctionOfPressureEntropy80MPa3s)
{
	//MPa
	const double testPressure = 80;
	//kJ / (kg * K)
	const double testEntropy = 3;

	double T = T_P_s_R1(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, 0.565899909E+03);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}

//The enthalpy and entropy data points for Region1 were
//suggested by the IAPWS in "Revised Supplementary Release
//on Backward Equations for Pressure as a Function of Enthalpy
//and Entropy p(h,s) for Regions 1 and 2 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in Table 3 on page 6.

TEST_F(AccTestsRegion1, PressureAsFunctionOfEnthalpyEntropy0d001h0s)
{
	//kJ / kg
	const double testEnth = 0.001;
	//kJ / (kg * K)
	const double testEntr = 0;

	double P = (P_h_s_R1(testEnth, testEntr));
	double PErr = AbsRelativeErr(P, 9.800980612E-04);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion1, PressureAsFunctionOfEnthalpyEntropy90h0s)
{
	//kJ / kg
	const double testEnth = 90;
	//kJ / (kg * K)
	const double testEntr = 0;

	double P = (P_h_s_R1(testEnth, testEntr));
	double PErr = AbsRelativeErr(P, 9.192954727E+01);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion1, PressureAsFunctionOfEnthalpyEntropy1500h34s)
{
	//kJ / kg
	const double testEnth = 1500;
	//kJ / (kg * K)
	const double testEntr = 3.4;

	double P = (P_h_s_R1(testEnth, testEntr));
	double PErr = AbsRelativeErr(P, 5.868294423E+01);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
