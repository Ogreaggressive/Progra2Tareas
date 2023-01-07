#include "Obra.h"

Obra::Obra(int fecha, int hora, string detalles, string titulo, string director, string compania) : Funcion(fecha, hora, detalles, titulo, director)
{

	this->compania = compania;
}

Obra::~Obra()
{

}

void Obra::mostrar()
{
	cout << "---Obra---" << endl;
	Funcion::mostrar();
	cout << "compania: " << compania << endl;
}

