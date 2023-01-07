#pragma once

#include "Obra.h"
#include "Venta.h"

class Exposicion
{
private:
	int fechaInicio;
	int tiempo;
	int cantMaxObras;
	Obra** obras;
	float totalVentas;
	int ind;
public:
	Exposicion(int fechaInicio, int tiempo, int cantMaxObras);
	~Exposicion();
	int getFechaInicio();
	void mostrar();
	static void mostrar(Exposicion* exposicion);
	bool operator==(Exposicion* exposicion);
	static bool compFechaAsc(Exposicion* p1, Exposicion* p2);
	void registrar(Obra* obra);
	void ordenar();
	void aumentarTotalVendido(Venta* venta);
};

