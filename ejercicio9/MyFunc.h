#ifndef PRO_MYFUNC_H
#define PRO_MYFUNC_H

#include <iostream>
using namespace std;

typedef long int Ttiempo;
Ttiempo LeeDato();

void Convertir(Ttiempo segundos, Ttiempo &horas, Ttiempo &minutos, Ttiempo &segundos);

#endif //PRO_MYFUNC_H
