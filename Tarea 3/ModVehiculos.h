#pragma once

#include "Vehiculo.h"

class ModVehiculos
{
private:
	Vehiculo** vehiculos;
	int cantMaxVeh;
	int ind;
public:
	ModVehiculos(int cantMaxVeh);
	~ModVehiculos();
	void registrar(string placa, string modelo, int numPosicion);
	Vehiculo* buscar(int numPosicion);
	void mostrar();
};





