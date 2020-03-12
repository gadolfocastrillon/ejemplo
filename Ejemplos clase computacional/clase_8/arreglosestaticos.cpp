#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;

void inicArregloStatic(void)
{
  static int arreglo1[3];

  cout<<"\nValores al entrar en inicArregloStatic:\n";

  for (int i=0;i<3,i++){
    cout<<"Arreglo1["<<i<<"]="<<arreglo1[i]<<" ";
  }

  cout<<"\nValores al salir de inicArregloStatic:\n";

  for (int j=0;j<3;j++)
    cout<<"Arrreglo1["<<j<<"]="<<(arreglo1[j]+=5)<<" ";
}
