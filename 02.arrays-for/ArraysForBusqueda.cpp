#include<iostream>
using namespace std;

int busqueda(int arr[], int largo, int numBuscado);

int main(){
  int notas[]= {1,3,4,5,6,3,6,1};
  int longitud = sizeof(notas) / sizeof(notas[0]);
  cout << busqueda(notas,longitud,6);

  return 0;
}

//devuelve TRUE si está, FALSE si no.
bool busqueda(int arr[], int largo, int numBuscado){
  for(int i=0;i<largo;i++){
    if (arr[i] == numBuscado)
      return true;    
  }
  return false; //no se encontró  
}