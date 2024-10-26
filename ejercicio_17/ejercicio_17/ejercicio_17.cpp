/*17. Escribí un programa que, dado un número entero, muestre su valor absoluto. Recordá que, para los números positivos su valor absoluto es igual al número (el valor absoluto de 52 es 52), mientras que, para los negativos, su valor absoluto es el número multiplicado por -1 (el valor absoluto de -52 es 52). */

#include <iostream>

using namespace std;
int main() {
	int num, absol;

	cout << "Ingresa un numero para ver su valor absoluto: " << endl;
	cin >> num;

	if (num < 0) {
		absol = num * (-1);
	}
	else {
		absol = num;
	}

	cout << "El valor absoluto es: " << absol << endl;

	return 0;
}