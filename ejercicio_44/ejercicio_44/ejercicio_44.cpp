/*Escribí un programa que permita al usuario ingresar números enteros hasta que ingrese uno cuyo dígito inicial sea el 9 (el cual no se procesará). Una vez terminada la repetición, mostrar cuántos de los números que el usuario ingresó tienen sólo dos divisores (para esto es posible reutilizar parte de la estrategia elaborada en el ejercicio 25).*/

#include <iostream>
using namespace std;

// Función para verificar si un número es primo (tiene sólo dos divisores)
bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

// Función para obtener el primer dígito de un número
int obtenerPrimerDigito(int numero) {
    while (numero >= 10) {
        numero /= 10;
    }
    return numero;
}

int main() {
    int numero;
    int contadorPrimos = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Bucle que se ejecuta hasta que el primer dígito del número ingresado sea 9
    while (obtenerPrimerDigito(numero) != 9) {
        if (esPrimo(numero)) {
            contadorPrimos++;
        }

        cout << "Ingrese otro número entero: ";
        cin >> numero;
    }

    // Mostrar la cantidad de números primos ingresados
    cout << "Cantidad de números con sólo dos divisores (primos) ingresados: " << contadorPrimos << endl;
    return 0;
}