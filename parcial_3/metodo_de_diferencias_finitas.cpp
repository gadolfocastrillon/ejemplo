#include <iostream>
#include "metodo_de_diferencias_finitas.h"


using namespace std;


double p(double x){
    return 1/x;}
  
int main()
{
  
  metodo a(9,1,2,1,2);
  //a.c(p);
  //a.mostrarDatos();
  a.paso();
}
