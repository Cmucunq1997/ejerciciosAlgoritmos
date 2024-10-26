#include <iostream>
#include <conio.h>

using namespace std;

int factorial() {
	//Imprima el factorial de un numero dado
	float n, i, f;
	cout << "Ingrese el valor de n" << endl;
	cin >> n;
	if (n < 0) {
		cout << "No se puede calcular el factorial de un número negativo.";
	}
	else {
		f = 1;
		for (i = 1; i <= n; i++) {
			f = f * i;
		}
		cout << "El resultado es: " << f;
	}
	return 0;
}