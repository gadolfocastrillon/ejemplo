#include <vector>

class metodo
{
 private:
  int N; //numero de particiones 
  double inicioX,finalX,inicioY,finalY; //intervalos de x y y 
  double h; //el valor de h no cambia entonces se define aca para que sea global para todos

 public:
  metodo(int , double, double, double, double); //de ingresa N,a,b,alfa,betta
  void establecerDatos(int, double,double,double,double); //establece los valores de N,a,b,alfa,betta
  double q(double); //para definir q(x) se ingresa x 
  double p(double); //para definir p(x) se ingresa x
  double r(double); //para definir r(x) se ingresa x
  //double c(double(*)(double));
  void paso();
  
};
  
