/*  Escribí un programa que, dado un número entero por el usuario (guardado como int), muestre la suma de todos sus dígitos. Recordá que vas a necesitar obtener cada uno de los dígitos por separado para poder sumarlos entre sí. */

#include <iostream>

using namespace std;

int main() {
    int numero, suma = 0;

    // Solicitar el número al usuario
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Hacer una copia del número para poder manipularlo
    int numeroOriginal = numero;

    // Si el número es negativo, convertirlo a positivo
    if (numero < 0) {
        numero = -numero;
    }

    // Bucle para sumar los dígitos
    while (numero > 0) {
        suma += numero % 10; // Obtener el último dígito y sumarlo
        numero /= 10;        // Eliminar el último dígito
    }

    // Mostrar el resultado
    cout << "La suma de los digitos de " << numeroOriginal << " es: " << suma << endl;

    return 0;
}