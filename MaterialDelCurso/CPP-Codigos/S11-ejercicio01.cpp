#include <iostream>
using namespace std;

int main() {
    
    int numero, digito;  //variables de entrada
    int pares = 0, impares = 0; //variables contadoras

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    // validación de datos de entrada
    if (numero <= 0) {
        cout << "Numero invalido. Debe ser positivo." << endl;
        return -1;  // terminamos la función main
    }

    // Se obtiene todos los dígitos
    while (numero > 0) {
        digito = numero % 10;
        if (digito % 2 == 0)
            pares++;
        else
            impares++;
        // variable de control de la repetición
        numero /= 10;
    }

    cout << "Cantidad de digitos pares: " << pares << endl;
    cout << "Cantidad de digitos impares: " << impares << endl;

    return 1;
}