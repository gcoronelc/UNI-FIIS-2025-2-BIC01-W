/*
Serie de Fibonacci.
Leer "n" que es el numero de terminos.
Por: Yosiana Bernabé y Misael Salazar 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Variables
	int n;
	string serie;
	// Lectura
	do{
		cout<<"Ingrese un valor de n positivo:";
		cin>>n;
		if(n<=0){
			cout<<"El valor de n debe ser mayor que 0."<<endl;
		}
	} while(n<=0);
	
	// Proceso
	serie = "";
	switch (n) {
		case 1:
			serie = "0";
			break;
		case 2:
			serie = "0 1";
			break;
		default:
			serie = "0 1";
			unsigned long long a = 0;
			unsigned long long b = 1;
			for (int i=3; i<=n; i++){
				unsigned long long c = a+b;
				serie = serie + " " + to_string(c);
				a = b;
				b = c;
			}
	}
	
	// Reporte
	
	cout << "Serie: " << serie << endl;
	
	return 0;
}
