/*
Desarrollar un programa que genere "n" números enteros entre 15 y 30, 
el programa debe solicitar el valor para "n".
Luego debe mostrar la lista de los números impares y su suma, debe igual 
manera debe mostrar la lista de los números pares y su suma respectivamente.
*/


#include<iostream>
#include<string>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

using namespace std;

int leerEnteroPositivo(string prompt){
	// Variables
	int num;
	// Proceso
	do{
		cout << prompt;
		cin >> num;
		if(num <= 0)
			cout << "Debe ingresar un valor positivo." << endl << endl;
	}while(num <= 0);
	// Reporte
	return num;
}


int main () {
	// Variables
	int n, sumaPares, sumaImpares;
	string pares, impares;
	// Lectura de "n"
	n = leerEnteroPositivo("Ingrese valor para n: ");
	// Generar los numeros
	srand(static_cast<unsigned int>(time(0)));
	int numeros[n]; 
	for(int i=0; i < n; i++){
		numeros[i] = rand()%16 + 15;
	}
	// Proceso
	pares = "";
	impares = "";
	sumaPares = 0;
	sumaImpares = 0;
	int numAux;
	for(int i=0; i < n; i++){
		numAux = numeros[i];
		if(numAux%2 == 0){
			if(pares.length() > 0){
				pares = pares + " + ";
			}
			pares = pares + to_string(numAux);
			sumaPares += numAux;
		} else {
			if(impares.length() > 0){
				impares = impares + " + ";
			}
			impares = impares + to_string(numAux);
			sumaImpares += numAux;
		}
	}
	pares = pares + " = " + to_string(sumaPares);
	impares = impares + " = " + to_string(sumaImpares);
	// Reporte
	cout << "REPORTE\n";
	cout << "========================\n";
	cout << "Pares: " << pares << endl;
	cout << "Impares: " << impares << endl;
	
	return 0;
}

