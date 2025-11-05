/*
Desarrollar un programa que muestre la tabla de multiplicar de un 
número "n", el programa debe solicitar el valor para "n".
*/

#include<iostream>
#include<string>

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
	int n;
	string tabla = "Pronto";
	// Lectura de "n"
	n = leerEnteroPositivo("Ingrese valor para n: ");
	// Proceso
	tabla = "";
	string fila = "";
	int prod;
	for(int i=1; i<=12;i++){
		prod = i * n;
		fila = to_string(i) + " x " + to_string(n) + " = " + to_string(prod);
		tabla = tabla + fila + "\n";
	}
	// Reporte
	cout << "REPORTE" << endl;
	cout << "==========================" << endl;
	cout << tabla << endl;
	return 0; 
}
	
	
