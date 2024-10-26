/* Escribí un programa que solicite al usuario una cadena de caracteres (que puede contener letras, números o símbolos). Analizar la cadena para mostrar: cuántas letras del abecedario (minúsculas y mayúsculas) contiene, cuántos símbolos (caracteres que no son ni letras ni números), cuántos dígitos numéricos y, de los dígitos, cuántos son múltiplos de 4. */

#include <iostream>
#include <cctype> // Para usar funciones como isdigit, isalpha, etc.
#include <string>

using namespace std;

int main() {
    string cadena;
    int letras = 0, simbolos = 0, digitos = 0, multiplosDe4 = 0;

    // Solicitar la cadena de caracteres al usuario
    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, cadena); // Permite leer una línea completa de texto

    // Analizar la cadena
    for (char c : cadena) {
        if (isalpha(c)) { //isalpha = Comprobar si el carácter es alfabético 
            // Es una letra (minúscula o mayúscula)
            letras++;
        }
        else if (isdigit(c)) { //isdigit = Comprobar si el carácter es un dígito decimal
            // Es un dígito numérico
            digitos++;

            // Convertir el carácter a un número entero y verificar si es múltiplo de 4
            int numero = c - '0'; // Convertir el carácter a su valor numérico
            if (numero % 4 == 0) {
                multiplosDe4++;
            }
        }
        else {
            // Es un símbolo (no es letra ni número)
            simbolos++;
        }
    }

    // Mostrar los resultados
    cout << "Cantidad de letras (minúsculas o mayúsculas): " << letras << endl;
    cout << "Cantidad de símbolos: " << simbolos << endl;
    cout << "Cantidad de dígitos numéricos: " << digitos << endl;
    cout << "Cantidad de dígitos múltiplos de 4: " << multiplosDe4 << endl;

    return 0;
}