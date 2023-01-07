#pragma once

#include "ModPersonas.h"
#include "ModCursos.h"
#include "ModMensualidades.h"

#define CANT_MAX_MENSUALIDADES 12

class Asociacion
{
private:
	ModPersonas* modPersonas;
	ModCursos* modCursos;
	ModMensualidades* modMensualidades;
public:
	Asociacion(int cantMaxPersonas, int cantMaxCursos);
	~Asociacion();
	ModPersonas* getModPersonas();
	ModCursos* getModCursos();
	ModMensualidades* getModMensualidades();
};




