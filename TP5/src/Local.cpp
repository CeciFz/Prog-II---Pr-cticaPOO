#include<iostream>
using namespace std;
#include "Fecha.h"
#include "Domicilio.h"
#include "Local.h"

Local::Local(){
    _zona = 0;
}

void Local::SetZona(int zona){
    _zona = zona;
}

int Local::GetZona(){
    return _zona;
}

void Local::Cargar(){
    Inmobiliaria::Cargar();
    cout << "Zona (1: comercial; 2 mixta; 3 industrial): ";
    cin>> _zona;
}

void Local::Mostrar(){
    Inmobiliaria::Mostrar();
    switch(_zona){
        case 1:
            cout << "Zona comercial" << endl;
            break;
        case 2:
            cout << "Zona mixta" << endl;
            break;
        case 3:
            cout << "Zona industrial" << endl;
            break;
        case 0:
            cout << "Zona industrial: No informada" << endl;
            break;
        default:
            cout << "Zona industrial: No identificada" << endl;
            break;
    }
}
