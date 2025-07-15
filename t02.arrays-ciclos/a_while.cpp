#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
  /* // Ejercicio 1: Usando FOR, realizar un bucle que pida crear un nombre. No salir hasta que haya un caracter dentro.
  string nombre;
  while (nombre.empty()) {  // alternativa: (nombre=="")  
    cout << "Escribir nombre: ";
    getline(cin >> std::ws, nombre);
  }
  cout << "Hola, " << nombre; */

  // Ejercicio 2: Usando Do-While, hacer el mismo bucle pero que se ejecute al menos 1 vez.
  /* string nombre;
  nombre
  do {
    cout << "Escribir nombre: ";
    getline(cin >> std::ws, nombre);
  } while (nombre.empty()); // alternativa: (nombre=="")

  cout << "Hola, " << nombre; */

  /* // Caso particular: En casos numericos, se debe asignar un valor antes de entrar a un ciclo, para evitar valores inesperados.
  int valor; 
  while(valor < 0 ){
    cout << "Hola";
  }
  cout << "Mundo" << valor; // Mundo32765 */



  cout << '\n';
  return 0;
}