#pragma once

#include "Cliente.h"
#include "ListaGenerica.h"

#include "InexistenteException.h"

class Clientes
{
private:
	ListaGenerica<Cliente> clientes;
public:
	static Clientes& getInst();
	~Clientes();
	ListaGenerica<Cliente>& getClientes();
	string toString();
	//void registrar(int codigo, string especie, int edad, bool vuela);
	//void registrar(int codigo, string especie, int edad, int peso);
	void registrar(Cliente* c1);
	void ordenar();
	Cliente* buscar(int CI);
private:
	Clientes();
};

