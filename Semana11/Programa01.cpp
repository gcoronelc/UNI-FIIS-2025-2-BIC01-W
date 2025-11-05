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
	int m, n;
	int mayor, menor;
	string reporte;
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "========================" << endl;
	m = leerEnteroPositivo("Ingrese el valor para m: ");
	n = leerEnteroPositivo("Ingrese el valor para n: ");
	// Determinar el mayor y menor
	if(m > n){
		mayor = m;
		menor = n;
	} else {
		mayor = n;
		menor = m;
	}
	// Proceso
	reporte = "";
	for(int num = menor; num <= mayor; num++){
		if(num%15 == 0){
			reporte = reporte + to_string(num) + " ";
		}
	}
	// Reporte
	cout << "REPORTE"<< endl;
	cout << "Multiplis de 15: " << reporte << endl;
	return 0;
}
