#include<iostream>
using namespace std;
#include<cstring>
#include "Fecha.h"
#include "Domicilio.h"
#include "Terreno.h"

Terreno::Terreno(){
    _mejoras = 'A';
}

void Terreno::SetMejoras(char mejoras){
        _mejoras = toupper(mejoras);
}

char Terreno::GetMejoras(){
    return _mejoras;
}

void Terreno::Cargar(){
    char mejoras;
    Inmobiliaria::Cargar();
    cout << "Mejoras (A: sin mejoras; B: asfalto; C: todos los servicios): ";
    cin >> mejoras;
    SetMejoras(mejoras);
}

void Terreno::Mostrar(){
    Inmobiliaria::Mostrar();
    switch(_mejoras){
        case 'A':
            cout << "Mejoras: Sin Mejoras" << endl;
            break;
        case 'B':
            cout << "Mejoras: Asfalto" << endl;
            break;
        case 'C':
            cout << "Mejoras: Todos los servicios" << endl;
            break;
        default:
            cout << "Mejoras: No identificada" << endl;
            break;
    }
}
