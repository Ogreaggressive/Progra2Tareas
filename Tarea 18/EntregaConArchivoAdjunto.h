#pragma once
#include "Entrega.h"

class EntregaConArchivoAdjunto :
    public Entrega
{
private:
	string nombre;
	int peso;
public:
	EntregaConArchivoAdjunto(Estudiante* autor, int horaEntrega, string nombre, int peso);
	~EntregaConArchivoAdjunto();
	void mostrar();
};

