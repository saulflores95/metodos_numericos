#include "My_Poli_Roots.h"

polinomio ScanfPol(void) {
  polinomio p;
  int n;
  printf("\n\t Captura un polinomio de grado maximo %d", GMAX - 1);
  printf("\n\t De la forma a0 + a1X + a2 X^2 + ... + an X^n");
  do {
    printf("\n\t Grado del polinomio: ");
    scanf("%d", & p.grado);
  } while ((p.grado > GMAX - 1) || (p.grado < 0));
  for (n = 0; n <= p.grado; n++) {
    printf("\ta[%d] = ", n);
    scanf("%f", & p.pol);
  }
  return (p);
}

void PrintPol(polinomio p) {
  int n;
  printf("\n\n\t");
  for (n = p.grado; n > 0; n--) {
    if (n == 1) {
      if (p.pol[n] != 0.0)
        if (p.pol[n] < 0.0)
          printf("- %f X", Abs(p.pol[n]));
        else {
          printf("+ %f X", Abs(p.pol[n]));
        }
    } else {
      if (p.pol[n] < 0.0)
        printf("- %f X^%d", Abs(p.pol[n]));
      else
        printf("+ %f X^%d", Abs(p.pol[n]));
    }
    if (p.pol[0] != 0.0)
      if (p.pol[0] < 0.0)
        printf("- %f", Abs(p.pol[0]));
      else
        printf("+ %f", Abs(p.pol[0]));
    printf("\n\t");
  }
}

float PolEval(polinomio a, float x) {
  float ans = 0.0;
  int n;
  for (n = a.grado; n >= 0; n--)
    ans = ans * x + a.pol[n];
  return (ans);
}

polinomio PolDeriv(polinomio a) {
  polinomio b = {
    0
  };
  int n;
  if (a.grado > 0) {
    b.grado = a.grado - 1;
    for (n = 0; n < a.grado; n++)
      b.pol[n] = a.pol[n + 1] * (n + 1);
  }
  return (b);
}

double NewtonRPol(polinomio f, float x0, int n) {
  double x1, ea = 50.0, es;
  polinomio fd;
  es = Scarb(n);
  fd = PolDeriv(f);
  do {
    x1 = x0 - PolEval(f, x0) / PolEval(fd, x0);
    ea = ErrorA(x1, x0);
    x0 = x1;
  } while (ea > es);
  return (x1);
}
