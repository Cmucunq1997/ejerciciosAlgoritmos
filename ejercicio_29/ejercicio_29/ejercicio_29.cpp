/*29. Escribí un programa que permita al usuario ingresar una frase y luego un carácter (string de longitud 1) y luego muestre la frase ingresada, pero con todas las ocurrencias del carácter indicado por el usuario reemplazadas por “*”.*/

#include <iostream>
#include <string>

using namespace std;
int main() {
    string frase;
    char caracter;

    cout << "Ingrese una frase: ";
    getline(cin, frase); 

    cout << "Ingrese un carácter para reemplazar: ";
    cin >> caracter;

    // Reemplazar todas las ocurrencias del carácter en la frase
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == caracter) {
            frase[i] = '*';  // Reemplazar el carácter por '*'
        }
    }

    cout << "Frase modificada: " << frase << endl;


	return 0;
}