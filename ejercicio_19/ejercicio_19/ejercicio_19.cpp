/*19. Escribí un programa que solicite al usuario una letra y, si es una vocal, muestre el mensaje “Es vocal”. Verificar si el usuario ingresó un string de más de un carácter y, en ese caso, informarle que no se puede procesar el dato. */

#include <iostream>
#include <string>

using namespace std;
int main() {
	string letra;
	

	cout << "Ingresa una letra: " << endl;
	cin >> letra;

	if (letra.length() > 1) {
		cout << "No se puede procesar el dato. Ingrese una letra." << endl;
	}
	else {
		char letraIngresada = tolower(letra[0]); //Convertir letra mayuscula a minuscula

		if (letraIngresada == 'a' || letraIngresada == 'e' || letraIngresada == 'i' || letraIngresada == 'o' || letraIngresada == 'u') {
			cout << "Es vocal." << endl;
		}
		else {
			cout << "No es vocal." << endl;
		}
	}
	return 0;
}