#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {
    enteros num=0;
    do{
        cout << "Introduzca número: ";
        cin >>num;
    }
    while (num<10 or num>30);

    for (int i=0; i<num; i++)
        cout<<"*";

    return 0;
}
