#include <iostream>
//#include <conio.h>
using namespace std ;

int bisiesto(int anio)
{
  bool an=false;

  if (anio%400 ==0)
    {
      an=true;
      return an;
    }
  else if(anio%4 ==0){
    if (anio%100 !=0){
      an=true;
      return an;
    }
  }
  return an;
}


int main(){
  int a,b,c;
  cout<<"Si el año ingresado es bisiesto entonces se imprimira 1, sino es bisiesto se imprimer cero"<<endl;
  cin>>a;
  b=bisiesto(a);
  if (b==1)    cout<<"El año "<<a<<" es un año bisiesto"<<endl;
  else cout<<"El año "<<a<<" no es un año bisiesto"<<endl;

  return 0;
}



