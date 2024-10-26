/* Escribí una función llamada sumatoriaDigitos que reciba como parámetro un número y retorne la suma de todos sus dígitos, reutilizando la estrategia utilizada en el ejercicio 36. Finalmente, escribir un algoritmo que solicite al usuario ingresar varios números hasta que ingrese el número 100, con el cual cortará la repetición. Por cada número, mostrar la suma de sus dígitos, para lo cual se llamará a la función sumatoriaDigitos. */

#include <iostream>
using namespace std;

// Función que calcula la suma de los dígitos de un número
int sumatoriaDigitos(int numero) {
    int suma = 0;
    while (numero > 0) {
        suma += numero % 10; // Extrae el último dígito y lo suma
        numero /= 10;         // Elimina el último dígito del número
    }
    return suma;
}

int main() {
    int numero;

    cout << "Ingrese un número (100 para terminar): ";
    cin >> numero;

    // Bucle para pedir números hasta que se ingrese 100
    while (numero != 100) {
        cout << "La suma de los dígitos de " << numero << " es: " << sumatoriaDigitos(numero) << endl;

        cout << "Ingrese otro número (100 para terminar): ";
        cin >> numero;
    }

    cout << "Programa terminado." << endl;
    return 0;
}