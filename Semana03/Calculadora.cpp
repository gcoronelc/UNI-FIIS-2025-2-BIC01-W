/*
Desarollar un programa que lea 2 numeros enteros y un operador (+,-,*,/) y calcule la operacion
Autor: Maria Fatima
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char oper;

    cout << "Ingrese el primer número entero: ";
    cin >> num1;

    cout << "Ingrese el segundo número entero: ";
    cin >> num2;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
        case '+':
            cout << "Resultado: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << (num1 / num2) << endl;
            else
                cout << "Error: División por cero no permitida." << endl;
            break;
        default:
            cout << "Operador no válido." << endl;
            break;
    }

    return 0;
}
