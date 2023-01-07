#include "SingletonClientes.h"

SingletonClientes::SingletonClientes() :clientes(TAM_MAX_CLI)
{

}

SingletonClientes::~SingletonClientes()
{

}

ArrayGenerico<Persona>& SingletonClientes::getClientes()
{
	return clientes;
}

SingletonClientes& SingletonClientes::getInstancia()
{
	static SingletonClientes instancia;
	return instancia;
}

string SingletonClientes::toString()
{
	stringstream ss;
	ss << "{clientes:[";
	for (int i=0; i<clientes.getTam(); i++)
	{
		ss << clientes[i]->toString();
		if (i<clientes.getTam()-1)
		{
			ss << ",";
		}
	}
	ss << "]}";
	return ss.str();
}