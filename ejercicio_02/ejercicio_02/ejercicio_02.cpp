/*2. Escribí un programa que solicite al usuario ingresar un número con decimales y almacenalo en una variable. A continuación, el programa debe solicitar al usuario que ingrese un número entero y guardarlo en otra variable. En una tercera variable se deberá guardar el resultado de la suma de los dos números ingresados por el usuario. Por último, se debe mostrar en pantalla el texto “El resultado de la suma es [suma]”, donde “[suma]” se reemplazará por el resultado de la operación.*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int ent;
	float dec, sum;

	/* Solicitamos los numeros enteros y decimales */
	cout << "Ingresa un numero entero: " << endl;
	cin >> ent;
	cout << "Ingresa un numero decimal: " << endl;
	cin >> dec;

	/* Realisamos la suma de los dos numeros y las guardamos en la variable sum */
	sum = ent + dec;

	/* Mostramos en pantalla el resultado de la suma */
	cout << "\nLa suma de los dos numeros es: " << sum << endl;

	return 0;
}
