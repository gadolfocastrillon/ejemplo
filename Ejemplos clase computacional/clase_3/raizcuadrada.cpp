#include <iostream>
#include <cmath>

using namespaces std;

int main() {

  double a,b,c,disc,raiz1,raiz2;

  cout<<"El programa halla raices"<<endl;

  cout<<"Por favor introduzca valores para a,b y c:";
  cin>>a>>b>>c;
  if (a==0.0 && b==0.0)
    cout<<"La ecuacion es degenerada y no tiene raices";
  return 0;
} 
