#pragma once

#include "Obra.h"
#include "Persona.h"

class Venta
{
private:
	Persona* comprador;
	Obra* obra;
	int fecha;
	int precio;
public:
	Venta(Persona* comprador, Obra* obra, int fecha, int precio);
	~Venta();
	int getFecha();
	int getPrecio();
	string getObra();
	void mostrar();
	static void mostrar(Venta* venta);
	bool operator==(Venta* venta);
	static bool compFechaAsc(Venta* p1, Venta* p2);
};

