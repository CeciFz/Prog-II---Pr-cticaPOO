#include<iostream>
using namespace std;
#include<clocale>
#include "Fecha.h"


Fecha::Fecha(){
    dia = 1;
    mes = 1;
    anio = 0000;
}

void Fecha::SetDia( int d ) {
     dia = d;
}

void Fecha::SetMes ( int m ) {
    mes = m;
}

void Fecha::SetAnio ( int a) {
    anio = a;
}

int Fecha::getDia() {
    return dia;
}

int Fecha::getMes() {
    return mes;
}

int Fecha::getAnio() {
    return anio;
}

void Fecha::Cargar() {
    cout << "DIA: ";
    cin >> dia;
    cout << "MES: ";
    cin >> mes;
    cout << "ANIO: ";
    cin >> anio;
}

void Fecha::Mostrar(){
    cout << dia << " / " << mes << " / " << anio << endl;
}



