using System;

namespace AccuracyTests
{
    public abstract class AccuracyTestBase
    {
        //constants
        protected const double _acceptableRelErr = 0.01;

        //test helpers
        protected static bool IsAcceptable(double val)
        {
            return val < _acceptableRelErr;
        }
        protected static double CalcRelativeError(double test, double exp)
        {
            return (test - exp) / exp;
        }
        protected static double CalcAbsRelativeError(double test, double exp)
        {
            return Math.Abs(CalcRelativeError(test, exp));
        }
    }
}
