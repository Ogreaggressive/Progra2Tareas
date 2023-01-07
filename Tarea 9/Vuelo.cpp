#include "Vuelo.h"

Vuelo::Vuelo(int codigo)
{
	this->codigo = codigo;
}

Vuelo::Vuelo(int codigo, string origen, string destino, long fecha)
{
	this->codigo = codigo;
	this->origen = origen;
	this->destino = destino;
	this->fecha = fecha;
}

Vuelo::~Vuelo()
{

}


void Vuelo::mostrar()
{
	cout << "Vuelo:" << endl;
	cout << "codigo: " << codigo << endl;
	cout << "origen: " << origen << endl;
	cout << "destino: " << destino << endl;
	cout << "fecha: " << fecha << endl;
}

void Vuelo::mostrar(Vuelo* vuelo)
{
	vuelo->mostrar();
}


bool Vuelo::operator==(Vuelo* Vuelo)
{
	return codigo == Vuelo->codigo;
}

bool Vuelo::cmpFechaAsc(Vuelo* v1, Vuelo* v2)
{
	return v1->fecha > v2->fecha;
}
