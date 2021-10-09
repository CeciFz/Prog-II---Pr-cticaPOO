#include<iostream>
using namespace std;
#include<clocale>
#include "Domicilio.h"

Domicilio::Domicilio(){
    _calle = "no informado";
    _numero = 0;
    _codPostal = "n/a";
    _localidad = "no informado";
    _piso = 0;

}

void Domicilio::SetCalle(string calle){
    _calle = calle;
}

void Domicilio::SetNumero(int numero){
    _numero = numero;
}

void Domicilio::SetCodPostal(string codPostal){
    _codPostal = codPostal;
}

void Domicilio::SetLocalidad(string localidad){
    _localidad = localidad;
}

void Domicilio::SetPiso(int piso){
    _piso = piso;
}

string Domicilio::GetCalle(){
    return _calle;
}

int Domicilio::GetNumero(){
    return _numero;
}

string Domicilio::GetCodPostal(){
    return _codPostal;
}

string Domicilio::GetLocalidad(){
    return _localidad;
}

int Domicilio::GetPiso(){
    return _piso;
}

void Domicilio::Cargar(){
    cout << "Calle: ";
    cin >> _calle;
    cout << "N�mero: ";
    cin >> _numero;
    cout << "C�digo Postal: ";
    cin >> _codPostal;
    cout << "Localidad: ";
    cin >> _localidad;
    cout << "Piso: ";
    cin >> _piso;
}

void Domicilio::Mostrar(){
    cout << "Calle: " << _calle << endl;
    cout << "N�mero: " << _numero << endl;
    cout << "C�digo Postal: " << _codPostal << endl;
    cout << "Localidad: " << _localidad << endl;
    cout << "Piso: " << _piso << endl;
}
