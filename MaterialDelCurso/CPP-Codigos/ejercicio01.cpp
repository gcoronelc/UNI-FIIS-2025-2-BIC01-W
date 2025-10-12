#include <iostream>
using namespace std;

int main()
{
    //declaramos las variables de ENRADA
    float grados_c;
    float grados_f;

    //Solicitamos datos de ingreso
    cout<<"Ingrese los grados centigrados: "; 
    cin >> grados_c;
    //grados_c = 35.3;

    //PROCESO
    grados_f = 32 + ( 9 * grados_c / 5);

    //Mostramos los resultados
    cout << "Grados C: " << grados_c ;
    cout << " equivale a: ";
    cout << grados_f << " Grados F." ;
    return 0;
}
