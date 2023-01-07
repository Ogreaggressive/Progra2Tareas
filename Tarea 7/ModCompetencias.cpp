#include "ModCompetencias.h"

ModCompetencias::ModCompetencias(int cantMaxComp)
{
	competencias = new Competencia * [cantMaxComp];
	this->cantMaxComp = cantMaxComp;
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

/*
void ModCompetencias::registrarSimple(int id, string nombre, int cantMaxTenistas)
{
	if (ind < cantMaxComp)
	{
		competencias[ind] = new Simple(id,nombre,cantMaxTenistas);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}*/

void ModCompetencias::aumentar(Competencia* competencia)
{
	if (ind < cantMaxComp)
	{
		competencias[ind] = competencia;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModCompetencias::mostrar()
{
	cout << "------competencias-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "competencia: " << endl;
		competencias[i]->mostrar();
	}
}

Competencia* ModCompetencias::buscar(int id)
{
	//cout << "Competencias" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (competencias[i]->getID() == id)
		{
			return competencias[i];
		}
	}
}


void ModCompetencias::ordenarCompetenciaAsignado()
{
	int id1, id2;
	Competencia* competenciaPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			id1 = competencias[i]->getID();
			id2 = competencias[j]->getID();
			if (id1 > id2)
			{
				competenciaPasar = competencias[i];
				competencias[i] = competencias[j];
				competencias[j] = competenciaPasar;
			}
		}
	}
}
