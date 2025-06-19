#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){

  /*PSEUDOCODIGO:
  Crear arreglos preguntas[], opciones[][4], respuestas[]
  Crear variable cantPreguntas calculando longitud del arreglo preguntas 
  Crear variable RespuestasCorrectas = 0
  Crear variable char Respuesta

  //recorro vector
  Por i=0 a cant_Preguntas-1
    mostrar pregunta nºi
    mostrar opciones
    pedir respuesta
    leer respuesta
    si (respuesta != respuestas[i])
      mostrar 'Respuesta equivocada'      
    sino
      mostrar 'Respuesta correcta"
      RespuestasCorrectas ++;
    FinSi  
  FinPor  

  Mostrar resultado de la partida
  */

  string preguntas[] = {"1.¿Cuál es la capital de Francia?",
                        "2.¿Qué elemento químico tiene el símbolo O?",
                        "3.¿En qué año llegó el hombre a la Luna?",
                        "4.¿Quién escribió Cien años de soledad?"};
  string opciones[][4] = {{"A. Berlín","B. Madrid","C. París","D. Lisboa"},                          
                          {"A. Oro","B. Oxígeno","C. Osmio","D. Oxalato"},
                          {"A. 1965","B. 1975","C. 1969","D. 1980"},
                          {"A. Mario Vargas Llosa","B. Gabriel García Márquez","C. Julio Cortázar","D. Pablo Neruda"}};
  char respuestas[] = {'C','B','C','B'};
  
  int cantPreguntas=sizeof(preguntas)/sizeof(preguntas[0]);
  int respuestasCorrectas=0;
  char respuesta;
  
  for(int i=0; i<cantPreguntas; i++){
    cout << preguntas[i] << "\n";
    
    //mostrar opciones
    for(int j=0;j<4;j++){
      cout << opciones[i][j] << " ";
    }

    cout << "\n" << "Tu respuesta:";
    cin >> respuesta;
    if(toupper(respuesta) != respuestas[i]){
      cout << "Respuesta equivocada" << "\n";
    }else{
      cout << "Respuesta Correcta" << "\n";
      respuestasCorrectas++;
    }
  }
  cout << "\n" << "Respuestas correctas:" << respuestasCorrectas << "\n";
  return 0;
}