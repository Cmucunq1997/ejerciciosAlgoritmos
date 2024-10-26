/* Escribí un programa para solicitar al usuario que ingrese números enteros positivos (la cantidad que ingresará no se conoce y la decide el usuario). La lectura de números finalizará cuando el usuario ingrese el número -1. Por cada número ingresado, mostrar la cantidad de dígitos pares y la cantidad de dígitos impares que tiene. Al finalizar, mostrar cuántos números múltiplos de 3 ingresó el usuario. */

#include <iostream>

using namespace std;

int main() {
    int numero, digito, pares, impares, multiplosDe3 = 0;

    // Bucle para solicitar números hasta que se ingrese -1
    while (true) {
        cout << "Ingrese un número entero positivo (-1 para finalizar): ";
        cin >> numero;

        // Condición para finalizar el bucle
        if (numero == -1) {
            break;
        }

        // Inicializar los contadores de pares e impares para este número
        pares = 0;
        impares = 0;

        // Si el número es múltiplo de 3
        if (numero % 3 == 0) {
            multiplosDe3++;
        }

        // Contar dígitos pares e impares
        int numeroTemporal = numero; // Guardar una copia del número
        while (numeroTemporal > 0) {
            digito = numeroTemporal % 10; // Obtener el último dígito

            // Verificar si el dígito es par o impar
            if (digito % 2 == 0) {
                pares++;
            }
            else {
                impares++;
            }

            numeroTemporal /= 10; // Eliminar el último dígito
        }

        // Mostrar el resultado para este número
        cout << "El número " << numero << " tiene " << pares << " dígitos pares y " << impares << " dígitos impares." << endl;
    }

    // Mostrar la cantidad de números múltiplos de 3
    cout << "Cantidad de números múltiplos de 3 ingresados: " << multiplosDe3 << endl;

    return 0;
}