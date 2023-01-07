#pragma once

#include "Persona.h"
#include "ModSesiones.h"

#define CANT_ESTUDIANTES 40

class Paralelo
{
private:
	int numero;
	int ind;
	Persona* docente;
	Persona* inscritos[CANT_ESTUDIANTES];
	//modSesiones modSes[10];
public:
	Paralelo(int numero);
	~Paralelo();
	void mostrar();
	void mostrarInscritos();

};

