#ifndef FECHA_H
#define FECHA_H


class Fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        void SetDia( int d );
        void SetMes ( int m );
        void SetAnio ( int a);
        int getDia();
        int getMes();
        int getAnio();
        void Cargar();
        void Mostrar();
        Fecha();
};


#endif // FECHA_H
