#pragma once

#include "Exposicion.h"
#include "ExposicionInvitados.h"
#include "ExposicionPropia.h"
#include "ListaGenerica.h"

class ListaExposiciones
{
private:
	ListaGenerica<Exposicion> exposiciones;
public:
	~ListaExposiciones();
	ListaExposiciones();
	ListaGenerica<Exposicion>& getExposiciones();
	string toString();
	void registrar(ExposicionPropia* ep1);
	void registrar(ExposicionInvitados* ep1);
	void ordenar();
};





