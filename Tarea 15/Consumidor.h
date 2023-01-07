#pragma once

#include "ArrayGenerico.h"
#include "Producto.h"
#include "ContenedorDeDatos.h"
#include "Hilo.h"

class Consumidor: public Hilo
{
private:

public:
	Consumidor();
	~Consumidor();
	void mostrar();
	void mostrar(Consumidor* mostrar);
	void agregarProducto(Producto* p1);
	void procesar();
};

