#include <iostream>
using namespace std;

int main() {
    const int TOTAL = 15;
    int edad;
    int menoresEdad = 0;
    int adultosMayores = 0;
    int sumaEdades = 0;

    for (int i = 1; i <= TOTAL; ++i) {
        cout << "Ingrese la edad " << i << ": ";
        cin >> edad;

        if (edad < 18)
            menoresEdad++;
        if (edad >= 60)
            adultosMayores++;

        sumaEdades += edad;
    }

    float promedio = static_cast<float>(sumaEdades) / TOTAL;

    cout << "\nCantidad de menores de edad: " << menoresEdad << endl;
    cout << "Cantidad de adultos mayores (>=60): " << adultosMayores << endl;
    cout << "Promedio general de edades: " << promedio << endl;

    return 0;
}
