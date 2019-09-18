#include <iostream>
#include "Tipos.h"
using namespace std;


int main() {
    enteros num=0, pares=0,impares=0,can=0;
    do{
        cout << "Introduzca número: ";
        cin >>num;
        can++;
        if (num%2==0)
            pares++;
        else
            impares++;
    }
    while (num!=0);


    cout <<"Cantidad de números ingresados: "<< can-1<< "\n";
    cout <<"Cantidad de números pares: "<< pares-1<< "\n";
    cout <<"Cantidad de números impares: "<< impares<< "\n";

    return 0;
}
