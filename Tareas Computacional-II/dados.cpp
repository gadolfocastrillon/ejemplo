/* diseñe un programa que lance dos dados, si en el primer tiro la suma es 7 o 11 la persona gana, si la suma es 2, 3, o 12 en el primer tiro(llamado craps) pierde, si la suma es 4,5,6,8,9 o 10 en el primer tiro, esta suma se convierte en el punto del jugador, para ganar el jugador debe seguir tirando los dados hasta que salga otra vez "su punto" . el jugador pierde si tira un 7 antes de llegar su punto 
 */



#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main() {

  int x=0 , y=0 , punto;

  
  cout<<"----------------------------------------------"<<endl;
  cout<<"Reglas"<<endl;
  cout<<"El juego consiste en el lanzamiento de dos dados"<<endl;
  cout<<"-Si en el primer tiro saca 7 o 11 gana"<<endl;
  cout<<"-Si en el primer tiro saca un craps (osea 2,3 o 12) el jugador pierde"<<endl;
  cout<<"-Cuando saque cualquier otro valor, este pasara a ser su punto y para ganar tiene que volver a sacar de nuevo este punto"<<endl;
  cout<<"-Despues del primer tiro si el jugador saca 7, pierde"<<endl;
  cout<<"Buena suerte y que comience el juego"<<endl;
  cout<<"----------------------------------------------"<<endl;

  // cout<<"presione 1 para lanzar los dados"<<endl;
  //cin>> i;

  srand(time(NULL));
  //if (i==1){
  x =1 +  rand()%(7 - 1);
  y =1 +  rand()%(7 - 1);

  punto = x + y;

  

  if (punto == 7){
    cout<<"Sacaste el numero: "<<punto<<endl;
    cout<<"Felicitaciones ganaste el juego"<<endl;
  }
  else if ( punto == 11 ){
    cout<<"Sacaste el numero: "<<punto<<endl;
    cout<<"Felicitaciones ganaste el juego"<<endl;
    }
  else if (punto == 2){
    cout<<"Sacaste el numero: "<<punto<<endl;
    cout<<"Mala suerte, perdiste el juego"<<endl;
  }

  
  else if (punto == 3){
    cout<<"Sacaste el numero: "<<punto<<endl;
    cout<<"Mala suerte, perdiste el juego"<<endl;
  }
  
  else if (punto == 12){
    cout<<"Sacaste el numero: "<<punto<<endl;
    cout<<"Mala suerte, perdiste el juego"<<endl;
  }
  else {
    cout<<"Sacaste el número: "<<punto<<endl;
    cout<<"Para ganar tienes que sacar el numero "<<punto<<endl; 
    int x2,y2,punto2;

    x2 =1 +  rand()%(7 - 1);
    y2 =1 +  rand()%(7 - 1);
    punto2 = x2 + y2 ;
    cout<<"Sacaste el numero: " <<punto2<<endl;
    
    while (punto2 != punto){
      int xa,ya;
      xa=1 + rand()%(7-1);
      ya =1 +  rand()%(7-1);
      if (punto2 == 7){
	cout<<"Sacaste el numero "<<punto2<<endl;
	cout<<"Mala suerte, perdiste el juego"<<endl;
	break;
      }
      else{
	
	cout<<"Sacaste el numero: "<<punto2<<endl;
	punto2 = xa + ya;
      }
    }
    if (punto2 == punto) {
      cout<<"Sacaste el numero: "<<punto2<<endl;
      cout<<"Felicidades, ganaste el juego"<<endl;
    }
   
    
  }
}
