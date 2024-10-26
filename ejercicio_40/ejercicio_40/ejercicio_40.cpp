/* Escribí una función llamada esPar que reciba como parámetro un número y retorne True si el número es par ó False si es impar. Utilizar esta función en un programa que solicite al usuario el ingreso de 10 números y que luego muestre, por separado, la suma de todos los pares y la suma de todos los impares. */

#include <iostream>

using namespace std;

// Función que verifica si un número es par
bool esPar(int numero) {
    return numero % 2 == 0; // Retorna true si el número es par, false si es impar
}

int main() {
    int numero, sumaPares = 0, sumaImpares = 0;

    // Solicitar 10 números al usuario
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un número: ";
        cin >> numero;

        // Usar la función esPar para clasificar el número como par o impar
        if (esPar(numero)) {
            sumaPares += numero; // Sumar a la suma de pares
        }
        else {
            sumaImpares += numero; // Sumar a la suma de impares
        }
    }

    // Mostrar la suma de los pares e impares
    cout << "Suma de los números pares: " << sumaPares << endl;
    cout << "Suma de los números impares: " << sumaImpares << endl;

    return 0;
}