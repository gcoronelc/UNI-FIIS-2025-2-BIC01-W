/*
 * Problema de arreglos
 */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// Variables
	int n = 6;
	int notas[n];
	
	// Datos
	notas[0] = 15;
	notas[1] = 18;
	notas[2] = 10;
	notas[3] = 14;
	notas[4] = 8;
	notas[5] = 13;
	
	// Ordenar
	int nota_temp;
	for(int i=0; i<(n-1); i++){
		for(int j=i+1; j<n; j++){
			if(notas[i] < notas[j]){
				nota_temp = notas[i];
				notas[i] = notas[j];
				notas[j] = nota_temp;
			}
		}
	}
	
	// Promedio
	int suma = notas[0] + notas[1] + notas[2] + notas[3];
	float promedio = suma / 4.0;
	
	// Reporte
	cout << "Promedio: " << promedio;
	
	return 0;
}
	
