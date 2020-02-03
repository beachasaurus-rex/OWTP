#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "ReferenceConstants.h"
#endif

//Psat(T)
double _Psat_T_R4(double T)
{
    const double n[10] = {1167.0521452767, -724213.16703206, -17.073846940092, 12020.82470247, -3232555.0322333, 14.91510861353, -4823.2657361591, 405113.40542057, -0.23855557567849, 650.17534844798};
    const double pStar = 1;
    const double tStar = 1;

    double phi = (T / tStar) +
        (n[8] / ((T / tStar) - n[9]));

    double a = pow(phi, 2) + phi * n[0] + n[1];
    double b = pow(phi, 2) * n[2] + phi * n[3] + n[4];
    double c = pow(phi, 2) * n[5] + phi * n[6] + n[7];

    double d1 = 2 * c;
    double d2 = -b + pow(pow(b,2) - 4 * a * c, 0.5);

    return pStar * pow(d1 / d2, 4);
}

//Tsat(P)
double _Tsat_P_R4(double P)
{
    const double n[10] = {1167.0521452767, -724213.16703206, -17.073846940092, 12020.82470247, -3232555.0322333, 14.91510861353, -4823.2657361591, 405113.40542057, -0.23855557567849, 650.17534844798};
    const double pStar = 1;
    const double tStar = 1;

    double beta = pow(P / pStar, 0.25);

    double e = pow(beta, 2) + beta * n[2] + n[5];
    double f = pow(beta, 2) * n[0] + beta * n[3] + n[6];
    double g = pow(beta, 2) * n[1] + beta * n[4] + n[7];

    double d1 = 2 * g;
    double d2 = -f - pow(pow(f, 2) - 4 * e * g, 0.5);
    double d = d1 / d2;

    double h  = pow(pow(n[9] + d, 2) - 4 * (n[8] + d * n[9]), 0.5);
    return tStar * ((n[9] + d - h) / 2.0);
}
