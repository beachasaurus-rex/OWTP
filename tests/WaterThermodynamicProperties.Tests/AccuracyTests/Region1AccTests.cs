using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace WaterThermodynamicProperties.Tests.AccuracyTests
{
    [TestClass]
    public class Region1AccTests : AccuracyTestBase
    {
#if DEBUG

        //The temperature and pressure data points for Region1 were 
        //suggested by the IAPWS in "Revised Release on IAPWS
        //Inductrial Formulation 1997 for the Thermodynamic
        //Properties of Water and Steam" in Table 5 on page 9.

        [TestMethod]
        public void Properties_as_functions_of_temperature_pressure_Region1_300K_3MPa()
        {
            //K
            double testTemp = 300;
            //kPa
            double testPressure = 3000;

            double v = Imports.v_T_P_R1(testTemp, testPressure);
            double u = Imports.u_T_P_R1(testTemp, testPressure);
            double s = Imports.s_T_P_R1(testTemp, testPressure);
            double h = Imports.h_T_P_R1(testTemp, testPressure);
            double cp = Imports.cp_T_P_R1(testTemp, testPressure);
            double cv = Imports.cv_T_P_R1(testTemp, testPressure);
            double w = Imports.w_T_P_R1(testTemp, testPressure);

            double vErr = CalcAbsRelativeError(v, 0.100215168E-02);
            double uErr = CalcAbsRelativeError(u, 0.112324818E+03);
            double sErr = CalcAbsRelativeError(s, 0.392294792);
            double hErr = CalcAbsRelativeError(h, 0.115331273E+03);
            double cpErr = CalcAbsRelativeError(cp, 0.417301218E+01);
            double cvErr = CalcAbsRelativeError(cv, 4.121201603587);
            double wErr = CalcAbsRelativeError(w, 0.150773921E+04);

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
        public void Properties_as_functions_of_temperature_pressure_Region1_300K_80MPa()
        {
            //K
            double testTemp = 300;
            //kPa
            double testPressure = 80000;

            double v = Imports.v_T_P_R1(testTemp, testPressure);
            double u = Imports.u_T_P_R1(testTemp, testPressure);
            double s = Imports.s_T_P_R1(testTemp, testPressure);
            double h = Imports.h_T_P_R1(testTemp, testPressure);
            double cp = Imports.cp_T_P_R1(testTemp, testPressure);
            double cv = Imports.cv_T_P_R1(testTemp, testPressure);
            double w = Imports.w_T_P_R1(testTemp, testPressure);

            double vErr = CalcAbsRelativeError(v, 0.971180894E-03);
            double uErr = CalcAbsRelativeError(u, 0.106448356E+03);
            double sErr = CalcAbsRelativeError(s, 0.368563852);
            double hErr = CalcAbsRelativeError(h, 0.184142828E+03);
            double cpErr = CalcAbsRelativeError(cp, 0.401008987E+01);
            double cvErr = CalcAbsRelativeError(cv, 3.917366061845);
            double wErr = CalcAbsRelativeError(w, 0.163469054E+04);

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
        public void Properties_as_functions_of_temperature_pressure_Region1_500K_3MPa()
        {
            //K
            double testTemp = 500;
            //kPa
            double testPressure = 3000;

            double v = Imports.v_T_P_R1(testTemp, testPressure);
            double u = Imports.u_T_P_R1(testTemp, testPressure);
            double s = Imports.s_T_P_R1(testTemp, testPressure);
            double h = Imports.h_T_P_R1(testTemp, testPressure);
            double cp = Imports.cp_T_P_R1(testTemp, testPressure);
            double cv = Imports.cv_T_P_R1(testTemp, testPressure);
            double w = Imports.w_T_P_R1(testTemp, testPressure);

            double vErr = CalcAbsRelativeError(v, 0.120241800E-02);
            double uErr = CalcAbsRelativeError(u, 0.971934985E+03);
            double sErr = CalcAbsRelativeError(s, 0.258041912E+01);
            double hErr = CalcAbsRelativeError(h, 0.975542239E+03);
            double cpErr = CalcAbsRelativeError(cp, 0.465580682E+01);
            double cvErr = CalcAbsRelativeError(cv, 3.221392229028);
            double wErr = CalcAbsRelativeError(w, 0.124071337E+04);

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
        public void Properties_as_functions_of_pressure_enthalpy_Region1_h_at_300K_3MPa()
        {
            //kPa
            double testPress = 3000;
            //kJ / kg
            double testEnthalpy = 0.115331273E+03;

            double v = Imports.v_P_h_R1(testPress, testEnthalpy);
            double u = Imports.u_P_h_R1(testPress, testEnthalpy);
            double s = Imports.s_P_h_R1(testPress, testEnthalpy);
            double T = Imports.T_P_h_R1(testPress, testEnthalpy);
            double cp = Imports.cp_P_h_R1(testPress, testEnthalpy);
            double cv = Imports.cv_P_h_R1(testPress, testEnthalpy);
            double w = Imports.w_P_h_R1(testPress, testEnthalpy);

            double vErr = CalcAbsRelativeError(v, 0.100215168E-02);
            double uErr = CalcAbsRelativeError(u, 0.112324818E+03);
            double sErr = CalcAbsRelativeError(s, 0.392294792);
            double TErr = CalcAbsRelativeError(T, 300);
            double cpErr = CalcAbsRelativeError(cp, 0.417301218E+01);
            double cvErr = CalcAbsRelativeError(cv, 4.121201603587);
            double wErr = CalcAbsRelativeError(w, 0.150773921E+04);

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
        public void Properties_as_functions_of_pressure_enthalpy_Region1_h_at_300K_80MPa()
        {
            //kPa
            double testPress = 80000;
            //kJ / kg
            double testEnthalpy = 0.184142828E+03;

            double v = Imports.v_P_h_R1(testPress, testEnthalpy);
            double u = Imports.u_P_h_R1(testPress, testEnthalpy);
            double s = Imports.s_P_h_R1(testPress, testEnthalpy);
            double T = Imports.T_P_h_R1(testPress, testEnthalpy);
            double cp = Imports.cp_P_h_R1(testPress, testEnthalpy);
            double cv = Imports.cv_P_h_R1(testPress, testEnthalpy);
            double w = Imports.w_P_h_R1(testPress, testEnthalpy);

            double vErr = CalcAbsRelativeError(v, 0.971180894E-03);
            double uErr = CalcAbsRelativeError(u, 0.106448356E+03);
            double sErr = CalcAbsRelativeError(s, 0.368563852);
            double TErr = CalcAbsRelativeError(T, 300);
            double cpErr = CalcAbsRelativeError(cp, 0.401008987E+01);
            double cvErr = CalcAbsRelativeError(cv, 3.917366061845);
            double wErr = CalcAbsRelativeError(w, 0.163469054E+04);

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
        public void Properties_as_functions_of_pressure_enthalpy_Region1_h_at_500K_3MPa()
        {
            //kPa
            double testPress = 3000;
            //kJ / kg
            double testEnthalpy = 0.975542239E+03;

            double v = Imports.v_P_h_R1(testPress, testEnthalpy);
            double u = Imports.u_P_h_R1(testPress, testEnthalpy);
            double s = Imports.s_P_h_R1(testPress, testEnthalpy);
            double T = Imports.T_P_h_R1(testPress, testEnthalpy);
            double cp = Imports.cp_P_h_R1(testPress, testEnthalpy);
            double cv = Imports.cv_P_h_R1(testPress, testEnthalpy);
            double w = Imports.w_P_h_R1(testPress, testEnthalpy);

            double vErr = CalcAbsRelativeError(v, 0.120241800E-02);
            double uErr = CalcAbsRelativeError(u, 0.971934985E+03);
            double sErr = CalcAbsRelativeError(s, 0.258041912E+01);
            double TErr = CalcAbsRelativeError(T, 500);
            double cpErr = CalcAbsRelativeError(cp, 0.465580682E+01);
            double cvErr = CalcAbsRelativeError(cv, 3.221392229028);
            double wErr = CalcAbsRelativeError(w, 0.124071337E+04);

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
        public void Properties_as_functions_of_pressure_entropy_Region1_s_at_300K_3MPa()
        {
            //kPa
            double testPress = 3000;
            //kJ / (kg * K)
            double testEntropy = 0.392294792;

            double v = Imports.v_P_s_R1(testPress, testEntropy);
            double u = Imports.u_P_s_R1(testPress, testEntropy);
            double h = Imports.h_P_s_R1(testPress, testEntropy);
            double T = Imports.T_P_s_R1(testPress, testEntropy);
            double cp = Imports.cp_P_s_R1(testPress, testEntropy);
            double cv = Imports.cv_P_s_R1(testPress, testEntropy);
            double w = Imports.w_P_s_R1(testPress, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.100215168E-02);
            double uErr = CalcAbsRelativeError(u, 0.112324818E+03);
            double hErr = CalcAbsRelativeError(h, 0.115331273E+03);
            double TErr = CalcAbsRelativeError(T, 300);
            double cpErr = CalcAbsRelativeError(cp, 0.417301218E+01);
            double cvErr = CalcAbsRelativeError(cv, 4.121201603587);
            double wErr = CalcAbsRelativeError(w, 0.150773921E+04);

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
        public void Properties_as_functions_of_pressure_entropy_Region1_s_at_300K_80MPa()
        {
            //kPa
            double testPress = 80000;
            //kJ / (kg * K)
            double testEntropy = 0.368563852;

            double v = Imports.v_P_s_R1(testPress, testEntropy);
            double u = Imports.u_P_s_R1(testPress, testEntropy);
            double h = Imports.h_P_s_R1(testPress, testEntropy);
            double T = Imports.T_P_s_R1(testPress, testEntropy);
            double cp = Imports.cp_P_s_R1(testPress, testEntropy);
            double cv = Imports.cv_P_s_R1(testPress, testEntropy);
            double w = Imports.w_P_s_R1(testPress, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.971180894E-03);
            double uErr = CalcAbsRelativeError(u, 0.106448356E+03);
            double hErr = CalcAbsRelativeError(h, 0.184142828E+03);
            double TErr = CalcAbsRelativeError(T, 300);
            double cpErr = CalcAbsRelativeError(cp, 0.401008987E+01);
            double cvErr = CalcAbsRelativeError(cv, 3.917366061845);
            double wErr = CalcAbsRelativeError(w, 0.163469054E+04);

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
        public void Properties_as_functions_of_pressure_entropy_Region1_s_at_500K_3MPa()
        {
            //kPa
            double testPress = 3000;
            //kJ / (kg * K)
            double testEntropy = 0.258041912E+01;

            double v = Imports.v_P_s_R1(testPress, testEntropy);
            double u = Imports.u_P_s_R1(testPress, testEntropy);
            double h = Imports.h_P_s_R1(testPress, testEntropy);
            double T = Imports.T_P_s_R1(testPress, testEntropy);
            double cp = Imports.cp_P_s_R1(testPress, testEntropy);
            double cv = Imports.cv_P_s_R1(testPress, testEntropy);
            double w = Imports.w_P_s_R1(testPress, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.120241800E-02);
            double uErr = CalcAbsRelativeError(u, 0.971934985E+03);
            double hErr = CalcAbsRelativeError(h, 0.975542239E+03);
            double TErr = CalcAbsRelativeError(T, 500);
            double cpErr = CalcAbsRelativeError(cp, 0.465580682E+01);
            double cvErr = CalcAbsRelativeError(cv, 3.221392229028);
            double wErr = CalcAbsRelativeError(w, 0.124071337E+04);

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
        public void Properties_as_functions_of_enthalpy_entropy_Region1_h_s_at_300K_3MPa()
        {
            //kJ / kg
            double testEnthalpy = 0.115331273E+03;
            //kJ / (kg * K)
            double testEntropy = 0.392294792;

            double v = Imports.v_h_s_R1(testEnthalpy, testEntropy);
            double u = Imports.u_h_s_R1(testEnthalpy, testEntropy);
            double P = Imports.P_h_s_R1(testEnthalpy, testEntropy);
            double T = Imports.T_h_s_R1(testEnthalpy, testEntropy);
            double cp = Imports.cp_h_s_R1(testEnthalpy, testEntropy);
            double cv = Imports.cv_h_s_R1(testEnthalpy, testEntropy);
            double w = Imports.w_h_s_R1(testEnthalpy, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.100215168E-02);
            double uErr = CalcAbsRelativeError(u, 0.112324818E+03);
            double PErr = CalcAbsRelativeError(P, 3000);
            double TErr = CalcAbsRelativeError(T, 300);
            double cpErr = CalcAbsRelativeError(cp, 0.417301218E+01);
            double cvErr = CalcAbsRelativeError(cv, 4.121201603587);
            double wErr = CalcAbsRelativeError(w, 0.150773921E+04);

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
        public void Properties_as_functions_of_enthalpy_entropy_Region1_h_s_at_300K_80MPa()
        {
            //kJ / kg
            double testEnthalpy = 0.184142828E+03;
            //kJ / (kg * K)
            double testEntropy = 0.368563852;

            double v = Imports.v_h_s_R1(testEnthalpy, testEntropy);
            double u = Imports.u_h_s_R1(testEnthalpy, testEntropy);
            double P = Imports.P_h_s_R1(testEnthalpy, testEntropy);
            double T = Imports.T_h_s_R1(testEnthalpy, testEntropy);
            double cp = Imports.cp_h_s_R1(testEnthalpy, testEntropy);
            double cv = Imports.cv_h_s_R1(testEnthalpy, testEntropy);
            double w = Imports.w_h_s_R1(testEnthalpy, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.971180894E-03);
            double uErr = CalcAbsRelativeError(u, 0.106448356E+03);
            double PErr = CalcAbsRelativeError(P, 80000);
            double TErr = CalcAbsRelativeError(T, 300);
            double cpErr = CalcAbsRelativeError(cp, 0.401008987E+01);
            double cvErr = CalcAbsRelativeError(cv, 3.917366061845);
            double wErr = CalcAbsRelativeError(w, 0.163469054E+04);

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
        public void Properties_as_functions_of_enthalpy_entropy_Region1_h_s_at_500K_3MPa()
        {
            //kJ / kg
            double testEnthalpy = 0.975542239E+03;
            //kJ / (kg * K)
            double testEntropy = 0.258041912E+01;

            double v = Imports.v_h_s_R1(testEnthalpy, testEntropy);
            double u = Imports.u_h_s_R1(testEnthalpy, testEntropy);
            double P = Imports.P_h_s_R1(testEnthalpy, testEntropy);
            double T = Imports.T_h_s_R1(testEnthalpy, testEntropy);
            double cp = Imports.cp_h_s_R1(testEnthalpy, testEntropy);
            double cv = Imports.cv_h_s_R1(testEnthalpy, testEntropy);
            double w = Imports.w_h_s_R1(testEnthalpy, testEntropy);

            double vErr = CalcAbsRelativeError(v, 0.120241800E-02);
            double uErr = CalcAbsRelativeError(u, 0.971934985E+03);
            double PErr = CalcAbsRelativeError(P, 3000);
            double TErr = CalcAbsRelativeError(T, 500);
            double cpErr = CalcAbsRelativeError(cp, 0.465580682E+01);
            double cvErr = CalcAbsRelativeError(cv, 3.221392229028);
            double wErr = CalcAbsRelativeError(w, 0.124071337E+04);

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

        //The pressure and enthalpy data points for Region1 were 
        //suggested by the IAPWS in "Revised Release on IAPWS
        //Inductrial Formulation 1997 for the Thermodynamic
        //Properties of Water and Steam" in Table 7 on page 11.

        [TestMethod]
        public void Temperature_as_a_function_of_pressure_enthalpy_Region1_3MPa_500h()
        {
            //kPa
            double testPressure = 3000;
            //kJ / kg
            double testEnth = 500;

            double T = Imports.T_P_h_R1(testPressure, testEnth);

            double TErr = CalcAbsRelativeError(T, 0.391798509E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_function_of_pressure_enthalpy_Region1_80MPa_500h()
        {
            //kPa
            double testPressure = 80000;
            //kJ / kg
            double testEnth = 500;

            double T = Imports.T_P_h_R1(testPressure, testEnth);

            double TErr = CalcAbsRelativeError(T, 0.378108626E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_function_of_pressure_enthalpy_Region1_80MPa_1500h()
        {
            //kPa
            double testPressure = 80000;
            //kJ / kg
            double testEnth = 1500;

            double T = Imports.T_P_h_R1(testPressure, testEnth);

            double TErr = CalcAbsRelativeError(T, 0.611041229E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }

        //The pressure and entropy data points for Region1 were 
        //suggested by the IAPWS in "Revised Release on IAPWS
        //Inductrial Formulation 1997 for the Thermodynamic
        //Properties of Water and Steam" in Table 9 on page 12.

        [TestMethod]
        public void Temperature_as_a_function_of_pressure_entropy_Region1_3MPa_0_5s()
        {
            //kPa
            double testPressure = 3000;
            //kJ / (kg * K)
            double testEntropy = 0.5;

            double T = Imports.T_P_s_R1(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.307842258E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_function_of_pressure_entropy_Region1_80MPa_0_5s()
        {
            //kPa
            double testPressure = 80000;
            //kJ / (kg * K)
            double testEntropy = 0.5;

            double T = Imports.T_P_s_R1(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.309979785E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }
        [TestMethod]
        public void Temperature_as_a_function_of_pressure_entropy_Region1_80MPa_3s()
        {
            //kPa
            double testPressure = 80000;
            //kJ / (kg * K)
            double testEntropy = 3;

            double T = Imports.T_P_s_R1(testPressure, testEntropy);

            double TErr = CalcAbsRelativeError(T, 0.565899909E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }

        //The enthalpy and entropy data points for Region1 were 
        //suggested by the IAPWS in "Revised Supplementary Release
        //on Backward Equations for Pressure as a Function of Enthalpy
        //and Entropy p(h,s) for Regions 1 and 2 of the IAPWS Industrial
        //Formulation 1997 for the Thermodynamic Properties of Water and Steam"
        //in Table 3 on page 6.

        [TestMethod]
        public void Pressure_as_a_function_of_enthalpy_entropy_Region1_0_001h_0s()
        {
            //kJ / kg
            double testEnth = 0.001;
            //kJ / (kg * K)
            double testEntr = 0;

            double P = Imports.P_h_s_R1(testEnth, testEntr) / 1000;

            double PErr = CalcAbsRelativeError(P, 9.800980612E-04);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_function_of_enthalpy_entropy_Region1_90h_0s()
        {
            //kJ / kg
            double testEnth = 90;
            //kJ / (kg * K)
            double testEntr = 0;

            double P = Imports.P_h_s_R1(testEnth, testEntr) / 1000;

            double PErr = CalcAbsRelativeError(P, 9.192954727E+01);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
        [TestMethod]
        public void Pressure_as_a_function_of_enthalpy_entropy_Region1_1500h_3_4s()
        {
            //kJ / kg
            double testEnth = 1500;
            //kJ / (kg * K)
            double testEntr = 3.4;

            double P = Imports.P_h_s_R1(testEnth, testEntr) / 1000;

            double PErr = CalcAbsRelativeError(P, 5.868294423E+01);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
#endif
    }
}
