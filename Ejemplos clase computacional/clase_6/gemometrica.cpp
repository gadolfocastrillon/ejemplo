#include <iostream>
#include <cmath>
//Equivalencia entre el for y el while 
using namespace std;

int main(){
  double a,r;
  int j;
  double total;

  a=1.0; r=0.5;
  total=0;
  j=0;

  while(j<11)
    {
      total=total+a*pow(r,j);
      j++;
    }
  cout<<"La suma de la serie geometrica es: "<<total<<endl;
  total=0;
  for(j=0;j<11;j++){
    total=total+a*pow(r,j);
  }
  cout<<"La suma de la serie geometrica es: "<<total<<endl;
  return 0;
}

