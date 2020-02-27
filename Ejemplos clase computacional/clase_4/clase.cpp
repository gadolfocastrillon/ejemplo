//#include <iostream>
//#include <string>

#include "clase.h" //incluir la definicion LibroCalificar 

using namespace std;
/*
//class definition
class LibroCalificar
{
public:
  
  //el constructor inicializa courseName con una cadena suministrada como argumento
  LibroCalificar( string name)
  {
    setCourseName(name); //Llamar a la función set para inicialzar courseName
  }
  //Funcion que establece el nombre del curso 
  void setCourseName (string name)
  {
    courseName = name ; //Guarde el nombre del curso en el objeto
  }

  //Funcion que obtiene el nombre del curso 
  string getCourseName()
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
*/


// función principal comienza la ejecución del programa
int main()
{
  /*
  string nameOfCourse;
  LibroCalificar myLibroCalificar;
  
  cout<<"El nombre incial del curso es: "<<myLibroCalificar.getCourseName()<<endl;
  cout<<"\n Por favor ingrese el nombre del curso:"<<endl;
  myLibroCalificar.setCourseName ( nameOfCourse ); //Establece el nombre del curso
  cout<<endl;
  myLibroCalificar.displayMessage();
  */

  //Crea dos mensaje con el constructor
  LibroCalificar gradeBook1 ("Introduccion a la programacion en C++!");
  LibroCalificar gradeBook2 ("Metodos computacionales II");

  //Mostra el valor incial de courseName para cada libro calificar.
  cout<<"LibroCalificar1 creada para el curso:"<< gradeBook1.getCourseName()
      <<"\n libroCalificar2 creado para el curso: "<< gradeBook2.getCourseName()
      <<endl;
  
   return 0; 
} 
