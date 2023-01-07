#include "ModSocios.h"

ModSocios::ModSocios(int cantMaxSocios)
{
	socios = new Socio * [cantMaxSocios];
	this->cantMaxSocios = cantMaxSocios;
	ind = 0;
}

ModSocios::~ModSocios()
{
	for (int i = 0; i < ind; i++)
	{
		delete socios[i];
	}
	delete[] socios;
}

void ModSocios::registrar(int ci, string nombre)
{
	if (ind < cantMaxSocios)
	{
		socios[ind] = new Socio(ci, nombre);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}



Socio* ModSocios::buscar(string nombre)
{
	//cout << "Socios" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (socios[i]->getNombre() == nombre)
		{
			return socios[i];
		}
	}
}

void ModSocios::mostrar()
{
	cout << "------Socios-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "socio: " << endl;
		socios[i]->mostrar();
	}
}


void ModSocios::ordenar()
{
	string nombre1, nombre2;
	Socio* socioPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j< ind; j++)
		{
			nombre1=socios[i]->getNombre();
			nombre2 = socios[j]->getNombre();
			if (nombre1.compare(nombre2) > 0)
			{
				socioPasar = socios[i];
				socios[i] = socios[j];
				socios[j] = socioPasar;
			}
		}
	}
}
