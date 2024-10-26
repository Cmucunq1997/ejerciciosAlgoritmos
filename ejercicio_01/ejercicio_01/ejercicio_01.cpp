/*1. Escribí un programa que solicite al usuario que ingrese su nombre. El nombre se debe almacenar en una variable llamada nombre. A continuación se debe mostrar en pantalla el texto “Ahora estás en la matrix, [usuario]”, donde “[usuario]” se reemplazará por el nombre que el usuario haya ingresado.*/

#include <iostream>

using namespace std;
int main()
{
    string nombre;

    cout << "Ingresa tu nombre: " << endl;
    cin >> nombre;

    cout << "Ahora estas en la matrix, " << nombre << endl;

    return 0;
}
