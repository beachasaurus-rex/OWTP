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
        return _v_P_T_R1(P,T);
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
        return _u_P_T_R1(P,T);
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
        return _s_P_T_R1(P,T);
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
        return _h_P_T_R1(P,T);
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
        return _cp_P_T_R1(P,T);
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
        return _cv_P_T_R1(P,T);
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
        return _w_P_T_R1(P,T);
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
        double h_sat = _h_P_T_R1( P,tSat);

        if
        (
            h > 0
            && h <= h_sat
        )
        {
            double tStar = _T_P_h_R1(P,h);
            double hStar = _h_P_T_R1( P,tStar);
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
            return tStar;
        }
    }

    double tSat_R4 = _Tsat_P_R4(P);
    double hSat_R1 = _h_P_T_R1( P,tSat_R4);
    double hSat_R2 = h_R2_T_P(tSat_R4, P);
    //region 4
    if
    (
        (
            P > 0
            && P < 16.529
            && h >= hSat_R1
            && h <= hSat_R2
        )
        ||
        (
            P >= 16.529
            && P <= pSat_R3
        )
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
//v(P,h)
double _v_P_h(double P, double h)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double h_sat = _h_P_T_R1( P,tSat);

        if
        (
            h > 0
            && h <= h_sat
        )
        {
            double tStar = _T_P_h_R1(P,h);
            double hStar = _h_P_T_R1( P,tStar);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return _v_P_h_R1(P,h);
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
                return v_R2_P_h(P,h);
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
            return _v_P_h_R3(P,h);
        }
    }

    double tSat_R4 = _Tsat_P_R4(P);
    double hSat_R1 = _h_P_T_R1( P,tSat_R4);
    double hSat_R2 = h_R2_T_P(tSat_R4, P);
    //region 4
    if
    (
        (
            P > 0
            && P < 16.529
            && h >= hSat_R1
            && h <= hSat_R2
        )
        ||
        (
            P >= 16.529
            && P <= pSat_R3
        )
    )
    {
        double x = _x_P_h_R4(P,h);
        return _v_P_x_R4(P,x);
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
//s(P,h)
double _s_P_h(double P, double h)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double h_sat = _h_P_T_R1( P,tSat);

        if
        (
            h > 0
            && h <= h_sat
        )
        {
            double tStar = _T_P_h_R1(P,h);
            double hStar = _h_P_T_R1( P,tStar);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return _s_P_h_R1(P,h);
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
                return s_R2_P_h(P,h);
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
            return _s_P_h_R3(P,h);
        }
    }

    double tSat_R4 = _Tsat_P_R4(P);
    double hSat_R1 = _h_P_T_R1( P,tSat_R4);
    double hSat_R2 = h_R2_T_P(tSat_R4, P);
    //region 4
    if
    (
        (
            P > 0
            && P < 16.529
            && h >= hSat_R1
            && h <= hSat_R2
        )
        ||
        (
            P >= 16.529
            && P <= pSat_R3
        )
    )
    {
        double x = _x_P_h_R4(P,h);
        return _s_P_x_R4(P,x);
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
//u(P,h)
double _u_P_h(double P, double h)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double h_sat = _h_P_T_R1( P,tSat);

        if
        (
            h > 0
            && h <= h_sat
        )
        {
            double tStar = _T_P_h_R1(P,h);
            double hStar = _h_P_T_R1( P,tStar);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return _u_P_h_R1(P,h);
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
                return u_R2_P_h(P,h);
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
            return _u_P_h_R3(P,h);
        }
    }

    double tSat_R4 = _Tsat_P_R4(P);
    double hSat_R1 = _h_P_T_R1( P,tSat_R4);
    double hSat_R2 = h_R2_T_P(tSat_R4, P);
    //region 4
    if
    (
        (
            P > 0
            && P < 16.529
            && h >= hSat_R1
            && h <= hSat_R2
        )
        ||
        (
            P >= 16.529
            && P <= pSat_R3
        )
    )
    {
        double x = _x_P_h_R4(P,h);
        return _u_P_x_R4(P,x);
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
//cp(P,h)
double _cp_P_h(double P, double h)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double h_sat = _h_P_T_R1( P,tSat);

        if
        (
            h > 0
            && h <= h_sat
        )
        {
            double tStar = _T_P_h_R1(P,h);
            double hStar = _h_P_T_R1( P,tStar);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return _cp_P_h_R1(P,h);
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
                return cp_R2_P_h(P,h);
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
            return _cp_P_h_R3(P,h);
        }
    }

    // //undefined for this region
    // //TODO: determine which error should propogate
    // double tSat_R4 = _Tsat_P_R4(P);
    // double hSat_R1 = _h_P_T_R1( P,tSat_R4);
    // double hSat_R2 = h_R2_T_P(tSat_R4, P);
    // //region 4
    // if
    // (
    //     P > 0
    //     && P <= pSat_R3
    //     && h >= hSat_R1
    //     && h <= hSat_R2
    // )
    // {
    //     return tSat_R4;
    // }
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
//cv(P,h)
double _cv_P_h(double P, double h)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double h_sat = _h_P_T_R1( P,tSat);

        if
        (
            h > 0
            && h <= h_sat
        )
        {
            double tStar = _T_P_h_R1(P,h);
            double hStar = _h_P_T_R1( P,tStar);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return _cv_P_h_R1(P,h);
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
                return cv_R2_P_h(P,h);
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
            return _cv_P_h_R3(P,h);
        }
    }

    // //undefined for this region
    // //TODO: determine which error should propogate
    // double tSat_R4 = _Tsat_P_R4(P);
    // double hSat_R1 = _h_P_T_R1( P,tSat_R4);
    // double hSat_R2 = h_R2_T_P(tSat_R4, P);
    // //region 4
    // if
    // (
    //     P > 0
    //     && P <= pSat_R3
    //     && h >= hSat_R1
    //     && h <= hSat_R2
    // )
    // {
    //     return tSat_R4;
    // }
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
//w(P,h)
double _w_P_h(double P, double h)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double h_sat = _h_P_T_R1( P,tSat);

        if
        (
            h > 0
            && h <= h_sat
        )
        {
            double tStar = _T_P_h_R1(P,h);
            double hStar = _h_P_T_R1( P,tStar);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return _w_P_h_R1(P,h);
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
                return w_R2_P_h(P,h);
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
            return _w_P_h_R3(P,h);
        }
    }

    // //undefined for this region
    // //TODO: determine which error should propogate
    // double tSat_R4 = _Tsat_P_R4(P);
    // double hSat_R1 = _h_P_T_R1( P,tSat_R4);
    // double hSat_R2 = h_R2_T_P(tSat_R4, P);
    // //region 4
    // if
    // (
    //     P > 0
    //     && P <= pSat_R3
    //     && h >= hSat_R1
    //     && h <= hSat_R2
    // )
    // {
    //     return tSat_R4;
    // }
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

//T(P,s)
double _T_P_s(double P, double s)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double s_sat = _s_P_T_R1( P,tSat);

        if
        (
            s > 0
            && s <= s_sat
        )
        {
            double tStar = T_R1_P_s(P,s);
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
        double s_sat = s_R2_T_P(tSat, P);
        double s_max = s_R2_T_P(1073.15, P);

        if
        (
            s >= s_sat
            && s <= s_max
        )
        {
            double tStar = T_R2_P_s(P,s);
            double pB23 = _P_R2_R3_b(tStar);
            double Psat = _Psat_T_R4(tStar);
            double sB23 = s_R2_T_P(tStar, pB23);

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
                    && s >= sB23
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

    double pSat_R3 = _pSat_s_R3_R4(s);
    //region 3
    if
    (
        s > 0
        && P >= pSat_R3
        && P <= 100
    )
    {
        double tStar = _T_P_s_R3(P,s);
        double TB23 = _T_R2_R3_b(P);
        double pB23 = _P_R2_R3_b(tStar);

        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && P >= pB23
        )
        {
            return tStar;
        }
    }

    double tSat_R4 = _Tsat_P_R4(P);
    double sSat_R1 = _s_P_T_R1( P,tSat_R4);
    double sSat_R2 = s_R2_T_P(tSat_R4, P);
    //region 4
    if
    (
        (
            P > 0
            && P < 16.529
            && s >= sSat_R1
            && s <= sSat_R2
        )
        ||
        (
            P >= 16.529
            && P <= pSat_R3
        )
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
//v(P,s)
double _v_P_s(double P, double s)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double s_sat = _s_P_T_R1( P,tSat);

        if
        (
            s > 0
            && s <= s_sat
        )
        {
            double tStar = T_R1_P_s(P,s);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return v_R1_P_s(P,s);
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
        double s_sat = s_R2_T_P(tSat, P);
        double s_max = s_R2_T_P(1073.15, P);

        if
        (
            s >= s_sat
            && s <= s_max
        )
        {
            double tStar = T_R2_P_s(P,s);
            double pB23 = _P_R2_R3_b(tStar);
            double Psat = _Psat_T_R4(tStar);
            double sB23 = s_R2_T_P(tStar, pB23);

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
                    && s >= sB23
                )
                ||
                (
                    tStar > 863.15
                    && tStar <= 1073.15
                )
            )
            {
                return v_R2_P_s(P,s);
            }
        }
    }

    double pSat_R3 = _pSat_s_R3_R4(s);
    //region 3
    if
    (
        s > 0
        && P >= pSat_R3
        && P <= 100
    )
    {
        double tStar = _T_P_s_R3(P,s);
        double TB23 = _T_R2_R3_b(P);
        double pB23 = _P_R2_R3_b(tStar);

        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && P >= pB23
        )
        {
            return _v_P_s_R3(P,s);
        }
    }

    double tSat_R4 = _Tsat_P_R4(P);
    double sSat_R1 = _s_P_T_R1( P,tSat_R4);
    double sSat_R2 = s_R2_T_P(tSat_R4, P);
    //region 4
    if
    (
        (
            P > 0
            && P < 16.529
            && s >= sSat_R1
            && s <= sSat_R2
        )
        ||
        (
            P >= 16.529
            && P <= pSat_R3
        )
    )
    {
        double x = _x_P_s_R4(P,s);
        return _v_P_x_R4(P,x);
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
//h(P,s)
double _h_P_s(double P, double s)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double s_sat = _s_P_T_R1( P,tSat);

        if
        (
            s > 0
            && s <= s_sat
        )
        {
            double tStar = T_R1_P_s(P,s);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return h_R1_P_s(P,s);
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
        double s_sat = s_R2_T_P(tSat, P);
        double s_max = s_R2_T_P(1073.15, P);

        if
        (
            s >= s_sat
            && s <= s_max
        )
        {
            double tStar = T_R2_P_s(P,s);
            double pB23 = _P_R2_R3_b(tStar);
            double Psat = _Psat_T_R4(tStar);
            double sB23 = s_R2_T_P(tStar, pB23);

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
                    && s >= sB23
                )
                ||
                (
                    tStar > 863.15
                    && tStar <= 1073.15
                )
            )
            {
                return h_R2_P_s(P,s);
            }
        }
    }

    double pSat_R3 = _pSat_s_R3_R4(s);
    //region 3
    if
    (
        s > 0
        && P >= pSat_R3
        && P <= 100
    )
    {
        double tStar = _T_P_s_R3(P,s);
        double TB23 = _T_R2_R3_b(P);
        double pB23 = _P_R2_R3_b(tStar);

        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && P >= pB23
        )
        {
            return _h_P_s_R3(P,s);
        }
    }

    double tSat_R4 = _Tsat_P_R4(P);
    double sSat_R1 = _s_P_T_R1( P,tSat_R4);
    double sSat_R2 = s_R2_T_P(tSat_R4, P);
    //region 4
    if
    (
        (
            P > 0
            && P < 16.529
            && s >= sSat_R1
            && s <= sSat_R2
        )
        ||
        (
            P >= 16.529
            && P <= pSat_R3
        )
    )
    {
        double x = _x_P_s_R4(P,s);
        return _h_P_x_R4(P,x);
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
//u(P,s)
double _u_P_s(double P, double s)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double s_sat = _s_P_T_R1( P,tSat);

        if
        (
            s > 0
            && s <= s_sat
        )
        {
            double tStar = T_R1_P_s(P,s);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return u_R1_P_s(P,s);
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
        double s_sat = s_R2_T_P(tSat, P);
        double s_max = s_R2_T_P(1073.15, P);

        if
        (
            s >= s_sat
            && s <= s_max
        )
        {
            double tStar = T_R2_P_s(P,s);
            double pB23 = _P_R2_R3_b(tStar);
            double Psat = _Psat_T_R4(tStar);
            double sB23 = s_R2_T_P(tStar, pB23);

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
                    && s >= sB23
                )
                ||
                (
                    tStar > 863.15
                    && tStar <= 1073.15
                )
            )
            {
                return u_R2_P_s(P,s);
            }
        }
    }

    double pSat_R3 = _pSat_s_R3_R4(s);
    //region 3
    if
    (
        s > 0
        && P >= pSat_R3
        && P <= 100
    )
    {
        double tStar = _T_P_s_R3(P,s);
        double TB23 = _T_R2_R3_b(P);
        double pB23 = _P_R2_R3_b(tStar);

        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && P >= pB23
        )
        {
            return _u_P_s_R3(P,s);
        }
    }

    double tSat_R4 = _Tsat_P_R4(P);
    double sSat_R1 = _s_P_T_R1( P,tSat_R4);
    double sSat_R2 = s_R2_T_P(tSat_R4, P);
    //region 4
    if
    (
        (
            P > 0
            && P < 16.529
            && s >= sSat_R1
            && s <= sSat_R2
        )
        ||
        (
            P >= 16.529
            && P <= pSat_R3
        )
    )
    {
        double x = _x_P_s_R4(P,s);
        return _u_P_x_R4(P,x);
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
//cp(P,s)
double _cp_P_s(double P, double s)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double s_sat = _s_P_T_R1( P,tSat);

        if
        (
            s > 0
            && s <= s_sat
        )
        {
            double tStar = T_R1_P_s(P,s);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return cp_R1_P_s(P,s);
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
        double s_sat = s_R2_T_P(tSat, P);
        double s_max = s_R2_T_P(1073.15, P);

        if
        (
            s >= s_sat
            && s <= s_max
        )
        {
            double tStar = T_R2_P_s(P,s);
            double pB23 = _P_R2_R3_b(tStar);
            double Psat = _Psat_T_R4(tStar);
            double sB23 = s_R2_T_P(tStar, pB23);

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
                    && s >= sB23
                )
                ||
                (
                    tStar > 863.15
                    && tStar <= 1073.15
                )
            )
            {
                return cp_R2_P_s(P,s);
            }
        }
    }

    double pSat_R3 = _pSat_s_R3_R4(s);
    //region 3
    if
    (
        s > 0
        && P >= pSat_R3
        && P <= 100
    )
    {
        double tStar = _T_P_s_R3(P,s);
        double TB23 = _T_R2_R3_b(P);
        double pB23 = _P_R2_R3_b(tStar);

        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && P >= pB23
        )
        {
            return _cp_P_s_R3(P,s);
        }
    }

    // //undefined for this region
    // //TODO: determine which error should propogate
    // double tSat_R4 = _Tsat_P_R4(P);
    // double sSat_R1 = _s_P_T_R1( P,tSat_R4);
    // double sSat_R2 = s_R2_T_P(tSat_R4, P);
    // //region 4
    // if
    // (
    //     (
    //         P > 0
    //         && P < 16.529
    //         && s >= sSat_R1
    //         && s <= sSat_R2
    //     )
    //     ||
    //     (
    //         P >= 16.529
    //         && P <= pSat_R3
    //     )
    // )
    // {
    //     return tSat_R4;
    // }
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
//cv(P,s)
double _cv_P_s(double P, double s)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double s_sat = _s_P_T_R1( P,tSat);

        if
        (
            s > 0
            && s <= s_sat
        )
        {
            double tStar = T_R1_P_s(P,s);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return cv_R1_P_s(P,s);
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
        double s_sat = s_R2_T_P(tSat, P);
        double s_max = s_R2_T_P(1073.15, P);

        if
        (
            s >= s_sat
            && s <= s_max
        )
        {
            double tStar = T_R2_P_s(P,s);
            double pB23 = _P_R2_R3_b(tStar);
            double Psat = _Psat_T_R4(tStar);
            double sB23 = s_R2_T_P(tStar, pB23);

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
                    && s >= sB23
                )
                ||
                (
                    tStar > 863.15
                    && tStar <= 1073.15
                )
            )
            {
                return cv_R2_P_s(P,s);
            }
        }
    }

    double pSat_R3 = _pSat_s_R3_R4(s);
    //region 3
    if
    (
        s > 0
        && P >= pSat_R3
        && P <= 100
    )
    {
        double tStar = _T_P_s_R3(P,s);
        double TB23 = _T_R2_R3_b(P);
        double pB23 = _P_R2_R3_b(tStar);

        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && P >= pB23
        )
        {
            return _cv_P_s_R3(P,s);
        }
    }

    // //undefined for this region
    // //TODO: determine which error should propogate
    // double tSat_R4 = _Tsat_P_R4(P);
    // double sSat_R1 = _s_P_T_R1( P,tSat_R4);
    // double sSat_R2 = s_R2_T_P(tSat_R4, P);
    // //region 4
    // if
    // (
    //     (
    //         P > 0
    //         && P < 16.529
    //         && s >= sSat_R1
    //         && s <= sSat_R2
    //     )
    //     ||
    //     (
    //         P >= 16.529
    //         && P <= pSat_R3
    //     )
    // )
    // {
    //     return tSat_R4;
    // }
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
//w(P,s)
double _w_P_s(double P, double s)
{
    //region 1
    if
    (
        P > 0
        && P <= 100
    )
    {
        double tSat = _Tsat_P_R4(P);
        double s_sat = _s_P_T_R1( P,tSat);

        if
        (
            s > 0
            && s <= s_sat
        )
        {
            double tStar = T_R1_P_s(P,s);
            double pSat = _Psat_T_R4(tStar);

            if
            (
                tStar >= 273.15
                && tStar <= 623.15
                && P >= pSat
            )
            {
                return w_R1_P_s(P,s);
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
        double s_sat = s_R2_T_P(tSat, P);
        double s_max = s_R2_T_P(1073.15, P);

        if
        (
            s >= s_sat
            && s <= s_max
        )
        {
            double tStar = T_R2_P_s(P,s);
            double pB23 = _P_R2_R3_b(tStar);
            double Psat = _Psat_T_R4(tStar);
            double sB23 = s_R2_T_P(tStar, pB23);

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
                    && s >= sB23
                )
                ||
                (
                    tStar > 863.15
                    && tStar <= 1073.15
                )
            )
            {
                return w_R2_P_s(P,s);
            }
        }
    }

    double pSat_R3 = _pSat_s_R3_R4(s);
    //region 3
    if
    (
        s > 0
        && P >= pSat_R3
        && P <= 100
    )
    {
        double tStar = _T_P_s_R3(P,s);
        double TB23 = _T_R2_R3_b(P);
        double pB23 = _P_R2_R3_b(tStar);

        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && P >= pB23
        )
        {
            return _w_P_s_R3(P,s);
        }
    }

    // //undefined for this region
    // //TODO: determine which error should propogate
    // double tSat_R4 = _Tsat_P_R4(P);
    // double sSat_R1 = _s_P_T_R1( P,tSat_R4);
    // double sSat_R2 = s_R2_T_P(tSat_R4, P);
    // //region 4
    // if
    // (
    //     (
    //         P > 0
    //         && P < 16.529
    //         && s >= sSat_R1
    //         && s <= sSat_R2
    //     )
    //     ||
    //     (
    //         P >= 16.529
    //         && P <= pSat_R3
    //     )
    // )
    // {
    //     return tSat_R4;
    // }
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

//T(h,s)
double _T_h_s(double h, double s)
{
    //region 1
    double pStar = P_R1_h_s(h,s);
    double tStar = T_R1_h_s(h,s);
    double pSat = _Psat_T_R4(tStar);
    if
    (
        pStar >= pSat
        && pStar <= 100
        && tStar >= 273.15
        && tStar <= 623.15
    )
    {
        return tStar;
    }

    //region 2
    tStar = T_R2_h_s(h,s);
    pStar = P_R2_h_s(h,s);
    pSat = _Psat_T_R4(tStar);
    double pB23 = _P_R2_R3_b(tStar);
    double hB23 = h_R2_T_P(tStar, pB23);
    double sB23 = s_R2_T_P(tStar, pB23);

    if
    (
        (
            tStar >= 273.15
            && tStar <= 623.15
            && pStar > 0
            && pStar <= pSat
        )
        ||
        (
            tStar > 623.15
            && tStar <= 863.15
            && pStar > 0
            && pStar <= pB23
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

    //region 3
    tStar = _T_h_s_R3(h,s);
    pStar = _P_h_s_R3(h,s);
    double pSat_R3 = _pSat_s_R3_R4(s);
    if
    (
        h > 0
        && pStar >= pSat_R3
        && pStar <= 100
    )
    {
        double TB23 = _T_R2_R3_b(pStar);
        double pB23 = _P_R2_R3_b(tStar);
        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && pStar >= pB23
        )
        {
            return tStar;
        }
    }

    //region 4
    double tSat_R4 = _Tsat_h_s_R4(h,s);
    double pSat_R4 = _Psat_h_s_R4(h,s);
    double hSat_R1 = _h_P_T_R1( pSat_R4,tSat_R4);
    double hSat_R2 = h_R2_T_P(tSat_R4, pSat_R4);
    if
    (
        (
            pSat_R4 > 0
            && pSat_R4 < 16.529
            && h >= hSat_R1
            && h <= hSat_R2
        )
        ||
        (
            pSat_R4 >= 16.529
            && pSat_R4 <= pSat_R3
        )
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
//P(h,s)
double _P_h_s(double h, double s)
{
    //region 1
    double pStar = P_R1_h_s(h,s);
    double tStar = T_R1_h_s(h,s);
    double pSat = _Psat_T_R4(tStar);
    if
    (
        pStar >= pSat
        && pStar <= 100
        && tStar >= 273.15
        && tStar <= 623.15
    )
    {
        return pStar;
    }

    //region 2
    tStar = T_R2_h_s(h,s);
    pStar = P_R2_h_s(h,s);
    pSat = _Psat_T_R4(tStar);
    double pB23 = _P_R2_R3_b(tStar);
    double hB23 = h_R2_T_P(tStar, pB23);
    double sB23 = s_R2_T_P(tStar, pB23);

    if
    (
        (
            tStar >= 273.15
            && tStar <= 623.15
            && pStar > 0
            && pStar <= pSat
        )
        ||
        (
            tStar > 623.15
            && tStar <= 863.15
            && pStar > 0
            && pStar <= pB23
            && h >= hB23
        )
        ||
        (
            tStar > 863.15
            && tStar <= 1073.15
        )
    )
    {
        return pStar;
    }

    //region 3
    tStar = _T_h_s_R3(h,s);
    pStar = _P_h_s_R3(h,s);
    double pSat_R3 = _pSat_s_R3_R4(s);
    if
    (
        h > 0
        && pStar >= pSat_R3
        && pStar <= 100
    )
    {
        double TB23 = _T_R2_R3_b(pStar);
        double pB23 = _P_R2_R3_b(tStar);
        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && pStar >= pB23
        )
        {
            return pStar;
        }
    }

    //region 4
    double tSat_R4 = _Tsat_h_s_R4(h,s);
    double pSat_R4 = _Psat_h_s_R4(h,s);
    double hSat_R1 = _h_P_T_R1( pSat_R4,tSat_R4);
    double hSat_R2 = h_R2_T_P(tSat_R4, pSat_R4);
    if
    (
        (
            pSat_R4 > 0
            && pSat_R4 < 16.529
            && h >= hSat_R1
            && h <= hSat_R2
        )
        ||
        (
            pSat_R4 >= 16.529
            && pSat_R4 <= pSat_R3
        )
    )
    {
        return pSat_R4;
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
//v(h,s)
double _v_h_s(double h, double s)
{
    //region 1
    double pStar = P_R1_h_s(h,s);
    double tStar = T_R1_h_s(h,s);
    double pSat = _Psat_T_R4(tStar);
    if
    (
        pStar >= pSat
        && pStar <= 100
        && tStar >= 273.15
        && tStar <= 623.15
    )
    {
        return v_R1_h_s(h,s);
    }

    //region 2
    tStar = T_R2_h_s(h,s);
    pStar = P_R2_h_s(h,s);
    pSat = _Psat_T_R4(tStar);
    double pB23 = _P_R2_R3_b(tStar);
    double hB23 = h_R2_T_P(tStar, pB23);
    double sB23 = s_R2_T_P(tStar, pB23);

    if
    (
        (
            tStar >= 273.15
            && tStar <= 623.15
            && pStar > 0
            && pStar <= pSat
        )
        ||
        (
            tStar > 623.15
            && tStar <= 863.15
            && pStar > 0
            && pStar <= pB23
            && h >= hB23
        )
        ||
        (
            tStar > 863.15
            && tStar <= 1073.15
        )
    )
    {
        return v_R2_h_s(h,s);
    }

    //region 3
    tStar = _T_h_s_R3(h,s);
    pStar = _P_h_s_R3(h,s);
    double pSat_R3 = _pSat_s_R3_R4(s);
    if
    (
        h > 0
        && pStar >= pSat_R3
        && pStar <= 100
    )
    {
        double TB23 = _T_R2_R3_b(pStar);
        double pB23 = _P_R2_R3_b(tStar);
        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && pStar >= pB23
        )
        {
            return _v_h_s_R3(h,s);
        }
    }

    //region 4
    double tSat_R4 = _Tsat_h_s_R4(h,s);
    double pSat_R4 = _Psat_h_s_R4(h,s);
    double hSat_R1 = _h_P_T_R1( pSat_R4,tSat_R4);
    double hSat_R2 = h_R2_T_P(tSat_R4, pSat_R4);
    if
    (
        (
            pSat_R4 > 0
            && pSat_R4 < 16.529
            && h >= hSat_R1
            && h <= hSat_R2
        )
        ||
        (
            pSat_R4 >= 16.529
            && pSat_R4 <= pSat_R3
        )
    )
    {
        double x = _x_P_h_R4(pSat_R4,h);
        return _v_P_x_R4(pSat_R4,x);
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
//u(h,s)
double _u_h_s(double h, double s)
{
    //region 1
    double pStar = P_R1_h_s(h,s);
    double tStar = T_R1_h_s(h,s);
    double pSat = _Psat_T_R4(tStar);
    if
    (
        pStar >= pSat
        && pStar <= 100
        && tStar >= 273.15
        && tStar <= 623.15
    )
    {
        return u_R1_h_s(h,s);
    }

    //region 2
    tStar = T_R2_h_s(h,s);
    pStar = P_R2_h_s(h,s);
    pSat = _Psat_T_R4(tStar);
    double pB23 = _P_R2_R3_b(tStar);
    double hB23 = h_R2_T_P(tStar, pB23);
    double sB23 = s_R2_T_P(tStar, pB23);

    if
    (
        (
            tStar >= 273.15
            && tStar <= 623.15
            && pStar > 0
            && pStar <= pSat
        )
        ||
        (
            tStar > 623.15
            && tStar <= 863.15
            && pStar > 0
            && pStar <= pB23
            && h >= hB23
        )
        ||
        (
            tStar > 863.15
            && tStar <= 1073.15
        )
    )
    {
        return u_R2_h_s(h,s);
    }

    //region 3
    tStar = _T_h_s_R3(h,s);
    pStar = _P_h_s_R3(h,s);
    double pSat_R3 = _pSat_s_R3_R4(s);
    if
    (
        h > 0
        && pStar >= pSat_R3
        && pStar <= 100
    )
    {
        double TB23 = _T_R2_R3_b(pStar);
        double pB23 = _P_R2_R3_b(tStar);
        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && pStar >= pB23
        )
        {
            return _u_h_s_R3(h,s);
        }
    }

    //region 4
    double tSat_R4 = _Tsat_h_s_R4(h,s);
    double pSat_R4 = _Psat_h_s_R4(h,s);
    double hSat_R1 = _h_P_T_R1( pSat_R4,tSat_R4);
    double hSat_R2 = h_R2_T_P(tSat_R4, pSat_R4);
    if
    (
        (
            pSat_R4 > 0
            && pSat_R4 < 16.529
            && h >= hSat_R1
            && h <= hSat_R2
        )
        ||
        (
            pSat_R4 >= 16.529
            && pSat_R4 <= pSat_R3
        )
    )
    {
        double x = _x_P_h_R4(pSat_R4,h);
        return _u_P_x_R4(pSat_R4,x);
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
//cv(h,s)
double _cv_h_s(double h, double s)
{
    //region 1
    double pStar = P_R1_h_s(h,s);
    double tStar = T_R1_h_s(h,s);
    double pSat = _Psat_T_R4(tStar);
    if
    (
        pStar >= pSat
        && pStar <= 100
        && tStar >= 273.15
        && tStar <= 623.15
    )
    {
        return cv_R1_h_s(h,s);
    }

    //region 2
    tStar = T_R2_h_s(h,s);
    pStar = P_R2_h_s(h,s);
    pSat = _Psat_T_R4(tStar);
    double pB23 = _P_R2_R3_b(tStar);
    double hB23 = h_R2_T_P(tStar, pB23);
    double sB23 = s_R2_T_P(tStar, pB23);

    if
    (
        (
            tStar >= 273.15
            && tStar <= 623.15
            && pStar > 0
            && pStar <= pSat
        )
        ||
        (
            tStar > 623.15
            && tStar <= 863.15
            && pStar > 0
            && pStar <= pB23
            && h >= hB23
        )
        ||
        (
            tStar > 863.15
            && tStar <= 1073.15
        )
    )
    {
        return cv_R2_h_s(h,s);
    }

    //region 3
    tStar = _T_h_s_R3(h,s);
    pStar = _P_h_s_R3(h,s);
    double pSat_R3 = _pSat_s_R3_R4(s);
    if
    (
        h > 0
        && pStar >= pSat_R3
        && pStar <= 100
    )
    {
        double TB23 = _T_R2_R3_b(pStar);
        double pB23 = _P_R2_R3_b(tStar);
        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && pStar >= pB23
        )
        {
            return _cv_h_s_R3(h,s);
        }
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
//cp(h,s)
double _cp_h_s(double h, double s)
{
    //region 1
    double pStar = P_R1_h_s(h,s);
    double tStar = T_R1_h_s(h,s);
    double pSat = _Psat_T_R4(tStar);
    if
    (
        pStar >= pSat
        && pStar <= 100
        && tStar >= 273.15
        && tStar <= 623.15
    )
    {
        return cp_R1_h_s(h,s);
    }

    //region 2
    tStar = T_R2_h_s(h,s);
    pStar = P_R2_h_s(h,s);
    pSat = _Psat_T_R4(tStar);
    double pB23 = _P_R2_R3_b(tStar);
    double hB23 = h_R2_T_P(tStar, pB23);
    double sB23 = s_R2_T_P(tStar, pB23);

    if
    (
        (
            tStar >= 273.15
            && tStar <= 623.15
            && pStar > 0
            && pStar <= pSat
        )
        ||
        (
            tStar > 623.15
            && tStar <= 863.15
            && pStar > 0
            && pStar <= pB23
            && h >= hB23
        )
        ||
        (
            tStar > 863.15
            && tStar <= 1073.15
        )
    )
    {
        return cp_R2_h_s(h,s);
    }

    //region 3
    tStar = _T_h_s_R3(h,s);
    pStar = _P_h_s_R3(h,s);
    double pSat_R3 = _pSat_s_R3_R4(s);
    if
    (
        h > 0
        && pStar >= pSat_R3
        && pStar <= 100
    )
    {
        double TB23 = _T_R2_R3_b(pStar);
        double pB23 = _P_R2_R3_b(tStar);
        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && pStar >= pB23
        )
        {
            return _cp_h_s_R3(h,s);
        }
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
//w(h,s)
double _w_h_s(double h, double s)
{
    //region 1
    double pStar = P_R1_h_s(h,s);
    double tStar = T_R1_h_s(h,s);
    double pSat = _Psat_T_R4(tStar);
    if
    (
        pStar >= pSat
        && pStar <= 100
        && tStar >= 273.15
        && tStar <= 623.15
    )
    {
        return w_R1_h_s(h,s);
    }

    //region 2
    tStar = T_R2_h_s(h,s);
    pStar = P_R2_h_s(h,s);
    pSat = _Psat_T_R4(tStar);
    double pB23 = _P_R2_R3_b(tStar);
    double hB23 = h_R2_T_P(tStar, pB23);
    double sB23 = s_R2_T_P(tStar, pB23);

    if
    (
        (
            tStar >= 273.15
            && tStar <= 623.15
            && pStar > 0
            && pStar <= pSat
        )
        ||
        (
            tStar > 623.15
            && tStar <= 863.15
            && pStar > 0
            && pStar <= pB23
            && h >= hB23
        )
        ||
        (
            tStar > 863.15
            && tStar <= 1073.15
        )
    )
    {
        return w_R2_h_s(h,s);
    }

    //region 3
    tStar = _T_h_s_R3(h,s);
    pStar = _P_h_s_R3(h,s);
    double pSat_R3 = _pSat_s_R3_R4(s);
    if
    (
        h > 0
        && pStar >= pSat_R3
        && pStar <= 100
    )
    {
        double TB23 = _T_R2_R3_b(pStar);
        double pB23 = _P_R2_R3_b(tStar);
        if
        (
            tStar >= 623.15
            && tStar <= TB23
            && pStar >= pB23
        )
        {
            return _w_h_s_R3(h,s);
        }
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
