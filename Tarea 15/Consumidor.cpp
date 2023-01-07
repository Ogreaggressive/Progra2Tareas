#include "Consumidor.h"

Consumidor::Consumidor()
{

}

Consumidor::~Consumidor()
{

}

void Consumidor::mostrar()
{
	cout << "-----------------------" << endl;
}

void Consumidor::mostrar(Consumidor* p1)
{
	p1->mostrar();
}

void Consumidor::agregarProducto(Producto* p1)
{

}

void Consumidor::procesar()
{
	int cont = 0;
	int elemento;
	while (true)
	{
		elemento=ContenedorDeDatos::getInst().quitarElemento();
		cout << "consumidor obtiene: " << elemento<< endl;
		this_thread::sleep_for(chrono::milliseconds(200));
	}
}
