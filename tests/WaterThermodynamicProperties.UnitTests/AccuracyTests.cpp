#include "pch.h"

#define CALC_ERR(x,y) (x-y)/y
#define CALC_ABSERR(x,y) abs(CALC_ERR(x,y))
#define IS_ACCEPTABLE(x) x < 0.01

#define DLL_IMPORT __declspec(dllimport)

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

	//REGION 2:
	//properties as a function of temperature and pressure

	DLL_IMPORT  double v_T_P_R2(double, double);
	DLL_IMPORT  double u_T_P_R2(double, double);
	DLL_IMPORT  double s_T_P_R2(double, double);
	DLL_IMPORT  double h_T_P_R2(double, double);
	DLL_IMPORT  double cp_T_P_R2(double, double);
	DLL_IMPORT  double cv_T_P_R2(double, double);
	DLL_IMPORT  double w_T_P_R2(double, double);

	//properties as a function of pressure and enthalpy

	DLL_IMPORT double T_P_h_R2(double, double);
	DLL_IMPORT double v_P_h_R2(double, double);
	DLL_IMPORT double u_P_h_R2(double, double);
	DLL_IMPORT double s_P_h_R2(double, double);
	DLL_IMPORT double cp_P_h_R2(double, double);
	DLL_IMPORT double cv_P_h_R2(double, double);
	DLL_IMPORT double w_P_h_R2(double, double);

	//properties as a function of pressure and entropy

	DLL_IMPORT double T_P_s_R2(double, double);
	DLL_IMPORT double v_P_s_R2(double, double);
	DLL_IMPORT double u_P_s_R2(double, double);
	DLL_IMPORT double h_P_s_R2(double, double);
	DLL_IMPORT double cp_P_s_R2(double, double);
	DLL_IMPORT double cv_P_s_R2(double, double);
	DLL_IMPORT double w_P_s_R2(double, double);

	//properties as a function of enthalpy and entropy

	DLL_IMPORT double P_h_s_R2(double, double);
	DLL_IMPORT double T_h_s_R2(double, double);
	DLL_IMPORT double v_h_s_R2(double, double);
	DLL_IMPORT double u_h_s_R2(double, double);
	DLL_IMPORT double cp_h_s_R2(double, double);
	DLL_IMPORT double cv_h_s_R2(double, double);
	DLL_IMPORT double w_h_s_R2(double, double);
}

namespace Tests_Region1
{
	//The temperature and pressure data points for Region1 were 
	//suggested by the IAPWS in "Revised Release on IAPWS
	//Inductrial Formulation 1997 for the Thermodynamic
	//Properties of Water and Steam" in Table 5 on page 9.

	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_temperature_pressure_Region1_300K_3MPa)
	{
		//K
		double testTemp = 300;
		//kPa
		double testPressure = 3000;
		
		double v = v_T_P_R1(testTemp, testPressure);
		double u = u_T_P_R1(testTemp, testPressure);
		double s = s_T_P_R1(testTemp, testPressure);
		double h = h_T_P_R1(testTemp, testPressure);
		double cp = cp_T_P_R1(testTemp, testPressure);
		double cv = cv_T_P_R1(testTemp, testPressure);
		double w = w_T_P_R1(testTemp, testPressure);

		double vErr = CALC_ABSERR(v, 0.100215168E-02);
		double uErr = CALC_ABSERR(u, 0.112324818E+03);
		double sErr = CALC_ABSERR(s, 0.392294792);
		double hErr = CALC_ABSERR(h, 0.115331273E+03);
		double cpErr = CALC_ABSERR(cp, 0.417301218E+01);
		double cvErr = CALC_ABSERR(cv, 4.121201603587);
		double wErr = CALC_ABSERR(w, 0.150773921E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_temperature_pressure_Region1_300K_80MPa)
	{
		//K
		double testTemp = 300;
		//kPa
		double testPressure = 80000;

		double v = v_T_P_R1(testTemp, testPressure);
		double u = u_T_P_R1(testTemp, testPressure);
		double s = s_T_P_R1(testTemp, testPressure);
		double h = h_T_P_R1(testTemp, testPressure);
		double cp = cp_T_P_R1(testTemp, testPressure);
		double cv = cv_T_P_R1(testTemp, testPressure);
		double w = w_T_P_R1(testTemp, testPressure);

		double vErr = CALC_ABSERR(v, 0.971180894E-03);
		double uErr = CALC_ABSERR(u, 0.106448356E+03);
		double sErr = CALC_ABSERR(s, 0.368563852);
		double hErr = CALC_ABSERR(h, 0.184142828E+03);
		double cpErr = CALC_ABSERR(cp, 0.401008987E+01);
		double cvErr = CALC_ABSERR(cv, 3.917366061845);
		double wErr = CALC_ABSERR(w, 0.163469054E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_temperature_pressure_Region1_500K_3MPa)
	{
		//K
		double testTemp = 500;
		//kPa
		double testPressure = 3000;

		double v = v_T_P_R1(testTemp, testPressure);
		double u = u_T_P_R1(testTemp, testPressure);
		double s = s_T_P_R1(testTemp, testPressure);
		double h = h_T_P_R1(testTemp, testPressure);
		double cp = cp_T_P_R1(testTemp, testPressure);
		double cv = cv_T_P_R1(testTemp, testPressure);
		double w = w_T_P_R1(testTemp, testPressure);

		double vErr = CALC_ABSERR(v, 0.120241800E-02);
		double uErr = CALC_ABSERR(u, 0.971934985E+03);
		double sErr = CALC_ABSERR(s, 0.258041912E+01);
		double hErr = CALC_ABSERR(h, 0.975542239E+03);
		double cpErr = CALC_ABSERR(cp, 0.465580682E+01);
		double cvErr = CALC_ABSERR(cv, 3.221392229028);
		double wErr = CALC_ABSERR(w, 0.124071337E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}

	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_pressure_enthalpy_Region1_h_at_300K_3MPa)
	{
		//kPa
		double testPress = 3000;
		//kJ / kg
		double testEnthalpy = 0.115331273E+03;

		double v = v_P_h_R1(testPress, testEnthalpy);
		double u = u_P_h_R1(testPress, testEnthalpy);
		double s = s_P_h_R1(testPress, testEnthalpy);
		double T = T_P_h_R1(testPress, testEnthalpy);
		double cp = cp_P_h_R1(testPress, testEnthalpy);
		double cv = cv_P_h_R1(testPress, testEnthalpy);
		double w = w_P_h_R1(testPress, testEnthalpy);

		double vErr = CALC_ABSERR(v, 0.100215168E-02);
		double uErr = CALC_ABSERR(u, 0.112324818E+03);
		double sErr = CALC_ABSERR(s, 0.392294792);
		double TErr = CALC_ABSERR(T, 300);
		double cpErr = CALC_ABSERR(cp, 0.417301218E+01);
		double cvErr = CALC_ABSERR(cv, 4.121201603587);
		double wErr = CALC_ABSERR(w, 0.150773921E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_pressure_enthalpy_Region1_h_at_300K_80MPa)
	{
		//kPa
		double testPress = 80000;
		//kJ / kg
		double testEnthalpy = 0.184142828E+03;

		double v = v_P_h_R1(testPress, testEnthalpy);
		double u = u_P_h_R1(testPress, testEnthalpy);
		double s = s_P_h_R1(testPress, testEnthalpy);
		double T = T_P_h_R1(testPress, testEnthalpy);
		double cp = cp_P_h_R1(testPress, testEnthalpy);
		double cv = cv_P_h_R1(testPress, testEnthalpy);
		double w = w_P_h_R1(testPress, testEnthalpy);

		double vErr = CALC_ABSERR(v, 0.971180894E-03);
		double uErr = CALC_ABSERR(u, 0.106448356E+03);
		double sErr = CALC_ABSERR(s, 0.368563852);
		double TErr = CALC_ABSERR(T, 300);
		double cpErr = CALC_ABSERR(cp, 0.401008987E+01);
		double cvErr = CALC_ABSERR(cv, 3.917366061845);
		double wErr = CALC_ABSERR(w, 0.163469054E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_pressure_enthalpy_Region1_h_at_500K_3MPa)
	{
		//kPa
		double testPress = 3000;
		//kJ / kg
		double testEnthalpy = 0.975542239E+03;

		double v = v_P_h_R1(testPress, testEnthalpy);
		double u = u_P_h_R1(testPress, testEnthalpy);
		double s = s_P_h_R1(testPress, testEnthalpy);
		double T = T_P_h_R1(testPress, testEnthalpy);
		double cp = cp_P_h_R1(testPress, testEnthalpy);
		double cv = cv_P_h_R1(testPress, testEnthalpy);
		double w = w_P_h_R1(testPress, testEnthalpy);

		double vErr = CALC_ABSERR(v, 0.120241800E-02);
		double uErr = CALC_ABSERR(u, 0.971934985E+03);
		double sErr = CALC_ABSERR(s, 0.258041912E+01);
		double TErr = CALC_ABSERR(T, 500);
		double cpErr = CALC_ABSERR(cp, 0.465580682E+01);
		double cvErr = CALC_ABSERR(cv, 3.221392229028);
		double wErr = CALC_ABSERR(w, 0.124071337E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}

	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_pressure_entropy_Region1_s_at_300K_3MPa)
	{
		//kPa
		double testPress = 3000;
		//kJ / (kg * K)
		double testEntropy = 0.392294792;

		double v = v_P_s_R1(testPress, testEntropy);
		double u = u_P_s_R1(testPress, testEntropy);
		double h = h_P_s_R1(testPress, testEntropy);
		double T = T_P_s_R1(testPress, testEntropy);
		double cp = cp_P_s_R1(testPress, testEntropy);
		double cv = cv_P_s_R1(testPress, testEntropy);
		double w = w_P_s_R1(testPress, testEntropy);

		double vErr = CALC_ABSERR(v, 0.100215168E-02);
		double uErr = CALC_ABSERR(u, 0.112324818E+03);
		double hErr = CALC_ABSERR(h, 0.115331273E+03);
		double TErr = CALC_ABSERR(T, 300);
		double cpErr = CALC_ABSERR(cp, 0.417301218E+01);
		double cvErr = CALC_ABSERR(cv, 4.121201603587);
		double wErr = CALC_ABSERR(w, 0.150773921E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_pressure_entropy_Region1_s_at_300K_80MPa)
	{
		//kPa
		double testPress = 80000;
		//kJ / (kg * K)
		double testEntropy = 0.368563852;

		double v = v_P_s_R1(testPress, testEntropy);
		double u = u_P_s_R1(testPress, testEntropy);
		double h = h_P_s_R1(testPress, testEntropy);
		double T = T_P_s_R1(testPress, testEntropy);
		double cp = cp_P_s_R1(testPress, testEntropy);
		double cv = cv_P_s_R1(testPress, testEntropy);
		double w = w_P_s_R1(testPress, testEntropy);

		double vErr = CALC_ABSERR(v, 0.971180894E-03);
		double uErr = CALC_ABSERR(u, 0.106448356E+03);
		double hErr = CALC_ABSERR(h, 0.184142828E+03);
		double TErr = CALC_ABSERR(T, 300);
		double cpErr = CALC_ABSERR(cp, 0.401008987E+01);
		double cvErr = CALC_ABSERR(cv, 3.917366061845);
		double wErr = CALC_ABSERR(w, 0.163469054E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_pressure_entropy_Region1_s_at_500K_3MPa)
	{
		//kPa
		double testPress = 3000;
		//kJ / (kg * K)
		double testEntropy = 0.258041912E+01;

		double v = v_P_s_R1(testPress, testEntropy);
		double u = u_P_s_R1(testPress, testEntropy);
		double h = h_P_s_R1(testPress, testEntropy);
		double T = T_P_s_R1(testPress, testEntropy);
		double cp = cp_P_s_R1(testPress, testEntropy);
		double cv = cv_P_s_R1(testPress, testEntropy);
		double w = w_P_s_R1(testPress, testEntropy);

		double vErr = CALC_ABSERR(v, 0.120241800E-02);
		double uErr = CALC_ABSERR(u, 0.971934985E+03);
		double hErr = CALC_ABSERR(h, 0.975542239E+03);
		double TErr = CALC_ABSERR(T, 500);
		double cpErr = CALC_ABSERR(cp, 0.465580682E+01);
		double cvErr = CALC_ABSERR(cv, 3.221392229028);
		double wErr = CALC_ABSERR(w, 0.124071337E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}

	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_enthalpy_entropy_Region1_h_s_at_300K_3MPa)
	{
		//kJ / kg
		double testEnthalpy = 0.115331273E+03;
		//kJ / (kg * K)
		double testEntropy = 0.392294792;

		double v = v_h_s_R1(testEnthalpy, testEntropy);
		double u = u_h_s_R1(testEnthalpy, testEntropy);
		double P = P_h_s_R1(testEnthalpy, testEntropy);
		double T = T_h_s_R1(testEnthalpy, testEntropy);
		double cp = cp_h_s_R1(testEnthalpy, testEntropy);
		double cv = cv_h_s_R1(testEnthalpy, testEntropy);
		double w = w_h_s_R1(testEnthalpy, testEntropy);

		double vErr = CALC_ABSERR(v, 0.100215168E-02);
		double uErr = CALC_ABSERR(u, 0.112324818E+03);
		double PErr = CALC_ABSERR(P, 3000);
		double TErr = CALC_ABSERR(T, 300);
		double cpErr = CALC_ABSERR(cp, 0.417301218E+01);
		double cvErr = CALC_ABSERR(cv, 4.121201603587);
		double wErr = CALC_ABSERR(w, 0.150773921E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool PPass = IS_ACCEPTABLE(PErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(PPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_enthalpy_entropy_Region1_h_s_at_300K_80MPa)
	{
		//kJ / kg
		double testEnthalpy = 0.184142828E+03;
		//kJ / (kg * K)
		double testEntropy = 0.368563852;

		double v = v_h_s_R1(testEnthalpy, testEntropy);
		double u = u_h_s_R1(testEnthalpy, testEntropy);
		double P = P_h_s_R1(testEnthalpy, testEntropy);
		double T = T_h_s_R1(testEnthalpy, testEntropy);
		double cp = cp_h_s_R1(testEnthalpy, testEntropy);
		double cv = cv_h_s_R1(testEnthalpy, testEntropy);
		double w = w_h_s_R1(testEnthalpy, testEntropy);

		double vErr = CALC_ABSERR(v, 0.971180894E-03);
		double uErr = CALC_ABSERR(u, 0.106448356E+03);
		double PErr = CALC_ABSERR(P, 80000);
		double TErr = CALC_ABSERR(T, 300);
		double cpErr = CALC_ABSERR(cp, 0.401008987E+01);
		double cvErr = CALC_ABSERR(cv, 3.917366061845);
		double wErr = CALC_ABSERR(w, 0.163469054E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool PPass = IS_ACCEPTABLE(PErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(PPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region1, Properties_as_functions_of_enthalpy_entropy_Region1_h_s_at_500K_3MPa)
	{
		//kJ / kg
		double testEnthalpy = 0.975542239E+03;
		//kJ / (kg * K)
		double testEntropy = 0.258041912E+01;

		double v = v_h_s_R1(testEnthalpy, testEntropy);
		double u = u_h_s_R1(testEnthalpy, testEntropy);
		double P = P_h_s_R1(testEnthalpy, testEntropy);
		double T = T_h_s_R1(testEnthalpy, testEntropy);
		double cp = cp_h_s_R1(testEnthalpy, testEntropy);
		double cv = cv_h_s_R1(testEnthalpy, testEntropy);
		double w = w_h_s_R1(testEnthalpy, testEntropy);

		double vErr = CALC_ABSERR(v, 0.120241800E-02);
		double uErr = CALC_ABSERR(u, 0.971934985E+03);
		double PErr = CALC_ABSERR(P, 3000);
		double TErr = CALC_ABSERR(T, 500);
		double cpErr = CALC_ABSERR(cp, 0.465580682E+01);
		double cvErr = CALC_ABSERR(cv, 3.221392229028);
		double wErr = CALC_ABSERR(w, 0.124071337E+04);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool PPass = IS_ACCEPTABLE(PErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

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

	TEST(TestPropertyAccuracy_Region1, Temperature_as_a_function_of_pressure_enthalpy_Region1_3MPa_500h)
	{
		//kPa
		double testPressure = 3000;
		//kJ / kg
		double testEnth = 500;

		double T = T_P_h_R1(testPressure, testEnth);

		double TErr = CALC_ABSERR(T, 0.391798509E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region1, Temperature_as_a_function_of_pressure_enthalpy_Region1_80MPa_500h)
	{
		//kPa
		double testPressure = 80000;
		//kJ / kg
		double testEnth = 500;

		double T = T_P_h_R1(testPressure, testEnth);

		double TErr = CALC_ABSERR(T, 0.378108626E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region1, Temperature_as_a_function_of_pressure_enthalpy_Region1_80MPa_1500h)
	{
		//kPa
		double testPressure = 80000;
		//kJ / kg
		double testEnth = 1500;

		double T = T_P_h_R1(testPressure, testEnth);

		double TErr = CALC_ABSERR(T, 0.611041229E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}

	//The pressure and entropy data points for Region1 were 
	//suggested by the IAPWS in "Revised Release on IAPWS
	//Inductrial Formulation 1997 for the Thermodynamic
	//Properties of Water and Steam" in Table 9 on page 12.

	TEST(TestPropertyAccuracy_Region1, Temperature_as_a_function_of_pressure_entropy_Region1_3MPa_0_5s)
	{
		//kPa
		double testPressure = 3000;
		//kJ / (kg * K)
		double testEntropy = 0.5;

		double T = T_P_s_R1(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.307842258E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region1, Temperature_as_a_function_of_pressure_entropy_Region1_80MPa_0_5s)
	{
		//kPa
		double testPressure = 80000;
		//kJ / (kg * K)
		double testEntropy = 0.5;

		double T = T_P_s_R1(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.309979785E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region1, Temperature_as_a_function_of_pressure_entropy_Region1_80MPa_3s)
	{
		//kPa
		double testPressure = 80000;
		//kJ / (kg * K)
		double testEntropy = 3;

		double T = T_P_s_R1(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.565899909E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}

	//The enthalpy and entropy data points for Region1 were 
	//suggested by the IAPWS in "Revised Supplementary Release
	//on Backward Equations for Pressure as a Function of Enthalpy
	//and Entropy p(h,s) for Regions 1 and 2 of the IAPWS Industrial
	//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
	//in Table 3 on page 6.

	TEST(TestPropertyAccuracy_Region1, Pressure_as_a_function_of_enthalpy_entropy_Region1_0_001h_0s)
	{
		//kJ / kg
		double testEnth = 0.001;
		//kJ / (kg * K)
		double testEntr = 0;

		double P = (P_h_s_R1(testEnth, testEntr)) / 1000;

		double PErr = CALC_ABSERR(P, 9.800980612E-04);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region1, Pressure_as_a_function_of_enthalpy_entropy_Region1_90h_0s)
	{
		//kJ / kg
		double testEnth = 90;
		//kJ / (kg * K)
		double testEntr = 0;

		double P = (P_h_s_R1(testEnth, testEntr)) / 1000;

		double PErr = CALC_ABSERR(P, 9.192954727E+01);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region1, Pressure_as_a_function_of_enthalpy_entropy_Region1_1500h_3_4s)
	{
		//kJ / kg
		double testEnth = 1500;
		//kJ / (kg * K)
		double testEntr = 3.4;

		double P = (P_h_s_R1(testEnth, testEntr)) / 1000;

		double PErr = CALC_ABSERR(P, 5.868294423E+01);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
}

namespace Tests_Region2
{
	//The temperature and pressure data points for Region1 were 
	//suggested by the IAPWS in "Revised Release on IAPWS
	//Inductrial Formulation 1997 for the Thermodynamic
	//Properties of Water and Steam" in Table 15 on page 17.

	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_temperature_pressure_Region2_300K_0_0035MPa)
	{
		//K
		double testTemp = 300;
		//kPa
		double testPressure = 0.0035 * 1000;

		double v = v_T_P_R2(testTemp, testPressure);
		double u = u_T_P_R2(testTemp, testPressure);
		double s = s_T_P_R2(testTemp, testPressure);
		double h = h_T_P_R2(testTemp, testPressure);
		double cp = cp_T_P_R2(testTemp, testPressure);
		double cv = cv_T_P_R2(testTemp, testPressure);
		double w = w_T_P_R2(testTemp, testPressure);

		double vErr = CALC_ABSERR(v, 0.394913866E+02);
		double uErr = CALC_ABSERR(u, 0.241169160E+04);
		double sErr = CALC_ABSERR(s, 0.852238967E+01);
		double hErr = CALC_ABSERR(h, 0.254991145E+04);
		double cpErr = CALC_ABSERR(cp, 0.191300162E+01);
		double cvErr = CALC_ABSERR(cv, 1.441326618975);
		double wErr = CALC_ABSERR(w, 0.427920172E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_temperature_pressure_Region2_700K_0_0035MPa)
	{
		//K
		double testTemp = 700;
		//kPa
		double testPressure = 0.0035 * 1000;

		double v = v_T_P_R2(testTemp, testPressure);
		double u = u_T_P_R2(testTemp, testPressure);
		double s = s_T_P_R2(testTemp, testPressure);
		double h = h_T_P_R2(testTemp, testPressure);
		double cp = cp_T_P_R2(testTemp, testPressure);
		double cv = cv_T_P_R2(testTemp, testPressure);
		double w = w_T_P_R2(testTemp, testPressure);

		double vErr = CALC_ABSERR(v, 0.923015898E+02);
		double uErr = CALC_ABSERR(u, 0.301262819E+04);
		double sErr = CALC_ABSERR(s, 0.101749996E+02);
		double hErr = CALC_ABSERR(h, 0.333568375E+04);
		double cpErr = CALC_ABSERR(cp, 0.208141274E+01);
		double cvErr = CALC_ABSERR(cv, 1.6197833256);
		double wErr = CALC_ABSERR(w, 0.644289068E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_temperature_pressure_Region2_700K_30MPa)
	{
		//K
		double testTemp = 700;
		//kPa
		double testPressure = 30 * 1000;

		double v = v_T_P_R2(testTemp, testPressure);
		double u = u_T_P_R2(testTemp, testPressure);
		double s = s_T_P_R2(testTemp, testPressure);
		double h = h_T_P_R2(testTemp, testPressure);
		double cp = cp_T_P_R2(testTemp, testPressure);
		double cv = cv_T_P_R2(testTemp, testPressure);
		double w = w_T_P_R2(testTemp, testPressure);

		double vErr = CALC_ABSERR(v, 0.542946619E-02);
		double uErr = CALC_ABSERR(u, 0.246861076E+04);
		double sErr = CALC_ABSERR(s, 0.517540298E+01);
		double hErr = CALC_ABSERR(h, 0.263149474E+04);
		double cpErr = CALC_ABSERR(cp, 0.103505092E+02);
		double cvErr = CALC_ABSERR(cv, 2.975538368909);
		double wErr = CALC_ABSERR(w, 0.480386523E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}

	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_pressure_enthalpy_Region2_h_at_300K_0_0035MPa)
	{
		//kPa
		double testPress = 0.0035 * 1000;
		//kJ / kg
		double testEnthalpy = 0.254991145E+04;

		double v = v_P_h_R2(testPress, testEnthalpy);
		double u = u_P_h_R2(testPress, testEnthalpy);
		double s = s_P_h_R2(testPress, testEnthalpy);
		double T = T_P_h_R2(testPress, testEnthalpy);
		double cp = cp_P_h_R2(testPress, testEnthalpy);
		double cv = cv_P_h_R2(testPress, testEnthalpy);
		double w = w_P_h_R2(testPress, testEnthalpy);

		double vErr = CALC_ABSERR(v, 0.394913866E+02);
		double uErr = CALC_ABSERR(u, 0.241169160E+04);
		double sErr = CALC_ABSERR(s, 0.852238967E+01);
		double TErr = CALC_ABSERR(T, 300);
		double cpErr = CALC_ABSERR(cp, 0.191300162E+01);
		double cvErr = CALC_ABSERR(cv, 1.441326618975);
		double wErr = CALC_ABSERR(w, 0.427920172E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_pressure_enthalpy_Region2_h_at_700K_0_0035MPa)
	{
		//kPa
		double testPress = 0.0035 * 1000;
		//kJ / kg
		double testEnthalpy = 0.333568375E+04;

		double v = v_P_h_R2(testPress, testEnthalpy);
		double u = u_P_h_R2(testPress, testEnthalpy);
		double s = s_P_h_R2(testPress, testEnthalpy);
		double T = T_P_h_R2(testPress, testEnthalpy);
		double cp = cp_P_h_R2(testPress, testEnthalpy);
		double cv = cv_P_h_R2(testPress, testEnthalpy);
		double w = w_P_h_R2(testPress, testEnthalpy);

		double vErr = CALC_ABSERR(v, 0.923015898E+02);
		double uErr = CALC_ABSERR(u, 0.301262819E+04);
		double sErr = CALC_ABSERR(s, 0.101749996E+02);
		double TErr = CALC_ABSERR(T, 700);
		double cpErr = CALC_ABSERR(cp, 0.208141274E+01);
		double cvErr = CALC_ABSERR(cv, 1.6197833256);
		double wErr = CALC_ABSERR(w, 0.644289068E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_pressure_enthalpy_Region2_h_at_700K_30MPa)
	{
		//kPa
		double testPress = 30 * 1000;
		//kJ / kg
		double testEnthalpy = 0.263149474E+04;

		double v = v_P_h_R2(testPress, testEnthalpy);
		double u = u_P_h_R2(testPress, testEnthalpy);
		double s = s_P_h_R2(testPress, testEnthalpy);
		double T = T_P_h_R2(testPress, testEnthalpy);
		double cp = cp_P_h_R2(testPress, testEnthalpy);
		double cv = cv_P_h_R2(testPress, testEnthalpy);
		double w = w_P_h_R2(testPress, testEnthalpy);

		double vErr = CALC_ABSERR(v, 0.542946619E-02);
		double uErr = CALC_ABSERR(u, 0.246861076E+04);
		double sErr = CALC_ABSERR(s, 0.517540298E+01);
		double TErr = CALC_ABSERR(T, 700);
		double cpErr = CALC_ABSERR(cp, 0.103505092E+02);
		double cvErr = CALC_ABSERR(cv, 2.975538368909);
		double wErr = CALC_ABSERR(w, 0.480386523E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool sPass = IS_ACCEPTABLE(sErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(sPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}

	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_pressure_entropy_Region2_s_at_300K_0_0035MPa)
	{
		//kPa
		double testPress = 0.0035 * 1000;
		//kJ / (kg * K)
		double testEntropy = 0.852238967E+01;

		double v = v_P_s_R2(testPress, testEntropy);
		double u = u_P_s_R2(testPress, testEntropy);
		double h = h_P_s_R2(testPress, testEntropy);
		double T = T_P_s_R2(testPress, testEntropy);
		double cp = cp_P_s_R2(testPress, testEntropy);
		double cv = cv_P_s_R2(testPress, testEntropy);
		double w = w_P_s_R2(testPress, testEntropy);

		double vErr = CALC_ABSERR(v, 0.394913866E+02);
		double uErr = CALC_ABSERR(u, 0.241169160E+04);
		double hErr = CALC_ABSERR(h, 0.254991145E+04);
		double TErr = CALC_ABSERR(T, 300);
		double cpErr = CALC_ABSERR(cp, 0.191300162E+01);
		double cvErr = CALC_ABSERR(cv, 1.441326618975);
		double wErr = CALC_ABSERR(w, 0.427920172E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_pressure_entropy_Region2_s_at_700K_0_0035MPa)
	{
		//kPa
		double testPress = 0.0035 * 1000;
		//kJ / (kg * K)
		double testEntropy = 0.101749996E+02;

		double v = v_P_s_R2(testPress, testEntropy);
		double u = u_P_s_R2(testPress, testEntropy);
		double h = h_P_s_R2(testPress, testEntropy);
		double T = T_P_s_R2(testPress, testEntropy);
		double cp = cp_P_s_R2(testPress, testEntropy);
		double cv = cv_P_s_R2(testPress, testEntropy);
		double w = w_P_s_R2(testPress, testEntropy);

		double vErr = CALC_ABSERR(v, 0.923015898E+02);
		double uErr = CALC_ABSERR(u, 0.301262819E+04);
		double hErr = CALC_ABSERR(h, 0.333568375E+04);
		double TErr = CALC_ABSERR(T, 700);
		double cpErr = CALC_ABSERR(cp, 0.208141274E+01);
		double cvErr = CALC_ABSERR(cv, 1.6197833256);
		double wErr = CALC_ABSERR(w, 0.644289068E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_pressure_entropy_Region2_s_at_700K_30MPa)
	{
		//kPa
		double testPress = 30 * 1000;
		//kJ / (kg * K)
		double testEntropy = 0.517540298E+01;

		double v = v_P_s_R2(testPress, testEntropy);
		double u = u_P_s_R2(testPress, testEntropy);
		double h = h_P_s_R2(testPress, testEntropy);
		double T = T_P_s_R2(testPress, testEntropy);
		double cp = cp_P_s_R2(testPress, testEntropy);
		double cv = cv_P_s_R2(testPress, testEntropy);
		double w = w_P_s_R2(testPress, testEntropy);

		double vErr = CALC_ABSERR(v, 0.542946619E-02);
		double uErr = CALC_ABSERR(u, 0.246861076E+04);
		double hErr = CALC_ABSERR(h, 0.263149474E+04);
		double TErr = CALC_ABSERR(T, 700);
		double cpErr = CALC_ABSERR(cp, 0.103505092E+02);
		double cvErr = CALC_ABSERR(cv, 2.975538368909);
		double wErr = CALC_ABSERR(w, 0.480386523E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool hPass = IS_ACCEPTABLE(hErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(hPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}

	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_enthalpy_entropy_Region2_h_s_at_300K_0_0035MPa)
	{
		//kJ / kg
		double testEnthalpy = 0.254991145E+04;
		//kJ / (kg * K)
		double testEntropy = 0.852238967E+01;

		double v = v_h_s_R2(testEnthalpy, testEntropy);
		double u = u_h_s_R2(testEnthalpy, testEntropy);
		double P = P_h_s_R2(testEnthalpy, testEntropy) / 1000;
		double T = T_h_s_R2(testEnthalpy, testEntropy);
		double cp = cp_h_s_R2(testEnthalpy, testEntropy);
		double cv = cv_h_s_R2(testEnthalpy, testEntropy);
		double w = w_h_s_R2(testEnthalpy, testEntropy);

		double vErr = CALC_ABSERR(v, 0.394913866E+02);
		double uErr = CALC_ABSERR(u, 0.241169160E+04);
		double PErr = CALC_ABSERR(P, 0.0035);
		double TErr = CALC_ABSERR(T, 300);
		double cpErr = CALC_ABSERR(cp, 0.191300162E+01);
		double cvErr = CALC_ABSERR(cv, 1.441326618975);
		double wErr = CALC_ABSERR(w, 0.427920172E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool PPass = IS_ACCEPTABLE(PErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(PPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_enthalpy_entropy_Region2_h_s_at_700K_0_0035MPa)
	{
		//kJ / kg
		double testEnthalpy = 0.333568375E+04;
		//kJ / (kg * K)
		double testEntropy = 0.101749996E+02;

		double v = v_h_s_R2(testEnthalpy, testEntropy);
		double u = u_h_s_R2(testEnthalpy, testEntropy);
		double P = P_h_s_R2(testEnthalpy, testEntropy) / 1000;
		double T = T_h_s_R2(testEnthalpy, testEntropy);
		double cp = cp_h_s_R2(testEnthalpy, testEntropy);
		double cv = cv_h_s_R2(testEnthalpy, testEntropy);
		double w = w_h_s_R2(testEnthalpy, testEntropy);

		double vErr = CALC_ABSERR(v, 0.923015898E+02);
		double uErr = CALC_ABSERR(u, 0.301262819E+04);
		double PErr = CALC_ABSERR(P, 0.0035);
		double TErr = CALC_ABSERR(T, 700);
		double cpErr = CALC_ABSERR(cp, 0.208141274E+01);
		double cvErr = CALC_ABSERR(cv, 1.6197833256);
		double wErr = CALC_ABSERR(w, 0.644289068E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool PPass = IS_ACCEPTABLE(PErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(PPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}
	TEST(TestPropertyAccuracy_Region2, Properties_as_functions_of_enthalpy_entropy_Region2_h_s_at_700K_30MPa)
	{
		//kJ / kg
		double testEnthalpy = 0.263149474E+04;
		//kJ / (kg * K)
		double testEntropy = 0.517540298E+01;

		double v = v_h_s_R2(testEnthalpy, testEntropy);
		double u = u_h_s_R2(testEnthalpy, testEntropy);
		double P = P_h_s_R2(testEnthalpy, testEntropy) / 1000;
		double T = T_h_s_R2(testEnthalpy, testEntropy);
		double cp = cp_h_s_R2(testEnthalpy, testEntropy);
		double cv = cv_h_s_R2(testEnthalpy, testEntropy);
		double w = w_h_s_R2(testEnthalpy, testEntropy);

		double vErr = CALC_ABSERR(v, 0.542946619E-02);
		double uErr = CALC_ABSERR(u, 0.246861076E+04);
		double PErr = CALC_ABSERR(P, 30);
		double TErr = CALC_ABSERR(T, 700);
		double cpErr = CALC_ABSERR(cp, 0.103505092E+02);
		double cvErr = CALC_ABSERR(cv, 2.975538368909);
		double wErr = CALC_ABSERR(w, 0.480386523E+03);

		bool vPass = IS_ACCEPTABLE(vErr);
		bool uPass = IS_ACCEPTABLE(uErr);
		bool PPass = IS_ACCEPTABLE(PErr);
		bool TPass = IS_ACCEPTABLE(TErr);
		bool cpPass = IS_ACCEPTABLE(cpErr);
		bool cvPass = IS_ACCEPTABLE(cvErr);
		bool wPass = IS_ACCEPTABLE(wErr);

		ASSERT_TRUE(vPass);
		ASSERT_TRUE(uPass);
		ASSERT_TRUE(PPass);
		ASSERT_TRUE(TPass);
		ASSERT_TRUE(cpPass);
		ASSERT_TRUE(cvPass);
		ASSERT_TRUE(wPass);
	}

	//The pressure and enthalpy data points for Region2 were 
	//suggested by the IAPWS in "Revised Release on IAPWS
	//Inductrial Formulation 1997 for the Thermodynamic
	//Properties of Water and Steam" in Table 24 on page 25.

	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_enthalpy_Region2_0_001MPa_3000h)
	{
		//kPa
		double testPressure = 0.001 * 1000;
		//kJ / kg
		double testEnthalpy = 3000;

		double T = T_P_h_R2(testPressure, testEnthalpy);

		double TErr = CALC_ABSERR(T, 0.534433241E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_enthalpy_Region2_3MPa_3000h)
	{
		//kPa
		double testPressure = 3 * 1000;
		//kJ / kg
		double testEnthalpy = 3000;

		double T = T_P_h_R2(testPressure, testEnthalpy);

		double TErr = CALC_ABSERR(T, 0.575373370E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_enthalpy_Region2_3MPa_4000h)
	{
		//kPa
		double testPressure = 3 * 1000;
		//kJ / kg
		double testEnthalpy = 4000;

		double T = T_P_h_R2(testPressure, testEnthalpy);

		double TErr = CALC_ABSERR(T, 0.101077577E+04);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_enthalpy_Region2_5MPa_3500h)
	{
		//kPa
		double testPressure = 5 * 1000;
		//kJ / kg
		double testEnthalpy = 3500;

		double T = T_P_h_R2(testPressure, testEnthalpy);

		double TErr = CALC_ABSERR(T, 0.801299102E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_enthalpy_Region2_5MPa_4000h)
	{
		//kPa
		double testPressure = 5 * 1000;
		//kJ / kg
		double testEnthalpy = 4000;

		double T = T_P_h_R2(testPressure, testEnthalpy);

		double TErr = CALC_ABSERR(T, 0.101531583E+04);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_enthalpy_Region2_25MPa_3500h)
	{
		//kPa
		double testPressure = 25 * 1000;
		//kJ / kg
		double testEnthalpy = 3500;

		double T = T_P_h_R2(testPressure, testEnthalpy);

		double TErr = CALC_ABSERR(T, 0.875279054E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_enthalpy_Region2_40MPa_2700h)
	{
		//kPa
		double testPressure = 40 * 1000;
		//kJ / kg
		double testEnthalpy = 2700;

		double T = T_P_h_R2(testPressure, testEnthalpy);

		double TErr = CALC_ABSERR(T, 0.743056411E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_enthalpy_Region2_60MPa_2700h)
	{
		//kPa
		double testPressure = 60 * 1000;
		//kJ / kg
		double testEnthalpy = 2700;

		double T = T_P_h_R2(testPressure, testEnthalpy);

		double TErr = CALC_ABSERR(T, 0.791137067E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_enthalpy_Region2_60MPa_3200h)
	{
		//kPa
		double testPressure = 60 * 1000;
		//kJ / kg
		double testEnthalpy = 3200;

		double T = T_P_h_R2(testPressure, testEnthalpy);

		double TErr = CALC_ABSERR(T, 0.882756860E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}

	//The pressure and enthalpy data points for Region2 were 
	//suggested by the IAPWS in "Revised Release on IAPWS
	//Inductrial Formulation 1997 for the Thermodynamic
	//Properties of Water and Steam" in Table 29 on page 29.

	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_entropy_Region2_0_1MPa_7_5s)
	{
		//kPa
		double testPressure = 0.1 * 1000;
		//kJ / (kg * K)
		double testEntropy = 7.5;

		double T = T_P_s_R2(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.399517097E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_entropy_Region2_0_1MPa_8s)
	{
		//kPa
		double testPressure = 0.1 * 1000;
		//kJ / (kg * K)
		double testEntropy = 8;

		double T = T_P_s_R2(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.514127081E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_entropy_Region2_2_5MPa_8s)
	{
		//kPa
		double testPressure = 2.5 * 1000;
		//kJ / (kg * K)
		double testEntropy = 8;

		double T = T_P_s_R2(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.103984917E+04);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_entropy_Region2_8MPa_6s)
	{
		//kPa
		double testPressure = 8 * 1000;
		//kJ / (kg * K)
		double testEntropy = 6;

		double T = T_P_s_R2(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.600484040E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_entropy_Region2_8MPa_7_5s)
	{
		//kPa
		double testPressure = 8 * 1000;
		//kJ / (kg * K)
		double testEntropy = 7.5;

		double T = T_P_s_R2(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.106495556E+04);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_entropy_Region2_90MPa_6s)
	{
		//kPa
		double testPressure = 90 * 1000;
		//kJ / (kg * K)
		double testEntropy = 6;

		double T = T_P_s_R2(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.103801126E+04);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_entropy_Region2_20MPa_5_75s)
	{
		//kPa
		double testPressure = 20 * 1000;
		//kJ / (kg * K)
		double testEntropy = 5.75;

		double T = T_P_s_R2(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.697992849E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_entropy_Region2_80MPa_5_25s)
	{
		//kPa
		double testPressure = 80 * 1000;
		//kJ / (kg * K)
		double testEntropy = 5.25;

		double T = T_P_s_R2(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.854011484E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}
	TEST(TestPropertyAccuracy_Region2, Temperature_as_a_functions_of_pressure_entropy_Region2_80MPa_5_75s)
	{
		//kPa
		double testPressure = 80 * 1000;
		//kJ / (kg * K)
		double testEntropy = 5.75;

		double T = T_P_s_R2(testPressure, testEntropy);

		double TErr = CALC_ABSERR(T, 0.949017998E+03);

		bool TPass = IS_ACCEPTABLE(TErr);

		ASSERT_TRUE(TPass);
	}

	//The pressure and enthalpy data points for Region2 were 
	//suggested by the IAPWS in "Supplementary Release on Backward
	//Equations for Pressure as a Function of Enthalpy and Entropy
	//p(h,s) for Regions 1 and 2 of the IAPWS Industrial Formulation
	//1997 for the Thermodynamic Properties of Water and Steam" in 
	//Table 9 on page 10.

	TEST(TestPropertyAccuracy_Region2, Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_6_5s)
	{
		//kJ / kg
		double testEnthalpy = 2800;
		//kJ / (kg * K)
		double testEntropy = 6.5;

		double P = P_h_s_R2(testEnthalpy, testEntropy);
		P = P / 1000;

		double PErr = CALC_ABSERR(P, 1.371012767);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region2, Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_9_5s)
	{
		//kJ / kg
		double testEnthalpy = 2800;
		//kJ / (kg * K)
		double testEntropy = 9.5;

		double P = P_h_s_R2(testEnthalpy, testEntropy);
		P = P / 1000;

		double PErr = CALC_ABSERR(P, 1.879743844E-03);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region2, Pressure_as_a_functions_of_enthalpy_entropy_Region2_4100h_9_5s)
	{
		//kJ / kg
		double testEnthalpy = 4100;
		//kJ / (kg * K)
		double testEntropy = 9.5;

		double P = P_h_s_R2(testEnthalpy, testEntropy);
		P = P / 1000;

		double PErr = CALC_ABSERR(P, 1.024788997E-01);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region2, Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_6s)
	{
		//kJ / kg
		double testEnthalpy = 2800;
		//kJ / (kg * K)
		double testEntropy = 6;

		double P = P_h_s_R2(testEnthalpy, testEntropy);
		P = P / 1000;

		double PErr = CALC_ABSERR(P, 4.793911442);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region2, Pressure_as_a_functions_of_enthalpy_entropy_Region2_3600h_6s)
	{
		//kJ / kg
		double testEnthalpy = 3600;
		//kJ / (kg * K)
		double testEntropy = 6;

		double P = P_h_s_R2(testEnthalpy, testEntropy);
		P = P / 1000;

		double PErr = CALC_ABSERR(P, 8.395519209E+01);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region2, Pressure_as_a_functions_of_enthalpy_entropy_Region2_3600h_7s)
	{
		//kJ / kg
		double testEnthalpy = 3600;
		//kJ / (kg * K)
		double testEntropy = 7;

		double P = P_h_s_R2(testEnthalpy, testEntropy);
		P = P / 1000;

		double PErr = CALC_ABSERR(P, 7.527161441);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region2, Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_5_1s)
	{
		//kJ / kg
		double testEnthalpy = 2800;
		//kJ / (kg * K)
		double testEntropy = 5.1;

		double P = P_h_s_R2(testEnthalpy, testEntropy);
		P = P / 1000;

		double PErr = CALC_ABSERR(P, 9.439202060E+01);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region2, Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_5_8s)
	{
		//kJ / kg
		double testEnthalpy = 2800;
		//kJ / (kg * K)
		double testEntropy = 5.8;

		double P = P_h_s_R2(testEnthalpy, testEntropy);
		P = P / 1000;

		double PErr = CALC_ABSERR(P, 8.414574124);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
	TEST(TestPropertyAccuracy_Region2, Pressure_as_a_functions_of_enthalpy_entropy_Region2_3400h_5_8s)
	{
		//kJ / kg
		double testEnthalpy = 3400;
		//kJ / (kg * K)
		double testEntropy = 5.8;

		double P = P_h_s_R2(testEnthalpy, testEntropy);
		P = P / 1000;

		double PErr = CALC_ABSERR(P, 8.376903879E+01);

		bool PPass = IS_ACCEPTABLE(PErr);

		ASSERT_TRUE(PPass);
	}
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
