#pragma once

#include "Cuenta.h"
#include "CajaAhorro.h"
#include "CuentaCorriente.h"
#include "CuentaDepositoPlazoFijo.h"

class ModCuentas
{
private:
	Cuenta** cuentas;
	int cantMaxCuentas;
	int ind;
public:
	ModCuentas(int cantMaxCuentas);
	~ModCuentas();
	void registrarCajaAhorro(int id, string tipo, int saldo, int cantMaxTransacciones, int mensualidad);
	void registrarCuentaCorriente(int id, string tipo, int saldo, int cantMaxTransacciones, int mensualidad);
	void registrarPlazoFijo(int id, string tipo, int saldo, int cantMaxTransacciones, int fechaIni, int fechaFin, int interes);
	void aumentar(Cuenta* Cuenta);
	void eliminar(Cuenta* cuenta);
	void mostrar();
	Cuenta* buscar(int id);
	void ordenarCuentaAsignado();
};



