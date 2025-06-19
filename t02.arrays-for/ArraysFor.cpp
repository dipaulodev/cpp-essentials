#include <iostream>
using namespace std;

void promedio(int notas[],int cantNotas);

int main()
{
  int notas[] = {1, 3, 5, 2, 3, 2, 1, 3, 2};
  //Mejor usar SizeOf antes de pasar el array como parametro (o crear el array ya dentro de la funcion externa),
  //ya que este array se pasara como puntero a la primera posicion del mismo array, lo que cambia el peso en bytes ya que tomara el del puntero.
  float cantNotas = sizeof(notas) / sizeof(notas[0]);
  promedio(notas,cantNotas); 
  return 0;
}

void promedio(int notas[],int cantNotas){  
  int suma = 0;
  float promedio;

  for (int i=0; i < cantNotas;i++)
    suma += notas[i];

  promedio = (float)suma / cantNotas;
  cout << promedio << '\n';
}

