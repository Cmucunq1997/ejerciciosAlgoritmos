/*15. Escribí un programa que le pida al usuario ingresar dos palabras y las guarde en dos variables, y que luego imprima True si la primera palabra es menor que la segunda o False si no lo es. */

#include <iostream>
#include <string>

using namespace std;
int main() {
	string palabra1, palabra2;

	cout << "Ingresa la primera palabra: " << endl;
	cin >> palabra1;

	cout << "Ingresa la segunda palabra:" << endl;
	cin >> palabra2;

	if (palabra1 < palabra2) {
		cout << "True";
	}
	else {
		cout << "False";
	}

	return 0;
}