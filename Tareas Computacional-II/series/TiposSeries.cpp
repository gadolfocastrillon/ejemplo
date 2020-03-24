#include "variables.h"
#include <iostream>

using namespace std; 
int main()
{
  double a,b;
  cout<<"Ingrese el inicio de la serie"<<endl;
  cin>>a;
  cout<<"Ingrese el factor multiplicativo"<<endl;
  cin>>b;
  
  series datos(a,b);
  datos.mostrarDatos();

  return 0;
}
