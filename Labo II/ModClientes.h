#pragma once

#include "Cliente.h"

class ModClientes
{
private:
	Cliente** clientes;
	int cantMaxClientes;
	int ind;
public:
	ModClientes(int cantMaxClientes);
	~ModClientes();
	void registrar(string codigo, string nombre, int fono, string direccion, int cantMaxCuentas);
	void aumentar(Cliente* cliente);
	void eliminar(Cliente* cliente);
	void mostrar();
	Cliente* buscar(string codigo);
	void ordenarClienteAsignado();
};

