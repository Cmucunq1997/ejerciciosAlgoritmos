/*22. Escribí un programa que permita saber si un año es bisiesto. Para que un año sea bisiesto debe ser divisible por 4 y no debe ser divisible por 100, excepto que también sea divisible por 400. */

#include <iostream>

using namespace std;

int main() {
	int anio;

	cout << "Ingrese un año: " << endl;
	cin >> anio;

	if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
		cout << "El año " << anio << " es bisiesto." << endl;
	}
	else {
		cout << "El año " << anio << " no es bisiesto." << endl;
	}


	return 0;
}