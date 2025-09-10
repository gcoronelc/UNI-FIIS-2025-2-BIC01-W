/*
Desarrollar un programa que lea dos n�meros enteros y un operador (+,-,*, /) y calcule la operaci�n
Autor: Salazar Altamirano
*/

#include <iostream>
using namespace std;

int main() {
	//Variables
	double a, b, resultado;
	int operacion;
	string mensaje;
	
	//Lectura
	cout << "Ingrese el 1er n�mero: "; cin >> a;
	cout << "Ingrese el 2do n�mero: "; cin >> b;
	
	cout << "\n--------OPERACIONES---------" << endl;
	cout << "1. Suma" << "\n";
	cout << "2. Resta" << "\n";
	cout << "3. Multiplicacion" << "\n";
	cout << "4. Division" << "\n";
	cin >> operacion;
	
	//Proceso
	switch(operacion) {
		case 1:
			mensaje = "Has elegido la suma";
			resultado = a+b;
			break;
		case 2: 
			mensaje = "Has elegido la resta";
			resultado = a-b;
			break;
		case 3: 
			mensaje = "Has elegido la multiplicacion";
			resultado = a*b;
			break;
		case 4:
			mensaje = "Has elegido la division";
			resultado = a/b;
			break;
		default:
			mensaje = "Operaci�n invalida";
	}
	
	//Reporte
	
	cout << mensaje << endl;
	cout << "El resultado de la operacion es: " << resultado << endl;
	
	system("pause");
	return 0;
}
