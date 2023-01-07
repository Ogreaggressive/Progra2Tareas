#include "SistemaBancario.h"

SistemaBancario::SistemaBancario(int cantMaxClientes)
{
	modClientes = new ModClientes(cantMaxClientes);
}

SistemaBancario::~SistemaBancario()
{
}


ModClientes* SistemaBancario::getModClientes()
{
	return modClientes;
}
