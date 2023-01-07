#pragma once

#include "Persona.h"
#include "Paquete.h"
#include "ArrayGenerico.h"
#include "SingletonClientes.h"
#include "SingletonPaquetes.h"

class Vuelo
{
private:
	int codigo;
	string origen;
	string destino;
	long fecha;
public:
	Vuelo(int codigo);
	Vuelo(int codigo, string origen, string destino, long fecha);
	~Vuelo();
	int getCodigo();
	virtual void mostrar();
	static void mostrar(Vuelo* Vuelo);
	bool operator==(Vuelo* Vuelo);
	static bool cmpFechaAsc(Vuelo* v1, Vuelo* v2);
	virtual void registrar() = 0;
};

