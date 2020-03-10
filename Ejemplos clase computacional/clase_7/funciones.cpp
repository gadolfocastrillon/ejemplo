#include <iostream>

using namespace std;

/*
//int VolumenCaja(int,int,int);
int VolumenCaja(int=1,int=1,int=1);

int main()
{
  cout<<"el volumen predeterminado es: " <<VolumenCaja()<<endl;
  cout<<endl;

  cout<<"el volumen que le damos es: "<<VolumenCaja(2,2,2)<<endl;

  return 0;
}

//Definicion de la función 
int VolumenCaja(int L,int A,int P)
{
  return L*A*P;
}
*/

/*
//-----------------Sobre carga de funciones------------------------------

//funcion cuadrado para valores int

int cuadrado(int x)
{
  cout<<"El  cuadrado del valor int "<<x<<" es: ";
  return x*x;
}

double cuadrado(double y)
{
  cout<<"El cuadrado del valor double "<<y<<" es: ";
  return y*y;
}

int main()
{
  cout<<cuadrado(7); //llama a la versión int 
  cout<<endl;

  cout<<cuadrado(7.5); //llama a la versión double 
  cout<<endl;
  return 0;
}
*/

//------------------ Inline -----------------------------------------

//Hace copias de la funcion donde se llame
//solo para funciones muy pequeñas de uso frecuente

/*
inline double cubo(const double lado)
{
  return lado*lado*lado; //calcula el cubo
}

int main()
{
  double valorLado;
  cout<<"Escriba la longitud del lado de su cubo: ";
  cin>>valorLado;

  //Calcula el cubo de valorLado y muestra el resultado
  cout<<"Elv volumen del cubo con un lado de: "
      <<valorLado<<" es: "<<cubo(valorLado)<<endl;

  return 0;
}
*/

//------------------- Variables estaticas ----------------------------

/*
void demo()
{
  //static variable
  static int count=0;
  cout<<count<<" ";
  count++;
}

int main()
{
  for(int i=0;i<5;i++)
    demo();
  return 0;
}
*/

//--------------------Parametros por referencia -----------------------

int cuadradoPorValor(int);
void cuadradoPorReferencia(int &);

int main()
{
  int x=2;
  int z=4;

  cout<<"x = " <<x<< " antes de cuadradoPorValor";
  cout<<"Valor devuelto por cuadradoPorValor: "
      <<cuadradoPorValor(x)<<endl;
  cout<<"x = "<<x<<" despues de cuadradoPorValor \n"<<endl;

  //demuestra cuadradoPorReferencia

  cout<<"z = "<<z<<" antes de cuadradoPorReferencia"<<endl;
  cuadradoPorReferencia(z);
  cout<<"z = "<<z<<" despues de cuadradoPorReferencia"<<endl;
  return 0;
}


//no se modifica el valor x en la memoria 
int cuadradoPorValor(int numero)
{
  return numero*=numero; //no se modifico el argumento de la funcion que hizo la llamada
}

//se modifica el valor de z en memoria
//Cuando se pasen parametros por referencia se tiene que tener cuidado ya que los valores se modifican
//El paso por referencias es bueno por cuestiones de rendimiento, ya que puede eliminmar la sobrecarga por copiar grandes cantidadesde datos en el paso por valor.
void cuadradoPorReferencia(int &refNumero)
{
  refNumero*=refNumero;//se modifico el argumento
}
