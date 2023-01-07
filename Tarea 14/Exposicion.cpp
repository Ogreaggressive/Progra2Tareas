#include "Exposicion.h"

Exposicion::Exposicion(int codigo, int fechaInicio, int fechaFin) : obras(CANT_MAX_OBRAS)
{
	this->codigo = codigo;
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
}

Exposicion::~Exposicion()
{

}

int Exposicion::getFechaInicio()
{
	return fechaInicio;
}

void Exposicion::mostrar()
{
	//cout << "Exposicion:" << endl;
	cout << "fechaInicio: " << fechaInicio << endl;
	cout << "fechaFin: " << fechaFin << endl;
}


void Exposicion::mostrar(Exposicion* exposicion)
{
	exposicion->mostrar();
}

bool Exposicion::operator==(Exposicion* exposicion)
{
	if (fechaInicio == exposicion->fechaInicio)
	{
		return true;
	}
	return false;
}

bool Exposicion::compFechaAsc(Exposicion* p1, Exposicion* p2)
{
	return p1->fechaInicio > p2->fechaInicio;
}

/*
void Exposicion::registrar(Obra* obra)
{
	if (ind < cantMaxObras)
	{
		obras[ind] = obra;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}*/

