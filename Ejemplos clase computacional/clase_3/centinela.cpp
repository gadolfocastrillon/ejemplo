#include <iostream>


using namespace std;

int main(){
  int n1,val;
  char ch;

  while(val != 1){

    cout<<"entre una letra ";
    cin>>ch;  //es un valor numerico

    cout<<"Entre un número ";
    cin>>n1;

    cout<<"¿Desea ingresar mas letras y numeros? (No = 1, Si = 2)";
    cin>>val;

    cout<<"Su letra y numero son: "<< ch<< " y " << n1<< endl;
  }
  return 0;
}
