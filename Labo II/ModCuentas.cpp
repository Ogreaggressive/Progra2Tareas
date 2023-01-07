#include "ModCuentas.h"

ModCuentas::ModCuentas(int cantMaxCuentas)
{
	cuentas = new Cuenta * [cantMaxCuentas];
	this->cantMaxCuentas = cantMaxCuentas;
	ind = 0;
}

ModCuentas::~ModCuentas()
{
	for (int i = 0; i < ind; i++)
	{
		delete cuentas[i];
	}
	delete[] cuentas;
}

void ModCuentas::registrarCajaAhorro(int id, string tipo, int saldo, int cantMaxTransacciones, int mensualidad)
{
	if (ind < cantMaxCuentas)
	{
		cuentas[ind] = new CajaAhorro(id, tipo,saldo,cantMaxTransacciones,mensualidad);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModCuentas::registrarCuentaCorriente(int id, string tipo, int saldo, int cantMaxTransacciones, int mensualidad)
{
	if (ind < cantMaxCuentas)
	{
		cuentas[ind] = new CuentaCorriente(id, tipo, saldo, cantMaxTransacciones, mensualidad);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModCuentas::registrarPlazoFijo(int id, string tipo, int saldo, int cantMaxTransacciones, int fechaIni, int fechaFin, int interes)
{
	if (ind < cantMaxCuentas)
	{
		cuentas[ind] = new CuentaDepositoPlazoFijo(id,tipo,saldo,cantMaxTransacciones,fechaIni,fechaFin,interes);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}



void ModCuentas::aumentar(Cuenta* cuenta)
{
	if (ind < cantMaxCuentas)
	{
		cuentas[ind] = cuenta;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModCuentas::eliminar(Cuenta* cuenta) //al aumentar otra cuenta este sobreescribira el valor de la ultima posicion
{
	int codigo1, codigo2;
	Cuenta* cuentaCambio;
	for (int i = 0; i < ind; i++)
	{
		codigo1 = cuentas[i]->getID();
		codigo2 = cuenta->getID();
		if (codigo1 == codigo2)
		{
			cuentaCambio = cuentas[ind - 1];
			cuentas[ind - 1] = cuentas[i];
			cuentas[i] = cuentaCambio;
			ind = ind - 1;
		}
	}
}

void ModCuentas::mostrar()
{
	cout << "------cuentas-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "cuenta: " << endl;
		cuentas[i]->mostrar();
	}
}

Cuenta* ModCuentas::buscar(int id)
{
	//cout << "Cuentas" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (cuentas[i]->getID() == id)
		{
			return cuentas[i];
		}
	}
}

void ModCuentas::ordenarCuentaAsignado()
{
	int id1, id2;
	Cuenta* cuentaPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			id1 = cuentas[i]->getID();
			id2 = cuentas[j]->getID();
			if (id1 > id2)
			{
				cuentaPasar = cuentas[i];
				cuentas[i] = cuentas[j];
				cuentas[j] = cuentaPasar;
			}
		}
	}
}

