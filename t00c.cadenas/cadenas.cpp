#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::getline;
using std::ws;
using std::string;

int main(){
  //Metodos de cadenas
  string nombre,apellido;
  
  /* 
  //length()  longitud de string - ingresa un nombre completo, e imprime la longitud de la cadena completa, con espacios. El sentinela sera un %  
  getline(cin >> ws, nombre, '%');
  cout << nombre.length(); 
  */

  /*
  //empty() - devuelve true si es una cadena vacia
  nombre = "";
  nombre.empty() ? cout << "Esta vacia" : cout << "Contiene caracteres";
  */

  /* clear(), vacia eficientemente el string. Mas eficiente que string="", que tambien es valido.   
  nombre = "maxi"; apellido = "perez";
  nombre.clear(); apellido = "";
  cout << nombre.length() << ' ' << apellido.length();
  */

  /* // .at()  extraemos chars de una cadena string
  string palabra = "Hola Mundo"; //queremos extraer la M
  char letra = palabra.at(5);
  cout << letra; */

  /* //Agregar texto.  +=abc  .append("abc")   .insert(slot,"abc") -   
  string animal = "";
  animal += "perro"; // agregamos texto al final
  animal.append(" grande"); // agregamos texto al final
  animal.insert(6, "siberiano "); // agregamos texto a partir de la posicion que querramos dentro de la cadena.
  animal.insert(0, "Es un ");
  cout << animal; */

  /* // find("abc"): devuelve slot inicial de la palabra buscada 
  // erase(m,n): borra valores desde la posicion m hasta a la n del string. -1 indica size - 1, o sea la ultima posicion
  string pelicula = "El Conjuro El Conjuro";
  pelicula.erase(10,-1); // desde posicion 10, hasta la ultima posicion (inclusive). Queda: "El conjuro"
  cout << pelicula << ' ' << pelicula.find("o"); // devuelve en que posicion del string ha encontrado por 1ra vez una "o".  */







  cout << '\n';
  return 0;
}