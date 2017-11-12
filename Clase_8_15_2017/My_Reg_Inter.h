#ifndef MY_REG_INTER_H_INCLUDED
#define MY_REG_INTER_H_INCLUDED
#include "My_Matrix.h"

  //Funcion que lee una tabla
matriz ScanTable(void);
  //Suma de X
matriz SumTablex(matriz);
  //Suma de XY
matriz SumTablexy(matriz);
  //Resgresion
matriz Regresion(matriz, int);
  //Regresion Lineal
float RegLin(matriz, float);
  //Regresion de Potencia
float RegPow(matriz, float);
  //Interpolacion por polinomios de lagrnge
float Lagrang(matriz, float);
  //Imprime Tabla
void PrintTable(matriz);
#endif // MY_REG_INTER_H_INCLUDED
