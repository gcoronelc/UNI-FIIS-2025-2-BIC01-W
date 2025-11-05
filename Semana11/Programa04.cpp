/*
 * Programa: Estadísticas de Números Enteros Positivos
 * Autor: Estilo Eric Gustavo Coronel Castillo
 * Descripción: Solicita números enteros positivos hasta ingresar 0,
 *              luego muestra el mayor, menor y promedio.
 * Metodología: Secciones claramente separadas (Variables, Lectura, Proceso, Reporte)
 * Técnica: Almacenamiento en cadena con separadores
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main() {
    
    //**************** SECCION DE VARIABLES ****************
    int numero;
    string cadenaNumeros;
    int mayor, menor;
    int suma;
    int cantidad;
    double promedio;
    int numeroActual;
    
    
    //**************** SECCION DE LECTURA ****************
    cadenaNumeros = "";
    
    cout << "\n=================================================\n";
    cout << "  ESTADISTICAS DE NUMEROS ENTEROS POSITIVOS\n";
    cout << "=================================================\n\n";
    cout << "Ingrese numeros enteros positivos.\n";
    cout << "El programa finalizara cuando ingrese 0.\n\n";
    
    do {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;
        
        if (numero > 0) {
            if (cadenaNumeros != "") {
                cadenaNumeros = cadenaNumeros + " ";
            }
            cadenaNumeros = cadenaNumeros + to_string(numero);
        }
        
    } while (numero != 0);
    
    
    //**************** SECCION DE PROCESO ****************
    if (cadenaNumeros != "") {
        stringstream flujo(cadenaNumeros);
        cantidad = 0;
        suma = 0;
        mayor = 0;
        menor = 0;
        
        while (flujo >> numeroActual) {
            if (cantidad == 0) {
                mayor = numeroActual;
                menor = numeroActual;
            }
            
            if (numeroActual > mayor) {
                mayor = numeroActual;
            }
            
            if (numeroActual < menor) {
                menor = numeroActual;
            }
            
            suma = suma + numeroActual;
            cantidad = cantidad + 1;
        }
        
        promedio = static_cast<double>(suma) / cantidad;
    } else {
        cantidad = 0;
    }
    
    
    //**************** SECCION DE REPORTE ****************
    cout << "\n=================================================\n";
    
    if (cantidad > 0) {
        cout << "  RESULTADOS:\n";
        cout << "=================================================\n";
        cout << "  Numeros ingresados: " << cadenaNumeros << endl;
        cout << "  Cantidad: " << cantidad << endl;
        cout << "  Numero MAYOR: " << mayor << endl;
        cout << "  Numero MENOR: " << menor << endl;
        cout << fixed << setprecision(2);
        cout << "  PROMEDIO:     " << promedio << endl;
    } else {
        cout << "  No se ingresaron numeros validos.\n";
    }
    
    cout << "=================================================\n\n";
    
    return 0;
}
