#include<iostream>
#include<math.h>
using namespace std;
class prob
{
private:
  double inicio, Final ,alpha;
public:
  prob(double,double,double);
  void setDatos(double,double,double);
  void probNormal();
  void probPoison();
};

prob::prob(double i, double f, double a)
{
  setDatos(i,f,a);
}
void prob::setDatos(double i, double f, double a)
{
  inicio = i;
  Final = f;
  alpha = a;
}
void prob::probNormal()
{
  const float E=2.71828;
 
  double P ,ini =inicio, fina =Final,alp=alpha;
  double al;
  for(double i=ini;i<=fina;i=i+1.0)
    {
      
      al = - i / alp;
      P= 1 - pow(E,al);
      cout<<P<<endl;
    }
}


int main()
{
  prob a(1.0,10.0,2.0);
  a.probNormal();
}
