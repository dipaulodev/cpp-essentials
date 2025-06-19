#include <iostream>
using namespace std;

void ordenArr(int arr[],int TAM);
void mostrarArr(int arr[],int TAM);

int main(){
  const int TAM = 6;
  int arr[TAM]={6,3,8,1,9,5};
  //Aplico Algoritmo de ordenación por burbuja (Bubble Sort)
  ordenArr(arr,TAM);
  //salida
  mostrarArr(arr,TAM);

  cout << "\n";
  return 0;
}

void ordenArr(int arr[],int TAM){
  int aux;

  for (int i=TAM-1; i>0; i--){
    for(int j=0; j<i; j++){
      if (arr[j] > arr[j+1]){
        //intercambio de valores
        aux = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = aux; 
      }
    }
  }
}



void mostrarArr(int arr[], int TAM){
  for(int i=0; i<TAM;i++){
    cout << arr[i];
  }
}
