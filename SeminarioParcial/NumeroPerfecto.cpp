#include <iostream>
using namespace std;
int main(){
	
	// Variables
	int numero; // Para el numero ingresado por el usuario
	int suma; // Para la suma de sus divisores
	string repo; // Para el reporte si se trata de un numero perecto o no
	
	// Datos
	cout << "Ingrese un numero entero positivo: ";
	cin >> numero;
	
	// Proceso
	suma = 0; // Valor inicial de la variable suma, es necesario
	for(int i=1; i<numero; i++){
		if(numero%i == 0){
			suma = suma + i; // Se acumula en la variable suma los divisores
		}
	}
	
	// Determinar si es perfecto
	if (suma == numero){
		repo = "Si es perfecto";
	} else {
		repo = "No es perfecto";
	}
	
	// Salida o Reporte
	cout << endl;
	cout << "Reporte" << endl;
	cout << "========================\n";
	cout << "Numero: " << numero << endl;
	cout << "Divisores: " << endl;
	cout << "Suma de Divisores: " << suma << endl;
	cout << "Resultado: " << repo << endl;
	
	return 0;
}
