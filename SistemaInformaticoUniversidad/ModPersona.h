#pragma once

#include "Persona.h"

#define CANT_ESTUDIANTES 40

class ModPersona
{
private:
	Persona* personas[CANT_ESTUDIANTES];
	int ind;
public:
	ModPersona(); //Constructor
	~ModPersona(); //Destructor
	void mostrar();
	void ordenar();
	void registrar(int ci, string nombre);
};

