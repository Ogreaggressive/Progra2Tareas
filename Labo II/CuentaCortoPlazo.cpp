#include "CuentaCortoPlazo.h"

CuentaCortoPlazo::CuentaCortoPlazo(int id, string tipo, int saldo,int cantMaxTransacciones,int mensualidad) : Cuenta(id,tipo,saldo,cantMaxTransacciones)
{
	this->mensualidad = mensualidad;
}

CuentaCortoPlazo::~CuentaCortoPlazo()
{

}
