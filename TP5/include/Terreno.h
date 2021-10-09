#ifndef TERRENO_H
#define TERRENO_H
#include "Inmobiliaria.h"

class Terreno:public Inmobiliaria{
    private:
        char _mejoras;
    public:
        Terreno();
        void SetMejoras(char mejoras);
        char GetMejoras();
        void Cargar();
        void Mostrar();

};

#endif // TERRENO_H
