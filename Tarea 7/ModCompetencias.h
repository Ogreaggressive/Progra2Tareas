#pragma once

#include "Competencia.h"
#include "Simple.h"
#include "Double.h"

class ModCompetencias
{
private:
	Competencia** competencias;
	int cantMaxComp;
	int ind;
public:
	ModCompetencias(int cantMaxComp);
	~ModCompetencias();
	//void registrarSimple(int id, string nombre, int cantMaxTenistas);
	void aumentar(Competencia* competencia);
	void mostrar();
	Competencia* buscar(int id);
	void ordenarCompetenciaAsignado();
};









