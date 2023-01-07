#include "Funcion.h"

Funcion::Funcion(int fecha, int hora, string detalles, string titulo, string director)
{
	this->fecha = fecha;
	this->hora = hora;
	this->detalles = detalles;
	this->titulo = titulo;
	this->director = director;
}


Funcion::~Funcion()
{

}

int Funcion::getFecha()
{
	return fecha;
}

void Funcion::mostrar()
{
	cout << "fecha: " << fecha << endl;
	cout << "hora: " << hora << endl;
	cout << "detalles: " << detalles << endl;
	cout << "titulo: " << titulo << endl;
	cout << "director: " << director << endl;
}

void Funcion::mostrar(Funcion* funcion)
{
	funcion->mostrar();
}

bool Funcion::operator==(Funcion* funcion)
{
	if (fecha == funcion->fecha)
	{
		return true;
	}
	return false;
}

bool Funcion::cmpFechaAsc(Funcion* f1, Funcion* f2)
{
	return f1->fecha > f2->fecha;
}

bool Funcion::cmpTituloAsc(Funcion* f1, Funcion* f2)
{
	return f1->titulo > f2->titulo;
}

bool Funcion::cmpDirectorAsc(Funcion* f1, Funcion* f2)
{
	return f1->director > f2->director;
}

