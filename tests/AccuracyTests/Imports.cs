using System.Runtime.InteropServices;

namespace AccuracyTests
{
    internal static class Imports
    {
        //fields
        private const string _dllName = "WaterThermodynamicProperties.dll";

#if DEBUG
        #region Region 1: Debug
        //properties as a function of temperature and pressure
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double v_T_P_R1(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double u_T_P_R1(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double s_T_P_R1(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double h_T_P_R1(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cp_T_P_R1(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cv_T_P_R1(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double w_T_P_R1(double T, double P);

        //properties as a function of pressure and specific enthalpy
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double v_P_h_R1(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double u_P_h_R1(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double s_P_h_R1(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double T_P_h_R1(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cp_P_h_R1(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cv_P_h_R1(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double w_P_h_R1(double P, double h);

        //properties as a function of pressure and specific entropy
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double v_P_s_R1(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double u_P_s_R1(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double h_P_s_R1(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double T_P_s_R1(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cp_P_s_R1(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cv_P_s_R1(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double w_P_s_R1(double P, double s);

        //properties as a function of specific enthalpy and specific entropy
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double v_h_s_R1(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double u_h_s_R1(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double P_h_s_R1(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double T_h_s_R1(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cp_h_s_R1(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cv_h_s_R1(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double w_h_s_R1(double h, double s);
        #endregion Region 1: Debug

        #region Region 2: Debug
        //properties as a function of temperature and pressure
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double v_T_P_R2(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double u_T_P_R2(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double s_T_P_R2(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double h_T_P_R2(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cp_T_P_R2(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cv_T_P_R2(double T, double P);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double w_T_P_R2(double T, double P);

        //properties as a function of pressure and specific enthalpy
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double T_P_h_R2(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double v_P_h_R2(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double u_P_h_R2(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double s_P_h_R2(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cp_P_h_R2(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cv_P_h_R2(double P, double h);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double w_P_h_R2(double P, double h);

        //properties as a function of pressure and specific entropy
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double T_P_s_R2(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double v_P_s_R2(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double u_P_s_R2(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double h_P_s_R2(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cp_P_s_R2(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cv_P_s_R2(double P, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double w_P_s_R2(double P, double s);

        //properties as a function of specific enthalpy and specific entropy
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double P_h_s_R2(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double T_h_s_R2(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double v_h_s_R2(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double u_h_s_R2(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cp_h_s_R2(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double cv_h_s_R2(double h, double s);
        [DllImport(_dllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double w_h_s_R2(double h, double s);
        #endregion Region 2: Debug
#endif
    }
}
