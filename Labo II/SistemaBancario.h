#pragma once

#include "ModClientes.h"
#include "ModCuentas.h"

class SistemaBancario
{
private:
	ModClientes* modClientes;
public:
	SistemaBancario(int cantMaxClientes);
	~SistemaBancario();
	ModClientes* getModClientes();
};

