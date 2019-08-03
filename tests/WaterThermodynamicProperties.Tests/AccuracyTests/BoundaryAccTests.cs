using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace WaterThermodynamicProperties.Tests.AccuracyTests
{
    [TestClass]
    public class BoundaryAccTests : AccuracyTestBase
    {
#if DEBUG
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
