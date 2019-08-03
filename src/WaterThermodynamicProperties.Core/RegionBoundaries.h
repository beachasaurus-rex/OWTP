#pragma once

#include <math.h>

//Iteration Constants for Boundary Equations for Boundary between R2 & R3
static double _ni_R2_R3_b[5] = { 0.34805185628969E+03, -0.11671859879975E+01, 0.10192970039326E-02, 0.57254459862746E+03, 0.13918839778870E+02 };

//kPa
static double _pStar_R2_R3_b = 1000;
//K
static double _tStar_R2_R3_b = 1;

double _pi_R2_R3_b(double pressure)
{
	return pressure / _pStar_R2_R3_b;
}
double _theta_R2_R3_b(double temp)
{
	return temp / _tStar_R2_R3_b;
}
//kPa
double _P_R2_R3_b(double theta)
{
	return _pStar_R2_R3_b * (_ni_R2_R3_b[0] + (_ni_R2_R3_b[1] * theta)
		+ (_ni_R2_R3_b[2] * pow(theta, 2)));
}
//K
double _T_R2_R3_b(double pi)
{
	return _tStar_R2_R3_b *
		(_ni_R2_R3_b[3] + pow((pi - _ni_R2_R3_b[4]) / _ni_R2_R3_b[2], 0.5));
}
