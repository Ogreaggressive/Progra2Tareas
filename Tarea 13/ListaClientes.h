#pragma once

#include "Cliente.h"
#include "Adulto.h"
#include "Menor.h"
#include "Matriz.h"
#include "ListaGenerica.h"

#define TAM_MAX_CLI 20

class ListaClientes
{
private:
	ListaGenerica<Cliente> clientes;
public:
	static ListaClientes& getInst();
	~ListaClientes();
	ListaGenerica<Cliente>& getClientes();
	string toString();
	Cliente* buscar(int CI);
	void registrar(Adulto* cliente);
	void registrar(Menor* cliente);

private:
	ListaClientes();
};



