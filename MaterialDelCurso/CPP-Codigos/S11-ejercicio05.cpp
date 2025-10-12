#include <iostream>
using namespace std;

int main() {
    int nota;
    int suma = 0;
    int cantidadValidas = 0;
    int desaprobadas = 0;

    cout << "Ingrese las notas (entre 0 y 20). Ingrese -1 para terminar:\n";

    while (true) {
        cout << "Nota: ";
        cin >> nota;

        if (nota == -1)
            break;

        if (nota < 0 || nota > 20) {
            cout << "Nota invalida. No se contara.\n";
            continue;
        }

        suma += nota;
        cantidadValidas++;

        if (nota < 11)
            desaprobadas++;
    }

    if (cantidadValidas > 0) {
        float promedio = static_cast<float>(suma) / cantidadValidas;
        cout << "\nCantidad de notas validas: " << cantidadValidas << endl;
        cout << "Promedio de notas validas: " << promedio << endl;
        cout << "Cantidad de notas desaprobadas: " << desaprobadas << endl;
    } else {
        cout << "No se ingresaron notas validas.\n";
    }

    return 0;
}
