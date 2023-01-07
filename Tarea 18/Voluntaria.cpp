#include "Voluntaria.h"

Voluntaria::Voluntaria(string titulo, int fecha,int valoracion, int numAsistentes) : Tarea(titulo, fecha)
{
	this->valoracion = valoracion;
	this->numAsistentes = numAsistentes;
}

Voluntaria::~Voluntaria()
{

}

void Voluntaria::mostrar()
{
	cout << "voluntaria" << endl;
	cout << "valoracion: " << valoracion << endl;
	cout << "numAsistentes" << numAsistentes << endl;
	Tarea::mostrar();
}
