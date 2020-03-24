
class series
{
public:
  series(double,double);
  void setValores (double,double);
  double obtenerValorInicial () ;
  double obtenerValorFinal();
  void mostrarDatos();
  double serieAritmetica();
  double serieGeometrica();
  
private:
  double valorInicial, valorMultiplicar;
  int contador ; 
};
