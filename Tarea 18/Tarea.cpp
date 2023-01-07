#include "Tarea.h"

Tarea::Tarea(string titulo, int fecha)
{
	this->titulo = titulo;
	this->fecha = fecha;
}

Tarea::~Tarea()
{

}

void Tarea::mostrar()
{
	cout << "titulo: " << titulo << endl;
	cout << "fecha: " << fecha << endl;
}

void Tarea::mostrar(Tarea* t1)
{
	t1->mostrar();
}

bool Tarea::operator==(Tarea* Tarea)
{
	if (titulo == Tarea->titulo)
	{
		return true;
	}
	return false;
}

bool Tarea::compFechaAsc(Tarea* p1, Tarea* p2)
{
	return p1->fecha > p2->fecha;
}
