#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  /*
  int C[10];
  for( int j = 0; j<10; j++){
    C[j]=0;

  }

  cout<<"Elemento"<<"Valor"<<endl;

  for(int j=0;j<10;j++){
    cout<<j<<" "<<C[j]<<endl;
  }
  */

  //char codigos[7] = {"m","u","e","s","t","r","a"};
  int n[10] = {32,27,64,18,95,14,90,70,60,37};
  cout<<"Elemento"<<setw(13)<<"Valor"<<endl;

  for (int i=0;i<10;i++)
    {
      cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
    }
  
  return 0;
}
