#pragma once

#include "Obra.h"
#include "Pintura.h"
#include "Escultura.h"
#include "ListaGenerica.h"

class ListaObras
{
private:
	ListaGenerica<Obra> obras;
public:
	static ListaObras& getInst();
	~ListaObras();
	ListaGenerica<Obra>& getObras();
	string toString();
	void registrar(int codigo, string titulo, string autor, int alto, int ancho);
	void registrar(int codigo, string titulo, string autor, int peso);
	void ordenar();
	Obra* buscar(int CI);

private:
	ListaObras();
};




