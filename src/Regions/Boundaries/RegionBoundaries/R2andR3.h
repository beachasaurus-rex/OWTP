#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

//MPa
double _P_R2_R3_b(double temp)
{
	const double _ni_R2_R3_b[5] = { 0.34805185628969E+03, -0.11671859879975E+01, 0.10192970039326E-02, 0.57254459862746E+03, 0.13918839778870E+02 };

	//MPa
	const double pStar = 1;
	//K
	const double tStar = 1;

	double theta = temp / tStar;
	return pStar * (_ni_R2_R3_b[0] + (_ni_R2_R3_b[1] * theta)
		+ (_ni_R2_R3_b[2] * pow(theta, 2)));
}
//K
double _T_R2_R3_b(double press)
{
	const double _ni_R2_R3_b[5] = { 0.34805185628969E+03, -0.11671859879975E+01, 0.10192970039326E-02, 0.57254459862746E+03, 0.13918839778870E+02 };

	//MPa
	const double pStar = 1;
	//K
	const double tStar = 1;

	double pi = press / pStar;
	return tStar *
		(_ni_R2_R3_b[3] + pow((pi - _ni_R2_R3_b[4]) /
		_ni_R2_R3_b[2], 0.5));
}
