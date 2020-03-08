#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class OWTPAccTests_Props_Ph : public AccTestBase { };

extern "C"
{
    DLL_IMPORT double T_P_h(double,double);
    DLL_IMPORT double v_P_h(double,double);
    DLL_IMPORT double s_P_h(double,double);
    DLL_IMPORT double u_P_h(double,double);
    DLL_IMPORT double cv_P_h(double,double);
    DLL_IMPORT double cp_P_h(double,double);
    DLL_IMPORT double w_P_h(double,double);
}

//Region 1:

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 5 on page 9.

TEST_F(OWTPAccTests_Props_Ph, v_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double vExp = 0.100215168E-02;

	double v = v_P_h(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double uExp = 0.112324818E+03;

	double u = u_P_h(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double sExp = 0.392294792;

	double s = s_P_h(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double tExp = 300;

	double T = T_P_h(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, cp_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double cpExp = 0.417301218E+01;

	double cp = cp_P_h(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ph, cv_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double cvExp = 4.121201603587;

	double cv = cv_P_h(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ph, w_P_h_3MPa_0d115331273Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.115331273E+03;
    const double wExp = 0.150773921E+04;

	double w = w_P_h(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ph, v_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double vExp = 0.971180894E-03;

	double v = v_P_h(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double uExp = 0.106448356E+03;

	double u = u_P_h(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double sExp = 0.368563852;

	double s = s_P_h(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double tExp = 300;

	double T = T_P_h(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, cp_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double cpExp = 0.401008987E+01;

	double cp = cp_P_h(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ph, cv_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double cvExp = 3.917366061845;

	double cv = cv_P_h(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ph, w_P_h_80MPa_0d184142828Ep03h)
{
	const double testPress = 80;
	const double testEnthalpy = 0.184142828E+03;
    const double wExp = 0.163469054E+04;

	double w = w_P_h(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ph, v_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double vExp = 0.120241800E-02;

	double v = v_P_h(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double uExp = 0.971934985E+03;

	double u = u_P_h(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double sExp = 0.258041912E+01;

	double s = s_P_h(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double tExp = 500;

	double T = T_P_h(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, cp_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double cpExp = 0.465580682E+01;

	double cp = cp_P_h(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ph, cv_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double cvExp = 3.221392229028;

	double cv = cv_P_h(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ph, w_P_h_3MPa_0d975542239Ep03h)
{
	const double testPress = 3;
	const double testEnthalpy = 0.975542239E+03;
    const double wExp = 0.124071337E+04;

	double w = w_P_h(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

//Region 2:

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 15 on page 17.

TEST_F(OWTPAccTests_Props_Ph, v_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double vExp = 0.394913866E+02;

	double v = v_P_h(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double uExp = 0.241169160E+04;

	double u = u_P_h(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double sExp = 0.852238967E+01;

	double s = s_P_h(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double tExp = 300;

	double T = T_P_h(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, cp_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double cpExp = 0.191300162E+01;

	double cp = cp_P_h(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ph, cv_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double cvExp = 1.441326618975;

	double cv = cv_P_h(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ph, w_P_h_0d0035MPa_0d254991145Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.254991145E+04;
    const double wExp = 0.427920172E+03;

	double w = w_P_h(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ph, v_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double vExp = 0.923015898E+02;

	double v = v_P_h(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double uExp = 0.301262819E+04;

	double u = u_P_h(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double sExp = 0.101749996E+02;

	double s = s_P_h(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double tExp = 700;

	double T = T_P_h(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, cp_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double cpExp = 0.208141274E+01;

	double cp = cp_P_h(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ph, cv_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double cvExp = 1.6197833256;

	double cv = cv_P_h(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ph, w_P_h_0d0035MPa_0d333568375Ep04h)
{
	const double testPress = 0.0035;
	const double testEnthalpy = 0.333568375E+04;
    const double wExp = 0.644289068E+03;

	double w = w_P_h(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ph, v_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double vExp = 0.542946619E-02;

	double v = v_P_h(testPress, testEnthalpy);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double uExp = 0.246861076E+04;

	double u = u_P_h(testPress, testEnthalpy);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double sExp = 0.517540298E+01;

	double s = s_P_h(testPress, testEnthalpy);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double tExp = 700;

	double T = T_P_h(testPress, testEnthalpy);
	double TErr = AbsRelativeErr(T, tExp);
	bool TPass = IsAcceptable(TErr);
	ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, cp_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double cpExp = 0.103505092E+02;

	double cp = cp_P_h(testPress, testEnthalpy);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ph, cv_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double cvExp = 2.975538368909;

	double cv = cv_P_h(testPress, testEnthalpy);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ph, w_P_h_30MPa_0d263149474Ep04h)
{
	const double testPress = 30;
	const double testEnthalpy = 0.263149474E+04;
    const double wExp = 0.480386523E+03;

	double w = w_P_h(testPress, testEnthalpy);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}

//Region 3:

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 33 on page 32.

TEST_F(OWTPAccTests_Props_Ph, v_P_h_0d255837018Ep02MPa_1863d43258h)
{
    const double press = 0.255837018E+02;
    const double enth = 1863.43258;
    const double vExp = 1.0/500.0;

    double v = v_P_h(press,enth);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_0d255837018Ep02MPa_1863d43258h)
{
    const double press = 0.255837018E+02;
    const double enth = 1863.43258;
    const double uExp = 0.181226279E+04;

    double u = u_P_h(press,enth);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_0d255837018Ep02MPa_1863d43258h)
{
    const double press = 0.255837018E+02;
    const double enth = 1863.43258;
    const double sExp = 0.405427273E+01;

    double s = s_P_h(press,enth);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_0d255837018Ep02MPa_1863d43258h)
{
    const double press = 0.255837018E+02;
    const double enth = 1863.43258;
    const double TExp = 650;

    double T = T_P_h(press,enth);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, cp_P_h_0d255837018Ep02MPa_1863d43258h)
{
    const double press = 0.255837018E+02;
    const double enth = 1863.43258;
    const double cpExp = 0.138935717E+02;

    double cp = cp_P_h(press,enth);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ph, cv_P_h_0d255837018Ep02MPa_1863d43258h)
{
    const double press = 0.255837018E+02;
    const double enth = 1863.43258;
    const double cvExp = 3.191317871889;

    double cv = cv_P_h(press,enth);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ph, w_P_h_0d255837018Ep02MPa_1863d43258h)
{
    const double press = 0.255837018E+02;
    const double enth = 1863.43258;
    const double wExp = 0.502005554E+03;

    double w = w_P_h(press,enth);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ph, v_P_h_0d222930643Ep02MPa_2375d12394h)
{
    const double press = 0.222930643E+02;
    const double enth = 2375.12394;
    const double vExp = 1.0/200.0;

    double v = v_P_h(press,enth);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_0d222930643Ep02MPa_2375d12394h)
{
    const double press = 0.222930643E+02;
    const double enth = 2375.12394;
    const double uExp = 0.226365868E+04;

    double u = u_P_h(press,enth);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_0d222930643Ep02MPa_2375d12394h)
{
    const double press = 0.222930643E+02;
    const double enth = 2375.12394;
    const double sExp = 0.485438792E+01;

    double s = s_P_h(press,enth);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_0d222930643Ep02MPa_2375d12394h)
{
    const double press = 0.222930643E+02;
    const double enth = 2375.12394;
    const double TExp = 650;

    double T = T_P_h(press,enth);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, cp_P_h_0d222930643Ep02MPa_2375d12394h)
{
    const double press = 0.222930643E+02;
    const double enth = 2375.12394;
    const double cpExp = 0.446579342E+02;

    double cp = cp_P_h(press,enth);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ph, cv_P_h_0d222930643Ep02MPa_2375d12394h)
{
    const double press = 0.222930643E+02;
    const double enth = 2375.12394;
    const double cvExp = 4.04118075955;

    double cv = cv_P_h(press,enth);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ph, w_P_h_0d222930643Ep02MPa_2375d12394h)
{
    const double press = 0.222930643E+02;
    const double enth = 2375.12394;
    const double wExp = 0.383444594E+03;

    double w = w_P_h(press,enth);
    double wErr = AbsRelativeErr(w, wExp);
    bool wPass = IsAcceptable(wErr);
    ASSERT_TRUE(wPass);
}
TEST_F(OWTPAccTests_Props_Ph, v_P_h_0d783095639Ep02MPa_2258d68926h)
{
    const double press = 0.783095639E+02;
    const double enth = 2258.68926;
    const double vExp = 1.0/500.0;

    double v = v_P_h(press,enth);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_0d783095639Ep02MPa_2258d68926h)
{
    const double press = 0.783095639E+02;
    const double enth = 2258.68926;
    const double uExp = 0.210206932E+04;

    double u = u_P_h(press,enth);
    double uErr = AbsRelativeErr(u, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_0d783095639Ep02MPa_2258d68926h)
{
    const double press = 0.783095639E+02;
    const double enth = 2258.68926;
    const double sExp = 0.446971906E+01;

    double s = s_P_h(press,enth);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_0d783095639Ep02MPa_2258d68926h)
{
    const double press = 0.783095639E+02;
    const double enth = 2258.68926;
    const double TExp = 750;

    double T = T_P_h(press,enth);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, cp_P_h_0d783095639Ep02MPa_2258d68926h)
{
    const double press = 0.783095639E+02;
    const double enth = 2258.68926;
    const double cpExp = 0.634165359E+01;

    double cp = cp_P_h(press,enth);
    double cpErr = AbsRelativeErr(cp, cpExp);
    bool cpPass = IsAcceptable(cpErr);
    ASSERT_TRUE(cpPass);
}
TEST_F(OWTPAccTests_Props_Ph, cv_P_h_0d783095639Ep02MPa_2258d68926h)
{
    const double press = 0.783095639E+02;
    const double enth = 2258.68926;
    const double cvExp = 2.71701677121;

    double cv = cv_P_h(press,enth);
    double cvErr = AbsRelativeErr(cv, cvExp);
    bool cvPass = IsAcceptable(cvErr);
    ASSERT_TRUE(cvPass);
}
TEST_F(OWTPAccTests_Props_Ph, w_P_h_0d783095639Ep02MPa_2258d68926h)
{
    const double press = 0.783095639E+02;
    const double enth = 2258.68926;
    const double wExp = 0.760696041E+03;

    double w = w_P_h(press,enth);
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

TEST_F(OWTPAccTests_Props_Ph, T_P_h_0d0365398932MPa_1800h)
{
    const double P = 0.0365398932;
    const double h = 1800;
    const double TExp = 346.847550;

    double T = T_P_h(P,h);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, v_P_h_0d0365398932MPa_1800h)
{
    const double P = 0.0365398932;
    const double h = 1800;
    const double vExp = 2.78985639;

    double vTest = v_P_h(P,h);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_0d0365398932MPa_1800h)
{
    const double P = 0.0365398932;
    const double h = 1800;
    const double sExp = 5.3;

    double sTest = s_P_h(P,h);
    double sErr = AbsRelativeErr(sTest, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_0d0365398932MPa_1800h)
{
    const double P = 0.0365398932;
    const double h = 1800;
    const double uExp = 1698.05895;

    double uTest = u_P_h(P,h);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_0d502008352MPa_2400h)
{
    const double P = 0.502008352;
    const double h = 2400;
    const double TExp = 425.137331;

    double T = T_P_h(P,h);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, v_P_h_0d502008352MPa_2400h)
{
    const double P = 0.502008352;
    const double h = 2400;
    const double vExp = 0.311863568;

    double vTest = v_P_h(P,h);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_0d502008352MPa_2400h)
{
    const double P = 0.502008352;
    const double h = 2400;
    const double sExp = 6.0;

    double sTest = s_P_h(P,h);
    double sErr = AbsRelativeErr(sTest, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_0d502008352MPa_2400h)
{
    const double P = 0.502008352;
    const double h = 2400;
    const double uExp = 2243.44188;

    double uTest = u_P_h(P,h);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_3d93633491MPa_2500h)
{
    const double P = 3.93633491;
    const double h = 2500;
    const double TExp = 522.557901;

    double T = T_P_h(P,h);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, v_P_h_3d93633491MPa_2500h)
{
    const double P = 3.93633491;
    const double h = 2500;
    const double vExp = 0.0419539661;

    double vTest = v_P_h(P,h);
    double vErr = AbsRelativeErr(vTest, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_Props_Ph, s_P_h_3d93633491MPa_2500h)
{
    const double P = 3.93633491;
    const double h = 2500;
    const double sExp = 5.5;

    double sTest = s_P_h(P,h);
    double sErr = AbsRelativeErr(sTest, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_Props_Ph, u_P_h_3d93633491MPa_2500h)
{
    const double P = 3.93633491;
    const double h = 2500;
    const double uExp = 2334.85514;

    double uTest = u_P_h(P,h);
    double uErr = AbsRelativeErr(uTest, uExp);
    bool uPass = IsAcceptable(uErr);
    ASSERT_TRUE(uPass);
}
