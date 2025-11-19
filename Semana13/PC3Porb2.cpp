/*
 * Problema 2 de la PC3
 */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// Variables
	int num, numAux, digito, cantDigitos;
	int sumaDigitos, digitoMayor, digitoMenor;
	int digitosPares, digitosImpares;
	string sumatoria;
	
	
	// Lectura
	cout << "Ingrese numero entero: ";
	cin >> num;
	
	// Proceso
	numAux = num;
	cantDigitos = 0;
	sumaDigitos = 0;
	digitoMayor = 0;
	digitoMenor = 9;
	digitosPares = 0;
	digitosImpares = 0;
	sumatoria = "";
	while(numAux > 0){
		digito = numAux % 10;
		numAux = numAux / 10;
		cantDigitos++;
		sumaDigitos += digito;
		if(digito>digitoMayor) digitoMayor = digito;
		if(digito<digitoMenor) digitoMenor = digito;
		if(digito%2==0){
			digitosPares++;
		} else {
			digitosImpares++;
		}
		// Suma de digitos
		if(sumatoria.length()==0){
			sumatoria = to_string(digito);
		} else {
			sumatoria =  to_string(digito) + "+" + sumatoria;
		}
		
		
	}
	sumatoria = " ( " + sumatoria + " )";
	
	// Reporte
	cout << "\nREPORTE" << endl;
	cout << "Analisis del numero: " << num << endl;
	cout << "- Cantidad de digitos: " << cantDigitos << endl;
	cout << "- Suma de digitos: " << sumaDigitos << sumatoria << endl;
	cout << "- Digito mayor: " << digitoMayor << endl;
	cout << "- Digito menor: " << digitoMenor << endl;
	cout << "- Digitos pares: " << digitosPares << endl;
	cout << "- Digitos impares: " << digitosImpares << endl;
	
	return 0;
}
