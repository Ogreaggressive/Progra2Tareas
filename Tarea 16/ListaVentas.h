#pragma once

#include "ListaGenerica.h"
#include "Venta.h"

#include <fstream>
#include <mutex>

class ListaVentas
{
private:
	int cont;
	ListaGenerica<Venta> ventas;
	mutex m;
public:
	static ListaVentas& getInst();
	~ListaVentas();
	void CargarDeArchivo();
	void mostrarVentas();
	int getTam();
	Venta* conseguirVenta(int cont);
private:
	ListaVentas();

};

