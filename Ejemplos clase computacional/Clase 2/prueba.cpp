#include <iostream>

using namespace std;

int main(){

  int number1; //primer entero
  int number2; //Segundo entero

  cout<<"Entre do numeros entero:";
  cin>>number1>>number2;

  if(number1==number2){
    cout<<number1<<"=="<<number2<<endl;
  }
  else{
    cout<<"Número diferentes"<<endl;
  }
  return 0;

}
