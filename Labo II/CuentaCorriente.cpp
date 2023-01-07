#include "CuentaCorriente.h"

CuentaCorriente::CuentaCorriente(int id, string tipo, int saldo,int cantMaxTransacciones,int mensualidad) : CuentaCortoPlazo(id, tipo, saldo,cantMaxTransacciones,mensualidad)
{

}

CuentaCorriente::~CuentaCorriente()
{

}

void CuentaCorriente::deposito(Transaccion* transaccion)
{
	saldo = saldo + transaccion->getMonto();
}

void CuentaCorriente::retiro(Transaccion* transaccion)
{
	saldo = saldo + transaccion->getMonto();
}

void CuentaCorriente::actualizacion()
{
	saldo = saldo + mensualidad;
}

void CuentaCorriente::mostrar()
{
	CuentaCortoPlazo::mostrar();
	cout << "interes mensual: " << mensualidad << endl;
}


