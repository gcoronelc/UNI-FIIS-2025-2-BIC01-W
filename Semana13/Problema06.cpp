/*
 * Problema
 * La evaluación de un estudiante se basa en 6 notas, 
 * de las cuales se consideran solo las 4 mejores notas.
 * Desarrollar un programa que permita obtener la nota 
 * promedio de un estudiante según el requerimiento planteado.
 */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// Variables
	int n = 6;
	int notas[6];
	double promedio;
	// Lectura
	cout << "Ingreso de notas\n";
	cout << "============================\n";
	for(int i=0; i<n; i++){
		cout << "Ingrese nota " << (i+1) << ": ";
		cin >> notas[i];
	}
	// Ordenar el arreglo en forma descendente
	for(int i=0; i<(n-1); i++){
		for(int j=i+1;j<n; j++){
			if(notas[i] < notas[j]) {
				int auxiliar = notas[i];
				notas[i] = notas[j];
				notas[j] = auxiliar;
			}
		}
	}
	// Promedio
	promedio = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
	// Reporte
	cout << "\nREPORTE" << endl;
	cout << "Promedio: " << promedio << endl;	
	
	return 0;
}
