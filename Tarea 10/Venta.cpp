#include "Venta.h"

Venta::Venta(Persona* comprador, Obra* obra,int fecha, int precio)
{
	this->comprador = comprador;
	this->obra = obra;
	this->fecha = fecha;
	this->precio = precio;
}

Venta::~Venta()
{

}

int Venta::getFecha()
{
	return fecha;
}

string Venta::getObra()
{
	return obra->getTipo();
}

int Venta::getPrecio()
{
	return precio;
}

void Venta::mostrar()
{
	//cout << "Venta:" << endl;
	cout << "fecha: " << fecha << endl;
	cout << "precio: " << precio << endl;
	cout << "comprador es: " << endl;
	comprador->mostrar();
	cout << "obra vendida es: " << endl;
	obra->mostrar();
}


void Venta::mostrar(Venta* venta)
{
	venta->mostrar();
}

bool Venta::operator==(Venta* venta)
{
	if (fecha == venta->fecha)
	{
		return true;
	}
	return false;
}

bool Venta::compFechaAsc(Venta* p1, Venta* p2)
{
	return p1->fecha > p2->fecha;
}


