#include "My_Math.h"

//Funcion que suma dos numeros
float Suma(float a, float b) {
  return (a + b);
}

//funcion que obtiene el valor absoluto del parametro
double Abs(double a) {
  return (a < 0.0 ? -a : a);
}

//funcion que regresa el valor Residuo de la division
double Residuo(double a, double b) {
  a = Abs(a);
  b = Abs(b);
  double c = a; //Igualo la variable para tener un dato que pueda restar
  int signo = 1;
  if (a * b < 0)
    signo = -1;
  if (b == 0) {
    printf("\nError no division entre cero");
    return 0;
  }
  while (c >= b) { //La salida del ciclo while es cuando el valor divisor es menor  al dividendo
    c -= b;
  }
  c *= signo;
  return c; //el residuo es el valor restante de la ultima resta antes de salir del ciclo
}

//function que eleva a un exponesial Utilizando tecnica de recusrividad pero no es muy optima ya que toma mucho espacio d en la memoria
double MyPowI(double a, int b) {
  if (a == 0.0) { //si a = 0 se retornara 0
    return 0.0;
  }
  if (b == 0) { //en el momento que b sea 0 el ultimo multiplicador es 1 y se sale de la recursividad la funcion
    return 1.0;
  }
  if (b < 0) { //en dado caso que b sea negativo se retornara este valor
    double multiplication = 1;
    b *= -1;
    int cont = 0;
    for (cont; cont < b; cont++) {
      multiplication *= a;
    }
    return (1 / multiplication);
  }
  return (a * MyPowI(a, b - 1)); // Recursividad para disminuir el valor, y multiplicar por sus mismo valor hasta que b de 0
}

float Factorial(int a) {
  int i = 0;
  int factorial = 1.0;
  int signo = 1;
  if (a < 0)
    signo = -1;
  a = abs(a);
  if (a == 0) {
    printf("\n Error no hay factorial 0");
    return 0;
  } else {
    for (i = 1; i <= a; ++i) {
      factorial *= i;
    }
    return factorial * signo;
  }
}

double Scarb(int n) {
  double ans;
  if (n <= 0.0) {
    printf("\n\t Bad Guesses");
    n = 5;
  }
  ans = 0.5 * MyPowI(10, 2 - n);
  return ans;
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
    ans += MyPowI(x, 2 * n + 1) * (MyPowI(-1.0, n) / Factorial(2 * n + 1));
    n++;
    ea = ErrorA(ans, ans_ant);
  } while (ea > es);

  return (ans);
}

double Coseno(double x, int n) {
  double ans = 1.0, ans_ant, ea = 50.0, es;
  es = Scarb(n);
  n = 1;
  x = Residuo(x, 2 * PI);
  do {
    ans_ant = ans;
    ans += MyPowI(x, 2 * n) * (MyPowI(-1.0, n) / Factorial(2 * n));
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
    ans += MyPowI(x, n) / Factorial(n);
    n++;
    ea = ErrorA(ans, ans_ant);
  } while (ea > es);

  return (ans);
}

