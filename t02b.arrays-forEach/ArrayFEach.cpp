#include <iostream>
using namespace std;

int main()
{
  int notas[] = {1, 3, 5, 2, 3, 2, 1, 3, 2};
  float cantNotas = sizeof(notas) / sizeof(notas[0]);
  int suma = 0;

  for (int nota : notas)
    suma += nota;

  float promedio = (float)suma / cantNotas;
  cout << promedio << '\n';
  return 0;
}