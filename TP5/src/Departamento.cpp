#include<iostream>
using namespace std;
#include "Fecha.h"
#include "Domicilio.h"
#include "Departamento.h"

Departamento::Departamento()
{
    _instComplementarias = "NO";
}

void Departamento::SetInstComplementarias(string instComplementarias){
    _instComplementarias = instComplementarias;
}

string Departamento::GetInstComplementarias(){
    return _instComplementarias;
}

void Departamento::Cargar(){
    Casa::Cargar();
    cout << "Instalaciones complementarias (Pileta, quincho, etc.): ";
    cin>> _instComplementarias;
}

void Departamento::Mostrar(){
    Casa::Mostrar();
    cout << "Instalaciones complementarias: " << _instComplementarias << endl;
}
