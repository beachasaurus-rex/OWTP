using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace WaterThermodynamicProperties.Tests.AccuracyTests
{
    [TestClass]
    public class BoundaryAccTests : AccuracyTestBase
    {
#if DEBUG

        //The temperature and pressure data points for the boundary
        //between regions 2 and 3 were suggested by the IAPWS in 
        //"Revised Release on IAPWS Inductrial Formulation 1997 
        //for the Thermodynamic Properties of Water and Steam" 
        //on page 6.

        [TestMethod]
        public void BoundaryAccTests_Region2AndRegion3_TemperatureAcc()
        {
            double press = 0.165291643E+02 * 1000;

            double pi = Imports.pi_R2_R3_b(press);
            double T = Imports.T_R2_R3_b(pi);

            double TErr = CalcAbsRelativeError(T, 0.623150000E+03);

            bool TPass = IsAcceptable(TErr);

            Assert.IsTrue(TPass);
        }

        [TestMethod]
        public void BoundaryAccTests_Region2AndRegion3_PressureAcc()
        {
            double T = 0.623150000E+03;

            double theta = Imports.theta_R2_R3_b(T);
            double press = Imports.P_R2_R3_b(theta);

            double PErr = CalcAbsRelativeError(press, 0.165291643E+02 * 1000);

            bool PPass = IsAcceptable(PErr);

            Assert.IsTrue(PPass);
        }
#endif
    }
}
