#include<iostream>
using namespace std;
#include<clocale>
#include "Fecha.h"
#include "Domicilio.h"
#include "Inmobiliaria.h"

Inmobiliaria::Inmobiliaria(){
    _supTotal = 0;
    _tipoOperacion = 0;
}

void Inmobiliaria::SetSupTotal(float supTotal){
    _supTotal = supTotal;
}

void Inmobiliaria::SetTipoOperacion(int tipoOperacion){
    _tipoOperacion = tipoOperacion;
}

float Inmobiliaria::getSupTotal(){
    return _supTotal;
}

int Inmobiliaria::GetTipoOperacion(){
    return _tipoOperacion;
}

void Inmobiliaria::Cargar(){
    cout << "Dirección: " << endl;
    _direccion.Cargar();
    cout << "Fecha de ingreso: " << endl;
    _fechaIngreso.Cargar();
    cout << "Fecha de operación: " << endl;
    _fechaOperacion.Cargar();
    cout << "Superficie total (m2): ";
    cin >> _supTotal;
    cout << "Tipo de operación (1: venta; 2: alquiler): ";
    cin >> _tipoOperacion;
}

void Inmobiliaria::Mostrar(){
    cout << "Dirección: " << endl;
    _direccion.Mostrar();
    cout << "Fecha de ingreso: ";
    _fechaIngreso.Mostrar();
    cout << "Fecha de operación: ";
    _fechaOperacion.Mostrar();
    cout << "Superficie total (m2): " << _supTotal << endl;
    cout << "Tipo de operación (1: venta; 2: alquiler): " << _tipoOperacion << endl;
}
