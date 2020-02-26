#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class OWTPAccTests_Props_Ph : public AccTestBase { };

extern "C"
{
    DLL_IMPORT double T_P_h(double,double);
}

//Region 1:

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 5 on page 9.

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

//Region 2:

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 15 on page 17.

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

//Region 3:

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 33 on page 32.

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

//Region 4:

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised supplementary Release on Backward
//Equations p(h,s) for Region 3, Equations as a function of h and s for Region
//Boundaries, and an Equation Tsat(h,s) for Region 4 of the IAPWS Industrial
//Formulation 1997 for the Thermodynamic Properties of Water and Steam"
//in table 29 on page 31.

TEST_F(OWTPAccTests_Props_Ph, T_P_h_0d0365398932MPa_1800h)
{
    const double press = 0.0365398932;
    const double enth = 1800;
    const double TExp = 346.847550;

    double T = T_P_h(press,enth);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_0d502008352MPa_2400h)
{
    const double press = 0.502008352;
    const double enth = 2400;
    const double TExp = 425.137331;

    double T = T_P_h(press,enth);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
TEST_F(OWTPAccTests_Props_Ph, T_P_h_3d93633491MPa_2500h)
{
    const double press = 3.93633491;
    const double enth = 2500;
    const double TExp = 522.557901;

    double T = T_P_h(press,enth);
    double TErr = AbsRelativeErr(T, TExp);
    bool TPass = IsAcceptable(TErr);
    ASSERT_TRUE(TPass);
}
