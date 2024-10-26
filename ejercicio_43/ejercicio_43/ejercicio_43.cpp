/*Escribí una función que reciba un string y retorne True si es un palíndromo (esto es, si se lee igual de izquierda a derecha o de derecha a izquierda), False en caso contrario. Utilizar esta función en un programa que permita al usuario ingresar palabras hasta que ingrese la palabra “fin” (suponer que todas las palabras son en minúsculas o todas en mayúsculas, de forma consistente). Al finalizar, mostrar la cantidad de palíndromos ingresados.*/

#include <iostream>
#include <string>
using namespace std;

// Función que verifica si un string es un palíndromo
bool esPalindromo(const string& palabra) {
    int inicio = 0;
    int fin = palabra.length() - 1;

    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main() {
    string palabra;
    int contadorPalindromos = 0;

    cout << "Ingrese una palabra (\"fin\" para terminar): ";
    cin >> palabra;

    while (palabra != "fin") {
        if (esPalindromo(palabra)) {
            contadorPalindromos++;
        }

        cout << "Ingrese otra palabra (\"fin\" para terminar): ";
        cin >> palabra;
    }

    cout << "Cantidad de palíndromos ingresados: " << contadorPalindromos << endl;
    return 0;
}