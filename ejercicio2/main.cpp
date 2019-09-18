#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {
    string zona, claro;
    enteros precio=0;
    cout << "Ingrese zona: ";
    cin >> zona;
    cout << "¿Es usted cliente Claro?: ";
    cin >> claro;

    if (zona== "Super Vip")
        precio=212;
    else if (zona== "Vip")
        precio=170;
    else if (zona== "Preferencial")
        precio=136;
    else if (zona== "General")
        precio=59;

    if (claro=="sí")
        precio=precio-(precio*20/100);
    cout << "Monto de entrada: " <<precio;


// ToDO

  return 0;
}
