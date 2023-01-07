#pragma once

#include "Cliente.h"


class Funcion
{
private:
	int fecha;
	int hora;
	string detalles;
	string titulo;
	string director;
public:
	Funcion(int fecha, int hora, string detalles, string titulo, string director);
	~Funcion();
	int getFecha();
	virtual void mostrar();
	static void mostrar(Funcion* funcion);
	bool operator==(Funcion* funcion);
	static bool cmpFechaAsc(Funcion* f1, Funcion* f2);
	static bool cmpDirectorAsc(Funcion* f1, Funcion* f2);
	static bool cmpTituloAsc(Funcion* f1, Funcion* f2);
};

