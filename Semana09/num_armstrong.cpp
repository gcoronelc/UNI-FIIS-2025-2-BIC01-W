/*
Numero de Armstrong.
Por: jordan marin y Henry Berrocal
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	//variables
	int n, n_aux;
	int digitos;
	int n_ang;
	string reporte;
	// lectura
	do{
		cout<<"Ingrese un valor de n positivo:";
		cin>>n;
		if(n<=0){
			cout<<"El valor de n debe ser mayor que 0."<<endl;
		}
	} while(n<=0);
	
	//proceso
	n_aux=n;
	digitos=0;
	while(n_aux>0){
		digitos++;
		n_aux=n_aux/10;
	}
	n_aux=n;
	n_ang=0;
	while(n_aux>0){
		int m=n_aux%10;
		n_aux=n_aux/10;
		int p=1;
		for(int i=1; i<=digitos; i++){
			p*=m;
		}
		n_ang+=p;
	}
	reporte="No es un numero de angstrong";
	if(n==n_ang) reporte = "Si es un numero de angstrong";
	//Reporte
	cout << endl;
	cout << reporte;
	return 0;
}
