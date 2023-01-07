#pragma once

#include <mutex>
#include <fstream>

#include "ListaGenerica.h"
#include "Producto.h"
#include "Venta.h"

using namespace std;

class Stock
{
private:
	ListaGenerica<Producto> productos;
	mutex m;
public:
	static Stock& getInst();
	~Stock();
	void cambiarContador(int valor);
	void cargarDeArchivo();
	void quitarStock(Venta* v1);
	void stockFinal();
private:
	Stock();
};

