#ifndef LOCAL_H
#define LOCAL_H
#include "Inmobiliaria.h"

class Local:public Inmobiliaria{
    private:
        int _zona;  // Local
    public:
        Local();
        void SetZona(int zona);
        int GetZona();
        void Cargar();
        void Mostrar();

};
#endif // LOCAL_H
