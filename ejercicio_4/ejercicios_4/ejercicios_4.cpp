#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	//Variables
	int n, contador = 1;
	float x, mayor;

	//Instrucciones
	cout << "Cuantos números desea ingresar para encontrar el máximo: ";
	cin >> n;
	while (n <= 0) {
		cout << "El número ingresado es negativo o es 0." << endl;
		cout << "Cuantos números desea ingresar para encontrar el máximo: ";
		cin >> n;
	}
	
	cout << "Numero 1: ";
	cin >> x;
	mayor = x;
	while (contador < n) {
		contador++;
		cout << "Número " << contador << ": ";
		cin >> x;
		if (x > mayor) {
			mayor = x;
		}
	}
	cout << "El mayor es " << mayor << endl;
	
	return (0); 

}