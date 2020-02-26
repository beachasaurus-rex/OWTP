#ifndef ALL_H
	#define ALL_H
	#include "All.h"
#endif

//v(P,T)
double _v_P_T(double P, double T)
{
    double pSat_r1 = _Psat_T_R4(T);
    double p_r2r3 = _P_R2_R3_b(T);
    double T_r2r3 = _T_R2_R3_b(P);

    //region 1
    if
    (
        T >= 273.15
        && T <= 623.15
        && P >= pSat_r1
        && P <= 100
    )
    {
        return v_R1_T_P(T,P);
    }
    //region 2
    else if
    (
        (
            T >= 273.15
            && T <= 623.15
            && P > 0
            && P <= pSat_r1
        )
        ||
        (
            T > 623.15
            && T <= 863.15
            && P > 0
            && P <= p_r2r3
        )
        ||
        (
            T > 863.15
            && T <= 1073.15
            && P > 0
            && P <= 100
        )
    )
    {
        return v_R2_T_P(T,P);
    }
    //region 3
    else if
    (
        T >= 623.15
        && T <= T_r2r3
        && P >= p_r2r3
        && P <= 100
    )
    {
        return _v_P_T_R3(P,T);
    }
    //region 5
    else if
    (
        T >= 1073.15
        && T <= 2273.15
        && P > 0
        && P <= 50
    )
    {
        return _v_P_T_R5(P,T);
    }
}
//u(P,T)
double _u_P_T(double P, double T)
{
    double pSat_r1 = _Psat_T_R4(T);
    double p_r2r3 = _P_R2_R3_b(T);
    double T_r2r3 = _T_R2_R3_b(P);

    //region 1
    if
    (
        T >= 273.15
        && T <= 623.15
        && P >= pSat_r1
        && P <= 100
    )
    {
        return u_R1_T_P(T,P);
    }
    //region 2
    else if
    (
        (
            T >= 273.15
            && T <= 623.15
            && P > 0
            && P <= pSat_r1
        )
        ||
        (
            T > 623.15
            && T <= 863.15
            && P > 0
            && P <= p_r2r3
        )
        ||
        (
            T > 863.15
            && T <= 1073.15
            && P > 0
            && P <= 100
        )
    )
    {
        return u_R2_T_P(T,P);
    }
    //region 3
    else if
    (
        T >= 623.15
        && T <= T_r2r3
        && P >= p_r2r3
        && P <= 100
    )
    {
        return _u_P_T_R3(P,T);
    }
    //region 5
    else if
    (
        T >= 1073.15
        && T <= 2273.15
        && P > 0
        && P <= 50
    )
    {
        return _u_P_T_R5(P,T);
    }
}
//s(P,T)
double _s_P_T(double P, double T)
{
    double pSat_r1 = _Psat_T_R4(T);
    double p_r2r3 = _P_R2_R3_b(T);
    double T_r2r3 = _T_R2_R3_b(P);

    //region 1
    if
    (
        T >= 273.15
        && T <= 623.15
        && P >= pSat_r1
        && P <= 100
    )
    {
        return s_R1_T_P(T,P);
    }
    //region 2
    else if
    (
        (
            T >= 273.15
            && T <= 623.15
            && P > 0
            && P <= pSat_r1
        )
        ||
        (
            T > 623.15
            && T <= 863.15
            && P > 0
            && P <= p_r2r3
        )
        ||
        (
            T > 863.15
            && T <= 1073.15
            && P > 0
            && P <= 100
        )
    )
    {
        return s_R2_T_P(T,P);
    }
    //region 3
    else if
    (
        T >= 623.15
        && T <= T_r2r3
        && P >= p_r2r3
        && P <= 100
    )
    {
        return _s_P_T_R3(P,T);
    }
    //region 5
    else if
    (
        T >= 1073.15
        && T <= 2273.15
        && P > 0
        && P <= 50
    )
    {
        return _s_P_T_R5(P,T);
    }
}
//h(P,T)
double _h_P_T(double P, double T)
{
    double pSat_r1 = _Psat_T_R4(T);
    double p_r2r3 = _P_R2_R3_b(T);
    double T_r2r3 = _T_R2_R3_b(P);

    //region 1
    if
    (
        T >= 273.15
        && T <= 623.15
        && P >= pSat_r1
        && P <= 100
    )
    {
        return h_R1_T_P(T,P);
    }
    //region 2
    else if
    (
        (
            T >= 273.15
            && T <= 623.15
            && P > 0
            && P <= pSat_r1
        )
        ||
        (
            T > 623.15
            && T <= 863.15
            && P > 0
            && P <= p_r2r3
        )
        ||
        (
            T > 863.15
            && T <= 1073.15
            && P > 0
            && P <= 100
        )
    )
    {
        return h_R2_T_P(T,P);
    }
    //region 3
    else if
    (
        T >= 623.15
        && T <= T_r2r3
        && P >= p_r2r3
        && P <= 100
    )
    {
        return _h_P_T_R3(P,T);
    }
    //region 5
    else if
    (
        T >= 1073.15
        && T <= 2273.15
        && P > 0
        && P <= 50
    )
    {
        return _h_P_T_R5(P,T);
    }
}
//cp(P,T)
double _cp_P_T(double P, double T)
{
    double pSat_r1 = _Psat_T_R4(T);
    double p_r2r3 = _P_R2_R3_b(T);
    double T_r2r3 = _T_R2_R3_b(P);

    //region 1
    if
    (
        T >= 273.15
        && T <= 623.15
        && P >= pSat_r1
        && P <= 100
    )
    {
        return cp_R1_T_P(T,P);
    }
    //region 2
    else if
    (
        (
            T >= 273.15
            && T <= 623.15
            && P > 0
            && P <= pSat_r1
        )
        ||
        (
            T > 623.15
            && T <= 863.15
            && P > 0
            && P <= p_r2r3
        )
        ||
        (
            T > 863.15
            && T <= 1073.15
            && P > 0
            && P <= 100
        )
    )
    {
        return cp_R2_T_P(T,P);
    }
    //region 3
    else if
    (
        T >= 623.15
        && T <= T_r2r3
        && P >= p_r2r3
        && P <= 100
    )
    {
        return _cp_P_T_R3(P,T);
    }
    //region 5
    else if
    (
        T >= 1073.15
        && T <= 2273.15
        && P > 0
        && P <= 50
    )
    {
        return _cp_P_T_R5(P,T);
    }
}
//cv(P,T)
double _cv_P_T(double P, double T)
{
    double pSat_r1 = _Psat_T_R4(T);
    double p_r2r3 = _P_R2_R3_b(T);
    double T_r2r3 = _T_R2_R3_b(P);

    //region 1
    if
    (
        T >= 273.15
        && T <= 623.15
        && P >= pSat_r1
        && P <= 100
    )
    {
        return cv_R1_T_P(T,P);
    }
    //region 2
    else if
    (
        (
            T >= 273.15
            && T <= 623.15
            && P > 0
            && P <= pSat_r1
        )
        ||
        (
            T > 623.15
            && T <= 863.15
            && P > 0
            && P <= p_r2r3
        )
        ||
        (
            T > 863.15
            && T <= 1073.15
            && P > 0
            && P <= 100
        )
    )
    {
        return cv_R2_T_P(T,P);
    }
    //region 3
    else if
    (
        T >= 623.15
        && T <= T_r2r3
        && P >= p_r2r3
        && P <= 100
    )
    {
        return _cv_P_T_R3(P,T);
    }
    //region 5
    else if
    (
        T >= 1073.15
        && T <= 2273.15
        && P > 0
        && P <= 50
    )
    {
        return _cv_P_T_R5(P,T);
    }
}
//w(P,T)
double _w_P_T(double P, double T)
{
    double pSat_r1 = _Psat_T_R4(T);
    double p_r2r3 = _P_R2_R3_b(T);
    double T_r2r3 = _T_R2_R3_b(P);

    //region 1
    if
    (
        T >= 273.15
        && T <= 623.15
        && P >= pSat_r1
        && P <= 100
    )
    {
        return w_R1_T_P(T,P);
    }
    //region 2
    else if
    (
        (
            T >= 273.15
            && T <= 623.15
            && P > 0
            && P <= pSat_r1
        )
        ||
        (
            T > 623.15
            && T <= 863.15
            && P > 0
            && P <= p_r2r3
        )
        ||
        (
            T > 863.15
            && T <= 1073.15
            && P > 0
            && P <= 100
        )
    )
    {
        return w_R2_T_P(T,P);
    }
    //region 3
    else if
    (
        T >= 623.15
        && T <= T_r2r3
        && P >= p_r2r3
        && P <= 100
    )
    {
        return _w_P_T_R3(P,T);
    }
    //region 5
    else if
    (
        T >= 1073.15
        && T <= 2273.15
        && P > 0
        && P <= 50
    )
    {
        return _w_P_T_R5(P,T);
    }
}

//T(P,h)
double _T_P_h(double P, double h)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double h_sat = h_R1_T_P(tSat, P);

        if
        (
            h > 0
            && h <= h_sat
        )
        {
            double tStar = T_R1_P_h(P,h);
            double hStar = h_R1_T_P(tStar, P);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return tStar;
            }
        }
    }

    //region 2
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double h_sat = h_R2_T_P(tSat, P);
        double h_max = h_R2_T_P(1073.15, P);

        if
        (
            h >= h_sat
            && h <= h_max
        )
        {
            double tStar = T_R2_P_h(P,h);
            double pB23 = _P_R2_R3_b(tStar);
            double Psat = _Psat_T_R4(tStar);
            double hB23 = h_R2_T_P(tStar, pB23);

            if
            (
                (
                    tStar >= 273.15
                    && tStar <= 623.15
                    && P > 0
                    && P <= Psat
                )
                ||
                (
                    tStar > 623.15
                    && tStar <= 863.15
                    && P > 0
                    && P <= pB23
                    && h >= hB23
                )
                ||
                (
                    tStar > 863.15
                    && tStar <= 1073.15
                )
            )
            {
                return tStar;
            }
        }
    }

    double pSat_R3 = _pSat_h_R3_R4(h);
    //region 3
    if
    (
        h > 0
        && P >= pSat_R3
        && P <= 100
    )
    {
        double tStar = _T_P_h_R3(P,h);
        double TB23 = _T_R2_R3_b(P);
        double pB23 = _P_R2_R3_b(tStar);

        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && P >= pB23
        )
        {
            return _T_P_h_R3(P,h);
        }
    }

    double tSat_R4 = _Tsat_P_R4(P);
    double hSat_R1 = h_R1_T_P(tSat_R4, P);
    double hSat_R2 = h_R2_T_P(tSat_R4, P);
    //region 4
    if
    (
        P > 0
        && P <= pSat_R3
        && h >= hSat_R1
        && h <= hSat_R2
    )
    {
        return tSat_R4;
    }
    // TODO: research props(P,h) for R5 later
    // //region 5
    // else if
    // (
    //     h > 0
    //     && h <= h_r5_max
    //     && P > 0
    //     && P <= 50
    // )
    // {
    //
    //     return _T_P_h_R5(P,h);
    // }
}
