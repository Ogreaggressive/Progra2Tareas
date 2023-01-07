#pragma once

#include "ModAsignatura.h"
#include "ModPersona.h"


class Universidad
{
private:
	string nombre;
	ModAsignatura moduloAsignatura;
	ModPersona moduloPersona;
public:
	Universidad(string nombre);
	~Universidad();
	ModAsignatura& getModuloAsignaturas();
	ModPersona& getModuloPersonas();
};

