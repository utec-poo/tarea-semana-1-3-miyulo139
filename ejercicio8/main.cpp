#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {
    enteros num=0;
    do{
        cout<<"Ingrese un número entre 1 y 30:  \n";
        cin >>num;
    }
    while (num<1 or num>30);

    for (enteros i=0; i<num; i++){
        cout<<"*";
        for (enteros j=1; j<num; j++){
            if (i==j and i!=num-1)
                cout<<" *";
            else if (i!=j and i!=num-1)
                cout<<"  ";
            else if (i==num-1)
                cout<<" *";
        }
        cout<<"\n";

    }

    return 0;
}
