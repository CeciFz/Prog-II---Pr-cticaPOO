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
    cout << "Direcci�n: " << endl;
    _direccion.Cargar();
    cout << "Fecha de ingreso: " << endl;
    _fechaIngreso.Cargar();
    cout << "Fecha de operaci�n: " << endl;
    _fechaOperacion.Cargar();
    cout << "Superficie total (m2): ";
    cin >> _supTotal;
    cout << "Tipo de operaci�n (1: venta; 2: alquiler): ";
    cin >> _tipoOperacion;
}

void Inmobiliaria::Mostrar(){
    cout << "Direcci�n: " << endl;
    _direccion.Mostrar();
    cout << "Fecha de ingreso: ";
    _fechaIngreso.Mostrar();
    cout << "Fecha de operaci�n: ";
    _fechaOperacion.Mostrar();
    cout << "Superficie total (m2): " << _supTotal << endl;
    cout << "Tipo de operaci�n (1: venta; 2: alquiler): " << _tipoOperacion << endl;
}
