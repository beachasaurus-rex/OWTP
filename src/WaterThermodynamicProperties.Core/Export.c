#define DLL_EXPORT __declspec(dllexport)

#include "./Regions/Region1.h"
#include "./Regions/Region2.h"
#include "./Regions/Region3.h"
#include "./Regions/RegionBoundaries.h"

#if _DEBUG
	//Boundary - Region 2 & 3:

	DLL_EXPORT double pi_R2_R3_b(double pressure)
	{
		return _pi_R2_R3_b(pressure);
	}
	DLL_EXPORT double theta_R2_R3_b(double temp)
	{
		return _theta_R2_R3_b(temp);
	}
	DLL_EXPORT double P_R2_R3_b(double theta)
	{
		return _P_R2_R3_b(theta);
	}
	DLL_EXPORT double T_R2_R3_b(double pi)
	{
		return _T_R2_R3_b(pi);
	}

	//REGION 1:
	//properties as functions of temperature and pressure

	DLL_EXPORT double v_T_P_R1(double temp, double press)
	{
		return v_R1_T_P(temp, press);
	}
	DLL_EXPORT double u_T_P_R1(double temp, double press)
	{
		return u_R1_T_P(temp, press);
	}
	DLL_EXPORT double s_T_P_R1(double temp, double press)
	{
		return s_R1_T_P(temp, press);
	}
	DLL_EXPORT double h_T_P_R1(double temp, double press)
	{
		return h_R1_T_P(temp, press);
	}
	DLL_EXPORT double cp_T_P_R1(double temp, double press)
	{
		return cp_R1_T_P(temp, press);
	}
	DLL_EXPORT double cv_T_P_R1(double temp, double press)
	{
		return cv_R1_T_P(temp, press);
	}
	DLL_EXPORT double w_T_P_R1(double temp, double press)
	{
		return w_R1_T_P(temp, press);
	}

	//properties as functions of pressure and enthalpy

	DLL_EXPORT double v_P_h_R1(double press, double enthalpy)
	{
		return v_R1_P_h(press, enthalpy);
	}
	DLL_EXPORT double u_P_h_R1(double press, double enthalpy)
	{
		return u_R1_P_h(press, enthalpy);
	}
	DLL_EXPORT double s_P_h_R1(double press, double enthalpy)
	{
		return s_R1_P_h(press, enthalpy);
	}
	DLL_EXPORT double T_P_h_R1(double press, double enthalpy)
	{
		return T_R1_P_h(press, enthalpy);
	}
	DLL_EXPORT double cp_P_h_R1(double press, double enthalpy)
	{
		return cp_R1_P_h(press, enthalpy);
	}
	DLL_EXPORT double cv_P_h_R1(double press, double enthalpy)
	{
		return cv_R1_P_h(press, enthalpy);
	}
	DLL_EXPORT double w_P_h_R1(double press, double enthalpy)
	{
		return w_R1_P_h(press, enthalpy);
	}

	//properties as functions of pressure and entropy

	DLL_EXPORT double v_P_s_R1(double press, double entropy)
	{
		return v_R1_P_s(press, entropy);
	}
	DLL_EXPORT double u_P_s_R1(double press, double entropy)
	{
		return u_R1_P_s(press, entropy);
	}
	DLL_EXPORT double h_P_s_R1(double press, double entropy)
	{
		return h_R1_P_s(press, entropy);
	}
	DLL_EXPORT double T_P_s_R1(double press, double entropy)
	{
		return T_R1_P_s(press, entropy);
	}
	DLL_EXPORT double cp_P_s_R1(double press, double entropy)
	{
		return cp_R1_P_s(press, entropy);
	}
	DLL_EXPORT double cv_P_s_R1(double press, double entropy)
	{
		return cv_R1_P_s(press, entropy);
	}
	DLL_EXPORT double w_P_s_R1(double press, double entropy)
	{
		return w_R1_P_s(press, entropy);
	}

	//properties as functions of enthalpy and entropy

	DLL_EXPORT double v_h_s_R1(double enthalpy, double entropy)
	{
		return v_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double u_h_s_R1(double enthalpy, double entropy)
	{
		return u_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double P_h_s_R1(double enthalpy, double entropy)
	{
		return P_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double T_h_s_R1(double enthalpy, double entropy)
	{
		return T_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double cp_h_s_R1(double enthalpy, double entropy)
	{
		return cp_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double cv_h_s_R1(double enthalpy, double entropy)
	{
		return cv_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double w_h_s_R1(double enthalpy, double entropy)
	{
		return w_R1_h_s(enthalpy, entropy);
	}

	//REGION 2:
	//properties as functions of temperature and pressure

	DLL_EXPORT double v_T_P_R2(double temp, double press)
	{
		return v_R2_T_P(temp, press);
	}
	DLL_EXPORT double u_T_P_R2(double temp, double press)
	{
		return u_R2_T_P(temp, press);
	}
	DLL_EXPORT double s_T_P_R2(double temp, double press)
	{
		return s_R2_T_P(temp, press);
	}
	DLL_EXPORT double h_T_P_R2(double temp, double press)
	{
		return h_R2_T_P(temp, press);
	}
	DLL_EXPORT double cp_T_P_R2(double temp, double press)
	{
		return cp_R2_T_P(temp, press);
	}
	DLL_EXPORT double cv_T_P_R2(double temp, double press)
	{
		return cv_R2_T_P(temp, press);
	}
	DLL_EXPORT double w_T_P_R2(double temp, double press)
	{
		return w_R2_T_P(temp, press);
	}

	//properties as functions of pressure and enthalpy

	DLL_EXPORT double T_P_h_R2(double press, double enth)
	{
		return T_R2_P_h(press, enth);
	}
	DLL_EXPORT double v_P_h_R2(double press, double enth)
	{
		return v_R2_P_h(press, enth);
	}
	DLL_EXPORT double u_P_h_R2(double press, double enth)
	{
		return u_R2_P_h(press, enth);
	}
	DLL_EXPORT double s_P_h_R2(double press, double enth)
	{
		return s_R2_P_h(press, enth);
	}
	DLL_EXPORT double cp_P_h_R2(double press, double enth)
	{
		return cp_R2_P_h(press, enth);
	}
	DLL_EXPORT double cv_P_h_R2(double press, double enth)
	{
		return cv_R2_P_h(press, enth);
	}
	DLL_EXPORT double w_P_h_R2(double press, double enth)
	{
		return w_R2_P_h(press, enth);
	}

	//properties as functions of pressure and entropy

	DLL_EXPORT double T_P_s_R2(double press, double entr)
	{
		return T_R2_P_s(press, entr);
	}
	DLL_EXPORT double v_P_s_R2(double press, double entr)
	{
		return v_R2_P_s(press, entr);
	}
	DLL_EXPORT double u_P_s_R2(double press, double entr)
	{
		return u_R2_P_s(press, entr);
	}
	DLL_EXPORT double h_P_s_R2(double press, double entr)
	{
		return h_R2_P_s(press, entr);
	}
	DLL_EXPORT double cp_P_s_R2(double press, double entr)
	{
		return cp_R2_P_s(press, entr);
	}
	DLL_EXPORT double cv_P_s_R2(double press, double entr)
	{
		return cv_R2_P_s(press, entr);
	}
	DLL_EXPORT double w_P_s_R2(double press, double entr)
	{
		return w_R2_P_s(press, entr);
	}

	//properties as functions of enthalpy and entropy

	DLL_EXPORT double P_h_s_R2(double enthalpy, double entropy)
	{
		return P_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double T_h_s_R2(double enthalpy, double entropy)
	{
		return T_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double v_h_s_R2(double enthalpy, double entropy)
	{
		return v_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double u_h_s_R2(double enthalpy, double entropy)
	{
		return u_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double cp_h_s_R2(double enthalpy, double entropy)
	{
		return cp_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double cv_h_s_R2(double enthalpy, double entropy)
	{
		return cv_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double w_h_s_R2(double enthalpy, double entropy)
	{
		return w_R2_h_s(enthalpy, entropy);
	}

	//Region 3:
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
#endif
