#include "Universidad.h"

Universidad::Universidad(string nombre)
{
	this->nombre = nombre;
}

Universidad::~Universidad()
{
}

ModAsignatura& Universidad::getModuloAsignaturas()
{
	return moduloAsignatura;
}

ModPersona& Universidad::getModuloPersonas()
{
	return moduloPersona;
}
