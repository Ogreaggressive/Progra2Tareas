#pragma once
#include "ArrayGenerico.h"
#include "Producto.h"
#include "ContenedorDeDatos.h"
#include "Hilo.h"

class Productor :
	public Hilo
{
private:
	
public:
	Productor();
	~Productor();
	void mostrar();
	void mostrar(Productor* mostrar);
	void agregarProducto(Producto* p1);
	void procesar();
};

