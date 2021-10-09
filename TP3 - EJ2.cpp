#include<iostream>
using namespace std;
#include<clocale>
#include<cstring>

class Fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        void SetDia( int d ) { dia = d; }
        void SetMes ( int m ) { mes = m; }
        void SetAnio ( int a) { anio = a; }
        int getDia() { return dia; }
        int getMes() { return mes; }
        int getAnio() { return anio; }
        void Cargar() {
            cout << "DIA: ";
            cin >> dia;
            cout << "MES: ";
            cin >> mes;
            cout << "ANIO: ";
            cin >> anio;
        }
        void Mostrar(){
            cout << dia << " / " << mes << " / " << anio << endl;
        }
        Fecha(){
            dia = 1;
            mes = 1;
            anio = 0000;
        }
};


class Investigadores{
    private:
        int DNI;
        char nombre[30];
        char apellido[30];
        Fecha fechaNac;
        int unidAcad;       // (entre 1 y 30)
        int categoria;         // (entre 1 a 5)
        int especialidad;       // (entre 1 a 10)

    public:
        void SetDNI(int doc) { DNI = doc;}
        void SetNombre(const char *nom) { strcpy(nombre,nom);}
        void SetApellido(const char *ap){ strcpy(apellido,ap);}
        void SetFechaNac(Fecha f){ f.Cargar();}
        int GetDNI() { return DNI; }
        const char *GetNombre(){ return nombre; }
        const char *GetApellido(){ return apellido; }
        Fecha GetFechaNac(){ return fechaNac; }
        void Cargar() {
            cout << "DNI: ";
            cin >> DNI;
            cout << "Nombre: ";
            cin.ignore();
            cin.getline(nombre,29);
            cout << "Apellido: ";
            cin.getline(apellido,29);
            cout << "Fecha de nacimiento: " << endl;
            fechaNac.Cargar();
            cout << "Unidad académica: ";
            cin >> unidAcad;
            cout << "Categoría: ";
            cin >> categoria;
            cout << "Especialidad: ";
            cin >> especialidad;
        }
        void Mostrar() {
            cout << "DNI: " << DNI << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Apellido: " << apellido << endl;
            cout << "Fecha de nacimiento: ";
            fechaNac.Mostrar();
            cout << "Unidad académica: " << unidAcad << endl;
            cout << "Categoría: " << categoria << endl;
            cout << "Especialidad: " << especialidad << endl;
        }
        //CONTRUCTOR:
        Investigadores(){
            DNI = 0;
            strcpy(nombre,"no informado");
            strcpy(apellido,"no informado");
            unidAcad = 0;
            categoria = 0;
            especialidad = 0;
        }
};




int main(void){
setlocale(LC_ALL, "Spanish");

    Investigadores obj;

    obj.Mostrar();
    cout << endl << endl;
    obj.Cargar();
    cout << endl << endl;
    obj.Mostrar();

	cout << endl;
	return 0;
}
