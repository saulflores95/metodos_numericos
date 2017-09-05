#include "My_Math.h"
#include "My_Roots.h"

int main() {

   printf("\n\t\t\t\t\t****************Metodos Numerico**************** \n");
   TablaTarea(12, 16, 10);
/*
   double ans = Biseccion(50, 80, 160);
   printf("\n\t la raiz es %f, ya que F(%f) = %f", ans, ans, F(ans));
   printf("\n\t");
   printf("\n Suma: %f", Suma(3.9, 16.8));
   printf("\n Suma: %f", Suma(3.9, -16.8));
   printf("\n Suma: %f", Suma(-3.9, 16.8));
   printf("\n*******************************");
   printf("\n Valor Absoluto: %f", Abs(-8.9));
   printf("\n Valor Absoluto: %f", Abs(8.9));
   printf("\n Valor Absoluto: %f", Abs(0));
   printf("\n*******************************");
   printf("\n Residuo: %f", Residuo(25.15, 10.0));
   printf("\n Residuo: %f", Residuo(-25.15, 10.0));
   printf("\n Residuo: %f", Residuo(25.15, -10.0));
   printf("\n Residuo: %f", Residuo(-25.15, -10.0));
   printf("\n Residuo: %f", Residuo(0, -10.0));
   printf("\n Residuo: %f", Residuo(-25.15, 0));
   printf("\n*******************************");
   printf("\n Exponencial: %f", MyPowI(0, -3));
   printf("\n Exponencial: %f", MyPowI(4, -2));
   printf("\n Exponencial: %f", MyPowI(2, 3));
   printf("\n Exponencial: %f", MyPowI(-1, 3));
   printf("\n Exponencial: %f", MyPowI(-1, 0));
   printf("\n Exponencial: %f", MyPowI(0, 0));
   printf("\n*******************************");
   printf("\n Factorial: %f", Factorial(11));
   printf("\n Factorial: %f", Factorial(-11));
   printf("\n Factorial: %f", Factorial(0));
   printf("\n*******************************");
   printf("\n Scarb: %f", Scarb(15));
   printf("\n*******************************");
   printf("\n ErrorA: %f", ErrorA(0, 10.5));
   printf("\n ErrorA: %f", ErrorA(15.3, 10.5));
   printf("\n ErrorA: %f", ErrorA(0, -20));
   printf("\n Episolon Value: %e", DBL_EPSILON);
   printf("\n*******************************");
   printf("\n Sin(0): %f", Seno(1.0, -5));
   printf("\n Cos(0): %f", Coseno(1.0, 5));
   printf("\n Expo(0): %lf", Expo(1.0, 10));
*/
  return 0;
}

//Esto no se necesita pero fue un ejemplo echo en clase
void sumatoria() {
  //valor de que va ser la sumatoria
  float a = 0.1;
  //valor inicial del siclo
  int i;
  //respuesta que sera sumada cada siclo que pasa
  float respuesta;
  //siclo for
  for (i = 0; i < 10; i++) {
    respuesta += a;
  }
  //valida la respuesta dada si es 1 o no
  if (respuesta == 1) {
    printf("%f", respuesta);
  } else {
    printf("Soy una computadora tonta porque %.20f\n\n", respuesta);
    printf("************************************\n\n");
    printf("%.50f\n\n", a);
  }
}
