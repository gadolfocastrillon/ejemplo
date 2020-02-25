#include <iostream>

using namespace std;

int main(){
  int i ;
  cout<<"Introduzca número del 1 al 7:" <<endl;
  cin>>i;

  switch (i)
    {
    case 1:
      cout<<"Lunes \n"<<endl;
      break;
    case 2:
      cout<<"Martes \n"<<endl;
      break;
    case 3:
      cout<<"Miercoles \n"<<endl;
      break;
    case 4:
      cout<<"Jueves \n"<<endl;
      break; 		
    case 5:
      cout<<"Viernes \n"<<endl;
      break;
    case 6:
      cout<<"Sabado \n"<<endl;
      break;
    case 7:
      cout<<"Domingo \n"<<endl;
      break;
    default:
      cout<<"El número ingresado no es valido"<<endl;
      break;
    }

  return 0;
}
