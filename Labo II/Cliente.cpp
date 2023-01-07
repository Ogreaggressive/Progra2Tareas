#include "Cliente.h"

Cliente::Cliente(string codigo, string nombre, int fono, string direccion, int cantMaxCuentas)
{
	this->codigo = codigo;
	this->nombre = nombre;
	this->fono = fono;
	this->direccion = direccion;
	cuentas = new ModCuentas(cantMaxCuentas);
}

Cliente::~Cliente()
{

}

string Cliente::getCodigo()
{
	return codigo;
}

void Cliente::mostrar()
{
	cout << "codigo: " << codigo << endl;
	cout << "nombre: " << nombre << endl;
	cout << "fono: " << fono << endl;
	cout << "direccion: " << direccion << endl;
}

ModCuentas* Cliente::getModCuentas()
{
	return cuentas;
}