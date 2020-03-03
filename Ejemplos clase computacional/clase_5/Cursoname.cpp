// Definiciones de funciones de miembro de LibroCalificar. Este archivo contiene
// Implementaciones de las funciones miembro prototipadas en LibroCalificar.h.
#include <iostream>
using namespace std;

#include "Cursoname.h"
#include <iomanip>
LibroCalificar::LibroCalificar( string name )
{
   setCourseName( name ); 
} 

void LibroCalificar::setCourseName( string name )
{
  if (name.length() <=25) //si el nombre tiene 25 caracteres o menos
    courseName = name; //Guarde el nombre del curso en el objeto
  if(name.length() > 25) //si el nombre es mayor a 25 caracteres
  {
    //establece courseName en los primeros 25 caracteres del nombre del parametro 
    courseName = name.substr(0,25); //Empieza en 0, longitud de 25
    cout<<"Nombre \""<<name<<"\" excede al longitud máxima (25).\n"
	<<"Limitando el nombre del curso a los primero 25 caracteres. \n"<<endl;
  }
} 

string LibroCalificar::getCourseName()
{
   return courseName; 
} 

void LibroCalificar::displayMessage()
{
   cout << "Bienvendo al libro de calificaciones para\n" << getCourseName() 
      << "!" << endl;
   
}
void LibroCalificar::determinarPromedioClase()
{
  int total; //Suma de las calificaciones introducidas por el usuario
  int contadorCalif; //Numero de la calificacion a introducir 
  int calificacion; //El valor de la calificacion introduccida por el usuario
  double promedio; //promedio de las calificaciones 

  total=0;
  contadorCalif=0;
  //cout<<"Escriba la calificacion o -1 para salir:";
  

  //Fase de procesamiento
  while(calificacion!= -1)
    {
      total=total + calificacion;
      contadorCalif=contadorCalif +1 ;
      cout<< "Escriba una calificación o -1 para salir:";
      cin>>calificacion;
      
    }
  if (contadorCalif !=0)
    {
      promedio = static_cast<double>(total)/(contadorCalif - 1);

      cout<<"\nEl total de las "<<(contadorCalif-1) <<" calificaciones introducidas es "
	  <<total<<endl;
      cout<<"El promedio de la clase es " <<setprecision (2)<<fixed<<promedio<<endl;
    }
  else{
    cout<<"No se introdujeron las calificaciones"<<endl;
  }
}
