#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  const int tamanioArreglo = 7;
  int frecuencia [tamanioArreglo ] = {};

  srand(time(NULL));

  for (int tiro=1;tiro<=60000;tiro++){
    frecuencia[1+ rand()%6]++;
  }

  cout<< "Cara" <<setw(13) <<"Frecuencia"<<endl;

  for ( int cara = 1; cara <tamanioArreglo;cara++){
    cout<<setw(4)<<cara<<setw(13)<<frecuencia[cara]<<endl;
  }

  return 0;
}
