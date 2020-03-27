#ifndef OWTP_H
	#define OWTP_H
	#include "OWTP.h"
#endif

#ifdef _WIN32
    #define DLLEXPORT __declspec(dllexport)
#else
    #define DLLEXPORT __attribute__((visibility("default")))
#endif

#if _DEBUG
	//Boundary - Around the Metastable Region:

	DLL_EXPORT double h1_prime(double entr)
	{
		return _h1_prime(entr);
	}
	DLL_EXPORT double h3a_prime(double entr)
	{
		return _h3a_prime(entr);
	}
	DLL_EXPORT double h2ab_s_2prime(double entr)
	{
		return _h2ab_s_2prime(entr);
	}
	DLL_EXPORT double h2c3b_s_2prime(double entr)
	{
		return _h2c3b_s_2prime(entr);
	}
	DLL_EXPORT double hB13_s(double entr)
	{
		return _hB13_s(entr);
	}
	DLL_EXPORT double TB23_s(double enth, double entr)
	{
		return _TB23_s(enth, entr);
	}

	//Boundary - Region 2 & 3:

	DLL_EXPORT double P_T_R2_R3_b(double temp)
	{
		return _P_T_R2_R3_b(temp);
	}
	DLL_EXPORT double T_P_R2_R3_b(double press)
	{
		return _T_P_R2_R3_b(press);
	}

	//Boundary - Region 3 & 4:

	DLL_EXPORT double PSat_T_R3_R4_b(double temp)
	{
		return _PSat_T_R3_R4_b(temp);
	}
	DLL_EXPORT double TSat_P_R3_R4_b(double press)
	{
		return _TSat_P_R3_R4_b(press);
	}
	DLL_EXPORT double PSat_s_R3_R4_b(double entr)
	{
		return _PSat_s_R3_R4_b(entr);
	}

	//REGION 1:
	//properties as functions of temperature and pressure

	DLL_EXPORT double v_P_T_R1(double press, double temp)
	{
		return _v_P_T_R1(press,temp);
	}
	DLL_EXPORT double u_P_T_R1(double press, double temp)
	{
		return _u_P_T_R1(press,temp);
	}
	DLL_EXPORT double s_P_T_R1(double press, double temp)
	{
		return _s_P_T_R1(press,temp);
	}
	DLL_EXPORT double h_P_T_R1(double press, double temp)
	{
		return _h_P_T_R1(press,temp);
	}
	DLL_EXPORT double cp_P_T_R1(double press, double temp)
	{
		return _cp_P_T_R1(press,temp);
	}
	DLL_EXPORT double cv_P_T_R1(double press, double temp)
	{
		return _cv_P_T_R1(press,temp);
	}
	DLL_EXPORT double w_P_T_R1(double press, double temp)
	{
		return _w_P_T_R1(press,temp);
	}

	//properties as functions of pressure and enthalpy

	DLL_EXPORT double v_P_h_R1(double press, double enthalpy)
	{
		return _v_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double u_P_h_R1(double press, double enthalpy)
	{
		return _u_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double s_P_h_R1(double press, double enthalpy)
	{
		return _s_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double T_P_h_R1(double press, double enthalpy)
	{
		return _T_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double cp_P_h_R1(double press, double enthalpy)
	{
		return _cp_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double cv_P_h_R1(double press, double enthalpy)
	{
		return _cv_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double w_P_h_R1(double press, double enthalpy)
	{
		return _w_P_h_R1(press, enthalpy);
	}

	//properties as functions of pressure and entropy

	DLL_EXPORT double v_P_s_R1(double press, double entropy)
	{
		return _v_P_s_R1(press, entropy);
	}
	DLL_EXPORT double u_P_s_R1(double press, double entropy)
	{
		return _u_P_s_R1(press, entropy);
	}
	DLL_EXPORT double h_P_s_R1(double press, double entropy)
	{
		return _h_P_s_R1(press, entropy);
	}
	DLL_EXPORT double T_P_s_R1(double press, double entropy)
	{
		return _T_P_s_R1(press, entropy);
	}
	DLL_EXPORT double cp_P_s_R1(double press, double entropy)
	{
		return _cp_P_s_R1(press, entropy);
	}
	DLL_EXPORT double cv_P_s_R1(double press, double entropy)
	{
		return _cv_P_s_R1(press, entropy);
	}
	DLL_EXPORT double w_P_s_R1(double press, double entropy)
	{
		return _w_P_s_R1(press, entropy);
	}

	//properties as functions of enthalpy and entropy

	DLL_EXPORT double v_h_s_R1(double enthalpy, double entropy)
	{
		return _v_h_s_R1(enthalpy, entropy);
	}
	DLL_EXPORT double u_h_s_R1(double enthalpy, double entropy)
	{
		return _u_h_s_R1(enthalpy, entropy);
	}
	DLL_EXPORT double P_h_s_R1(double enthalpy, double entropy)
	{
		return _P_h_s_R1(enthalpy, entropy);
	}
	DLL_EXPORT double T_h_s_R1(double enthalpy, double entropy)
	{
		return _T_h_s_R1(enthalpy, entropy);
	}
	DLL_EXPORT double cp_h_s_R1(double enthalpy, double entropy)
	{
		return _cp_h_s_R1(enthalpy, entropy);
	}
	DLL_EXPORT double cv_h_s_R1(double enthalpy, double entropy)
	{
		return _cv_h_s_R1(enthalpy, entropy);
	}
	DLL_EXPORT double w_h_s_R1(double enthalpy, double entropy)
	{
		return _w_h_s_R1(enthalpy, entropy);
	}

	//REGION 2:
	//properties as functions of temperature and pressure

	DLL_EXPORT double v_P_T_R2(double press, double temp)
	{
		return _v_P_T_R2(press,temp);
	}
	DLL_EXPORT double u_P_T_R2(double press, double temp)
	{
		return _u_P_T_R2(press,temp);
	}
	DLL_EXPORT double s_P_T_R2(double press, double temp)
	{
		return _s_P_T_R2(press,temp);
	}
	DLL_EXPORT double h_P_T_R2(double press, double temp)
	{
		return _h_P_T_R2(press,temp);
	}
	DLL_EXPORT double cp_P_T_R2(double press, double temp)
	{
		return _cp_P_T_R2(press,temp);
	}
	DLL_EXPORT double cv_P_T_R2(double press, double temp)
	{
		return _cv_P_T_R2(press,temp);
	}
	DLL_EXPORT double w_P_T_R2(double press, double temp)
	{
		return _w_P_T_R2(press,temp);
	}

	//properties as functions of pressure and enthalpy

	DLL_EXPORT double T_P_h_R2(double press, double enth)
	{
		return _T_P_h_R2(press, enth);
	}
	DLL_EXPORT double v_P_h_R2(double press, double enth)
	{
		return _v_P_h_R2(press, enth);
	}
	DLL_EXPORT double u_P_h_R2(double press, double enth)
	{
		return _u_P_h_R2(press, enth);
	}
	DLL_EXPORT double s_P_h_R2(double press, double enth)
	{
		return _s_P_h_R2(press, enth);
	}
	DLL_EXPORT double cp_P_h_R2(double press, double enth)
	{
		return _cp_P_h_R2(press, enth);
	}
	DLL_EXPORT double cv_P_h_R2(double press, double enth)
	{
		return _cv_P_h_R2(press, enth);
	}
	DLL_EXPORT double w_P_h_R2(double press, double enth)
	{
		return _w_P_h_R2(press, enth);
	}

	//properties as functions of pressure and entropy

	DLL_EXPORT double T_P_s_R2(double press, double entr)
	{
		return _T_P_s_R2(press, entr);
	}
	DLL_EXPORT double v_P_s_R2(double press, double entr)
	{
		return _v_P_s_R2(press, entr);
	}
	DLL_EXPORT double u_P_s_R2(double press, double entr)
	{
		return _u_P_s_R2(press, entr);
	}
	DLL_EXPORT double h_P_s_R2(double press, double entr)
	{
		return _h_P_s_R2(press, entr);
	}
	DLL_EXPORT double cp_P_s_R2(double press, double entr)
	{
		return _cp_P_s_R2(press, entr);
	}
	DLL_EXPORT double cv_P_s_R2(double press, double entr)
	{
		return _cv_P_s_R2(press, entr);
	}
	DLL_EXPORT double w_P_s_R2(double press, double entr)
	{
		return _w_P_s_R2(press, entr);
	}

	//properties as functions of enthalpy and entropy

	DLL_EXPORT double P_h_s_R2(double enthalpy, double entropy)
	{
		return _P_h_s_R2(enthalpy, entropy);
	}
	DLL_EXPORT double T_h_s_R2(double enthalpy, double entropy)
	{
		return _T_h_s_R2(enthalpy, entropy);
	}
	DLL_EXPORT double v_h_s_R2(double enthalpy, double entropy)
	{
		return _v_h_s_R2(enthalpy, entropy);
	}
	DLL_EXPORT double u_h_s_R2(double enthalpy, double entropy)
	{
		return _u_h_s_R2(enthalpy, entropy);
	}
	DLL_EXPORT double cp_h_s_R2(double enthalpy, double entropy)
	{
		return _cp_h_s_R2(enthalpy, entropy);
	}
	DLL_EXPORT double cv_h_s_R2(double enthalpy, double entropy)
	{
		return _cv_h_s_R2(enthalpy, entropy);
	}
	DLL_EXPORT double w_h_s_R2(double enthalpy, double entropy)
	{
		return _w_h_s_R2(enthalpy, entropy);
	}

	//Region 3:
	//subregion boundary equations T(P)

	DLL_EXPORT double T_P_R3ab(double pressure)
	{
		return _T_P_R3ab(pressure);
	}
	DLL_EXPORT double T_P_R3cd(double pressure)
	{
		return _T_P_R3cd(pressure);
	}
	DLL_EXPORT double T_P_R3ef(double pressure)
	{
		return _T_P_R3ef(pressure);
	}
	DLL_EXPORT double T_P_R3gh(double pressure)
	{
		return _T_P_R3gh(pressure);
	}
	DLL_EXPORT double T_P_R3ij(double pressure)
	{
		return _T_P_R3ij(pressure);
	}
	DLL_EXPORT double T_P_R3jk(double pressure)
	{
		return _T_P_R3jk(pressure);
	}
	DLL_EXPORT double T_P_R3mn(double pressure)
	{
		return _T_P_R3mn(pressure);
	}
	DLL_EXPORT double T_P_R3op(double pressure)
	{
		return _T_P_R3op(pressure);
	}
	DLL_EXPORT double T_P_R3qu(double pressure)
	{
		return _T_P_R3qu(pressure);
	}
	DLL_EXPORT double T_P_R3rx(double pressure)
	{
		return _T_P_R3rx(pressure);
	}
	DLL_EXPORT double T_P_R3uv(double pressure)
	{
		return _T_P_R3uv(pressure);
	}
	DLL_EXPORT double T_P_R3wx(double pressure)
	{
		return _T_P_R3wx(pressure);
	}

	//subregion boundary equations v(P,T)

	DLL_EXPORT double v_P_T_R3a(double press, double temp)
	{
		return _v_P_T_R3a(press,temp);
	}
	DLL_EXPORT double v_P_T_R3b(double press, double temp)
	{
		return _v_P_T_R3b(press,temp);
	}
	DLL_EXPORT double v_P_T_R3c(double press, double temp)
	{
		return _v_P_T_R3c(press,temp);
	}
	DLL_EXPORT double v_P_T_R3d(double press, double temp)
	{
		return _v_P_T_R3d(press,temp);
	}
	DLL_EXPORT double v_P_T_R3e(double press, double temp)
	{
		return _v_P_T_R3e(press,temp);
	}
	DLL_EXPORT double v_P_T_R3f(double press, double temp)
	{
		return _v_P_T_R3f(press,temp);
	}
	DLL_EXPORT double v_P_T_R3g(double press, double temp)
	{
		return _v_P_T_R3g(press,temp);
	}
	DLL_EXPORT double v_P_T_R3h(double press, double temp)
	{
		return _v_P_T_R3h(press,temp);
	}
	DLL_EXPORT double v_P_T_R3i(double press, double temp)
	{
		return _v_P_T_R3i(press,temp);
	}
	DLL_EXPORT double v_P_T_R3j(double press, double temp)
	{
		return _v_P_T_R3j(press,temp);
	}
	DLL_EXPORT double v_P_T_R3k(double press, double temp)
	{
		return _v_P_T_R3k(press,temp);
	}
	DLL_EXPORT double v_P_T_R3l(double press, double temp)
	{
		return _v_P_T_R3l(press,temp);
	}
	DLL_EXPORT double v_P_T_R3m(double press, double temp)
	{
		return _v_P_T_R3m(press,temp);
	}
	DLL_EXPORT double v_P_T_R3n(double press, double temp)
	{
		return _v_P_T_R3n(press,temp);
	}
	DLL_EXPORT double v_P_T_R3o(double press, double temp)
	{
		return _v_P_T_R3o(press,temp);
	}
	DLL_EXPORT double v_P_T_R3p(double press, double temp)
	{
		return _v_P_T_R3p(press,temp);
	}
	DLL_EXPORT double v_P_T_R3q(double press, double temp)
	{
		return _v_P_T_R3q(press,temp);
	}
	DLL_EXPORT double v_P_T_R3r(double press, double temp)
	{
		return _v_P_T_R3r(press,temp);
	}
	DLL_EXPORT double v_P_T_R3s(double press, double temp)
	{
		return _v_P_T_R3s(press,temp);
	}
	DLL_EXPORT double v_P_T_R3t(double press, double temp)
	{
		return _v_P_T_R3t(press,temp);
	}
	DLL_EXPORT double v_P_T_R3u(double press, double temp)
	{
		return _v_P_T_R3u(press,temp);
	}
	DLL_EXPORT double v_P_T_R3v(double press, double temp)
	{
		return _v_P_T_R3v(press,temp);
	}
	DLL_EXPORT double v_P_T_R3w(double press, double temp)
	{
		return _v_P_T_R3w(press,temp);
	}
	DLL_EXPORT double v_P_T_R3x(double press, double temp)
	{
		return _v_P_T_R3x(press,temp);
	}
	DLL_EXPORT double v_P_T_R3y(double press, double temp)
	{
		return _v_P_T_R3y(press,temp);
	}
	DLL_EXPORT double v_P_T_R3z(double press, double temp)
	{
		return _v_P_T_R3z(press,temp);
	}

	//subregion boundary equations T(P,h)

	DLL_EXPORT double T_P_h_R3a(double press, double enth)
	{
		return _T_P_h_R3a(press,enth);
	}
	DLL_EXPORT double T_P_h_R3b(double press, double enth)
	{
		return _T_P_h_R3b(press,enth);
	}

	//subregion boundary equations v(P,h)

	DLL_EXPORT double v_P_h_R3a(double press, double enth)
	{
		return _v_P_h_R3a(press,enth);
	}
	DLL_EXPORT double v_P_h_R3b(double press, double enth)
	{
		return _v_P_h_R3b(press,enth);
	}

	//subregion boundary equation h(P)

	DLL_EXPORT double h_P_R3ab(double press)
	{
		return _h_P_R3ab(press);
	}

	//subregion boundary equation PSat(P,h)

	DLL_EXPORT double PSat_h_R3_R4_b(double enth)
	{
		return _PSat_h_R3_R4_b(enth);
	}

	//subregion boundary equations T(P,s)

	DLL_EXPORT double T_P_s_R3a(double press, double entr)
	{
		return _T_P_s_R3a(press, entr);
	}
	DLL_EXPORT double T_P_s_R3b(double press, double entr)
	{
		return _T_P_s_R3b(press, entr);
	}

	//subregion boundary equations v(P,s)

	DLL_EXPORT double v_P_s_R3a(double press, double entr)
	{
		return _v_P_s_R3a(press, entr);
	}
	DLL_EXPORT double v_P_s_R3b(double press, double entr)
	{
		return _v_P_s_R3b(press, entr);
	}

	//properties as functions of density and temperature

	DLL_EXPORT double P_Rho_T_R3(double rho, double temp)
	{
		return _P_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double u_Rho_T_R3(double rho, double temp)
	{
		return _u_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double s_Rho_T_R3(double rho, double temp)
	{
		return _s_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double h_Rho_T_R3(double rho, double temp)
	{
		return _h_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double cp_Rho_T_R3(double rho, double temp)
	{
		return _cp_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double cv_Rho_T_R3(double rho, double temp)
	{
		return _cv_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double w_Rho_T_R3(double rho, double temp)
	{
		return _w_Rho_T_R3(rho, temp);
	}

	//properties as functions of specific volume and temperature

	DLL_EXPORT double P_v_T_R3(double v, double temp)
	{
		return _P_v_T_R3(v, temp);
	}
	DLL_EXPORT double u_v_T_R3(double v, double temp)
	{
		return _u_v_T_R3(v, temp);
	}
	DLL_EXPORT double s_v_T_R3(double v, double temp)
	{
		return _s_v_T_R3(v, temp);
	}
	DLL_EXPORT double h_v_T_R3(double v, double temp)
	{
		return _h_v_T_R3(v, temp);
	}
	DLL_EXPORT double cp_v_T_R3(double v, double temp)
	{
		return _cp_v_T_R3(v, temp);
	}
	DLL_EXPORT double cv_v_T_R3(double v, double temp)
	{
		return _cv_v_T_R3(v, temp);
	}
	DLL_EXPORT double w_v_T_R3(double v, double temp)
	{
		return _w_v_T_R3(v, temp);
	}

	//properties as functions of pressure and temperature

	DLL_EXPORT double v_P_T_R3(double press, double temp)
	{
		return _v_P_T_R3(press,temp);
	}
	DLL_EXPORT double u_P_T_R3(double press, double temp)
	{
		return _u_P_T_R3(press,temp);
	}
	DLL_EXPORT double s_P_T_R3(double press, double temp)
	{
		return _s_P_T_R3(press,temp);
	}
	DLL_EXPORT double h_P_T_R3(double press, double temp)
	{
		return _h_P_T_R3(press,temp);
	}
	DLL_EXPORT double cv_P_T_R3(double press, double temp)
	{
		return _cv_P_T_R3(press,temp);
	}
	DLL_EXPORT double cp_P_T_R3(double press, double temp)
	{
		return _cp_P_T_R3(press,temp);
	}
	DLL_EXPORT double w_P_T_R3(double press, double temp)
	{
		return _w_P_T_R3(press,temp);
	}

    //properties as functions of pressure and enthalpy

    DLL_EXPORT double v_P_h_R3(double press, double enth)
	{
		return _v_P_h_R3(press,enth);
	}
    DLL_EXPORT double T_P_h_R3(double press, double enth)
	{
		return _T_P_h_R3(press,enth);
	}
    DLL_EXPORT double u_P_h_R3(double press, double enth)
	{
		return _u_P_h_R3(press,enth);
	}
    DLL_EXPORT double s_P_h_R3(double press, double enth)
    {
        return _s_P_h_R3(press,enth);
    }
    DLL_EXPORT double cv_P_h_R3(double press, double enth)
	{
		return _cv_P_h_R3(press,enth);
	}
    DLL_EXPORT double cp_P_h_R3(double press, double enth)
	{
		return _cp_P_h_R3(press,enth);
	}
    DLL_EXPORT double w_P_h_R3(double press, double enth)
	{
		return _w_P_h_R3(press,enth);
	}

    //properties as functions of pressure and entropy

    DLL_EXPORT double v_P_s_R3(double press, double entr)
	{
		return _v_P_s_R3(press,entr);
	}
    DLL_EXPORT double T_P_s_R3(double press, double entr)
	{
		return _T_P_s_R3(press,entr);
	}
    DLL_EXPORT double u_P_s_R3(double press, double entr)
	{
		return _u_P_s_R3(press,entr);
	}
    DLL_EXPORT double h_P_s_R3(double press, double entr)
    {
        return _h_P_s_R3(press,entr);
    }
    DLL_EXPORT double cv_P_s_R3(double press, double entr)
	{
		return _cv_P_s_R3(press,entr);
	}
    DLL_EXPORT double cp_P_s_R3(double press, double entr)
	{
		return _cp_P_s_R3(press,entr);
	}
    DLL_EXPORT double w_P_s_R3(double press, double entr)
	{
		return _w_P_s_R3(press,entr);
	}

	//properties as functions of enthalpy and entropy

	DLL_EXPORT double P_h_s_R3a(double enth, double entr)
	{
		return _P_h_s_R3a(enth,entr);
	}
	DLL_EXPORT double P_h_s_R3b(double enth, double entr)
	{
		return _P_h_s_R3b(enth,entr);
	}
	DLL_EXPORT double P_h_s_R3(double enth, double entr)
	{
		return _P_h_s_R3(enth,entr);
	}
	DLL_EXPORT double T_h_s_R3(double h, double s)
	{
		return _T_h_s_R3(h,s);
	}
	DLL_EXPORT double v_h_s_R3(double h, double s)
	{
		return _v_h_s_R3(h,s);
	}
	DLL_EXPORT double u_h_s_R3(double h, double s)
	{
		return _u_h_s_R3(h,s);
	}
	DLL_EXPORT double cv_h_s_R3(double h, double s)
	{
		return _cv_h_s_R3(h,s);
	}
	DLL_EXPORT double cp_h_s_R3(double h, double s)
	{
		return _cp_h_s_R3(h,s);
	}
	DLL_EXPORT double w_h_s_R3(double h, double s)
	{
		return _w_h_s_R3(h,s);
	}

	//Region 4:

	DLL_EXPORT double Psat_T_R4(double T)
	{
		return _Psat_T_R4(T);
	}
	DLL_EXPORT double Tsat_P_R4(double P)
	{
		return _Tsat_P_R4(P);
	}
	DLL_EXPORT double Tsat_h_s_R4(double enth, double entr)
	{
		return _Tsat_h_s_R4(enth,entr);
	}
	DLL_EXPORT double Psat_h_s_R4(double h, double s)
	{
		return _Psat_h_s_R4(h,s);
	}
	DLL_EXPORT double x_h_s_R4(double h, double s)
	{
		return _x_h_s_R4(h,s);
	}

    DLL_EXPORT double v_P_x_R4(double P, double x)
    {
        return _v_P_x_R4(P,x);
    }
    DLL_EXPORT double h_P_x_R4(double P, double x)
    {
        return _h_P_x_R4(P,x);
    }
    DLL_EXPORT double s_P_x_R4(double P, double x)
    {
        return _s_P_x_R4(P,x);
    }
    DLL_EXPORT double u_P_x_R4(double P, double x)
    {
        return _u_P_x_R4(P,x);
    }

    DLL_EXPORT double v_T_x_R4(double T, double x)
    {
        return _v_T_x_R4(T,x);
    }
    DLL_EXPORT double h_T_x_R4(double T, double x)
    {
        return _h_T_x_R4(T,x);
    }
    DLL_EXPORT double s_T_x_R4(double T, double x)
    {
        return _s_T_x_R4(T,x);
    }
    DLL_EXPORT double u_T_x_R4(double T, double x)
    {
        return _u_T_x_R4(T,x);
    }

	//Region 5:

	DLL_EXPORT double v_P_T_R5(double P, double T)
	{
		return _v_P_T_R5(P,T);
	}
	DLL_EXPORT double u_P_T_R5(double P, double T)
	{
		return _u_P_T_R5(P,T);
	}
	DLL_EXPORT double s_P_T_R5(double P, double T)
	{
		return _s_P_T_R5(P,T);
	}
	DLL_EXPORT double h_P_T_R5(double P, double T)
	{
		return _h_P_T_R5(P,T);
	}
	DLL_EXPORT double cp_P_T_R5(double P, double T)
	{
		return _cp_P_T_R5(P,T);
	}
	DLL_EXPORT double cv_P_T_R5(double P, double T)
	{
		return _cv_P_T_R5(P,T);
	}
	DLL_EXPORT double w_P_T_R5(double P, double T)
	{
		return _w_P_T_R5(P,T);
	}
#endif

DLL_EXPORT double v_P_T(double P, double T)
{
	return _v_P_T(P,T);
}
DLL_EXPORT double u_P_T(double P, double T)
{
	return _u_P_T(P,T);
}
DLL_EXPORT double s_P_T(double P, double T)
{
	return _s_P_T(P,T);
}
DLL_EXPORT double h_P_T(double P, double T)
{
	return _h_P_T(P,T);
}
DLL_EXPORT double cp_P_T(double P, double T)
{
	return _cp_P_T(P,T);
}
DLL_EXPORT double cv_P_T(double P, double T)
{
	return _cv_P_T(P,T);
}
DLL_EXPORT double w_P_T(double P, double T)
{
	return _w_P_T(P,T);
}

DLL_EXPORT double T_P_h(double P, double h)
{
    return _T_P_h(P,h);
}
DLL_EXPORT double v_P_h(double P, double h)
{
    return _v_P_h(P,h);
}
DLL_EXPORT double s_P_h(double P, double h)
{
    return _s_P_h(P,h);
}
DLL_EXPORT double u_P_h(double P, double h)
{
    return _u_P_h(P,h);
}
DLL_EXPORT double cp_P_h(double P, double h)
{
    return _cp_P_h(P,h);
}
DLL_EXPORT double cv_P_h(double P, double h)
{
    return _cv_P_h(P,h);
}
DLL_EXPORT double w_P_h(double P, double h)
{
    return _w_P_h(P,h);
}

DLL_EXPORT double T_P_s(double P, double s)
{
    return _T_P_s(P,s);
}
DLL_EXPORT double v_P_s(double P, double s)
{
    return _v_P_s(P,s);
}
DLL_EXPORT double h_P_s(double P, double s)
{
    return _h_P_s(P,s);
}
DLL_EXPORT double u_P_s(double P, double s)
{
    return _u_P_s(P,s);
}
DLL_EXPORT double cp_P_s(double P, double s)
{
    return _cp_P_s(P,s);
}
DLL_EXPORT double cv_P_s(double P, double s)
{
    return _cv_P_s(P,s);
}
DLL_EXPORT double w_P_s(double P, double s)
{
    return _w_P_s(P,s);
}

DLL_EXPORT double T_h_s(double h, double s)
{
    return _T_h_s(h,s);
}
DLL_EXPORT double P_h_s(double h, double s)
{
    return _P_h_s(h,s);
}
DLL_EXPORT double v_h_s(double h, double s)
{
    return _v_h_s(h,s);
}
DLL_EXPORT double u_h_s(double h, double s)
{
    return _u_h_s(h,s);
}
DLL_EXPORT double cv_h_s(double h, double s)
{
    return _cv_h_s(h,s);
}
DLL_EXPORT double cp_h_s(double h, double s)
{
    return _cp_h_s(h,s);
}
DLL_EXPORT double w_h_s(double h, double s)
{
    return _w_h_s(h,s);
}

DLL_EXPORT double PSat_T(double T)
{
    return _Psat_T_R4(T);
}
DLL_EXPORT double v_T_x(double T, double x)
{
    return _v_T_x_R4(T,x);
}
DLL_EXPORT double u_T_x(double T, double x)
{
    return _u_T_x_R4(T,x);
}
DLL_EXPORT double h_T_x(double T, double x)
{
    return _h_T_x_R4(T,x);
}
DLL_EXPORT double s_T_x(double T, double x)
{
    return _s_T_x_R4(T,x);
}

DLL_EXPORT double TSat_P(double P)
{
    return _Tsat_P_R4(P);
}
DLL_EXPORT double v_P_x(double P, double x)
{
    return _v_P_x_R4(P,x);
}
DLL_EXPORT double u_P_x(double P, double x)
{
    return _u_P_x_R4(P,x);
}
DLL_EXPORT double h_P_x(double P, double x)
{
    return _h_P_x_R4(P,x);
}
DLL_EXPORT double s_P_x(double P, double x)
{
    return _s_P_x_R4(P,x);
}
