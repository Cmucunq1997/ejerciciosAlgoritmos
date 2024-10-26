/*Escribir un programa que solicite al usuario que ingrese cuántos shows musicales ha visto en el último año y almacene ese número en un variable.A continuación mostrar en pantalla un valor de verdad(True o False) que indique si el usuario ha visto más de 3 shows. */

#include <iostream>

using namespace std;

int main() {
	int cantidad;

	//Solicitar al usuario que ingrese cuantos Shows a visto
	cout << "Ingresa el total de Shows que has visto: " << endl;
	cin >> cantidad;

	//Mostrar en pantalla si ha visto mas de 3 Shows (True o False)
	bool masDeTres = (cantidad > 3);
	cout << "Ha visto mas de 3 shows " << (masDeTres ? "True" : "False") << endl;
	
	return 0;
}