#pragma once

#include "Socio.h"


class ModSocios
{
private:
	Socio** socios;
	int cantMaxSocios;
	int ind;
public:
	ModSocios(int cantMaxSocios);
	~ModSocios();
	void registrar(int ci, string nombre);
	Socio* buscar(string nombre);
	void mostrar();
	void ordenar();
};



