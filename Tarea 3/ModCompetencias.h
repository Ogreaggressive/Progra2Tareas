#pragma once

#include "Competencia.h"

#define CANT_MAX_COMPETENCIAS 10

class ModCompetencias
{
private:
	Competencia* competencias[CANT_MAX_COMPETENCIAS];
	int ind;
public:
	ModCompetencias();
	~ModCompetencias();
	void registrar(string nombreCompetencia);
	void mostrar();
	Competencia* buscar(string nombre);
	void ordenar();
};

