/* Escribí un programa para solicitar al usuario tres números y mostrar en pantalla al menor de los tres. */

#include <iostream>

using namespace std;
int main() {
	int num1, num2, num3;

	cout << "Ingresa el primer numero: " << endl;
	cin >> num1;
	cout << "Ingresa el segundo numero: " << endl;
	cin >> num2;
	cout << "Ingresa el tercer numero: " << endl;
	cin >> num3;

	if (num1 < num2 && num1 < num3) {
		cout << "El numero " << num1 << " es el menor.";
	}
	else if (num2 < num1 && num2 < num3) {
		cout << "El numero " << num2 << " es el menor.";
	}
	else {
		cout << "El numero " << num3 << " es el menor.";
	}
	return 0;
}