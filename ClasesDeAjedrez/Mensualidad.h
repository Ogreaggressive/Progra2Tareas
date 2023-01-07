#pragma once

#include "Clase.h"

#define CANT_CLASES_MES 10 //clases que hay por mes

class Mensualidad
{
private:
	string mes;
	Clase* clases[CANT_CLASES_MES];
	int ind;
public:
	Mensualidad(string mes);
	~Mensualidad();
	void registrarClase(string pasar, int tiempo, Persona* estudiante);
	void mostrar();
	void mostrarCadaClase();
	int sumarHoras();
	string getNombre();
};

