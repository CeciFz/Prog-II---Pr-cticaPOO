#include<iostream>
using namespace std;
#include<clocale>
#include<cstring>


class Empleados{
    private:
        int DNI;
        char nombre[30];
        char apellido[30];
        char domicilio[30];
        char email[30];
        int dia;
        int mes;
        int anio;
        int cargo;

    public:
        void SetDNI(int doc) { DNI = doc;}
        void SetNombre(const char *nom) { strcpy(nombre,nom);}
        void SetApellido(const char *ap){ strcpy(apellido,ap);}
        void SetDomicilio(const char *dom){ strcpy(domicilio,dom);}
        void SetEmail(const char *mail){ strcpy(email,mail);}
        void SetFechaDeNac(int d, int m, int a){ dia = d , mes = m , anio = a;}
        void SetCargo(int c){ cargo = c;}
        int GetDNI() { return DNI; }
        const char *GetNombre(){ return nombre; }
        const char *GetApellido(){ return apellido; }
        const char *GetDomicilio(){ return domicilio; }
        const char *GetEmail(){ return email; }
        int GetFechaDeNac(){ cout << dia << "/" << mes << "/" << anio << endl; return 0; }
        int GetCargo(){ return cargo; }
        void Mostrar() {
            cout << "DNI: " << DNI << endl;
            cout << "Apellido: " << apellido << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Domicilio: " << domicilio << endl;
        }
        /*
        // CONSTRUCTORES:
        // OPCION 1: CONTRUCTOR QUE NACE CON VALORES POR DEFAULT. NO LE PASO NADA ( Ej. main --> Empleados obj;)
        Empleados(){
            DNI = 00000000;
            strcpy(nombre,"Cecilia");
            strcpy(apellido,"Fernandez");
            strcpy(domicilio,"El Zorzal 2665");
        }

        // OPCION 2: CONTRUCTOR AL QUE SE LE PUEDE PASAR ESTOS VALORES. SI O SI LE TENGO QUE PASAR TODOS.
        // (Ej. main --> Empleados reg(1,"ce","fer","zorzal"); )
        Empleados( int dni, const char *n, const char *a, const char *d){
            DNI = dni;
            strcpy(nombre,n);
            strcpy(apellido,a);
            strcpy(domicilio,d);
        }*/

        // OPCION 3: CONTRUCTOR CON VALORES POR OMISIÓN. LE PUEDO PASAR TODOS O ALGUNO DE ELLOS, SIEMPRE QUE SEA EN ORDEN
        // (ES DECIR, NO PUEDO SALTEARME UNO). // (Ej. main --> Empleados reg(1,"ce"); )
        Empleados( int dni = 0, const char *n = "Ceci", const char *a = "no informado", const char *d = "no informado"){
            DNI = dni;
            strcpy(nombre,n);
            strcpy(apellido,a);
            strcpy(domicilio,d);
        }
/*
         ESTO ESTÁ MAL: SI HAGO ASÍ SOLO ME TOMA LOS VALORES DENTRO DE LAS {} AUNQUE EN EL MAIN LE PASE OTROS ENTRE LOS ()
        Empleados( const char *n, const char *a, const char *d){
            DNI = 00000000;
            strcpy(nombre,"Cecilia");
            strcpy(apellido,"Fernandez");
            strcpy(domicilio,"El Zorzal 2665");
        }*/



};

int main(void){
setlocale(LC_ALL, "Spanish");

    Empleados obj,reg(333,"c","f","ddd");

    obj.Mostrar();
    cout << endl << endl;
    reg.Mostrar();

    /*
    cout << endl << endl;
    cout << "DNI: " << obj.GetDNI() << endl;
    cout << "Apellido: " << obj.GetApellido() << endl;
    cout << "Nombre: " << obj.GetNombre() << endl;
    cout << "Domicilio: " << obj.GetDomicilio() << endl;
    */


	cout << endl;
	return 0;
}
