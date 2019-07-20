using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace WaterThermodynamicProperties.Tests.AccuracyTests
{
    [TestClass]
    public class Region2AccTests : AccuracyTestBase
    {
        //The temperature and pressure data points for Region1 were 
        //suggested by the IAPWS in "Revised Release on IAPWS
        //Inductrial Formulation 1997 for the Thermodynamic
        //Properties of Water and Steam" in Table 15 on page 17.

        [TestMethod]
        public void Properties_as_functions_of_temperature_pressure_Region2_300K_0_0035MPa()
        {
            //K
            double testTemp = 300;
            //kPa
            double testPressure = 0.0035 * 1000;

            double v = Imports.v_T_P_R2(testTemp, testPressure);
            double u = Imports.u_T_P_R2(testTemp, testPressure);
            double s = Imports.s_T_P_R2(testTemp, testPressure);
            double h = Imports.h_T_P_R2(testTemp, testPressure);
            double cp = Imports.cp_T_P_R2(testTemp, testPressure);
            double cv = Imports.cv_T_P_R2(testTemp, testPressure);
            double w = Imports.w_T_P_R2(testTemp, testPressure);

            double vErr = CalcAbsRelativeError(v, 0.394913866E+02);
            double uErr = CalcAbsRelativeError(u, 0.241169160E+04);
            double sErr = CalcAbsRelativeError(s, 0.852238967E+01);
            double hErr = CalcAbsRelativeError(h, 0.254991145E+04);
            double cpErr = CalcAbsRelativeError(cp, 0.191300162E+01);
            double cvErr = CalcAbsRelativeError(cv, 1.441326618975);
            double wErr = CalcAbsRelativeError(w, 0.427920172E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool hPass = IsAcceptable(hErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_temperature_pressure_Region2_700K_0_0035MPa()
        {
            //K
            double testTemp = 700;
            //kPa
            double testPressure = 0.0035 * 1000;

            double v = Imports.v_T_P_R2(testTemp, testPressure);
            double u = Imports.u_T_P_R2(testTemp, testPressure);
            double s = Imports.s_T_P_R2(testTemp, testPressure);
            double h = Imports.h_T_P_R2(testTemp, testPressure);
            double cp = Imports.cp_T_P_R2(testTemp, testPressure);
            double cv = Imports.cv_T_P_R2(testTemp, testPressure);
            double w = Imports.w_T_P_R2(testTemp, testPressure);

            double vErr = CalcAbsRelativeError(v, 0.923015898E+02);
            double uErr = CalcAbsRelativeError(u, 0.301262819E+04);
            double sErr = CalcAbsRelativeError(s, 0.101749996E+02);
            double hErr = CalcAbsRelativeError(h, 0.333568375E+04);
            double cpErr = CalcAbsRelativeError(cp, 0.208141274E+01);
            double cvErr = CalcAbsRelativeError(cv, 1.6197833256);
            double wErr = CalcAbsRelativeError(w, 0.644289068E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool hPass = IsAcceptable(hErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_temperature_pressure_Region2_700K_30MPa()
        {
            //K
            double testTemp = 700;
            //kPa
            double testPressure = 30 * 1000;

            double v = Imports.v_T_P_R2(testTemp, testPressure);
            double u = Imports.u_T_P_R2(testTemp, testPressure);
            double s = Imports.s_T_P_R2(testTemp, testPressure);
            double h = Imports.h_T_P_R2(testTemp, testPressure);
            double cp = Imports.cp_T_P_R2(testTemp, testPressure);
            double cv = Imports.cv_T_P_R2(testTemp, testPressure);
            double w = Imports.w_T_P_R2(testTemp, testPressure);

            double vErr = CalcAbsRelativeError(v, 0.542946619E-02);
            double uErr = CalcAbsRelativeError(u, 0.246861076E+04);
            double sErr = CalcAbsRelativeError(s, 0.517540298E+01);
            double hErr = CalcAbsRelativeError(h, 0.263149474E+04);
            double cpErr = CalcAbsRelativeError(cp, 0.103505092E+02);
            double cvErr = CalcAbsRelativeError(cv, 2.975538368909);
            double wErr = CalcAbsRelativeError(w, 0.480386523E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool hPass = IsAcceptable(hErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }

        [TestMethod]
        public void Properties_as_functions_of_pressure_enthalpy_Region2_h_at_300K_0_0035MPa()
        {
            //kPa
            double testPress = 0.0035 * 1000;
            //kJ / kg
            double testEnthalpy = 0.254991145E+04;

            double v = Imports.v_P_h_R2(testPress, testEnthalpy);
            double u = Imports.u_P_h_R2(testPress, testEnthalpy);
            double s = Imports.s_P_h_R2(testPress, testEnthalpy);
            double T = Imports.T_P_h_R2(testPress, testEnthalpy);
            double cp = Imports.cp_P_h_R2(testPress, testEnthalpy);
            double cv = Imports.cv_P_h_R2(testPress, testEnthalpy);
            double w = Imports.w_P_h_R2(testPress, testEnthalpy);

            double vErr = CalcAbsRelativeError(v, 0.394913866E+02);
            double uErr = CalcAbsRelativeError(u, 0.241169160E+04);
            double sErr = CalcAbsRelativeError(s, 0.852238967E+01);
            double TErr = CalcAbsRelativeError(T, 300);
            double cpErr = CalcAbsRelativeError(cp, 0.191300162E+01);
            double cvErr = CalcAbsRelativeError(cv, 1.441326618975);
            double wErr = CalcAbsRelativeError(w, 0.427920172E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool TPass = IsAcceptable(TErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(TPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_pressure_enthalpy_Region2_h_at_700K_0_0035MPa()
        {
            //kPa
            double testPress = 0.0035 * 1000;
            //kJ / kg
            double testEnthalpy = 0.333568375E+04;

            double v = Imports.v_P_h_R2(testPress, testEnthalpy);
            double u = Imports.u_P_h_R2(testPress, testEnthalpy);
            double s = Imports.s_P_h_R2(testPress, testEnthalpy);
            double T = Imports.T_P_h_R2(testPress, testEnthalpy);
            double cp = Imports.cp_P_h_R2(testPress, testEnthalpy);
            double cv = Imports.cv_P_h_R2(testPress, testEnthalpy);
            double w = Imports.w_P_h_R2(testPress, testEnthalpy);

            double vErr = CalcAbsRelativeError(v, 0.923015898E+02);
            double uErr = CalcAbsRelativeError(u, 0.301262819E+04);
            double sErr = CalcAbsRelativeError(s, 0.101749996E+02);
            double TErr = CalcAbsRelativeError(T, 700);
            double cpErr = CalcAbsRelativeError(cp, 0.208141274E+01);
            double cvErr = CalcAbsRelativeError(cv, 1.6197833256);
            double wErr = CalcAbsRelativeError(w, 0.644289068E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool TPass = IsAcceptable(TErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(TPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_pressure_enthalpy_Region2_h_at_700K_30MPa()
        {
            //kPa
            double testPress = 30 * 1000;
            //kJ / kg
            double testEnthalpy = 0.263149474E+04;

            double v = Imports.v_P_h_R2(testPress, testEnthalpy);
            double u = Imports.u_P_h_R2(testPress, testEnthalpy);
            double s = Imports.s_P_h_R2(testPress, testEnthalpy);
            double T = Imports.T_P_h_R2(testPress, testEnthalpy);
            double cp = Imports.cp_P_h_R2(testPress, testEnthalpy);
            double cv = Imports.cv_P_h_R2(testPress, testEnthalpy);
            double w = Imports.w_P_h_R2(testPress, testEnthalpy);

            double vErr = CalcAbsRelativeError(v, 0.542946619E-02);
            double uErr = CalcAbsRelativeError(u, 0.246861076E+04);
            double sErr = CalcAbsRelativeError(s, 0.517540298E+01);
            double TErr = CalcAbsRelativeError(T, 700);
            double cpErr = CalcAbsRelativeError(cp, 0.103505092E+02);
            double cvErr = CalcAbsRelativeError(cv, 2.975538368909);
            double wErr = CalcAbsRelativeError(w, 0.480386523E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool TPass = IsAcceptable(TErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(TPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }

        [TestMethod]
        public void Properties_as_functions_of_pressure_entropy_Region2_s_at_300K_0_0035MPa()
        {
            //kPa
            double testPress = 0.0035 * 1000;
            //kJ / (kg * K)
            double testEntropy = 0.852238967E+01;

            double v = Imports.v_P_s_R2(testPress, testEntropy);
            double u = Imports.u_P_s_R2(testPress, testEntropy);
            double h = Imports.h_P_s_R2(testPress, testEntropy);
            double T = Imports.T_P_s_R2(testPress, testEntropy);
            double cp = Imports.cp_P_s_R2(testPress, testEntropy);
            double cv = Imports.cv_P_s_R2(testPress, testEntropy);
            double w = Imports.w_P_s_R2(testPress, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.394913866E+02);
            double uErr = CalcAbsRelativeError(u, 0.241169160E+04);
            double hErr = CalcAbsRelativeError(h, 0.254991145E+04);
            double TErr = CalcAbsRelativeError(T, 300);
            double cpErr = CalcAbsRelativeError(cp, 0.191300162E+01);
            double cvErr = CalcAbsRelativeError(cv, 1.441326618975);
            double wErr = CalcAbsRelativeError(w, 0.427920172E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool hPass = IsAcceptable(hErr);
            bool TPass = IsAcceptable(TErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(TPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_pressure_entropy_Region2_s_at_700K_0_0035MPa()
        {
            //kPa
            double testPress = 0.0035 * 1000;
            //kJ / (kg * K)
            double testEntropy = 0.101749996E+02;

            double v = Imports.v_P_s_R2(testPress, testEntropy);
            double u = Imports.u_P_s_R2(testPress, testEntropy);
            double h = Imports.h_P_s_R2(testPress, testEntropy);
            double T = Imports.T_P_s_R2(testPress, testEntropy);
            double cp = Imports.cp_P_s_R2(testPress, testEntropy);
            double cv = Imports.cv_P_s_R2(testPress, testEntropy);
            double w = Imports.w_P_s_R2(testPress, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.923015898E+02);
            double uErr = CalcAbsRelativeError(u, 0.301262819E+04);
            double hErr = CalcAbsRelativeError(h, 0.333568375E+04);
            double TErr = CalcAbsRelativeError(T, 700);
            double cpErr = CalcAbsRelativeError(cp, 0.208141274E+01);
            double cvErr = CalcAbsRelativeError(cv, 1.6197833256);
            double wErr = CalcAbsRelativeError(w, 0.644289068E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool hPass = IsAcceptable(hErr);
            bool TPass = IsAcceptable(TErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(TPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_pressure_entropy_Region2_s_at_700K_30MPa()
        {
            //kPa
            double testPress = 30 * 1000;
            //kJ / (kg * K)
            double testEntropy = 0.517540298E+01;

            double v = Imports.v_P_s_R2(testPress, testEntropy);
            double u = Imports.u_P_s_R2(testPress, testEntropy);
            double h = Imports.h_P_s_R2(testPress, testEntropy);
            double T = Imports.T_P_s_R2(testPress, testEntropy);
            double cp = Imports.cp_P_s_R2(testPress, testEntropy);
            double cv = Imports.cv_P_s_R2(testPress, testEntropy);
            double w = Imports.w_P_s_R2(testPress, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.542946619E-02);
            double uErr = CalcAbsRelativeError(u, 0.246861076E+04);
            double hErr = CalcAbsRelativeError(h, 0.263149474E+04);
            double TErr = CalcAbsRelativeError(T, 700);
            double cpErr = CalcAbsRelativeError(cp, 0.103505092E+02);
            double cvErr = CalcAbsRelativeError(cv, 2.975538368909);
            double wErr = CalcAbsRelativeError(w, 0.480386523E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool hPass = IsAcceptable(hErr);
            bool TPass = IsAcceptable(TErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(TPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }

        [TestMethod]
        public void Properties_as_functions_of_enthalpy_entropy_Region2_h_s_at_300K_0_0035MPa()
        {
            //kJ / kg
            double testEnthalpy = 0.254991145E+04;
            //kJ / (kg * K)
            double testEntropy = 0.852238967E+01;

            double v = Imports.v_h_s_R2(testEnthalpy, testEntropy);
            double u = Imports.u_h_s_R2(testEnthalpy, testEntropy);
            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy) / 1000;
            double T = Imports.T_h_s_R2(testEnthalpy, testEntropy);
            double cp = Imports.cp_h_s_R2(testEnthalpy, testEntropy);
            double cv = Imports.cv_h_s_R2(testEnthalpy, testEntropy);
            double w = Imports.w_h_s_R2(testEnthalpy, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.394913866E+02);
            double uErr = CalcAbsRelativeError(u, 0.241169160E+04);
            double PErr = CalcAbsRelativeError(P, 0.0035);
            double TErr = CalcAbsRelativeError(T, 300);
            double cpErr = CalcAbsRelativeError(cp, 0.191300162E+01);
            double cvErr = CalcAbsRelativeError(cv, 1.441326618975);
            double wErr = CalcAbsRelativeError(w, 0.427920172E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool PPass = IsAcceptable(PErr);
            bool TPass = IsAcceptable(TErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(PPass);
            Assert.IsTrue(TPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_enthalpy_entropy_Region2_h_s_at_700K_0_0035MPa()
        {
            //kJ / kg
            double testEnthalpy = 0.333568375E+04;
            //kJ / (kg * K)
            double testEntropy = 0.101749996E+02;

            double v = Imports.v_h_s_R2(testEnthalpy, testEntropy);
            double u = Imports.u_h_s_R2(testEnthalpy, testEntropy);
            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy) / 1000;
            double T = Imports.T_h_s_R2(testEnthalpy, testEntropy);
            double cp = Imports.cp_h_s_R2(testEnthalpy, testEntropy);
            double cv = Imports.cv_h_s_R2(testEnthalpy, testEntropy);
            double w = Imports.w_h_s_R2(testEnthalpy, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.923015898E+02);
            double uErr = CalcAbsRelativeError(u, 0.301262819E+04);
            double PErr = CalcAbsRelativeError(P, 0.0035);
            double TErr = CalcAbsRelativeError(T, 700);
            double cpErr = CalcAbsRelativeError(cp, 0.208141274E+01);
            double cvErr = CalcAbsRelativeError(cv, 1.6197833256);
            double wErr = CalcAbsRelativeError(w, 0.644289068E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool PPass = IsAcceptable(PErr);
            bool TPass = IsAcceptable(TErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(PPass);
            Assert.IsTrue(TPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_enthalpy_entropy_Region2_h_s_at_700K_30MPa()
        {
            //kJ / kg
            double testEnthalpy = 0.263149474E+04;
            //kJ / (kg * K)
            double testEntropy = 0.517540298E+01;

            double v = Imports.v_h_s_R2(testEnthalpy, testEntropy);
            double u = Imports.u_h_s_R2(testEnthalpy, testEntropy);
            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy) / 1000;
            double T = Imports.T_h_s_R2(testEnthalpy, testEntropy);
            double cp = Imports.cp_h_s_R2(testEnthalpy, testEntropy);
            double cv = Imports.cv_h_s_R2(testEnthalpy, testEntropy);
            double w = Imports.w_h_s_R2(testEnthalpy, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.542946619E-02);
            double uErr = CalcAbsRelativeError(u, 0.246861076E+04);
            double PErr = CalcAbsRelativeError(P, 30);
            double TErr = CalcAbsRelativeError(T, 700);
            double cpErr = CalcAbsRelativeError(cp, 0.103505092E+02);
            double cvErr = CalcAbsRelativeError(cv, 2.975538368909);
            double wErr = CalcAbsRelativeError(w, 0.480386523E+03);

            bool vPass = IsAcceptable(vErr);
            bool uPass = IsAcceptable(uErr);
            bool PPass = IsAcceptable(PErr);
            bool TPass = IsAcceptable(TErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(vPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(PPass);
            Assert.IsTrue(TPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }

        //The pressure and enthalpy data points for Region2 were 
        //suggested by the IAPWS in "Revised Release on IAPWS
        //Inductrial Formulation 1997 for the Thermodynamic
        //Properties of Water and Steam" in Table 24 on page 25.

        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_enthalpy_Region2_0_001MPa_3000h()
        {
            //kPa
            double testPressure = 0.001 * 1000;
            //kJ / kg
            double testEnthalpy = 3000;

            double T = Imports.T_P_h_R2(testPressure, testEnthalpy);

            double TErr = CalcAbsRelativeError(T, 0.534433241E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_enthalpy_Region2_3MPa_3000h()
        {
            //kPa
            double testPressure = 3 * 1000;
            //kJ / kg
            double testEnthalpy = 3000;

            double T = Imports.T_P_h_R2(testPressure, testEnthalpy);

            double TErr = CalcAbsRelativeError(T, 0.575373370E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_enthalpy_Region2_3MPa_4000h()
        {
            //kPa
            double testPressure = 3 * 1000;
            //kJ / kg
            double testEnthalpy = 4000;

            double T = Imports.T_P_h_R2(testPressure, testEnthalpy);

            double TErr = CalcAbsRelativeError(T, 0.101077577E+04);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_enthalpy_Region2_5MPa_3500h()
        {
            //kPa
            double testPressure = 5 * 1000;
            //kJ / kg
            double testEnthalpy = 3500;

            double T = Imports.T_P_h_R2(testPressure, testEnthalpy);

            double TErr = CalcAbsRelativeError(T, 0.801299102E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_enthalpy_Region2_5MPa_4000h()
        {
            //kPa
            double testPressure = 5 * 1000;
            //kJ / kg
            double testEnthalpy = 4000;

            double T = Imports.T_P_h_R2(testPressure, testEnthalpy);

            double TErr = CalcAbsRelativeError(T, 0.101531583E+04);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_enthalpy_Region2_25MPa_3500h()
        {
            //kPa
            double testPressure = 25 * 1000;
            //kJ / kg
            double testEnthalpy = 3500;

            double T = Imports.T_P_h_R2(testPressure, testEnthalpy);

            double TErr = CalcAbsRelativeError(T, 0.875279054E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_enthalpy_Region2_40MPa_2700h()
        {
            //kPa
            double testPressure = 40 * 1000;
            //kJ / kg
            double testEnthalpy = 2700;

            double T = Imports.T_P_h_R2(testPressure, testEnthalpy);

            double TErr = CalcAbsRelativeError(T, 0.743056411E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_enthalpy_Region2_60MPa_2700h()
        {
            //kPa
            double testPressure = 60 * 1000;
            //kJ / kg
            double testEnthalpy = 2700;

            double T = Imports.T_P_h_R2(testPressure, testEnthalpy);

            double TErr = CalcAbsRelativeError(T, 0.791137067E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_enthalpy_Region2_60MPa_3200h()
        {
            //kPa
            double testPressure = 60 * 1000;
            //kJ / kg
            double testEnthalpy = 3200;

            double T = Imports.T_P_h_R2(testPressure, testEnthalpy);

            double TErr = CalcAbsRelativeError(T, 0.882756860E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }

        //The pressure and enthalpy data points for Region2 were 
        //suggested by the IAPWS in "Revised Release on IAPWS
        //Inductrial Formulation 1997 for the Thermodynamic
        //Properties of Water and Steam" in Table 29 on page 29.

        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_entropy_Region2_0_1MPa_7_5s()
        {
            //kPa
            double testPressure = 0.1 * 1000;
            //kJ / (kg * K)
            double testEntropy = 7.5;

            double T = Imports.T_P_s_R2(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.399517097E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_entropy_Region2_0_1MPa_8s()
        {
            //kPa
            double testPressure = 0.1 * 1000;
            //kJ / (kg * K)
            double testEntropy = 8;

            double T = Imports.T_P_s_R2(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.514127081E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_entropy_Region2_2_5MPa_8s90()
        {
            //kPa
            double testPressure = 2.5 * 1000;
            //kJ / (kg * K)
            double testEntropy = 8;

            double T = Imports.T_P_s_R2(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.103984917E+04);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_entropy_Region2_8MPa_6s()
        {
            //kPa
            double testPressure = 8 * 1000;
            //kJ / (kg * K)
            double testEntropy = 6;

            double T = Imports.T_P_s_R2(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.600484040E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_entropy_Region2_8MPa_7_5s()
        {
            //kPa
            double testPressure = 8 * 1000;
            //kJ / (kg * K)
            double testEntropy = 7.5;

            double T = Imports.T_P_s_R2(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.106495556E+04);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_entropy_Region2_90MPa_6s()
        {
            //kPa
            double testPressure = 90 * 1000;
            //kJ / (kg * K)
            double testEntropy = 6;

            double T = Imports.T_P_s_R2(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.103801126E+04);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_entropy_Region2_20MPa_5_75s()
        {
            //kPa
            double testPressure = 20 * 1000;
            //kJ / (kg * K)
            double testEntropy = 5.75;

            double T = Imports.T_P_s_R2(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.697992849E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_entropy_Region2_80MPa_5_25s()
        {
            //kPa
            double testPressure = 80 * 1000;
            //kJ / (kg * K)
            double testEntropy = 5.25;

            double T = Imports.T_P_s_R2(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.854011484E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_functions_of_pressure_entropy_Region2_80MPa_5_75s()
        {
            //kPa
            double testPressure = 80 * 1000;
            //kJ / (kg * K)
            double testEntropy = 5.75;

            double T = Imports.T_P_s_R2(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.949017998E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }

        //The pressure and enthalpy data points for Region2 were 
        //suggested by the IAPWS in "Supplementary Release on Backward
        //Equations for Pressure as a Function of Enthalpy and Entropy
        //p(h,s) for Regions 1 and 2 of the IAPWS Industrial Formulation
        //1997 for the Thermodynamic Properties of Water and Steam" in 
        //Table 9 on page 10.

        [TestMethod]
        public void Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_6_5s()
        {
            //kJ / kg
            double testEnthalpy = 2800;
            //kJ / (kg * K)
            double testEntropy = 6.5;

            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy);
            P = P / 1000;

            double PErr = CalcAbsRelativeError(P, 1.371012767);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_9_5s()
        {
            //kJ / kg
            double testEnthalpy = 2800;
            //kJ / (kg * K)
            double testEntropy = 9.5;

            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy);
            P = P / 1000;

            double PErr = CalcAbsRelativeError(P, 1.879743844E-03);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_functions_of_enthalpy_entropy_Region2_4100h_9_5s()
        {
            //kJ / kg
            double testEnthalpy = 4100;
            //kJ / (kg * K)
            double testEntropy = 9.5;

            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy);
            P = P / 1000;

            double PErr = CalcAbsRelativeError(P, 1.024788997E-01);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_6s()
        {
            //kJ / kg
            double testEnthalpy = 2800;
            //kJ / (kg * K)
            double testEntropy = 6;

            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy);
            P = P / 1000;

            double PErr = CalcAbsRelativeError(P, 4.793911442);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_functions_of_enthalpy_entropy_Region2_3600h_6s()
        {
            //kJ / kg
            double testEnthalpy = 3600;
            //kJ / (kg * K)
            double testEntropy = 6;

            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy);
            P = P / 1000;

            double PErr = CalcAbsRelativeError(P, 8.395519209E+01);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_functions_of_enthalpy_entropy_Region2_3600h_7s()
        {
            //kJ / kg
            double testEnthalpy = 3600;
            //kJ / (kg * K)
            double testEntropy = 7;

            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy);
            P = P / 1000;

            double PErr = CalcAbsRelativeError(P, 7.527161441);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_5_1s()
        {
            //kJ / kg
            double testEnthalpy = 2800;
            //kJ / (kg * K)
            double testEntropy = 5.1;

            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy);
            P = P / 1000;

            double PErr = CalcAbsRelativeError(P, 9.439202060E+01);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_functions_of_enthalpy_entropy_Region2_2800h_5_8s()
        {
            //kJ / kg
            double testEnthalpy = 2800;
            //kJ / (kg * K)
            double testEntropy = 5.8;

            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy);
            P = P / 1000;

            double PErr = CalcAbsRelativeError(P, 8.414574124);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_functions_of_enthalpy_entropy_Region2_3400h_5_8s()
        {
            //kJ / kg
            double testEnthalpy = 3400;
            //kJ / (kg * K)
            double testEntropy = 5.8;

            double P = Imports.P_h_s_R2(testEnthalpy, testEntropy);
            P = P / 1000;

            double PErr = CalcAbsRelativeError(P, 8.376903879E+01);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
    }
}
