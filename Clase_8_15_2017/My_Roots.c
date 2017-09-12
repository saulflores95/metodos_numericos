#include "My_Roots.h"
#include < math.h >

//Funcion a estimar raiz
double F(double x) {
  float ans, m, g = 9.81, t = 10.0, v = 40.0, c = 15.0;
  m = x;
  ans = m * g * (1.0 - Expo(-c * t / m, 29)) / c - v;
  return (ans);
}
//funcion que mapea la exprecion
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
//funcion que mapea biseccion
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
      if (F(xu) * F(xr) < 0) {
        xi = xr;
      }
      ea = ErrorA(xr, xRant);
    } while (ea > es);
    printf("\n\t #%d \t|  %f  \t| %f \t| %f  \t| %f   \t|  %f   \t|  %f   \t|  %f", i, xi, xu, xr, F((float) xi), F((float) xu), F((float) xr), ea);
  }
}
//funcion de biseccion
double Biseccion(double xi, double xu, int n) {
  double xr = 0.0, xrant, es, ea = 50.0;
  es = Scarb(n);
  if (F(xi) * F(xu) > 0.0)
    printf("\n\tNo existe raiz en el intervalo");
  else
    do {
      xrant = xr;
      xr = (xi + xu) / 2.0;
      if (F(xi) * F(xr) < 0.0)
        xu = xr;
      if (F(xu) * F(xr) < 0.0)
        xi = xr;
      ea = ErrorA(xr, xrant);
    } while (ea > es);
  return (xr);
}

//metodo de newto-rapson
