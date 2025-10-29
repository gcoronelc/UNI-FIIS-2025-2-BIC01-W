// autor: Thiago Matias Arenas Flores
#include <iostream>
using namespace std;

int main(){
	//Variables
	int x, y;
	//Lectura de x
	cout << "Ingrese el valor de x: "; cin >> x;
	//Proceso
	if (x<=11){
		y=3*x+36;
	}
	else if (x<=33){
		y=x*x-10;
	}
	else if (x<=64){
		y=x+6;
	}
	else {
		y=0;
	}
	//Reporte
	cout << "El valor de y es: " << y <<endl;
	return 0;	
}
