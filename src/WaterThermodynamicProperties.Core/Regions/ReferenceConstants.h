#pragma once

#define ITERCONST(x) (sizeof(x) / sizeof(x[0]))

//kJ / (kg * K)
const double R = 0.461526;
//K
const double tCrit = 647.096;
//MPa
const double pCrit = 22.064;
//kg / m^3
const double rhoCrit = 322.0;
