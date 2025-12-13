#include <iostream>
using namespace std;

int main() {
    // ============================================
    // (a) VARIABLES
    // ============================================
    int edad;
    char esFumador;
    double primaBase;
    double recargo;
    double primaTotal;
    
    // ============================================
    // (b) LECTURA
    // ============================================
    cout << "=== CALCULO DE PRIMA DE SEGURO ===" << endl;
    cout << endl;
    
    cout << "Ingrese la edad del asegurado: ";
    cin >> edad;
    
    cout << "Es fumador? (S/N): ";
    cin >> esFumador;
    
    // ============================================
    // (c) PROCESO
    // ============================================
    
    // Determinar prima base según edad
    if (edad > 50) {
        primaBase = 1200.0;
    }
    else if (edad >= 30) {
        primaBase = 800.0;
    }
    else {  // edad < 30
        primaBase = 500.0;
    }
    
    // Calcular recargo si es fumador
    // Patrón "default value + override"
    // Martin Fowler y Robert C. Martin (Uncle Bob) promueven evitar else cuando no es necesario
    recargo = 0.0; // Asumo que no hay recargo
    if (esFumador == 'S' || esFumador == 's') {
        recargo = primaBase * 0.30;  // 30% de recargo
    }
    
    // Calcular prima total
    primaTotal = primaBase + recargo;
    
    // ============================================
    // (d) REPORTE
    // ============================================
    cout << endl;
    cout << "========== RESULTADOS ==========" << endl;
    cout << "Edad del asegurado: " << edad << " años" << endl;
    cout << "Es fumador: " << (esFumador == 'S' || esFumador == 's' ? "Si" : "No") << endl;
    cout << "Prima base: $" << primaBase << endl;
    cout << "Recargo por fumador: $" << recargo << endl;
    cout << "--------------------------------" << endl;
    cout << "PRIMA TOTAL ANUAL: $" << primaTotal << endl;
    cout << "================================" << endl;
    
    return 0;
}
