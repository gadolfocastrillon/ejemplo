#include <iostream>

using namespace std;

int main(){
  int n1,porc;
  
  cout<<"Programa para determinar naturaleza par o impar de un numero"<<endl;
  cout<<"Introduzca un número entero"<<endl;
  cin>>n1;

  porc=n1%2;
  /*
  if(porc==0)
    cout<<"El número es par \n";
  else
    cout<<"El número es impar \n";

  //expresiones compuestas

  int b=8;

  cout<<"b es:"<<b<<endl;

  if(porc==0){
    cout<<"El numero es par"<<endl;
    cout<<"Si le sumamos 1 se volvera impar"<<endl;
    int b=16;
    double c=50.5;
    cout<<"b ahora es: "<<b<< " y c es:"<<c<<endl;
  }
  else{
    cout<<"El numero es impar \n";
    cout<<"si le sumamos 1 se volvera par"<<endl;
    //si trata de imprimir c le dara error
    cout<<"en este bloque b es:"<<b<<endl;//<<"y c es:"<<c<<endl;
  } 
  */

  cout<<"Introduzca un segundo entero:"<<endl;
  int n2;
  cin>>n2;

  int porc2=(n1+n2)%2;

  if(porc==0){
    cout<<"El primer número es par \n";
    if (porc2==0)
      cout<<"El segundo número es par \n";
    else
      cout<<"El segundo número es impar \n";
  }
  else{
    cout<<"El primer número es impar \n"; //es necesario usar {}
  }
  
  return 0;
}
