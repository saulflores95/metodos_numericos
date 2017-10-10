#ifndef BIRGE_VIETA_H_INCLUDED
#define BIRGE_VIETA_H_INCLUDED
#include "My_Math.h"
#define GMAX 10 //grado maximo

typedef struct {
  int grado;
  float pol [GMAX];
} polinomio;

void BirgeVieta(polinomio);


#endif // BIRGE_VIETA_H_INCLUDED
