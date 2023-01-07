#pragma once

#include "Tarea.h"
#include "Entrega.h"
#include "EntregaConArchivoAdjunto.h"
#include "EntregaSoloTexto.h"
#include "ListaGenerica.h"


class Obligatoria :
    public Tarea
{
private:
	ListaGenerica<Entrega> entregas;
public:
	Obligatoria(string titulo, int fecha);
	~Obligatoria();
	void mostrar();
	void registrar(EntregaConArchivoAdjunto* e1);
	void registrar(EntregaSoloTexto* e1);
};

