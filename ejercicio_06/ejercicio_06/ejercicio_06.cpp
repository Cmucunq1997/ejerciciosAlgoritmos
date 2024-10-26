/*6. Escribí un programa que solicite al usuario ingresar tres números para luego mostrarle el promedio de los tres. */

#include <iostream>
#include <math.h>

using namespace std;
int main() {
	float num1, num2, num3, sum, prom;

	/* Solicitamos ingrese los 3 numeros */
	cout << "Ingrese el 1er numero: " << endl;
	cin >> num1;
	cout << "Ingrese el 2do numero: " << endl;
	cin >> num2;
	cout << "Ingrese el 3er numero: " << endl;
	cin >> num3;

	/* Realizamos la operación */
	sum = num1 + num2 + num3;
	prom = sum / 3;

	/* Mostramos el promedio de los 3 números */
	cout << "\nEl promedio de los tres numeros es: " << prom << endl;

	return 0;
}