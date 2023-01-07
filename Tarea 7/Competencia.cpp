#include "Competencia.h"

Competencia::Competencia(int id, string nombre)
{
	this->id = id;
	this->nombre = nombre;
}

Competencia::~Competencia()
{

}

int Competencia::getID()
{
	return id;
}

void Competencia::mostrar()
{
	cout << "id: " << id << endl;
	cout << "nombre: " << nombre << endl;
}

