#pragma once

#include "Estudiante.h"


class Entrega
{
protected:
	Estudiante* autor;
	int horaEntrega;
public:
	Entrega(Estudiante* autor, int horaEntrega);
	~Entrega();
	void mostrar();
	static void mostrar(Entrega* t1);
	bool operator==(Entrega* estudiante);
	static bool compHoraAsc(Entrega* p1, Entrega* p2);
};

