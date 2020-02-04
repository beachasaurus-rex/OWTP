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
        T >= 273.15
        && T <= 623.15
        && P > 0
        && P <= pSat_r1
    )
    {
        return v_R2_T_P(T,P);
    }
    //region 2
    else if
    (
        T > 623.15
        && T <= 863.15
        && P > 0
        && P <= p_r2r3
    )
    {
        return v_R2_T_P(T,P);
    }
    //region 2
    else if
    (
        T > 863.15
        && T <= 1073.15
        && P > 0
        && P <= 100
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
        T >= 273.15
        && T <= 623.15
        && P > 0
        && P <= pSat_r1
    )
    {
        return u_R2_T_P(T,P);
    }
    //region 2
    else if
    (
        T > 623.15
        && T <= 863.15
        && P > 0
        && P <= p_r2r3
    )
    {
        return u_R2_T_P(T,P);
    }
    //region 2
    else if
    (
        T > 863.15
        && T <= 1073.15
        && P > 0
        && P <= 100
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
        T >= 273.15
        && T <= 623.15
        && P > 0
        && P <= pSat_r1
    )
    {
        return s_R2_T_P(T,P);
    }
    //region 2
    else if
    (
        T > 623.15
        && T <= 863.15
        && P > 0
        && P <= p_r2r3
    )
    {
        return s_R2_T_P(T,P);
    }
    //region 2
    else if
    (
        T > 863.15
        && T <= 1073.15
        && P > 0
        && P <= 100
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
