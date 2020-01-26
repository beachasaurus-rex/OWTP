#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

//Iteration Constants for Boundary Equations for Boundary between R3 & R4
static const double _nArr[10] = {1167.0521452767, -724213.16703206, -17.073846940092, 12020.82470247, -3232555.0322333, 14.91510861353, -4823.2657361591, 405113.40542057, -0.23855557567849, 650.17534844798};

//kPa
double _pSat_R3_R4_b(double temp)
{
    //kPa
    const double pStar = 1000;
    //K
    const double tStar = 1;

    double phi = (temp / tStar) +
        (_nArr[8] / ((temp / tStar) - _nArr[9]));
    double a = pow(phi,2) + _nArr[0] * phi + _nArr[1];
    double b = _nArr[2] * pow(phi,2) + _nArr[3] * phi + _nArr[4];
    double c = _nArr[5] * pow(phi,2) + _nArr[6] * phi + _nArr[7];

    double d1 = 2*c;
    double d2 = -b + pow(pow(b,2) - 4 * a * c, 0.5);
    double d3 = pow(d1 / d2,4);

    return d3 * pStar;
}

//K
double _tSat_R3_R4_b(double press)
{
    //kPa
    const double pStar = 1000;
    //K
    const double tStar = 1;

    double beta = pow(press/pStar,0.25);

    double e = pow(beta,2) + _nArr[2] * beta + _nArr[5];
    double f = _nArr[0] * pow(beta,2) + _nArr[3] * beta + _nArr[6];
    double g = _nArr[1] * pow(beta,2) + _nArr[4] * beta + _nArr[7];

    double _d1 = 2*g;
    double _d2 = -f - pow(pow(f,2) - 4 * e * g,0.5);
    double d = _d1/_d2;

    double h1 = pow(pow(_nArr[9] + d, 2) - 4 * (_nArr[8] + _nArr[9] * d), 0.5);
    double h = (_nArr[9] + d - h1) / 2.0;

    return h * tStar;
}
