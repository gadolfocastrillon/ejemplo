#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main(){

  srand(time(NULL));

  for (int j=0;j<=10;j++){
    cout<<rand()%51<<endl;//0-50
    cout<< 1 + rand()%(101-1)<<endl; //1-100
    cout<<250+rand()%(421-250)<<endl; //250-420
  }
  return 0;
}
