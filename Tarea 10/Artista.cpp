#include "Artista.h"

Artista::Artista(int ci, string nombre, string tecnica) : Persona(ci,nombre)
{
	this->tecnica = tecnica;
	obras = new Obra * [CANT_MAX_OBRAS];
	ind = 0;
}

Artista::~Artista()
{
	for (int i = 0; i < ind; i++)
	{
		delete obras[i];
	}
	delete[] obras;
}

void Artista::mostrar()
{
	cout << "--------Artista---------" << endl;
	Persona::mostrar();
	cout << "tecnica: " << tecnica << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "obra " << i + 1 << endl;
		obras[i]->mostrar();
	}
}

void Artista::mostrar(Artista* artista)
{
	artista->mostrar();
}
bool Artista::compTecAsc(Artista* t1, Artista* t2)
{
	return t1->tecnica < t2->tecnica;
}

void Artista::registrarObra(Obra* obra)
{
	if (ind < CANT_MAX_OBRAS)
	{
		obras[ind] = obra;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}



