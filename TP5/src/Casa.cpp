#include<iostream>
using namespace std;
#include "Fecha.h"
#include "Domicilio.h"
#include "Casa.h"

Casa::Casa(){
    _cantAmbientes = 0;
    _supConstruida = 0;
}

void Casa::SetCanAmbientes(int cantAmbientes){
    _cantAmbientes = cantAmbientes;
}

void Casa::SetSupConstruida(float supConstruida){
    _supConstruida = supConstruida;
}

int Casa::GetCanAmbientes(){
    return _cantAmbientes;
}

float Casa::GetSupConstruida(){
    return _supConstruida;
}

void Casa::Cargar(){
    Inmobiliaria::Cargar();
    cout << "Cantidad de ambientes: ";
    cin>> _cantAmbientes;
    cout << "Superficie construida: ";
    cin>> _supConstruida;
}

void Casa::Mostrar(){
    Inmobiliaria::Mostrar();
    cout << "Cantidad de ambientes: " << _cantAmbientes << endl;
    cout << "Superficie construida: " << _supConstruida << endl;
}




