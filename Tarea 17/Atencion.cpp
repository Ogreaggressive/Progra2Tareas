#include "Atencion.h"

Atencion::Atencion(int codigo, string descripcion, int costo)
{
	this->codigo = codigo;
	this->descripcion = descripcion;
	this->costo = costo;
}

Atencion::Atencion(int codigo)
{
	this->codigo = codigo;
}

Atencion::~Atencion()
{

}

int Atencion::getCodigo()
{
	return codigo;
}


void Atencion::mostrar()
{
	//cout << "Atencion:" << endl;
	cout << "id:" << codigo << endl;
	cout << "descripcion:" << descripcion << endl;
	cout << "costo:" << costo << endl;

}


void Atencion::mostrar(Atencion* Atencion)
{
	Atencion->mostrar();
}

bool Atencion::operator==(Atencion* Atencion)
{
	if (codigo == Atencion->codigo)
	{
		return true;
	}
	return false;
}

bool Atencion::cmpCodigo(Atencion* p1, Atencion* p2)
{
	return p1->codigo > p2->codigo;
}


