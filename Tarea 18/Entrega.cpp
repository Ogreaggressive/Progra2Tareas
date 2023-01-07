#include "Entrega.h"

Entrega::Entrega(Estudiante* autor, int horaEntrega)
{
	this->autor = autor;
	this->horaEntrega = horaEntrega;
}

Entrega::~Entrega()
{

}

void Entrega::mostrar()
{
	autor->mostrar();
	cout << "horaEntrega: " << horaEntrega << endl;
}

void Entrega::mostrar(Entrega* t1)
{
	t1->mostrar();
}

bool Entrega::operator==(Entrega* entrega)
{
	if (autor == entrega->autor)
	{
		return true;
	}
	return false;
}

bool Entrega::compHoraAsc(Entrega* p1, Entrega* p2)
{
	return p1->horaEntrega > p2->horaEntrega;
}
