#include "Cliente.h"

Cliente::Cliente(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Cliente::~Cliente()
{

}

int Cliente::getCi()
{
	return ci;
}

string Cliente::getNombre()
{
	return nombre;
}

void Cliente::mostrar()
{
	cout << "Cliente:" << endl;
	cout << "Ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
}

void Cliente::mostrar(Cliente* cliente)
{
	cliente->mostrar();
}


bool Cliente::operator==(Cliente* cliente)
{
	return ci == cliente->ci;
}

bool Cliente::cmpCiAsc(Cliente* c1, Cliente* c2)
{
	return c1->ci > c2->ci;
}

