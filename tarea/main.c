#include <stdio.h>
#include <stdlib.h>
#include "Birge_Vieta.h"

int main()
{
  polinomio a = {5, 48, 58, -836.0/3.0, -365.0/6.0, 23.0/6.0, 1};
  BirgeVieta(a);
  return 0;
}
