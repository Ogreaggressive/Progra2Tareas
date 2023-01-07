#pragma once

#include "ModCuentas.h"

class Cliente
{
protected:
	string codigo;
	string nombre;
	int fono;
	string direccion;
	ModCuentas* cuentas;
	int cantMaxCuentas;

public:
	Cliente(string codigo, string nombre, int fono, string direccion, int cantMaxCuentas);
	~Cliente();
	string getCodigo();
	ModCuentas* getModCuentas();
	virtual void mostrar();
};

