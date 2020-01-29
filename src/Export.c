#ifndef ALL_H
	#define ALL_H
	#include "All.h"
#endif

#define DLL_EXPORT __declspec(dllexport)

#if _DEBUG
	//Boundary - Region 2 & 3:

	DLL_EXPORT double P_R2_R3_b(double temp)
	{
		return _P_R2_R3_b(temp);
	}
	DLL_EXPORT double T_R2_R3_b(double press)
	{
		return _T_R2_R3_b(press);
	}

	//Boundary - Region 3 & 4:

	DLL_EXPORT double pSat_R3_R4_b(double temp)
	{
		return _pSat_R3_R4_b(temp);
	}
	DLL_EXPORT double tSat_R3_R4_b(double press)
	{
		return _tSat_R3_R4_b(press);
	}
	DLL_EXPORT double pSat_s_R3_R4(double entr)
	{
		return _pSat_s_R3_R4(entr);
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
	//subregion boundary equations T(P)

	DLL_EXPORT double T3ab_v_T_P(double pressure)
	{
		return _T3ab_v_T_P(pressure);
	}
	DLL_EXPORT double T3cd_v_T_P(double pressure)
	{
		return _T3cd_v_T_P(pressure);
	}
	DLL_EXPORT double T3ef_v_T_P(double pressure)
	{
		return _T3ef_v_T_P(pressure);
	}
	DLL_EXPORT double T3gh_v_T_P(double pressure)
	{
		return _T3gh_v_T_P(pressure);
	}
	DLL_EXPORT double T3ij_v_T_P(double pressure)
	{
		return _T3ij_v_T_P(pressure);
	}
	DLL_EXPORT double T3jk_v_T_P(double pressure)
	{
		return _T3jk_v_T_P(pressure);
	}
	DLL_EXPORT double T3mn_v_T_P(double pressure)
	{
		return _T3mn_v_T_P(pressure);
	}
	DLL_EXPORT double T3op_v_T_P(double pressure)
	{
		return _T3op_v_T_P(pressure);
	}
	DLL_EXPORT double T3qu_v_T_P(double pressure)
	{
		return _T3qu_v_T_P(pressure);
	}
	DLL_EXPORT double T3rx_v_T_P(double pressure)
	{
		return _T3rx_v_T_P(pressure);
	}
	DLL_EXPORT double T3uv_v_T_P(double pressure)
	{
		return _T3uv_v_T_P(pressure);
	}
	DLL_EXPORT double T3wx_v_T_P(double pressure)
	{
		return _T3wx_v_T_P(pressure);
	}

	//subregion boundary equations v(P,T)

	DLL_EXPORT double va_P_T(double press, double temp)
	{
		return _va_P_T(press,temp);
	}
	DLL_EXPORT double vb_P_T(double press, double temp)
	{
		return _vb_P_T(press,temp);
	}
	DLL_EXPORT double vc_P_T(double press, double temp)
	{
		return _vc_P_T(press,temp);
	}
	DLL_EXPORT double vd_P_T(double press, double temp)
	{
		return _vd_P_T(press,temp);
	}
	DLL_EXPORT double ve_P_T(double press, double temp)
	{
		return _ve_P_T(press,temp);
	}
	DLL_EXPORT double vf_P_T(double press, double temp)
	{
		return _vf_P_T(press,temp);
	}
	DLL_EXPORT double vg_P_T(double press, double temp)
	{
		return _vg_P_T(press,temp);
	}
	DLL_EXPORT double vh_P_T(double press, double temp)
	{
		return _vh_P_T(press,temp);
	}
	DLL_EXPORT double vi_P_T(double press, double temp)
	{
		return _vi_P_T(press,temp);
	}
	DLL_EXPORT double vj_P_T(double press, double temp)
	{
		return _vj_P_T(press,temp);
	}
	DLL_EXPORT double vk_P_T(double press, double temp)
	{
		return _vk_P_T(press,temp);
	}
	DLL_EXPORT double vl_P_T(double press, double temp)
	{
		return _vl_P_T(press,temp);
	}
	DLL_EXPORT double vm_P_T(double press, double temp)
	{
		return _vm_P_T(press,temp);
	}
	DLL_EXPORT double vn_P_T(double press, double temp)
	{
		return _vn_P_T(press,temp);
	}
	DLL_EXPORT double vo_P_T(double press, double temp)
	{
		return _vo_P_T(press,temp);
	}
	DLL_EXPORT double vp_P_T(double press, double temp)
	{
		return _vp_P_T(press,temp);
	}
	DLL_EXPORT double vq_P_T(double press, double temp)
	{
		return _vq_P_T(press,temp);
	}
	DLL_EXPORT double vr_P_T(double press, double temp)
	{
		return _vr_P_T(press,temp);
	}
	DLL_EXPORT double vs_P_T(double press, double temp)
	{
		return _vs_P_T(press,temp);
	}
	DLL_EXPORT double vt_P_T(double press, double temp)
	{
		return _vt_P_T(press,temp);
	}
	DLL_EXPORT double vu_P_T(double press, double temp)
	{
		return _vu_P_T(press,temp);
	}
	DLL_EXPORT double vv_P_T(double press, double temp)
	{
		return _vv_P_T(press,temp);
	}
	DLL_EXPORT double vw_P_T(double press, double temp)
	{
		return _vw_P_T(press,temp);
	}
	DLL_EXPORT double vx_P_T(double press, double temp)
	{
		return _vx_P_T(press,temp);
	}
	DLL_EXPORT double vy_P_T(double press, double temp)
	{
		return _vy_P_T(press,temp);
	}
	DLL_EXPORT double vz_P_T(double press, double temp)
	{
		return _vz_P_T(press,temp);
	}

	//subregion boundary equations T(P,h)

	DLL_EXPORT double T_R3a_P_h(double press, double enth)
	{
		return _T_R3a_P_h(press,enth);
	}
	DLL_EXPORT double T_R3b_P_h(double press, double enth)
	{
		return _T_R3b_P_h(press,enth);
	}
	DLL_EXPORT double T_P_h_R3(double press, double enth)
	{
		return _T_P_h_R3(press,enth);
	}

	//subregion boundary equations v(P,h)

	DLL_EXPORT double v_R3a_P_h(double press, double enth)
	{
		return _v_R3a_P_h(press,enth);
	}
	DLL_EXPORT double v_R3b_P_h(double press, double enth)
	{
		return _v_R3b_P_h(press,enth);
	}
	DLL_EXPORT double v_P_h_R3(double press, double enth)
	{
		return _v_P_h_R3(press,enth);
	}

	//subregion boundary equation h(P)

	DLL_EXPORT double h_R3ab_P(double press)
	{
		return _h_R3ab_P(press);
	}

	//subregion boundary equation PSat(P,h)

	DLL_EXPORT double pSat_h_R3_R4(double enth)
	{
		return _pSat_h_R3_R4(enth);
	}

	//subregion boundary equations T(P,s)

	DLL_EXPORT double T_R3a_P_s(double press, double entr)
	{
		return _T_R3a_P_s(press, entr);
	}
	DLL_EXPORT double T_R3b_P_s(double press, double entr)
	{
		return _T_R3b_P_s(press, entr);
	}

	//subregion boundary equations v(P,s)

	DLL_EXPORT double v_R3a_P_s(double press, double entr)
	{
		return _v_R3a_P_s(press, entr);
	}
	DLL_EXPORT double v_R3b_P_s(double press, double entr)
	{
		return _v_R3b_P_s(press, entr);
	}
	DLL_EXPORT double v_P_s_R3(double press, double entr)
	{
		return _v_P_s_R3(press,entr);
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
#endif
