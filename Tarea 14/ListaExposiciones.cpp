#include "ListaExposiciones.h"


ListaExposiciones::ListaExposiciones() : exposiciones()
{

}

ListaExposiciones::~ListaExposiciones()
{

}

ListaGenerica<Exposicion>& ListaExposiciones::getExposiciones()
{
	return exposiciones;
}

string ListaExposiciones::toString()
{
	stringstream ss;
	Nodo<Exposicion>* aux = exposiciones.getPrimer();
	ss << "{exposiciones:[";
	for (int i = 0; i < exposiciones.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != exposiciones.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void ListaExposiciones::registrar(ExposicionPropia* ep)
{
	Exposicion* Exposicion1 = ep;
	exposiciones.registrar(Exposicion1);
}


void ListaExposiciones::registrar(ExposicionInvitados* ei)
{
	Exposicion* Exposicion1 = ei;
	exposiciones.registrar(Exposicion1);
}

void ListaExposiciones::ordenar()
{
	exposiciones.ordenar(Exposicion::compFechaAsc);
}