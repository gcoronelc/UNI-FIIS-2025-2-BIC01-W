// Jack Franco Avalos Vicente
#include <iostream>
using namespace std;
int main(){
	//Variables
	int creditos; 
	string reporte;
	//Lectura de datos
	do{
		cout<<"Ingrese el numero de creditos acumulados: "; cin>>creditos;	
		if(creditos<0 || creditos>160){
			cout<<"La cantidad de creditos debe estar en el rango [0,160].\n";
		}
	} while(creditos<0 || creditos>160);
	//Proceso
	if(creditos<32){
		reporte="Año academico: Primer año";
	} else 	if(creditos<=63){
		reporte="Año academico: Segundo año";
	} else if(creditos<=95){
		reporte= "Año academico: Tercer año";
	} else if(creditos<=127){
		reporte= "Año academico: Cuarto año";
	} else{ 
		reporte= "Año academico: Quinto año";
	}
	//Reporte
	cout<<reporte<<endl;
	return 0;
}



