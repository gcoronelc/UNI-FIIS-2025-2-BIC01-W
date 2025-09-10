#include <iostream>
using namespace std;

int main(){
	
	// Variables
	int nota;
	
	// Lectura
	cout << "Nota: ";
	cin >> nota;
	
	// Proceso
	string condicion = "No pasa nada";
	if(nota < 10) condicion = "Desaprobado";
	else condicion = "Aprobado";;
	
	// Reporte
	cout << "Condicion: " << condicion << endl;
	
	system("pause");
	return 0;
	
}


