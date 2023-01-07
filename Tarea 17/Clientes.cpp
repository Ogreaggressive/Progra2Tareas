#include "Clientes.h"


Clientes::Clientes()
{

}

Clientes::~Clientes()
{

}

ListaGenerica<Cliente>& Clientes::getClientes()
{
	return clientes;
}

Clientes& Clientes::getInst()
{
	static Clientes instancia;
	return instancia;
}

void Clientes::registrar(Cliente* c1)
{
	clientes.registrar(c1);
}

string Clientes::toString()
{
	stringstream ss;
	ordenar();
	Nodo<Cliente>* aux = clientes.getPrimer();
	ss << "[";
	for (int i = 0; i < clientes.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != clientes.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]";
	return ss.str();
}

Cliente* Clientes::buscar(int ci)
{
	Cliente* c1 = new Cliente(ci);
	if (clientes.buscar(c1) == NULL)
	{
		throw InexistenteException();
	}
	return clientes.buscar(c1);
	
}


void Clientes::ordenar()
{
	clientes.ordenar(Cliente::compNomAsc);
}
