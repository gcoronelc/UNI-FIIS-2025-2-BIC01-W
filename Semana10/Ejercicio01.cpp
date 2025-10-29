// autor 1: valeria elizabeth benavides palomino
// autor 2: María Fátima López Flores
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	//variables
	int a,b,c;
	float area,semi;
	//lectura
	cout<<"Ingrese el lado a: ";
	cin>>a;
	cout<<"Ingrese el lado b: ";
	cin>>b;
	cout<<"Ingrese el lado c: ";
	cin>>c;
	//validacion de valores positivos
	if (a<=0 || b<=0 || c<=0){
		cout<<"Ingrese valores positivos para los lados";
		return  0;
	}
	// Validacion de triangulo
	bool cond1 = (a+b)>c;
	bool cond2 = (b+c)>a;
	bool cond3 = (c+a)>b;
	if (cond1==false || cond2==false || cond3==false ){
		cout << "Los lados no forman un triangulo.\n";
		return 0;		
	}
	//proceso
	semi=(a+b+c)/2; 
	area=sqrt(semi*(semi-a)*(semi-b)*(semi-c)); 
	//reporte
	cout<<"el semiperimetro es: "<<semi<<endl;
	cout<<"el area del triangulo es: "<<area<<endl;

}
