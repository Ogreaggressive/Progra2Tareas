#pragma once

#include "Stock.h"
#include "ListaVentas.h"
#include "RegistroVentas.h"

class Supermercado
{
private:

public:
	Supermercado();
	~Supermercado();
	int iniciarVendedores();
	void generarReporte();
};

