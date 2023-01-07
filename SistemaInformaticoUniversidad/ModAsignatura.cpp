#include "ModAsignatura.h"

ModAsignatura::ModAsignatura()
{
	ind = 0;
}

ModAsignatura::~ModAsignatura()
{
	for (int i = 0; i < ind; i++)
	{
		delete asignaturas[i];
	}
}

void ModAsignatura::registrar(string nombre)
{
	if (ind < CANT_ASIGNATURAS)
	{
		asignaturas[ind] = new Asignatura(nombre);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModAsignatura::mostrar()
{
	for (int i = 0; i < ind; i++)
	{
		asignaturas[i]->mostrar();
	}
}

Asignatura* ModAsignatura::buscar(string nombre)
{
	for (int i = 0; i < ind; i++)
	{
		if (asignaturas[i]->getNombre() == nombre)
		{
			return asignaturas[i];
		}
	}
}
