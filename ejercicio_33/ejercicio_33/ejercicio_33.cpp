/* Escribí un programa que pregunte al usuario si desea analizar calificaciones de alumnos y, sólo si responde “S” comenzará el procesamiento de los datos, hasta que el usuario ingrese algo diferente de “S”. Por cada alumno, permitir ingresar su calificación. Si es mayor a 4 el alumno está aprobado. Finalmente, mostrar “Porcentaje de alumnos aprobados: x %” (donde x es el porcentaje de aprobados sobre el total de calificaciones procesadas). También se debe imprimir “Promedio de los aprobados: y” (donde y es la calificación promedio, sólo de los alumnos aprobados). */

#include <iostream>

using namespace std;

int main() {
    char respuesta;
    int calificacion, totalAlumnos = 0, aprobados = 0;
    float sumaAprobados = 0;

    // Preguntar si desea analizar calificaciones
    cout << "Desea analizar calificaciones de alumnos? (S para si, cualquier otra tecla para no): ";
    cin >> respuesta;

    // Mientras el usuario responda 'S' o 's', se procesarán calificaciones
    while (respuesta == 'S' || respuesta == 's') {
        cout << "Ingrese la calificación del alumno (0-10): ";
        cin >> calificacion;

        // Validar que la calificación esté en el rango válido
        if (calificacion < 0 || calificacion > 10) {
            cout << "Calificación inválida. Debe estar entre 0 y 10." << endl;
            continue;
        }

        // Aumentar el contador de alumnos
        totalAlumnos++;

        // Verificar si el alumno está aprobado
        if (calificacion > 4) {
            aprobados++;
            sumaAprobados += calificacion;
        }

        // Preguntar si desea seguir ingresando calificaciones
        cout << "Desea seguir analizando calificaciones? (S para si, cualquier otra tecla para no): ";
        cin >> respuesta;
    }

    // Mostrar resultados solo si se procesaron alumnos
    if (totalAlumnos > 0) {
        // Calcular porcentaje de aprobados
        float porcentajeAprobados = (aprobados / static_cast<float>(totalAlumnos)) * 100;

        // Mostrar el porcentaje de alumnos aprobados
        cout << "Porcentaje de alumnos aprobados: " << porcentajeAprobados << "%" << endl;

        // Si hubo alumnos aprobados, calcular el promedio de aprobados
        if (aprobados > 0) {
            float promedioAprobados = sumaAprobados / aprobados;
            cout << "Promedio de los aprobados: " << promedioAprobados << endl;
        }
        else {
            cout << "No hubo alumnos aprobados." << endl;
        }
    }
    else {
        cout << "No se procesaron calificaciones." << endl;
    }

    return 0;
}