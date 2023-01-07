#include "CajaAhorro.h"

CajaAhorro::CajaAhorro(int id, string tipo, int saldo, int cantMaxTransacciones, int mensualidad) : CuentaCortoPlazo(id,tipo,saldo,cantMaxTransacciones,mensualidad)
{

}

CajaAhorro::~CajaAhorro()
{

}

void CajaAhorro::deposito(Transaccion* transaccion)
{
	saldo = saldo + transaccion->getMonto();
}

void CajaAhorro::retiro(Transaccion* transaccion)
{
	saldo = saldo - transaccion->getMonto();
}

void CajaAhorro::actualizacion()
{
	saldo = saldo - mensualidad;
}

void CajaAhorro::mostrar()
{
	Cuenta::mostrar();
	cout << "costo de mantenimiento mensual: " << mensualidad << endl;
}

