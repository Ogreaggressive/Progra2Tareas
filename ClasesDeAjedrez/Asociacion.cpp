#include "Asociacion.h"

Asociacion::Asociacion(int cantMaxPersonas, int cantMaxCursos)
{
	modPersonas = new ModPersonas(cantMaxPersonas);
	modCursos = new ModCursos(cantMaxCursos);
	modMensualidades = new ModMensualidades(CANT_MAX_MENSUALIDADES);
}

Asociacion::~Asociacion()
{
}

ModPersonas* Asociacion::getModPersonas()
{
	return modPersonas;
}


ModCursos* Asociacion::getModCursos()
{
	return modCursos;
}

ModMensualidades* Asociacion::getModMensualidades()
{
	return modMensualidades;
}


