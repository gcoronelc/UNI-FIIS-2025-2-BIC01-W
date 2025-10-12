#include <iostream>
using namespace std;

int main() 
{
    int nro_horas_trabajadas;
    int salario;

    cout << "Ingrese el número de horas laboradas: ";
    cin >> nro_horas_trabajadas;
    
    if ( nro_horas_trabajadas <= 40){
        salario = nro_horas_trabajadas * 50 ;
    
    } else{

        salario = 40 * 50 + 70 * ( nro_horas_trabajadas - 40) ;
    
    }
    
    cout << "El salario es de: " << salario;
    
    return 0;
}