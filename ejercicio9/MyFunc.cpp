#include "MyFunc.h"

Ttiempo LeeDato()
{
    Ttiempo num;
    do{
        cout<<"Ingrese un número mayor a 0: ";
        cin >> num;

    }while(num<=0);

    return num;

}

void Convertir(Ttiempo segundos, Ttiempo &hh, Ttiempo &mm, Ttiempo &ss)
{
    hh = segundos/3600;
    segundos %= 3600;
    mm = segundos/60;
    ss = segundos%60;
}
