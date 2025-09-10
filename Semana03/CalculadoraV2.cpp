/*
Desarollar un programa que lea 2 numeros enteros y un operador (+,-,*,/) y calcule la operacion
Autor: Maria Fatima
*/
#include <iostream>
using namespace std;

int main() {
	// Variables
    int num1, num2;
    char oper;
    int resultado;
    bool ok;
    
	// Lectura
    cout << "Ingrese el primer número entero: ";
    cin >> num1;

    cout << "Ingrese el segundo número entero: ";
    cin >> num2;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> oper;

	// Proceso
	ok = true;
    switch (oper) {
        case '+':
            resultado = (num1 + num2);
            break;
        case '-':
            resultado = (num1 - num2);
            break;
        case '*':
            resultado = (num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                resultado = (num1 / num2);
            else
                ok = false;
            break;
        default:
            ok = false;
            break;
    }
    
    // Reporte
    cout << "=================================" << endl;
    if( ok ){
    	cout << "Resultado: " << resultado << endl;
	} else {
		cout << "Operacion incorrecta." << endl;
	}

    return 0;
}
