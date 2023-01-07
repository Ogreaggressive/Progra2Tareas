#pragma once


#include "Paralelo.h"

#define CANT_PARALELOS 4


class Asignatura
{
private:
	string nombre;
	Paralelo* paralelos[CANT_PARALELOS];
	int ind;
public:
	Asignatura(string nombre);
	~Asignatura();
	void mostrar();
	void registrarParalelo();
	void mostrarParalelos();
	string getNombre();
};

