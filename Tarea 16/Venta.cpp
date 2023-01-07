#include "Venta.h"

Venta::Venta(string nombre, int cant, float precio)
{
	this->nombre = nombre;
	this->cant = cant;
	this->precio = precio;
}

Venta::~Venta()
{

}

void Venta::mostrar()
{
	cout << "nombre: " << nombre << endl;
	cout << "cantidad: " << cant << endl;
	cout << "precio: " << precio << endl;
}

void Venta::mostrar(Venta* v1)
{
	v1->mostrar();
}

string Venta::getNombre()
{
	return nombre;
}

int Venta::getCant()
{
	return cant;
}

float Venta::getPrecio()
{
	return precio;
}