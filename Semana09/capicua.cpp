/*
Determinar si un numero es capicua
*/

#include <iostream>
using namespace std;

int main() {
	// Variables
	int numero, num_aux; 
	int num_invertido;
	string respuesta;
	// Lectura 
	// por: Arnold
	cout << "ingrese un numero: ";
	cin >> numero;
	
	// Proceso
	// por: Andre
	num_invertido=0;
	num_aux=numero;
	while(numero>0){
		int cifra=numero%10;
		numero=numero/10;
		num_invertido=num_invertido*10 + cifra;
	}
	respuesta="No es numero capicua";
	if(num_aux==num_invertido){
		respuesta="Si es numero capicua";
	}
	// Reporte
	// por: María Fátima
	cout<<endl;
	cout<<"numero: "<<num_aux<<endl;
	cout<<"numero invertido: "<<num_invertido<<endl;
	cout<<"respuesta: "<<respuesta<<endl;

	return 0;	
}
