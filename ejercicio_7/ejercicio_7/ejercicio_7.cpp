/* Escribí un programa que solicite al usuario un número y le reste el 15%, almacenando todo en una única variable. A continuación, mostrar el resultado final en pantalla. */

#include <iostream>
#include <math.h>

using namespace std;
int main() {
	float num1, rest;

	/* Solicitamos al usuario ingrese el dato */
	cout << "Ingresa un numero: " << endl;
	cin >> num1;

	/* Realizamos la operación */
	rest = num1-(num1 * 15) / 100;
	// = (num1 - 0.5);

	/* Mostramos el resultado */
	cout << "\nDescontando el 15% al numero " << num1 << " queda: " << rest << endl;

	return 0;
}