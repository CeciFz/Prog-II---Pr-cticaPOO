#ifndef INMOBILIARIA_H
#define INMOBILIARIA_H

class Inmobiliaria
{
    protected:
        Domicilio _direccion;  //calle, número, código postal, localidad, piso, etc.
        Fecha _fechaIngreso;
        Fecha _fechaOperacion;
        float _supTotal;
        int _tipoOperacion; // (1: venta; 2: alquiler)

    public:
        Inmobiliaria();
        void SetSupTotal(float supTotal);
        void SetTipoOperacion(int tipoOperacion);
        float getSupTotal();
        int GetTipoOperacion();
        void Cargar();
        void Mostrar();
};

#endif // INMOBILIARIA_H
