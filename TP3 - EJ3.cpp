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


class Compras{
    private:
        int nroCompra;
        Fecha fechacompra;
        char nombreProducto[30];
        int tipoProducto;       // (entre 1 y 15)
        int formaPago;         // (entre 1 a 5)
        int cantidad;
        float importeTotal;

    public:
        void SetNroCompra( int nro ){ nroCompra = nro;}
        void SetFechacompra (Fecha f){ fechacompra = f;}
        void SetNombreProducto(const char *nombre){ strcpy(nombreProducto,nombre);}
        void SetTipoProducto(int tipo){ tipoProducto = tipo;}
        void SetFormaPago( int fp ) { formaPago = fp;}
        void SetCantidad ( int cant ) { cantidad = cant;}
        void SetImporteTotal( float imp ){ importeTotal = imp;}
        int GetNroCompra(){ return nroCompra;}
        Fecha GetFechacompra() { return fechacompra;}
        const char *GetNombreProducto() { return nombreProducto; }
        int GetTipoProducto(){ return tipoProducto;}
        int GetFormaPago(){ return formaPago;}
        int GetCantidad(){ return cantidad;}
        float GetImporteTotal(){ return importeTotal;}
        void Cargar(){
            cout << "Número de compra: ";
            cin >> nroCompra;
            cout << "Fecha de compra: " << endl;
            fechacompra.Cargar();
            cout << "Nombre del producto: ";
            cin.ignore();
            cin.getline(nombreProducto,29);
            cout << "Tipo producto: ";
            cin >> tipoProducto;
            cout << "Forma de pago: ";
            cin >> formaPago;
            cout << "Cantidad: ";
            cin >> cantidad;
            cout << "Importe total: ";
            cin >> importeTotal;
        }
        void Mostrar(){
            cout << "Número de compra: " << nroCompra << endl;
            cout << "Fecha de compra: ";
            fechacompra.Mostrar();;
            cout << "Nombre del producto: " << nombreProducto << endl;
            cout << "Tipo producto: " << tipoProducto << endl;
            cout << "Forma de pago: " << formaPago << endl;
            cout << "Cantidad: " << cantidad << endl;
            cout << "Importe total: " << importeTotal << endl << endl;
        }
        // CONSTRUCTOR
        Compras( int nro = 0, /*Fecha f,*/ const char *nombre = "nombre", int tipo = 0, int fp = 0, int cant = 0, int imp = 0){
            nroCompra = nro;
            //fechacompra = f;
            strcpy(nombreProducto,nombre);
            tipoProducto = tipo;
            formaPago = fp;
            cantidad = cant;
            importeTotal = imp;
        }


};

int main(void){
setlocale(LC_ALL, "Spanish");

    Compras obj;

    obj.Mostrar();
    cout << endl << endl;
    obj.Cargar();
    cout << endl << endl;
    obj.Mostrar();
    cout << endl << endl;



	cout << endl;
	return 0;
}
