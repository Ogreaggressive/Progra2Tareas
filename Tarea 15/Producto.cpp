#include "Producto.h"

Producto::Producto(string nombre)
{
	this->nombre = nombre;
}

Producto::~Producto()
{

}

void Producto::mostrar()
{
	cout<<nombre;
}

void Producto::mostrar(Producto* p1)
{
	p1->mostrar();
}