#include <iostream>
#include "clase.h"


 //Funcion que establece el nombre del curso 
  void setCourseName (string name)
  {
    courseName = name ; //Guarde el nombre del curso en el objeto
  }

  //Funcion que obtiene el nombre del curso 
LibroCalificar::LibroCalificagetCourseName()
  {
    return courseName; //devuelve el nombre del curso del objeto
  }
  
  void displayMessage() //Muestra mensaje de bienvenida 
  {
    cout<<"Bienvenido al libro de calificaciones para \n"<< courseName<<"!"
	<<endl;
  }

private:
  string courseName; //Nombre del curso para este LibroCalificar
  
};
