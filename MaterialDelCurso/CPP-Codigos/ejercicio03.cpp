#include <iostream>
using namespace std;

int main()
{
    //declaramos las variables de ENRADA
    char nombre_curso[30];
    float nota_a, nota_b, nota_c;
    float peso_a = 3, peso_b = 3, peso_c = 4;
    float suma_pesos, suma_ponderada, promedio;

    //Solicitamos datos de ingreso
    cout<<"Ingrese Nombre Curso:"; cin >> nombre_curso;
    cout<<"Ingrese Nota A:"; cin >> nota_a;
    cout<<"Ingrese Nota B:"; cin >> nota_b;
    cout<<"Ingrese Nota C:"; cin >> nota_c;
    
    //PROCESO
    suma_ponderada = nota_a * peso_a + nota_b * peso_b + nota_c * peso_c;
    suma_pesos = peso_a + peso_b + peso_c;
    promedio = suma_ponderada / suma_pesos;

    //Mostramos los resultados
    cout << "Curso: " << nombre_curso << "\n";
    cout << "Nota Promedio: " << promedio ;
    return 0;
}
