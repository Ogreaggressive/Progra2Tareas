#include "ModPersonas.h"

ModPersonas::ModPersonas(int cantMaxPersonas)
{
	personas = new Persona * [cantMaxPersonas];
	this->cantMaxPersonas = cantMaxPersonas;
	ind = 0;
}

ModPersonas::~ModPersonas()
{
	for (int i = 0; i < ind; i++)
	{
		delete personas[i];
	}
	delete[] personas;
}

void ModPersonas::registrar(int ci, string nombre, string nivel)
{
	if (ind < cantMaxPersonas)
	{
		personas[ind] = new Persona(ci, nombre,nivel);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}



Persona* ModPersonas::buscar(string nombre)
{
	//cout << "Personas" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (personas[i]->getNombre() == nombre)
		{
			return personas[i];
		}
	}
}

void ModPersonas::mostrar()
{
	cout << "------Personas-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "persona: " << endl;
		personas[i]->mostrar();
	}
}


void ModPersonas::ordenar()
{
	string nombre1, nombre2;
	Persona* personaPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			nombre1 = personas[i]->getNivel();
			nombre2 = personas[j]->getNivel();
			if (nombre1.compare(nombre2) > 0)
			{
				personaPasar = personas[i];
				personas[i] = personas[j];
				personas[j] = personaPasar;
			}
		}
	}
}


