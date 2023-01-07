#include "GarabatoLineas.h"

GarabatoLineas::GarabatoLineas(int id, int cantMaxLineas) : ElementoGrafico(id)
{
	lineas = new Linea * [cantMaxLineas];
	this->cantMaxLineas = cantMaxLineas;
	ind = 0;
}

GarabatoLineas::~GarabatoLineas()
{
	for (int i = 0; i < ind; i++)
	{
		delete lineas[i];
	}
	delete[] lineas;
}

void GarabatoLineas::crearLinea(int id, int x, int y, int tam, string orientacion)
{
	if (ind < cantMaxLineas)
	{
		lineas[ind] = new Linea(id, x, y,tam,orientacion);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void GarabatoLineas::dibujar()
{
	for (int i = 0; i < ind; i++)
	{
		lineas[i]->dibujar();
	}
}

void GarabatoLineas::borrar()
{
	for (int i = 0; i < ind; i++)
	{
		lineas[i]->borrar();
	}
}