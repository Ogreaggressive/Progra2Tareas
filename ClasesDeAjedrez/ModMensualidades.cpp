#include "ModMensualidades.h"

ModMensualidades::ModMensualidades(int cantMaxMensualidades)
{
	mensualidades = new Mensualidad * [cantMaxMensualidades];
	this->cantMaxMensualidades = cantMaxMensualidades;
	ind = 0;
}

ModMensualidades::~ModMensualidades()
{
	for (int i = 0; i < ind; i++)
	{
		delete mensualidades[i];
	}
	delete[] mensualidades;
}

void ModMensualidades::registrar(string mes)
{
	if (ind < cantMaxMensualidades)
	{
		mensualidades[ind] = new Mensualidad(mes);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

Mensualidad* ModMensualidades::buscar(string nombreMensualidad)
{
	for (int i = 0; i < ind; i++)
	{
		if (mensualidades[i]->getNombre() == nombreMensualidad)
		{
			return mensualidades[i];
		}
	}
}

void ModMensualidades::mostrar()
{
	cout << "------Mensualidades-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "Mensualidad " << i + 1 << endl;
		mensualidades[i]->mostrar();
	}
}









