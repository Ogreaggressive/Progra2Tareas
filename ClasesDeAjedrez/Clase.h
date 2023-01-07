#pragma once

#include "Persona.h"

class Clase
{
private:
	string pasar;
	int tiempo;
	Persona* estudiante;
public:
	Clase(string pasar, int tiempo, Persona* estudiante);
	~Clase();
	void mostrar(int clase);
	string pasoClases();
	int tiempoPasado();

};

