#include "Empresa.h"

Empresa::Empresa(string codigo, string nombre, int fono, string direccion, int cantMaxCuentas,int NIT, string tipo) : Cliente(codigo, nombre, fono, direccion,cantMaxCuentas)
{
	this->NIT = NIT;
	this->tipo = tipo;
}

Empresa::~Empresa()
{

}

void Empresa::mostrar()
{
	cout << "---Empresa---" << endl;
	Cliente::mostrar();
	cout << "NIT: " << NIT << endl;
	cout << "tipo: " << tipo << endl;
}
