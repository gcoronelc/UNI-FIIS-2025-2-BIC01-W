/*

Desarrollar un programa para calcular la suma 
y el producto de dos numeros enteros.

Analisis:
---------
> Entrda de datos: numero1, numero2
> Reporte: suma, producto

*/

#include <iostream>
using namespace std;

int main(){
	
	// ============== VARIABLES ===============
	int numero1, numero2;
	int suma, producto;
	
	// ========== LECTURA DE DATOS =============
	cout << "LECTURA DE DATOS" << endl;
	cout << "------------------------" << endl;
	cout << "Numero 1: "; cin >> numero1;
	cout << "Numero 2: "; cin >> numero2;
	
	// ========= PROCESO =============
	suma = numero1 + numero2;
	producto = numero1 * numero2;
	
	// ========= REPORTE ==============
	cout << endl << endl;
	cout << "REPORTE" << endl;
	cout << "=====================" << endl;
	cout << "Numero 1: " << numero1 << endl;
	cout << "Numero 2: " << numero2 << endl;
	cout << "Suma: " << suma << endl;
	cout << "Producto: " << producto << endl;
	cout << endl;
	cout << "A = " << (3!=4-1) << endl;
	
	system("pause");
	return 0;
		
}
