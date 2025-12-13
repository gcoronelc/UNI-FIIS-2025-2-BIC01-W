#include <iostream>
using namespace std;

int main() {
    // ============================================
    // (a) VARIABLES
    // ============================================
    int n;
    int suma;
    string operacion;
    
    // ============================================
    // (b) LECTURA
    // ============================================
    cout << "=== SUMA DE LOS N PRIMEROS NUMEROS PARES ===" << endl;
    cout << endl;
    
    cout << "Ingrese el valor de n: ";
    cin >> n;
    
    // ============================================
    // (c) PROCESO
    // ============================================
    suma = 0;
    operacion = "";  // Cadena vacía para construir la operación
    for (int i = 2; i <= n * 2; i = i + 2) {
        suma = suma + i;
        // Construir la cadena de operación
        if (i == 2) {
            operacion = to_string(i);
        }
        else {
            operacion = operacion + " + " + to_string(i);
        }
    }
    operacion = operacion + " = " + to_string(suma);
    
    // ============================================
    // (d) REPORTE
    // ============================================
    cout << endl;
    cout << "========== RESULTADO ==========" << endl;
    cout << "Operacion: " << operacion << endl;
    cout << "===============================" << endl;
    
    return 0;
}
