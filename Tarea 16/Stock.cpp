#include "Stock.h"

Stock::Stock()
{

}

Stock::~Stock()
{

}

void Stock::cambiarContador(int valor)
{
	m.lock();
	//
	m.unlock();
}

Stock& Stock::getInst()
{
	static Stock i;
	return i;
}


void Stock::quitarStock(Venta* v1)
{
    m.lock();
    Nodo<Producto>* aux = productos.getPrimer();
    while (aux->getDato()->getNombre()!=v1->getNombre())
    {
        aux = aux->getSiguiente();
    }
    aux->getDato()->cambiarCant(v1->getCant());
    m.unlock();
    cout << "quedan un total de:" << aux->getDato()->getCant() << " unidades de " << aux->getDato()->getNombre() << endl;
}

void Stock::cargarDeArchivo()
{
    fstream archEntrada;
    char nombre[20];
    int cantidad;
    archEntrada.open("StockInicial.txt");

    if (!archEntrada.is_open())
    {
        cout << "no pudo abrir el archivo"; return;
    }

    while (!archEntrada.eof() && archEntrada >> nombre >> cantidad) {
        //cout << nombre<<" "<<cantidad <<endl;
        productos.registrar(new Producto(nombre, cantidad));
    }

    archEntrada.close();
}

void Stock::stockFinal()
{
    productos.mostrar(Producto::mostrar);
}