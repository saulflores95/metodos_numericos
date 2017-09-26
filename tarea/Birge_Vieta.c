#include "Birge_Vieta.h"

void BirgeVieta(polinomio a) {
  int len = sizeof(a.pol) / sizeof(a.pol[0]); //Se declara len para la longitud del polinomio
  double newtonRapsonRaiz = NewtonRPol(a, -2.0, 5); //Se consigue la raiz utilizando el metodo de rapzon
  printf("\n\t la Raiz es %.5f", newtonRapsonRaiz);
  PrintPol(a);
  do {
   // a = DivisionSint(a, newtonRapsonRaiz);
    printf("\tGRADO: %d", a.grado);
    PrintPol(a);
  } while (a.grado > 0);
}
