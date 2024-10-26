/* Escribí un programa que le solicite al usuario ingresar una fecha formada por 8 números, donde los primeros dos representan el día, los siguientes dos el mes y los últimos cuatro el año (DDMMAAAA). Este dato debe guardarse en una variable con tipo int (número entero). Finalmente, mostrar al usuario la fecha con el formato DD / MM / AAAA.
*/

#include <iostream>
using namespace std;

int main() {
    int fecha;

    // Solicitar al usuario que ingrese una fecha en formato DDMMAAAA
    cout << "Ingrese una fecha en formato DDMMAAAA: ";
    cin >> fecha;

    // Extraer el día, mes y año de la fecha ingresada
    int dia = fecha / 1000000;             // Los dos primeros dígitos (DD)
    int mes = (fecha / 10000) % 100;       // Los siguientes dos dígitos (MM)
    int anio = fecha % 10000;              // Los últimos cuatro dígitos (AAAA)

    // Mostrar la fecha en formato DD / MM / AAAA
    cout << "La fecha es: " << (dia < 10 ? "0" : "") << dia << " / "
        << (mes < 10 ? "0" : "") << mes << " / " << anio << endl;

    return 0;
}