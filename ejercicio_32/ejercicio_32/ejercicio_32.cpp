/* Escribí un programa que permita al usuario ingresar una cantidad de números positivos indefinida (la cantidad que ingresará no se conoce y puede cambiar en cada ejecución), finalizando cuando ingresa el número 0 (que no se tendrá en cuenta). Una vez terminada la lectura de números, informar cuál fue el mayor de los números ingresados. */

#include <iostream>

using namespace std;
int main() {
	int n, mayor = 0;

	do
	{
		//Solicitar al usuario ingrese los numeros positivos
		cout << "Ingrese sus numeros positivos (o ingresa 0 para terminar) " << endl;
		cin >> n;

		//Se verifica si los numeros no son negativos
		if (n < 0) {
			cout << "No se pueden procesar numero negativos" << endl;
		}

		//Se verifica cual de los numeros es el mayor
		if (n > mayor) {
			mayor = n;
		}

	} while (n != 0);

	cout << "El numero mayor es: " << mayor << endl;

	return 0;
}