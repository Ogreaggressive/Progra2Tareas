#pragma once

#include "Persona.h"


class Sesion
{
private:
	int fecha[3];
	Persona* asistentes[];
	
public:
	Sesion(); 
	~Sesion();
};

