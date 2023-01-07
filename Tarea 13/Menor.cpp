#include "Menor.h"

Menor::Menor(int ci, string nombre) : Cliente(ci, nombre)
{

}

Menor::Menor(int ci) : Cliente(ci)
{

}

Menor::~Menor()
{

}

void Menor::mostrar()
{
	cout << "--------Menor---------" << endl;
	Cliente::mostrar();
}

void Menor::mostrar(Menor* Menor)
{
	Menor->mostrar();
}

string Menor::toString()
{
	stringstream ss;
	ss << "{tipo:menor,";
	ss << "ci:" << ci << ",nombre:" << nombre << "}";
	return ss.str();
}





