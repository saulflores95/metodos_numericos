#ifndef MY_MATRIX_H_INCLUDED
#define MY_MATRIX_H_INCLUDED

#include "My_Math.h"
#define RMAX 10
#define CMAX 10

typedef struct {
  int ren, col;
  float mtx[RMAX][CMAX];
} matriz;

//Funcion que lee una matriz
matriz ScanfMtx(void);

//funcion que imprime una matriz
void PrintMtx(matriz);

//matriz de ceros
matriz ZerosMtx(int, int);

//determinante de una matriz
double Determinante(matriz);

matriz SumaMtz(matriz, matriz);

matriz RestaMtz(matriz, matriz);

matriz MultMtx(matriz, matriz);


#endif // MY_MATRIX_H_INCLUDED
