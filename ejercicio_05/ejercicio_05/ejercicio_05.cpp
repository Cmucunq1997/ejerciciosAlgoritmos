/*5. Escribí un programa que solicite al usuario el ingreso de una temperatura en escala Fahrenheit (debe permitir decimales) y le muestre el equivalente en grados Celsius. La fórmula de conversión que se usa para este cálculo es: _Celsius = (5/9) * (Fahrenheit-32)_ */

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float fahr, resul;

	/* Solicitamos al usuario los grados Fahrenheit */
	cout << "Ingrese los grados fahrenheit: " << endl;
	cin >> fahr;

	/* Realizamos la converción */
	resul = (fahr - 32) / 1.8;

	/* Mostramos la converción */
	cout << "\nEl resultado en grados Celsius es: " << resul << endl;

	return 0;
}