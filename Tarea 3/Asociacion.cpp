#include "Asociacion.h"

Asociacion::Asociacion(int cantMaxSocios, int cantMaxVeh, int cantMaxEquipos)
{
	modSocios= new ModSocios(cantMaxSocios);
	modVehiculos = new ModVehiculos(cantMaxVeh);
	modEquipos = new ModEquipos(cantMaxEquipos);
	modCompetencias = new ModCompetencias();
}

Asociacion::~Asociacion()
{
}

ModSocios* Asociacion::getModSocios()
{
	return modSocios;
}

ModVehiculos* Asociacion::getModVehiculos()
{
	return modVehiculos;
}

ModEquipos* Asociacion::getModEquipos()
{
	return modEquipos;
}

ModCompetencias* Asociacion::getModCompetencias()
{
	return modCompetencias;
}