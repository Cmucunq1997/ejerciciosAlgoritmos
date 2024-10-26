/* Escribí un programa que permita al usuario ingresar los montos de las compras de un cliente (se desconoce la cantidad de datos que cargará, la cual puede cambiar en cada ejecución), cortando el ingreso de datos cuando el usuario ingrese el monto 0. Si ingresa un monto negativo, no se debe procesar y se debe pedir que ingrese un nuevo monto. Al finalizar, informar el total a pagar teniendo que cuenta que, si las ventas superan el monto total de 1000, se le debe aplicar un 10% de descuento. */

#include <iostream>

using namespace std;
int main() {
	float monto, total = 0;

	//Solicitar al usuario ingrese el monto
	do{
	cout << "Ingrese el monto de la compra (ingrese 0 para terminar)" << endl;
	cin >> monto;

	//Si el monto es negativo
	if (monto < 0) {
		cout << "El monto ingresado no se puede prosesar" << endl;
	}

	//Agregar al total si el monto es mayor a 0
	if (monto > 0) {
		total += monto;
	}
	} while (monto != 0);

	//Si el monto es mayor a mil, realizar un descuento
	if (total > 1000) {
		total *= 0.9; //aplica el 10% de descuento
	}

	//Mostrar el total
	cout << "El total de la compra es: " << total << endl;

	return 0;
}