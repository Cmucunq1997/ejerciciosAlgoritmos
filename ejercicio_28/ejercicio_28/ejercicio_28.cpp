/*28. Escribí un programa que permita al usuario ingresar 6 números enteros, que pueden ser positivos o negativos. Al finalizar, mostrar la sumatoria de los números negativos y el promedio de los positivos. No olvides que no es posible dividir por cero, por lo que es necesario evitar que el programa arroje un error si no se ingresaron números positivos. */

#include <iostream>
using namespace std;

int main() {
    int numero;
    int sumaNegativos = 0, sumaPositivos = 0, contadorPositivos = 0;

    // Solicitar 6 números al usuario
    for (int i = 1; i <= 6; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;

        if (numero < 0) {
            sumaNegativos += numero;  // Sumar los negativos
        }
        else if (numero > 0) {
            sumaPositivos += numero;  // Sumar los positivos
            contadorPositivos++;  // Contar cuántos positivos se ingresaron
        }
    }

    cout << "La sumatoria de los números negativos es: " << sumaNegativos << endl;

    // Calcular y mostrar el promedio de los números positivos (si hay al menos uno)
    if (contadorPositivos > 0) {
        double promedioPositivos = static_cast<double>(sumaPositivos) / contadorPositivos;
        cout << "El promedio de los números positivos es: " << promedioPositivos << endl;
    }
    else {
        cout << "No se ingresaron números positivos." << endl;
    }

    return 0;
}

/* El operador static_cast convierte la variable j en un tipo float . Esto permite al compilador generar una división con una respuesta de tipo float */