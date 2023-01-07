#include "Producto.h"

Producto::Producto(string nombre, int cant)
{
	this->nombre = nombre;
	this->cant = cant;
}

Producto::~Producto()
{

}

string Producto::getNombre()
{
	return nombre;
}

int Producto::getCant()
{
	return cant;
}

void Producto::cambiarCant(int valor)
{
	cant = cant - valor;
}

void Producto::mostrar()
{
	cout << "producto: " << nombre << " cantidad:" << cant << endl;
}

void Producto::mostrar(Producto* p1)
{
	p1->mostrar();
}