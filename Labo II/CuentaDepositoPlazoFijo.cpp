#include "CuentaDepositoPlazoFijo.h"

CuentaDepositoPlazoFijo::CuentaDepositoPlazoFijo(int id, string tipo, int saldo, int cantMaxTransacciones,int fechaIni, int fechaFin, int interes) : Cuenta(id, tipo, saldo,cantMaxTransacciones)
{
	this->fechaIni = fechaIni;
	this->fechaFin = fechaFin;
	this->interes = interes;
}

CuentaDepositoPlazoFijo::~CuentaDepositoPlazoFijo()
{

}

void CuentaDepositoPlazoFijo::actualizacion()
{
	saldo = saldo+interes;
}

