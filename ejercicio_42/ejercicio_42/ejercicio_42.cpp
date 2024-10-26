/*Escribí un programa que permita al usuario ingresar números enteros. La repetición terminará cuando el usuario ingrese un número para el cual la suma de sus dígitos sea mayor que 1000 ó múltiplo de 5. Finalmente, mostrar cuántos números impares ingresó el usuario antes de cortar la repetición. Reutilizar las funciones esPar y sumatoriaDigitos implementadas en los ejercicios anteriores.*/


#include <iostream>
using namespace std;

// Función que calcula la suma de los dígitos de un número
int sumatoriaDigitos(int numero) {
    int suma = 0;
    while (numero > 0) {
        suma += numero % 10;  // Extrae el último dígito y lo suma
        numero /= 10;         // Elimina el último dígito del número
    }
    return suma;
}

// Función que verifica si un número es par
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int numero;
    int contadorImpares = 0;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Bucle para pedir números hasta que se cumpla la condición de parada
    while (sumatoriaDigitos(numero) <= 1000 && numero % 5 != 0) {
        // Contabilizar si el número ingresado es impar
        if (!esPar(numero)) {
            contadorImpares++;
        }

        cout << "Ingrese otro número entero: ";
        cin >> numero;
    }

    // Mostrar la cantidad de números impares ingresados antes de cortar
    cout << "Cantidad de números impares ingresados: " << contadorImpares << endl;
    return 0;
}