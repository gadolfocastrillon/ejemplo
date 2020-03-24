#include <iostream>
#include <math.h>
#include "variables.h"

using namespace std; 
series::series (double a, double b)
{
  setValores(a,b);
}
void series::setValores(double a, double b)
{
  valorInicial = a; 
  valorMultiplicar = b;
}

double series::serieAritmetica()
{
 double suma = valorInicial;
 int n = 1; 
 while (n < 10)  //numero de terminos de la serie 
   {
     suma = suma + valorInicial*pow(valorMultiplicar,n);
     n = n +1 ;
   }
 return suma;
}

double series::serieGeometrica()
{
  int n = 1;
  int suma = 0  ;
  while (n <=100){
    suma = suma + (valorInicial + (n-1)*valorMultiplicar);
    n = n + 1 ;
  }
  return suma;
}

void series::mostrarDatos()
{
  cout<<"El valor de la serie Geometrica es: "<<serieGeometrica()<<endl;
  cout<<"El valor de la serie Aritmetica es: "<<serieAritmetica()<<endl;
}
