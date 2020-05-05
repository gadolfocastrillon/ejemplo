#include <iostream>
#include "metodo_de_diferencias_finitas.h"
#include <math.h>
#include <vector>
#include <iomanip>
using namespace std;

void imprimir(const vector<double> &,const vector<double> &);

metodo::metodo(int n, double a, double b, double al, double be)
{
  establecerDatos(n,a,b,al,be);
  
}
void metodo::establecerDatos(int n, double a, double b, double al, double be)
{
  N = n;
  inicioX=a;
  finalX=b;
  inicioY=al;
  finalY=be;
  h = (finalX - inicioX)/(N+1);
}

double metodo::p(double x)
{return -2/x;}
double metodo::q(double x)
{return 2/pow(x,2);}
double metodo::r(double x)
{return 1/pow(x,2);}
void metodo::paso()
{
  vector <double> x(N+2);
  vector <double> u(N+1);
  vector <double> z(N+1);
  vector <double> w(N+2);
  x[0]=inicioX;
  for (int i=1;i<=N+1;i++)
    {
      if (i==1)
	{
	  u[0]=0.0;
	  z[0]=0.0;
	  u[N]=0.0;
	  double l1,a1,b1,d1;
	  x[i]= inicioX + h;
	  a1= 2 + pow(h,2)*q(x[i]);
	  b1= -1 + (h/2)* p(x[i]);
	  d1= -pow(h,2)*r(x[i]) + (1 + (h/2)*p(x[i]))*inicioY;
	  l1=a1;
	  u[i]=b1/a1;
	  z[i]=d1/l1;
	}
      else if(i==N)
	{
	  double ln,an,cn,dn;
	  x[i]= finalX - h ;
	  an= 2 + pow(h,2)*q(x[i]);
	  cn= -1 -(h/2)*p(x[i]);
	  dn= -pow(h,2)*r(x[i]) + (1 + (h/2)*p(x[i]))*finalY;
	  ln=an - cn*u[i-1];
	  z[i]=(dn - cn*z[i-1])/ln;
	}
      else
	{
	  double li,ai,bi,ci,di;
	  x[i]= inicioX + i*h;
	  ai= 2 + pow(h,2)*q(x[i]);
	  bi= -1 + (h/2)*p(x[i]);
	  ci= -1 - (h/2)*p(x[i]);
	  di= -pow(h,2)*r(x[i]);
	  li=ai -ci*u[i-1];
	  u[i]=bi/li;
	  z[i]=(di - ci*z[i-1])/li;
	}
    }
  w[0]=inicioY;
  w[N+1]=finalY;
  w[N]=z[N];
  double b=N-1;
  for(int i=1;i<N;i++)
    { 
      w[b]=z[b] - u[b]*w[b+1];
      b=b-1;
    }
  cout<<"El intervalo es: "<<inicioX<<"<=x<="<<finalX<<" y y("<<inicioX<<")="<<inicioY<<" y("<<finalX<<")="<<finalY<<" y esta patido en "<<N<<" partes"<<endl;
  imprimir(x,w);
}
void imprimir(const vector<double> &arreglo1, const vector<double> &arreglo2)
{
  
  size_t i;
  for (i=0;i<arreglo1.size();i++)
    {
      cout<<setw(12)<<arreglo1[i]<<setw(12)<<arreglo2[i]<<endl;
    }
}
  
/*  
void metodo::mostrarDatos()
{
  
}
*/
