/*3. Escribí un programa que solicite al usuario dos números y los almacene en dos variables. En otra variable, almacená el resultado de la suma de esos dos números y luego mostrá ese resultado en pantalla. A continuación, el programa debe solicitar al usuario que ingrese un tercer número, el cual se debe almacenar en una nueva variable. Por último, mostrá en pantalla el resultado de la multiplicación de este nuevo número por el resultado de la suma anterior.*/

#include <iostream>
#include <math.h>

using namespace std;
int main() {
	int num1, num2, num3, suma, mult;

	/* Solicitamos los numeros a sumar */
	cout << "Ingresa el 1er numero: " << endl;
	cin >> num1;
	cout << "Ingresa el 2do numero: " << endl;
	cin >> num2;

	/* Realizamos la suma */
	suma = num1 + num2;

	/* Mostramos en pantalla de la suma */
	cout << "\nEl resultado de la suma es: " << suma << endl;

	/* Solicitamos al usuario ingrese el 3er numero */
	cout << "\nIngrese el 3er nuemro: " << endl;
	cin >> num3;

	/* Realizamos la multriplicación del resultado de la suma y el 3er número */
	mult = suma * num3;

	/* Mostramos en pantalla de la multiplicación */
	cout << "\nEl resultado de la multiplicacion es: " << mult << endl;

	return 0;
}