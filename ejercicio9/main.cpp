#include "Ufunciones.h"

int main() {
Ttiempo segundos, h,m,s;

segundos = LeeDato();
Convertir(segundos,h,m,s);
cout << "\nEquivalen a: \n";
cout << "Horas: "<<h<<"\n";
cout << "Minutos: "<<m<<"\n";
cout << "Segundos: "<<s;


    return 0;
}
