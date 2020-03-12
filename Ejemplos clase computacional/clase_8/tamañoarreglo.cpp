#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const int tamanioArreglo = 10;
  int s[tamanioArreglo];

  for (int i=0;i<tamanioArreglo;i++)
    {
      s[i]=2+2*i;
    }
  cout<<"Elemento"<<setw(13)<<"Valor"<<endl;

  for(int j=0;j<tamanioArreglo;j++)
    cout<<setw(7)<<j<<setw(13)<<s[j]<<endl;


  return 0;
}
