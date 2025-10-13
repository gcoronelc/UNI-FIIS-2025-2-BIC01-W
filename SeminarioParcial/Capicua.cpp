#include <iostream>
using namespace std;
int main(){
	
	// Variables
	int numero; // Numero ingresado por el usuario
	int numero_inv; // Numero invertido
	string repo;
	
	// Lectura
	cout << "Ingrese un numero entero positivo: ";
	cin >> numero;
	
	// Invertir numero
	int numero_aux = numero;
	numero_inv = 0;
	int resto;
	while(numero_aux > 0){
		resto = numero_aux % 10;
		numero_inv = numero_inv * 10 + resto;
		numero_aux = numero_aux / 10;
	}
	
	// Comprobar si es capicua
	repo = (numero==numero_inv)?"Si es capicua":"No es capicua";
		
	// Reporte
	cout << "\n\nReporte" << endl;
	cout << "===========================\n";
	cout << "Numero original: " << numero << endl;
	cout << "Numero invertido: " << numero_inv << endl;
	cout << "¿Es capicua? " << repo << endl;
	
	return 0;
}
