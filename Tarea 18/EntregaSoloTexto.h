#pragma once
#include "Entrega.h"
class EntregaSoloTexto :
    public Entrega
{
private:
	string texto;
public:
	EntregaSoloTexto(Estudiante* autor, int horaEntrega, string texto);
	~EntregaSoloTexto();
	void mostrar();
};

