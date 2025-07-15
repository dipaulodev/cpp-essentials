/*
Cadenas (std::string) y métodos sencillos
Objetivo: practicar lectura con getline, recorrido caracter a caracter y los métodos básicos de std::string (length, find, substr, erase, insert, etc.).

Nº	Enunciado	Qué se ejercita	Pista / sugerencia
1	Contar vocales
Pedí una frase y mostrale al usuario cuántas vocales (a‑e‑i‑o‑u, mayúsculas y minúsculas) contiene.	Recorrido de cadena, tolower	Podés usar un switch o un if con varios `
2	Invertir la frase
Imprimí la frase al revés (caracter por caracter).	Índices, string::rbegin()/rend()	o bien construí una nueva cadena agregando de atrás hacia adelante.
3	¿Es palíndromo?
Pedir una palabra/frase, ignorar mayúsculas y espacios, y decir si se lee igual de ambos lados.	Limpieza de cadena, comparación	Quitá los espacios con erase(remove(...), end()).
4	Reemplazar palabra
Solicitar una frase y dos palabras old y new; reemplazar la primera aparición de old por new.	find, replace	Controlá que find no devuelva npos.
5	Eliminar duplicados
Eliminar las letras repetidas (mantener solo la 1.ª aparición) sin cambiar el orden.	Búsqueda previa, erase	Mantené un string “resultado” o un set<char>.
6	Título tipo “Title Case”
Convertir cada palabra para que empiece en mayúscula y el resto en minúscula.	Detección de espacios, toupper, tolower	Recordá la primera letra de la frase.
7	Palabra más larga
Pedir una oración y mostrar la(s) palabra(s) de mayor longitud.	istringstream, comparación de longitudes	
8	Ordenar palabras alfabéticamente
Mostrar las palabras de la oración en orden ascendente.	Vector de strings, sort	Usá un stringstream para separar.
9	Anagrama simple
Leer dos palabras y decir si son anagramas (mismas letras, distinto orden).	Conteo de letras, sort	Convertí ambas a minúsculas y ordená.
10	Cifrado César (+3)
Desplazar cada letra 3 posiciones hacia la derecha en el alfabeto.	Operaciones con char, modularidad	(c - 'a' + 3) % 26 + 'a'.
*/