#include "Adulto.h"

Adulto::Adulto(int ci, string nombre) : Cliente(ci, nombre)
{

}

Adulto::Adulto(int ci) : Cliente(ci)
{

}

Adulto::~Adulto()
{

}

void Adulto::mostrar()
{
	cout << "--------Adulto---------" << endl;
	Cliente::mostrar();
}

void Adulto::mostrar(Adulto* Adulto)
{
	Adulto->mostrar();
}

string Adulto::toString()
{
	stringstream ss;
	ss << "{tipo:adulto,";
	ss << "ci:" << ci << ",nombre:" << nombre << "}";
	return ss.str();
}


