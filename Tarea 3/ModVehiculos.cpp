#include "ModVehiculos.h"

ModVehiculos::ModVehiculos(int cantMaxVeh)
{
	vehiculos = new Vehiculo * [cantMaxVeh];
	this->cantMaxVeh = cantMaxVeh;
	ind = 0;
}

ModVehiculos::~ModVehiculos()
{
	for (int i = 0; i < ind; i++)
	{
		delete vehiculos[i];
	}
	delete[] vehiculos;
}

void ModVehiculos::registrar(string placa, string modelo, int numAsignado)
{
	if (ind < cantMaxVeh)
	{
		vehiculos[ind] = new Vehiculo(placa, modelo, numAsignado);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

Vehiculo* ModVehiculos::buscar(int numAsignado)
{
	//cout << "Vehiculos" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (vehiculos[i]->getnumAsignado() == numAsignado)
		{
			return vehiculos[i];
		}
	}
}

void ModVehiculos::mostrar()
{
	cout << "------vehiculos-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "vehiculo: " << endl;
		vehiculos[i]->mostrar();
	}
}
