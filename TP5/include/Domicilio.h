#ifndef DOMICILIO_H
#define DOMICILIO_H


class Domicilio  // //calle, número, código postal, localidad, piso, etc.
{
    private:
        string _calle;
        int _numero;
        string _codPostal;
        string _localidad;
        int _piso;
    public:
        Domicilio();
        void SetCalle(string calle);
        void SetNumero(int numero);
        void SetCodPostal(string codPostal);
        void SetLocalidad(string localidad);
        void SetPiso(int piso);
        string GetCalle();
        int GetNumero();
        string GetCodPostal();
        string GetLocalidad();
        int GetPiso();
        void Cargar();
        void Mostrar();
};

#endif // DOMICILIO_H
