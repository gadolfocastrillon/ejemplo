#include <iostream>
using namespace std; 

class prob
{
 private:
  double inicio,Final, alpha;
 public:
  prob(double,double,double);
  void setDatos(double,double,double);
  void probabilidadNormal();
  void probabilidadPoison();
}; 

