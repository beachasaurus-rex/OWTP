#ifndef DLL_IMPORT
    #define DLL_IMPORT __declspec(dllimport)
#endif

#ifndef MATH_H
    #define MATH_H
    #include <math.h>
#endif

#ifndef GTEST
    #define GTEST
    #include "gtest/gtest.h"
#endif

class AccTestBase : public ::testing::Test
{
    public:
        double RelativeErr(double base, double val)
        {
            return (val-base)/base;
        }

        double AbsRelativeErr(double base, double val)
        {
            return fabs(RelativeErr(base,val));
        }

        bool IsAcceptable(double input)
        {
            return input < 0.01;
        }
};
