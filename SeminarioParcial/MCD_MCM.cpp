/*
Elabore un pseudocódigo o diagrama de flujo que permita calcular el Máximo Común Divisor (MCD) 
y el Minimo Comun Multiplo de dos números enteros positivos ingresados por el usuario, 
utilizando el algoritmo de Euclides para encontrar el MCD.
*/

#include <iostream>
using namespace std;
int main(){
	
	// Variables
	int numero1; // Numero 1 ingresado por el usuario
	int numero2; // Numero 2 ingresado por el usuario
	int mcd;    // Para el MCD
	int mcm;    // Para el MCM

	// Lectura	
	cout << "Ingrese un numero entero positivo: ";
	cin >> numero1;
	cout << "Ingrese otro numero entero positivo: ";
	cin >> numero2;

	// Proceso
	int mayor, menor;
	int resto = 1; // Artificio para que ingre al bucle
	if(numero1 > numero2){
		mayor = numero1;
		menor = numero2;
	} else {
		mayor = numero2;
		menor = numero1;
	}
	while(resto != 0){
		resto = mayor % menor;
		mayor = menor;
		menor = resto;
	}
	mcd = mayor;
	mcm = (numero1 * numero2) / mcd;
	
	// Reporte
	cout << "REPORTE\n";
	cout << "=============================\n";
	cout << "Número 1: " << numero1 << endl;
	cout << "Número 2: " << numero2 << endl;
	cout << "MCD: " << mcd << endl;
	cout << "MCM: " << mcm << endl;
	
	return 0;
}






