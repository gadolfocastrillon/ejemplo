#include "variables.h"

int main()
{
  prob Telefonia(1,10,2);
  prob Banco(1.0,10.0,3);
  prob Aviones(0.0,10.0,2);
  Telefonia.probabilidadNormal();
  Banco.probabilidadPoison();
  Aviones.probabilidadPoison();
  return 0 ;
}
