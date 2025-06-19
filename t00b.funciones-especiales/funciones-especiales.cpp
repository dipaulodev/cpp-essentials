#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;

int main()
{

  // Funciones especiales. (Recuerda incluir cmath en el encabezado).
  /*    
  //abs(x): valor absoluto de un numero
  double numero = -7.89;
  double vabs = std::abs(numero); 
  cout << vabs; 
  */

  /*
  // max, min: devuelven el maximo o el minimo entre dos numeros
  double num1 = 0, num2 = 1, menor, mayor;
  menor = std::min(num1,num2);
  mayor = std::max(num1,num2);
  cout << menor << ' ' << mayor; //Imprime primero el menor valor numerico entre ambos, y luego el mayor.
  */

  /* pow, sqrt: potencia y raiz cuadrada  
  double base = 27;
  double raizCubica = std::pow(base, 1.0/3); //Agregar .0 al 1, o el exp será 0 por ser division entera.   
  cout << raizCubica;
  */

  /*Redondeos
  //ceil (num): redondea hacia arriba.   floor (num): redondea hacia abajo
  // cout << ceil(4.55) << ' ' << floor(4.55);
  //Round: redondea hacia abajo o hacia arriba a un valor sin decimales, manteniendo como float o double en cuanto al tipo.
  //cout << round(4.5678); // 4
  */
  /*
  // cout << std::fixed y std::setPrecision(x)   :  fixed cambia el formato de salida para imprimir con decimales, no cifras significativas. 
  // Se configura su precision con setprecision(cantDecimales). La precision queda fija hasta que se cambie. Incluir <iomanip>
  cout << std::fixed << std::setprecision(2);
  cout << 0.9876;
  */



/*// hypot(x,y): calcula la hipotenusa en un triangulo rectangulo, dados sus catetos x e y.  Basicamente, sqrt (x^2 + y*2)
  
  // Ejercicio 1: Halla la hipotenusa de un triangulo rectangulo, cuyos catetos miden 7.5 y 8.5
  // Solucion:
  cout << hypot(7.5, 8.5);
*/
/*
  // Ejercicio 2: Haya la distancia de dos puntos a(1,2) y b(4,3) = sqrt ( [bx-ax]^2 + [by-ay]^2 ) = hypot(a,b)
  // Solucion: hallo delta x, con bx-bx=4-1=3, y delta y=3-2=1. hypot(delta x, delta y) = distancia a,b 
  double ax,ay,bx,by,dist;
  ax=1; ay=2; bx=4; by=3;
  dist = hypot(bx-ax, by-ay);
  cout << dist;
*/  

  cout << '\n';
  return 0;
}
