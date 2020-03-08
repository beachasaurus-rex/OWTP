#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "ReferenceConstants.h"
#endif

//Gibbs Free Energy Functions

//gibbs(pi, tau)
static double _gibbs_R1(double pi, double tau)
{
	const double _Ii_R1[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 8, 8, 21, 23, 29, 30, 31, 32 };
	const double _Ji_R1[35] = { -2, -1, 0, 1, 2, 3, 4, 5, -9, -7, -1, 0, 1, 3, -3, 0, 1, 3, 17, -4, 0, 6, -5, -2, 10, -8, -11, -6, -29, -31, -38, -39, -40, -41 };
	const double _ni_R1[35] = { 0.14632971213167, -0.84548187169114, -3.756360367204, 3.3855169168385, -0.95791963387872, 0.15772038513228, -0.016616417199501, 8.1214629983568E-04, 2.8319080123804E-04, -6.0706301565874E-04, -0.018990068218419, -0.032529748770505, -0.021841717175414, -5.283835796993E-05, -4.7184321073267E-04, -3.0001780793026E-04, 4.7661393906987E-05, -4.4141845330846E-06, -7.2694996297594E-16, -3.1679644845054E-05, -2.8270797985312E-06, -8.5205128120103E-10, -2.2425281908E-06, -6.5171222895601E-07, -1.4341729937924E-13, -4.0516996860117E-07, -1.2734301741641E-09, -1.7424871230634E-10, -6.8762131295531E-19, 1.4478307828521E-20, 2.6335781662795E-23, -1.1947622640071E-23, 1.8228094581404E-24, -9.3537087292458E-26 };
	const int N = 35;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _ni_R1[i] * pow((7.1 - pi), _Ii_R1[i]) * pow((tau - 1.222), _Ji_R1[i]);
	}

	return sum;
}
//d(gibs(pi, tau)) / dpi
static double _gibbs_dpi_R1(double pi, double tau)
{
	const double _Ii_R1[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 8, 8, 21, 23, 29, 30, 31, 32 };
	const double _Ji_R1[35] = { -2, -1, 0, 1, 2, 3, 4, 5, -9, -7, -1, 0, 1, 3, -3, 0, 1, 3, 17, -4, 0, 6, -5, -2, 10, -8, -11, -6, -29, -31, -38, -39, -40, -41 };
	const double _ni_R1[35] = { 0.14632971213167, -0.84548187169114, -3.756360367204, 3.3855169168385, -0.95791963387872, 0.15772038513228, -0.016616417199501, 8.1214629983568E-04, 2.8319080123804E-04, -6.0706301565874E-04, -0.018990068218419, -0.032529748770505, -0.021841717175414, -5.283835796993E-05, -4.7184321073267E-04, -3.0001780793026E-04, 4.7661393906987E-05, -4.4141845330846E-06, -7.2694996297594E-16, -3.1679644845054E-05, -2.8270797985312E-06, -8.5205128120103E-10, -2.2425281908E-06, -6.5171222895601E-07, -1.4341729937924E-13, -4.0516996860117E-07, -1.2734301741641E-09, -1.7424871230634E-10, -6.8762131295531E-19, 1.4478307828521E-20, 2.6335781662795E-23, -1.1947622640071E-23, 1.8228094581404E-24, -9.3537087292458E-26 };
	const int N = 35;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + (-1) * _Ii_R1[i] * _ni_R1[i] * pow((7.1 - pi), (_Ii_R1[i] - 1)) * pow((tau - 1.222), _Ji_R1[i]);
	}

	return sum;
}
//d^2(gibs(pi, tau)) / (dpi)^2
static double _gibbs_ddpi_R1(double pi, double tau)
{
	const double _Ii_R1[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 8, 8, 21, 23, 29, 30, 31, 32 };
	const double _Ji_R1[35] = { -2, -1, 0, 1, 2, 3, 4, 5, -9, -7, -1, 0, 1, 3, -3, 0, 1, 3, 17, -4, 0, 6, -5, -2, 10, -8, -11, -6, -29, -31, -38, -39, -40, -41 };
	const double _ni_R1[35] = { 0.14632971213167, -0.84548187169114, -3.756360367204, 3.3855169168385, -0.95791963387872, 0.15772038513228, -0.016616417199501, 8.1214629983568E-04, 2.8319080123804E-04, -6.0706301565874E-04, -0.018990068218419, -0.032529748770505, -0.021841717175414, -5.283835796993E-05, -4.7184321073267E-04, -3.0001780793026E-04, 4.7661393906987E-05, -4.4141845330846E-06, -7.2694996297594E-16, -3.1679644845054E-05, -2.8270797985312E-06, -8.5205128120103E-10, -2.2425281908E-06, -6.5171222895601E-07, -1.4341729937924E-13, -4.0516996860117E-07, -1.2734301741641E-09, -1.7424871230634E-10, -6.8762131295531E-19, 1.4478307828521E-20, 2.6335781662795E-23, -1.1947622640071E-23, 1.8228094581404E-24, -9.3537087292458E-26 };
	const int N = 35;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _Ii_R1[i] * _ni_R1[i] * (_Ii_R1[i] - 1) * pow((7.1 - pi), (_Ii_R1[i] - 2)) * pow((tau - 1.222), _Ji_R1[i]);
	}

	return sum;
}
//d(gibs(pi, tau)) / dtau
static double _gibbs_dtau_R1(double pi, double tau)
{
	const double _Ii_R1[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 8, 8, 21, 23, 29, 30, 31, 32 };
	const double _Ji_R1[35] = { -2, -1, 0, 1, 2, 3, 4, 5, -9, -7, -1, 0, 1, 3, -3, 0, 1, 3, 17, -4, 0, 6, -5, -2, 10, -8, -11, -6, -29, -31, -38, -39, -40, -41 };
	const double _ni_R1[35] = { 0.14632971213167, -0.84548187169114, -3.756360367204, 3.3855169168385, -0.95791963387872, 0.15772038513228, -0.016616417199501, 8.1214629983568E-04, 2.8319080123804E-04, -6.0706301565874E-04, -0.018990068218419, -0.032529748770505, -0.021841717175414, -5.283835796993E-05, -4.7184321073267E-04, -3.0001780793026E-04, 4.7661393906987E-05, -4.4141845330846E-06, -7.2694996297594E-16, -3.1679644845054E-05, -2.8270797985312E-06, -8.5205128120103E-10, -2.2425281908E-06, -6.5171222895601E-07, -1.4341729937924E-13, -4.0516996860117E-07, -1.2734301741641E-09, -1.7424871230634E-10, -6.8762131295531E-19, 1.4478307828521E-20, 2.6335781662795E-23, -1.1947622640071E-23, 1.8228094581404E-24, -9.3537087292458E-26 };
	const int N = 35;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _ni_R1[i] * _Ji_R1[i] * pow((7.1 - pi), _Ii_R1[i]) * pow((tau - 1.222), (_Ji_R1[i] - 1));
	}

	return sum;
}
//d^2(gibs(pi, tau)) / (dtau)^2
static double _gibbs_ddtau_R1(double pi, double tau)
{
	const double _Ii_R1[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 8, 8, 21, 23, 29, 30, 31, 32 };
	const double _Ji_R1[35] = { -2, -1, 0, 1, 2, 3, 4, 5, -9, -7, -1, 0, 1, 3, -3, 0, 1, 3, 17, -4, 0, 6, -5, -2, 10, -8, -11, -6, -29, -31, -38, -39, -40, -41 };
	const double _ni_R1[35] = { 0.14632971213167, -0.84548187169114, -3.756360367204, 3.3855169168385, -0.95791963387872, 0.15772038513228, -0.016616417199501, 8.1214629983568E-04, 2.8319080123804E-04, -6.0706301565874E-04, -0.018990068218419, -0.032529748770505, -0.021841717175414, -5.283835796993E-05, -4.7184321073267E-04, -3.0001780793026E-04, 4.7661393906987E-05, -4.4141845330846E-06, -7.2694996297594E-16, -3.1679644845054E-05, -2.8270797985312E-06, -8.5205128120103E-10, -2.2425281908E-06, -6.5171222895601E-07, -1.4341729937924E-13, -4.0516996860117E-07, -1.2734301741641E-09, -1.7424871230634E-10, -6.8762131295531E-19, 1.4478307828521E-20, 2.6335781662795E-23, -1.1947622640071E-23, 1.8228094581404E-24, -9.3537087292458E-26 };
	const int N = 35;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _ni_R1[i] * _Ji_R1[i] * (_Ji_R1[i] - 1) * pow((7.1 - pi), _Ii_R1[i]) * pow((tau - 1.222), (_Ji_R1[i] - 2));
	}

	return sum;
}
//d^2(gibs(pi, tau)) / (dtau * dpi)
static double _gibbs_dpi_dtau_R1(double pi, double tau)
{
	const double _Ii_R1[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 8, 8, 21, 23, 29, 30, 31, 32 };
	const double _Ji_R1[35] = { -2, -1, 0, 1, 2, 3, 4, 5, -9, -7, -1, 0, 1, 3, -3, 0, 1, 3, 17, -4, 0, 6, -5, -2, 10, -8, -11, -6, -29, -31, -38, -39, -40, -41 };
	const double _ni_R1[35] = { 0.14632971213167, -0.84548187169114, -3.756360367204, 3.3855169168385, -0.95791963387872, 0.15772038513228, -0.016616417199501, 8.1214629983568E-04, 2.8319080123804E-04, -6.0706301565874E-04, -0.018990068218419, -0.032529748770505, -0.021841717175414, -5.283835796993E-05, -4.7184321073267E-04, -3.0001780793026E-04, 4.7661393906987E-05, -4.4141845330846E-06, -7.2694996297594E-16, -3.1679644845054E-05, -2.8270797985312E-06, -8.5205128120103E-10, -2.2425281908E-06, -6.5171222895601E-07, -1.4341729937924E-13, -4.0516996860117E-07, -1.2734301741641E-09, -1.7424871230634E-10, -6.8762131295531E-19, 1.4478307828521E-20, 2.6335781662795E-23, -1.1947622640071E-23, 1.8228094581404E-24, -9.3537087292458E-26 };
	const int N = 35;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + (-1) * _ni_R1[i] * _Ii_R1[i] * _Ji_R1[i] * pow((7.1 - pi), (_Ii_R1[i] - 1)) * pow((tau - 1.222), (_Ji_R1[i] - 1));
	}

	return sum;
}

//State Property Functions as a Function of Temperature and Pressure

//specific volume of region 1 as a function of temperature and pressure
double _v_P_T_R1(double inputPressure, double inputTemp)
{
	//MPa
	const double pStar = 16.53;
	//kelvin
	const double tStar = 1386;

	double pi = inputPressure / pStar;
	double tau = tStar / inputTemp;
	double gibbs_dpi = _gibbs_dpi_R1(pi, tau);

	//divide by 1E+03 for difference in units from R & pressure
	return (R * inputTemp * pi * gibbs_dpi) / inputPressure / 1E+03;
}
//specific internal energy of region 1 as a function of temperature and pressure
double _u_P_T_R1(double inputPressure, double inputTemp)
{
	//MPa
	const double pStar = 16.53;
	//kelvin
	const double tStar = 1386;

	double pi = inputPressure / pStar;
	double tau = tStar / inputTemp;
	double gibbs_dtau = _gibbs_dtau_R1(pi, tau);
	double gibbs_dpi = _gibbs_dpi_R1(pi, tau);

	return R * inputTemp * ((tau * gibbs_dtau) - (pi * gibbs_dpi));
}
//specific entropy of region 1 as a function of temperature and pressure
double _s_P_T_R1(double inputPressure, double inputTemp)
{
	//MPa
	const double pStar = 16.53;
	//kelvin
	const double tStar = 1386;

	double pi = inputPressure / pStar;
	double tau = tStar / inputTemp;
	double gibbs = _gibbs_R1(pi, tau);
	double gibbs_dtau = _gibbs_dtau_R1(pi, tau);

	return R * ((tau * gibbs_dtau) - gibbs);
}
//specific enthalpy of region 1 as a function of temperature and pressure
double _h_P_T_R1(double inputPressure, double inputTemp)
{
	//MPa
	const double pStar = 16.53;
	//kelvin
	const double tStar = 1386;

	double pi = inputPressure / pStar;
	double tau = tStar / inputTemp;
	double gibbs_dtau = _gibbs_dtau_R1(pi, tau);

	return R * inputTemp * tau * gibbs_dtau;
}
//specific isobaric heat capacity of region 1 as a function of temperature and pressure
double _cp_P_T_R1(double inputPressure, double inputTemp)
{
	//MPa
	const double pStar = 16.53;
	//kelvin
	const double tStar = 1386;

	double pi = inputPressure / pStar;
	double tau = tStar / inputTemp;
	double gibbs_ddtau = _gibbs_ddtau_R1(pi, tau);

	return R * (-1) * pow(tau, 2) * gibbs_ddtau;
}
//specific isochoric heat capacity of region 1 as a function of temperature and pressure
double _cv_P_T_R1(double inputPressure, double inputTemp)
{
	//MPa
	const double pStar = 16.53;
	//kelvin
	const double tStar = 1386;

	double pi = inputPressure / pStar;
	double tau = tStar / inputTemp;
	double gibbs_dpi = _gibbs_dpi_R1(pi, tau);
	double gibbs_ddpi = _gibbs_ddpi_R1(pi, tau);
	double gibbs_ddtau = _gibbs_ddtau_R1(pi, tau);
	double gibbs_dtau_dpi = _gibbs_dpi_dtau_R1(pi, tau);

	return R * ((-1 * gibbs_ddtau * pow(tau,2)) + (pow((gibbs_dpi - (tau * gibbs_dtau_dpi)),2) / gibbs_ddpi));
}
//speed of sound of region 1 as a function of temperature and pressure
double _w_P_T_R1(double inputPressure, double inputTemp)
{
	//convert to J / (kg * K) from kJ / (kg * K)
	double _R = R * 1000;

	//MPa
	const double pStar = 16.53;
	//kelvin
	const double tStar = 1386;

	double pi = inputPressure / pStar;
	double tau = tStar / inputTemp;
	double gibbs_dpi = _gibbs_dpi_R1(pi, tau);
	double gibbs_ddpi = _gibbs_ddpi_R1(pi, tau);
	double gibbs_ddtau = _gibbs_ddtau_R1(pi, tau);
	double gibbs_dpi_dtau = _gibbs_dpi_dtau_R1(pi, tau);

	return pow((_R * inputTemp * pow(gibbs_dpi, 2)) / ((pow(gibbs_dpi - (tau * gibbs_dpi_dtau),2) / (pow(tau, 2) * gibbs_ddtau)) - gibbs_ddpi), 0.5);
}


//Temperature Function as a function of pressure and enthalpy
static double _temp_R1_P_h(double pi, double eta)
{
	const int _Ii_R1_T_P_h[21] = { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 5, 6 };
	const int _Ji_R1_T_P_h[21] = { 0, 1, 2, 6, 22, 32, 0, 1, 2, 3, 4, 10, 32, 10, 32, 10, 32, 32, 32, 32 };
	const double _ni_R1_T_P_h[21] = { -238.72489924521, 404.21188637945, 113.49746881718, -5.8457616048039, -1.528548241314E-04, -1.0866707695377E-06, -13.391744872602, 43.211039183559, -54.010067170506, 30.535892203916, -6.5964749423638, 9.3965400878363E-03, 1.157364750534E-07, -2.5858641282073E-05, -4.0644363084799E-09, 6.6456186191635E-08, 8.0670734103027E-11, -9.3477771213947E-13, 5.8265442020601E-15, -1.5020185953503E-17 };
	//kelvin
	const double _tStar_R1_T_P_h = 1;
	const int N = 21;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _ni_R1_T_P_h[i] * pow(pi, _Ii_R1_T_P_h[i]) * pow(eta + 1, _Ji_R1_T_P_h[i]);
	}

	return sum * _tStar_R1_T_P_h;
}

//State Property Functions as a Function of Pressure and Enthalpy

//temperature of region 1 as a function of pressure and enthalpy
double T_R1_P_h(double inputPressure, double inputEnthalpy)
{
	//MPa
	const double pStar = 1;
	//kJ / kg
	const double hStar = 2500;

	double pi = inputPressure / pStar;
	double eta = inputEnthalpy / hStar;
	return _temp_R1_P_h(pi, eta);
}
//specific volume of region 1 as a function of pressure and enthalpy
double v_R1_P_h(double inputPressure, double inputEnthalpy)
{
	double T = T_R1_P_h(inputPressure, inputEnthalpy);
	return _v_P_T_R1(inputPressure,T);
}
//specific internal energy of region 1 as a function of pressure and enthalpy
double u_R1_P_h(double inputPressure, double inputEnthalpy)
{
	double T = T_R1_P_h(inputPressure, inputEnthalpy);
	return _u_P_T_R1(inputPressure,T);
}
//specific entropy of region 1 as a function of pressure and enthalpy
double s_R1_P_h(double inputPressure, double inputEnthalpy)
{
	double T = T_R1_P_h(inputPressure, inputEnthalpy);
	return _s_P_T_R1(inputPressure,T);
}
//specific isobaric heat capacity of region 1 as a function of pressure and enthalpy
double cp_R1_P_h(double inputPressure, double inputEnthalpy)
{
	double T = T_R1_P_h(inputPressure, inputEnthalpy);
	return _cp_P_T_R1(inputPressure,T);
}
//specific isochoric heat capacity of region 1 as a function of pressure and enthalpy
double cv_R1_P_h(double inputPressure, double inputEnthalpy)
{
	double T = T_R1_P_h(inputPressure, inputEnthalpy);
	return _cv_P_T_R1(inputPressure,T);
}
//speed of sound of region 1 as a function of pressure and enthalpy
double w_R1_P_h(double inputPressure, double inputEnthalpy)
{
	double T = T_R1_P_h(inputPressure, inputEnthalpy);
	return _w_P_T_R1(inputPressure,T);
}


//Temperature function as a function of pressure and entropy
static double _temp_R1_P_s(double pi, double sigma)
{
	const int _Ii_R1_T_P_s[21] = { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 4 };
	const int _Ji_R1_T_P_s[21] = { 0, 1, 2, 3, 11, 31, 0, 1, 2, 3, 12, 31, 0, 1, 2, 9, 31, 10, 32, 32 };
	const double _ni_R1_T_P_s[21] = { 174.78268058307, 34.806930892873, 6.5292584978455, 0.33039981775489, -1.9281382923196E-07, -2.4909197244573E-23, -0.26107636489332, 0.22592965981586, -0.064256463395226, 7.8876289270526E-03, 3.5672110607366E-10, 1.7332496994895E-24, 5.6608900654837E-04, -3.2635483139717E-04, 4.4778286690632E-05, -5.1322156908507E-10, -4.2522657042207E-26, 2.6400441360689E-13, 7.8124600459723E-29, -3.0732199903668E-31 };
	//kelvin
	const double _tStar_R1_T_P_s = 1;
	const int N = 21;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _ni_R1_T_P_s[i] * pow(pi, _Ii_R1_T_P_s[i]) * pow(sigma + 2, _Ji_R1_T_P_s[i]);
	}

	return sum * _tStar_R1_T_P_s;
}

//State Property Functions as a Function of Pressure and Entropy

//temperature of region 1 as a function of pressure and entropy
double T_R1_P_s(double inputPressure, double inputEntropy)
{
	//MPa
	const double pStar = 1;
	//kJ / (kg * K)
	const double sStar = 1;

	double pi = inputPressure / pStar;
	double sigma = inputEntropy / sStar;
	return _temp_R1_P_s(pi, sigma);
}
//specific volume of region 1 as a function of pressure and entropy
double v_R1_P_s(double inputPressure, double inputEntropy)
{
	double T = T_R1_P_s(inputPressure, inputEntropy);
	return _v_P_T_R1(inputPressure,T);
}
//specific internal energy of region 1 as a function of pressure and entropy
double u_R1_P_s(double inputPressure, double inputEntropy)
{
	double T = T_R1_P_s(inputPressure, inputEntropy);
	return _u_P_T_R1(inputPressure,T);
}
//specific enthalpy of region 1 as a function of pressure and entropy
double h_R1_P_s(double inputPressure, double inputEntropy)
{
	double T = T_R1_P_s(inputPressure, inputEntropy);
	return _h_P_T_R1(inputPressure,T);
}
//specific isobaric heat capacity of region 1 as a function of pressure and entropy
double cp_R1_P_s(double inputPressure, double inputEntropy)
{
	double T = T_R1_P_s(inputPressure, inputEntropy);
	return _cp_P_T_R1(inputPressure,T);
}
//specific isochoric heat capacity of region 1 as a function of pressure and entropy
double cv_R1_P_s(double inputPressure, double inputEntropy)
{
	double T = T_R1_P_s(inputPressure, inputEntropy);
	return _cv_P_T_R1(inputPressure,T);
}
//speed of sound of region 1 as a function of pressure and entropy
double w_R1_P_s(double inputPressure, double inputEntropy)
{
	double T = T_R1_P_s(inputPressure, inputEntropy);
	return _w_P_T_R1(inputPressure,T);
}


//Pressure function as a function of Enthalpy and Entropy
static double _press_R1_h_s(double eta, double sigma)
{
	const int _Ii_R1_P_h_s[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 4, 4, 5 };
	const int _Ji_R1_P_h_s[20] = { 0, 1, 2, 4, 5, 6, 8, 14, 0, 1, 4, 6, 0, 1, 10, 4, 1, 4, 0 };
	const double _ni_R1_P_h_s[20] = { -0.691997014660582, -18.361254878756, -9.28332409297335, 65.9639569909906, -16.2060388912024, 450.620017338667, 854.68067822417, 6075.23214001162, 32.6487682621856, -26.9408844582931, -319.9478483343, -928.35430704332, 30.3634537455249, -65.0540422444146, -4309.9131651613, -747.512324096068, 730.000345529245, 1142.84032569021, -436.407041874559 };
	//MPa
	const double _pStar_R1_P_h_s = 100;
	const int N = 20;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + _ni_R1_P_h_s[i] * pow(eta + 0.05, _Ii_R1_P_h_s[i]) * pow(sigma + 0.05, _Ji_R1_P_h_s[i]);
	}

	return sum * _pStar_R1_P_h_s;
}

//State Property Functions as a Function of Enthalpy and Entropy

double P_R1_h_s(double inputEnth, double inputEntr)
{
	//kJ / kg
	const double hStar = 3400;
	//kJ / (kg * K)
	const double sStar = 7.6;

	double eta = inputEnth / hStar;
	double sigma = inputEntr / sStar;

	return _press_R1_h_s(eta, sigma);
}
double T_R1_h_s(double inputEnth, double inputEntr)
{
	double press = P_R1_h_s(inputEnth, inputEntr);

	return T_R1_P_h(press, inputEnth);
}
double v_R1_h_s(double inputEnth, double inputEntr)
{
	double press = P_R1_h_s(inputEnth, inputEntr);
	double temp = T_R1_h_s(inputEnth, inputEntr);

	return _v_P_T_R1(press,temp);
}
double u_R1_h_s(double inputEnth, double inputEntr)
{
	double press = P_R1_h_s(inputEnth, inputEntr);
	double temp = T_R1_h_s(inputEnth, inputEntr);

	return _u_P_T_R1(press,temp);
}
double cp_R1_h_s(double inputEnth, double inputEntr)
{
	double press = P_R1_h_s(inputEnth, inputEntr);
	double temp = T_R1_h_s(inputEnth, inputEntr);

	return _cp_P_T_R1(press,temp);
}
double cv_R1_h_s(double inputEnth, double inputEntr)
{
	double press = P_R1_h_s(inputEnth, inputEntr);
	double temp = T_R1_h_s(inputEnth, inputEntr);

	return _cv_P_T_R1(press,temp);
}
double w_R1_h_s(double inputEnth, double inputEntr)
{
	double press = P_R1_h_s(inputEnth, inputEntr);
	double temp = T_R1_h_s(inputEnth, inputEntr);

	return _w_P_T_R1(press,temp);
}
