#include <iostream>
using namespace std;
int main(){
	int n;
	long numero;
	
	//datos
	cout<<"Ingrese un numero positivo: "; cin>>n;
	//proceso
	numero=1;
	for(int i=1; i<=n; i++){
		numero=numero*i;
	}
	//reporte
	cout<<"el valor del factorial es: "<<numero<<endl;
	return 0;
}

