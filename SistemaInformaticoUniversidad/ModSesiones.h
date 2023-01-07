#pragma once

#include "Sesion.h"

#define CANT_SESIONES 10

class ModSesiones
{
private:
	Sesion* sesiones[CANT_SESIONES];
public:
	ModSesiones();
	~ModSesiones();
};

