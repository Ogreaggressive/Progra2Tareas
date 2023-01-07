#include "ListaObras.h"


ListaObras::ListaObras() : obras()
{

}

ListaObras::~ListaObras()
{

}

ListaGenerica<Obra>& ListaObras::getObras()
{
	return obras;
}

ListaObras& ListaObras::getInst()
{
	static ListaObras instancia;
	return instancia;
}


string ListaObras::toString()
{
	stringstream ss;
	//obras.ordenar(Obra::compAutorAsc);
	Nodo<Obra>* aux = obras.getPrimer();
	ss << "{obras:[";
	for (int i = 0; i < obras.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != obras.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void ListaObras::registrar(int codigo, string titulo, string autor, int alto, int ancho)
{
	Pintura* pintura = new Pintura(codigo,titulo,autor,alto,ancho);
	Obra* obra1 = pintura;
	obras.registrar(obra1);
}

void ListaObras::registrar(int codigo, string titulo, string autor, int peso)
{
	Escultura* escultura = new Escultura(codigo, titulo, autor,peso);
	Obra* obra1 = escultura;
	obras.registrar(obra1);
}

void ListaObras::ordenar()
{
	obras.ordenar(Obra::compAutorAsc);
}