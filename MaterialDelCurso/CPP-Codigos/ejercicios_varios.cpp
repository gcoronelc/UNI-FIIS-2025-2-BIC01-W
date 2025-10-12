#include <iostream>
using namespace std;

int main()
{
 
    float nota_promedio_float;
    int nota_promedio_int;

    nota_promedio_float = 15.58963;

    // conversion de tipo de datos
    // operación de cast (conversión de datos), int descarta toda la parte fraccionaria, es decir, truncar
    nota_promedio_int = (int) ( nota_promedio_float + 0.5 );

    // Resultado
    cout << nota_promedio_int;

    return 0;
}