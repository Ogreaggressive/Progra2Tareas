#include "Equipo.h"

Equipo::Equipo(string codReg) : Participante(codReg)
{
	ind = 0;
}

Equipo::~Equipo()
{
	for (int i = 0; i < ind; i++)
	{
		delete tenistas[i];
	}
}

void Equipo::registrarTenista(string codReg, int ci, string nombre, int telefono)
{
	if (ind < 2)
	{
		tenistas[ind] = new Tenista(codReg,ci,nombre,telefono);
		ind++;
	}
	else
	{
		cout << "Error, limite de tenistas excedido!" << endl;
	}
}

void Equipo::aumentarTenista(Tenista* tenista)
{
	if (ind < 2)
	{
		tenistas[ind] = tenista;
		ind++;
	}
	else
	{
		cout << "Error, limite de tenistas excedido!" << endl;
	}
}

void Equipo::mostrarTenistas()
{
	for (int i = 0; i < ind; i++)
	{
		tenistas[i]->mostrar();
	}
}

void Equipo::mostrar()
{
	cout << "------Equipo------" << endl;
	Participante::mostrar();
	cout << "tenistas en el equipo:" << endl;
	mostrarTenistas();
}