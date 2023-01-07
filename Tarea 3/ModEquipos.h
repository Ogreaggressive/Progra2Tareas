#pragma once

#include "Equipo.h"

class ModEquipos
{
private:
	Equipo** equipos;
	int cantMaxEquipos;
	int ind;
public:
	ModEquipos(int cantMaxEquipos);
	~ModEquipos();
	void registrar(string detalle, Socio* piloto, Socio* copiloto, Vehiculo* vehiculo);
	void mostrar();
};



