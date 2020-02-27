#include <iostream>

using namespace std;

#include "base.h"

libroCalificar::libroCalificar (string name)
{
  setCourseName (name);
}
void libroCalificar::setCourseName (string name)
{
  courseName = name ; //Guarde el nombre del curso en el objeto
}

  //Funcion que obtiene el nombre del curso 
string libroCalificar::getCourseName()
{
  return courseName; //devuelve el nombre del curso del objeto
}
  
void libroCalificar:: displayMessage() //Muestra mensaje de bienvenida 
{
  cout<<"Bienvenido al libro de calificaciones para \n"<< courseName<<"!"
      <<endl;
}
