#include <iostream>
using namespace std;

int main(){
	// Variables
	int minutos_consumo, plan, estudiante;
	double importe_base = 0.0, costo_minuto = 0.0;
	int minutos_base = 0, minutos_extra = 0;
	double consumo_extra;
	double subtotal, dcto_estudiante, total;
	// Datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===========================================" << endl;
	cout << "Minutos consumidos? "; cin >> minutos_consumo;
	cout << "Plan (1, 2 o 3)? "; cin >> plan;
	cout << "Estudiante (1:Si, 2:No)? "; cin >> estudiante;
	// Datos del plan
	if(plan == 1){
		importe_base = 29.00;
		minutos_base = 100;
		costo_minuto = 0.40;
	}
	if(plan == 2){
		importe_base = 45.00;
		minutos_base = 250;
		costo_minuto = 0.30;
	}
	if(plan == 3){
		importe_base = 65.00;
		minutos_base = 500;
		costo_minuto = 0.20;
	}
	// Calculos
	minutos_extra = 0;
	if(minutos_consumo > minutos_base) 
		minutos_extra = minutos_consumo - minutos_base;
	consumo_extra = minutos_extra * costo_minuto;
	subtotal = importe_base + consumo_extra;
	dcto_estudiante = 0.0;
	if(estudiante == 1)
		dcto_estudiante = subtotal * 0.10;
	total = subtotal - dcto_estudiante;
	// Reporte
	cout << endl << endl;
	cout << "REPORTE" << endl;
	cout << "=======================================" << endl;
	cout << "Importe base: " << importe_base << endl;
	cout << "Importe extra: " << consumo_extra << endl;
	cout << "Subtotal: " << subtotal << endl;
	cout << "Descuento estudiante: " << dcto_estudiante << endl;
	cout << "Total: " << total << endl;
	cout << endl << endl;
	return 0;
}
