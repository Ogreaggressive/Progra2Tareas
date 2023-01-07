#include "Asignatura.h"

Asignatura::Asignatura(string nombre)
{
	this->nombre = nombre;
	ind = 0;
}

Asignatura::~Asignatura()
{
	for (int i = 0; i < ind; i++)
	{
		delete paralelos[i];
	}
}

void Asignatura::registrarParalelo()
{
	if (ind < CANT_PARALELOS)
	{
		paralelos[ind] = new Paralelo(ind+1);
		ind++;
	}
	else
	{
		cout << "Error, limite de paralelos excedido!" << endl;
	}
}

void Asignatura::mostrarParalelos()
{
	for (int i = 0; i < ind; i++)
	{
		paralelos[i]->mostrar();
	}
}

void Asignatura::mostrar()
{
	cout << "-----Asignatura-------" << endl;
	cout << "nombre: " << nombre << endl;
	mostrarParalelos();
}

string Asignatura::getNombre()
{
	return nombre;
}
