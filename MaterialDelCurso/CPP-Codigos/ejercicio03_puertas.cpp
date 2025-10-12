#include <iostream>
using namespace std;

int main(){

    int montobase = 20;
    float cnt_llamNacional, cnt_llamExtranjero, cnt_msg, montoNac, montoExt, montomsg, montototal;

    cout<<"Inserta el numero total de segundos en llamadas nacionales mensuales: ";
    cin>>cnt_llamNacional;
    cout<<"Inserta el numero total de segundos en llamadas extranjeras mensuales: ";
    cin>>cnt_llamExtranjero;
    cout<<"Inserta el numero total de mensajes enviados por mes: ";
    cin>>cnt_msg;
    
    montoNac = cnt_llamNacional*0.05;
    montoExt = cnt_llamExtranjero*0.5;
    montomsg = cnt_msg*0.05;
    montototal = montoExt + montomsg + montoNac + montobase;
    
    cout<<"El monto de llamadas nacionales es: "<<montoNac<<endl;
    cout<<"El monto de llamadas extranjeras es: "<<montoExt<<endl;
    cout<<"El monto de mensajes es: "<<montomsg<<endl;
    cout<<"El monto total es: "<<montototal<<endl;
    return 0;
}