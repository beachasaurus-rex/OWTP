#pragma once

#define ITERCONST(x) (sizeof(x) / sizeof(x[0]))

//kJ / (kg * K)
double R = 0.461526;
//K
double Tc = 647.096;
//MPa
double Pc = 22.064;
//kg / m^3
double Rhoc = 322;