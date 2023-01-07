#pragma once

#include "Hilo.h"
#include "ListaVentas.h"
#include "RegistroVentas.h"
#include "Stock.h"


class Vendedor: public Hilo
{
private:

public:
	Vendedor();
	~Vendedor();
	void mostrar();
	void mostrar(Vendedor* mostrar);
	void agregarVenta(Venta* p1);
	void procesar();
};

