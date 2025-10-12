#include <iostream>
using namespace std;

int main() {
    int N, contadorPrimos = 0;

    cout << "Ingrese un numero entero mayor que 1: ";
    cin >> N;

    if (N <= 1) {
        cout << "Numero invalido. Debe ser mayor que 1." << endl;
        return 1;
    }

    cout << "Numeros primos entre 1 y " << N << ":\n";

    for (int num = 2; num <= N; ++num) {
        bool esPrimo = true;
        
        for (int divisor = 2; divisor * divisor <= num; ++divisor) {
            if (num % divisor == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            cout << num << " ";
            contadorPrimos++;
        }
    }

    cout << "\nCantidad de numeros primos: " << contadorPrimos << endl;
    return 0;
}
