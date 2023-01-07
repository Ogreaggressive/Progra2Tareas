#pragma once

#include "Persona.h"
#include "ArrayGenerico.h"

#define TAM_MAX_CLI 20

class SingletonClientes
{
private:
	ArrayGenerico<Persona> clientes;
public:
	static SingletonClientes& getInstancia();
	~SingletonClientes();
	ArrayGenerico<Persona>& getClientes();
	string toString();
private:
	SingletonClientes();
};

