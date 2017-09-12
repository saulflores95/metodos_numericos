#include "My_Math.h"

//Funcion que suma dos numeros
float Suma(float a, float b) {
  return (a + b);
}

//funcion que obtiene el valor absoluto del parametro
double Abs(double x) {
  return (x > 0.0 ? x : -x);
}

//funcion que regresa el valor Residuo de la division
double Residuo(double num, double den) {
  int signo = 1;
  if (num * den < 0.0)
    signo = -1;
  num = Abs(num);
  den = Abs(den);
  if (den == 0.0)
    printf("\n\tDivision entre cero, ERROR.");
  else {
    while (num >= den)
      num -= den;
  }
  return (num * signo);
}

//function que eleva a un exponesial Utilizando tecnica de recusrividad pero no es muy optima ya que toma mucho espacio d en la memoria
double MyPow(double x, int a) {
  double ans = 1.0;
  if (x == 0.0 && a <= 0.0)
    printf("\n\t Math Error");
  else {
    if (a < 0.0) {
      a = Abs(a);
      x = 1.0 / x;
    }
  }
  while (a >= 1) {
    ans *= x;
    a--;
  }
  return (ans);
}

float Factorial(int x) {
  float ans = 1.0;
  if (x < 0.0)
    printf("\n\tNo existe el factorial de numeros negativos.");
  else {
    while (x > 1) {
      ans *= x;
      x--;
    }
  }
  return (ans);
}

double Scarb(int n) {
  double ans;
  if (n <= 0.0) {
    printf("\n\t N debe ser positivo... N = 5");
    n = 5;
  }
  ans = 0.5 * MyPow(10, 2 - n);
  return (ans);
}

double ErrorA(double Vact, double Vant) {
  double ansVactVant = Abs(Vact - Vant);
  double ans = 0;
  if (Vact == 0)
    ans = ansVactVant;
  else
  if (ansVactVant < DBL_EPSILON)
    ans = 0;
  else
    ans = (ansVactVant / Vact) * 100;
  return (ans);
}

double Seno(double x, int n) {
  double ans = 0.0, ans_ant, ea = 50.0, es;
  es = Scarb(n);
  n = 0;
  x = Residuo(x, 2 * PI);
  do {
    ans_ant = ans;
    ans += MyPow(x, 2 * n + 1) * MyPow(-1.0, n) / Factorial(2 * n + 1);
    n++;
    ea = ErrorA(ans, ans_ant);
  } while (ea > es);
  printf("\n\t%d\n\n", n);
  return (ans);
}

double Coseno(double x, int n) {
  double ans = 1.0, ans_ant, ea = 50.0, es;
  es = Scarb(n);
  n = 1;
  x = Residuo(x, 2 * PI);
  do {
    ans_ant = ans;
    ans += MyPow(x, 2 * n) * MyPow(-1.0, n) / Factorial(2 * n);
    n++;
    ea = ErrorA(ans, ans_ant);
  } while (ea > es);
  return (ans);
}

double Expo(double x, int n) {
  double ans = 1.0, ans_ant, ea = 50.0, es;
  es = Scarb(n);
  n = 1;
  do {
    ans_ant = ans;
    ans += MyPow(x, n) / Factorial(n);
    n++;
    ea = ErrorA(ans, ans_ant);
  } while (ea > es);
  return (ans);
}
