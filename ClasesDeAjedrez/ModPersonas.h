#pragma once

#include "Persona.h"


class ModPersonas
{
private:
	Persona** personas;
	int cantMaxPersonas;
	int ind;
public:
	ModPersonas(int cantMaxPersonas);
	~ModPersonas();
	void registrar(int ci, string nombre, string nivel);
	Persona* buscar(string nombre);
	void mostrar();
	void ordenar();
};







