#include "Double.h"

Double::Double(int id, string nombre, int cantMaxEquipos) : Competencia(id, nombre)
{
	equipos = new Equipo * [cantMaxEquipos];
	this->cantMaxEquipos = cantMaxEquipos;
	ind = 0;
}

Double::~Double()
{
	for (int i = 0; i < ind; i++)
	{
		delete equipos[i];
	}
}

void Double::registrarEquipo(string codReg)
{
	if (ind < cantMaxEquipos)
	{
		equipos[ind] = new Equipo(codReg);
		ind++;
	}
	else
	{
		cout << "Error, limite de equipos excedido!" << endl;
	}
}

void Double::aumentarEquipo(Equipo* equipo)
{
	if (ind < cantMaxEquipos)
	{
		equipos[ind] = equipo;
		ind++;
	}
	else
	{
		cout << "Error, limite de equipos excedido!" << endl;
	}
}

void Double::mostrarEquipos()
{
	for (int i = 0; i < ind; i++)
	{
		equipos[i]->mostrar();
	}
}

void Double::mostrar()
{
	cout << "------Double------" << endl;
	Competencia::mostrar();
	cout << "///////////equipos//////////:" << endl;
	mostrarEquipos();
}

void Double::ordenar()
{
	string codReg1, codReg2;
	Equipo* equipoPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			codReg1 = equipos[i]->getcodReg();
			codReg2 = equipos[j]->getcodReg();
			if (codReg1 > codReg2)
			{
				equipoPasar = equipos[i];
				equipos[i] = equipos[j];
				equipos[j] = equipoPasar;
			}
		}
	}
}

void Double::registrarGanadores(string codReg)
{
	for (int i = 0; i < ind; i++)
	{
		if (equipos[i]->getcodReg() == codReg)
		{
			cout << "el ganador de la competencia es: " << endl;
			equipos[i]->mostrar();
		}
	}
}