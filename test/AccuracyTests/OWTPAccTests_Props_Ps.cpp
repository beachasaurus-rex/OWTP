#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class OWTPAccTests_Props_Ps : public AccTestBase { };

extern "C"
{
    DLL_IMPORT double T_P_s(double,double);
    DLL_IMPORT double v_P_s(double,double);
    DLL_IMPORT double h_P_s(double,double);
    DLL_IMPORT double u_P_s(double,double);
    DLL_IMPORT double cv_P_s(double,double);
    DLL_IMPORT double cp_P_s(double,double);
    DLL_IMPORT double w_P_s(double,double);
}

//Region 1:

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 5 on page 9.

TEST_F(OWTPAccTests_Props_Ps, v_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double vExp = 0.100215168E-02;

	double v = v_P_s(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double uExp = 0.112324818E+03;

	double u = u_P_s(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double hExp = 0.115331273E+03;

	double h = h_P_s(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double tExp = 300;

	double T = T_P_s(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, cp_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double cpExp = 0.417301218E+01;

	double cp = cp_P_s(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ps, cv_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double cvExp = 4.121201603587;

	double cv = cv_P_s(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ps, w_P_s_3MPa_0d392294792s)
{
	const double testPress = 3;
	const double testEntropy = 0.392294792;
    const double wExp = 0.150773921E+04;

	double w = w_P_s(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ps, v_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double vExp = 0.971180894E-03;

	double v = v_P_s(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double uExp = 0.106448356E+03;

	double u = u_P_s(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double hExp = 0.184142828E+03;

	double h = h_P_s(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double tExp = 300;

	double T = T_P_s(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, cp_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double cpExp = 0.401008987E+01;

	double cp = cp_P_s(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ps, cv_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double cvExp = 3.917366061845;

	double cv = cv_P_s(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ps, w_P_s_80MPa_0d368563852s)
{
	const double testPress = 80;
	const double testEntropy = 0.368563852;
    const double wExp = 0.163469054E+04;

	double w = w_P_s(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ps, v_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double vExp = 0.120241800E-02;

	double v = v_P_s(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double uExp = 0.971934985E+03;

	double u = u_P_s(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double hExp = 0.975542239E+03;

	double h = h_P_s(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double tExp = 500;

	double T = T_P_s(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, cp_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double cpExp = 0.465580682E+01;

	double cp = cp_P_s(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ps, cv_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double cvExp = 3.221392229028;

	double cv = cv_P_s(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ps, w_P_s_3MPa_0d258041912Ep01s)
{
	const double testPress = 3;
	const double testEntropy = 0.258041912E+01;
    const double wExp = 0.124071337E+04;

	double w = w_P_s(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

//Region 2:

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 15 on page 17.

TEST_F(OWTPAccTests_Props_Ps, v_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double vExp = 0.394913866E+02;

	double v = v_P_s(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double uExp = 0.241169160E+04;

	double u = u_P_s(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double hExp = 0.254991145E+04;

	double h = h_P_s(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double tExp = 300;

	double T = T_P_s(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, cp_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double cpExp = 0.191300162E+01;

	double cp = cp_P_s(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ps, cv_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double cvExp = 1.441326618975;

	double cv = cv_P_s(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ps, w_P_s_0d0035MPa_0d852238967Ep01s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.852238967E+01;
    const double wExp = 0.427920172E+03;

	double w = w_P_s(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ps, v_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double vExp = 0.923015898E+02;

	double v = v_P_s(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double uExp = 0.301262819E+04;

	double u = u_P_s(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double hExp = 0.333568375E+04;

	double h = h_P_s(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double tExp = 700;

	double T = T_P_s(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, cp_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double cpExp = 0.208141274E+01;

	double cp = cp_P_s(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ps, cv_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double cvExp = 1.6197833256;

	double cv = cv_P_s(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ps, w_P_s_0d0035MPa_0d101749996Ep02s)
{
	const double testPress = 0.0035;
	const double testEntropy = 0.101749996E+02;
    const double wExp = 0.644289068E+03;

	double w = w_P_s(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ps, v_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double vExp = 0.542946619E-02;

	double v = v_P_s(testPress, testEntropy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double uExp = 0.246861076E+04;

	double u = u_P_s(testPress, testEntropy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double hExp = 0.263149474E+04;

	double h = h_P_s(testPress, testEntropy);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double tExp = 700;

	double T = T_P_s(testPress, testEntropy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, cp_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double cpExp = 0.103505092E+02;

	double cp = cp_P_s(testPress, testEntropy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ps, cv_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double cvExp = 2.975538368909;

	double cv = cv_P_s(testPress, testEntropy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ps, w_P_s_30MPa_0d517540298Ep01s)
{
	const double testPress = 30;
	const double testEntropy = 0.517540298E+01;
    const double wExp = 0.480386523E+03;

	double w = w_P_s(testPress, testEntropy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

//Region 3:

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 33 on page 32.

TEST_F(OWTPAccTests_Props_Ps, v_P_s_0d255837018Ep02MPa_0d405427273Ep01s)
{
    const double press = 0.255837018E+02;
    const double entr = 0.405427273E+01;
    const double vExp = 1.0/500.0;

    double v = v_P_s(press,entr);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_0d255837018Ep02MPa_0d405427273Ep01s)
{
    const double press = 0.255837018E+02;
    const double entr = 0.405427273E+01;
    const double uExp = 0.181226279E+04;

    double u = u_P_s(press,entr);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_0d255837018Ep02MPa_0d405427273Ep01s)
{
    const double press = 0.255837018E+02;
    const double entr = 0.405427273E+01;
    const double hExp = 1863.43258;

    double h = h_P_s(press,entr);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_0d255837018Ep02MPa_0d405427273Ep01s)
{
    const double press = 0.255837018E+02;
    const double entr = 0.405427273E+01;
    const double TExp = 650;

    double T = T_P_s(press,entr);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, cp_P_s_0d255837018Ep02MPa_0d405427273Ep01s)
{
    const double press = 0.255837018E+02;
    const double entr = 0.405427273E+01;
    const double cpExp = 0.138935717E+02;

    double cp = cp_P_s(press,entr);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ps, cv_P_s_0d255837018Ep02MPa_0d405427273Ep01s)
{
    const double press = 0.255837018E+02;
    const double entr = 0.405427273E+01;
    const double cvExp = 3.191317871889;

    double cv = cv_P_s(press,entr);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ps, w_P_s_0d255837018Ep02MPa_0d405427273Ep01s)
{
    const double press = 0.255837018E+02;
    const double entr = 0.405427273E+01;
    const double wExp = 0.502005554E+03;

    double w = w_P_s(press,entr);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ps, v_P_s_0d222930643Ep02MPa_0d485438792Ep01s)
{
    const double press = 0.222930643E+02;
    const double entr = 0.485438792E+01;
    const double vExp = 1.0/200.0;

    double v = v_P_s(press,entr);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_0d222930643Ep02MPa_0d485438792Ep01s)
{
    const double press = 0.222930643E+02;
    const double entr = 0.485438792E+01;
    const double uExp = 0.226365868E+04;

    double u = u_P_s(press,entr);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_0d222930643Ep02MPa_0d485438792Ep01s)
{
    const double press = 0.222930643E+02;
    const double entr = 0.485438792E+01;
    const double hExp = 0.237512401E+04;

    double h = h_P_s(press,entr);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_0d222930643Ep02MPa_0d485438792Ep01s)
{
    const double press = 0.222930643E+02;
    const double entr = 0.485438792E+01;
    const double TExp = 650;

    double T = T_P_s(press,entr);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, cp_P_s_0d222930643Ep02MPa_0d485438792Ep01s)
{
    const double press = 0.222930643E+02;
    const double entr = 0.485438792E+01;
    const double cpExp = 0.446579342E+02;

    double cp = cp_P_s(press,entr);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ps, cv_P_s_0d222930643Ep02MPa_0d485438792Ep01s)
{
    const double press = 0.222930643E+02;
    const double entr = 0.485438792E+01;
    const double cvExp = 4.04118075955;

    double cv = cv_P_s(press,entr);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ps, w_P_s_0d222930643Ep02MPa_0d485438792Ep01s)
{
    const double press = 0.222930643E+02;
    const double entr = 0.485438792E+01;
    const double wExp = 0.383444594E+03;

    double w = w_P_s(press,entr);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ps, v_P_s_0d783095639Ep02MPa_0d446971906Ep01s)
{
    const double press = 0.783095639E+02;
    const double entr = 0.446971906E+01;
    const double vExp = 1.0/500.0;

    double v = v_P_s(press,entr);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_0d783095639Ep02MPa_0d446971906Ep01s)
{
    const double press = 0.783095639E+02;
    const double entr = 0.446971906E+01;
    const double uExp = 0.210206932E+04;

    double u = u_P_s(press,entr);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_0d783095639Ep02MPa_0d446971906Ep01s)
{
    const double press = 0.783095639E+02;
    const double entr = 0.446971906E+01;
    const double hExp = 2258.68926;

    double h = h_P_s(press,entr);
    double hErr = AbsRelativeErr(h, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_0d783095639Ep02MPa_0d446971906Ep01s)
{
    const double press = 0.783095639E+02;
    const double entr = 0.446971906E+01;
    const double TExp = 750;

    double T = T_P_s(press,entr);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, cp_P_s_0d783095639Ep02MPa_0d446971906Ep01s)
{
    const double press = 0.783095639E+02;
    const double entr = 0.446971906E+01;
    const double cpExp = 0.634165359E+01;

    double cp = cp_P_s(press,entr);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ps, cv_P_s_0d783095639Ep02MPa_0d446971906Ep01s)
{
    const double press = 0.783095639E+02;
    const double entr = 0.446971906E+01;
    const double cvExp = 2.71701677121;

    double cv = cv_P_s(press,entr);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ps, w_P_s_0d783095639Ep02MPa_0d446971906Ep01s)
{
    const double press = 0.783095639E+02;
    const double entr = 0.446971906E+01;
    const double wExp = 0.760696041E+03;

    double w = w_P_s(press,entr);
    double wErr = AbsRelativeErr(w, wExp);
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

TEST_F(OWTPAccTests_Props_Ps, T_P_s_0d0365398932MPa_5d3s)
{
    const double P = 0.0365398932;
    const double s = 5.3;
    const double TExp = 346.847550;

    double T = T_P_s(P,s);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, v_P_s_0d0365398932MPa_5d3s)
{
    const double P = 0.0365398932;
    const double s = 5.3;
    const double vExp = 2.78985639;

    double vTest = v_P_s(P,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_0d0365398932MPa_5d3s)
{
    const double P = 0.0365398932;
    const double s = 5.3;
    const double hExp = 1800;

    double hTest = h_P_s(P,s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_0d0365398932MPa_5d3s)
{
    const double P = 0.0365398932;
    const double s = 5.3;
    const double uExp = 1698.05895;

    double uTest = u_P_s(P,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_0d502008352MPa_6d0s)
{
    const double P = 0.502008352;
    const double s = 6.0;
    const double TExp = 425.137331;

    double T = T_P_s(P,s);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, v_P_s_0d502008352MPa_6d0s)
{
    const double P = 0.502008352;
    const double s = 6.0;
    const double vExp = 0.311863568;

    double vTest = v_P_s(P,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_0d502008352MPa_6d0s)
{
    const double P = 0.502008352;
    const double s = 6.0;
    const double hExp = 2400;

    double hTest = h_P_s(P,s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_0d502008352MPa_6d0s)
{
    const double P = 0.502008352;
    const double s = 6.0;
    const double uExp = 2243.44188;

    double uTest = u_P_s(P,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ps, T_P_s_3d93633491MPa_5d5s)
{
    const double P = 3.93633491;
    const double s = 5.5;
    const double TExp = 522.557901;

    double T = T_P_s(P,s);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ps, v_P_s_3d93633491MPa_5d5s)
{
    const double P = 3.93633491;
    const double s = 5.5;
    const double vExp = 0.0419539661;

    double vTest = v_P_s(P,s);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ps, h_P_s_3d93633491MPa_5d5s)
{
    const double P = 3.93633491;
    const double s = 5.5;
    const double hExp = 2500;

    double hTest = h_P_s(P,s);
    double hErr = AbsRelativeErr(hTest, hExp);
    bool hPass = IsAcceptable(hErr);
    ASSERT_TRUE(hPass);
}
TEST_F(OWTPAccTests_Props_Ps, u_P_s_3d93633491MPa_5d5s)
{
    const double P = 3.93633491;
    const double s = 5.5;
    const double uExp = 2334.85514;

    double uTest = u_P_s(P,s);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
