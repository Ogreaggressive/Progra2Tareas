#pragma once

#include "Obra.h"
#include "ArrayGenerico.h"
#include "ListaObras.h"

#define CANT_MAX_OBRAS 20

class Exposicion
{
protected:
	int codigo;
	int fechaInicio;
	int fechaFin;
	ArrayGenerico<Obra> obras;

public:
	Exposicion(int codigo,int fechaInicio, int fechaFin);
	~Exposicion();
	int getFechaInicio();
	void mostrar();
	static void mostrar(Exposicion* exposicion);
	bool operator==(Exposicion* exposicion);
	static bool compFechaAsc(Exposicion* p1, Exposicion* p2);
	void registrar(Obra* obra);
	void ordenar();
	virtual string toString() = 0;
};


