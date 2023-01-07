#pragma once

#include "ModSocios.h"
#include "ModVehiculos.h"
#include "ModCompetencias.h"
#include "ModEquipos.h"


class Asociacion
{
private:
	ModSocios* modSocios;
	ModVehiculos* modVehiculos;
	ModCompetencias* modCompetencias;
	ModEquipos* modEquipos;
public:
	Asociacion(int cantMaxSocios, int cantMaxVeh, int cantMaxEquipos);
	~Asociacion();
	ModSocios* getModSocios();
	ModVehiculos* getModVehiculos();
	ModEquipos* getModEquipos();
	ModCompetencias* getModCompetencias();
};

