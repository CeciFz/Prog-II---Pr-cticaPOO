#ifndef CASA_H
#define CASA_H
#include "Inmobiliaria.h"

class Casa:public Inmobiliaria{
    protected:
        int _cantAmbientes;
        float _supConstruida;
    public:
        Casa();
        void SetCanAmbientes(int cantAmbientes);
        void SetSupConstruida(float supConstruida);
        int GetCanAmbientes();
        float GetSupConstruida();
        void Cargar();
        void Mostrar();

};

#endif // CASA_H
