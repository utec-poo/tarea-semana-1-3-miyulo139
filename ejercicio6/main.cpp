#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {
    enteros num=0, dig=0, pares=0, impares=0;
    do{
        cout << "Introduzca número: ";
        cin >>num;
    }
    while (num<100);

    for (int i=0; num>0; i++){
        if ((num%10)%2==0)
            pares++;
        else
            impares++;
        num/=10;
        dig++;
    }


    cout <<"Cantidad de dígitos: "<< dig<< "\n";
    cout <<"Cantidad de dígitos pares: "<< pares<< "\n";
    cout <<"Cantidad de dígitos impares: "<< impares<< "\n";

    return 0;
}
