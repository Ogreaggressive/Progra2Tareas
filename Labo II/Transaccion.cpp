#include "Transaccion.h"

Transaccion::Transaccion(string codigo,string tipo, int monto, int fecha)
{
	this->codigo = codigo;
	this->tipo = tipo;
	this->monto = monto;
	this->fecha = fecha;
}

Transaccion::~Transaccion()
{

}

string Transaccion::getCodigo()
{
	return codigo;
}

int Transaccion::getMonto()
{
	return monto;
}


void Transaccion::mostrar()
{
	cout << "codigo: " << codigo << endl;
	cout << "tipo: " << tipo << endl;
	cout << "monto: " << monto << endl;
	cout << "fecha: " << fecha << endl;
}