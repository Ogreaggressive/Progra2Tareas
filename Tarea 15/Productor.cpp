#include "Productor.h"

Productor::Productor()
{

}

Productor::~Productor()
{

}

void Productor::mostrar()
{
	cout <<"---------------"<<endl;
}

void Productor::mostrar(Productor* p1)
{
	p1->mostrar();
}

void Productor::agregarProducto(Producto* p1)
{

}

void Productor::procesar()
{
	
	int cont = 0;
	while (true)
	{
		ContenedorDeDatos::getInst().cambiarContador(cont);
		cout << "productor inserta: " << cont << endl;
		this_thread::sleep_for(chrono::milliseconds(200));
		cont++;
	}
}