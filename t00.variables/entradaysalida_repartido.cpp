/* 
Ejercicios para practicar entrada / salida en C++
(cin, cout, getline, formateo, mezcla de tipos, etc.)

Nº	Ejercicio	Qué se practica
1	Eco de frase	Leer una línea completa con getline y volver a imprimirla con cout.
2	Presentación personal	Pedir nombre (con getline), edad (cin) y ciudad (getline), luego mostrar un mensaje tipo “Hola, <nombre>, tienes <edad> años y vives en <ciudad>”. Practica la mezcla cin + getline limpiando el buffer.
3	Contador de palabras simples	Leer una línea con getline, contar las palabras (usando un istringstream) y mostrar la cantidad.
4	Sumador interactivo	Pedir dos números con cin, mostrar la suma con un mensaje formateado (cout << fixed << setprecision(2)).
5	Conversor de temperatura con menú	Mostrar un menú (C→F, F→C). Leer opción (cin) y luego la temperatura (cin). Mostrar el resultado con 1 decimal.
6	Formato de tabla	Leer 3 productos (nombre via getline, precio via cin) y al final mostrar una tabla alineada con setw (ej. nombre a 15 chars, precio a 8 chars).
7	Diálogo estilo chat	Repetir: pedir una línea al usuario con getline, imprimir “Bot: <texto en mayúsculas>”. Termina cuando el usuario escribe “salir”. Practica bucle + getline + funciones de string.
8	División segura	Leer numerador y denominador con cin; si el denominador es 0 mostrar error, si no mostrar el cociente con precisión de 3 decimales.
9	Encuesta rápida	Para N participantes (valor leído con cin), preguntar su serie/película favorita (getline). Al final, listar todas las respuestas numeradas usando un for.
10	CSV sencillo	Leer una línea con 3 valores separados por coma (“Juan,25,Montevideo”), separarlos usando getline(istream, string, ',') dentro de un stringstream y mostrarlos cada uno en una línea distinta.
*/