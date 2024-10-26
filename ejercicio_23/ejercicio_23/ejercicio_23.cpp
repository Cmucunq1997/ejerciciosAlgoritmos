/*23.  Escribí un programa que le solicite al usuario un número entero y muestre todos los números correlativos entre el 1 y el número ingresado por el usuario. */

#include <iostream>

using namespace std;
int main() {
	int num;

	cout << "Ingresa un número entero: " << endl;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cout << "Numero: " << i << endl;
	}
	cout << endl;


	return 0;
}