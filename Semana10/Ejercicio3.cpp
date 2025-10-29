// Autor: Germán Alejandro García Obregón
#include<iostream>
using namespace std;
int main () {
	// Variables
	double nota1, nota2, nota3, nota4, notae;
	double promedio, pronuevo;
	double menor;
	// Lectura de datos
	cout << "Ingrese la primera nota: " ;
	cin >> nota1;
	cout << "Ingrese la segunda nota: " ;
	cin >> nota2;
	cout << "Ingrese la tercera nota: " ;
	cin >> nota3;
	cout << "Ingrese la cuarta nota: " ;
	cin >> nota4;
	cout << "Ingrese la nota de ensayo: " ;
	cin >> notae;
	// Proceso
	promedio=(nota1+nota2+nota3+nota4)/4;
	menor=nota1;
	if(nota2<menor) menor=nota2;
	if(nota3<menor) menor=nota3;
	if(nota4<menor) menor=nota4;
	pronuevo=(nota1+nota2+nota3+nota4+notae-menor)/4;
	// Reporte
	cout << "Promedio de notas: " << promedio << endl;
	cout << "Nota menor: " << menor << endl;
	cout << "Nuevo promedio: " << pronuevo << endl;
	system("pause");
	return 0;

	
}
