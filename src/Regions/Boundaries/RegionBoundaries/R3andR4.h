#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

//MPa
double _pSat_R3_R4_b(double temp)
{
	const double _nArr[10] = {1167.0521452767, -724213.16703206, -17.073846940092, 12020.82470247, -3232555.0322333, 14.91510861353, -4823.2657361591, 405113.40542057, -0.23855557567849, 650.17534844798};

    //MPa
    const double pStar = 1;
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
	const double _nArr[10] = {1167.0521452767, -724213.16703206, -17.073846940092, 12020.82470247, -3232555.0322333, 14.91510861353, -4823.2657361591, 405113.40542057, -0.23855557567849, 650.17534844798};

    //MPa
    const double pStar = 1;
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

//SaturatedPressure(Enthalpy)
double _pSat_h_R3_R4(double enth)
{
    const double hPrime = 1.670858218E+03;
    const double h2Prime = 2.563592004E+03;
    if
    (
        enth >= hPrime
        && enth <= h2Prime
    )
    {
        const int _I_PSat_h_R3_R4[14] = {0, 1, 1, 1, 1, 5, 7, 8, 14, 20, 22, 24, 28, 36};
    	const int _J_PSat_h_R3_R4[14] = {0, 1, 3, 4, 36, 3, 0, 24, 16, 16, 3, 18, 8, 24};
    	const double _n_PSat_h_R3_R4[14] = {0.600073641753024, -9.36203654849857, 24.6590798594147, -107.014222858224, -91582131580576.8, -8623.32011700662, -23.5837344740032, 2.52304969384128E+17, -3.89718771997719E+18, -3.33775713645296E+22, 35649946963.6328, -1.48547544720641E+26, 3.30611514838798E+18, 8.13641294467829E+37};

        //MPa
        const double pStar = 22;
        //kJ/kg
        const double hStar = 2600;

        double eta = enth / hStar;
        const int N = 14;
        double sum = 0;
        for (int i = 0; i < N; i++)
        {
            double calc = _n_PSat_h_R3_R4[i] *
                pow(eta - 1.02, _I_PSat_h_R3_R4[i]) *
                pow(eta - 0.608, _J_PSat_h_R3_R4[i]);
            sum = sum + calc;
        }

        return sum * pStar;
    }

    return -1;
}

//SaturatedPressure(Entropy)
double _pSat_s_R3_R4(double entr)
{
    const double sPrime = 3.778281340;
    const double s2Prime = 5.210887825;
    if
    (
        entr >= sPrime
        && entr <= s2Prime
    )
    {
        const int _I_PSat_s_R3_R4[10] = {0, 1, 1, 4, 12, 12, 16, 24, 28, 32};
    	const int _J_PSat_s_R3_R4[10] = {0, 1, 32, 7, 4, 14, 36, 10, 0, 18};
    	const double _n_PSat_s_R3_R4[10] = {0.639767553612785, -12.9727445396014, -2.24595125848403E+15, 1774667.41801846, 7170793495.71538, -3.78829107169011E+17, -9.55586736431328E+34, 1.87269814676188E+23, 119254746466.473, 1.10649277244882E+36};

        //MPa
        const double pStar = 22;
        //kJ/(kg*K)
        const double sStar = 5.2;

        double sigma = entr / sStar;
        const int N = 10;
        double sum = 0;
        for (int i = 0; i < N; i++)
        {
            double calc = _n_PSat_s_R3_R4[i] *
                pow(sigma - 1.03, _I_PSat_s_R3_R4[i]) *
                pow(sigma - 0.699, _J_PSat_s_R3_R4[i]);
            sum = sum + calc;
        }

        return sum * pStar;
    }

    return -1;
}
