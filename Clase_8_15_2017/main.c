#include "My_Math.h"
#include "My_Roots.h"
#include "My_Poli_Roots.h"
#include "My_Matrix.h"
#include "My_Reg_Inter.h"
#include "My_Intergral_dif.h"
#include "My_Final_Project.h"
int main() {
    //Proyecto Final Metodos Numericos
    printf("\tInterpolador con Best Fitt\n");
    Interpolador(0.0, 2.0, 1.0, 4.0);


//printf("\n\t La Rounge Kutta es: \t\t%f", R4kc(0.0, 2.0, 1.0, 4.0));

//polinomio a;
//a = ScanfPol();
//PrintPol(a);
//a = PolIntegral(a);
//PrintPol(a);
//printf("La interpolacion es %.20f", Simpson3M(-10.0, 0.0, 1000))

/*
  matriz a, s;
  a = ScanTable();
  PrintMtx(a);
  printf("\n la interpolacion es %f", Lagrang(a, 2));
*/

  /*printf("Gauss-Seidel");
  matriz a, b;
  a = ScanfMtx();
  b = SwitchMtx(a, 0);
  PrintMtx(b);*/

  /*
  PrintMtx(a);
  b = ScanfMtx();
  PrintMtx(b);
  x0 = ZerosMtx(4, 1);
  PrintMtx(x0);
  ans = GaussSeidelMtx(a, b, x0, 5);
  PrintMtx(ans);
  */



  /*
  ans = DesGauss(a, b);
  PrintMtx(ans);
  */







  /*matriz a,x;
  a = ScanfMtx();
  PrintMtx(a);
  x = InvMtx(a);
  PrintMtx(x);
  */

  /*matriz a, b, x;
  a = ScanfMtx();
  PrintMtx(a);
  b = EyeMtx(a.ren);
  PrintMtx(b);
  x = GaussJordan(a, b);
  PrintMtx(x);
  */

 // printf("\n\t El determinate es %f", Determinante(a));


  /****************************************************************/
  //1. printf("\n CosH(50):  %f", CosenoH(50.0, 8));
  //2. printf("\n\t la Raiz es %f", Biseccion(1.5, 2, 10));
  //3. printf("\n Falsa posicion: %f", FalsaPosicion(0.5, 1.0, 10));
  /*4. polinomio a = {3, 101000,  19899, 980, 1};
        PrintPol(a);
        BirgeVieta(a);

    polinomio a = {4, 121.0/2.0,  209.0/4.0, 69.0/4.0, 10.0, 1.0};
    PrintPol(a);
    printf("\n Newtom: %f", NewtonRPol(a, 4, 10));

  */


 // PrintPol(a);
   /****************************************************************/
  /* TablaTarea(12, 16, 10);
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
   printf("\n Exponencial: %f", MyPow(0, -3));
   printf("\n Exponencial: %f", MyPow(4, -2));
   printf("\n Exponencial: %f", MyPow(2, 3));
   printf("\n Exponencial: %f", MyPow(-1, 3));
   printf("\n Exponencial: %f", MyPow(-1, 0));
   printf("\n Exponencial: %f", MyPow(0, 0));
   printf("\n*******************************");
   printf("\n Factorial: %f", Factorial(11));
   printf("\n Factorial: %f", Factorial(-11));
   printf("\n Factorial: %f", Factorial(3));
   printf("\n*******************************");
   printf("\n Scarb: %f", Scarb(3));
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
;  return 0;
}
