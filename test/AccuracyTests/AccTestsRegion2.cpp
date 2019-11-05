#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsRegion2 : public AccTestBase
{

};

extern "C"
{
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

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 15 on page 17.

TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfTemperaturePressure300K0d0035MPa)
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

	double vErr = AbsRelativeErr(v, 0.394913866E+02);
	double uErr = AbsRelativeErr(u, 0.241169160E+04);
	double sErr = AbsRelativeErr(s, 0.852238967E+01);
	double hErr = AbsRelativeErr(h, 0.254991145E+04);
	double cpErr = AbsRelativeErr(cp, 0.191300162E+01);
	double cvErr = AbsRelativeErr(cv, 1.441326618975);
	double wErr = AbsRelativeErr(w, 0.427920172E+03);

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
TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfTemperaturePressure700K0d0035MPa)
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

	double vErr = AbsRelativeErr(v, 0.923015898E+02);
	double uErr = AbsRelativeErr(u, 0.301262819E+04);
	double sErr = AbsRelativeErr(s, 0.101749996E+02);
	double hErr = AbsRelativeErr(h, 0.333568375E+04);
	double cpErr = AbsRelativeErr(cp, 0.208141274E+01);
	double cvErr = AbsRelativeErr(cv, 1.6197833256);
	double wErr = AbsRelativeErr(w, 0.644289068E+03);

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
TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfTemperaturePressure700K30MPa)
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

	double vErr = AbsRelativeErr(v, 0.542946619E-02);
	double uErr = AbsRelativeErr(u, 0.246861076E+04);
	double sErr = AbsRelativeErr(s, 0.517540298E+01);
	double hErr = AbsRelativeErr(h, 0.263149474E+04);
	double cpErr = AbsRelativeErr(cp, 0.103505092E+02);
	double cvErr = AbsRelativeErr(cv, 2.975538368909);
	double wErr = AbsRelativeErr(w, 0.480386523E+03);

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

TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfPressureEnthalpyHAt300K0d0035MPa)
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

	double vErr = AbsRelativeErr(v, 0.394913866E+02);
	double uErr = AbsRelativeErr(u, 0.241169160E+04);
	double sErr = AbsRelativeErr(s, 0.852238967E+01);
	double TErr = AbsRelativeErr(T, 300);
	double cpErr = AbsRelativeErr(cp, 0.191300162E+01);
	double cvErr = AbsRelativeErr(cv, 1.441326618975);
	double wErr = AbsRelativeErr(w, 0.427920172E+03);

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
TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfPressureEnthalpyHAt700K0d0035MPa)
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

	double vErr = AbsRelativeErr(v, 0.923015898E+02);
	double uErr = AbsRelativeErr(u, 0.301262819E+04);
	double sErr = AbsRelativeErr(s, 0.101749996E+02);
	double TErr = AbsRelativeErr(T, 700);
	double cpErr = AbsRelativeErr(cp, 0.208141274E+01);
	double cvErr = AbsRelativeErr(cv, 1.6197833256);
	double wErr = AbsRelativeErr(w, 0.644289068E+03);

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
TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfPressureEnthalpyHAt700K30MPa)
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

	double vErr = AbsRelativeErr(v, 0.542946619E-02);
	double uErr = AbsRelativeErr(u, 0.246861076E+04);
	double sErr = AbsRelativeErr(s, 0.517540298E+01);
	double TErr = AbsRelativeErr(T, 700);
	double cpErr = AbsRelativeErr(cp, 0.103505092E+02);
	double cvErr = AbsRelativeErr(cv, 2.975538368909);
	double wErr = AbsRelativeErr(w, 0.480386523E+03);

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

TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfPressureEntropySAt300K0d0035MPa)
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

	double vErr = AbsRelativeErr(v, 0.394913866E+02);
	double uErr = AbsRelativeErr(u, 0.241169160E+04);
	double hErr = AbsRelativeErr(h, 0.254991145E+04);
	double TErr = AbsRelativeErr(T, 300);
	double cpErr = AbsRelativeErr(cp, 0.191300162E+01);
	double cvErr = AbsRelativeErr(cv, 1.441326618975);
	double wErr = AbsRelativeErr(w, 0.427920172E+03);

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
TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfPressureEntropySAt700K0d0035MPa)
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

	double vErr = AbsRelativeErr(v, 0.923015898E+02);
	double uErr = AbsRelativeErr(u, 0.301262819E+04);
	double hErr = AbsRelativeErr(h, 0.333568375E+04);
	double TErr = AbsRelativeErr(T, 700);
	double cpErr = AbsRelativeErr(cp, 0.208141274E+01);
	double cvErr = AbsRelativeErr(cv, 1.6197833256);
	double wErr = AbsRelativeErr(w, 0.644289068E+03);

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
TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfPressureEntropySAt700K30MPa)
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

	double vErr = AbsRelativeErr(v, 0.542946619E-02);
	double uErr = AbsRelativeErr(u, 0.246861076E+04);
	double hErr = AbsRelativeErr(h, 0.263149474E+04);
	double TErr = AbsRelativeErr(T, 700);
	double cpErr = AbsRelativeErr(cp, 0.103505092E+02);
	double cvErr = AbsRelativeErr(cv, 2.975538368909);
	double wErr = AbsRelativeErr(w, 0.480386523E+03);

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

TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfEnthalpyEntropyHSAt300K0d0035MPa)
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

	double vErr = AbsRelativeErr(v, 0.394913866E+02);
	double uErr = AbsRelativeErr(u, 0.241169160E+04);
	double PErr = AbsRelativeErr(P, 0.0035);
	double TErr = AbsRelativeErr(T, 300);
	double cpErr = AbsRelativeErr(cp, 0.191300162E+01);
	double cvErr = AbsRelativeErr(cv, 1.441326618975);
	double wErr = AbsRelativeErr(w, 0.427920172E+03);

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
TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfEnthalpyEntropyHSAt700K0d0035MPa)
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

	double vErr = AbsRelativeErr(v, 0.923015898E+02);
	double uErr = AbsRelativeErr(u, 0.301262819E+04);
	double PErr = AbsRelativeErr(P, 0.0035);
	double TErr = AbsRelativeErr(T, 700);
	double cpErr = AbsRelativeErr(cp, 0.208141274E+01);
	double cvErr = AbsRelativeErr(cv, 1.6197833256);
	double wErr = AbsRelativeErr(w, 0.644289068E+03);

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
TEST_F(AccTestsRegion2, PropertiesAsFunctionsOfEnthalpyEntropyHSAt700K30MPa)
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

	double vErr = AbsRelativeErr(v, 0.542946619E-02);
	double uErr = AbsRelativeErr(u, 0.246861076E+04);
	double PErr = AbsRelativeErr(P, 30);
	double TErr = AbsRelativeErr(T, 700);
	double cpErr = AbsRelativeErr(cp, 0.103505092E+02);
	double cvErr = AbsRelativeErr(cv, 2.975538368909);
	double wErr = AbsRelativeErr(w, 0.480386523E+03);

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

//The pressure and enthalpy data points for Region2 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 24 on page 25.

TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEnthalpy0d001MPa3000h)
{
	//kPa
	double testPressure = 0.001 * 1000;
	//kJ / kg
	double testEnthalpy = 3000;

	double T = T_P_h_R2(testPressure, testEnthalpy);

	double TErr = AbsRelativeErr(T, 0.534433241E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEnthalpy3MPa3000h)
{
	//kPa
	double testPressure = 3 * 1000;
	//kJ / kg
	double testEnthalpy = 3000;

	double T = T_P_h_R2(testPressure, testEnthalpy);

	double TErr = AbsRelativeErr(T, 0.575373370E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEnthalpy3MPa4000h)
{
	//kPa
	double testPressure = 3 * 1000;
	//kJ / kg
	double testEnthalpy = 4000;

	double T = T_P_h_R2(testPressure, testEnthalpy);

	double TErr = AbsRelativeErr(T, 0.101077577E+04);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEnthalpy5MPa3500h)
{
	//kPa
	double testPressure = 5 * 1000;
	//kJ / kg
	double testEnthalpy = 3500;

	double T = T_P_h_R2(testPressure, testEnthalpy);

	double TErr = AbsRelativeErr(T, 0.801299102E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEnthalpy5MPa4000h)
{
	//kPa
	double testPressure = 5 * 1000;
	//kJ / kg
	double testEnthalpy = 4000;

	double T = T_P_h_R2(testPressure, testEnthalpy);

	double TErr = AbsRelativeErr(T, 0.101531583E+04);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEnthalpy25MPa3500h)
{
	//kPa
	double testPressure = 25 * 1000;
	//kJ / kg
	double testEnthalpy = 3500;

	double T = T_P_h_R2(testPressure, testEnthalpy);

	double TErr = AbsRelativeErr(T, 0.875279054E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEnthalpy40MPa2700h)
{
	//kPa
	double testPressure = 40 * 1000;
	//kJ / kg
	double testEnthalpy = 2700;

	double T = T_P_h_R2(testPressure, testEnthalpy);

	double TErr = AbsRelativeErr(T, 0.743056411E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEnthalpy60MPa2700h)
{
	//kPa
	double testPressure = 60 * 1000;
	//kJ / kg
	double testEnthalpy = 2700;

	double T = T_P_h_R2(testPressure, testEnthalpy);

	double TErr = AbsRelativeErr(T, 0.791137067E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEnthalpy60MPa3200h)
{
	//kPa
	double testPressure = 60 * 1000;
	//kJ / kg
	double testEnthalpy = 3200;

	double T = T_P_h_R2(testPressure, testEnthalpy);

	double TErr = AbsRelativeErr(T, 0.882756860E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}

//The pressure and enthalpy data points for Region2 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 29 on page 29.

TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEntropy0d1MPa75s)
{
	//kPa
	double testPressure = 0.1 * 1000;
	//kJ / (kg * K)
	double testEntropy = 7.5;

	double T = T_P_s_R2(testPressure, testEntropy);

	double TErr = AbsRelativeErr(T, 0.399517097E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEntropy0d1MPa8s)
{
	//kPa
	double testPressure = 0.1 * 1000;
	//kJ / (kg * K)
	double testEntropy = 8;

	double T = T_P_s_R2(testPressure, testEntropy);

	double TErr = AbsRelativeErr(T, 0.514127081E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEntropy2d5MPa8s)
{
	//kPa
	double testPressure = 2.5 * 1000;
	//kJ / (kg * K)
	double testEntropy = 8;

	double T = T_P_s_R2(testPressure, testEntropy);

	double TErr = AbsRelativeErr(T, 0.103984917E+04);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEntropy8MPa6s)
{
	//kPa
	double testPressure = 8 * 1000;
	//kJ / (kg * K)
	double testEntropy = 6;

	double T = T_P_s_R2(testPressure, testEntropy);

	double TErr = AbsRelativeErr(T, 0.600484040E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEntropy8MPa7d5s)
{
	//kPa
	double testPressure = 8 * 1000;
	//kJ / (kg * K)
	double testEntropy = 7.5;

	double T = T_P_s_R2(testPressure, testEntropy);

	double TErr = AbsRelativeErr(T, 0.106495556E+04);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEntropy90MPa6s)
{
	//kPa
	double testPressure = 90 * 1000;
	//kJ / (kg * K)
	double testEntropy = 6;

	double T = T_P_s_R2(testPressure, testEntropy);

	double TErr = AbsRelativeErr(T, 0.103801126E+04);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEntropy20MPa5d75s)
{
	//kPa
	double testPressure = 20 * 1000;
	//kJ / (kg * K)
	double testEntropy = 5.75;

	double T = T_P_s_R2(testPressure, testEntropy);

	double TErr = AbsRelativeErr(T, 0.697992849E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEntropy80MPa5d25s)
{
	//kPa
	double testPressure = 80 * 1000;
	//kJ / (kg * K)
	double testEntropy = 5.25;

	double T = T_P_s_R2(testPressure, testEntropy);

	double TErr = AbsRelativeErr(T, 0.854011484E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, TemperatureAsFunctionOfPressureEntropy80MPa5d75s)
{
	//kPa
	double testPressure = 80 * 1000;
	//kJ / (kg * K)
	double testEntropy = 5.75;

	double T = T_P_s_R2(testPressure, testEntropy);

	double TErr = AbsRelativeErr(T, 0.949017998E+03);

	bool TPass = IsAcceptable(TErr);

	ASSERT_TRUE(TPass);
}

//The pressure and enthalpy data points for Region2 were
//suggested by the IAPWS in "Supplementary Release on Backward
//Equations for Pressure as a Function of Enthalpy and Entropy
//p(h,s) for Regions 1 and 2 of the IAPWS Industrial Formulation
//1997 for the Thermodynamic Properties of Water and Steam" in
//Table 9 on page 10.

TEST_F(AccTestsRegion2, PressureAsFunctionOfEnthalpyEntropy2800h6d5s)
{
	//kJ / kg
	double testEnthalpy = 2800;
	//kJ / (kg * K)
	double testEntropy = 6.5;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	P = P / 1000;

	double PErr = AbsRelativeErr(P, 1.371012767);

	bool PPass = IsAcceptable(PErr);

	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, PressureAsFunctionOfEnthalpyEntropy2800h9d5s)
{
	//kJ / kg
	double testEnthalpy = 2800;
	//kJ / (kg * K)
	double testEntropy = 9.5;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	P = P / 1000;

	double PErr = AbsRelativeErr(P, 1.879743844E-03);

	bool PPass = IsAcceptable(PErr);

	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, PressureAsFunctionOfEnthalpyEntropy4100h9d5s)
{
	//kJ / kg
	double testEnthalpy = 4100;
	//kJ / (kg * K)
	double testEntropy = 9.5;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	P = P / 1000;

	double PErr = AbsRelativeErr(P, 1.024788997E-01);

	bool PPass = IsAcceptable(PErr);

	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, PressureAsFunctionOfEnthalpyEntropy2800h6s)
{
	//kJ / kg
	double testEnthalpy = 2800;
	//kJ / (kg * K)
	double testEntropy = 6;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	P = P / 1000;

	double PErr = AbsRelativeErr(P, 4.793911442);

	bool PPass = IsAcceptable(PErr);

	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, PressureAsFunctionOfEnthalpyEntropy3600h6s)
{
	//kJ / kg
	double testEnthalpy = 3600;
	//kJ / (kg * K)
	double testEntropy = 6;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	P = P / 1000;

	double PErr = AbsRelativeErr(P, 8.395519209E+01);

	bool PPass = IsAcceptable(PErr);

	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, PressureAsFunctionOfEnthalpyEntropy3600h7s)
{
	//kJ / kg
	double testEnthalpy = 3600;
	//kJ / (kg * K)
	double testEntropy = 7;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	P = P / 1000;

	double PErr = AbsRelativeErr(P, 7.527161441);

	bool PPass = IsAcceptable(PErr);

	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, PressureAsFunctionOfEnthalpyEntropy2800h5d1s)
{
	//kJ / kg
	double testEnthalpy = 2800;
	//kJ / (kg * K)
	double testEntropy = 5.1;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	P = P / 1000;

	double PErr = AbsRelativeErr(P, 9.439202060E+01);

	bool PPass = IsAcceptable(PErr);

	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, PressureAsFunctionOfEnthalpyEntropyd2800h5d8s)
{
	//kJ / kg
	double testEnthalpy = 2800;
	//kJ / (kg * K)
	double testEntropy = 5.8;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	P = P / 1000;

	double PErr = AbsRelativeErr(P, 8.414574124);

	bool PPass = IsAcceptable(PErr);

	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, PressureAsFunctionOfEnthalpyEntropy3400h5d8s)
{
	//kJ / kg
	double testEnthalpy = 3400;
	//kJ / (kg * K)
	double testEntropy = 5.8;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	P = P / 1000;

	double PErr = AbsRelativeErr(P, 8.376903879E+01);

	bool PPass = IsAcceptable(PErr);

	ASSERT_TRUE(PPass);
}
