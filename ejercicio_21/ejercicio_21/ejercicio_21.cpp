/*21. Escribí un programa que solicite ingresar un nombre de usuario y una contraseña. Si el nombre es “Gwenevere” y la contraseña es “excalibur”, mostrar en pantalla “Usuario y contraseña correctos. Puede ingresar a Camelot”. Si el nombre o la contraseña no coinciden, mostrar “Acceso denegado”*/

#include <iostream>
#include <string>

using namespace std;
int main() {
	string usuario, contra;

	cout << "Ingrese el nombre de Usuario: " << endl;
	cin >> usuario;
	cout << "Ingrese la Contraseña: " << endl;
	cin >> contra;

	if (usuario == "Gwenevere" && contra == "excalibur") {
		cout << "Usuario y contraseña correctos. Puede ingresar a Camelot." << endl;
	}
	else {
		cout << "Acceso denegado.";
	}

	return 0;
}