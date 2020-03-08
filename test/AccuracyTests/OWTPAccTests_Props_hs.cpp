#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class OWTPAccTests_Props_hs : public AccTestBase { };

extern "C"
{
    DLL_IMPORT double T_h_s(double,double);
    DLL_IMPORT double P_h_s(double,double);
    DLL_IMPORT double v_h_s(double,double);
    DLL_IMPORT double u_h_s(double,double);
    DLL_IMPORT double cv_h_s(double,double);
    DLL_IMPORT double cp_h_s(double,double);
    DLL_IMPORT double w_h_s(double,double);
}

//Region 1:

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 5 on page 9.

TEST_F(OWTPAccTests_Props_hs, v_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double vExp = 0.100215168E-02;

	double v = v_h_s(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double uExp = 0.112324818E+03;

	double u = u_h_s(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double pExp = 3;

	double P = P_h_s(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double tExp = 300;

	double T = T_h_s(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_hs, cp_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double cpExp = 0.417301218E+01;

	double cp = cp_h_s(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_hs, cv_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double cvExp = 4.121201603587;

	double cv = cv_h_s(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_hs, w_h_s_0d115331273Ep03h_0d392294792s)
{
	const double testEnthalpy = 0.115331273E+03;
	const double testEntropy = 0.392294792;
    const double wExp = 0.150773921E+04;

	double w = w_h_s(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double vExp = 0.971180894E-03;

	double v = v_h_s(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double uExp = 0.106448356E+03;

	double u = u_h_s(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double pExp = 80;

	double P = P_h_s(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double tExp = 300;

	double T = T_h_s(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_hs, cp_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double cpExp = 0.401008987E+01;

	double cp = cp_h_s(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_hs, cv_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double cvExp = 3.917366061845;

	double cv = cv_h_s(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_hs, w_h_s_0d184142828Ep03h_0d368563852s)
{
	const double testEnthalpy = 0.184142828E+03;
	const double testEntropy = 0.368563852;
    const double wExp = 0.163469054E+04;

	double w = w_h_s(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double vExp = 0.120241800E-02;

	double v = v_h_s(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double uExp = 0.971934985E+03;

	double u = u_h_s(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double pExp = 3;

	double P = P_h_s(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double tExp = 500;

	double T = T_h_s(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_hs, cp_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double cpExp = 0.465580682E+01;

	double cp = cp_h_s(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_hs, cv_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double cvExp = 3.221392229028;

	double cv = cv_h_s(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_hs, w_h_s_0d975542239Ep03h_0d258041912Ep01s)
{
	const double testEnthalpy = 0.975542239E+03;
	const double testEntropy = 0.258041912E+01;
    const double wExp = 0.124071337E+04;

	double w = w_h_s(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

//Region 2:

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 15 on page 17.

TEST_F(OWTPAccTests_Props_hs, v_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double vExp = 0.394913866E+02;

	double v = v_h_s(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double uExp = 0.241169160E+04;

	double u = u_h_s(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double pExp = 0.0035;

	double P = P_h_s(testEnthalpy, testEntropy);
	double T = T_h_s(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double tExp = 300;

	double T = T_h_s(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_hs, cp_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double cpExp = 0.191300162E+01;

	double cp = cp_h_s(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_hs, cv_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double cvExp = 1.441326618975;

	double cv = cv_h_s(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_hs, w_h_s_0d254991145Ep04h_0d852238967Ep01s)
{
	const double testEnthalpy = 0.254991145E+04;
	const double testEntropy = 0.852238967E+01;
    const double wExp = 0.427920172E+03;

	double w = w_h_s(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double vExp = 0.923015898E+02;

	double v = v_h_s(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double uExp = 0.301262819E+04;

	double u = u_h_s(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double pExp = 0.0035;

	double P = P_h_s(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double tExp = 700;

	double T = T_h_s(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_hs, cp_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double cpExp = 0.208141274E+01;

	double cp = cp_h_s(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_hs, cv_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double cvExp = 1.6197833256;

	double cv = cv_h_s(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_hs, w_h_s_0d333568375Ep04h_0d101749996Ep02s)
{
	const double testEnthalpy = 0.333568375E+04;
	const double testEntropy = 0.101749996E+02;
    const double wExp = 0.644289068E+03;

	double w = w_h_s(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double vExp = 0.542946619E-02;

	double v = v_h_s(testEnthalpy, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double uExp = 0.246861076E+04;

	double u = u_h_s(testEnthalpy, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double pExp = 30;

	double P = P_h_s(testEnthalpy, testEntropy);
	double PErr = AbsRelativeErr(P, pExp);
	bool PPass = IsAcceptable(PErr);
	ASSERT_TRUE(PPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double tExp = 700;

	double T = T_h_s(testEnthalpy, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_hs, cp_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double cpExp = 0.103505092E+02;

	double cp = cp_h_s(testEnthalpy, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_hs, cv_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double cvExp = 2.975538368909;

	double cv = cv_h_s(testEnthalpy, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_hs, w_h_s_0d263149474Ep04h_0d517540298Ep01s)
{
	const double testEnthalpy = 0.263149474E+04;
	const double testEntropy = 0.517540298E+01;
    const double wExp = 0.480386523E+03;

	double w = w_h_s(testEnthalpy, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

//Region 3:

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 33 on page 32.

TEST_F(OWTPAccTests_Props_hs, P_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double pExp = 0.255837018E+02;
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;

    double pTest = P_h_s(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double vExp = 1.0/500.0;
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;

    double vTest = v_h_s(h,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double tExp = 650;
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;

    double tTest = T_h_s(h,s);
    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;
    const double uExp = 0.181226279E+04;

    double uTest = u_h_s(h,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, cv_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;
    const double cvExp = 3.191317871889;

    double uTest = u_h_s(h,s);
    double cvTest = cv_h_s(h,s);
    double cvErr = AbsRelativeErr(cvTest, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_hs, cp_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;
    const double cpExp = 0.138935717E+02;

    double cpTest = cp_h_s(h,s);
    double cpErr = AbsRelativeErr(cpTest, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_hs, w_h_s_0d186343019Ep04h_0d405427273Ep01s)
{
    const double h = 0.186343019E+04;
    const double s = 0.405427273E+01;
    const double wExp = 0.502005554E+03;

    double wTest = w_h_s(h,s);
    double wErr = AbsRelativeErr(wTest, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double pExp = 0.222930643E+02;
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;

    double pTest = P_h_s(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double vExp = 1.0/200.0;
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;

    double vTest = v_h_s(h,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double tExp = 650;
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;

    double tTest = T_h_s(h,s);
    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;
    const double uExp = 0.226365868E+04;

    double uTest = u_h_s(h,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, cv_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;
    const double cvExp = 4.04118075955;

    double cvTest = cv_h_s(h,s);
    double cvErr = AbsRelativeErr(cvTest, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_hs, cp_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;
    const double cpExp = 0.446579342E+02;

    double cpTest = cp_h_s(h,s);
    double cpErr = AbsRelativeErr(cpTest, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_hs, w_h_s_0d237512401Ep04h_0d485438792Ep01s)
{
    const double h = 0.237512401E+04;
    const double s = 0.485438792E+01;
    const double wExp = 0.383444594E+03;

    double wTest = w_h_s(h,s);
    double wErr = AbsRelativeErr(wTest, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double pExp = 0.783095639E+02;
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;

    double pTest = P_h_s(h,s);
    double pErr = AbsRelativeErr(pTest, pExp);
    bool pPass = IsAcceptable(pErr);
    ASSERT_TRUE(pPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    double vExp = 1.0/500.0;
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;

    double vTest = v_h_s(h,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double tExp = 750;
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;

    double tTest = T_h_s(h,s);
    double tErr = AbsRelativeErr(tTest, tExp);
    bool tPass = IsAcceptable(tErr);
    ASSERT_TRUE(tPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;
    const double uExp = 0.210206932E+04;

    double uTest = u_h_s(h,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, cv_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;
    const double cvExp = 2.71701677121;

    double cvTest = cv_h_s(h,s);
    double cvErr = AbsRelativeErr(cvTest, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_hs, cp_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;
    const double cpExp = 0.634165359E+01;

    double cpTest = cp_h_s(h,s);
    double cpErr = AbsRelativeErr(cpTest, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_hs, w_h_s_0d225868845Ep04h_0d446971906Ep01s)
{
    const double h = 0.225868845E+04;
    const double s = 0.446971906E+01;
    const double wExp = 0.760696041E+03;

    double wTest = w_h_s(h,s);
    double wErr = AbsRelativeErr(wTest, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}

//Region 4:

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised supplementary Release on Backward
//Equations p(h,s) for Region 3, Equations as a function of h and s for Region
//Boundaries, and an Equation Tsat(h,s) for Region 4 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in table 29 on page 31.

TEST_F(OWTPAccTests_Props_hs, T_h_s_1800h_5d3s)
{
    const double h = 1800;
    const double s = 5.3;
    const double TExp = 3.468475498E+02;

    double TTest = T_h_s(h,s);
    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_1800h_5d3s)
{
    const double h = 1800;
    const double s = 5.3;
    const double PExp = 0.0365398932;

    double PTest = P_h_s(h,s);
    double PErr = AbsRelativeErr(PTest, PExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_1800h_5d3s)
{
    const double h = 1800;
    const double s = 5.3;
    const double vExp = 2.78985639;

    double vTest = v_h_s(h,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_1800h_5d3s)
{
    const double h = 1800;
    const double s = 5.3;
    const double uExp = 1698.05895;

    double uTest = u_h_s(h,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_2400h_6d0s)
{
    const double h = 2400;
    const double s = 6.0;
    const double TExp = 4.251373305E+02;

    double TTest = T_h_s(h,s);
    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_2400h_6d0s)
{
    const double h = 2400;
    const double s = 6.0;
    const double PExp = 0.502008352;

    double PTest = P_h_s(h,s);
    double PErr = AbsRelativeErr(PTest, PExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_2400h_6d0s)
{
    const double h = 2400;
    const double s = 6.0;
    const double vExp = 0.311863568;

    double vTest = v_h_s(h,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_2400h_6d0s)
{
    const double h = 2400;
    const double s = 6.0;
    const double uExp = 2243.44188;

    double uTest = u_h_s(h,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_hs, T_h_s_2500h_5d5s)
{
    const double h = 2500;
    const double s = 5.5;
    const double TExp = 5.225579013E+02;

    double TTest = T_h_s(h,s);
    double TErr = AbsRelativeErr(TTest, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_hs, P_h_s_2500h_5d5s)
{
    const double h = 2500;
    const double s = 5.5;
    const double PExp = 3.93633491;

    double PTest = P_h_s(h,s);
    double PErr = AbsRelativeErr(PTest, PExp);
    bool PPass = IsAcceptable(PErr);
    ASSERT_TRUE(PPass);
}
TEST_F(OWTPAccTests_Props_hs, v_h_s_2500h_5d5s)
{
    const double h = 2500;
    const double s = 5.5;
    const double vExp = 0.0419539661;

    double vTest = v_h_s(h,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_hs, u_h_s_2500h_5d5s)
{
    const double h = 2500;
    const double s = 5.5;
    const double uExp = 2334.85514;

    double uTest = u_h_s(h,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
