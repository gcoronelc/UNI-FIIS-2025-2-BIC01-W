#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main(){
	// Variables
	int num1, num2, num3;
	int mayor, menor, medio;
	//Datos
	srand(time(NULL));
	num1 = rand() % 100 + 1;
	num2 = rand() % 100 + 1;
	num3 = rand() % 100 + 1;
	// Proceso
	// El mayor
	mayor = num1;
	if (mayor < num2) mayor = num2;
	if (mayor < num3) mayor = num3;
	// El Menor
	menor = num1;
	if (menor > num2) menor = num2;
	if (menor > num3) menor = num3;
	// El del medio
	medio = (num1 + num2 + num3) - (mayor + menor);
	// Reporte
	cout << "Numeros generados" << endl;
	cout << num1 << " " << num2 << " " << num3 << endl;
	cout << "En orden de mayor a menor" << endl;
	cout << mayor << " " << medio << " " << menor << endl;
	return 0;
}
