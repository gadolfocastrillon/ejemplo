#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  const float Euler = 2.71828;
  double P;
  double t=1.0;
  for(double i=1.0;i<=10.0;i=i+1.0)
    {
      double a = -i/2;
      cout<<a<<endl;
      cout<<a<<endl;
      P=1 - pow(Euler,a);
      cout<<"La probabilidad de sacar "<<i<<" es: "<<P<<endl;
    }
}
