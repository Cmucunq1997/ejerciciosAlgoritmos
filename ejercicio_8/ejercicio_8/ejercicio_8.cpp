/* Escribí un programa que solicite al usuario el ingreso de dos palabras, las cuales se guardarán en dos variables distintas. A continuación, almacená en una variable la concatenación de la primera palabra, más un espacio, más la segunda palabra. Mostrá este resultado en pantalla. */

#include <cstring>
#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char texto1[40], texto2[40];

    cout << "Introduce tu nombre: ";
    cin >> texto1;
    cout << "Introduce tu apellido: ";
    cin >> texto2;

    strcat_s(texto1, " ");     // Añado un espacio al nombre
    strcat_s(texto1, texto2);  // Y luego el apellido

    cout << "Te llamas " << texto1 << endl;

    return 0;
}