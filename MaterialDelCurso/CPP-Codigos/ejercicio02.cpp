#include <iostream>
using namespace std;

int main()
{
    //declaramos las variables de ENRADA
    float monto_bruto;
    float descuento;
    float monto_neto;

    cout << "Ingrese monto de la venta:" ;
    cin >> monto_bruto;
    //monto_bruto = 5600;

    //PROCESO
    if (monto_bruto > 1500) {
        descuento = monto_bruto * 0.20 ;
    } else {
        descuento = 0 ;
    }

    monto_neto = monto_bruto - descuento;

    //Mostramos los resultados
    cout << "Descuento: " << descuento << "\n";
    cout << "Monto a pagar: " << monto_neto;
    return 0;
}