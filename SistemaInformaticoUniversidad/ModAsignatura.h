#pragma once

#include "Asignatura.h"

#define CANT_ASIGNATURAS 10

class ModAsignatura
{
private:
	Asignatura* asignaturas[CANT_ASIGNATURAS];
	int ind;
public:
	ModAsignatura(); 
	~ModAsignatura(); 
	void registrar(string nombre);
	void mostrar();
	Asignatura* buscar(string nombre);
	Asignatura* ordenar();
};

