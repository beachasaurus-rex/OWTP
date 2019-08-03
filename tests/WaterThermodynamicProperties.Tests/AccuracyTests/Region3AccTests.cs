using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace WaterThermodynamicProperties.Tests.AccuracyTests
{
    [TestClass]
    public class Region3AccTests : AccuracyTestBase
    {
#if DEBUG

        //The density and temperature data points for Region 3 were 
        //suggested by the IAPWS in "Revised Release on IAPWS
        //Inductrial Formulation 1997 for the Thermodynamic
        //Properties of Water and Steam" in Table 33 on page 32.

        [TestMethod]
        public void Properties_as_functions_of_density_temperature_Region3_500rho_650K()
        {
            //kg/m^3
            double testRho = 500;
            //K
            double testTemp = 650;

            double P = Imports.P_Rho_T_R3(testRho, testTemp) / 1000;
            double u = Imports.u_Rho_T_R3(testRho, testTemp);
            double s = Imports.s_Rho_T_R3(testRho, testTemp);
            double h = Imports.h_Rho_T_R3(testRho, testTemp);
            double cp = Imports.cp_Rho_T_R3(testRho, testTemp);
            double cv = Imports.cv_Rho_T_R3(testRho, testTemp);
            double w = Imports.w_Rho_T_R3(testRho, testTemp);

            double PErr = CalcAbsRelativeError(P, 0.255837018E+02);
            double uErr = CalcAbsRelativeError(u, 0.181226279E+04);
            double sErr = CalcAbsRelativeError(s, 0.405427273E+01);
            double hErr = CalcAbsRelativeError(h, 0.186343019E+04);
            double cpErr = CalcAbsRelativeError(cp, 0.138935717E+02);
            double cvErr = CalcAbsRelativeError(cv, 3.191317871889);
            double wErr = CalcAbsRelativeError(w, 0.502005554E+03);

            bool PPass = IsAcceptable(PErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool hPass = IsAcceptable(hErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(PPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_density_temperature_Region3_200rho_650K()
        {
            //kg/m^3
            double testRho = 200;
            //K
            double testTemp = 650;

            double P = Imports.P_Rho_T_R3(testRho, testTemp) / 1000;
            double u = Imports.u_Rho_T_R3(testRho, testTemp);
            double s = Imports.s_Rho_T_R3(testRho, testTemp);
            double h = Imports.h_Rho_T_R3(testRho, testTemp);
            double cp = Imports.cp_Rho_T_R3(testRho, testTemp);
            double cv = Imports.cv_Rho_T_R3(testRho, testTemp);
            double w = Imports.w_Rho_T_R3(testRho, testTemp);

            double PErr = CalcAbsRelativeError(P, 0.222930643E+02);
            double uErr = CalcAbsRelativeError(u, 0.226365868E+04);
            double sErr = CalcAbsRelativeError(s, 0.485438792E+01);
            double hErr = CalcAbsRelativeError(h, 0.237512401E+04);
            double cpErr = CalcAbsRelativeError(cp, 0.446579342E+02);
            double cvErr = CalcAbsRelativeError(cv, 4.04118075955);
            double wErr = CalcAbsRelativeError(w, 0.383444594E+03);

            bool PPass = IsAcceptable(PErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool hPass = IsAcceptable(hErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(PPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_density_temperature_Region3_500rho_750K()
        {
            //kg/m^3
            double testRho = 500;
            //K
            double testTemp = 750;

            double P = Imports.P_Rho_T_R3(testRho, testTemp) / 1000;
            double u = Imports.u_Rho_T_R3(testRho, testTemp);
            double s = Imports.s_Rho_T_R3(testRho, testTemp);
            double h = Imports.h_Rho_T_R3(testRho, testTemp);
            double cp = Imports.cp_Rho_T_R3(testRho, testTemp);
            double cv = Imports.cv_Rho_T_R3(testRho, testTemp);
            double w = Imports.w_Rho_T_R3(testRho, testTemp);

            double PErr = CalcAbsRelativeError(P, 0.783095639E+02);
            double uErr = CalcAbsRelativeError(u, 0.210206932E+04);
            double sErr = CalcAbsRelativeError(s, 0.446971906E+01);
            double hErr = CalcAbsRelativeError(h, 0.225868845E+04);
            double cpErr = CalcAbsRelativeError(cp, 0.634165359E+01);
            double cvErr = CalcAbsRelativeError(cv, 2.71701677121);
            double wErr = CalcAbsRelativeError(w, 0.760696041E+03);

            bool PPass = IsAcceptable(PErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool hPass = IsAcceptable(hErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(PPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }

        [TestMethod]
        public void Properties_as_functions_of_specific_volume_temperature_Region3_1over500v_650K()
        {
            //kg/m^3
            double testV = 1.0/500.0;
            //K
            double testTemp = 650;

            double P = Imports.P_v_T_R3(testV, testTemp) / 1000;
            double u = Imports.u_v_T_R3(testV, testTemp);
            double s = Imports.s_v_T_R3(testV, testTemp);
            double h = Imports.h_v_T_R3(testV, testTemp);
            double cp = Imports.cp_v_T_R3(testV, testTemp);
            double cv = Imports.cv_v_T_R3(testV, testTemp);
            double w = Imports.w_v_T_R3(testV, testTemp);

            double PErr = CalcAbsRelativeError(P, 0.255837018E+02);
            double uErr = CalcAbsRelativeError(u, 0.181226279E+04);
            double sErr = CalcAbsRelativeError(s, 0.405427273E+01);
            double hErr = CalcAbsRelativeError(h, 0.186343019E+04);
            double cpErr = CalcAbsRelativeError(cp, 0.138935717E+02);
            double cvErr = CalcAbsRelativeError(cv, 3.191317871889);
            double wErr = CalcAbsRelativeError(w, 0.502005554E+03);

            bool PPass = IsAcceptable(PErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool hPass = IsAcceptable(hErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(PPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_specific_volume_temperature_Region3_1over200v_650K()
        {
            //kg/m^3
            double testV = 1.0/200.0;
            //K
            double testTemp = 650;

            double P = Imports.P_v_T_R3(testV, testTemp) / 1000;
            double u = Imports.u_v_T_R3(testV, testTemp);
            double s = Imports.s_v_T_R3(testV, testTemp);
            double h = Imports.h_v_T_R3(testV, testTemp);
            double cp = Imports.cp_v_T_R3(testV, testTemp);
            double cv = Imports.cv_v_T_R3(testV, testTemp);
            double w = Imports.w_v_T_R3(testV, testTemp);

            double PErr = CalcAbsRelativeError(P, 0.222930643E+02);
            double uErr = CalcAbsRelativeError(u, 0.226365868E+04);
            double sErr = CalcAbsRelativeError(s, 0.485438792E+01);
            double hErr = CalcAbsRelativeError(h, 0.237512401E+04);
            double cpErr = CalcAbsRelativeError(cp, 0.446579342E+02);
            double cvErr = CalcAbsRelativeError(cv, 4.04118075955);
            double wErr = CalcAbsRelativeError(w, 0.383444594E+03);

            bool PPass = IsAcceptable(PErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool hPass = IsAcceptable(hErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(PPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
        [TestMethod]
        public void Properties_as_functions_of_specific_volume_temperature_Region3_1over500v_750K()
        {
            //kg/m^3
            double testV = 1.0/500.0;
            //K
            double testTemp = 750;

            double P = Imports.P_v_T_R3(testV, testTemp) / 1000;
            double u = Imports.u_v_T_R3(testV, testTemp);
            double s = Imports.s_v_T_R3(testV, testTemp);
            double h = Imports.h_v_T_R3(testV, testTemp);
            double cp = Imports.cp_v_T_R3(testV, testTemp);
            double cv = Imports.cv_v_T_R3(testV, testTemp);
            double w = Imports.w_v_T_R3(testV, testTemp);

            double PErr = CalcAbsRelativeError(P, 0.783095639E+02);
            double uErr = CalcAbsRelativeError(u, 0.210206932E+04);
            double sErr = CalcAbsRelativeError(s, 0.446971906E+01);
            double hErr = CalcAbsRelativeError(h, 0.225868845E+04);
            double cpErr = CalcAbsRelativeError(cp, 0.634165359E+01);
            double cvErr = CalcAbsRelativeError(cv, 2.71701677121);
            double wErr = CalcAbsRelativeError(w, 0.760696041E+03);

            bool PPass = IsAcceptable(PErr);
            bool uPass = IsAcceptable(uErr);
            bool sPass = IsAcceptable(sErr);
            bool hPass = IsAcceptable(hErr);
            bool cpPass = IsAcceptable(cpErr);
            bool cvPass = IsAcceptable(cvErr);
            bool wPass = IsAcceptable(wErr);

            Assert.IsTrue(PPass);
            Assert.IsTrue(uPass);
            Assert.IsTrue(sPass);
            Assert.IsTrue(hPass);
            Assert.IsTrue(cpPass);
            Assert.IsTrue(cvPass);
            Assert.IsTrue(wPass);
        }
#endif
    }
}
