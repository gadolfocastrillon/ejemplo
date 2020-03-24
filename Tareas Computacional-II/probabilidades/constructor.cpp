#include<iostream>
#include<math.h>
#include "variables.h"

using namespace std;


int factorial(int n)
{
  if(n<0) return 0;
  else if(n>1) return n*factorial(n-1);
  return 1;
}

  


/*Se ingresa desde donde quiere hallar la probabilidad hasta donde quiere que termine, ademas se ingresa la duracion promedio t */ 
prob::prob(double c,double a,double t)
{
  setDatos(c,a,t);
}
void prob::setDatos(double i,double f,double a)
{
  inicio = i;
  Final = f;
  alpha = a;
}
void prob::probabilidadNormal()
{
  const float Euler = 2.71828;
  double P, ini=inicio,fina=Final,alp=alpha;
  double al;
  cout<<"PROBABILIDAD NORMAL"<<endl;
  for(double i = ini;i<=fina;i=i+1.0)
    {
      al = -i/alp;
      P=1 - pow(Euler,al);
      cout<<"La probabilidad de sacar "<<i<<" es: "<<P<<endl;
    }
  
}

void prob::probabilidadPoison()
{
  const float Euler=2.71828;
  double P,ini=inicio,fina=Final,alp=alpha;
  cout<<"PROBABILIDAD POISSON"<<endl;
  for(double i=ini;i<=fina;i=i+1.0)
    {
      P = (pow(alp,i)*pow(Euler,-alp))/factorial(i);
      cout<<"La probabilidad de sacar "<<i<< " es: "<<P<<endl;
    }
}

      
      
      
  
