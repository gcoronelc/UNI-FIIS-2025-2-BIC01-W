#include <iostream>
using namespace std;

int main(){
	// Variables
	int nota1, nota2, nota3, nota4, nota5;
	int menor_nota, promedio;
	string condicion;
	// Datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "======================================" << endl;
	cout << "Nota 1: "; cin >> nota1;
	cout << "Nota 2: "; cin >> nota2;
	cout << "Nota 3: "; cin >> nota3;
	cout << "Nota 4: "; cin >> nota4;
	cout << "Nota 5: "; cin >> nota5;
	// Menor nota
	menor_nota = nota1;
	if(nota2 < menor_nota) menor_nota = nota2;
	if(nota3 < menor_nota) menor_nota = nota3;
	if(nota4 < menor_nota) menor_nota = nota4;
	if(nota5 < menor_nota) menor_nota = nota5;
	// Promedio
	promedio = nota1 + nota2 + nota3 + nota4 + nota5;
	promedio = (promedio - menor_nota) / 4;
	condicion = "Desaprobado";
	if(promedio >= 14) condicion = "Aprobado";
	// Reporte
	cout << endl << endl;
	cout << "REPORTE" << endl;
	cout << "======================================" << endl;
	cout << "Promedio: " << promedio << endl;
	cout << "Condicion: " << condicion << endl;
	cout << endl;
	return 0;	
}

