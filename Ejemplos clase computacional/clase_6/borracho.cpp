#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;


int main(){
  int num;
  double num2;

  int x=0;
  int y=0;

  srand(time(NULL));
  for (int c=1;c<=10;c++){
    num=1 + rand()%(100+1-1);
    cout<<num<<" ";
    if (num<=25){
      x++;
      cout<<"Ando en x++"<<endl;
    }
    if(num>25 &&num<=50){
      x--;
      cout<<"Ando en x--"<<endl;
    }
    if(num>50 && num<=75){
      y++;
      cout<<"Ando en y++"<<endl;
    }
    if(num>75 && num<=100){
      y--;
      cout<<"Ando en y--"<<endl;
    }
  }
  cout<<"La posicion en la que estoy es: X: "<<x<<" Y: "<<y<<endl;
}
    
