#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;


int main(){

  int frecuencia1= 0;
  int frecuencia2= 0;
  int frecuencia3= 0;
  int frecuencia4= 0;
  int frecuencia5= 0;
  int frecuencia6= 0;

  //srand(time(0));
  //stand(time(NULL));

  usingned seed;

  cout<<"Introdusca la semilla: ";
  cin>>seed;

  srand(seed);

  int cara ;

  for (int tiro=0; tiro<=1e9;tiro++){
    cara = 1 + rande()%6;
    switch(cara){
    case 1:
      ++frecuencia1;
      break;
    case 2:
      ++frecuencia2;
      break;
    case 3:
      ++frecuencia 3;
      break;
    case 4:
      ++frecuencia 3;
      break;

    case 5:
      ++frecuencia 3;
      break;

    case 6:
      ++frecuencia 3;
      break;

      
 
  
