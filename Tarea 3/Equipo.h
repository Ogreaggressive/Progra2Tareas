#pragma once

#include "Socio.h"
#include "Vehiculo.h"

class Equipo
{
private:
	string nombreEquipo;
	Socio* piloto;
	Socio* copiloto;
	Vehiculo* vehiculo;
	int puntaje;
public:
	Equipo(string nombreEquipo, Socio* piloto, Socio* copiloto, Vehiculo* vehiculo);
	~Equipo();
	void mostrar();
	void darPuntaje(int puntajePiloto, int puntajeCopiloto);
	string getNombre();
	int getPuntaje();
	int conseguirNumeroVehiculo();
};

