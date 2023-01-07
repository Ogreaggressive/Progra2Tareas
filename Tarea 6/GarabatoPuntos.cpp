#include "GarabatoPuntos.h"

GarabatoPuntos::GarabatoPuntos(int id, int cantMaxPuntos): ElementoGrafico(id)
{
	puntos = new Punto * [cantMaxPuntos];
	this->cantMaxPuntos = cantMaxPuntos;
	ind = 0;
}

GarabatoPuntos::~GarabatoPuntos()
{
	for (int i = 0; i < ind; i++)
	{
		delete puntos[i];
	}
	delete[] puntos;
}

void GarabatoPuntos::crearPunto(int id, int x, int y)
{
	if (ind < cantMaxPuntos)
	{
		puntos[ind] = new Punto(id, x, y);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void GarabatoPuntos::dibujar()
{
	for (int i = 0; i < ind; i++)
	{
		puntos[i]->dibujar();
	}
}

void GarabatoPuntos::borrar()
{
	for (int i = 0; i < ind; i++)
	{
			puntos[i]->borrar();
	}
}