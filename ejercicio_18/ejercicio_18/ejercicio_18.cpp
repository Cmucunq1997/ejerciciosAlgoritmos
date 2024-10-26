/* Escribí un programa que solicite al usuario el ingreso de dos números diferentes y muestre en pantalla al mayor de los dos. */

#include <iostream>

using namespace std;

int main() {
	int num1, num2;

	cout << "Ingresa el primer numero: " << endl;
	cin >> num1;
	cout << "Ingresa el segundo numero: " << endl;
	cin >> num2;

	if (num1 > num2) {
		cout << "El primer numero es el mayor.";
	}
	else {
		cout << "El segundo numero es el mayo.";
	}

	return 0;
}