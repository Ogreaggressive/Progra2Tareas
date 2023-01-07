#pragma once
#include "Transaccion.h"

class ModTransacciones
{
private:
	Transaccion** transacciones;
	int cantMaxTransacciones;
	int ind;
public:
	ModTransacciones(int cantMaxTransacciones);
	~ModTransacciones();
	void registrar(string codigo, string tipo, int monto, int fecha);
	void mostrar();
	void aumentar(Transaccion* transaccion);
	Transaccion* buscar(string codigo);
	Transaccion* buscarDinero(int monto);
	void ordenarTransaccionAsignado();
};

