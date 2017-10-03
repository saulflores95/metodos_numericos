#include "My_Matrix.h"

//Funcion que lee una matriz
matriz ScanfMtx(void) {
  matriz a;
  int r, c;
  printf("\n\t Caputura una matriz de maximo %d x %d \n\n", RMAX, CMAX);
  do {
    printf("\t Numero de renglones: ");
    scanf("%d", & a.ren);
  } while (a.ren > RMAX || a.ren <= 0);

  do {
    printf("\t Numero de columnas: ");
    scanf("%d", & a.col);
  } while (a.col > CMAX || a.col <= 0);

  printf("\n\n");
  for (r = 0; r < a.ren; r++)
    for (c = 0; c < a.col; c++) {
      printf("\ta[%d][%d]", r + 1, c + 1);
      scanf("%f", & a.mtx[r][c]);
    }
  return (a);
}

//funcion que imprime una matriz
void PrintMtx(matriz a) {
  int r, c;
  if (a.col > CMAX || a.col <= 0)
    a.col = 0;
  if (a.ren > RMAX || a.ren <= 0)
    a.ren = 0;
  printf("\n");
  for (r = 0; r < a.ren; r++) {
    for (c = 0; c < a.col; c++)
      printf("\t%.5f", a.mtx[r][c]);
    printf("\n");
  }
}

//matriz de ceros
matriz ZerosMtx(int r, int c) {
  matriz a = {
    r,
    c
  };
  if (a.col > CMAX || a.col <= 0)
    a.col = 0;
  if (a.ren > RMAX || a.ren <= 0)
    a.ren = 0;
  return (a);
}

double Determinante(matriz a) {
  matriz maux;
  double d = 0.0;
  int r, k, c, n;
  if (a.ren != a.col)
    printf("\n\tError... La matriz debe ser cuadrada");
  else {
    if (a.ren == 1)
      d = a.mtx[0][0];
    else {
      for (n = 0; n < a.ren; n++) {
        maux = ZerosMtx(a.ren - 1, a.col - 1);
        r = 0;
        for (k = 0; k < a.ren; k++)
          if (n != k) {
            for (c = 1; c < a.col; c++)
              maux.mtx[r][c - 1] = a.mtx[k][c];
            r++;
          }
        //Esto se va a quitar
          //PrintMtx(maux);
        //Quitar antes de esto
        d += a.mtx[n][0] * MyPow(-1.0, n) * Determinante(maux);
      }
    } //a. ren == 1
  } //If a.ren != a.col
  return (d);
}

matriz SumaMtz(matriz a, matriz b) {
  int i, j;
  matriz c;
  if (a.col > CMAX || a.col <= 0)
    a.col = 0;
  if (a.ren > RMAX || a.ren <= 0)
    a.ren = 0;
  for (i = 0; i < a.ren; i++) {
    for (j = 0; j < a.col; j++)
      c.mtx[i][j] = a.mtx[i][j] + b.mtx[i][j];
  }
  PrintMtx(c);
}
