#include <iostream>

using namespace std;

//class definition
class LibroCalificar //para crear la clase, se coloca un nombre 
{


  //de entrada todas las variables que se ingresen son de caracter privado
  
public: //Especificador de acceso
  //se tiene que especificar que tipo de función es y se le da un nombre
  //void tipo de valor de retorno
  void displayMessage() //Crea una función 
   {
      cout << "Bienvendo al libro de calificaciones!" << endl;
   } 
};   //no olvida que para cerrar la clase debe ir un punto y coma


// función principal comienza la ejecución del programa
int main()
{
  LibroCalificar myLibroCalificar; //crea un objeto de la clase 
  myLibroCalificar.displayMessage(); 	//para llamar un metodo de la clase

   return 0; 
} 


