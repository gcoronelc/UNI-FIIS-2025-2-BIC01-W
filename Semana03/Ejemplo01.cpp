#include <iostream>
using namespace std;

int main(){
	
	// Variables
	int nota;
	
	// Lectura
	cout << "Nota: ";
	cin >> nota;
	
	// Proceso
	string condicion = "Aprobado";
	if(nota < 10) condicion = "Desaprobado";
	
	// Reporte
	cout << "Condicion: " << condicion << endl;
	
	system("pause");
	return 0;
	
}


