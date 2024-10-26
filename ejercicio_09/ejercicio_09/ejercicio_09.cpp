/*Escribí un programa que solicite al usuario el ingreso de un texto y almacene ese texto en una variable. A continuación, mostrar en pantalla la primera letra del texto ingresado. Luego, solicitar al usuario que ingrese un número positivo menor a la cantidad de caracteres que tiene el texto que ingresó (por ejemplo, si escribió la palabra “HOLA”, tendrá que ser un número entre 0 y 4) y almacenar este número en una variable llamada indice. Mostrar en pantalla el carácter del texto ubicado en la posición dada por indice. 
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
	string texto;
	int indice;

	//Solicitamos al usuario ingrese un texto
	cout << "Ingresa un texto: " << endl;
	getline(cin, texto);

	//Mostramos la primera letra del texto
	if (!texto.empty()) {
		cout << "La primera letra del texto es: " << texto[0] << endl;
	}
	else {
		cout << "El texto esta vacio..." << endl;

		return 1;
	}

	//Solicitar al usuario ingrese un numero positivo menor a la cantidad del texto
	do
	{
		cout << "Ingresa un numero menor a " << texto.length() << endl;
		cin >> indice;
	} while (indice < 0	|| indice >= texto.length());

	//Mostrar en pantalla el caracter del texto ubicada en la posicion dada
	cout << "La letra ubicada en esa posicion es: " << texto[indice] << endl;

	return 0;
}