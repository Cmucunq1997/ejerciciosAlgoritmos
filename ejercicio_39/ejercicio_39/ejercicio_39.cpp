/* Escribí un programa que permita al usuario ingresar títulos de libros por teclado, finalizando el ingreso al leerse el string “*” (asterisco). Cada vez que el usuario ingrese un string de longitud 1 que contenga sólo una barra “/” se considera que termina una línea. Por cada línea completa, informar cuántos dígitos numéricos (del 0 al 9) aparecieron en total (en todos los títulos de libros que componen en esa línea). Finalmente, informar cuántas líneas completas se ingresaron. */

#include <iostream>
#include <cctype> // Para usar funciones como isdigit, isalpha, etc.
#include <string>

using namespace std;

int main() {
    string titulo;
    int totalDigitosLinea = 0, totalLineasCompletas = 0;

    // Bucle para leer títulos hasta encontrar "*"
    while (true) {
        cout << "Ingrese el título del libro (o '*' para finalizar, '/' para terminar una línea): ";
        getline(cin, titulo); // Lee el título completo

        // Condición para finalizar todo el proceso
        if (titulo == "*") {
            break;
        }

        // Condición para terminar una línea
        if (titulo == "/") {
            totalLineasCompletas++; // Aumentar el contador de líneas completas
            cout << "Línea completa. Dígitos numéricos en esta línea: " << totalDigitosLinea << endl;
            totalDigitosLinea = 0; // Reiniciar el contador de dígitos para la próxima línea
            continue; // Volver a pedir otro título
        }

        // Contar dígitos numéricos en el título actual
        for (char c : titulo) {
            if (isdigit(c)) {
                totalDigitosLinea++;
            }
        }
    }

    // Mostrar el total de líneas completas ingresadas
    cout << "Cantidad total de líneas completas ingresadas: " << totalLineasCompletas << endl;

    return 0;
}