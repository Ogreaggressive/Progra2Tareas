#include "ModPersona.h"

ModPersona::ModPersona()
{
	ind=0;
}

ModPersona::~ModPersona()
{
	for (int i = 0; i < ind; i++)
	{
		delete personas[i];
	}
}

void ModPersona::mostrar()
{
	for (int i = 0; i < ind; i++)
	{
		personas[i]->mostrar();
	}
}

void ModPersona::ordenar()
{

}

void ModPersona::registrar(int ci, string nombre)
{
	if (ind < CANT_ESTUDIANTES)
	{
		personas[ind] = new Persona(ci, nombre);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}
