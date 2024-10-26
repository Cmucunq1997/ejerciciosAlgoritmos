/*13. Escribí un programa que le solicite al usuario su edad y la guarde en una variable. Que luego solicite la cantidad de artículos comprados en una tienda y la guarde en otra variable. Finalmente, mostrar en pantalla un valor de verdad (True o False) que indique si el usuario es mayor de 18 años de edad y además compró más de 1 artículo.
 */

#include <iostream>

using namespace std;

int main() {
	int edad, articulos;

	//Solicitamos el ingreso de la edad
	cout << "Ingresa tu edad: " << endl;
	cin >> edad;

	//Solicitamos el ingreso de articulos comprados
	cout << "Ingrese cuantos articulos compro" << endl;
	cin >> articulos;

	//Realizamos la condición
	if (edad >= 18 && articulos > 1) {
		cout << "El usuario es mayor de edad y compro mas de 1 articulo? True" << endl;
	}
	else {
		cout << "El usuario es mayor de edad y compro mas de 1 articulo? False" << endl;
	}

	return 0;
}