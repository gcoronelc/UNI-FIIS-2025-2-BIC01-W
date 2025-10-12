#include <iostream>
using namespace std;

int main() {
    int n;  //cantidad de números
    float numero, suma = 0;
    int contador = 0;

    cout << "Ingrese la cantidad de numeros a ingresar (mayor que 0): ";
    cin >> n;

    //validación, si no es correcto se termina el programa
    if (n <= 0) {
        cout << "Cantidad invalida. Debe ser mayor que 0." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        cout << "Numero " << i << ": ";
        cin >> numero;

        if (numero > 0) {
            suma += numero;  // acumulador
            contador++;      // contador
        }
    }

    // tener cuidado con la división por cero (0)
    if (contador > 0) {
        float promedio = suma / contador;
        cout << "Promedio de los numeros positivos: " << promedio << endl;
    } else {
        cout << "No se ingresaron numeros positivos." << endl;
    }

    return 0;
}
