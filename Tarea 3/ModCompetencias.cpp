#include "ModCompetencias.h"

ModCompetencias::ModCompetencias()
{
	ind = 0;
}

ModCompetencias::~ModCompetencias()
{
	for (int i = 0; i < ind; i++)
	{
		delete competencias[i];
	}
	delete[] competencias;
}

void ModCompetencias::registrar(string nombreCompetencia)
{
	if (ind < CANT_MAX_COMPETENCIAS)
	{
		competencias[ind] = new Competencia(nombreCompetencia);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModCompetencias::mostrar()
{
	cout << "---------Competencias----------" << endl;
	for (int i = 0; i < ind; i++)
	{
		competencias[i]->mostrar();
	}
}

Competencia* ModCompetencias::buscar(string nombre)
{
	for (int i = 0; i < ind; i++)
	{
		if (competencias[i]->getNombre() == nombre)
		{
			return competencias[i];
		}
	}
}

void ModCompetencias::ordenar()
{
	string nombre1, nombre2;
	Competencia* competenciaPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			nombre1 = competencias[i]->getNombre();
			nombre2 = competencias[j]->getNombre();
			if (nombre1.compare(nombre2) > 0)
			{
				competenciaPasar = competencias[i];
				competencias[i] = competencias[j];
				competencias[j] = competenciaPasar;
			}
		}
	}
}





