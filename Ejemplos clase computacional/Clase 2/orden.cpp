#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  cout<<setw(3)<<6<<endl
      <<setw(3)<<18<<endl
      <<setw(3)<<124<<endl
      <<setw(3)<<1234<<endl //muestra del 1 al 3 en columna y el 4 despues de la tercer columna 
      <<"----\n"
      <<(6+18+124)<<endl;
  cout<<"|"<<setw(10)<<fixed<<setprecision(3)<<25.67<<"|";
  
  return 0;
}
