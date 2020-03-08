#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class AccTestsRegion5 : public AccTestBase {};

extern "C"
{
    DLL_IMPORT double v_P_T_R5(double,double);
	DLL_IMPORT double u_P_T_R5(double,double);
	DLL_IMPORT double s_P_T_R5(double,double);
	DLL_IMPORT double h_P_T_R5(double,double);
	DLL_IMPORT double cp_P_T_R5(double,double);
	DLL_IMPORT double cv_P_T_R5(double,double);
	DLL_IMPORT double w_P_T_R5(double,double);
}

//The data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 42 on page 40.

TEST_F(AccTestsRegion5, v_P_T_0d5MPa_1500K)
{
	const double P = 0.5;
	const double T = 1500;
    const double vExp = 0.138455090E+01;

	double v = v_P_T_R5(P,T);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion5, h_P_T_0d5MPa_1500K)
{
	const double P = 0.5;
	const double T = 1500;
    const double hExp = 0.521976855E+04;

	double h = h_P_T_R5(P,T);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion5, u_P_T_0d5MPa_1500K)
{
	const double P = 0.5;
	const double T = 1500;
    const double uExp = 0.452749310E+04;

	double u = u_P_T_R5(P,T);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion5, s_P_T_0d5MPa_1500K)
{
	const double P = 0.5;
	const double T = 1500;
    const double sExp = 0.965408875E+01;

	double s = s_P_T_R5(P,T);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion5, cp_P_T_0d5MPa_1500K)
{
	const double P = 0.5;
	const double T = 1500;
    const double cpExp = 0.261609445E+01;

	double cp = cp_P_T_R5(P,T);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion5, cv_P_T_0d5MPa_1500K)
{
	const double P = 0.5;
	const double T = 1500;
    const double cvExp = 2.15337783521;

	double cv = cv_P_T_R5(P,T);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion5, w_P_T_0d5MPa_1500K)
{
	const double P = 0.5;
	const double T = 1500;
    const double wExp = 0.917068690E+03;

	double w = w_P_T_R5(P,T);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion5, v_P_T_30MPa_1500K)
{
	const double P = 30;
	const double T = 1500;
    const double vExp = 0.230761299E-01;

	double v = v_P_T_R5(P,T);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion5, h_P_T_30MPa_1500K)
{
	const double P = 30;
	const double T = 1500;
    const double hExp = 0.516723514E+04;

	double h = h_P_T_R5(P,T);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion5, u_P_T_30MPa_1500K)
{
	const double P = 30;
	const double T = 1500;
    const double uExp = 0.447495124E+04;

	double u = u_P_T_R5(P,T);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion5, s_P_T_30MPa_1500K)
{
	const double P = 30;
	const double T = 1500;
    const double sExp = 0.772970133E+01;

	double s = s_P_T_R5(P,T);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion5, cp_P_T_30MPa_1500K)
{
	const double P = 30;
	const double T = 1500;
    const double cpExp = 0.272724317E+01;

	double cp = cp_P_T_R5(P,T);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion5, cv_P_T_30MPa_1500K)
{
	const double P = 30;
	const double T = 1500;
    const double cvExp = 2.192748293665;

	double cv = cv_P_T_R5(P,T);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion5, w_P_T_30MPa_1500K)
{
	const double P = 30;
	const double T = 1500;
    const double wExp = 0.928548002E+03;

	double w = w_P_T_R5(P,T);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
TEST_F(AccTestsRegion5, v_P_T_30MPa_2000K)
{
	const double P = 30;
	const double T = 2000;
    const double vExp = 0.311385219E-01;

	double v = v_P_T_R5(P,T);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(AccTestsRegion5, h_P_T_30MPa_2000K)
{
	const double P = 30;
	const double T = 2000;
    const double hExp = 0.657122604E+04;

	double h = h_P_T_R5(P,T);
	double hErr = AbsRelativeErr(h, hExp);
	bool hPass = IsAcceptable(hErr);
	ASSERT_TRUE(hPass);
}
TEST_F(AccTestsRegion5, u_P_T_30MPa_2000K)
{
	const double P = 30;
	const double T = 2000;
    const double uExp = 0.563707038E+04;

	double u = u_P_T_R5(P,T);
	double uErr = AbsRelativeErr(u, uExp);
	bool uPass = IsAcceptable(uErr);
	ASSERT_TRUE(uPass);
}
TEST_F(AccTestsRegion5, s_P_T_30MPa_2000K)
{
	const double P = 30;
	const double T = 2000;
    const double sExp = 0.853640523E+01;

	double s = s_P_T_R5(P,T);
	double sErr = AbsRelativeErr(s, sExp);
	bool sPass = IsAcceptable(sErr);
	ASSERT_TRUE(sPass);
}
TEST_F(AccTestsRegion5, cp_P_T_30MPa_2000K)
{
	const double P = 30;
	const double T = 2000;
    const double cpExp = 0.288569822E+01;

	double cp = cp_P_T_R5(P,T);
	double cpErr = AbsRelativeErr(cp, cpExp);
	bool cpPass = IsAcceptable(cpErr);
	ASSERT_TRUE(cpPass);
}
TEST_F(AccTestsRegion5, cv_P_T_30MPa_2000K)
{
	const double P = 30;
	const double T = 2000;
    const double cvExp = 2.395894362358;

	double cv = cv_P_T_R5(P,T);
	double cvErr = AbsRelativeErr(cv, cvExp);
	bool cvPass = IsAcceptable(cvErr);
	ASSERT_TRUE(cvPass);
}
TEST_F(AccTestsRegion5, w_P_T_30MPa_2000K)
{
	const double P = 30;
	const double T = 2000;
    const double wExp = 0.106736948E+04;

	double w = w_P_T_R5(P,T);
	double wErr = AbsRelativeErr(w, wExp);
	bool wPass = IsAcceptable(wErr);
	ASSERT_TRUE(wPass);
}
