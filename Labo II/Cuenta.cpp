#include "Cuenta.h"

Cuenta::Cuenta(int id, string tipo, int saldo, int cantMaxTransacciones)
{
	this->id = id;
	this->tipo = tipo;
	this->saldo = saldo;
	transacciones = new ModTransacciones(cantMaxTransacciones);
	//indTransacciones = 0;
}

Cuenta::~Cuenta()
{

}

int Cuenta::getID()
{
	return id;
}


ModTransacciones* Cuenta::getModTransacciones()
{
	return transacciones;
}

void Cuenta::mostrar()
{
	cout << "ID cuenta: " << id << endl;
	cout << "tipo: " << tipo << endl;
	cout << "saldo: " << saldo << endl;
}
