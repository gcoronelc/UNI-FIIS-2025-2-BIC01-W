#include <iostream>
using namespace std;
int main(){
	
	// Variables
	int numero; // Numero ingresado por el usuario
	int contador; // contador de digitos
	string repo;
	
	// Lectura
	cout << "Ingrese un numero entero positivo: ";
	cin >> numero;
	
	// PRoceso
	contador = 0;
	int numero_aux = numero;
	while(numero_aux > 0){
		contador++;
		numero_aux = numero_aux / 10;
	}
		
	// Reporte
	cout << "\n\nReporte" << endl;
	cout << "===========================\n";
	cout << "Numero original: " << numero << endl;
	cout << "Cantidad de cifras: " << contador << endl;
	
	return 0;
}
