// Definiciones de funciones de miembro de LibroCalificar. Este archivo contiene
// Implementaciones de las funciones miembro prototipadas en LibroCalificar.h.
#include <iostream>
#include "Cursoname.h"
#include <iomanip>


using namespace std;


//Inicializa los miembros de datos contadores a 0

LibroCalificar::LibroCalificar( string nombre)
{
  establecerNombreCurso(nombre);
  aCuenta=0;
  bCuenta=0;
  cCuenta=0;
  dCuenta=0;
  fCuenta=0;
}


void LibroCalificar::recibirCalificacion()
{
  int calificacion; //Calificacion introducida por el usuario
  cout<<"Escriba las calificaciones de letras."<<endl
      <<"Escriba el caracter EOF para terminar la entrada."<<endl;
  //itera hasta que el suario escriba la secuencia de fin de archivo
  while (calificacion =! EOF){
    //determina la calificacion que se introdujo
    
    switch(calificacion){
      
    case 'A':
    case 'a':
      aCuenta++;
      break;

    case 'B':
    case 'b':
      bCuenta++;
      break;
      
    case 'C':
    case 'c':
      cCuenta++;
      break;
      
    case 'D':
    case 'd':
      bCuenta++;
      break;

      
    case 'F':
    case 'f':
      dCuenta++;
      break;


    case '\n': //ignora caracteres de nueva linea
    case '\t': //tabuladores
    case ' ': //y espacios en la entrada
      break;

    default: //atrapa todos los demás caracteres
      cout<<"Se introdujo una letra de calificación incorrecta."
	  <<"Escribe una nueva calificación."<<endl;
      break;
    }
  }
}

void LibroCalificar::mostrarReporteCalificaciones()
{
  //imprime resumen de resultados
  cout<< "\n La suma de los resultados es: "<<endl;
  cout<<"\n Para A es: "<<aCuenta<<endl;
  cout<<"\n Para B es: "<<bCuenta<<endl;
  cout<<"\n Para C es: "<<cCuenta<<endl;
  cout<<"\n Para D es: "<<dCuenta<<endl;
  cout<<"\n Para F es: "<<fCuenta<<endl;
}

	 
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
