/*26. Escribí un programa que muestre los primeros 10 números de la sucesión de Fibonacci. La sucesión comienza con los números 0 y 1 y, a partir de éstos, cada elemento es la suma de los dos números anteriores en la secuencia: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55…*/

#include <iostream>

using namespace std;
int main() {
	int a = 0, b = 1, sig;

	cout << "Los primeros 10 numero de la sucesion de Fibonacci son: " << endl;
	cout << a << " " << b << " " << endl;

	for (int i = 2; i < 10; i++) {  // El bucle comienza desde el tercer número
		sig = a + b;  // Calcular el siguiente número de la secuencia
		cout << sig << " ";   // Mostrar el siguiente número
		a = b;  // Mover los valores
		b = sig;  // Actualizar 'b' con el valor del siguiente
	}
	cout << endl;

	return 0;
}