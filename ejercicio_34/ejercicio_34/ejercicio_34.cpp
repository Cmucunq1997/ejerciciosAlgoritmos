/* Escribí un programa que solicite al usuario el ingreso de strings de longitud 1 (un solo carácter), uno por vez. La repetición finalizará cuando se ingrese un string que no tenga longitud 1, o cuando el string ingresado corresponda al dígito numérico 0. Al finalizar, mostrar el string completo que se formó con todos los caracteres ingresados y qué porcentaje de caracteres del total fueron la letra “a”. */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string entrada, cadenaCompleta;
    int totalCaracteres = 0, contadorA = 0;

    // Bucle para solicitar caracteres
    while (true) {
        cout << "Ingrese un caracter (un solo caracter, '0' para finalizar): ";
        cin >> entrada;

        // Condición para finalizar: si el string no tiene longitud 1 o es '0'
        if (entrada.length() != 1 || entrada == "0") {
            break;
        }

        // Agregar el carácter ingresado al string completo
        cadenaCompleta += entrada;
        totalCaracteres++;

        // Contar cuántos caracteres son 'a'
        if (entrada == "a") {
            contadorA++;
        }
    }

    // Mostrar el string formado
    cout << "String completo formado: " << cadenaCompleta << endl;

    // Calcular el porcentaje de 'a'
    if (totalCaracteres > 0) {
        float porcentajeA = (contadorA / static_cast<float>(totalCaracteres)) * 100;
        cout << "Porcentaje de caracteres 'a': " << porcentajeA << "%" << endl;
    }
    else {
        cout << "No se ingresaron caracteres válidos." << endl;
    }

    return 0;
}