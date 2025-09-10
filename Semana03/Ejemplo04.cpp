#include <iostream>
using namespace std;

int main(){
	
	// Variables
	int nota;
	string snota;
	
	// Lectura
	do{
		cout << "Nota: ";
		cin >> snota;
		
	}while(false)
	
	
	// Proceso
	string condicion;
	if(nota<0 || nota>20) condicion = "No pasa nada";
	else 
		if(nota < 10) condicion = "Desaprobado";
		else condicion = "Aprobado";;
	
	// Reporte
	cout << "Nota: " << nota << endl;
	cout << "Condicion: " << condicion << endl;
	
	system("pause");
	return 0;
	
}


