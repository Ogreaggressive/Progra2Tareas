#include "ModEquipos.h"

ModEquipos::ModEquipos(int cantMaxEquipos)
{
	equipos = new Equipo * [cantMaxEquipos];
	this->cantMaxEquipos = cantMaxEquipos;
	ind = 0;
}

ModEquipos::~ModEquipos()
{
	for (int i = 0; i < ind; i++)
	{
		delete equipos[i];
	}
	delete[] equipos;
}

void ModEquipos::registrar(string detalle, Socio* piloto, Socio* copiloto, Vehiculo* vehiculo)
{
	if (ind < cantMaxEquipos)
	{
		equipos[ind] = new Equipo(detalle, piloto, copiloto, vehiculo);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModEquipos::mostrar()
{
	cout << "------Equipos-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "Equipo " <<i+1<<endl;
		equipos[i]->mostrar();
	}
}







