#include <iostream>
using namespace std;
int main() {
    // Declaración de variables
    int cont = 0;
    float talla, suma = 0.0, promedio;
    // Bucle while para pedir las tallas de 5 alumnos
    while (cont < 5) {
        cout << "Ingrese la talla " <<cont + 1 << ": ";
        cin >> talla;
     // Acumulación de suma e incremento de contador
        suma += talla;
        cont++;
    }
    // Cálcula y muestra el promedio
    cout << "El promedio es:     " << suma/5 << endl;
    return 0;
}



