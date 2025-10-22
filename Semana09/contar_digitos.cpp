/*
Contar la cantidad de digitos de un numero entero.
Por: Andre Loyola
*/

#include <iostream>
using namespace std;

int main() {
	// Variables
	 int numero, cont_digitos;
	// Lectura
	cout << "ingrese un numero: ";
	cin >> numero;
	// Proceso
	cont_digitos=0;
	while(numero>0){
		cont_digitos++;
		numero=numero/10;
	}
	// Reporte
	cout<<endl;
	cout<<"cantidad de digitos: "<<cont_digitos<<endl;
	return 0;
}
