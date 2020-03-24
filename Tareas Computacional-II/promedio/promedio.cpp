#include <iostream>
#include <math.h>
using namespace std;



int main()
{
  double multi = 1.0,divi =0.0;
  
  double x = 1.0,n=-1.0,b=0;
  while (x!=999)
    {
      multi=multi*x;
      //divi = divi + b;
      cout<<divi<<endl;
      cout<<"Ingrese los valores de x, para salir presione 999"<<endl;
      n=n+1.0;
      cin>>x;
      b=1/x;
      divi = divi + b;
    }
  // cout<<"El numero de datos es: "<<n<<endl;
 
  cout<<"La media geometrica es: " <<pow(multi,1/n)<<endl;
  cout<<"La media armónica es: "<<n/divi<<endl;
}
