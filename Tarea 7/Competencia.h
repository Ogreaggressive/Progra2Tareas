#pragma once

#include "Participante.h"

class Competencia
{
protected:
	int id;
	string nombre;
public:
	Competencia(int id,string nombre);
	~Competencia();
	void mostrar();
	int getID();
	virtual void ordenar() = 0;
	virtual void registrarGanadores(string codReg) = 0;
};

