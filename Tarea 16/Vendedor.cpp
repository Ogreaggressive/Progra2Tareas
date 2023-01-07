#include "Vendedor.h"

Vendedor::Vendedor()
{

}

Vendedor::~Vendedor()
{

}

void Vendedor::mostrar()
{
	cout << "---------------" << endl;
}

void Vendedor::mostrar(Vendedor* p1)
{
	p1->mostrar();
}

void Vendedor::agregarVenta(Venta* p1)
{

}

void Vendedor::procesar()
{
	Venta* v1;
	int cont = 0;
	while (cont<ListaVentas::getInst().getTam())
	{
		//cout << "Vendedor consigue: "<< endl;
		v1=ListaVentas::getInst().conseguirVenta(cont);
		RegistroVentas::getInst().aumentarVenta(v1);
		cout << "-------vendedor registro una venta de-------: " << endl;
		v1->mostrar();
		RegistroVentas::getInst().cambiarCont(cont);
		Stock::getInst().quitarStock(v1);
		//cout << "-------quedan en stock un total de:"<< endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
}
