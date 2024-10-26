/*27. Escribí un programa que, dado un número entero positivo, calcule y muestre su factorial. El factorial de un número se obtiene multiplicando todos los números enteros positivos que hay entre el 1 y ese número. El factorial de 0 es 1.*/

#include <iostream>

using namespace std;
int main() {
    int numero;
    unsigned long long factorial = 1;  // Se utiliza un tipo de dato más grande para grandes factoriales

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    // Verificar si el número es negativo
    if (numero < 0) {
        cout << "No se puede calcular el factorial de un número negativo." << endl;
    }
    else {
        // Calcular el factorial
        for (int i = 1; i <= numero; i++) {
            factorial *= i;  // Multiplicar factorial por i (*= Asignación de multiplicación)
        }

        // Mostrar el resultado
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }



	return 0;
}