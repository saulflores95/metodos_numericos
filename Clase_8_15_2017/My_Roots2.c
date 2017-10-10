#include "My_Roots2.h"
//funci  a estimar raiz
void test() {
    printf("Succes!!!");
}

float F(float x) {
  float ans, m = 68.5, g = 9.81, t = 10.0, v = 40.0, c;
  c = x;
  ans = m * g * (1 - Expo(-c, * t / m, 20)) / c - v;
  return (ans);
}

void Tabla(float min, float max, int n) {
  float h;
  h = (max - min) / n;
  printf("\n\t   x   \t| f(x)");
  printf("\n\t---------------------------------------");
  for (int i = 0; i < n; i++) {
    printf("\n\t %f \t| %f", min + h * i, F(min + h * i));
  }
}

double Biseccion(float xi, float xu, int n) {
  double ea = 50;
  double es = Scarb(n);
  double xr = 0.0;
  double xRant;
  if (F(xi) * F(xu) > 0.0)
    printf("No hay raiz en el intervalo");
  else {
    do {
      xRant = xr;
      xr = (xi + xu) / 2.0;
      if (F(xi) * F(xr) < 0.0)
        xu = xr;
      if (xu * xr < 0)
        xi = xr;
      ea = ErrorA(xr, xRant);
    } while (ea > es);
  }

  return (xr);
}
