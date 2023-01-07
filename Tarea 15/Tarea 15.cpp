

#include <iostream>
#include <fstream>
#include <string>

#include <thread>
#include <mutex>

#include "ArrayGenerico.h"
#include "Producto.h"
#include "Productor.h"
#include "Consumidor.h"

#define TAM 100

using namespace std;

mutex m;
int cantidad = 0;

void leerArchivo(string productos[TAM],int &pos)
{
    fstream archEntrada;
    string palabra;
    archEntrada.open("archivo.txt");

    if(!archEntrada.is_open())
    {
        cout << "no pudo abrir el archivo"; return;
    }
    //cout << "el contenido del archivo es:" << endl;
    while (!archEntrada.eof() and archEntrada>>palabra)
    {
        productos[pos]=palabra;
        //cout << palabra <<endl;
        pos++;
    }
    archEntrada.close();
}

void conseguirProductos(ArrayGenerico<Producto>& productos)
{
    fstream archEntrada;
    string palabra;
    archEntrada.open("archivo.txt");

    if (!archEntrada.is_open())
    {
        cout << "no pudo abrir el archivo"; return;
    }
    while (!archEntrada.eof() and archEntrada >> palabra)
    {
        Producto* p1 = new Producto(palabra);
        productos.registrar(p1);
    }
    archEntrada.close();
}

void agarrarProductos(ArrayGenerico<Producto> productos, Productor* productor)
{
    while (cantidad <= productos.getTam())
    {
        m.lock();
        productor->agregarProducto(productos[cantidad]);
        cantidad++;
        m.unlock();
    }
}



void probando()
{
    ArrayGenerico<Producto> productos(100);
}


int main()
{
    /*ArrayGenerico<Producto> productos(100);
    Productor* p1 = new Productor("pablo");
    conseguirProductos(productos);
    agarrarProductos(productos,p1);
    p1->mostrar();*/
    //productos.mostrar(Producto::mostrar);
    Productor p;
    Consumidor c;

    p.iniciar();
    c.iniciar();

    p.join();
    c.join();
    return 0;
}
