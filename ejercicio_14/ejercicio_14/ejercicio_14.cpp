/*14. Escribí un programa que, dada una cadena de texto por el usuario, imprima True si la cantidad de caracteres en la cadena es un número par, o False si no lo es. */

#include <iostream>
#include <string>

using namespace std;
int main() {
	string texto;

	cout << "Ingresa un texto: " << endl;
	getline(cin, texto);

	if (texto.length() % 2 == 0) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	
	return 0;
}