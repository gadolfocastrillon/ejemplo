#include <iostream>
#include <cmath>

using namespace std;

int main(){

  double usenum;

  cout<<"Este programa calcula la raiz cuadrada y\n"
      <<"el reciproco (1/numero) de un numero \n"
      <<"\nPor favor introduzca un número: ";
  cin>>usenum;
  if (usenum < 0.0)
    cout<<"La raiz cuadrada de un número negativo no existe. \n";
  else
    cout<<"La raiz cuadrada de "<<usenum
	<<" es "<<sqrt(usenum)<<endl;
  if (usenum==0.0)
    cout<<"El reciproco de cero no existe.\n";
  else
    cout<<"El reciproco de "<<usenum
	<<" es "<<(1.0/usenum)<<endl;

  return 0;
}
