#include <iostream>
#include "Tipos.h"

using namespace std;

int main() {

    enteros numero;
    caracter crt;
    string color;

    cout << "ingrese el caracter:";
    cin >> crt;
    cout << "\ningrese el numero:";
    cin >> numero;

    if (crt == 'a' or 'c' or 'e' or 'g') {
        if (numero % 2 == 1)
            color = "black";
        else
            color = "white";
    }
    else {
        if (numero % 2 == 0)
        color = "black";
        else
        color = "white";
    }

cout <<"Corresponde a un casillero de color"<< color;
    return 0;
}
