#include <iostream>

using namespace std;


double det2(double A[2][2])
{
  return A[0][0]*A[1][1] - A[0][1]*A[1][0];
}

double det3(double A[3][3])
{
  double A1[2][2] = {{A[1][1],A[1][2]},{A[2][1],A[2][2]}};
  double A2[2][2] = {{A[0][1],A[0][2]},{A[2][1],A[2][2]}};
  double A3[2][2] = {{A[0][1],A[0][2]},{A[1][1],A[1][2]}};

  return A[0][0]*det2(A1) - A[1][0]*det2(A2) + A[2][0]*det2(A3);
}
  

int main(){
  double A[3][3] = {{1,2,3},{3,1,2},{2,3,1}};
  cout<<"El determinante de la matriz 3 por 3 es: "<<det3(A)<<endl;
  return 0;
}
