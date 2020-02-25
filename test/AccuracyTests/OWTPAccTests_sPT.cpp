#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class OWTPAccTests_sPT : public AccTestBase { };

extern "C"
{
    DLL_IMPORT double s_P_T(double,double);
}

//Region 1

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 5 on page 9.

TEST_F(OWTPAccTests_sPT, s_P_T_300K_3MPa)
{
	const double testTemp = 300;
	const double testPressure = 3;
    const double sExp = 0.392294792;

	double s = s_P_T(testPressure, testTemp);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_sPT, s_P_T_300K_80MPa)
{
	const double testTemp = 300;
	const double testPressure = 80;
    const double sExp = 0.368563852;

	double s = s_P_T(testPressure, testTemp);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_sPT, s_P_T_500K_3MPa)
{
	const double testTemp = 500;
	const double testPressure = 3;
    const double sExp = 0.258041912E+01;

	double s = s_P_T(testPressure, testTemp);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}

//Region 2

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 15 on page 17.

TEST_F(OWTPAccTests_sPT, s_P_T_300K_0d0035MPa)
{
	const double testTemp = 300;
	const double testPressure = 0.0035;
    const double sExp = 0.852238967E+01;

	double s = s_P_T(testPressure, testTemp);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_sPT, s_P_T_700K_0d0035MPa)
{
	const double testTemp = 700;
	const double testPressure = 0.0035;
    const double sExp = 0.101749996E+02;

	double s = s_P_T(testPressure, testTemp);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_sPT, s_P_T_700K_30MPa)
{
	const double testTemp = 700;
	const double testPressure = 30;
    const double sExp = 0.517540298E+01;

	double s = s_P_T(testPressure, testTemp);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}

//Region 3

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 33 on page 32.

TEST_F(OWTPAccTests_sPT, s_P_T_0d255837018Ep02MPa_650K)
{
    const double press = 0.255837018E+02;
    const double temp = 650;
    const double sExp = 0.405427273E+01;

    double s = s_P_T(press,temp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_sPT, s_P_T_0d222930643Ep02MPa_650K)
{
    const double press = 0.222930643E+02;
    const double temp = 650;
    const double sExp = 0.485438792E+01;

    double s = s_P_T(press,temp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_sPT, s_P_T_0d783095639Ep02MPa_750K)
{
    const double press = 0.783095639E+02;
    const double temp = 750;
    const double sExp = 0.446971906E+01;

    double s = s_P_T(press,temp);
    double sErr = AbsRelativeErr(s, sExp);
    bool sPass = IsAcceptable(sErr);
    ASSERT_TRUE(sPass);
}

//Region 5

//The data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 42 on page 40.

TEST_F(OWTPAccTests_sPT, s_P_T_0d5MPa_1500K)
{
	const double P = 0.5;
	const double T = 1500;
    const double sExp = 0.965408875E+01;

	double s = s_P_T(P,T);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_sPT, s_P_T_30MPa_1500K)
{
	const double P = 30;
	const double T = 1500;
    const double sExp = 0.772970133E+01;

	double s = s_P_T(P,T);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(OWTPAccTests_sPT, s_P_T_30MPa_2000K)
{
	const double P = 30;
	const double T = 2000;
    const double sExp = 0.853640523E+01;

	double s = s_P_T(P,T);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
