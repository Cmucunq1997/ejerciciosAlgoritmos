/* 12. Escribí un programa para solicitar al usuario el ingreso de un número entero y que luego imprima un valor de verdad dependiendo de si el número es par o no. Recordar que un número es par si el resto, al dividirlo por 2, es 0. */
#include <iostream>

using namespace std;

int main() {
	int num;

	//Solicitamos el ingreso del número
	cout << "Ingresa un numero entero: " << endl;
	cin >> num;

	if (num % 2 == 0) {
		cout << "El numero es par: True" << endl;
	}
	else {
		cout << "El numero no es par: False" << endl;
	}
}