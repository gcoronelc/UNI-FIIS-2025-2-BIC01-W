#include <iostream>
using namespace std;

int main()
{
 
    int nota_promedio, numerador, denominador, residuo;

    numerador = 83; denominador = 7;

    nota_promedio = numerador / denominador ;

    residuo = numerador % denominador ;

    if ( residuo * 2 >= denominador ) {
        nota_promedio = nota_promedio + 1 ;
    }

    // Resultado
    cout << nota_promedio;

    return 0;
}