#include <iostream>

using namespace std;

int main(){

  char cadena1[20];
  char cadena2[]="literal de cadena";
	       
  cout<<"Escriba la cadena \"hola todos\": ";
  cin>>cadena1; //no imprime toda la frase de hola todos sino por partes
  //primero imprime hola y despues imprime todos 

  cout<<"cadena1 es: "<<cadena1<<"\ncandena2 es:"<<cadena2;

  cout<<"\nCadena1 con espacios entre caracteres es: \n";

  for(int i=0;cadena1[i]!='\0';i++){
    cout<<cadena1[i]<<' ';
    //solo imprimer hasta el espacio entre hola y todos 
  }

  cin>>cadena1;
  cout<<"\ncandena 1 es: "<<cadena1<<endl;

  return 0;
}
      
  
