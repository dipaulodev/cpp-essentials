#include <iostream>
using std::cout;
using std::cin;

int main()
{
  /*
  //else if - Ejercicio: insertar edad. Solo entra si edad es de 18 a 80
  int edad;
  cin >> edad;

  if (edad < 18){
    cout << "\nMenor de edad. No entra.";
  }
  else if (edad <= 80){ // entre 18 y 80
    cout << "\nEntra. Rango de ed correcto";
  }
  else { // Mas de 80
    cout << "\nNo entran mayores de 80";
  }
  */
  /*
  //if anidados - Lo mismo pero con if anidados - if else
  int edad;
  cin >> edad;
  
  if (edad < 18){
    cout << "\nMenor de edad. No entra.";
  } 
  else{ 
    if (edad <= 80){ // entre 18 y 80
      cout << "\nEntra. Rango de ed correcto";
    }
    else { // Mas de 80
      cout << "\nNo entran mayores de 80";
    }
  }
  */
  
  /* //Solucion 3: con operadores logicos, dando prioridad a los que van a entrar
  int edad;
  cin >> edad;
  if (edad >= 18 && edad <= 80){
    cout << "\nPuede entrar.";
  }
  else if (edad < 18){
    cout << "\nNo entra. Menor.";
  }
  else { //edad > 80
    cout << "\nNo entra. Muy mayor.";
  } */
  
  /*switch, el condicional puede ser char, int, no string ni bool*/
  /* char nota='c';
  switch(nota){
    case 'a': 
      cout << "Nota perfecta. ";     
    case 'b':
      cout << "Felicitaciones. Aprobado.";
      break;  
    case 'c':
      cout << "No Aprobado"; 
      break;     
    default:
      cout << "Ingrese una nota valida.";    
  } */

  /* //operador ternario -   condicion-es-cierta ? true{comandos} : false{comandos}; 
  //Un dado tiene valor 19. calcular e indicar con op ternario si es par o impar.
  int dado = 19;
  dado % 2 == 0 ? {cout<<"Es "; cout<<"par.";} : cout<<"Es impar."; */
  
  /*//mismo pero el dado solo puede tener valor true o false
  bool dadoBinario = true;
  dadoBinario ? cout<<"true" : cout<<"false";
  */

  cout << '\n';
  return 0;
}
