#include<iostream>
using namespace std;
#include<clocale>
#include<cstring>
#include "Fecha.h"
#include "Domicilio.h"
#include "Inmobiliaria.h"
#include "Terreno.h"
#include "Local.h"
#include "Casa.h"
#include "Departamento.h"

int main(){
setlocale(LC_ALL, "Spanish");

    Terreno obj;

    obj.Mostrar();
    cout  << endl << endl;
    obj.Cargar();
    cout  << endl << endl;
    obj.Mostrar();
    cout  << endl << endl;



    cout  << endl;
    return 0;
}
