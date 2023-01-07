#include "Exposicion.h"

Exposicion::Exposicion(int fechaInicio, int tiempo, int cantMaxObras)
{
	this->fechaInicio = fechaInicio;
	this->tiempo = tiempo;
	this->cantMaxObras = cantMaxObras;
	totalVentas = 0;
	obras = new Obra * [cantMaxObras];
	ind = 0;
}

Exposicion::~Exposicion()
{
	for (int i = 0; i < ind; i++)
	{
		delete obras[i];
	}
	delete[] obras;
}

int Exposicion::getFechaInicio()
{
	return fechaInicio;
}

void Exposicion::mostrar()
{
	//cout << "Exposicion:" << endl;
	cout << "fechaInicio: " << fechaInicio << endl;
	cout << "tiempo: " << tiempo << endl;
	cout << "totalvendido: " << totalVentas << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "obra " << i + 1 << endl;
		obras[i]->mostrar();
	}
}


void Exposicion::mostrar(Exposicion* exposicion)
{
	exposicion->mostrar();
}

bool Exposicion::operator==(Exposicion* exposicion)
{
	if (fechaInicio == exposicion->fechaInicio)
	{
		return true;
	}
	return false;
}

bool Exposicion::compFechaAsc(Exposicion* p1, Exposicion* p2)
{
	return p1->fechaInicio < p2->fechaInicio;
}

void Exposicion::registrar(Obra* obra)
{
	if (ind < cantMaxObras)
	{
		obras[ind] = obra;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void Exposicion::ordenar()
{
	string id1, id2;
	Obra* exposicionesPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			id1 = obras[i]->getTitulo();
			id2 = obras[j]->getTitulo();
			if (id1 > id2)
			{
				exposicionesPasar = obras[i];
				obras[i] = obras[j];
				obras[j] = exposicionesPasar;
			}
		}
	}
}

void Exposicion::aumentarTotalVendido(Venta* venta)
{
	if (venta->getObra() == "propia")
	{
		totalVentas = totalVentas + venta->getPrecio();
	}
	else
	{
		totalVentas = totalVentas + 0.2*venta->getPrecio();
	}
	
}