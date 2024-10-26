/*25. Escribí un programa que, dada una frase por el usuario, muestre la cantidad total de vocales (tanto mayúsculas como minúsculas) que contiene. */

#include <iostream>
#include <string>

using namespace std;
int main() {
	string frase;
	int contador = 0;

	cout << "Ingrese una frase: " << endl;
	getline(cin, frase);
	cout << endl;

	for (int i = 1; i < frase.length(); i++) {
		char letra = tolower(frase[i]); //Convertir mayusculas en minusculas con tolower
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			contador++;  // Contar las vocales
		}
	}

	cout << "La cantidad de vocales en la frase es: " << contador << endl;

	return 0;
}