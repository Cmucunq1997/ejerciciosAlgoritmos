/* Escribí un programa que permita al usuario ingresar números que serán leídos como string (no como int o float) hasta que ingrese uno que sea múltiplo de 10 ó menor que 0 (que no será procesado). Se formarán dos strings, en los cuales se concatenarán los números ingresados, según el siguiente criterio: en un string se concatenarán todos los números que el usuario ingrese cuya cantidad de dígitos sea un múltiplo de 3. En el otro, se concatenarán todos los números que contengan el dígito 0. Si un número cumple ambas condiciones, debe concatenarse en ambos strings. En cada string, después de cada número concatenado debe colocarse el carácter “-”. Al finalizar, mostrar en pantalla ambos strings. */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string numero, cadenaMultiplo3 = "", cadenaConCero = "";

    // Bucle para ingresar números hasta que se cumpla la condición de corte
    while (true) {
        cout << "Ingrese un número (ingrese múltiplo de 10 o menor que 0 para finalizar): ";
        cin >> numero;

        // Convertir el número a un entero para verificar si es múltiplo de 10 o menor que 0
        int numeroEntero = stoi(numero);

        // Condición de corte: múltiplo de 10 o menor que 0
        if (numeroEntero % 10 == 0 || numeroEntero < 0) {
            break;
        }

        // Verificar si la cantidad de dígitos es múltiplo de 3
        if (numero.length() % 3 == 0) {
            cadenaMultiplo3 += numero + "-";
        }

        // Verificar si contiene el dígito '0'
        if (numero.find('0') != string::npos) {
            cadenaConCero += numero + "-";
        }
    }

    // Mostrar los resultados
    cout << "Números con cantidad de dígitos múltiplo de 3: " << cadenaMultiplo3 << endl;
    cout << "Números que contienen el dígito '0': " << cadenaConCero << endl;

    return 0;
}