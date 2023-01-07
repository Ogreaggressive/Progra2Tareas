#include "ListaVentas.h"

ListaVentas::ListaVentas()
{
    cont = 0;
}

ListaVentas::~ListaVentas()
{

}

ListaVentas& ListaVentas::getInst()
{
    static ListaVentas i;
    return i;
}

void ListaVentas::CargarDeArchivo()
{
    fstream archEntrada;
    char nombre[20];
    int cantidad;
    float precio;
    archEntrada.open("VentasAleatorias.txt");

    if (!archEntrada.is_open())
    {
        cout << "no pudo abrir el archivo"; return;
    }

    while (!archEntrada.eof() && archEntrada>>nombre>>cantidad>>precio) {
        //cout << nombre<<" "<<cantidad <<" "<<precio<<endl;
        ventas.registrar(new Venta(nombre,cantidad,precio));
        cont += 1;
    }

    archEntrada.close();
}

void ListaVentas::mostrarVentas()
{
    ventas.mostrar(Venta::mostrar);
}


Venta* ListaVentas::conseguirVenta(int cont)
{
    m.lock();
    Nodo<Venta>* aux = ventas.getPrimer();
    for (int i = 0; i < cont; i++)
    {
        aux = aux->getSiguiente();
    }
    m.unlock();
    return aux->getDato();
}

int ListaVentas::getTam()
{
    return cont;
}
