#include <iostream>
#include <string>
using namespace std;

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
