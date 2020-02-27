#include <iostream>

#include "base.h"



int main()
{
 
  //Crea dos mensaje con el constructor
  LibroCalificar gradeBook1 ("Introduccion a la programacion en C++!");
  LibroCalificar gradeBook2 ("Metodos computacionales II");

  //Mostra el valor incial de courseName para cada libro calificar.
  cout<<"LibroCalificar1 creada para el curso:"<< gradeBook1.getCourseName()
      <<"\n libroCalificar2 creado para el curso: "<< gradeBook2.getCourseName()
      <<endl;
  
   return 0; 
}
