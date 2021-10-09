#include<iostream>
using namespace std;
#include<clocale>
#include<cstring>
#include "Fecha.h"
#include "Domicilio.h"
#include "Inmobiliaria.h"

int main(){
setlocale(LC_ALL, "Spanish");

    Inmobiliaria obj;
    /*Fecha f;
    Domicilio d;

    f.Mostrar();
    cout  << endl << endl;
    d.Mostrar();
    cout  << endl << endl;
    cout  << endl << endl;*/
    obj.Mostrar();
    cout  << endl << endl;
    obj.Cargar();
    cout  << endl << endl;
    obj.Mostrar();
    cout  << endl << endl;



    cout  << endl;
    return 0;
}
