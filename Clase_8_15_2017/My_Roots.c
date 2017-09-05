#include "My_Roots.h"
//funci  a estimar raiz
#include <math.h>

float F(float x) {
  float ans, m = 68.5, g = 9.81, t = 10.0, v = 40.0, c;
  c = x;
  ans = m * g * (1 - exp(-c * t / m)) / c - v;
  return (ans);
}

void Tabla(float min, float max, int n) {
  float h;
  int i;
  h = (max - min) / n;
  printf("\n\t   x   \t| f(x)");
  printf("\n\t---------------------------------------");
  for (i = 0; i < n; i++) {
    printf("\n\t %f \t| %f", min + h * i, F(min + h * i));
  }
}

void TablaTarea(double xi, double xu, int n) {
  int i;
  double xr = 0.0;
  double ea = 50;
  double es;
  double xRant;
  printf("\n\t # \t|   xi   \t|   xu   \t|   xr  \t|  F(xi)   \t|  F(xu)   \t|  F(xr)   \t|  Ea");
  printf("\n\t-----------------------------------------------------------------------------------------------------------");

  for (i = 0; i < n; i++) {
    es = Scarb(i);
    do {
      xRant = xr;
      xr = (xi + xu) / 2.0;
      if (F(xi) * F(xr) < 0.0) {
        xu = xr;
      }
      if (F(xu) * F(xr) < 0){
        xi = xr;
      }
      ea = ErrorA(xr, xRant);
    } while (ea > es);
    printf("\n\t #%d \t|  %f  \t| %f \t| %f  \t| %f   \t|  %f   \t|  %f   \t|  %f", i, xi, xu, xr, F((float)xi), F((float)xu), F((float)xr), ea);
  }
}

double Biseccion(float xi, float xu, int n) {
  double ea = 50;
  double es = Scarb(n);
  double xr = 0.0;
  double xRant;
  if (F(xi) * F(xu) > 0.0)
    printf("\n\t No hay raiz en el intervalo");
  else {
    do {
      xRant = xr;
      xr = (xi + xu) / 2.0;
      if (F(xi) * F(xr) < 0.0)
        xu = xr;
      if (F(xu) * F(xr) < 0)
        xi = xr;
      ea = ErrorA(xr, xRant);
    } while (ea > es);
  }

  return (xr);
}
