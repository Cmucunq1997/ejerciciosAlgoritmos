/*30. Escribí un programa que, dada una frase por el usuario, la muestre invertida, sin utilizar una rebanada con paso negativo.*/

#include <iostream>
#include <string>

using namespace std;
int main() {
    string frase;

    cout << "Ingresa una frase: ";
    getline(cin, frase);

    string fraseInvertida;

    // Recorrer la frase desde el último carácter hasta el primero
    for (int i = frase.length() - 1; i >= 0; i--) {
        fraseInvertida += frase[i]; // Agregar el carácter a la nueva cadena
    }

    // Mostrar la frase invertida
    cout << "Frase invertida: " << fraseInvertida << endl;

    return 0;
}