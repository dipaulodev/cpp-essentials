#include <iostream> 
#include <string> // Necesario para operar con strings.

using std::string;
using std::cout; //los using tiene scope. En este caso son globales
using std::cin;
using std::getline;
using std::ws;

int main()
{
  /*// Booleanos y jerarquia de operaciones
  bool llave1 = true, llave2 = false;
  // por debajo los bool son 0 y 1. Las expresiones con operadores binarios, deben ir entre parentesis. Notar. que llave1 && llave2 al no ir entre parentesis, 
  // solo devuelve el valor de llave1, y esto no da error, porque lo que se toma realmente es imprimir unicamente llave1. 
  // Los operadores binarios con menor preferencia que << deben ir entre parentesis. 
  cout << !llave1 << '\n' << (llave1 < llave2) << '\n' << (llave1 && llave2)  << '\n' << llave1 && llave2 << '\n';  // "  && llave2 << '\n'  " ya ni lo procesa
  */


  /*//conversion minusculas
  char mayuscula = 'M';
  char minuscula = (char)(mayuscula+32);
  cout << minuscula;
  */

  /*//Conversion decimal
  int cantidad=9, valores = 7;
  double divEntera = cantidad/valores; // El resultado se truncará y los decimales desaparecen. Resultado sera int, y en la asignacion pasará a double, pero no recupera decimales.
  double cociente = (double)cantidad / valores; // Cast a cantidad ya que el operador de divion marca el final del cast. Cociente no sera truncado. Con castear uno de dos enteros, alcanza.
  double cocienteEntero = (double) (cantidad/valores); // Cantidad/valores es div entre enteros (trunca resultado). El cast se aplica tarde y 2 veces, en el cast y en la asignacion. 
  cout << divEntera << ' ' << cociente << ' ' << cocienteEntero;  
  */

  /*Entradas  
  
  /* //CIN
  int num;
  string animal;
  cin >> num >> animal;  // [ingresamos " 8.9pato]
  cout << num << ' ' << animal;
  */
  
  /*
  //GETLINE   
  // Uso seguro de getline luego de cin
  string palabra, oracion;
  cin >> palabra; //no procesa los white spaces (enter, espacios, tabulaciones) 
  //cin.ignore; // procesa solo un caracter.
  //cin >> std::ws; // procesa todos los whitespaces hasta encontrar caracteres legibles.  
  //getline(cin,oracion); //Procesa todo hasta el salto de linea, el cual no se guarda.

  getline(cin << ws, oracion);        //Tambien se puede asignar ws como parametro del getline. Lee todos los ws antes de caracteres legibles. Lee caracteres, y Salta el \n final. 
  // getline(cin << ws, oracion,'%'); //Hay un 3er parametro opcional que es para modificar la bandera final de \n a otro simbolo.
  cout << palabra << '-' << oracion;
  */

  /* //Ejemplo practico de saludo y edad  
  int edad;
  string nombre;
  cout << "Ingresa edad:";
  cin >> edad;
  getline(cin >> ws, nombre);
  cout << "Bienvenido, " << nombre << "\nTu edad es: " << edad;
  */

  cout << '\n';
  return 0;
}
