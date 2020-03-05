// LibroCalificar.h
// Definición de la clase LibroCalificar. Este archivo presenta
// interfaz publica sin revelar las implementaciones de los miembros de las
// funciones, que se definen en LibroCalificar.cpp

#include <string>
//using std::string;

// LibroCalificar class definition
class LibroCalificar
{
public:
   LibroCalificar( string ); 
   void setCourseName( string ); 
   string getCourseName(); 
   void displayMessage();
   void determinarPromedioClase();
   
   void mostrarReporteCalificaciones(); //muestra un reporte con base en las calificaciones 
   
private:
   string courseName; //Nombre del curso para este librocalificar
 
   int aCuenta; //Cuenta de calificaciones A
   int bCuenta;
   int cCuenta;
   int dCuenta;
   int fCuenta; 
};  
