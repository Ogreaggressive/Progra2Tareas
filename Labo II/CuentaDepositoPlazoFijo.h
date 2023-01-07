#pragma once
#include "Cuenta.h"
class CuentaDepositoPlazoFijo :
    public Cuenta
{
protected:
    int fechaIni;
    int fechaFin;
    int interes;
public:
    CuentaDepositoPlazoFijo(int id, string tipo, int saldo, int cantMaxTransacciones,int fechaIni, int fechaFin, int interes);
    ~CuentaDepositoPlazoFijo();
    void actualizacion();
};



