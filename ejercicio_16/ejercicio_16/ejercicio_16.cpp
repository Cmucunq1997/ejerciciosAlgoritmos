/*16. Escribí un programa para pedir al usuario su nombre y luego el nombre de otra persona, almacenando cada nombre en una variable. Luego mostrar en pantalla un valor de verdad que indique si: los nombres de ambas personas comienzan con la misma letra ó si terminan con la misma letra. Por ejemplo, si los nombres ingresados son María y Marcos, se mostrará True, ya que ambos comienzan con la misma letra. Si los nombres son Ricardo y Gonzalo se mostrará True, ya que ambos terminan con la misma letra. Si los nombres son Florencia y Lautaro se mostrará False, ya que no coinciden ni la primera ni la última letra.  */

#include <iostream>
#include <string>

using namespace std;
int main() {
	string nombre1, nombre2;

	cout << "Ingresa el primer nombre: " << endl;
	cin >> nombre1;
	cout << "Ingresa el segundo nombre: " << endl;
	cin >> nombre2;

	if (nombre1[0] == nombre2[0] || nombre1[nombre1.length() - 1] == nombre2[nombre2.length() -1]) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	return 0;
}