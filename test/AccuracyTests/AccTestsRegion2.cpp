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

	DLL_IMPORT  double v_P_T_R2(double,double);
	DLL_IMPORT  double u_P_T_R2(double,double);
	DLL_IMPORT  double s_P_T_R2(double,double);
	DLL_IMPORT  double h_P_T_R2(double,double);
	DLL_IMPORT  double cp_P_T_R2(double,double);
	DLL_IMPORT  double cv_P_T_R2(double,double);
	DLL_IMPORT  double w_P_T_R2(double,double);

	//properties as a function of pressure and enthalpy

	DLL_IMPORT double T_P_h_R2(double,double);
	DLL_IMPORT double v_P_h_R2(double,double);
	DLL_IMPORT double u_P_h_R2(double,double);
	DLL_IMPORT double s_P_h_R2(double,double);
	DLL_IMPORT double cp_P_h_R2(double,double);
	DLL_IMPORT double cv_P_h_R2(double,double);
	DLL_IMPORT double w_P_h_R2(double,double);

	//properties as a function of pressure and entropy

	DLL_IMPORT double T_P_s_R2(double,double);
	DLL_IMPORT double v_P_s_R2(double,double);
	DLL_IMPORT double u_P_s_R2(double,double);
	DLL_IMPORT double h_P_s_R2(double,double);
	DLL_IMPORT double cp_P_s_R2(double,double);
	DLL_IMPORT double cv_P_s_R2(double,double);
	DLL_IMPORT double w_P_s_R2(double,double);

	//properties as a function of enthalpy and entropy

	DLL_IMPORT double P_h_s_R2(double,double);
	DLL_IMPORT double T_h_s_R2(double,double);
	DLL_IMPORT double v_h_s_R2(double,double);
	DLL_IMPORT double u_h_s_R2(double,double);
	DLL_IMPORT double cp_h_s_R2(double,double);
	DLL_IMPORT double cv_h_s_R2(double,double);
	DLL_IMPORT double w_h_s_R2(double,double);
}

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 15 on page 17.

TEST_F(AccTestsRegion2, v_P_T_0d0035MPa_300K)
{
	const double testTemp = 300;
	const double testPressure = 0.0035;
    const double vExp = 0.394913866E+02;

	double v = v_P_T_R2(testPressure,testTemp);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_P_T_0d0035MPa_300K)
{
	const double testTemp = 300;
	const double testPressure = 0.0035;
    const double uExp = 0.241169160E+04;

	double u = u_P_T_R2(testPressure,testTemp);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, s_P_T_0d0035MPa_300K)
{
	const double testTemp = 300;
	const double testPressure = 0.0035;
    const double sExp = 0.852238967E+01;

	double s = s_P_T_R2(testPressure,testTemp);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion2, h_P_T_0d0035MPa_300K)
{
	const double testTemp = 300;
	const double testPressure = 0.0035;
    const double hExp = 0.254991145E+04;

	double h = h_P_T_R2(testPressure,testTemp);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion2, cp_P_T_0d0035MPa_300K)
{
	const double testTemp = 300;
	const double testPressure = 0.0035;
    const double cpExp = 0.191300162E+01;

	double cp = cp_P_T_R2(testPressure,testTemp);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_P_T_0d0035MPa_300K)
{
	const double testTemp = 300;
	const double testPressure = 0.0035;
    const double cvExp = 1.441326618975;

	double cv = cv_P_T_R2(testPressure,testTemp);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_P_T_0d0035MPa_300K)
{
	const double testTemp = 300;
	const double testPressure = 0.0035;
    const double wExp = 0.427920172E+03;

	double w = w_P_T_R2(testPressure,testTemp);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion2, v_P_T_0d0035MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 0.0035;
    const double vExp = 0.923015898E+02;

	double v = v_P_T_R2(testPressure,testTemp);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_P_T_0d0035MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 0.0035;
    const double uExp = 0.301262819E+04;

	double u = u_P_T_R2(testPressure,testTemp);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, s_P_T_0d0035MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 0.0035;
    const double sExp = 0.101749996E+02;

	double s = s_P_T_R2(testPressure,testTemp);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion2, h_P_T_0d0035MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 0.0035;
    const double hExp = 0.333568375E+04;

	double h = h_P_T_R2(testPressure,testTemp);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion2, cp_P_T_0d0035MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 0.0035;
    const double cpExp = 0.208141274E+01;

	double cp = cp_P_T_R2(testPressure,testTemp);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_P_T_0d0035MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 0.0035;
    const double cvExp = 1.6197833256;

	double cv = cv_P_T_R2(testPressure,testTemp);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_P_T_0d0035MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 0.0035;
    const double wExp = 0.644289068E+03;

	double w = w_P_T_R2(testPressure,testTemp);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion2, v_P_T_30MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 30;
    const double vExp = 0.542946619E-02;

	double v = v_P_T_R2(testPressure,testTemp);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_P_T_30MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 30;
    const double uExp = 0.246861076E+04;

	double u = u_P_T_R2(testPressure,testTemp);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, s_P_T_30MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 30;
    const double sExp = 0.517540298E+01;

	double s = s_P_T_R2(testPressure,testTemp);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion2, h_P_T_30MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 30;
    const double hExp = 0.263149474E+04;

	double h = h_P_T_R2(testPressure,testTemp);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion2, cp_P_T_30MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 30;
    const double cpExp = 0.103505092E+02;

	double cp = cp_P_T_R2(testPressure,testTemp);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_P_T_30MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 30;
    const double cvExp = 2.975538368909;

	double cv = cv_P_T_R2(testPressure,testTemp);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_P_T_30MPa_700K)
{
	const double testTemp = 700;
	const double testPressure = 30;
    const double wExp = 0.480386523E+03;

	double w = w_P_T_R2(testPressure,testTemp);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion2, v_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double vExp = 0.394913866E+02;

	double v = v_P_h_R2(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double uExp = 0.241169160E+04;

	double u = u_P_h_R2(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, s_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double sExp = 0.852238967E+01;

	double s = s_P_h_R2(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion2, T_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double tExp = 300;

	double T = T_P_h_R2(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, cp_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double cpExp = 0.191300162E+01;

	double cp = cp_P_h_R2(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double cvExp = 1.441326618975;

	double cv = cv_P_h_R2(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double wExp = 0.427920172E+03;

	double w = w_P_h_R2(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion2, v_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double vExp = 0.923015898E+02;

	double v = v_P_h_R2(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double uExp = 0.301262819E+04;

	double u = u_P_h_R2(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, s_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double sExp = 0.101749996E+02;

	double s = s_P_h_R2(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion2, T_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double tExp = 700;

	double T = T_P_h_R2(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, cp_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double cpExp = 0.208141274E+01;

	double cp = cp_P_h_R2(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double cvExp = 1.6197833256;

	double cv = cv_P_h_R2(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double wExp = 0.644289068E+03;

	double w = w_P_h_R2(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion2, v_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double vExp = 0.542946619E-02;

	double v = v_P_h_R2(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double uExp = 0.246861076E+04;

	double u = u_P_h_R2(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, s_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double sExp = 0.517540298E+01;

	double s = s_P_h_R2(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion2, T_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double tExp = 700;

	double T = T_P_h_R2(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, cp_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double cpExp = 0.103505092E+02;

	double cp = cp_P_h_R2(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double cvExp = 2.975538368909;

	double cv = cv_P_h_R2(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double wExp = 0.480386523E+03;

	double w = w_P_h_R2(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion2, v_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double vExp = 0.394913866E+02;

	double v = v_P_s_R2(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double uExp = 0.241169160E+04;

	double u = u_P_s_R2(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, h_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double hExp = 0.254991145E+04;

	double h = h_P_s_R2(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion2, T_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double tExp = 300;

	double T = T_P_s_R2(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, cp_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double cpExp = 0.191300162E+01;

	double cp = cp_P_s_R2(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double cvExp = 1.441326618975;

	double cv = cv_P_s_R2(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double wExp = 0.427920172E+03;

	double w = w_P_s_R2(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion2, v_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double vExp = 0.923015898E+02;

	double v = v_P_s_R2(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double uExp = 0.301262819E+04;

	double u = u_P_s_R2(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, h_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double hExp = 0.333568375E+04;

	double h = h_P_s_R2(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion2, T_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double tExp = 700;

	double T = T_P_s_R2(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, cp_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double cpExp = 0.208141274E+01;

	double cp = cp_P_s_R2(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double cvExp = 1.6197833256;

	double cv = cv_P_s_R2(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double wExp = 0.644289068E+03;

	double w = w_P_s_R2(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion2, v_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double vExp = 0.542946619E-02;

	double v = v_P_s_R2(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double uExp = 0.246861076E+04;

	double u = u_P_s_R2(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, h_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double hExp = 0.263149474E+04;

	double h = h_P_s_R2(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion2, T_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double tExp = 700;

	double T = T_P_s_R2(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, cp_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double cpExp = 0.103505092E+02;

	double cp = cp_P_s_R2(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double cvExp = 2.975538368909;

	double cv = cv_P_s_R2(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double wExp = 0.480386523E+03;

	double w = w_P_s_R2(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

TEST_F(AccTestsRegion2, v_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double vExp = 0.394913866E+02;

	double v = v_h_s_R2(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double uExp = 0.241169160E+04;

	double u = u_h_s_R2(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, P_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double pExp = 0.0035;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double T = T_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, T_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double tExp = 300;

	double T = T_h_s_R2(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, cp_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double cpExp = 0.191300162E+01;

	double cp = cp_h_s_R2(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double cvExp = 1.441326618975;

	double cv = cv_h_s_R2(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double wExp = 0.427920172E+03;

	double w = w_h_s_R2(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion2, v_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double vExp = 0.923015898E+02;

	double v = v_h_s_R2(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double uExp = 0.301262819E+04;

	double u = u_h_s_R2(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, P_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double pExp = 0.0035;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, T_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double tExp = 700;

	double T = T_h_s_R2(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, cp_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double cpExp = 0.208141274E+01;

	double cp = cp_h_s_R2(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double cvExp = 1.6197833256;

	double cv = cv_h_s_R2(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double wExp = 0.644289068E+03;

	double w = w_h_s_R2(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion2, v_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double vExp = 0.542946619E-02;

	double v = v_h_s_R2(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion2, u_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double uExp = 0.246861076E+04;

	double u = u_h_s_R2(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion2, P_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double pExp = 30;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, T_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double tExp = 700;

	double T = T_h_s_R2(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, cp_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double cpExp = 0.103505092E+02;

	double cp = cp_h_s_R2(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion2, cv_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double cvExp = 2.975538368909;

	double cv = cv_h_s_R2(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion2, w_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double wExp = 0.480386523E+03;

	double w = w_h_s_R2(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

//The pressure and enthalpy data points for Region2 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 24 on page 25.

TEST_F(AccTestsRegion2, T_P_h_0d001MPa_3000h)
{
	const double testPressure = 0.001;
	const double testEnthalpy = 3000;
    const double tExp = 0.534433241E+03;

	double T = T_P_h_R2(testPressure, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_h_3MPa_3000h)
{
	const double testPressure = 3;
	const double testEnthalpy = 3000;
    const double tExp = 0.575373370E+03;

	double T = T_P_h_R2(testPressure, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_h_3MPa_4000h)
{
	const double testPressure = 3;
	const double testEnthalpy = 4000;
    const double tExp = 0.101077577E+04;

	double T = T_P_h_R2(testPressure, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_h_5MPa_3500h)
{
	const double testPressure = 5;
	const double testEnthalpy = 3500;
    const double tExp = 0.801299102E+03;

	double T = T_P_h_R2(testPressure, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_h_5MPa_4000h)
{
	const double testPressure = 5;
	const double testEnthalpy = 4000;
    const double tExp = 0.101531583E+04;

	double T = T_P_h_R2(testPressure, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_h_25MPa_3500h)
{
	const double testPressure = 25;
	const double testEnthalpy = 3500;
    const double tExp = 0.875279054E+03;

	double T = T_P_h_R2(testPressure, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_h_40MPa_2700h)
{
	const double testPressure = 40;
	const double testEnthalpy = 2700;
    const double tExp = 0.743056411E+03;

	double T = T_P_h_R2(testPressure, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_h_60MPa_2700h)
{
	const double testPressure = 60;
	const double testEnthalpy = 2700;
    const double tExp = 0.791137067E+03;

	double T = T_P_h_R2(testPressure, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_h_60MPa_3200h)
{
	const double testPressure = 60;
	const double testEnthalpy = 3200;
    const double tExp = 0.882756860E+03;

	double T = T_P_h_R2(testPressure, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}

//The pressure and enthalpy data points for Region2 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 29 on page 29.

TEST_F(AccTestsRegion2, T_P_s_0d1MPa_75s)
{
	const double testPressure = 0.1;
	const double testEntropy = 7.5;
    const double tExp = 0.399517097E+03;

	double T = T_P_s_R2(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_s_0d1MPa_8s)
{
	const double testPressure = 0.1;
	const double testEntropy = 8;
    const double tExp = 0.514127081E+03;

	double T = T_P_s_R2(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_s_2d5MPa_8s)
{
	const double testPressure = 2.5;
	const double testEntropy = 8;
    const double tExp = 0.103984917E+04;

	double T = T_P_s_R2(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_s_8MPa_6s)
{
	const double testPressure = 8;
	const double testEntropy = 6;
    const double tExp = 0.600484040E+03;

	double T = T_P_s_R2(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_s_8MPa_7d5s)
{
	const double testPressure = 8;
	const double testEntropy = 7.5;
    const double tExp = 0.106495556E+04;

	double T = T_P_s_R2(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_s_90MPa_6s)
{
	const double testPressure = 90;
	const double testEntropy = 6;
    const double tExp = 0.103801126E+04;

	double T = T_P_s_R2(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_s_20MPa_5d75s)
{
	const double testPressure = 20;
	const double testEntropy = 5.75;
    const double tExp = 0.697992849E+03;

	double T = T_P_s_R2(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_s_80MPa_5d25s)
{
	const double testPressure = 80;
	const double testEntropy = 5.25;
    const double tExp = 0.854011484E+03;

	double T = T_P_s_R2(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(AccTestsRegion2, T_P_s_80MPa_5d75s)
{
	const double testPressure = 80;
	const double testEntropy = 5.75;
    const double tExp = 0.949017998E+03;

	double T = T_P_s_R2(testPressure, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}

//The pressure and enthalpy data points for Region2 were
//suggested by the IAPWS in "Supplementary Release on Backward
//Equations for Pressure as a Function of Enthalpy and Entropy
//p(h,s) for Regions 1 and 2 of the IAPWS Industrial Formulation
//1997 for the Thermodynamic Properties of Water and Steam" in
//Table 9 on page 10.

TEST_F(AccTestsRegion2, P_h_s_2800h_6d5s)
{
	const double testEnthalpy = 2800;
	const double testEntropy = 6.5;
    const double pExp = 1.371012767;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, P_h_s_2800h_9d5s)
{
	const double testEnthalpy = 2800;
	const double testEntropy = 9.5;
    const double pExp = 1.879743844E-03;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, P_h_s_4100h_9d5s)
{
	const double testEnthalpy = 4100;
	const double testEntropy = 9.5;
    const double pExp = 1.024788997E-01;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, P_h_s_2800h_6s)
{
	const double testEnthalpy = 2800;
	const double testEntropy = 6;
    const double pExp = 4.793911442;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, P_h_s_3600h_6s)
{
	const double testEnthalpy = 3600;
	const double testEntropy = 6;
    const double pExp = 8.395519209E+01;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, P_h_s_3600h_7s)
{
	const double testEnthalpy = 3600;
	const double testEntropy = 7;
    const double pExp = 7.527161441;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, P_h_s_2800h_5d1s)
{
	const double testEnthalpy = 2800;
	const double testEntropy = 5.1;
    const double pExp = 9.439202060E+01;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, P_h_s_2800h_5d8s)
{
	const double testEnthalpy = 2800;
	const double testEntropy = 5.8;
    const double pExp = 8.414574124;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(AccTestsRegion2, P_h_s_3400h_5d8s)
{
	const double testEnthalpy = 3400;
	const double testEntropy = 5.8;
    const double pExp = 8.376903879E+01;

	double P = P_h_s_R2(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
