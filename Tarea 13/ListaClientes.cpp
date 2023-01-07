#include "ListaClientes.h"


ListaClientes::ListaClientes() : clientes()
{

}

ListaClientes::~ListaClientes()
{

}

ListaGenerica<Cliente>& ListaClientes::getClientes()
{
	return clientes;
}

ListaClientes& ListaClientes::getInst()
{
	static ListaClientes instancia;
	return instancia;
}

Cliente* ListaClientes::buscar(int CI)
{
	Cliente* aux = new Adulto(CI);
	if (clientes.buscar(aux) != NULL)
	{
		return clientes.buscar(aux);
	}
	else
	{
		Cliente* aux2 = new Menor(CI);
		return clientes.buscar(aux2);
	}
	
}

/*
string ListaClientes::toString()
{
	stringstream ss;
	ss << "{clientes:[";
	for (int i = 0; i < clientes.getTam(); i++)
	{
		ss << clientes[i]->toString();
		if (i < clientes.getTam() - 1)
		{
			ss << ",";
		}
	}
	ss << "]}";
	return ss.str();
}*/

void ListaClientes::registrar(Adulto* cliente)
{
	Cliente* cliente1 = cliente;
	clientes.registrar(cliente1);
}

void ListaClientes::registrar(Menor* cliente)
{
	Cliente* cliente1 = cliente;
	clientes.registrar(cliente1);
}