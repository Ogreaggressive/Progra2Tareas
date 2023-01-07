#include "Cliente.h"

Cliente::Cliente(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Cliente::Cliente(int ci)
{
	this->ci = ci;
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
	//cout << "Cliente:" << endl;
	cout << "Ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
}


void Cliente::mostrar(Cliente* Cliente)
{
	Cliente->mostrar();
}

bool Cliente::operator==(Cliente* Cliente)
{
	if (ci == Cliente->ci)
	{
		return true;
	}
	return false;
}

bool Cliente::compCiAsc(Cliente* p1, Cliente* p2)
{
	return p1->ci > p2->ci;
}

bool Cliente::compNomAsc(Cliente* p1, Cliente* p2)
{
	return p1->nombre > p2->nombre;
}

