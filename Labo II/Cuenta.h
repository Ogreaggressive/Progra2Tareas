#pragma once

#include "ModTransacciones.h"

class Cuenta
{
protected:
	int id;
	string tipo;
	int saldo;
	ModTransacciones* transacciones;
	int cantMaxTransacciones;
	//Transaccion** transacciones;
	//int indTransacciones;
public:
	Cuenta(int id, string tipo, int saldo, int cantMaxTransacciones);
	~Cuenta();
	int getID();
	virtual void actualizacion() = 0;
	ModTransacciones* getModTransacciones();
	//para ver por partes
	void mostrar();
};

