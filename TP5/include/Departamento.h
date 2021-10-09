#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include "Casa.h"

class Departamento:public Casa{
    protected:
        string _instComplementarias; // (pileta, quincho, etc)
    public:
        Departamento();
        void SetInstComplementarias(string instComplementarias);
        string GetInstComplementarias();
        void Cargar();
        void Mostrar();

};

#endif // DEPARTAMENTO_H
