#pragma once

#include "Tarea.h"


class Voluntaria :
	public Tarea
{
private:
	int valoracion;
	int numAsistentes;
public:
	Voluntaria(string titulo, int fecha,int valoracion, int numAsistentes);
	~Voluntaria();
	void mostrar();
};



