#pragma once

#include "Mensualidad.h"


class ModMensualidades
{
private:
	Mensualidad** mensualidades;
	int cantMaxMensualidades;
	int ind;
public:
	ModMensualidades(int cantMaxMensualidades);
	~ModMensualidades();
	void registrar(string mes);
	void mostrar();
	Mensualidad* buscar(string nombreMensualidad);
};

