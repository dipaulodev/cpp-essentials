#include <iostream>
#include <string>
using namespace std;

void verMatriz(string mFrutas[][3],int filas, int columnas);

int main(){
  
  //El numero de filas es opcional. El de columnas es obligatorio ya que define al elemento base del conjunto.
  string mFrutas[][3]={{"pera","manzana","banana"},
                       {"uva","durazno","anana"},
                       {"melon","sandia","cereza"}};

  int filas = sizeof(mFrutas) / sizeof(mFrutas[0]);
  int columnas = sizeof(mFrutas[0]) / sizeof(mFrutas[0][0]);
    
  verMatriz(mFrutas,filas,columnas);
                                        
  return 0;
}

void verMatriz(string mFrutas[][3], int filas, int columnas){
  for (int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
      cout << mFrutas[i][j] << " ";
    }
    cout << '\n';
  }
}