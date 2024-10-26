/*24. Escribí un programa que, dado un número por el usuario, muestre todos sus divisores positivos. Recordá que un divisor es aquel que divide al número de forma exacta (con resto 0).*/

#include <iostream>

using namespace std;
int main() {
	int num;

	cout << "Ingrese un numero: " << endl;
	cin >> num;

	cout << "Los divisores de " << num << " son: " << endl;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;



	return 0;
}